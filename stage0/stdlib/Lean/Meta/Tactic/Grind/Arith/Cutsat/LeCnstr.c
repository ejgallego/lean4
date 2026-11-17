// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.Cutsat.LeCnstr
// Imports: public import Lean.Meta.Tactic.Grind.Arith.Cutsat.Util import Init.Data.Int.OfNat import Lean.Meta.Tactic.Simp.Arith.Int import Lean.Meta.Tactic.Grind.Arith.Cutsat.Var import Lean.Meta.Tactic.Grind.Arith.Cutsat.Proof import Lean.Meta.Tactic.Grind.Arith.Cutsat.Nat import Lean.Meta.Tactic.Grind.Arith.Cutsat.Norm import Lean.Meta.Tactic.Grind.Arith.Cutsat.CommRing
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
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg();
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Int_Internal_Linear_instBEqPoly_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_int_neg(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
lean_object* l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_cutsat_assert_eq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentArray_default___redArg();
lean_object* l_Lean_Meta_Grind_getConfig___redArg(lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Int_Internal_Linear_Poly_normCommRing_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_cutsat_assert_le(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getGeneration___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_toLinearExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Int_Internal_Linear_Expr_norm(lean_object*);
lean_object* l_Int_Internal_Linear_Poly_mul(lean_object*, lean_object*);
lean_object* l_Int_Internal_Linear_Poly_addConst(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Meta_Structural_isInstLEInt___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getIntValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_toPoly_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_natToInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIntLit(lean_object*);
lean_object* l_Lean_mkIntAdd(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqLBool_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg(lean_object*, lean_object*);
lean_object* l_Int_Internal_Linear_Poly_updateOccs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_setInconsistent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___redArg(lean_object*, lean_object*);
lean_object* l_Int_Internal_Linear_Poly_gcdCoeffs_x27(lean_object*);
lean_object* l_Int_Internal_Linear_Poly_div(lean_object*, lean_object*);
uint8_t l_Int_Internal_Linear_Poly_isSorted(lean_object*);
lean_object* l_Int_Internal_Linear_Poly_norm(lean_object*);
lean_object* l_Int_Internal_Linear_Poly_findVarToSubst___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Int_Internal_Linear_Poly_coeff(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_Internal_Linear_Poly_combine(lean_object*, lean_object*);
uint8_t l_Int_Internal_Linear_Poly_isUnsatLe(lean_object*);
uint8_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isTrivial(lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_markStored___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_norm_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_norm(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lia"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "subst"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 23, 180, 58, 194, 72, 175, 153)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 228, 18, 139, 25, 122, 57, 58)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__6;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__8;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Int_Internal_Linear_Poly_isNegEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_isNegEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__0;
static lean_once_cell_t l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "eq"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(92, 174, 15, 22, 76, 124, 59, 78)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__1_value),LEAN_SCALAR_PTR_LITERAL(87, 130, 109, 65, 232, 6, 169, 172)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__3_value),LEAN_SCALAR_PTR_LITERAL(150, 223, 246, 201, 117, 37, 26, 227)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "new eq: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__7;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__0;
static lean_once_cell_t l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__1_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___boxed(lean_object**);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__8___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "assert"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "store"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 23, 180, 58, 194, 72, 175, 153)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(198, 137, 50, 202, 239, 114, 140, 141)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__1_value),LEAN_SCALAR_PTR_LITERAL(236, 213, 16, 64, 1, 14, 244, 141)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__3;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "trivial"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 23, 180, 58, 194, 72, 175, 153)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(198, 137, 50, 202, 239, 114, 140, 141)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__5_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__4_value),LEAN_SCALAR_PTR_LITERAL(177, 38, 232, 206, 222, 75, 121, 224)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__6;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "unsat"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__8_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 23, 180, 58, 194, 72, 175, 153)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__8_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(198, 137, 50, 202, 239, 114, 140, 141)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__8_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__7_value),LEAN_SCALAR_PTR_LITERAL(216, 204, 174, 99, 3, 215, 140, 75)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__8_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__9;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__10_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 23, 180, 58, 194, 72, 175, 153)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__10_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(198, 137, 50, 202, 239, 114, 140, 141)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__10_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__11;
LEAN_EXPORT lean_object* lean_grind_cutsat_assert_le(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LE"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "le"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 149, 183, 186, 191, 145, 216, 115)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__1_value),LEAN_SCALAR_PTR_LITERAL(109, 14, 90, 172, 72, 170, 136, 101)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__3;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "norm"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(92, 174, 15, 22, 76, 124, 59, 78)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__1_value),LEAN_SCALAR_PTR_LITERAL(87, 130, 109, 65, 232, 6, 169, 172)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__5_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(15, 182, 41, 28, 2, 115, 0, 31)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__6;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "not normalized: "};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__8;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "normalized: "};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__9_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__10;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__0;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ToInt"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "of_not_le"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__1_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__2_value),LEAN_SCALAR_PTR_LITERAL(4, 173, 245, 176, 99, 227, 18, 222)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__3_value),LEAN_SCALAR_PTR_LITERAL(79, 115, 36, 201, 96, 73, 90, 93)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__5;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "of_le"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__1_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__2_value),LEAN_SCALAR_PTR_LITERAL(4, 173, 245, 176, 99, 227, 18, 222)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__7_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(105, 164, 65, 191, 194, 192, 188, 236)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__1_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__1_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLe(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_norm_spec__0(lean_object* v_a_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_nat_to_int(v_a_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_norm(lean_object* v_c_3_){
_start:
{
lean_object* v___y_5_; lean_object* v_p_6_; lean_object* v_p_15_; uint8_t v___x_16_; 
v_p_15_ = lean_ctor_get(v_c_3_, 0);
v___x_16_ = l_Int_Internal_Linear_Poly_isSorted(v_p_15_);
if (v___x_16_ == 0)
{
lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
lean_inc_ref(v_p_15_);
v___x_17_ = l_Int_Internal_Linear_Poly_norm(v_p_15_);
v___x_18_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_18_, 0, v_c_3_);
v___x_19_ = lean_box(0);
lean_inc_ref(v___x_17_);
v___x_20_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_20_, 0, v___x_17_);
lean_ctor_set(v___x_20_, 1, v___x_18_);
lean_ctor_set(v___x_20_, 2, v___x_19_);
v___y_5_ = v___x_20_;
v_p_6_ = v___x_17_;
goto v___jp_4_;
}
else
{
lean_inc_ref(v_p_15_);
v___y_5_ = v_c_3_;
v_p_6_ = v_p_15_;
goto v___jp_4_;
}
v___jp_4_:
{
lean_object* v_k_7_; lean_object* v___x_8_; uint8_t v___x_9_; 
v_k_7_ = l_Int_Internal_Linear_Poly_gcdCoeffs_x27(v_p_6_);
v___x_8_ = lean_unsigned_to_nat(1u);
v___x_9_ = lean_nat_dec_eq(v_k_7_, v___x_8_);
if (v___x_9_ == 0)
{
lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_10_ = lean_nat_to_int(v_k_7_);
v___x_11_ = l_Int_Internal_Linear_Poly_div(v___x_10_, v_p_6_);
lean_dec(v___x_10_);
v___x_12_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v___x_12_, 0, v___y_5_);
v___x_13_ = lean_box(0);
v___x_14_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_14_, 0, v___x_11_);
lean_ctor_set(v___x_14_, 1, v___x_12_);
lean_ctor_set(v___x_14_, 2, v___x_13_);
return v___x_14_;
}
else
{
lean_dec(v_k_7_);
lean_dec_ref(v_p_6_);
return v___y_5_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0_spec__0(lean_object* v_msgData_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_){
_start:
{
lean_object* v___x_27_; lean_object* v_env_28_; uint8_t v___x_29_; lean_object* v_env_30_; lean_object* v___x_31_; lean_object* v_toCold_32_; lean_object* v_mctx_33_; lean_object* v_lctx_34_; lean_object* v_options_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_27_ = lean_st_ref_get(v___y_25_);
v_env_28_ = lean_ctor_get(v___x_27_, 0);
lean_inc_ref(v_env_28_);
lean_dec(v___x_27_);
v___x_29_ = 0;
v_env_30_ = l_Lean_Environment_setRecordingDeps(v_env_28_, v___x_29_);
v___x_31_ = lean_st_ref_get(v___y_23_);
v_toCold_32_ = lean_ctor_get(v___y_24_, 0);
v_mctx_33_ = lean_ctor_get(v___x_31_, 0);
lean_inc_ref(v_mctx_33_);
lean_dec(v___x_31_);
v_lctx_34_ = lean_ctor_get(v___y_22_, 2);
v_options_35_ = lean_ctor_get(v_toCold_32_, 2);
lean_inc_ref(v_options_35_);
lean_inc_ref(v_lctx_34_);
v___x_36_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_36_, 0, v_env_30_);
lean_ctor_set(v___x_36_, 1, v_mctx_33_);
lean_ctor_set(v___x_36_, 2, v_lctx_34_);
lean_ctor_set(v___x_36_, 3, v_options_35_);
v___x_37_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_37_, 0, v___x_36_);
lean_ctor_set(v___x_37_, 1, v_msgData_21_);
v___x_38_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0_spec__0___boxed(lean_object* v_msgData_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0_spec__0(v_msgData_39_, v___y_40_, v___y_41_, v___y_42_, v___y_43_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
lean_dec(v___y_41_);
lean_dec_ref(v___y_40_);
return v_res_45_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_46_; double v___x_47_; 
v___x_46_ = lean_unsigned_to_nat(0u);
v___x_47_ = lean_float_of_nat(v___x_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(lean_object* v_cls_51_, lean_object* v_msg_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_){
_start:
{
lean_object* v_ref_58_; lean_object* v___x_59_; lean_object* v_a_60_; lean_object* v___x_62_; uint8_t v_isShared_63_; uint8_t v_isSharedCheck_105_; 
v_ref_58_ = lean_ctor_get(v___y_55_, 2);
v___x_59_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0_spec__0(v_msg_52_, v___y_53_, v___y_54_, v___y_55_, v___y_56_);
v_a_60_ = lean_ctor_get(v___x_59_, 0);
v_isSharedCheck_105_ = !lean_is_exclusive(v___x_59_);
if (v_isSharedCheck_105_ == 0)
{
v___x_62_ = v___x_59_;
v_isShared_63_ = v_isSharedCheck_105_;
goto v_resetjp_61_;
}
else
{
lean_inc(v_a_60_);
lean_dec(v___x_59_);
v___x_62_ = lean_box(0);
v_isShared_63_ = v_isSharedCheck_105_;
goto v_resetjp_61_;
}
v_resetjp_61_:
{
lean_object* v___x_64_; lean_object* v_traceState_65_; lean_object* v_env_66_; lean_object* v_nextMacroScope_67_; lean_object* v_ngen_68_; lean_object* v_auxDeclNGen_69_; lean_object* v_cache_70_; lean_object* v_recordedDeps_71_; lean_object* v_messages_72_; lean_object* v_infoState_73_; lean_object* v_snapshotTasks_74_; lean_object* v___x_76_; uint8_t v_isShared_77_; uint8_t v_isSharedCheck_104_; 
v___x_64_ = lean_st_ref_take(v___y_56_);
v_traceState_65_ = lean_ctor_get(v___x_64_, 4);
v_env_66_ = lean_ctor_get(v___x_64_, 0);
v_nextMacroScope_67_ = lean_ctor_get(v___x_64_, 1);
v_ngen_68_ = lean_ctor_get(v___x_64_, 2);
v_auxDeclNGen_69_ = lean_ctor_get(v___x_64_, 3);
v_cache_70_ = lean_ctor_get(v___x_64_, 5);
v_recordedDeps_71_ = lean_ctor_get(v___x_64_, 6);
v_messages_72_ = lean_ctor_get(v___x_64_, 7);
v_infoState_73_ = lean_ctor_get(v___x_64_, 8);
v_snapshotTasks_74_ = lean_ctor_get(v___x_64_, 9);
v_isSharedCheck_104_ = !lean_is_exclusive(v___x_64_);
if (v_isSharedCheck_104_ == 0)
{
v___x_76_ = v___x_64_;
v_isShared_77_ = v_isSharedCheck_104_;
goto v_resetjp_75_;
}
else
{
lean_inc(v_snapshotTasks_74_);
lean_inc(v_infoState_73_);
lean_inc(v_messages_72_);
lean_inc(v_recordedDeps_71_);
lean_inc(v_cache_70_);
lean_inc(v_traceState_65_);
lean_inc(v_auxDeclNGen_69_);
lean_inc(v_ngen_68_);
lean_inc(v_nextMacroScope_67_);
lean_inc(v_env_66_);
lean_dec(v___x_64_);
v___x_76_ = lean_box(0);
v_isShared_77_ = v_isSharedCheck_104_;
goto v_resetjp_75_;
}
v_resetjp_75_:
{
uint64_t v_tid_78_; lean_object* v_traces_79_; lean_object* v___x_81_; uint8_t v_isShared_82_; uint8_t v_isSharedCheck_103_; 
v_tid_78_ = lean_ctor_get_uint64(v_traceState_65_, sizeof(void*)*1);
v_traces_79_ = lean_ctor_get(v_traceState_65_, 0);
v_isSharedCheck_103_ = !lean_is_exclusive(v_traceState_65_);
if (v_isSharedCheck_103_ == 0)
{
v___x_81_ = v_traceState_65_;
v_isShared_82_ = v_isSharedCheck_103_;
goto v_resetjp_80_;
}
else
{
lean_inc(v_traces_79_);
lean_dec(v_traceState_65_);
v___x_81_ = lean_box(0);
v_isShared_82_ = v_isSharedCheck_103_;
goto v_resetjp_80_;
}
v_resetjp_80_:
{
lean_object* v___x_83_; lean_object* v___x_84_; double v___x_85_; uint8_t v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_94_; 
v___x_83_ = lean_box(0);
v___x_84_ = lean_box(0);
v___x_85_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__0);
v___x_86_ = 0;
v___x_87_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__1));
v___x_88_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_88_, 0, v_cls_51_);
lean_ctor_set(v___x_88_, 1, v___x_84_);
lean_ctor_set(v___x_88_, 2, v___x_87_);
lean_ctor_set_float(v___x_88_, sizeof(void*)*3, v___x_85_);
lean_ctor_set_float(v___x_88_, sizeof(void*)*3 + 8, v___x_85_);
lean_ctor_set_uint8(v___x_88_, sizeof(void*)*3 + 16, v___x_86_);
v___x_89_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__2));
v___x_90_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_90_, 0, v___x_88_);
lean_ctor_set(v___x_90_, 1, v_a_60_);
lean_ctor_set(v___x_90_, 2, v___x_89_);
lean_inc(v_ref_58_);
v___x_91_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_91_, 0, v_ref_58_);
lean_ctor_set(v___x_91_, 1, v___x_90_);
v___x_92_ = l_Lean_PersistentArray_push___redArg(v_traces_79_, v___x_91_);
if (v_isShared_82_ == 0)
{
lean_ctor_set(v___x_81_, 0, v___x_92_);
v___x_94_ = v___x_81_;
goto v_reusejp_93_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v___x_92_);
lean_ctor_set_uint64(v_reuseFailAlloc_102_, sizeof(void*)*1, v_tid_78_);
v___x_94_ = v_reuseFailAlloc_102_;
goto v_reusejp_93_;
}
v_reusejp_93_:
{
lean_object* v___x_96_; 
if (v_isShared_77_ == 0)
{
lean_ctor_set(v___x_76_, 4, v___x_94_);
v___x_96_ = v___x_76_;
goto v_reusejp_95_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v_env_66_);
lean_ctor_set(v_reuseFailAlloc_101_, 1, v_nextMacroScope_67_);
lean_ctor_set(v_reuseFailAlloc_101_, 2, v_ngen_68_);
lean_ctor_set(v_reuseFailAlloc_101_, 3, v_auxDeclNGen_69_);
lean_ctor_set(v_reuseFailAlloc_101_, 4, v___x_94_);
lean_ctor_set(v_reuseFailAlloc_101_, 5, v_cache_70_);
lean_ctor_set(v_reuseFailAlloc_101_, 6, v_recordedDeps_71_);
lean_ctor_set(v_reuseFailAlloc_101_, 7, v_messages_72_);
lean_ctor_set(v_reuseFailAlloc_101_, 8, v_infoState_73_);
lean_ctor_set(v_reuseFailAlloc_101_, 9, v_snapshotTasks_74_);
v___x_96_ = v_reuseFailAlloc_101_;
goto v_reusejp_95_;
}
v_reusejp_95_:
{
lean_object* v___x_97_; lean_object* v___x_99_; 
v___x_97_ = lean_st_ref_put(v___y_56_, v___x_96_);
if (v_isShared_63_ == 0)
{
lean_ctor_set(v___x_62_, 0, v___x_83_);
v___x_99_ = v___x_62_;
goto v_reusejp_98_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v___x_83_);
v___x_99_ = v_reuseFailAlloc_100_;
goto v_reusejp_98_;
}
v_reusejp_98_:
{
return v___x_99_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___boxed(lean_object* v_cls_106_, lean_object* v_msg_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v_cls_106_, v_msg_107_, v___y_108_, v___y_109_, v___y_110_, v___y_111_);
lean_dec(v___y_111_);
lean_dec_ref(v___y_110_);
lean_dec(v___y_109_);
lean_dec_ref(v___y_108_);
return v_res_113_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__6(void){
_start:
{
lean_object* v_cls_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v_cls_124_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__3));
v___x_125_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__5));
v___x_126_ = l_Lean_Name_append(v___x_125_, v_cls_124_);
return v___x_126_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__8(void){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_128_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__7));
v___x_129_ = l_Lean_stringToMessageData(v___x_128_);
return v___x_129_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9(void){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_130_ = lean_unsigned_to_nat(0u);
v___x_131_ = lean_nat_to_int(v___x_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq(lean_object* v_a_132_, lean_object* v_x_133_, lean_object* v_c_u2081_134_, lean_object* v_b_135_, lean_object* v_c_u2082_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_){
_start:
{
lean_object* v___y_149_; lean_object* v___y_155_; lean_object* v_p_208_; lean_object* v_p_209_; lean_object* v___x_210_; uint8_t v___x_211_; 
v_p_208_ = lean_ctor_get(v_c_u2081_134_, 0);
v_p_209_ = lean_ctor_get(v_c_u2082_136_, 0);
v___x_210_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9);
v___x_211_ = lean_int_dec_le(v___x_210_, v_a_132_);
if (v___x_211_ == 0)
{
lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
lean_inc_ref(v_p_208_);
v___x_212_ = l_Int_Internal_Linear_Poly_mul(v_p_208_, v_b_135_);
v___x_213_ = lean_int_neg(v_a_132_);
lean_inc_ref(v_p_209_);
v___x_214_ = l_Int_Internal_Linear_Poly_mul(v_p_209_, v___x_213_);
lean_dec(v___x_213_);
v___x_215_ = l_Int_Internal_Linear_Poly_combine(v___x_212_, v___x_214_);
v___y_155_ = v___x_215_;
goto v___jp_154_;
}
else
{
lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
lean_inc_ref(v_p_209_);
v___x_216_ = l_Int_Internal_Linear_Poly_mul(v_p_209_, v_a_132_);
v___x_217_ = lean_int_neg(v_b_135_);
lean_inc_ref(v_p_208_);
v___x_218_ = l_Int_Internal_Linear_Poly_mul(v_p_208_, v___x_217_);
lean_dec(v___x_217_);
v___x_219_ = l_Int_Internal_Linear_Poly_combine(v___x_216_, v___x_218_);
v___y_155_ = v___x_219_;
goto v___jp_154_;
}
v___jp_148_:
{
lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_150_ = lean_alloc_ctor(12, 3, 0);
lean_ctor_set(v___x_150_, 0, v_x_133_);
lean_ctor_set(v___x_150_, 1, v_c_u2081_134_);
lean_ctor_set(v___x_150_, 2, v_c_u2082_136_);
v___x_151_ = lean_box(0);
v___x_152_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_152_, 0, v___y_149_);
lean_ctor_set(v___x_152_, 1, v___x_150_);
lean_ctor_set(v___x_152_, 2, v___x_151_);
v___x_153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_153_, 0, v___x_152_);
return v___x_153_;
}
v___jp_154_:
{
lean_object* v_toCold_156_; lean_object* v_options_157_; uint8_t v_hasTrace_158_; 
v_toCold_156_ = lean_ctor_get(v_a_145_, 0);
v_options_157_ = lean_ctor_get(v_toCold_156_, 2);
v_hasTrace_158_ = lean_ctor_get_uint8(v_options_157_, sizeof(void*)*1);
if (v_hasTrace_158_ == 0)
{
v___y_149_ = v___y_155_;
goto v___jp_148_;
}
else
{
lean_object* v_inheritedTraceOptions_159_; lean_object* v_cls_160_; lean_object* v___x_161_; uint8_t v___x_162_; 
v_inheritedTraceOptions_159_ = lean_ctor_get(v_toCold_156_, 11);
v_cls_160_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__3));
v___x_161_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__6, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__6_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__6);
v___x_162_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_159_, v_options_157_, v___x_161_);
if (v___x_162_ == 0)
{
v___y_149_ = v___y_155_;
goto v___jp_148_;
}
else
{
lean_object* v___x_163_; 
v___x_163_ = l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg(v_x_133_, v_a_137_, v_a_145_);
if (lean_obj_tag(v___x_163_) == 0)
{
lean_object* v_a_164_; lean_object* v___x_165_; 
v_a_164_ = lean_ctor_get(v___x_163_, 0);
lean_inc(v_a_164_);
lean_dec_ref_known(v___x_163_, 1);
lean_inc_ref(v_c_u2081_134_);
v___x_165_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(v_c_u2081_134_, v_a_137_, v_a_145_);
if (lean_obj_tag(v___x_165_) == 0)
{
lean_object* v_a_166_; lean_object* v___x_167_; 
v_a_166_ = lean_ctor_get(v___x_165_, 0);
lean_inc(v_a_166_);
lean_dec_ref_known(v___x_165_, 1);
lean_inc_ref(v_c_u2082_136_);
v___x_167_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_c_u2082_136_, v_a_137_, v_a_145_);
if (lean_obj_tag(v___x_167_) == 0)
{
lean_object* v_a_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v_a_168_ = lean_ctor_get(v___x_167_, 0);
lean_inc(v_a_168_);
lean_dec_ref_known(v___x_167_, 1);
v___x_169_ = l_Lean_MessageData_ofExpr(v_a_164_);
v___x_170_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__8, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__8_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__8);
v___x_171_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_171_, 0, v___x_169_);
lean_ctor_set(v___x_171_, 1, v___x_170_);
v___x_172_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_172_, 0, v___x_171_);
lean_ctor_set(v___x_172_, 1, v_a_166_);
v___x_173_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_173_, 0, v___x_172_);
lean_ctor_set(v___x_173_, 1, v___x_170_);
v___x_174_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_174_, 0, v___x_173_);
lean_ctor_set(v___x_174_, 1, v_a_168_);
v___x_175_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v_cls_160_, v___x_174_, v_a_143_, v_a_144_, v_a_145_, v_a_146_);
if (lean_obj_tag(v___x_175_) == 0)
{
lean_dec_ref_known(v___x_175_, 1);
v___y_149_ = v___y_155_;
goto v___jp_148_;
}
else
{
lean_object* v_a_176_; lean_object* v___x_178_; uint8_t v_isShared_179_; uint8_t v_isSharedCheck_183_; 
lean_dec_ref(v___y_155_);
lean_dec_ref(v_c_u2082_136_);
lean_dec_ref(v_c_u2081_134_);
lean_dec(v_x_133_);
v_a_176_ = lean_ctor_get(v___x_175_, 0);
v_isSharedCheck_183_ = !lean_is_exclusive(v___x_175_);
if (v_isSharedCheck_183_ == 0)
{
v___x_178_ = v___x_175_;
v_isShared_179_ = v_isSharedCheck_183_;
goto v_resetjp_177_;
}
else
{
lean_inc(v_a_176_);
lean_dec(v___x_175_);
v___x_178_ = lean_box(0);
v_isShared_179_ = v_isSharedCheck_183_;
goto v_resetjp_177_;
}
v_resetjp_177_:
{
lean_object* v___x_181_; 
if (v_isShared_179_ == 0)
{
v___x_181_ = v___x_178_;
goto v_reusejp_180_;
}
else
{
lean_object* v_reuseFailAlloc_182_; 
v_reuseFailAlloc_182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_182_, 0, v_a_176_);
v___x_181_ = v_reuseFailAlloc_182_;
goto v_reusejp_180_;
}
v_reusejp_180_:
{
return v___x_181_;
}
}
}
}
else
{
lean_object* v_a_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_191_; 
lean_dec(v_a_166_);
lean_dec(v_a_164_);
lean_dec_ref(v___y_155_);
lean_dec_ref(v_c_u2082_136_);
lean_dec_ref(v_c_u2081_134_);
lean_dec(v_x_133_);
v_a_184_ = lean_ctor_get(v___x_167_, 0);
v_isSharedCheck_191_ = !lean_is_exclusive(v___x_167_);
if (v_isSharedCheck_191_ == 0)
{
v___x_186_ = v___x_167_;
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_a_184_);
lean_dec(v___x_167_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v___x_189_; 
if (v_isShared_187_ == 0)
{
v___x_189_ = v___x_186_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v_a_184_);
v___x_189_ = v_reuseFailAlloc_190_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
return v___x_189_;
}
}
}
}
else
{
lean_object* v_a_192_; lean_object* v___x_194_; uint8_t v_isShared_195_; uint8_t v_isSharedCheck_199_; 
lean_dec(v_a_164_);
lean_dec_ref(v___y_155_);
lean_dec_ref(v_c_u2082_136_);
lean_dec_ref(v_c_u2081_134_);
lean_dec(v_x_133_);
v_a_192_ = lean_ctor_get(v___x_165_, 0);
v_isSharedCheck_199_ = !lean_is_exclusive(v___x_165_);
if (v_isSharedCheck_199_ == 0)
{
v___x_194_ = v___x_165_;
v_isShared_195_ = v_isSharedCheck_199_;
goto v_resetjp_193_;
}
else
{
lean_inc(v_a_192_);
lean_dec(v___x_165_);
v___x_194_ = lean_box(0);
v_isShared_195_ = v_isSharedCheck_199_;
goto v_resetjp_193_;
}
v_resetjp_193_:
{
lean_object* v___x_197_; 
if (v_isShared_195_ == 0)
{
v___x_197_ = v___x_194_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v_a_192_);
v___x_197_ = v_reuseFailAlloc_198_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
return v___x_197_;
}
}
}
}
else
{
lean_object* v_a_200_; lean_object* v___x_202_; uint8_t v_isShared_203_; uint8_t v_isSharedCheck_207_; 
lean_dec_ref(v___y_155_);
lean_dec_ref(v_c_u2082_136_);
lean_dec_ref(v_c_u2081_134_);
lean_dec(v_x_133_);
v_a_200_ = lean_ctor_get(v___x_163_, 0);
v_isSharedCheck_207_ = !lean_is_exclusive(v___x_163_);
if (v_isSharedCheck_207_ == 0)
{
v___x_202_ = v___x_163_;
v_isShared_203_ = v_isSharedCheck_207_;
goto v_resetjp_201_;
}
else
{
lean_inc(v_a_200_);
lean_dec(v___x_163_);
v___x_202_ = lean_box(0);
v_isShared_203_ = v_isSharedCheck_207_;
goto v_resetjp_201_;
}
v_resetjp_201_:
{
lean_object* v___x_205_; 
if (v_isShared_203_ == 0)
{
v___x_205_ = v___x_202_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v_a_200_);
v___x_205_ = v_reuseFailAlloc_206_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
return v___x_205_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___boxed(lean_object* v_a_220_, lean_object* v_x_221_, lean_object* v_c_u2081_222_, lean_object* v_b_223_, lean_object* v_c_u2082_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_, lean_object* v_a_229_, lean_object* v_a_230_, lean_object* v_a_231_, lean_object* v_a_232_, lean_object* v_a_233_, lean_object* v_a_234_, lean_object* v_a_235_){
_start:
{
lean_object* v_res_236_; 
v_res_236_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq(v_a_220_, v_x_221_, v_c_u2081_222_, v_b_223_, v_c_u2082_224_, v_a_225_, v_a_226_, v_a_227_, v_a_228_, v_a_229_, v_a_230_, v_a_231_, v_a_232_, v_a_233_, v_a_234_);
lean_dec(v_a_234_);
lean_dec_ref(v_a_233_);
lean_dec(v_a_232_);
lean_dec_ref(v_a_231_);
lean_dec(v_a_230_);
lean_dec_ref(v_a_229_);
lean_dec(v_a_228_);
lean_dec_ref(v_a_227_);
lean_dec(v_a_226_);
lean_dec(v_a_225_);
lean_dec(v_b_223_);
lean_dec(v_a_220_);
return v_res_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0(lean_object* v_cls_237_, lean_object* v_msg_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_){
_start:
{
lean_object* v___x_250_; 
v___x_250_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v_cls_237_, v_msg_238_, v___y_245_, v___y_246_, v___y_247_, v___y_248_);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___boxed(lean_object* v_cls_251_, lean_object* v_msg_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0(v_cls_251_, v_msg_252_, v___y_253_, v___y_254_, v___y_255_, v___y_256_, v___y_257_, v___y_258_, v___y_259_, v___y_260_, v___y_261_, v___y_262_);
lean_dec(v___y_262_);
lean_dec_ref(v___y_261_);
lean_dec(v___y_260_);
lean_dec_ref(v___y_259_);
lean_dec(v___y_258_);
lean_dec_ref(v___y_257_);
lean_dec(v___y_256_);
lean_dec_ref(v___y_255_);
lean_dec(v___y_254_);
lean_dec(v___y_253_);
return v_res_264_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_270_ = l_Lean_maxRecDepthErrorMessage;
v___x_271_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_271_, 0, v___x_270_);
return v___x_271_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_272_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__3);
v___x_273_ = l_Lean_MessageData_ofFormat(v___x_272_);
return v___x_273_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_274_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__4);
v___x_275_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__2));
v___x_276_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
lean_ctor_set(v___x_276_, 1, v___x_274_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg(lean_object* v_ref_277_){
_start:
{
lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_279_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__5);
v___x_280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_280_, 0, v_ref_277_);
lean_ctor_set(v___x_280_, 1, v___x_279_);
v___x_281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_281_, 0, v___x_280_);
return v___x_281_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___boxed(lean_object* v_ref_282_, lean_object* v___y_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg(v_ref_282_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0(lean_object* v_00_u03b1_285_, lean_object* v_ref_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_){
_start:
{
lean_object* v___x_298_; 
v___x_298_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg(v_ref_286_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___boxed(lean_object* v_00_u03b1_299_, lean_object* v_ref_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_){
_start:
{
lean_object* v_res_312_; 
v_res_312_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0(v_00_u03b1_299_, v_ref_300_, v___y_301_, v___y_302_, v___y_303_, v___y_304_, v___y_305_, v___y_306_, v___y_307_, v___y_308_, v___y_309_, v___y_310_);
lean_dec(v___y_310_);
lean_dec_ref(v___y_309_);
lean_dec(v___y_308_);
lean_dec_ref(v___y_307_);
lean_dec(v___y_306_);
lean_dec_ref(v___y_305_);
lean_dec(v___y_304_);
lean_dec_ref(v___y_303_);
lean_dec(v___y_302_);
lean_dec(v___y_301_);
return v_res_312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts(lean_object* v_c_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_, lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_){
_start:
{
lean_object* v_p_325_; lean_object* v_toCold_326_; lean_object* v_currRecDepth_327_; lean_object* v_ref_328_; uint16_t v_optionFlags_329_; uint8_t v_suppressElabErrors_330_; uint8_t v_checkDeprecated_331_; uint8_t v_isRecordingDeps_332_; lean_object* v_maxRecDepth_364_; lean_object* v___x_365_; uint8_t v___x_366_; 
v_p_325_ = lean_ctor_get(v_c_313_, 0);
v_toCold_326_ = lean_ctor_get(v_a_322_, 0);
lean_inc_ref(v_toCold_326_);
v_currRecDepth_327_ = lean_ctor_get(v_a_322_, 1);
lean_inc(v_currRecDepth_327_);
v_ref_328_ = lean_ctor_get(v_a_322_, 2);
lean_inc(v_ref_328_);
v_optionFlags_329_ = lean_ctor_get_uint16(v_a_322_, sizeof(void*)*3);
v_suppressElabErrors_330_ = lean_ctor_get_uint8(v_a_322_, sizeof(void*)*3 + 2);
v_checkDeprecated_331_ = lean_ctor_get_uint8(v_a_322_, sizeof(void*)*3 + 3);
v_isRecordingDeps_332_ = lean_ctor_get_uint8(v_a_322_, sizeof(void*)*3 + 4);
lean_dec_ref(v_a_322_);
v_maxRecDepth_364_ = lean_ctor_get(v_toCold_326_, 3);
v___x_365_ = lean_unsigned_to_nat(0u);
v___x_366_ = lean_nat_dec_eq(v_maxRecDepth_364_, v___x_365_);
if (v___x_366_ == 0)
{
uint8_t v___x_367_; 
v___x_367_ = lean_nat_dec_eq(v_currRecDepth_327_, v_maxRecDepth_364_);
if (v___x_367_ == 0)
{
goto v___jp_333_;
}
else
{
lean_object* v___x_368_; 
lean_dec(v_currRecDepth_327_);
lean_dec_ref(v_toCold_326_);
lean_dec_ref(v_c_313_);
v___x_368_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg(v_ref_328_);
return v___x_368_;
}
}
else
{
goto v___jp_333_;
}
v___jp_333_:
{
lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_334_ = lean_unsigned_to_nat(1u);
v___x_335_ = lean_nat_add(v_currRecDepth_327_, v___x_334_);
lean_dec(v_currRecDepth_327_);
v___x_336_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_336_, 0, v_toCold_326_);
lean_ctor_set(v___x_336_, 1, v___x_335_);
lean_ctor_set(v___x_336_, 2, v_ref_328_);
lean_ctor_set_uint16(v___x_336_, sizeof(void*)*3, v_optionFlags_329_);
lean_ctor_set_uint8(v___x_336_, sizeof(void*)*3 + 2, v_suppressElabErrors_330_);
lean_ctor_set_uint8(v___x_336_, sizeof(void*)*3 + 3, v_checkDeprecated_331_);
lean_ctor_set_uint8(v___x_336_, sizeof(void*)*3 + 4, v_isRecordingDeps_332_);
lean_inc_ref(v_p_325_);
v___x_337_ = l_Int_Internal_Linear_Poly_findVarToSubst___redArg(v_p_325_, v_a_314_, v___x_336_);
if (lean_obj_tag(v___x_337_) == 0)
{
lean_object* v_a_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_355_; 
v_a_338_ = lean_ctor_get(v___x_337_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_337_);
if (v_isSharedCheck_355_ == 0)
{
v___x_340_ = v___x_337_;
v_isShared_341_ = v_isSharedCheck_355_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_a_338_);
lean_dec(v___x_337_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_355_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
if (lean_obj_tag(v_a_338_) == 1)
{
lean_object* v_val_342_; lean_object* v_snd_343_; lean_object* v_snd_344_; lean_object* v_fst_345_; lean_object* v_fst_346_; lean_object* v_p_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
lean_del_object(v___x_340_);
v_val_342_ = lean_ctor_get(v_a_338_, 0);
lean_inc(v_val_342_);
lean_dec_ref_known(v_a_338_, 1);
v_snd_343_ = lean_ctor_get(v_val_342_, 1);
lean_inc(v_snd_343_);
v_snd_344_ = lean_ctor_get(v_snd_343_, 1);
lean_inc(v_snd_344_);
v_fst_345_ = lean_ctor_get(v_val_342_, 0);
lean_inc(v_fst_345_);
lean_dec(v_val_342_);
v_fst_346_ = lean_ctor_get(v_snd_343_, 0);
lean_inc(v_fst_346_);
lean_dec(v_snd_343_);
v_p_347_ = lean_ctor_get(v_snd_344_, 0);
v___x_348_ = l_Int_Internal_Linear_Poly_coeff(v_p_347_, v_fst_346_);
v___x_349_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq(v___x_348_, v_fst_346_, v_snd_344_, v_fst_345_, v_c_313_, v_a_314_, v_a_315_, v_a_316_, v_a_317_, v_a_318_, v_a_319_, v_a_320_, v_a_321_, v___x_336_, v_a_323_);
lean_dec(v_fst_345_);
lean_dec(v___x_348_);
if (lean_obj_tag(v___x_349_) == 0)
{
lean_object* v_a_350_; 
v_a_350_ = lean_ctor_get(v___x_349_, 0);
lean_inc(v_a_350_);
lean_dec_ref_known(v___x_349_, 1);
v_c_313_ = v_a_350_;
v_a_322_ = v___x_336_;
goto _start;
}
else
{
lean_dec_ref_known(v___x_336_, 3);
return v___x_349_;
}
}
else
{
lean_object* v___x_353_; 
lean_dec(v_a_338_);
lean_dec_ref_known(v___x_336_, 3);
if (v_isShared_341_ == 0)
{
lean_ctor_set(v___x_340_, 0, v_c_313_);
v___x_353_ = v___x_340_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v_c_313_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
}
}
else
{
lean_object* v_a_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_363_; 
lean_dec_ref_known(v___x_336_, 3);
lean_dec_ref(v_c_313_);
v_a_356_ = lean_ctor_get(v___x_337_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v___x_337_);
if (v_isSharedCheck_363_ == 0)
{
v___x_358_ = v___x_337_;
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_a_356_);
lean_dec(v___x_337_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
lean_object* v___x_361_; 
if (v_isShared_359_ == 0)
{
v___x_361_ = v___x_358_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_a_356_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
return v___x_361_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts___boxed(lean_object* v_c_369_, lean_object* v_a_370_, lean_object* v_a_371_, lean_object* v_a_372_, lean_object* v_a_373_, lean_object* v_a_374_, lean_object* v_a_375_, lean_object* v_a_376_, lean_object* v_a_377_, lean_object* v_a_378_, lean_object* v_a_379_, lean_object* v_a_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts(v_c_369_, v_a_370_, v_a_371_, v_a_372_, v_a_373_, v_a_374_, v_a_375_, v_a_376_, v_a_377_, v_a_378_, v_a_379_);
lean_dec(v_a_379_);
lean_dec(v_a_377_);
lean_dec_ref(v_a_376_);
lean_dec(v_a_375_);
lean_dec_ref(v_a_374_);
lean_dec(v_a_373_);
lean_dec_ref(v_a_372_);
lean_dec(v_a_371_);
lean_dec(v_a_370_);
return v_res_381_;
}
}
LEAN_EXPORT uint8_t l_Int_Internal_Linear_Poly_isNegEq(lean_object* v_p_u2081_382_, lean_object* v_p_u2082_383_){
_start:
{
if (lean_obj_tag(v_p_u2081_382_) == 0)
{
if (lean_obj_tag(v_p_u2082_383_) == 0)
{
lean_object* v_k_384_; lean_object* v_k_385_; lean_object* v___x_386_; uint8_t v___x_387_; 
v_k_384_ = lean_ctor_get(v_p_u2081_382_, 0);
v_k_385_ = lean_ctor_get(v_p_u2082_383_, 0);
v___x_386_ = lean_int_neg(v_k_385_);
v___x_387_ = lean_int_dec_eq(v_k_384_, v___x_386_);
lean_dec(v___x_386_);
return v___x_387_;
}
else
{
uint8_t v___x_388_; 
v___x_388_ = 0;
return v___x_388_;
}
}
else
{
if (lean_obj_tag(v_p_u2082_383_) == 1)
{
lean_object* v_k_389_; lean_object* v_v_390_; lean_object* v_p_391_; lean_object* v_k_392_; lean_object* v_v_393_; lean_object* v_p_394_; lean_object* v___x_395_; uint8_t v___x_396_; 
v_k_389_ = lean_ctor_get(v_p_u2081_382_, 0);
v_v_390_ = lean_ctor_get(v_p_u2081_382_, 1);
v_p_391_ = lean_ctor_get(v_p_u2081_382_, 2);
v_k_392_ = lean_ctor_get(v_p_u2082_383_, 0);
v_v_393_ = lean_ctor_get(v_p_u2082_383_, 1);
v_p_394_ = lean_ctor_get(v_p_u2082_383_, 2);
v___x_395_ = lean_int_neg(v_k_392_);
v___x_396_ = lean_int_dec_eq(v_k_389_, v___x_395_);
lean_dec(v___x_395_);
if (v___x_396_ == 0)
{
return v___x_396_;
}
else
{
uint8_t v___x_397_; 
v___x_397_ = lean_nat_dec_eq(v_v_390_, v_v_393_);
if (v___x_397_ == 0)
{
return v___x_397_;
}
else
{
v_p_u2081_382_ = v_p_391_;
v_p_u2082_383_ = v_p_394_;
goto _start;
}
}
}
else
{
uint8_t v___x_399_; 
v___x_399_ = 0;
return v___x_399_;
}
}
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_isNegEq___boxed(lean_object* v_p_u2081_400_, lean_object* v_p_u2082_401_){
_start:
{
uint8_t v_res_402_; lean_object* v_r_403_; 
v_res_402_ = l_Int_Internal_Linear_Poly_isNegEq(v_p_u2081_400_, v_p_u2082_401_);
lean_dec_ref(v_p_u2082_401_);
lean_dec_ref(v_p_u2081_400_);
v_r_403_ = lean_box(v_res_402_);
return v_r_403_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1(lean_object* v_c_404_, lean_object* v_as_405_, size_t v_i_406_, size_t v_stop_407_, lean_object* v_b_408_){
_start:
{
lean_object* v___y_410_; uint8_t v___x_414_; 
v___x_414_ = lean_usize_dec_eq(v_i_406_, v_stop_407_);
if (v___x_414_ == 0)
{
lean_object* v___x_415_; lean_object* v_p_416_; lean_object* v_p_417_; uint8_t v___x_418_; 
v___x_415_ = lean_array_uget_borrowed(v_as_405_, v_i_406_);
v_p_416_ = lean_ctor_get(v___x_415_, 0);
v_p_417_ = lean_ctor_get(v_c_404_, 0);
v___x_418_ = l_Int_Internal_Linear_instBEqPoly_beq(v_p_416_, v_p_417_);
if (v___x_418_ == 0)
{
lean_object* v___x_419_; 
lean_inc(v___x_415_);
v___x_419_ = l_Lean_PersistentArray_push___redArg(v_b_408_, v___x_415_);
v___y_410_ = v___x_419_;
goto v___jp_409_;
}
else
{
v___y_410_ = v_b_408_;
goto v___jp_409_;
}
}
else
{
return v_b_408_;
}
v___jp_409_:
{
size_t v___x_411_; size_t v___x_412_; 
v___x_411_ = ((size_t)1ULL);
v___x_412_ = lean_usize_add(v_i_406_, v___x_411_);
v_i_406_ = v___x_412_;
v_b_408_ = v___y_410_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1___boxed(lean_object* v_c_420_, lean_object* v_as_421_, lean_object* v_i_422_, lean_object* v_stop_423_, lean_object* v_b_424_){
_start:
{
size_t v_i_boxed_425_; size_t v_stop_boxed_426_; lean_object* v_res_427_; 
v_i_boxed_425_ = lean_unbox_usize(v_i_422_);
lean_dec(v_i_422_);
v_stop_boxed_426_ = lean_unbox_usize(v_stop_423_);
lean_dec(v_stop_423_);
v_res_427_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1(v_c_420_, v_as_421_, v_i_boxed_425_, v_stop_boxed_426_, v_b_424_);
lean_dec_ref(v_as_421_);
lean_dec_ref(v_c_420_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__2(lean_object* v_c_428_, lean_object* v_x_429_, lean_object* v_x_430_){
_start:
{
if (lean_obj_tag(v_x_429_) == 0)
{
lean_object* v_cs_431_; lean_object* v___x_432_; lean_object* v___x_433_; uint8_t v___x_434_; 
v_cs_431_ = lean_ctor_get(v_x_429_, 0);
v___x_432_ = lean_unsigned_to_nat(0u);
v___x_433_ = lean_array_get_size(v_cs_431_);
v___x_434_ = lean_nat_dec_lt(v___x_432_, v___x_433_);
if (v___x_434_ == 0)
{
return v_x_430_;
}
else
{
size_t v___x_435_; size_t v___x_436_; lean_object* v___x_437_; 
v___x_435_ = ((size_t)0ULL);
v___x_436_ = lean_usize_of_nat(v___x_433_);
v___x_437_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0_spec__1(v_c_428_, v_cs_431_, v___x_435_, v___x_436_, v_x_430_);
return v___x_437_;
}
}
else
{
lean_object* v_vs_438_; lean_object* v___x_439_; lean_object* v___x_440_; uint8_t v___x_441_; 
v_vs_438_ = lean_ctor_get(v_x_429_, 0);
v___x_439_ = lean_unsigned_to_nat(0u);
v___x_440_ = lean_array_get_size(v_vs_438_);
v___x_441_ = lean_nat_dec_lt(v___x_439_, v___x_440_);
if (v___x_441_ == 0)
{
return v_x_430_;
}
else
{
size_t v___x_442_; size_t v___x_443_; lean_object* v___x_444_; 
v___x_442_ = ((size_t)0ULL);
v___x_443_ = lean_usize_of_nat(v___x_440_);
v___x_444_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1(v_c_428_, v_vs_438_, v___x_442_, v___x_443_, v_x_430_);
return v___x_444_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0_spec__1(lean_object* v_c_445_, lean_object* v_as_446_, size_t v_i_447_, size_t v_stop_448_, lean_object* v_b_449_){
_start:
{
uint8_t v___x_450_; 
v___x_450_ = lean_usize_dec_eq(v_i_447_, v_stop_448_);
if (v___x_450_ == 0)
{
lean_object* v___x_451_; lean_object* v___x_452_; size_t v___x_453_; size_t v___x_454_; 
v___x_451_ = lean_array_uget_borrowed(v_as_446_, v_i_447_);
v___x_452_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__2(v_c_445_, v___x_451_, v_b_449_);
v___x_453_ = ((size_t)1ULL);
v___x_454_ = lean_usize_add(v_i_447_, v___x_453_);
v_i_447_ = v___x_454_;
v_b_449_ = v___x_452_;
goto _start;
}
else
{
return v_b_449_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0_spec__1___boxed(lean_object* v_c_456_, lean_object* v_as_457_, lean_object* v_i_458_, lean_object* v_stop_459_, lean_object* v_b_460_){
_start:
{
size_t v_i_boxed_461_; size_t v_stop_boxed_462_; lean_object* v_res_463_; 
v_i_boxed_461_ = lean_unbox_usize(v_i_458_);
lean_dec(v_i_458_);
v_stop_boxed_462_ = lean_unbox_usize(v_stop_459_);
lean_dec(v_stop_459_);
v_res_463_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0_spec__1(v_c_456_, v_as_457_, v_i_boxed_461_, v_stop_boxed_462_, v_b_460_);
lean_dec_ref(v_as_457_);
lean_dec_ref(v_c_456_);
return v_res_463_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__2___boxed(lean_object* v_c_464_, lean_object* v_x_465_, lean_object* v_x_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__2(v_c_464_, v_x_465_, v_x_466_);
lean_dec_ref(v_x_465_);
lean_dec_ref(v_c_464_);
return v_res_467_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_468_; 
v___x_468_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_468_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0(lean_object* v_c_469_, lean_object* v_x_470_, size_t v_x_471_, size_t v_x_472_, lean_object* v_x_473_){
_start:
{
if (lean_obj_tag(v_x_470_) == 0)
{
lean_object* v_cs_474_; lean_object* v___x_475_; size_t v___x_476_; lean_object* v_j_477_; lean_object* v___x_478_; size_t v___x_479_; size_t v___x_480_; size_t v___x_481_; size_t v___x_482_; size_t v___x_483_; size_t v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; uint8_t v___x_489_; 
v_cs_474_ = lean_ctor_get(v_x_470_, 0);
v___x_475_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___closed__0);
v___x_476_ = lean_usize_shift_right(v_x_471_, v_x_472_);
v_j_477_ = lean_usize_to_nat(v___x_476_);
v___x_478_ = lean_array_get_borrowed(v___x_475_, v_cs_474_, v_j_477_);
v___x_479_ = ((size_t)1ULL);
v___x_480_ = lean_usize_shift_left(v___x_479_, v_x_472_);
v___x_481_ = lean_usize_sub(v___x_480_, v___x_479_);
v___x_482_ = lean_usize_land(v_x_471_, v___x_481_);
v___x_483_ = ((size_t)5ULL);
v___x_484_ = lean_usize_sub(v_x_472_, v___x_483_);
v___x_485_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0(v_c_469_, v___x_478_, v___x_482_, v___x_484_, v_x_473_);
v___x_486_ = lean_unsigned_to_nat(1u);
v___x_487_ = lean_nat_add(v_j_477_, v___x_486_);
lean_dec(v_j_477_);
v___x_488_ = lean_array_get_size(v_cs_474_);
v___x_489_ = lean_nat_dec_lt(v___x_487_, v___x_488_);
if (v___x_489_ == 0)
{
lean_dec(v___x_487_);
return v___x_485_;
}
else
{
size_t v___x_490_; size_t v___x_491_; lean_object* v___x_492_; 
v___x_490_ = lean_usize_of_nat(v___x_487_);
lean_dec(v___x_487_);
v___x_491_ = lean_usize_of_nat(v___x_488_);
v___x_492_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0_spec__1(v_c_469_, v_cs_474_, v___x_490_, v___x_491_, v___x_485_);
return v___x_492_;
}
}
else
{
lean_object* v_vs_493_; lean_object* v___x_494_; lean_object* v___x_495_; uint8_t v___x_496_; 
v_vs_493_ = lean_ctor_get(v_x_470_, 0);
v___x_494_ = lean_usize_to_nat(v_x_471_);
v___x_495_ = lean_array_get_size(v_vs_493_);
v___x_496_ = lean_nat_dec_lt(v___x_494_, v___x_495_);
if (v___x_496_ == 0)
{
lean_dec(v___x_494_);
return v_x_473_;
}
else
{
size_t v___x_497_; size_t v___x_498_; lean_object* v___x_499_; 
v___x_497_ = lean_usize_of_nat(v___x_494_);
lean_dec(v___x_494_);
v___x_498_ = lean_usize_of_nat(v___x_495_);
v___x_499_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1(v_c_469_, v_vs_493_, v___x_497_, v___x_498_, v_x_473_);
return v___x_499_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___boxed(lean_object* v_c_500_, lean_object* v_x_501_, lean_object* v_x_502_, lean_object* v_x_503_, lean_object* v_x_504_){
_start:
{
size_t v_x_1749__boxed_505_; size_t v_x_1750__boxed_506_; lean_object* v_res_507_; 
v_x_1749__boxed_505_ = lean_unbox_usize(v_x_502_);
lean_dec(v_x_502_);
v_x_1750__boxed_506_ = lean_unbox_usize(v_x_503_);
lean_dec(v_x_503_);
v_res_507_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0(v_c_500_, v_x_501_, v_x_1749__boxed_505_, v_x_1750__boxed_506_, v_x_504_);
lean_dec_ref(v_x_501_);
lean_dec_ref(v_c_500_);
return v_res_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0(lean_object* v_c_508_, lean_object* v_t_509_, lean_object* v_init_510_, lean_object* v_start_511_){
_start:
{
lean_object* v___x_512_; uint8_t v___x_513_; 
v___x_512_ = lean_unsigned_to_nat(0u);
v___x_513_ = lean_nat_dec_eq(v_start_511_, v___x_512_);
if (v___x_513_ == 0)
{
lean_object* v_root_514_; lean_object* v_tail_515_; size_t v_shift_516_; lean_object* v_tailOff_517_; uint8_t v___x_518_; 
v_root_514_ = lean_ctor_get(v_t_509_, 0);
v_tail_515_ = lean_ctor_get(v_t_509_, 1);
v_shift_516_ = lean_ctor_get_usize(v_t_509_, 4);
v_tailOff_517_ = lean_ctor_get(v_t_509_, 3);
v___x_518_ = lean_nat_dec_le(v_tailOff_517_, v_start_511_);
if (v___x_518_ == 0)
{
size_t v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; uint8_t v___x_522_; 
v___x_519_ = lean_usize_of_nat(v_start_511_);
v___x_520_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0(v_c_508_, v_root_514_, v___x_519_, v_shift_516_, v_init_510_);
v___x_521_ = lean_array_get_size(v_tail_515_);
v___x_522_ = lean_nat_dec_lt(v___x_512_, v___x_521_);
if (v___x_522_ == 0)
{
return v___x_520_;
}
else
{
size_t v___x_523_; size_t v___x_524_; lean_object* v___x_525_; 
v___x_523_ = ((size_t)0ULL);
v___x_524_ = lean_usize_of_nat(v___x_521_);
v___x_525_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1(v_c_508_, v_tail_515_, v___x_523_, v___x_524_, v___x_520_);
return v___x_525_;
}
}
else
{
lean_object* v___x_526_; lean_object* v___x_527_; uint8_t v___x_528_; 
v___x_526_ = lean_nat_sub(v_start_511_, v_tailOff_517_);
v___x_527_ = lean_array_get_size(v_tail_515_);
v___x_528_ = lean_nat_dec_lt(v___x_526_, v___x_527_);
if (v___x_528_ == 0)
{
lean_dec(v___x_526_);
return v_init_510_;
}
else
{
size_t v___x_529_; size_t v___x_530_; lean_object* v___x_531_; 
v___x_529_ = lean_usize_of_nat(v___x_526_);
lean_dec(v___x_526_);
v___x_530_ = lean_usize_of_nat(v___x_527_);
v___x_531_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1(v_c_508_, v_tail_515_, v___x_529_, v___x_530_, v_init_510_);
return v___x_531_;
}
}
}
else
{
lean_object* v_root_532_; lean_object* v_tail_533_; lean_object* v___x_534_; lean_object* v___x_535_; uint8_t v___x_536_; 
v_root_532_ = lean_ctor_get(v_t_509_, 0);
v_tail_533_ = lean_ctor_get(v_t_509_, 1);
v___x_534_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__2(v_c_508_, v_root_532_, v_init_510_);
v___x_535_ = lean_array_get_size(v_tail_533_);
v___x_536_ = lean_nat_dec_lt(v___x_512_, v___x_535_);
if (v___x_536_ == 0)
{
return v___x_534_;
}
else
{
size_t v___x_537_; size_t v___x_538_; lean_object* v___x_539_; 
v___x_537_ = ((size_t)0ULL);
v___x_538_ = lean_usize_of_nat(v___x_535_);
v___x_539_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1(v_c_508_, v_tail_533_, v___x_537_, v___x_538_, v___x_534_);
return v___x_539_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0___boxed(lean_object* v_c_540_, lean_object* v_t_541_, lean_object* v_init_542_, lean_object* v_start_543_){
_start:
{
lean_object* v_res_544_; 
v_res_544_ = l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0(v_c_540_, v_t_541_, v_init_542_, v_start_543_);
lean_dec(v_start_543_);
lean_dec_ref(v_t_541_);
lean_dec_ref(v_c_540_);
return v_res_544_;
}
}
static lean_object* _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__0(void){
_start:
{
lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
v___x_545_ = lean_unsigned_to_nat(32u);
v___x_546_ = lean_mk_empty_array_with_capacity(v___x_545_);
v___x_547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_547_, 0, v___x_546_);
return v___x_547_;
}
}
static lean_object* _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__1(void){
_start:
{
size_t v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_548_ = ((size_t)5ULL);
v___x_549_ = lean_unsigned_to_nat(0u);
v___x_550_ = lean_unsigned_to_nat(32u);
v___x_551_ = lean_mk_empty_array_with_capacity(v___x_550_);
v___x_552_ = lean_obj_once(&l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__0, &l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__0_once, _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__0);
v___x_553_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_553_, 0, v___x_552_);
lean_ctor_set(v___x_553_, 1, v___x_551_);
lean_ctor_set(v___x_553_, 2, v___x_549_);
lean_ctor_set(v___x_553_, 3, v___x_549_);
lean_ctor_set_usize(v___x_553_, 4, v___x_548_);
return v___x_553_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4(lean_object* v_c_554_, lean_object* v_x_555_, size_t v_x_556_, size_t v_x_557_){
_start:
{
if (lean_obj_tag(v_x_555_) == 0)
{
lean_object* v_cs_558_; size_t v_j_559_; lean_object* v___x_560_; lean_object* v___x_561_; uint8_t v___x_562_; 
v_cs_558_ = lean_ctor_get(v_x_555_, 0);
v_j_559_ = lean_usize_shift_right(v_x_556_, v_x_557_);
v___x_560_ = lean_usize_to_nat(v_j_559_);
v___x_561_ = lean_array_get_size(v_cs_558_);
v___x_562_ = lean_nat_dec_lt(v___x_560_, v___x_561_);
if (v___x_562_ == 0)
{
lean_dec(v___x_560_);
return v_x_555_;
}
else
{
lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_580_; 
lean_inc_ref(v_cs_558_);
v_isSharedCheck_580_ = !lean_is_exclusive(v_x_555_);
if (v_isSharedCheck_580_ == 0)
{
lean_object* v_unused_581_; 
v_unused_581_ = lean_ctor_get(v_x_555_, 0);
lean_dec(v_unused_581_);
v___x_564_ = v_x_555_;
v_isShared_565_ = v_isSharedCheck_580_;
goto v_resetjp_563_;
}
else
{
lean_dec(v_x_555_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_580_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
size_t v___x_566_; size_t v___x_567_; size_t v___x_568_; size_t v_i_569_; size_t v___x_570_; size_t v_shift_571_; lean_object* v_v_572_; lean_object* v___x_573_; lean_object* v_xs_x27_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_578_; 
v___x_566_ = ((size_t)1ULL);
v___x_567_ = lean_usize_shift_left(v___x_566_, v_x_557_);
v___x_568_ = lean_usize_sub(v___x_567_, v___x_566_);
v_i_569_ = lean_usize_land(v_x_556_, v___x_568_);
v___x_570_ = ((size_t)5ULL);
v_shift_571_ = lean_usize_sub(v_x_557_, v___x_570_);
v_v_572_ = lean_array_fget(v_cs_558_, v___x_560_);
v___x_573_ = lean_box(0);
v_xs_x27_574_ = lean_array_fset(v_cs_558_, v___x_560_, v___x_573_);
v___x_575_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4(v_c_554_, v_v_572_, v_i_569_, v_shift_571_);
v___x_576_ = lean_array_fset(v_xs_x27_574_, v___x_560_, v___x_575_);
lean_dec(v___x_560_);
if (v_isShared_565_ == 0)
{
lean_ctor_set(v___x_564_, 0, v___x_576_);
v___x_578_ = v___x_564_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v___x_576_);
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
else
{
lean_object* v_vs_582_; lean_object* v___x_583_; lean_object* v___x_584_; uint8_t v___x_585_; 
v_vs_582_ = lean_ctor_get(v_x_555_, 0);
v___x_583_ = lean_usize_to_nat(v_x_556_);
v___x_584_ = lean_array_get_size(v_vs_582_);
v___x_585_ = lean_nat_dec_lt(v___x_583_, v___x_584_);
if (v___x_585_ == 0)
{
lean_dec(v___x_583_);
return v_x_555_;
}
else
{
lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_599_; 
lean_inc_ref(v_vs_582_);
v_isSharedCheck_599_ = !lean_is_exclusive(v_x_555_);
if (v_isSharedCheck_599_ == 0)
{
lean_object* v_unused_600_; 
v_unused_600_ = lean_ctor_get(v_x_555_, 0);
lean_dec(v_unused_600_);
v___x_587_ = v_x_555_;
v_isShared_588_ = v_isSharedCheck_599_;
goto v_resetjp_586_;
}
else
{
lean_dec(v_x_555_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_599_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v_v_589_; lean_object* v___x_590_; lean_object* v_xs_x27_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_597_; 
v_v_589_ = lean_array_fget(v_vs_582_, v___x_583_);
v___x_590_ = lean_box(0);
v_xs_x27_591_ = lean_array_fset(v_vs_582_, v___x_583_, v___x_590_);
v___x_592_ = lean_unsigned_to_nat(0u);
v___x_593_ = lean_obj_once(&l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__1, &l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__1_once, _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__1);
v___x_594_ = l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0(v_c_554_, v_v_589_, v___x_593_, v___x_592_);
lean_dec(v_v_589_);
v___x_595_ = lean_array_fset(v_xs_x27_591_, v___x_583_, v___x_594_);
lean_dec(v___x_583_);
if (v_isShared_588_ == 0)
{
lean_ctor_set(v___x_587_, 0, v___x_595_);
v___x_597_ = v___x_587_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v___x_595_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
return v___x_597_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___boxed(lean_object* v_c_601_, lean_object* v_x_602_, lean_object* v_x_603_, lean_object* v_x_604_){
_start:
{
size_t v_x_1876__boxed_605_; size_t v_x_1877__boxed_606_; lean_object* v_res_607_; 
v_x_1876__boxed_605_ = lean_unbox_usize(v_x_603_);
lean_dec(v_x_603_);
v_x_1877__boxed_606_ = lean_unbox_usize(v_x_604_);
lean_dec(v_x_604_);
v_res_607_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4(v_c_601_, v_x_602_, v_x_1876__boxed_605_, v_x_1877__boxed_606_);
lean_dec_ref(v_c_601_);
return v_res_607_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1(lean_object* v_c_608_, lean_object* v_t_609_, lean_object* v_i_610_){
_start:
{
lean_object* v_root_611_; lean_object* v_tail_612_; lean_object* v_size_613_; size_t v_shift_614_; lean_object* v_tailOff_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_643_; 
v_root_611_ = lean_ctor_get(v_t_609_, 0);
v_tail_612_ = lean_ctor_get(v_t_609_, 1);
v_size_613_ = lean_ctor_get(v_t_609_, 2);
v_shift_614_ = lean_ctor_get_usize(v_t_609_, 4);
v_tailOff_615_ = lean_ctor_get(v_t_609_, 3);
v_isSharedCheck_643_ = !lean_is_exclusive(v_t_609_);
if (v_isSharedCheck_643_ == 0)
{
v___x_617_ = v_t_609_;
v_isShared_618_ = v_isSharedCheck_643_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_tailOff_615_);
lean_inc(v_size_613_);
lean_inc(v_tail_612_);
lean_inc(v_root_611_);
lean_dec(v_t_609_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_643_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
uint8_t v___x_619_; 
v___x_619_ = lean_nat_dec_le(v_tailOff_615_, v_i_610_);
if (v___x_619_ == 0)
{
size_t v___x_620_; lean_object* v___x_621_; lean_object* v___x_623_; 
v___x_620_ = lean_usize_of_nat(v_i_610_);
v___x_621_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4(v_c_608_, v_root_611_, v___x_620_, v_shift_614_);
if (v_isShared_618_ == 0)
{
lean_ctor_set(v___x_617_, 0, v___x_621_);
v___x_623_ = v___x_617_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v___x_621_);
lean_ctor_set(v_reuseFailAlloc_624_, 1, v_tail_612_);
lean_ctor_set(v_reuseFailAlloc_624_, 2, v_size_613_);
lean_ctor_set(v_reuseFailAlloc_624_, 3, v_tailOff_615_);
lean_ctor_set_usize(v_reuseFailAlloc_624_, 4, v_shift_614_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
return v___x_623_;
}
}
else
{
lean_object* v___x_625_; lean_object* v___x_626_; uint8_t v___x_627_; 
v___x_625_ = lean_nat_sub(v_i_610_, v_tailOff_615_);
v___x_626_ = lean_array_get_size(v_tail_612_);
v___x_627_ = lean_nat_dec_lt(v___x_625_, v___x_626_);
if (v___x_627_ == 0)
{
lean_object* v___x_629_; 
lean_dec(v___x_625_);
if (v_isShared_618_ == 0)
{
v___x_629_ = v___x_617_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v_root_611_);
lean_ctor_set(v_reuseFailAlloc_630_, 1, v_tail_612_);
lean_ctor_set(v_reuseFailAlloc_630_, 2, v_size_613_);
lean_ctor_set(v_reuseFailAlloc_630_, 3, v_tailOff_615_);
lean_ctor_set_usize(v_reuseFailAlloc_630_, 4, v_shift_614_);
v___x_629_ = v_reuseFailAlloc_630_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
return v___x_629_;
}
}
else
{
lean_object* v_v_631_; lean_object* v___x_632_; lean_object* v_xs_x27_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_641_; 
v_v_631_ = lean_array_fget(v_tail_612_, v___x_625_);
v___x_632_ = lean_box(0);
v_xs_x27_633_ = lean_array_fset(v_tail_612_, v___x_625_, v___x_632_);
v___x_634_ = lean_unsigned_to_nat(32u);
v___x_635_ = lean_mk_empty_array_with_capacity(v___x_634_);
lean_dec_ref(v___x_635_);
v___x_636_ = lean_unsigned_to_nat(0u);
v___x_637_ = lean_obj_once(&l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__1, &l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__1_once, _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__1);
v___x_638_ = l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0(v_c_608_, v_v_631_, v___x_637_, v___x_636_);
lean_dec(v_v_631_);
v___x_639_ = lean_array_fset(v_xs_x27_633_, v___x_625_, v___x_638_);
lean_dec(v___x_625_);
if (v_isShared_618_ == 0)
{
lean_ctor_set(v___x_617_, 1, v___x_639_);
v___x_641_ = v___x_617_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v_root_611_);
lean_ctor_set(v_reuseFailAlloc_642_, 1, v___x_639_);
lean_ctor_set(v_reuseFailAlloc_642_, 2, v_size_613_);
lean_ctor_set(v_reuseFailAlloc_642_, 3, v_tailOff_615_);
lean_ctor_set_usize(v_reuseFailAlloc_642_, 4, v_shift_614_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1___boxed(lean_object* v_c_644_, lean_object* v_t_645_, lean_object* v_i_646_){
_start:
{
lean_object* v_res_647_; 
v_res_647_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1(v_c_644_, v_t_645_, v_i_646_);
lean_dec(v_i_646_);
lean_dec_ref(v_c_644_);
return v_res_647_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__0(lean_object* v_c_648_, lean_object* v_v_649_, lean_object* v_s_650_){
_start:
{
lean_object* v_vars_651_; lean_object* v_varMap_652_; lean_object* v_varsHistory_653_; lean_object* v_natToIntMap_654_; lean_object* v_natDef_655_; lean_object* v_dvds_656_; lean_object* v_lowers_657_; lean_object* v_uppers_658_; lean_object* v_diseqs_659_; lean_object* v_elimEqs_660_; lean_object* v_active_661_; lean_object* v_elimStack_662_; lean_object* v_occurs_663_; lean_object* v_assignment_664_; lean_object* v_nextCnstrId_665_; uint8_t v_caseSplits_666_; lean_object* v_steps_667_; lean_object* v_penalties_668_; lean_object* v_numReorderRequests_669_; lean_object* v_conflict_x3f_670_; lean_object* v_diseqSplits_671_; lean_object* v_divMod_672_; uint8_t v_usedCommRing_673_; lean_object* v_nonlinearOccs_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_682_; 
v_vars_651_ = lean_ctor_get(v_s_650_, 0);
v_varMap_652_ = lean_ctor_get(v_s_650_, 1);
v_varsHistory_653_ = lean_ctor_get(v_s_650_, 2);
v_natToIntMap_654_ = lean_ctor_get(v_s_650_, 3);
v_natDef_655_ = lean_ctor_get(v_s_650_, 4);
v_dvds_656_ = lean_ctor_get(v_s_650_, 5);
v_lowers_657_ = lean_ctor_get(v_s_650_, 6);
v_uppers_658_ = lean_ctor_get(v_s_650_, 7);
v_diseqs_659_ = lean_ctor_get(v_s_650_, 8);
v_elimEqs_660_ = lean_ctor_get(v_s_650_, 9);
v_active_661_ = lean_ctor_get(v_s_650_, 10);
v_elimStack_662_ = lean_ctor_get(v_s_650_, 11);
v_occurs_663_ = lean_ctor_get(v_s_650_, 12);
v_assignment_664_ = lean_ctor_get(v_s_650_, 13);
v_nextCnstrId_665_ = lean_ctor_get(v_s_650_, 14);
v_caseSplits_666_ = lean_ctor_get_uint8(v_s_650_, sizeof(void*)*22);
v_steps_667_ = lean_ctor_get(v_s_650_, 15);
v_penalties_668_ = lean_ctor_get(v_s_650_, 16);
v_numReorderRequests_669_ = lean_ctor_get(v_s_650_, 17);
v_conflict_x3f_670_ = lean_ctor_get(v_s_650_, 18);
v_diseqSplits_671_ = lean_ctor_get(v_s_650_, 19);
v_divMod_672_ = lean_ctor_get(v_s_650_, 20);
v_usedCommRing_673_ = lean_ctor_get_uint8(v_s_650_, sizeof(void*)*22 + 1);
v_nonlinearOccs_674_ = lean_ctor_get(v_s_650_, 21);
v_isSharedCheck_682_ = !lean_is_exclusive(v_s_650_);
if (v_isSharedCheck_682_ == 0)
{
v___x_676_ = v_s_650_;
v_isShared_677_ = v_isSharedCheck_682_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_nonlinearOccs_674_);
lean_inc(v_divMod_672_);
lean_inc(v_diseqSplits_671_);
lean_inc(v_conflict_x3f_670_);
lean_inc(v_numReorderRequests_669_);
lean_inc(v_penalties_668_);
lean_inc(v_steps_667_);
lean_inc(v_nextCnstrId_665_);
lean_inc(v_assignment_664_);
lean_inc(v_occurs_663_);
lean_inc(v_elimStack_662_);
lean_inc(v_active_661_);
lean_inc(v_elimEqs_660_);
lean_inc(v_diseqs_659_);
lean_inc(v_uppers_658_);
lean_inc(v_lowers_657_);
lean_inc(v_dvds_656_);
lean_inc(v_natDef_655_);
lean_inc(v_natToIntMap_654_);
lean_inc(v_varsHistory_653_);
lean_inc(v_varMap_652_);
lean_inc(v_vars_651_);
lean_dec(v_s_650_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_682_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v___x_678_; lean_object* v___x_680_; 
v___x_678_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1(v_c_648_, v_uppers_658_, v_v_649_);
if (v_isShared_677_ == 0)
{
lean_ctor_set(v___x_676_, 7, v___x_678_);
v___x_680_ = v___x_676_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(0, 22, 2);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v_vars_651_);
lean_ctor_set(v_reuseFailAlloc_681_, 1, v_varMap_652_);
lean_ctor_set(v_reuseFailAlloc_681_, 2, v_varsHistory_653_);
lean_ctor_set(v_reuseFailAlloc_681_, 3, v_natToIntMap_654_);
lean_ctor_set(v_reuseFailAlloc_681_, 4, v_natDef_655_);
lean_ctor_set(v_reuseFailAlloc_681_, 5, v_dvds_656_);
lean_ctor_set(v_reuseFailAlloc_681_, 6, v_lowers_657_);
lean_ctor_set(v_reuseFailAlloc_681_, 7, v___x_678_);
lean_ctor_set(v_reuseFailAlloc_681_, 8, v_diseqs_659_);
lean_ctor_set(v_reuseFailAlloc_681_, 9, v_elimEqs_660_);
lean_ctor_set(v_reuseFailAlloc_681_, 10, v_active_661_);
lean_ctor_set(v_reuseFailAlloc_681_, 11, v_elimStack_662_);
lean_ctor_set(v_reuseFailAlloc_681_, 12, v_occurs_663_);
lean_ctor_set(v_reuseFailAlloc_681_, 13, v_assignment_664_);
lean_ctor_set(v_reuseFailAlloc_681_, 14, v_nextCnstrId_665_);
lean_ctor_set(v_reuseFailAlloc_681_, 15, v_steps_667_);
lean_ctor_set(v_reuseFailAlloc_681_, 16, v_penalties_668_);
lean_ctor_set(v_reuseFailAlloc_681_, 17, v_numReorderRequests_669_);
lean_ctor_set(v_reuseFailAlloc_681_, 18, v_conflict_x3f_670_);
lean_ctor_set(v_reuseFailAlloc_681_, 19, v_diseqSplits_671_);
lean_ctor_set(v_reuseFailAlloc_681_, 20, v_divMod_672_);
lean_ctor_set(v_reuseFailAlloc_681_, 21, v_nonlinearOccs_674_);
lean_ctor_set_uint8(v_reuseFailAlloc_681_, sizeof(void*)*22, v_caseSplits_666_);
lean_ctor_set_uint8(v_reuseFailAlloc_681_, sizeof(void*)*22 + 1, v_usedCommRing_673_);
v___x_680_ = v_reuseFailAlloc_681_;
goto v_reusejp_679_;
}
v_reusejp_679_:
{
return v___x_680_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__0___boxed(lean_object* v_c_683_, lean_object* v_v_684_, lean_object* v_s_685_){
_start:
{
lean_object* v_res_686_; 
v_res_686_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__0(v_c_683_, v_v_684_, v_s_685_);
lean_dec(v_v_684_);
lean_dec_ref(v_c_683_);
return v_res_686_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__1(lean_object* v_c_687_, lean_object* v_v_688_, lean_object* v_s_689_){
_start:
{
lean_object* v_vars_690_; lean_object* v_varMap_691_; lean_object* v_varsHistory_692_; lean_object* v_natToIntMap_693_; lean_object* v_natDef_694_; lean_object* v_dvds_695_; lean_object* v_lowers_696_; lean_object* v_uppers_697_; lean_object* v_diseqs_698_; lean_object* v_elimEqs_699_; lean_object* v_active_700_; lean_object* v_elimStack_701_; lean_object* v_occurs_702_; lean_object* v_assignment_703_; lean_object* v_nextCnstrId_704_; uint8_t v_caseSplits_705_; lean_object* v_steps_706_; lean_object* v_penalties_707_; lean_object* v_numReorderRequests_708_; lean_object* v_conflict_x3f_709_; lean_object* v_diseqSplits_710_; lean_object* v_divMod_711_; uint8_t v_usedCommRing_712_; lean_object* v_nonlinearOccs_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_721_; 
v_vars_690_ = lean_ctor_get(v_s_689_, 0);
v_varMap_691_ = lean_ctor_get(v_s_689_, 1);
v_varsHistory_692_ = lean_ctor_get(v_s_689_, 2);
v_natToIntMap_693_ = lean_ctor_get(v_s_689_, 3);
v_natDef_694_ = lean_ctor_get(v_s_689_, 4);
v_dvds_695_ = lean_ctor_get(v_s_689_, 5);
v_lowers_696_ = lean_ctor_get(v_s_689_, 6);
v_uppers_697_ = lean_ctor_get(v_s_689_, 7);
v_diseqs_698_ = lean_ctor_get(v_s_689_, 8);
v_elimEqs_699_ = lean_ctor_get(v_s_689_, 9);
v_active_700_ = lean_ctor_get(v_s_689_, 10);
v_elimStack_701_ = lean_ctor_get(v_s_689_, 11);
v_occurs_702_ = lean_ctor_get(v_s_689_, 12);
v_assignment_703_ = lean_ctor_get(v_s_689_, 13);
v_nextCnstrId_704_ = lean_ctor_get(v_s_689_, 14);
v_caseSplits_705_ = lean_ctor_get_uint8(v_s_689_, sizeof(void*)*22);
v_steps_706_ = lean_ctor_get(v_s_689_, 15);
v_penalties_707_ = lean_ctor_get(v_s_689_, 16);
v_numReorderRequests_708_ = lean_ctor_get(v_s_689_, 17);
v_conflict_x3f_709_ = lean_ctor_get(v_s_689_, 18);
v_diseqSplits_710_ = lean_ctor_get(v_s_689_, 19);
v_divMod_711_ = lean_ctor_get(v_s_689_, 20);
v_usedCommRing_712_ = lean_ctor_get_uint8(v_s_689_, sizeof(void*)*22 + 1);
v_nonlinearOccs_713_ = lean_ctor_get(v_s_689_, 21);
v_isSharedCheck_721_ = !lean_is_exclusive(v_s_689_);
if (v_isSharedCheck_721_ == 0)
{
v___x_715_ = v_s_689_;
v_isShared_716_ = v_isSharedCheck_721_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_nonlinearOccs_713_);
lean_inc(v_divMod_711_);
lean_inc(v_diseqSplits_710_);
lean_inc(v_conflict_x3f_709_);
lean_inc(v_numReorderRequests_708_);
lean_inc(v_penalties_707_);
lean_inc(v_steps_706_);
lean_inc(v_nextCnstrId_704_);
lean_inc(v_assignment_703_);
lean_inc(v_occurs_702_);
lean_inc(v_elimStack_701_);
lean_inc(v_active_700_);
lean_inc(v_elimEqs_699_);
lean_inc(v_diseqs_698_);
lean_inc(v_uppers_697_);
lean_inc(v_lowers_696_);
lean_inc(v_dvds_695_);
lean_inc(v_natDef_694_);
lean_inc(v_natToIntMap_693_);
lean_inc(v_varsHistory_692_);
lean_inc(v_varMap_691_);
lean_inc(v_vars_690_);
lean_dec(v_s_689_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_721_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
lean_object* v___x_717_; lean_object* v___x_719_; 
v___x_717_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1(v_c_687_, v_lowers_696_, v_v_688_);
if (v_isShared_716_ == 0)
{
lean_ctor_set(v___x_715_, 6, v___x_717_);
v___x_719_ = v___x_715_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(0, 22, 2);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v_vars_690_);
lean_ctor_set(v_reuseFailAlloc_720_, 1, v_varMap_691_);
lean_ctor_set(v_reuseFailAlloc_720_, 2, v_varsHistory_692_);
lean_ctor_set(v_reuseFailAlloc_720_, 3, v_natToIntMap_693_);
lean_ctor_set(v_reuseFailAlloc_720_, 4, v_natDef_694_);
lean_ctor_set(v_reuseFailAlloc_720_, 5, v_dvds_695_);
lean_ctor_set(v_reuseFailAlloc_720_, 6, v___x_717_);
lean_ctor_set(v_reuseFailAlloc_720_, 7, v_uppers_697_);
lean_ctor_set(v_reuseFailAlloc_720_, 8, v_diseqs_698_);
lean_ctor_set(v_reuseFailAlloc_720_, 9, v_elimEqs_699_);
lean_ctor_set(v_reuseFailAlloc_720_, 10, v_active_700_);
lean_ctor_set(v_reuseFailAlloc_720_, 11, v_elimStack_701_);
lean_ctor_set(v_reuseFailAlloc_720_, 12, v_occurs_702_);
lean_ctor_set(v_reuseFailAlloc_720_, 13, v_assignment_703_);
lean_ctor_set(v_reuseFailAlloc_720_, 14, v_nextCnstrId_704_);
lean_ctor_set(v_reuseFailAlloc_720_, 15, v_steps_706_);
lean_ctor_set(v_reuseFailAlloc_720_, 16, v_penalties_707_);
lean_ctor_set(v_reuseFailAlloc_720_, 17, v_numReorderRequests_708_);
lean_ctor_set(v_reuseFailAlloc_720_, 18, v_conflict_x3f_709_);
lean_ctor_set(v_reuseFailAlloc_720_, 19, v_diseqSplits_710_);
lean_ctor_set(v_reuseFailAlloc_720_, 20, v_divMod_711_);
lean_ctor_set(v_reuseFailAlloc_720_, 21, v_nonlinearOccs_713_);
lean_ctor_set_uint8(v_reuseFailAlloc_720_, sizeof(void*)*22, v_caseSplits_705_);
lean_ctor_set_uint8(v_reuseFailAlloc_720_, sizeof(void*)*22 + 1, v_usedCommRing_712_);
v___x_719_ = v_reuseFailAlloc_720_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
return v___x_719_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__1___boxed(lean_object* v_c_722_, lean_object* v_v_723_, lean_object* v_s_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__1(v_c_722_, v_v_723_, v_s_724_);
lean_dec(v_v_723_);
lean_dec_ref(v_c_722_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg(lean_object* v_c_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_){
_start:
{
lean_object* v_p_733_; 
v_p_733_ = lean_ctor_get(v_c_726_, 0);
if (lean_obj_tag(v_p_733_) == 1)
{
lean_object* v_k_734_; lean_object* v_v_735_; lean_object* v___x_736_; uint8_t v___x_737_; 
v_k_734_ = lean_ctor_get(v_p_733_, 0);
v_v_735_ = lean_ctor_get(v_p_733_, 1);
lean_inc(v_v_735_);
v___x_736_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9);
v___x_737_ = lean_int_dec_lt(v_k_734_, v___x_736_);
if (v___x_737_ == 0)
{
lean_object* v___f_738_; lean_object* v___x_739_; lean_object* v___x_740_; 
v___f_738_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_738_, 0, v_c_726_);
lean_closure_set(v___f_738_, 1, v_v_735_);
v___x_739_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_740_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_739_, v___f_738_, v_a_727_);
return v___x_740_;
}
else
{
lean_object* v___f_741_; lean_object* v___x_742_; lean_object* v___x_743_; 
v___f_741_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_741_, 0, v_c_726_);
lean_closure_set(v___f_741_, 1, v_v_735_);
v___x_742_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_743_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_742_, v___f_741_, v_a_727_);
return v___x_743_;
}
}
else
{
lean_object* v___x_744_; 
v___x_744_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___redArg(v_c_726_, v_a_727_, v_a_728_, v_a_729_, v_a_730_, v_a_731_);
return v___x_744_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___boxed(lean_object* v_c_745_, lean_object* v_a_746_, lean_object* v_a_747_, lean_object* v_a_748_, lean_object* v_a_749_, lean_object* v_a_750_, lean_object* v_a_751_){
_start:
{
lean_object* v_res_752_; 
v_res_752_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg(v_c_745_, v_a_746_, v_a_747_, v_a_748_, v_a_749_, v_a_750_);
lean_dec(v_a_750_);
lean_dec_ref(v_a_749_);
lean_dec(v_a_748_);
lean_dec_ref(v_a_747_);
lean_dec(v_a_746_);
return v_res_752_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase(lean_object* v_c_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_, lean_object* v_a_757_, lean_object* v_a_758_, lean_object* v_a_759_, lean_object* v_a_760_, lean_object* v_a_761_, lean_object* v_a_762_, lean_object* v_a_763_){
_start:
{
lean_object* v___x_765_; 
v___x_765_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg(v_c_753_, v_a_754_, v_a_760_, v_a_761_, v_a_762_, v_a_763_);
return v___x_765_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___boxed(lean_object* v_c_766_, lean_object* v_a_767_, lean_object* v_a_768_, lean_object* v_a_769_, lean_object* v_a_770_, lean_object* v_a_771_, lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_, lean_object* v_a_775_, lean_object* v_a_776_, lean_object* v_a_777_){
_start:
{
lean_object* v_res_778_; 
v_res_778_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase(v_c_766_, v_a_767_, v_a_768_, v_a_769_, v_a_770_, v_a_771_, v_a_772_, v_a_773_, v_a_774_, v_a_775_, v_a_776_);
lean_dec(v_a_776_);
lean_dec_ref(v_a_775_);
lean_dec(v_a_774_);
lean_dec_ref(v_a_773_);
lean_dec(v_a_772_);
lean_dec_ref(v_a_771_);
lean_dec(v_a_770_);
lean_dec_ref(v_a_769_);
lean_dec(v_a_768_);
lean_dec(v_a_767_);
return v_res_778_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5(void){
_start:
{
lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; 
v___x_792_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4));
v___x_793_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__5));
v___x_794_ = l_Lean_Name_append(v___x_793_, v___x_792_);
return v___x_794_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__7(void){
_start:
{
lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_796_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__6));
v___x_797_ = l_Lean_stringToMessageData(v___x_796_);
return v___x_797_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3(lean_object* v_c_798_, lean_object* v_as_799_, size_t v_sz_800_, size_t v_i_801_, lean_object* v_b_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_){
_start:
{
uint8_t v___x_814_; 
v___x_814_ = lean_usize_dec_lt(v_i_801_, v_sz_800_);
if (v___x_814_ == 0)
{
lean_object* v___x_815_; 
lean_dec_ref(v_c_798_);
v___x_815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_815_, 0, v_b_802_);
return v___x_815_;
}
else
{
lean_object* v_snd_816_; lean_object* v___x_818_; uint8_t v_isShared_819_; uint8_t v_isSharedCheck_905_; 
v_snd_816_ = lean_ctor_get(v_b_802_, 1);
v_isSharedCheck_905_ = !lean_is_exclusive(v_b_802_);
if (v_isSharedCheck_905_ == 0)
{
lean_object* v_unused_906_; 
v_unused_906_ = lean_ctor_get(v_b_802_, 0);
lean_dec(v_unused_906_);
v___x_818_ = v_b_802_;
v_isShared_819_ = v_isSharedCheck_905_;
goto v_resetjp_817_;
}
else
{
lean_inc(v_snd_816_);
lean_dec(v_b_802_);
v___x_818_ = lean_box(0);
v_isShared_819_ = v_isSharedCheck_905_;
goto v_resetjp_817_;
}
v_resetjp_817_:
{
lean_object* v_p_820_; lean_object* v_a_821_; lean_object* v_p_822_; lean_object* v___x_823_; uint8_t v___x_824_; 
v_p_820_ = lean_ctor_get(v_c_798_, 0);
v_a_821_ = lean_array_uget_borrowed(v_as_799_, v_i_801_);
v_p_822_ = lean_ctor_get(v_a_821_, 0);
v___x_823_ = lean_box(0);
v___x_824_ = l_Int_Internal_Linear_Poly_isNegEq(v_p_820_, v_p_822_);
if (v___x_824_ == 0)
{
lean_object* v___x_825_; size_t v___x_826_; size_t v___x_827_; 
lean_del_object(v___x_818_);
lean_dec(v_snd_816_);
v___x_825_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__1));
v___x_826_ = ((size_t)1ULL);
v___x_827_ = lean_usize_add(v_i_801_, v___x_826_);
v_i_801_ = v___x_827_;
v_b_802_ = v___x_825_;
goto _start;
}
else
{
lean_object* v___x_829_; 
lean_inc_ref(v_p_820_);
lean_inc(v_a_821_);
v___x_829_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg(v_a_821_, v___y_803_, v___y_809_, v___y_810_, v___y_811_, v___y_812_);
if (lean_obj_tag(v___x_829_) == 0)
{
lean_object* v_toCold_830_; lean_object* v_options_831_; lean_object* v_inheritedTraceOptions_832_; uint8_t v_hasTrace_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___y_838_; lean_object* v___y_839_; lean_object* v___y_840_; lean_object* v___y_841_; lean_object* v___y_842_; lean_object* v___y_843_; lean_object* v___y_844_; lean_object* v___y_845_; lean_object* v___y_846_; lean_object* v___y_847_; 
lean_dec_ref_known(v___x_829_, 1);
v_toCold_830_ = lean_ctor_get(v___y_811_, 0);
v_options_831_ = lean_ctor_get(v_toCold_830_, 2);
v_inheritedTraceOptions_832_ = lean_ctor_get(v_toCold_830_, 11);
v_hasTrace_833_ = lean_ctor_get_uint8(v_options_831_, sizeof(void*)*1);
lean_inc(v_a_821_);
v___x_834_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_834_, 0, v_c_798_);
lean_ctor_set(v___x_834_, 1, v_a_821_);
v___x_835_ = lean_box(0);
v___x_836_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_836_, 0, v_p_820_);
lean_ctor_set(v___x_836_, 1, v___x_834_);
lean_ctor_set(v___x_836_, 2, v___x_835_);
if (v_hasTrace_833_ == 0)
{
v___y_838_ = v___y_803_;
v___y_839_ = v___y_804_;
v___y_840_ = v___y_805_;
v___y_841_ = v___y_806_;
v___y_842_ = v___y_807_;
v___y_843_ = v___y_808_;
v___y_844_ = v___y_809_;
v___y_845_ = v___y_810_;
v___y_846_ = v___y_811_;
v___y_847_ = v___y_812_;
goto v___jp_837_;
}
else
{
lean_object* v___x_873_; lean_object* v___x_874_; uint8_t v___x_875_; 
v___x_873_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4));
v___x_874_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5);
v___x_875_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_832_, v_options_831_, v___x_874_);
if (v___x_875_ == 0)
{
v___y_838_ = v___y_803_;
v___y_839_ = v___y_804_;
v___y_840_ = v___y_805_;
v___y_841_ = v___y_806_;
v___y_842_ = v___y_807_;
v___y_843_ = v___y_808_;
v___y_844_ = v___y_809_;
v___y_845_ = v___y_810_;
v___y_846_ = v___y_811_;
v___y_847_ = v___y_812_;
goto v___jp_837_;
}
else
{
lean_object* v___x_876_; 
lean_inc_ref(v___x_836_);
v___x_876_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(v___x_836_, v___y_803_, v___y_811_);
if (lean_obj_tag(v___x_876_) == 0)
{
lean_object* v_a_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; 
v_a_877_ = lean_ctor_get(v___x_876_, 0);
lean_inc(v_a_877_);
lean_dec_ref_known(v___x_876_, 1);
v___x_878_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__7);
v___x_879_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_879_, 0, v___x_878_);
lean_ctor_set(v___x_879_, 1, v_a_877_);
v___x_880_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v___x_873_, v___x_879_, v___y_809_, v___y_810_, v___y_811_, v___y_812_);
if (lean_obj_tag(v___x_880_) == 0)
{
lean_dec_ref_known(v___x_880_, 1);
v___y_838_ = v___y_803_;
v___y_839_ = v___y_804_;
v___y_840_ = v___y_805_;
v___y_841_ = v___y_806_;
v___y_842_ = v___y_807_;
v___y_843_ = v___y_808_;
v___y_844_ = v___y_809_;
v___y_845_ = v___y_810_;
v___y_846_ = v___y_811_;
v___y_847_ = v___y_812_;
goto v___jp_837_;
}
else
{
lean_object* v_a_881_; lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_888_; 
lean_dec_ref_known(v___x_836_, 3);
lean_del_object(v___x_818_);
lean_dec(v_snd_816_);
v_a_881_ = lean_ctor_get(v___x_880_, 0);
v_isSharedCheck_888_ = !lean_is_exclusive(v___x_880_);
if (v_isSharedCheck_888_ == 0)
{
v___x_883_ = v___x_880_;
v_isShared_884_ = v_isSharedCheck_888_;
goto v_resetjp_882_;
}
else
{
lean_inc(v_a_881_);
lean_dec(v___x_880_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_888_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
lean_object* v___x_886_; 
if (v_isShared_884_ == 0)
{
v___x_886_ = v___x_883_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v_a_881_);
v___x_886_ = v_reuseFailAlloc_887_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
return v___x_886_;
}
}
}
}
else
{
lean_object* v_a_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_896_; 
lean_dec_ref_known(v___x_836_, 3);
lean_del_object(v___x_818_);
lean_dec(v_snd_816_);
v_a_889_ = lean_ctor_get(v___x_876_, 0);
v_isSharedCheck_896_ = !lean_is_exclusive(v___x_876_);
if (v_isSharedCheck_896_ == 0)
{
v___x_891_ = v___x_876_;
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
else
{
lean_inc(v_a_889_);
lean_dec(v___x_876_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
lean_object* v___x_894_; 
if (v_isShared_892_ == 0)
{
v___x_894_ = v___x_891_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v_a_889_);
v___x_894_ = v_reuseFailAlloc_895_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
return v___x_894_;
}
}
}
}
}
v___jp_837_:
{
lean_object* v___x_848_; 
lean_inc(v___y_847_);
lean_inc_ref(v___y_846_);
lean_inc(v___y_845_);
lean_inc_ref(v___y_844_);
lean_inc(v___y_843_);
lean_inc_ref(v___y_842_);
lean_inc(v___y_841_);
lean_inc_ref(v___y_840_);
lean_inc(v___y_839_);
lean_inc(v___y_838_);
v___x_848_ = lean_grind_cutsat_assert_eq(v___x_836_, v___y_838_, v___y_839_, v___y_840_, v___y_841_, v___y_842_, v___y_843_, v___y_844_, v___y_845_, v___y_846_, v___y_847_);
if (lean_obj_tag(v___x_848_) == 0)
{
lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_863_; 
v_isSharedCheck_863_ = !lean_is_exclusive(v___x_848_);
if (v_isSharedCheck_863_ == 0)
{
lean_object* v_unused_864_; 
v_unused_864_ = lean_ctor_get(v___x_848_, 0);
lean_dec(v_unused_864_);
v___x_850_ = v___x_848_;
v_isShared_851_ = v_isSharedCheck_863_;
goto v_resetjp_849_;
}
else
{
lean_dec(v___x_848_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_863_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_855_; 
v___x_852_ = lean_box(v___x_824_);
v___x_853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_853_, 0, v___x_852_);
if (v_isShared_819_ == 0)
{
lean_ctor_set(v___x_818_, 1, v___x_823_);
lean_ctor_set(v___x_818_, 0, v___x_853_);
v___x_855_ = v___x_818_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v___x_853_);
lean_ctor_set(v_reuseFailAlloc_862_, 1, v___x_823_);
v___x_855_ = v_reuseFailAlloc_862_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_860_; 
v___x_856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_856_, 0, v___x_855_);
v___x_857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_857_, 0, v___x_856_);
v___x_858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_858_, 0, v___x_857_);
lean_ctor_set(v___x_858_, 1, v_snd_816_);
if (v_isShared_851_ == 0)
{
lean_ctor_set(v___x_850_, 0, v___x_858_);
v___x_860_ = v___x_850_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v___x_858_);
v___x_860_ = v_reuseFailAlloc_861_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
return v___x_860_;
}
}
}
}
else
{
lean_object* v_a_865_; lean_object* v___x_867_; uint8_t v_isShared_868_; uint8_t v_isSharedCheck_872_; 
lean_del_object(v___x_818_);
lean_dec(v_snd_816_);
v_a_865_ = lean_ctor_get(v___x_848_, 0);
v_isSharedCheck_872_ = !lean_is_exclusive(v___x_848_);
if (v_isSharedCheck_872_ == 0)
{
v___x_867_ = v___x_848_;
v_isShared_868_ = v_isSharedCheck_872_;
goto v_resetjp_866_;
}
else
{
lean_inc(v_a_865_);
lean_dec(v___x_848_);
v___x_867_ = lean_box(0);
v_isShared_868_ = v_isSharedCheck_872_;
goto v_resetjp_866_;
}
v_resetjp_866_:
{
lean_object* v___x_870_; 
if (v_isShared_868_ == 0)
{
v___x_870_ = v___x_867_;
goto v_reusejp_869_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v_a_865_);
v___x_870_ = v_reuseFailAlloc_871_;
goto v_reusejp_869_;
}
v_reusejp_869_:
{
return v___x_870_;
}
}
}
}
}
else
{
lean_object* v_a_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_904_; 
lean_dec_ref(v_p_820_);
lean_del_object(v___x_818_);
lean_dec(v_snd_816_);
lean_dec_ref(v_c_798_);
v_a_897_ = lean_ctor_get(v___x_829_, 0);
v_isSharedCheck_904_ = !lean_is_exclusive(v___x_829_);
if (v_isSharedCheck_904_ == 0)
{
v___x_899_ = v___x_829_;
v_isShared_900_ = v_isSharedCheck_904_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_a_897_);
lean_dec(v___x_829_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_904_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v___x_902_; 
if (v_isShared_900_ == 0)
{
v___x_902_ = v___x_899_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v_a_897_);
v___x_902_ = v_reuseFailAlloc_903_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
return v___x_902_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_c_907_, lean_object* v_as_908_, lean_object* v_sz_909_, lean_object* v_i_910_, lean_object* v_b_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_){
_start:
{
size_t v_sz_boxed_923_; size_t v_i_boxed_924_; lean_object* v_res_925_; 
v_sz_boxed_923_ = lean_unbox_usize(v_sz_909_);
lean_dec(v_sz_909_);
v_i_boxed_924_ = lean_unbox_usize(v_i_910_);
lean_dec(v_i_910_);
v_res_925_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3(v_c_907_, v_as_908_, v_sz_boxed_923_, v_i_boxed_924_, v_b_911_, v___y_912_, v___y_913_, v___y_914_, v___y_915_, v___y_916_, v___y_917_, v___y_918_, v___y_919_, v___y_920_, v___y_921_);
lean_dec(v___y_921_);
lean_dec_ref(v___y_920_);
lean_dec(v___y_919_);
lean_dec_ref(v___y_918_);
lean_dec(v___y_917_);
lean_dec_ref(v___y_916_);
lean_dec(v___y_915_);
lean_dec_ref(v___y_914_);
lean_dec(v___y_913_);
lean_dec(v___y_912_);
lean_dec_ref(v_as_908_);
return v_res_925_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2(lean_object* v_c_932_, lean_object* v_as_933_, size_t v_sz_934_, size_t v_i_935_, lean_object* v_b_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_){
_start:
{
uint8_t v___x_948_; 
v___x_948_ = lean_usize_dec_lt(v_i_935_, v_sz_934_);
if (v___x_948_ == 0)
{
lean_object* v___x_949_; 
lean_dec_ref(v_c_932_);
v___x_949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_949_, 0, v_b_936_);
return v___x_949_;
}
else
{
lean_object* v_snd_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_1039_; 
v_snd_950_ = lean_ctor_get(v_b_936_, 1);
v_isSharedCheck_1039_ = !lean_is_exclusive(v_b_936_);
if (v_isSharedCheck_1039_ == 0)
{
lean_object* v_unused_1040_; 
v_unused_1040_ = lean_ctor_get(v_b_936_, 0);
lean_dec(v_unused_1040_);
v___x_952_ = v_b_936_;
v_isShared_953_ = v_isSharedCheck_1039_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_snd_950_);
lean_dec(v_b_936_);
v___x_952_ = lean_box(0);
v_isShared_953_ = v_isSharedCheck_1039_;
goto v_resetjp_951_;
}
v_resetjp_951_:
{
lean_object* v_p_954_; lean_object* v_a_955_; lean_object* v_p_956_; lean_object* v___x_957_; uint8_t v___x_958_; 
v_p_954_ = lean_ctor_get(v_c_932_, 0);
v_a_955_ = lean_array_uget_borrowed(v_as_933_, v_i_935_);
v_p_956_ = lean_ctor_get(v_a_955_, 0);
v___x_957_ = lean_box(0);
v___x_958_ = l_Int_Internal_Linear_Poly_isNegEq(v_p_954_, v_p_956_);
if (v___x_958_ == 0)
{
lean_object* v___x_959_; size_t v___x_960_; size_t v___x_961_; lean_object* v___x_962_; 
lean_del_object(v___x_952_);
lean_dec(v_snd_950_);
v___x_959_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___closed__1));
v___x_960_ = ((size_t)1ULL);
v___x_961_ = lean_usize_add(v_i_935_, v___x_960_);
v___x_962_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3(v_c_932_, v_as_933_, v_sz_934_, v___x_961_, v___x_959_, v___y_937_, v___y_938_, v___y_939_, v___y_940_, v___y_941_, v___y_942_, v___y_943_, v___y_944_, v___y_945_, v___y_946_);
return v___x_962_;
}
else
{
lean_object* v___x_963_; 
lean_inc_ref(v_p_954_);
lean_inc(v_a_955_);
v___x_963_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg(v_a_955_, v___y_937_, v___y_943_, v___y_944_, v___y_945_, v___y_946_);
if (lean_obj_tag(v___x_963_) == 0)
{
lean_object* v_toCold_964_; lean_object* v_options_965_; lean_object* v_inheritedTraceOptions_966_; uint8_t v_hasTrace_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___y_972_; lean_object* v___y_973_; lean_object* v___y_974_; lean_object* v___y_975_; lean_object* v___y_976_; lean_object* v___y_977_; lean_object* v___y_978_; lean_object* v___y_979_; lean_object* v___y_980_; lean_object* v___y_981_; 
lean_dec_ref_known(v___x_963_, 1);
v_toCold_964_ = lean_ctor_get(v___y_945_, 0);
v_options_965_ = lean_ctor_get(v_toCold_964_, 2);
v_inheritedTraceOptions_966_ = lean_ctor_get(v_toCold_964_, 11);
v_hasTrace_967_ = lean_ctor_get_uint8(v_options_965_, sizeof(void*)*1);
lean_inc(v_a_955_);
v___x_968_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_968_, 0, v_c_932_);
lean_ctor_set(v___x_968_, 1, v_a_955_);
v___x_969_ = lean_box(0);
v___x_970_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_970_, 0, v_p_954_);
lean_ctor_set(v___x_970_, 1, v___x_968_);
lean_ctor_set(v___x_970_, 2, v___x_969_);
if (v_hasTrace_967_ == 0)
{
v___y_972_ = v___y_937_;
v___y_973_ = v___y_938_;
v___y_974_ = v___y_939_;
v___y_975_ = v___y_940_;
v___y_976_ = v___y_941_;
v___y_977_ = v___y_942_;
v___y_978_ = v___y_943_;
v___y_979_ = v___y_944_;
v___y_980_ = v___y_945_;
v___y_981_ = v___y_946_;
goto v___jp_971_;
}
else
{
lean_object* v___x_1007_; lean_object* v___x_1008_; uint8_t v___x_1009_; 
v___x_1007_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4));
v___x_1008_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5);
v___x_1009_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_966_, v_options_965_, v___x_1008_);
if (v___x_1009_ == 0)
{
v___y_972_ = v___y_937_;
v___y_973_ = v___y_938_;
v___y_974_ = v___y_939_;
v___y_975_ = v___y_940_;
v___y_976_ = v___y_941_;
v___y_977_ = v___y_942_;
v___y_978_ = v___y_943_;
v___y_979_ = v___y_944_;
v___y_980_ = v___y_945_;
v___y_981_ = v___y_946_;
goto v___jp_971_;
}
else
{
lean_object* v___x_1010_; 
lean_inc_ref(v___x_970_);
v___x_1010_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(v___x_970_, v___y_937_, v___y_945_);
if (lean_obj_tag(v___x_1010_) == 0)
{
lean_object* v_a_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; 
v_a_1011_ = lean_ctor_get(v___x_1010_, 0);
lean_inc(v_a_1011_);
lean_dec_ref_known(v___x_1010_, 1);
v___x_1012_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__7);
v___x_1013_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1013_, 0, v___x_1012_);
lean_ctor_set(v___x_1013_, 1, v_a_1011_);
v___x_1014_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v___x_1007_, v___x_1013_, v___y_943_, v___y_944_, v___y_945_, v___y_946_);
if (lean_obj_tag(v___x_1014_) == 0)
{
lean_dec_ref_known(v___x_1014_, 1);
v___y_972_ = v___y_937_;
v___y_973_ = v___y_938_;
v___y_974_ = v___y_939_;
v___y_975_ = v___y_940_;
v___y_976_ = v___y_941_;
v___y_977_ = v___y_942_;
v___y_978_ = v___y_943_;
v___y_979_ = v___y_944_;
v___y_980_ = v___y_945_;
v___y_981_ = v___y_946_;
goto v___jp_971_;
}
else
{
lean_object* v_a_1015_; lean_object* v___x_1017_; uint8_t v_isShared_1018_; uint8_t v_isSharedCheck_1022_; 
lean_dec_ref_known(v___x_970_, 3);
lean_del_object(v___x_952_);
lean_dec(v_snd_950_);
v_a_1015_ = lean_ctor_get(v___x_1014_, 0);
v_isSharedCheck_1022_ = !lean_is_exclusive(v___x_1014_);
if (v_isSharedCheck_1022_ == 0)
{
v___x_1017_ = v___x_1014_;
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
else
{
lean_inc(v_a_1015_);
lean_dec(v___x_1014_);
v___x_1017_ = lean_box(0);
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
v_resetjp_1016_:
{
lean_object* v___x_1020_; 
if (v_isShared_1018_ == 0)
{
v___x_1020_ = v___x_1017_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v_a_1015_);
v___x_1020_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
return v___x_1020_;
}
}
}
}
else
{
lean_object* v_a_1023_; lean_object* v___x_1025_; uint8_t v_isShared_1026_; uint8_t v_isSharedCheck_1030_; 
lean_dec_ref_known(v___x_970_, 3);
lean_del_object(v___x_952_);
lean_dec(v_snd_950_);
v_a_1023_ = lean_ctor_get(v___x_1010_, 0);
v_isSharedCheck_1030_ = !lean_is_exclusive(v___x_1010_);
if (v_isSharedCheck_1030_ == 0)
{
v___x_1025_ = v___x_1010_;
v_isShared_1026_ = v_isSharedCheck_1030_;
goto v_resetjp_1024_;
}
else
{
lean_inc(v_a_1023_);
lean_dec(v___x_1010_);
v___x_1025_ = lean_box(0);
v_isShared_1026_ = v_isSharedCheck_1030_;
goto v_resetjp_1024_;
}
v_resetjp_1024_:
{
lean_object* v___x_1028_; 
if (v_isShared_1026_ == 0)
{
v___x_1028_ = v___x_1025_;
goto v_reusejp_1027_;
}
else
{
lean_object* v_reuseFailAlloc_1029_; 
v_reuseFailAlloc_1029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1029_, 0, v_a_1023_);
v___x_1028_ = v_reuseFailAlloc_1029_;
goto v_reusejp_1027_;
}
v_reusejp_1027_:
{
return v___x_1028_;
}
}
}
}
}
v___jp_971_:
{
lean_object* v___x_982_; 
lean_inc(v___y_981_);
lean_inc_ref(v___y_980_);
lean_inc(v___y_979_);
lean_inc_ref(v___y_978_);
lean_inc(v___y_977_);
lean_inc_ref(v___y_976_);
lean_inc(v___y_975_);
lean_inc_ref(v___y_974_);
lean_inc(v___y_973_);
lean_inc(v___y_972_);
v___x_982_ = lean_grind_cutsat_assert_eq(v___x_970_, v___y_972_, v___y_973_, v___y_974_, v___y_975_, v___y_976_, v___y_977_, v___y_978_, v___y_979_, v___y_980_, v___y_981_);
if (lean_obj_tag(v___x_982_) == 0)
{
lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_997_; 
v_isSharedCheck_997_ = !lean_is_exclusive(v___x_982_);
if (v_isSharedCheck_997_ == 0)
{
lean_object* v_unused_998_; 
v_unused_998_ = lean_ctor_get(v___x_982_, 0);
lean_dec(v_unused_998_);
v___x_984_ = v___x_982_;
v_isShared_985_ = v_isSharedCheck_997_;
goto v_resetjp_983_;
}
else
{
lean_dec(v___x_982_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_997_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_989_; 
v___x_986_ = lean_box(v___x_958_);
v___x_987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_987_, 0, v___x_986_);
if (v_isShared_953_ == 0)
{
lean_ctor_set(v___x_952_, 1, v___x_957_);
lean_ctor_set(v___x_952_, 0, v___x_987_);
v___x_989_ = v___x_952_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v___x_987_);
lean_ctor_set(v_reuseFailAlloc_996_, 1, v___x_957_);
v___x_989_ = v_reuseFailAlloc_996_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_994_; 
v___x_990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_990_, 0, v___x_989_);
v___x_991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_991_, 0, v___x_990_);
v___x_992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_992_, 0, v___x_991_);
lean_ctor_set(v___x_992_, 1, v_snd_950_);
if (v_isShared_985_ == 0)
{
lean_ctor_set(v___x_984_, 0, v___x_992_);
v___x_994_ = v___x_984_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v___x_992_);
v___x_994_ = v_reuseFailAlloc_995_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
return v___x_994_;
}
}
}
}
else
{
lean_object* v_a_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1006_; 
lean_del_object(v___x_952_);
lean_dec(v_snd_950_);
v_a_999_ = lean_ctor_get(v___x_982_, 0);
v_isSharedCheck_1006_ = !lean_is_exclusive(v___x_982_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_1001_ = v___x_982_;
v_isShared_1002_ = v_isSharedCheck_1006_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_a_999_);
lean_dec(v___x_982_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1006_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v___x_1004_; 
if (v_isShared_1002_ == 0)
{
v___x_1004_ = v___x_1001_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v_a_999_);
v___x_1004_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
return v___x_1004_;
}
}
}
}
}
else
{
lean_object* v_a_1031_; lean_object* v___x_1033_; uint8_t v_isShared_1034_; uint8_t v_isSharedCheck_1038_; 
lean_dec_ref(v_p_954_);
lean_del_object(v___x_952_);
lean_dec(v_snd_950_);
lean_dec_ref(v_c_932_);
v_a_1031_ = lean_ctor_get(v___x_963_, 0);
v_isSharedCheck_1038_ = !lean_is_exclusive(v___x_963_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1033_ = v___x_963_;
v_isShared_1034_ = v_isSharedCheck_1038_;
goto v_resetjp_1032_;
}
else
{
lean_inc(v_a_1031_);
lean_dec(v___x_963_);
v___x_1033_ = lean_box(0);
v_isShared_1034_ = v_isSharedCheck_1038_;
goto v_resetjp_1032_;
}
v_resetjp_1032_:
{
lean_object* v___x_1036_; 
if (v_isShared_1034_ == 0)
{
v___x_1036_ = v___x_1033_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v_a_1031_);
v___x_1036_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
return v___x_1036_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___boxed(lean_object* v_c_1041_, lean_object* v_as_1042_, lean_object* v_sz_1043_, lean_object* v_i_1044_, lean_object* v_b_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_){
_start:
{
size_t v_sz_boxed_1057_; size_t v_i_boxed_1058_; lean_object* v_res_1059_; 
v_sz_boxed_1057_ = lean_unbox_usize(v_sz_1043_);
lean_dec(v_sz_1043_);
v_i_boxed_1058_ = lean_unbox_usize(v_i_1044_);
lean_dec(v_i_1044_);
v_res_1059_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2(v_c_1041_, v_as_1042_, v_sz_boxed_1057_, v_i_boxed_1058_, v_b_1045_, v___y_1046_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_);
lean_dec(v___y_1055_);
lean_dec_ref(v___y_1054_);
lean_dec(v___y_1053_);
lean_dec_ref(v___y_1052_);
lean_dec(v___y_1051_);
lean_dec_ref(v___y_1050_);
lean_dec(v___y_1049_);
lean_dec_ref(v___y_1048_);
lean_dec(v___y_1047_);
lean_dec(v___y_1046_);
lean_dec_ref(v_as_1042_);
return v_res_1059_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0(lean_object* v_init_1060_, lean_object* v_c_1061_, lean_object* v_n_1062_, lean_object* v_b_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_){
_start:
{
if (lean_obj_tag(v_n_1062_) == 0)
{
lean_object* v_cs_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; size_t v_sz_1078_; size_t v___x_1079_; lean_object* v___x_1080_; 
v_cs_1075_ = lean_ctor_get(v_n_1062_, 0);
v___x_1076_ = lean_box(0);
v___x_1077_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1077_, 0, v___x_1076_);
lean_ctor_set(v___x_1077_, 1, v_b_1063_);
v_sz_1078_ = lean_array_size(v_cs_1075_);
v___x_1079_ = ((size_t)0ULL);
v___x_1080_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__1(v_init_1060_, v_c_1061_, v_cs_1075_, v_sz_1078_, v___x_1079_, v___x_1077_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_, v___y_1068_, v___y_1069_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_);
if (lean_obj_tag(v___x_1080_) == 0)
{
lean_object* v_a_1081_; lean_object* v___x_1083_; uint8_t v_isShared_1084_; uint8_t v_isSharedCheck_1095_; 
v_a_1081_ = lean_ctor_get(v___x_1080_, 0);
v_isSharedCheck_1095_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1095_ == 0)
{
v___x_1083_ = v___x_1080_;
v_isShared_1084_ = v_isSharedCheck_1095_;
goto v_resetjp_1082_;
}
else
{
lean_inc(v_a_1081_);
lean_dec(v___x_1080_);
v___x_1083_ = lean_box(0);
v_isShared_1084_ = v_isSharedCheck_1095_;
goto v_resetjp_1082_;
}
v_resetjp_1082_:
{
lean_object* v_fst_1085_; 
v_fst_1085_ = lean_ctor_get(v_a_1081_, 0);
if (lean_obj_tag(v_fst_1085_) == 0)
{
lean_object* v_snd_1086_; lean_object* v___x_1087_; lean_object* v___x_1089_; 
v_snd_1086_ = lean_ctor_get(v_a_1081_, 1);
lean_inc(v_snd_1086_);
lean_dec(v_a_1081_);
v___x_1087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1087_, 0, v_snd_1086_);
if (v_isShared_1084_ == 0)
{
lean_ctor_set(v___x_1083_, 0, v___x_1087_);
v___x_1089_ = v___x_1083_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v___x_1087_);
v___x_1089_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
return v___x_1089_;
}
}
else
{
lean_object* v_val_1091_; lean_object* v___x_1093_; 
lean_inc_ref(v_fst_1085_);
lean_dec(v_a_1081_);
v_val_1091_ = lean_ctor_get(v_fst_1085_, 0);
lean_inc(v_val_1091_);
lean_dec_ref_known(v_fst_1085_, 1);
if (v_isShared_1084_ == 0)
{
lean_ctor_set(v___x_1083_, 0, v_val_1091_);
v___x_1093_ = v___x_1083_;
goto v_reusejp_1092_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v_val_1091_);
v___x_1093_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1092_;
}
v_reusejp_1092_:
{
return v___x_1093_;
}
}
}
}
else
{
lean_object* v_a_1096_; lean_object* v___x_1098_; uint8_t v_isShared_1099_; uint8_t v_isSharedCheck_1103_; 
v_a_1096_ = lean_ctor_get(v___x_1080_, 0);
v_isSharedCheck_1103_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1103_ == 0)
{
v___x_1098_ = v___x_1080_;
v_isShared_1099_ = v_isSharedCheck_1103_;
goto v_resetjp_1097_;
}
else
{
lean_inc(v_a_1096_);
lean_dec(v___x_1080_);
v___x_1098_ = lean_box(0);
v_isShared_1099_ = v_isSharedCheck_1103_;
goto v_resetjp_1097_;
}
v_resetjp_1097_:
{
lean_object* v___x_1101_; 
if (v_isShared_1099_ == 0)
{
v___x_1101_ = v___x_1098_;
goto v_reusejp_1100_;
}
else
{
lean_object* v_reuseFailAlloc_1102_; 
v_reuseFailAlloc_1102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1102_, 0, v_a_1096_);
v___x_1101_ = v_reuseFailAlloc_1102_;
goto v_reusejp_1100_;
}
v_reusejp_1100_:
{
return v___x_1101_;
}
}
}
}
else
{
lean_object* v_vs_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; size_t v_sz_1107_; size_t v___x_1108_; lean_object* v___x_1109_; 
v_vs_1104_ = lean_ctor_get(v_n_1062_, 0);
v___x_1105_ = lean_box(0);
v___x_1106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1105_);
lean_ctor_set(v___x_1106_, 1, v_b_1063_);
v_sz_1107_ = lean_array_size(v_vs_1104_);
v___x_1108_ = ((size_t)0ULL);
v___x_1109_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2(v_c_1061_, v_vs_1104_, v_sz_1107_, v___x_1108_, v___x_1106_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_, v___y_1068_, v___y_1069_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_);
if (lean_obj_tag(v___x_1109_) == 0)
{
lean_object* v_a_1110_; lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1124_; 
v_a_1110_ = lean_ctor_get(v___x_1109_, 0);
v_isSharedCheck_1124_ = !lean_is_exclusive(v___x_1109_);
if (v_isSharedCheck_1124_ == 0)
{
v___x_1112_ = v___x_1109_;
v_isShared_1113_ = v_isSharedCheck_1124_;
goto v_resetjp_1111_;
}
else
{
lean_inc(v_a_1110_);
lean_dec(v___x_1109_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1124_;
goto v_resetjp_1111_;
}
v_resetjp_1111_:
{
lean_object* v_fst_1114_; 
v_fst_1114_ = lean_ctor_get(v_a_1110_, 0);
if (lean_obj_tag(v_fst_1114_) == 0)
{
lean_object* v_snd_1115_; lean_object* v___x_1116_; lean_object* v___x_1118_; 
v_snd_1115_ = lean_ctor_get(v_a_1110_, 1);
lean_inc(v_snd_1115_);
lean_dec(v_a_1110_);
v___x_1116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1116_, 0, v_snd_1115_);
if (v_isShared_1113_ == 0)
{
lean_ctor_set(v___x_1112_, 0, v___x_1116_);
v___x_1118_ = v___x_1112_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v___x_1116_);
v___x_1118_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1117_;
}
v_reusejp_1117_:
{
return v___x_1118_;
}
}
else
{
lean_object* v_val_1120_; lean_object* v___x_1122_; 
lean_inc_ref(v_fst_1114_);
lean_dec(v_a_1110_);
v_val_1120_ = lean_ctor_get(v_fst_1114_, 0);
lean_inc(v_val_1120_);
lean_dec_ref_known(v_fst_1114_, 1);
if (v_isShared_1113_ == 0)
{
lean_ctor_set(v___x_1112_, 0, v_val_1120_);
v___x_1122_ = v___x_1112_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v_val_1120_);
v___x_1122_ = v_reuseFailAlloc_1123_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
return v___x_1122_;
}
}
}
}
else
{
lean_object* v_a_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1132_; 
v_a_1125_ = lean_ctor_get(v___x_1109_, 0);
v_isSharedCheck_1132_ = !lean_is_exclusive(v___x_1109_);
if (v_isSharedCheck_1132_ == 0)
{
v___x_1127_ = v___x_1109_;
v_isShared_1128_ = v_isSharedCheck_1132_;
goto v_resetjp_1126_;
}
else
{
lean_inc(v_a_1125_);
lean_dec(v___x_1109_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1132_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
lean_object* v___x_1130_; 
if (v_isShared_1128_ == 0)
{
v___x_1130_ = v___x_1127_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1131_; 
v_reuseFailAlloc_1131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1131_, 0, v_a_1125_);
v___x_1130_ = v_reuseFailAlloc_1131_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
return v___x_1130_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__1(lean_object* v_init_1133_, lean_object* v_c_1134_, lean_object* v_as_1135_, size_t v_sz_1136_, size_t v_i_1137_, lean_object* v_b_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_){
_start:
{
uint8_t v___x_1150_; 
v___x_1150_ = lean_usize_dec_lt(v_i_1137_, v_sz_1136_);
if (v___x_1150_ == 0)
{
lean_object* v___x_1151_; 
lean_dec_ref(v_c_1134_);
v___x_1151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1151_, 0, v_b_1138_);
return v___x_1151_;
}
else
{
lean_object* v_snd_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1186_; 
v_snd_1152_ = lean_ctor_get(v_b_1138_, 1);
v_isSharedCheck_1186_ = !lean_is_exclusive(v_b_1138_);
if (v_isSharedCheck_1186_ == 0)
{
lean_object* v_unused_1187_; 
v_unused_1187_ = lean_ctor_get(v_b_1138_, 0);
lean_dec(v_unused_1187_);
v___x_1154_ = v_b_1138_;
v_isShared_1155_ = v_isSharedCheck_1186_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_snd_1152_);
lean_dec(v_b_1138_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1186_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
lean_object* v___x_1156_; lean_object* v_a_1157_; lean_object* v___x_1158_; 
v___x_1156_ = lean_box(0);
v_a_1157_ = lean_array_uget_borrowed(v_as_1135_, v_i_1137_);
lean_inc(v_snd_1152_);
lean_inc_ref(v_c_1134_);
v___x_1158_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0(v_init_1133_, v_c_1134_, v_a_1157_, v_snd_1152_, v___y_1139_, v___y_1140_, v___y_1141_, v___y_1142_, v___y_1143_, v___y_1144_, v___y_1145_, v___y_1146_, v___y_1147_, v___y_1148_);
if (lean_obj_tag(v___x_1158_) == 0)
{
lean_object* v_a_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1177_; 
v_a_1159_ = lean_ctor_get(v___x_1158_, 0);
v_isSharedCheck_1177_ = !lean_is_exclusive(v___x_1158_);
if (v_isSharedCheck_1177_ == 0)
{
v___x_1161_ = v___x_1158_;
v_isShared_1162_ = v_isSharedCheck_1177_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_a_1159_);
lean_dec(v___x_1158_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1177_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
if (lean_obj_tag(v_a_1159_) == 0)
{
lean_object* v___x_1163_; lean_object* v___x_1165_; 
lean_dec_ref(v_c_1134_);
v___x_1163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1163_, 0, v_a_1159_);
if (v_isShared_1155_ == 0)
{
lean_ctor_set(v___x_1154_, 0, v___x_1163_);
v___x_1165_ = v___x_1154_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v___x_1163_);
lean_ctor_set(v_reuseFailAlloc_1169_, 1, v_snd_1152_);
v___x_1165_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
lean_object* v___x_1167_; 
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 0, v___x_1165_);
v___x_1167_ = v___x_1161_;
goto v_reusejp_1166_;
}
else
{
lean_object* v_reuseFailAlloc_1168_; 
v_reuseFailAlloc_1168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1168_, 0, v___x_1165_);
v___x_1167_ = v_reuseFailAlloc_1168_;
goto v_reusejp_1166_;
}
v_reusejp_1166_:
{
return v___x_1167_;
}
}
}
else
{
lean_object* v_a_1170_; lean_object* v___x_1172_; 
lean_del_object(v___x_1161_);
lean_dec(v_snd_1152_);
v_a_1170_ = lean_ctor_get(v_a_1159_, 0);
lean_inc(v_a_1170_);
lean_dec_ref_known(v_a_1159_, 1);
if (v_isShared_1155_ == 0)
{
lean_ctor_set(v___x_1154_, 1, v_a_1170_);
lean_ctor_set(v___x_1154_, 0, v___x_1156_);
v___x_1172_ = v___x_1154_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1176_; 
v_reuseFailAlloc_1176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1176_, 0, v___x_1156_);
lean_ctor_set(v_reuseFailAlloc_1176_, 1, v_a_1170_);
v___x_1172_ = v_reuseFailAlloc_1176_;
goto v_reusejp_1171_;
}
v_reusejp_1171_:
{
size_t v___x_1173_; size_t v___x_1174_; 
v___x_1173_ = ((size_t)1ULL);
v___x_1174_ = lean_usize_add(v_i_1137_, v___x_1173_);
v_i_1137_ = v___x_1174_;
v_b_1138_ = v___x_1172_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1178_; lean_object* v___x_1180_; uint8_t v_isShared_1181_; uint8_t v_isSharedCheck_1185_; 
lean_del_object(v___x_1154_);
lean_dec(v_snd_1152_);
lean_dec_ref(v_c_1134_);
v_a_1178_ = lean_ctor_get(v___x_1158_, 0);
v_isSharedCheck_1185_ = !lean_is_exclusive(v___x_1158_);
if (v_isSharedCheck_1185_ == 0)
{
v___x_1180_ = v___x_1158_;
v_isShared_1181_ = v_isSharedCheck_1185_;
goto v_resetjp_1179_;
}
else
{
lean_inc(v_a_1178_);
lean_dec(v___x_1158_);
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__1___boxed(lean_object** _args){
lean_object* v_init_1188_ = _args[0];
lean_object* v_c_1189_ = _args[1];
lean_object* v_as_1190_ = _args[2];
lean_object* v_sz_1191_ = _args[3];
lean_object* v_i_1192_ = _args[4];
lean_object* v_b_1193_ = _args[5];
lean_object* v___y_1194_ = _args[6];
lean_object* v___y_1195_ = _args[7];
lean_object* v___y_1196_ = _args[8];
lean_object* v___y_1197_ = _args[9];
lean_object* v___y_1198_ = _args[10];
lean_object* v___y_1199_ = _args[11];
lean_object* v___y_1200_ = _args[12];
lean_object* v___y_1201_ = _args[13];
lean_object* v___y_1202_ = _args[14];
lean_object* v___y_1203_ = _args[15];
lean_object* v___y_1204_ = _args[16];
_start:
{
size_t v_sz_boxed_1205_; size_t v_i_boxed_1206_; lean_object* v_res_1207_; 
v_sz_boxed_1205_ = lean_unbox_usize(v_sz_1191_);
lean_dec(v_sz_1191_);
v_i_boxed_1206_ = lean_unbox_usize(v_i_1192_);
lean_dec(v_i_1192_);
v_res_1207_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__1(v_init_1188_, v_c_1189_, v_as_1190_, v_sz_boxed_1205_, v_i_boxed_1206_, v_b_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_);
lean_dec(v___y_1203_);
lean_dec_ref(v___y_1202_);
lean_dec(v___y_1201_);
lean_dec_ref(v___y_1200_);
lean_dec(v___y_1199_);
lean_dec_ref(v___y_1198_);
lean_dec(v___y_1197_);
lean_dec_ref(v___y_1196_);
lean_dec(v___y_1195_);
lean_dec(v___y_1194_);
lean_dec_ref(v_as_1190_);
lean_dec_ref(v_init_1188_);
return v_res_1207_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0___boxed(lean_object* v_init_1208_, lean_object* v_c_1209_, lean_object* v_n_1210_, lean_object* v_b_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_){
_start:
{
lean_object* v_res_1223_; 
v_res_1223_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0(v_init_1208_, v_c_1209_, v_n_1210_, v_b_1211_, v___y_1212_, v___y_1213_, v___y_1214_, v___y_1215_, v___y_1216_, v___y_1217_, v___y_1218_, v___y_1219_, v___y_1220_, v___y_1221_);
lean_dec(v___y_1221_);
lean_dec_ref(v___y_1220_);
lean_dec(v___y_1219_);
lean_dec_ref(v___y_1218_);
lean_dec(v___y_1217_);
lean_dec_ref(v___y_1216_);
lean_dec(v___y_1215_);
lean_dec_ref(v___y_1214_);
lean_dec(v___y_1213_);
lean_dec(v___y_1212_);
lean_dec_ref(v_n_1210_);
lean_dec_ref(v_init_1208_);
return v_res_1223_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4(lean_object* v_c_1230_, lean_object* v_as_1231_, size_t v_sz_1232_, size_t v_i_1233_, lean_object* v_b_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_){
_start:
{
uint8_t v___x_1246_; 
v___x_1246_ = lean_usize_dec_lt(v_i_1233_, v_sz_1232_);
if (v___x_1246_ == 0)
{
lean_object* v___x_1247_; 
lean_dec_ref(v_c_1230_);
v___x_1247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1247_, 0, v_b_1234_);
return v___x_1247_;
}
else
{
lean_object* v_snd_1248_; lean_object* v___x_1250_; uint8_t v_isShared_1251_; uint8_t v_isSharedCheck_1336_; 
v_snd_1248_ = lean_ctor_get(v_b_1234_, 1);
v_isSharedCheck_1336_ = !lean_is_exclusive(v_b_1234_);
if (v_isSharedCheck_1336_ == 0)
{
lean_object* v_unused_1337_; 
v_unused_1337_ = lean_ctor_get(v_b_1234_, 0);
lean_dec(v_unused_1337_);
v___x_1250_ = v_b_1234_;
v_isShared_1251_ = v_isSharedCheck_1336_;
goto v_resetjp_1249_;
}
else
{
lean_inc(v_snd_1248_);
lean_dec(v_b_1234_);
v___x_1250_ = lean_box(0);
v_isShared_1251_ = v_isSharedCheck_1336_;
goto v_resetjp_1249_;
}
v_resetjp_1249_:
{
lean_object* v_p_1252_; lean_object* v_a_1253_; lean_object* v_p_1254_; lean_object* v___x_1255_; uint8_t v___x_1256_; 
v_p_1252_ = lean_ctor_get(v_c_1230_, 0);
v_a_1253_ = lean_array_uget_borrowed(v_as_1231_, v_i_1233_);
v_p_1254_ = lean_ctor_get(v_a_1253_, 0);
v___x_1255_ = lean_box(0);
v___x_1256_ = l_Int_Internal_Linear_Poly_isNegEq(v_p_1252_, v_p_1254_);
if (v___x_1256_ == 0)
{
lean_object* v___x_1257_; size_t v___x_1258_; size_t v___x_1259_; 
lean_del_object(v___x_1250_);
lean_dec(v_snd_1248_);
v___x_1257_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4___closed__1));
v___x_1258_ = ((size_t)1ULL);
v___x_1259_ = lean_usize_add(v_i_1233_, v___x_1258_);
v_i_1233_ = v___x_1259_;
v_b_1234_ = v___x_1257_;
goto _start;
}
else
{
lean_object* v___x_1261_; 
lean_inc_ref(v_p_1252_);
lean_inc(v_a_1253_);
v___x_1261_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg(v_a_1253_, v___y_1235_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_);
if (lean_obj_tag(v___x_1261_) == 0)
{
lean_object* v_toCold_1262_; lean_object* v_options_1263_; lean_object* v_inheritedTraceOptions_1264_; uint8_t v_hasTrace_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___y_1270_; lean_object* v___y_1271_; lean_object* v___y_1272_; lean_object* v___y_1273_; lean_object* v___y_1274_; lean_object* v___y_1275_; lean_object* v___y_1276_; lean_object* v___y_1277_; lean_object* v___y_1278_; lean_object* v___y_1279_; 
lean_dec_ref_known(v___x_1261_, 1);
v_toCold_1262_ = lean_ctor_get(v___y_1243_, 0);
v_options_1263_ = lean_ctor_get(v_toCold_1262_, 2);
v_inheritedTraceOptions_1264_ = lean_ctor_get(v_toCold_1262_, 11);
v_hasTrace_1265_ = lean_ctor_get_uint8(v_options_1263_, sizeof(void*)*1);
lean_inc(v_a_1253_);
v___x_1266_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1266_, 0, v_c_1230_);
lean_ctor_set(v___x_1266_, 1, v_a_1253_);
v___x_1267_ = lean_box(0);
v___x_1268_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1268_, 0, v_p_1252_);
lean_ctor_set(v___x_1268_, 1, v___x_1266_);
lean_ctor_set(v___x_1268_, 2, v___x_1267_);
if (v_hasTrace_1265_ == 0)
{
v___y_1270_ = v___y_1235_;
v___y_1271_ = v___y_1236_;
v___y_1272_ = v___y_1237_;
v___y_1273_ = v___y_1238_;
v___y_1274_ = v___y_1239_;
v___y_1275_ = v___y_1240_;
v___y_1276_ = v___y_1241_;
v___y_1277_ = v___y_1242_;
v___y_1278_ = v___y_1243_;
v___y_1279_ = v___y_1244_;
goto v___jp_1269_;
}
else
{
lean_object* v___x_1304_; lean_object* v___x_1305_; uint8_t v___x_1306_; 
v___x_1304_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4));
v___x_1305_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5);
v___x_1306_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1264_, v_options_1263_, v___x_1305_);
if (v___x_1306_ == 0)
{
v___y_1270_ = v___y_1235_;
v___y_1271_ = v___y_1236_;
v___y_1272_ = v___y_1237_;
v___y_1273_ = v___y_1238_;
v___y_1274_ = v___y_1239_;
v___y_1275_ = v___y_1240_;
v___y_1276_ = v___y_1241_;
v___y_1277_ = v___y_1242_;
v___y_1278_ = v___y_1243_;
v___y_1279_ = v___y_1244_;
goto v___jp_1269_;
}
else
{
lean_object* v___x_1307_; 
lean_inc_ref(v___x_1268_);
v___x_1307_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(v___x_1268_, v___y_1235_, v___y_1243_);
if (lean_obj_tag(v___x_1307_) == 0)
{
lean_object* v_a_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
v_a_1308_ = lean_ctor_get(v___x_1307_, 0);
lean_inc(v_a_1308_);
lean_dec_ref_known(v___x_1307_, 1);
v___x_1309_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__7);
v___x_1310_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1310_, 0, v___x_1309_);
lean_ctor_set(v___x_1310_, 1, v_a_1308_);
v___x_1311_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v___x_1304_, v___x_1310_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_);
if (lean_obj_tag(v___x_1311_) == 0)
{
lean_dec_ref_known(v___x_1311_, 1);
v___y_1270_ = v___y_1235_;
v___y_1271_ = v___y_1236_;
v___y_1272_ = v___y_1237_;
v___y_1273_ = v___y_1238_;
v___y_1274_ = v___y_1239_;
v___y_1275_ = v___y_1240_;
v___y_1276_ = v___y_1241_;
v___y_1277_ = v___y_1242_;
v___y_1278_ = v___y_1243_;
v___y_1279_ = v___y_1244_;
goto v___jp_1269_;
}
else
{
lean_object* v_a_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1319_; 
lean_dec_ref_known(v___x_1268_, 3);
lean_del_object(v___x_1250_);
lean_dec(v_snd_1248_);
v_a_1312_ = lean_ctor_get(v___x_1311_, 0);
v_isSharedCheck_1319_ = !lean_is_exclusive(v___x_1311_);
if (v_isSharedCheck_1319_ == 0)
{
v___x_1314_ = v___x_1311_;
v_isShared_1315_ = v_isSharedCheck_1319_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_a_1312_);
lean_dec(v___x_1311_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1319_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v___x_1317_; 
if (v_isShared_1315_ == 0)
{
v___x_1317_ = v___x_1314_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1318_; 
v_reuseFailAlloc_1318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1318_, 0, v_a_1312_);
v___x_1317_ = v_reuseFailAlloc_1318_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
return v___x_1317_;
}
}
}
}
else
{
lean_object* v_a_1320_; lean_object* v___x_1322_; uint8_t v_isShared_1323_; uint8_t v_isSharedCheck_1327_; 
lean_dec_ref_known(v___x_1268_, 3);
lean_del_object(v___x_1250_);
lean_dec(v_snd_1248_);
v_a_1320_ = lean_ctor_get(v___x_1307_, 0);
v_isSharedCheck_1327_ = !lean_is_exclusive(v___x_1307_);
if (v_isSharedCheck_1327_ == 0)
{
v___x_1322_ = v___x_1307_;
v_isShared_1323_ = v_isSharedCheck_1327_;
goto v_resetjp_1321_;
}
else
{
lean_inc(v_a_1320_);
lean_dec(v___x_1307_);
v___x_1322_ = lean_box(0);
v_isShared_1323_ = v_isSharedCheck_1327_;
goto v_resetjp_1321_;
}
v_resetjp_1321_:
{
lean_object* v___x_1325_; 
if (v_isShared_1323_ == 0)
{
v___x_1325_ = v___x_1322_;
goto v_reusejp_1324_;
}
else
{
lean_object* v_reuseFailAlloc_1326_; 
v_reuseFailAlloc_1326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1326_, 0, v_a_1320_);
v___x_1325_ = v_reuseFailAlloc_1326_;
goto v_reusejp_1324_;
}
v_reusejp_1324_:
{
return v___x_1325_;
}
}
}
}
}
v___jp_1269_:
{
lean_object* v___x_1280_; 
lean_inc(v___y_1279_);
lean_inc_ref(v___y_1278_);
lean_inc(v___y_1277_);
lean_inc_ref(v___y_1276_);
lean_inc(v___y_1275_);
lean_inc_ref(v___y_1274_);
lean_inc(v___y_1273_);
lean_inc_ref(v___y_1272_);
lean_inc(v___y_1271_);
lean_inc(v___y_1270_);
v___x_1280_ = lean_grind_cutsat_assert_eq(v___x_1268_, v___y_1270_, v___y_1271_, v___y_1272_, v___y_1273_, v___y_1274_, v___y_1275_, v___y_1276_, v___y_1277_, v___y_1278_, v___y_1279_);
if (lean_obj_tag(v___x_1280_) == 0)
{
lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1294_; 
v_isSharedCheck_1294_ = !lean_is_exclusive(v___x_1280_);
if (v_isSharedCheck_1294_ == 0)
{
lean_object* v_unused_1295_; 
v_unused_1295_ = lean_ctor_get(v___x_1280_, 0);
lean_dec(v_unused_1295_);
v___x_1282_ = v___x_1280_;
v_isShared_1283_ = v_isSharedCheck_1294_;
goto v_resetjp_1281_;
}
else
{
lean_dec(v___x_1280_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1294_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1287_; 
v___x_1284_ = lean_box(v___x_1256_);
v___x_1285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1285_, 0, v___x_1284_);
if (v_isShared_1251_ == 0)
{
lean_ctor_set(v___x_1250_, 1, v___x_1255_);
lean_ctor_set(v___x_1250_, 0, v___x_1285_);
v___x_1287_ = v___x_1250_;
goto v_reusejp_1286_;
}
else
{
lean_object* v_reuseFailAlloc_1293_; 
v_reuseFailAlloc_1293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1293_, 0, v___x_1285_);
lean_ctor_set(v_reuseFailAlloc_1293_, 1, v___x_1255_);
v___x_1287_ = v_reuseFailAlloc_1293_;
goto v_reusejp_1286_;
}
v_reusejp_1286_:
{
lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1291_; 
v___x_1288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1287_);
v___x_1289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1289_, 0, v___x_1288_);
lean_ctor_set(v___x_1289_, 1, v_snd_1248_);
if (v_isShared_1283_ == 0)
{
lean_ctor_set(v___x_1282_, 0, v___x_1289_);
v___x_1291_ = v___x_1282_;
goto v_reusejp_1290_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1292_, 0, v___x_1289_);
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
else
{
lean_object* v_a_1296_; lean_object* v___x_1298_; uint8_t v_isShared_1299_; uint8_t v_isSharedCheck_1303_; 
lean_del_object(v___x_1250_);
lean_dec(v_snd_1248_);
v_a_1296_ = lean_ctor_get(v___x_1280_, 0);
v_isSharedCheck_1303_ = !lean_is_exclusive(v___x_1280_);
if (v_isSharedCheck_1303_ == 0)
{
v___x_1298_ = v___x_1280_;
v_isShared_1299_ = v_isSharedCheck_1303_;
goto v_resetjp_1297_;
}
else
{
lean_inc(v_a_1296_);
lean_dec(v___x_1280_);
v___x_1298_ = lean_box(0);
v_isShared_1299_ = v_isSharedCheck_1303_;
goto v_resetjp_1297_;
}
v_resetjp_1297_:
{
lean_object* v___x_1301_; 
if (v_isShared_1299_ == 0)
{
v___x_1301_ = v___x_1298_;
goto v_reusejp_1300_;
}
else
{
lean_object* v_reuseFailAlloc_1302_; 
v_reuseFailAlloc_1302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1302_, 0, v_a_1296_);
v___x_1301_ = v_reuseFailAlloc_1302_;
goto v_reusejp_1300_;
}
v_reusejp_1300_:
{
return v___x_1301_;
}
}
}
}
}
else
{
lean_object* v_a_1328_; lean_object* v___x_1330_; uint8_t v_isShared_1331_; uint8_t v_isSharedCheck_1335_; 
lean_dec_ref(v_p_1252_);
lean_del_object(v___x_1250_);
lean_dec(v_snd_1248_);
lean_dec_ref(v_c_1230_);
v_a_1328_ = lean_ctor_get(v___x_1261_, 0);
v_isSharedCheck_1335_ = !lean_is_exclusive(v___x_1261_);
if (v_isSharedCheck_1335_ == 0)
{
v___x_1330_ = v___x_1261_;
v_isShared_1331_ = v_isSharedCheck_1335_;
goto v_resetjp_1329_;
}
else
{
lean_inc(v_a_1328_);
lean_dec(v___x_1261_);
v___x_1330_ = lean_box(0);
v_isShared_1331_ = v_isSharedCheck_1335_;
goto v_resetjp_1329_;
}
v_resetjp_1329_:
{
lean_object* v___x_1333_; 
if (v_isShared_1331_ == 0)
{
v___x_1333_ = v___x_1330_;
goto v_reusejp_1332_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v_a_1328_);
v___x_1333_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1332_;
}
v_reusejp_1332_:
{
return v___x_1333_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4___boxed(lean_object* v_c_1338_, lean_object* v_as_1339_, lean_object* v_sz_1340_, lean_object* v_i_1341_, lean_object* v_b_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_){
_start:
{
size_t v_sz_boxed_1354_; size_t v_i_boxed_1355_; lean_object* v_res_1356_; 
v_sz_boxed_1354_ = lean_unbox_usize(v_sz_1340_);
lean_dec(v_sz_1340_);
v_i_boxed_1355_ = lean_unbox_usize(v_i_1341_);
lean_dec(v_i_1341_);
v_res_1356_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4(v_c_1338_, v_as_1339_, v_sz_boxed_1354_, v_i_boxed_1355_, v_b_1342_, v___y_1343_, v___y_1344_, v___y_1345_, v___y_1346_, v___y_1347_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_);
lean_dec(v___y_1352_);
lean_dec_ref(v___y_1351_);
lean_dec(v___y_1350_);
lean_dec_ref(v___y_1349_);
lean_dec(v___y_1348_);
lean_dec_ref(v___y_1347_);
lean_dec(v___y_1346_);
lean_dec_ref(v___y_1345_);
lean_dec(v___y_1344_);
lean_dec(v___y_1343_);
lean_dec_ref(v_as_1339_);
return v_res_1356_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1(lean_object* v_c_1360_, lean_object* v_as_1361_, size_t v_sz_1362_, size_t v_i_1363_, lean_object* v_b_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_){
_start:
{
uint8_t v___x_1376_; 
v___x_1376_ = lean_usize_dec_lt(v_i_1363_, v_sz_1362_);
if (v___x_1376_ == 0)
{
lean_object* v___x_1377_; 
lean_dec_ref(v_c_1360_);
v___x_1377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1377_, 0, v_b_1364_);
return v___x_1377_;
}
else
{
lean_object* v_snd_1378_; lean_object* v___x_1380_; uint8_t v_isShared_1381_; uint8_t v_isSharedCheck_1466_; 
v_snd_1378_ = lean_ctor_get(v_b_1364_, 1);
v_isSharedCheck_1466_ = !lean_is_exclusive(v_b_1364_);
if (v_isSharedCheck_1466_ == 0)
{
lean_object* v_unused_1467_; 
v_unused_1467_ = lean_ctor_get(v_b_1364_, 0);
lean_dec(v_unused_1467_);
v___x_1380_ = v_b_1364_;
v_isShared_1381_ = v_isSharedCheck_1466_;
goto v_resetjp_1379_;
}
else
{
lean_inc(v_snd_1378_);
lean_dec(v_b_1364_);
v___x_1380_ = lean_box(0);
v_isShared_1381_ = v_isSharedCheck_1466_;
goto v_resetjp_1379_;
}
v_resetjp_1379_:
{
lean_object* v_p_1382_; lean_object* v_a_1383_; lean_object* v_p_1384_; lean_object* v___x_1385_; uint8_t v___x_1386_; 
v_p_1382_ = lean_ctor_get(v_c_1360_, 0);
v_a_1383_ = lean_array_uget_borrowed(v_as_1361_, v_i_1363_);
v_p_1384_ = lean_ctor_get(v_a_1383_, 0);
v___x_1385_ = lean_box(0);
v___x_1386_ = l_Int_Internal_Linear_Poly_isNegEq(v_p_1382_, v_p_1384_);
if (v___x_1386_ == 0)
{
lean_object* v___x_1387_; size_t v___x_1388_; size_t v___x_1389_; lean_object* v___x_1390_; 
lean_del_object(v___x_1380_);
lean_dec(v_snd_1378_);
v___x_1387_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1___closed__0));
v___x_1388_ = ((size_t)1ULL);
v___x_1389_ = lean_usize_add(v_i_1363_, v___x_1388_);
v___x_1390_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4(v_c_1360_, v_as_1361_, v_sz_1362_, v___x_1389_, v___x_1387_, v___y_1365_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_, v___y_1374_);
return v___x_1390_;
}
else
{
lean_object* v___x_1391_; 
lean_inc_ref(v_p_1382_);
lean_inc(v_a_1383_);
v___x_1391_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg(v_a_1383_, v___y_1365_, v___y_1371_, v___y_1372_, v___y_1373_, v___y_1374_);
if (lean_obj_tag(v___x_1391_) == 0)
{
lean_object* v_toCold_1392_; lean_object* v_options_1393_; lean_object* v_inheritedTraceOptions_1394_; uint8_t v_hasTrace_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___y_1400_; lean_object* v___y_1401_; lean_object* v___y_1402_; lean_object* v___y_1403_; lean_object* v___y_1404_; lean_object* v___y_1405_; lean_object* v___y_1406_; lean_object* v___y_1407_; lean_object* v___y_1408_; lean_object* v___y_1409_; 
lean_dec_ref_known(v___x_1391_, 1);
v_toCold_1392_ = lean_ctor_get(v___y_1373_, 0);
v_options_1393_ = lean_ctor_get(v_toCold_1392_, 2);
v_inheritedTraceOptions_1394_ = lean_ctor_get(v_toCold_1392_, 11);
v_hasTrace_1395_ = lean_ctor_get_uint8(v_options_1393_, sizeof(void*)*1);
lean_inc(v_a_1383_);
v___x_1396_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1396_, 0, v_c_1360_);
lean_ctor_set(v___x_1396_, 1, v_a_1383_);
v___x_1397_ = lean_box(0);
v___x_1398_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1398_, 0, v_p_1382_);
lean_ctor_set(v___x_1398_, 1, v___x_1396_);
lean_ctor_set(v___x_1398_, 2, v___x_1397_);
if (v_hasTrace_1395_ == 0)
{
v___y_1400_ = v___y_1365_;
v___y_1401_ = v___y_1366_;
v___y_1402_ = v___y_1367_;
v___y_1403_ = v___y_1368_;
v___y_1404_ = v___y_1369_;
v___y_1405_ = v___y_1370_;
v___y_1406_ = v___y_1371_;
v___y_1407_ = v___y_1372_;
v___y_1408_ = v___y_1373_;
v___y_1409_ = v___y_1374_;
goto v___jp_1399_;
}
else
{
lean_object* v___x_1434_; lean_object* v___x_1435_; uint8_t v___x_1436_; 
v___x_1434_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4));
v___x_1435_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5);
v___x_1436_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1394_, v_options_1393_, v___x_1435_);
if (v___x_1436_ == 0)
{
v___y_1400_ = v___y_1365_;
v___y_1401_ = v___y_1366_;
v___y_1402_ = v___y_1367_;
v___y_1403_ = v___y_1368_;
v___y_1404_ = v___y_1369_;
v___y_1405_ = v___y_1370_;
v___y_1406_ = v___y_1371_;
v___y_1407_ = v___y_1372_;
v___y_1408_ = v___y_1373_;
v___y_1409_ = v___y_1374_;
goto v___jp_1399_;
}
else
{
lean_object* v___x_1437_; 
lean_inc_ref(v___x_1398_);
v___x_1437_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(v___x_1398_, v___y_1365_, v___y_1373_);
if (lean_obj_tag(v___x_1437_) == 0)
{
lean_object* v_a_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; 
v_a_1438_ = lean_ctor_get(v___x_1437_, 0);
lean_inc(v_a_1438_);
lean_dec_ref_known(v___x_1437_, 1);
v___x_1439_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__7);
v___x_1440_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1440_, 0, v___x_1439_);
lean_ctor_set(v___x_1440_, 1, v_a_1438_);
v___x_1441_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v___x_1434_, v___x_1440_, v___y_1371_, v___y_1372_, v___y_1373_, v___y_1374_);
if (lean_obj_tag(v___x_1441_) == 0)
{
lean_dec_ref_known(v___x_1441_, 1);
v___y_1400_ = v___y_1365_;
v___y_1401_ = v___y_1366_;
v___y_1402_ = v___y_1367_;
v___y_1403_ = v___y_1368_;
v___y_1404_ = v___y_1369_;
v___y_1405_ = v___y_1370_;
v___y_1406_ = v___y_1371_;
v___y_1407_ = v___y_1372_;
v___y_1408_ = v___y_1373_;
v___y_1409_ = v___y_1374_;
goto v___jp_1399_;
}
else
{
lean_object* v_a_1442_; lean_object* v___x_1444_; uint8_t v_isShared_1445_; uint8_t v_isSharedCheck_1449_; 
lean_dec_ref_known(v___x_1398_, 3);
lean_del_object(v___x_1380_);
lean_dec(v_snd_1378_);
v_a_1442_ = lean_ctor_get(v___x_1441_, 0);
v_isSharedCheck_1449_ = !lean_is_exclusive(v___x_1441_);
if (v_isSharedCheck_1449_ == 0)
{
v___x_1444_ = v___x_1441_;
v_isShared_1445_ = v_isSharedCheck_1449_;
goto v_resetjp_1443_;
}
else
{
lean_inc(v_a_1442_);
lean_dec(v___x_1441_);
v___x_1444_ = lean_box(0);
v_isShared_1445_ = v_isSharedCheck_1449_;
goto v_resetjp_1443_;
}
v_resetjp_1443_:
{
lean_object* v___x_1447_; 
if (v_isShared_1445_ == 0)
{
v___x_1447_ = v___x_1444_;
goto v_reusejp_1446_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v_a_1442_);
v___x_1447_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1446_;
}
v_reusejp_1446_:
{
return v___x_1447_;
}
}
}
}
else
{
lean_object* v_a_1450_; lean_object* v___x_1452_; uint8_t v_isShared_1453_; uint8_t v_isSharedCheck_1457_; 
lean_dec_ref_known(v___x_1398_, 3);
lean_del_object(v___x_1380_);
lean_dec(v_snd_1378_);
v_a_1450_ = lean_ctor_get(v___x_1437_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v___x_1437_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1452_ = v___x_1437_;
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
else
{
lean_inc(v_a_1450_);
lean_dec(v___x_1437_);
v___x_1452_ = lean_box(0);
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
v_resetjp_1451_:
{
lean_object* v___x_1455_; 
if (v_isShared_1453_ == 0)
{
v___x_1455_ = v___x_1452_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v_a_1450_);
v___x_1455_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
return v___x_1455_;
}
}
}
}
}
v___jp_1399_:
{
lean_object* v___x_1410_; 
lean_inc(v___y_1409_);
lean_inc_ref(v___y_1408_);
lean_inc(v___y_1407_);
lean_inc_ref(v___y_1406_);
lean_inc(v___y_1405_);
lean_inc_ref(v___y_1404_);
lean_inc(v___y_1403_);
lean_inc_ref(v___y_1402_);
lean_inc(v___y_1401_);
lean_inc(v___y_1400_);
v___x_1410_ = lean_grind_cutsat_assert_eq(v___x_1398_, v___y_1400_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_);
if (lean_obj_tag(v___x_1410_) == 0)
{
lean_object* v___x_1412_; uint8_t v_isShared_1413_; uint8_t v_isSharedCheck_1424_; 
v_isSharedCheck_1424_ = !lean_is_exclusive(v___x_1410_);
if (v_isSharedCheck_1424_ == 0)
{
lean_object* v_unused_1425_; 
v_unused_1425_ = lean_ctor_get(v___x_1410_, 0);
lean_dec(v_unused_1425_);
v___x_1412_ = v___x_1410_;
v_isShared_1413_ = v_isSharedCheck_1424_;
goto v_resetjp_1411_;
}
else
{
lean_dec(v___x_1410_);
v___x_1412_ = lean_box(0);
v_isShared_1413_ = v_isSharedCheck_1424_;
goto v_resetjp_1411_;
}
v_resetjp_1411_:
{
lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1417_; 
v___x_1414_ = lean_box(v___x_1386_);
v___x_1415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1415_, 0, v___x_1414_);
if (v_isShared_1381_ == 0)
{
lean_ctor_set(v___x_1380_, 1, v___x_1385_);
lean_ctor_set(v___x_1380_, 0, v___x_1415_);
v___x_1417_ = v___x_1380_;
goto v_reusejp_1416_;
}
else
{
lean_object* v_reuseFailAlloc_1423_; 
v_reuseFailAlloc_1423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1423_, 0, v___x_1415_);
lean_ctor_set(v_reuseFailAlloc_1423_, 1, v___x_1385_);
v___x_1417_ = v_reuseFailAlloc_1423_;
goto v_reusejp_1416_;
}
v_reusejp_1416_:
{
lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1421_; 
v___x_1418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1418_, 0, v___x_1417_);
v___x_1419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1419_, 0, v___x_1418_);
lean_ctor_set(v___x_1419_, 1, v_snd_1378_);
if (v_isShared_1413_ == 0)
{
lean_ctor_set(v___x_1412_, 0, v___x_1419_);
v___x_1421_ = v___x_1412_;
goto v_reusejp_1420_;
}
else
{
lean_object* v_reuseFailAlloc_1422_; 
v_reuseFailAlloc_1422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1422_, 0, v___x_1419_);
v___x_1421_ = v_reuseFailAlloc_1422_;
goto v_reusejp_1420_;
}
v_reusejp_1420_:
{
return v___x_1421_;
}
}
}
}
else
{
lean_object* v_a_1426_; lean_object* v___x_1428_; uint8_t v_isShared_1429_; uint8_t v_isSharedCheck_1433_; 
lean_del_object(v___x_1380_);
lean_dec(v_snd_1378_);
v_a_1426_ = lean_ctor_get(v___x_1410_, 0);
v_isSharedCheck_1433_ = !lean_is_exclusive(v___x_1410_);
if (v_isSharedCheck_1433_ == 0)
{
v___x_1428_ = v___x_1410_;
v_isShared_1429_ = v_isSharedCheck_1433_;
goto v_resetjp_1427_;
}
else
{
lean_inc(v_a_1426_);
lean_dec(v___x_1410_);
v___x_1428_ = lean_box(0);
v_isShared_1429_ = v_isSharedCheck_1433_;
goto v_resetjp_1427_;
}
v_resetjp_1427_:
{
lean_object* v___x_1431_; 
if (v_isShared_1429_ == 0)
{
v___x_1431_ = v___x_1428_;
goto v_reusejp_1430_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v_a_1426_);
v___x_1431_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1430_;
}
v_reusejp_1430_:
{
return v___x_1431_;
}
}
}
}
}
else
{
lean_object* v_a_1458_; lean_object* v___x_1460_; uint8_t v_isShared_1461_; uint8_t v_isSharedCheck_1465_; 
lean_dec_ref(v_p_1382_);
lean_del_object(v___x_1380_);
lean_dec(v_snd_1378_);
lean_dec_ref(v_c_1360_);
v_a_1458_ = lean_ctor_get(v___x_1391_, 0);
v_isSharedCheck_1465_ = !lean_is_exclusive(v___x_1391_);
if (v_isSharedCheck_1465_ == 0)
{
v___x_1460_ = v___x_1391_;
v_isShared_1461_ = v_isSharedCheck_1465_;
goto v_resetjp_1459_;
}
else
{
lean_inc(v_a_1458_);
lean_dec(v___x_1391_);
v___x_1460_ = lean_box(0);
v_isShared_1461_ = v_isSharedCheck_1465_;
goto v_resetjp_1459_;
}
v_resetjp_1459_:
{
lean_object* v___x_1463_; 
if (v_isShared_1461_ == 0)
{
v___x_1463_ = v___x_1460_;
goto v_reusejp_1462_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v_a_1458_);
v___x_1463_ = v_reuseFailAlloc_1464_;
goto v_reusejp_1462_;
}
v_reusejp_1462_:
{
return v___x_1463_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1___boxed(lean_object* v_c_1468_, lean_object* v_as_1469_, lean_object* v_sz_1470_, lean_object* v_i_1471_, lean_object* v_b_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_){
_start:
{
size_t v_sz_boxed_1484_; size_t v_i_boxed_1485_; lean_object* v_res_1486_; 
v_sz_boxed_1484_ = lean_unbox_usize(v_sz_1470_);
lean_dec(v_sz_1470_);
v_i_boxed_1485_ = lean_unbox_usize(v_i_1471_);
lean_dec(v_i_1471_);
v_res_1486_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1(v_c_1468_, v_as_1469_, v_sz_boxed_1484_, v_i_boxed_1485_, v_b_1472_, v___y_1473_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_, v___y_1480_, v___y_1481_, v___y_1482_);
lean_dec(v___y_1482_);
lean_dec_ref(v___y_1481_);
lean_dec(v___y_1480_);
lean_dec_ref(v___y_1479_);
lean_dec(v___y_1478_);
lean_dec_ref(v___y_1477_);
lean_dec(v___y_1476_);
lean_dec_ref(v___y_1475_);
lean_dec(v___y_1474_);
lean_dec(v___y_1473_);
lean_dec_ref(v_as_1469_);
return v_res_1486_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0(lean_object* v_c_1487_, lean_object* v_t_1488_, lean_object* v_init_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_){
_start:
{
lean_object* v_root_1501_; lean_object* v_tail_1502_; lean_object* v___x_1503_; 
v_root_1501_ = lean_ctor_get(v_t_1488_, 0);
v_tail_1502_ = lean_ctor_get(v_t_1488_, 1);
lean_inc_ref(v_c_1487_);
lean_inc_ref(v_init_1489_);
v___x_1503_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0(v_init_1489_, v_c_1487_, v_root_1501_, v_init_1489_, v___y_1490_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_);
lean_dec_ref(v_init_1489_);
if (lean_obj_tag(v___x_1503_) == 0)
{
lean_object* v_a_1504_; lean_object* v___x_1506_; uint8_t v_isShared_1507_; uint8_t v_isSharedCheck_1540_; 
v_a_1504_ = lean_ctor_get(v___x_1503_, 0);
v_isSharedCheck_1540_ = !lean_is_exclusive(v___x_1503_);
if (v_isSharedCheck_1540_ == 0)
{
v___x_1506_ = v___x_1503_;
v_isShared_1507_ = v_isSharedCheck_1540_;
goto v_resetjp_1505_;
}
else
{
lean_inc(v_a_1504_);
lean_dec(v___x_1503_);
v___x_1506_ = lean_box(0);
v_isShared_1507_ = v_isSharedCheck_1540_;
goto v_resetjp_1505_;
}
v_resetjp_1505_:
{
if (lean_obj_tag(v_a_1504_) == 0)
{
lean_object* v_a_1508_; lean_object* v___x_1510_; 
lean_dec_ref(v_c_1487_);
v_a_1508_ = lean_ctor_get(v_a_1504_, 0);
lean_inc(v_a_1508_);
lean_dec_ref_known(v_a_1504_, 1);
if (v_isShared_1507_ == 0)
{
lean_ctor_set(v___x_1506_, 0, v_a_1508_);
v___x_1510_ = v___x_1506_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v_a_1508_);
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
lean_object* v_a_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; size_t v_sz_1515_; size_t v___x_1516_; lean_object* v___x_1517_; 
lean_del_object(v___x_1506_);
v_a_1512_ = lean_ctor_get(v_a_1504_, 0);
lean_inc(v_a_1512_);
lean_dec_ref_known(v_a_1504_, 1);
v___x_1513_ = lean_box(0);
v___x_1514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1514_, 0, v___x_1513_);
lean_ctor_set(v___x_1514_, 1, v_a_1512_);
v_sz_1515_ = lean_array_size(v_tail_1502_);
v___x_1516_ = ((size_t)0ULL);
v___x_1517_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1(v_c_1487_, v_tail_1502_, v_sz_1515_, v___x_1516_, v___x_1514_, v___y_1490_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_);
if (lean_obj_tag(v___x_1517_) == 0)
{
lean_object* v_a_1518_; lean_object* v___x_1520_; uint8_t v_isShared_1521_; uint8_t v_isSharedCheck_1531_; 
v_a_1518_ = lean_ctor_get(v___x_1517_, 0);
v_isSharedCheck_1531_ = !lean_is_exclusive(v___x_1517_);
if (v_isSharedCheck_1531_ == 0)
{
v___x_1520_ = v___x_1517_;
v_isShared_1521_ = v_isSharedCheck_1531_;
goto v_resetjp_1519_;
}
else
{
lean_inc(v_a_1518_);
lean_dec(v___x_1517_);
v___x_1520_ = lean_box(0);
v_isShared_1521_ = v_isSharedCheck_1531_;
goto v_resetjp_1519_;
}
v_resetjp_1519_:
{
lean_object* v_fst_1522_; 
v_fst_1522_ = lean_ctor_get(v_a_1518_, 0);
if (lean_obj_tag(v_fst_1522_) == 0)
{
lean_object* v_snd_1523_; lean_object* v___x_1525_; 
v_snd_1523_ = lean_ctor_get(v_a_1518_, 1);
lean_inc(v_snd_1523_);
lean_dec(v_a_1518_);
if (v_isShared_1521_ == 0)
{
lean_ctor_set(v___x_1520_, 0, v_snd_1523_);
v___x_1525_ = v___x_1520_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v_snd_1523_);
v___x_1525_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
return v___x_1525_;
}
}
else
{
lean_object* v_val_1527_; lean_object* v___x_1529_; 
lean_inc_ref(v_fst_1522_);
lean_dec(v_a_1518_);
v_val_1527_ = lean_ctor_get(v_fst_1522_, 0);
lean_inc(v_val_1527_);
lean_dec_ref_known(v_fst_1522_, 1);
if (v_isShared_1521_ == 0)
{
lean_ctor_set(v___x_1520_, 0, v_val_1527_);
v___x_1529_ = v___x_1520_;
goto v_reusejp_1528_;
}
else
{
lean_object* v_reuseFailAlloc_1530_; 
v_reuseFailAlloc_1530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1530_, 0, v_val_1527_);
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
else
{
lean_object* v_a_1532_; lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1539_; 
v_a_1532_ = lean_ctor_get(v___x_1517_, 0);
v_isSharedCheck_1539_ = !lean_is_exclusive(v___x_1517_);
if (v_isSharedCheck_1539_ == 0)
{
v___x_1534_ = v___x_1517_;
v_isShared_1535_ = v_isSharedCheck_1539_;
goto v_resetjp_1533_;
}
else
{
lean_inc(v_a_1532_);
lean_dec(v___x_1517_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1539_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
lean_object* v___x_1537_; 
if (v_isShared_1535_ == 0)
{
v___x_1537_ = v___x_1534_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v_a_1532_);
v___x_1537_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
return v___x_1537_;
}
}
}
}
}
}
else
{
lean_object* v_a_1541_; lean_object* v___x_1543_; uint8_t v_isShared_1544_; uint8_t v_isSharedCheck_1548_; 
lean_dec_ref(v_c_1487_);
v_a_1541_ = lean_ctor_get(v___x_1503_, 0);
v_isSharedCheck_1548_ = !lean_is_exclusive(v___x_1503_);
if (v_isSharedCheck_1548_ == 0)
{
v___x_1543_ = v___x_1503_;
v_isShared_1544_ = v_isSharedCheck_1548_;
goto v_resetjp_1542_;
}
else
{
lean_inc(v_a_1541_);
lean_dec(v___x_1503_);
v___x_1543_ = lean_box(0);
v_isShared_1544_ = v_isSharedCheck_1548_;
goto v_resetjp_1542_;
}
v_resetjp_1542_:
{
lean_object* v___x_1546_; 
if (v_isShared_1544_ == 0)
{
v___x_1546_ = v___x_1543_;
goto v_reusejp_1545_;
}
else
{
lean_object* v_reuseFailAlloc_1547_; 
v_reuseFailAlloc_1547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1547_, 0, v_a_1541_);
v___x_1546_ = v_reuseFailAlloc_1547_;
goto v_reusejp_1545_;
}
v_reusejp_1545_:
{
return v___x_1546_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0___boxed(lean_object* v_c_1549_, lean_object* v_t_1550_, lean_object* v_init_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_){
_start:
{
lean_object* v_res_1563_; 
v_res_1563_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0(v_c_1549_, v_t_1550_, v_init_1551_, v___y_1552_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_, v___y_1557_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_);
lean_dec(v___y_1561_);
lean_dec_ref(v___y_1560_);
lean_dec(v___y_1559_);
lean_dec_ref(v___y_1558_);
lean_dec(v___y_1557_);
lean_dec_ref(v___y_1556_);
lean_dec(v___y_1555_);
lean_dec_ref(v___y_1554_);
lean_dec(v___y_1553_);
lean_dec(v___y_1552_);
lean_dec_ref(v_t_1550_);
return v_res_1563_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___closed__0(void){
_start:
{
lean_object* v___x_1564_; 
v___x_1564_ = l_Lean_instInhabitedPersistentArray_default___redArg();
return v___x_1564_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq(lean_object* v_c_1565_, lean_object* v_a_1566_, lean_object* v_a_1567_, lean_object* v_a_1568_, lean_object* v_a_1569_, lean_object* v_a_1570_, lean_object* v_a_1571_, lean_object* v_a_1572_, lean_object* v_a_1573_, lean_object* v_a_1574_, lean_object* v_a_1575_){
_start:
{
lean_object* v_p_1577_; 
v_p_1577_ = lean_ctor_get(v_c_1565_, 0);
if (lean_obj_tag(v_p_1577_) == 1)
{
lean_object* v_k_1578_; lean_object* v_v_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; 
v_k_1578_ = lean_ctor_get(v_p_1577_, 0);
v_v_1579_ = lean_ctor_get(v_p_1577_, 1);
v___x_1580_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___closed__0);
v___x_1581_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v_a_1566_, v_a_1574_);
if (lean_obj_tag(v___x_1581_) == 0)
{
lean_object* v_a_1582_; lean_object* v___y_1584_; lean_object* v___x_1610_; uint8_t v___x_1611_; 
v_a_1582_ = lean_ctor_get(v___x_1581_, 0);
lean_inc(v_a_1582_);
lean_dec_ref_known(v___x_1581_, 1);
v___x_1610_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9);
v___x_1611_ = lean_int_dec_lt(v_k_1578_, v___x_1610_);
if (v___x_1611_ == 0)
{
lean_object* v_lowers_1612_; lean_object* v_size_1613_; uint8_t v___x_1614_; 
v_lowers_1612_ = lean_ctor_get(v_a_1582_, 6);
lean_inc_ref(v_lowers_1612_);
lean_dec(v_a_1582_);
v_size_1613_ = lean_ctor_get(v_lowers_1612_, 2);
v___x_1614_ = lean_nat_dec_lt(v_v_1579_, v_size_1613_);
if (v___x_1614_ == 0)
{
lean_object* v___x_1615_; 
lean_dec_ref(v_lowers_1612_);
v___x_1615_ = l_outOfBounds___redArg(v___x_1580_);
v___y_1584_ = v___x_1615_;
goto v___jp_1583_;
}
else
{
lean_object* v___x_1616_; 
v___x_1616_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1580_, v_lowers_1612_, v_v_1579_);
lean_dec_ref(v_lowers_1612_);
v___y_1584_ = v___x_1616_;
goto v___jp_1583_;
}
}
else
{
lean_object* v_uppers_1617_; lean_object* v_size_1618_; uint8_t v___x_1619_; 
v_uppers_1617_ = lean_ctor_get(v_a_1582_, 7);
lean_inc_ref(v_uppers_1617_);
lean_dec(v_a_1582_);
v_size_1618_ = lean_ctor_get(v_uppers_1617_, 2);
v___x_1619_ = lean_nat_dec_lt(v_v_1579_, v_size_1618_);
if (v___x_1619_ == 0)
{
lean_object* v___x_1620_; 
lean_dec_ref(v_uppers_1617_);
v___x_1620_ = l_outOfBounds___redArg(v___x_1580_);
v___y_1584_ = v___x_1620_;
goto v___jp_1583_;
}
else
{
lean_object* v___x_1621_; 
v___x_1621_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1580_, v_uppers_1617_, v_v_1579_);
lean_dec_ref(v_uppers_1617_);
v___y_1584_ = v___x_1621_;
goto v___jp_1583_;
}
}
v___jp_1583_:
{
lean_object* v___x_1585_; lean_object* v___x_1586_; 
v___x_1585_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___closed__0));
v___x_1586_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0(v_c_1565_, v___y_1584_, v___x_1585_, v_a_1566_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_, v_a_1571_, v_a_1572_, v_a_1573_, v_a_1574_, v_a_1575_);
lean_dec_ref(v___y_1584_);
if (lean_obj_tag(v___x_1586_) == 0)
{
lean_object* v_a_1587_; lean_object* v___x_1589_; uint8_t v_isShared_1590_; uint8_t v_isSharedCheck_1601_; 
v_a_1587_ = lean_ctor_get(v___x_1586_, 0);
v_isSharedCheck_1601_ = !lean_is_exclusive(v___x_1586_);
if (v_isSharedCheck_1601_ == 0)
{
v___x_1589_ = v___x_1586_;
v_isShared_1590_ = v_isSharedCheck_1601_;
goto v_resetjp_1588_;
}
else
{
lean_inc(v_a_1587_);
lean_dec(v___x_1586_);
v___x_1589_ = lean_box(0);
v_isShared_1590_ = v_isSharedCheck_1601_;
goto v_resetjp_1588_;
}
v_resetjp_1588_:
{
lean_object* v_fst_1591_; 
v_fst_1591_ = lean_ctor_get(v_a_1587_, 0);
lean_inc(v_fst_1591_);
lean_dec(v_a_1587_);
if (lean_obj_tag(v_fst_1591_) == 0)
{
uint8_t v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1595_; 
v___x_1592_ = 0;
v___x_1593_ = lean_box(v___x_1592_);
if (v_isShared_1590_ == 0)
{
lean_ctor_set(v___x_1589_, 0, v___x_1593_);
v___x_1595_ = v___x_1589_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v___x_1593_);
v___x_1595_ = v_reuseFailAlloc_1596_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
return v___x_1595_;
}
}
else
{
lean_object* v_val_1597_; lean_object* v___x_1599_; 
v_val_1597_ = lean_ctor_get(v_fst_1591_, 0);
lean_inc(v_val_1597_);
lean_dec_ref_known(v_fst_1591_, 1);
if (v_isShared_1590_ == 0)
{
lean_ctor_set(v___x_1589_, 0, v_val_1597_);
v___x_1599_ = v___x_1589_;
goto v_reusejp_1598_;
}
else
{
lean_object* v_reuseFailAlloc_1600_; 
v_reuseFailAlloc_1600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1600_, 0, v_val_1597_);
v___x_1599_ = v_reuseFailAlloc_1600_;
goto v_reusejp_1598_;
}
v_reusejp_1598_:
{
return v___x_1599_;
}
}
}
}
else
{
lean_object* v_a_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1609_; 
v_a_1602_ = lean_ctor_get(v___x_1586_, 0);
v_isSharedCheck_1609_ = !lean_is_exclusive(v___x_1586_);
if (v_isSharedCheck_1609_ == 0)
{
v___x_1604_ = v___x_1586_;
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_a_1602_);
lean_dec(v___x_1586_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v___x_1607_; 
if (v_isShared_1605_ == 0)
{
v___x_1607_ = v___x_1604_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v_a_1602_);
v___x_1607_ = v_reuseFailAlloc_1608_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
return v___x_1607_;
}
}
}
}
}
else
{
lean_object* v_a_1622_; lean_object* v___x_1624_; uint8_t v_isShared_1625_; uint8_t v_isSharedCheck_1629_; 
lean_dec_ref(v_c_1565_);
v_a_1622_ = lean_ctor_get(v___x_1581_, 0);
v_isSharedCheck_1629_ = !lean_is_exclusive(v___x_1581_);
if (v_isSharedCheck_1629_ == 0)
{
v___x_1624_ = v___x_1581_;
v_isShared_1625_ = v_isSharedCheck_1629_;
goto v_resetjp_1623_;
}
else
{
lean_inc(v_a_1622_);
lean_dec(v___x_1581_);
v___x_1624_ = lean_box(0);
v_isShared_1625_ = v_isSharedCheck_1629_;
goto v_resetjp_1623_;
}
v_resetjp_1623_:
{
lean_object* v___x_1627_; 
if (v_isShared_1625_ == 0)
{
v___x_1627_ = v___x_1624_;
goto v_reusejp_1626_;
}
else
{
lean_object* v_reuseFailAlloc_1628_; 
v_reuseFailAlloc_1628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1628_, 0, v_a_1622_);
v___x_1627_ = v_reuseFailAlloc_1628_;
goto v_reusejp_1626_;
}
v_reusejp_1626_:
{
return v___x_1627_;
}
}
}
}
else
{
lean_object* v___x_1630_; 
v___x_1630_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___redArg(v_c_1565_, v_a_1566_, v_a_1572_, v_a_1573_, v_a_1574_, v_a_1575_);
return v___x_1630_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___boxed(lean_object* v_c_1631_, lean_object* v_a_1632_, lean_object* v_a_1633_, lean_object* v_a_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_, lean_object* v_a_1637_, lean_object* v_a_1638_, lean_object* v_a_1639_, lean_object* v_a_1640_, lean_object* v_a_1641_, lean_object* v_a_1642_){
_start:
{
lean_object* v_res_1643_; 
v_res_1643_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq(v_c_1631_, v_a_1632_, v_a_1633_, v_a_1634_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_, v_a_1639_, v_a_1640_, v_a_1641_);
lean_dec(v_a_1641_);
lean_dec_ref(v_a_1640_);
lean_dec(v_a_1639_);
lean_dec_ref(v_a_1638_);
lean_dec(v_a_1637_);
lean_dec_ref(v_a_1636_);
lean_dec(v_a_1635_);
lean_dec_ref(v_a_1634_);
lean_dec(v_a_1633_);
lean_dec(v_a_1632_);
return v_res_1643_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1(lean_object* v_c_x27_1644_, lean_object* v_as_1645_, size_t v_i_1646_, size_t v_stop_1647_, lean_object* v_b_1648_){
_start:
{
lean_object* v___y_1650_; uint8_t v___x_1654_; 
v___x_1654_ = lean_usize_dec_eq(v_i_1646_, v_stop_1647_);
if (v___x_1654_ == 0)
{
lean_object* v___x_1655_; lean_object* v_p_1656_; lean_object* v_p_1657_; uint8_t v___x_1658_; 
v___x_1655_ = lean_array_uget_borrowed(v_as_1645_, v_i_1646_);
v_p_1656_ = lean_ctor_get(v___x_1655_, 0);
v_p_1657_ = lean_ctor_get(v_c_x27_1644_, 0);
v___x_1658_ = l_Int_Internal_Linear_instBEqPoly_beq(v_p_1656_, v_p_1657_);
if (v___x_1658_ == 0)
{
lean_object* v___x_1659_; 
lean_inc(v___x_1655_);
v___x_1659_ = l_Lean_PersistentArray_push___redArg(v_b_1648_, v___x_1655_);
v___y_1650_ = v___x_1659_;
goto v___jp_1649_;
}
else
{
v___y_1650_ = v_b_1648_;
goto v___jp_1649_;
}
}
else
{
return v_b_1648_;
}
v___jp_1649_:
{
size_t v___x_1651_; size_t v___x_1652_; 
v___x_1651_ = ((size_t)1ULL);
v___x_1652_ = lean_usize_add(v_i_1646_, v___x_1651_);
v_i_1646_ = v___x_1652_;
v_b_1648_ = v___y_1650_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1___boxed(lean_object* v_c_x27_1660_, lean_object* v_as_1661_, lean_object* v_i_1662_, lean_object* v_stop_1663_, lean_object* v_b_1664_){
_start:
{
size_t v_i_boxed_1665_; size_t v_stop_boxed_1666_; lean_object* v_res_1667_; 
v_i_boxed_1665_ = lean_unbox_usize(v_i_1662_);
lean_dec(v_i_1662_);
v_stop_boxed_1666_ = lean_unbox_usize(v_stop_1663_);
lean_dec(v_stop_1663_);
v_res_1667_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1(v_c_x27_1660_, v_as_1661_, v_i_boxed_1665_, v_stop_boxed_1666_, v_b_1664_);
lean_dec_ref(v_as_1661_);
lean_dec_ref(v_c_x27_1660_);
return v_res_1667_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__2(lean_object* v_c_x27_1668_, lean_object* v_x_1669_, lean_object* v_x_1670_){
_start:
{
if (lean_obj_tag(v_x_1669_) == 0)
{
lean_object* v_cs_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; uint8_t v___x_1674_; 
v_cs_1671_ = lean_ctor_get(v_x_1669_, 0);
v___x_1672_ = lean_unsigned_to_nat(0u);
v___x_1673_ = lean_array_get_size(v_cs_1671_);
v___x_1674_ = lean_nat_dec_lt(v___x_1672_, v___x_1673_);
if (v___x_1674_ == 0)
{
return v_x_1670_;
}
else
{
size_t v___x_1675_; size_t v___x_1676_; lean_object* v___x_1677_; 
v___x_1675_ = ((size_t)0ULL);
v___x_1676_ = lean_usize_of_nat(v___x_1673_);
v___x_1677_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0_spec__1(v_c_x27_1668_, v_cs_1671_, v___x_1675_, v___x_1676_, v_x_1670_);
return v___x_1677_;
}
}
else
{
lean_object* v_vs_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; uint8_t v___x_1681_; 
v_vs_1678_ = lean_ctor_get(v_x_1669_, 0);
v___x_1679_ = lean_unsigned_to_nat(0u);
v___x_1680_ = lean_array_get_size(v_vs_1678_);
v___x_1681_ = lean_nat_dec_lt(v___x_1679_, v___x_1680_);
if (v___x_1681_ == 0)
{
return v_x_1670_;
}
else
{
size_t v___x_1682_; size_t v___x_1683_; lean_object* v___x_1684_; 
v___x_1682_ = ((size_t)0ULL);
v___x_1683_ = lean_usize_of_nat(v___x_1680_);
v___x_1684_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1(v_c_x27_1668_, v_vs_1678_, v___x_1682_, v___x_1683_, v_x_1670_);
return v___x_1684_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0_spec__1(lean_object* v_c_x27_1685_, lean_object* v_as_1686_, size_t v_i_1687_, size_t v_stop_1688_, lean_object* v_b_1689_){
_start:
{
uint8_t v___x_1690_; 
v___x_1690_ = lean_usize_dec_eq(v_i_1687_, v_stop_1688_);
if (v___x_1690_ == 0)
{
lean_object* v___x_1691_; lean_object* v___x_1692_; size_t v___x_1693_; size_t v___x_1694_; 
v___x_1691_ = lean_array_uget_borrowed(v_as_1686_, v_i_1687_);
v___x_1692_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__2(v_c_x27_1685_, v___x_1691_, v_b_1689_);
v___x_1693_ = ((size_t)1ULL);
v___x_1694_ = lean_usize_add(v_i_1687_, v___x_1693_);
v_i_1687_ = v___x_1694_;
v_b_1689_ = v___x_1692_;
goto _start;
}
else
{
return v_b_1689_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_c_x27_1696_, lean_object* v_as_1697_, lean_object* v_i_1698_, lean_object* v_stop_1699_, lean_object* v_b_1700_){
_start:
{
size_t v_i_boxed_1701_; size_t v_stop_boxed_1702_; lean_object* v_res_1703_; 
v_i_boxed_1701_ = lean_unbox_usize(v_i_1698_);
lean_dec(v_i_1698_);
v_stop_boxed_1702_ = lean_unbox_usize(v_stop_1699_);
lean_dec(v_stop_1699_);
v_res_1703_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0_spec__1(v_c_x27_1696_, v_as_1697_, v_i_boxed_1701_, v_stop_boxed_1702_, v_b_1700_);
lean_dec_ref(v_as_1697_);
lean_dec_ref(v_c_x27_1696_);
return v_res_1703_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__2___boxed(lean_object* v_c_x27_1704_, lean_object* v_x_1705_, lean_object* v_x_1706_){
_start:
{
lean_object* v_res_1707_; 
v_res_1707_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__2(v_c_x27_1704_, v_x_1705_, v_x_1706_);
lean_dec_ref(v_x_1705_);
lean_dec_ref(v_c_x27_1704_);
return v_res_1707_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0(lean_object* v_c_x27_1708_, lean_object* v_x_1709_, size_t v_x_1710_, size_t v_x_1711_, lean_object* v_x_1712_){
_start:
{
if (lean_obj_tag(v_x_1709_) == 0)
{
lean_object* v_cs_1713_; lean_object* v___x_1714_; size_t v___x_1715_; lean_object* v_j_1716_; lean_object* v___x_1717_; size_t v___x_1718_; size_t v___x_1719_; size_t v___x_1720_; size_t v___x_1721_; size_t v___x_1722_; size_t v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; uint8_t v___x_1728_; 
v_cs_1713_ = lean_ctor_get(v_x_1709_, 0);
v___x_1714_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___closed__0);
v___x_1715_ = lean_usize_shift_right(v_x_1710_, v_x_1711_);
v_j_1716_ = lean_usize_to_nat(v___x_1715_);
v___x_1717_ = lean_array_get_borrowed(v___x_1714_, v_cs_1713_, v_j_1716_);
v___x_1718_ = ((size_t)1ULL);
v___x_1719_ = lean_usize_shift_left(v___x_1718_, v_x_1711_);
v___x_1720_ = lean_usize_sub(v___x_1719_, v___x_1718_);
v___x_1721_ = lean_usize_land(v_x_1710_, v___x_1720_);
v___x_1722_ = ((size_t)5ULL);
v___x_1723_ = lean_usize_sub(v_x_1711_, v___x_1722_);
v___x_1724_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0(v_c_x27_1708_, v___x_1717_, v___x_1721_, v___x_1723_, v_x_1712_);
v___x_1725_ = lean_unsigned_to_nat(1u);
v___x_1726_ = lean_nat_add(v_j_1716_, v___x_1725_);
lean_dec(v_j_1716_);
v___x_1727_ = lean_array_get_size(v_cs_1713_);
v___x_1728_ = lean_nat_dec_lt(v___x_1726_, v___x_1727_);
if (v___x_1728_ == 0)
{
lean_dec(v___x_1726_);
return v___x_1724_;
}
else
{
size_t v___x_1729_; size_t v___x_1730_; lean_object* v___x_1731_; 
v___x_1729_ = lean_usize_of_nat(v___x_1726_);
lean_dec(v___x_1726_);
v___x_1730_ = lean_usize_of_nat(v___x_1727_);
v___x_1731_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0_spec__1(v_c_x27_1708_, v_cs_1713_, v___x_1729_, v___x_1730_, v___x_1724_);
return v___x_1731_;
}
}
else
{
lean_object* v_vs_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; uint8_t v___x_1735_; 
v_vs_1732_ = lean_ctor_get(v_x_1709_, 0);
v___x_1733_ = lean_usize_to_nat(v_x_1710_);
v___x_1734_ = lean_array_get_size(v_vs_1732_);
v___x_1735_ = lean_nat_dec_lt(v___x_1733_, v___x_1734_);
if (v___x_1735_ == 0)
{
lean_dec(v___x_1733_);
return v_x_1712_;
}
else
{
size_t v___x_1736_; size_t v___x_1737_; lean_object* v___x_1738_; 
v___x_1736_ = lean_usize_of_nat(v___x_1733_);
lean_dec(v___x_1733_);
v___x_1737_ = lean_usize_of_nat(v___x_1734_);
v___x_1738_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1(v_c_x27_1708_, v_vs_1732_, v___x_1736_, v___x_1737_, v_x_1712_);
return v___x_1738_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0___boxed(lean_object* v_c_x27_1739_, lean_object* v_x_1740_, lean_object* v_x_1741_, lean_object* v_x_1742_, lean_object* v_x_1743_){
_start:
{
size_t v_x_21497__boxed_1744_; size_t v_x_21498__boxed_1745_; lean_object* v_res_1746_; 
v_x_21497__boxed_1744_ = lean_unbox_usize(v_x_1741_);
lean_dec(v_x_1741_);
v_x_21498__boxed_1745_ = lean_unbox_usize(v_x_1742_);
lean_dec(v_x_1742_);
v_res_1746_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0(v_c_x27_1739_, v_x_1740_, v_x_21497__boxed_1744_, v_x_21498__boxed_1745_, v_x_1743_);
lean_dec_ref(v_x_1740_);
lean_dec_ref(v_c_x27_1739_);
return v_res_1746_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0(lean_object* v_c_x27_1747_, lean_object* v_t_1748_, lean_object* v_init_1749_, lean_object* v_start_1750_){
_start:
{
lean_object* v___x_1751_; uint8_t v___x_1752_; 
v___x_1751_ = lean_unsigned_to_nat(0u);
v___x_1752_ = lean_nat_dec_eq(v_start_1750_, v___x_1751_);
if (v___x_1752_ == 0)
{
lean_object* v_root_1753_; lean_object* v_tail_1754_; size_t v_shift_1755_; lean_object* v_tailOff_1756_; uint8_t v___x_1757_; 
v_root_1753_ = lean_ctor_get(v_t_1748_, 0);
v_tail_1754_ = lean_ctor_get(v_t_1748_, 1);
v_shift_1755_ = lean_ctor_get_usize(v_t_1748_, 4);
v_tailOff_1756_ = lean_ctor_get(v_t_1748_, 3);
v___x_1757_ = lean_nat_dec_le(v_tailOff_1756_, v_start_1750_);
if (v___x_1757_ == 0)
{
size_t v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; uint8_t v___x_1761_; 
v___x_1758_ = lean_usize_of_nat(v_start_1750_);
v___x_1759_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0(v_c_x27_1747_, v_root_1753_, v___x_1758_, v_shift_1755_, v_init_1749_);
v___x_1760_ = lean_array_get_size(v_tail_1754_);
v___x_1761_ = lean_nat_dec_lt(v___x_1751_, v___x_1760_);
if (v___x_1761_ == 0)
{
return v___x_1759_;
}
else
{
size_t v___x_1762_; size_t v___x_1763_; lean_object* v___x_1764_; 
v___x_1762_ = ((size_t)0ULL);
v___x_1763_ = lean_usize_of_nat(v___x_1760_);
v___x_1764_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1(v_c_x27_1747_, v_tail_1754_, v___x_1762_, v___x_1763_, v___x_1759_);
return v___x_1764_;
}
}
else
{
lean_object* v___x_1765_; lean_object* v___x_1766_; uint8_t v___x_1767_; 
v___x_1765_ = lean_nat_sub(v_start_1750_, v_tailOff_1756_);
v___x_1766_ = lean_array_get_size(v_tail_1754_);
v___x_1767_ = lean_nat_dec_lt(v___x_1765_, v___x_1766_);
if (v___x_1767_ == 0)
{
lean_dec(v___x_1765_);
return v_init_1749_;
}
else
{
size_t v___x_1768_; size_t v___x_1769_; lean_object* v___x_1770_; 
v___x_1768_ = lean_usize_of_nat(v___x_1765_);
lean_dec(v___x_1765_);
v___x_1769_ = lean_usize_of_nat(v___x_1766_);
v___x_1770_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1(v_c_x27_1747_, v_tail_1754_, v___x_1768_, v___x_1769_, v_init_1749_);
return v___x_1770_;
}
}
}
else
{
lean_object* v_root_1771_; lean_object* v_tail_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; uint8_t v___x_1775_; 
v_root_1771_ = lean_ctor_get(v_t_1748_, 0);
v_tail_1772_ = lean_ctor_get(v_t_1748_, 1);
v___x_1773_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__2(v_c_x27_1747_, v_root_1771_, v_init_1749_);
v___x_1774_ = lean_array_get_size(v_tail_1772_);
v___x_1775_ = lean_nat_dec_lt(v___x_1751_, v___x_1774_);
if (v___x_1775_ == 0)
{
return v___x_1773_;
}
else
{
size_t v___x_1776_; size_t v___x_1777_; lean_object* v___x_1778_; 
v___x_1776_ = ((size_t)0ULL);
v___x_1777_ = lean_usize_of_nat(v___x_1774_);
v___x_1778_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1(v_c_x27_1747_, v_tail_1772_, v___x_1776_, v___x_1777_, v___x_1773_);
return v___x_1778_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0___boxed(lean_object* v_c_x27_1779_, lean_object* v_t_1780_, lean_object* v_init_1781_, lean_object* v_start_1782_){
_start:
{
lean_object* v_res_1783_; 
v_res_1783_ = l_Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0(v_c_x27_1779_, v_t_1780_, v_init_1781_, v_start_1782_);
lean_dec(v_start_1782_);
lean_dec_ref(v_t_1780_);
lean_dec_ref(v_c_x27_1779_);
return v_res_1783_;
}
}
static lean_object* _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__0(void){
_start:
{
lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; 
v___x_1784_ = lean_unsigned_to_nat(32u);
v___x_1785_ = lean_mk_empty_array_with_capacity(v___x_1784_);
v___x_1786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1786_, 0, v___x_1785_);
return v___x_1786_;
}
}
static lean_object* _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__1(void){
_start:
{
size_t v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; 
v___x_1787_ = ((size_t)5ULL);
v___x_1788_ = lean_unsigned_to_nat(0u);
v___x_1789_ = lean_unsigned_to_nat(32u);
v___x_1790_ = lean_mk_empty_array_with_capacity(v___x_1789_);
v___x_1791_ = lean_obj_once(&l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__0, &l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__0_once, _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__0);
v___x_1792_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1792_, 0, v___x_1791_);
lean_ctor_set(v___x_1792_, 1, v___x_1790_);
lean_ctor_set(v___x_1792_, 2, v___x_1788_);
lean_ctor_set(v___x_1792_, 3, v___x_1788_);
lean_ctor_set_usize(v___x_1792_, 4, v___x_1787_);
return v___x_1792_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4(lean_object* v_c_x27_1793_, lean_object* v_x_1794_, size_t v_x_1795_, size_t v_x_1796_){
_start:
{
if (lean_obj_tag(v_x_1794_) == 0)
{
lean_object* v_cs_1797_; size_t v_j_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; uint8_t v___x_1801_; 
v_cs_1797_ = lean_ctor_get(v_x_1794_, 0);
v_j_1798_ = lean_usize_shift_right(v_x_1795_, v_x_1796_);
v___x_1799_ = lean_usize_to_nat(v_j_1798_);
v___x_1800_ = lean_array_get_size(v_cs_1797_);
v___x_1801_ = lean_nat_dec_lt(v___x_1799_, v___x_1800_);
if (v___x_1801_ == 0)
{
lean_dec(v___x_1799_);
return v_x_1794_;
}
else
{
lean_object* v___x_1803_; uint8_t v_isShared_1804_; uint8_t v_isSharedCheck_1819_; 
lean_inc_ref(v_cs_1797_);
v_isSharedCheck_1819_ = !lean_is_exclusive(v_x_1794_);
if (v_isSharedCheck_1819_ == 0)
{
lean_object* v_unused_1820_; 
v_unused_1820_ = lean_ctor_get(v_x_1794_, 0);
lean_dec(v_unused_1820_);
v___x_1803_ = v_x_1794_;
v_isShared_1804_ = v_isSharedCheck_1819_;
goto v_resetjp_1802_;
}
else
{
lean_dec(v_x_1794_);
v___x_1803_ = lean_box(0);
v_isShared_1804_ = v_isSharedCheck_1819_;
goto v_resetjp_1802_;
}
v_resetjp_1802_:
{
size_t v___x_1805_; size_t v___x_1806_; size_t v___x_1807_; size_t v_i_1808_; size_t v___x_1809_; size_t v_shift_1810_; lean_object* v_v_1811_; lean_object* v___x_1812_; lean_object* v_xs_x27_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1817_; 
v___x_1805_ = ((size_t)1ULL);
v___x_1806_ = lean_usize_shift_left(v___x_1805_, v_x_1796_);
v___x_1807_ = lean_usize_sub(v___x_1806_, v___x_1805_);
v_i_1808_ = lean_usize_land(v_x_1795_, v___x_1807_);
v___x_1809_ = ((size_t)5ULL);
v_shift_1810_ = lean_usize_sub(v_x_1796_, v___x_1809_);
v_v_1811_ = lean_array_fget(v_cs_1797_, v___x_1799_);
v___x_1812_ = lean_box(0);
v_xs_x27_1813_ = lean_array_fset(v_cs_1797_, v___x_1799_, v___x_1812_);
v___x_1814_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4(v_c_x27_1793_, v_v_1811_, v_i_1808_, v_shift_1810_);
v___x_1815_ = lean_array_fset(v_xs_x27_1813_, v___x_1799_, v___x_1814_);
lean_dec(v___x_1799_);
if (v_isShared_1804_ == 0)
{
lean_ctor_set(v___x_1803_, 0, v___x_1815_);
v___x_1817_ = v___x_1803_;
goto v_reusejp_1816_;
}
else
{
lean_object* v_reuseFailAlloc_1818_; 
v_reuseFailAlloc_1818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1818_, 0, v___x_1815_);
v___x_1817_ = v_reuseFailAlloc_1818_;
goto v_reusejp_1816_;
}
v_reusejp_1816_:
{
return v___x_1817_;
}
}
}
}
else
{
lean_object* v_vs_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; uint8_t v___x_1824_; 
v_vs_1821_ = lean_ctor_get(v_x_1794_, 0);
v___x_1822_ = lean_usize_to_nat(v_x_1795_);
v___x_1823_ = lean_array_get_size(v_vs_1821_);
v___x_1824_ = lean_nat_dec_lt(v___x_1822_, v___x_1823_);
if (v___x_1824_ == 0)
{
lean_dec(v___x_1822_);
return v_x_1794_;
}
else
{
lean_object* v___x_1826_; uint8_t v_isShared_1827_; uint8_t v_isSharedCheck_1838_; 
lean_inc_ref(v_vs_1821_);
v_isSharedCheck_1838_ = !lean_is_exclusive(v_x_1794_);
if (v_isSharedCheck_1838_ == 0)
{
lean_object* v_unused_1839_; 
v_unused_1839_ = lean_ctor_get(v_x_1794_, 0);
lean_dec(v_unused_1839_);
v___x_1826_ = v_x_1794_;
v_isShared_1827_ = v_isSharedCheck_1838_;
goto v_resetjp_1825_;
}
else
{
lean_dec(v_x_1794_);
v___x_1826_ = lean_box(0);
v_isShared_1827_ = v_isSharedCheck_1838_;
goto v_resetjp_1825_;
}
v_resetjp_1825_:
{
lean_object* v_v_1828_; lean_object* v___x_1829_; lean_object* v_xs_x27_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1836_; 
v_v_1828_ = lean_array_fget(v_vs_1821_, v___x_1822_);
v___x_1829_ = lean_box(0);
v_xs_x27_1830_ = lean_array_fset(v_vs_1821_, v___x_1822_, v___x_1829_);
v___x_1831_ = lean_unsigned_to_nat(0u);
v___x_1832_ = lean_obj_once(&l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__1, &l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__1_once, _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__1);
v___x_1833_ = l_Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0(v_c_x27_1793_, v_v_1828_, v___x_1832_, v___x_1831_);
lean_dec(v_v_1828_);
v___x_1834_ = lean_array_fset(v_xs_x27_1830_, v___x_1822_, v___x_1833_);
lean_dec(v___x_1822_);
if (v_isShared_1827_ == 0)
{
lean_ctor_set(v___x_1826_, 0, v___x_1834_);
v___x_1836_ = v___x_1826_;
goto v_reusejp_1835_;
}
else
{
lean_object* v_reuseFailAlloc_1837_; 
v_reuseFailAlloc_1837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1837_, 0, v___x_1834_);
v___x_1836_ = v_reuseFailAlloc_1837_;
goto v_reusejp_1835_;
}
v_reusejp_1835_:
{
return v___x_1836_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___boxed(lean_object* v_c_x27_1840_, lean_object* v_x_1841_, lean_object* v_x_1842_, lean_object* v_x_1843_){
_start:
{
size_t v_x_21623__boxed_1844_; size_t v_x_21624__boxed_1845_; lean_object* v_res_1846_; 
v_x_21623__boxed_1844_ = lean_unbox_usize(v_x_1842_);
lean_dec(v_x_1842_);
v_x_21624__boxed_1845_ = lean_unbox_usize(v_x_1843_);
lean_dec(v_x_1843_);
v_res_1846_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4(v_c_x27_1840_, v_x_1841_, v_x_21623__boxed_1844_, v_x_21624__boxed_1845_);
lean_dec_ref(v_c_x27_1840_);
return v_res_1846_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1(lean_object* v_c_x27_1847_, lean_object* v_t_1848_, lean_object* v_i_1849_){
_start:
{
lean_object* v_root_1850_; lean_object* v_tail_1851_; lean_object* v_size_1852_; size_t v_shift_1853_; lean_object* v_tailOff_1854_; lean_object* v___x_1856_; uint8_t v_isShared_1857_; uint8_t v_isSharedCheck_1882_; 
v_root_1850_ = lean_ctor_get(v_t_1848_, 0);
v_tail_1851_ = lean_ctor_get(v_t_1848_, 1);
v_size_1852_ = lean_ctor_get(v_t_1848_, 2);
v_shift_1853_ = lean_ctor_get_usize(v_t_1848_, 4);
v_tailOff_1854_ = lean_ctor_get(v_t_1848_, 3);
v_isSharedCheck_1882_ = !lean_is_exclusive(v_t_1848_);
if (v_isSharedCheck_1882_ == 0)
{
v___x_1856_ = v_t_1848_;
v_isShared_1857_ = v_isSharedCheck_1882_;
goto v_resetjp_1855_;
}
else
{
lean_inc(v_tailOff_1854_);
lean_inc(v_size_1852_);
lean_inc(v_tail_1851_);
lean_inc(v_root_1850_);
lean_dec(v_t_1848_);
v___x_1856_ = lean_box(0);
v_isShared_1857_ = v_isSharedCheck_1882_;
goto v_resetjp_1855_;
}
v_resetjp_1855_:
{
uint8_t v___x_1858_; 
v___x_1858_ = lean_nat_dec_le(v_tailOff_1854_, v_i_1849_);
if (v___x_1858_ == 0)
{
size_t v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1862_; 
v___x_1859_ = lean_usize_of_nat(v_i_1849_);
v___x_1860_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4(v_c_x27_1847_, v_root_1850_, v___x_1859_, v_shift_1853_);
if (v_isShared_1857_ == 0)
{
lean_ctor_set(v___x_1856_, 0, v___x_1860_);
v___x_1862_ = v___x_1856_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v___x_1860_);
lean_ctor_set(v_reuseFailAlloc_1863_, 1, v_tail_1851_);
lean_ctor_set(v_reuseFailAlloc_1863_, 2, v_size_1852_);
lean_ctor_set(v_reuseFailAlloc_1863_, 3, v_tailOff_1854_);
lean_ctor_set_usize(v_reuseFailAlloc_1863_, 4, v_shift_1853_);
v___x_1862_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
return v___x_1862_;
}
}
else
{
lean_object* v___x_1864_; lean_object* v___x_1865_; uint8_t v___x_1866_; 
v___x_1864_ = lean_nat_sub(v_i_1849_, v_tailOff_1854_);
v___x_1865_ = lean_array_get_size(v_tail_1851_);
v___x_1866_ = lean_nat_dec_lt(v___x_1864_, v___x_1865_);
if (v___x_1866_ == 0)
{
lean_object* v___x_1868_; 
lean_dec(v___x_1864_);
if (v_isShared_1857_ == 0)
{
v___x_1868_ = v___x_1856_;
goto v_reusejp_1867_;
}
else
{
lean_object* v_reuseFailAlloc_1869_; 
v_reuseFailAlloc_1869_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_1869_, 0, v_root_1850_);
lean_ctor_set(v_reuseFailAlloc_1869_, 1, v_tail_1851_);
lean_ctor_set(v_reuseFailAlloc_1869_, 2, v_size_1852_);
lean_ctor_set(v_reuseFailAlloc_1869_, 3, v_tailOff_1854_);
lean_ctor_set_usize(v_reuseFailAlloc_1869_, 4, v_shift_1853_);
v___x_1868_ = v_reuseFailAlloc_1869_;
goto v_reusejp_1867_;
}
v_reusejp_1867_:
{
return v___x_1868_;
}
}
else
{
lean_object* v_v_1870_; lean_object* v___x_1871_; lean_object* v_xs_x27_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1880_; 
v_v_1870_ = lean_array_fget(v_tail_1851_, v___x_1864_);
v___x_1871_ = lean_box(0);
v_xs_x27_1872_ = lean_array_fset(v_tail_1851_, v___x_1864_, v___x_1871_);
v___x_1873_ = lean_unsigned_to_nat(32u);
v___x_1874_ = lean_mk_empty_array_with_capacity(v___x_1873_);
lean_dec_ref(v___x_1874_);
v___x_1875_ = lean_unsigned_to_nat(0u);
v___x_1876_ = lean_obj_once(&l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__1, &l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__1_once, _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__1);
v___x_1877_ = l_Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0(v_c_x27_1847_, v_v_1870_, v___x_1876_, v___x_1875_);
lean_dec(v_v_1870_);
v___x_1878_ = lean_array_fset(v_xs_x27_1872_, v___x_1864_, v___x_1877_);
lean_dec(v___x_1864_);
if (v_isShared_1857_ == 0)
{
lean_ctor_set(v___x_1856_, 1, v___x_1878_);
v___x_1880_ = v___x_1856_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v_root_1850_);
lean_ctor_set(v_reuseFailAlloc_1881_, 1, v___x_1878_);
lean_ctor_set(v_reuseFailAlloc_1881_, 2, v_size_1852_);
lean_ctor_set(v_reuseFailAlloc_1881_, 3, v_tailOff_1854_);
lean_ctor_set_usize(v_reuseFailAlloc_1881_, 4, v_shift_1853_);
v___x_1880_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
return v___x_1880_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1___boxed(lean_object* v_c_x27_1883_, lean_object* v_t_1884_, lean_object* v_i_1885_){
_start:
{
lean_object* v_res_1886_; 
v_res_1886_ = l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1(v_c_x27_1883_, v_t_1884_, v_i_1885_);
lean_dec(v_i_1885_);
lean_dec_ref(v_c_x27_1883_);
return v_res_1886_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___lam__0(lean_object* v_a_1887_, lean_object* v_x_1888_, lean_object* v_s_1889_){
_start:
{
lean_object* v_vars_1890_; lean_object* v_varMap_1891_; lean_object* v_varsHistory_1892_; lean_object* v_natToIntMap_1893_; lean_object* v_natDef_1894_; lean_object* v_dvds_1895_; lean_object* v_lowers_1896_; lean_object* v_uppers_1897_; lean_object* v_diseqs_1898_; lean_object* v_elimEqs_1899_; lean_object* v_active_1900_; lean_object* v_elimStack_1901_; lean_object* v_occurs_1902_; lean_object* v_assignment_1903_; lean_object* v_nextCnstrId_1904_; uint8_t v_caseSplits_1905_; lean_object* v_steps_1906_; lean_object* v_penalties_1907_; lean_object* v_numReorderRequests_1908_; lean_object* v_conflict_x3f_1909_; lean_object* v_diseqSplits_1910_; lean_object* v_divMod_1911_; uint8_t v_usedCommRing_1912_; lean_object* v_nonlinearOccs_1913_; lean_object* v___x_1915_; uint8_t v_isShared_1916_; uint8_t v_isSharedCheck_1921_; 
v_vars_1890_ = lean_ctor_get(v_s_1889_, 0);
v_varMap_1891_ = lean_ctor_get(v_s_1889_, 1);
v_varsHistory_1892_ = lean_ctor_get(v_s_1889_, 2);
v_natToIntMap_1893_ = lean_ctor_get(v_s_1889_, 3);
v_natDef_1894_ = lean_ctor_get(v_s_1889_, 4);
v_dvds_1895_ = lean_ctor_get(v_s_1889_, 5);
v_lowers_1896_ = lean_ctor_get(v_s_1889_, 6);
v_uppers_1897_ = lean_ctor_get(v_s_1889_, 7);
v_diseqs_1898_ = lean_ctor_get(v_s_1889_, 8);
v_elimEqs_1899_ = lean_ctor_get(v_s_1889_, 9);
v_active_1900_ = lean_ctor_get(v_s_1889_, 10);
v_elimStack_1901_ = lean_ctor_get(v_s_1889_, 11);
v_occurs_1902_ = lean_ctor_get(v_s_1889_, 12);
v_assignment_1903_ = lean_ctor_get(v_s_1889_, 13);
v_nextCnstrId_1904_ = lean_ctor_get(v_s_1889_, 14);
v_caseSplits_1905_ = lean_ctor_get_uint8(v_s_1889_, sizeof(void*)*22);
v_steps_1906_ = lean_ctor_get(v_s_1889_, 15);
v_penalties_1907_ = lean_ctor_get(v_s_1889_, 16);
v_numReorderRequests_1908_ = lean_ctor_get(v_s_1889_, 17);
v_conflict_x3f_1909_ = lean_ctor_get(v_s_1889_, 18);
v_diseqSplits_1910_ = lean_ctor_get(v_s_1889_, 19);
v_divMod_1911_ = lean_ctor_get(v_s_1889_, 20);
v_usedCommRing_1912_ = lean_ctor_get_uint8(v_s_1889_, sizeof(void*)*22 + 1);
v_nonlinearOccs_1913_ = lean_ctor_get(v_s_1889_, 21);
v_isSharedCheck_1921_ = !lean_is_exclusive(v_s_1889_);
if (v_isSharedCheck_1921_ == 0)
{
v___x_1915_ = v_s_1889_;
v_isShared_1916_ = v_isSharedCheck_1921_;
goto v_resetjp_1914_;
}
else
{
lean_inc(v_nonlinearOccs_1913_);
lean_inc(v_divMod_1911_);
lean_inc(v_diseqSplits_1910_);
lean_inc(v_conflict_x3f_1909_);
lean_inc(v_numReorderRequests_1908_);
lean_inc(v_penalties_1907_);
lean_inc(v_steps_1906_);
lean_inc(v_nextCnstrId_1904_);
lean_inc(v_assignment_1903_);
lean_inc(v_occurs_1902_);
lean_inc(v_elimStack_1901_);
lean_inc(v_active_1900_);
lean_inc(v_elimEqs_1899_);
lean_inc(v_diseqs_1898_);
lean_inc(v_uppers_1897_);
lean_inc(v_lowers_1896_);
lean_inc(v_dvds_1895_);
lean_inc(v_natDef_1894_);
lean_inc(v_natToIntMap_1893_);
lean_inc(v_varsHistory_1892_);
lean_inc(v_varMap_1891_);
lean_inc(v_vars_1890_);
lean_dec(v_s_1889_);
v___x_1915_ = lean_box(0);
v_isShared_1916_ = v_isSharedCheck_1921_;
goto v_resetjp_1914_;
}
v_resetjp_1914_:
{
lean_object* v___x_1917_; lean_object* v___x_1919_; 
v___x_1917_ = l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1(v_a_1887_, v_diseqs_1898_, v_x_1888_);
if (v_isShared_1916_ == 0)
{
lean_ctor_set(v___x_1915_, 8, v___x_1917_);
v___x_1919_ = v___x_1915_;
goto v_reusejp_1918_;
}
else
{
lean_object* v_reuseFailAlloc_1920_; 
v_reuseFailAlloc_1920_ = lean_alloc_ctor(0, 22, 2);
lean_ctor_set(v_reuseFailAlloc_1920_, 0, v_vars_1890_);
lean_ctor_set(v_reuseFailAlloc_1920_, 1, v_varMap_1891_);
lean_ctor_set(v_reuseFailAlloc_1920_, 2, v_varsHistory_1892_);
lean_ctor_set(v_reuseFailAlloc_1920_, 3, v_natToIntMap_1893_);
lean_ctor_set(v_reuseFailAlloc_1920_, 4, v_natDef_1894_);
lean_ctor_set(v_reuseFailAlloc_1920_, 5, v_dvds_1895_);
lean_ctor_set(v_reuseFailAlloc_1920_, 6, v_lowers_1896_);
lean_ctor_set(v_reuseFailAlloc_1920_, 7, v_uppers_1897_);
lean_ctor_set(v_reuseFailAlloc_1920_, 8, v___x_1917_);
lean_ctor_set(v_reuseFailAlloc_1920_, 9, v_elimEqs_1899_);
lean_ctor_set(v_reuseFailAlloc_1920_, 10, v_active_1900_);
lean_ctor_set(v_reuseFailAlloc_1920_, 11, v_elimStack_1901_);
lean_ctor_set(v_reuseFailAlloc_1920_, 12, v_occurs_1902_);
lean_ctor_set(v_reuseFailAlloc_1920_, 13, v_assignment_1903_);
lean_ctor_set(v_reuseFailAlloc_1920_, 14, v_nextCnstrId_1904_);
lean_ctor_set(v_reuseFailAlloc_1920_, 15, v_steps_1906_);
lean_ctor_set(v_reuseFailAlloc_1920_, 16, v_penalties_1907_);
lean_ctor_set(v_reuseFailAlloc_1920_, 17, v_numReorderRequests_1908_);
lean_ctor_set(v_reuseFailAlloc_1920_, 18, v_conflict_x3f_1909_);
lean_ctor_set(v_reuseFailAlloc_1920_, 19, v_diseqSplits_1910_);
lean_ctor_set(v_reuseFailAlloc_1920_, 20, v_divMod_1911_);
lean_ctor_set(v_reuseFailAlloc_1920_, 21, v_nonlinearOccs_1913_);
lean_ctor_set_uint8(v_reuseFailAlloc_1920_, sizeof(void*)*22, v_caseSplits_1905_);
lean_ctor_set_uint8(v_reuseFailAlloc_1920_, sizeof(void*)*22 + 1, v_usedCommRing_1912_);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___lam__0___boxed(lean_object* v_a_1922_, lean_object* v_x_1923_, lean_object* v_s_1924_){
_start:
{
lean_object* v_res_1925_; 
v_res_1925_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___lam__0(v_a_1922_, v_x_1923_, v_s_1924_);
lean_dec(v_x_1923_);
lean_dec_ref(v_a_1922_);
return v_res_1925_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0(void){
_start:
{
lean_object* v___x_1926_; lean_object* v___x_1927_; 
v___x_1926_ = lean_unsigned_to_nat(1u);
v___x_1927_ = lean_nat_to_int(v___x_1926_);
return v___x_1927_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg(lean_object* v_x_1934_, lean_object* v_c_1935_, lean_object* v_as_1936_, size_t v_sz_1937_, size_t v_i_1938_, lean_object* v_b_1939_, lean_object* v___y_1940_){
_start:
{
uint8_t v___x_1942_; 
v___x_1942_ = lean_usize_dec_lt(v_i_1938_, v_sz_1937_);
if (v___x_1942_ == 0)
{
lean_object* v___x_1943_; 
lean_dec_ref(v_c_1935_);
lean_dec(v_x_1934_);
v___x_1943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1943_, 0, v_b_1939_);
return v___x_1943_;
}
else
{
lean_object* v_snd_1944_; lean_object* v___x_1946_; uint8_t v_isShared_1947_; uint8_t v_isSharedCheck_1990_; 
v_snd_1944_ = lean_ctor_get(v_b_1939_, 1);
v_isSharedCheck_1990_ = !lean_is_exclusive(v_b_1939_);
if (v_isSharedCheck_1990_ == 0)
{
lean_object* v_unused_1991_; 
v_unused_1991_ = lean_ctor_get(v_b_1939_, 0);
lean_dec(v_unused_1991_);
v___x_1946_ = v_b_1939_;
v_isShared_1947_ = v_isSharedCheck_1990_;
goto v_resetjp_1945_;
}
else
{
lean_inc(v_snd_1944_);
lean_dec(v_b_1939_);
v___x_1946_ = lean_box(0);
v_isShared_1947_ = v_isSharedCheck_1990_;
goto v_resetjp_1945_;
}
v_resetjp_1945_:
{
lean_object* v_p_1948_; lean_object* v_a_1949_; lean_object* v_p_1950_; lean_object* v___x_1951_; lean_object* v___f_1952_; uint8_t v___x_1984_; 
v_p_1948_ = lean_ctor_get(v_c_1935_, 0);
v_a_1949_ = lean_array_uget_borrowed(v_as_1936_, v_i_1938_);
v_p_1950_ = lean_ctor_get(v_a_1949_, 0);
v___x_1951_ = lean_box(0);
lean_inc(v_x_1934_);
lean_inc(v_a_1949_);
v___f_1952_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1952_, 0, v_a_1949_);
lean_closure_set(v___f_1952_, 1, v_x_1934_);
v___x_1984_ = l_Int_Internal_Linear_instBEqPoly_beq(v_p_1948_, v_p_1950_);
if (v___x_1984_ == 0)
{
uint8_t v___x_1985_; 
v___x_1985_ = l_Int_Internal_Linear_Poly_isNegEq(v_p_1948_, v_p_1950_);
if (v___x_1985_ == 0)
{
lean_object* v___x_1986_; size_t v___x_1987_; size_t v___x_1988_; 
lean_dec_ref(v___f_1952_);
lean_del_object(v___x_1946_);
lean_dec(v_snd_1944_);
v___x_1986_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2));
v___x_1987_ = ((size_t)1ULL);
v___x_1988_ = lean_usize_add(v_i_1938_, v___x_1987_);
v_i_1938_ = v___x_1988_;
v_b_1939_ = v___x_1986_;
goto _start;
}
else
{
lean_dec(v_x_1934_);
goto v___jp_1953_;
}
}
else
{
lean_dec(v_x_1934_);
goto v___jp_1953_;
}
v___jp_1953_:
{
lean_object* v___x_1954_; lean_object* v___x_1955_; 
v___x_1954_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_1955_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_1954_, v___f_1952_, v___y_1940_);
if (lean_obj_tag(v___x_1955_) == 0)
{
lean_object* v___x_1957_; uint8_t v_isShared_1958_; uint8_t v_isSharedCheck_1974_; 
v_isSharedCheck_1974_ = !lean_is_exclusive(v___x_1955_);
if (v_isSharedCheck_1974_ == 0)
{
lean_object* v_unused_1975_; 
v_unused_1975_ = lean_ctor_get(v___x_1955_, 0);
lean_dec(v_unused_1975_);
v___x_1957_ = v___x_1955_;
v_isShared_1958_ = v_isSharedCheck_1974_;
goto v_resetjp_1956_;
}
else
{
lean_dec(v___x_1955_);
v___x_1957_ = lean_box(0);
v_isShared_1958_ = v_isSharedCheck_1974_;
goto v_resetjp_1956_;
}
v_resetjp_1956_:
{
lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1967_; 
v___x_1959_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0);
lean_inc_ref(v_p_1948_);
v___x_1960_ = l_Int_Internal_Linear_Poly_addConst(v_p_1948_, v___x_1959_);
lean_inc(v_a_1949_);
v___x_1961_ = lean_alloc_ctor(13, 2, 0);
lean_ctor_set(v___x_1961_, 0, v_c_1935_);
lean_ctor_set(v___x_1961_, 1, v_a_1949_);
v___x_1962_ = lean_box(0);
v___x_1963_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1963_, 0, v___x_1960_);
lean_ctor_set(v___x_1963_, 1, v___x_1961_);
lean_ctor_set(v___x_1963_, 2, v___x_1962_);
v___x_1964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1964_, 0, v___x_1963_);
v___x_1965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1965_, 0, v___x_1964_);
if (v_isShared_1947_ == 0)
{
lean_ctor_set(v___x_1946_, 1, v___x_1951_);
lean_ctor_set(v___x_1946_, 0, v___x_1965_);
v___x_1967_ = v___x_1946_;
goto v_reusejp_1966_;
}
else
{
lean_object* v_reuseFailAlloc_1973_; 
v_reuseFailAlloc_1973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v___x_1965_);
lean_ctor_set(v_reuseFailAlloc_1973_, 1, v___x_1951_);
v___x_1967_ = v_reuseFailAlloc_1973_;
goto v_reusejp_1966_;
}
v_reusejp_1966_:
{
lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1971_; 
v___x_1968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1968_, 0, v___x_1967_);
v___x_1969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1969_, 0, v___x_1968_);
lean_ctor_set(v___x_1969_, 1, v_snd_1944_);
if (v_isShared_1958_ == 0)
{
lean_ctor_set(v___x_1957_, 0, v___x_1969_);
v___x_1971_ = v___x_1957_;
goto v_reusejp_1970_;
}
else
{
lean_object* v_reuseFailAlloc_1972_; 
v_reuseFailAlloc_1972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1972_, 0, v___x_1969_);
v___x_1971_ = v_reuseFailAlloc_1972_;
goto v_reusejp_1970_;
}
v_reusejp_1970_:
{
return v___x_1971_;
}
}
}
}
else
{
lean_object* v_a_1976_; lean_object* v___x_1978_; uint8_t v_isShared_1979_; uint8_t v_isSharedCheck_1983_; 
lean_del_object(v___x_1946_);
lean_dec(v_snd_1944_);
lean_dec_ref(v_c_1935_);
v_a_1976_ = lean_ctor_get(v___x_1955_, 0);
v_isSharedCheck_1983_ = !lean_is_exclusive(v___x_1955_);
if (v_isSharedCheck_1983_ == 0)
{
v___x_1978_ = v___x_1955_;
v_isShared_1979_ = v_isSharedCheck_1983_;
goto v_resetjp_1977_;
}
else
{
lean_inc(v_a_1976_);
lean_dec(v___x_1955_);
v___x_1978_ = lean_box(0);
v_isShared_1979_ = v_isSharedCheck_1983_;
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
lean_object* v_reuseFailAlloc_1982_; 
v_reuseFailAlloc_1982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1982_, 0, v_a_1976_);
v___x_1981_ = v_reuseFailAlloc_1982_;
goto v_reusejp_1980_;
}
v_reusejp_1980_:
{
return v___x_1981_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___boxed(lean_object* v_x_1992_, lean_object* v_c_1993_, lean_object* v_as_1994_, lean_object* v_sz_1995_, lean_object* v_i_1996_, lean_object* v_b_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_){
_start:
{
size_t v_sz_boxed_2000_; size_t v_i_boxed_2001_; lean_object* v_res_2002_; 
v_sz_boxed_2000_ = lean_unbox_usize(v_sz_1995_);
lean_dec(v_sz_1995_);
v_i_boxed_2001_ = lean_unbox_usize(v_i_1996_);
lean_dec(v_i_1996_);
v_res_2002_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg(v_x_1992_, v_c_1993_, v_as_1994_, v_sz_boxed_2000_, v_i_boxed_2001_, v_b_1997_, v___y_1998_);
lean_dec(v___y_1998_);
lean_dec_ref(v_as_1994_);
return v_res_2002_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7(lean_object* v_x_2009_, lean_object* v_c_2010_, lean_object* v_as_2011_, size_t v_sz_2012_, size_t v_i_2013_, lean_object* v_b_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_){
_start:
{
uint8_t v___x_2026_; 
v___x_2026_ = lean_usize_dec_lt(v_i_2013_, v_sz_2012_);
if (v___x_2026_ == 0)
{
lean_object* v___x_2027_; 
lean_dec_ref(v_c_2010_);
lean_dec(v_x_2009_);
v___x_2027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2027_, 0, v_b_2014_);
return v___x_2027_;
}
else
{
lean_object* v_snd_2028_; lean_object* v___x_2030_; uint8_t v_isShared_2031_; uint8_t v_isSharedCheck_2074_; 
v_snd_2028_ = lean_ctor_get(v_b_2014_, 1);
v_isSharedCheck_2074_ = !lean_is_exclusive(v_b_2014_);
if (v_isSharedCheck_2074_ == 0)
{
lean_object* v_unused_2075_; 
v_unused_2075_ = lean_ctor_get(v_b_2014_, 0);
lean_dec(v_unused_2075_);
v___x_2030_ = v_b_2014_;
v_isShared_2031_ = v_isSharedCheck_2074_;
goto v_resetjp_2029_;
}
else
{
lean_inc(v_snd_2028_);
lean_dec(v_b_2014_);
v___x_2030_ = lean_box(0);
v_isShared_2031_ = v_isSharedCheck_2074_;
goto v_resetjp_2029_;
}
v_resetjp_2029_:
{
lean_object* v_p_2032_; lean_object* v_a_2033_; lean_object* v_p_2034_; lean_object* v___x_2035_; lean_object* v___f_2036_; uint8_t v___x_2068_; 
v_p_2032_ = lean_ctor_get(v_c_2010_, 0);
v_a_2033_ = lean_array_uget_borrowed(v_as_2011_, v_i_2013_);
v_p_2034_ = lean_ctor_get(v_a_2033_, 0);
v___x_2035_ = lean_box(0);
lean_inc(v_x_2009_);
lean_inc(v_a_2033_);
v___f_2036_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2036_, 0, v_a_2033_);
lean_closure_set(v___f_2036_, 1, v_x_2009_);
v___x_2068_ = l_Int_Internal_Linear_instBEqPoly_beq(v_p_2032_, v_p_2034_);
if (v___x_2068_ == 0)
{
uint8_t v___x_2069_; 
v___x_2069_ = l_Int_Internal_Linear_Poly_isNegEq(v_p_2032_, v_p_2034_);
if (v___x_2069_ == 0)
{
lean_object* v___x_2070_; size_t v___x_2071_; size_t v___x_2072_; lean_object* v___x_2073_; 
lean_dec_ref(v___f_2036_);
lean_del_object(v___x_2030_);
lean_dec(v_snd_2028_);
v___x_2070_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___closed__1));
v___x_2071_ = ((size_t)1ULL);
v___x_2072_ = lean_usize_add(v_i_2013_, v___x_2071_);
v___x_2073_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg(v_x_2009_, v_c_2010_, v_as_2011_, v_sz_2012_, v___x_2072_, v___x_2070_, v___y_2015_);
return v___x_2073_;
}
else
{
lean_dec(v_x_2009_);
goto v___jp_2037_;
}
}
else
{
lean_dec(v_x_2009_);
goto v___jp_2037_;
}
v___jp_2037_:
{
lean_object* v___x_2038_; lean_object* v___x_2039_; 
v___x_2038_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_2039_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_2038_, v___f_2036_, v___y_2015_);
if (lean_obj_tag(v___x_2039_) == 0)
{
lean_object* v___x_2041_; uint8_t v_isShared_2042_; uint8_t v_isSharedCheck_2058_; 
v_isSharedCheck_2058_ = !lean_is_exclusive(v___x_2039_);
if (v_isSharedCheck_2058_ == 0)
{
lean_object* v_unused_2059_; 
v_unused_2059_ = lean_ctor_get(v___x_2039_, 0);
lean_dec(v_unused_2059_);
v___x_2041_ = v___x_2039_;
v_isShared_2042_ = v_isSharedCheck_2058_;
goto v_resetjp_2040_;
}
else
{
lean_dec(v___x_2039_);
v___x_2041_ = lean_box(0);
v_isShared_2042_ = v_isSharedCheck_2058_;
goto v_resetjp_2040_;
}
v_resetjp_2040_:
{
lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2051_; 
v___x_2043_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0);
lean_inc_ref(v_p_2032_);
v___x_2044_ = l_Int_Internal_Linear_Poly_addConst(v_p_2032_, v___x_2043_);
lean_inc(v_a_2033_);
v___x_2045_ = lean_alloc_ctor(13, 2, 0);
lean_ctor_set(v___x_2045_, 0, v_c_2010_);
lean_ctor_set(v___x_2045_, 1, v_a_2033_);
v___x_2046_ = lean_box(0);
v___x_2047_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2047_, 0, v___x_2044_);
lean_ctor_set(v___x_2047_, 1, v___x_2045_);
lean_ctor_set(v___x_2047_, 2, v___x_2046_);
v___x_2048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2048_, 0, v___x_2047_);
v___x_2049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2049_, 0, v___x_2048_);
if (v_isShared_2031_ == 0)
{
lean_ctor_set(v___x_2030_, 1, v___x_2035_);
lean_ctor_set(v___x_2030_, 0, v___x_2049_);
v___x_2051_ = v___x_2030_;
goto v_reusejp_2050_;
}
else
{
lean_object* v_reuseFailAlloc_2057_; 
v_reuseFailAlloc_2057_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2057_, 0, v___x_2049_);
lean_ctor_set(v_reuseFailAlloc_2057_, 1, v___x_2035_);
v___x_2051_ = v_reuseFailAlloc_2057_;
goto v_reusejp_2050_;
}
v_reusejp_2050_:
{
lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2055_; 
v___x_2052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2052_, 0, v___x_2051_);
v___x_2053_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2053_, 0, v___x_2052_);
lean_ctor_set(v___x_2053_, 1, v_snd_2028_);
if (v_isShared_2042_ == 0)
{
lean_ctor_set(v___x_2041_, 0, v___x_2053_);
v___x_2055_ = v___x_2041_;
goto v_reusejp_2054_;
}
else
{
lean_object* v_reuseFailAlloc_2056_; 
v_reuseFailAlloc_2056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2056_, 0, v___x_2053_);
v___x_2055_ = v_reuseFailAlloc_2056_;
goto v_reusejp_2054_;
}
v_reusejp_2054_:
{
return v___x_2055_;
}
}
}
}
else
{
lean_object* v_a_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2067_; 
lean_del_object(v___x_2030_);
lean_dec(v_snd_2028_);
lean_dec_ref(v_c_2010_);
v_a_2060_ = lean_ctor_get(v___x_2039_, 0);
v_isSharedCheck_2067_ = !lean_is_exclusive(v___x_2039_);
if (v_isSharedCheck_2067_ == 0)
{
v___x_2062_ = v___x_2039_;
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_a_2060_);
lean_dec(v___x_2039_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v___x_2065_; 
if (v_isShared_2063_ == 0)
{
v___x_2065_ = v___x_2062_;
goto v_reusejp_2064_;
}
else
{
lean_object* v_reuseFailAlloc_2066_; 
v_reuseFailAlloc_2066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2066_, 0, v_a_2060_);
v___x_2065_ = v_reuseFailAlloc_2066_;
goto v_reusejp_2064_;
}
v_reusejp_2064_:
{
return v___x_2065_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___boxed(lean_object** _args){
lean_object* v_x_2076_ = _args[0];
lean_object* v_c_2077_ = _args[1];
lean_object* v_as_2078_ = _args[2];
lean_object* v_sz_2079_ = _args[3];
lean_object* v_i_2080_ = _args[4];
lean_object* v_b_2081_ = _args[5];
lean_object* v___y_2082_ = _args[6];
lean_object* v___y_2083_ = _args[7];
lean_object* v___y_2084_ = _args[8];
lean_object* v___y_2085_ = _args[9];
lean_object* v___y_2086_ = _args[10];
lean_object* v___y_2087_ = _args[11];
lean_object* v___y_2088_ = _args[12];
lean_object* v___y_2089_ = _args[13];
lean_object* v___y_2090_ = _args[14];
lean_object* v___y_2091_ = _args[15];
lean_object* v___y_2092_ = _args[16];
_start:
{
size_t v_sz_boxed_2093_; size_t v_i_boxed_2094_; lean_object* v_res_2095_; 
v_sz_boxed_2093_ = lean_unbox_usize(v_sz_2079_);
lean_dec(v_sz_2079_);
v_i_boxed_2094_ = lean_unbox_usize(v_i_2080_);
lean_dec(v_i_2080_);
v_res_2095_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7(v_x_2076_, v_c_2077_, v_as_2078_, v_sz_boxed_2093_, v_i_boxed_2094_, v_b_2081_, v___y_2082_, v___y_2083_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_, v___y_2089_, v___y_2090_, v___y_2091_);
lean_dec(v___y_2091_);
lean_dec_ref(v___y_2090_);
lean_dec(v___y_2089_);
lean_dec_ref(v___y_2088_);
lean_dec(v___y_2087_);
lean_dec_ref(v___y_2086_);
lean_dec(v___y_2085_);
lean_dec_ref(v___y_2084_);
lean_dec(v___y_2083_);
lean_dec(v___y_2082_);
lean_dec_ref(v_as_2078_);
return v_res_2095_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg(lean_object* v_x_2102_, lean_object* v_c_2103_, lean_object* v_as_2104_, size_t v_sz_2105_, size_t v_i_2106_, lean_object* v_b_2107_, lean_object* v___y_2108_){
_start:
{
uint8_t v___x_2110_; 
v___x_2110_ = lean_usize_dec_lt(v_i_2106_, v_sz_2105_);
if (v___x_2110_ == 0)
{
lean_object* v___x_2111_; 
lean_dec_ref(v_c_2103_);
lean_dec(v_x_2102_);
v___x_2111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2111_, 0, v_b_2107_);
return v___x_2111_;
}
else
{
lean_object* v_snd_2112_; lean_object* v___x_2114_; uint8_t v_isShared_2115_; uint8_t v_isSharedCheck_2159_; 
v_snd_2112_ = lean_ctor_get(v_b_2107_, 1);
v_isSharedCheck_2159_ = !lean_is_exclusive(v_b_2107_);
if (v_isSharedCheck_2159_ == 0)
{
lean_object* v_unused_2160_; 
v_unused_2160_ = lean_ctor_get(v_b_2107_, 0);
lean_dec(v_unused_2160_);
v___x_2114_ = v_b_2107_;
v_isShared_2115_ = v_isSharedCheck_2159_;
goto v_resetjp_2113_;
}
else
{
lean_inc(v_snd_2112_);
lean_dec(v_b_2107_);
v___x_2114_ = lean_box(0);
v_isShared_2115_ = v_isSharedCheck_2159_;
goto v_resetjp_2113_;
}
v_resetjp_2113_:
{
lean_object* v_p_2116_; lean_object* v_a_2117_; lean_object* v_p_2118_; lean_object* v___x_2119_; lean_object* v___f_2120_; uint8_t v___x_2153_; 
v_p_2116_ = lean_ctor_get(v_c_2103_, 0);
v_a_2117_ = lean_array_uget_borrowed(v_as_2104_, v_i_2106_);
v_p_2118_ = lean_ctor_get(v_a_2117_, 0);
v___x_2119_ = lean_box(0);
lean_inc(v_x_2102_);
lean_inc(v_a_2117_);
v___f_2120_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2120_, 0, v_a_2117_);
lean_closure_set(v___f_2120_, 1, v_x_2102_);
v___x_2153_ = l_Int_Internal_Linear_instBEqPoly_beq(v_p_2116_, v_p_2118_);
if (v___x_2153_ == 0)
{
uint8_t v___x_2154_; 
v___x_2154_ = l_Int_Internal_Linear_Poly_isNegEq(v_p_2116_, v_p_2118_);
if (v___x_2154_ == 0)
{
lean_object* v___x_2155_; size_t v___x_2156_; size_t v___x_2157_; 
lean_dec_ref(v___f_2120_);
lean_del_object(v___x_2114_);
lean_dec(v_snd_2112_);
v___x_2155_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg___closed__1));
v___x_2156_ = ((size_t)1ULL);
v___x_2157_ = lean_usize_add(v_i_2106_, v___x_2156_);
v_i_2106_ = v___x_2157_;
v_b_2107_ = v___x_2155_;
goto _start;
}
else
{
lean_dec(v_x_2102_);
goto v___jp_2121_;
}
}
else
{
lean_dec(v_x_2102_);
goto v___jp_2121_;
}
v___jp_2121_:
{
lean_object* v___x_2122_; lean_object* v___x_2123_; 
v___x_2122_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_2123_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_2122_, v___f_2120_, v___y_2108_);
if (lean_obj_tag(v___x_2123_) == 0)
{
lean_object* v___x_2125_; uint8_t v_isShared_2126_; uint8_t v_isSharedCheck_2143_; 
v_isSharedCheck_2143_ = !lean_is_exclusive(v___x_2123_);
if (v_isSharedCheck_2143_ == 0)
{
lean_object* v_unused_2144_; 
v_unused_2144_ = lean_ctor_get(v___x_2123_, 0);
lean_dec(v_unused_2144_);
v___x_2125_ = v___x_2123_;
v_isShared_2126_ = v_isSharedCheck_2143_;
goto v_resetjp_2124_;
}
else
{
lean_dec(v___x_2123_);
v___x_2125_ = lean_box(0);
v_isShared_2126_ = v_isSharedCheck_2143_;
goto v_resetjp_2124_;
}
v_resetjp_2124_:
{
lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2135_; 
v___x_2127_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0);
lean_inc_ref(v_p_2116_);
v___x_2128_ = l_Int_Internal_Linear_Poly_addConst(v_p_2116_, v___x_2127_);
lean_inc(v_a_2117_);
v___x_2129_ = lean_alloc_ctor(13, 2, 0);
lean_ctor_set(v___x_2129_, 0, v_c_2103_);
lean_ctor_set(v___x_2129_, 1, v_a_2117_);
v___x_2130_ = lean_box(0);
v___x_2131_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2131_, 0, v___x_2128_);
lean_ctor_set(v___x_2131_, 1, v___x_2129_);
lean_ctor_set(v___x_2131_, 2, v___x_2130_);
v___x_2132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2132_, 0, v___x_2131_);
v___x_2133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2133_, 0, v___x_2132_);
if (v_isShared_2115_ == 0)
{
lean_ctor_set(v___x_2114_, 1, v___x_2119_);
lean_ctor_set(v___x_2114_, 0, v___x_2133_);
v___x_2135_ = v___x_2114_;
goto v_reusejp_2134_;
}
else
{
lean_object* v_reuseFailAlloc_2142_; 
v_reuseFailAlloc_2142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2142_, 0, v___x_2133_);
lean_ctor_set(v_reuseFailAlloc_2142_, 1, v___x_2119_);
v___x_2135_ = v_reuseFailAlloc_2142_;
goto v_reusejp_2134_;
}
v_reusejp_2134_:
{
lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2140_; 
v___x_2136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2136_, 0, v___x_2135_);
v___x_2137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2137_, 0, v___x_2136_);
v___x_2138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2138_, 0, v___x_2137_);
lean_ctor_set(v___x_2138_, 1, v_snd_2112_);
if (v_isShared_2126_ == 0)
{
lean_ctor_set(v___x_2125_, 0, v___x_2138_);
v___x_2140_ = v___x_2125_;
goto v_reusejp_2139_;
}
else
{
lean_object* v_reuseFailAlloc_2141_; 
v_reuseFailAlloc_2141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2141_, 0, v___x_2138_);
v___x_2140_ = v_reuseFailAlloc_2141_;
goto v_reusejp_2139_;
}
v_reusejp_2139_:
{
return v___x_2140_;
}
}
}
}
else
{
lean_object* v_a_2145_; lean_object* v___x_2147_; uint8_t v_isShared_2148_; uint8_t v_isSharedCheck_2152_; 
lean_del_object(v___x_2114_);
lean_dec(v_snd_2112_);
lean_dec_ref(v_c_2103_);
v_a_2145_ = lean_ctor_get(v___x_2123_, 0);
v_isSharedCheck_2152_ = !lean_is_exclusive(v___x_2123_);
if (v_isSharedCheck_2152_ == 0)
{
v___x_2147_ = v___x_2123_;
v_isShared_2148_ = v_isSharedCheck_2152_;
goto v_resetjp_2146_;
}
else
{
lean_inc(v_a_2145_);
lean_dec(v___x_2123_);
v___x_2147_ = lean_box(0);
v_isShared_2148_ = v_isSharedCheck_2152_;
goto v_resetjp_2146_;
}
v_resetjp_2146_:
{
lean_object* v___x_2150_; 
if (v_isShared_2148_ == 0)
{
v___x_2150_ = v___x_2147_;
goto v_reusejp_2149_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v_a_2145_);
v___x_2150_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2149_;
}
v_reusejp_2149_:
{
return v___x_2150_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg___boxed(lean_object* v_x_2161_, lean_object* v_c_2162_, lean_object* v_as_2163_, lean_object* v_sz_2164_, lean_object* v_i_2165_, lean_object* v_b_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_){
_start:
{
size_t v_sz_boxed_2169_; size_t v_i_boxed_2170_; lean_object* v_res_2171_; 
v_sz_boxed_2169_ = lean_unbox_usize(v_sz_2164_);
lean_dec(v_sz_2164_);
v_i_boxed_2170_ = lean_unbox_usize(v_i_2165_);
lean_dec(v_i_2165_);
v_res_2171_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg(v_x_2161_, v_c_2162_, v_as_2163_, v_sz_boxed_2169_, v_i_boxed_2170_, v_b_2166_, v___y_2167_);
lean_dec(v___y_2167_);
lean_dec_ref(v_as_2163_);
return v_res_2171_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9(lean_object* v_x_2175_, lean_object* v_c_2176_, lean_object* v_as_2177_, size_t v_sz_2178_, size_t v_i_2179_, lean_object* v_b_2180_, lean_object* v___y_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_){
_start:
{
uint8_t v___x_2192_; 
v___x_2192_ = lean_usize_dec_lt(v_i_2179_, v_sz_2178_);
if (v___x_2192_ == 0)
{
lean_object* v___x_2193_; 
lean_dec_ref(v_c_2176_);
lean_dec(v_x_2175_);
v___x_2193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2193_, 0, v_b_2180_);
return v___x_2193_;
}
else
{
lean_object* v_snd_2194_; lean_object* v___x_2196_; uint8_t v_isShared_2197_; uint8_t v_isSharedCheck_2241_; 
v_snd_2194_ = lean_ctor_get(v_b_2180_, 1);
v_isSharedCheck_2241_ = !lean_is_exclusive(v_b_2180_);
if (v_isSharedCheck_2241_ == 0)
{
lean_object* v_unused_2242_; 
v_unused_2242_ = lean_ctor_get(v_b_2180_, 0);
lean_dec(v_unused_2242_);
v___x_2196_ = v_b_2180_;
v_isShared_2197_ = v_isSharedCheck_2241_;
goto v_resetjp_2195_;
}
else
{
lean_inc(v_snd_2194_);
lean_dec(v_b_2180_);
v___x_2196_ = lean_box(0);
v_isShared_2197_ = v_isSharedCheck_2241_;
goto v_resetjp_2195_;
}
v_resetjp_2195_:
{
lean_object* v_p_2198_; lean_object* v_a_2199_; lean_object* v_p_2200_; lean_object* v___x_2201_; lean_object* v___f_2202_; uint8_t v___x_2235_; 
v_p_2198_ = lean_ctor_get(v_c_2176_, 0);
v_a_2199_ = lean_array_uget_borrowed(v_as_2177_, v_i_2179_);
v_p_2200_ = lean_ctor_get(v_a_2199_, 0);
v___x_2201_ = lean_box(0);
lean_inc(v_x_2175_);
lean_inc(v_a_2199_);
v___f_2202_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2202_, 0, v_a_2199_);
lean_closure_set(v___f_2202_, 1, v_x_2175_);
v___x_2235_ = l_Int_Internal_Linear_instBEqPoly_beq(v_p_2198_, v_p_2200_);
if (v___x_2235_ == 0)
{
uint8_t v___x_2236_; 
v___x_2236_ = l_Int_Internal_Linear_Poly_isNegEq(v_p_2198_, v_p_2200_);
if (v___x_2236_ == 0)
{
lean_object* v___x_2237_; size_t v___x_2238_; size_t v___x_2239_; lean_object* v___x_2240_; 
lean_dec_ref(v___f_2202_);
lean_del_object(v___x_2196_);
lean_dec(v_snd_2194_);
v___x_2237_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9___closed__0));
v___x_2238_ = ((size_t)1ULL);
v___x_2239_ = lean_usize_add(v_i_2179_, v___x_2238_);
v___x_2240_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg(v_x_2175_, v_c_2176_, v_as_2177_, v_sz_2178_, v___x_2239_, v___x_2237_, v___y_2181_);
return v___x_2240_;
}
else
{
lean_dec(v_x_2175_);
goto v___jp_2203_;
}
}
else
{
lean_dec(v_x_2175_);
goto v___jp_2203_;
}
v___jp_2203_:
{
lean_object* v___x_2204_; lean_object* v___x_2205_; 
v___x_2204_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_2205_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_2204_, v___f_2202_, v___y_2181_);
if (lean_obj_tag(v___x_2205_) == 0)
{
lean_object* v___x_2207_; uint8_t v_isShared_2208_; uint8_t v_isSharedCheck_2225_; 
v_isSharedCheck_2225_ = !lean_is_exclusive(v___x_2205_);
if (v_isSharedCheck_2225_ == 0)
{
lean_object* v_unused_2226_; 
v_unused_2226_ = lean_ctor_get(v___x_2205_, 0);
lean_dec(v_unused_2226_);
v___x_2207_ = v___x_2205_;
v_isShared_2208_ = v_isSharedCheck_2225_;
goto v_resetjp_2206_;
}
else
{
lean_dec(v___x_2205_);
v___x_2207_ = lean_box(0);
v_isShared_2208_ = v_isSharedCheck_2225_;
goto v_resetjp_2206_;
}
v_resetjp_2206_:
{
lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2217_; 
v___x_2209_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0);
lean_inc_ref(v_p_2198_);
v___x_2210_ = l_Int_Internal_Linear_Poly_addConst(v_p_2198_, v___x_2209_);
lean_inc(v_a_2199_);
v___x_2211_ = lean_alloc_ctor(13, 2, 0);
lean_ctor_set(v___x_2211_, 0, v_c_2176_);
lean_ctor_set(v___x_2211_, 1, v_a_2199_);
v___x_2212_ = lean_box(0);
v___x_2213_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2213_, 0, v___x_2210_);
lean_ctor_set(v___x_2213_, 1, v___x_2211_);
lean_ctor_set(v___x_2213_, 2, v___x_2212_);
v___x_2214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2214_, 0, v___x_2213_);
v___x_2215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2215_, 0, v___x_2214_);
if (v_isShared_2197_ == 0)
{
lean_ctor_set(v___x_2196_, 1, v___x_2201_);
lean_ctor_set(v___x_2196_, 0, v___x_2215_);
v___x_2217_ = v___x_2196_;
goto v_reusejp_2216_;
}
else
{
lean_object* v_reuseFailAlloc_2224_; 
v_reuseFailAlloc_2224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2224_, 0, v___x_2215_);
lean_ctor_set(v_reuseFailAlloc_2224_, 1, v___x_2201_);
v___x_2217_ = v_reuseFailAlloc_2224_;
goto v_reusejp_2216_;
}
v_reusejp_2216_:
{
lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2222_; 
v___x_2218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2218_, 0, v___x_2217_);
v___x_2219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2219_, 0, v___x_2218_);
v___x_2220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2220_, 0, v___x_2219_);
lean_ctor_set(v___x_2220_, 1, v_snd_2194_);
if (v_isShared_2208_ == 0)
{
lean_ctor_set(v___x_2207_, 0, v___x_2220_);
v___x_2222_ = v___x_2207_;
goto v_reusejp_2221_;
}
else
{
lean_object* v_reuseFailAlloc_2223_; 
v_reuseFailAlloc_2223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2223_, 0, v___x_2220_);
v___x_2222_ = v_reuseFailAlloc_2223_;
goto v_reusejp_2221_;
}
v_reusejp_2221_:
{
return v___x_2222_;
}
}
}
}
else
{
lean_object* v_a_2227_; lean_object* v___x_2229_; uint8_t v_isShared_2230_; uint8_t v_isSharedCheck_2234_; 
lean_del_object(v___x_2196_);
lean_dec(v_snd_2194_);
lean_dec_ref(v_c_2176_);
v_a_2227_ = lean_ctor_get(v___x_2205_, 0);
v_isSharedCheck_2234_ = !lean_is_exclusive(v___x_2205_);
if (v_isSharedCheck_2234_ == 0)
{
v___x_2229_ = v___x_2205_;
v_isShared_2230_ = v_isSharedCheck_2234_;
goto v_resetjp_2228_;
}
else
{
lean_inc(v_a_2227_);
lean_dec(v___x_2205_);
v___x_2229_ = lean_box(0);
v_isShared_2230_ = v_isSharedCheck_2234_;
goto v_resetjp_2228_;
}
v_resetjp_2228_:
{
lean_object* v___x_2232_; 
if (v_isShared_2230_ == 0)
{
v___x_2232_ = v___x_2229_;
goto v_reusejp_2231_;
}
else
{
lean_object* v_reuseFailAlloc_2233_; 
v_reuseFailAlloc_2233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2233_, 0, v_a_2227_);
v___x_2232_ = v_reuseFailAlloc_2233_;
goto v_reusejp_2231_;
}
v_reusejp_2231_:
{
return v___x_2232_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9___boxed(lean_object** _args){
lean_object* v_x_2243_ = _args[0];
lean_object* v_c_2244_ = _args[1];
lean_object* v_as_2245_ = _args[2];
lean_object* v_sz_2246_ = _args[3];
lean_object* v_i_2247_ = _args[4];
lean_object* v_b_2248_ = _args[5];
lean_object* v___y_2249_ = _args[6];
lean_object* v___y_2250_ = _args[7];
lean_object* v___y_2251_ = _args[8];
lean_object* v___y_2252_ = _args[9];
lean_object* v___y_2253_ = _args[10];
lean_object* v___y_2254_ = _args[11];
lean_object* v___y_2255_ = _args[12];
lean_object* v___y_2256_ = _args[13];
lean_object* v___y_2257_ = _args[14];
lean_object* v___y_2258_ = _args[15];
lean_object* v___y_2259_ = _args[16];
_start:
{
size_t v_sz_boxed_2260_; size_t v_i_boxed_2261_; lean_object* v_res_2262_; 
v_sz_boxed_2260_ = lean_unbox_usize(v_sz_2246_);
lean_dec(v_sz_2246_);
v_i_boxed_2261_ = lean_unbox_usize(v_i_2247_);
lean_dec(v_i_2247_);
v_res_2262_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9(v_x_2243_, v_c_2244_, v_as_2245_, v_sz_boxed_2260_, v_i_boxed_2261_, v_b_2248_, v___y_2249_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_);
lean_dec(v___y_2258_);
lean_dec_ref(v___y_2257_);
lean_dec(v___y_2256_);
lean_dec_ref(v___y_2255_);
lean_dec(v___y_2254_);
lean_dec_ref(v___y_2253_);
lean_dec(v___y_2252_);
lean_dec_ref(v___y_2251_);
lean_dec(v___y_2250_);
lean_dec(v___y_2249_);
lean_dec_ref(v_as_2245_);
return v_res_2262_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6(lean_object* v_init_2263_, lean_object* v_x_2264_, lean_object* v_c_2265_, lean_object* v_n_2266_, lean_object* v_b_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_){
_start:
{
if (lean_obj_tag(v_n_2266_) == 0)
{
lean_object* v_cs_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; size_t v_sz_2282_; size_t v___x_2283_; lean_object* v___x_2284_; 
v_cs_2279_ = lean_ctor_get(v_n_2266_, 0);
v___x_2280_ = lean_box(0);
v___x_2281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2281_, 0, v___x_2280_);
lean_ctor_set(v___x_2281_, 1, v_b_2267_);
v_sz_2282_ = lean_array_size(v_cs_2279_);
v___x_2283_ = ((size_t)0ULL);
v___x_2284_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__8(v_init_2263_, v_x_2264_, v_c_2265_, v_cs_2279_, v_sz_2282_, v___x_2283_, v___x_2281_, v___y_2268_, v___y_2269_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2273_, v___y_2274_, v___y_2275_, v___y_2276_, v___y_2277_);
if (lean_obj_tag(v___x_2284_) == 0)
{
lean_object* v_a_2285_; lean_object* v___x_2287_; uint8_t v_isShared_2288_; uint8_t v_isSharedCheck_2299_; 
v_a_2285_ = lean_ctor_get(v___x_2284_, 0);
v_isSharedCheck_2299_ = !lean_is_exclusive(v___x_2284_);
if (v_isSharedCheck_2299_ == 0)
{
v___x_2287_ = v___x_2284_;
v_isShared_2288_ = v_isSharedCheck_2299_;
goto v_resetjp_2286_;
}
else
{
lean_inc(v_a_2285_);
lean_dec(v___x_2284_);
v___x_2287_ = lean_box(0);
v_isShared_2288_ = v_isSharedCheck_2299_;
goto v_resetjp_2286_;
}
v_resetjp_2286_:
{
lean_object* v_fst_2289_; 
v_fst_2289_ = lean_ctor_get(v_a_2285_, 0);
if (lean_obj_tag(v_fst_2289_) == 0)
{
lean_object* v_snd_2290_; lean_object* v___x_2291_; lean_object* v___x_2293_; 
v_snd_2290_ = lean_ctor_get(v_a_2285_, 1);
lean_inc(v_snd_2290_);
lean_dec(v_a_2285_);
v___x_2291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2291_, 0, v_snd_2290_);
if (v_isShared_2288_ == 0)
{
lean_ctor_set(v___x_2287_, 0, v___x_2291_);
v___x_2293_ = v___x_2287_;
goto v_reusejp_2292_;
}
else
{
lean_object* v_reuseFailAlloc_2294_; 
v_reuseFailAlloc_2294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2294_, 0, v___x_2291_);
v___x_2293_ = v_reuseFailAlloc_2294_;
goto v_reusejp_2292_;
}
v_reusejp_2292_:
{
return v___x_2293_;
}
}
else
{
lean_object* v_val_2295_; lean_object* v___x_2297_; 
lean_inc_ref(v_fst_2289_);
lean_dec(v_a_2285_);
v_val_2295_ = lean_ctor_get(v_fst_2289_, 0);
lean_inc(v_val_2295_);
lean_dec_ref_known(v_fst_2289_, 1);
if (v_isShared_2288_ == 0)
{
lean_ctor_set(v___x_2287_, 0, v_val_2295_);
v___x_2297_ = v___x_2287_;
goto v_reusejp_2296_;
}
else
{
lean_object* v_reuseFailAlloc_2298_; 
v_reuseFailAlloc_2298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2298_, 0, v_val_2295_);
v___x_2297_ = v_reuseFailAlloc_2298_;
goto v_reusejp_2296_;
}
v_reusejp_2296_:
{
return v___x_2297_;
}
}
}
}
else
{
lean_object* v_a_2300_; lean_object* v___x_2302_; uint8_t v_isShared_2303_; uint8_t v_isSharedCheck_2307_; 
v_a_2300_ = lean_ctor_get(v___x_2284_, 0);
v_isSharedCheck_2307_ = !lean_is_exclusive(v___x_2284_);
if (v_isSharedCheck_2307_ == 0)
{
v___x_2302_ = v___x_2284_;
v_isShared_2303_ = v_isSharedCheck_2307_;
goto v_resetjp_2301_;
}
else
{
lean_inc(v_a_2300_);
lean_dec(v___x_2284_);
v___x_2302_ = lean_box(0);
v_isShared_2303_ = v_isSharedCheck_2307_;
goto v_resetjp_2301_;
}
v_resetjp_2301_:
{
lean_object* v___x_2305_; 
if (v_isShared_2303_ == 0)
{
v___x_2305_ = v___x_2302_;
goto v_reusejp_2304_;
}
else
{
lean_object* v_reuseFailAlloc_2306_; 
v_reuseFailAlloc_2306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2306_, 0, v_a_2300_);
v___x_2305_ = v_reuseFailAlloc_2306_;
goto v_reusejp_2304_;
}
v_reusejp_2304_:
{
return v___x_2305_;
}
}
}
}
else
{
lean_object* v_vs_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; size_t v_sz_2311_; size_t v___x_2312_; lean_object* v___x_2313_; 
v_vs_2308_ = lean_ctor_get(v_n_2266_, 0);
v___x_2309_ = lean_box(0);
v___x_2310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2310_, 0, v___x_2309_);
lean_ctor_set(v___x_2310_, 1, v_b_2267_);
v_sz_2311_ = lean_array_size(v_vs_2308_);
v___x_2312_ = ((size_t)0ULL);
v___x_2313_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9(v_x_2264_, v_c_2265_, v_vs_2308_, v_sz_2311_, v___x_2312_, v___x_2310_, v___y_2268_, v___y_2269_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2273_, v___y_2274_, v___y_2275_, v___y_2276_, v___y_2277_);
if (lean_obj_tag(v___x_2313_) == 0)
{
lean_object* v_a_2314_; lean_object* v___x_2316_; uint8_t v_isShared_2317_; uint8_t v_isSharedCheck_2328_; 
v_a_2314_ = lean_ctor_get(v___x_2313_, 0);
v_isSharedCheck_2328_ = !lean_is_exclusive(v___x_2313_);
if (v_isSharedCheck_2328_ == 0)
{
v___x_2316_ = v___x_2313_;
v_isShared_2317_ = v_isSharedCheck_2328_;
goto v_resetjp_2315_;
}
else
{
lean_inc(v_a_2314_);
lean_dec(v___x_2313_);
v___x_2316_ = lean_box(0);
v_isShared_2317_ = v_isSharedCheck_2328_;
goto v_resetjp_2315_;
}
v_resetjp_2315_:
{
lean_object* v_fst_2318_; 
v_fst_2318_ = lean_ctor_get(v_a_2314_, 0);
if (lean_obj_tag(v_fst_2318_) == 0)
{
lean_object* v_snd_2319_; lean_object* v___x_2320_; lean_object* v___x_2322_; 
v_snd_2319_ = lean_ctor_get(v_a_2314_, 1);
lean_inc(v_snd_2319_);
lean_dec(v_a_2314_);
v___x_2320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2320_, 0, v_snd_2319_);
if (v_isShared_2317_ == 0)
{
lean_ctor_set(v___x_2316_, 0, v___x_2320_);
v___x_2322_ = v___x_2316_;
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
else
{
lean_object* v_val_2324_; lean_object* v___x_2326_; 
lean_inc_ref(v_fst_2318_);
lean_dec(v_a_2314_);
v_val_2324_ = lean_ctor_get(v_fst_2318_, 0);
lean_inc(v_val_2324_);
lean_dec_ref_known(v_fst_2318_, 1);
if (v_isShared_2317_ == 0)
{
lean_ctor_set(v___x_2316_, 0, v_val_2324_);
v___x_2326_ = v___x_2316_;
goto v_reusejp_2325_;
}
else
{
lean_object* v_reuseFailAlloc_2327_; 
v_reuseFailAlloc_2327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2327_, 0, v_val_2324_);
v___x_2326_ = v_reuseFailAlloc_2327_;
goto v_reusejp_2325_;
}
v_reusejp_2325_:
{
return v___x_2326_;
}
}
}
}
else
{
lean_object* v_a_2329_; lean_object* v___x_2331_; uint8_t v_isShared_2332_; uint8_t v_isSharedCheck_2336_; 
v_a_2329_ = lean_ctor_get(v___x_2313_, 0);
v_isSharedCheck_2336_ = !lean_is_exclusive(v___x_2313_);
if (v_isSharedCheck_2336_ == 0)
{
v___x_2331_ = v___x_2313_;
v_isShared_2332_ = v_isSharedCheck_2336_;
goto v_resetjp_2330_;
}
else
{
lean_inc(v_a_2329_);
lean_dec(v___x_2313_);
v___x_2331_ = lean_box(0);
v_isShared_2332_ = v_isSharedCheck_2336_;
goto v_resetjp_2330_;
}
v_resetjp_2330_:
{
lean_object* v___x_2334_; 
if (v_isShared_2332_ == 0)
{
v___x_2334_ = v___x_2331_;
goto v_reusejp_2333_;
}
else
{
lean_object* v_reuseFailAlloc_2335_; 
v_reuseFailAlloc_2335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2335_, 0, v_a_2329_);
v___x_2334_ = v_reuseFailAlloc_2335_;
goto v_reusejp_2333_;
}
v_reusejp_2333_:
{
return v___x_2334_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__8(lean_object* v_init_2337_, lean_object* v_x_2338_, lean_object* v_c_2339_, lean_object* v_as_2340_, size_t v_sz_2341_, size_t v_i_2342_, lean_object* v_b_2343_, lean_object* v___y_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_, lean_object* v___y_2350_, lean_object* v___y_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_){
_start:
{
uint8_t v___x_2355_; 
v___x_2355_ = lean_usize_dec_lt(v_i_2342_, v_sz_2341_);
if (v___x_2355_ == 0)
{
lean_object* v___x_2356_; 
lean_dec_ref(v_c_2339_);
lean_dec(v_x_2338_);
v___x_2356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2356_, 0, v_b_2343_);
return v___x_2356_;
}
else
{
lean_object* v_snd_2357_; lean_object* v___x_2359_; uint8_t v_isShared_2360_; uint8_t v_isSharedCheck_2391_; 
v_snd_2357_ = lean_ctor_get(v_b_2343_, 1);
v_isSharedCheck_2391_ = !lean_is_exclusive(v_b_2343_);
if (v_isSharedCheck_2391_ == 0)
{
lean_object* v_unused_2392_; 
v_unused_2392_ = lean_ctor_get(v_b_2343_, 0);
lean_dec(v_unused_2392_);
v___x_2359_ = v_b_2343_;
v_isShared_2360_ = v_isSharedCheck_2391_;
goto v_resetjp_2358_;
}
else
{
lean_inc(v_snd_2357_);
lean_dec(v_b_2343_);
v___x_2359_ = lean_box(0);
v_isShared_2360_ = v_isSharedCheck_2391_;
goto v_resetjp_2358_;
}
v_resetjp_2358_:
{
lean_object* v___x_2361_; lean_object* v_a_2362_; lean_object* v___x_2363_; 
v___x_2361_ = lean_box(0);
v_a_2362_ = lean_array_uget_borrowed(v_as_2340_, v_i_2342_);
lean_inc(v_snd_2357_);
lean_inc_ref(v_c_2339_);
lean_inc(v_x_2338_);
v___x_2363_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6(v_init_2337_, v_x_2338_, v_c_2339_, v_a_2362_, v_snd_2357_, v___y_2344_, v___y_2345_, v___y_2346_, v___y_2347_, v___y_2348_, v___y_2349_, v___y_2350_, v___y_2351_, v___y_2352_, v___y_2353_);
if (lean_obj_tag(v___x_2363_) == 0)
{
lean_object* v_a_2364_; lean_object* v___x_2366_; uint8_t v_isShared_2367_; uint8_t v_isSharedCheck_2382_; 
v_a_2364_ = lean_ctor_get(v___x_2363_, 0);
v_isSharedCheck_2382_ = !lean_is_exclusive(v___x_2363_);
if (v_isSharedCheck_2382_ == 0)
{
v___x_2366_ = v___x_2363_;
v_isShared_2367_ = v_isSharedCheck_2382_;
goto v_resetjp_2365_;
}
else
{
lean_inc(v_a_2364_);
lean_dec(v___x_2363_);
v___x_2366_ = lean_box(0);
v_isShared_2367_ = v_isSharedCheck_2382_;
goto v_resetjp_2365_;
}
v_resetjp_2365_:
{
if (lean_obj_tag(v_a_2364_) == 0)
{
lean_object* v___x_2368_; lean_object* v___x_2370_; 
lean_dec_ref(v_c_2339_);
lean_dec(v_x_2338_);
v___x_2368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2368_, 0, v_a_2364_);
if (v_isShared_2360_ == 0)
{
lean_ctor_set(v___x_2359_, 0, v___x_2368_);
v___x_2370_ = v___x_2359_;
goto v_reusejp_2369_;
}
else
{
lean_object* v_reuseFailAlloc_2374_; 
v_reuseFailAlloc_2374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2374_, 0, v___x_2368_);
lean_ctor_set(v_reuseFailAlloc_2374_, 1, v_snd_2357_);
v___x_2370_ = v_reuseFailAlloc_2374_;
goto v_reusejp_2369_;
}
v_reusejp_2369_:
{
lean_object* v___x_2372_; 
if (v_isShared_2367_ == 0)
{
lean_ctor_set(v___x_2366_, 0, v___x_2370_);
v___x_2372_ = v___x_2366_;
goto v_reusejp_2371_;
}
else
{
lean_object* v_reuseFailAlloc_2373_; 
v_reuseFailAlloc_2373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2373_, 0, v___x_2370_);
v___x_2372_ = v_reuseFailAlloc_2373_;
goto v_reusejp_2371_;
}
v_reusejp_2371_:
{
return v___x_2372_;
}
}
}
else
{
lean_object* v_a_2375_; lean_object* v___x_2377_; 
lean_del_object(v___x_2366_);
lean_dec(v_snd_2357_);
v_a_2375_ = lean_ctor_get(v_a_2364_, 0);
lean_inc(v_a_2375_);
lean_dec_ref_known(v_a_2364_, 1);
if (v_isShared_2360_ == 0)
{
lean_ctor_set(v___x_2359_, 1, v_a_2375_);
lean_ctor_set(v___x_2359_, 0, v___x_2361_);
v___x_2377_ = v___x_2359_;
goto v_reusejp_2376_;
}
else
{
lean_object* v_reuseFailAlloc_2381_; 
v_reuseFailAlloc_2381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2381_, 0, v___x_2361_);
lean_ctor_set(v_reuseFailAlloc_2381_, 1, v_a_2375_);
v___x_2377_ = v_reuseFailAlloc_2381_;
goto v_reusejp_2376_;
}
v_reusejp_2376_:
{
size_t v___x_2378_; size_t v___x_2379_; 
v___x_2378_ = ((size_t)1ULL);
v___x_2379_ = lean_usize_add(v_i_2342_, v___x_2378_);
v_i_2342_ = v___x_2379_;
v_b_2343_ = v___x_2377_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_2383_; lean_object* v___x_2385_; uint8_t v_isShared_2386_; uint8_t v_isSharedCheck_2390_; 
lean_del_object(v___x_2359_);
lean_dec(v_snd_2357_);
lean_dec_ref(v_c_2339_);
lean_dec(v_x_2338_);
v_a_2383_ = lean_ctor_get(v___x_2363_, 0);
v_isSharedCheck_2390_ = !lean_is_exclusive(v___x_2363_);
if (v_isSharedCheck_2390_ == 0)
{
v___x_2385_ = v___x_2363_;
v_isShared_2386_ = v_isSharedCheck_2390_;
goto v_resetjp_2384_;
}
else
{
lean_inc(v_a_2383_);
lean_dec(v___x_2363_);
v___x_2385_ = lean_box(0);
v_isShared_2386_ = v_isSharedCheck_2390_;
goto v_resetjp_2384_;
}
v_resetjp_2384_:
{
lean_object* v___x_2388_; 
if (v_isShared_2386_ == 0)
{
v___x_2388_ = v___x_2385_;
goto v_reusejp_2387_;
}
else
{
lean_object* v_reuseFailAlloc_2389_; 
v_reuseFailAlloc_2389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2389_, 0, v_a_2383_);
v___x_2388_ = v_reuseFailAlloc_2389_;
goto v_reusejp_2387_;
}
v_reusejp_2387_:
{
return v___x_2388_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__8___boxed(lean_object** _args){
lean_object* v_init_2393_ = _args[0];
lean_object* v_x_2394_ = _args[1];
lean_object* v_c_2395_ = _args[2];
lean_object* v_as_2396_ = _args[3];
lean_object* v_sz_2397_ = _args[4];
lean_object* v_i_2398_ = _args[5];
lean_object* v_b_2399_ = _args[6];
lean_object* v___y_2400_ = _args[7];
lean_object* v___y_2401_ = _args[8];
lean_object* v___y_2402_ = _args[9];
lean_object* v___y_2403_ = _args[10];
lean_object* v___y_2404_ = _args[11];
lean_object* v___y_2405_ = _args[12];
lean_object* v___y_2406_ = _args[13];
lean_object* v___y_2407_ = _args[14];
lean_object* v___y_2408_ = _args[15];
lean_object* v___y_2409_ = _args[16];
lean_object* v___y_2410_ = _args[17];
_start:
{
size_t v_sz_boxed_2411_; size_t v_i_boxed_2412_; lean_object* v_res_2413_; 
v_sz_boxed_2411_ = lean_unbox_usize(v_sz_2397_);
lean_dec(v_sz_2397_);
v_i_boxed_2412_ = lean_unbox_usize(v_i_2398_);
lean_dec(v_i_2398_);
v_res_2413_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__8(v_init_2393_, v_x_2394_, v_c_2395_, v_as_2396_, v_sz_boxed_2411_, v_i_boxed_2412_, v_b_2399_, v___y_2400_, v___y_2401_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_, v___y_2407_, v___y_2408_, v___y_2409_);
lean_dec(v___y_2409_);
lean_dec_ref(v___y_2408_);
lean_dec(v___y_2407_);
lean_dec_ref(v___y_2406_);
lean_dec(v___y_2405_);
lean_dec_ref(v___y_2404_);
lean_dec(v___y_2403_);
lean_dec_ref(v___y_2402_);
lean_dec(v___y_2401_);
lean_dec(v___y_2400_);
lean_dec_ref(v_as_2396_);
lean_dec_ref(v_init_2393_);
return v_res_2413_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6___boxed(lean_object* v_init_2414_, lean_object* v_x_2415_, lean_object* v_c_2416_, lean_object* v_n_2417_, lean_object* v_b_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_){
_start:
{
lean_object* v_res_2430_; 
v_res_2430_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6(v_init_2414_, v_x_2415_, v_c_2416_, v_n_2417_, v_b_2418_, v___y_2419_, v___y_2420_, v___y_2421_, v___y_2422_, v___y_2423_, v___y_2424_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_);
lean_dec(v___y_2428_);
lean_dec_ref(v___y_2427_);
lean_dec(v___y_2426_);
lean_dec_ref(v___y_2425_);
lean_dec(v___y_2424_);
lean_dec_ref(v___y_2423_);
lean_dec(v___y_2422_);
lean_dec_ref(v___y_2421_);
lean_dec(v___y_2420_);
lean_dec(v___y_2419_);
lean_dec_ref(v_n_2417_);
lean_dec_ref(v_init_2414_);
return v_res_2430_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2(lean_object* v_x_2431_, lean_object* v_c_2432_, lean_object* v_t_2433_, lean_object* v_init_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_){
_start:
{
lean_object* v_root_2446_; lean_object* v_tail_2447_; lean_object* v___x_2448_; 
v_root_2446_ = lean_ctor_get(v_t_2433_, 0);
v_tail_2447_ = lean_ctor_get(v_t_2433_, 1);
lean_inc_ref(v_c_2432_);
lean_inc(v_x_2431_);
lean_inc_ref(v_init_2434_);
v___x_2448_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6(v_init_2434_, v_x_2431_, v_c_2432_, v_root_2446_, v_init_2434_, v___y_2435_, v___y_2436_, v___y_2437_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_);
lean_dec_ref(v_init_2434_);
if (lean_obj_tag(v___x_2448_) == 0)
{
lean_object* v_a_2449_; lean_object* v___x_2451_; uint8_t v_isShared_2452_; uint8_t v_isSharedCheck_2485_; 
v_a_2449_ = lean_ctor_get(v___x_2448_, 0);
v_isSharedCheck_2485_ = !lean_is_exclusive(v___x_2448_);
if (v_isSharedCheck_2485_ == 0)
{
v___x_2451_ = v___x_2448_;
v_isShared_2452_ = v_isSharedCheck_2485_;
goto v_resetjp_2450_;
}
else
{
lean_inc(v_a_2449_);
lean_dec(v___x_2448_);
v___x_2451_ = lean_box(0);
v_isShared_2452_ = v_isSharedCheck_2485_;
goto v_resetjp_2450_;
}
v_resetjp_2450_:
{
if (lean_obj_tag(v_a_2449_) == 0)
{
lean_object* v_a_2453_; lean_object* v___x_2455_; 
lean_dec_ref(v_c_2432_);
lean_dec(v_x_2431_);
v_a_2453_ = lean_ctor_get(v_a_2449_, 0);
lean_inc(v_a_2453_);
lean_dec_ref_known(v_a_2449_, 1);
if (v_isShared_2452_ == 0)
{
lean_ctor_set(v___x_2451_, 0, v_a_2453_);
v___x_2455_ = v___x_2451_;
goto v_reusejp_2454_;
}
else
{
lean_object* v_reuseFailAlloc_2456_; 
v_reuseFailAlloc_2456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2456_, 0, v_a_2453_);
v___x_2455_ = v_reuseFailAlloc_2456_;
goto v_reusejp_2454_;
}
v_reusejp_2454_:
{
return v___x_2455_;
}
}
else
{
lean_object* v_a_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; size_t v_sz_2460_; size_t v___x_2461_; lean_object* v___x_2462_; 
lean_del_object(v___x_2451_);
v_a_2457_ = lean_ctor_get(v_a_2449_, 0);
lean_inc(v_a_2457_);
lean_dec_ref_known(v_a_2449_, 1);
v___x_2458_ = lean_box(0);
v___x_2459_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2459_, 0, v___x_2458_);
lean_ctor_set(v___x_2459_, 1, v_a_2457_);
v_sz_2460_ = lean_array_size(v_tail_2447_);
v___x_2461_ = ((size_t)0ULL);
v___x_2462_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7(v_x_2431_, v_c_2432_, v_tail_2447_, v_sz_2460_, v___x_2461_, v___x_2459_, v___y_2435_, v___y_2436_, v___y_2437_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_);
if (lean_obj_tag(v___x_2462_) == 0)
{
lean_object* v_a_2463_; lean_object* v___x_2465_; uint8_t v_isShared_2466_; uint8_t v_isSharedCheck_2476_; 
v_a_2463_ = lean_ctor_get(v___x_2462_, 0);
v_isSharedCheck_2476_ = !lean_is_exclusive(v___x_2462_);
if (v_isSharedCheck_2476_ == 0)
{
v___x_2465_ = v___x_2462_;
v_isShared_2466_ = v_isSharedCheck_2476_;
goto v_resetjp_2464_;
}
else
{
lean_inc(v_a_2463_);
lean_dec(v___x_2462_);
v___x_2465_ = lean_box(0);
v_isShared_2466_ = v_isSharedCheck_2476_;
goto v_resetjp_2464_;
}
v_resetjp_2464_:
{
lean_object* v_fst_2467_; 
v_fst_2467_ = lean_ctor_get(v_a_2463_, 0);
if (lean_obj_tag(v_fst_2467_) == 0)
{
lean_object* v_snd_2468_; lean_object* v___x_2470_; 
v_snd_2468_ = lean_ctor_get(v_a_2463_, 1);
lean_inc(v_snd_2468_);
lean_dec(v_a_2463_);
if (v_isShared_2466_ == 0)
{
lean_ctor_set(v___x_2465_, 0, v_snd_2468_);
v___x_2470_ = v___x_2465_;
goto v_reusejp_2469_;
}
else
{
lean_object* v_reuseFailAlloc_2471_; 
v_reuseFailAlloc_2471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2471_, 0, v_snd_2468_);
v___x_2470_ = v_reuseFailAlloc_2471_;
goto v_reusejp_2469_;
}
v_reusejp_2469_:
{
return v___x_2470_;
}
}
else
{
lean_object* v_val_2472_; lean_object* v___x_2474_; 
lean_inc_ref(v_fst_2467_);
lean_dec(v_a_2463_);
v_val_2472_ = lean_ctor_get(v_fst_2467_, 0);
lean_inc(v_val_2472_);
lean_dec_ref_known(v_fst_2467_, 1);
if (v_isShared_2466_ == 0)
{
lean_ctor_set(v___x_2465_, 0, v_val_2472_);
v___x_2474_ = v___x_2465_;
goto v_reusejp_2473_;
}
else
{
lean_object* v_reuseFailAlloc_2475_; 
v_reuseFailAlloc_2475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2475_, 0, v_val_2472_);
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
lean_object* v_a_2477_; lean_object* v___x_2479_; uint8_t v_isShared_2480_; uint8_t v_isSharedCheck_2484_; 
v_a_2477_ = lean_ctor_get(v___x_2462_, 0);
v_isSharedCheck_2484_ = !lean_is_exclusive(v___x_2462_);
if (v_isSharedCheck_2484_ == 0)
{
v___x_2479_ = v___x_2462_;
v_isShared_2480_ = v_isSharedCheck_2484_;
goto v_resetjp_2478_;
}
else
{
lean_inc(v_a_2477_);
lean_dec(v___x_2462_);
v___x_2479_ = lean_box(0);
v_isShared_2480_ = v_isSharedCheck_2484_;
goto v_resetjp_2478_;
}
v_resetjp_2478_:
{
lean_object* v___x_2482_; 
if (v_isShared_2480_ == 0)
{
v___x_2482_ = v___x_2479_;
goto v_reusejp_2481_;
}
else
{
lean_object* v_reuseFailAlloc_2483_; 
v_reuseFailAlloc_2483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2483_, 0, v_a_2477_);
v___x_2482_ = v_reuseFailAlloc_2483_;
goto v_reusejp_2481_;
}
v_reusejp_2481_:
{
return v___x_2482_;
}
}
}
}
}
}
else
{
lean_object* v_a_2486_; lean_object* v___x_2488_; uint8_t v_isShared_2489_; uint8_t v_isSharedCheck_2493_; 
lean_dec_ref(v_c_2432_);
lean_dec(v_x_2431_);
v_a_2486_ = lean_ctor_get(v___x_2448_, 0);
v_isSharedCheck_2493_ = !lean_is_exclusive(v___x_2448_);
if (v_isSharedCheck_2493_ == 0)
{
v___x_2488_ = v___x_2448_;
v_isShared_2489_ = v_isSharedCheck_2493_;
goto v_resetjp_2487_;
}
else
{
lean_inc(v_a_2486_);
lean_dec(v___x_2448_);
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
lean_ctor_set(v_reuseFailAlloc_2492_, 0, v_a_2486_);
v___x_2491_ = v_reuseFailAlloc_2492_;
goto v_reusejp_2490_;
}
v_reusejp_2490_:
{
return v___x_2491_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2___boxed(lean_object* v_x_2494_, lean_object* v_c_2495_, lean_object* v_t_2496_, lean_object* v_init_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_){
_start:
{
lean_object* v_res_2509_; 
v_res_2509_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2(v_x_2494_, v_c_2495_, v_t_2496_, v_init_2497_, v___y_2498_, v___y_2499_, v___y_2500_, v___y_2501_, v___y_2502_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_, v___y_2507_);
lean_dec(v___y_2507_);
lean_dec_ref(v___y_2506_);
lean_dec(v___y_2505_);
lean_dec_ref(v___y_2504_);
lean_dec(v___y_2503_);
lean_dec_ref(v___y_2502_);
lean_dec(v___y_2501_);
lean_dec_ref(v___y_2500_);
lean_dec(v___y_2499_);
lean_dec(v___y_2498_);
lean_dec_ref(v_t_2496_);
return v_res_2509_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f(lean_object* v_x_2510_, lean_object* v_c_2511_, lean_object* v_a_2512_, lean_object* v_a_2513_, lean_object* v_a_2514_, lean_object* v_a_2515_, lean_object* v_a_2516_, lean_object* v_a_2517_, lean_object* v_a_2518_, lean_object* v_a_2519_, lean_object* v_a_2520_, lean_object* v_a_2521_){
_start:
{
lean_object* v___x_2523_; lean_object* v___x_2524_; 
v___x_2523_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___closed__0);
v___x_2524_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v_a_2512_, v_a_2520_);
if (lean_obj_tag(v___x_2524_) == 0)
{
lean_object* v_a_2525_; lean_object* v___y_2527_; lean_object* v_diseqs_2552_; lean_object* v_size_2553_; uint8_t v___x_2554_; 
v_a_2525_ = lean_ctor_get(v___x_2524_, 0);
lean_inc(v_a_2525_);
lean_dec_ref_known(v___x_2524_, 1);
v_diseqs_2552_ = lean_ctor_get(v_a_2525_, 8);
lean_inc_ref(v_diseqs_2552_);
lean_dec(v_a_2525_);
v_size_2553_ = lean_ctor_get(v_diseqs_2552_, 2);
v___x_2554_ = lean_nat_dec_lt(v_x_2510_, v_size_2553_);
if (v___x_2554_ == 0)
{
lean_object* v___x_2555_; 
lean_dec_ref(v_diseqs_2552_);
v___x_2555_ = l_outOfBounds___redArg(v___x_2523_);
v___y_2527_ = v___x_2555_;
goto v___jp_2526_;
}
else
{
lean_object* v___x_2556_; 
v___x_2556_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2523_, v_diseqs_2552_, v_x_2510_);
lean_dec_ref(v_diseqs_2552_);
v___y_2527_ = v___x_2556_;
goto v___jp_2526_;
}
v___jp_2526_:
{
lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; 
v___x_2528_ = lean_box(0);
v___x_2529_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___closed__0));
v___x_2530_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2(v_x_2510_, v_c_2511_, v___y_2527_, v___x_2529_, v_a_2512_, v_a_2513_, v_a_2514_, v_a_2515_, v_a_2516_, v_a_2517_, v_a_2518_, v_a_2519_, v_a_2520_, v_a_2521_);
lean_dec_ref(v___y_2527_);
if (lean_obj_tag(v___x_2530_) == 0)
{
lean_object* v_a_2531_; lean_object* v___x_2533_; uint8_t v_isShared_2534_; uint8_t v_isSharedCheck_2543_; 
v_a_2531_ = lean_ctor_get(v___x_2530_, 0);
v_isSharedCheck_2543_ = !lean_is_exclusive(v___x_2530_);
if (v_isSharedCheck_2543_ == 0)
{
v___x_2533_ = v___x_2530_;
v_isShared_2534_ = v_isSharedCheck_2543_;
goto v_resetjp_2532_;
}
else
{
lean_inc(v_a_2531_);
lean_dec(v___x_2530_);
v___x_2533_ = lean_box(0);
v_isShared_2534_ = v_isSharedCheck_2543_;
goto v_resetjp_2532_;
}
v_resetjp_2532_:
{
lean_object* v_fst_2535_; 
v_fst_2535_ = lean_ctor_get(v_a_2531_, 0);
lean_inc(v_fst_2535_);
lean_dec(v_a_2531_);
if (lean_obj_tag(v_fst_2535_) == 0)
{
lean_object* v___x_2537_; 
if (v_isShared_2534_ == 0)
{
lean_ctor_set(v___x_2533_, 0, v___x_2528_);
v___x_2537_ = v___x_2533_;
goto v_reusejp_2536_;
}
else
{
lean_object* v_reuseFailAlloc_2538_; 
v_reuseFailAlloc_2538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2538_, 0, v___x_2528_);
v___x_2537_ = v_reuseFailAlloc_2538_;
goto v_reusejp_2536_;
}
v_reusejp_2536_:
{
return v___x_2537_;
}
}
else
{
lean_object* v_val_2539_; lean_object* v___x_2541_; 
v_val_2539_ = lean_ctor_get(v_fst_2535_, 0);
lean_inc(v_val_2539_);
lean_dec_ref_known(v_fst_2535_, 1);
if (v_isShared_2534_ == 0)
{
lean_ctor_set(v___x_2533_, 0, v_val_2539_);
v___x_2541_ = v___x_2533_;
goto v_reusejp_2540_;
}
else
{
lean_object* v_reuseFailAlloc_2542_; 
v_reuseFailAlloc_2542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2542_, 0, v_val_2539_);
v___x_2541_ = v_reuseFailAlloc_2542_;
goto v_reusejp_2540_;
}
v_reusejp_2540_:
{
return v___x_2541_;
}
}
}
}
else
{
lean_object* v_a_2544_; lean_object* v___x_2546_; uint8_t v_isShared_2547_; uint8_t v_isSharedCheck_2551_; 
v_a_2544_ = lean_ctor_get(v___x_2530_, 0);
v_isSharedCheck_2551_ = !lean_is_exclusive(v___x_2530_);
if (v_isSharedCheck_2551_ == 0)
{
v___x_2546_ = v___x_2530_;
v_isShared_2547_ = v_isSharedCheck_2551_;
goto v_resetjp_2545_;
}
else
{
lean_inc(v_a_2544_);
lean_dec(v___x_2530_);
v___x_2546_ = lean_box(0);
v_isShared_2547_ = v_isSharedCheck_2551_;
goto v_resetjp_2545_;
}
v_resetjp_2545_:
{
lean_object* v___x_2549_; 
if (v_isShared_2547_ == 0)
{
v___x_2549_ = v___x_2546_;
goto v_reusejp_2548_;
}
else
{
lean_object* v_reuseFailAlloc_2550_; 
v_reuseFailAlloc_2550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2550_, 0, v_a_2544_);
v___x_2549_ = v_reuseFailAlloc_2550_;
goto v_reusejp_2548_;
}
v_reusejp_2548_:
{
return v___x_2549_;
}
}
}
}
}
else
{
lean_object* v_a_2557_; lean_object* v___x_2559_; uint8_t v_isShared_2560_; uint8_t v_isSharedCheck_2564_; 
lean_dec_ref(v_c_2511_);
lean_dec(v_x_2510_);
v_a_2557_ = lean_ctor_get(v___x_2524_, 0);
v_isSharedCheck_2564_ = !lean_is_exclusive(v___x_2524_);
if (v_isSharedCheck_2564_ == 0)
{
v___x_2559_ = v___x_2524_;
v_isShared_2560_ = v_isSharedCheck_2564_;
goto v_resetjp_2558_;
}
else
{
lean_inc(v_a_2557_);
lean_dec(v___x_2524_);
v___x_2559_ = lean_box(0);
v_isShared_2560_ = v_isSharedCheck_2564_;
goto v_resetjp_2558_;
}
v_resetjp_2558_:
{
lean_object* v___x_2562_; 
if (v_isShared_2560_ == 0)
{
v___x_2562_ = v___x_2559_;
goto v_reusejp_2561_;
}
else
{
lean_object* v_reuseFailAlloc_2563_; 
v_reuseFailAlloc_2563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2563_, 0, v_a_2557_);
v___x_2562_ = v_reuseFailAlloc_2563_;
goto v_reusejp_2561_;
}
v_reusejp_2561_:
{
return v___x_2562_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f___boxed(lean_object* v_x_2565_, lean_object* v_c_2566_, lean_object* v_a_2567_, lean_object* v_a_2568_, lean_object* v_a_2569_, lean_object* v_a_2570_, lean_object* v_a_2571_, lean_object* v_a_2572_, lean_object* v_a_2573_, lean_object* v_a_2574_, lean_object* v_a_2575_, lean_object* v_a_2576_, lean_object* v_a_2577_){
_start:
{
lean_object* v_res_2578_; 
v_res_2578_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f(v_x_2565_, v_c_2566_, v_a_2567_, v_a_2568_, v_a_2569_, v_a_2570_, v_a_2571_, v_a_2572_, v_a_2573_, v_a_2574_, v_a_2575_, v_a_2576_);
lean_dec(v_a_2576_);
lean_dec_ref(v_a_2575_);
lean_dec(v_a_2574_);
lean_dec_ref(v_a_2573_);
lean_dec(v_a_2572_);
lean_dec_ref(v_a_2571_);
lean_dec(v_a_2570_);
lean_dec_ref(v_a_2569_);
lean_dec(v_a_2568_);
lean_dec(v_a_2567_);
return v_res_2578_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11(lean_object* v_x_2579_, lean_object* v_c_2580_, lean_object* v_as_2581_, size_t v_sz_2582_, size_t v_i_2583_, lean_object* v_b_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_, lean_object* v___y_2593_, lean_object* v___y_2594_){
_start:
{
lean_object* v___x_2596_; 
v___x_2596_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg(v_x_2579_, v_c_2580_, v_as_2581_, v_sz_2582_, v_i_2583_, v_b_2584_, v___y_2585_);
return v___x_2596_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___boxed(lean_object** _args){
lean_object* v_x_2597_ = _args[0];
lean_object* v_c_2598_ = _args[1];
lean_object* v_as_2599_ = _args[2];
lean_object* v_sz_2600_ = _args[3];
lean_object* v_i_2601_ = _args[4];
lean_object* v_b_2602_ = _args[5];
lean_object* v___y_2603_ = _args[6];
lean_object* v___y_2604_ = _args[7];
lean_object* v___y_2605_ = _args[8];
lean_object* v___y_2606_ = _args[9];
lean_object* v___y_2607_ = _args[10];
lean_object* v___y_2608_ = _args[11];
lean_object* v___y_2609_ = _args[12];
lean_object* v___y_2610_ = _args[13];
lean_object* v___y_2611_ = _args[14];
lean_object* v___y_2612_ = _args[15];
lean_object* v___y_2613_ = _args[16];
_start:
{
size_t v_sz_boxed_2614_; size_t v_i_boxed_2615_; lean_object* v_res_2616_; 
v_sz_boxed_2614_ = lean_unbox_usize(v_sz_2600_);
lean_dec(v_sz_2600_);
v_i_boxed_2615_ = lean_unbox_usize(v_i_2601_);
lean_dec(v_i_2601_);
v_res_2616_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11(v_x_2597_, v_c_2598_, v_as_2599_, v_sz_boxed_2614_, v_i_boxed_2615_, v_b_2602_, v___y_2603_, v___y_2604_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_, v___y_2611_, v___y_2612_);
lean_dec(v___y_2612_);
lean_dec_ref(v___y_2611_);
lean_dec(v___y_2610_);
lean_dec_ref(v___y_2609_);
lean_dec(v___y_2608_);
lean_dec_ref(v___y_2607_);
lean_dec(v___y_2606_);
lean_dec_ref(v___y_2605_);
lean_dec(v___y_2604_);
lean_dec(v___y_2603_);
lean_dec_ref(v_as_2599_);
return v_res_2616_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10(lean_object* v_x_2617_, lean_object* v_c_2618_, lean_object* v_as_2619_, size_t v_sz_2620_, size_t v_i_2621_, lean_object* v_b_2622_, lean_object* v___y_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_){
_start:
{
lean_object* v___x_2634_; 
v___x_2634_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg(v_x_2617_, v_c_2618_, v_as_2619_, v_sz_2620_, v_i_2621_, v_b_2622_, v___y_2623_);
return v___x_2634_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___boxed(lean_object** _args){
lean_object* v_x_2635_ = _args[0];
lean_object* v_c_2636_ = _args[1];
lean_object* v_as_2637_ = _args[2];
lean_object* v_sz_2638_ = _args[3];
lean_object* v_i_2639_ = _args[4];
lean_object* v_b_2640_ = _args[5];
lean_object* v___y_2641_ = _args[6];
lean_object* v___y_2642_ = _args[7];
lean_object* v___y_2643_ = _args[8];
lean_object* v___y_2644_ = _args[9];
lean_object* v___y_2645_ = _args[10];
lean_object* v___y_2646_ = _args[11];
lean_object* v___y_2647_ = _args[12];
lean_object* v___y_2648_ = _args[13];
lean_object* v___y_2649_ = _args[14];
lean_object* v___y_2650_ = _args[15];
lean_object* v___y_2651_ = _args[16];
_start:
{
size_t v_sz_boxed_2652_; size_t v_i_boxed_2653_; lean_object* v_res_2654_; 
v_sz_boxed_2652_ = lean_unbox_usize(v_sz_2638_);
lean_dec(v_sz_2638_);
v_i_boxed_2653_ = lean_unbox_usize(v_i_2639_);
lean_dec(v_i_2639_);
v_res_2654_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10(v_x_2635_, v_c_2636_, v_as_2637_, v_sz_boxed_2652_, v_i_boxed_2653_, v_b_2640_, v___y_2641_, v___y_2642_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_);
lean_dec(v___y_2650_);
lean_dec_ref(v___y_2649_);
lean_dec(v___y_2648_);
lean_dec_ref(v___y_2647_);
lean_dec(v___y_2646_);
lean_dec_ref(v___y_2645_);
lean_dec(v___y_2644_);
lean_dec_ref(v___y_2643_);
lean_dec(v___y_2642_);
lean_dec(v___y_2641_);
lean_dec_ref(v_as_2637_);
return v_res_2654_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_spec__0___redArg(lean_object* v_v_2655_, lean_object* v_a_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_){
_start:
{
lean_object* v_snd_2668_; lean_object* v___x_2670_; uint8_t v_isShared_2671_; uint8_t v_isSharedCheck_2699_; 
v_snd_2668_ = lean_ctor_get(v_a_2656_, 1);
v_isSharedCheck_2699_ = !lean_is_exclusive(v_a_2656_);
if (v_isSharedCheck_2699_ == 0)
{
lean_object* v_unused_2700_; 
v_unused_2700_ = lean_ctor_get(v_a_2656_, 0);
lean_dec(v_unused_2700_);
v___x_2670_ = v_a_2656_;
v_isShared_2671_ = v_isSharedCheck_2699_;
goto v_resetjp_2669_;
}
else
{
lean_inc(v_snd_2668_);
lean_dec(v_a_2656_);
v___x_2670_ = lean_box(0);
v_isShared_2671_ = v_isSharedCheck_2699_;
goto v_resetjp_2669_;
}
v_resetjp_2669_:
{
lean_object* v___x_2672_; lean_object* v___x_2673_; 
v___x_2672_ = lean_box(0);
lean_inc(v_snd_2668_);
lean_inc(v_v_2655_);
v___x_2673_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f(v_v_2655_, v_snd_2668_, v___y_2657_, v___y_2658_, v___y_2659_, v___y_2660_, v___y_2661_, v___y_2662_, v___y_2663_, v___y_2664_, v___y_2665_, v___y_2666_);
if (lean_obj_tag(v___x_2673_) == 0)
{
lean_object* v_a_2674_; lean_object* v___x_2676_; uint8_t v_isShared_2677_; uint8_t v_isSharedCheck_2690_; 
v_a_2674_ = lean_ctor_get(v___x_2673_, 0);
v_isSharedCheck_2690_ = !lean_is_exclusive(v___x_2673_);
if (v_isSharedCheck_2690_ == 0)
{
v___x_2676_ = v___x_2673_;
v_isShared_2677_ = v_isSharedCheck_2690_;
goto v_resetjp_2675_;
}
else
{
lean_inc(v_a_2674_);
lean_dec(v___x_2673_);
v___x_2676_ = lean_box(0);
v_isShared_2677_ = v_isSharedCheck_2690_;
goto v_resetjp_2675_;
}
v_resetjp_2675_:
{
if (lean_obj_tag(v_a_2674_) == 1)
{
lean_object* v_val_2678_; lean_object* v___x_2680_; 
lean_del_object(v___x_2676_);
lean_dec(v_snd_2668_);
v_val_2678_ = lean_ctor_get(v_a_2674_, 0);
lean_inc(v_val_2678_);
lean_dec_ref_known(v_a_2674_, 1);
if (v_isShared_2671_ == 0)
{
lean_ctor_set(v___x_2670_, 1, v_val_2678_);
lean_ctor_set(v___x_2670_, 0, v___x_2672_);
v___x_2680_ = v___x_2670_;
goto v_reusejp_2679_;
}
else
{
lean_object* v_reuseFailAlloc_2682_; 
v_reuseFailAlloc_2682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2682_, 0, v___x_2672_);
lean_ctor_set(v_reuseFailAlloc_2682_, 1, v_val_2678_);
v___x_2680_ = v_reuseFailAlloc_2682_;
goto v_reusejp_2679_;
}
v_reusejp_2679_:
{
v_a_2656_ = v___x_2680_;
goto _start;
}
}
else
{
lean_object* v___x_2683_; lean_object* v___x_2685_; 
lean_dec(v_a_2674_);
lean_dec(v_v_2655_);
lean_inc(v_snd_2668_);
v___x_2683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2683_, 0, v_snd_2668_);
if (v_isShared_2671_ == 0)
{
lean_ctor_set(v___x_2670_, 0, v___x_2683_);
v___x_2685_ = v___x_2670_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2689_; 
v_reuseFailAlloc_2689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2689_, 0, v___x_2683_);
lean_ctor_set(v_reuseFailAlloc_2689_, 1, v_snd_2668_);
v___x_2685_ = v_reuseFailAlloc_2689_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
lean_object* v___x_2687_; 
if (v_isShared_2677_ == 0)
{
lean_ctor_set(v___x_2676_, 0, v___x_2685_);
v___x_2687_ = v___x_2676_;
goto v_reusejp_2686_;
}
else
{
lean_object* v_reuseFailAlloc_2688_; 
v_reuseFailAlloc_2688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2688_, 0, v___x_2685_);
v___x_2687_ = v_reuseFailAlloc_2688_;
goto v_reusejp_2686_;
}
v_reusejp_2686_:
{
return v___x_2687_;
}
}
}
}
}
else
{
lean_object* v_a_2691_; lean_object* v___x_2693_; uint8_t v_isShared_2694_; uint8_t v_isSharedCheck_2698_; 
lean_del_object(v___x_2670_);
lean_dec(v_snd_2668_);
lean_dec(v_v_2655_);
v_a_2691_ = lean_ctor_get(v___x_2673_, 0);
v_isSharedCheck_2698_ = !lean_is_exclusive(v___x_2673_);
if (v_isSharedCheck_2698_ == 0)
{
v___x_2693_ = v___x_2673_;
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
else
{
lean_inc(v_a_2691_);
lean_dec(v___x_2673_);
v___x_2693_ = lean_box(0);
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
v_resetjp_2692_:
{
lean_object* v___x_2696_; 
if (v_isShared_2694_ == 0)
{
v___x_2696_ = v___x_2693_;
goto v_reusejp_2695_;
}
else
{
lean_object* v_reuseFailAlloc_2697_; 
v_reuseFailAlloc_2697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2697_, 0, v_a_2691_);
v___x_2696_ = v_reuseFailAlloc_2697_;
goto v_reusejp_2695_;
}
v_reusejp_2695_:
{
return v___x_2696_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_spec__0___redArg___boxed(lean_object* v_v_2701_, lean_object* v_a_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_){
_start:
{
lean_object* v_res_2714_; 
v_res_2714_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_spec__0___redArg(v_v_2701_, v_a_2702_, v___y_2703_, v___y_2704_, v___y_2705_, v___y_2706_, v___y_2707_, v___y_2708_, v___y_2709_, v___y_2710_, v___y_2711_, v___y_2712_);
lean_dec(v___y_2712_);
lean_dec_ref(v___y_2711_);
lean_dec(v___y_2710_);
lean_dec_ref(v___y_2709_);
lean_dec(v___y_2708_);
lean_dec_ref(v___y_2707_);
lean_dec(v___y_2706_);
lean_dec_ref(v___y_2705_);
lean_dec(v___y_2704_);
lean_dec(v___y_2703_);
return v_res_2714_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq(lean_object* v_c_2715_, lean_object* v_a_2716_, lean_object* v_a_2717_, lean_object* v_a_2718_, lean_object* v_a_2719_, lean_object* v_a_2720_, lean_object* v_a_2721_, lean_object* v_a_2722_, lean_object* v_a_2723_, lean_object* v_a_2724_, lean_object* v_a_2725_){
_start:
{
lean_object* v_p_2727_; 
v_p_2727_ = lean_ctor_get(v_c_2715_, 0);
if (lean_obj_tag(v_p_2727_) == 1)
{
lean_object* v_v_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; 
v_v_2728_ = lean_ctor_get(v_p_2727_, 1);
lean_inc(v_v_2728_);
v___x_2729_ = lean_box(0);
v___x_2730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2730_, 0, v___x_2729_);
lean_ctor_set(v___x_2730_, 1, v_c_2715_);
v___x_2731_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_spec__0___redArg(v_v_2728_, v___x_2730_, v_a_2716_, v_a_2717_, v_a_2718_, v_a_2719_, v_a_2720_, v_a_2721_, v_a_2722_, v_a_2723_, v_a_2724_, v_a_2725_);
if (lean_obj_tag(v___x_2731_) == 0)
{
lean_object* v_a_2732_; lean_object* v___x_2734_; uint8_t v_isShared_2735_; uint8_t v_isSharedCheck_2745_; 
v_a_2732_ = lean_ctor_get(v___x_2731_, 0);
v_isSharedCheck_2745_ = !lean_is_exclusive(v___x_2731_);
if (v_isSharedCheck_2745_ == 0)
{
v___x_2734_ = v___x_2731_;
v_isShared_2735_ = v_isSharedCheck_2745_;
goto v_resetjp_2733_;
}
else
{
lean_inc(v_a_2732_);
lean_dec(v___x_2731_);
v___x_2734_ = lean_box(0);
v_isShared_2735_ = v_isSharedCheck_2745_;
goto v_resetjp_2733_;
}
v_resetjp_2733_:
{
lean_object* v_fst_2736_; 
v_fst_2736_ = lean_ctor_get(v_a_2732_, 0);
if (lean_obj_tag(v_fst_2736_) == 0)
{
lean_object* v_snd_2737_; lean_object* v___x_2739_; 
v_snd_2737_ = lean_ctor_get(v_a_2732_, 1);
lean_inc(v_snd_2737_);
lean_dec(v_a_2732_);
if (v_isShared_2735_ == 0)
{
lean_ctor_set(v___x_2734_, 0, v_snd_2737_);
v___x_2739_ = v___x_2734_;
goto v_reusejp_2738_;
}
else
{
lean_object* v_reuseFailAlloc_2740_; 
v_reuseFailAlloc_2740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2740_, 0, v_snd_2737_);
v___x_2739_ = v_reuseFailAlloc_2740_;
goto v_reusejp_2738_;
}
v_reusejp_2738_:
{
return v___x_2739_;
}
}
else
{
lean_object* v_val_2741_; lean_object* v___x_2743_; 
lean_inc_ref(v_fst_2736_);
lean_dec(v_a_2732_);
v_val_2741_ = lean_ctor_get(v_fst_2736_, 0);
lean_inc(v_val_2741_);
lean_dec_ref_known(v_fst_2736_, 1);
if (v_isShared_2735_ == 0)
{
lean_ctor_set(v___x_2734_, 0, v_val_2741_);
v___x_2743_ = v___x_2734_;
goto v_reusejp_2742_;
}
else
{
lean_object* v_reuseFailAlloc_2744_; 
v_reuseFailAlloc_2744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2744_, 0, v_val_2741_);
v___x_2743_ = v_reuseFailAlloc_2744_;
goto v_reusejp_2742_;
}
v_reusejp_2742_:
{
return v___x_2743_;
}
}
}
}
else
{
lean_object* v_a_2746_; lean_object* v___x_2748_; uint8_t v_isShared_2749_; uint8_t v_isSharedCheck_2753_; 
v_a_2746_ = lean_ctor_get(v___x_2731_, 0);
v_isSharedCheck_2753_ = !lean_is_exclusive(v___x_2731_);
if (v_isSharedCheck_2753_ == 0)
{
v___x_2748_ = v___x_2731_;
v_isShared_2749_ = v_isSharedCheck_2753_;
goto v_resetjp_2747_;
}
else
{
lean_inc(v_a_2746_);
lean_dec(v___x_2731_);
v___x_2748_ = lean_box(0);
v_isShared_2749_ = v_isSharedCheck_2753_;
goto v_resetjp_2747_;
}
v_resetjp_2747_:
{
lean_object* v___x_2751_; 
if (v_isShared_2749_ == 0)
{
v___x_2751_ = v___x_2748_;
goto v_reusejp_2750_;
}
else
{
lean_object* v_reuseFailAlloc_2752_; 
v_reuseFailAlloc_2752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2752_, 0, v_a_2746_);
v___x_2751_ = v_reuseFailAlloc_2752_;
goto v_reusejp_2750_;
}
v_reusejp_2750_:
{
return v___x_2751_;
}
}
}
}
else
{
lean_object* v___x_2754_; 
v___x_2754_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___redArg(v_c_2715_, v_a_2716_, v_a_2722_, v_a_2723_, v_a_2724_, v_a_2725_);
return v___x_2754_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq___boxed(lean_object* v_c_2755_, lean_object* v_a_2756_, lean_object* v_a_2757_, lean_object* v_a_2758_, lean_object* v_a_2759_, lean_object* v_a_2760_, lean_object* v_a_2761_, lean_object* v_a_2762_, lean_object* v_a_2763_, lean_object* v_a_2764_, lean_object* v_a_2765_, lean_object* v_a_2766_){
_start:
{
lean_object* v_res_2767_; 
v_res_2767_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq(v_c_2755_, v_a_2756_, v_a_2757_, v_a_2758_, v_a_2759_, v_a_2760_, v_a_2761_, v_a_2762_, v_a_2763_, v_a_2764_, v_a_2765_);
lean_dec(v_a_2765_);
lean_dec_ref(v_a_2764_);
lean_dec(v_a_2763_);
lean_dec_ref(v_a_2762_);
lean_dec(v_a_2761_);
lean_dec_ref(v_a_2760_);
lean_dec(v_a_2759_);
lean_dec_ref(v_a_2758_);
lean_dec(v_a_2757_);
lean_dec(v_a_2756_);
return v_res_2767_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_spec__0(lean_object* v_v_2768_, lean_object* v_inst_2769_, lean_object* v_a_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_){
_start:
{
lean_object* v___x_2782_; 
v___x_2782_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_spec__0___redArg(v_v_2768_, v_a_2770_, v___y_2771_, v___y_2772_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_, v___y_2777_, v___y_2778_, v___y_2779_, v___y_2780_);
return v___x_2782_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_spec__0___boxed(lean_object* v_v_2783_, lean_object* v_inst_2784_, lean_object* v_a_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_){
_start:
{
lean_object* v_res_2797_; 
v_res_2797_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_spec__0(v_v_2783_, v_inst_2784_, v_a_2785_, v___y_2786_, v___y_2787_, v___y_2788_, v___y_2789_, v___y_2790_, v___y_2791_, v___y_2792_, v___y_2793_, v___y_2794_, v___y_2795_);
lean_dec(v___y_2795_);
lean_dec_ref(v___y_2794_);
lean_dec(v___y_2793_);
lean_dec_ref(v___y_2792_);
lean_dec(v___y_2791_);
lean_dec_ref(v___y_2790_);
lean_dec(v___y_2789_);
lean_dec_ref(v___y_2788_);
lean_dec(v___y_2787_);
lean_dec(v___y_2786_);
return v_res_2797_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0_spec__0(lean_object* v_a_2798_, lean_object* v_x_2799_, size_t v_x_2800_, size_t v_x_2801_){
_start:
{
if (lean_obj_tag(v_x_2799_) == 0)
{
lean_object* v_cs_2802_; size_t v_j_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; uint8_t v___x_2806_; 
v_cs_2802_ = lean_ctor_get(v_x_2799_, 0);
v_j_2803_ = lean_usize_shift_right(v_x_2800_, v_x_2801_);
v___x_2804_ = lean_usize_to_nat(v_j_2803_);
v___x_2805_ = lean_array_get_size(v_cs_2802_);
v___x_2806_ = lean_nat_dec_lt(v___x_2804_, v___x_2805_);
if (v___x_2806_ == 0)
{
lean_dec(v___x_2804_);
lean_dec_ref(v_a_2798_);
return v_x_2799_;
}
else
{
lean_object* v___x_2808_; uint8_t v_isShared_2809_; uint8_t v_isSharedCheck_2824_; 
lean_inc_ref(v_cs_2802_);
v_isSharedCheck_2824_ = !lean_is_exclusive(v_x_2799_);
if (v_isSharedCheck_2824_ == 0)
{
lean_object* v_unused_2825_; 
v_unused_2825_ = lean_ctor_get(v_x_2799_, 0);
lean_dec(v_unused_2825_);
v___x_2808_ = v_x_2799_;
v_isShared_2809_ = v_isSharedCheck_2824_;
goto v_resetjp_2807_;
}
else
{
lean_dec(v_x_2799_);
v___x_2808_ = lean_box(0);
v_isShared_2809_ = v_isSharedCheck_2824_;
goto v_resetjp_2807_;
}
v_resetjp_2807_:
{
size_t v___x_2810_; size_t v___x_2811_; size_t v___x_2812_; size_t v_i_2813_; size_t v___x_2814_; size_t v_shift_2815_; lean_object* v_v_2816_; lean_object* v___x_2817_; lean_object* v_xs_x27_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2822_; 
v___x_2810_ = ((size_t)1ULL);
v___x_2811_ = lean_usize_shift_left(v___x_2810_, v_x_2801_);
v___x_2812_ = lean_usize_sub(v___x_2811_, v___x_2810_);
v_i_2813_ = lean_usize_land(v_x_2800_, v___x_2812_);
v___x_2814_ = ((size_t)5ULL);
v_shift_2815_ = lean_usize_sub(v_x_2801_, v___x_2814_);
v_v_2816_ = lean_array_fget(v_cs_2802_, v___x_2804_);
v___x_2817_ = lean_box(0);
v_xs_x27_2818_ = lean_array_fset(v_cs_2802_, v___x_2804_, v___x_2817_);
v___x_2819_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0_spec__0(v_a_2798_, v_v_2816_, v_i_2813_, v_shift_2815_);
v___x_2820_ = lean_array_fset(v_xs_x27_2818_, v___x_2804_, v___x_2819_);
lean_dec(v___x_2804_);
if (v_isShared_2809_ == 0)
{
lean_ctor_set(v___x_2808_, 0, v___x_2820_);
v___x_2822_ = v___x_2808_;
goto v_reusejp_2821_;
}
else
{
lean_object* v_reuseFailAlloc_2823_; 
v_reuseFailAlloc_2823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2823_, 0, v___x_2820_);
v___x_2822_ = v_reuseFailAlloc_2823_;
goto v_reusejp_2821_;
}
v_reusejp_2821_:
{
return v___x_2822_;
}
}
}
}
else
{
lean_object* v_vs_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; uint8_t v___x_2829_; 
v_vs_2826_ = lean_ctor_get(v_x_2799_, 0);
v___x_2827_ = lean_usize_to_nat(v_x_2800_);
v___x_2828_ = lean_array_get_size(v_vs_2826_);
v___x_2829_ = lean_nat_dec_lt(v___x_2827_, v___x_2828_);
if (v___x_2829_ == 0)
{
lean_dec(v___x_2827_);
lean_dec_ref(v_a_2798_);
return v_x_2799_;
}
else
{
lean_object* v___x_2831_; uint8_t v_isShared_2832_; uint8_t v_isSharedCheck_2841_; 
lean_inc_ref(v_vs_2826_);
v_isSharedCheck_2841_ = !lean_is_exclusive(v_x_2799_);
if (v_isSharedCheck_2841_ == 0)
{
lean_object* v_unused_2842_; 
v_unused_2842_ = lean_ctor_get(v_x_2799_, 0);
lean_dec(v_unused_2842_);
v___x_2831_ = v_x_2799_;
v_isShared_2832_ = v_isSharedCheck_2841_;
goto v_resetjp_2830_;
}
else
{
lean_dec(v_x_2799_);
v___x_2831_ = lean_box(0);
v_isShared_2832_ = v_isSharedCheck_2841_;
goto v_resetjp_2830_;
}
v_resetjp_2830_:
{
lean_object* v_v_2833_; lean_object* v___x_2834_; lean_object* v_xs_x27_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2839_; 
v_v_2833_ = lean_array_fget(v_vs_2826_, v___x_2827_);
v___x_2834_ = lean_box(0);
v_xs_x27_2835_ = lean_array_fset(v_vs_2826_, v___x_2827_, v___x_2834_);
v___x_2836_ = l_Lean_PersistentArray_push___redArg(v_v_2833_, v_a_2798_);
v___x_2837_ = lean_array_fset(v_xs_x27_2835_, v___x_2827_, v___x_2836_);
lean_dec(v___x_2827_);
if (v_isShared_2832_ == 0)
{
lean_ctor_set(v___x_2831_, 0, v___x_2837_);
v___x_2839_ = v___x_2831_;
goto v_reusejp_2838_;
}
else
{
lean_object* v_reuseFailAlloc_2840_; 
v_reuseFailAlloc_2840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2840_, 0, v___x_2837_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0_spec__0___boxed(lean_object* v_a_2843_, lean_object* v_x_2844_, lean_object* v_x_2845_, lean_object* v_x_2846_){
_start:
{
size_t v_x_75134__boxed_2847_; size_t v_x_75135__boxed_2848_; lean_object* v_res_2849_; 
v_x_75134__boxed_2847_ = lean_unbox_usize(v_x_2845_);
lean_dec(v_x_2845_);
v_x_75135__boxed_2848_ = lean_unbox_usize(v_x_2846_);
lean_dec(v_x_2846_);
v_res_2849_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0_spec__0(v_a_2843_, v_x_2844_, v_x_75134__boxed_2847_, v_x_75135__boxed_2848_);
return v_res_2849_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0(lean_object* v_a_2850_, lean_object* v_t_2851_, lean_object* v_i_2852_){
_start:
{
lean_object* v_root_2853_; lean_object* v_tail_2854_; lean_object* v_size_2855_; size_t v_shift_2856_; lean_object* v_tailOff_2857_; lean_object* v___x_2859_; uint8_t v_isShared_2860_; uint8_t v_isSharedCheck_2881_; 
v_root_2853_ = lean_ctor_get(v_t_2851_, 0);
v_tail_2854_ = lean_ctor_get(v_t_2851_, 1);
v_size_2855_ = lean_ctor_get(v_t_2851_, 2);
v_shift_2856_ = lean_ctor_get_usize(v_t_2851_, 4);
v_tailOff_2857_ = lean_ctor_get(v_t_2851_, 3);
v_isSharedCheck_2881_ = !lean_is_exclusive(v_t_2851_);
if (v_isSharedCheck_2881_ == 0)
{
v___x_2859_ = v_t_2851_;
v_isShared_2860_ = v_isSharedCheck_2881_;
goto v_resetjp_2858_;
}
else
{
lean_inc(v_tailOff_2857_);
lean_inc(v_size_2855_);
lean_inc(v_tail_2854_);
lean_inc(v_root_2853_);
lean_dec(v_t_2851_);
v___x_2859_ = lean_box(0);
v_isShared_2860_ = v_isSharedCheck_2881_;
goto v_resetjp_2858_;
}
v_resetjp_2858_:
{
uint8_t v___x_2861_; 
v___x_2861_ = lean_nat_dec_le(v_tailOff_2857_, v_i_2852_);
if (v___x_2861_ == 0)
{
size_t v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2865_; 
v___x_2862_ = lean_usize_of_nat(v_i_2852_);
v___x_2863_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0_spec__0(v_a_2850_, v_root_2853_, v___x_2862_, v_shift_2856_);
if (v_isShared_2860_ == 0)
{
lean_ctor_set(v___x_2859_, 0, v___x_2863_);
v___x_2865_ = v___x_2859_;
goto v_reusejp_2864_;
}
else
{
lean_object* v_reuseFailAlloc_2866_; 
v_reuseFailAlloc_2866_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_2866_, 0, v___x_2863_);
lean_ctor_set(v_reuseFailAlloc_2866_, 1, v_tail_2854_);
lean_ctor_set(v_reuseFailAlloc_2866_, 2, v_size_2855_);
lean_ctor_set(v_reuseFailAlloc_2866_, 3, v_tailOff_2857_);
lean_ctor_set_usize(v_reuseFailAlloc_2866_, 4, v_shift_2856_);
v___x_2865_ = v_reuseFailAlloc_2866_;
goto v_reusejp_2864_;
}
v_reusejp_2864_:
{
return v___x_2865_;
}
}
else
{
lean_object* v___x_2867_; lean_object* v___x_2868_; uint8_t v___x_2869_; 
v___x_2867_ = lean_nat_sub(v_i_2852_, v_tailOff_2857_);
v___x_2868_ = lean_array_get_size(v_tail_2854_);
v___x_2869_ = lean_nat_dec_lt(v___x_2867_, v___x_2868_);
if (v___x_2869_ == 0)
{
lean_object* v___x_2871_; 
lean_dec(v___x_2867_);
lean_dec_ref(v_a_2850_);
if (v_isShared_2860_ == 0)
{
v___x_2871_ = v___x_2859_;
goto v_reusejp_2870_;
}
else
{
lean_object* v_reuseFailAlloc_2872_; 
v_reuseFailAlloc_2872_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_2872_, 0, v_root_2853_);
lean_ctor_set(v_reuseFailAlloc_2872_, 1, v_tail_2854_);
lean_ctor_set(v_reuseFailAlloc_2872_, 2, v_size_2855_);
lean_ctor_set(v_reuseFailAlloc_2872_, 3, v_tailOff_2857_);
lean_ctor_set_usize(v_reuseFailAlloc_2872_, 4, v_shift_2856_);
v___x_2871_ = v_reuseFailAlloc_2872_;
goto v_reusejp_2870_;
}
v_reusejp_2870_:
{
return v___x_2871_;
}
}
else
{
lean_object* v_v_2873_; lean_object* v___x_2874_; lean_object* v_xs_x27_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2879_; 
v_v_2873_ = lean_array_fget(v_tail_2854_, v___x_2867_);
v___x_2874_ = lean_box(0);
v_xs_x27_2875_ = lean_array_fset(v_tail_2854_, v___x_2867_, v___x_2874_);
v___x_2876_ = l_Lean_PersistentArray_push___redArg(v_v_2873_, v_a_2850_);
v___x_2877_ = lean_array_fset(v_xs_x27_2875_, v___x_2867_, v___x_2876_);
lean_dec(v___x_2867_);
if (v_isShared_2860_ == 0)
{
lean_ctor_set(v___x_2859_, 1, v___x_2877_);
v___x_2879_ = v___x_2859_;
goto v_reusejp_2878_;
}
else
{
lean_object* v_reuseFailAlloc_2880_; 
v_reuseFailAlloc_2880_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_2880_, 0, v_root_2853_);
lean_ctor_set(v_reuseFailAlloc_2880_, 1, v___x_2877_);
lean_ctor_set(v_reuseFailAlloc_2880_, 2, v_size_2855_);
lean_ctor_set(v_reuseFailAlloc_2880_, 3, v_tailOff_2857_);
lean_ctor_set_usize(v_reuseFailAlloc_2880_, 4, v_shift_2856_);
v___x_2879_ = v_reuseFailAlloc_2880_;
goto v_reusejp_2878_;
}
v_reusejp_2878_:
{
return v___x_2879_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0___boxed(lean_object* v_a_2882_, lean_object* v_t_2883_, lean_object* v_i_2884_){
_start:
{
lean_object* v_res_2885_; 
v_res_2885_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0(v_a_2882_, v_t_2883_, v_i_2884_);
lean_dec(v_i_2884_);
return v_res_2885_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__0(lean_object* v_a_2886_, lean_object* v_v_2887_, lean_object* v_s_2888_){
_start:
{
lean_object* v_vars_2889_; lean_object* v_varMap_2890_; lean_object* v_varsHistory_2891_; lean_object* v_natToIntMap_2892_; lean_object* v_natDef_2893_; lean_object* v_dvds_2894_; lean_object* v_lowers_2895_; lean_object* v_uppers_2896_; lean_object* v_diseqs_2897_; lean_object* v_elimEqs_2898_; lean_object* v_active_2899_; lean_object* v_elimStack_2900_; lean_object* v_occurs_2901_; lean_object* v_assignment_2902_; lean_object* v_nextCnstrId_2903_; uint8_t v_caseSplits_2904_; lean_object* v_steps_2905_; lean_object* v_penalties_2906_; lean_object* v_numReorderRequests_2907_; lean_object* v_conflict_x3f_2908_; lean_object* v_diseqSplits_2909_; lean_object* v_divMod_2910_; uint8_t v_usedCommRing_2911_; lean_object* v_nonlinearOccs_2912_; lean_object* v___x_2914_; uint8_t v_isShared_2915_; uint8_t v_isSharedCheck_2920_; 
v_vars_2889_ = lean_ctor_get(v_s_2888_, 0);
v_varMap_2890_ = lean_ctor_get(v_s_2888_, 1);
v_varsHistory_2891_ = lean_ctor_get(v_s_2888_, 2);
v_natToIntMap_2892_ = lean_ctor_get(v_s_2888_, 3);
v_natDef_2893_ = lean_ctor_get(v_s_2888_, 4);
v_dvds_2894_ = lean_ctor_get(v_s_2888_, 5);
v_lowers_2895_ = lean_ctor_get(v_s_2888_, 6);
v_uppers_2896_ = lean_ctor_get(v_s_2888_, 7);
v_diseqs_2897_ = lean_ctor_get(v_s_2888_, 8);
v_elimEqs_2898_ = lean_ctor_get(v_s_2888_, 9);
v_active_2899_ = lean_ctor_get(v_s_2888_, 10);
v_elimStack_2900_ = lean_ctor_get(v_s_2888_, 11);
v_occurs_2901_ = lean_ctor_get(v_s_2888_, 12);
v_assignment_2902_ = lean_ctor_get(v_s_2888_, 13);
v_nextCnstrId_2903_ = lean_ctor_get(v_s_2888_, 14);
v_caseSplits_2904_ = lean_ctor_get_uint8(v_s_2888_, sizeof(void*)*22);
v_steps_2905_ = lean_ctor_get(v_s_2888_, 15);
v_penalties_2906_ = lean_ctor_get(v_s_2888_, 16);
v_numReorderRequests_2907_ = lean_ctor_get(v_s_2888_, 17);
v_conflict_x3f_2908_ = lean_ctor_get(v_s_2888_, 18);
v_diseqSplits_2909_ = lean_ctor_get(v_s_2888_, 19);
v_divMod_2910_ = lean_ctor_get(v_s_2888_, 20);
v_usedCommRing_2911_ = lean_ctor_get_uint8(v_s_2888_, sizeof(void*)*22 + 1);
v_nonlinearOccs_2912_ = lean_ctor_get(v_s_2888_, 21);
v_isSharedCheck_2920_ = !lean_is_exclusive(v_s_2888_);
if (v_isSharedCheck_2920_ == 0)
{
v___x_2914_ = v_s_2888_;
v_isShared_2915_ = v_isSharedCheck_2920_;
goto v_resetjp_2913_;
}
else
{
lean_inc(v_nonlinearOccs_2912_);
lean_inc(v_divMod_2910_);
lean_inc(v_diseqSplits_2909_);
lean_inc(v_conflict_x3f_2908_);
lean_inc(v_numReorderRequests_2907_);
lean_inc(v_penalties_2906_);
lean_inc(v_steps_2905_);
lean_inc(v_nextCnstrId_2903_);
lean_inc(v_assignment_2902_);
lean_inc(v_occurs_2901_);
lean_inc(v_elimStack_2900_);
lean_inc(v_active_2899_);
lean_inc(v_elimEqs_2898_);
lean_inc(v_diseqs_2897_);
lean_inc(v_uppers_2896_);
lean_inc(v_lowers_2895_);
lean_inc(v_dvds_2894_);
lean_inc(v_natDef_2893_);
lean_inc(v_natToIntMap_2892_);
lean_inc(v_varsHistory_2891_);
lean_inc(v_varMap_2890_);
lean_inc(v_vars_2889_);
lean_dec(v_s_2888_);
v___x_2914_ = lean_box(0);
v_isShared_2915_ = v_isSharedCheck_2920_;
goto v_resetjp_2913_;
}
v_resetjp_2913_:
{
lean_object* v___x_2916_; lean_object* v___x_2918_; 
v___x_2916_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0(v_a_2886_, v_lowers_2895_, v_v_2887_);
if (v_isShared_2915_ == 0)
{
lean_ctor_set(v___x_2914_, 6, v___x_2916_);
v___x_2918_ = v___x_2914_;
goto v_reusejp_2917_;
}
else
{
lean_object* v_reuseFailAlloc_2919_; 
v_reuseFailAlloc_2919_ = lean_alloc_ctor(0, 22, 2);
lean_ctor_set(v_reuseFailAlloc_2919_, 0, v_vars_2889_);
lean_ctor_set(v_reuseFailAlloc_2919_, 1, v_varMap_2890_);
lean_ctor_set(v_reuseFailAlloc_2919_, 2, v_varsHistory_2891_);
lean_ctor_set(v_reuseFailAlloc_2919_, 3, v_natToIntMap_2892_);
lean_ctor_set(v_reuseFailAlloc_2919_, 4, v_natDef_2893_);
lean_ctor_set(v_reuseFailAlloc_2919_, 5, v_dvds_2894_);
lean_ctor_set(v_reuseFailAlloc_2919_, 6, v___x_2916_);
lean_ctor_set(v_reuseFailAlloc_2919_, 7, v_uppers_2896_);
lean_ctor_set(v_reuseFailAlloc_2919_, 8, v_diseqs_2897_);
lean_ctor_set(v_reuseFailAlloc_2919_, 9, v_elimEqs_2898_);
lean_ctor_set(v_reuseFailAlloc_2919_, 10, v_active_2899_);
lean_ctor_set(v_reuseFailAlloc_2919_, 11, v_elimStack_2900_);
lean_ctor_set(v_reuseFailAlloc_2919_, 12, v_occurs_2901_);
lean_ctor_set(v_reuseFailAlloc_2919_, 13, v_assignment_2902_);
lean_ctor_set(v_reuseFailAlloc_2919_, 14, v_nextCnstrId_2903_);
lean_ctor_set(v_reuseFailAlloc_2919_, 15, v_steps_2905_);
lean_ctor_set(v_reuseFailAlloc_2919_, 16, v_penalties_2906_);
lean_ctor_set(v_reuseFailAlloc_2919_, 17, v_numReorderRequests_2907_);
lean_ctor_set(v_reuseFailAlloc_2919_, 18, v_conflict_x3f_2908_);
lean_ctor_set(v_reuseFailAlloc_2919_, 19, v_diseqSplits_2909_);
lean_ctor_set(v_reuseFailAlloc_2919_, 20, v_divMod_2910_);
lean_ctor_set(v_reuseFailAlloc_2919_, 21, v_nonlinearOccs_2912_);
lean_ctor_set_uint8(v_reuseFailAlloc_2919_, sizeof(void*)*22, v_caseSplits_2904_);
lean_ctor_set_uint8(v_reuseFailAlloc_2919_, sizeof(void*)*22 + 1, v_usedCommRing_2911_);
v___x_2918_ = v_reuseFailAlloc_2919_;
goto v_reusejp_2917_;
}
v_reusejp_2917_:
{
return v___x_2918_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__0___boxed(lean_object* v_a_2921_, lean_object* v_v_2922_, lean_object* v_s_2923_){
_start:
{
lean_object* v_res_2924_; 
v_res_2924_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__0(v_a_2921_, v_v_2922_, v_s_2923_);
lean_dec(v_v_2922_);
return v_res_2924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__1(lean_object* v_a_2925_, lean_object* v_v_2926_, lean_object* v_s_2927_){
_start:
{
lean_object* v_vars_2928_; lean_object* v_varMap_2929_; lean_object* v_varsHistory_2930_; lean_object* v_natToIntMap_2931_; lean_object* v_natDef_2932_; lean_object* v_dvds_2933_; lean_object* v_lowers_2934_; lean_object* v_uppers_2935_; lean_object* v_diseqs_2936_; lean_object* v_elimEqs_2937_; lean_object* v_active_2938_; lean_object* v_elimStack_2939_; lean_object* v_occurs_2940_; lean_object* v_assignment_2941_; lean_object* v_nextCnstrId_2942_; uint8_t v_caseSplits_2943_; lean_object* v_steps_2944_; lean_object* v_penalties_2945_; lean_object* v_numReorderRequests_2946_; lean_object* v_conflict_x3f_2947_; lean_object* v_diseqSplits_2948_; lean_object* v_divMod_2949_; uint8_t v_usedCommRing_2950_; lean_object* v_nonlinearOccs_2951_; lean_object* v___x_2953_; uint8_t v_isShared_2954_; uint8_t v_isSharedCheck_2959_; 
v_vars_2928_ = lean_ctor_get(v_s_2927_, 0);
v_varMap_2929_ = lean_ctor_get(v_s_2927_, 1);
v_varsHistory_2930_ = lean_ctor_get(v_s_2927_, 2);
v_natToIntMap_2931_ = lean_ctor_get(v_s_2927_, 3);
v_natDef_2932_ = lean_ctor_get(v_s_2927_, 4);
v_dvds_2933_ = lean_ctor_get(v_s_2927_, 5);
v_lowers_2934_ = lean_ctor_get(v_s_2927_, 6);
v_uppers_2935_ = lean_ctor_get(v_s_2927_, 7);
v_diseqs_2936_ = lean_ctor_get(v_s_2927_, 8);
v_elimEqs_2937_ = lean_ctor_get(v_s_2927_, 9);
v_active_2938_ = lean_ctor_get(v_s_2927_, 10);
v_elimStack_2939_ = lean_ctor_get(v_s_2927_, 11);
v_occurs_2940_ = lean_ctor_get(v_s_2927_, 12);
v_assignment_2941_ = lean_ctor_get(v_s_2927_, 13);
v_nextCnstrId_2942_ = lean_ctor_get(v_s_2927_, 14);
v_caseSplits_2943_ = lean_ctor_get_uint8(v_s_2927_, sizeof(void*)*22);
v_steps_2944_ = lean_ctor_get(v_s_2927_, 15);
v_penalties_2945_ = lean_ctor_get(v_s_2927_, 16);
v_numReorderRequests_2946_ = lean_ctor_get(v_s_2927_, 17);
v_conflict_x3f_2947_ = lean_ctor_get(v_s_2927_, 18);
v_diseqSplits_2948_ = lean_ctor_get(v_s_2927_, 19);
v_divMod_2949_ = lean_ctor_get(v_s_2927_, 20);
v_usedCommRing_2950_ = lean_ctor_get_uint8(v_s_2927_, sizeof(void*)*22 + 1);
v_nonlinearOccs_2951_ = lean_ctor_get(v_s_2927_, 21);
v_isSharedCheck_2959_ = !lean_is_exclusive(v_s_2927_);
if (v_isSharedCheck_2959_ == 0)
{
v___x_2953_ = v_s_2927_;
v_isShared_2954_ = v_isSharedCheck_2959_;
goto v_resetjp_2952_;
}
else
{
lean_inc(v_nonlinearOccs_2951_);
lean_inc(v_divMod_2949_);
lean_inc(v_diseqSplits_2948_);
lean_inc(v_conflict_x3f_2947_);
lean_inc(v_numReorderRequests_2946_);
lean_inc(v_penalties_2945_);
lean_inc(v_steps_2944_);
lean_inc(v_nextCnstrId_2942_);
lean_inc(v_assignment_2941_);
lean_inc(v_occurs_2940_);
lean_inc(v_elimStack_2939_);
lean_inc(v_active_2938_);
lean_inc(v_elimEqs_2937_);
lean_inc(v_diseqs_2936_);
lean_inc(v_uppers_2935_);
lean_inc(v_lowers_2934_);
lean_inc(v_dvds_2933_);
lean_inc(v_natDef_2932_);
lean_inc(v_natToIntMap_2931_);
lean_inc(v_varsHistory_2930_);
lean_inc(v_varMap_2929_);
lean_inc(v_vars_2928_);
lean_dec(v_s_2927_);
v___x_2953_ = lean_box(0);
v_isShared_2954_ = v_isSharedCheck_2959_;
goto v_resetjp_2952_;
}
v_resetjp_2952_:
{
lean_object* v___x_2955_; lean_object* v___x_2957_; 
v___x_2955_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0(v_a_2925_, v_uppers_2935_, v_v_2926_);
if (v_isShared_2954_ == 0)
{
lean_ctor_set(v___x_2953_, 7, v___x_2955_);
v___x_2957_ = v___x_2953_;
goto v_reusejp_2956_;
}
else
{
lean_object* v_reuseFailAlloc_2958_; 
v_reuseFailAlloc_2958_ = lean_alloc_ctor(0, 22, 2);
lean_ctor_set(v_reuseFailAlloc_2958_, 0, v_vars_2928_);
lean_ctor_set(v_reuseFailAlloc_2958_, 1, v_varMap_2929_);
lean_ctor_set(v_reuseFailAlloc_2958_, 2, v_varsHistory_2930_);
lean_ctor_set(v_reuseFailAlloc_2958_, 3, v_natToIntMap_2931_);
lean_ctor_set(v_reuseFailAlloc_2958_, 4, v_natDef_2932_);
lean_ctor_set(v_reuseFailAlloc_2958_, 5, v_dvds_2933_);
lean_ctor_set(v_reuseFailAlloc_2958_, 6, v_lowers_2934_);
lean_ctor_set(v_reuseFailAlloc_2958_, 7, v___x_2955_);
lean_ctor_set(v_reuseFailAlloc_2958_, 8, v_diseqs_2936_);
lean_ctor_set(v_reuseFailAlloc_2958_, 9, v_elimEqs_2937_);
lean_ctor_set(v_reuseFailAlloc_2958_, 10, v_active_2938_);
lean_ctor_set(v_reuseFailAlloc_2958_, 11, v_elimStack_2939_);
lean_ctor_set(v_reuseFailAlloc_2958_, 12, v_occurs_2940_);
lean_ctor_set(v_reuseFailAlloc_2958_, 13, v_assignment_2941_);
lean_ctor_set(v_reuseFailAlloc_2958_, 14, v_nextCnstrId_2942_);
lean_ctor_set(v_reuseFailAlloc_2958_, 15, v_steps_2944_);
lean_ctor_set(v_reuseFailAlloc_2958_, 16, v_penalties_2945_);
lean_ctor_set(v_reuseFailAlloc_2958_, 17, v_numReorderRequests_2946_);
lean_ctor_set(v_reuseFailAlloc_2958_, 18, v_conflict_x3f_2947_);
lean_ctor_set(v_reuseFailAlloc_2958_, 19, v_diseqSplits_2948_);
lean_ctor_set(v_reuseFailAlloc_2958_, 20, v_divMod_2949_);
lean_ctor_set(v_reuseFailAlloc_2958_, 21, v_nonlinearOccs_2951_);
lean_ctor_set_uint8(v_reuseFailAlloc_2958_, sizeof(void*)*22, v_caseSplits_2943_);
lean_ctor_set_uint8(v_reuseFailAlloc_2958_, sizeof(void*)*22 + 1, v_usedCommRing_2950_);
v___x_2957_ = v_reuseFailAlloc_2958_;
goto v_reusejp_2956_;
}
v_reusejp_2956_:
{
return v___x_2957_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__1___boxed(lean_object* v_a_2960_, lean_object* v_v_2961_, lean_object* v_s_2962_){
_start:
{
lean_object* v_res_2963_; 
v_res_2963_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__1(v_a_2960_, v_v_2961_, v_s_2962_);
lean_dec(v_v_2961_);
return v_res_2963_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__3(void){
_start:
{
lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; 
v___x_2971_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2));
v___x_2972_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__5));
v___x_2973_ = l_Lean_Name_append(v___x_2972_, v___x_2971_);
return v___x_2973_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__6(void){
_start:
{
lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; 
v___x_2980_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__5));
v___x_2981_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__5));
v___x_2982_ = l_Lean_Name_append(v___x_2981_, v___x_2980_);
return v___x_2982_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__9(void){
_start:
{
lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; 
v___x_2989_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__8));
v___x_2990_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__5));
v___x_2991_ = l_Lean_Name_append(v___x_2990_, v___x_2989_);
return v___x_2991_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__11(void){
_start:
{
lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; 
v___x_2996_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__10));
v___x_2997_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__5));
v___x_2998_ = l_Lean_Name_append(v___x_2997_, v___x_2996_);
return v___x_2998_;
}
}
LEAN_EXPORT lean_object* lean_grind_cutsat_assert_le(lean_object* v_c_2999_, lean_object* v_a_3000_, lean_object* v_a_3001_, lean_object* v_a_3002_, lean_object* v_a_3003_, lean_object* v_a_3004_, lean_object* v_a_3005_, lean_object* v_a_3006_, lean_object* v_a_3007_, lean_object* v_a_3008_, lean_object* v_a_3009_){
_start:
{
lean_object* v___y_3015_; lean_object* v___y_3016_; lean_object* v___y_3017_; lean_object* v___y_3018_; lean_object* v___y_3034_; lean_object* v___y_3035_; lean_object* v___y_3036_; lean_object* v___y_3037_; lean_object* v___y_3038_; lean_object* v___y_3039_; lean_object* v___y_3040_; lean_object* v___y_3041_; lean_object* v___y_3042_; lean_object* v___y_3043_; lean_object* v___y_3053_; lean_object* v___y_3054_; lean_object* v___y_3055_; lean_object* v___y_3056_; lean_object* v___y_3057_; lean_object* v___y_3058_; lean_object* v___y_3059_; lean_object* v___y_3060_; lean_object* v___y_3061_; lean_object* v___y_3062_; lean_object* v___y_3063_; lean_object* v___x_3075_; 
v___x_3075_ = l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___redArg(v_a_3000_, v_a_3008_);
if (lean_obj_tag(v___x_3075_) == 0)
{
lean_object* v_a_3076_; uint8_t v___x_3077_; 
v_a_3076_ = lean_ctor_get(v___x_3075_, 0);
lean_inc(v_a_3076_);
lean_dec_ref_known(v___x_3075_, 1);
v___x_3077_ = lean_unbox(v_a_3076_);
lean_dec(v_a_3076_);
if (v___x_3077_ == 0)
{
lean_object* v_toCold_3078_; lean_object* v_options_3079_; lean_object* v_inheritedTraceOptions_3080_; uint8_t v_hasTrace_3081_; lean_object* v___y_3083_; lean_object* v___y_3084_; lean_object* v___y_3085_; lean_object* v___y_3086_; lean_object* v___y_3087_; lean_object* v___y_3088_; lean_object* v___y_3089_; lean_object* v___y_3090_; lean_object* v___y_3091_; lean_object* v___y_3092_; 
v_toCold_3078_ = lean_ctor_get(v_a_3008_, 0);
v_options_3079_ = lean_ctor_get(v_toCold_3078_, 2);
v_inheritedTraceOptions_3080_ = lean_ctor_get(v_toCold_3078_, 11);
v_hasTrace_3081_ = lean_ctor_get_uint8(v_options_3079_, sizeof(void*)*1);
if (v_hasTrace_3081_ == 0)
{
v___y_3083_ = v_a_3000_;
v___y_3084_ = v_a_3001_;
v___y_3085_ = v_a_3002_;
v___y_3086_ = v_a_3003_;
v___y_3087_ = v_a_3004_;
v___y_3088_ = v_a_3005_;
v___y_3089_ = v_a_3006_;
v___y_3090_ = v_a_3007_;
v___y_3091_ = v_a_3008_;
v___y_3092_ = v_a_3009_;
goto v___jp_3082_;
}
else
{
lean_object* v___x_3197_; lean_object* v___x_3198_; uint8_t v___x_3199_; 
v___x_3197_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__10));
v___x_3198_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__11, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__11_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__11);
v___x_3199_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3080_, v_options_3079_, v___x_3198_);
if (v___x_3199_ == 0)
{
v___y_3083_ = v_a_3000_;
v___y_3084_ = v_a_3001_;
v___y_3085_ = v_a_3002_;
v___y_3086_ = v_a_3003_;
v___y_3087_ = v_a_3004_;
v___y_3088_ = v_a_3005_;
v___y_3089_ = v_a_3006_;
v___y_3090_ = v_a_3007_;
v___y_3091_ = v_a_3008_;
v___y_3092_ = v_a_3009_;
goto v___jp_3082_;
}
else
{
lean_object* v___x_3200_; 
lean_inc_ref(v_c_2999_);
v___x_3200_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_c_2999_, v_a_3000_, v_a_3008_);
if (lean_obj_tag(v___x_3200_) == 0)
{
lean_object* v_a_3201_; lean_object* v___x_3202_; 
v_a_3201_ = lean_ctor_get(v___x_3200_, 0);
lean_inc(v_a_3201_);
lean_dec_ref_known(v___x_3200_, 1);
v___x_3202_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v___x_3197_, v_a_3201_, v_a_3006_, v_a_3007_, v_a_3008_, v_a_3009_);
if (lean_obj_tag(v___x_3202_) == 0)
{
lean_dec_ref_known(v___x_3202_, 1);
v___y_3083_ = v_a_3000_;
v___y_3084_ = v_a_3001_;
v___y_3085_ = v_a_3002_;
v___y_3086_ = v_a_3003_;
v___y_3087_ = v_a_3004_;
v___y_3088_ = v_a_3005_;
v___y_3089_ = v_a_3006_;
v___y_3090_ = v_a_3007_;
v___y_3091_ = v_a_3008_;
v___y_3092_ = v_a_3009_;
goto v___jp_3082_;
}
else
{
lean_dec(v_a_3009_);
lean_dec_ref(v_a_3008_);
lean_dec(v_a_3007_);
lean_dec_ref(v_a_3006_);
lean_dec(v_a_3005_);
lean_dec_ref(v_a_3004_);
lean_dec(v_a_3003_);
lean_dec_ref(v_a_3002_);
lean_dec(v_a_3001_);
lean_dec(v_a_3000_);
lean_dec_ref(v_c_2999_);
return v___x_3202_;
}
}
else
{
lean_object* v_a_3203_; lean_object* v___x_3205_; uint8_t v_isShared_3206_; uint8_t v_isSharedCheck_3210_; 
lean_dec(v_a_3009_);
lean_dec_ref(v_a_3008_);
lean_dec(v_a_3007_);
lean_dec_ref(v_a_3006_);
lean_dec(v_a_3005_);
lean_dec_ref(v_a_3004_);
lean_dec(v_a_3003_);
lean_dec_ref(v_a_3002_);
lean_dec(v_a_3001_);
lean_dec(v_a_3000_);
lean_dec_ref(v_c_2999_);
v_a_3203_ = lean_ctor_get(v___x_3200_, 0);
v_isSharedCheck_3210_ = !lean_is_exclusive(v___x_3200_);
if (v_isSharedCheck_3210_ == 0)
{
v___x_3205_ = v___x_3200_;
v_isShared_3206_ = v_isSharedCheck_3210_;
goto v_resetjp_3204_;
}
else
{
lean_inc(v_a_3203_);
lean_dec(v___x_3200_);
v___x_3205_ = lean_box(0);
v_isShared_3206_ = v_isSharedCheck_3210_;
goto v_resetjp_3204_;
}
v_resetjp_3204_:
{
lean_object* v___x_3208_; 
if (v_isShared_3206_ == 0)
{
v___x_3208_ = v___x_3205_;
goto v_reusejp_3207_;
}
else
{
lean_object* v_reuseFailAlloc_3209_; 
v_reuseFailAlloc_3209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3209_, 0, v_a_3203_);
v___x_3208_ = v_reuseFailAlloc_3209_;
goto v_reusejp_3207_;
}
v_reusejp_3207_:
{
return v___x_3208_;
}
}
}
}
}
v___jp_3082_:
{
lean_object* v___x_3093_; lean_object* v___x_3094_; 
v___x_3093_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_norm(v_c_2999_);
lean_inc_ref(v___y_3091_);
v___x_3094_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts(v___x_3093_, v___y_3083_, v___y_3084_, v___y_3085_, v___y_3086_, v___y_3087_, v___y_3088_, v___y_3089_, v___y_3090_, v___y_3091_, v___y_3092_);
if (lean_obj_tag(v___x_3094_) == 0)
{
lean_object* v_a_3095_; lean_object* v_p_3096_; uint8_t v___x_3097_; 
v_a_3095_ = lean_ctor_get(v___x_3094_, 0);
lean_inc(v_a_3095_);
lean_dec_ref_known(v___x_3094_, 1);
v_p_3096_ = lean_ctor_get(v_a_3095_, 0);
v___x_3097_ = l_Int_Internal_Linear_Poly_isUnsatLe(v_p_3096_);
if (v___x_3097_ == 0)
{
uint8_t v___x_3098_; 
v___x_3098_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isTrivial(v_a_3095_);
if (v___x_3098_ == 0)
{
if (lean_obj_tag(v_p_3096_) == 1)
{
lean_object* v_k_3099_; lean_object* v_v_3100_; lean_object* v___x_3101_; 
v_k_3099_ = lean_ctor_get(v_p_3096_, 0);
lean_inc(v_k_3099_);
v_v_3100_ = lean_ctor_get(v_p_3096_, 1);
lean_inc(v_v_3100_);
lean_inc(v_a_3095_);
v___x_3101_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq(v_a_3095_, v___y_3083_, v___y_3084_, v___y_3085_, v___y_3086_, v___y_3087_, v___y_3088_, v___y_3089_, v___y_3090_, v___y_3091_, v___y_3092_);
if (lean_obj_tag(v___x_3101_) == 0)
{
lean_object* v_a_3102_; uint8_t v___x_3103_; 
v_a_3102_ = lean_ctor_get(v___x_3101_, 0);
lean_inc(v_a_3102_);
lean_dec_ref_known(v___x_3101_, 1);
v___x_3103_ = lean_unbox(v_a_3102_);
lean_dec(v_a_3102_);
if (v___x_3103_ == 0)
{
lean_object* v___x_3104_; 
v___x_3104_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq(v_a_3095_, v___y_3083_, v___y_3084_, v___y_3085_, v___y_3086_, v___y_3087_, v___y_3088_, v___y_3089_, v___y_3090_, v___y_3091_, v___y_3092_);
lean_dec(v___y_3088_);
lean_dec_ref(v___y_3087_);
lean_dec(v___y_3086_);
lean_dec_ref(v___y_3085_);
lean_dec(v___y_3084_);
if (lean_obj_tag(v___x_3104_) == 0)
{
lean_object* v_a_3105_; lean_object* v___x_3106_; 
v_a_3105_ = lean_ctor_get(v___x_3104_, 0);
lean_inc(v_a_3105_);
lean_dec_ref_known(v___x_3104_, 1);
v___x_3106_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_markStored___redArg(v_a_3105_, v___y_3083_);
if (lean_obj_tag(v___x_3106_) == 0)
{
lean_object* v_toCold_3107_; lean_object* v_options_3108_; lean_object* v_a_3109_; lean_object* v_inheritedTraceOptions_3110_; uint8_t v_hasTrace_3111_; lean_object* v___f_3112_; lean_object* v___f_3113_; 
v_toCold_3107_ = lean_ctor_get(v___y_3091_, 0);
v_options_3108_ = lean_ctor_get(v_toCold_3107_, 2);
v_a_3109_ = lean_ctor_get(v___x_3106_, 0);
lean_inc_n(v_a_3109_, 3);
lean_dec_ref_known(v___x_3106_, 1);
v_inheritedTraceOptions_3110_ = lean_ctor_get(v_toCold_3107_, 11);
v_hasTrace_3111_ = lean_ctor_get_uint8(v_options_3108_, sizeof(void*)*1);
lean_inc_n(v_v_3100_, 2);
v___f_3112_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3112_, 0, v_a_3109_);
lean_closure_set(v___f_3112_, 1, v_v_3100_);
v___f_3113_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__1___boxed), 3, 2);
lean_closure_set(v___f_3113_, 0, v_a_3109_);
lean_closure_set(v___f_3113_, 1, v_v_3100_);
if (v_hasTrace_3111_ == 0)
{
v___y_3034_ = v_k_3099_;
v___y_3035_ = v_a_3109_;
v___y_3036_ = v___f_3112_;
v___y_3037_ = v___f_3113_;
v___y_3038_ = v_v_3100_;
v___y_3039_ = v___y_3083_;
v___y_3040_ = v___y_3089_;
v___y_3041_ = v___y_3090_;
v___y_3042_ = v___y_3091_;
v___y_3043_ = v___y_3092_;
goto v___jp_3033_;
}
else
{
lean_object* v___x_3114_; lean_object* v___x_3115_; uint8_t v___x_3116_; 
v___x_3114_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2));
v___x_3115_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__3, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__3_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__3);
v___x_3116_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3110_, v_options_3108_, v___x_3115_);
if (v___x_3116_ == 0)
{
v___y_3034_ = v_k_3099_;
v___y_3035_ = v_a_3109_;
v___y_3036_ = v___f_3112_;
v___y_3037_ = v___f_3113_;
v___y_3038_ = v_v_3100_;
v___y_3039_ = v___y_3083_;
v___y_3040_ = v___y_3089_;
v___y_3041_ = v___y_3090_;
v___y_3042_ = v___y_3091_;
v___y_3043_ = v___y_3092_;
goto v___jp_3033_;
}
else
{
lean_object* v___x_3117_; 
lean_inc(v_a_3109_);
v___x_3117_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_a_3109_, v___y_3083_, v___y_3091_);
if (lean_obj_tag(v___x_3117_) == 0)
{
lean_object* v_a_3118_; lean_object* v___x_3119_; 
v_a_3118_ = lean_ctor_get(v___x_3117_, 0);
lean_inc(v_a_3118_);
lean_dec_ref_known(v___x_3117_, 1);
v___x_3119_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v___x_3114_, v_a_3118_, v___y_3089_, v___y_3090_, v___y_3091_, v___y_3092_);
if (lean_obj_tag(v___x_3119_) == 0)
{
lean_dec_ref_known(v___x_3119_, 1);
v___y_3034_ = v_k_3099_;
v___y_3035_ = v_a_3109_;
v___y_3036_ = v___f_3112_;
v___y_3037_ = v___f_3113_;
v___y_3038_ = v_v_3100_;
v___y_3039_ = v___y_3083_;
v___y_3040_ = v___y_3089_;
v___y_3041_ = v___y_3090_;
v___y_3042_ = v___y_3091_;
v___y_3043_ = v___y_3092_;
goto v___jp_3033_;
}
else
{
lean_dec_ref(v___f_3113_);
lean_dec_ref(v___f_3112_);
lean_dec(v_a_3109_);
lean_dec(v_v_3100_);
lean_dec(v_k_3099_);
lean_dec(v___y_3092_);
lean_dec_ref(v___y_3091_);
lean_dec(v___y_3090_);
lean_dec_ref(v___y_3089_);
lean_dec(v___y_3083_);
return v___x_3119_;
}
}
else
{
lean_object* v_a_3120_; lean_object* v___x_3122_; uint8_t v_isShared_3123_; uint8_t v_isSharedCheck_3127_; 
lean_dec_ref(v___f_3113_);
lean_dec_ref(v___f_3112_);
lean_dec(v_a_3109_);
lean_dec(v_v_3100_);
lean_dec(v_k_3099_);
lean_dec(v___y_3092_);
lean_dec_ref(v___y_3091_);
lean_dec(v___y_3090_);
lean_dec_ref(v___y_3089_);
lean_dec(v___y_3083_);
v_a_3120_ = lean_ctor_get(v___x_3117_, 0);
v_isSharedCheck_3127_ = !lean_is_exclusive(v___x_3117_);
if (v_isSharedCheck_3127_ == 0)
{
v___x_3122_ = v___x_3117_;
v_isShared_3123_ = v_isSharedCheck_3127_;
goto v_resetjp_3121_;
}
else
{
lean_inc(v_a_3120_);
lean_dec(v___x_3117_);
v___x_3122_ = lean_box(0);
v_isShared_3123_ = v_isSharedCheck_3127_;
goto v_resetjp_3121_;
}
v_resetjp_3121_:
{
lean_object* v___x_3125_; 
if (v_isShared_3123_ == 0)
{
v___x_3125_ = v___x_3122_;
goto v_reusejp_3124_;
}
else
{
lean_object* v_reuseFailAlloc_3126_; 
v_reuseFailAlloc_3126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3126_, 0, v_a_3120_);
v___x_3125_ = v_reuseFailAlloc_3126_;
goto v_reusejp_3124_;
}
v_reusejp_3124_:
{
return v___x_3125_;
}
}
}
}
}
}
else
{
lean_object* v_a_3128_; lean_object* v___x_3130_; uint8_t v_isShared_3131_; uint8_t v_isSharedCheck_3135_; 
lean_dec(v_v_3100_);
lean_dec(v_k_3099_);
lean_dec(v___y_3092_);
lean_dec_ref(v___y_3091_);
lean_dec(v___y_3090_);
lean_dec_ref(v___y_3089_);
lean_dec(v___y_3083_);
v_a_3128_ = lean_ctor_get(v___x_3106_, 0);
v_isSharedCheck_3135_ = !lean_is_exclusive(v___x_3106_);
if (v_isSharedCheck_3135_ == 0)
{
v___x_3130_ = v___x_3106_;
v_isShared_3131_ = v_isSharedCheck_3135_;
goto v_resetjp_3129_;
}
else
{
lean_inc(v_a_3128_);
lean_dec(v___x_3106_);
v___x_3130_ = lean_box(0);
v_isShared_3131_ = v_isSharedCheck_3135_;
goto v_resetjp_3129_;
}
v_resetjp_3129_:
{
lean_object* v___x_3133_; 
if (v_isShared_3131_ == 0)
{
v___x_3133_ = v___x_3130_;
goto v_reusejp_3132_;
}
else
{
lean_object* v_reuseFailAlloc_3134_; 
v_reuseFailAlloc_3134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3134_, 0, v_a_3128_);
v___x_3133_ = v_reuseFailAlloc_3134_;
goto v_reusejp_3132_;
}
v_reusejp_3132_:
{
return v___x_3133_;
}
}
}
}
else
{
lean_object* v_a_3136_; lean_object* v___x_3138_; uint8_t v_isShared_3139_; uint8_t v_isSharedCheck_3143_; 
lean_dec(v_v_3100_);
lean_dec(v_k_3099_);
lean_dec(v___y_3092_);
lean_dec_ref(v___y_3091_);
lean_dec(v___y_3090_);
lean_dec_ref(v___y_3089_);
lean_dec(v___y_3083_);
v_a_3136_ = lean_ctor_get(v___x_3104_, 0);
v_isSharedCheck_3143_ = !lean_is_exclusive(v___x_3104_);
if (v_isSharedCheck_3143_ == 0)
{
v___x_3138_ = v___x_3104_;
v_isShared_3139_ = v_isSharedCheck_3143_;
goto v_resetjp_3137_;
}
else
{
lean_inc(v_a_3136_);
lean_dec(v___x_3104_);
v___x_3138_ = lean_box(0);
v_isShared_3139_ = v_isSharedCheck_3143_;
goto v_resetjp_3137_;
}
v_resetjp_3137_:
{
lean_object* v___x_3141_; 
if (v_isShared_3139_ == 0)
{
v___x_3141_ = v___x_3138_;
goto v_reusejp_3140_;
}
else
{
lean_object* v_reuseFailAlloc_3142_; 
v_reuseFailAlloc_3142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3142_, 0, v_a_3136_);
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
lean_dec(v_v_3100_);
lean_dec(v_k_3099_);
lean_dec(v_a_3095_);
lean_dec(v___y_3092_);
lean_dec_ref(v___y_3091_);
lean_dec(v___y_3090_);
lean_dec_ref(v___y_3089_);
lean_dec(v___y_3088_);
lean_dec_ref(v___y_3087_);
lean_dec(v___y_3086_);
lean_dec_ref(v___y_3085_);
lean_dec(v___y_3084_);
lean_dec(v___y_3083_);
goto v___jp_3011_;
}
}
else
{
lean_object* v_a_3144_; lean_object* v___x_3146_; uint8_t v_isShared_3147_; uint8_t v_isSharedCheck_3151_; 
lean_dec(v_v_3100_);
lean_dec(v_k_3099_);
lean_dec(v_a_3095_);
lean_dec(v___y_3092_);
lean_dec_ref(v___y_3091_);
lean_dec(v___y_3090_);
lean_dec_ref(v___y_3089_);
lean_dec(v___y_3088_);
lean_dec_ref(v___y_3087_);
lean_dec(v___y_3086_);
lean_dec_ref(v___y_3085_);
lean_dec(v___y_3084_);
lean_dec(v___y_3083_);
v_a_3144_ = lean_ctor_get(v___x_3101_, 0);
v_isSharedCheck_3151_ = !lean_is_exclusive(v___x_3101_);
if (v_isSharedCheck_3151_ == 0)
{
v___x_3146_ = v___x_3101_;
v_isShared_3147_ = v_isSharedCheck_3151_;
goto v_resetjp_3145_;
}
else
{
lean_inc(v_a_3144_);
lean_dec(v___x_3101_);
v___x_3146_ = lean_box(0);
v_isShared_3147_ = v_isSharedCheck_3151_;
goto v_resetjp_3145_;
}
v_resetjp_3145_:
{
lean_object* v___x_3149_; 
if (v_isShared_3147_ == 0)
{
v___x_3149_ = v___x_3146_;
goto v_reusejp_3148_;
}
else
{
lean_object* v_reuseFailAlloc_3150_; 
v_reuseFailAlloc_3150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3150_, 0, v_a_3144_);
v___x_3149_ = v_reuseFailAlloc_3150_;
goto v_reusejp_3148_;
}
v_reusejp_3148_:
{
return v___x_3149_;
}
}
}
}
else
{
lean_object* v___x_3152_; 
lean_dec(v___y_3088_);
lean_dec_ref(v___y_3087_);
lean_dec(v___y_3086_);
lean_dec_ref(v___y_3085_);
lean_dec(v___y_3084_);
v___x_3152_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___redArg(v_a_3095_, v___y_3083_, v___y_3089_, v___y_3090_, v___y_3091_, v___y_3092_);
lean_dec(v___y_3092_);
lean_dec_ref(v___y_3091_);
lean_dec(v___y_3090_);
lean_dec_ref(v___y_3089_);
lean_dec(v___y_3083_);
return v___x_3152_;
}
}
else
{
lean_object* v_toCold_3153_; lean_object* v_options_3154_; uint8_t v_hasTrace_3155_; 
lean_dec(v___y_3088_);
lean_dec_ref(v___y_3087_);
lean_dec(v___y_3086_);
lean_dec_ref(v___y_3085_);
lean_dec(v___y_3084_);
v_toCold_3153_ = lean_ctor_get(v___y_3091_, 0);
v_options_3154_ = lean_ctor_get(v_toCold_3153_, 2);
v_hasTrace_3155_ = lean_ctor_get_uint8(v_options_3154_, sizeof(void*)*1);
if (v_hasTrace_3155_ == 0)
{
lean_dec(v_a_3095_);
lean_dec(v___y_3092_);
lean_dec_ref(v___y_3091_);
lean_dec(v___y_3090_);
lean_dec_ref(v___y_3089_);
lean_dec(v___y_3083_);
goto v___jp_3011_;
}
else
{
lean_object* v_inheritedTraceOptions_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; uint8_t v___x_3159_; 
v_inheritedTraceOptions_3156_ = lean_ctor_get(v_toCold_3153_, 11);
v___x_3157_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__5));
v___x_3158_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__6, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__6_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__6);
v___x_3159_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3156_, v_options_3154_, v___x_3158_);
if (v___x_3159_ == 0)
{
lean_dec(v_a_3095_);
lean_dec(v___y_3092_);
lean_dec_ref(v___y_3091_);
lean_dec(v___y_3090_);
lean_dec_ref(v___y_3089_);
lean_dec(v___y_3083_);
goto v___jp_3011_;
}
else
{
lean_object* v___x_3160_; 
v___x_3160_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_a_3095_, v___y_3083_, v___y_3091_);
lean_dec(v___y_3083_);
if (lean_obj_tag(v___x_3160_) == 0)
{
lean_object* v_a_3161_; lean_object* v___x_3162_; 
v_a_3161_ = lean_ctor_get(v___x_3160_, 0);
lean_inc(v_a_3161_);
lean_dec_ref_known(v___x_3160_, 1);
v___x_3162_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v___x_3157_, v_a_3161_, v___y_3089_, v___y_3090_, v___y_3091_, v___y_3092_);
lean_dec(v___y_3092_);
lean_dec_ref(v___y_3091_);
lean_dec(v___y_3090_);
lean_dec_ref(v___y_3089_);
if (lean_obj_tag(v___x_3162_) == 0)
{
lean_dec_ref_known(v___x_3162_, 1);
goto v___jp_3011_;
}
else
{
return v___x_3162_;
}
}
else
{
lean_object* v_a_3163_; lean_object* v___x_3165_; uint8_t v_isShared_3166_; uint8_t v_isSharedCheck_3170_; 
lean_dec(v___y_3092_);
lean_dec_ref(v___y_3091_);
lean_dec(v___y_3090_);
lean_dec_ref(v___y_3089_);
v_a_3163_ = lean_ctor_get(v___x_3160_, 0);
v_isSharedCheck_3170_ = !lean_is_exclusive(v___x_3160_);
if (v_isSharedCheck_3170_ == 0)
{
v___x_3165_ = v___x_3160_;
v_isShared_3166_ = v_isSharedCheck_3170_;
goto v_resetjp_3164_;
}
else
{
lean_inc(v_a_3163_);
lean_dec(v___x_3160_);
v___x_3165_ = lean_box(0);
v_isShared_3166_ = v_isSharedCheck_3170_;
goto v_resetjp_3164_;
}
v_resetjp_3164_:
{
lean_object* v___x_3168_; 
if (v_isShared_3166_ == 0)
{
v___x_3168_ = v___x_3165_;
goto v_reusejp_3167_;
}
else
{
lean_object* v_reuseFailAlloc_3169_; 
v_reuseFailAlloc_3169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3169_, 0, v_a_3163_);
v___x_3168_ = v_reuseFailAlloc_3169_;
goto v_reusejp_3167_;
}
v_reusejp_3167_:
{
return v___x_3168_;
}
}
}
}
}
}
}
else
{
lean_object* v_toCold_3171_; lean_object* v_options_3172_; uint8_t v_hasTrace_3173_; 
v_toCold_3171_ = lean_ctor_get(v___y_3091_, 0);
v_options_3172_ = lean_ctor_get(v_toCold_3171_, 2);
v_hasTrace_3173_ = lean_ctor_get_uint8(v_options_3172_, sizeof(void*)*1);
if (v_hasTrace_3173_ == 0)
{
v___y_3053_ = v_a_3095_;
v___y_3054_ = v___y_3083_;
v___y_3055_ = v___y_3084_;
v___y_3056_ = v___y_3085_;
v___y_3057_ = v___y_3086_;
v___y_3058_ = v___y_3087_;
v___y_3059_ = v___y_3088_;
v___y_3060_ = v___y_3089_;
v___y_3061_ = v___y_3090_;
v___y_3062_ = v___y_3091_;
v___y_3063_ = v___y_3092_;
goto v___jp_3052_;
}
else
{
lean_object* v_inheritedTraceOptions_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; uint8_t v___x_3177_; 
v_inheritedTraceOptions_3174_ = lean_ctor_get(v_toCold_3171_, 11);
v___x_3175_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__8));
v___x_3176_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__9, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__9_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__9);
v___x_3177_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3174_, v_options_3172_, v___x_3176_);
if (v___x_3177_ == 0)
{
v___y_3053_ = v_a_3095_;
v___y_3054_ = v___y_3083_;
v___y_3055_ = v___y_3084_;
v___y_3056_ = v___y_3085_;
v___y_3057_ = v___y_3086_;
v___y_3058_ = v___y_3087_;
v___y_3059_ = v___y_3088_;
v___y_3060_ = v___y_3089_;
v___y_3061_ = v___y_3090_;
v___y_3062_ = v___y_3091_;
v___y_3063_ = v___y_3092_;
goto v___jp_3052_;
}
else
{
lean_object* v___x_3178_; 
lean_inc(v_a_3095_);
v___x_3178_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_a_3095_, v___y_3083_, v___y_3091_);
if (lean_obj_tag(v___x_3178_) == 0)
{
lean_object* v_a_3179_; lean_object* v___x_3180_; 
v_a_3179_ = lean_ctor_get(v___x_3178_, 0);
lean_inc(v_a_3179_);
lean_dec_ref_known(v___x_3178_, 1);
v___x_3180_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v___x_3175_, v_a_3179_, v___y_3089_, v___y_3090_, v___y_3091_, v___y_3092_);
if (lean_obj_tag(v___x_3180_) == 0)
{
lean_dec_ref_known(v___x_3180_, 1);
v___y_3053_ = v_a_3095_;
v___y_3054_ = v___y_3083_;
v___y_3055_ = v___y_3084_;
v___y_3056_ = v___y_3085_;
v___y_3057_ = v___y_3086_;
v___y_3058_ = v___y_3087_;
v___y_3059_ = v___y_3088_;
v___y_3060_ = v___y_3089_;
v___y_3061_ = v___y_3090_;
v___y_3062_ = v___y_3091_;
v___y_3063_ = v___y_3092_;
goto v___jp_3052_;
}
else
{
lean_dec(v_a_3095_);
lean_dec(v___y_3092_);
lean_dec_ref(v___y_3091_);
lean_dec(v___y_3090_);
lean_dec_ref(v___y_3089_);
lean_dec(v___y_3088_);
lean_dec_ref(v___y_3087_);
lean_dec(v___y_3086_);
lean_dec_ref(v___y_3085_);
lean_dec(v___y_3084_);
lean_dec(v___y_3083_);
return v___x_3180_;
}
}
else
{
lean_object* v_a_3181_; lean_object* v___x_3183_; uint8_t v_isShared_3184_; uint8_t v_isSharedCheck_3188_; 
lean_dec(v_a_3095_);
lean_dec(v___y_3092_);
lean_dec_ref(v___y_3091_);
lean_dec(v___y_3090_);
lean_dec_ref(v___y_3089_);
lean_dec(v___y_3088_);
lean_dec_ref(v___y_3087_);
lean_dec(v___y_3086_);
lean_dec_ref(v___y_3085_);
lean_dec(v___y_3084_);
lean_dec(v___y_3083_);
v_a_3181_ = lean_ctor_get(v___x_3178_, 0);
v_isSharedCheck_3188_ = !lean_is_exclusive(v___x_3178_);
if (v_isSharedCheck_3188_ == 0)
{
v___x_3183_ = v___x_3178_;
v_isShared_3184_ = v_isSharedCheck_3188_;
goto v_resetjp_3182_;
}
else
{
lean_inc(v_a_3181_);
lean_dec(v___x_3178_);
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
}
}
}
else
{
lean_object* v_a_3189_; lean_object* v___x_3191_; uint8_t v_isShared_3192_; uint8_t v_isSharedCheck_3196_; 
lean_dec(v___y_3092_);
lean_dec_ref(v___y_3091_);
lean_dec(v___y_3090_);
lean_dec_ref(v___y_3089_);
lean_dec(v___y_3088_);
lean_dec_ref(v___y_3087_);
lean_dec(v___y_3086_);
lean_dec_ref(v___y_3085_);
lean_dec(v___y_3084_);
lean_dec(v___y_3083_);
v_a_3189_ = lean_ctor_get(v___x_3094_, 0);
v_isSharedCheck_3196_ = !lean_is_exclusive(v___x_3094_);
if (v_isSharedCheck_3196_ == 0)
{
v___x_3191_ = v___x_3094_;
v_isShared_3192_ = v_isSharedCheck_3196_;
goto v_resetjp_3190_;
}
else
{
lean_inc(v_a_3189_);
lean_dec(v___x_3094_);
v___x_3191_ = lean_box(0);
v_isShared_3192_ = v_isSharedCheck_3196_;
goto v_resetjp_3190_;
}
v_resetjp_3190_:
{
lean_object* v___x_3194_; 
if (v_isShared_3192_ == 0)
{
v___x_3194_ = v___x_3191_;
goto v_reusejp_3193_;
}
else
{
lean_object* v_reuseFailAlloc_3195_; 
v_reuseFailAlloc_3195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3195_, 0, v_a_3189_);
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
}
else
{
lean_dec(v_a_3009_);
lean_dec_ref(v_a_3008_);
lean_dec(v_a_3007_);
lean_dec_ref(v_a_3006_);
lean_dec(v_a_3005_);
lean_dec_ref(v_a_3004_);
lean_dec(v_a_3003_);
lean_dec_ref(v_a_3002_);
lean_dec(v_a_3001_);
lean_dec(v_a_3000_);
lean_dec_ref(v_c_2999_);
goto v___jp_3011_;
}
}
else
{
lean_object* v_a_3211_; lean_object* v___x_3213_; uint8_t v_isShared_3214_; uint8_t v_isSharedCheck_3218_; 
lean_dec(v_a_3009_);
lean_dec_ref(v_a_3008_);
lean_dec(v_a_3007_);
lean_dec_ref(v_a_3006_);
lean_dec(v_a_3005_);
lean_dec_ref(v_a_3004_);
lean_dec(v_a_3003_);
lean_dec_ref(v_a_3002_);
lean_dec(v_a_3001_);
lean_dec(v_a_3000_);
lean_dec_ref(v_c_2999_);
v_a_3211_ = lean_ctor_get(v___x_3075_, 0);
v_isSharedCheck_3218_ = !lean_is_exclusive(v___x_3075_);
if (v_isSharedCheck_3218_ == 0)
{
v___x_3213_ = v___x_3075_;
v_isShared_3214_ = v_isSharedCheck_3218_;
goto v_resetjp_3212_;
}
else
{
lean_inc(v_a_3211_);
lean_dec(v___x_3075_);
v___x_3213_ = lean_box(0);
v_isShared_3214_ = v_isSharedCheck_3218_;
goto v_resetjp_3212_;
}
v_resetjp_3212_:
{
lean_object* v___x_3216_; 
if (v_isShared_3214_ == 0)
{
v___x_3216_ = v___x_3213_;
goto v_reusejp_3215_;
}
else
{
lean_object* v_reuseFailAlloc_3217_; 
v_reuseFailAlloc_3217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3217_, 0, v_a_3211_);
v___x_3216_ = v_reuseFailAlloc_3217_;
goto v_reusejp_3215_;
}
v_reusejp_3215_:
{
return v___x_3216_;
}
}
}
v___jp_3011_:
{
lean_object* v___x_3012_; lean_object* v___x_3013_; 
v___x_3012_ = lean_box(0);
v___x_3013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3013_, 0, v___x_3012_);
return v___x_3013_;
}
v___jp_3014_:
{
lean_object* v___x_3019_; 
v___x_3019_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied___redArg(v___y_3015_, v___y_3017_, v___y_3018_);
lean_dec_ref(v___y_3018_);
if (lean_obj_tag(v___x_3019_) == 0)
{
lean_object* v_a_3020_; uint8_t v___x_3021_; uint8_t v___x_3022_; uint8_t v___x_3023_; 
v_a_3020_ = lean_ctor_get(v___x_3019_, 0);
lean_inc(v_a_3020_);
lean_dec_ref_known(v___x_3019_, 1);
v___x_3021_ = 0;
v___x_3022_ = lean_unbox(v_a_3020_);
lean_dec(v_a_3020_);
v___x_3023_ = l_Lean_instBEqLBool_beq(v___x_3022_, v___x_3021_);
if (v___x_3023_ == 0)
{
lean_dec(v___y_3017_);
lean_dec(v___y_3016_);
goto v___jp_3011_;
}
else
{
lean_object* v___x_3024_; 
v___x_3024_ = l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg(v___y_3016_, v___y_3017_);
lean_dec(v___y_3017_);
return v___x_3024_;
}
}
else
{
lean_object* v_a_3025_; lean_object* v___x_3027_; uint8_t v_isShared_3028_; uint8_t v_isSharedCheck_3032_; 
lean_dec(v___y_3017_);
lean_dec(v___y_3016_);
v_a_3025_ = lean_ctor_get(v___x_3019_, 0);
v_isSharedCheck_3032_ = !lean_is_exclusive(v___x_3019_);
if (v_isSharedCheck_3032_ == 0)
{
v___x_3027_ = v___x_3019_;
v_isShared_3028_ = v_isSharedCheck_3032_;
goto v_resetjp_3026_;
}
else
{
lean_inc(v_a_3025_);
lean_dec(v___x_3019_);
v___x_3027_ = lean_box(0);
v_isShared_3028_ = v_isSharedCheck_3032_;
goto v_resetjp_3026_;
}
v_resetjp_3026_:
{
lean_object* v___x_3030_; 
if (v_isShared_3028_ == 0)
{
v___x_3030_ = v___x_3027_;
goto v_reusejp_3029_;
}
else
{
lean_object* v_reuseFailAlloc_3031_; 
v_reuseFailAlloc_3031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3031_, 0, v_a_3025_);
v___x_3030_ = v_reuseFailAlloc_3031_;
goto v_reusejp_3029_;
}
v_reusejp_3029_:
{
return v___x_3030_;
}
}
}
}
v___jp_3033_:
{
lean_object* v_p_3044_; lean_object* v___x_3045_; 
v_p_3044_ = lean_ctor_get(v___y_3035_, 0);
lean_inc_ref(v_p_3044_);
v___x_3045_ = l_Int_Internal_Linear_Poly_updateOccs___redArg(v_p_3044_, v___y_3039_, v___y_3040_, v___y_3041_, v___y_3042_, v___y_3043_);
lean_dec(v___y_3043_);
lean_dec(v___y_3041_);
lean_dec_ref(v___y_3040_);
if (lean_obj_tag(v___x_3045_) == 0)
{
lean_object* v___x_3046_; uint8_t v___x_3047_; 
lean_dec_ref_known(v___x_3045_, 1);
v___x_3046_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9);
v___x_3047_ = lean_int_dec_lt(v___y_3034_, v___x_3046_);
lean_dec(v___y_3034_);
if (v___x_3047_ == 0)
{
lean_object* v___x_3048_; lean_object* v___x_3049_; 
lean_dec_ref(v___y_3036_);
v___x_3048_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_3049_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_3048_, v___y_3037_, v___y_3039_);
if (lean_obj_tag(v___x_3049_) == 0)
{
lean_dec_ref_known(v___x_3049_, 1);
v___y_3015_ = v___y_3035_;
v___y_3016_ = v___y_3038_;
v___y_3017_ = v___y_3039_;
v___y_3018_ = v___y_3042_;
goto v___jp_3014_;
}
else
{
lean_dec_ref(v___y_3042_);
lean_dec(v___y_3039_);
lean_dec(v___y_3038_);
lean_dec_ref(v___y_3035_);
return v___x_3049_;
}
}
else
{
lean_object* v___x_3050_; lean_object* v___x_3051_; 
lean_dec_ref(v___y_3037_);
v___x_3050_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_3051_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_3050_, v___y_3036_, v___y_3039_);
if (lean_obj_tag(v___x_3051_) == 0)
{
lean_dec_ref_known(v___x_3051_, 1);
v___y_3015_ = v___y_3035_;
v___y_3016_ = v___y_3038_;
v___y_3017_ = v___y_3039_;
v___y_3018_ = v___y_3042_;
goto v___jp_3014_;
}
else
{
lean_dec_ref(v___y_3042_);
lean_dec(v___y_3039_);
lean_dec(v___y_3038_);
lean_dec_ref(v___y_3035_);
return v___x_3051_;
}
}
}
else
{
lean_dec_ref(v___y_3042_);
lean_dec(v___y_3039_);
lean_dec(v___y_3038_);
lean_dec_ref(v___y_3037_);
lean_dec_ref(v___y_3036_);
lean_dec_ref(v___y_3035_);
lean_dec(v___y_3034_);
return v___x_3045_;
}
}
v___jp_3052_:
{
lean_object* v___x_3064_; lean_object* v___x_3065_; 
v___x_3064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3064_, 0, v___y_3053_);
v___x_3065_ = l_Lean_Meta_Grind_Arith_Cutsat_setInconsistent(v___x_3064_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_, v___y_3059_, v___y_3060_, v___y_3061_, v___y_3062_, v___y_3063_);
lean_dec(v___y_3063_);
lean_dec_ref(v___y_3062_);
lean_dec(v___y_3061_);
lean_dec_ref(v___y_3060_);
lean_dec(v___y_3059_);
lean_dec_ref(v___y_3058_);
lean_dec(v___y_3057_);
lean_dec_ref(v___y_3056_);
lean_dec(v___y_3055_);
lean_dec(v___y_3054_);
if (lean_obj_tag(v___x_3065_) == 0)
{
lean_object* v___x_3067_; uint8_t v_isShared_3068_; uint8_t v_isSharedCheck_3073_; 
v_isSharedCheck_3073_ = !lean_is_exclusive(v___x_3065_);
if (v_isSharedCheck_3073_ == 0)
{
lean_object* v_unused_3074_; 
v_unused_3074_ = lean_ctor_get(v___x_3065_, 0);
lean_dec(v_unused_3074_);
v___x_3067_ = v___x_3065_;
v_isShared_3068_ = v_isSharedCheck_3073_;
goto v_resetjp_3066_;
}
else
{
lean_dec(v___x_3065_);
v___x_3067_ = lean_box(0);
v_isShared_3068_ = v_isSharedCheck_3073_;
goto v_resetjp_3066_;
}
v_resetjp_3066_:
{
lean_object* v___x_3069_; lean_object* v___x_3071_; 
v___x_3069_ = lean_box(0);
if (v_isShared_3068_ == 0)
{
lean_ctor_set(v___x_3067_, 0, v___x_3069_);
v___x_3071_ = v___x_3067_;
goto v_reusejp_3070_;
}
else
{
lean_object* v_reuseFailAlloc_3072_; 
v_reuseFailAlloc_3072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3072_, 0, v___x_3069_);
v___x_3071_ = v_reuseFailAlloc_3072_;
goto v_reusejp_3070_;
}
v_reusejp_3070_:
{
return v___x_3071_;
}
}
}
else
{
return v___x_3065_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___boxed(lean_object* v_c_3219_, lean_object* v_a_3220_, lean_object* v_a_3221_, lean_object* v_a_3222_, lean_object* v_a_3223_, lean_object* v_a_3224_, lean_object* v_a_3225_, lean_object* v_a_3226_, lean_object* v_a_3227_, lean_object* v_a_3228_, lean_object* v_a_3229_, lean_object* v_a_3230_){
_start:
{
lean_object* v_res_3231_; 
v_res_3231_ = lean_grind_cutsat_assert_le(v_c_3219_, v_a_3220_, v_a_3221_, v_a_3222_, v_a_3223_, v_a_3224_, v_a_3225_, v_a_3226_, v_a_3227_, v_a_3228_, v_a_3229_);
return v_res_3231_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertCore(lean_object* v_c_3232_, lean_object* v_a_3233_, lean_object* v_a_3234_, lean_object* v_a_3235_, lean_object* v_a_3236_, lean_object* v_a_3237_, lean_object* v_a_3238_, lean_object* v_a_3239_, lean_object* v_a_3240_, lean_object* v_a_3241_, lean_object* v_a_3242_){
_start:
{
lean_object* v_p_3244_; lean_object* v___x_3245_; 
v_p_3244_ = lean_ctor_get(v_c_3232_, 0);
lean_inc_ref(v_p_3244_);
v___x_3245_ = l_Int_Internal_Linear_Poly_normCommRing_x3f(v_p_3244_, v_a_3233_, v_a_3234_, v_a_3235_, v_a_3236_, v_a_3237_, v_a_3238_, v_a_3239_, v_a_3240_, v_a_3241_, v_a_3242_);
if (lean_obj_tag(v___x_3245_) == 0)
{
lean_object* v_a_3246_; 
v_a_3246_ = lean_ctor_get(v___x_3245_, 0);
lean_inc(v_a_3246_);
lean_dec_ref_known(v___x_3245_, 1);
if (lean_obj_tag(v_a_3246_) == 1)
{
lean_object* v_val_3247_; lean_object* v_snd_3248_; lean_object* v_fst_3249_; lean_object* v_fst_3250_; lean_object* v_snd_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; 
v_val_3247_ = lean_ctor_get(v_a_3246_, 0);
lean_inc(v_val_3247_);
lean_dec_ref_known(v_a_3246_, 1);
v_snd_3248_ = lean_ctor_get(v_val_3247_, 1);
lean_inc(v_snd_3248_);
v_fst_3249_ = lean_ctor_get(v_val_3247_, 0);
lean_inc(v_fst_3249_);
lean_dec(v_val_3247_);
v_fst_3250_ = lean_ctor_get(v_snd_3248_, 0);
lean_inc(v_fst_3250_);
v_snd_3251_ = lean_ctor_get(v_snd_3248_, 1);
lean_inc(v_snd_3251_);
lean_dec(v_snd_3248_);
v___x_3252_ = lean_alloc_ctor(19, 3, 0);
lean_ctor_set(v___x_3252_, 0, v_c_3232_);
lean_ctor_set(v___x_3252_, 1, v_fst_3249_);
lean_ctor_set(v___x_3252_, 2, v_fst_3250_);
v___x_3253_ = lean_box(0);
v___x_3254_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3254_, 0, v_snd_3251_);
lean_ctor_set(v___x_3254_, 1, v___x_3252_);
lean_ctor_set(v___x_3254_, 2, v___x_3253_);
lean_inc(v_a_3242_);
lean_inc_ref(v_a_3241_);
lean_inc(v_a_3240_);
lean_inc_ref(v_a_3239_);
lean_inc(v_a_3238_);
lean_inc_ref(v_a_3237_);
lean_inc(v_a_3236_);
lean_inc_ref(v_a_3235_);
lean_inc(v_a_3234_);
lean_inc(v_a_3233_);
v___x_3255_ = lean_grind_cutsat_assert_le(v___x_3254_, v_a_3233_, v_a_3234_, v_a_3235_, v_a_3236_, v_a_3237_, v_a_3238_, v_a_3239_, v_a_3240_, v_a_3241_, v_a_3242_);
return v___x_3255_;
}
else
{
lean_object* v___x_3256_; 
lean_dec(v_a_3246_);
lean_inc(v_a_3242_);
lean_inc_ref(v_a_3241_);
lean_inc(v_a_3240_);
lean_inc_ref(v_a_3239_);
lean_inc(v_a_3238_);
lean_inc_ref(v_a_3237_);
lean_inc(v_a_3236_);
lean_inc_ref(v_a_3235_);
lean_inc(v_a_3234_);
lean_inc(v_a_3233_);
v___x_3256_ = lean_grind_cutsat_assert_le(v_c_3232_, v_a_3233_, v_a_3234_, v_a_3235_, v_a_3236_, v_a_3237_, v_a_3238_, v_a_3239_, v_a_3240_, v_a_3241_, v_a_3242_);
return v___x_3256_;
}
}
else
{
lean_object* v_a_3257_; lean_object* v___x_3259_; uint8_t v_isShared_3260_; uint8_t v_isSharedCheck_3264_; 
lean_dec_ref(v_c_3232_);
v_a_3257_ = lean_ctor_get(v___x_3245_, 0);
v_isSharedCheck_3264_ = !lean_is_exclusive(v___x_3245_);
if (v_isSharedCheck_3264_ == 0)
{
v___x_3259_ = v___x_3245_;
v_isShared_3260_ = v_isSharedCheck_3264_;
goto v_resetjp_3258_;
}
else
{
lean_inc(v_a_3257_);
lean_dec(v___x_3245_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertCore___boxed(lean_object* v_c_3265_, lean_object* v_a_3266_, lean_object* v_a_3267_, lean_object* v_a_3268_, lean_object* v_a_3269_, lean_object* v_a_3270_, lean_object* v_a_3271_, lean_object* v_a_3272_, lean_object* v_a_3273_, lean_object* v_a_3274_, lean_object* v_a_3275_, lean_object* v_a_3276_){
_start:
{
lean_object* v_res_3277_; 
v_res_3277_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertCore(v_c_3265_, v_a_3266_, v_a_3267_, v_a_3268_, v_a_3269_, v_a_3270_, v_a_3271_, v_a_3272_, v_a_3273_, v_a_3274_, v_a_3275_);
lean_dec(v_a_3275_);
lean_dec_ref(v_a_3274_);
lean_dec(v_a_3273_);
lean_dec_ref(v_a_3272_);
lean_dec(v_a_3271_);
lean_dec_ref(v_a_3270_);
lean_dec(v_a_3269_);
lean_dec_ref(v_a_3268_);
lean_dec(v_a_3267_);
lean_dec(v_a_3266_);
return v_res_3277_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__3(void){
_start:
{
lean_object* v___x_3283_; lean_object* v___x_3284_; 
v___x_3283_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0);
v___x_3284_ = lean_int_neg(v___x_3283_);
return v___x_3284_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__6(void){
_start:
{
lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; 
v___x_3291_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__5));
v___x_3292_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__5));
v___x_3293_ = l_Lean_Name_append(v___x_3292_, v___x_3291_);
return v___x_3293_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__8(void){
_start:
{
lean_object* v___x_3295_; lean_object* v___x_3296_; 
v___x_3295_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__7));
v___x_3296_ = l_Lean_stringToMessageData(v___x_3295_);
return v___x_3296_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__10(void){
_start:
{
lean_object* v___x_3298_; lean_object* v___x_3299_; 
v___x_3298_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__9));
v___x_3299_ = l_Lean_stringToMessageData(v___x_3298_);
return v___x_3299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe(lean_object* v_e_3300_, uint8_t v_eqTrue_3301_, lean_object* v_a_3302_, lean_object* v_a_3303_, lean_object* v_a_3304_, lean_object* v_a_3305_, lean_object* v_a_3306_, lean_object* v_a_3307_, lean_object* v_a_3308_, lean_object* v_a_3309_, lean_object* v_a_3310_, lean_object* v_a_3311_){
_start:
{
lean_object* v_c_3314_; lean_object* v___y_3315_; lean_object* v___y_3316_; lean_object* v___y_3317_; lean_object* v___y_3318_; lean_object* v___y_3319_; lean_object* v___y_3320_; lean_object* v___y_3321_; lean_object* v___y_3322_; lean_object* v___y_3323_; lean_object* v___y_3324_; lean_object* v___y_3339_; lean_object* v___y_3340_; lean_object* v___y_3341_; lean_object* v___y_3342_; lean_object* v___y_3343_; lean_object* v___y_3344_; lean_object* v___y_3345_; lean_object* v___y_3346_; lean_object* v___y_3347_; lean_object* v___y_3348_; lean_object* v___y_3349_; lean_object* v___y_3350_; lean_object* v___y_3351_; lean_object* v___x_3356_; 
lean_inc_ref(v_e_3300_);
v___x_3356_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_3300_, v_a_3309_);
if (lean_obj_tag(v___x_3356_) == 0)
{
lean_object* v_a_3357_; lean_object* v___x_3358_; uint8_t v___x_3359_; 
v_a_3357_ = lean_ctor_get(v___x_3356_, 0);
lean_inc(v_a_3357_);
lean_dec_ref_known(v___x_3356_, 1);
v___x_3358_ = l_Lean_Expr_cleanupAnnotations(v_a_3357_);
lean_dec(v_a_3357_);
v___x_3359_ = l_Lean_Expr_isApp(v___x_3358_);
if (v___x_3359_ == 0)
{
lean_dec_ref(v___x_3358_);
lean_dec_ref(v_e_3300_);
goto v___jp_3335_;
}
else
{
lean_object* v___x_3360_; uint8_t v___x_3361_; 
v___x_3360_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3358_);
v___x_3361_ = l_Lean_Expr_isApp(v___x_3360_);
if (v___x_3361_ == 0)
{
lean_dec_ref(v___x_3360_);
lean_dec_ref(v___x_3358_);
lean_dec_ref(v_e_3300_);
goto v___jp_3335_;
}
else
{
lean_object* v___x_3362_; uint8_t v___x_3363_; 
v___x_3362_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3360_);
v___x_3363_ = l_Lean_Expr_isApp(v___x_3362_);
if (v___x_3363_ == 0)
{
lean_dec_ref(v___x_3362_);
lean_dec_ref(v___x_3360_);
lean_dec_ref(v___x_3358_);
lean_dec_ref(v_e_3300_);
goto v___jp_3335_;
}
else
{
lean_object* v___x_3364_; uint8_t v___x_3365_; 
v___x_3364_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3362_);
v___x_3365_ = l_Lean_Expr_isApp(v___x_3364_);
if (v___x_3365_ == 0)
{
lean_dec_ref(v___x_3364_);
lean_dec_ref(v___x_3362_);
lean_dec_ref(v___x_3360_);
lean_dec_ref(v___x_3358_);
lean_dec_ref(v_e_3300_);
goto v___jp_3335_;
}
else
{
lean_object* v___x_3366_; lean_object* v___x_3367_; uint8_t v___x_3368_; 
v___x_3366_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3364_);
lean_dec_ref(v___x_3364_);
v___x_3367_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__2));
v___x_3368_ = l_Lean_Expr_isConstOf(v___x_3366_, v___x_3367_);
lean_dec_ref(v___x_3366_);
if (v___x_3368_ == 0)
{
lean_dec_ref(v___x_3362_);
lean_dec_ref(v___x_3360_);
lean_dec_ref(v___x_3358_);
lean_dec_ref(v_e_3300_);
goto v___jp_3335_;
}
else
{
lean_object* v_arg_3369_; lean_object* v_arg_3370_; lean_object* v___y_3372_; lean_object* v___y_3373_; lean_object* v___y_3374_; lean_object* v___y_3375_; lean_object* v___y_3376_; lean_object* v___y_3377_; lean_object* v___y_3378_; lean_object* v___y_3379_; lean_object* v___y_3380_; lean_object* v___y_3381_; lean_object* v___y_3419_; lean_object* v___y_3420_; lean_object* v___y_3421_; lean_object* v___y_3422_; lean_object* v___y_3423_; lean_object* v___y_3424_; lean_object* v___y_3425_; lean_object* v___y_3426_; lean_object* v___y_3427_; lean_object* v___y_3428_; lean_object* v_arg_3440_; lean_object* v___x_3441_; 
v_arg_3369_ = lean_ctor_get(v___x_3358_, 1);
lean_inc_ref(v_arg_3369_);
lean_dec_ref(v___x_3358_);
v_arg_3370_ = lean_ctor_get(v___x_3360_, 1);
lean_inc_ref(v_arg_3370_);
lean_dec_ref(v___x_3360_);
v_arg_3440_ = lean_ctor_get(v___x_3362_, 1);
lean_inc_ref(v_arg_3440_);
lean_dec_ref(v___x_3362_);
v___x_3441_ = l_Lean_Meta_Structural_isInstLEInt___redArg(v_arg_3440_, v_a_3309_);
if (lean_obj_tag(v___x_3441_) == 0)
{
lean_object* v_a_3442_; lean_object* v___x_3444_; uint8_t v_isShared_3445_; uint8_t v_isSharedCheck_3513_; 
v_a_3442_ = lean_ctor_get(v___x_3441_, 0);
v_isSharedCheck_3513_ = !lean_is_exclusive(v___x_3441_);
if (v_isSharedCheck_3513_ == 0)
{
v___x_3444_ = v___x_3441_;
v_isShared_3445_ = v_isSharedCheck_3513_;
goto v_resetjp_3443_;
}
else
{
lean_inc(v_a_3442_);
lean_dec(v___x_3441_);
v___x_3444_ = lean_box(0);
v_isShared_3445_ = v_isSharedCheck_3513_;
goto v_resetjp_3443_;
}
v_resetjp_3443_:
{
uint8_t v___x_3446_; 
v___x_3446_ = lean_unbox(v_a_3442_);
lean_dec(v_a_3442_);
if (v___x_3446_ == 0)
{
lean_object* v___x_3447_; lean_object* v___x_3449_; 
lean_dec_ref(v_arg_3370_);
lean_dec_ref(v_arg_3369_);
lean_dec_ref(v_e_3300_);
v___x_3447_ = lean_box(0);
if (v_isShared_3445_ == 0)
{
lean_ctor_set(v___x_3444_, 0, v___x_3447_);
v___x_3449_ = v___x_3444_;
goto v_reusejp_3448_;
}
else
{
lean_object* v_reuseFailAlloc_3450_; 
v_reuseFailAlloc_3450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3450_, 0, v___x_3447_);
v___x_3449_ = v_reuseFailAlloc_3450_;
goto v_reusejp_3448_;
}
v_reusejp_3448_:
{
return v___x_3449_;
}
}
else
{
lean_object* v___x_3451_; 
lean_del_object(v___x_3444_);
lean_inc_ref(v_arg_3369_);
v___x_3451_ = l_Lean_Meta_getIntValue_x3f(v_arg_3369_, v_a_3308_, v_a_3309_, v_a_3310_, v_a_3311_);
if (lean_obj_tag(v___x_3451_) == 0)
{
lean_object* v_a_3452_; 
v_a_3452_ = lean_ctor_get(v___x_3451_, 0);
lean_inc(v_a_3452_);
lean_dec_ref_known(v___x_3451_, 1);
if (lean_obj_tag(v_a_3452_) == 1)
{
lean_object* v_val_3453_; lean_object* v___x_3454_; uint8_t v___x_3455_; 
v_val_3453_ = lean_ctor_get(v_a_3452_, 0);
lean_inc(v_val_3453_);
lean_dec_ref_known(v_a_3452_, 1);
v___x_3454_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__9);
v___x_3455_ = lean_int_dec_eq(v_val_3453_, v___x_3454_);
lean_dec(v_val_3453_);
if (v___x_3455_ == 0)
{
v___y_3419_ = v_a_3302_;
v___y_3420_ = v_a_3303_;
v___y_3421_ = v_a_3304_;
v___y_3422_ = v_a_3305_;
v___y_3423_ = v_a_3306_;
v___y_3424_ = v_a_3307_;
v___y_3425_ = v_a_3308_;
v___y_3426_ = v_a_3309_;
v___y_3427_ = v_a_3310_;
v___y_3428_ = v_a_3311_;
goto v___jp_3418_;
}
else
{
lean_object* v___x_3456_; 
lean_inc_ref(v_arg_3370_);
v___x_3456_ = l_Lean_Meta_Grind_Arith_Cutsat_toPoly_x3f(v_arg_3370_, v_a_3302_, v_a_3303_, v_a_3304_, v_a_3305_, v_a_3306_, v_a_3307_, v_a_3308_, v_a_3309_, v_a_3310_, v_a_3311_);
if (lean_obj_tag(v___x_3456_) == 0)
{
lean_object* v_a_3457_; 
v_a_3457_ = lean_ctor_get(v___x_3456_, 0);
lean_inc(v_a_3457_);
lean_dec_ref_known(v___x_3456_, 1);
if (lean_obj_tag(v_a_3457_) == 1)
{
lean_object* v_val_3458_; lean_object* v___x_3460_; uint8_t v_isShared_3461_; uint8_t v_isSharedCheck_3496_; 
lean_dec_ref(v_arg_3370_);
lean_dec_ref(v_arg_3369_);
v_val_3458_ = lean_ctor_get(v_a_3457_, 0);
v_isSharedCheck_3496_ = !lean_is_exclusive(v_a_3457_);
if (v_isSharedCheck_3496_ == 0)
{
v___x_3460_ = v_a_3457_;
v_isShared_3461_ = v_isSharedCheck_3496_;
goto v_resetjp_3459_;
}
else
{
lean_inc(v_val_3458_);
lean_dec(v_a_3457_);
v___x_3460_ = lean_box(0);
v_isShared_3461_ = v_isSharedCheck_3496_;
goto v_resetjp_3459_;
}
v_resetjp_3459_:
{
lean_object* v___y_3463_; lean_object* v___y_3464_; lean_object* v___y_3465_; lean_object* v___y_3466_; lean_object* v___y_3467_; lean_object* v___y_3468_; lean_object* v___y_3469_; lean_object* v___y_3470_; lean_object* v___y_3471_; lean_object* v___y_3472_; lean_object* v_toCold_3485_; lean_object* v_options_3486_; uint8_t v_hasTrace_3487_; 
v_toCold_3485_ = lean_ctor_get(v_a_3310_, 0);
v_options_3486_ = lean_ctor_get(v_toCold_3485_, 2);
v_hasTrace_3487_ = lean_ctor_get_uint8(v_options_3486_, sizeof(void*)*1);
if (v_hasTrace_3487_ == 0)
{
v___y_3463_ = v_a_3302_;
v___y_3464_ = v_a_3303_;
v___y_3465_ = v_a_3304_;
v___y_3466_ = v_a_3305_;
v___y_3467_ = v_a_3306_;
v___y_3468_ = v_a_3307_;
v___y_3469_ = v_a_3308_;
v___y_3470_ = v_a_3309_;
v___y_3471_ = v_a_3310_;
v___y_3472_ = v_a_3311_;
goto v___jp_3462_;
}
else
{
lean_object* v_inheritedTraceOptions_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; uint8_t v___x_3491_; 
v_inheritedTraceOptions_3488_ = lean_ctor_get(v_toCold_3485_, 11);
v___x_3489_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__5));
v___x_3490_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__6, &l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__6_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__6);
v___x_3491_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3488_, v_options_3486_, v___x_3490_);
if (v___x_3491_ == 0)
{
v___y_3463_ = v_a_3302_;
v___y_3464_ = v_a_3303_;
v___y_3465_ = v_a_3304_;
v___y_3466_ = v_a_3305_;
v___y_3467_ = v_a_3306_;
v___y_3468_ = v_a_3307_;
v___y_3469_ = v_a_3308_;
v___y_3470_ = v_a_3309_;
v___y_3471_ = v_a_3310_;
v___y_3472_ = v_a_3311_;
goto v___jp_3462_;
}
else
{
lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; 
v___x_3492_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__10, &l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__10_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__10);
lean_inc_ref(v_e_3300_);
v___x_3493_ = l_Lean_MessageData_ofExpr(v_e_3300_);
v___x_3494_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3494_, 0, v___x_3492_);
lean_ctor_set(v___x_3494_, 1, v___x_3493_);
v___x_3495_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v___x_3489_, v___x_3494_, v_a_3308_, v_a_3309_, v_a_3310_, v_a_3311_);
if (lean_obj_tag(v___x_3495_) == 0)
{
lean_dec_ref_known(v___x_3495_, 1);
v___y_3463_ = v_a_3302_;
v___y_3464_ = v_a_3303_;
v___y_3465_ = v_a_3304_;
v___y_3466_ = v_a_3305_;
v___y_3467_ = v_a_3306_;
v___y_3468_ = v_a_3307_;
v___y_3469_ = v_a_3308_;
v___y_3470_ = v_a_3309_;
v___y_3471_ = v_a_3310_;
v___y_3472_ = v_a_3311_;
goto v___jp_3462_;
}
else
{
lean_del_object(v___x_3460_);
lean_dec(v_val_3458_);
lean_dec_ref(v_e_3300_);
return v___x_3495_;
}
}
}
v___jp_3462_:
{
if (v_eqTrue_3301_ == 0)
{
lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; 
lean_del_object(v___x_3460_);
v___x_3473_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0);
v___x_3474_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__3, &l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__3_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__3);
lean_inc(v_val_3458_);
v___x_3475_ = l_Int_Internal_Linear_Poly_mul(v_val_3458_, v___x_3474_);
v___x_3476_ = l_Int_Internal_Linear_Poly_addConst(v___x_3475_, v___x_3473_);
v___x_3477_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3477_, 0, v_e_3300_);
lean_ctor_set(v___x_3477_, 1, v_val_3458_);
v___x_3478_ = lean_box(0);
v___x_3479_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3479_, 0, v___x_3476_);
lean_ctor_set(v___x_3479_, 1, v___x_3477_);
lean_ctor_set(v___x_3479_, 2, v___x_3478_);
v_c_3314_ = v___x_3479_;
v___y_3315_ = v___y_3463_;
v___y_3316_ = v___y_3464_;
v___y_3317_ = v___y_3465_;
v___y_3318_ = v___y_3466_;
v___y_3319_ = v___y_3467_;
v___y_3320_ = v___y_3468_;
v___y_3321_ = v___y_3469_;
v___y_3322_ = v___y_3470_;
v___y_3323_ = v___y_3471_;
v___y_3324_ = v___y_3472_;
goto v___jp_3313_;
}
else
{
lean_object* v___x_3481_; 
if (v_isShared_3461_ == 0)
{
lean_ctor_set_tag(v___x_3460_, 0);
lean_ctor_set(v___x_3460_, 0, v_e_3300_);
v___x_3481_ = v___x_3460_;
goto v_reusejp_3480_;
}
else
{
lean_object* v_reuseFailAlloc_3484_; 
v_reuseFailAlloc_3484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3484_, 0, v_e_3300_);
v___x_3481_ = v_reuseFailAlloc_3484_;
goto v_reusejp_3480_;
}
v_reusejp_3480_:
{
lean_object* v___x_3482_; lean_object* v___x_3483_; 
v___x_3482_ = lean_box(0);
v___x_3483_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3483_, 0, v_val_3458_);
lean_ctor_set(v___x_3483_, 1, v___x_3481_);
lean_ctor_set(v___x_3483_, 2, v___x_3482_);
v_c_3314_ = v___x_3483_;
v___y_3315_ = v___y_3463_;
v___y_3316_ = v___y_3464_;
v___y_3317_ = v___y_3465_;
v___y_3318_ = v___y_3466_;
v___y_3319_ = v___y_3467_;
v___y_3320_ = v___y_3468_;
v___y_3321_ = v___y_3469_;
v___y_3322_ = v___y_3470_;
v___y_3323_ = v___y_3471_;
v___y_3324_ = v___y_3472_;
goto v___jp_3313_;
}
}
}
}
}
else
{
lean_dec(v_a_3457_);
v___y_3419_ = v_a_3302_;
v___y_3420_ = v_a_3303_;
v___y_3421_ = v_a_3304_;
v___y_3422_ = v_a_3305_;
v___y_3423_ = v_a_3306_;
v___y_3424_ = v_a_3307_;
v___y_3425_ = v_a_3308_;
v___y_3426_ = v_a_3309_;
v___y_3427_ = v_a_3310_;
v___y_3428_ = v_a_3311_;
goto v___jp_3418_;
}
}
else
{
lean_object* v_a_3497_; lean_object* v___x_3499_; uint8_t v_isShared_3500_; uint8_t v_isSharedCheck_3504_; 
lean_dec_ref(v_arg_3370_);
lean_dec_ref(v_arg_3369_);
lean_dec_ref(v_e_3300_);
v_a_3497_ = lean_ctor_get(v___x_3456_, 0);
v_isSharedCheck_3504_ = !lean_is_exclusive(v___x_3456_);
if (v_isSharedCheck_3504_ == 0)
{
v___x_3499_ = v___x_3456_;
v_isShared_3500_ = v_isSharedCheck_3504_;
goto v_resetjp_3498_;
}
else
{
lean_inc(v_a_3497_);
lean_dec(v___x_3456_);
v___x_3499_ = lean_box(0);
v_isShared_3500_ = v_isSharedCheck_3504_;
goto v_resetjp_3498_;
}
v_resetjp_3498_:
{
lean_object* v___x_3502_; 
if (v_isShared_3500_ == 0)
{
v___x_3502_ = v___x_3499_;
goto v_reusejp_3501_;
}
else
{
lean_object* v_reuseFailAlloc_3503_; 
v_reuseFailAlloc_3503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3503_, 0, v_a_3497_);
v___x_3502_ = v_reuseFailAlloc_3503_;
goto v_reusejp_3501_;
}
v_reusejp_3501_:
{
return v___x_3502_;
}
}
}
}
}
else
{
lean_dec(v_a_3452_);
v___y_3419_ = v_a_3302_;
v___y_3420_ = v_a_3303_;
v___y_3421_ = v_a_3304_;
v___y_3422_ = v_a_3305_;
v___y_3423_ = v_a_3306_;
v___y_3424_ = v_a_3307_;
v___y_3425_ = v_a_3308_;
v___y_3426_ = v_a_3309_;
v___y_3427_ = v_a_3310_;
v___y_3428_ = v_a_3311_;
goto v___jp_3418_;
}
}
else
{
lean_object* v_a_3505_; lean_object* v___x_3507_; uint8_t v_isShared_3508_; uint8_t v_isSharedCheck_3512_; 
lean_dec_ref(v_arg_3370_);
lean_dec_ref(v_arg_3369_);
lean_dec_ref(v_e_3300_);
v_a_3505_ = lean_ctor_get(v___x_3451_, 0);
v_isSharedCheck_3512_ = !lean_is_exclusive(v___x_3451_);
if (v_isSharedCheck_3512_ == 0)
{
v___x_3507_ = v___x_3451_;
v_isShared_3508_ = v_isSharedCheck_3512_;
goto v_resetjp_3506_;
}
else
{
lean_inc(v_a_3505_);
lean_dec(v___x_3451_);
v___x_3507_ = lean_box(0);
v_isShared_3508_ = v_isSharedCheck_3512_;
goto v_resetjp_3506_;
}
v_resetjp_3506_:
{
lean_object* v___x_3510_; 
if (v_isShared_3508_ == 0)
{
v___x_3510_ = v___x_3507_;
goto v_reusejp_3509_;
}
else
{
lean_object* v_reuseFailAlloc_3511_; 
v_reuseFailAlloc_3511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3511_, 0, v_a_3505_);
v___x_3510_ = v_reuseFailAlloc_3511_;
goto v_reusejp_3509_;
}
v_reusejp_3509_:
{
return v___x_3510_;
}
}
}
}
}
}
else
{
lean_object* v_a_3514_; lean_object* v___x_3516_; uint8_t v_isShared_3517_; uint8_t v_isSharedCheck_3521_; 
lean_dec_ref(v_arg_3370_);
lean_dec_ref(v_arg_3369_);
lean_dec_ref(v_e_3300_);
v_a_3514_ = lean_ctor_get(v___x_3441_, 0);
v_isSharedCheck_3521_ = !lean_is_exclusive(v___x_3441_);
if (v_isSharedCheck_3521_ == 0)
{
v___x_3516_ = v___x_3441_;
v_isShared_3517_ = v_isSharedCheck_3521_;
goto v_resetjp_3515_;
}
else
{
lean_inc(v_a_3514_);
lean_dec(v___x_3441_);
v___x_3516_ = lean_box(0);
v_isShared_3517_ = v_isSharedCheck_3521_;
goto v_resetjp_3515_;
}
v_resetjp_3515_:
{
lean_object* v___x_3519_; 
if (v_isShared_3517_ == 0)
{
v___x_3519_ = v___x_3516_;
goto v_reusejp_3518_;
}
else
{
lean_object* v_reuseFailAlloc_3520_; 
v_reuseFailAlloc_3520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3520_, 0, v_a_3514_);
v___x_3519_ = v_reuseFailAlloc_3520_;
goto v_reusejp_3518_;
}
v_reusejp_3518_:
{
return v___x_3519_;
}
}
}
v___jp_3371_:
{
lean_object* v___x_3382_; 
v___x_3382_ = l_Lean_Meta_Grind_getGeneration___redArg(v_e_3300_, v___y_3372_);
if (lean_obj_tag(v___x_3382_) == 0)
{
lean_object* v_a_3383_; lean_object* v___x_3384_; 
v_a_3383_ = lean_ctor_get(v___x_3382_, 0);
lean_inc_n(v_a_3383_, 2);
lean_dec_ref_known(v___x_3382_, 1);
v___x_3384_ = l_Lean_Meta_Grind_Arith_Cutsat_toLinearExpr(v_arg_3370_, v_a_3383_, v___y_3372_, v___y_3373_, v___y_3374_, v___y_3375_, v___y_3376_, v___y_3377_, v___y_3378_, v___y_3379_, v___y_3380_, v___y_3381_);
if (lean_obj_tag(v___x_3384_) == 0)
{
lean_object* v_a_3385_; lean_object* v___x_3386_; 
v_a_3385_ = lean_ctor_get(v___x_3384_, 0);
lean_inc(v_a_3385_);
lean_dec_ref_known(v___x_3384_, 1);
v___x_3386_ = l_Lean_Meta_Grind_Arith_Cutsat_toLinearExpr(v_arg_3369_, v_a_3383_, v___y_3372_, v___y_3373_, v___y_3374_, v___y_3375_, v___y_3376_, v___y_3377_, v___y_3378_, v___y_3379_, v___y_3380_, v___y_3381_);
if (lean_obj_tag(v___x_3386_) == 0)
{
lean_object* v_a_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; 
v_a_3387_ = lean_ctor_get(v___x_3386_, 0);
lean_inc_n(v_a_3387_, 2);
lean_dec_ref_known(v___x_3386_, 1);
lean_inc(v_a_3385_);
v___x_3388_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3388_, 0, v_a_3385_);
lean_ctor_set(v___x_3388_, 1, v_a_3387_);
v___x_3389_ = l_Int_Internal_Linear_Expr_norm(v___x_3388_);
lean_dec_ref_known(v___x_3388_, 2);
if (v_eqTrue_3301_ == 0)
{
lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; 
v___x_3390_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0);
v___x_3391_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__3, &l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__3_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__3);
v___x_3392_ = l_Int_Internal_Linear_Poly_mul(v___x_3389_, v___x_3391_);
v___x_3393_ = l_Int_Internal_Linear_Poly_addConst(v___x_3392_, v___x_3390_);
v___y_3339_ = v___y_3375_;
v___y_3340_ = v___y_3379_;
v___y_3341_ = v___y_3372_;
v___y_3342_ = v_a_3385_;
v___y_3343_ = v___y_3374_;
v___y_3344_ = v___y_3378_;
v___y_3345_ = v_a_3387_;
v___y_3346_ = v___y_3373_;
v___y_3347_ = v___y_3377_;
v___y_3348_ = v___y_3380_;
v___y_3349_ = v___y_3381_;
v___y_3350_ = v___y_3376_;
v___y_3351_ = v___x_3393_;
goto v___jp_3338_;
}
else
{
v___y_3339_ = v___y_3375_;
v___y_3340_ = v___y_3379_;
v___y_3341_ = v___y_3372_;
v___y_3342_ = v_a_3385_;
v___y_3343_ = v___y_3374_;
v___y_3344_ = v___y_3378_;
v___y_3345_ = v_a_3387_;
v___y_3346_ = v___y_3373_;
v___y_3347_ = v___y_3377_;
v___y_3348_ = v___y_3380_;
v___y_3349_ = v___y_3381_;
v___y_3350_ = v___y_3376_;
v___y_3351_ = v___x_3389_;
goto v___jp_3338_;
}
}
else
{
lean_object* v_a_3394_; lean_object* v___x_3396_; uint8_t v_isShared_3397_; uint8_t v_isSharedCheck_3401_; 
lean_dec(v_a_3385_);
lean_dec_ref(v_e_3300_);
v_a_3394_ = lean_ctor_get(v___x_3386_, 0);
v_isSharedCheck_3401_ = !lean_is_exclusive(v___x_3386_);
if (v_isSharedCheck_3401_ == 0)
{
v___x_3396_ = v___x_3386_;
v_isShared_3397_ = v_isSharedCheck_3401_;
goto v_resetjp_3395_;
}
else
{
lean_inc(v_a_3394_);
lean_dec(v___x_3386_);
v___x_3396_ = lean_box(0);
v_isShared_3397_ = v_isSharedCheck_3401_;
goto v_resetjp_3395_;
}
v_resetjp_3395_:
{
lean_object* v___x_3399_; 
if (v_isShared_3397_ == 0)
{
v___x_3399_ = v___x_3396_;
goto v_reusejp_3398_;
}
else
{
lean_object* v_reuseFailAlloc_3400_; 
v_reuseFailAlloc_3400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3400_, 0, v_a_3394_);
v___x_3399_ = v_reuseFailAlloc_3400_;
goto v_reusejp_3398_;
}
v_reusejp_3398_:
{
return v___x_3399_;
}
}
}
}
else
{
lean_object* v_a_3402_; lean_object* v___x_3404_; uint8_t v_isShared_3405_; uint8_t v_isSharedCheck_3409_; 
lean_dec(v_a_3383_);
lean_dec_ref(v_arg_3369_);
lean_dec_ref(v_e_3300_);
v_a_3402_ = lean_ctor_get(v___x_3384_, 0);
v_isSharedCheck_3409_ = !lean_is_exclusive(v___x_3384_);
if (v_isSharedCheck_3409_ == 0)
{
v___x_3404_ = v___x_3384_;
v_isShared_3405_ = v_isSharedCheck_3409_;
goto v_resetjp_3403_;
}
else
{
lean_inc(v_a_3402_);
lean_dec(v___x_3384_);
v___x_3404_ = lean_box(0);
v_isShared_3405_ = v_isSharedCheck_3409_;
goto v_resetjp_3403_;
}
v_resetjp_3403_:
{
lean_object* v___x_3407_; 
if (v_isShared_3405_ == 0)
{
v___x_3407_ = v___x_3404_;
goto v_reusejp_3406_;
}
else
{
lean_object* v_reuseFailAlloc_3408_; 
v_reuseFailAlloc_3408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3408_, 0, v_a_3402_);
v___x_3407_ = v_reuseFailAlloc_3408_;
goto v_reusejp_3406_;
}
v_reusejp_3406_:
{
return v___x_3407_;
}
}
}
}
else
{
lean_object* v_a_3410_; lean_object* v___x_3412_; uint8_t v_isShared_3413_; uint8_t v_isSharedCheck_3417_; 
lean_dec_ref(v_arg_3370_);
lean_dec_ref(v_arg_3369_);
lean_dec_ref(v_e_3300_);
v_a_3410_ = lean_ctor_get(v___x_3382_, 0);
v_isSharedCheck_3417_ = !lean_is_exclusive(v___x_3382_);
if (v_isSharedCheck_3417_ == 0)
{
v___x_3412_ = v___x_3382_;
v_isShared_3413_ = v_isSharedCheck_3417_;
goto v_resetjp_3411_;
}
else
{
lean_inc(v_a_3410_);
lean_dec(v___x_3382_);
v___x_3412_ = lean_box(0);
v_isShared_3413_ = v_isSharedCheck_3417_;
goto v_resetjp_3411_;
}
v_resetjp_3411_:
{
lean_object* v___x_3415_; 
if (v_isShared_3413_ == 0)
{
v___x_3415_ = v___x_3412_;
goto v_reusejp_3414_;
}
else
{
lean_object* v_reuseFailAlloc_3416_; 
v_reuseFailAlloc_3416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3416_, 0, v_a_3410_);
v___x_3415_ = v_reuseFailAlloc_3416_;
goto v_reusejp_3414_;
}
v_reusejp_3414_:
{
return v___x_3415_;
}
}
}
}
v___jp_3418_:
{
lean_object* v_toCold_3429_; lean_object* v_options_3430_; uint8_t v_hasTrace_3431_; 
v_toCold_3429_ = lean_ctor_get(v___y_3427_, 0);
v_options_3430_ = lean_ctor_get(v_toCold_3429_, 2);
v_hasTrace_3431_ = lean_ctor_get_uint8(v_options_3430_, sizeof(void*)*1);
if (v_hasTrace_3431_ == 0)
{
v___y_3372_ = v___y_3419_;
v___y_3373_ = v___y_3420_;
v___y_3374_ = v___y_3421_;
v___y_3375_ = v___y_3422_;
v___y_3376_ = v___y_3423_;
v___y_3377_ = v___y_3424_;
v___y_3378_ = v___y_3425_;
v___y_3379_ = v___y_3426_;
v___y_3380_ = v___y_3427_;
v___y_3381_ = v___y_3428_;
goto v___jp_3371_;
}
else
{
lean_object* v_inheritedTraceOptions_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; uint8_t v___x_3435_; 
v_inheritedTraceOptions_3432_ = lean_ctor_get(v_toCold_3429_, 11);
v___x_3433_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__5));
v___x_3434_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__6, &l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__6_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__6);
v___x_3435_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3432_, v_options_3430_, v___x_3434_);
if (v___x_3435_ == 0)
{
v___y_3372_ = v___y_3419_;
v___y_3373_ = v___y_3420_;
v___y_3374_ = v___y_3421_;
v___y_3375_ = v___y_3422_;
v___y_3376_ = v___y_3423_;
v___y_3377_ = v___y_3424_;
v___y_3378_ = v___y_3425_;
v___y_3379_ = v___y_3426_;
v___y_3380_ = v___y_3427_;
v___y_3381_ = v___y_3428_;
goto v___jp_3371_;
}
else
{
lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; 
v___x_3436_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__8, &l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__8_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__8);
lean_inc_ref(v_e_3300_);
v___x_3437_ = l_Lean_MessageData_ofExpr(v_e_3300_);
v___x_3438_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3438_, 0, v___x_3436_);
lean_ctor_set(v___x_3438_, 1, v___x_3437_);
v___x_3439_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v___x_3433_, v___x_3438_, v___y_3425_, v___y_3426_, v___y_3427_, v___y_3428_);
if (lean_obj_tag(v___x_3439_) == 0)
{
lean_dec_ref_known(v___x_3439_, 1);
v___y_3372_ = v___y_3419_;
v___y_3373_ = v___y_3420_;
v___y_3374_ = v___y_3421_;
v___y_3375_ = v___y_3422_;
v___y_3376_ = v___y_3423_;
v___y_3377_ = v___y_3424_;
v___y_3378_ = v___y_3425_;
v___y_3379_ = v___y_3426_;
v___y_3380_ = v___y_3427_;
v___y_3381_ = v___y_3428_;
goto v___jp_3371_;
}
else
{
lean_dec_ref(v_arg_3370_);
lean_dec_ref(v_arg_3369_);
lean_dec_ref(v_e_3300_);
return v___x_3439_;
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
lean_object* v_a_3522_; lean_object* v___x_3524_; uint8_t v_isShared_3525_; uint8_t v_isSharedCheck_3529_; 
lean_dec_ref(v_e_3300_);
v_a_3522_ = lean_ctor_get(v___x_3356_, 0);
v_isSharedCheck_3529_ = !lean_is_exclusive(v___x_3356_);
if (v_isSharedCheck_3529_ == 0)
{
v___x_3524_ = v___x_3356_;
v_isShared_3525_ = v_isSharedCheck_3529_;
goto v_resetjp_3523_;
}
else
{
lean_inc(v_a_3522_);
lean_dec(v___x_3356_);
v___x_3524_ = lean_box(0);
v_isShared_3525_ = v_isSharedCheck_3529_;
goto v_resetjp_3523_;
}
v_resetjp_3523_:
{
lean_object* v___x_3527_; 
if (v_isShared_3525_ == 0)
{
v___x_3527_ = v___x_3524_;
goto v_reusejp_3526_;
}
else
{
lean_object* v_reuseFailAlloc_3528_; 
v_reuseFailAlloc_3528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3528_, 0, v_a_3522_);
v___x_3527_ = v_reuseFailAlloc_3528_;
goto v_reusejp_3526_;
}
v_reusejp_3526_:
{
return v___x_3527_;
}
}
}
v___jp_3313_:
{
lean_object* v___x_3325_; 
v___x_3325_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertCore(v_c_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_, v___y_3319_, v___y_3320_, v___y_3321_, v___y_3322_, v___y_3323_, v___y_3324_);
if (lean_obj_tag(v___x_3325_) == 0)
{
lean_object* v___x_3327_; uint8_t v_isShared_3328_; uint8_t v_isSharedCheck_3333_; 
v_isSharedCheck_3333_ = !lean_is_exclusive(v___x_3325_);
if (v_isSharedCheck_3333_ == 0)
{
lean_object* v_unused_3334_; 
v_unused_3334_ = lean_ctor_get(v___x_3325_, 0);
lean_dec(v_unused_3334_);
v___x_3327_ = v___x_3325_;
v_isShared_3328_ = v_isSharedCheck_3333_;
goto v_resetjp_3326_;
}
else
{
lean_dec(v___x_3325_);
v___x_3327_ = lean_box(0);
v_isShared_3328_ = v_isSharedCheck_3333_;
goto v_resetjp_3326_;
}
v_resetjp_3326_:
{
lean_object* v___x_3329_; lean_object* v___x_3331_; 
v___x_3329_ = lean_box(0);
if (v_isShared_3328_ == 0)
{
lean_ctor_set(v___x_3327_, 0, v___x_3329_);
v___x_3331_ = v___x_3327_;
goto v_reusejp_3330_;
}
else
{
lean_object* v_reuseFailAlloc_3332_; 
v_reuseFailAlloc_3332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3332_, 0, v___x_3329_);
v___x_3331_ = v_reuseFailAlloc_3332_;
goto v_reusejp_3330_;
}
v_reusejp_3330_:
{
return v___x_3331_;
}
}
}
else
{
return v___x_3325_;
}
}
v___jp_3335_:
{
lean_object* v___x_3336_; lean_object* v___x_3337_; 
v___x_3336_ = lean_box(0);
v___x_3337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3337_, 0, v___x_3336_);
return v___x_3337_;
}
v___jp_3338_:
{
lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; 
v___x_3352_ = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(v___x_3352_, 0, v_e_3300_);
lean_ctor_set(v___x_3352_, 1, v___y_3342_);
lean_ctor_set(v___x_3352_, 2, v___y_3345_);
lean_ctor_set_uint8(v___x_3352_, sizeof(void*)*3, v_eqTrue_3301_);
v___x_3353_ = lean_box(0);
v___x_3354_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3354_, 0, v___y_3351_);
lean_ctor_set(v___x_3354_, 1, v___x_3352_);
lean_ctor_set(v___x_3354_, 2, v___x_3353_);
v___x_3355_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertCore(v___x_3354_, v___y_3341_, v___y_3346_, v___y_3343_, v___y_3339_, v___y_3350_, v___y_3347_, v___y_3344_, v___y_3340_, v___y_3348_, v___y_3349_);
return v___x_3355_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___boxed(lean_object* v_e_3530_, lean_object* v_eqTrue_3531_, lean_object* v_a_3532_, lean_object* v_a_3533_, lean_object* v_a_3534_, lean_object* v_a_3535_, lean_object* v_a_3536_, lean_object* v_a_3537_, lean_object* v_a_3538_, lean_object* v_a_3539_, lean_object* v_a_3540_, lean_object* v_a_3541_, lean_object* v_a_3542_){
_start:
{
uint8_t v_eqTrue_boxed_3543_; lean_object* v_res_3544_; 
v_eqTrue_boxed_3543_ = lean_unbox(v_eqTrue_3531_);
v_res_3544_ = l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe(v_e_3530_, v_eqTrue_boxed_3543_, v_a_3532_, v_a_3533_, v_a_3534_, v_a_3535_, v_a_3536_, v_a_3537_, v_a_3538_, v_a_3539_, v_a_3540_, v_a_3541_);
lean_dec(v_a_3541_);
lean_dec_ref(v_a_3540_);
lean_dec(v_a_3539_);
lean_dec_ref(v_a_3538_);
lean_dec(v_a_3537_);
lean_dec_ref(v_a_3536_);
lean_dec(v_a_3535_);
lean_dec_ref(v_a_3534_);
lean_dec(v_a_3533_);
lean_dec(v_a_3532_);
return v_res_3544_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__0(void){
_start:
{
lean_object* v___x_3545_; lean_object* v___x_3546_; 
v___x_3545_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0);
v___x_3546_ = l_Lean_mkIntLit(v___x_3545_);
return v___x_3546_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__5(void){
_start:
{
lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; 
v___x_3554_ = lean_box(0);
v___x_3555_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__4));
v___x_3556_ = l_Lean_mkConst(v___x_3555_, v___x_3554_);
return v___x_3556_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__8(void){
_start:
{
lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; 
v___x_3562_ = lean_box(0);
v___x_3563_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__7));
v___x_3564_ = l_Lean_mkConst(v___x_3563_, v___x_3562_);
return v___x_3564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe(lean_object* v_e_3565_, uint8_t v_eqTrue_3566_, lean_object* v_a_3567_, lean_object* v_a_3568_, lean_object* v_a_3569_, lean_object* v_a_3570_, lean_object* v_a_3571_, lean_object* v_a_3572_, lean_object* v_a_3573_, lean_object* v_a_3574_, lean_object* v_a_3575_, lean_object* v_a_3576_){
_start:
{
lean_object* v___y_3579_; lean_object* v___y_3580_; lean_object* v_fst_3581_; lean_object* v_snd_3582_; lean_object* v___x_3612_; uint8_t v___x_3613_; 
v___x_3612_ = l_Lean_Expr_cleanupAnnotations(v_e_3565_);
v___x_3613_ = l_Lean_Expr_isApp(v___x_3612_);
if (v___x_3613_ == 0)
{
lean_dec_ref(v___x_3612_);
lean_dec_ref(v_e_3565_);
goto v___jp_3609_;
}
else
{
lean_object* v___x_3614_; uint8_t v___x_3615_; 
v___x_3614_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3612_);
v___x_3615_ = l_Lean_Expr_isApp(v___x_3614_);
if (v___x_3615_ == 0)
{
lean_dec_ref(v___x_3614_);
lean_dec_ref(v___x_3612_);
lean_dec_ref(v_e_3565_);
goto v___jp_3609_;
}
else
{
lean_object* v___x_3616_; uint8_t v___x_3617_; 
v___x_3616_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3614_);
v___x_3617_ = l_Lean_Expr_isApp(v___x_3616_);
if (v___x_3617_ == 0)
{
lean_dec_ref(v___x_3616_);
lean_dec_ref(v___x_3614_);
lean_dec_ref(v___x_3612_);
lean_dec_ref(v_e_3565_);
goto v___jp_3609_;
}
else
{
lean_object* v___x_3618_; uint8_t v___x_3619_; 
v___x_3618_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3616_);
lean_dec_ref(v___x_3616_);
v___x_3619_ = l_Lean_Expr_isApp(v___x_3618_);
if (v___x_3619_ == 0)
{
lean_dec_ref(v___x_3618_);
lean_dec_ref(v___x_3614_);
lean_dec_ref(v___x_3612_);
lean_dec_ref(v_e_3565_);
goto v___jp_3609_;
}
else
{
lean_object* v___x_3620_; lean_object* v___x_3621_; uint8_t v___x_3622_; 
v___x_3620_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3618_);
lean_dec_ref(v___x_3618_);
v___x_3621_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__2));
v___x_3622_ = l_Lean_Expr_isConstOf(v___x_3620_, v___x_3621_);
lean_dec_ref(v___x_3620_);
if (v___x_3622_ == 0)
{
lean_dec_ref(v___x_3614_);
lean_dec_ref(v___x_3612_);
lean_dec_ref(v_e_3565_);
goto v___jp_3609_;
}
else
{
lean_object* v_arg_3623_; lean_object* v_arg_3624_; lean_object* v___y_3626_; 
v_arg_3623_ = lean_ctor_get(v___x_3612_, 1);
lean_inc_ref(v_arg_3623_);
lean_dec_ref(v___x_3612_);
v_arg_3624_ = lean_ctor_get(v___x_3614_, 1);
lean_inc_ref(v_arg_3624_);
lean_dec_ref(v___x_3614_);
if (v_eqTrue_3566_ == 0)
{
lean_object* v___x_3664_; 
v___x_3664_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__5, &l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__5_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__5);
v___y_3626_ = v___x_3664_;
goto v___jp_3625_;
}
else
{
lean_object* v___x_3665_; 
v___x_3665_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__8, &l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__8_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__8);
v___y_3626_ = v___x_3665_;
goto v___jp_3625_;
}
v___jp_3625_:
{
lean_object* v___x_3627_; 
v___x_3627_ = l_Lean_Meta_Grind_getGeneration___redArg(v_e_3565_, v_a_3567_);
if (lean_obj_tag(v___x_3627_) == 0)
{
lean_object* v_a_3628_; lean_object* v___x_3629_; 
v_a_3628_ = lean_ctor_get(v___x_3627_, 0);
lean_inc(v_a_3628_);
lean_dec_ref_known(v___x_3627_, 1);
lean_inc_ref(v_arg_3624_);
v___x_3629_ = l_Lean_Meta_Grind_Arith_Cutsat_natToInt(v_arg_3624_, v_a_3567_, v_a_3568_, v_a_3569_, v_a_3570_, v_a_3571_, v_a_3572_, v_a_3573_, v_a_3574_, v_a_3575_, v_a_3576_);
if (lean_obj_tag(v___x_3629_) == 0)
{
lean_object* v_a_3630_; lean_object* v_fst_3631_; lean_object* v_snd_3632_; lean_object* v___x_3633_; 
v_a_3630_ = lean_ctor_get(v___x_3629_, 0);
lean_inc(v_a_3630_);
lean_dec_ref_known(v___x_3629_, 1);
v_fst_3631_ = lean_ctor_get(v_a_3630_, 0);
lean_inc(v_fst_3631_);
v_snd_3632_ = lean_ctor_get(v_a_3630_, 1);
lean_inc(v_snd_3632_);
lean_dec(v_a_3630_);
lean_inc_ref(v_arg_3623_);
v___x_3633_ = l_Lean_Meta_Grind_Arith_Cutsat_natToInt(v_arg_3623_, v_a_3567_, v_a_3568_, v_a_3569_, v_a_3570_, v_a_3571_, v_a_3572_, v_a_3573_, v_a_3574_, v_a_3575_, v_a_3576_);
if (lean_obj_tag(v___x_3633_) == 0)
{
lean_object* v_a_3634_; lean_object* v_fst_3635_; lean_object* v_snd_3636_; lean_object* v___x_3637_; 
v_a_3634_ = lean_ctor_get(v___x_3633_, 0);
lean_inc(v_a_3634_);
lean_dec_ref_known(v___x_3633_, 1);
v_fst_3635_ = lean_ctor_get(v_a_3634_, 0);
lean_inc_n(v_fst_3635_, 2);
v_snd_3636_ = lean_ctor_get(v_a_3634_, 1);
lean_inc(v_snd_3636_);
lean_dec(v_a_3634_);
lean_inc(v_fst_3631_);
lean_inc_ref(v___y_3626_);
v___x_3637_ = l_Lean_mkApp6(v___y_3626_, v_arg_3624_, v_arg_3623_, v_fst_3631_, v_fst_3635_, v_snd_3632_, v_snd_3636_);
if (v_eqTrue_3566_ == 0)
{
lean_object* v___x_3638_; lean_object* v___x_3639_; 
v___x_3638_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__0);
v___x_3639_ = l_Lean_mkIntAdd(v_fst_3635_, v___x_3638_);
v___y_3579_ = v_a_3628_;
v___y_3580_ = v___x_3637_;
v_fst_3581_ = v___x_3639_;
v_snd_3582_ = v_fst_3631_;
goto v___jp_3578_;
}
else
{
v___y_3579_ = v_a_3628_;
v___y_3580_ = v___x_3637_;
v_fst_3581_ = v_fst_3631_;
v_snd_3582_ = v_fst_3635_;
goto v___jp_3578_;
}
}
else
{
lean_object* v_a_3640_; lean_object* v___x_3642_; uint8_t v_isShared_3643_; uint8_t v_isSharedCheck_3647_; 
lean_dec(v_snd_3632_);
lean_dec(v_fst_3631_);
lean_dec(v_a_3628_);
lean_dec_ref(v_arg_3624_);
lean_dec_ref(v_arg_3623_);
lean_dec_ref(v_e_3565_);
v_a_3640_ = lean_ctor_get(v___x_3633_, 0);
v_isSharedCheck_3647_ = !lean_is_exclusive(v___x_3633_);
if (v_isSharedCheck_3647_ == 0)
{
v___x_3642_ = v___x_3633_;
v_isShared_3643_ = v_isSharedCheck_3647_;
goto v_resetjp_3641_;
}
else
{
lean_inc(v_a_3640_);
lean_dec(v___x_3633_);
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
else
{
lean_object* v_a_3648_; lean_object* v___x_3650_; uint8_t v_isShared_3651_; uint8_t v_isSharedCheck_3655_; 
lean_dec(v_a_3628_);
lean_dec_ref(v_arg_3624_);
lean_dec_ref(v_arg_3623_);
lean_dec_ref(v_e_3565_);
v_a_3648_ = lean_ctor_get(v___x_3629_, 0);
v_isSharedCheck_3655_ = !lean_is_exclusive(v___x_3629_);
if (v_isSharedCheck_3655_ == 0)
{
v___x_3650_ = v___x_3629_;
v_isShared_3651_ = v_isSharedCheck_3655_;
goto v_resetjp_3649_;
}
else
{
lean_inc(v_a_3648_);
lean_dec(v___x_3629_);
v___x_3650_ = lean_box(0);
v_isShared_3651_ = v_isSharedCheck_3655_;
goto v_resetjp_3649_;
}
v_resetjp_3649_:
{
lean_object* v___x_3653_; 
if (v_isShared_3651_ == 0)
{
v___x_3653_ = v___x_3650_;
goto v_reusejp_3652_;
}
else
{
lean_object* v_reuseFailAlloc_3654_; 
v_reuseFailAlloc_3654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3654_, 0, v_a_3648_);
v___x_3653_ = v_reuseFailAlloc_3654_;
goto v_reusejp_3652_;
}
v_reusejp_3652_:
{
return v___x_3653_;
}
}
}
}
else
{
lean_object* v_a_3656_; lean_object* v___x_3658_; uint8_t v_isShared_3659_; uint8_t v_isSharedCheck_3663_; 
lean_dec_ref(v_arg_3624_);
lean_dec_ref(v_arg_3623_);
lean_dec_ref(v_e_3565_);
v_a_3656_ = lean_ctor_get(v___x_3627_, 0);
v_isSharedCheck_3663_ = !lean_is_exclusive(v___x_3627_);
if (v_isSharedCheck_3663_ == 0)
{
v___x_3658_ = v___x_3627_;
v_isShared_3659_ = v_isSharedCheck_3663_;
goto v_resetjp_3657_;
}
else
{
lean_inc(v_a_3656_);
lean_dec(v___x_3627_);
v___x_3658_ = lean_box(0);
v_isShared_3659_ = v_isSharedCheck_3663_;
goto v_resetjp_3657_;
}
v_resetjp_3657_:
{
lean_object* v___x_3661_; 
if (v_isShared_3659_ == 0)
{
v___x_3661_ = v___x_3658_;
goto v_reusejp_3660_;
}
else
{
lean_object* v_reuseFailAlloc_3662_; 
v_reuseFailAlloc_3662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3662_, 0, v_a_3656_);
v___x_3661_ = v_reuseFailAlloc_3662_;
goto v_reusejp_3660_;
}
v_reusejp_3660_:
{
return v___x_3661_;
}
}
}
}
}
}
}
}
}
v___jp_3578_:
{
lean_object* v___x_3583_; 
lean_inc(v___y_3579_);
v___x_3583_ = l_Lean_Meta_Grind_Arith_Cutsat_toLinearExpr(v_fst_3581_, v___y_3579_, v_a_3567_, v_a_3568_, v_a_3569_, v_a_3570_, v_a_3571_, v_a_3572_, v_a_3573_, v_a_3574_, v_a_3575_, v_a_3576_);
if (lean_obj_tag(v___x_3583_) == 0)
{
lean_object* v_a_3584_; lean_object* v___x_3585_; 
v_a_3584_ = lean_ctor_get(v___x_3583_, 0);
lean_inc(v_a_3584_);
lean_dec_ref_known(v___x_3583_, 1);
v___x_3585_ = l_Lean_Meta_Grind_Arith_Cutsat_toLinearExpr(v_snd_3582_, v___y_3579_, v_a_3567_, v_a_3568_, v_a_3569_, v_a_3570_, v_a_3571_, v_a_3572_, v_a_3573_, v_a_3574_, v_a_3575_, v_a_3576_);
if (lean_obj_tag(v___x_3585_) == 0)
{
lean_object* v_a_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; 
v_a_3586_ = lean_ctor_get(v___x_3585_, 0);
lean_inc_n(v_a_3586_, 2);
lean_dec_ref_known(v___x_3585_, 1);
lean_inc(v_a_3584_);
v___x_3587_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3587_, 0, v_a_3584_);
lean_ctor_set(v___x_3587_, 1, v_a_3586_);
v___x_3588_ = l_Int_Internal_Linear_Expr_norm(v___x_3587_);
lean_dec_ref_known(v___x_3587_, 2);
v___x_3589_ = lean_alloc_ctor(2, 4, 1);
lean_ctor_set(v___x_3589_, 0, v_e_3565_);
lean_ctor_set(v___x_3589_, 1, v___y_3580_);
lean_ctor_set(v___x_3589_, 2, v_a_3584_);
lean_ctor_set(v___x_3589_, 3, v_a_3586_);
lean_ctor_set_uint8(v___x_3589_, sizeof(void*)*4, v_eqTrue_3566_);
v___x_3590_ = lean_box(0);
v___x_3591_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3591_, 0, v___x_3588_);
lean_ctor_set(v___x_3591_, 1, v___x_3589_);
lean_ctor_set(v___x_3591_, 2, v___x_3590_);
v___x_3592_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertCore(v___x_3591_, v_a_3567_, v_a_3568_, v_a_3569_, v_a_3570_, v_a_3571_, v_a_3572_, v_a_3573_, v_a_3574_, v_a_3575_, v_a_3576_);
return v___x_3592_;
}
else
{
lean_object* v_a_3593_; lean_object* v___x_3595_; uint8_t v_isShared_3596_; uint8_t v_isSharedCheck_3600_; 
lean_dec(v_a_3584_);
lean_dec_ref(v___y_3580_);
lean_dec_ref(v_e_3565_);
v_a_3593_ = lean_ctor_get(v___x_3585_, 0);
v_isSharedCheck_3600_ = !lean_is_exclusive(v___x_3585_);
if (v_isSharedCheck_3600_ == 0)
{
v___x_3595_ = v___x_3585_;
v_isShared_3596_ = v_isSharedCheck_3600_;
goto v_resetjp_3594_;
}
else
{
lean_inc(v_a_3593_);
lean_dec(v___x_3585_);
v___x_3595_ = lean_box(0);
v_isShared_3596_ = v_isSharedCheck_3600_;
goto v_resetjp_3594_;
}
v_resetjp_3594_:
{
lean_object* v___x_3598_; 
if (v_isShared_3596_ == 0)
{
v___x_3598_ = v___x_3595_;
goto v_reusejp_3597_;
}
else
{
lean_object* v_reuseFailAlloc_3599_; 
v_reuseFailAlloc_3599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3599_, 0, v_a_3593_);
v___x_3598_ = v_reuseFailAlloc_3599_;
goto v_reusejp_3597_;
}
v_reusejp_3597_:
{
return v___x_3598_;
}
}
}
}
else
{
lean_object* v_a_3601_; lean_object* v___x_3603_; uint8_t v_isShared_3604_; uint8_t v_isSharedCheck_3608_; 
lean_dec_ref(v_snd_3582_);
lean_dec_ref(v___y_3580_);
lean_dec(v___y_3579_);
lean_dec_ref(v_e_3565_);
v_a_3601_ = lean_ctor_get(v___x_3583_, 0);
v_isSharedCheck_3608_ = !lean_is_exclusive(v___x_3583_);
if (v_isSharedCheck_3608_ == 0)
{
v___x_3603_ = v___x_3583_;
v_isShared_3604_ = v_isSharedCheck_3608_;
goto v_resetjp_3602_;
}
else
{
lean_inc(v_a_3601_);
lean_dec(v___x_3583_);
v___x_3603_ = lean_box(0);
v_isShared_3604_ = v_isSharedCheck_3608_;
goto v_resetjp_3602_;
}
v_resetjp_3602_:
{
lean_object* v___x_3606_; 
if (v_isShared_3604_ == 0)
{
v___x_3606_ = v___x_3603_;
goto v_reusejp_3605_;
}
else
{
lean_object* v_reuseFailAlloc_3607_; 
v_reuseFailAlloc_3607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3607_, 0, v_a_3601_);
v___x_3606_ = v_reuseFailAlloc_3607_;
goto v_reusejp_3605_;
}
v_reusejp_3605_:
{
return v___x_3606_;
}
}
}
}
v___jp_3609_:
{
lean_object* v___x_3610_; lean_object* v___x_3611_; 
v___x_3610_ = lean_box(0);
v___x_3611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3611_, 0, v___x_3610_);
return v___x_3611_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___boxed(lean_object* v_e_3666_, lean_object* v_eqTrue_3667_, lean_object* v_a_3668_, lean_object* v_a_3669_, lean_object* v_a_3670_, lean_object* v_a_3671_, lean_object* v_a_3672_, lean_object* v_a_3673_, lean_object* v_a_3674_, lean_object* v_a_3675_, lean_object* v_a_3676_, lean_object* v_a_3677_, lean_object* v_a_3678_){
_start:
{
uint8_t v_eqTrue_boxed_3679_; lean_object* v_res_3680_; 
v_eqTrue_boxed_3679_ = lean_unbox(v_eqTrue_3667_);
v_res_3680_ = l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe(v_e_3666_, v_eqTrue_boxed_3679_, v_a_3668_, v_a_3669_, v_a_3670_, v_a_3671_, v_a_3672_, v_a_3673_, v_a_3674_, v_a_3675_, v_a_3676_, v_a_3677_);
lean_dec(v_a_3677_);
lean_dec_ref(v_a_3676_);
lean_dec(v_a_3675_);
lean_dec_ref(v_a_3674_);
lean_dec(v_a_3673_);
lean_dec_ref(v_a_3672_);
lean_dec(v_a_3671_);
lean_dec_ref(v_a_3670_);
lean_dec(v_a_3669_);
lean_dec(v_a_3668_);
return v_res_3680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLe(lean_object* v_e_3686_, uint8_t v_eqTrue_3687_, lean_object* v_a_3688_, lean_object* v_a_3689_, lean_object* v_a_3690_, lean_object* v_a_3691_, lean_object* v_a_3692_, lean_object* v_a_3693_, lean_object* v_a_3694_, lean_object* v_a_3695_, lean_object* v_a_3696_, lean_object* v_a_3697_){
_start:
{
lean_object* v___x_3702_; 
v___x_3702_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_3690_);
if (lean_obj_tag(v___x_3702_) == 0)
{
lean_object* v_a_3703_; lean_object* v___x_3705_; uint8_t v_isShared_3706_; uint8_t v_isSharedCheck_3734_; 
v_a_3703_ = lean_ctor_get(v___x_3702_, 0);
v_isSharedCheck_3734_ = !lean_is_exclusive(v___x_3702_);
if (v_isSharedCheck_3734_ == 0)
{
v___x_3705_ = v___x_3702_;
v_isShared_3706_ = v_isSharedCheck_3734_;
goto v_resetjp_3704_;
}
else
{
lean_inc(v_a_3703_);
lean_dec(v___x_3702_);
v___x_3705_ = lean_box(0);
v_isShared_3706_ = v_isSharedCheck_3734_;
goto v_resetjp_3704_;
}
v_resetjp_3704_:
{
uint8_t v_lia_3707_; 
v_lia_3707_ = lean_ctor_get_uint8(v_a_3703_, sizeof(void*)*18 + 24);
lean_dec(v_a_3703_);
if (v_lia_3707_ == 0)
{
lean_object* v___x_3708_; lean_object* v___x_3710_; 
lean_dec_ref(v_e_3686_);
v___x_3708_ = lean_box(0);
if (v_isShared_3706_ == 0)
{
lean_ctor_set(v___x_3705_, 0, v___x_3708_);
v___x_3710_ = v___x_3705_;
goto v_reusejp_3709_;
}
else
{
lean_object* v_reuseFailAlloc_3711_; 
v_reuseFailAlloc_3711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3711_, 0, v___x_3708_);
v___x_3710_ = v_reuseFailAlloc_3711_;
goto v_reusejp_3709_;
}
v_reusejp_3709_:
{
return v___x_3710_;
}
}
else
{
lean_object* v___x_3712_; uint8_t v___x_3713_; 
v___x_3712_ = l_Lean_Expr_cleanupAnnotations(v_e_3686_);
v___x_3713_ = l_Lean_Expr_isApp(v___x_3712_);
if (v___x_3713_ == 0)
{
lean_dec_ref(v___x_3712_);
lean_del_object(v___x_3705_);
lean_dec_ref(v_e_3686_);
goto v___jp_3699_;
}
else
{
lean_object* v___x_3714_; uint8_t v___x_3715_; 
v___x_3714_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3712_);
lean_dec_ref(v___x_3712_);
v___x_3715_ = l_Lean_Expr_isApp(v___x_3714_);
if (v___x_3715_ == 0)
{
lean_dec_ref(v___x_3714_);
lean_del_object(v___x_3705_);
lean_dec_ref(v_e_3686_);
goto v___jp_3699_;
}
else
{
lean_object* v___x_3716_; uint8_t v___x_3717_; 
v___x_3716_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3714_);
lean_dec_ref(v___x_3714_);
v___x_3717_ = l_Lean_Expr_isApp(v___x_3716_);
if (v___x_3717_ == 0)
{
lean_dec_ref(v___x_3716_);
lean_del_object(v___x_3705_);
lean_dec_ref(v_e_3686_);
goto v___jp_3699_;
}
else
{
lean_object* v___x_3718_; uint8_t v___x_3719_; 
v___x_3718_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3716_);
lean_dec_ref(v___x_3716_);
v___x_3719_ = l_Lean_Expr_isApp(v___x_3718_);
if (v___x_3719_ == 0)
{
lean_dec_ref(v___x_3718_);
lean_del_object(v___x_3705_);
lean_dec_ref(v_e_3686_);
goto v___jp_3699_;
}
else
{
lean_object* v___x_3720_; lean_object* v___x_3721_; uint8_t v___x_3722_; 
v___x_3720_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3718_);
v___x_3721_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__2));
v___x_3722_ = l_Lean_Expr_isConstOf(v___x_3720_, v___x_3721_);
lean_dec_ref(v___x_3720_);
if (v___x_3722_ == 0)
{
lean_dec_ref(v___x_3718_);
lean_del_object(v___x_3705_);
lean_dec_ref(v_e_3686_);
goto v___jp_3699_;
}
else
{
lean_object* v_arg_3723_; lean_object* v___x_3724_; uint8_t v___x_3725_; 
v_arg_3723_ = lean_ctor_get(v___x_3718_, 1);
lean_inc_ref(v_arg_3723_);
lean_dec_ref(v___x_3718_);
v___x_3724_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__0));
v___x_3725_ = l_Lean_Expr_isConstOf(v_arg_3723_, v___x_3724_);
if (v___x_3725_ == 0)
{
lean_object* v___x_3726_; uint8_t v___x_3727_; 
v___x_3726_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__2));
v___x_3727_ = l_Lean_Expr_isConstOf(v_arg_3723_, v___x_3726_);
lean_dec_ref(v_arg_3723_);
if (v___x_3727_ == 0)
{
lean_object* v___x_3728_; lean_object* v___x_3730_; 
lean_dec_ref(v_e_3686_);
v___x_3728_ = lean_box(0);
if (v_isShared_3706_ == 0)
{
lean_ctor_set(v___x_3705_, 0, v___x_3728_);
v___x_3730_ = v___x_3705_;
goto v_reusejp_3729_;
}
else
{
lean_object* v_reuseFailAlloc_3731_; 
v_reuseFailAlloc_3731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3731_, 0, v___x_3728_);
v___x_3730_ = v_reuseFailAlloc_3731_;
goto v_reusejp_3729_;
}
v_reusejp_3729_:
{
return v___x_3730_;
}
}
else
{
lean_object* v___x_3732_; 
lean_del_object(v___x_3705_);
v___x_3732_ = l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe(v_e_3686_, v_eqTrue_3687_, v_a_3688_, v_a_3689_, v_a_3690_, v_a_3691_, v_a_3692_, v_a_3693_, v_a_3694_, v_a_3695_, v_a_3696_, v_a_3697_);
return v___x_3732_;
}
}
else
{
lean_object* v___x_3733_; 
lean_dec_ref(v_arg_3723_);
lean_del_object(v___x_3705_);
v___x_3733_ = l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe(v_e_3686_, v_eqTrue_3687_, v_a_3688_, v_a_3689_, v_a_3690_, v_a_3691_, v_a_3692_, v_a_3693_, v_a_3694_, v_a_3695_, v_a_3696_, v_a_3697_);
return v___x_3733_;
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
lean_object* v_a_3735_; lean_object* v___x_3737_; uint8_t v_isShared_3738_; uint8_t v_isSharedCheck_3742_; 
lean_dec_ref(v_e_3686_);
v_a_3735_ = lean_ctor_get(v___x_3702_, 0);
v_isSharedCheck_3742_ = !lean_is_exclusive(v___x_3702_);
if (v_isSharedCheck_3742_ == 0)
{
v___x_3737_ = v___x_3702_;
v_isShared_3738_ = v_isSharedCheck_3742_;
goto v_resetjp_3736_;
}
else
{
lean_inc(v_a_3735_);
lean_dec(v___x_3702_);
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
v___jp_3699_:
{
lean_object* v___x_3700_; lean_object* v___x_3701_; 
v___x_3700_ = lean_box(0);
v___x_3701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3701_, 0, v___x_3700_);
return v___x_3701_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___boxed(lean_object* v_e_3743_, lean_object* v_eqTrue_3744_, lean_object* v_a_3745_, lean_object* v_a_3746_, lean_object* v_a_3747_, lean_object* v_a_3748_, lean_object* v_a_3749_, lean_object* v_a_3750_, lean_object* v_a_3751_, lean_object* v_a_3752_, lean_object* v_a_3753_, lean_object* v_a_3754_, lean_object* v_a_3755_){
_start:
{
uint8_t v_eqTrue_boxed_3756_; lean_object* v_res_3757_; 
v_eqTrue_boxed_3756_ = lean_unbox(v_eqTrue_3744_);
v_res_3757_ = l_Lean_Meta_Grind_Arith_Cutsat_propagateLe(v_e_3743_, v_eqTrue_boxed_3756_, v_a_3745_, v_a_3746_, v_a_3747_, v_a_3748_, v_a_3749_, v_a_3750_, v_a_3751_, v_a_3752_, v_a_3753_, v_a_3754_);
lean_dec(v_a_3754_);
lean_dec_ref(v_a_3753_);
lean_dec(v_a_3752_);
lean_dec_ref(v_a_3751_);
lean_dec(v_a_3750_);
lean_dec_ref(v_a_3749_);
lean_dec(v_a_3748_);
lean_dec_ref(v_a_3747_);
lean_dec(v_a_3746_);
lean_dec(v_a_3745_);
return v_res_3757_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Int_OfNat(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Arith_Int(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Var(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Proof(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Nat(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Norm(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Int_OfNat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Arith_Int(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Var(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Proof(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Nat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Norm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(uint8_t builtin);
lean_object* initialize_Init_Data_Int_OfNat(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Arith_Int(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Var(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Proof(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Nat(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Norm(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Int_OfNat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Arith_Int(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Var(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Proof(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Nat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Norm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr(builtin);
}
#ifdef __cplusplus
}
#endif
