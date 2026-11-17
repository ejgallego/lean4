// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.Cutsat.Util
// Imports: public import Lean.Meta.Tactic.Grind.Arith.Cutsat.Types import Lean.Meta.Tactic.Simp.Arith.Int.Simp
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
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Meta_Grind_getGoalStackDepth___redArg(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
extern lean_object* l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
lean_object* l_Lean_Meta_Grind_SolverExtension_getState___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Int_Internal_Linear_Poly_denoteExpr___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkIntLit(lean_object*);
lean_object* l_Lean_mkIntLE(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_quoteIfArithTerm(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_mkIntDvd(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l_Lean_instToExprInt_mkNat(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint64_t lean_usize_to_uint64(size_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_shrink(lean_object*, lean_object*);
lean_object* l_Lean_mkIntEq(lean_object*, lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
uint8_t l_Lean_Meta_Grind_Arith_isNatType(lean_object*);
uint8_t l_Lean_Meta_Grind_Arith_isIntType(lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
lean_object* l_Rat_add(lean_object*, lean_object*);
extern lean_object* l_instInhabitedRat;
lean_object* l_Rat_mul(lean_object*, lean_object*);
uint8_t l_Rat_instDecidableLe(lean_object*, lean_object*);
uint8_t l_Lean_Bool_toLBool(uint8_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l_Int_Internal_Linear_Poly_isUnsatLe(lean_object*);
uint8_t l_Int_Internal_Linear_Poly_isUnsatDvd(lean_object*, lean_object*);
uint8_t l_instDecidableEqRat_decEq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isInconsistent___redArg(lean_object*);
lean_object* l_Lean_Meta_isNatValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getConfig___redArg(lean_object*);
lean_object* l_Int_Internal_Linear_Poly_getConst(lean_object*);
lean_object* l_Int_Internal_Linear_Poly_gcdCoeffs_x27(lean_object*);
lean_object* l_Int_Internal_Linear_Poly_leadCoeff(lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_Int_gcd(lean_object*, lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
lean_object* l_Int_lcm(lean_object*, lean_object*);
static lean_once_cell_t l_Int_Internal_Linear_Poly_isZero___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_Internal_Linear_Poly_isZero___closed__0;
LEAN_EXPORT uint8_t l_Int_Internal_Linear_Poly_isZero(lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_isZero___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_isSorted_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_isSorted_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Int_Internal_Linear_Poly_isSorted(lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_isSorted___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_get_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_get_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_modify_x27___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_modify_x27___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_modify_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_modify_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ISize"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(110, 52, 237, 35, 121, 142, 86, 222)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Int64"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(67, 100, 38, 50, 157, 43, 83, 90)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Int32"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(202, 24, 245, 188, 10, 96, 206, 241)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__5_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Int16"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(61, 121, 89, 120, 57, 100, 28, 22)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__7_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Int8"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(17, 171, 155, 218, 43, 77, 1, 67)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__9_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "USize"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__10_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(109, 217, 26, 131, 232, 198, 207, 245)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__11_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt64"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__12_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__12_value),LEAN_SCALAR_PTR_LITERAL(58, 113, 45, 150, 103, 228, 0, 41)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__13 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__13_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt32"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__14 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__14_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__14_value),LEAN_SCALAR_PTR_LITERAL(98, 192, 58, 241, 186, 14, 255, 186)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__15 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__15_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt16"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__16 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__16_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__16_value),LEAN_SCALAR_PTR_LITERAL(6, 214, 154, 233, 192, 74, 99, 135)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__17 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__17_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "UInt8"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__18 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__18_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__18_value),LEAN_SCALAR_PTR_LITERAL(144, 254, 64, 72, 7, 99, 197, 218)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__19 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__19_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "BitVec"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__20 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__20_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__20_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__21 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__21_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Fin"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__22 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__22_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__22_value),LEAN_SCALAR_PTR_LITERAL(62, 91, 162, 2, 110, 238, 123, 219)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__23 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__23_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isCutsatType___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isCutsatType___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isCutsatType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isCutsatType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_canBeEvaluated___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_canBeEvaluated___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_canBeEvaluated(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_canBeEvaluated___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_inconsistent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_cutsat_mk_var(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_mkVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVars___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVars___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_hasVar___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_hasVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_hasVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_hasVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isIntTerm___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isIntTerm___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isIntTerm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isIntTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_eliminated___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_eliminated___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_eliminated(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_eliminated___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_cutsat_assert_eq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_assert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " + "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "*"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_pp___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_pp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_pp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_pp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_denoteExpr_x27___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_denoteExpr_x27___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_denoteExpr_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_denoteExpr_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_denoteExpr_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_denoteExpr_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_markStored___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_markStored___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_markStored(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_markStored___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_markStored___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_markStored___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_markStored(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_markStored___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_markStored___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_markStored___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_markStored(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_markStored___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_markStored___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_markStored___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_markStored(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_markStored___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isTrivial(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isTrivial___boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = " ∣ "};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Neg"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "neg"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(105, 26, 70, 221, 245, 238, 127, 238)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__5;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__8;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instNegInt"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__10_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__9_value),LEAN_SCALAR_PTR_LITERAL(217, 109, 233, 1, 211, 122, 77, 88)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__10_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__11;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "`grind` internal error, unexpected"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__1;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_isTrivial_spec__0(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_isTrivial(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_isTrivial___boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 4, .m_data = " ≠ 0"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_cutsat_assert_le(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isTrivial(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isTrivial___boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 4, .m_data = " ≤ 0"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_denoteExpr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_denoteExpr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_denoteExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_denoteExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_isTrivial(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_isTrivial___boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " = 0"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_denoteExpr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_denoteExpr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_denoteExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_denoteExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getOccursOf___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getOccursOf___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getOccursOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getOccursOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__2_spec__2(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_updateOccs_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_updateOccs_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_updateOccs_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_updateOccs_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Int_Internal_Linear_Poly_updateOccs___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "`grind` internal error, unexpected constant polynomial"};
static const lean_object* l_Int_Internal_Linear_Poly_updateOccs___redArg___closed__0 = (const lean_object*)&l_Int_Internal_Linear_Poly_updateOccs___redArg___closed__0_value;
static lean_once_cell_t l_Int_Internal_Linear_Poly_updateOccs___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_Internal_Linear_Poly_updateOccs___redArg___closed__1;
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_updateOccs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_updateOccs___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_updateOccs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_updateOccs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_eval_x3f_go_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_eval_x3f_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_eval_x3f_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Int_Internal_Linear_Poly_eval_x3f_spec__0(lean_object*);
static lean_once_cell_t l_Int_Internal_Linear_Poly_eval_x3f___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_Internal_Linear_Poly_eval_x3f___redArg___closed__0;
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_eval_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_eval_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_eval_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_eval_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isUnsat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isUnsat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isUnsat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isUnsat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_satisfiedLe___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_satisfiedLe___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_satisfiedLe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_satisfiedLe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_satisfied___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_satisfied___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_satisfied(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_satisfied___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_findVarToSubst___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_findVarToSubst___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_findVarToSubst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_findVarToSubst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_numCases(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_numCases___boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__1;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__2_value)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_UnsatProof_pp___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_UnsatProof_pp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_UnsatProof_pp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_UnsatProof_pp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Int_Internal_Linear_Poly_isZero___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_unsigned_to_nat(0u);
v___x_2_ = lean_nat_to_int(v___x_1_);
return v___x_2_;
}
}
LEAN_EXPORT uint8_t l_Int_Internal_Linear_Poly_isZero(lean_object* v_x_3_){
_start:
{
if (lean_obj_tag(v_x_3_) == 0)
{
lean_object* v_k_4_; lean_object* v___x_5_; uint8_t v___x_6_; 
v_k_4_ = lean_ctor_get(v_x_3_, 0);
v___x_5_ = lean_obj_once(&l_Int_Internal_Linear_Poly_isZero___closed__0, &l_Int_Internal_Linear_Poly_isZero___closed__0_once, _init_l_Int_Internal_Linear_Poly_isZero___closed__0);
v___x_6_ = lean_int_dec_eq(v_k_4_, v___x_5_);
return v___x_6_;
}
else
{
uint8_t v___x_7_; 
v___x_7_ = 0;
return v___x_7_;
}
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_isZero___boxed(lean_object* v_x_8_){
_start:
{
uint8_t v_res_9_; lean_object* v_r_10_; 
v_res_9_ = l_Int_Internal_Linear_Poly_isZero(v_x_8_);
lean_dec_ref(v_x_8_);
v_r_10_ = lean_box(v_res_9_);
return v_r_10_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_isSorted_go(lean_object* v_a_11_, lean_object* v_a_12_){
_start:
{
if (lean_obj_tag(v_a_12_) == 0)
{
uint8_t v___x_13_; 
lean_dec(v_a_11_);
v___x_13_ = 1;
return v___x_13_;
}
else
{
if (lean_obj_tag(v_a_11_) == 0)
{
lean_object* v_v_14_; lean_object* v_p_15_; lean_object* v___x_16_; 
v_v_14_ = lean_ctor_get(v_a_12_, 1);
v_p_15_ = lean_ctor_get(v_a_12_, 2);
lean_inc(v_v_14_);
v___x_16_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_16_, 0, v_v_14_);
v_a_11_ = v___x_16_;
v_a_12_ = v_p_15_;
goto _start;
}
else
{
lean_object* v_v_18_; lean_object* v_p_19_; lean_object* v_val_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_29_; 
v_v_18_ = lean_ctor_get(v_a_12_, 1);
v_p_19_ = lean_ctor_get(v_a_12_, 2);
v_val_20_ = lean_ctor_get(v_a_11_, 0);
v_isSharedCheck_29_ = !lean_is_exclusive(v_a_11_);
if (v_isSharedCheck_29_ == 0)
{
v___x_22_ = v_a_11_;
v_isShared_23_ = v_isSharedCheck_29_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_val_20_);
lean_dec(v_a_11_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_29_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
uint8_t v___x_24_; 
v___x_24_ = lean_nat_dec_lt(v_v_18_, v_val_20_);
lean_dec(v_val_20_);
if (v___x_24_ == 0)
{
lean_del_object(v___x_22_);
return v___x_24_;
}
else
{
lean_object* v___x_26_; 
lean_inc(v_v_18_);
if (v_isShared_23_ == 0)
{
lean_ctor_set(v___x_22_, 0, v_v_18_);
v___x_26_ = v___x_22_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_28_; 
v_reuseFailAlloc_28_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_28_, 0, v_v_18_);
v___x_26_ = v_reuseFailAlloc_28_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
v_a_11_ = v___x_26_;
v_a_12_ = v_p_19_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_isSorted_go___boxed(lean_object* v_a_30_, lean_object* v_a_31_){
_start:
{
uint8_t v_res_32_; lean_object* v_r_33_; 
v_res_32_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_isSorted_go(v_a_30_, v_a_31_);
lean_dec_ref(v_a_31_);
v_r_33_ = lean_box(v_res_32_);
return v_r_33_;
}
}
LEAN_EXPORT uint8_t l_Int_Internal_Linear_Poly_isSorted(lean_object* v_p_34_){
_start:
{
lean_object* v___x_35_; uint8_t v___x_36_; 
v___x_35_ = lean_box(0);
v___x_36_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_isSorted_go(v___x_35_, v_p_34_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_isSorted___boxed(lean_object* v_p_37_){
_start:
{
uint8_t v_res_38_; lean_object* v_r_39_; 
v_res_38_ = l_Int_Internal_Linear_Poly_isSorted(v_p_37_);
lean_dec_ref(v_p_37_);
v_r_39_ = lean_box(v_res_38_);
return v_r_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(lean_object* v_a_40_, lean_object* v_a_41_){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_43_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_44_ = l_Lean_Meta_Grind_SolverExtension_getState___redArg(v___x_43_, v_a_40_, v_a_41_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg___boxed(lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_){
_start:
{
lean_object* v_res_48_; 
v_res_48_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v_a_45_, v_a_46_);
lean_dec_ref(v_a_46_);
lean_dec(v_a_45_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_get_x27(lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_, lean_object* v_a_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v_a_49_, v_a_57_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_get_x27___boxed(lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27(v_a_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_, v_a_66_, v_a_67_, v_a_68_, v_a_69_, v_a_70_);
lean_dec(v_a_70_);
lean_dec_ref(v_a_69_);
lean_dec(v_a_68_);
lean_dec_ref(v_a_67_);
lean_dec(v_a_66_);
lean_dec_ref(v_a_65_);
lean_dec(v_a_64_);
lean_dec_ref(v_a_63_);
lean_dec(v_a_62_);
lean_dec(v_a_61_);
return v_res_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_modify_x27___redArg(lean_object* v_f_73_, lean_object* v_a_74_){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_76_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_77_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_76_, v_f_73_, v_a_74_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_modify_x27___redArg___boxed(lean_object* v_f_78_, lean_object* v_a_79_, lean_object* v_a_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l_Lean_Meta_Grind_Arith_Cutsat_modify_x27___redArg(v_f_78_, v_a_79_);
lean_dec(v_a_79_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_modify_x27(lean_object* v_f_82_, lean_object* v_a_83_, lean_object* v_a_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_94_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_95_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_94_, v_f_82_, v_a_83_);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_modify_x27___boxed(lean_object* v_f_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_, lean_object* v_a_102_, lean_object* v_a_103_, lean_object* v_a_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = l_Lean_Meta_Grind_Arith_Cutsat_modify_x27(v_f_96_, v_a_97_, v_a_98_, v_a_99_, v_a_100_, v_a_101_, v_a_102_, v_a_103_, v_a_104_, v_a_105_, v_a_106_);
lean_dec(v_a_106_);
lean_dec_ref(v_a_105_);
lean_dec(v_a_104_);
lean_dec_ref(v_a_103_);
lean_dec(v_a_102_);
lean_dec_ref(v_a_101_);
lean_dec(v_a_100_);
lean_dec_ref(v_a_99_);
lean_dec(v_a_98_);
lean_dec(v_a_97_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg(lean_object* v_type_145_, lean_object* v_a_146_){
_start:
{
uint8_t v___x_152_; 
v___x_152_ = l_Lean_Meta_Grind_Arith_isNatType(v_type_145_);
if (v___x_152_ == 0)
{
uint8_t v___x_153_; 
v___x_153_ = l_Lean_Meta_Grind_Arith_isIntType(v_type_145_);
if (v___x_153_ == 0)
{
lean_object* v___x_154_; 
v___x_154_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_type_145_, v_a_146_);
if (lean_obj_tag(v___x_154_) == 0)
{
lean_object* v_a_155_; lean_object* v___x_157_; uint8_t v_isShared_158_; uint8_t v_isSharedCheck_194_; 
v_a_155_ = lean_ctor_get(v___x_154_, 0);
v_isSharedCheck_194_ = !lean_is_exclusive(v___x_154_);
if (v_isSharedCheck_194_ == 0)
{
v___x_157_ = v___x_154_;
v_isShared_158_ = v_isSharedCheck_194_;
goto v_resetjp_156_;
}
else
{
lean_inc(v_a_155_);
lean_dec(v___x_154_);
v___x_157_ = lean_box(0);
v_isShared_158_ = v_isSharedCheck_194_;
goto v_resetjp_156_;
}
v_resetjp_156_:
{
lean_object* v___x_159_; lean_object* v___x_160_; uint8_t v___x_161_; 
v___x_159_ = l_Lean_Expr_cleanupAnnotations(v_a_155_);
lean_dec(v_a_155_);
v___x_160_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__1));
v___x_161_ = l_Lean_Expr_isConstOf(v___x_159_, v___x_160_);
if (v___x_161_ == 0)
{
lean_object* v___x_162_; uint8_t v___x_163_; 
v___x_162_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__3));
v___x_163_ = l_Lean_Expr_isConstOf(v___x_159_, v___x_162_);
if (v___x_163_ == 0)
{
lean_object* v___x_164_; uint8_t v___x_165_; 
v___x_164_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__5));
v___x_165_ = l_Lean_Expr_isConstOf(v___x_159_, v___x_164_);
if (v___x_165_ == 0)
{
lean_object* v___x_166_; uint8_t v___x_167_; 
v___x_166_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__7));
v___x_167_ = l_Lean_Expr_isConstOf(v___x_159_, v___x_166_);
if (v___x_167_ == 0)
{
lean_object* v___x_168_; uint8_t v___x_169_; 
v___x_168_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__9));
v___x_169_ = l_Lean_Expr_isConstOf(v___x_159_, v___x_168_);
if (v___x_169_ == 0)
{
lean_object* v___x_170_; uint8_t v___x_171_; 
v___x_170_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__11));
v___x_171_ = l_Lean_Expr_isConstOf(v___x_159_, v___x_170_);
if (v___x_171_ == 0)
{
lean_object* v___x_172_; uint8_t v___x_173_; 
v___x_172_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__13));
v___x_173_ = l_Lean_Expr_isConstOf(v___x_159_, v___x_172_);
if (v___x_173_ == 0)
{
lean_object* v___x_174_; uint8_t v___x_175_; 
v___x_174_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__15));
v___x_175_ = l_Lean_Expr_isConstOf(v___x_159_, v___x_174_);
if (v___x_175_ == 0)
{
lean_object* v___x_176_; uint8_t v___x_177_; 
v___x_176_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__17));
v___x_177_ = l_Lean_Expr_isConstOf(v___x_159_, v___x_176_);
if (v___x_177_ == 0)
{
lean_object* v___x_178_; uint8_t v___x_179_; 
v___x_178_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__19));
v___x_179_ = l_Lean_Expr_isConstOf(v___x_159_, v___x_178_);
if (v___x_179_ == 0)
{
uint8_t v___x_180_; 
v___x_180_ = l_Lean_Expr_isApp(v___x_159_);
if (v___x_180_ == 0)
{
lean_object* v___x_181_; lean_object* v___x_183_; 
lean_dec_ref(v___x_159_);
v___x_181_ = lean_box(v___x_153_);
if (v_isShared_158_ == 0)
{
lean_ctor_set(v___x_157_, 0, v___x_181_);
v___x_183_ = v___x_157_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v___x_181_);
v___x_183_ = v_reuseFailAlloc_184_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
return v___x_183_;
}
}
else
{
lean_object* v___x_185_; lean_object* v___x_186_; uint8_t v___x_187_; 
v___x_185_ = l_Lean_Expr_appFnCleanup___redArg(v___x_159_);
lean_dec_ref(v___x_159_);
v___x_186_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__21));
v___x_187_ = l_Lean_Expr_isConstOf(v___x_185_, v___x_186_);
if (v___x_187_ == 0)
{
lean_object* v___x_188_; uint8_t v___x_189_; 
v___x_188_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__23));
v___x_189_ = l_Lean_Expr_isConstOf(v___x_185_, v___x_188_);
lean_dec_ref(v___x_185_);
if (v___x_189_ == 0)
{
lean_object* v___x_190_; lean_object* v___x_192_; 
v___x_190_ = lean_box(v___x_153_);
if (v_isShared_158_ == 0)
{
lean_ctor_set(v___x_157_, 0, v___x_190_);
v___x_192_ = v___x_157_;
goto v_reusejp_191_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v___x_190_);
v___x_192_ = v_reuseFailAlloc_193_;
goto v_reusejp_191_;
}
v_reusejp_191_:
{
return v___x_192_;
}
}
else
{
lean_del_object(v___x_157_);
goto v___jp_148_;
}
}
else
{
lean_dec_ref(v___x_185_);
lean_del_object(v___x_157_);
goto v___jp_148_;
}
}
}
else
{
lean_dec_ref(v___x_159_);
lean_del_object(v___x_157_);
goto v___jp_148_;
}
}
else
{
lean_dec_ref(v___x_159_);
lean_del_object(v___x_157_);
goto v___jp_148_;
}
}
else
{
lean_dec_ref(v___x_159_);
lean_del_object(v___x_157_);
goto v___jp_148_;
}
}
else
{
lean_dec_ref(v___x_159_);
lean_del_object(v___x_157_);
goto v___jp_148_;
}
}
else
{
lean_dec_ref(v___x_159_);
lean_del_object(v___x_157_);
goto v___jp_148_;
}
}
else
{
lean_dec_ref(v___x_159_);
lean_del_object(v___x_157_);
goto v___jp_148_;
}
}
else
{
lean_dec_ref(v___x_159_);
lean_del_object(v___x_157_);
goto v___jp_148_;
}
}
else
{
lean_dec_ref(v___x_159_);
lean_del_object(v___x_157_);
goto v___jp_148_;
}
}
else
{
lean_dec_ref(v___x_159_);
lean_del_object(v___x_157_);
goto v___jp_148_;
}
}
else
{
lean_dec_ref(v___x_159_);
lean_del_object(v___x_157_);
goto v___jp_148_;
}
}
}
else
{
lean_object* v_a_195_; lean_object* v___x_197_; uint8_t v_isShared_198_; uint8_t v_isSharedCheck_202_; 
v_a_195_ = lean_ctor_get(v___x_154_, 0);
v_isSharedCheck_202_ = !lean_is_exclusive(v___x_154_);
if (v_isSharedCheck_202_ == 0)
{
v___x_197_ = v___x_154_;
v_isShared_198_ = v_isSharedCheck_202_;
goto v_resetjp_196_;
}
else
{
lean_inc(v_a_195_);
lean_dec(v___x_154_);
v___x_197_ = lean_box(0);
v_isShared_198_ = v_isSharedCheck_202_;
goto v_resetjp_196_;
}
v_resetjp_196_:
{
lean_object* v___x_200_; 
if (v_isShared_198_ == 0)
{
v___x_200_ = v___x_197_;
goto v_reusejp_199_;
}
else
{
lean_object* v_reuseFailAlloc_201_; 
v_reuseFailAlloc_201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_201_, 0, v_a_195_);
v___x_200_ = v_reuseFailAlloc_201_;
goto v_reusejp_199_;
}
v_reusejp_199_:
{
return v___x_200_;
}
}
}
}
else
{
lean_dec_ref(v_type_145_);
goto v___jp_148_;
}
}
else
{
lean_dec_ref(v_type_145_);
goto v___jp_148_;
}
v___jp_148_:
{
uint8_t v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_149_ = 1;
v___x_150_ = lean_box(v___x_149_);
v___x_151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
return v___x_151_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___boxed(lean_object* v_type_203_, lean_object* v_a_204_, lean_object* v_a_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg(v_type_203_, v_a_204_);
lean_dec(v_a_204_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType(lean_object* v_type_207_, lean_object* v_a_208_, lean_object* v_a_209_, lean_object* v_a_210_, lean_object* v_a_211_, lean_object* v_a_212_, lean_object* v_a_213_, lean_object* v_a_214_, lean_object* v_a_215_, lean_object* v_a_216_, lean_object* v_a_217_){
_start:
{
lean_object* v___x_219_; 
v___x_219_ = l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg(v_type_207_, v_a_215_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___boxed(lean_object* v_type_220_, lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_, lean_object* v_a_229_, lean_object* v_a_230_, lean_object* v_a_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType(v_type_220_, v_a_221_, v_a_222_, v_a_223_, v_a_224_, v_a_225_, v_a_226_, v_a_227_, v_a_228_, v_a_229_, v_a_230_);
lean_dec(v_a_230_);
lean_dec_ref(v_a_229_);
lean_dec(v_a_228_);
lean_dec_ref(v_a_227_);
lean_dec(v_a_226_);
lean_dec_ref(v_a_225_);
lean_dec(v_a_224_);
lean_dec_ref(v_a_223_);
lean_dec(v_a_222_);
lean_dec(v_a_221_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isCutsatType___redArg(lean_object* v_type_233_, lean_object* v_a_234_, lean_object* v_a_235_){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_234_);
if (lean_obj_tag(v___x_237_) == 0)
{
lean_object* v_a_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_248_; 
v_a_238_ = lean_ctor_get(v___x_237_, 0);
v_isSharedCheck_248_ = !lean_is_exclusive(v___x_237_);
if (v_isSharedCheck_248_ == 0)
{
v___x_240_ = v___x_237_;
v_isShared_241_ = v_isSharedCheck_248_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_a_238_);
lean_dec(v___x_237_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_248_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
uint8_t v_lia_242_; 
v_lia_242_ = lean_ctor_get_uint8(v_a_238_, sizeof(void*)*18 + 24);
lean_dec(v_a_238_);
if (v_lia_242_ == 0)
{
lean_object* v___x_243_; lean_object* v___x_245_; 
lean_dec_ref(v_type_233_);
v___x_243_ = lean_box(v_lia_242_);
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
lean_object* v___x_247_; 
lean_del_object(v___x_240_);
v___x_247_ = l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg(v_type_233_, v_a_235_);
return v___x_247_;
}
}
}
else
{
lean_object* v_a_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_256_; 
lean_dec_ref(v_type_233_);
v_a_249_ = lean_ctor_get(v___x_237_, 0);
v_isSharedCheck_256_ = !lean_is_exclusive(v___x_237_);
if (v_isSharedCheck_256_ == 0)
{
v___x_251_ = v___x_237_;
v_isShared_252_ = v_isSharedCheck_256_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_a_249_);
lean_dec(v___x_237_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_256_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v___x_254_; 
if (v_isShared_252_ == 0)
{
v___x_254_ = v___x_251_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_255_; 
v_reuseFailAlloc_255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_255_, 0, v_a_249_);
v___x_254_ = v_reuseFailAlloc_255_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
return v___x_254_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isCutsatType___redArg___boxed(lean_object* v_type_257_, lean_object* v_a_258_, lean_object* v_a_259_, lean_object* v_a_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l_Lean_Meta_Grind_Arith_Cutsat_isCutsatType___redArg(v_type_257_, v_a_258_, v_a_259_);
lean_dec(v_a_259_);
lean_dec_ref(v_a_258_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isCutsatType(lean_object* v_type_262_, lean_object* v_a_263_, lean_object* v_a_264_, lean_object* v_a_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_){
_start:
{
lean_object* v___x_274_; 
v___x_274_ = l_Lean_Meta_Grind_Arith_Cutsat_isCutsatType___redArg(v_type_262_, v_a_265_, v_a_270_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isCutsatType___boxed(lean_object* v_type_275_, lean_object* v_a_276_, lean_object* v_a_277_, lean_object* v_a_278_, lean_object* v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_a_284_, lean_object* v_a_285_, lean_object* v_a_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l_Lean_Meta_Grind_Arith_Cutsat_isCutsatType(v_type_275_, v_a_276_, v_a_277_, v_a_278_, v_a_279_, v_a_280_, v_a_281_, v_a_282_, v_a_283_, v_a_284_, v_a_285_);
lean_dec(v_a_285_);
lean_dec_ref(v_a_284_);
lean_dec(v_a_283_);
lean_dec_ref(v_a_282_);
lean_dec(v_a_281_);
lean_dec_ref(v_a_280_);
lean_dec(v_a_279_);
lean_dec_ref(v_a_278_);
lean_dec(v_a_277_);
lean_dec(v_a_276_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_canBeEvaluated___redArg(lean_object* v_00_u03b1_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_){
_start:
{
lean_object* v___x_298_; lean_object* v___x_299_; uint8_t v___x_300_; 
v___x_298_ = l_Lean_Expr_cleanupAnnotations(v_00_u03b1_288_);
v___x_299_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__3));
v___x_300_ = l_Lean_Expr_isConstOf(v___x_298_, v___x_299_);
if (v___x_300_ == 0)
{
lean_object* v___x_301_; uint8_t v___x_302_; 
v___x_301_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__5));
v___x_302_ = l_Lean_Expr_isConstOf(v___x_298_, v___x_301_);
if (v___x_302_ == 0)
{
lean_object* v___x_303_; uint8_t v___x_304_; 
v___x_303_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__7));
v___x_304_ = l_Lean_Expr_isConstOf(v___x_298_, v___x_303_);
if (v___x_304_ == 0)
{
lean_object* v___x_305_; uint8_t v___x_306_; 
v___x_305_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__9));
v___x_306_ = l_Lean_Expr_isConstOf(v___x_298_, v___x_305_);
if (v___x_306_ == 0)
{
lean_object* v___x_307_; uint8_t v___x_308_; 
v___x_307_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__13));
v___x_308_ = l_Lean_Expr_isConstOf(v___x_298_, v___x_307_);
if (v___x_308_ == 0)
{
lean_object* v___x_309_; uint8_t v___x_310_; 
v___x_309_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__15));
v___x_310_ = l_Lean_Expr_isConstOf(v___x_298_, v___x_309_);
if (v___x_310_ == 0)
{
lean_object* v___x_311_; uint8_t v___x_312_; 
v___x_311_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__17));
v___x_312_ = l_Lean_Expr_isConstOf(v___x_298_, v___x_311_);
if (v___x_312_ == 0)
{
lean_object* v___x_313_; uint8_t v___x_314_; 
v___x_313_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__19));
v___x_314_ = l_Lean_Expr_isConstOf(v___x_298_, v___x_313_);
if (v___x_314_ == 0)
{
uint8_t v___x_315_; 
v___x_315_ = l_Lean_Expr_isApp(v___x_298_);
if (v___x_315_ == 0)
{
lean_object* v___x_316_; lean_object* v___x_317_; 
lean_dec_ref(v___x_298_);
v___x_316_ = lean_box(v___x_314_);
v___x_317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_317_, 0, v___x_316_);
return v___x_317_;
}
else
{
lean_object* v_arg_318_; lean_object* v___x_319_; lean_object* v___x_320_; uint8_t v___x_321_; 
v_arg_318_ = lean_ctor_get(v___x_298_, 1);
lean_inc_ref(v_arg_318_);
v___x_319_ = l_Lean_Expr_appFnCleanup___redArg(v___x_298_);
lean_dec_ref(v___x_298_);
v___x_320_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__21));
v___x_321_ = l_Lean_Expr_isConstOf(v___x_319_, v___x_320_);
if (v___x_321_ == 0)
{
lean_object* v___x_322_; uint8_t v___x_323_; 
v___x_322_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType___redArg___closed__23));
v___x_323_ = l_Lean_Expr_isConstOf(v___x_319_, v___x_322_);
lean_dec_ref(v___x_319_);
if (v___x_323_ == 0)
{
lean_object* v___x_324_; lean_object* v___x_325_; 
lean_dec_ref(v_arg_318_);
v___x_324_ = lean_box(v___x_314_);
v___x_325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_325_, 0, v___x_324_);
return v___x_325_;
}
else
{
lean_object* v___x_326_; 
v___x_326_ = l_Lean_Meta_isNatValue(v_arg_318_, v_a_289_, v_a_290_, v_a_291_, v_a_292_);
lean_dec_ref(v_arg_318_);
return v___x_326_;
}
}
else
{
lean_object* v___x_327_; 
lean_dec_ref(v___x_319_);
v___x_327_ = l_Lean_Meta_isNatValue(v_arg_318_, v_a_289_, v_a_290_, v_a_291_, v_a_292_);
lean_dec_ref(v_arg_318_);
return v___x_327_;
}
}
}
else
{
lean_dec_ref(v___x_298_);
goto v___jp_294_;
}
}
else
{
lean_dec_ref(v___x_298_);
goto v___jp_294_;
}
}
else
{
lean_dec_ref(v___x_298_);
goto v___jp_294_;
}
}
else
{
lean_dec_ref(v___x_298_);
goto v___jp_294_;
}
}
else
{
lean_dec_ref(v___x_298_);
goto v___jp_294_;
}
}
else
{
lean_dec_ref(v___x_298_);
goto v___jp_294_;
}
}
else
{
lean_dec_ref(v___x_298_);
goto v___jp_294_;
}
}
else
{
lean_dec_ref(v___x_298_);
goto v___jp_294_;
}
v___jp_294_:
{
uint8_t v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_295_ = 1;
v___x_296_ = lean_box(v___x_295_);
v___x_297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_297_, 0, v___x_296_);
return v___x_297_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_canBeEvaluated___redArg___boxed(lean_object* v_00_u03b1_328_, lean_object* v_a_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_){
_start:
{
lean_object* v_res_334_; 
v_res_334_ = l_Lean_Meta_Grind_Arith_Cutsat_canBeEvaluated___redArg(v_00_u03b1_328_, v_a_329_, v_a_330_, v_a_331_, v_a_332_);
lean_dec(v_a_332_);
lean_dec_ref(v_a_331_);
lean_dec(v_a_330_);
lean_dec_ref(v_a_329_);
lean_dec_ref(v_00_u03b1_328_);
return v_res_334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_canBeEvaluated(lean_object* v_00_u03b1_335_, lean_object* v_a_336_, lean_object* v_a_337_, lean_object* v_a_338_, lean_object* v_a_339_, lean_object* v_a_340_, lean_object* v_a_341_, lean_object* v_a_342_, lean_object* v_a_343_, lean_object* v_a_344_, lean_object* v_a_345_){
_start:
{
lean_object* v___x_347_; 
v___x_347_ = l_Lean_Meta_Grind_Arith_Cutsat_canBeEvaluated___redArg(v_00_u03b1_335_, v_a_342_, v_a_343_, v_a_344_, v_a_345_);
return v___x_347_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_canBeEvaluated___boxed(lean_object* v_00_u03b1_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_, lean_object* v_a_352_, lean_object* v_a_353_, lean_object* v_a_354_, lean_object* v_a_355_, lean_object* v_a_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_){
_start:
{
lean_object* v_res_360_; 
v_res_360_ = l_Lean_Meta_Grind_Arith_Cutsat_canBeEvaluated(v_00_u03b1_348_, v_a_349_, v_a_350_, v_a_351_, v_a_352_, v_a_353_, v_a_354_, v_a_355_, v_a_356_, v_a_357_, v_a_358_);
lean_dec(v_a_358_);
lean_dec_ref(v_a_357_);
lean_dec(v_a_356_);
lean_dec_ref(v_a_355_);
lean_dec(v_a_354_);
lean_dec_ref(v_a_353_);
lean_dec(v_a_352_);
lean_dec_ref(v_a_351_);
lean_dec(v_a_350_);
lean_dec(v_a_349_);
lean_dec_ref(v_00_u03b1_348_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___redArg(lean_object* v_a_361_, lean_object* v_a_362_){
_start:
{
lean_object* v___x_364_; 
v___x_364_ = l_Lean_Meta_Grind_isInconsistent___redArg(v_a_361_);
if (lean_obj_tag(v___x_364_) == 0)
{
lean_object* v_a_365_; uint8_t v___x_366_; 
v_a_365_ = lean_ctor_get(v___x_364_, 0);
v___x_366_ = lean_unbox(v_a_365_);
if (v___x_366_ == 0)
{
lean_object* v___x_367_; 
lean_inc(v_a_365_);
lean_dec_ref_known(v___x_364_, 1);
v___x_367_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v_a_361_, v_a_362_);
if (lean_obj_tag(v___x_367_) == 0)
{
lean_object* v_a_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_381_; 
v_a_368_ = lean_ctor_get(v___x_367_, 0);
v_isSharedCheck_381_ = !lean_is_exclusive(v___x_367_);
if (v_isSharedCheck_381_ == 0)
{
v___x_370_ = v___x_367_;
v_isShared_371_ = v_isSharedCheck_381_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_a_368_);
lean_dec(v___x_367_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_381_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v_conflict_x3f_372_; 
v_conflict_x3f_372_ = lean_ctor_get(v_a_368_, 18);
lean_inc(v_conflict_x3f_372_);
lean_dec(v_a_368_);
if (lean_obj_tag(v_conflict_x3f_372_) == 0)
{
lean_object* v___x_374_; 
if (v_isShared_371_ == 0)
{
lean_ctor_set(v___x_370_, 0, v_a_365_);
v___x_374_ = v___x_370_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v_a_365_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
return v___x_374_;
}
}
else
{
uint8_t v___x_376_; lean_object* v___x_377_; lean_object* v___x_379_; 
lean_dec_ref_known(v_conflict_x3f_372_, 1);
lean_dec(v_a_365_);
v___x_376_ = 1;
v___x_377_ = lean_box(v___x_376_);
if (v_isShared_371_ == 0)
{
lean_ctor_set(v___x_370_, 0, v___x_377_);
v___x_379_ = v___x_370_;
goto v_reusejp_378_;
}
else
{
lean_object* v_reuseFailAlloc_380_; 
v_reuseFailAlloc_380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_380_, 0, v___x_377_);
v___x_379_ = v_reuseFailAlloc_380_;
goto v_reusejp_378_;
}
v_reusejp_378_:
{
return v___x_379_;
}
}
}
}
else
{
lean_object* v_a_382_; lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_389_; 
lean_dec(v_a_365_);
v_a_382_ = lean_ctor_get(v___x_367_, 0);
v_isSharedCheck_389_ = !lean_is_exclusive(v___x_367_);
if (v_isSharedCheck_389_ == 0)
{
v___x_384_ = v___x_367_;
v_isShared_385_ = v_isSharedCheck_389_;
goto v_resetjp_383_;
}
else
{
lean_inc(v_a_382_);
lean_dec(v___x_367_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_389_;
goto v_resetjp_383_;
}
v_resetjp_383_:
{
lean_object* v___x_387_; 
if (v_isShared_385_ == 0)
{
v___x_387_ = v___x_384_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v_a_382_);
v___x_387_ = v_reuseFailAlloc_388_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
return v___x_387_;
}
}
}
}
else
{
return v___x_364_;
}
}
else
{
return v___x_364_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___redArg___boxed(lean_object* v_a_390_, lean_object* v_a_391_, lean_object* v_a_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___redArg(v_a_390_, v_a_391_);
lean_dec_ref(v_a_391_);
lean_dec(v_a_390_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_inconsistent(lean_object* v_a_394_, lean_object* v_a_395_, lean_object* v_a_396_, lean_object* v_a_397_, lean_object* v_a_398_, lean_object* v_a_399_, lean_object* v_a_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_){
_start:
{
lean_object* v___x_405_; 
v___x_405_ = l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___redArg(v_a_394_, v_a_402_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___boxed(lean_object* v_a_406_, lean_object* v_a_407_, lean_object* v_a_408_, lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_){
_start:
{
lean_object* v_res_417_; 
v_res_417_ = l_Lean_Meta_Grind_Arith_Cutsat_inconsistent(v_a_406_, v_a_407_, v_a_408_, v_a_409_, v_a_410_, v_a_411_, v_a_412_, v_a_413_, v_a_414_, v_a_415_);
lean_dec(v_a_415_);
lean_dec_ref(v_a_414_);
lean_dec(v_a_413_);
lean_dec_ref(v_a_412_);
lean_dec(v_a_411_);
lean_dec_ref(v_a_410_);
lean_dec(v_a_409_);
lean_dec_ref(v_a_408_);
lean_dec(v_a_407_);
lean_dec(v_a_406_);
return v_res_417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_mkVar___boxed(lean_object* v_e_430_, lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_, lean_object* v_a_434_, lean_object* v_a_435_, lean_object* v_a_436_, lean_object* v_a_437_, lean_object* v_a_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_00___x40___internal___hyg_441_){
_start:
{
lean_object* v_res_442_; 
v_res_442_ = lean_grind_cutsat_mk_var(v_e_430_, v_a_431_, v_a_432_, v_a_433_, v_a_434_, v_a_435_, v_a_436_, v_a_437_, v_a_438_, v_a_439_, v_a_440_);
return v_res_442_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVars___redArg(lean_object* v_a_443_, lean_object* v_a_444_){
_start:
{
lean_object* v___x_446_; 
v___x_446_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v_a_443_, v_a_444_);
if (lean_obj_tag(v___x_446_) == 0)
{
lean_object* v_a_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_455_; 
v_a_447_ = lean_ctor_get(v___x_446_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v___x_446_);
if (v_isSharedCheck_455_ == 0)
{
v___x_449_ = v___x_446_;
v_isShared_450_ = v_isSharedCheck_455_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_a_447_);
lean_dec(v___x_446_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_455_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v_vars_451_; lean_object* v___x_453_; 
v_vars_451_ = lean_ctor_get(v_a_447_, 0);
lean_inc_ref(v_vars_451_);
lean_dec(v_a_447_);
if (v_isShared_450_ == 0)
{
lean_ctor_set(v___x_449_, 0, v_vars_451_);
v___x_453_ = v___x_449_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_vars_451_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
}
}
}
else
{
lean_object* v_a_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_463_; 
v_a_456_ = lean_ctor_get(v___x_446_, 0);
v_isSharedCheck_463_ = !lean_is_exclusive(v___x_446_);
if (v_isSharedCheck_463_ == 0)
{
v___x_458_ = v___x_446_;
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_a_456_);
lean_dec(v___x_446_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
lean_object* v___x_461_; 
if (v_isShared_459_ == 0)
{
v___x_461_ = v___x_458_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v_a_456_);
v___x_461_ = v_reuseFailAlloc_462_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
return v___x_461_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVars___redArg___boxed(lean_object* v_a_464_, lean_object* v_a_465_, lean_object* v_a_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l_Lean_Meta_Grind_Arith_Cutsat_getVars___redArg(v_a_464_, v_a_465_);
lean_dec_ref(v_a_465_);
lean_dec(v_a_464_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVars(lean_object* v_a_468_, lean_object* v_a_469_, lean_object* v_a_470_, lean_object* v_a_471_, lean_object* v_a_472_, lean_object* v_a_473_, lean_object* v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_, lean_object* v_a_477_){
_start:
{
lean_object* v___x_479_; 
v___x_479_ = l_Lean_Meta_Grind_Arith_Cutsat_getVars___redArg(v_a_468_, v_a_476_);
return v___x_479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVars___boxed(lean_object* v_a_480_, lean_object* v_a_481_, lean_object* v_a_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_, lean_object* v_a_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l_Lean_Meta_Grind_Arith_Cutsat_getVars(v_a_480_, v_a_481_, v_a_482_, v_a_483_, v_a_484_, v_a_485_, v_a_486_, v_a_487_, v_a_488_, v_a_489_);
lean_dec(v_a_489_);
lean_dec_ref(v_a_488_);
lean_dec(v_a_487_);
lean_dec_ref(v_a_486_);
lean_dec(v_a_485_);
lean_dec_ref(v_a_484_);
lean_dec(v_a_483_);
lean_dec_ref(v_a_482_);
lean_dec(v_a_481_);
lean_dec(v_a_480_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg(lean_object* v_x_492_, lean_object* v_a_493_, lean_object* v_a_494_){
_start:
{
lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_496_ = l_Lean_instInhabitedExpr;
v___x_497_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v_a_493_, v_a_494_);
if (lean_obj_tag(v___x_497_) == 0)
{
lean_object* v_a_498_; lean_object* v___x_500_; uint8_t v_isShared_501_; uint8_t v_isSharedCheck_513_; 
v_a_498_ = lean_ctor_get(v___x_497_, 0);
v_isSharedCheck_513_ = !lean_is_exclusive(v___x_497_);
if (v_isSharedCheck_513_ == 0)
{
v___x_500_ = v___x_497_;
v_isShared_501_ = v_isSharedCheck_513_;
goto v_resetjp_499_;
}
else
{
lean_inc(v_a_498_);
lean_dec(v___x_497_);
v___x_500_ = lean_box(0);
v_isShared_501_ = v_isSharedCheck_513_;
goto v_resetjp_499_;
}
v_resetjp_499_:
{
lean_object* v_vars_502_; lean_object* v_size_503_; uint8_t v___x_504_; 
v_vars_502_ = lean_ctor_get(v_a_498_, 0);
lean_inc_ref(v_vars_502_);
lean_dec(v_a_498_);
v_size_503_ = lean_ctor_get(v_vars_502_, 2);
v___x_504_ = lean_nat_dec_lt(v_x_492_, v_size_503_);
if (v___x_504_ == 0)
{
lean_object* v___x_505_; lean_object* v___x_507_; 
lean_dec_ref(v_vars_502_);
v___x_505_ = l_outOfBounds___redArg(v___x_496_);
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 0, v___x_505_);
v___x_507_ = v___x_500_;
goto v_reusejp_506_;
}
else
{
lean_object* v_reuseFailAlloc_508_; 
v_reuseFailAlloc_508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_508_, 0, v___x_505_);
v___x_507_ = v_reuseFailAlloc_508_;
goto v_reusejp_506_;
}
v_reusejp_506_:
{
return v___x_507_;
}
}
else
{
lean_object* v___x_509_; lean_object* v___x_511_; 
v___x_509_ = l_Lean_PersistentArray_get_x21___redArg(v___x_496_, v_vars_502_, v_x_492_);
lean_dec_ref(v_vars_502_);
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 0, v___x_509_);
v___x_511_ = v___x_500_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v___x_509_);
v___x_511_ = v_reuseFailAlloc_512_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
return v___x_511_;
}
}
}
}
else
{
lean_object* v_a_514_; lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_521_; 
v_a_514_ = lean_ctor_get(v___x_497_, 0);
v_isSharedCheck_521_ = !lean_is_exclusive(v___x_497_);
if (v_isSharedCheck_521_ == 0)
{
v___x_516_ = v___x_497_;
v_isShared_517_ = v_isSharedCheck_521_;
goto v_resetjp_515_;
}
else
{
lean_inc(v_a_514_);
lean_dec(v___x_497_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_521_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v___x_519_; 
if (v_isShared_517_ == 0)
{
v___x_519_ = v___x_516_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v_a_514_);
v___x_519_ = v_reuseFailAlloc_520_;
goto v_reusejp_518_;
}
v_reusejp_518_:
{
return v___x_519_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg___boxed(lean_object* v_x_522_, lean_object* v_a_523_, lean_object* v_a_524_, lean_object* v_a_525_){
_start:
{
lean_object* v_res_526_; 
v_res_526_ = l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg(v_x_522_, v_a_523_, v_a_524_);
lean_dec_ref(v_a_524_);
lean_dec(v_a_523_);
lean_dec(v_x_522_);
return v_res_526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVar(lean_object* v_x_527_, lean_object* v_a_528_, lean_object* v_a_529_, lean_object* v_a_530_, lean_object* v_a_531_, lean_object* v_a_532_, lean_object* v_a_533_, lean_object* v_a_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_){
_start:
{
lean_object* v___x_539_; 
v___x_539_ = l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg(v_x_527_, v_a_528_, v_a_536_);
return v___x_539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVar___boxed(lean_object* v_x_540_, lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_, lean_object* v_a_550_, lean_object* v_a_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_Lean_Meta_Grind_Arith_Cutsat_getVar(v_x_540_, v_a_541_, v_a_542_, v_a_543_, v_a_544_, v_a_545_, v_a_546_, v_a_547_, v_a_548_, v_a_549_, v_a_550_);
lean_dec(v_a_550_);
lean_dec_ref(v_a_549_);
lean_dec(v_a_548_);
lean_dec_ref(v_a_547_);
lean_dec(v_a_546_);
lean_dec_ref(v_a_545_);
lean_dec(v_a_544_);
lean_dec_ref(v_a_543_);
lean_dec(v_a_542_);
lean_dec(v_a_541_);
lean_dec(v_x_540_);
return v_res_552_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_553_, lean_object* v_i_554_, lean_object* v_k_555_){
_start:
{
lean_object* v___x_556_; uint8_t v___x_557_; 
v___x_556_ = lean_array_get_size(v_keys_553_);
v___x_557_ = lean_nat_dec_lt(v_i_554_, v___x_556_);
if (v___x_557_ == 0)
{
lean_dec(v_i_554_);
return v___x_557_;
}
else
{
lean_object* v_k_x27_558_; size_t v___x_559_; size_t v___x_560_; uint8_t v___x_561_; 
v_k_x27_558_ = lean_array_fget_borrowed(v_keys_553_, v_i_554_);
v___x_559_ = lean_ptr_addr(v_k_555_);
v___x_560_ = lean_ptr_addr(v_k_x27_558_);
v___x_561_ = lean_usize_dec_eq(v___x_559_, v___x_560_);
if (v___x_561_ == 0)
{
lean_object* v___x_562_; lean_object* v___x_563_; 
v___x_562_ = lean_unsigned_to_nat(1u);
v___x_563_ = lean_nat_add(v_i_554_, v___x_562_);
lean_dec(v_i_554_);
v_i_554_ = v___x_563_;
goto _start;
}
else
{
lean_dec(v_i_554_);
return v___x_557_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_565_, lean_object* v_i_566_, lean_object* v_k_567_){
_start:
{
uint8_t v_res_568_; lean_object* v_r_569_; 
v_res_568_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0_spec__1___redArg(v_keys_565_, v_i_566_, v_k_567_);
lean_dec_ref(v_k_567_);
lean_dec_ref(v_keys_565_);
v_r_569_ = lean_box(v_res_568_);
return v_r_569_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0___redArg(lean_object* v_x_570_, size_t v_x_571_, lean_object* v_x_572_){
_start:
{
if (lean_obj_tag(v_x_570_) == 0)
{
lean_object* v_es_573_; lean_object* v___x_574_; size_t v___x_575_; size_t v___x_576_; lean_object* v_j_577_; lean_object* v___x_578_; 
v_es_573_ = lean_ctor_get(v_x_570_, 0);
v___x_574_ = lean_box(2);
v___x_575_ = ((size_t)31ULL);
v___x_576_ = lean_usize_land(v_x_571_, v___x_575_);
v_j_577_ = lean_usize_to_nat(v___x_576_);
v___x_578_ = lean_array_get_borrowed(v___x_574_, v_es_573_, v_j_577_);
lean_dec(v_j_577_);
switch(lean_obj_tag(v___x_578_))
{
case 0:
{
lean_object* v_key_579_; size_t v___x_580_; size_t v___x_581_; uint8_t v___x_582_; 
v_key_579_ = lean_ctor_get(v___x_578_, 0);
v___x_580_ = lean_ptr_addr(v_x_572_);
v___x_581_ = lean_ptr_addr(v_key_579_);
v___x_582_ = lean_usize_dec_eq(v___x_580_, v___x_581_);
return v___x_582_;
}
case 1:
{
lean_object* v_node_583_; size_t v___x_584_; size_t v___x_585_; 
v_node_583_ = lean_ctor_get(v___x_578_, 0);
v___x_584_ = ((size_t)5ULL);
v___x_585_ = lean_usize_shift_right(v_x_571_, v___x_584_);
v_x_570_ = v_node_583_;
v_x_571_ = v___x_585_;
goto _start;
}
default: 
{
uint8_t v___x_587_; 
v___x_587_ = 0;
return v___x_587_;
}
}
}
else
{
lean_object* v_ks_588_; lean_object* v___x_589_; uint8_t v___x_590_; 
v_ks_588_ = lean_ctor_get(v_x_570_, 0);
v___x_589_ = lean_unsigned_to_nat(0u);
v___x_590_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0_spec__1___redArg(v_ks_588_, v___x_589_, v_x_572_);
return v___x_590_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0___redArg___boxed(lean_object* v_x_591_, lean_object* v_x_592_, lean_object* v_x_593_){
_start:
{
size_t v_x_889__boxed_594_; uint8_t v_res_595_; lean_object* v_r_596_; 
v_x_889__boxed_594_ = lean_unbox_usize(v_x_592_);
lean_dec(v_x_592_);
v_res_595_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0___redArg(v_x_591_, v_x_889__boxed_594_, v_x_593_);
lean_dec_ref(v_x_593_);
lean_dec_ref(v_x_591_);
v_r_596_ = lean_box(v_res_595_);
return v_r_596_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0___redArg(lean_object* v_x_597_, lean_object* v_x_598_){
_start:
{
size_t v___x_599_; size_t v___x_600_; size_t v___x_601_; uint64_t v___x_602_; size_t v___x_603_; uint8_t v___x_604_; 
v___x_599_ = lean_ptr_addr(v_x_598_);
v___x_600_ = ((size_t)3ULL);
v___x_601_ = lean_usize_shift_right(v___x_599_, v___x_600_);
v___x_602_ = lean_usize_to_uint64(v___x_601_);
v___x_603_ = lean_uint64_to_usize(v___x_602_);
v___x_604_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0___redArg(v_x_597_, v___x_603_, v_x_598_);
return v___x_604_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0___redArg___boxed(lean_object* v_x_605_, lean_object* v_x_606_){
_start:
{
uint8_t v_res_607_; lean_object* v_r_608_; 
v_res_607_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0___redArg(v_x_605_, v_x_606_);
lean_dec_ref(v_x_606_);
lean_dec_ref(v_x_605_);
v_r_608_ = lean_box(v_res_607_);
return v_r_608_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_hasVar___redArg(lean_object* v_e_609_, lean_object* v_a_610_, lean_object* v_a_611_){
_start:
{
lean_object* v___x_613_; 
v___x_613_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v_a_610_, v_a_611_);
if (lean_obj_tag(v___x_613_) == 0)
{
lean_object* v_a_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_624_; 
v_a_614_ = lean_ctor_get(v___x_613_, 0);
v_isSharedCheck_624_ = !lean_is_exclusive(v___x_613_);
if (v_isSharedCheck_624_ == 0)
{
v___x_616_ = v___x_613_;
v_isShared_617_ = v_isSharedCheck_624_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_a_614_);
lean_dec(v___x_613_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_624_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v_varMap_618_; uint8_t v___x_619_; lean_object* v___x_620_; lean_object* v___x_622_; 
v_varMap_618_ = lean_ctor_get(v_a_614_, 1);
lean_inc_ref(v_varMap_618_);
lean_dec(v_a_614_);
v___x_619_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0___redArg(v_varMap_618_, v_e_609_);
lean_dec_ref(v_varMap_618_);
v___x_620_ = lean_box(v___x_619_);
if (v_isShared_617_ == 0)
{
lean_ctor_set(v___x_616_, 0, v___x_620_);
v___x_622_ = v___x_616_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v___x_620_);
v___x_622_ = v_reuseFailAlloc_623_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
return v___x_622_;
}
}
}
else
{
lean_object* v_a_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_632_; 
v_a_625_ = lean_ctor_get(v___x_613_, 0);
v_isSharedCheck_632_ = !lean_is_exclusive(v___x_613_);
if (v_isSharedCheck_632_ == 0)
{
v___x_627_ = v___x_613_;
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_a_625_);
lean_dec(v___x_613_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v___x_630_; 
if (v_isShared_628_ == 0)
{
v___x_630_ = v___x_627_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v_a_625_);
v___x_630_ = v_reuseFailAlloc_631_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
return v___x_630_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_hasVar___redArg___boxed(lean_object* v_e_633_, lean_object* v_a_634_, lean_object* v_a_635_, lean_object* v_a_636_){
_start:
{
lean_object* v_res_637_; 
v_res_637_ = l_Lean_Meta_Grind_Arith_Cutsat_hasVar___redArg(v_e_633_, v_a_634_, v_a_635_);
lean_dec_ref(v_a_635_);
lean_dec(v_a_634_);
lean_dec_ref(v_e_633_);
return v_res_637_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_hasVar(lean_object* v_e_638_, lean_object* v_a_639_, lean_object* v_a_640_, lean_object* v_a_641_, lean_object* v_a_642_, lean_object* v_a_643_, lean_object* v_a_644_, lean_object* v_a_645_, lean_object* v_a_646_, lean_object* v_a_647_, lean_object* v_a_648_){
_start:
{
lean_object* v___x_650_; 
v___x_650_ = l_Lean_Meta_Grind_Arith_Cutsat_hasVar___redArg(v_e_638_, v_a_639_, v_a_647_);
return v___x_650_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_hasVar___boxed(lean_object* v_e_651_, lean_object* v_a_652_, lean_object* v_a_653_, lean_object* v_a_654_, lean_object* v_a_655_, lean_object* v_a_656_, lean_object* v_a_657_, lean_object* v_a_658_, lean_object* v_a_659_, lean_object* v_a_660_, lean_object* v_a_661_, lean_object* v_a_662_){
_start:
{
lean_object* v_res_663_; 
v_res_663_ = l_Lean_Meta_Grind_Arith_Cutsat_hasVar(v_e_651_, v_a_652_, v_a_653_, v_a_654_, v_a_655_, v_a_656_, v_a_657_, v_a_658_, v_a_659_, v_a_660_, v_a_661_);
lean_dec(v_a_661_);
lean_dec_ref(v_a_660_);
lean_dec(v_a_659_);
lean_dec_ref(v_a_658_);
lean_dec(v_a_657_);
lean_dec_ref(v_a_656_);
lean_dec(v_a_655_);
lean_dec_ref(v_a_654_);
lean_dec(v_a_653_);
lean_dec(v_a_652_);
lean_dec_ref(v_e_651_);
return v_res_663_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0(lean_object* v_00_u03b2_664_, lean_object* v_x_665_, lean_object* v_x_666_){
_start:
{
uint8_t v___x_667_; 
v___x_667_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0___redArg(v_x_665_, v_x_666_);
return v___x_667_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0___boxed(lean_object* v_00_u03b2_668_, lean_object* v_x_669_, lean_object* v_x_670_){
_start:
{
uint8_t v_res_671_; lean_object* v_r_672_; 
v_res_671_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0(v_00_u03b2_668_, v_x_669_, v_x_670_);
lean_dec_ref(v_x_670_);
lean_dec_ref(v_x_669_);
v_r_672_ = lean_box(v_res_671_);
return v_r_672_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0(lean_object* v_00_u03b2_673_, lean_object* v_x_674_, size_t v_x_675_, lean_object* v_x_676_){
_start:
{
uint8_t v___x_677_; 
v___x_677_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0___redArg(v_x_674_, v_x_675_, v_x_676_);
return v___x_677_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0___boxed(lean_object* v_00_u03b2_678_, lean_object* v_x_679_, lean_object* v_x_680_, lean_object* v_x_681_){
_start:
{
size_t v_x_1006__boxed_682_; uint8_t v_res_683_; lean_object* v_r_684_; 
v_x_1006__boxed_682_ = lean_unbox_usize(v_x_680_);
lean_dec(v_x_680_);
v_res_683_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0(v_00_u03b2_678_, v_x_679_, v_x_1006__boxed_682_, v_x_681_);
lean_dec_ref(v_x_681_);
lean_dec_ref(v_x_679_);
v_r_684_ = lean_box(v_res_683_);
return v_r_684_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_685_, lean_object* v_keys_686_, lean_object* v_vals_687_, lean_object* v_heq_688_, lean_object* v_i_689_, lean_object* v_k_690_){
_start:
{
uint8_t v___x_691_; 
v___x_691_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0_spec__1___redArg(v_keys_686_, v_i_689_, v_k_690_);
return v___x_691_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_692_, lean_object* v_keys_693_, lean_object* v_vals_694_, lean_object* v_heq_695_, lean_object* v_i_696_, lean_object* v_k_697_){
_start:
{
uint8_t v_res_698_; lean_object* v_r_699_; 
v_res_698_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Cutsat_hasVar_spec__0_spec__0_spec__1(v_00_u03b2_692_, v_keys_693_, v_vals_694_, v_heq_695_, v_i_696_, v_k_697_);
lean_dec_ref(v_k_697_);
lean_dec_ref(v_vals_694_);
lean_dec_ref(v_keys_693_);
v_r_699_ = lean_box(v_res_698_);
return v_r_699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isIntTerm___redArg(lean_object* v_e_700_, lean_object* v_a_701_, lean_object* v_a_702_){
_start:
{
lean_object* v___x_704_; 
v___x_704_ = l_Lean_Meta_Grind_Arith_Cutsat_hasVar___redArg(v_e_700_, v_a_701_, v_a_702_);
return v___x_704_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isIntTerm___redArg___boxed(lean_object* v_e_705_, lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_){
_start:
{
lean_object* v_res_709_; 
v_res_709_ = l_Lean_Meta_Grind_Arith_Cutsat_isIntTerm___redArg(v_e_705_, v_a_706_, v_a_707_);
lean_dec_ref(v_a_707_);
lean_dec(v_a_706_);
lean_dec_ref(v_e_705_);
return v_res_709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isIntTerm(lean_object* v_e_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_, lean_object* v_a_714_, lean_object* v_a_715_, lean_object* v_a_716_, lean_object* v_a_717_, lean_object* v_a_718_, lean_object* v_a_719_, lean_object* v_a_720_){
_start:
{
lean_object* v___x_722_; 
v___x_722_ = l_Lean_Meta_Grind_Arith_Cutsat_hasVar___redArg(v_e_710_, v_a_711_, v_a_719_);
return v___x_722_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isIntTerm___boxed(lean_object* v_e_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_, lean_object* v_a_732_, lean_object* v_a_733_, lean_object* v_a_734_){
_start:
{
lean_object* v_res_735_; 
v_res_735_ = l_Lean_Meta_Grind_Arith_Cutsat_isIntTerm(v_e_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_, v_a_728_, v_a_729_, v_a_730_, v_a_731_, v_a_732_, v_a_733_);
lean_dec(v_a_733_);
lean_dec_ref(v_a_732_);
lean_dec(v_a_731_);
lean_dec_ref(v_a_730_);
lean_dec(v_a_729_);
lean_dec_ref(v_a_728_);
lean_dec(v_a_727_);
lean_dec_ref(v_a_726_);
lean_dec(v_a_725_);
lean_dec(v_a_724_);
lean_dec_ref(v_e_723_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_eliminated___redArg(lean_object* v_x_736_, lean_object* v_a_737_, lean_object* v_a_738_){
_start:
{
lean_object* v___x_740_; lean_object* v___x_741_; 
v___x_740_ = lean_box(0);
v___x_741_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v_a_737_, v_a_738_);
if (lean_obj_tag(v___x_741_) == 0)
{
lean_object* v_a_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_763_; 
v_a_742_ = lean_ctor_get(v___x_741_, 0);
v_isSharedCheck_763_ = !lean_is_exclusive(v___x_741_);
if (v_isSharedCheck_763_ == 0)
{
v___x_744_ = v___x_741_;
v_isShared_745_ = v_isSharedCheck_763_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_a_742_);
lean_dec(v___x_741_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_763_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___y_747_; lean_object* v_elimEqs_758_; lean_object* v_size_759_; uint8_t v___x_760_; 
v_elimEqs_758_ = lean_ctor_get(v_a_742_, 9);
lean_inc_ref(v_elimEqs_758_);
lean_dec(v_a_742_);
v_size_759_ = lean_ctor_get(v_elimEqs_758_, 2);
v___x_760_ = lean_nat_dec_lt(v_x_736_, v_size_759_);
if (v___x_760_ == 0)
{
lean_object* v___x_761_; 
lean_dec_ref(v_elimEqs_758_);
v___x_761_ = l_outOfBounds___redArg(v___x_740_);
v___y_747_ = v___x_761_;
goto v___jp_746_;
}
else
{
lean_object* v___x_762_; 
v___x_762_ = l_Lean_PersistentArray_get_x21___redArg(v___x_740_, v_elimEqs_758_, v_x_736_);
lean_dec_ref(v_elimEqs_758_);
v___y_747_ = v___x_762_;
goto v___jp_746_;
}
v___jp_746_:
{
if (lean_obj_tag(v___y_747_) == 0)
{
uint8_t v___x_748_; lean_object* v___x_749_; lean_object* v___x_751_; 
v___x_748_ = 0;
v___x_749_ = lean_box(v___x_748_);
if (v_isShared_745_ == 0)
{
lean_ctor_set(v___x_744_, 0, v___x_749_);
v___x_751_ = v___x_744_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v___x_749_);
v___x_751_ = v_reuseFailAlloc_752_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
return v___x_751_;
}
}
else
{
uint8_t v___x_753_; lean_object* v___x_754_; lean_object* v___x_756_; 
lean_dec_ref_known(v___y_747_, 1);
v___x_753_ = 1;
v___x_754_ = lean_box(v___x_753_);
if (v_isShared_745_ == 0)
{
lean_ctor_set(v___x_744_, 0, v___x_754_);
v___x_756_ = v___x_744_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v___x_754_);
v___x_756_ = v_reuseFailAlloc_757_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
return v___x_756_;
}
}
}
}
}
else
{
lean_object* v_a_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_771_; 
v_a_764_ = lean_ctor_get(v___x_741_, 0);
v_isSharedCheck_771_ = !lean_is_exclusive(v___x_741_);
if (v_isSharedCheck_771_ == 0)
{
v___x_766_ = v___x_741_;
v_isShared_767_ = v_isSharedCheck_771_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_a_764_);
lean_dec(v___x_741_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_771_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v___x_769_; 
if (v_isShared_767_ == 0)
{
v___x_769_ = v___x_766_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v_a_764_);
v___x_769_ = v_reuseFailAlloc_770_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
return v___x_769_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_eliminated___redArg___boxed(lean_object* v_x_772_, lean_object* v_a_773_, lean_object* v_a_774_, lean_object* v_a_775_){
_start:
{
lean_object* v_res_776_; 
v_res_776_ = l_Lean_Meta_Grind_Arith_Cutsat_eliminated___redArg(v_x_772_, v_a_773_, v_a_774_);
lean_dec_ref(v_a_774_);
lean_dec(v_a_773_);
lean_dec(v_x_772_);
return v_res_776_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_eliminated(lean_object* v_x_777_, lean_object* v_a_778_, lean_object* v_a_779_, lean_object* v_a_780_, lean_object* v_a_781_, lean_object* v_a_782_, lean_object* v_a_783_, lean_object* v_a_784_, lean_object* v_a_785_, lean_object* v_a_786_, lean_object* v_a_787_){
_start:
{
lean_object* v___x_789_; 
v___x_789_ = l_Lean_Meta_Grind_Arith_Cutsat_eliminated___redArg(v_x_777_, v_a_778_, v_a_786_);
return v___x_789_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_eliminated___boxed(lean_object* v_x_790_, lean_object* v_a_791_, lean_object* v_a_792_, lean_object* v_a_793_, lean_object* v_a_794_, lean_object* v_a_795_, lean_object* v_a_796_, lean_object* v_a_797_, lean_object* v_a_798_, lean_object* v_a_799_, lean_object* v_a_800_, lean_object* v_a_801_){
_start:
{
lean_object* v_res_802_; 
v_res_802_ = l_Lean_Meta_Grind_Arith_Cutsat_eliminated(v_x_790_, v_a_791_, v_a_792_, v_a_793_, v_a_794_, v_a_795_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
lean_dec(v_a_800_);
lean_dec_ref(v_a_799_);
lean_dec(v_a_798_);
lean_dec_ref(v_a_797_);
lean_dec(v_a_796_);
lean_dec_ref(v_a_795_);
lean_dec(v_a_794_);
lean_dec_ref(v_a_793_);
lean_dec(v_a_792_);
lean_dec(v_a_791_);
lean_dec(v_x_790_);
return v_res_802_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_assert___boxed(lean_object* v_c_815_, lean_object* v_a_816_, lean_object* v_a_817_, lean_object* v_a_818_, lean_object* v_a_819_, lean_object* v_a_820_, lean_object* v_a_821_, lean_object* v_a_822_, lean_object* v_a_823_, lean_object* v_a_824_, lean_object* v_a_825_, lean_object* v_a_00___x40___internal___hyg_826_){
_start:
{
lean_object* v_res_827_; 
v_res_827_ = lean_grind_cutsat_assert_eq(v_c_815_, v_a_816_, v_a_817_, v_a_818_, v_a_819_, v_a_820_, v_a_821_, v_a_822_, v_a_823_, v_a_824_, v_a_825_);
return v_res_827_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg___lam__0(lean_object* v_x_828_, lean_object* v_s_829_){
_start:
{
lean_object* v_vars_830_; lean_object* v_varMap_831_; lean_object* v_varsHistory_832_; lean_object* v_natToIntMap_833_; lean_object* v_natDef_834_; lean_object* v_dvds_835_; lean_object* v_lowers_836_; lean_object* v_uppers_837_; lean_object* v_diseqs_838_; lean_object* v_elimEqs_839_; lean_object* v_active_840_; lean_object* v_elimStack_841_; lean_object* v_occurs_842_; lean_object* v_assignment_843_; lean_object* v_nextCnstrId_844_; uint8_t v_caseSplits_845_; lean_object* v_steps_846_; lean_object* v_penalties_847_; lean_object* v_numReorderRequests_848_; lean_object* v_conflict_x3f_849_; lean_object* v_diseqSplits_850_; lean_object* v_divMod_851_; uint8_t v_usedCommRing_852_; lean_object* v_nonlinearOccs_853_; lean_object* v___x_855_; uint8_t v_isShared_856_; uint8_t v_isSharedCheck_861_; 
v_vars_830_ = lean_ctor_get(v_s_829_, 0);
v_varMap_831_ = lean_ctor_get(v_s_829_, 1);
v_varsHistory_832_ = lean_ctor_get(v_s_829_, 2);
v_natToIntMap_833_ = lean_ctor_get(v_s_829_, 3);
v_natDef_834_ = lean_ctor_get(v_s_829_, 4);
v_dvds_835_ = lean_ctor_get(v_s_829_, 5);
v_lowers_836_ = lean_ctor_get(v_s_829_, 6);
v_uppers_837_ = lean_ctor_get(v_s_829_, 7);
v_diseqs_838_ = lean_ctor_get(v_s_829_, 8);
v_elimEqs_839_ = lean_ctor_get(v_s_829_, 9);
v_active_840_ = lean_ctor_get(v_s_829_, 10);
v_elimStack_841_ = lean_ctor_get(v_s_829_, 11);
v_occurs_842_ = lean_ctor_get(v_s_829_, 12);
v_assignment_843_ = lean_ctor_get(v_s_829_, 13);
v_nextCnstrId_844_ = lean_ctor_get(v_s_829_, 14);
v_caseSplits_845_ = lean_ctor_get_uint8(v_s_829_, sizeof(void*)*22);
v_steps_846_ = lean_ctor_get(v_s_829_, 15);
v_penalties_847_ = lean_ctor_get(v_s_829_, 16);
v_numReorderRequests_848_ = lean_ctor_get(v_s_829_, 17);
v_conflict_x3f_849_ = lean_ctor_get(v_s_829_, 18);
v_diseqSplits_850_ = lean_ctor_get(v_s_829_, 19);
v_divMod_851_ = lean_ctor_get(v_s_829_, 20);
v_usedCommRing_852_ = lean_ctor_get_uint8(v_s_829_, sizeof(void*)*22 + 1);
v_nonlinearOccs_853_ = lean_ctor_get(v_s_829_, 21);
v_isSharedCheck_861_ = !lean_is_exclusive(v_s_829_);
if (v_isSharedCheck_861_ == 0)
{
v___x_855_ = v_s_829_;
v_isShared_856_ = v_isSharedCheck_861_;
goto v_resetjp_854_;
}
else
{
lean_inc(v_nonlinearOccs_853_);
lean_inc(v_divMod_851_);
lean_inc(v_diseqSplits_850_);
lean_inc(v_conflict_x3f_849_);
lean_inc(v_numReorderRequests_848_);
lean_inc(v_penalties_847_);
lean_inc(v_steps_846_);
lean_inc(v_nextCnstrId_844_);
lean_inc(v_assignment_843_);
lean_inc(v_occurs_842_);
lean_inc(v_elimStack_841_);
lean_inc(v_active_840_);
lean_inc(v_elimEqs_839_);
lean_inc(v_diseqs_838_);
lean_inc(v_uppers_837_);
lean_inc(v_lowers_836_);
lean_inc(v_dvds_835_);
lean_inc(v_natDef_834_);
lean_inc(v_natToIntMap_833_);
lean_inc(v_varsHistory_832_);
lean_inc(v_varMap_831_);
lean_inc(v_vars_830_);
lean_dec(v_s_829_);
v___x_855_ = lean_box(0);
v_isShared_856_ = v_isSharedCheck_861_;
goto v_resetjp_854_;
}
v_resetjp_854_:
{
lean_object* v___x_857_; lean_object* v___x_859_; 
v___x_857_ = l_Lean_Meta_Grind_Arith_shrink(v_assignment_843_, v_x_828_);
if (v_isShared_856_ == 0)
{
lean_ctor_set(v___x_855_, 13, v___x_857_);
v___x_859_ = v___x_855_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(0, 22, 2);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v_vars_830_);
lean_ctor_set(v_reuseFailAlloc_860_, 1, v_varMap_831_);
lean_ctor_set(v_reuseFailAlloc_860_, 2, v_varsHistory_832_);
lean_ctor_set(v_reuseFailAlloc_860_, 3, v_natToIntMap_833_);
lean_ctor_set(v_reuseFailAlloc_860_, 4, v_natDef_834_);
lean_ctor_set(v_reuseFailAlloc_860_, 5, v_dvds_835_);
lean_ctor_set(v_reuseFailAlloc_860_, 6, v_lowers_836_);
lean_ctor_set(v_reuseFailAlloc_860_, 7, v_uppers_837_);
lean_ctor_set(v_reuseFailAlloc_860_, 8, v_diseqs_838_);
lean_ctor_set(v_reuseFailAlloc_860_, 9, v_elimEqs_839_);
lean_ctor_set(v_reuseFailAlloc_860_, 10, v_active_840_);
lean_ctor_set(v_reuseFailAlloc_860_, 11, v_elimStack_841_);
lean_ctor_set(v_reuseFailAlloc_860_, 12, v_occurs_842_);
lean_ctor_set(v_reuseFailAlloc_860_, 13, v___x_857_);
lean_ctor_set(v_reuseFailAlloc_860_, 14, v_nextCnstrId_844_);
lean_ctor_set(v_reuseFailAlloc_860_, 15, v_steps_846_);
lean_ctor_set(v_reuseFailAlloc_860_, 16, v_penalties_847_);
lean_ctor_set(v_reuseFailAlloc_860_, 17, v_numReorderRequests_848_);
lean_ctor_set(v_reuseFailAlloc_860_, 18, v_conflict_x3f_849_);
lean_ctor_set(v_reuseFailAlloc_860_, 19, v_diseqSplits_850_);
lean_ctor_set(v_reuseFailAlloc_860_, 20, v_divMod_851_);
lean_ctor_set(v_reuseFailAlloc_860_, 21, v_nonlinearOccs_853_);
lean_ctor_set_uint8(v_reuseFailAlloc_860_, sizeof(void*)*22, v_caseSplits_845_);
lean_ctor_set_uint8(v_reuseFailAlloc_860_, sizeof(void*)*22 + 1, v_usedCommRing_852_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg___lam__0___boxed(lean_object* v_x_862_, lean_object* v_s_863_){
_start:
{
lean_object* v_res_864_; 
v_res_864_ = l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg___lam__0(v_x_862_, v_s_863_);
lean_dec(v_x_862_);
return v_res_864_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg(lean_object* v_x_865_, lean_object* v_a_866_){
_start:
{
lean_object* v___f_868_; lean_object* v___x_869_; lean_object* v___x_870_; 
v___f_868_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_868_, 0, v_x_865_);
v___x_869_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_870_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_869_, v___f_868_, v_a_866_);
return v___x_870_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg___boxed(lean_object* v_x_871_, lean_object* v_a_872_, lean_object* v_a_873_){
_start:
{
lean_object* v_res_874_; 
v_res_874_ = l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg(v_x_871_, v_a_872_);
lean_dec(v_a_872_);
return v_res_874_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom(lean_object* v_x_875_, lean_object* v_a_876_, lean_object* v_a_877_, lean_object* v_a_878_, lean_object* v_a_879_, lean_object* v_a_880_, lean_object* v_a_881_, lean_object* v_a_882_, lean_object* v_a_883_, lean_object* v_a_884_, lean_object* v_a_885_){
_start:
{
lean_object* v___x_887_; 
v___x_887_ = l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg(v_x_875_, v_a_876_);
return v___x_887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___boxed(lean_object* v_x_888_, lean_object* v_a_889_, lean_object* v_a_890_, lean_object* v_a_891_, lean_object* v_a_892_, lean_object* v_a_893_, lean_object* v_a_894_, lean_object* v_a_895_, lean_object* v_a_896_, lean_object* v_a_897_, lean_object* v_a_898_, lean_object* v_a_899_){
_start:
{
lean_object* v_res_900_; 
v_res_900_ = l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom(v_x_888_, v_a_889_, v_a_890_, v_a_891_, v_a_892_, v_a_893_, v_a_894_, v_a_895_, v_a_896_, v_a_897_, v_a_898_);
lean_dec(v_a_898_);
lean_dec_ref(v_a_897_);
lean_dec(v_a_896_);
lean_dec_ref(v_a_895_);
lean_dec(v_a_894_);
lean_dec_ref(v_a_893_);
lean_dec(v_a_892_);
lean_dec_ref(v_a_891_);
lean_dec(v_a_890_);
lean_dec(v_a_889_);
return v_res_900_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__1(void){
_start:
{
lean_object* v___x_902_; lean_object* v___x_903_; 
v___x_902_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__0));
v___x_903_ = l_Lean_stringToMessageData(v___x_902_);
return v___x_903_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__2(void){
_start:
{
lean_object* v___x_904_; lean_object* v___x_905_; 
v___x_904_ = lean_unsigned_to_nat(1u);
v___x_905_ = lean_nat_to_int(v___x_904_);
return v___x_905_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__4(void){
_start:
{
lean_object* v___x_907_; lean_object* v___x_908_; 
v___x_907_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__3));
v___x_908_ = l_Lean_stringToMessageData(v___x_907_);
return v___x_908_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg(lean_object* v_r_909_, lean_object* v_p_910_, lean_object* v_a_911_, lean_object* v_a_912_){
_start:
{
if (lean_obj_tag(v_p_910_) == 0)
{
lean_object* v_k_914_; lean_object* v___x_916_; uint8_t v_isShared_917_; uint8_t v_isSharedCheck_932_; 
v_k_914_ = lean_ctor_get(v_p_910_, 0);
v_isSharedCheck_932_ = !lean_is_exclusive(v_p_910_);
if (v_isSharedCheck_932_ == 0)
{
v___x_916_ = v_p_910_;
v_isShared_917_ = v_isSharedCheck_932_;
goto v_resetjp_915_;
}
else
{
lean_inc(v_k_914_);
lean_dec(v_p_910_);
v___x_916_ = lean_box(0);
v_isShared_917_ = v_isSharedCheck_932_;
goto v_resetjp_915_;
}
v_resetjp_915_:
{
lean_object* v___x_918_; uint8_t v___x_919_; 
v___x_918_ = lean_obj_once(&l_Int_Internal_Linear_Poly_isZero___closed__0, &l_Int_Internal_Linear_Poly_isZero___closed__0_once, _init_l_Int_Internal_Linear_Poly_isZero___closed__0);
v___x_919_ = lean_int_dec_eq(v_k_914_, v___x_918_);
if (v___x_919_ == 0)
{
lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_924_; 
v___x_920_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__1);
v___x_921_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_921_, 0, v_r_909_);
lean_ctor_set(v___x_921_, 1, v___x_920_);
v___x_922_ = l_Int_repr(v_k_914_);
lean_dec(v_k_914_);
if (v_isShared_917_ == 0)
{
lean_ctor_set_tag(v___x_916_, 3);
lean_ctor_set(v___x_916_, 0, v___x_922_);
v___x_924_ = v___x_916_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v___x_922_);
v___x_924_ = v_reuseFailAlloc_928_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; 
v___x_925_ = l_Lean_MessageData_ofFormat(v___x_924_);
v___x_926_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_926_, 0, v___x_921_);
lean_ctor_set(v___x_926_, 1, v___x_925_);
v___x_927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_927_, 0, v___x_926_);
return v___x_927_;
}
}
else
{
lean_object* v___x_930_; 
lean_dec(v_k_914_);
if (v_isShared_917_ == 0)
{
lean_ctor_set(v___x_916_, 0, v_r_909_);
v___x_930_ = v___x_916_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v_r_909_);
v___x_930_ = v_reuseFailAlloc_931_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
return v___x_930_;
}
}
}
}
else
{
lean_object* v_k_933_; lean_object* v_v_934_; lean_object* v_p_935_; lean_object* v___x_936_; uint8_t v___x_937_; 
v_k_933_ = lean_ctor_get(v_p_910_, 0);
lean_inc(v_k_933_);
v_v_934_ = lean_ctor_get(v_p_910_, 1);
lean_inc(v_v_934_);
v_p_935_ = lean_ctor_get(v_p_910_, 2);
lean_inc_ref(v_p_935_);
lean_dec_ref_known(v_p_910_, 3);
v___x_936_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__2);
v___x_937_ = lean_int_dec_eq(v_k_933_, v___x_936_);
if (v___x_937_ == 0)
{
lean_object* v___x_938_; 
v___x_938_ = l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg(v_v_934_, v_a_911_, v_a_912_);
lean_dec(v_v_934_);
if (lean_obj_tag(v___x_938_) == 0)
{
lean_object* v_a_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; 
v_a_939_ = lean_ctor_get(v___x_938_, 0);
lean_inc(v_a_939_);
lean_dec_ref_known(v___x_938_, 1);
v___x_940_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__1);
v___x_941_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_941_, 0, v_r_909_);
lean_ctor_set(v___x_941_, 1, v___x_940_);
v___x_942_ = l_Int_repr(v_k_933_);
lean_dec(v_k_933_);
v___x_943_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_943_, 0, v___x_942_);
v___x_944_ = l_Lean_MessageData_ofFormat(v___x_943_);
v___x_945_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_945_, 0, v___x_941_);
lean_ctor_set(v___x_945_, 1, v___x_944_);
v___x_946_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__4, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__4);
v___x_947_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_947_, 0, v___x_945_);
lean_ctor_set(v___x_947_, 1, v___x_946_);
v___x_948_ = l_Lean_Meta_Grind_Arith_quoteIfArithTerm(v_a_939_);
v___x_949_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_949_, 0, v___x_947_);
lean_ctor_set(v___x_949_, 1, v___x_948_);
v_r_909_ = v___x_949_;
v_p_910_ = v_p_935_;
goto _start;
}
else
{
lean_object* v_a_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_958_; 
lean_dec_ref(v_p_935_);
lean_dec(v_k_933_);
lean_dec_ref(v_r_909_);
v_a_951_ = lean_ctor_get(v___x_938_, 0);
v_isSharedCheck_958_ = !lean_is_exclusive(v___x_938_);
if (v_isSharedCheck_958_ == 0)
{
v___x_953_ = v___x_938_;
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_a_951_);
lean_dec(v___x_938_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v___x_956_; 
if (v_isShared_954_ == 0)
{
v___x_956_ = v___x_953_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v_a_951_);
v___x_956_ = v_reuseFailAlloc_957_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
return v___x_956_;
}
}
}
}
else
{
lean_object* v___x_959_; 
lean_dec(v_k_933_);
v___x_959_ = l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg(v_v_934_, v_a_911_, v_a_912_);
lean_dec(v_v_934_);
if (lean_obj_tag(v___x_959_) == 0)
{
lean_object* v_a_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; 
v_a_960_ = lean_ctor_get(v___x_959_, 0);
lean_inc(v_a_960_);
lean_dec_ref_known(v___x_959_, 1);
v___x_961_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__1);
v___x_962_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_962_, 0, v_r_909_);
lean_ctor_set(v___x_962_, 1, v___x_961_);
v___x_963_ = l_Lean_Meta_Grind_Arith_quoteIfArithTerm(v_a_960_);
v___x_964_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_964_, 0, v___x_962_);
lean_ctor_set(v___x_964_, 1, v___x_963_);
v_r_909_ = v___x_964_;
v_p_910_ = v_p_935_;
goto _start;
}
else
{
lean_object* v_a_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_973_; 
lean_dec_ref(v_p_935_);
lean_dec_ref(v_r_909_);
v_a_966_ = lean_ctor_get(v___x_959_, 0);
v_isSharedCheck_973_ = !lean_is_exclusive(v___x_959_);
if (v_isSharedCheck_973_ == 0)
{
v___x_968_ = v___x_959_;
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_a_966_);
lean_dec(v___x_959_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v___x_971_; 
if (v_isShared_969_ == 0)
{
v___x_971_ = v___x_968_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v_a_966_);
v___x_971_ = v_reuseFailAlloc_972_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
return v___x_971_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___boxed(lean_object* v_r_974_, lean_object* v_p_975_, lean_object* v_a_976_, lean_object* v_a_977_, lean_object* v_a_978_){
_start:
{
lean_object* v_res_979_; 
v_res_979_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg(v_r_974_, v_p_975_, v_a_976_, v_a_977_);
lean_dec_ref(v_a_977_);
lean_dec(v_a_976_);
return v_res_979_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go(lean_object* v_r_980_, lean_object* v_p_981_, lean_object* v_a_982_, lean_object* v_a_983_, lean_object* v_a_984_, lean_object* v_a_985_, lean_object* v_a_986_, lean_object* v_a_987_, lean_object* v_a_988_, lean_object* v_a_989_, lean_object* v_a_990_, lean_object* v_a_991_){
_start:
{
lean_object* v___x_993_; 
v___x_993_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg(v_r_980_, v_p_981_, v_a_982_, v_a_990_);
return v___x_993_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___boxed(lean_object* v_r_994_, lean_object* v_p_995_, lean_object* v_a_996_, lean_object* v_a_997_, lean_object* v_a_998_, lean_object* v_a_999_, lean_object* v_a_1000_, lean_object* v_a_1001_, lean_object* v_a_1002_, lean_object* v_a_1003_, lean_object* v_a_1004_, lean_object* v_a_1005_, lean_object* v_a_1006_){
_start:
{
lean_object* v_res_1007_; 
v_res_1007_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go(v_r_994_, v_p_995_, v_a_996_, v_a_997_, v_a_998_, v_a_999_, v_a_1000_, v_a_1001_, v_a_1002_, v_a_1003_, v_a_1004_, v_a_1005_);
lean_dec(v_a_1005_);
lean_dec_ref(v_a_1004_);
lean_dec(v_a_1003_);
lean_dec_ref(v_a_1002_);
lean_dec(v_a_1001_);
lean_dec_ref(v_a_1000_);
lean_dec(v_a_999_);
lean_dec_ref(v_a_998_);
lean_dec(v_a_997_);
lean_dec(v_a_996_);
return v_res_1007_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_pp___redArg(lean_object* v_p_1008_, lean_object* v_a_1009_, lean_object* v_a_1010_){
_start:
{
if (lean_obj_tag(v_p_1008_) == 0)
{
lean_object* v_k_1012_; lean_object* v___x_1014_; uint8_t v_isShared_1015_; uint8_t v_isSharedCheck_1022_; 
v_k_1012_ = lean_ctor_get(v_p_1008_, 0);
v_isSharedCheck_1022_ = !lean_is_exclusive(v_p_1008_);
if (v_isSharedCheck_1022_ == 0)
{
v___x_1014_ = v_p_1008_;
v_isShared_1015_ = v_isSharedCheck_1022_;
goto v_resetjp_1013_;
}
else
{
lean_inc(v_k_1012_);
lean_dec(v_p_1008_);
v___x_1014_ = lean_box(0);
v_isShared_1015_ = v_isSharedCheck_1022_;
goto v_resetjp_1013_;
}
v_resetjp_1013_:
{
lean_object* v___x_1016_; lean_object* v___x_1018_; 
v___x_1016_ = l_Int_repr(v_k_1012_);
lean_dec(v_k_1012_);
if (v_isShared_1015_ == 0)
{
lean_ctor_set_tag(v___x_1014_, 3);
lean_ctor_set(v___x_1014_, 0, v___x_1016_);
v___x_1018_ = v___x_1014_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v___x_1016_);
v___x_1018_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___x_1019_ = l_Lean_MessageData_ofFormat(v___x_1018_);
v___x_1020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1019_);
return v___x_1020_;
}
}
}
else
{
lean_object* v_k_1023_; lean_object* v_v_1024_; lean_object* v_p_1025_; lean_object* v___x_1026_; uint8_t v___x_1027_; 
v_k_1023_ = lean_ctor_get(v_p_1008_, 0);
lean_inc(v_k_1023_);
v_v_1024_ = lean_ctor_get(v_p_1008_, 1);
lean_inc(v_v_1024_);
v_p_1025_ = lean_ctor_get(v_p_1008_, 2);
lean_inc_ref(v_p_1025_);
lean_dec_ref_known(v_p_1008_, 3);
v___x_1026_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__2);
v___x_1027_ = lean_int_dec_eq(v_k_1023_, v___x_1026_);
if (v___x_1027_ == 0)
{
lean_object* v___x_1028_; 
v___x_1028_ = l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg(v_v_1024_, v_a_1009_, v_a_1010_);
lean_dec(v_v_1024_);
if (lean_obj_tag(v___x_1028_) == 0)
{
lean_object* v_a_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; 
v_a_1029_ = lean_ctor_get(v___x_1028_, 0);
lean_inc(v_a_1029_);
lean_dec_ref_known(v___x_1028_, 1);
v___x_1030_ = l_Int_repr(v_k_1023_);
lean_dec(v_k_1023_);
v___x_1031_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1031_, 0, v___x_1030_);
v___x_1032_ = l_Lean_MessageData_ofFormat(v___x_1031_);
v___x_1033_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__4, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__4);
v___x_1034_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1034_, 0, v___x_1032_);
lean_ctor_set(v___x_1034_, 1, v___x_1033_);
v___x_1035_ = l_Lean_Meta_Grind_Arith_quoteIfArithTerm(v_a_1029_);
v___x_1036_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1036_, 0, v___x_1034_);
lean_ctor_set(v___x_1036_, 1, v___x_1035_);
v___x_1037_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg(v___x_1036_, v_p_1025_, v_a_1009_, v_a_1010_);
return v___x_1037_;
}
else
{
lean_object* v_a_1038_; lean_object* v___x_1040_; uint8_t v_isShared_1041_; uint8_t v_isSharedCheck_1045_; 
lean_dec_ref(v_p_1025_);
lean_dec(v_k_1023_);
v_a_1038_ = lean_ctor_get(v___x_1028_, 0);
v_isSharedCheck_1045_ = !lean_is_exclusive(v___x_1028_);
if (v_isSharedCheck_1045_ == 0)
{
v___x_1040_ = v___x_1028_;
v_isShared_1041_ = v_isSharedCheck_1045_;
goto v_resetjp_1039_;
}
else
{
lean_inc(v_a_1038_);
lean_dec(v___x_1028_);
v___x_1040_ = lean_box(0);
v_isShared_1041_ = v_isSharedCheck_1045_;
goto v_resetjp_1039_;
}
v_resetjp_1039_:
{
lean_object* v___x_1043_; 
if (v_isShared_1041_ == 0)
{
v___x_1043_ = v___x_1040_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v_a_1038_);
v___x_1043_ = v_reuseFailAlloc_1044_;
goto v_reusejp_1042_;
}
v_reusejp_1042_:
{
return v___x_1043_;
}
}
}
}
else
{
lean_object* v___x_1046_; 
lean_dec(v_k_1023_);
v___x_1046_ = l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg(v_v_1024_, v_a_1009_, v_a_1010_);
lean_dec(v_v_1024_);
if (lean_obj_tag(v___x_1046_) == 0)
{
lean_object* v_a_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; 
v_a_1047_ = lean_ctor_get(v___x_1046_, 0);
lean_inc(v_a_1047_);
lean_dec_ref_known(v___x_1046_, 1);
v___x_1048_ = l_Lean_Meta_Grind_Arith_quoteIfArithTerm(v_a_1047_);
v___x_1049_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg(v___x_1048_, v_p_1025_, v_a_1009_, v_a_1010_);
return v___x_1049_;
}
else
{
lean_object* v_a_1050_; lean_object* v___x_1052_; uint8_t v_isShared_1053_; uint8_t v_isSharedCheck_1057_; 
lean_dec_ref(v_p_1025_);
v_a_1050_ = lean_ctor_get(v___x_1046_, 0);
v_isSharedCheck_1057_ = !lean_is_exclusive(v___x_1046_);
if (v_isSharedCheck_1057_ == 0)
{
v___x_1052_ = v___x_1046_;
v_isShared_1053_ = v_isSharedCheck_1057_;
goto v_resetjp_1051_;
}
else
{
lean_inc(v_a_1050_);
lean_dec(v___x_1046_);
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
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_pp___redArg___boxed(lean_object* v_p_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_){
_start:
{
lean_object* v_res_1062_; 
v_res_1062_ = l_Int_Internal_Linear_Poly_pp___redArg(v_p_1058_, v_a_1059_, v_a_1060_);
lean_dec_ref(v_a_1060_);
lean_dec(v_a_1059_);
return v_res_1062_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_pp(lean_object* v_p_1063_, lean_object* v_a_1064_, lean_object* v_a_1065_, lean_object* v_a_1066_, lean_object* v_a_1067_, lean_object* v_a_1068_, lean_object* v_a_1069_, lean_object* v_a_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_){
_start:
{
lean_object* v___x_1075_; 
v___x_1075_ = l_Int_Internal_Linear_Poly_pp___redArg(v_p_1063_, v_a_1064_, v_a_1072_);
return v___x_1075_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_pp___boxed(lean_object* v_p_1076_, lean_object* v_a_1077_, lean_object* v_a_1078_, lean_object* v_a_1079_, lean_object* v_a_1080_, lean_object* v_a_1081_, lean_object* v_a_1082_, lean_object* v_a_1083_, lean_object* v_a_1084_, lean_object* v_a_1085_, lean_object* v_a_1086_, lean_object* v_a_1087_){
_start:
{
lean_object* v_res_1088_; 
v_res_1088_ = l_Int_Internal_Linear_Poly_pp(v_p_1076_, v_a_1077_, v_a_1078_, v_a_1079_, v_a_1080_, v_a_1081_, v_a_1082_, v_a_1083_, v_a_1084_, v_a_1085_, v_a_1086_);
lean_dec(v_a_1086_);
lean_dec_ref(v_a_1085_);
lean_dec(v_a_1084_);
lean_dec_ref(v_a_1083_);
lean_dec(v_a_1082_);
lean_dec_ref(v_a_1081_);
lean_dec(v_a_1080_);
lean_dec_ref(v_a_1079_);
lean_dec(v_a_1078_);
lean_dec(v_a_1077_);
return v_res_1088_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_denoteExpr_x27___redArg___lam__0(lean_object* v_a_1089_, lean_object* v___x_1090_, lean_object* v_x_1091_){
_start:
{
lean_object* v_size_1092_; uint8_t v___x_1093_; 
v_size_1092_ = lean_ctor_get(v_a_1089_, 2);
v___x_1093_ = lean_nat_dec_lt(v_x_1091_, v_size_1092_);
if (v___x_1093_ == 0)
{
lean_object* v___x_1094_; 
v___x_1094_ = l_outOfBounds___redArg(v___x_1090_);
return v___x_1094_;
}
else
{
lean_object* v___x_1095_; 
v___x_1095_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1090_, v_a_1089_, v_x_1091_);
return v___x_1095_;
}
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_denoteExpr_x27___redArg___lam__0___boxed(lean_object* v_a_1096_, lean_object* v___x_1097_, lean_object* v_x_1098_){
_start:
{
lean_object* v_res_1099_; 
v_res_1099_ = l_Int_Internal_Linear_Poly_denoteExpr_x27___redArg___lam__0(v_a_1096_, v___x_1097_, v_x_1098_);
lean_dec(v_x_1098_);
lean_dec_ref(v___x_1097_);
lean_dec_ref(v_a_1096_);
return v_res_1099_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_denoteExpr_x27___redArg(lean_object* v_p_1100_, lean_object* v_a_1101_, lean_object* v_a_1102_){
_start:
{
lean_object* v___x_1104_; lean_object* v___x_1105_; 
v___x_1104_ = l_Lean_instInhabitedExpr;
v___x_1105_ = l_Lean_Meta_Grind_Arith_Cutsat_getVars___redArg(v_a_1101_, v_a_1102_);
if (lean_obj_tag(v___x_1105_) == 0)
{
lean_object* v_a_1106_; lean_object* v___f_1107_; lean_object* v___x_1108_; 
v_a_1106_ = lean_ctor_get(v___x_1105_, 0);
lean_inc(v_a_1106_);
lean_dec_ref_known(v___x_1105_, 1);
v___f_1107_ = lean_alloc_closure((void*)(l_Int_Internal_Linear_Poly_denoteExpr_x27___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1107_, 0, v_a_1106_);
lean_closure_set(v___f_1107_, 1, v___x_1104_);
v___x_1108_ = l_Int_Internal_Linear_Poly_denoteExpr___redArg(v___f_1107_, v_p_1100_);
return v___x_1108_;
}
else
{
lean_object* v_a_1109_; lean_object* v___x_1111_; uint8_t v_isShared_1112_; uint8_t v_isSharedCheck_1116_; 
lean_dec_ref(v_p_1100_);
v_a_1109_ = lean_ctor_get(v___x_1105_, 0);
v_isSharedCheck_1116_ = !lean_is_exclusive(v___x_1105_);
if (v_isSharedCheck_1116_ == 0)
{
v___x_1111_ = v___x_1105_;
v_isShared_1112_ = v_isSharedCheck_1116_;
goto v_resetjp_1110_;
}
else
{
lean_inc(v_a_1109_);
lean_dec(v___x_1105_);
v___x_1111_ = lean_box(0);
v_isShared_1112_ = v_isSharedCheck_1116_;
goto v_resetjp_1110_;
}
v_resetjp_1110_:
{
lean_object* v___x_1114_; 
if (v_isShared_1112_ == 0)
{
v___x_1114_ = v___x_1111_;
goto v_reusejp_1113_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v_a_1109_);
v___x_1114_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1113_;
}
v_reusejp_1113_:
{
return v___x_1114_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_denoteExpr_x27___redArg___boxed(lean_object* v_p_1117_, lean_object* v_a_1118_, lean_object* v_a_1119_, lean_object* v_a_1120_){
_start:
{
lean_object* v_res_1121_; 
v_res_1121_ = l_Int_Internal_Linear_Poly_denoteExpr_x27___redArg(v_p_1117_, v_a_1118_, v_a_1119_);
lean_dec_ref(v_a_1119_);
lean_dec(v_a_1118_);
return v_res_1121_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_denoteExpr_x27(lean_object* v_p_1122_, lean_object* v_a_1123_, lean_object* v_a_1124_, lean_object* v_a_1125_, lean_object* v_a_1126_, lean_object* v_a_1127_, lean_object* v_a_1128_, lean_object* v_a_1129_, lean_object* v_a_1130_, lean_object* v_a_1131_, lean_object* v_a_1132_){
_start:
{
lean_object* v___x_1134_; 
v___x_1134_ = l_Int_Internal_Linear_Poly_denoteExpr_x27___redArg(v_p_1122_, v_a_1123_, v_a_1131_);
return v___x_1134_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_denoteExpr_x27___boxed(lean_object* v_p_1135_, lean_object* v_a_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_, lean_object* v_a_1143_, lean_object* v_a_1144_, lean_object* v_a_1145_, lean_object* v_a_1146_){
_start:
{
lean_object* v_res_1147_; 
v_res_1147_ = l_Int_Internal_Linear_Poly_denoteExpr_x27(v_p_1135_, v_a_1136_, v_a_1137_, v_a_1138_, v_a_1139_, v_a_1140_, v_a_1141_, v_a_1142_, v_a_1143_, v_a_1144_, v_a_1145_);
lean_dec(v_a_1145_);
lean_dec_ref(v_a_1144_);
lean_dec(v_a_1143_);
lean_dec_ref(v_a_1142_);
lean_dec(v_a_1141_);
lean_dec_ref(v_a_1140_);
lean_dec(v_a_1139_);
lean_dec_ref(v_a_1138_);
lean_dec(v_a_1137_);
lean_dec(v_a_1136_);
return v_res_1147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_markStored___redArg(lean_object* v_c_1148_, lean_object* v_a_1149_){
_start:
{
lean_object* v_depth_x3f_1151_; 
v_depth_x3f_1151_ = lean_ctor_get(v_c_1148_, 2);
lean_inc(v_depth_x3f_1151_);
if (lean_obj_tag(v_depth_x3f_1151_) == 0)
{
lean_object* v_p_1152_; lean_object* v_h_1153_; lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1178_; 
v_p_1152_ = lean_ctor_get(v_c_1148_, 0);
v_h_1153_ = lean_ctor_get(v_c_1148_, 1);
v_isSharedCheck_1178_ = !lean_is_exclusive(v_c_1148_);
if (v_isSharedCheck_1178_ == 0)
{
lean_object* v_unused_1179_; 
v_unused_1179_ = lean_ctor_get(v_c_1148_, 2);
lean_dec(v_unused_1179_);
v___x_1155_ = v_c_1148_;
v_isShared_1156_ = v_isSharedCheck_1178_;
goto v_resetjp_1154_;
}
else
{
lean_inc(v_h_1153_);
lean_inc(v_p_1152_);
lean_dec(v_c_1148_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1178_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
lean_object* v___x_1157_; 
v___x_1157_ = l_Lean_Meta_Grind_getGoalStackDepth___redArg(v_a_1149_);
if (lean_obj_tag(v___x_1157_) == 0)
{
lean_object* v_a_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1169_; 
v_a_1158_ = lean_ctor_get(v___x_1157_, 0);
v_isSharedCheck_1169_ = !lean_is_exclusive(v___x_1157_);
if (v_isSharedCheck_1169_ == 0)
{
v___x_1160_ = v___x_1157_;
v_isShared_1161_ = v_isSharedCheck_1169_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_a_1158_);
lean_dec(v___x_1157_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1169_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1162_; lean_object* v___x_1164_; 
v___x_1162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1162_, 0, v_a_1158_);
if (v_isShared_1156_ == 0)
{
lean_ctor_set(v___x_1155_, 2, v___x_1162_);
v___x_1164_ = v___x_1155_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1168_; 
v_reuseFailAlloc_1168_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1168_, 0, v_p_1152_);
lean_ctor_set(v_reuseFailAlloc_1168_, 1, v_h_1153_);
lean_ctor_set(v_reuseFailAlloc_1168_, 2, v___x_1162_);
v___x_1164_ = v_reuseFailAlloc_1168_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
lean_object* v___x_1166_; 
if (v_isShared_1161_ == 0)
{
lean_ctor_set(v___x_1160_, 0, v___x_1164_);
v___x_1166_ = v___x_1160_;
goto v_reusejp_1165_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v___x_1164_);
v___x_1166_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1165_;
}
v_reusejp_1165_:
{
return v___x_1166_;
}
}
}
}
else
{
lean_object* v_a_1170_; lean_object* v___x_1172_; uint8_t v_isShared_1173_; uint8_t v_isSharedCheck_1177_; 
lean_del_object(v___x_1155_);
lean_dec_ref(v_h_1153_);
lean_dec_ref(v_p_1152_);
v_a_1170_ = lean_ctor_get(v___x_1157_, 0);
v_isSharedCheck_1177_ = !lean_is_exclusive(v___x_1157_);
if (v_isSharedCheck_1177_ == 0)
{
v___x_1172_ = v___x_1157_;
v_isShared_1173_ = v_isSharedCheck_1177_;
goto v_resetjp_1171_;
}
else
{
lean_inc(v_a_1170_);
lean_dec(v___x_1157_);
v___x_1172_ = lean_box(0);
v_isShared_1173_ = v_isSharedCheck_1177_;
goto v_resetjp_1171_;
}
v_resetjp_1171_:
{
lean_object* v___x_1175_; 
if (v_isShared_1173_ == 0)
{
v___x_1175_ = v___x_1172_;
goto v_reusejp_1174_;
}
else
{
lean_object* v_reuseFailAlloc_1176_; 
v_reuseFailAlloc_1176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1176_, 0, v_a_1170_);
v___x_1175_ = v_reuseFailAlloc_1176_;
goto v_reusejp_1174_;
}
v_reusejp_1174_:
{
return v___x_1175_;
}
}
}
}
}
else
{
lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1186_; 
v_isSharedCheck_1186_ = !lean_is_exclusive(v_depth_x3f_1151_);
if (v_isSharedCheck_1186_ == 0)
{
lean_object* v_unused_1187_; 
v_unused_1187_ = lean_ctor_get(v_depth_x3f_1151_, 0);
lean_dec(v_unused_1187_);
v___x_1181_ = v_depth_x3f_1151_;
v_isShared_1182_ = v_isSharedCheck_1186_;
goto v_resetjp_1180_;
}
else
{
lean_dec(v_depth_x3f_1151_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1186_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v___x_1184_; 
if (v_isShared_1182_ == 0)
{
lean_ctor_set_tag(v___x_1181_, 0);
lean_ctor_set(v___x_1181_, 0, v_c_1148_);
v___x_1184_ = v___x_1181_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v_c_1148_);
v___x_1184_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
return v___x_1184_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_markStored___redArg___boxed(lean_object* v_c_1188_, lean_object* v_a_1189_, lean_object* v_a_1190_){
_start:
{
lean_object* v_res_1191_; 
v_res_1191_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_markStored___redArg(v_c_1188_, v_a_1189_);
lean_dec(v_a_1189_);
return v_res_1191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_markStored(lean_object* v_c_1192_, lean_object* v_a_1193_, lean_object* v_a_1194_, lean_object* v_a_1195_, lean_object* v_a_1196_, lean_object* v_a_1197_, lean_object* v_a_1198_, lean_object* v_a_1199_, lean_object* v_a_1200_, lean_object* v_a_1201_, lean_object* v_a_1202_){
_start:
{
lean_object* v___x_1204_; 
v___x_1204_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_markStored___redArg(v_c_1192_, v_a_1193_);
return v___x_1204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_markStored___boxed(lean_object* v_c_1205_, lean_object* v_a_1206_, lean_object* v_a_1207_, lean_object* v_a_1208_, lean_object* v_a_1209_, lean_object* v_a_1210_, lean_object* v_a_1211_, lean_object* v_a_1212_, lean_object* v_a_1213_, lean_object* v_a_1214_, lean_object* v_a_1215_, lean_object* v_a_1216_){
_start:
{
lean_object* v_res_1217_; 
v_res_1217_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_markStored(v_c_1205_, v_a_1206_, v_a_1207_, v_a_1208_, v_a_1209_, v_a_1210_, v_a_1211_, v_a_1212_, v_a_1213_, v_a_1214_, v_a_1215_);
lean_dec(v_a_1215_);
lean_dec_ref(v_a_1214_);
lean_dec(v_a_1213_);
lean_dec_ref(v_a_1212_);
lean_dec(v_a_1211_);
lean_dec_ref(v_a_1210_);
lean_dec(v_a_1209_);
lean_dec_ref(v_a_1208_);
lean_dec(v_a_1207_);
lean_dec(v_a_1206_);
return v_res_1217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_markStored___redArg(lean_object* v_c_1218_, lean_object* v_a_1219_){
_start:
{
lean_object* v_depth_x3f_1221_; 
v_depth_x3f_1221_ = lean_ctor_get(v_c_1218_, 3);
lean_inc(v_depth_x3f_1221_);
if (lean_obj_tag(v_depth_x3f_1221_) == 0)
{
lean_object* v_d_1222_; lean_object* v_p_1223_; lean_object* v_h_1224_; lean_object* v___x_1226_; uint8_t v_isShared_1227_; uint8_t v_isSharedCheck_1249_; 
v_d_1222_ = lean_ctor_get(v_c_1218_, 0);
v_p_1223_ = lean_ctor_get(v_c_1218_, 1);
v_h_1224_ = lean_ctor_get(v_c_1218_, 2);
v_isSharedCheck_1249_ = !lean_is_exclusive(v_c_1218_);
if (v_isSharedCheck_1249_ == 0)
{
lean_object* v_unused_1250_; 
v_unused_1250_ = lean_ctor_get(v_c_1218_, 3);
lean_dec(v_unused_1250_);
v___x_1226_ = v_c_1218_;
v_isShared_1227_ = v_isSharedCheck_1249_;
goto v_resetjp_1225_;
}
else
{
lean_inc(v_h_1224_);
lean_inc(v_p_1223_);
lean_inc(v_d_1222_);
lean_dec(v_c_1218_);
v___x_1226_ = lean_box(0);
v_isShared_1227_ = v_isSharedCheck_1249_;
goto v_resetjp_1225_;
}
v_resetjp_1225_:
{
lean_object* v___x_1228_; 
v___x_1228_ = l_Lean_Meta_Grind_getGoalStackDepth___redArg(v_a_1219_);
if (lean_obj_tag(v___x_1228_) == 0)
{
lean_object* v_a_1229_; lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1240_; 
v_a_1229_ = lean_ctor_get(v___x_1228_, 0);
v_isSharedCheck_1240_ = !lean_is_exclusive(v___x_1228_);
if (v_isSharedCheck_1240_ == 0)
{
v___x_1231_ = v___x_1228_;
v_isShared_1232_ = v_isSharedCheck_1240_;
goto v_resetjp_1230_;
}
else
{
lean_inc(v_a_1229_);
lean_dec(v___x_1228_);
v___x_1231_ = lean_box(0);
v_isShared_1232_ = v_isSharedCheck_1240_;
goto v_resetjp_1230_;
}
v_resetjp_1230_:
{
lean_object* v___x_1233_; lean_object* v___x_1235_; 
v___x_1233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1233_, 0, v_a_1229_);
if (v_isShared_1227_ == 0)
{
lean_ctor_set(v___x_1226_, 3, v___x_1233_);
v___x_1235_ = v___x_1226_;
goto v_reusejp_1234_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v_d_1222_);
lean_ctor_set(v_reuseFailAlloc_1239_, 1, v_p_1223_);
lean_ctor_set(v_reuseFailAlloc_1239_, 2, v_h_1224_);
lean_ctor_set(v_reuseFailAlloc_1239_, 3, v___x_1233_);
v___x_1235_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1234_;
}
v_reusejp_1234_:
{
lean_object* v___x_1237_; 
if (v_isShared_1232_ == 0)
{
lean_ctor_set(v___x_1231_, 0, v___x_1235_);
v___x_1237_ = v___x_1231_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1241_; lean_object* v___x_1243_; uint8_t v_isShared_1244_; uint8_t v_isSharedCheck_1248_; 
lean_del_object(v___x_1226_);
lean_dec_ref(v_h_1224_);
lean_dec_ref(v_p_1223_);
lean_dec(v_d_1222_);
v_a_1241_ = lean_ctor_get(v___x_1228_, 0);
v_isSharedCheck_1248_ = !lean_is_exclusive(v___x_1228_);
if (v_isSharedCheck_1248_ == 0)
{
v___x_1243_ = v___x_1228_;
v_isShared_1244_ = v_isSharedCheck_1248_;
goto v_resetjp_1242_;
}
else
{
lean_inc(v_a_1241_);
lean_dec(v___x_1228_);
v___x_1243_ = lean_box(0);
v_isShared_1244_ = v_isSharedCheck_1248_;
goto v_resetjp_1242_;
}
v_resetjp_1242_:
{
lean_object* v___x_1246_; 
if (v_isShared_1244_ == 0)
{
v___x_1246_ = v___x_1243_;
goto v_reusejp_1245_;
}
else
{
lean_object* v_reuseFailAlloc_1247_; 
v_reuseFailAlloc_1247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1247_, 0, v_a_1241_);
v___x_1246_ = v_reuseFailAlloc_1247_;
goto v_reusejp_1245_;
}
v_reusejp_1245_:
{
return v___x_1246_;
}
}
}
}
}
else
{
lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1257_; 
v_isSharedCheck_1257_ = !lean_is_exclusive(v_depth_x3f_1221_);
if (v_isSharedCheck_1257_ == 0)
{
lean_object* v_unused_1258_; 
v_unused_1258_ = lean_ctor_get(v_depth_x3f_1221_, 0);
lean_dec(v_unused_1258_);
v___x_1252_ = v_depth_x3f_1221_;
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
else
{
lean_dec(v_depth_x3f_1221_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v___x_1255_; 
if (v_isShared_1253_ == 0)
{
lean_ctor_set_tag(v___x_1252_, 0);
lean_ctor_set(v___x_1252_, 0, v_c_1218_);
v___x_1255_ = v___x_1252_;
goto v_reusejp_1254_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v_c_1218_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_markStored___redArg___boxed(lean_object* v_c_1259_, lean_object* v_a_1260_, lean_object* v_a_1261_){
_start:
{
lean_object* v_res_1262_; 
v_res_1262_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_markStored___redArg(v_c_1259_, v_a_1260_);
lean_dec(v_a_1260_);
return v_res_1262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_markStored(lean_object* v_c_1263_, lean_object* v_a_1264_, lean_object* v_a_1265_, lean_object* v_a_1266_, lean_object* v_a_1267_, lean_object* v_a_1268_, lean_object* v_a_1269_, lean_object* v_a_1270_, lean_object* v_a_1271_, lean_object* v_a_1272_, lean_object* v_a_1273_){
_start:
{
lean_object* v___x_1275_; 
v___x_1275_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_markStored___redArg(v_c_1263_, v_a_1264_);
return v___x_1275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_markStored___boxed(lean_object* v_c_1276_, lean_object* v_a_1277_, lean_object* v_a_1278_, lean_object* v_a_1279_, lean_object* v_a_1280_, lean_object* v_a_1281_, lean_object* v_a_1282_, lean_object* v_a_1283_, lean_object* v_a_1284_, lean_object* v_a_1285_, lean_object* v_a_1286_, lean_object* v_a_1287_){
_start:
{
lean_object* v_res_1288_; 
v_res_1288_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_markStored(v_c_1276_, v_a_1277_, v_a_1278_, v_a_1279_, v_a_1280_, v_a_1281_, v_a_1282_, v_a_1283_, v_a_1284_, v_a_1285_, v_a_1286_);
lean_dec(v_a_1286_);
lean_dec_ref(v_a_1285_);
lean_dec(v_a_1284_);
lean_dec_ref(v_a_1283_);
lean_dec(v_a_1282_);
lean_dec_ref(v_a_1281_);
lean_dec(v_a_1280_);
lean_dec_ref(v_a_1279_);
lean_dec(v_a_1278_);
lean_dec(v_a_1277_);
return v_res_1288_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_markStored___redArg(lean_object* v_c_1289_, lean_object* v_a_1290_){
_start:
{
lean_object* v_depth_x3f_1292_; 
v_depth_x3f_1292_ = lean_ctor_get(v_c_1289_, 2);
lean_inc(v_depth_x3f_1292_);
if (lean_obj_tag(v_depth_x3f_1292_) == 0)
{
lean_object* v_p_1293_; lean_object* v_h_1294_; lean_object* v___x_1296_; uint8_t v_isShared_1297_; uint8_t v_isSharedCheck_1319_; 
v_p_1293_ = lean_ctor_get(v_c_1289_, 0);
v_h_1294_ = lean_ctor_get(v_c_1289_, 1);
v_isSharedCheck_1319_ = !lean_is_exclusive(v_c_1289_);
if (v_isSharedCheck_1319_ == 0)
{
lean_object* v_unused_1320_; 
v_unused_1320_ = lean_ctor_get(v_c_1289_, 2);
lean_dec(v_unused_1320_);
v___x_1296_ = v_c_1289_;
v_isShared_1297_ = v_isSharedCheck_1319_;
goto v_resetjp_1295_;
}
else
{
lean_inc(v_h_1294_);
lean_inc(v_p_1293_);
lean_dec(v_c_1289_);
v___x_1296_ = lean_box(0);
v_isShared_1297_ = v_isSharedCheck_1319_;
goto v_resetjp_1295_;
}
v_resetjp_1295_:
{
lean_object* v___x_1298_; 
v___x_1298_ = l_Lean_Meta_Grind_getGoalStackDepth___redArg(v_a_1290_);
if (lean_obj_tag(v___x_1298_) == 0)
{
lean_object* v_a_1299_; lean_object* v___x_1301_; uint8_t v_isShared_1302_; uint8_t v_isSharedCheck_1310_; 
v_a_1299_ = lean_ctor_get(v___x_1298_, 0);
v_isSharedCheck_1310_ = !lean_is_exclusive(v___x_1298_);
if (v_isSharedCheck_1310_ == 0)
{
v___x_1301_ = v___x_1298_;
v_isShared_1302_ = v_isSharedCheck_1310_;
goto v_resetjp_1300_;
}
else
{
lean_inc(v_a_1299_);
lean_dec(v___x_1298_);
v___x_1301_ = lean_box(0);
v_isShared_1302_ = v_isSharedCheck_1310_;
goto v_resetjp_1300_;
}
v_resetjp_1300_:
{
lean_object* v___x_1303_; lean_object* v___x_1305_; 
v___x_1303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1303_, 0, v_a_1299_);
if (v_isShared_1297_ == 0)
{
lean_ctor_set(v___x_1296_, 2, v___x_1303_);
v___x_1305_ = v___x_1296_;
goto v_reusejp_1304_;
}
else
{
lean_object* v_reuseFailAlloc_1309_; 
v_reuseFailAlloc_1309_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1309_, 0, v_p_1293_);
lean_ctor_set(v_reuseFailAlloc_1309_, 1, v_h_1294_);
lean_ctor_set(v_reuseFailAlloc_1309_, 2, v___x_1303_);
v___x_1305_ = v_reuseFailAlloc_1309_;
goto v_reusejp_1304_;
}
v_reusejp_1304_:
{
lean_object* v___x_1307_; 
if (v_isShared_1302_ == 0)
{
lean_ctor_set(v___x_1301_, 0, v___x_1305_);
v___x_1307_ = v___x_1301_;
goto v_reusejp_1306_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v___x_1305_);
v___x_1307_ = v_reuseFailAlloc_1308_;
goto v_reusejp_1306_;
}
v_reusejp_1306_:
{
return v___x_1307_;
}
}
}
}
else
{
lean_object* v_a_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1318_; 
lean_del_object(v___x_1296_);
lean_dec_ref(v_h_1294_);
lean_dec_ref(v_p_1293_);
v_a_1311_ = lean_ctor_get(v___x_1298_, 0);
v_isSharedCheck_1318_ = !lean_is_exclusive(v___x_1298_);
if (v_isSharedCheck_1318_ == 0)
{
v___x_1313_ = v___x_1298_;
v_isShared_1314_ = v_isSharedCheck_1318_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_a_1311_);
lean_dec(v___x_1298_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1318_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
lean_object* v___x_1316_; 
if (v_isShared_1314_ == 0)
{
v___x_1316_ = v___x_1313_;
goto v_reusejp_1315_;
}
else
{
lean_object* v_reuseFailAlloc_1317_; 
v_reuseFailAlloc_1317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1317_, 0, v_a_1311_);
v___x_1316_ = v_reuseFailAlloc_1317_;
goto v_reusejp_1315_;
}
v_reusejp_1315_:
{
return v___x_1316_;
}
}
}
}
}
else
{
lean_object* v___x_1322_; uint8_t v_isShared_1323_; uint8_t v_isSharedCheck_1327_; 
v_isSharedCheck_1327_ = !lean_is_exclusive(v_depth_x3f_1292_);
if (v_isSharedCheck_1327_ == 0)
{
lean_object* v_unused_1328_; 
v_unused_1328_ = lean_ctor_get(v_depth_x3f_1292_, 0);
lean_dec(v_unused_1328_);
v___x_1322_ = v_depth_x3f_1292_;
v_isShared_1323_ = v_isSharedCheck_1327_;
goto v_resetjp_1321_;
}
else
{
lean_dec(v_depth_x3f_1292_);
v___x_1322_ = lean_box(0);
v_isShared_1323_ = v_isSharedCheck_1327_;
goto v_resetjp_1321_;
}
v_resetjp_1321_:
{
lean_object* v___x_1325_; 
if (v_isShared_1323_ == 0)
{
lean_ctor_set_tag(v___x_1322_, 0);
lean_ctor_set(v___x_1322_, 0, v_c_1289_);
v___x_1325_ = v___x_1322_;
goto v_reusejp_1324_;
}
else
{
lean_object* v_reuseFailAlloc_1326_; 
v_reuseFailAlloc_1326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1326_, 0, v_c_1289_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_markStored___redArg___boxed(lean_object* v_c_1329_, lean_object* v_a_1330_, lean_object* v_a_1331_){
_start:
{
lean_object* v_res_1332_; 
v_res_1332_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_markStored___redArg(v_c_1329_, v_a_1330_);
lean_dec(v_a_1330_);
return v_res_1332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_markStored(lean_object* v_c_1333_, lean_object* v_a_1334_, lean_object* v_a_1335_, lean_object* v_a_1336_, lean_object* v_a_1337_, lean_object* v_a_1338_, lean_object* v_a_1339_, lean_object* v_a_1340_, lean_object* v_a_1341_, lean_object* v_a_1342_, lean_object* v_a_1343_){
_start:
{
lean_object* v___x_1345_; 
v___x_1345_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_markStored___redArg(v_c_1333_, v_a_1334_);
return v___x_1345_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_markStored___boxed(lean_object* v_c_1346_, lean_object* v_a_1347_, lean_object* v_a_1348_, lean_object* v_a_1349_, lean_object* v_a_1350_, lean_object* v_a_1351_, lean_object* v_a_1352_, lean_object* v_a_1353_, lean_object* v_a_1354_, lean_object* v_a_1355_, lean_object* v_a_1356_, lean_object* v_a_1357_){
_start:
{
lean_object* v_res_1358_; 
v_res_1358_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_markStored(v_c_1346_, v_a_1347_, v_a_1348_, v_a_1349_, v_a_1350_, v_a_1351_, v_a_1352_, v_a_1353_, v_a_1354_, v_a_1355_, v_a_1356_);
lean_dec(v_a_1356_);
lean_dec_ref(v_a_1355_);
lean_dec(v_a_1354_);
lean_dec_ref(v_a_1353_);
lean_dec(v_a_1352_);
lean_dec_ref(v_a_1351_);
lean_dec(v_a_1350_);
lean_dec_ref(v_a_1349_);
lean_dec(v_a_1348_);
lean_dec(v_a_1347_);
return v_res_1358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_markStored___redArg(lean_object* v_c_1359_, lean_object* v_a_1360_){
_start:
{
lean_object* v_depth_x3f_1362_; 
v_depth_x3f_1362_ = lean_ctor_get(v_c_1359_, 2);
lean_inc(v_depth_x3f_1362_);
if (lean_obj_tag(v_depth_x3f_1362_) == 0)
{
lean_object* v_p_1363_; lean_object* v_h_1364_; lean_object* v___x_1366_; uint8_t v_isShared_1367_; uint8_t v_isSharedCheck_1389_; 
v_p_1363_ = lean_ctor_get(v_c_1359_, 0);
v_h_1364_ = lean_ctor_get(v_c_1359_, 1);
v_isSharedCheck_1389_ = !lean_is_exclusive(v_c_1359_);
if (v_isSharedCheck_1389_ == 0)
{
lean_object* v_unused_1390_; 
v_unused_1390_ = lean_ctor_get(v_c_1359_, 2);
lean_dec(v_unused_1390_);
v___x_1366_ = v_c_1359_;
v_isShared_1367_ = v_isSharedCheck_1389_;
goto v_resetjp_1365_;
}
else
{
lean_inc(v_h_1364_);
lean_inc(v_p_1363_);
lean_dec(v_c_1359_);
v___x_1366_ = lean_box(0);
v_isShared_1367_ = v_isSharedCheck_1389_;
goto v_resetjp_1365_;
}
v_resetjp_1365_:
{
lean_object* v___x_1368_; 
v___x_1368_ = l_Lean_Meta_Grind_getGoalStackDepth___redArg(v_a_1360_);
if (lean_obj_tag(v___x_1368_) == 0)
{
lean_object* v_a_1369_; lean_object* v___x_1371_; uint8_t v_isShared_1372_; uint8_t v_isSharedCheck_1380_; 
v_a_1369_ = lean_ctor_get(v___x_1368_, 0);
v_isSharedCheck_1380_ = !lean_is_exclusive(v___x_1368_);
if (v_isSharedCheck_1380_ == 0)
{
v___x_1371_ = v___x_1368_;
v_isShared_1372_ = v_isSharedCheck_1380_;
goto v_resetjp_1370_;
}
else
{
lean_inc(v_a_1369_);
lean_dec(v___x_1368_);
v___x_1371_ = lean_box(0);
v_isShared_1372_ = v_isSharedCheck_1380_;
goto v_resetjp_1370_;
}
v_resetjp_1370_:
{
lean_object* v___x_1373_; lean_object* v___x_1375_; 
v___x_1373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1373_, 0, v_a_1369_);
if (v_isShared_1367_ == 0)
{
lean_ctor_set(v___x_1366_, 2, v___x_1373_);
v___x_1375_ = v___x_1366_;
goto v_reusejp_1374_;
}
else
{
lean_object* v_reuseFailAlloc_1379_; 
v_reuseFailAlloc_1379_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1379_, 0, v_p_1363_);
lean_ctor_set(v_reuseFailAlloc_1379_, 1, v_h_1364_);
lean_ctor_set(v_reuseFailAlloc_1379_, 2, v___x_1373_);
v___x_1375_ = v_reuseFailAlloc_1379_;
goto v_reusejp_1374_;
}
v_reusejp_1374_:
{
lean_object* v___x_1377_; 
if (v_isShared_1372_ == 0)
{
lean_ctor_set(v___x_1371_, 0, v___x_1375_);
v___x_1377_ = v___x_1371_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v___x_1375_);
v___x_1377_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
return v___x_1377_;
}
}
}
}
else
{
lean_object* v_a_1381_; lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1388_; 
lean_del_object(v___x_1366_);
lean_dec_ref(v_h_1364_);
lean_dec_ref(v_p_1363_);
v_a_1381_ = lean_ctor_get(v___x_1368_, 0);
v_isSharedCheck_1388_ = !lean_is_exclusive(v___x_1368_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1383_ = v___x_1368_;
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
else
{
lean_inc(v_a_1381_);
lean_dec(v___x_1368_);
v___x_1383_ = lean_box(0);
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
v_resetjp_1382_:
{
lean_object* v___x_1386_; 
if (v_isShared_1384_ == 0)
{
v___x_1386_ = v___x_1383_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v_a_1381_);
v___x_1386_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
return v___x_1386_;
}
}
}
}
}
else
{
lean_object* v___x_1392_; uint8_t v_isShared_1393_; uint8_t v_isSharedCheck_1397_; 
v_isSharedCheck_1397_ = !lean_is_exclusive(v_depth_x3f_1362_);
if (v_isSharedCheck_1397_ == 0)
{
lean_object* v_unused_1398_; 
v_unused_1398_ = lean_ctor_get(v_depth_x3f_1362_, 0);
lean_dec(v_unused_1398_);
v___x_1392_ = v_depth_x3f_1362_;
v_isShared_1393_ = v_isSharedCheck_1397_;
goto v_resetjp_1391_;
}
else
{
lean_dec(v_depth_x3f_1362_);
v___x_1392_ = lean_box(0);
v_isShared_1393_ = v_isSharedCheck_1397_;
goto v_resetjp_1391_;
}
v_resetjp_1391_:
{
lean_object* v___x_1395_; 
if (v_isShared_1393_ == 0)
{
lean_ctor_set_tag(v___x_1392_, 0);
lean_ctor_set(v___x_1392_, 0, v_c_1359_);
v___x_1395_ = v___x_1392_;
goto v_reusejp_1394_;
}
else
{
lean_object* v_reuseFailAlloc_1396_; 
v_reuseFailAlloc_1396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1396_, 0, v_c_1359_);
v___x_1395_ = v_reuseFailAlloc_1396_;
goto v_reusejp_1394_;
}
v_reusejp_1394_:
{
return v___x_1395_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_markStored___redArg___boxed(lean_object* v_c_1399_, lean_object* v_a_1400_, lean_object* v_a_1401_){
_start:
{
lean_object* v_res_1402_; 
v_res_1402_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_markStored___redArg(v_c_1399_, v_a_1400_);
lean_dec(v_a_1400_);
return v_res_1402_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_markStored(lean_object* v_c_1403_, lean_object* v_a_1404_, lean_object* v_a_1405_, lean_object* v_a_1406_, lean_object* v_a_1407_, lean_object* v_a_1408_, lean_object* v_a_1409_, lean_object* v_a_1410_, lean_object* v_a_1411_, lean_object* v_a_1412_, lean_object* v_a_1413_){
_start:
{
lean_object* v___x_1415_; 
v___x_1415_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_markStored___redArg(v_c_1403_, v_a_1404_);
return v___x_1415_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_markStored___boxed(lean_object* v_c_1416_, lean_object* v_a_1417_, lean_object* v_a_1418_, lean_object* v_a_1419_, lean_object* v_a_1420_, lean_object* v_a_1421_, lean_object* v_a_1422_, lean_object* v_a_1423_, lean_object* v_a_1424_, lean_object* v_a_1425_, lean_object* v_a_1426_, lean_object* v_a_1427_){
_start:
{
lean_object* v_res_1428_; 
v_res_1428_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_markStored(v_c_1416_, v_a_1417_, v_a_1418_, v_a_1419_, v_a_1420_, v_a_1421_, v_a_1422_, v_a_1423_, v_a_1424_, v_a_1425_, v_a_1426_);
lean_dec(v_a_1426_);
lean_dec_ref(v_a_1425_);
lean_dec(v_a_1424_);
lean_dec_ref(v_a_1423_);
lean_dec(v_a_1422_);
lean_dec_ref(v_a_1421_);
lean_dec(v_a_1420_);
lean_dec_ref(v_a_1419_);
lean_dec(v_a_1418_);
lean_dec(v_a_1417_);
return v_res_1428_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isTrivial(lean_object* v_c_1429_){
_start:
{
lean_object* v_p_1430_; 
v_p_1430_ = lean_ctor_get(v_c_1429_, 1);
if (lean_obj_tag(v_p_1430_) == 0)
{
lean_object* v_d_1431_; lean_object* v_k_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; uint8_t v___x_1435_; 
v_d_1431_ = lean_ctor_get(v_c_1429_, 0);
v_k_1432_ = lean_ctor_get(v_p_1430_, 0);
v___x_1433_ = lean_int_emod(v_k_1432_, v_d_1431_);
v___x_1434_ = lean_obj_once(&l_Int_Internal_Linear_Poly_isZero___closed__0, &l_Int_Internal_Linear_Poly_isZero___closed__0_once, _init_l_Int_Internal_Linear_Poly_isZero___closed__0);
v___x_1435_ = lean_int_dec_eq(v___x_1433_, v___x_1434_);
lean_dec(v___x_1433_);
return v___x_1435_;
}
else
{
lean_object* v_d_1436_; lean_object* v___x_1437_; uint8_t v___x_1438_; 
v_d_1436_ = lean_ctor_get(v_c_1429_, 0);
v___x_1437_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_pp_go___redArg___closed__2);
v___x_1438_ = lean_int_dec_eq(v_d_1436_, v___x_1437_);
return v___x_1438_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isTrivial___boxed(lean_object* v_c_1439_){
_start:
{
uint8_t v_res_1440_; lean_object* v_r_1441_; 
v_res_1440_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isTrivial(v_c_1439_);
lean_dec_ref(v_c_1439_);
v_r_1441_ = lean_box(v_res_1440_);
return v_r_1441_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg___closed__1(void){
_start:
{
lean_object* v___x_1443_; lean_object* v___x_1444_; 
v___x_1443_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg___closed__0));
v___x_1444_ = l_Lean_stringToMessageData(v___x_1443_);
return v___x_1444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg(lean_object* v_c_1445_, lean_object* v_a_1446_, lean_object* v_a_1447_){
_start:
{
lean_object* v_d_1449_; lean_object* v_p_1450_; lean_object* v___x_1451_; 
v_d_1449_ = lean_ctor_get(v_c_1445_, 0);
lean_inc(v_d_1449_);
v_p_1450_ = lean_ctor_get(v_c_1445_, 1);
lean_inc_ref(v_p_1450_);
lean_dec_ref(v_c_1445_);
v___x_1451_ = l_Int_Internal_Linear_Poly_pp___redArg(v_p_1450_, v_a_1446_, v_a_1447_);
if (lean_obj_tag(v___x_1451_) == 0)
{
lean_object* v_a_1452_; lean_object* v___x_1454_; uint8_t v_isShared_1455_; uint8_t v_isSharedCheck_1465_; 
v_a_1452_ = lean_ctor_get(v___x_1451_, 0);
v_isSharedCheck_1465_ = !lean_is_exclusive(v___x_1451_);
if (v_isSharedCheck_1465_ == 0)
{
v___x_1454_ = v___x_1451_;
v_isShared_1455_ = v_isSharedCheck_1465_;
goto v_resetjp_1453_;
}
else
{
lean_inc(v_a_1452_);
lean_dec(v___x_1451_);
v___x_1454_ = lean_box(0);
v_isShared_1455_ = v_isSharedCheck_1465_;
goto v_resetjp_1453_;
}
v_resetjp_1453_:
{
lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1463_; 
v___x_1456_ = l_Int_repr(v_d_1449_);
lean_dec(v_d_1449_);
v___x_1457_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1457_, 0, v___x_1456_);
v___x_1458_ = l_Lean_MessageData_ofFormat(v___x_1457_);
v___x_1459_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg___closed__1, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg___closed__1);
v___x_1460_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1460_, 0, v___x_1458_);
lean_ctor_set(v___x_1460_, 1, v___x_1459_);
v___x_1461_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1461_, 0, v___x_1460_);
lean_ctor_set(v___x_1461_, 1, v_a_1452_);
if (v_isShared_1455_ == 0)
{
lean_ctor_set(v___x_1454_, 0, v___x_1461_);
v___x_1463_ = v___x_1454_;
goto v_reusejp_1462_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v___x_1461_);
v___x_1463_ = v_reuseFailAlloc_1464_;
goto v_reusejp_1462_;
}
v_reusejp_1462_:
{
return v___x_1463_;
}
}
}
else
{
lean_dec(v_d_1449_);
return v___x_1451_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg___boxed(lean_object* v_c_1466_, lean_object* v_a_1467_, lean_object* v_a_1468_, lean_object* v_a_1469_){
_start:
{
lean_object* v_res_1470_; 
v_res_1470_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg(v_c_1466_, v_a_1467_, v_a_1468_);
lean_dec_ref(v_a_1468_);
lean_dec(v_a_1467_);
return v_res_1470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp(lean_object* v_c_1471_, lean_object* v_a_1472_, lean_object* v_a_1473_, lean_object* v_a_1474_, lean_object* v_a_1475_, lean_object* v_a_1476_, lean_object* v_a_1477_, lean_object* v_a_1478_, lean_object* v_a_1479_, lean_object* v_a_1480_, lean_object* v_a_1481_){
_start:
{
lean_object* v___x_1483_; 
v___x_1483_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg(v_c_1471_, v_a_1472_, v_a_1480_);
return v___x_1483_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___boxed(lean_object* v_c_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_, lean_object* v_a_1487_, lean_object* v_a_1488_, lean_object* v_a_1489_, lean_object* v_a_1490_, lean_object* v_a_1491_, lean_object* v_a_1492_, lean_object* v_a_1493_, lean_object* v_a_1494_, lean_object* v_a_1495_){
_start:
{
lean_object* v_res_1496_; 
v_res_1496_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp(v_c_1484_, v_a_1485_, v_a_1486_, v_a_1487_, v_a_1488_, v_a_1489_, v_a_1490_, v_a_1491_, v_a_1492_, v_a_1493_, v_a_1494_);
lean_dec(v_a_1494_);
lean_dec_ref(v_a_1493_);
lean_dec(v_a_1492_);
lean_dec_ref(v_a_1491_);
lean_dec(v_a_1490_);
lean_dec_ref(v_a_1489_);
lean_dec(v_a_1488_);
lean_dec_ref(v_a_1487_);
lean_dec(v_a_1486_);
lean_dec(v_a_1485_);
return v_res_1496_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__3(void){
_start:
{
lean_object* v___x_1502_; lean_object* v___x_1503_; 
v___x_1502_ = lean_unsigned_to_nat(0u);
v___x_1503_ = l_Lean_Level_ofNat(v___x_1502_);
return v___x_1503_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__4(void){
_start:
{
lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; 
v___x_1504_ = lean_box(0);
v___x_1505_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__3, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__3_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__3);
v___x_1506_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1506_, 0, v___x_1505_);
lean_ctor_set(v___x_1506_, 1, v___x_1504_);
return v___x_1506_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__5(void){
_start:
{
lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; 
v___x_1507_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__4, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__4_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__4);
v___x_1508_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__2));
v___x_1509_ = l_Lean_Expr_const___override(v___x_1508_, v___x_1507_);
return v___x_1509_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__8(void){
_start:
{
lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; 
v___x_1513_ = lean_box(0);
v___x_1514_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__7));
v___x_1515_ = l_Lean_Expr_const___override(v___x_1514_, v___x_1513_);
return v___x_1515_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__11(void){
_start:
{
lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; 
v___x_1520_ = lean_box(0);
v___x_1521_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__10));
v___x_1522_ = l_Lean_Expr_const___override(v___x_1521_, v___x_1520_);
return v___x_1522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg(lean_object* v_c_1523_, lean_object* v_a_1524_, lean_object* v_a_1525_){
_start:
{
lean_object* v_d_1527_; lean_object* v_p_1528_; lean_object* v___x_1529_; 
v_d_1527_ = lean_ctor_get(v_c_1523_, 0);
lean_inc(v_d_1527_);
v_p_1528_ = lean_ctor_get(v_c_1523_, 1);
lean_inc_ref(v_p_1528_);
lean_dec_ref(v_c_1523_);
v___x_1529_ = l_Int_Internal_Linear_Poly_denoteExpr_x27___redArg(v_p_1528_, v_a_1524_, v_a_1525_);
if (lean_obj_tag(v___x_1529_) == 0)
{
lean_object* v_a_1530_; lean_object* v___x_1532_; uint8_t v_isShared_1533_; uint8_t v_isSharedCheck_1551_; 
v_a_1530_ = lean_ctor_get(v___x_1529_, 0);
v_isSharedCheck_1551_ = !lean_is_exclusive(v___x_1529_);
if (v_isSharedCheck_1551_ == 0)
{
v___x_1532_ = v___x_1529_;
v_isShared_1533_ = v_isSharedCheck_1551_;
goto v_resetjp_1531_;
}
else
{
lean_inc(v_a_1530_);
lean_dec(v___x_1529_);
v___x_1532_ = lean_box(0);
v_isShared_1533_ = v_isSharedCheck_1551_;
goto v_resetjp_1531_;
}
v_resetjp_1531_:
{
lean_object* v___y_1535_; lean_object* v___x_1540_; uint8_t v___x_1541_; 
v___x_1540_ = lean_obj_once(&l_Int_Internal_Linear_Poly_isZero___closed__0, &l_Int_Internal_Linear_Poly_isZero___closed__0_once, _init_l_Int_Internal_Linear_Poly_isZero___closed__0);
v___x_1541_ = lean_int_dec_le(v___x_1540_, v_d_1527_);
if (v___x_1541_ == 0)
{
lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; 
v___x_1542_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__5, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__5_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__5);
v___x_1543_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__8, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__8_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__8);
v___x_1544_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__11, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__11_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___closed__11);
v___x_1545_ = lean_int_neg(v_d_1527_);
lean_dec(v_d_1527_);
v___x_1546_ = l_Int_toNat(v___x_1545_);
lean_dec(v___x_1545_);
v___x_1547_ = l_Lean_instToExprInt_mkNat(v___x_1546_);
v___x_1548_ = l_Lean_mkApp3(v___x_1542_, v___x_1543_, v___x_1544_, v___x_1547_);
v___y_1535_ = v___x_1548_;
goto v___jp_1534_;
}
else
{
lean_object* v___x_1549_; lean_object* v___x_1550_; 
v___x_1549_ = l_Int_toNat(v_d_1527_);
lean_dec(v_d_1527_);
v___x_1550_ = l_Lean_instToExprInt_mkNat(v___x_1549_);
v___y_1535_ = v___x_1550_;
goto v___jp_1534_;
}
v___jp_1534_:
{
lean_object* v___x_1536_; lean_object* v___x_1538_; 
v___x_1536_ = l_Lean_mkIntDvd(v___y_1535_, v_a_1530_);
if (v_isShared_1533_ == 0)
{
lean_ctor_set(v___x_1532_, 0, v___x_1536_);
v___x_1538_ = v___x_1532_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1539_; 
v_reuseFailAlloc_1539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1539_, 0, v___x_1536_);
v___x_1538_ = v_reuseFailAlloc_1539_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
return v___x_1538_;
}
}
}
}
else
{
lean_dec(v_d_1527_);
return v___x_1529_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg___boxed(lean_object* v_c_1552_, lean_object* v_a_1553_, lean_object* v_a_1554_, lean_object* v_a_1555_){
_start:
{
lean_object* v_res_1556_; 
v_res_1556_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg(v_c_1552_, v_a_1553_, v_a_1554_);
lean_dec_ref(v_a_1554_);
lean_dec(v_a_1553_);
return v_res_1556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr(lean_object* v_c_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_, lean_object* v_a_1560_, lean_object* v_a_1561_, lean_object* v_a_1562_, lean_object* v_a_1563_, lean_object* v_a_1564_, lean_object* v_a_1565_, lean_object* v_a_1566_, lean_object* v_a_1567_){
_start:
{
lean_object* v___x_1569_; 
v___x_1569_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___redArg(v_c_1557_, v_a_1558_, v_a_1566_);
return v___x_1569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr___boxed(lean_object* v_c_1570_, lean_object* v_a_1571_, lean_object* v_a_1572_, lean_object* v_a_1573_, lean_object* v_a_1574_, lean_object* v_a_1575_, lean_object* v_a_1576_, lean_object* v_a_1577_, lean_object* v_a_1578_, lean_object* v_a_1579_, lean_object* v_a_1580_, lean_object* v_a_1581_){
_start:
{
lean_object* v_res_1582_; 
v_res_1582_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_denoteExpr(v_c_1570_, v_a_1571_, v_a_1572_, v_a_1573_, v_a_1574_, v_a_1575_, v_a_1576_, v_a_1577_, v_a_1578_, v_a_1579_, v_a_1580_);
lean_dec(v_a_1580_);
lean_dec_ref(v_a_1579_);
lean_dec(v_a_1578_);
lean_dec_ref(v_a_1577_);
lean_dec(v_a_1576_);
lean_dec_ref(v_a_1575_);
lean_dec(v_a_1574_);
lean_dec_ref(v_a_1573_);
lean_dec(v_a_1572_);
lean_dec(v_a_1571_);
return v_res_1582_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0_spec__0(lean_object* v_msgData_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_){
_start:
{
lean_object* v___x_1589_; lean_object* v_env_1590_; uint8_t v___x_1591_; lean_object* v_env_1592_; lean_object* v___x_1593_; lean_object* v_toCold_1594_; lean_object* v_mctx_1595_; lean_object* v_lctx_1596_; lean_object* v_options_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; 
v___x_1589_ = lean_st_ref_get(v___y_1587_);
v_env_1590_ = lean_ctor_get(v___x_1589_, 0);
lean_inc_ref(v_env_1590_);
lean_dec(v___x_1589_);
v___x_1591_ = 0;
v_env_1592_ = l_Lean_Environment_setRecordingDeps(v_env_1590_, v___x_1591_);
v___x_1593_ = lean_st_ref_get(v___y_1585_);
v_toCold_1594_ = lean_ctor_get(v___y_1586_, 0);
v_mctx_1595_ = lean_ctor_get(v___x_1593_, 0);
lean_inc_ref(v_mctx_1595_);
lean_dec(v___x_1593_);
v_lctx_1596_ = lean_ctor_get(v___y_1584_, 2);
v_options_1597_ = lean_ctor_get(v_toCold_1594_, 2);
lean_inc_ref(v_options_1597_);
lean_inc_ref(v_lctx_1596_);
v___x_1598_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1598_, 0, v_env_1592_);
lean_ctor_set(v___x_1598_, 1, v_mctx_1595_);
lean_ctor_set(v___x_1598_, 2, v_lctx_1596_);
lean_ctor_set(v___x_1598_, 3, v_options_1597_);
v___x_1599_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1599_, 0, v___x_1598_);
lean_ctor_set(v___x_1599_, 1, v_msgData_1583_);
v___x_1600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1600_, 0, v___x_1599_);
return v___x_1600_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0_spec__0___boxed(lean_object* v_msgData_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_){
_start:
{
lean_object* v_res_1607_; 
v_res_1607_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0_spec__0(v_msgData_1601_, v___y_1602_, v___y_1603_, v___y_1604_, v___y_1605_);
lean_dec(v___y_1605_);
lean_dec_ref(v___y_1604_);
lean_dec(v___y_1603_);
lean_dec_ref(v___y_1602_);
return v_res_1607_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0___redArg(lean_object* v_msg_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_){
_start:
{
lean_object* v_ref_1614_; lean_object* v___x_1615_; lean_object* v_a_1616_; lean_object* v___x_1618_; uint8_t v_isShared_1619_; uint8_t v_isSharedCheck_1624_; 
v_ref_1614_ = lean_ctor_get(v___y_1611_, 2);
v___x_1615_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0_spec__0(v_msg_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_);
v_a_1616_ = lean_ctor_get(v___x_1615_, 0);
v_isSharedCheck_1624_ = !lean_is_exclusive(v___x_1615_);
if (v_isSharedCheck_1624_ == 0)
{
v___x_1618_ = v___x_1615_;
v_isShared_1619_ = v_isSharedCheck_1624_;
goto v_resetjp_1617_;
}
else
{
lean_inc(v_a_1616_);
lean_dec(v___x_1615_);
v___x_1618_ = lean_box(0);
v_isShared_1619_ = v_isSharedCheck_1624_;
goto v_resetjp_1617_;
}
v_resetjp_1617_:
{
lean_object* v___x_1620_; lean_object* v___x_1622_; 
lean_inc(v_ref_1614_);
v___x_1620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1620_, 0, v_ref_1614_);
lean_ctor_set(v___x_1620_, 1, v_a_1616_);
if (v_isShared_1619_ == 0)
{
lean_ctor_set_tag(v___x_1618_, 1);
lean_ctor_set(v___x_1618_, 0, v___x_1620_);
v___x_1622_ = v___x_1618_;
goto v_reusejp_1621_;
}
else
{
lean_object* v_reuseFailAlloc_1623_; 
v_reuseFailAlloc_1623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1623_, 0, v___x_1620_);
v___x_1622_ = v_reuseFailAlloc_1623_;
goto v_reusejp_1621_;
}
v_reusejp_1621_:
{
return v___x_1622_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0___redArg___boxed(lean_object* v_msg_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_){
_start:
{
lean_object* v_res_1631_; 
v_res_1631_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0___redArg(v_msg_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
lean_dec(v___y_1629_);
lean_dec_ref(v___y_1628_);
lean_dec(v___y_1627_);
lean_dec_ref(v___y_1626_);
return v_res_1631_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__1(void){
_start:
{
lean_object* v___x_1633_; lean_object* v___x_1634_; 
v___x_1633_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__0));
v___x_1634_ = l_Lean_stringToMessageData(v___x_1633_);
return v___x_1634_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__3(void){
_start:
{
lean_object* v___x_1636_; lean_object* v___x_1637_; 
v___x_1636_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__2));
v___x_1637_ = l_Lean_stringToMessageData(v___x_1636_);
return v___x_1637_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg(lean_object* v_c_1638_, lean_object* v_a_1639_, lean_object* v_a_1640_, lean_object* v_a_1641_, lean_object* v_a_1642_, lean_object* v_a_1643_, lean_object* v_a_1644_, lean_object* v_a_1645_, lean_object* v_a_1646_, lean_object* v_a_1647_, lean_object* v_a_1648_){
_start:
{
lean_object* v___x_1650_; 
v___x_1650_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg(v_c_1638_, v_a_1639_, v_a_1647_);
if (lean_obj_tag(v___x_1650_) == 0)
{
lean_object* v_a_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; 
v_a_1651_ = lean_ctor_get(v___x_1650_, 0);
lean_inc(v_a_1651_);
lean_dec_ref_known(v___x_1650_, 1);
v___x_1652_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__1, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__1);
v___x_1653_ = l_Lean_indentD(v_a_1651_);
v___x_1654_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1654_, 0, v___x_1652_);
lean_ctor_set(v___x_1654_, 1, v___x_1653_);
v___x_1655_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__3, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__3_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__3);
v___x_1656_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1656_, 0, v___x_1654_);
lean_ctor_set(v___x_1656_, 1, v___x_1655_);
v___x_1657_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0___redArg(v___x_1656_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_);
return v___x_1657_;
}
else
{
lean_object* v_a_1658_; lean_object* v___x_1660_; uint8_t v_isShared_1661_; uint8_t v_isSharedCheck_1665_; 
v_a_1658_ = lean_ctor_get(v___x_1650_, 0);
v_isSharedCheck_1665_ = !lean_is_exclusive(v___x_1650_);
if (v_isSharedCheck_1665_ == 0)
{
v___x_1660_ = v___x_1650_;
v_isShared_1661_ = v_isSharedCheck_1665_;
goto v_resetjp_1659_;
}
else
{
lean_inc(v_a_1658_);
lean_dec(v___x_1650_);
v___x_1660_ = lean_box(0);
v_isShared_1661_ = v_isSharedCheck_1665_;
goto v_resetjp_1659_;
}
v_resetjp_1659_:
{
lean_object* v___x_1663_; 
if (v_isShared_1661_ == 0)
{
v___x_1663_ = v___x_1660_;
goto v_reusejp_1662_;
}
else
{
lean_object* v_reuseFailAlloc_1664_; 
v_reuseFailAlloc_1664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1664_, 0, v_a_1658_);
v___x_1663_ = v_reuseFailAlloc_1664_;
goto v_reusejp_1662_;
}
v_reusejp_1662_:
{
return v___x_1663_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___boxed(lean_object* v_c_1666_, lean_object* v_a_1667_, lean_object* v_a_1668_, lean_object* v_a_1669_, lean_object* v_a_1670_, lean_object* v_a_1671_, lean_object* v_a_1672_, lean_object* v_a_1673_, lean_object* v_a_1674_, lean_object* v_a_1675_, lean_object* v_a_1676_, lean_object* v_a_1677_){
_start:
{
lean_object* v_res_1678_; 
v_res_1678_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg(v_c_1666_, v_a_1667_, v_a_1668_, v_a_1669_, v_a_1670_, v_a_1671_, v_a_1672_, v_a_1673_, v_a_1674_, v_a_1675_, v_a_1676_);
lean_dec(v_a_1676_);
lean_dec_ref(v_a_1675_);
lean_dec(v_a_1674_);
lean_dec_ref(v_a_1673_);
lean_dec(v_a_1672_);
lean_dec_ref(v_a_1671_);
lean_dec(v_a_1670_);
lean_dec_ref(v_a_1669_);
lean_dec(v_a_1668_);
lean_dec(v_a_1667_);
return v_res_1678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected(lean_object* v_00_u03b1_1679_, lean_object* v_c_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_, lean_object* v_a_1683_, lean_object* v_a_1684_, lean_object* v_a_1685_, lean_object* v_a_1686_, lean_object* v_a_1687_, lean_object* v_a_1688_, lean_object* v_a_1689_, lean_object* v_a_1690_){
_start:
{
lean_object* v___x_1692_; 
v___x_1692_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg(v_c_1680_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_, v_a_1685_, v_a_1686_, v_a_1687_, v_a_1688_, v_a_1689_, v_a_1690_);
return v___x_1692_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___boxed(lean_object* v_00_u03b1_1693_, lean_object* v_c_1694_, lean_object* v_a_1695_, lean_object* v_a_1696_, lean_object* v_a_1697_, lean_object* v_a_1698_, lean_object* v_a_1699_, lean_object* v_a_1700_, lean_object* v_a_1701_, lean_object* v_a_1702_, lean_object* v_a_1703_, lean_object* v_a_1704_, lean_object* v_a_1705_){
_start:
{
lean_object* v_res_1706_; 
v_res_1706_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected(v_00_u03b1_1693_, v_c_1694_, v_a_1695_, v_a_1696_, v_a_1697_, v_a_1698_, v_a_1699_, v_a_1700_, v_a_1701_, v_a_1702_, v_a_1703_, v_a_1704_);
lean_dec(v_a_1704_);
lean_dec_ref(v_a_1703_);
lean_dec(v_a_1702_);
lean_dec_ref(v_a_1701_);
lean_dec(v_a_1700_);
lean_dec_ref(v_a_1699_);
lean_dec(v_a_1698_);
lean_dec_ref(v_a_1697_);
lean_dec(v_a_1696_);
lean_dec(v_a_1695_);
return v_res_1706_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0(lean_object* v_00_u03b1_1707_, lean_object* v_msg_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_){
_start:
{
lean_object* v___x_1720_; 
v___x_1720_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0___redArg(v_msg_1708_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_);
return v___x_1720_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0___boxed(lean_object* v_00_u03b1_1721_, lean_object* v_msg_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_){
_start:
{
lean_object* v_res_1734_; 
v_res_1734_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0(v_00_u03b1_1721_, v_msg_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_);
lean_dec(v___y_1732_);
lean_dec_ref(v___y_1731_);
lean_dec(v___y_1730_);
lean_dec_ref(v___y_1729_);
lean_dec(v___y_1728_);
lean_dec_ref(v___y_1727_);
lean_dec(v___y_1726_);
lean_dec_ref(v___y_1725_);
lean_dec(v___y_1724_);
lean_dec(v___y_1723_);
return v_res_1734_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_isTrivial_spec__0(lean_object* v_a_1735_){
_start:
{
lean_object* v___x_1736_; 
v___x_1736_ = lean_nat_to_int(v_a_1735_);
return v___x_1736_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_isTrivial(lean_object* v_c_1737_){
_start:
{
lean_object* v_p_1738_; 
v_p_1738_ = lean_ctor_get(v_c_1737_, 0);
if (lean_obj_tag(v_p_1738_) == 0)
{
lean_object* v_k_1739_; lean_object* v___x_1740_; uint8_t v___x_1741_; 
v_k_1739_ = lean_ctor_get(v_p_1738_, 0);
v___x_1740_ = lean_obj_once(&l_Int_Internal_Linear_Poly_isZero___closed__0, &l_Int_Internal_Linear_Poly_isZero___closed__0_once, _init_l_Int_Internal_Linear_Poly_isZero___closed__0);
v___x_1741_ = lean_int_dec_eq(v_k_1739_, v___x_1740_);
if (v___x_1741_ == 0)
{
uint8_t v___x_1742_; 
v___x_1742_ = 1;
return v___x_1742_;
}
else
{
uint8_t v___x_1743_; 
v___x_1743_ = 0;
return v___x_1743_;
}
}
else
{
lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; uint8_t v___x_1749_; 
v___x_1744_ = l_Int_Internal_Linear_Poly_getConst(v_p_1738_);
v___x_1745_ = l_Int_Internal_Linear_Poly_gcdCoeffs_x27(v_p_1738_);
v___x_1746_ = lean_nat_to_int(v___x_1745_);
v___x_1747_ = lean_int_emod(v___x_1744_, v___x_1746_);
lean_dec(v___x_1746_);
lean_dec(v___x_1744_);
v___x_1748_ = lean_obj_once(&l_Int_Internal_Linear_Poly_isZero___closed__0, &l_Int_Internal_Linear_Poly_isZero___closed__0_once, _init_l_Int_Internal_Linear_Poly_isZero___closed__0);
v___x_1749_ = lean_int_dec_eq(v___x_1747_, v___x_1748_);
lean_dec(v___x_1747_);
if (v___x_1749_ == 0)
{
uint8_t v___x_1750_; 
v___x_1750_ = 1;
return v___x_1750_;
}
else
{
uint8_t v___x_1751_; 
v___x_1751_ = 0;
return v___x_1751_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_isTrivial___boxed(lean_object* v_c_1752_){
_start:
{
uint8_t v_res_1753_; lean_object* v_r_1754_; 
v_res_1753_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_isTrivial(v_c_1752_);
lean_dec_ref(v_c_1752_);
v_r_1754_ = lean_box(v_res_1753_);
return v_r_1754_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg___closed__1(void){
_start:
{
lean_object* v___x_1756_; lean_object* v___x_1757_; 
v___x_1756_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg___closed__0));
v___x_1757_ = l_Lean_stringToMessageData(v___x_1756_);
return v___x_1757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg(lean_object* v_c_1758_, lean_object* v_a_1759_, lean_object* v_a_1760_){
_start:
{
lean_object* v_p_1762_; lean_object* v___x_1763_; 
v_p_1762_ = lean_ctor_get(v_c_1758_, 0);
lean_inc_ref(v_p_1762_);
lean_dec_ref(v_c_1758_);
v___x_1763_ = l_Int_Internal_Linear_Poly_pp___redArg(v_p_1762_, v_a_1759_, v_a_1760_);
if (lean_obj_tag(v___x_1763_) == 0)
{
lean_object* v_a_1764_; lean_object* v___x_1766_; uint8_t v_isShared_1767_; uint8_t v_isSharedCheck_1773_; 
v_a_1764_ = lean_ctor_get(v___x_1763_, 0);
v_isSharedCheck_1773_ = !lean_is_exclusive(v___x_1763_);
if (v_isSharedCheck_1773_ == 0)
{
v___x_1766_ = v___x_1763_;
v_isShared_1767_ = v_isSharedCheck_1773_;
goto v_resetjp_1765_;
}
else
{
lean_inc(v_a_1764_);
lean_dec(v___x_1763_);
v___x_1766_ = lean_box(0);
v_isShared_1767_ = v_isSharedCheck_1773_;
goto v_resetjp_1765_;
}
v_resetjp_1765_:
{
lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1771_; 
v___x_1768_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg___closed__1, &l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg___closed__1);
v___x_1769_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1769_, 0, v_a_1764_);
lean_ctor_set(v___x_1769_, 1, v___x_1768_);
if (v_isShared_1767_ == 0)
{
lean_ctor_set(v___x_1766_, 0, v___x_1769_);
v___x_1771_ = v___x_1766_;
goto v_reusejp_1770_;
}
else
{
lean_object* v_reuseFailAlloc_1772_; 
v_reuseFailAlloc_1772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1772_, 0, v___x_1769_);
v___x_1771_ = v_reuseFailAlloc_1772_;
goto v_reusejp_1770_;
}
v_reusejp_1770_:
{
return v___x_1771_;
}
}
}
else
{
return v___x_1763_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg___boxed(lean_object* v_c_1774_, lean_object* v_a_1775_, lean_object* v_a_1776_, lean_object* v_a_1777_){
_start:
{
lean_object* v_res_1778_; 
v_res_1778_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg(v_c_1774_, v_a_1775_, v_a_1776_);
lean_dec_ref(v_a_1776_);
lean_dec(v_a_1775_);
return v_res_1778_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp(lean_object* v_c_1779_, lean_object* v_a_1780_, lean_object* v_a_1781_, lean_object* v_a_1782_, lean_object* v_a_1783_, lean_object* v_a_1784_, lean_object* v_a_1785_, lean_object* v_a_1786_, lean_object* v_a_1787_, lean_object* v_a_1788_, lean_object* v_a_1789_){
_start:
{
lean_object* v___x_1791_; 
v___x_1791_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg(v_c_1779_, v_a_1780_, v_a_1788_);
return v___x_1791_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___boxed(lean_object* v_c_1792_, lean_object* v_a_1793_, lean_object* v_a_1794_, lean_object* v_a_1795_, lean_object* v_a_1796_, lean_object* v_a_1797_, lean_object* v_a_1798_, lean_object* v_a_1799_, lean_object* v_a_1800_, lean_object* v_a_1801_, lean_object* v_a_1802_, lean_object* v_a_1803_){
_start:
{
lean_object* v_res_1804_; 
v_res_1804_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp(v_c_1792_, v_a_1793_, v_a_1794_, v_a_1795_, v_a_1796_, v_a_1797_, v_a_1798_, v_a_1799_, v_a_1800_, v_a_1801_, v_a_1802_);
lean_dec(v_a_1802_);
lean_dec_ref(v_a_1801_);
lean_dec(v_a_1800_);
lean_dec_ref(v_a_1799_);
lean_dec(v_a_1798_);
lean_dec_ref(v_a_1797_);
lean_dec(v_a_1796_);
lean_dec_ref(v_a_1795_);
lean_dec(v_a_1794_);
lean_dec(v_a_1793_);
return v_res_1804_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___redArg(lean_object* v_c_1805_, lean_object* v_a_1806_, lean_object* v_a_1807_, lean_object* v_a_1808_, lean_object* v_a_1809_, lean_object* v_a_1810_){
_start:
{
lean_object* v___x_1812_; 
v___x_1812_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg(v_c_1805_, v_a_1806_, v_a_1809_);
if (lean_obj_tag(v___x_1812_) == 0)
{
lean_object* v_a_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; 
v_a_1813_ = lean_ctor_get(v___x_1812_, 0);
lean_inc(v_a_1813_);
lean_dec_ref_known(v___x_1812_, 1);
v___x_1814_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__1, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__1);
v___x_1815_ = l_Lean_indentD(v_a_1813_);
v___x_1816_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1816_, 0, v___x_1814_);
lean_ctor_set(v___x_1816_, 1, v___x_1815_);
v___x_1817_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0___redArg(v___x_1816_, v_a_1807_, v_a_1808_, v_a_1809_, v_a_1810_);
return v___x_1817_;
}
else
{
lean_object* v_a_1818_; lean_object* v___x_1820_; uint8_t v_isShared_1821_; uint8_t v_isSharedCheck_1825_; 
v_a_1818_ = lean_ctor_get(v___x_1812_, 0);
v_isSharedCheck_1825_ = !lean_is_exclusive(v___x_1812_);
if (v_isSharedCheck_1825_ == 0)
{
v___x_1820_ = v___x_1812_;
v_isShared_1821_ = v_isSharedCheck_1825_;
goto v_resetjp_1819_;
}
else
{
lean_inc(v_a_1818_);
lean_dec(v___x_1812_);
v___x_1820_ = lean_box(0);
v_isShared_1821_ = v_isSharedCheck_1825_;
goto v_resetjp_1819_;
}
v_resetjp_1819_:
{
lean_object* v___x_1823_; 
if (v_isShared_1821_ == 0)
{
v___x_1823_ = v___x_1820_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v_a_1818_);
v___x_1823_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1822_;
}
v_reusejp_1822_:
{
return v___x_1823_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___redArg___boxed(lean_object* v_c_1826_, lean_object* v_a_1827_, lean_object* v_a_1828_, lean_object* v_a_1829_, lean_object* v_a_1830_, lean_object* v_a_1831_, lean_object* v_a_1832_){
_start:
{
lean_object* v_res_1833_; 
v_res_1833_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___redArg(v_c_1826_, v_a_1827_, v_a_1828_, v_a_1829_, v_a_1830_, v_a_1831_);
lean_dec(v_a_1831_);
lean_dec_ref(v_a_1830_);
lean_dec(v_a_1829_);
lean_dec_ref(v_a_1828_);
lean_dec(v_a_1827_);
return v_res_1833_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected(lean_object* v_00_u03b1_1834_, lean_object* v_c_1835_, lean_object* v_a_1836_, lean_object* v_a_1837_, lean_object* v_a_1838_, lean_object* v_a_1839_, lean_object* v_a_1840_, lean_object* v_a_1841_, lean_object* v_a_1842_, lean_object* v_a_1843_, lean_object* v_a_1844_, lean_object* v_a_1845_){
_start:
{
lean_object* v___x_1847_; 
v___x_1847_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___redArg(v_c_1835_, v_a_1836_, v_a_1842_, v_a_1843_, v_a_1844_, v_a_1845_);
return v___x_1847_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected___boxed(lean_object* v_00_u03b1_1848_, lean_object* v_c_1849_, lean_object* v_a_1850_, lean_object* v_a_1851_, lean_object* v_a_1852_, lean_object* v_a_1853_, lean_object* v_a_1854_, lean_object* v_a_1855_, lean_object* v_a_1856_, lean_object* v_a_1857_, lean_object* v_a_1858_, lean_object* v_a_1859_, lean_object* v_a_1860_){
_start:
{
lean_object* v_res_1861_; 
v_res_1861_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_throwUnexpected(v_00_u03b1_1848_, v_c_1849_, v_a_1850_, v_a_1851_, v_a_1852_, v_a_1853_, v_a_1854_, v_a_1855_, v_a_1856_, v_a_1857_, v_a_1858_, v_a_1859_);
lean_dec(v_a_1859_);
lean_dec_ref(v_a_1858_);
lean_dec(v_a_1857_);
lean_dec_ref(v_a_1856_);
lean_dec(v_a_1855_);
lean_dec_ref(v_a_1854_);
lean_dec(v_a_1853_);
lean_dec_ref(v_a_1852_);
lean_dec(v_a_1851_);
lean_dec(v_a_1850_);
return v_res_1861_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg___closed__0(void){
_start:
{
lean_object* v___x_1862_; lean_object* v___x_1863_; 
v___x_1862_ = lean_obj_once(&l_Int_Internal_Linear_Poly_isZero___closed__0, &l_Int_Internal_Linear_Poly_isZero___closed__0_once, _init_l_Int_Internal_Linear_Poly_isZero___closed__0);
v___x_1863_ = l_Lean_mkIntLit(v___x_1862_);
return v___x_1863_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg(lean_object* v_c_1864_, lean_object* v_a_1865_, lean_object* v_a_1866_){
_start:
{
lean_object* v_p_1868_; lean_object* v___x_1869_; 
v_p_1868_ = lean_ctor_get(v_c_1864_, 0);
lean_inc_ref(v_p_1868_);
lean_dec_ref(v_c_1864_);
v___x_1869_ = l_Int_Internal_Linear_Poly_denoteExpr_x27___redArg(v_p_1868_, v_a_1865_, v_a_1866_);
if (lean_obj_tag(v___x_1869_) == 0)
{
lean_object* v_a_1870_; lean_object* v___x_1872_; uint8_t v_isShared_1873_; uint8_t v_isSharedCheck_1880_; 
v_a_1870_ = lean_ctor_get(v___x_1869_, 0);
v_isSharedCheck_1880_ = !lean_is_exclusive(v___x_1869_);
if (v_isSharedCheck_1880_ == 0)
{
v___x_1872_ = v___x_1869_;
v_isShared_1873_ = v_isSharedCheck_1880_;
goto v_resetjp_1871_;
}
else
{
lean_inc(v_a_1870_);
lean_dec(v___x_1869_);
v___x_1872_ = lean_box(0);
v_isShared_1873_ = v_isSharedCheck_1880_;
goto v_resetjp_1871_;
}
v_resetjp_1871_:
{
lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1878_; 
v___x_1874_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg___closed__0);
v___x_1875_ = l_Lean_mkIntEq(v_a_1870_, v___x_1874_);
v___x_1876_ = l_Lean_mkNot(v___x_1875_);
if (v_isShared_1873_ == 0)
{
lean_ctor_set(v___x_1872_, 0, v___x_1876_);
v___x_1878_ = v___x_1872_;
goto v_reusejp_1877_;
}
else
{
lean_object* v_reuseFailAlloc_1879_; 
v_reuseFailAlloc_1879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1879_, 0, v___x_1876_);
v___x_1878_ = v_reuseFailAlloc_1879_;
goto v_reusejp_1877_;
}
v_reusejp_1877_:
{
return v___x_1878_;
}
}
}
else
{
return v___x_1869_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg___boxed(lean_object* v_c_1881_, lean_object* v_a_1882_, lean_object* v_a_1883_, lean_object* v_a_1884_){
_start:
{
lean_object* v_res_1885_; 
v_res_1885_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg(v_c_1881_, v_a_1882_, v_a_1883_);
lean_dec_ref(v_a_1883_);
lean_dec(v_a_1882_);
return v_res_1885_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr(lean_object* v_c_1886_, lean_object* v_a_1887_, lean_object* v_a_1888_, lean_object* v_a_1889_, lean_object* v_a_1890_, lean_object* v_a_1891_, lean_object* v_a_1892_, lean_object* v_a_1893_, lean_object* v_a_1894_, lean_object* v_a_1895_, lean_object* v_a_1896_){
_start:
{
lean_object* v___x_1898_; 
v___x_1898_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg(v_c_1886_, v_a_1887_, v_a_1895_);
return v___x_1898_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___boxed(lean_object* v_c_1899_, lean_object* v_a_1900_, lean_object* v_a_1901_, lean_object* v_a_1902_, lean_object* v_a_1903_, lean_object* v_a_1904_, lean_object* v_a_1905_, lean_object* v_a_1906_, lean_object* v_a_1907_, lean_object* v_a_1908_, lean_object* v_a_1909_, lean_object* v_a_1910_){
_start:
{
lean_object* v_res_1911_; 
v_res_1911_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr(v_c_1899_, v_a_1900_, v_a_1901_, v_a_1902_, v_a_1903_, v_a_1904_, v_a_1905_, v_a_1906_, v_a_1907_, v_a_1908_, v_a_1909_);
lean_dec(v_a_1909_);
lean_dec_ref(v_a_1908_);
lean_dec(v_a_1907_);
lean_dec_ref(v_a_1906_);
lean_dec(v_a_1905_);
lean_dec_ref(v_a_1904_);
lean_dec(v_a_1903_);
lean_dec_ref(v_a_1902_);
lean_dec(v_a_1901_);
lean_dec(v_a_1900_);
return v_res_1911_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assert___boxed(lean_object* v_c_1924_, lean_object* v_a_1925_, lean_object* v_a_1926_, lean_object* v_a_1927_, lean_object* v_a_1928_, lean_object* v_a_1929_, lean_object* v_a_1930_, lean_object* v_a_1931_, lean_object* v_a_1932_, lean_object* v_a_1933_, lean_object* v_a_1934_, lean_object* v_a_00___x40___internal___hyg_1935_){
_start:
{
lean_object* v_res_1936_; 
v_res_1936_ = lean_grind_cutsat_assert_le(v_c_1924_, v_a_1925_, v_a_1926_, v_a_1927_, v_a_1928_, v_a_1929_, v_a_1930_, v_a_1931_, v_a_1932_, v_a_1933_, v_a_1934_);
return v_res_1936_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isTrivial(lean_object* v_c_1937_){
_start:
{
lean_object* v_p_1938_; 
v_p_1938_ = lean_ctor_get(v_c_1937_, 0);
if (lean_obj_tag(v_p_1938_) == 0)
{
lean_object* v_k_1939_; lean_object* v___x_1940_; uint8_t v___x_1941_; 
v_k_1939_ = lean_ctor_get(v_p_1938_, 0);
v___x_1940_ = lean_obj_once(&l_Int_Internal_Linear_Poly_isZero___closed__0, &l_Int_Internal_Linear_Poly_isZero___closed__0_once, _init_l_Int_Internal_Linear_Poly_isZero___closed__0);
v___x_1941_ = lean_int_dec_le(v_k_1939_, v___x_1940_);
return v___x_1941_;
}
else
{
uint8_t v___x_1942_; 
v___x_1942_ = 0;
return v___x_1942_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isTrivial___boxed(lean_object* v_c_1943_){
_start:
{
uint8_t v_res_1944_; lean_object* v_r_1945_; 
v_res_1944_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isTrivial(v_c_1943_);
lean_dec_ref(v_c_1943_);
v_r_1945_ = lean_box(v_res_1944_);
return v_r_1945_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg___closed__1(void){
_start:
{
lean_object* v___x_1947_; lean_object* v___x_1948_; 
v___x_1947_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg___closed__0));
v___x_1948_ = l_Lean_stringToMessageData(v___x_1947_);
return v___x_1948_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(lean_object* v_c_1949_, lean_object* v_a_1950_, lean_object* v_a_1951_){
_start:
{
lean_object* v_p_1953_; lean_object* v___x_1954_; 
v_p_1953_ = lean_ctor_get(v_c_1949_, 0);
lean_inc_ref(v_p_1953_);
lean_dec_ref(v_c_1949_);
v___x_1954_ = l_Int_Internal_Linear_Poly_pp___redArg(v_p_1953_, v_a_1950_, v_a_1951_);
if (lean_obj_tag(v___x_1954_) == 0)
{
lean_object* v_a_1955_; lean_object* v___x_1957_; uint8_t v_isShared_1958_; uint8_t v_isSharedCheck_1964_; 
v_a_1955_ = lean_ctor_get(v___x_1954_, 0);
v_isSharedCheck_1964_ = !lean_is_exclusive(v___x_1954_);
if (v_isSharedCheck_1964_ == 0)
{
v___x_1957_ = v___x_1954_;
v_isShared_1958_ = v_isSharedCheck_1964_;
goto v_resetjp_1956_;
}
else
{
lean_inc(v_a_1955_);
lean_dec(v___x_1954_);
v___x_1957_ = lean_box(0);
v_isShared_1958_ = v_isSharedCheck_1964_;
goto v_resetjp_1956_;
}
v_resetjp_1956_:
{
lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1962_; 
v___x_1959_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg___closed__1, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg___closed__1);
v___x_1960_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1960_, 0, v_a_1955_);
lean_ctor_set(v___x_1960_, 1, v___x_1959_);
if (v_isShared_1958_ == 0)
{
lean_ctor_set(v___x_1957_, 0, v___x_1960_);
v___x_1962_ = v___x_1957_;
goto v_reusejp_1961_;
}
else
{
lean_object* v_reuseFailAlloc_1963_; 
v_reuseFailAlloc_1963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1963_, 0, v___x_1960_);
v___x_1962_ = v_reuseFailAlloc_1963_;
goto v_reusejp_1961_;
}
v_reusejp_1961_:
{
return v___x_1962_;
}
}
}
else
{
return v___x_1954_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg___boxed(lean_object* v_c_1965_, lean_object* v_a_1966_, lean_object* v_a_1967_, lean_object* v_a_1968_){
_start:
{
lean_object* v_res_1969_; 
v_res_1969_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_c_1965_, v_a_1966_, v_a_1967_);
lean_dec_ref(v_a_1967_);
lean_dec(v_a_1966_);
return v_res_1969_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp(lean_object* v_c_1970_, lean_object* v_a_1971_, lean_object* v_a_1972_, lean_object* v_a_1973_, lean_object* v_a_1974_, lean_object* v_a_1975_, lean_object* v_a_1976_, lean_object* v_a_1977_, lean_object* v_a_1978_, lean_object* v_a_1979_, lean_object* v_a_1980_){
_start:
{
lean_object* v___x_1982_; 
v___x_1982_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_c_1970_, v_a_1971_, v_a_1979_);
return v___x_1982_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___boxed(lean_object* v_c_1983_, lean_object* v_a_1984_, lean_object* v_a_1985_, lean_object* v_a_1986_, lean_object* v_a_1987_, lean_object* v_a_1988_, lean_object* v_a_1989_, lean_object* v_a_1990_, lean_object* v_a_1991_, lean_object* v_a_1992_, lean_object* v_a_1993_, lean_object* v_a_1994_){
_start:
{
lean_object* v_res_1995_; 
v_res_1995_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp(v_c_1983_, v_a_1984_, v_a_1985_, v_a_1986_, v_a_1987_, v_a_1988_, v_a_1989_, v_a_1990_, v_a_1991_, v_a_1992_, v_a_1993_);
lean_dec(v_a_1993_);
lean_dec_ref(v_a_1992_);
lean_dec(v_a_1991_);
lean_dec_ref(v_a_1990_);
lean_dec(v_a_1989_);
lean_dec_ref(v_a_1988_);
lean_dec(v_a_1987_);
lean_dec_ref(v_a_1986_);
lean_dec(v_a_1985_);
lean_dec(v_a_1984_);
return v_res_1995_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_denoteExpr___redArg(lean_object* v_c_1996_, lean_object* v_a_1997_, lean_object* v_a_1998_){
_start:
{
lean_object* v_p_2000_; lean_object* v___x_2001_; 
v_p_2000_ = lean_ctor_get(v_c_1996_, 0);
lean_inc_ref(v_p_2000_);
lean_dec_ref(v_c_1996_);
v___x_2001_ = l_Int_Internal_Linear_Poly_denoteExpr_x27___redArg(v_p_2000_, v_a_1997_, v_a_1998_);
if (lean_obj_tag(v___x_2001_) == 0)
{
lean_object* v_a_2002_; lean_object* v___x_2004_; uint8_t v_isShared_2005_; uint8_t v_isSharedCheck_2011_; 
v_a_2002_ = lean_ctor_get(v___x_2001_, 0);
v_isSharedCheck_2011_ = !lean_is_exclusive(v___x_2001_);
if (v_isSharedCheck_2011_ == 0)
{
v___x_2004_ = v___x_2001_;
v_isShared_2005_ = v_isSharedCheck_2011_;
goto v_resetjp_2003_;
}
else
{
lean_inc(v_a_2002_);
lean_dec(v___x_2001_);
v___x_2004_ = lean_box(0);
v_isShared_2005_ = v_isSharedCheck_2011_;
goto v_resetjp_2003_;
}
v_resetjp_2003_:
{
lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2009_; 
v___x_2006_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg___closed__0);
v___x_2007_ = l_Lean_mkIntLE(v_a_2002_, v___x_2006_);
if (v_isShared_2005_ == 0)
{
lean_ctor_set(v___x_2004_, 0, v___x_2007_);
v___x_2009_ = v___x_2004_;
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
else
{
return v___x_2001_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_denoteExpr___redArg___boxed(lean_object* v_c_2012_, lean_object* v_a_2013_, lean_object* v_a_2014_, lean_object* v_a_2015_){
_start:
{
lean_object* v_res_2016_; 
v_res_2016_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_denoteExpr___redArg(v_c_2012_, v_a_2013_, v_a_2014_);
lean_dec_ref(v_a_2014_);
lean_dec(v_a_2013_);
return v_res_2016_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_denoteExpr(lean_object* v_c_2017_, lean_object* v_a_2018_, lean_object* v_a_2019_, lean_object* v_a_2020_, lean_object* v_a_2021_, lean_object* v_a_2022_, lean_object* v_a_2023_, lean_object* v_a_2024_, lean_object* v_a_2025_, lean_object* v_a_2026_, lean_object* v_a_2027_){
_start:
{
lean_object* v___x_2029_; 
v___x_2029_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_denoteExpr___redArg(v_c_2017_, v_a_2018_, v_a_2026_);
return v___x_2029_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_denoteExpr___boxed(lean_object* v_c_2030_, lean_object* v_a_2031_, lean_object* v_a_2032_, lean_object* v_a_2033_, lean_object* v_a_2034_, lean_object* v_a_2035_, lean_object* v_a_2036_, lean_object* v_a_2037_, lean_object* v_a_2038_, lean_object* v_a_2039_, lean_object* v_a_2040_, lean_object* v_a_2041_){
_start:
{
lean_object* v_res_2042_; 
v_res_2042_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_denoteExpr(v_c_2030_, v_a_2031_, v_a_2032_, v_a_2033_, v_a_2034_, v_a_2035_, v_a_2036_, v_a_2037_, v_a_2038_, v_a_2039_, v_a_2040_);
lean_dec(v_a_2040_);
lean_dec_ref(v_a_2039_);
lean_dec(v_a_2038_);
lean_dec_ref(v_a_2037_);
lean_dec(v_a_2036_);
lean_dec_ref(v_a_2035_);
lean_dec(v_a_2034_);
lean_dec_ref(v_a_2033_);
lean_dec(v_a_2032_);
lean_dec(v_a_2031_);
return v_res_2042_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___redArg(lean_object* v_c_2043_, lean_object* v_a_2044_, lean_object* v_a_2045_, lean_object* v_a_2046_, lean_object* v_a_2047_, lean_object* v_a_2048_){
_start:
{
lean_object* v___x_2050_; 
v___x_2050_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_c_2043_, v_a_2044_, v_a_2047_);
if (lean_obj_tag(v___x_2050_) == 0)
{
lean_object* v_a_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; 
v_a_2051_ = lean_ctor_get(v___x_2050_, 0);
lean_inc(v_a_2051_);
lean_dec_ref_known(v___x_2050_, 1);
v___x_2052_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__1, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__1);
v___x_2053_ = l_Lean_indentD(v_a_2051_);
v___x_2054_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2054_, 0, v___x_2052_);
lean_ctor_set(v___x_2054_, 1, v___x_2053_);
v___x_2055_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0___redArg(v___x_2054_, v_a_2045_, v_a_2046_, v_a_2047_, v_a_2048_);
return v___x_2055_;
}
else
{
lean_object* v_a_2056_; lean_object* v___x_2058_; uint8_t v_isShared_2059_; uint8_t v_isSharedCheck_2063_; 
v_a_2056_ = lean_ctor_get(v___x_2050_, 0);
v_isSharedCheck_2063_ = !lean_is_exclusive(v___x_2050_);
if (v_isSharedCheck_2063_ == 0)
{
v___x_2058_ = v___x_2050_;
v_isShared_2059_ = v_isSharedCheck_2063_;
goto v_resetjp_2057_;
}
else
{
lean_inc(v_a_2056_);
lean_dec(v___x_2050_);
v___x_2058_ = lean_box(0);
v_isShared_2059_ = v_isSharedCheck_2063_;
goto v_resetjp_2057_;
}
v_resetjp_2057_:
{
lean_object* v___x_2061_; 
if (v_isShared_2059_ == 0)
{
v___x_2061_ = v___x_2058_;
goto v_reusejp_2060_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v_a_2056_);
v___x_2061_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2060_;
}
v_reusejp_2060_:
{
return v___x_2061_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___redArg___boxed(lean_object* v_c_2064_, lean_object* v_a_2065_, lean_object* v_a_2066_, lean_object* v_a_2067_, lean_object* v_a_2068_, lean_object* v_a_2069_, lean_object* v_a_2070_){
_start:
{
lean_object* v_res_2071_; 
v_res_2071_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___redArg(v_c_2064_, v_a_2065_, v_a_2066_, v_a_2067_, v_a_2068_, v_a_2069_);
lean_dec(v_a_2069_);
lean_dec_ref(v_a_2068_);
lean_dec(v_a_2067_);
lean_dec_ref(v_a_2066_);
lean_dec(v_a_2065_);
return v_res_2071_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected(lean_object* v_00_u03b1_2072_, lean_object* v_c_2073_, lean_object* v_a_2074_, lean_object* v_a_2075_, lean_object* v_a_2076_, lean_object* v_a_2077_, lean_object* v_a_2078_, lean_object* v_a_2079_, lean_object* v_a_2080_, lean_object* v_a_2081_, lean_object* v_a_2082_, lean_object* v_a_2083_){
_start:
{
lean_object* v___x_2085_; 
v___x_2085_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___redArg(v_c_2073_, v_a_2074_, v_a_2080_, v_a_2081_, v_a_2082_, v_a_2083_);
return v___x_2085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___boxed(lean_object* v_00_u03b1_2086_, lean_object* v_c_2087_, lean_object* v_a_2088_, lean_object* v_a_2089_, lean_object* v_a_2090_, lean_object* v_a_2091_, lean_object* v_a_2092_, lean_object* v_a_2093_, lean_object* v_a_2094_, lean_object* v_a_2095_, lean_object* v_a_2096_, lean_object* v_a_2097_, lean_object* v_a_2098_){
_start:
{
lean_object* v_res_2099_; 
v_res_2099_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected(v_00_u03b1_2086_, v_c_2087_, v_a_2088_, v_a_2089_, v_a_2090_, v_a_2091_, v_a_2092_, v_a_2093_, v_a_2094_, v_a_2095_, v_a_2096_, v_a_2097_);
lean_dec(v_a_2097_);
lean_dec_ref(v_a_2096_);
lean_dec(v_a_2095_);
lean_dec_ref(v_a_2094_);
lean_dec(v_a_2093_);
lean_dec_ref(v_a_2092_);
lean_dec(v_a_2091_);
lean_dec_ref(v_a_2090_);
lean_dec(v_a_2089_);
lean_dec(v_a_2088_);
return v_res_2099_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_isTrivial(lean_object* v_c_2100_){
_start:
{
lean_object* v_p_2101_; 
v_p_2101_ = lean_ctor_get(v_c_2100_, 0);
if (lean_obj_tag(v_p_2101_) == 0)
{
lean_object* v_k_2102_; lean_object* v___x_2103_; uint8_t v___x_2104_; 
v_k_2102_ = lean_ctor_get(v_p_2101_, 0);
v___x_2103_ = lean_obj_once(&l_Int_Internal_Linear_Poly_isZero___closed__0, &l_Int_Internal_Linear_Poly_isZero___closed__0_once, _init_l_Int_Internal_Linear_Poly_isZero___closed__0);
v___x_2104_ = lean_int_dec_eq(v_k_2102_, v___x_2103_);
return v___x_2104_;
}
else
{
uint8_t v___x_2105_; 
v___x_2105_ = 0;
return v___x_2105_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_isTrivial___boxed(lean_object* v_c_2106_){
_start:
{
uint8_t v_res_2107_; lean_object* v_r_2108_; 
v_res_2107_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_isTrivial(v_c_2106_);
lean_dec_ref(v_c_2106_);
v_r_2108_ = lean_box(v_res_2107_);
return v_r_2108_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg___closed__1(void){
_start:
{
lean_object* v___x_2110_; lean_object* v___x_2111_; 
v___x_2110_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg___closed__0));
v___x_2111_ = l_Lean_stringToMessageData(v___x_2110_);
return v___x_2111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(lean_object* v_c_2112_, lean_object* v_a_2113_, lean_object* v_a_2114_){
_start:
{
lean_object* v_p_2116_; lean_object* v___x_2117_; 
v_p_2116_ = lean_ctor_get(v_c_2112_, 0);
lean_inc_ref(v_p_2116_);
lean_dec_ref(v_c_2112_);
v___x_2117_ = l_Int_Internal_Linear_Poly_pp___redArg(v_p_2116_, v_a_2113_, v_a_2114_);
if (lean_obj_tag(v___x_2117_) == 0)
{
lean_object* v_a_2118_; lean_object* v___x_2120_; uint8_t v_isShared_2121_; uint8_t v_isSharedCheck_2127_; 
v_a_2118_ = lean_ctor_get(v___x_2117_, 0);
v_isSharedCheck_2127_ = !lean_is_exclusive(v___x_2117_);
if (v_isSharedCheck_2127_ == 0)
{
v___x_2120_ = v___x_2117_;
v_isShared_2121_ = v_isSharedCheck_2127_;
goto v_resetjp_2119_;
}
else
{
lean_inc(v_a_2118_);
lean_dec(v___x_2117_);
v___x_2120_ = lean_box(0);
v_isShared_2121_ = v_isSharedCheck_2127_;
goto v_resetjp_2119_;
}
v_resetjp_2119_:
{
lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2125_; 
v___x_2122_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg___closed__1, &l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg___closed__1);
v___x_2123_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2123_, 0, v_a_2118_);
lean_ctor_set(v___x_2123_, 1, v___x_2122_);
if (v_isShared_2121_ == 0)
{
lean_ctor_set(v___x_2120_, 0, v___x_2123_);
v___x_2125_ = v___x_2120_;
goto v_reusejp_2124_;
}
else
{
lean_object* v_reuseFailAlloc_2126_; 
v_reuseFailAlloc_2126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2126_, 0, v___x_2123_);
v___x_2125_ = v_reuseFailAlloc_2126_;
goto v_reusejp_2124_;
}
v_reusejp_2124_:
{
return v___x_2125_;
}
}
}
else
{
return v___x_2117_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg___boxed(lean_object* v_c_2128_, lean_object* v_a_2129_, lean_object* v_a_2130_, lean_object* v_a_2131_){
_start:
{
lean_object* v_res_2132_; 
v_res_2132_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(v_c_2128_, v_a_2129_, v_a_2130_);
lean_dec_ref(v_a_2130_);
lean_dec(v_a_2129_);
return v_res_2132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp(lean_object* v_c_2133_, lean_object* v_a_2134_, lean_object* v_a_2135_, lean_object* v_a_2136_, lean_object* v_a_2137_, lean_object* v_a_2138_, lean_object* v_a_2139_, lean_object* v_a_2140_, lean_object* v_a_2141_, lean_object* v_a_2142_, lean_object* v_a_2143_){
_start:
{
lean_object* v___x_2145_; 
v___x_2145_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(v_c_2133_, v_a_2134_, v_a_2142_);
return v___x_2145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___boxed(lean_object* v_c_2146_, lean_object* v_a_2147_, lean_object* v_a_2148_, lean_object* v_a_2149_, lean_object* v_a_2150_, lean_object* v_a_2151_, lean_object* v_a_2152_, lean_object* v_a_2153_, lean_object* v_a_2154_, lean_object* v_a_2155_, lean_object* v_a_2156_, lean_object* v_a_2157_){
_start:
{
lean_object* v_res_2158_; 
v_res_2158_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp(v_c_2146_, v_a_2147_, v_a_2148_, v_a_2149_, v_a_2150_, v_a_2151_, v_a_2152_, v_a_2153_, v_a_2154_, v_a_2155_, v_a_2156_);
lean_dec(v_a_2156_);
lean_dec_ref(v_a_2155_);
lean_dec(v_a_2154_);
lean_dec_ref(v_a_2153_);
lean_dec(v_a_2152_);
lean_dec_ref(v_a_2151_);
lean_dec(v_a_2150_);
lean_dec_ref(v_a_2149_);
lean_dec(v_a_2148_);
lean_dec(v_a_2147_);
return v_res_2158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_denoteExpr___redArg(lean_object* v_c_2159_, lean_object* v_a_2160_, lean_object* v_a_2161_){
_start:
{
lean_object* v_p_2163_; lean_object* v___x_2164_; 
v_p_2163_ = lean_ctor_get(v_c_2159_, 0);
lean_inc_ref(v_p_2163_);
lean_dec_ref(v_c_2159_);
v___x_2164_ = l_Int_Internal_Linear_Poly_denoteExpr_x27___redArg(v_p_2163_, v_a_2160_, v_a_2161_);
if (lean_obj_tag(v___x_2164_) == 0)
{
lean_object* v_a_2165_; lean_object* v___x_2167_; uint8_t v_isShared_2168_; uint8_t v_isSharedCheck_2174_; 
v_a_2165_ = lean_ctor_get(v___x_2164_, 0);
v_isSharedCheck_2174_ = !lean_is_exclusive(v___x_2164_);
if (v_isSharedCheck_2174_ == 0)
{
v___x_2167_ = v___x_2164_;
v_isShared_2168_ = v_isSharedCheck_2174_;
goto v_resetjp_2166_;
}
else
{
lean_inc(v_a_2165_);
lean_dec(v___x_2164_);
v___x_2167_ = lean_box(0);
v_isShared_2168_ = v_isSharedCheck_2174_;
goto v_resetjp_2166_;
}
v_resetjp_2166_:
{
lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2172_; 
v___x_2169_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_denoteExpr___redArg___closed__0);
v___x_2170_ = l_Lean_mkIntEq(v_a_2165_, v___x_2169_);
if (v_isShared_2168_ == 0)
{
lean_ctor_set(v___x_2167_, 0, v___x_2170_);
v___x_2172_ = v___x_2167_;
goto v_reusejp_2171_;
}
else
{
lean_object* v_reuseFailAlloc_2173_; 
v_reuseFailAlloc_2173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2173_, 0, v___x_2170_);
v___x_2172_ = v_reuseFailAlloc_2173_;
goto v_reusejp_2171_;
}
v_reusejp_2171_:
{
return v___x_2172_;
}
}
}
else
{
return v___x_2164_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_denoteExpr___redArg___boxed(lean_object* v_c_2175_, lean_object* v_a_2176_, lean_object* v_a_2177_, lean_object* v_a_2178_){
_start:
{
lean_object* v_res_2179_; 
v_res_2179_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_denoteExpr___redArg(v_c_2175_, v_a_2176_, v_a_2177_);
lean_dec_ref(v_a_2177_);
lean_dec(v_a_2176_);
return v_res_2179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_denoteExpr(lean_object* v_c_2180_, lean_object* v_a_2181_, lean_object* v_a_2182_, lean_object* v_a_2183_, lean_object* v_a_2184_, lean_object* v_a_2185_, lean_object* v_a_2186_, lean_object* v_a_2187_, lean_object* v_a_2188_, lean_object* v_a_2189_, lean_object* v_a_2190_){
_start:
{
lean_object* v___x_2192_; 
v___x_2192_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_denoteExpr___redArg(v_c_2180_, v_a_2181_, v_a_2189_);
return v___x_2192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_denoteExpr___boxed(lean_object* v_c_2193_, lean_object* v_a_2194_, lean_object* v_a_2195_, lean_object* v_a_2196_, lean_object* v_a_2197_, lean_object* v_a_2198_, lean_object* v_a_2199_, lean_object* v_a_2200_, lean_object* v_a_2201_, lean_object* v_a_2202_, lean_object* v_a_2203_, lean_object* v_a_2204_){
_start:
{
lean_object* v_res_2205_; 
v_res_2205_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_denoteExpr(v_c_2193_, v_a_2194_, v_a_2195_, v_a_2196_, v_a_2197_, v_a_2198_, v_a_2199_, v_a_2200_, v_a_2201_, v_a_2202_, v_a_2203_);
lean_dec(v_a_2203_);
lean_dec_ref(v_a_2202_);
lean_dec(v_a_2201_);
lean_dec_ref(v_a_2200_);
lean_dec(v_a_2199_);
lean_dec_ref(v_a_2198_);
lean_dec(v_a_2197_);
lean_dec_ref(v_a_2196_);
lean_dec(v_a_2195_);
lean_dec(v_a_2194_);
return v_res_2205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___redArg(lean_object* v_c_2206_, lean_object* v_a_2207_, lean_object* v_a_2208_, lean_object* v_a_2209_, lean_object* v_a_2210_, lean_object* v_a_2211_){
_start:
{
lean_object* v___x_2213_; 
v___x_2213_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(v_c_2206_, v_a_2207_, v_a_2210_);
if (lean_obj_tag(v___x_2213_) == 0)
{
lean_object* v_a_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; 
v_a_2214_ = lean_ctor_get(v___x_2213_, 0);
lean_inc(v_a_2214_);
lean_dec_ref_known(v___x_2213_, 1);
v___x_2215_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__1, &l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected___redArg___closed__1);
v___x_2216_ = l_Lean_indentD(v_a_2214_);
v___x_2217_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2217_, 0, v___x_2215_);
lean_ctor_set(v___x_2217_, 1, v___x_2216_);
v___x_2218_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0___redArg(v___x_2217_, v_a_2208_, v_a_2209_, v_a_2210_, v_a_2211_);
return v___x_2218_;
}
else
{
lean_object* v_a_2219_; lean_object* v___x_2221_; uint8_t v_isShared_2222_; uint8_t v_isSharedCheck_2226_; 
v_a_2219_ = lean_ctor_get(v___x_2213_, 0);
v_isSharedCheck_2226_ = !lean_is_exclusive(v___x_2213_);
if (v_isSharedCheck_2226_ == 0)
{
v___x_2221_ = v___x_2213_;
v_isShared_2222_ = v_isSharedCheck_2226_;
goto v_resetjp_2220_;
}
else
{
lean_inc(v_a_2219_);
lean_dec(v___x_2213_);
v___x_2221_ = lean_box(0);
v_isShared_2222_ = v_isSharedCheck_2226_;
goto v_resetjp_2220_;
}
v_resetjp_2220_:
{
lean_object* v___x_2224_; 
if (v_isShared_2222_ == 0)
{
v___x_2224_ = v___x_2221_;
goto v_reusejp_2223_;
}
else
{
lean_object* v_reuseFailAlloc_2225_; 
v_reuseFailAlloc_2225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2225_, 0, v_a_2219_);
v___x_2224_ = v_reuseFailAlloc_2225_;
goto v_reusejp_2223_;
}
v_reusejp_2223_:
{
return v___x_2224_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___redArg___boxed(lean_object* v_c_2227_, lean_object* v_a_2228_, lean_object* v_a_2229_, lean_object* v_a_2230_, lean_object* v_a_2231_, lean_object* v_a_2232_, lean_object* v_a_2233_){
_start:
{
lean_object* v_res_2234_; 
v_res_2234_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___redArg(v_c_2227_, v_a_2228_, v_a_2229_, v_a_2230_, v_a_2231_, v_a_2232_);
lean_dec(v_a_2232_);
lean_dec_ref(v_a_2231_);
lean_dec(v_a_2230_);
lean_dec_ref(v_a_2229_);
lean_dec(v_a_2228_);
return v_res_2234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected(lean_object* v_00_u03b1_2235_, lean_object* v_c_2236_, lean_object* v_a_2237_, lean_object* v_a_2238_, lean_object* v_a_2239_, lean_object* v_a_2240_, lean_object* v_a_2241_, lean_object* v_a_2242_, lean_object* v_a_2243_, lean_object* v_a_2244_, lean_object* v_a_2245_, lean_object* v_a_2246_){
_start:
{
lean_object* v___x_2248_; 
v___x_2248_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___redArg(v_c_2236_, v_a_2237_, v_a_2243_, v_a_2244_, v_a_2245_, v_a_2246_);
return v___x_2248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected___boxed(lean_object* v_00_u03b1_2249_, lean_object* v_c_2250_, lean_object* v_a_2251_, lean_object* v_a_2252_, lean_object* v_a_2253_, lean_object* v_a_2254_, lean_object* v_a_2255_, lean_object* v_a_2256_, lean_object* v_a_2257_, lean_object* v_a_2258_, lean_object* v_a_2259_, lean_object* v_a_2260_, lean_object* v_a_2261_){
_start:
{
lean_object* v_res_2262_; 
v_res_2262_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_throwUnexpected(v_00_u03b1_2249_, v_c_2250_, v_a_2251_, v_a_2252_, v_a_2253_, v_a_2254_, v_a_2255_, v_a_2256_, v_a_2257_, v_a_2258_, v_a_2259_, v_a_2260_);
lean_dec(v_a_2260_);
lean_dec_ref(v_a_2259_);
lean_dec(v_a_2258_);
lean_dec_ref(v_a_2257_);
lean_dec(v_a_2256_);
lean_dec_ref(v_a_2255_);
lean_dec(v_a_2254_);
lean_dec_ref(v_a_2253_);
lean_dec(v_a_2252_);
lean_dec(v_a_2251_);
return v_res_2262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getOccursOf___redArg(lean_object* v_x_2263_, lean_object* v_a_2264_, lean_object* v_a_2265_){
_start:
{
lean_object* v___x_2267_; 
v___x_2267_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v_a_2264_, v_a_2265_);
if (lean_obj_tag(v___x_2267_) == 0)
{
lean_object* v_a_2268_; lean_object* v___x_2270_; uint8_t v_isShared_2271_; uint8_t v_isSharedCheck_2284_; 
v_a_2268_ = lean_ctor_get(v___x_2267_, 0);
v_isSharedCheck_2284_ = !lean_is_exclusive(v___x_2267_);
if (v_isSharedCheck_2284_ == 0)
{
v___x_2270_ = v___x_2267_;
v_isShared_2271_ = v_isSharedCheck_2284_;
goto v_resetjp_2269_;
}
else
{
lean_inc(v_a_2268_);
lean_dec(v___x_2267_);
v___x_2270_ = lean_box(0);
v_isShared_2271_ = v_isSharedCheck_2284_;
goto v_resetjp_2269_;
}
v_resetjp_2269_:
{
lean_object* v_occurs_2272_; lean_object* v_size_2273_; lean_object* v___x_2274_; uint8_t v___x_2275_; 
v_occurs_2272_ = lean_ctor_get(v_a_2268_, 12);
lean_inc_ref(v_occurs_2272_);
lean_dec(v_a_2268_);
v_size_2273_ = lean_ctor_get(v_occurs_2272_, 2);
v___x_2274_ = lean_box(1);
v___x_2275_ = lean_nat_dec_lt(v_x_2263_, v_size_2273_);
if (v___x_2275_ == 0)
{
lean_object* v___x_2276_; lean_object* v___x_2278_; 
lean_dec_ref(v_occurs_2272_);
v___x_2276_ = l_outOfBounds___redArg(v___x_2274_);
if (v_isShared_2271_ == 0)
{
lean_ctor_set(v___x_2270_, 0, v___x_2276_);
v___x_2278_ = v___x_2270_;
goto v_reusejp_2277_;
}
else
{
lean_object* v_reuseFailAlloc_2279_; 
v_reuseFailAlloc_2279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2279_, 0, v___x_2276_);
v___x_2278_ = v_reuseFailAlloc_2279_;
goto v_reusejp_2277_;
}
v_reusejp_2277_:
{
return v___x_2278_;
}
}
else
{
lean_object* v___x_2280_; lean_object* v___x_2282_; 
v___x_2280_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2274_, v_occurs_2272_, v_x_2263_);
lean_dec_ref(v_occurs_2272_);
if (v_isShared_2271_ == 0)
{
lean_ctor_set(v___x_2270_, 0, v___x_2280_);
v___x_2282_ = v___x_2270_;
goto v_reusejp_2281_;
}
else
{
lean_object* v_reuseFailAlloc_2283_; 
v_reuseFailAlloc_2283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2283_, 0, v___x_2280_);
v___x_2282_ = v_reuseFailAlloc_2283_;
goto v_reusejp_2281_;
}
v_reusejp_2281_:
{
return v___x_2282_;
}
}
}
}
else
{
lean_object* v_a_2285_; lean_object* v___x_2287_; uint8_t v_isShared_2288_; uint8_t v_isSharedCheck_2292_; 
v_a_2285_ = lean_ctor_get(v___x_2267_, 0);
v_isSharedCheck_2292_ = !lean_is_exclusive(v___x_2267_);
if (v_isSharedCheck_2292_ == 0)
{
v___x_2287_ = v___x_2267_;
v_isShared_2288_ = v_isSharedCheck_2292_;
goto v_resetjp_2286_;
}
else
{
lean_inc(v_a_2285_);
lean_dec(v___x_2267_);
v___x_2287_ = lean_box(0);
v_isShared_2288_ = v_isSharedCheck_2292_;
goto v_resetjp_2286_;
}
v_resetjp_2286_:
{
lean_object* v___x_2290_; 
if (v_isShared_2288_ == 0)
{
v___x_2290_ = v___x_2287_;
goto v_reusejp_2289_;
}
else
{
lean_object* v_reuseFailAlloc_2291_; 
v_reuseFailAlloc_2291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2291_, 0, v_a_2285_);
v___x_2290_ = v_reuseFailAlloc_2291_;
goto v_reusejp_2289_;
}
v_reusejp_2289_:
{
return v___x_2290_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getOccursOf___redArg___boxed(lean_object* v_x_2293_, lean_object* v_a_2294_, lean_object* v_a_2295_, lean_object* v_a_2296_){
_start:
{
lean_object* v_res_2297_; 
v_res_2297_ = l_Lean_Meta_Grind_Arith_Cutsat_getOccursOf___redArg(v_x_2293_, v_a_2294_, v_a_2295_);
lean_dec_ref(v_a_2295_);
lean_dec(v_a_2294_);
lean_dec(v_x_2293_);
return v_res_2297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getOccursOf(lean_object* v_x_2298_, lean_object* v_a_2299_, lean_object* v_a_2300_, lean_object* v_a_2301_, lean_object* v_a_2302_, lean_object* v_a_2303_, lean_object* v_a_2304_, lean_object* v_a_2305_, lean_object* v_a_2306_, lean_object* v_a_2307_, lean_object* v_a_2308_){
_start:
{
lean_object* v___x_2310_; 
v___x_2310_ = l_Lean_Meta_Grind_Arith_Cutsat_getOccursOf___redArg(v_x_2298_, v_a_2299_, v_a_2307_);
return v___x_2310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getOccursOf___boxed(lean_object* v_x_2311_, lean_object* v_a_2312_, lean_object* v_a_2313_, lean_object* v_a_2314_, lean_object* v_a_2315_, lean_object* v_a_2316_, lean_object* v_a_2317_, lean_object* v_a_2318_, lean_object* v_a_2319_, lean_object* v_a_2320_, lean_object* v_a_2321_, lean_object* v_a_2322_){
_start:
{
lean_object* v_res_2323_; 
v_res_2323_ = l_Lean_Meta_Grind_Arith_Cutsat_getOccursOf(v_x_2311_, v_a_2312_, v_a_2313_, v_a_2314_, v_a_2315_, v_a_2316_, v_a_2317_, v_a_2318_, v_a_2319_, v_a_2320_, v_a_2321_);
lean_dec(v_a_2321_);
lean_dec_ref(v_a_2320_);
lean_dec(v_a_2319_);
lean_dec_ref(v_a_2318_);
lean_dec(v_a_2317_);
lean_dec_ref(v_a_2316_);
lean_dec(v_a_2315_);
lean_dec_ref(v_a_2314_);
lean_dec(v_a_2313_);
lean_dec(v_a_2312_);
lean_dec(v_x_2311_);
return v_res_2323_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__1___redArg(lean_object* v_k_2324_, lean_object* v_v_2325_, lean_object* v_t_2326_){
_start:
{
if (lean_obj_tag(v_t_2326_) == 0)
{
lean_object* v_size_2327_; lean_object* v_k_2328_; lean_object* v_v_2329_; lean_object* v_l_2330_; lean_object* v_r_2331_; lean_object* v___x_2333_; uint8_t v_isShared_2334_; uint8_t v_isSharedCheck_2612_; 
v_size_2327_ = lean_ctor_get(v_t_2326_, 0);
v_k_2328_ = lean_ctor_get(v_t_2326_, 1);
v_v_2329_ = lean_ctor_get(v_t_2326_, 2);
v_l_2330_ = lean_ctor_get(v_t_2326_, 3);
v_r_2331_ = lean_ctor_get(v_t_2326_, 4);
v_isSharedCheck_2612_ = !lean_is_exclusive(v_t_2326_);
if (v_isSharedCheck_2612_ == 0)
{
v___x_2333_ = v_t_2326_;
v_isShared_2334_ = v_isSharedCheck_2612_;
goto v_resetjp_2332_;
}
else
{
lean_inc(v_r_2331_);
lean_inc(v_l_2330_);
lean_inc(v_v_2329_);
lean_inc(v_k_2328_);
lean_inc(v_size_2327_);
lean_dec(v_t_2326_);
v___x_2333_ = lean_box(0);
v_isShared_2334_ = v_isSharedCheck_2612_;
goto v_resetjp_2332_;
}
v_resetjp_2332_:
{
uint8_t v___x_2335_; 
v___x_2335_ = lean_nat_dec_lt(v_k_2324_, v_k_2328_);
if (v___x_2335_ == 0)
{
uint8_t v___x_2336_; 
v___x_2336_ = lean_nat_dec_eq(v_k_2324_, v_k_2328_);
if (v___x_2336_ == 0)
{
lean_object* v_impl_2337_; lean_object* v___x_2338_; 
lean_dec(v_size_2327_);
v_impl_2337_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__1___redArg(v_k_2324_, v_v_2325_, v_r_2331_);
v___x_2338_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_2330_) == 0)
{
lean_object* v_size_2339_; lean_object* v_size_2340_; lean_object* v_k_2341_; lean_object* v_v_2342_; lean_object* v_l_2343_; lean_object* v_r_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; uint8_t v___x_2347_; 
v_size_2339_ = lean_ctor_get(v_l_2330_, 0);
v_size_2340_ = lean_ctor_get(v_impl_2337_, 0);
v_k_2341_ = lean_ctor_get(v_impl_2337_, 1);
v_v_2342_ = lean_ctor_get(v_impl_2337_, 2);
v_l_2343_ = lean_ctor_get(v_impl_2337_, 3);
lean_inc(v_l_2343_);
v_r_2344_ = lean_ctor_get(v_impl_2337_, 4);
v___x_2345_ = lean_unsigned_to_nat(3u);
v___x_2346_ = lean_nat_mul(v___x_2345_, v_size_2339_);
v___x_2347_ = lean_nat_dec_lt(v___x_2346_, v_size_2340_);
lean_dec(v___x_2346_);
if (v___x_2347_ == 0)
{
lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2351_; 
lean_dec(v_l_2343_);
v___x_2348_ = lean_nat_add(v___x_2338_, v_size_2339_);
v___x_2349_ = lean_nat_add(v___x_2348_, v_size_2340_);
lean_dec(v___x_2348_);
if (v_isShared_2334_ == 0)
{
lean_ctor_set(v___x_2333_, 4, v_impl_2337_);
lean_ctor_set(v___x_2333_, 0, v___x_2349_);
v___x_2351_ = v___x_2333_;
goto v_reusejp_2350_;
}
else
{
lean_object* v_reuseFailAlloc_2352_; 
v_reuseFailAlloc_2352_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2352_, 0, v___x_2349_);
lean_ctor_set(v_reuseFailAlloc_2352_, 1, v_k_2328_);
lean_ctor_set(v_reuseFailAlloc_2352_, 2, v_v_2329_);
lean_ctor_set(v_reuseFailAlloc_2352_, 3, v_l_2330_);
lean_ctor_set(v_reuseFailAlloc_2352_, 4, v_impl_2337_);
v___x_2351_ = v_reuseFailAlloc_2352_;
goto v_reusejp_2350_;
}
v_reusejp_2350_:
{
return v___x_2351_;
}
}
else
{
lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2416_; 
lean_inc(v_r_2344_);
lean_inc(v_v_2342_);
lean_inc(v_k_2341_);
lean_inc(v_size_2340_);
v_isSharedCheck_2416_ = !lean_is_exclusive(v_impl_2337_);
if (v_isSharedCheck_2416_ == 0)
{
lean_object* v_unused_2417_; lean_object* v_unused_2418_; lean_object* v_unused_2419_; lean_object* v_unused_2420_; lean_object* v_unused_2421_; 
v_unused_2417_ = lean_ctor_get(v_impl_2337_, 4);
lean_dec(v_unused_2417_);
v_unused_2418_ = lean_ctor_get(v_impl_2337_, 3);
lean_dec(v_unused_2418_);
v_unused_2419_ = lean_ctor_get(v_impl_2337_, 2);
lean_dec(v_unused_2419_);
v_unused_2420_ = lean_ctor_get(v_impl_2337_, 1);
lean_dec(v_unused_2420_);
v_unused_2421_ = lean_ctor_get(v_impl_2337_, 0);
lean_dec(v_unused_2421_);
v___x_2354_ = v_impl_2337_;
v_isShared_2355_ = v_isSharedCheck_2416_;
goto v_resetjp_2353_;
}
else
{
lean_dec(v_impl_2337_);
v___x_2354_ = lean_box(0);
v_isShared_2355_ = v_isSharedCheck_2416_;
goto v_resetjp_2353_;
}
v_resetjp_2353_:
{
lean_object* v_size_2356_; lean_object* v_k_2357_; lean_object* v_v_2358_; lean_object* v_l_2359_; lean_object* v_r_2360_; lean_object* v_size_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; uint8_t v___x_2364_; 
v_size_2356_ = lean_ctor_get(v_l_2343_, 0);
v_k_2357_ = lean_ctor_get(v_l_2343_, 1);
v_v_2358_ = lean_ctor_get(v_l_2343_, 2);
v_l_2359_ = lean_ctor_get(v_l_2343_, 3);
v_r_2360_ = lean_ctor_get(v_l_2343_, 4);
v_size_2361_ = lean_ctor_get(v_r_2344_, 0);
v___x_2362_ = lean_unsigned_to_nat(2u);
v___x_2363_ = lean_nat_mul(v___x_2362_, v_size_2361_);
v___x_2364_ = lean_nat_dec_lt(v_size_2356_, v___x_2363_);
lean_dec(v___x_2363_);
if (v___x_2364_ == 0)
{
lean_object* v___x_2366_; uint8_t v_isShared_2367_; uint8_t v_isSharedCheck_2392_; 
lean_inc(v_r_2360_);
lean_inc(v_l_2359_);
lean_inc(v_v_2358_);
lean_inc(v_k_2357_);
v_isSharedCheck_2392_ = !lean_is_exclusive(v_l_2343_);
if (v_isSharedCheck_2392_ == 0)
{
lean_object* v_unused_2393_; lean_object* v_unused_2394_; lean_object* v_unused_2395_; lean_object* v_unused_2396_; lean_object* v_unused_2397_; 
v_unused_2393_ = lean_ctor_get(v_l_2343_, 4);
lean_dec(v_unused_2393_);
v_unused_2394_ = lean_ctor_get(v_l_2343_, 3);
lean_dec(v_unused_2394_);
v_unused_2395_ = lean_ctor_get(v_l_2343_, 2);
lean_dec(v_unused_2395_);
v_unused_2396_ = lean_ctor_get(v_l_2343_, 1);
lean_dec(v_unused_2396_);
v_unused_2397_ = lean_ctor_get(v_l_2343_, 0);
lean_dec(v_unused_2397_);
v___x_2366_ = v_l_2343_;
v_isShared_2367_ = v_isSharedCheck_2392_;
goto v_resetjp_2365_;
}
else
{
lean_dec(v_l_2343_);
v___x_2366_ = lean_box(0);
v_isShared_2367_ = v_isSharedCheck_2392_;
goto v_resetjp_2365_;
}
v_resetjp_2365_:
{
lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___y_2371_; lean_object* v___y_2372_; lean_object* v___y_2373_; lean_object* v___y_2382_; 
v___x_2368_ = lean_nat_add(v___x_2338_, v_size_2339_);
v___x_2369_ = lean_nat_add(v___x_2368_, v_size_2340_);
lean_dec(v_size_2340_);
if (lean_obj_tag(v_l_2359_) == 0)
{
lean_object* v_size_2390_; 
v_size_2390_ = lean_ctor_get(v_l_2359_, 0);
lean_inc(v_size_2390_);
v___y_2382_ = v_size_2390_;
goto v___jp_2381_;
}
else
{
lean_object* v___x_2391_; 
v___x_2391_ = lean_unsigned_to_nat(0u);
v___y_2382_ = v___x_2391_;
goto v___jp_2381_;
}
v___jp_2370_:
{
lean_object* v___x_2374_; lean_object* v___x_2376_; 
v___x_2374_ = lean_nat_add(v___y_2372_, v___y_2373_);
lean_dec(v___y_2373_);
lean_dec(v___y_2372_);
if (v_isShared_2367_ == 0)
{
lean_ctor_set(v___x_2366_, 4, v_r_2344_);
lean_ctor_set(v___x_2366_, 3, v_r_2360_);
lean_ctor_set(v___x_2366_, 2, v_v_2342_);
lean_ctor_set(v___x_2366_, 1, v_k_2341_);
lean_ctor_set(v___x_2366_, 0, v___x_2374_);
v___x_2376_ = v___x_2366_;
goto v_reusejp_2375_;
}
else
{
lean_object* v_reuseFailAlloc_2380_; 
v_reuseFailAlloc_2380_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2380_, 0, v___x_2374_);
lean_ctor_set(v_reuseFailAlloc_2380_, 1, v_k_2341_);
lean_ctor_set(v_reuseFailAlloc_2380_, 2, v_v_2342_);
lean_ctor_set(v_reuseFailAlloc_2380_, 3, v_r_2360_);
lean_ctor_set(v_reuseFailAlloc_2380_, 4, v_r_2344_);
v___x_2376_ = v_reuseFailAlloc_2380_;
goto v_reusejp_2375_;
}
v_reusejp_2375_:
{
lean_object* v___x_2378_; 
if (v_isShared_2355_ == 0)
{
lean_ctor_set(v___x_2354_, 4, v___x_2376_);
lean_ctor_set(v___x_2354_, 3, v___y_2371_);
lean_ctor_set(v___x_2354_, 2, v_v_2358_);
lean_ctor_set(v___x_2354_, 1, v_k_2357_);
lean_ctor_set(v___x_2354_, 0, v___x_2369_);
v___x_2378_ = v___x_2354_;
goto v_reusejp_2377_;
}
else
{
lean_object* v_reuseFailAlloc_2379_; 
v_reuseFailAlloc_2379_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2379_, 0, v___x_2369_);
lean_ctor_set(v_reuseFailAlloc_2379_, 1, v_k_2357_);
lean_ctor_set(v_reuseFailAlloc_2379_, 2, v_v_2358_);
lean_ctor_set(v_reuseFailAlloc_2379_, 3, v___y_2371_);
lean_ctor_set(v_reuseFailAlloc_2379_, 4, v___x_2376_);
v___x_2378_ = v_reuseFailAlloc_2379_;
goto v_reusejp_2377_;
}
v_reusejp_2377_:
{
return v___x_2378_;
}
}
}
v___jp_2381_:
{
lean_object* v___x_2383_; lean_object* v___x_2385_; 
v___x_2383_ = lean_nat_add(v___x_2368_, v___y_2382_);
lean_dec(v___y_2382_);
lean_dec(v___x_2368_);
if (v_isShared_2334_ == 0)
{
lean_ctor_set(v___x_2333_, 4, v_l_2359_);
lean_ctor_set(v___x_2333_, 0, v___x_2383_);
v___x_2385_ = v___x_2333_;
goto v_reusejp_2384_;
}
else
{
lean_object* v_reuseFailAlloc_2389_; 
v_reuseFailAlloc_2389_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2389_, 0, v___x_2383_);
lean_ctor_set(v_reuseFailAlloc_2389_, 1, v_k_2328_);
lean_ctor_set(v_reuseFailAlloc_2389_, 2, v_v_2329_);
lean_ctor_set(v_reuseFailAlloc_2389_, 3, v_l_2330_);
lean_ctor_set(v_reuseFailAlloc_2389_, 4, v_l_2359_);
v___x_2385_ = v_reuseFailAlloc_2389_;
goto v_reusejp_2384_;
}
v_reusejp_2384_:
{
lean_object* v___x_2386_; 
v___x_2386_ = lean_nat_add(v___x_2338_, v_size_2361_);
if (lean_obj_tag(v_r_2360_) == 0)
{
lean_object* v_size_2387_; 
v_size_2387_ = lean_ctor_get(v_r_2360_, 0);
lean_inc(v_size_2387_);
v___y_2371_ = v___x_2385_;
v___y_2372_ = v___x_2386_;
v___y_2373_ = v_size_2387_;
goto v___jp_2370_;
}
else
{
lean_object* v___x_2388_; 
v___x_2388_ = lean_unsigned_to_nat(0u);
v___y_2371_ = v___x_2385_;
v___y_2372_ = v___x_2386_;
v___y_2373_ = v___x_2388_;
goto v___jp_2370_;
}
}
}
}
}
else
{
lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2402_; 
lean_del_object(v___x_2333_);
v___x_2398_ = lean_nat_add(v___x_2338_, v_size_2339_);
v___x_2399_ = lean_nat_add(v___x_2398_, v_size_2340_);
lean_dec(v_size_2340_);
v___x_2400_ = lean_nat_add(v___x_2398_, v_size_2356_);
lean_dec(v___x_2398_);
lean_inc_ref(v_l_2330_);
if (v_isShared_2355_ == 0)
{
lean_ctor_set(v___x_2354_, 4, v_l_2343_);
lean_ctor_set(v___x_2354_, 3, v_l_2330_);
lean_ctor_set(v___x_2354_, 2, v_v_2329_);
lean_ctor_set(v___x_2354_, 1, v_k_2328_);
lean_ctor_set(v___x_2354_, 0, v___x_2400_);
v___x_2402_ = v___x_2354_;
goto v_reusejp_2401_;
}
else
{
lean_object* v_reuseFailAlloc_2415_; 
v_reuseFailAlloc_2415_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2415_, 0, v___x_2400_);
lean_ctor_set(v_reuseFailAlloc_2415_, 1, v_k_2328_);
lean_ctor_set(v_reuseFailAlloc_2415_, 2, v_v_2329_);
lean_ctor_set(v_reuseFailAlloc_2415_, 3, v_l_2330_);
lean_ctor_set(v_reuseFailAlloc_2415_, 4, v_l_2343_);
v___x_2402_ = v_reuseFailAlloc_2415_;
goto v_reusejp_2401_;
}
v_reusejp_2401_:
{
lean_object* v___x_2404_; uint8_t v_isShared_2405_; uint8_t v_isSharedCheck_2409_; 
v_isSharedCheck_2409_ = !lean_is_exclusive(v_l_2330_);
if (v_isSharedCheck_2409_ == 0)
{
lean_object* v_unused_2410_; lean_object* v_unused_2411_; lean_object* v_unused_2412_; lean_object* v_unused_2413_; lean_object* v_unused_2414_; 
v_unused_2410_ = lean_ctor_get(v_l_2330_, 4);
lean_dec(v_unused_2410_);
v_unused_2411_ = lean_ctor_get(v_l_2330_, 3);
lean_dec(v_unused_2411_);
v_unused_2412_ = lean_ctor_get(v_l_2330_, 2);
lean_dec(v_unused_2412_);
v_unused_2413_ = lean_ctor_get(v_l_2330_, 1);
lean_dec(v_unused_2413_);
v_unused_2414_ = lean_ctor_get(v_l_2330_, 0);
lean_dec(v_unused_2414_);
v___x_2404_ = v_l_2330_;
v_isShared_2405_ = v_isSharedCheck_2409_;
goto v_resetjp_2403_;
}
else
{
lean_dec(v_l_2330_);
v___x_2404_ = lean_box(0);
v_isShared_2405_ = v_isSharedCheck_2409_;
goto v_resetjp_2403_;
}
v_resetjp_2403_:
{
lean_object* v___x_2407_; 
if (v_isShared_2405_ == 0)
{
lean_ctor_set(v___x_2404_, 4, v_r_2344_);
lean_ctor_set(v___x_2404_, 3, v___x_2402_);
lean_ctor_set(v___x_2404_, 2, v_v_2342_);
lean_ctor_set(v___x_2404_, 1, v_k_2341_);
lean_ctor_set(v___x_2404_, 0, v___x_2399_);
v___x_2407_ = v___x_2404_;
goto v_reusejp_2406_;
}
else
{
lean_object* v_reuseFailAlloc_2408_; 
v_reuseFailAlloc_2408_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2408_, 0, v___x_2399_);
lean_ctor_set(v_reuseFailAlloc_2408_, 1, v_k_2341_);
lean_ctor_set(v_reuseFailAlloc_2408_, 2, v_v_2342_);
lean_ctor_set(v_reuseFailAlloc_2408_, 3, v___x_2402_);
lean_ctor_set(v_reuseFailAlloc_2408_, 4, v_r_2344_);
v___x_2407_ = v_reuseFailAlloc_2408_;
goto v_reusejp_2406_;
}
v_reusejp_2406_:
{
return v___x_2407_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_2422_; 
v_l_2422_ = lean_ctor_get(v_impl_2337_, 3);
lean_inc(v_l_2422_);
if (lean_obj_tag(v_l_2422_) == 0)
{
lean_object* v_r_2423_; lean_object* v_k_2424_; lean_object* v_v_2425_; lean_object* v___x_2427_; uint8_t v_isShared_2428_; uint8_t v_isSharedCheck_2448_; 
v_r_2423_ = lean_ctor_get(v_impl_2337_, 4);
v_k_2424_ = lean_ctor_get(v_impl_2337_, 1);
v_v_2425_ = lean_ctor_get(v_impl_2337_, 2);
v_isSharedCheck_2448_ = !lean_is_exclusive(v_impl_2337_);
if (v_isSharedCheck_2448_ == 0)
{
lean_object* v_unused_2449_; lean_object* v_unused_2450_; 
v_unused_2449_ = lean_ctor_get(v_impl_2337_, 3);
lean_dec(v_unused_2449_);
v_unused_2450_ = lean_ctor_get(v_impl_2337_, 0);
lean_dec(v_unused_2450_);
v___x_2427_ = v_impl_2337_;
v_isShared_2428_ = v_isSharedCheck_2448_;
goto v_resetjp_2426_;
}
else
{
lean_inc(v_r_2423_);
lean_inc(v_v_2425_);
lean_inc(v_k_2424_);
lean_dec(v_impl_2337_);
v___x_2427_ = lean_box(0);
v_isShared_2428_ = v_isSharedCheck_2448_;
goto v_resetjp_2426_;
}
v_resetjp_2426_:
{
lean_object* v_k_2429_; lean_object* v_v_2430_; lean_object* v___x_2432_; uint8_t v_isShared_2433_; uint8_t v_isSharedCheck_2444_; 
v_k_2429_ = lean_ctor_get(v_l_2422_, 1);
v_v_2430_ = lean_ctor_get(v_l_2422_, 2);
v_isSharedCheck_2444_ = !lean_is_exclusive(v_l_2422_);
if (v_isSharedCheck_2444_ == 0)
{
lean_object* v_unused_2445_; lean_object* v_unused_2446_; lean_object* v_unused_2447_; 
v_unused_2445_ = lean_ctor_get(v_l_2422_, 4);
lean_dec(v_unused_2445_);
v_unused_2446_ = lean_ctor_get(v_l_2422_, 3);
lean_dec(v_unused_2446_);
v_unused_2447_ = lean_ctor_get(v_l_2422_, 0);
lean_dec(v_unused_2447_);
v___x_2432_ = v_l_2422_;
v_isShared_2433_ = v_isSharedCheck_2444_;
goto v_resetjp_2431_;
}
else
{
lean_inc(v_v_2430_);
lean_inc(v_k_2429_);
lean_dec(v_l_2422_);
v___x_2432_ = lean_box(0);
v_isShared_2433_ = v_isSharedCheck_2444_;
goto v_resetjp_2431_;
}
v_resetjp_2431_:
{
lean_object* v___x_2434_; lean_object* v___x_2436_; 
v___x_2434_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_2423_, 2);
if (v_isShared_2433_ == 0)
{
lean_ctor_set(v___x_2432_, 4, v_r_2423_);
lean_ctor_set(v___x_2432_, 3, v_r_2423_);
lean_ctor_set(v___x_2432_, 2, v_v_2329_);
lean_ctor_set(v___x_2432_, 1, v_k_2328_);
lean_ctor_set(v___x_2432_, 0, v___x_2338_);
v___x_2436_ = v___x_2432_;
goto v_reusejp_2435_;
}
else
{
lean_object* v_reuseFailAlloc_2443_; 
v_reuseFailAlloc_2443_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2443_, 0, v___x_2338_);
lean_ctor_set(v_reuseFailAlloc_2443_, 1, v_k_2328_);
lean_ctor_set(v_reuseFailAlloc_2443_, 2, v_v_2329_);
lean_ctor_set(v_reuseFailAlloc_2443_, 3, v_r_2423_);
lean_ctor_set(v_reuseFailAlloc_2443_, 4, v_r_2423_);
v___x_2436_ = v_reuseFailAlloc_2443_;
goto v_reusejp_2435_;
}
v_reusejp_2435_:
{
lean_object* v___x_2438_; 
lean_inc(v_r_2423_);
if (v_isShared_2428_ == 0)
{
lean_ctor_set(v___x_2427_, 3, v_r_2423_);
lean_ctor_set(v___x_2427_, 0, v___x_2338_);
v___x_2438_ = v___x_2427_;
goto v_reusejp_2437_;
}
else
{
lean_object* v_reuseFailAlloc_2442_; 
v_reuseFailAlloc_2442_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2442_, 0, v___x_2338_);
lean_ctor_set(v_reuseFailAlloc_2442_, 1, v_k_2424_);
lean_ctor_set(v_reuseFailAlloc_2442_, 2, v_v_2425_);
lean_ctor_set(v_reuseFailAlloc_2442_, 3, v_r_2423_);
lean_ctor_set(v_reuseFailAlloc_2442_, 4, v_r_2423_);
v___x_2438_ = v_reuseFailAlloc_2442_;
goto v_reusejp_2437_;
}
v_reusejp_2437_:
{
lean_object* v___x_2440_; 
if (v_isShared_2334_ == 0)
{
lean_ctor_set(v___x_2333_, 4, v___x_2438_);
lean_ctor_set(v___x_2333_, 3, v___x_2436_);
lean_ctor_set(v___x_2333_, 2, v_v_2430_);
lean_ctor_set(v___x_2333_, 1, v_k_2429_);
lean_ctor_set(v___x_2333_, 0, v___x_2434_);
v___x_2440_ = v___x_2333_;
goto v_reusejp_2439_;
}
else
{
lean_object* v_reuseFailAlloc_2441_; 
v_reuseFailAlloc_2441_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2441_, 0, v___x_2434_);
lean_ctor_set(v_reuseFailAlloc_2441_, 1, v_k_2429_);
lean_ctor_set(v_reuseFailAlloc_2441_, 2, v_v_2430_);
lean_ctor_set(v_reuseFailAlloc_2441_, 3, v___x_2436_);
lean_ctor_set(v_reuseFailAlloc_2441_, 4, v___x_2438_);
v___x_2440_ = v_reuseFailAlloc_2441_;
goto v_reusejp_2439_;
}
v_reusejp_2439_:
{
return v___x_2440_;
}
}
}
}
}
}
else
{
lean_object* v_r_2451_; 
v_r_2451_ = lean_ctor_get(v_impl_2337_, 4);
lean_inc(v_r_2451_);
if (lean_obj_tag(v_r_2451_) == 0)
{
lean_object* v_k_2452_; lean_object* v_v_2453_; lean_object* v___x_2455_; uint8_t v_isShared_2456_; uint8_t v_isSharedCheck_2464_; 
v_k_2452_ = lean_ctor_get(v_impl_2337_, 1);
v_v_2453_ = lean_ctor_get(v_impl_2337_, 2);
v_isSharedCheck_2464_ = !lean_is_exclusive(v_impl_2337_);
if (v_isSharedCheck_2464_ == 0)
{
lean_object* v_unused_2465_; lean_object* v_unused_2466_; lean_object* v_unused_2467_; 
v_unused_2465_ = lean_ctor_get(v_impl_2337_, 4);
lean_dec(v_unused_2465_);
v_unused_2466_ = lean_ctor_get(v_impl_2337_, 3);
lean_dec(v_unused_2466_);
v_unused_2467_ = lean_ctor_get(v_impl_2337_, 0);
lean_dec(v_unused_2467_);
v___x_2455_ = v_impl_2337_;
v_isShared_2456_ = v_isSharedCheck_2464_;
goto v_resetjp_2454_;
}
else
{
lean_inc(v_v_2453_);
lean_inc(v_k_2452_);
lean_dec(v_impl_2337_);
v___x_2455_ = lean_box(0);
v_isShared_2456_ = v_isSharedCheck_2464_;
goto v_resetjp_2454_;
}
v_resetjp_2454_:
{
lean_object* v___x_2457_; lean_object* v___x_2459_; 
v___x_2457_ = lean_unsigned_to_nat(3u);
if (v_isShared_2456_ == 0)
{
lean_ctor_set(v___x_2455_, 4, v_l_2422_);
lean_ctor_set(v___x_2455_, 2, v_v_2329_);
lean_ctor_set(v___x_2455_, 1, v_k_2328_);
lean_ctor_set(v___x_2455_, 0, v___x_2338_);
v___x_2459_ = v___x_2455_;
goto v_reusejp_2458_;
}
else
{
lean_object* v_reuseFailAlloc_2463_; 
v_reuseFailAlloc_2463_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2463_, 0, v___x_2338_);
lean_ctor_set(v_reuseFailAlloc_2463_, 1, v_k_2328_);
lean_ctor_set(v_reuseFailAlloc_2463_, 2, v_v_2329_);
lean_ctor_set(v_reuseFailAlloc_2463_, 3, v_l_2422_);
lean_ctor_set(v_reuseFailAlloc_2463_, 4, v_l_2422_);
v___x_2459_ = v_reuseFailAlloc_2463_;
goto v_reusejp_2458_;
}
v_reusejp_2458_:
{
lean_object* v___x_2461_; 
if (v_isShared_2334_ == 0)
{
lean_ctor_set(v___x_2333_, 4, v_r_2451_);
lean_ctor_set(v___x_2333_, 3, v___x_2459_);
lean_ctor_set(v___x_2333_, 2, v_v_2453_);
lean_ctor_set(v___x_2333_, 1, v_k_2452_);
lean_ctor_set(v___x_2333_, 0, v___x_2457_);
v___x_2461_ = v___x_2333_;
goto v_reusejp_2460_;
}
else
{
lean_object* v_reuseFailAlloc_2462_; 
v_reuseFailAlloc_2462_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2462_, 0, v___x_2457_);
lean_ctor_set(v_reuseFailAlloc_2462_, 1, v_k_2452_);
lean_ctor_set(v_reuseFailAlloc_2462_, 2, v_v_2453_);
lean_ctor_set(v_reuseFailAlloc_2462_, 3, v___x_2459_);
lean_ctor_set(v_reuseFailAlloc_2462_, 4, v_r_2451_);
v___x_2461_ = v_reuseFailAlloc_2462_;
goto v_reusejp_2460_;
}
v_reusejp_2460_:
{
return v___x_2461_;
}
}
}
}
else
{
lean_object* v___x_2468_; lean_object* v___x_2470_; 
v___x_2468_ = lean_unsigned_to_nat(2u);
if (v_isShared_2334_ == 0)
{
lean_ctor_set(v___x_2333_, 4, v_impl_2337_);
lean_ctor_set(v___x_2333_, 3, v_r_2451_);
lean_ctor_set(v___x_2333_, 0, v___x_2468_);
v___x_2470_ = v___x_2333_;
goto v_reusejp_2469_;
}
else
{
lean_object* v_reuseFailAlloc_2471_; 
v_reuseFailAlloc_2471_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2471_, 0, v___x_2468_);
lean_ctor_set(v_reuseFailAlloc_2471_, 1, v_k_2328_);
lean_ctor_set(v_reuseFailAlloc_2471_, 2, v_v_2329_);
lean_ctor_set(v_reuseFailAlloc_2471_, 3, v_r_2451_);
lean_ctor_set(v_reuseFailAlloc_2471_, 4, v_impl_2337_);
v___x_2470_ = v_reuseFailAlloc_2471_;
goto v_reusejp_2469_;
}
v_reusejp_2469_:
{
return v___x_2470_;
}
}
}
}
}
else
{
lean_object* v___x_2473_; 
lean_dec(v_v_2329_);
lean_dec(v_k_2328_);
if (v_isShared_2334_ == 0)
{
lean_ctor_set(v___x_2333_, 2, v_v_2325_);
lean_ctor_set(v___x_2333_, 1, v_k_2324_);
v___x_2473_ = v___x_2333_;
goto v_reusejp_2472_;
}
else
{
lean_object* v_reuseFailAlloc_2474_; 
v_reuseFailAlloc_2474_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2474_, 0, v_size_2327_);
lean_ctor_set(v_reuseFailAlloc_2474_, 1, v_k_2324_);
lean_ctor_set(v_reuseFailAlloc_2474_, 2, v_v_2325_);
lean_ctor_set(v_reuseFailAlloc_2474_, 3, v_l_2330_);
lean_ctor_set(v_reuseFailAlloc_2474_, 4, v_r_2331_);
v___x_2473_ = v_reuseFailAlloc_2474_;
goto v_reusejp_2472_;
}
v_reusejp_2472_:
{
return v___x_2473_;
}
}
}
else
{
lean_object* v_impl_2475_; lean_object* v___x_2476_; 
lean_dec(v_size_2327_);
v_impl_2475_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__1___redArg(v_k_2324_, v_v_2325_, v_l_2330_);
v___x_2476_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_2331_) == 0)
{
lean_object* v_size_2477_; lean_object* v_size_2478_; lean_object* v_k_2479_; lean_object* v_v_2480_; lean_object* v_l_2481_; lean_object* v_r_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; uint8_t v___x_2485_; 
v_size_2477_ = lean_ctor_get(v_r_2331_, 0);
v_size_2478_ = lean_ctor_get(v_impl_2475_, 0);
v_k_2479_ = lean_ctor_get(v_impl_2475_, 1);
v_v_2480_ = lean_ctor_get(v_impl_2475_, 2);
v_l_2481_ = lean_ctor_get(v_impl_2475_, 3);
v_r_2482_ = lean_ctor_get(v_impl_2475_, 4);
lean_inc(v_r_2482_);
v___x_2483_ = lean_unsigned_to_nat(3u);
v___x_2484_ = lean_nat_mul(v___x_2483_, v_size_2477_);
v___x_2485_ = lean_nat_dec_lt(v___x_2484_, v_size_2478_);
lean_dec(v___x_2484_);
if (v___x_2485_ == 0)
{
lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2489_; 
lean_dec(v_r_2482_);
v___x_2486_ = lean_nat_add(v___x_2476_, v_size_2478_);
v___x_2487_ = lean_nat_add(v___x_2486_, v_size_2477_);
lean_dec(v___x_2486_);
if (v_isShared_2334_ == 0)
{
lean_ctor_set(v___x_2333_, 3, v_impl_2475_);
lean_ctor_set(v___x_2333_, 0, v___x_2487_);
v___x_2489_ = v___x_2333_;
goto v_reusejp_2488_;
}
else
{
lean_object* v_reuseFailAlloc_2490_; 
v_reuseFailAlloc_2490_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2490_, 0, v___x_2487_);
lean_ctor_set(v_reuseFailAlloc_2490_, 1, v_k_2328_);
lean_ctor_set(v_reuseFailAlloc_2490_, 2, v_v_2329_);
lean_ctor_set(v_reuseFailAlloc_2490_, 3, v_impl_2475_);
lean_ctor_set(v_reuseFailAlloc_2490_, 4, v_r_2331_);
v___x_2489_ = v_reuseFailAlloc_2490_;
goto v_reusejp_2488_;
}
v_reusejp_2488_:
{
return v___x_2489_;
}
}
else
{
lean_object* v___x_2492_; uint8_t v_isShared_2493_; uint8_t v_isSharedCheck_2556_; 
lean_inc(v_l_2481_);
lean_inc(v_v_2480_);
lean_inc(v_k_2479_);
lean_inc(v_size_2478_);
v_isSharedCheck_2556_ = !lean_is_exclusive(v_impl_2475_);
if (v_isSharedCheck_2556_ == 0)
{
lean_object* v_unused_2557_; lean_object* v_unused_2558_; lean_object* v_unused_2559_; lean_object* v_unused_2560_; lean_object* v_unused_2561_; 
v_unused_2557_ = lean_ctor_get(v_impl_2475_, 4);
lean_dec(v_unused_2557_);
v_unused_2558_ = lean_ctor_get(v_impl_2475_, 3);
lean_dec(v_unused_2558_);
v_unused_2559_ = lean_ctor_get(v_impl_2475_, 2);
lean_dec(v_unused_2559_);
v_unused_2560_ = lean_ctor_get(v_impl_2475_, 1);
lean_dec(v_unused_2560_);
v_unused_2561_ = lean_ctor_get(v_impl_2475_, 0);
lean_dec(v_unused_2561_);
v___x_2492_ = v_impl_2475_;
v_isShared_2493_ = v_isSharedCheck_2556_;
goto v_resetjp_2491_;
}
else
{
lean_dec(v_impl_2475_);
v___x_2492_ = lean_box(0);
v_isShared_2493_ = v_isSharedCheck_2556_;
goto v_resetjp_2491_;
}
v_resetjp_2491_:
{
lean_object* v_size_2494_; lean_object* v_size_2495_; lean_object* v_k_2496_; lean_object* v_v_2497_; lean_object* v_l_2498_; lean_object* v_r_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; uint8_t v___x_2502_; 
v_size_2494_ = lean_ctor_get(v_l_2481_, 0);
v_size_2495_ = lean_ctor_get(v_r_2482_, 0);
v_k_2496_ = lean_ctor_get(v_r_2482_, 1);
v_v_2497_ = lean_ctor_get(v_r_2482_, 2);
v_l_2498_ = lean_ctor_get(v_r_2482_, 3);
v_r_2499_ = lean_ctor_get(v_r_2482_, 4);
v___x_2500_ = lean_unsigned_to_nat(2u);
v___x_2501_ = lean_nat_mul(v___x_2500_, v_size_2494_);
v___x_2502_ = lean_nat_dec_lt(v_size_2495_, v___x_2501_);
lean_dec(v___x_2501_);
if (v___x_2502_ == 0)
{
lean_object* v___x_2504_; uint8_t v_isShared_2505_; uint8_t v_isSharedCheck_2531_; 
lean_inc(v_r_2499_);
lean_inc(v_l_2498_);
lean_inc(v_v_2497_);
lean_inc(v_k_2496_);
v_isSharedCheck_2531_ = !lean_is_exclusive(v_r_2482_);
if (v_isSharedCheck_2531_ == 0)
{
lean_object* v_unused_2532_; lean_object* v_unused_2533_; lean_object* v_unused_2534_; lean_object* v_unused_2535_; lean_object* v_unused_2536_; 
v_unused_2532_ = lean_ctor_get(v_r_2482_, 4);
lean_dec(v_unused_2532_);
v_unused_2533_ = lean_ctor_get(v_r_2482_, 3);
lean_dec(v_unused_2533_);
v_unused_2534_ = lean_ctor_get(v_r_2482_, 2);
lean_dec(v_unused_2534_);
v_unused_2535_ = lean_ctor_get(v_r_2482_, 1);
lean_dec(v_unused_2535_);
v_unused_2536_ = lean_ctor_get(v_r_2482_, 0);
lean_dec(v_unused_2536_);
v___x_2504_ = v_r_2482_;
v_isShared_2505_ = v_isSharedCheck_2531_;
goto v_resetjp_2503_;
}
else
{
lean_dec(v_r_2482_);
v___x_2504_ = lean_box(0);
v_isShared_2505_ = v_isSharedCheck_2531_;
goto v_resetjp_2503_;
}
v_resetjp_2503_:
{
lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___y_2509_; lean_object* v___y_2510_; lean_object* v___y_2511_; lean_object* v___x_2519_; lean_object* v___y_2521_; 
v___x_2506_ = lean_nat_add(v___x_2476_, v_size_2478_);
lean_dec(v_size_2478_);
v___x_2507_ = lean_nat_add(v___x_2506_, v_size_2477_);
lean_dec(v___x_2506_);
v___x_2519_ = lean_nat_add(v___x_2476_, v_size_2494_);
if (lean_obj_tag(v_l_2498_) == 0)
{
lean_object* v_size_2529_; 
v_size_2529_ = lean_ctor_get(v_l_2498_, 0);
lean_inc(v_size_2529_);
v___y_2521_ = v_size_2529_;
goto v___jp_2520_;
}
else
{
lean_object* v___x_2530_; 
v___x_2530_ = lean_unsigned_to_nat(0u);
v___y_2521_ = v___x_2530_;
goto v___jp_2520_;
}
v___jp_2508_:
{
lean_object* v___x_2512_; lean_object* v___x_2514_; 
v___x_2512_ = lean_nat_add(v___y_2510_, v___y_2511_);
lean_dec(v___y_2511_);
lean_dec(v___y_2510_);
if (v_isShared_2505_ == 0)
{
lean_ctor_set(v___x_2504_, 4, v_r_2331_);
lean_ctor_set(v___x_2504_, 3, v_r_2499_);
lean_ctor_set(v___x_2504_, 2, v_v_2329_);
lean_ctor_set(v___x_2504_, 1, v_k_2328_);
lean_ctor_set(v___x_2504_, 0, v___x_2512_);
v___x_2514_ = v___x_2504_;
goto v_reusejp_2513_;
}
else
{
lean_object* v_reuseFailAlloc_2518_; 
v_reuseFailAlloc_2518_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2518_, 0, v___x_2512_);
lean_ctor_set(v_reuseFailAlloc_2518_, 1, v_k_2328_);
lean_ctor_set(v_reuseFailAlloc_2518_, 2, v_v_2329_);
lean_ctor_set(v_reuseFailAlloc_2518_, 3, v_r_2499_);
lean_ctor_set(v_reuseFailAlloc_2518_, 4, v_r_2331_);
v___x_2514_ = v_reuseFailAlloc_2518_;
goto v_reusejp_2513_;
}
v_reusejp_2513_:
{
lean_object* v___x_2516_; 
if (v_isShared_2493_ == 0)
{
lean_ctor_set(v___x_2492_, 4, v___x_2514_);
lean_ctor_set(v___x_2492_, 3, v___y_2509_);
lean_ctor_set(v___x_2492_, 2, v_v_2497_);
lean_ctor_set(v___x_2492_, 1, v_k_2496_);
lean_ctor_set(v___x_2492_, 0, v___x_2507_);
v___x_2516_ = v___x_2492_;
goto v_reusejp_2515_;
}
else
{
lean_object* v_reuseFailAlloc_2517_; 
v_reuseFailAlloc_2517_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2517_, 0, v___x_2507_);
lean_ctor_set(v_reuseFailAlloc_2517_, 1, v_k_2496_);
lean_ctor_set(v_reuseFailAlloc_2517_, 2, v_v_2497_);
lean_ctor_set(v_reuseFailAlloc_2517_, 3, v___y_2509_);
lean_ctor_set(v_reuseFailAlloc_2517_, 4, v___x_2514_);
v___x_2516_ = v_reuseFailAlloc_2517_;
goto v_reusejp_2515_;
}
v_reusejp_2515_:
{
return v___x_2516_;
}
}
}
v___jp_2520_:
{
lean_object* v___x_2522_; lean_object* v___x_2524_; 
v___x_2522_ = lean_nat_add(v___x_2519_, v___y_2521_);
lean_dec(v___y_2521_);
lean_dec(v___x_2519_);
if (v_isShared_2334_ == 0)
{
lean_ctor_set(v___x_2333_, 4, v_l_2498_);
lean_ctor_set(v___x_2333_, 3, v_l_2481_);
lean_ctor_set(v___x_2333_, 2, v_v_2480_);
lean_ctor_set(v___x_2333_, 1, v_k_2479_);
lean_ctor_set(v___x_2333_, 0, v___x_2522_);
v___x_2524_ = v___x_2333_;
goto v_reusejp_2523_;
}
else
{
lean_object* v_reuseFailAlloc_2528_; 
v_reuseFailAlloc_2528_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2528_, 0, v___x_2522_);
lean_ctor_set(v_reuseFailAlloc_2528_, 1, v_k_2479_);
lean_ctor_set(v_reuseFailAlloc_2528_, 2, v_v_2480_);
lean_ctor_set(v_reuseFailAlloc_2528_, 3, v_l_2481_);
lean_ctor_set(v_reuseFailAlloc_2528_, 4, v_l_2498_);
v___x_2524_ = v_reuseFailAlloc_2528_;
goto v_reusejp_2523_;
}
v_reusejp_2523_:
{
lean_object* v___x_2525_; 
v___x_2525_ = lean_nat_add(v___x_2476_, v_size_2477_);
if (lean_obj_tag(v_r_2499_) == 0)
{
lean_object* v_size_2526_; 
v_size_2526_ = lean_ctor_get(v_r_2499_, 0);
lean_inc(v_size_2526_);
v___y_2509_ = v___x_2524_;
v___y_2510_ = v___x_2525_;
v___y_2511_ = v_size_2526_;
goto v___jp_2508_;
}
else
{
lean_object* v___x_2527_; 
v___x_2527_ = lean_unsigned_to_nat(0u);
v___y_2509_ = v___x_2524_;
v___y_2510_ = v___x_2525_;
v___y_2511_ = v___x_2527_;
goto v___jp_2508_;
}
}
}
}
}
else
{
lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2542_; 
lean_del_object(v___x_2333_);
v___x_2537_ = lean_nat_add(v___x_2476_, v_size_2478_);
lean_dec(v_size_2478_);
v___x_2538_ = lean_nat_add(v___x_2537_, v_size_2477_);
lean_dec(v___x_2537_);
v___x_2539_ = lean_nat_add(v___x_2476_, v_size_2477_);
v___x_2540_ = lean_nat_add(v___x_2539_, v_size_2495_);
lean_dec(v___x_2539_);
lean_inc_ref(v_r_2331_);
if (v_isShared_2493_ == 0)
{
lean_ctor_set(v___x_2492_, 4, v_r_2331_);
lean_ctor_set(v___x_2492_, 3, v_r_2482_);
lean_ctor_set(v___x_2492_, 2, v_v_2329_);
lean_ctor_set(v___x_2492_, 1, v_k_2328_);
lean_ctor_set(v___x_2492_, 0, v___x_2540_);
v___x_2542_ = v___x_2492_;
goto v_reusejp_2541_;
}
else
{
lean_object* v_reuseFailAlloc_2555_; 
v_reuseFailAlloc_2555_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2555_, 0, v___x_2540_);
lean_ctor_set(v_reuseFailAlloc_2555_, 1, v_k_2328_);
lean_ctor_set(v_reuseFailAlloc_2555_, 2, v_v_2329_);
lean_ctor_set(v_reuseFailAlloc_2555_, 3, v_r_2482_);
lean_ctor_set(v_reuseFailAlloc_2555_, 4, v_r_2331_);
v___x_2542_ = v_reuseFailAlloc_2555_;
goto v_reusejp_2541_;
}
v_reusejp_2541_:
{
lean_object* v___x_2544_; uint8_t v_isShared_2545_; uint8_t v_isSharedCheck_2549_; 
v_isSharedCheck_2549_ = !lean_is_exclusive(v_r_2331_);
if (v_isSharedCheck_2549_ == 0)
{
lean_object* v_unused_2550_; lean_object* v_unused_2551_; lean_object* v_unused_2552_; lean_object* v_unused_2553_; lean_object* v_unused_2554_; 
v_unused_2550_ = lean_ctor_get(v_r_2331_, 4);
lean_dec(v_unused_2550_);
v_unused_2551_ = lean_ctor_get(v_r_2331_, 3);
lean_dec(v_unused_2551_);
v_unused_2552_ = lean_ctor_get(v_r_2331_, 2);
lean_dec(v_unused_2552_);
v_unused_2553_ = lean_ctor_get(v_r_2331_, 1);
lean_dec(v_unused_2553_);
v_unused_2554_ = lean_ctor_get(v_r_2331_, 0);
lean_dec(v_unused_2554_);
v___x_2544_ = v_r_2331_;
v_isShared_2545_ = v_isSharedCheck_2549_;
goto v_resetjp_2543_;
}
else
{
lean_dec(v_r_2331_);
v___x_2544_ = lean_box(0);
v_isShared_2545_ = v_isSharedCheck_2549_;
goto v_resetjp_2543_;
}
v_resetjp_2543_:
{
lean_object* v___x_2547_; 
if (v_isShared_2545_ == 0)
{
lean_ctor_set(v___x_2544_, 4, v___x_2542_);
lean_ctor_set(v___x_2544_, 3, v_l_2481_);
lean_ctor_set(v___x_2544_, 2, v_v_2480_);
lean_ctor_set(v___x_2544_, 1, v_k_2479_);
lean_ctor_set(v___x_2544_, 0, v___x_2538_);
v___x_2547_ = v___x_2544_;
goto v_reusejp_2546_;
}
else
{
lean_object* v_reuseFailAlloc_2548_; 
v_reuseFailAlloc_2548_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2548_, 0, v___x_2538_);
lean_ctor_set(v_reuseFailAlloc_2548_, 1, v_k_2479_);
lean_ctor_set(v_reuseFailAlloc_2548_, 2, v_v_2480_);
lean_ctor_set(v_reuseFailAlloc_2548_, 3, v_l_2481_);
lean_ctor_set(v_reuseFailAlloc_2548_, 4, v___x_2542_);
v___x_2547_ = v_reuseFailAlloc_2548_;
goto v_reusejp_2546_;
}
v_reusejp_2546_:
{
return v___x_2547_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_2562_; 
v_l_2562_ = lean_ctor_get(v_impl_2475_, 3);
if (lean_obj_tag(v_l_2562_) == 0)
{
lean_object* v_r_2563_; lean_object* v_k_2564_; lean_object* v_v_2565_; lean_object* v___x_2567_; uint8_t v_isShared_2568_; uint8_t v_isSharedCheck_2576_; 
lean_inc_ref(v_l_2562_);
v_r_2563_ = lean_ctor_get(v_impl_2475_, 4);
v_k_2564_ = lean_ctor_get(v_impl_2475_, 1);
v_v_2565_ = lean_ctor_get(v_impl_2475_, 2);
v_isSharedCheck_2576_ = !lean_is_exclusive(v_impl_2475_);
if (v_isSharedCheck_2576_ == 0)
{
lean_object* v_unused_2577_; lean_object* v_unused_2578_; 
v_unused_2577_ = lean_ctor_get(v_impl_2475_, 3);
lean_dec(v_unused_2577_);
v_unused_2578_ = lean_ctor_get(v_impl_2475_, 0);
lean_dec(v_unused_2578_);
v___x_2567_ = v_impl_2475_;
v_isShared_2568_ = v_isSharedCheck_2576_;
goto v_resetjp_2566_;
}
else
{
lean_inc(v_r_2563_);
lean_inc(v_v_2565_);
lean_inc(v_k_2564_);
lean_dec(v_impl_2475_);
v___x_2567_ = lean_box(0);
v_isShared_2568_ = v_isSharedCheck_2576_;
goto v_resetjp_2566_;
}
v_resetjp_2566_:
{
lean_object* v___x_2569_; lean_object* v___x_2571_; 
v___x_2569_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_2563_);
if (v_isShared_2568_ == 0)
{
lean_ctor_set(v___x_2567_, 3, v_r_2563_);
lean_ctor_set(v___x_2567_, 2, v_v_2329_);
lean_ctor_set(v___x_2567_, 1, v_k_2328_);
lean_ctor_set(v___x_2567_, 0, v___x_2476_);
v___x_2571_ = v___x_2567_;
goto v_reusejp_2570_;
}
else
{
lean_object* v_reuseFailAlloc_2575_; 
v_reuseFailAlloc_2575_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2575_, 0, v___x_2476_);
lean_ctor_set(v_reuseFailAlloc_2575_, 1, v_k_2328_);
lean_ctor_set(v_reuseFailAlloc_2575_, 2, v_v_2329_);
lean_ctor_set(v_reuseFailAlloc_2575_, 3, v_r_2563_);
lean_ctor_set(v_reuseFailAlloc_2575_, 4, v_r_2563_);
v___x_2571_ = v_reuseFailAlloc_2575_;
goto v_reusejp_2570_;
}
v_reusejp_2570_:
{
lean_object* v___x_2573_; 
if (v_isShared_2334_ == 0)
{
lean_ctor_set(v___x_2333_, 4, v___x_2571_);
lean_ctor_set(v___x_2333_, 3, v_l_2562_);
lean_ctor_set(v___x_2333_, 2, v_v_2565_);
lean_ctor_set(v___x_2333_, 1, v_k_2564_);
lean_ctor_set(v___x_2333_, 0, v___x_2569_);
v___x_2573_ = v___x_2333_;
goto v_reusejp_2572_;
}
else
{
lean_object* v_reuseFailAlloc_2574_; 
v_reuseFailAlloc_2574_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2574_, 0, v___x_2569_);
lean_ctor_set(v_reuseFailAlloc_2574_, 1, v_k_2564_);
lean_ctor_set(v_reuseFailAlloc_2574_, 2, v_v_2565_);
lean_ctor_set(v_reuseFailAlloc_2574_, 3, v_l_2562_);
lean_ctor_set(v_reuseFailAlloc_2574_, 4, v___x_2571_);
v___x_2573_ = v_reuseFailAlloc_2574_;
goto v_reusejp_2572_;
}
v_reusejp_2572_:
{
return v___x_2573_;
}
}
}
}
else
{
lean_object* v_r_2579_; 
v_r_2579_ = lean_ctor_get(v_impl_2475_, 4);
lean_inc(v_r_2579_);
if (lean_obj_tag(v_r_2579_) == 0)
{
lean_object* v_k_2580_; lean_object* v_v_2581_; lean_object* v___x_2583_; uint8_t v_isShared_2584_; uint8_t v_isSharedCheck_2604_; 
lean_inc(v_l_2562_);
v_k_2580_ = lean_ctor_get(v_impl_2475_, 1);
v_v_2581_ = lean_ctor_get(v_impl_2475_, 2);
v_isSharedCheck_2604_ = !lean_is_exclusive(v_impl_2475_);
if (v_isSharedCheck_2604_ == 0)
{
lean_object* v_unused_2605_; lean_object* v_unused_2606_; lean_object* v_unused_2607_; 
v_unused_2605_ = lean_ctor_get(v_impl_2475_, 4);
lean_dec(v_unused_2605_);
v_unused_2606_ = lean_ctor_get(v_impl_2475_, 3);
lean_dec(v_unused_2606_);
v_unused_2607_ = lean_ctor_get(v_impl_2475_, 0);
lean_dec(v_unused_2607_);
v___x_2583_ = v_impl_2475_;
v_isShared_2584_ = v_isSharedCheck_2604_;
goto v_resetjp_2582_;
}
else
{
lean_inc(v_v_2581_);
lean_inc(v_k_2580_);
lean_dec(v_impl_2475_);
v___x_2583_ = lean_box(0);
v_isShared_2584_ = v_isSharedCheck_2604_;
goto v_resetjp_2582_;
}
v_resetjp_2582_:
{
lean_object* v_k_2585_; lean_object* v_v_2586_; lean_object* v___x_2588_; uint8_t v_isShared_2589_; uint8_t v_isSharedCheck_2600_; 
v_k_2585_ = lean_ctor_get(v_r_2579_, 1);
v_v_2586_ = lean_ctor_get(v_r_2579_, 2);
v_isSharedCheck_2600_ = !lean_is_exclusive(v_r_2579_);
if (v_isSharedCheck_2600_ == 0)
{
lean_object* v_unused_2601_; lean_object* v_unused_2602_; lean_object* v_unused_2603_; 
v_unused_2601_ = lean_ctor_get(v_r_2579_, 4);
lean_dec(v_unused_2601_);
v_unused_2602_ = lean_ctor_get(v_r_2579_, 3);
lean_dec(v_unused_2602_);
v_unused_2603_ = lean_ctor_get(v_r_2579_, 0);
lean_dec(v_unused_2603_);
v___x_2588_ = v_r_2579_;
v_isShared_2589_ = v_isSharedCheck_2600_;
goto v_resetjp_2587_;
}
else
{
lean_inc(v_v_2586_);
lean_inc(v_k_2585_);
lean_dec(v_r_2579_);
v___x_2588_ = lean_box(0);
v_isShared_2589_ = v_isSharedCheck_2600_;
goto v_resetjp_2587_;
}
v_resetjp_2587_:
{
lean_object* v___x_2590_; lean_object* v___x_2592_; 
v___x_2590_ = lean_unsigned_to_nat(3u);
if (v_isShared_2589_ == 0)
{
lean_ctor_set(v___x_2588_, 4, v_l_2562_);
lean_ctor_set(v___x_2588_, 3, v_l_2562_);
lean_ctor_set(v___x_2588_, 2, v_v_2581_);
lean_ctor_set(v___x_2588_, 1, v_k_2580_);
lean_ctor_set(v___x_2588_, 0, v___x_2476_);
v___x_2592_ = v___x_2588_;
goto v_reusejp_2591_;
}
else
{
lean_object* v_reuseFailAlloc_2599_; 
v_reuseFailAlloc_2599_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2599_, 0, v___x_2476_);
lean_ctor_set(v_reuseFailAlloc_2599_, 1, v_k_2580_);
lean_ctor_set(v_reuseFailAlloc_2599_, 2, v_v_2581_);
lean_ctor_set(v_reuseFailAlloc_2599_, 3, v_l_2562_);
lean_ctor_set(v_reuseFailAlloc_2599_, 4, v_l_2562_);
v___x_2592_ = v_reuseFailAlloc_2599_;
goto v_reusejp_2591_;
}
v_reusejp_2591_:
{
lean_object* v___x_2594_; 
if (v_isShared_2584_ == 0)
{
lean_ctor_set(v___x_2583_, 4, v_l_2562_);
lean_ctor_set(v___x_2583_, 2, v_v_2329_);
lean_ctor_set(v___x_2583_, 1, v_k_2328_);
lean_ctor_set(v___x_2583_, 0, v___x_2476_);
v___x_2594_ = v___x_2583_;
goto v_reusejp_2593_;
}
else
{
lean_object* v_reuseFailAlloc_2598_; 
v_reuseFailAlloc_2598_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2598_, 0, v___x_2476_);
lean_ctor_set(v_reuseFailAlloc_2598_, 1, v_k_2328_);
lean_ctor_set(v_reuseFailAlloc_2598_, 2, v_v_2329_);
lean_ctor_set(v_reuseFailAlloc_2598_, 3, v_l_2562_);
lean_ctor_set(v_reuseFailAlloc_2598_, 4, v_l_2562_);
v___x_2594_ = v_reuseFailAlloc_2598_;
goto v_reusejp_2593_;
}
v_reusejp_2593_:
{
lean_object* v___x_2596_; 
if (v_isShared_2334_ == 0)
{
lean_ctor_set(v___x_2333_, 4, v___x_2594_);
lean_ctor_set(v___x_2333_, 3, v___x_2592_);
lean_ctor_set(v___x_2333_, 2, v_v_2586_);
lean_ctor_set(v___x_2333_, 1, v_k_2585_);
lean_ctor_set(v___x_2333_, 0, v___x_2590_);
v___x_2596_ = v___x_2333_;
goto v_reusejp_2595_;
}
else
{
lean_object* v_reuseFailAlloc_2597_; 
v_reuseFailAlloc_2597_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2597_, 0, v___x_2590_);
lean_ctor_set(v_reuseFailAlloc_2597_, 1, v_k_2585_);
lean_ctor_set(v_reuseFailAlloc_2597_, 2, v_v_2586_);
lean_ctor_set(v_reuseFailAlloc_2597_, 3, v___x_2592_);
lean_ctor_set(v_reuseFailAlloc_2597_, 4, v___x_2594_);
v___x_2596_ = v_reuseFailAlloc_2597_;
goto v_reusejp_2595_;
}
v_reusejp_2595_:
{
return v___x_2596_;
}
}
}
}
}
}
else
{
lean_object* v___x_2608_; lean_object* v___x_2610_; 
v___x_2608_ = lean_unsigned_to_nat(2u);
if (v_isShared_2334_ == 0)
{
lean_ctor_set(v___x_2333_, 4, v_r_2579_);
lean_ctor_set(v___x_2333_, 3, v_impl_2475_);
lean_ctor_set(v___x_2333_, 0, v___x_2608_);
v___x_2610_ = v___x_2333_;
goto v_reusejp_2609_;
}
else
{
lean_object* v_reuseFailAlloc_2611_; 
v_reuseFailAlloc_2611_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2611_, 0, v___x_2608_);
lean_ctor_set(v_reuseFailAlloc_2611_, 1, v_k_2328_);
lean_ctor_set(v_reuseFailAlloc_2611_, 2, v_v_2329_);
lean_ctor_set(v_reuseFailAlloc_2611_, 3, v_impl_2475_);
lean_ctor_set(v_reuseFailAlloc_2611_, 4, v_r_2579_);
v___x_2610_ = v_reuseFailAlloc_2611_;
goto v_reusejp_2609_;
}
v_reusejp_2609_:
{
return v___x_2610_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2613_; lean_object* v___x_2614_; 
v___x_2613_ = lean_unsigned_to_nat(1u);
v___x_2614_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2614_, 0, v___x_2613_);
lean_ctor_set(v___x_2614_, 1, v_k_2324_);
lean_ctor_set(v___x_2614_, 2, v_v_2325_);
lean_ctor_set(v___x_2614_, 3, v_t_2326_);
lean_ctor_set(v___x_2614_, 4, v_t_2326_);
return v___x_2614_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__0___redArg(lean_object* v_k_2615_, lean_object* v_t_2616_){
_start:
{
if (lean_obj_tag(v_t_2616_) == 0)
{
lean_object* v_k_2617_; lean_object* v_l_2618_; lean_object* v_r_2619_; uint8_t v___x_2620_; 
v_k_2617_ = lean_ctor_get(v_t_2616_, 1);
v_l_2618_ = lean_ctor_get(v_t_2616_, 3);
v_r_2619_ = lean_ctor_get(v_t_2616_, 4);
v___x_2620_ = lean_nat_dec_lt(v_k_2615_, v_k_2617_);
if (v___x_2620_ == 0)
{
uint8_t v___x_2621_; 
v___x_2621_ = lean_nat_dec_eq(v_k_2615_, v_k_2617_);
if (v___x_2621_ == 0)
{
v_t_2616_ = v_r_2619_;
goto _start;
}
else
{
return v___x_2621_;
}
}
else
{
v_t_2616_ = v_l_2618_;
goto _start;
}
}
else
{
uint8_t v___x_2624_; 
v___x_2624_ = 0;
return v___x_2624_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__0___redArg___boxed(lean_object* v_k_2625_, lean_object* v_t_2626_){
_start:
{
uint8_t v_res_2627_; lean_object* v_r_2628_; 
v_res_2627_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__0___redArg(v_k_2625_, v_t_2626_);
lean_dec(v_t_2626_);
lean_dec(v_k_2625_);
v_r_2628_ = lean_box(v_res_2627_);
return v_r_2628_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__2_spec__2(lean_object* v_y_2629_, lean_object* v_x_2630_, size_t v_x_2631_, size_t v_x_2632_){
_start:
{
if (lean_obj_tag(v_x_2630_) == 0)
{
lean_object* v_cs_2633_; size_t v_j_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; uint8_t v___x_2637_; 
v_cs_2633_ = lean_ctor_get(v_x_2630_, 0);
v_j_2634_ = lean_usize_shift_right(v_x_2631_, v_x_2632_);
v___x_2635_ = lean_usize_to_nat(v_j_2634_);
v___x_2636_ = lean_array_get_size(v_cs_2633_);
v___x_2637_ = lean_nat_dec_lt(v___x_2635_, v___x_2636_);
if (v___x_2637_ == 0)
{
lean_dec(v___x_2635_);
lean_dec(v_y_2629_);
return v_x_2630_;
}
else
{
lean_object* v___x_2639_; uint8_t v_isShared_2640_; uint8_t v_isSharedCheck_2655_; 
lean_inc_ref(v_cs_2633_);
v_isSharedCheck_2655_ = !lean_is_exclusive(v_x_2630_);
if (v_isSharedCheck_2655_ == 0)
{
lean_object* v_unused_2656_; 
v_unused_2656_ = lean_ctor_get(v_x_2630_, 0);
lean_dec(v_unused_2656_);
v___x_2639_ = v_x_2630_;
v_isShared_2640_ = v_isSharedCheck_2655_;
goto v_resetjp_2638_;
}
else
{
lean_dec(v_x_2630_);
v___x_2639_ = lean_box(0);
v_isShared_2640_ = v_isSharedCheck_2655_;
goto v_resetjp_2638_;
}
v_resetjp_2638_:
{
size_t v___x_2641_; size_t v___x_2642_; size_t v___x_2643_; size_t v_i_2644_; size_t v___x_2645_; size_t v_shift_2646_; lean_object* v_v_2647_; lean_object* v___x_2648_; lean_object* v_xs_x27_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2653_; 
v___x_2641_ = ((size_t)1ULL);
v___x_2642_ = lean_usize_shift_left(v___x_2641_, v_x_2632_);
v___x_2643_ = lean_usize_sub(v___x_2642_, v___x_2641_);
v_i_2644_ = lean_usize_land(v_x_2631_, v___x_2643_);
v___x_2645_ = ((size_t)5ULL);
v_shift_2646_ = lean_usize_sub(v_x_2632_, v___x_2645_);
v_v_2647_ = lean_array_fget(v_cs_2633_, v___x_2635_);
v___x_2648_ = lean_box(0);
v_xs_x27_2649_ = lean_array_fset(v_cs_2633_, v___x_2635_, v___x_2648_);
v___x_2650_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__2_spec__2(v_y_2629_, v_v_2647_, v_i_2644_, v_shift_2646_);
v___x_2651_ = lean_array_fset(v_xs_x27_2649_, v___x_2635_, v___x_2650_);
lean_dec(v___x_2635_);
if (v_isShared_2640_ == 0)
{
lean_ctor_set(v___x_2639_, 0, v___x_2651_);
v___x_2653_ = v___x_2639_;
goto v_reusejp_2652_;
}
else
{
lean_object* v_reuseFailAlloc_2654_; 
v_reuseFailAlloc_2654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2654_, 0, v___x_2651_);
v___x_2653_ = v_reuseFailAlloc_2654_;
goto v_reusejp_2652_;
}
v_reusejp_2652_:
{
return v___x_2653_;
}
}
}
}
else
{
lean_object* v_vs_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; uint8_t v___x_2660_; 
v_vs_2657_ = lean_ctor_get(v_x_2630_, 0);
v___x_2658_ = lean_usize_to_nat(v_x_2631_);
v___x_2659_ = lean_array_get_size(v_vs_2657_);
v___x_2660_ = lean_nat_dec_lt(v___x_2658_, v___x_2659_);
if (v___x_2660_ == 0)
{
lean_dec(v___x_2658_);
lean_dec(v_y_2629_);
return v_x_2630_;
}
else
{
lean_object* v___x_2662_; uint8_t v_isShared_2663_; uint8_t v_isSharedCheck_2675_; 
lean_inc_ref(v_vs_2657_);
v_isSharedCheck_2675_ = !lean_is_exclusive(v_x_2630_);
if (v_isSharedCheck_2675_ == 0)
{
lean_object* v_unused_2676_; 
v_unused_2676_ = lean_ctor_get(v_x_2630_, 0);
lean_dec(v_unused_2676_);
v___x_2662_ = v_x_2630_;
v_isShared_2663_ = v_isSharedCheck_2675_;
goto v_resetjp_2661_;
}
else
{
lean_dec(v_x_2630_);
v___x_2662_ = lean_box(0);
v_isShared_2663_ = v_isSharedCheck_2675_;
goto v_resetjp_2661_;
}
v_resetjp_2661_:
{
lean_object* v_v_2664_; lean_object* v___x_2665_; lean_object* v_xs_x27_2666_; lean_object* v___y_2668_; uint8_t v___x_2673_; 
v_v_2664_ = lean_array_fget(v_vs_2657_, v___x_2658_);
v___x_2665_ = lean_box(0);
v_xs_x27_2666_ = lean_array_fset(v_vs_2657_, v___x_2658_, v___x_2665_);
v___x_2673_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__0___redArg(v_y_2629_, v_v_2664_);
if (v___x_2673_ == 0)
{
lean_object* v___x_2674_; 
v___x_2674_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__1___redArg(v_y_2629_, v___x_2665_, v_v_2664_);
v___y_2668_ = v___x_2674_;
goto v___jp_2667_;
}
else
{
lean_dec(v_y_2629_);
v___y_2668_ = v_v_2664_;
goto v___jp_2667_;
}
v___jp_2667_:
{
lean_object* v___x_2669_; lean_object* v___x_2671_; 
v___x_2669_ = lean_array_fset(v_xs_x27_2666_, v___x_2658_, v___y_2668_);
lean_dec(v___x_2658_);
if (v_isShared_2663_ == 0)
{
lean_ctor_set(v___x_2662_, 0, v___x_2669_);
v___x_2671_ = v___x_2662_;
goto v_reusejp_2670_;
}
else
{
lean_object* v_reuseFailAlloc_2672_; 
v_reuseFailAlloc_2672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2672_, 0, v___x_2669_);
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
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__2_spec__2___boxed(lean_object* v_y_2677_, lean_object* v_x_2678_, lean_object* v_x_2679_, lean_object* v_x_2680_){
_start:
{
size_t v_x_4274__boxed_2681_; size_t v_x_4275__boxed_2682_; lean_object* v_res_2683_; 
v_x_4274__boxed_2681_ = lean_unbox_usize(v_x_2679_);
lean_dec(v_x_2679_);
v_x_4275__boxed_2682_ = lean_unbox_usize(v_x_2680_);
lean_dec(v_x_2680_);
v_res_2683_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__2_spec__2(v_y_2677_, v_x_2678_, v_x_4274__boxed_2681_, v_x_4275__boxed_2682_);
return v_res_2683_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__2(lean_object* v_y_2684_, lean_object* v_t_2685_, lean_object* v_i_2686_){
_start:
{
lean_object* v_root_2687_; lean_object* v_tail_2688_; lean_object* v_size_2689_; size_t v_shift_2690_; lean_object* v_tailOff_2691_; lean_object* v___x_2693_; uint8_t v_isShared_2694_; uint8_t v_isSharedCheck_2718_; 
v_root_2687_ = lean_ctor_get(v_t_2685_, 0);
v_tail_2688_ = lean_ctor_get(v_t_2685_, 1);
v_size_2689_ = lean_ctor_get(v_t_2685_, 2);
v_shift_2690_ = lean_ctor_get_usize(v_t_2685_, 4);
v_tailOff_2691_ = lean_ctor_get(v_t_2685_, 3);
v_isSharedCheck_2718_ = !lean_is_exclusive(v_t_2685_);
if (v_isSharedCheck_2718_ == 0)
{
v___x_2693_ = v_t_2685_;
v_isShared_2694_ = v_isSharedCheck_2718_;
goto v_resetjp_2692_;
}
else
{
lean_inc(v_tailOff_2691_);
lean_inc(v_size_2689_);
lean_inc(v_tail_2688_);
lean_inc(v_root_2687_);
lean_dec(v_t_2685_);
v___x_2693_ = lean_box(0);
v_isShared_2694_ = v_isSharedCheck_2718_;
goto v_resetjp_2692_;
}
v_resetjp_2692_:
{
uint8_t v___x_2695_; 
v___x_2695_ = lean_nat_dec_le(v_tailOff_2691_, v_i_2686_);
if (v___x_2695_ == 0)
{
size_t v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2699_; 
v___x_2696_ = lean_usize_of_nat(v_i_2686_);
v___x_2697_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__2_spec__2(v_y_2684_, v_root_2687_, v___x_2696_, v_shift_2690_);
if (v_isShared_2694_ == 0)
{
lean_ctor_set(v___x_2693_, 0, v___x_2697_);
v___x_2699_ = v___x_2693_;
goto v_reusejp_2698_;
}
else
{
lean_object* v_reuseFailAlloc_2700_; 
v_reuseFailAlloc_2700_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_2700_, 0, v___x_2697_);
lean_ctor_set(v_reuseFailAlloc_2700_, 1, v_tail_2688_);
lean_ctor_set(v_reuseFailAlloc_2700_, 2, v_size_2689_);
lean_ctor_set(v_reuseFailAlloc_2700_, 3, v_tailOff_2691_);
lean_ctor_set_usize(v_reuseFailAlloc_2700_, 4, v_shift_2690_);
v___x_2699_ = v_reuseFailAlloc_2700_;
goto v_reusejp_2698_;
}
v_reusejp_2698_:
{
return v___x_2699_;
}
}
else
{
lean_object* v___x_2701_; lean_object* v___x_2702_; uint8_t v___x_2703_; 
v___x_2701_ = lean_nat_sub(v_i_2686_, v_tailOff_2691_);
v___x_2702_ = lean_array_get_size(v_tail_2688_);
v___x_2703_ = lean_nat_dec_lt(v___x_2701_, v___x_2702_);
if (v___x_2703_ == 0)
{
lean_object* v___x_2705_; 
lean_dec(v___x_2701_);
lean_dec(v_y_2684_);
if (v_isShared_2694_ == 0)
{
v___x_2705_ = v___x_2693_;
goto v_reusejp_2704_;
}
else
{
lean_object* v_reuseFailAlloc_2706_; 
v_reuseFailAlloc_2706_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_2706_, 0, v_root_2687_);
lean_ctor_set(v_reuseFailAlloc_2706_, 1, v_tail_2688_);
lean_ctor_set(v_reuseFailAlloc_2706_, 2, v_size_2689_);
lean_ctor_set(v_reuseFailAlloc_2706_, 3, v_tailOff_2691_);
lean_ctor_set_usize(v_reuseFailAlloc_2706_, 4, v_shift_2690_);
v___x_2705_ = v_reuseFailAlloc_2706_;
goto v_reusejp_2704_;
}
v_reusejp_2704_:
{
return v___x_2705_;
}
}
else
{
lean_object* v_v_2707_; lean_object* v___x_2708_; lean_object* v_xs_x27_2709_; lean_object* v___y_2711_; uint8_t v___x_2716_; 
v_v_2707_ = lean_array_fget(v_tail_2688_, v___x_2701_);
v___x_2708_ = lean_box(0);
v_xs_x27_2709_ = lean_array_fset(v_tail_2688_, v___x_2701_, v___x_2708_);
v___x_2716_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__0___redArg(v_y_2684_, v_v_2707_);
if (v___x_2716_ == 0)
{
lean_object* v___x_2717_; 
v___x_2717_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__1___redArg(v_y_2684_, v___x_2708_, v_v_2707_);
v___y_2711_ = v___x_2717_;
goto v___jp_2710_;
}
else
{
lean_dec(v_y_2684_);
v___y_2711_ = v_v_2707_;
goto v___jp_2710_;
}
v___jp_2710_:
{
lean_object* v___x_2712_; lean_object* v___x_2714_; 
v___x_2712_ = lean_array_fset(v_xs_x27_2709_, v___x_2701_, v___y_2711_);
lean_dec(v___x_2701_);
if (v_isShared_2694_ == 0)
{
lean_ctor_set(v___x_2693_, 1, v___x_2712_);
v___x_2714_ = v___x_2693_;
goto v_reusejp_2713_;
}
else
{
lean_object* v_reuseFailAlloc_2715_; 
v_reuseFailAlloc_2715_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_2715_, 0, v_root_2687_);
lean_ctor_set(v_reuseFailAlloc_2715_, 1, v___x_2712_);
lean_ctor_set(v_reuseFailAlloc_2715_, 2, v_size_2689_);
lean_ctor_set(v_reuseFailAlloc_2715_, 3, v_tailOff_2691_);
lean_ctor_set_usize(v_reuseFailAlloc_2715_, 4, v_shift_2690_);
v___x_2714_ = v_reuseFailAlloc_2715_;
goto v_reusejp_2713_;
}
v_reusejp_2713_:
{
return v___x_2714_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__2___boxed(lean_object* v_y_2719_, lean_object* v_t_2720_, lean_object* v_i_2721_){
_start:
{
lean_object* v_res_2722_; 
v_res_2722_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__2(v_y_2719_, v_t_2720_, v_i_2721_);
lean_dec(v_i_2721_);
return v_res_2722_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc___redArg___lam__0(lean_object* v_y_2723_, lean_object* v_x_2724_, lean_object* v_s_2725_){
_start:
{
lean_object* v_vars_2726_; lean_object* v_varMap_2727_; lean_object* v_varsHistory_2728_; lean_object* v_natToIntMap_2729_; lean_object* v_natDef_2730_; lean_object* v_dvds_2731_; lean_object* v_lowers_2732_; lean_object* v_uppers_2733_; lean_object* v_diseqs_2734_; lean_object* v_elimEqs_2735_; lean_object* v_active_2736_; lean_object* v_elimStack_2737_; lean_object* v_occurs_2738_; lean_object* v_assignment_2739_; lean_object* v_nextCnstrId_2740_; uint8_t v_caseSplits_2741_; lean_object* v_steps_2742_; lean_object* v_penalties_2743_; lean_object* v_numReorderRequests_2744_; lean_object* v_conflict_x3f_2745_; lean_object* v_diseqSplits_2746_; lean_object* v_divMod_2747_; uint8_t v_usedCommRing_2748_; lean_object* v_nonlinearOccs_2749_; lean_object* v___x_2751_; uint8_t v_isShared_2752_; uint8_t v_isSharedCheck_2757_; 
v_vars_2726_ = lean_ctor_get(v_s_2725_, 0);
v_varMap_2727_ = lean_ctor_get(v_s_2725_, 1);
v_varsHistory_2728_ = lean_ctor_get(v_s_2725_, 2);
v_natToIntMap_2729_ = lean_ctor_get(v_s_2725_, 3);
v_natDef_2730_ = lean_ctor_get(v_s_2725_, 4);
v_dvds_2731_ = lean_ctor_get(v_s_2725_, 5);
v_lowers_2732_ = lean_ctor_get(v_s_2725_, 6);
v_uppers_2733_ = lean_ctor_get(v_s_2725_, 7);
v_diseqs_2734_ = lean_ctor_get(v_s_2725_, 8);
v_elimEqs_2735_ = lean_ctor_get(v_s_2725_, 9);
v_active_2736_ = lean_ctor_get(v_s_2725_, 10);
v_elimStack_2737_ = lean_ctor_get(v_s_2725_, 11);
v_occurs_2738_ = lean_ctor_get(v_s_2725_, 12);
v_assignment_2739_ = lean_ctor_get(v_s_2725_, 13);
v_nextCnstrId_2740_ = lean_ctor_get(v_s_2725_, 14);
v_caseSplits_2741_ = lean_ctor_get_uint8(v_s_2725_, sizeof(void*)*22);
v_steps_2742_ = lean_ctor_get(v_s_2725_, 15);
v_penalties_2743_ = lean_ctor_get(v_s_2725_, 16);
v_numReorderRequests_2744_ = lean_ctor_get(v_s_2725_, 17);
v_conflict_x3f_2745_ = lean_ctor_get(v_s_2725_, 18);
v_diseqSplits_2746_ = lean_ctor_get(v_s_2725_, 19);
v_divMod_2747_ = lean_ctor_get(v_s_2725_, 20);
v_usedCommRing_2748_ = lean_ctor_get_uint8(v_s_2725_, sizeof(void*)*22 + 1);
v_nonlinearOccs_2749_ = lean_ctor_get(v_s_2725_, 21);
v_isSharedCheck_2757_ = !lean_is_exclusive(v_s_2725_);
if (v_isSharedCheck_2757_ == 0)
{
v___x_2751_ = v_s_2725_;
v_isShared_2752_ = v_isSharedCheck_2757_;
goto v_resetjp_2750_;
}
else
{
lean_inc(v_nonlinearOccs_2749_);
lean_inc(v_divMod_2747_);
lean_inc(v_diseqSplits_2746_);
lean_inc(v_conflict_x3f_2745_);
lean_inc(v_numReorderRequests_2744_);
lean_inc(v_penalties_2743_);
lean_inc(v_steps_2742_);
lean_inc(v_nextCnstrId_2740_);
lean_inc(v_assignment_2739_);
lean_inc(v_occurs_2738_);
lean_inc(v_elimStack_2737_);
lean_inc(v_active_2736_);
lean_inc(v_elimEqs_2735_);
lean_inc(v_diseqs_2734_);
lean_inc(v_uppers_2733_);
lean_inc(v_lowers_2732_);
lean_inc(v_dvds_2731_);
lean_inc(v_natDef_2730_);
lean_inc(v_natToIntMap_2729_);
lean_inc(v_varsHistory_2728_);
lean_inc(v_varMap_2727_);
lean_inc(v_vars_2726_);
lean_dec(v_s_2725_);
v___x_2751_ = lean_box(0);
v_isShared_2752_ = v_isSharedCheck_2757_;
goto v_resetjp_2750_;
}
v_resetjp_2750_:
{
lean_object* v___x_2753_; lean_object* v___x_2755_; 
v___x_2753_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__2(v_y_2723_, v_occurs_2738_, v_x_2724_);
if (v_isShared_2752_ == 0)
{
lean_ctor_set(v___x_2751_, 12, v___x_2753_);
v___x_2755_ = v___x_2751_;
goto v_reusejp_2754_;
}
else
{
lean_object* v_reuseFailAlloc_2756_; 
v_reuseFailAlloc_2756_ = lean_alloc_ctor(0, 22, 2);
lean_ctor_set(v_reuseFailAlloc_2756_, 0, v_vars_2726_);
lean_ctor_set(v_reuseFailAlloc_2756_, 1, v_varMap_2727_);
lean_ctor_set(v_reuseFailAlloc_2756_, 2, v_varsHistory_2728_);
lean_ctor_set(v_reuseFailAlloc_2756_, 3, v_natToIntMap_2729_);
lean_ctor_set(v_reuseFailAlloc_2756_, 4, v_natDef_2730_);
lean_ctor_set(v_reuseFailAlloc_2756_, 5, v_dvds_2731_);
lean_ctor_set(v_reuseFailAlloc_2756_, 6, v_lowers_2732_);
lean_ctor_set(v_reuseFailAlloc_2756_, 7, v_uppers_2733_);
lean_ctor_set(v_reuseFailAlloc_2756_, 8, v_diseqs_2734_);
lean_ctor_set(v_reuseFailAlloc_2756_, 9, v_elimEqs_2735_);
lean_ctor_set(v_reuseFailAlloc_2756_, 10, v_active_2736_);
lean_ctor_set(v_reuseFailAlloc_2756_, 11, v_elimStack_2737_);
lean_ctor_set(v_reuseFailAlloc_2756_, 12, v___x_2753_);
lean_ctor_set(v_reuseFailAlloc_2756_, 13, v_assignment_2739_);
lean_ctor_set(v_reuseFailAlloc_2756_, 14, v_nextCnstrId_2740_);
lean_ctor_set(v_reuseFailAlloc_2756_, 15, v_steps_2742_);
lean_ctor_set(v_reuseFailAlloc_2756_, 16, v_penalties_2743_);
lean_ctor_set(v_reuseFailAlloc_2756_, 17, v_numReorderRequests_2744_);
lean_ctor_set(v_reuseFailAlloc_2756_, 18, v_conflict_x3f_2745_);
lean_ctor_set(v_reuseFailAlloc_2756_, 19, v_diseqSplits_2746_);
lean_ctor_set(v_reuseFailAlloc_2756_, 20, v_divMod_2747_);
lean_ctor_set(v_reuseFailAlloc_2756_, 21, v_nonlinearOccs_2749_);
lean_ctor_set_uint8(v_reuseFailAlloc_2756_, sizeof(void*)*22, v_caseSplits_2741_);
lean_ctor_set_uint8(v_reuseFailAlloc_2756_, sizeof(void*)*22 + 1, v_usedCommRing_2748_);
v___x_2755_ = v_reuseFailAlloc_2756_;
goto v_reusejp_2754_;
}
v_reusejp_2754_:
{
return v___x_2755_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc___redArg___lam__0___boxed(lean_object* v_y_2758_, lean_object* v_x_2759_, lean_object* v_s_2760_){
_start:
{
lean_object* v_res_2761_; 
v_res_2761_ = l_Lean_Meta_Grind_Arith_Cutsat_addOcc___redArg___lam__0(v_y_2758_, v_x_2759_, v_s_2760_);
lean_dec(v_x_2759_);
return v_res_2761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc___redArg(lean_object* v_x_2762_, lean_object* v_y_2763_, lean_object* v_a_2764_, lean_object* v_a_2765_){
_start:
{
lean_object* v___f_2767_; lean_object* v___x_2768_; 
lean_inc(v_x_2762_);
lean_inc(v_y_2763_);
v___f_2767_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_addOcc___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2767_, 0, v_y_2763_);
lean_closure_set(v___f_2767_, 1, v_x_2762_);
v___x_2768_ = l_Lean_Meta_Grind_Arith_Cutsat_getOccursOf___redArg(v_x_2762_, v_a_2764_, v_a_2765_);
lean_dec(v_x_2762_);
if (lean_obj_tag(v___x_2768_) == 0)
{
lean_object* v_a_2769_; lean_object* v___x_2771_; uint8_t v_isShared_2772_; uint8_t v_isSharedCheck_2780_; 
v_a_2769_ = lean_ctor_get(v___x_2768_, 0);
v_isSharedCheck_2780_ = !lean_is_exclusive(v___x_2768_);
if (v_isSharedCheck_2780_ == 0)
{
v___x_2771_ = v___x_2768_;
v_isShared_2772_ = v_isSharedCheck_2780_;
goto v_resetjp_2770_;
}
else
{
lean_inc(v_a_2769_);
lean_dec(v___x_2768_);
v___x_2771_ = lean_box(0);
v_isShared_2772_ = v_isSharedCheck_2780_;
goto v_resetjp_2770_;
}
v_resetjp_2770_:
{
uint8_t v___x_2773_; 
v___x_2773_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__0___redArg(v_y_2763_, v_a_2769_);
lean_dec(v_a_2769_);
lean_dec(v_y_2763_);
if (v___x_2773_ == 0)
{
lean_object* v___x_2774_; lean_object* v___x_2775_; 
lean_del_object(v___x_2771_);
v___x_2774_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_2775_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_2774_, v___f_2767_, v_a_2764_);
return v___x_2775_;
}
else
{
lean_object* v___x_2776_; lean_object* v___x_2778_; 
lean_dec_ref(v___f_2767_);
v___x_2776_ = lean_box(0);
if (v_isShared_2772_ == 0)
{
lean_ctor_set(v___x_2771_, 0, v___x_2776_);
v___x_2778_ = v___x_2771_;
goto v_reusejp_2777_;
}
else
{
lean_object* v_reuseFailAlloc_2779_; 
v_reuseFailAlloc_2779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2779_, 0, v___x_2776_);
v___x_2778_ = v_reuseFailAlloc_2779_;
goto v_reusejp_2777_;
}
v_reusejp_2777_:
{
return v___x_2778_;
}
}
}
}
else
{
lean_object* v_a_2781_; lean_object* v___x_2783_; uint8_t v_isShared_2784_; uint8_t v_isSharedCheck_2788_; 
lean_dec_ref(v___f_2767_);
lean_dec(v_y_2763_);
v_a_2781_ = lean_ctor_get(v___x_2768_, 0);
v_isSharedCheck_2788_ = !lean_is_exclusive(v___x_2768_);
if (v_isSharedCheck_2788_ == 0)
{
v___x_2783_ = v___x_2768_;
v_isShared_2784_ = v_isSharedCheck_2788_;
goto v_resetjp_2782_;
}
else
{
lean_inc(v_a_2781_);
lean_dec(v___x_2768_);
v___x_2783_ = lean_box(0);
v_isShared_2784_ = v_isSharedCheck_2788_;
goto v_resetjp_2782_;
}
v_resetjp_2782_:
{
lean_object* v___x_2786_; 
if (v_isShared_2784_ == 0)
{
v___x_2786_ = v___x_2783_;
goto v_reusejp_2785_;
}
else
{
lean_object* v_reuseFailAlloc_2787_; 
v_reuseFailAlloc_2787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2787_, 0, v_a_2781_);
v___x_2786_ = v_reuseFailAlloc_2787_;
goto v_reusejp_2785_;
}
v_reusejp_2785_:
{
return v___x_2786_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc___redArg___boxed(lean_object* v_x_2789_, lean_object* v_y_2790_, lean_object* v_a_2791_, lean_object* v_a_2792_, lean_object* v_a_2793_){
_start:
{
lean_object* v_res_2794_; 
v_res_2794_ = l_Lean_Meta_Grind_Arith_Cutsat_addOcc___redArg(v_x_2789_, v_y_2790_, v_a_2791_, v_a_2792_);
lean_dec_ref(v_a_2792_);
lean_dec(v_a_2791_);
return v_res_2794_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc(lean_object* v_x_2795_, lean_object* v_y_2796_, lean_object* v_a_2797_, lean_object* v_a_2798_, lean_object* v_a_2799_, lean_object* v_a_2800_, lean_object* v_a_2801_, lean_object* v_a_2802_, lean_object* v_a_2803_, lean_object* v_a_2804_, lean_object* v_a_2805_, lean_object* v_a_2806_){
_start:
{
lean_object* v___x_2808_; 
v___x_2808_ = l_Lean_Meta_Grind_Arith_Cutsat_addOcc___redArg(v_x_2795_, v_y_2796_, v_a_2797_, v_a_2805_);
return v___x_2808_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_addOcc___boxed(lean_object* v_x_2809_, lean_object* v_y_2810_, lean_object* v_a_2811_, lean_object* v_a_2812_, lean_object* v_a_2813_, lean_object* v_a_2814_, lean_object* v_a_2815_, lean_object* v_a_2816_, lean_object* v_a_2817_, lean_object* v_a_2818_, lean_object* v_a_2819_, lean_object* v_a_2820_, lean_object* v_a_2821_){
_start:
{
lean_object* v_res_2822_; 
v_res_2822_ = l_Lean_Meta_Grind_Arith_Cutsat_addOcc(v_x_2809_, v_y_2810_, v_a_2811_, v_a_2812_, v_a_2813_, v_a_2814_, v_a_2815_, v_a_2816_, v_a_2817_, v_a_2818_, v_a_2819_, v_a_2820_);
lean_dec(v_a_2820_);
lean_dec_ref(v_a_2819_);
lean_dec(v_a_2818_);
lean_dec_ref(v_a_2817_);
lean_dec(v_a_2816_);
lean_dec_ref(v_a_2815_);
lean_dec(v_a_2814_);
lean_dec_ref(v_a_2813_);
lean_dec(v_a_2812_);
lean_dec(v_a_2811_);
return v_res_2822_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__0(lean_object* v_00_u03b2_2823_, lean_object* v_k_2824_, lean_object* v_t_2825_){
_start:
{
uint8_t v___x_2826_; 
v___x_2826_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__0___redArg(v_k_2824_, v_t_2825_);
return v___x_2826_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__0___boxed(lean_object* v_00_u03b2_2827_, lean_object* v_k_2828_, lean_object* v_t_2829_){
_start:
{
uint8_t v_res_2830_; lean_object* v_r_2831_; 
v_res_2830_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__0(v_00_u03b2_2827_, v_k_2828_, v_t_2829_);
lean_dec(v_t_2829_);
lean_dec(v_k_2828_);
v_r_2831_ = lean_box(v_res_2830_);
return v_r_2831_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__1(lean_object* v_00_u03b2_2832_, lean_object* v_k_2833_, lean_object* v_v_2834_, lean_object* v_t_2835_, lean_object* v_hl_2836_){
_start:
{
lean_object* v___x_2837_; 
v___x_2837_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Cutsat_addOcc_spec__1___redArg(v_k_2833_, v_v_2834_, v_t_2835_);
return v___x_2837_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_updateOccs_go___redArg(lean_object* v_y_2838_, lean_object* v_p_2839_, lean_object* v_a_2840_, lean_object* v_a_2841_){
_start:
{
if (lean_obj_tag(v_p_2839_) == 1)
{
lean_object* v_v_2843_; lean_object* v_p_2844_; lean_object* v___x_2845_; 
v_v_2843_ = lean_ctor_get(v_p_2839_, 1);
lean_inc(v_v_2843_);
v_p_2844_ = lean_ctor_get(v_p_2839_, 2);
lean_inc_ref(v_p_2844_);
lean_dec_ref_known(v_p_2839_, 3);
lean_inc(v_y_2838_);
v___x_2845_ = l_Lean_Meta_Grind_Arith_Cutsat_addOcc___redArg(v_v_2843_, v_y_2838_, v_a_2840_, v_a_2841_);
if (lean_obj_tag(v___x_2845_) == 0)
{
lean_dec_ref_known(v___x_2845_, 1);
v_p_2839_ = v_p_2844_;
goto _start;
}
else
{
lean_dec_ref(v_p_2844_);
lean_dec(v_y_2838_);
return v___x_2845_;
}
}
else
{
lean_object* v___x_2847_; lean_object* v___x_2848_; 
lean_dec_ref(v_p_2839_);
lean_dec(v_y_2838_);
v___x_2847_ = lean_box(0);
v___x_2848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2848_, 0, v___x_2847_);
return v___x_2848_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_updateOccs_go___redArg___boxed(lean_object* v_y_2849_, lean_object* v_p_2850_, lean_object* v_a_2851_, lean_object* v_a_2852_, lean_object* v_a_2853_){
_start:
{
lean_object* v_res_2854_; 
v_res_2854_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_updateOccs_go___redArg(v_y_2849_, v_p_2850_, v_a_2851_, v_a_2852_);
lean_dec_ref(v_a_2852_);
lean_dec(v_a_2851_);
return v_res_2854_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_updateOccs_go(lean_object* v_y_2855_, lean_object* v_p_2856_, lean_object* v_a_2857_, lean_object* v_a_2858_, lean_object* v_a_2859_, lean_object* v_a_2860_, lean_object* v_a_2861_, lean_object* v_a_2862_, lean_object* v_a_2863_, lean_object* v_a_2864_, lean_object* v_a_2865_, lean_object* v_a_2866_){
_start:
{
lean_object* v___x_2868_; 
v___x_2868_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_updateOccs_go___redArg(v_y_2855_, v_p_2856_, v_a_2857_, v_a_2865_);
return v___x_2868_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_updateOccs_go___boxed(lean_object* v_y_2869_, lean_object* v_p_2870_, lean_object* v_a_2871_, lean_object* v_a_2872_, lean_object* v_a_2873_, lean_object* v_a_2874_, lean_object* v_a_2875_, lean_object* v_a_2876_, lean_object* v_a_2877_, lean_object* v_a_2878_, lean_object* v_a_2879_, lean_object* v_a_2880_, lean_object* v_a_2881_){
_start:
{
lean_object* v_res_2882_; 
v_res_2882_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_updateOccs_go(v_y_2869_, v_p_2870_, v_a_2871_, v_a_2872_, v_a_2873_, v_a_2874_, v_a_2875_, v_a_2876_, v_a_2877_, v_a_2878_, v_a_2879_, v_a_2880_);
lean_dec(v_a_2880_);
lean_dec_ref(v_a_2879_);
lean_dec(v_a_2878_);
lean_dec_ref(v_a_2877_);
lean_dec(v_a_2876_);
lean_dec_ref(v_a_2875_);
lean_dec(v_a_2874_);
lean_dec_ref(v_a_2873_);
lean_dec(v_a_2872_);
lean_dec(v_a_2871_);
return v_res_2882_;
}
}
static lean_object* _init_l_Int_Internal_Linear_Poly_updateOccs___redArg___closed__1(void){
_start:
{
lean_object* v___x_2884_; lean_object* v___x_2885_; 
v___x_2884_ = ((lean_object*)(l_Int_Internal_Linear_Poly_updateOccs___redArg___closed__0));
v___x_2885_ = l_Lean_stringToMessageData(v___x_2884_);
return v___x_2885_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_updateOccs___redArg(lean_object* v_p_2886_, lean_object* v_a_2887_, lean_object* v_a_2888_, lean_object* v_a_2889_, lean_object* v_a_2890_, lean_object* v_a_2891_){
_start:
{
if (lean_obj_tag(v_p_2886_) == 1)
{
lean_object* v_v_2893_; lean_object* v_p_2894_; lean_object* v___x_2895_; 
v_v_2893_ = lean_ctor_get(v_p_2886_, 1);
lean_inc(v_v_2893_);
v_p_2894_ = lean_ctor_get(v_p_2886_, 2);
lean_inc_ref(v_p_2894_);
lean_dec_ref_known(v_p_2886_, 3);
v___x_2895_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_updateOccs_go___redArg(v_v_2893_, v_p_2894_, v_a_2887_, v_a_2890_);
return v___x_2895_;
}
else
{
lean_object* v___x_2896_; lean_object* v___x_2897_; 
lean_dec_ref(v_p_2886_);
v___x_2896_ = lean_obj_once(&l_Int_Internal_Linear_Poly_updateOccs___redArg___closed__1, &l_Int_Internal_Linear_Poly_updateOccs___redArg___closed__1_once, _init_l_Int_Internal_Linear_Poly_updateOccs___redArg___closed__1);
v___x_2897_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_throwUnexpected_spec__0___redArg(v___x_2896_, v_a_2888_, v_a_2889_, v_a_2890_, v_a_2891_);
return v___x_2897_;
}
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_updateOccs___redArg___boxed(lean_object* v_p_2898_, lean_object* v_a_2899_, lean_object* v_a_2900_, lean_object* v_a_2901_, lean_object* v_a_2902_, lean_object* v_a_2903_, lean_object* v_a_2904_){
_start:
{
lean_object* v_res_2905_; 
v_res_2905_ = l_Int_Internal_Linear_Poly_updateOccs___redArg(v_p_2898_, v_a_2899_, v_a_2900_, v_a_2901_, v_a_2902_, v_a_2903_);
lean_dec(v_a_2903_);
lean_dec_ref(v_a_2902_);
lean_dec(v_a_2901_);
lean_dec_ref(v_a_2900_);
lean_dec(v_a_2899_);
return v_res_2905_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_updateOccs(lean_object* v_p_2906_, lean_object* v_a_2907_, lean_object* v_a_2908_, lean_object* v_a_2909_, lean_object* v_a_2910_, lean_object* v_a_2911_, lean_object* v_a_2912_, lean_object* v_a_2913_, lean_object* v_a_2914_, lean_object* v_a_2915_, lean_object* v_a_2916_){
_start:
{
lean_object* v___x_2918_; 
v___x_2918_ = l_Int_Internal_Linear_Poly_updateOccs___redArg(v_p_2906_, v_a_2907_, v_a_2913_, v_a_2914_, v_a_2915_, v_a_2916_);
return v___x_2918_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_updateOccs___boxed(lean_object* v_p_2919_, lean_object* v_a_2920_, lean_object* v_a_2921_, lean_object* v_a_2922_, lean_object* v_a_2923_, lean_object* v_a_2924_, lean_object* v_a_2925_, lean_object* v_a_2926_, lean_object* v_a_2927_, lean_object* v_a_2928_, lean_object* v_a_2929_, lean_object* v_a_2930_){
_start:
{
lean_object* v_res_2931_; 
v_res_2931_ = l_Int_Internal_Linear_Poly_updateOccs(v_p_2919_, v_a_2920_, v_a_2921_, v_a_2922_, v_a_2923_, v_a_2924_, v_a_2925_, v_a_2926_, v_a_2927_, v_a_2928_, v_a_2929_);
lean_dec(v_a_2929_);
lean_dec_ref(v_a_2928_);
lean_dec(v_a_2927_);
lean_dec_ref(v_a_2926_);
lean_dec(v_a_2925_);
lean_dec_ref(v_a_2924_);
lean_dec(v_a_2923_);
lean_dec_ref(v_a_2922_);
lean_dec(v_a_2921_);
lean_dec(v_a_2920_);
return v_res_2931_;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_eval_x3f_go_spec__0(lean_object* v_a_2932_){
_start:
{
lean_object* v___x_2933_; 
v___x_2933_ = l_Rat_ofInt(v_a_2932_);
return v___x_2933_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_eval_x3f_go(lean_object* v_a_2934_, lean_object* v_v_2935_, lean_object* v_a_2936_){
_start:
{
if (lean_obj_tag(v_a_2936_) == 0)
{
lean_object* v_k_2937_; lean_object* v___x_2939_; uint8_t v_isShared_2940_; uint8_t v_isSharedCheck_2946_; 
v_k_2937_ = lean_ctor_get(v_a_2936_, 0);
v_isSharedCheck_2946_ = !lean_is_exclusive(v_a_2936_);
if (v_isSharedCheck_2946_ == 0)
{
v___x_2939_ = v_a_2936_;
v_isShared_2940_ = v_isSharedCheck_2946_;
goto v_resetjp_2938_;
}
else
{
lean_inc(v_k_2937_);
lean_dec(v_a_2936_);
v___x_2939_ = lean_box(0);
v_isShared_2940_ = v_isSharedCheck_2946_;
goto v_resetjp_2938_;
}
v_resetjp_2938_:
{
lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2944_; 
v___x_2941_ = l_Rat_ofInt(v_k_2937_);
v___x_2942_ = l_Rat_add(v_v_2935_, v___x_2941_);
if (v_isShared_2940_ == 0)
{
lean_ctor_set_tag(v___x_2939_, 1);
lean_ctor_set(v___x_2939_, 0, v___x_2942_);
v___x_2944_ = v___x_2939_;
goto v_reusejp_2943_;
}
else
{
lean_object* v_reuseFailAlloc_2945_; 
v_reuseFailAlloc_2945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2945_, 0, v___x_2942_);
v___x_2944_ = v_reuseFailAlloc_2945_;
goto v_reusejp_2943_;
}
v_reusejp_2943_:
{
return v___x_2944_;
}
}
}
else
{
lean_object* v_k_2947_; lean_object* v_v_2948_; lean_object* v_p_2949_; lean_object* v_size_2950_; uint8_t v___x_2951_; 
v_k_2947_ = lean_ctor_get(v_a_2936_, 0);
lean_inc(v_k_2947_);
v_v_2948_ = lean_ctor_get(v_a_2936_, 1);
lean_inc(v_v_2948_);
v_p_2949_ = lean_ctor_get(v_a_2936_, 2);
lean_inc_ref(v_p_2949_);
lean_dec_ref_known(v_a_2936_, 3);
v_size_2950_ = lean_ctor_get(v_a_2934_, 2);
v___x_2951_ = lean_nat_dec_lt(v_v_2948_, v_size_2950_);
if (v___x_2951_ == 0)
{
lean_object* v___x_2952_; 
lean_dec_ref(v_p_2949_);
lean_dec(v_v_2948_);
lean_dec(v_k_2947_);
lean_dec_ref(v_v_2935_);
v___x_2952_ = lean_box(0);
return v___x_2952_;
}
else
{
lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; 
v___x_2953_ = l_instInhabitedRat;
v___x_2954_ = l_Rat_ofInt(v_k_2947_);
v___x_2955_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2953_, v_a_2934_, v_v_2948_);
lean_dec(v_v_2948_);
v___x_2956_ = l_Rat_mul(v___x_2954_, v___x_2955_);
lean_dec_ref(v___x_2954_);
v___x_2957_ = l_Rat_add(v_v_2935_, v___x_2956_);
v_v_2935_ = v___x_2957_;
v_a_2936_ = v_p_2949_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_eval_x3f_go___boxed(lean_object* v_a_2959_, lean_object* v_v_2960_, lean_object* v_a_2961_){
_start:
{
lean_object* v_res_2962_; 
v_res_2962_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_eval_x3f_go(v_a_2959_, v_v_2960_, v_a_2961_);
lean_dec_ref(v_a_2959_);
return v_res_2962_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Int_Internal_Linear_Poly_eval_x3f_spec__0(lean_object* v_a_2963_){
_start:
{
lean_object* v___x_2964_; lean_object* v___x_2965_; 
v___x_2964_ = lean_nat_to_int(v_a_2963_);
v___x_2965_ = l_Rat_ofInt(v___x_2964_);
return v___x_2965_;
}
}
static lean_object* _init_l_Int_Internal_Linear_Poly_eval_x3f___redArg___closed__0(void){
_start:
{
lean_object* v___x_2966_; lean_object* v___x_2967_; 
v___x_2966_ = lean_unsigned_to_nat(0u);
v___x_2967_ = l_Nat_cast___at___00Int_Internal_Linear_Poly_eval_x3f_spec__0(v___x_2966_);
return v___x_2967_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_eval_x3f___redArg(lean_object* v_p_2968_, lean_object* v_a_2969_, lean_object* v_a_2970_){
_start:
{
lean_object* v___x_2972_; 
v___x_2972_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v_a_2969_, v_a_2970_);
if (lean_obj_tag(v___x_2972_) == 0)
{
lean_object* v_a_2973_; lean_object* v___x_2975_; uint8_t v_isShared_2976_; uint8_t v_isSharedCheck_2983_; 
v_a_2973_ = lean_ctor_get(v___x_2972_, 0);
v_isSharedCheck_2983_ = !lean_is_exclusive(v___x_2972_);
if (v_isSharedCheck_2983_ == 0)
{
v___x_2975_ = v___x_2972_;
v_isShared_2976_ = v_isSharedCheck_2983_;
goto v_resetjp_2974_;
}
else
{
lean_inc(v_a_2973_);
lean_dec(v___x_2972_);
v___x_2975_ = lean_box(0);
v_isShared_2976_ = v_isSharedCheck_2983_;
goto v_resetjp_2974_;
}
v_resetjp_2974_:
{
lean_object* v_assignment_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2981_; 
v_assignment_2977_ = lean_ctor_get(v_a_2973_, 13);
lean_inc_ref(v_assignment_2977_);
lean_dec(v_a_2973_);
v___x_2978_ = lean_obj_once(&l_Int_Internal_Linear_Poly_eval_x3f___redArg___closed__0, &l_Int_Internal_Linear_Poly_eval_x3f___redArg___closed__0_once, _init_l_Int_Internal_Linear_Poly_eval_x3f___redArg___closed__0);
v___x_2979_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util_0__Int_Internal_Linear_Poly_eval_x3f_go(v_assignment_2977_, v___x_2978_, v_p_2968_);
lean_dec_ref(v_assignment_2977_);
if (v_isShared_2976_ == 0)
{
lean_ctor_set(v___x_2975_, 0, v___x_2979_);
v___x_2981_ = v___x_2975_;
goto v_reusejp_2980_;
}
else
{
lean_object* v_reuseFailAlloc_2982_; 
v_reuseFailAlloc_2982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2982_, 0, v___x_2979_);
v___x_2981_ = v_reuseFailAlloc_2982_;
goto v_reusejp_2980_;
}
v_reusejp_2980_:
{
return v___x_2981_;
}
}
}
else
{
lean_object* v_a_2984_; lean_object* v___x_2986_; uint8_t v_isShared_2987_; uint8_t v_isSharedCheck_2991_; 
lean_dec_ref(v_p_2968_);
v_a_2984_ = lean_ctor_get(v___x_2972_, 0);
v_isSharedCheck_2991_ = !lean_is_exclusive(v___x_2972_);
if (v_isSharedCheck_2991_ == 0)
{
v___x_2986_ = v___x_2972_;
v_isShared_2987_ = v_isSharedCheck_2991_;
goto v_resetjp_2985_;
}
else
{
lean_inc(v_a_2984_);
lean_dec(v___x_2972_);
v___x_2986_ = lean_box(0);
v_isShared_2987_ = v_isSharedCheck_2991_;
goto v_resetjp_2985_;
}
v_resetjp_2985_:
{
lean_object* v___x_2989_; 
if (v_isShared_2987_ == 0)
{
v___x_2989_ = v___x_2986_;
goto v_reusejp_2988_;
}
else
{
lean_object* v_reuseFailAlloc_2990_; 
v_reuseFailAlloc_2990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2990_, 0, v_a_2984_);
v___x_2989_ = v_reuseFailAlloc_2990_;
goto v_reusejp_2988_;
}
v_reusejp_2988_:
{
return v___x_2989_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_eval_x3f___redArg___boxed(lean_object* v_p_2992_, lean_object* v_a_2993_, lean_object* v_a_2994_, lean_object* v_a_2995_){
_start:
{
lean_object* v_res_2996_; 
v_res_2996_ = l_Int_Internal_Linear_Poly_eval_x3f___redArg(v_p_2992_, v_a_2993_, v_a_2994_);
lean_dec_ref(v_a_2994_);
lean_dec(v_a_2993_);
return v_res_2996_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_eval_x3f(lean_object* v_p_2997_, lean_object* v_a_2998_, lean_object* v_a_2999_, lean_object* v_a_3000_, lean_object* v_a_3001_, lean_object* v_a_3002_, lean_object* v_a_3003_, lean_object* v_a_3004_, lean_object* v_a_3005_, lean_object* v_a_3006_, lean_object* v_a_3007_){
_start:
{
lean_object* v___x_3009_; 
v___x_3009_ = l_Int_Internal_Linear_Poly_eval_x3f___redArg(v_p_2997_, v_a_2998_, v_a_3006_);
return v___x_3009_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_eval_x3f___boxed(lean_object* v_p_3010_, lean_object* v_a_3011_, lean_object* v_a_3012_, lean_object* v_a_3013_, lean_object* v_a_3014_, lean_object* v_a_3015_, lean_object* v_a_3016_, lean_object* v_a_3017_, lean_object* v_a_3018_, lean_object* v_a_3019_, lean_object* v_a_3020_, lean_object* v_a_3021_){
_start:
{
lean_object* v_res_3022_; 
v_res_3022_ = l_Int_Internal_Linear_Poly_eval_x3f(v_p_3010_, v_a_3011_, v_a_3012_, v_a_3013_, v_a_3014_, v_a_3015_, v_a_3016_, v_a_3017_, v_a_3018_, v_a_3019_, v_a_3020_);
lean_dec(v_a_3020_);
lean_dec_ref(v_a_3019_);
lean_dec(v_a_3018_);
lean_dec_ref(v_a_3017_);
lean_dec(v_a_3016_);
lean_dec_ref(v_a_3015_);
lean_dec(v_a_3014_);
lean_dec_ref(v_a_3013_);
lean_dec(v_a_3012_);
lean_dec(v_a_3011_);
return v_res_3022_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isUnsat(lean_object* v_c_3023_){
_start:
{
lean_object* v_p_3024_; uint8_t v___x_3025_; 
v_p_3024_ = lean_ctor_get(v_c_3023_, 0);
v___x_3025_ = l_Int_Internal_Linear_Poly_isUnsatLe(v_p_3024_);
return v___x_3025_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isUnsat___boxed(lean_object* v_c_3026_){
_start:
{
uint8_t v_res_3027_; lean_object* v_r_3028_; 
v_res_3027_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isUnsat(v_c_3026_);
lean_dec_ref(v_c_3026_);
v_r_3028_ = lean_box(v_res_3027_);
return v_r_3028_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isUnsat(lean_object* v_c_3029_){
_start:
{
lean_object* v_d_3030_; lean_object* v_p_3031_; uint8_t v___x_3032_; 
v_d_3030_ = lean_ctor_get(v_c_3029_, 0);
lean_inc(v_d_3030_);
v_p_3031_ = lean_ctor_get(v_c_3029_, 1);
lean_inc_ref(v_p_3031_);
lean_dec_ref(v_c_3029_);
v___x_3032_ = l_Int_Internal_Linear_Poly_isUnsatDvd(v_d_3030_, v_p_3031_);
lean_dec_ref(v_p_3031_);
return v___x_3032_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isUnsat___boxed(lean_object* v_c_3033_){
_start:
{
uint8_t v_res_3034_; lean_object* v_r_3035_; 
v_res_3034_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_isUnsat(v_c_3033_);
v_r_3035_ = lean_box(v_res_3034_);
return v_r_3035_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied___redArg(lean_object* v_c_3036_, lean_object* v_a_3037_, lean_object* v_a_3038_){
_start:
{
lean_object* v_d_3040_; lean_object* v_p_3041_; lean_object* v___x_3042_; 
v_d_3040_ = lean_ctor_get(v_c_3036_, 0);
lean_inc(v_d_3040_);
v_p_3041_ = lean_ctor_get(v_c_3036_, 1);
lean_inc_ref(v_p_3041_);
lean_dec_ref(v_c_3036_);
v___x_3042_ = l_Int_Internal_Linear_Poly_eval_x3f___redArg(v_p_3041_, v_a_3037_, v_a_3038_);
if (lean_obj_tag(v___x_3042_) == 0)
{
lean_object* v_a_3043_; lean_object* v___x_3045_; uint8_t v_isShared_3046_; uint8_t v_isSharedCheck_3070_; 
v_a_3043_ = lean_ctor_get(v___x_3042_, 0);
v_isSharedCheck_3070_ = !lean_is_exclusive(v___x_3042_);
if (v_isSharedCheck_3070_ == 0)
{
v___x_3045_ = v___x_3042_;
v_isShared_3046_ = v_isSharedCheck_3070_;
goto v_resetjp_3044_;
}
else
{
lean_inc(v_a_3043_);
lean_dec(v___x_3042_);
v___x_3045_ = lean_box(0);
v_isShared_3046_ = v_isSharedCheck_3070_;
goto v_resetjp_3044_;
}
v_resetjp_3044_:
{
if (lean_obj_tag(v_a_3043_) == 1)
{
lean_object* v_val_3047_; lean_object* v_num_3048_; lean_object* v_den_3049_; lean_object* v___x_3050_; uint8_t v___x_3051_; 
v_val_3047_ = lean_ctor_get(v_a_3043_, 0);
lean_inc(v_val_3047_);
lean_dec_ref_known(v_a_3043_, 1);
v_num_3048_ = lean_ctor_get(v_val_3047_, 0);
lean_inc(v_num_3048_);
v_den_3049_ = lean_ctor_get(v_val_3047_, 1);
lean_inc(v_den_3049_);
lean_dec(v_val_3047_);
v___x_3050_ = lean_unsigned_to_nat(1u);
v___x_3051_ = lean_nat_dec_eq(v_den_3049_, v___x_3050_);
lean_dec(v_den_3049_);
if (v___x_3051_ == 0)
{
uint8_t v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3055_; 
lean_dec(v_num_3048_);
lean_dec(v_d_3040_);
v___x_3052_ = 0;
v___x_3053_ = lean_box(v___x_3052_);
if (v_isShared_3046_ == 0)
{
lean_ctor_set(v___x_3045_, 0, v___x_3053_);
v___x_3055_ = v___x_3045_;
goto v_reusejp_3054_;
}
else
{
lean_object* v_reuseFailAlloc_3056_; 
v_reuseFailAlloc_3056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3056_, 0, v___x_3053_);
v___x_3055_ = v_reuseFailAlloc_3056_;
goto v_reusejp_3054_;
}
v_reusejp_3054_:
{
return v___x_3055_;
}
}
else
{
lean_object* v___x_3057_; lean_object* v___x_3058_; uint8_t v___x_3059_; uint8_t v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3063_; 
v___x_3057_ = lean_int_emod(v_num_3048_, v_d_3040_);
lean_dec(v_d_3040_);
lean_dec(v_num_3048_);
v___x_3058_ = lean_obj_once(&l_Int_Internal_Linear_Poly_isZero___closed__0, &l_Int_Internal_Linear_Poly_isZero___closed__0_once, _init_l_Int_Internal_Linear_Poly_isZero___closed__0);
v___x_3059_ = lean_int_dec_eq(v___x_3057_, v___x_3058_);
lean_dec(v___x_3057_);
v___x_3060_ = l_Lean_Bool_toLBool(v___x_3059_);
v___x_3061_ = lean_box(v___x_3060_);
if (v_isShared_3046_ == 0)
{
lean_ctor_set(v___x_3045_, 0, v___x_3061_);
v___x_3063_ = v___x_3045_;
goto v_reusejp_3062_;
}
else
{
lean_object* v_reuseFailAlloc_3064_; 
v_reuseFailAlloc_3064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3064_, 0, v___x_3061_);
v___x_3063_ = v_reuseFailAlloc_3064_;
goto v_reusejp_3062_;
}
v_reusejp_3062_:
{
return v___x_3063_;
}
}
}
else
{
uint8_t v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3068_; 
lean_dec(v_a_3043_);
lean_dec(v_d_3040_);
v___x_3065_ = 2;
v___x_3066_ = lean_box(v___x_3065_);
if (v_isShared_3046_ == 0)
{
lean_ctor_set(v___x_3045_, 0, v___x_3066_);
v___x_3068_ = v___x_3045_;
goto v_reusejp_3067_;
}
else
{
lean_object* v_reuseFailAlloc_3069_; 
v_reuseFailAlloc_3069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3069_, 0, v___x_3066_);
v___x_3068_ = v_reuseFailAlloc_3069_;
goto v_reusejp_3067_;
}
v_reusejp_3067_:
{
return v___x_3068_;
}
}
}
}
else
{
lean_object* v_a_3071_; lean_object* v___x_3073_; uint8_t v_isShared_3074_; uint8_t v_isSharedCheck_3078_; 
lean_dec(v_d_3040_);
v_a_3071_ = lean_ctor_get(v___x_3042_, 0);
v_isSharedCheck_3078_ = !lean_is_exclusive(v___x_3042_);
if (v_isSharedCheck_3078_ == 0)
{
v___x_3073_ = v___x_3042_;
v_isShared_3074_ = v_isSharedCheck_3078_;
goto v_resetjp_3072_;
}
else
{
lean_inc(v_a_3071_);
lean_dec(v___x_3042_);
v___x_3073_ = lean_box(0);
v_isShared_3074_ = v_isSharedCheck_3078_;
goto v_resetjp_3072_;
}
v_resetjp_3072_:
{
lean_object* v___x_3076_; 
if (v_isShared_3074_ == 0)
{
v___x_3076_ = v___x_3073_;
goto v_reusejp_3075_;
}
else
{
lean_object* v_reuseFailAlloc_3077_; 
v_reuseFailAlloc_3077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3077_, 0, v_a_3071_);
v___x_3076_ = v_reuseFailAlloc_3077_;
goto v_reusejp_3075_;
}
v_reusejp_3075_:
{
return v___x_3076_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied___redArg___boxed(lean_object* v_c_3079_, lean_object* v_a_3080_, lean_object* v_a_3081_, lean_object* v_a_3082_){
_start:
{
lean_object* v_res_3083_; 
v_res_3083_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied___redArg(v_c_3079_, v_a_3080_, v_a_3081_);
lean_dec_ref(v_a_3081_);
lean_dec(v_a_3080_);
return v_res_3083_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied(lean_object* v_c_3084_, lean_object* v_a_3085_, lean_object* v_a_3086_, lean_object* v_a_3087_, lean_object* v_a_3088_, lean_object* v_a_3089_, lean_object* v_a_3090_, lean_object* v_a_3091_, lean_object* v_a_3092_, lean_object* v_a_3093_, lean_object* v_a_3094_){
_start:
{
lean_object* v___x_3096_; 
v___x_3096_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied___redArg(v_c_3084_, v_a_3085_, v_a_3093_);
return v___x_3096_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied___boxed(lean_object* v_c_3097_, lean_object* v_a_3098_, lean_object* v_a_3099_, lean_object* v_a_3100_, lean_object* v_a_3101_, lean_object* v_a_3102_, lean_object* v_a_3103_, lean_object* v_a_3104_, lean_object* v_a_3105_, lean_object* v_a_3106_, lean_object* v_a_3107_, lean_object* v_a_3108_){
_start:
{
lean_object* v_res_3109_; 
v_res_3109_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_satisfied(v_c_3097_, v_a_3098_, v_a_3099_, v_a_3100_, v_a_3101_, v_a_3102_, v_a_3103_, v_a_3104_, v_a_3105_, v_a_3106_, v_a_3107_);
lean_dec(v_a_3107_);
lean_dec_ref(v_a_3106_);
lean_dec(v_a_3105_);
lean_dec_ref(v_a_3104_);
lean_dec(v_a_3103_);
lean_dec_ref(v_a_3102_);
lean_dec(v_a_3101_);
lean_dec_ref(v_a_3100_);
lean_dec(v_a_3099_);
lean_dec(v_a_3098_);
return v_res_3109_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_satisfiedLe___redArg(lean_object* v_p_3110_, lean_object* v_a_3111_, lean_object* v_a_3112_){
_start:
{
lean_object* v___x_3114_; 
v___x_3114_ = l_Int_Internal_Linear_Poly_eval_x3f___redArg(v_p_3110_, v_a_3111_, v_a_3112_);
if (lean_obj_tag(v___x_3114_) == 0)
{
lean_object* v_a_3115_; lean_object* v___x_3117_; uint8_t v_isShared_3118_; uint8_t v_isSharedCheck_3132_; 
v_a_3115_ = lean_ctor_get(v___x_3114_, 0);
v_isSharedCheck_3132_ = !lean_is_exclusive(v___x_3114_);
if (v_isSharedCheck_3132_ == 0)
{
v___x_3117_ = v___x_3114_;
v_isShared_3118_ = v_isSharedCheck_3132_;
goto v_resetjp_3116_;
}
else
{
lean_inc(v_a_3115_);
lean_dec(v___x_3114_);
v___x_3117_ = lean_box(0);
v_isShared_3118_ = v_isSharedCheck_3132_;
goto v_resetjp_3116_;
}
v_resetjp_3116_:
{
if (lean_obj_tag(v_a_3115_) == 1)
{
lean_object* v_val_3119_; lean_object* v___x_3120_; uint8_t v___x_3121_; uint8_t v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3125_; 
v_val_3119_ = lean_ctor_get(v_a_3115_, 0);
lean_inc(v_val_3119_);
lean_dec_ref_known(v_a_3115_, 1);
v___x_3120_ = lean_obj_once(&l_Int_Internal_Linear_Poly_eval_x3f___redArg___closed__0, &l_Int_Internal_Linear_Poly_eval_x3f___redArg___closed__0_once, _init_l_Int_Internal_Linear_Poly_eval_x3f___redArg___closed__0);
v___x_3121_ = l_Rat_instDecidableLe(v_val_3119_, v___x_3120_);
v___x_3122_ = l_Lean_Bool_toLBool(v___x_3121_);
v___x_3123_ = lean_box(v___x_3122_);
if (v_isShared_3118_ == 0)
{
lean_ctor_set(v___x_3117_, 0, v___x_3123_);
v___x_3125_ = v___x_3117_;
goto v_reusejp_3124_;
}
else
{
lean_object* v_reuseFailAlloc_3126_; 
v_reuseFailAlloc_3126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3126_, 0, v___x_3123_);
v___x_3125_ = v_reuseFailAlloc_3126_;
goto v_reusejp_3124_;
}
v_reusejp_3124_:
{
return v___x_3125_;
}
}
else
{
uint8_t v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3130_; 
lean_dec(v_a_3115_);
v___x_3127_ = 2;
v___x_3128_ = lean_box(v___x_3127_);
if (v_isShared_3118_ == 0)
{
lean_ctor_set(v___x_3117_, 0, v___x_3128_);
v___x_3130_ = v___x_3117_;
goto v_reusejp_3129_;
}
else
{
lean_object* v_reuseFailAlloc_3131_; 
v_reuseFailAlloc_3131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3131_, 0, v___x_3128_);
v___x_3130_ = v_reuseFailAlloc_3131_;
goto v_reusejp_3129_;
}
v_reusejp_3129_:
{
return v___x_3130_;
}
}
}
}
else
{
lean_object* v_a_3133_; lean_object* v___x_3135_; uint8_t v_isShared_3136_; uint8_t v_isSharedCheck_3140_; 
v_a_3133_ = lean_ctor_get(v___x_3114_, 0);
v_isSharedCheck_3140_ = !lean_is_exclusive(v___x_3114_);
if (v_isSharedCheck_3140_ == 0)
{
v___x_3135_ = v___x_3114_;
v_isShared_3136_ = v_isSharedCheck_3140_;
goto v_resetjp_3134_;
}
else
{
lean_inc(v_a_3133_);
lean_dec(v___x_3114_);
v___x_3135_ = lean_box(0);
v_isShared_3136_ = v_isSharedCheck_3140_;
goto v_resetjp_3134_;
}
v_resetjp_3134_:
{
lean_object* v___x_3138_; 
if (v_isShared_3136_ == 0)
{
v___x_3138_ = v___x_3135_;
goto v_reusejp_3137_;
}
else
{
lean_object* v_reuseFailAlloc_3139_; 
v_reuseFailAlloc_3139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3139_, 0, v_a_3133_);
v___x_3138_ = v_reuseFailAlloc_3139_;
goto v_reusejp_3137_;
}
v_reusejp_3137_:
{
return v___x_3138_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_satisfiedLe___redArg___boxed(lean_object* v_p_3141_, lean_object* v_a_3142_, lean_object* v_a_3143_, lean_object* v_a_3144_){
_start:
{
lean_object* v_res_3145_; 
v_res_3145_ = l_Int_Internal_Linear_Poly_satisfiedLe___redArg(v_p_3141_, v_a_3142_, v_a_3143_);
lean_dec_ref(v_a_3143_);
lean_dec(v_a_3142_);
return v_res_3145_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_satisfiedLe(lean_object* v_p_3146_, lean_object* v_a_3147_, lean_object* v_a_3148_, lean_object* v_a_3149_, lean_object* v_a_3150_, lean_object* v_a_3151_, lean_object* v_a_3152_, lean_object* v_a_3153_, lean_object* v_a_3154_, lean_object* v_a_3155_, lean_object* v_a_3156_){
_start:
{
lean_object* v___x_3158_; 
v___x_3158_ = l_Int_Internal_Linear_Poly_satisfiedLe___redArg(v_p_3146_, v_a_3147_, v_a_3155_);
return v___x_3158_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_satisfiedLe___boxed(lean_object* v_p_3159_, lean_object* v_a_3160_, lean_object* v_a_3161_, lean_object* v_a_3162_, lean_object* v_a_3163_, lean_object* v_a_3164_, lean_object* v_a_3165_, lean_object* v_a_3166_, lean_object* v_a_3167_, lean_object* v_a_3168_, lean_object* v_a_3169_, lean_object* v_a_3170_){
_start:
{
lean_object* v_res_3171_; 
v_res_3171_ = l_Int_Internal_Linear_Poly_satisfiedLe(v_p_3159_, v_a_3160_, v_a_3161_, v_a_3162_, v_a_3163_, v_a_3164_, v_a_3165_, v_a_3166_, v_a_3167_, v_a_3168_, v_a_3169_);
lean_dec(v_a_3169_);
lean_dec_ref(v_a_3168_);
lean_dec(v_a_3167_);
lean_dec_ref(v_a_3166_);
lean_dec(v_a_3165_);
lean_dec_ref(v_a_3164_);
lean_dec(v_a_3163_);
lean_dec_ref(v_a_3162_);
lean_dec(v_a_3161_);
lean_dec(v_a_3160_);
return v_res_3171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied___redArg(lean_object* v_c_3172_, lean_object* v_a_3173_, lean_object* v_a_3174_){
_start:
{
lean_object* v_p_3176_; lean_object* v___x_3177_; 
v_p_3176_ = lean_ctor_get(v_c_3172_, 0);
lean_inc_ref(v_p_3176_);
lean_dec_ref(v_c_3172_);
v___x_3177_ = l_Int_Internal_Linear_Poly_satisfiedLe___redArg(v_p_3176_, v_a_3173_, v_a_3174_);
return v___x_3177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied___redArg___boxed(lean_object* v_c_3178_, lean_object* v_a_3179_, lean_object* v_a_3180_, lean_object* v_a_3181_){
_start:
{
lean_object* v_res_3182_; 
v_res_3182_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied___redArg(v_c_3178_, v_a_3179_, v_a_3180_);
lean_dec_ref(v_a_3180_);
lean_dec(v_a_3179_);
return v_res_3182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied(lean_object* v_c_3183_, lean_object* v_a_3184_, lean_object* v_a_3185_, lean_object* v_a_3186_, lean_object* v_a_3187_, lean_object* v_a_3188_, lean_object* v_a_3189_, lean_object* v_a_3190_, lean_object* v_a_3191_, lean_object* v_a_3192_, lean_object* v_a_3193_){
_start:
{
lean_object* v___x_3195_; 
v___x_3195_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied___redArg(v_c_3183_, v_a_3184_, v_a_3192_);
return v___x_3195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied___boxed(lean_object* v_c_3196_, lean_object* v_a_3197_, lean_object* v_a_3198_, lean_object* v_a_3199_, lean_object* v_a_3200_, lean_object* v_a_3201_, lean_object* v_a_3202_, lean_object* v_a_3203_, lean_object* v_a_3204_, lean_object* v_a_3205_, lean_object* v_a_3206_, lean_object* v_a_3207_){
_start:
{
lean_object* v_res_3208_; 
v_res_3208_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied(v_c_3196_, v_a_3197_, v_a_3198_, v_a_3199_, v_a_3200_, v_a_3201_, v_a_3202_, v_a_3203_, v_a_3204_, v_a_3205_, v_a_3206_);
lean_dec(v_a_3206_);
lean_dec_ref(v_a_3205_);
lean_dec(v_a_3204_);
lean_dec_ref(v_a_3203_);
lean_dec(v_a_3202_);
lean_dec_ref(v_a_3201_);
lean_dec(v_a_3200_);
lean_dec_ref(v_a_3199_);
lean_dec(v_a_3198_);
lean_dec(v_a_3197_);
return v_res_3208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied___redArg(lean_object* v_c_3209_, lean_object* v_a_3210_, lean_object* v_a_3211_){
_start:
{
lean_object* v_p_3213_; lean_object* v___x_3214_; 
v_p_3213_ = lean_ctor_get(v_c_3209_, 0);
lean_inc_ref(v_p_3213_);
lean_dec_ref(v_c_3209_);
v___x_3214_ = l_Int_Internal_Linear_Poly_eval_x3f___redArg(v_p_3213_, v_a_3210_, v_a_3211_);
if (lean_obj_tag(v___x_3214_) == 0)
{
lean_object* v_a_3215_; lean_object* v___x_3217_; uint8_t v_isShared_3218_; uint8_t v_isSharedCheck_3234_; 
v_a_3215_ = lean_ctor_get(v___x_3214_, 0);
v_isSharedCheck_3234_ = !lean_is_exclusive(v___x_3214_);
if (v_isSharedCheck_3234_ == 0)
{
v___x_3217_ = v___x_3214_;
v_isShared_3218_ = v_isSharedCheck_3234_;
goto v_resetjp_3216_;
}
else
{
lean_inc(v_a_3215_);
lean_dec(v___x_3214_);
v___x_3217_ = lean_box(0);
v_isShared_3218_ = v_isSharedCheck_3234_;
goto v_resetjp_3216_;
}
v_resetjp_3216_:
{
uint8_t v___y_3220_; 
if (lean_obj_tag(v_a_3215_) == 1)
{
lean_object* v_val_3226_; lean_object* v___x_3227_; uint8_t v___x_3228_; 
v_val_3226_ = lean_ctor_get(v_a_3215_, 0);
lean_inc(v_val_3226_);
lean_dec_ref_known(v_a_3215_, 1);
v___x_3227_ = lean_obj_once(&l_Int_Internal_Linear_Poly_eval_x3f___redArg___closed__0, &l_Int_Internal_Linear_Poly_eval_x3f___redArg___closed__0_once, _init_l_Int_Internal_Linear_Poly_eval_x3f___redArg___closed__0);
v___x_3228_ = l_instDecidableEqRat_decEq(v_val_3226_, v___x_3227_);
lean_dec(v_val_3226_);
if (v___x_3228_ == 0)
{
uint8_t v___x_3229_; 
v___x_3229_ = 1;
v___y_3220_ = v___x_3229_;
goto v___jp_3219_;
}
else
{
uint8_t v___x_3230_; 
v___x_3230_ = 0;
v___y_3220_ = v___x_3230_;
goto v___jp_3219_;
}
}
else
{
uint8_t v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; 
lean_del_object(v___x_3217_);
lean_dec(v_a_3215_);
v___x_3231_ = 2;
v___x_3232_ = lean_box(v___x_3231_);
v___x_3233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3233_, 0, v___x_3232_);
return v___x_3233_;
}
v___jp_3219_:
{
uint8_t v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3224_; 
v___x_3221_ = l_Lean_Bool_toLBool(v___y_3220_);
v___x_3222_ = lean_box(v___x_3221_);
if (v_isShared_3218_ == 0)
{
lean_ctor_set(v___x_3217_, 0, v___x_3222_);
v___x_3224_ = v___x_3217_;
goto v_reusejp_3223_;
}
else
{
lean_object* v_reuseFailAlloc_3225_; 
v_reuseFailAlloc_3225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3225_, 0, v___x_3222_);
v___x_3224_ = v_reuseFailAlloc_3225_;
goto v_reusejp_3223_;
}
v_reusejp_3223_:
{
return v___x_3224_;
}
}
}
}
else
{
lean_object* v_a_3235_; lean_object* v___x_3237_; uint8_t v_isShared_3238_; uint8_t v_isSharedCheck_3242_; 
v_a_3235_ = lean_ctor_get(v___x_3214_, 0);
v_isSharedCheck_3242_ = !lean_is_exclusive(v___x_3214_);
if (v_isSharedCheck_3242_ == 0)
{
v___x_3237_ = v___x_3214_;
v_isShared_3238_ = v_isSharedCheck_3242_;
goto v_resetjp_3236_;
}
else
{
lean_inc(v_a_3235_);
lean_dec(v___x_3214_);
v___x_3237_ = lean_box(0);
v_isShared_3238_ = v_isSharedCheck_3242_;
goto v_resetjp_3236_;
}
v_resetjp_3236_:
{
lean_object* v___x_3240_; 
if (v_isShared_3238_ == 0)
{
v___x_3240_ = v___x_3237_;
goto v_reusejp_3239_;
}
else
{
lean_object* v_reuseFailAlloc_3241_; 
v_reuseFailAlloc_3241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3241_, 0, v_a_3235_);
v___x_3240_ = v_reuseFailAlloc_3241_;
goto v_reusejp_3239_;
}
v_reusejp_3239_:
{
return v___x_3240_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied___redArg___boxed(lean_object* v_c_3243_, lean_object* v_a_3244_, lean_object* v_a_3245_, lean_object* v_a_3246_){
_start:
{
lean_object* v_res_3247_; 
v_res_3247_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied___redArg(v_c_3243_, v_a_3244_, v_a_3245_);
lean_dec_ref(v_a_3245_);
lean_dec(v_a_3244_);
return v_res_3247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied(lean_object* v_c_3248_, lean_object* v_a_3249_, lean_object* v_a_3250_, lean_object* v_a_3251_, lean_object* v_a_3252_, lean_object* v_a_3253_, lean_object* v_a_3254_, lean_object* v_a_3255_, lean_object* v_a_3256_, lean_object* v_a_3257_, lean_object* v_a_3258_){
_start:
{
lean_object* v___x_3260_; 
v___x_3260_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied___redArg(v_c_3248_, v_a_3249_, v_a_3257_);
return v___x_3260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied___boxed(lean_object* v_c_3261_, lean_object* v_a_3262_, lean_object* v_a_3263_, lean_object* v_a_3264_, lean_object* v_a_3265_, lean_object* v_a_3266_, lean_object* v_a_3267_, lean_object* v_a_3268_, lean_object* v_a_3269_, lean_object* v_a_3270_, lean_object* v_a_3271_, lean_object* v_a_3272_){
_start:
{
lean_object* v_res_3273_; 
v_res_3273_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_satisfied(v_c_3261_, v_a_3262_, v_a_3263_, v_a_3264_, v_a_3265_, v_a_3266_, v_a_3267_, v_a_3268_, v_a_3269_, v_a_3270_, v_a_3271_);
lean_dec(v_a_3271_);
lean_dec_ref(v_a_3270_);
lean_dec(v_a_3269_);
lean_dec_ref(v_a_3268_);
lean_dec(v_a_3267_);
lean_dec_ref(v_a_3266_);
lean_dec(v_a_3265_);
lean_dec_ref(v_a_3264_);
lean_dec(v_a_3263_);
lean_dec(v_a_3262_);
return v_res_3273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_satisfied___redArg(lean_object* v_c_3274_, lean_object* v_a_3275_, lean_object* v_a_3276_){
_start:
{
lean_object* v_p_3278_; lean_object* v___x_3279_; 
v_p_3278_ = lean_ctor_get(v_c_3274_, 0);
lean_inc_ref(v_p_3278_);
lean_dec_ref(v_c_3274_);
v___x_3279_ = l_Int_Internal_Linear_Poly_eval_x3f___redArg(v_p_3278_, v_a_3275_, v_a_3276_);
if (lean_obj_tag(v___x_3279_) == 0)
{
lean_object* v_a_3280_; lean_object* v___x_3282_; uint8_t v_isShared_3283_; uint8_t v_isSharedCheck_3297_; 
v_a_3280_ = lean_ctor_get(v___x_3279_, 0);
v_isSharedCheck_3297_ = !lean_is_exclusive(v___x_3279_);
if (v_isSharedCheck_3297_ == 0)
{
v___x_3282_ = v___x_3279_;
v_isShared_3283_ = v_isSharedCheck_3297_;
goto v_resetjp_3281_;
}
else
{
lean_inc(v_a_3280_);
lean_dec(v___x_3279_);
v___x_3282_ = lean_box(0);
v_isShared_3283_ = v_isSharedCheck_3297_;
goto v_resetjp_3281_;
}
v_resetjp_3281_:
{
if (lean_obj_tag(v_a_3280_) == 1)
{
lean_object* v_val_3284_; lean_object* v___x_3285_; uint8_t v___x_3286_; uint8_t v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3290_; 
v_val_3284_ = lean_ctor_get(v_a_3280_, 0);
lean_inc(v_val_3284_);
lean_dec_ref_known(v_a_3280_, 1);
v___x_3285_ = lean_obj_once(&l_Int_Internal_Linear_Poly_eval_x3f___redArg___closed__0, &l_Int_Internal_Linear_Poly_eval_x3f___redArg___closed__0_once, _init_l_Int_Internal_Linear_Poly_eval_x3f___redArg___closed__0);
v___x_3286_ = l_instDecidableEqRat_decEq(v_val_3284_, v___x_3285_);
lean_dec(v_val_3284_);
v___x_3287_ = l_Lean_Bool_toLBool(v___x_3286_);
v___x_3288_ = lean_box(v___x_3287_);
if (v_isShared_3283_ == 0)
{
lean_ctor_set(v___x_3282_, 0, v___x_3288_);
v___x_3290_ = v___x_3282_;
goto v_reusejp_3289_;
}
else
{
lean_object* v_reuseFailAlloc_3291_; 
v_reuseFailAlloc_3291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3291_, 0, v___x_3288_);
v___x_3290_ = v_reuseFailAlloc_3291_;
goto v_reusejp_3289_;
}
v_reusejp_3289_:
{
return v___x_3290_;
}
}
else
{
uint8_t v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3295_; 
lean_dec(v_a_3280_);
v___x_3292_ = 2;
v___x_3293_ = lean_box(v___x_3292_);
if (v_isShared_3283_ == 0)
{
lean_ctor_set(v___x_3282_, 0, v___x_3293_);
v___x_3295_ = v___x_3282_;
goto v_reusejp_3294_;
}
else
{
lean_object* v_reuseFailAlloc_3296_; 
v_reuseFailAlloc_3296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3296_, 0, v___x_3293_);
v___x_3295_ = v_reuseFailAlloc_3296_;
goto v_reusejp_3294_;
}
v_reusejp_3294_:
{
return v___x_3295_;
}
}
}
}
else
{
lean_object* v_a_3298_; lean_object* v___x_3300_; uint8_t v_isShared_3301_; uint8_t v_isSharedCheck_3305_; 
v_a_3298_ = lean_ctor_get(v___x_3279_, 0);
v_isSharedCheck_3305_ = !lean_is_exclusive(v___x_3279_);
if (v_isSharedCheck_3305_ == 0)
{
v___x_3300_ = v___x_3279_;
v_isShared_3301_ = v_isSharedCheck_3305_;
goto v_resetjp_3299_;
}
else
{
lean_inc(v_a_3298_);
lean_dec(v___x_3279_);
v___x_3300_ = lean_box(0);
v_isShared_3301_ = v_isSharedCheck_3305_;
goto v_resetjp_3299_;
}
v_resetjp_3299_:
{
lean_object* v___x_3303_; 
if (v_isShared_3301_ == 0)
{
v___x_3303_ = v___x_3300_;
goto v_reusejp_3302_;
}
else
{
lean_object* v_reuseFailAlloc_3304_; 
v_reuseFailAlloc_3304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3304_, 0, v_a_3298_);
v___x_3303_ = v_reuseFailAlloc_3304_;
goto v_reusejp_3302_;
}
v_reusejp_3302_:
{
return v___x_3303_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_satisfied___redArg___boxed(lean_object* v_c_3306_, lean_object* v_a_3307_, lean_object* v_a_3308_, lean_object* v_a_3309_){
_start:
{
lean_object* v_res_3310_; 
v_res_3310_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_satisfied___redArg(v_c_3306_, v_a_3307_, v_a_3308_);
lean_dec_ref(v_a_3308_);
lean_dec(v_a_3307_);
return v_res_3310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_satisfied(lean_object* v_c_3311_, lean_object* v_a_3312_, lean_object* v_a_3313_, lean_object* v_a_3314_, lean_object* v_a_3315_, lean_object* v_a_3316_, lean_object* v_a_3317_, lean_object* v_a_3318_, lean_object* v_a_3319_, lean_object* v_a_3320_, lean_object* v_a_3321_){
_start:
{
lean_object* v___x_3323_; 
v___x_3323_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_satisfied___redArg(v_c_3311_, v_a_3312_, v_a_3320_);
return v___x_3323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_satisfied___boxed(lean_object* v_c_3324_, lean_object* v_a_3325_, lean_object* v_a_3326_, lean_object* v_a_3327_, lean_object* v_a_3328_, lean_object* v_a_3329_, lean_object* v_a_3330_, lean_object* v_a_3331_, lean_object* v_a_3332_, lean_object* v_a_3333_, lean_object* v_a_3334_, lean_object* v_a_3335_){
_start:
{
lean_object* v_res_3336_; 
v_res_3336_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_satisfied(v_c_3324_, v_a_3325_, v_a_3326_, v_a_3327_, v_a_3328_, v_a_3329_, v_a_3330_, v_a_3331_, v_a_3332_, v_a_3333_, v_a_3334_);
lean_dec(v_a_3334_);
lean_dec_ref(v_a_3333_);
lean_dec(v_a_3332_);
lean_dec_ref(v_a_3331_);
lean_dec(v_a_3330_);
lean_dec_ref(v_a_3329_);
lean_dec(v_a_3328_);
lean_dec_ref(v_a_3327_);
lean_dec(v_a_3326_);
lean_dec(v_a_3325_);
return v_res_3336_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_findVarToSubst___redArg(lean_object* v_p_3337_, lean_object* v_a_3338_, lean_object* v_a_3339_){
_start:
{
if (lean_obj_tag(v_p_3337_) == 0)
{
lean_object* v___x_3342_; uint8_t v_isShared_3343_; uint8_t v_isSharedCheck_3348_; 
v_isSharedCheck_3348_ = !lean_is_exclusive(v_p_3337_);
if (v_isSharedCheck_3348_ == 0)
{
lean_object* v_unused_3349_; 
v_unused_3349_ = lean_ctor_get(v_p_3337_, 0);
lean_dec(v_unused_3349_);
v___x_3342_ = v_p_3337_;
v_isShared_3343_ = v_isSharedCheck_3348_;
goto v_resetjp_3341_;
}
else
{
lean_dec(v_p_3337_);
v___x_3342_ = lean_box(0);
v_isShared_3343_ = v_isSharedCheck_3348_;
goto v_resetjp_3341_;
}
v_resetjp_3341_:
{
lean_object* v___x_3344_; lean_object* v___x_3346_; 
v___x_3344_ = lean_box(0);
if (v_isShared_3343_ == 0)
{
lean_ctor_set(v___x_3342_, 0, v___x_3344_);
v___x_3346_ = v___x_3342_;
goto v_reusejp_3345_;
}
else
{
lean_object* v_reuseFailAlloc_3347_; 
v_reuseFailAlloc_3347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3347_, 0, v___x_3344_);
v___x_3346_ = v_reuseFailAlloc_3347_;
goto v_reusejp_3345_;
}
v_reusejp_3345_:
{
return v___x_3346_;
}
}
}
else
{
lean_object* v_k_3350_; lean_object* v_v_3351_; lean_object* v_p_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; 
v_k_3350_ = lean_ctor_get(v_p_3337_, 0);
lean_inc(v_k_3350_);
v_v_3351_ = lean_ctor_get(v_p_3337_, 1);
lean_inc(v_v_3351_);
v_p_3352_ = lean_ctor_get(v_p_3337_, 2);
lean_inc_ref(v_p_3352_);
lean_dec_ref_known(v_p_3337_, 3);
v___x_3353_ = lean_box(0);
v___x_3354_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v_a_3338_, v_a_3339_);
if (lean_obj_tag(v___x_3354_) == 0)
{
lean_object* v_a_3355_; lean_object* v___x_3357_; uint8_t v_isShared_3358_; uint8_t v_isSharedCheck_3380_; 
v_a_3355_ = lean_ctor_get(v___x_3354_, 0);
v_isSharedCheck_3380_ = !lean_is_exclusive(v___x_3354_);
if (v_isSharedCheck_3380_ == 0)
{
v___x_3357_ = v___x_3354_;
v_isShared_3358_ = v_isSharedCheck_3380_;
goto v_resetjp_3356_;
}
else
{
lean_inc(v_a_3355_);
lean_dec(v___x_3354_);
v___x_3357_ = lean_box(0);
v_isShared_3358_ = v_isSharedCheck_3380_;
goto v_resetjp_3356_;
}
v_resetjp_3356_:
{
lean_object* v___y_3360_; lean_object* v_elimEqs_3375_; lean_object* v_size_3376_; uint8_t v___x_3377_; 
v_elimEqs_3375_ = lean_ctor_get(v_a_3355_, 9);
lean_inc_ref(v_elimEqs_3375_);
lean_dec(v_a_3355_);
v_size_3376_ = lean_ctor_get(v_elimEqs_3375_, 2);
v___x_3377_ = lean_nat_dec_lt(v_v_3351_, v_size_3376_);
if (v___x_3377_ == 0)
{
lean_object* v___x_3378_; 
lean_dec_ref(v_elimEqs_3375_);
v___x_3378_ = l_outOfBounds___redArg(v___x_3353_);
v___y_3360_ = v___x_3378_;
goto v___jp_3359_;
}
else
{
lean_object* v___x_3379_; 
v___x_3379_ = l_Lean_PersistentArray_get_x21___redArg(v___x_3353_, v_elimEqs_3375_, v_v_3351_);
lean_dec_ref(v_elimEqs_3375_);
v___y_3360_ = v___x_3379_;
goto v___jp_3359_;
}
v___jp_3359_:
{
if (lean_obj_tag(v___y_3360_) == 1)
{
lean_object* v_val_3361_; lean_object* v___x_3363_; uint8_t v_isShared_3364_; uint8_t v_isSharedCheck_3373_; 
lean_dec_ref(v_p_3352_);
v_val_3361_ = lean_ctor_get(v___y_3360_, 0);
v_isSharedCheck_3373_ = !lean_is_exclusive(v___y_3360_);
if (v_isSharedCheck_3373_ == 0)
{
v___x_3363_ = v___y_3360_;
v_isShared_3364_ = v_isSharedCheck_3373_;
goto v_resetjp_3362_;
}
else
{
lean_inc(v_val_3361_);
lean_dec(v___y_3360_);
v___x_3363_ = lean_box(0);
v_isShared_3364_ = v_isSharedCheck_3373_;
goto v_resetjp_3362_;
}
v_resetjp_3362_:
{
lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3368_; 
v___x_3365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3365_, 0, v_v_3351_);
lean_ctor_set(v___x_3365_, 1, v_val_3361_);
v___x_3366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3366_, 0, v_k_3350_);
lean_ctor_set(v___x_3366_, 1, v___x_3365_);
if (v_isShared_3364_ == 0)
{
lean_ctor_set(v___x_3363_, 0, v___x_3366_);
v___x_3368_ = v___x_3363_;
goto v_reusejp_3367_;
}
else
{
lean_object* v_reuseFailAlloc_3372_; 
v_reuseFailAlloc_3372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3372_, 0, v___x_3366_);
v___x_3368_ = v_reuseFailAlloc_3372_;
goto v_reusejp_3367_;
}
v_reusejp_3367_:
{
lean_object* v___x_3370_; 
if (v_isShared_3358_ == 0)
{
lean_ctor_set(v___x_3357_, 0, v___x_3368_);
v___x_3370_ = v___x_3357_;
goto v_reusejp_3369_;
}
else
{
lean_object* v_reuseFailAlloc_3371_; 
v_reuseFailAlloc_3371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3371_, 0, v___x_3368_);
v___x_3370_ = v_reuseFailAlloc_3371_;
goto v_reusejp_3369_;
}
v_reusejp_3369_:
{
return v___x_3370_;
}
}
}
}
else
{
lean_dec(v___y_3360_);
lean_del_object(v___x_3357_);
lean_dec(v_v_3351_);
lean_dec(v_k_3350_);
v_p_3337_ = v_p_3352_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_3381_; lean_object* v___x_3383_; uint8_t v_isShared_3384_; uint8_t v_isSharedCheck_3388_; 
lean_dec_ref(v_p_3352_);
lean_dec(v_v_3351_);
lean_dec(v_k_3350_);
v_a_3381_ = lean_ctor_get(v___x_3354_, 0);
v_isSharedCheck_3388_ = !lean_is_exclusive(v___x_3354_);
if (v_isSharedCheck_3388_ == 0)
{
v___x_3383_ = v___x_3354_;
v_isShared_3384_ = v_isSharedCheck_3388_;
goto v_resetjp_3382_;
}
else
{
lean_inc(v_a_3381_);
lean_dec(v___x_3354_);
v___x_3383_ = lean_box(0);
v_isShared_3384_ = v_isSharedCheck_3388_;
goto v_resetjp_3382_;
}
v_resetjp_3382_:
{
lean_object* v___x_3386_; 
if (v_isShared_3384_ == 0)
{
v___x_3386_ = v___x_3383_;
goto v_reusejp_3385_;
}
else
{
lean_object* v_reuseFailAlloc_3387_; 
v_reuseFailAlloc_3387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3387_, 0, v_a_3381_);
v___x_3386_ = v_reuseFailAlloc_3387_;
goto v_reusejp_3385_;
}
v_reusejp_3385_:
{
return v___x_3386_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_findVarToSubst___redArg___boxed(lean_object* v_p_3389_, lean_object* v_a_3390_, lean_object* v_a_3391_, lean_object* v_a_3392_){
_start:
{
lean_object* v_res_3393_; 
v_res_3393_ = l_Int_Internal_Linear_Poly_findVarToSubst___redArg(v_p_3389_, v_a_3390_, v_a_3391_);
lean_dec_ref(v_a_3391_);
lean_dec(v_a_3390_);
return v_res_3393_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_findVarToSubst(lean_object* v_p_3394_, lean_object* v_a_3395_, lean_object* v_a_3396_, lean_object* v_a_3397_, lean_object* v_a_3398_, lean_object* v_a_3399_, lean_object* v_a_3400_, lean_object* v_a_3401_, lean_object* v_a_3402_, lean_object* v_a_3403_, lean_object* v_a_3404_){
_start:
{
lean_object* v___x_3406_; 
v___x_3406_ = l_Int_Internal_Linear_Poly_findVarToSubst___redArg(v_p_3394_, v_a_3395_, v_a_3403_);
return v___x_3406_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_findVarToSubst___boxed(lean_object* v_p_3407_, lean_object* v_a_3408_, lean_object* v_a_3409_, lean_object* v_a_3410_, lean_object* v_a_3411_, lean_object* v_a_3412_, lean_object* v_a_3413_, lean_object* v_a_3414_, lean_object* v_a_3415_, lean_object* v_a_3416_, lean_object* v_a_3417_, lean_object* v_a_3418_){
_start:
{
lean_object* v_res_3419_; 
v_res_3419_ = l_Int_Internal_Linear_Poly_findVarToSubst(v_p_3407_, v_a_3408_, v_a_3409_, v_a_3410_, v_a_3411_, v_a_3412_, v_a_3413_, v_a_3414_, v_a_3415_, v_a_3416_, v_a_3417_);
lean_dec(v_a_3417_);
lean_dec_ref(v_a_3416_);
lean_dec(v_a_3415_);
lean_dec_ref(v_a_3414_);
lean_dec(v_a_3413_);
lean_dec_ref(v_a_3412_);
lean_dec(v_a_3411_);
lean_dec_ref(v_a_3410_);
lean_dec(v_a_3409_);
lean_dec(v_a_3408_);
return v_res_3419_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_numCases(lean_object* v_pred_3420_){
_start:
{
lean_object* v_c_u2081_3421_; lean_object* v_c_u2082_3422_; uint8_t v_left_3423_; lean_object* v_c_u2083_x3f_3424_; lean_object* v_p_3425_; lean_object* v_p_3426_; lean_object* v_a_3427_; lean_object* v_b_3428_; 
v_c_u2081_3421_ = lean_ctor_get(v_pred_3420_, 0);
v_c_u2082_3422_ = lean_ctor_get(v_pred_3420_, 1);
v_left_3423_ = lean_ctor_get_uint8(v_pred_3420_, sizeof(void*)*3);
v_c_u2083_x3f_3424_ = lean_ctor_get(v_pred_3420_, 2);
v_p_3425_ = lean_ctor_get(v_c_u2081_3421_, 0);
v_p_3426_ = lean_ctor_get(v_c_u2082_3422_, 0);
v_a_3427_ = l_Int_Internal_Linear_Poly_leadCoeff(v_p_3425_);
v_b_3428_ = l_Int_Internal_Linear_Poly_leadCoeff(v_p_3426_);
if (lean_obj_tag(v_c_u2083_x3f_3424_) == 0)
{
if (v_left_3423_ == 0)
{
lean_object* v___x_3429_; 
lean_dec(v_a_3427_);
v___x_3429_ = lean_nat_abs(v_b_3428_);
lean_dec(v_b_3428_);
return v___x_3429_;
}
else
{
lean_object* v___x_3430_; 
lean_dec(v_b_3428_);
v___x_3430_ = lean_nat_abs(v_a_3427_);
lean_dec(v_a_3427_);
return v___x_3430_;
}
}
else
{
lean_object* v_val_3431_; lean_object* v_d_3432_; lean_object* v_p_3433_; lean_object* v_c_3434_; 
v_val_3431_ = lean_ctor_get(v_c_u2083_x3f_3424_, 0);
v_d_3432_ = lean_ctor_get(v_val_3431_, 0);
v_p_3433_ = lean_ctor_get(v_val_3431_, 1);
v_c_3434_ = l_Int_Internal_Linear_Poly_leadCoeff(v_p_3433_);
if (v_left_3423_ == 0)
{
lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; 
lean_dec(v_a_3427_);
v___x_3435_ = lean_int_mul(v_b_3428_, v_d_3432_);
v___x_3436_ = l_Int_gcd(v___x_3435_, v_c_3434_);
lean_dec(v_c_3434_);
v___x_3437_ = lean_nat_to_int(v___x_3436_);
v___x_3438_ = lean_int_ediv(v___x_3435_, v___x_3437_);
lean_dec(v___x_3437_);
lean_dec(v___x_3435_);
v___x_3439_ = l_Int_lcm(v_b_3428_, v___x_3438_);
lean_dec(v___x_3438_);
lean_dec(v_b_3428_);
return v___x_3439_;
}
else
{
lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; 
lean_dec(v_b_3428_);
v___x_3440_ = lean_int_mul(v_a_3427_, v_d_3432_);
v___x_3441_ = l_Int_gcd(v___x_3440_, v_c_3434_);
lean_dec(v_c_3434_);
v___x_3442_ = lean_nat_to_int(v___x_3441_);
v___x_3443_ = lean_int_ediv(v___x_3440_, v___x_3442_);
lean_dec(v___x_3442_);
lean_dec(v___x_3440_);
v___x_3444_ = l_Int_lcm(v_a_3427_, v___x_3443_);
lean_dec(v___x_3443_);
lean_dec(v_a_3427_);
return v___x_3444_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_numCases___boxed(lean_object* v_pred_3445_){
_start:
{
lean_object* v_res_3446_; 
v_res_3446_ = l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_numCases(v_pred_3445_);
lean_dec_ref(v_pred_3445_);
return v_res_3446_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__1(void){
_start:
{
lean_object* v___x_3448_; lean_object* v___x_3449_; 
v___x_3448_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__0));
v___x_3449_ = l_Lean_stringToMessageData(v___x_3448_);
return v___x_3449_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__4(void){
_start:
{
lean_object* v___x_3453_; lean_object* v___x_3454_; 
v___x_3453_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__3));
v___x_3454_ = l_Lean_MessageData_ofFormat(v___x_3453_);
return v___x_3454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg(lean_object* v_pred_3455_, lean_object* v_a_3456_, lean_object* v_a_3457_){
_start:
{
lean_object* v_c_u2081_3459_; lean_object* v_c_u2082_3460_; lean_object* v_c_u2083_x3f_3461_; lean_object* v___x_3462_; 
v_c_u2081_3459_ = lean_ctor_get(v_pred_3455_, 0);
lean_inc_ref(v_c_u2081_3459_);
v_c_u2082_3460_ = lean_ctor_get(v_pred_3455_, 1);
lean_inc_ref(v_c_u2082_3460_);
v_c_u2083_x3f_3461_ = lean_ctor_get(v_pred_3455_, 2);
lean_inc(v_c_u2083_x3f_3461_);
lean_dec_ref(v_pred_3455_);
v___x_3462_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_c_u2081_3459_, v_a_3456_, v_a_3457_);
if (lean_obj_tag(v___x_3462_) == 0)
{
lean_object* v_a_3463_; lean_object* v___x_3464_; 
v_a_3463_ = lean_ctor_get(v___x_3462_, 0);
lean_inc(v_a_3463_);
lean_dec_ref_known(v___x_3462_, 1);
v___x_3464_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_c_u2082_3460_, v_a_3456_, v_a_3457_);
if (lean_obj_tag(v___x_3464_) == 0)
{
lean_object* v_a_3465_; lean_object* v___x_3467_; uint8_t v_isShared_3468_; uint8_t v_isSharedCheck_3483_; 
v_a_3465_ = lean_ctor_get(v___x_3464_, 0);
v_isSharedCheck_3483_ = !lean_is_exclusive(v___x_3464_);
if (v_isSharedCheck_3483_ == 0)
{
v___x_3467_ = v___x_3464_;
v_isShared_3468_ = v_isSharedCheck_3483_;
goto v_resetjp_3466_;
}
else
{
lean_inc(v_a_3465_);
lean_dec(v___x_3464_);
v___x_3467_ = lean_box(0);
v_isShared_3468_ = v_isSharedCheck_3483_;
goto v_resetjp_3466_;
}
v_resetjp_3466_:
{
lean_object* v_____do__lift_3470_; 
if (lean_obj_tag(v_c_u2083_x3f_3461_) == 1)
{
lean_object* v_val_3479_; lean_object* v___x_3480_; 
v_val_3479_ = lean_ctor_get(v_c_u2083_x3f_3461_, 0);
lean_inc(v_val_3479_);
lean_dec_ref_known(v_c_u2083_x3f_3461_, 1);
v___x_3480_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg(v_val_3479_, v_a_3456_, v_a_3457_);
if (lean_obj_tag(v___x_3480_) == 0)
{
lean_object* v_a_3481_; 
v_a_3481_ = lean_ctor_get(v___x_3480_, 0);
lean_inc(v_a_3481_);
lean_dec_ref_known(v___x_3480_, 1);
v_____do__lift_3470_ = v_a_3481_;
goto v___jp_3469_;
}
else
{
lean_del_object(v___x_3467_);
lean_dec(v_a_3465_);
lean_dec(v_a_3463_);
return v___x_3480_;
}
}
else
{
lean_object* v___x_3482_; 
lean_dec(v_c_u2083_x3f_3461_);
v___x_3482_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__4, &l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__4_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__4);
v_____do__lift_3470_ = v___x_3482_;
goto v___jp_3469_;
}
v___jp_3469_:
{
lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3477_; 
v___x_3471_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__1, &l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__1);
v___x_3472_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3472_, 0, v_a_3463_);
lean_ctor_set(v___x_3472_, 1, v___x_3471_);
v___x_3473_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3473_, 0, v___x_3472_);
lean_ctor_set(v___x_3473_, 1, v_a_3465_);
v___x_3474_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3474_, 0, v___x_3473_);
lean_ctor_set(v___x_3474_, 1, v___x_3471_);
v___x_3475_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3475_, 0, v___x_3474_);
lean_ctor_set(v___x_3475_, 1, v_____do__lift_3470_);
if (v_isShared_3468_ == 0)
{
lean_ctor_set(v___x_3467_, 0, v___x_3475_);
v___x_3477_ = v___x_3467_;
goto v_reusejp_3476_;
}
else
{
lean_object* v_reuseFailAlloc_3478_; 
v_reuseFailAlloc_3478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3478_, 0, v___x_3475_);
v___x_3477_ = v_reuseFailAlloc_3478_;
goto v_reusejp_3476_;
}
v_reusejp_3476_:
{
return v___x_3477_;
}
}
}
}
else
{
lean_dec(v_a_3463_);
lean_dec(v_c_u2083_x3f_3461_);
return v___x_3464_;
}
}
else
{
lean_dec(v_c_u2083_x3f_3461_);
lean_dec_ref(v_c_u2082_3460_);
return v___x_3462_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___boxed(lean_object* v_pred_3484_, lean_object* v_a_3485_, lean_object* v_a_3486_, lean_object* v_a_3487_){
_start:
{
lean_object* v_res_3488_; 
v_res_3488_ = l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg(v_pred_3484_, v_a_3485_, v_a_3486_);
lean_dec_ref(v_a_3486_);
lean_dec(v_a_3485_);
return v_res_3488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp(lean_object* v_pred_3489_, lean_object* v_a_3490_, lean_object* v_a_3491_, lean_object* v_a_3492_, lean_object* v_a_3493_, lean_object* v_a_3494_, lean_object* v_a_3495_, lean_object* v_a_3496_, lean_object* v_a_3497_, lean_object* v_a_3498_, lean_object* v_a_3499_){
_start:
{
lean_object* v___x_3501_; 
v___x_3501_ = l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg(v_pred_3489_, v_a_3490_, v_a_3498_);
return v___x_3501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___boxed(lean_object* v_pred_3502_, lean_object* v_a_3503_, lean_object* v_a_3504_, lean_object* v_a_3505_, lean_object* v_a_3506_, lean_object* v_a_3507_, lean_object* v_a_3508_, lean_object* v_a_3509_, lean_object* v_a_3510_, lean_object* v_a_3511_, lean_object* v_a_3512_, lean_object* v_a_3513_){
_start:
{
lean_object* v_res_3514_; 
v_res_3514_ = l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp(v_pred_3502_, v_a_3503_, v_a_3504_, v_a_3505_, v_a_3506_, v_a_3507_, v_a_3508_, v_a_3509_, v_a_3510_, v_a_3511_, v_a_3512_);
lean_dec(v_a_3512_);
lean_dec_ref(v_a_3511_);
lean_dec(v_a_3510_);
lean_dec_ref(v_a_3509_);
lean_dec(v_a_3508_);
lean_dec_ref(v_a_3507_);
lean_dec(v_a_3506_);
lean_dec_ref(v_a_3505_);
lean_dec(v_a_3504_);
lean_dec(v_a_3503_);
return v_res_3514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_UnsatProof_pp___redArg(lean_object* v_h_3515_, lean_object* v_a_3516_, lean_object* v_a_3517_){
_start:
{
switch(lean_obj_tag(v_h_3515_))
{
case 0:
{
lean_object* v_c_3519_; lean_object* v___x_3520_; 
v_c_3519_ = lean_ctor_get(v_h_3515_, 0);
lean_inc_ref(v_c_3519_);
lean_dec_ref_known(v_h_3515_, 1);
v___x_3520_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg(v_c_3519_, v_a_3516_, v_a_3517_);
return v___x_3520_;
}
case 1:
{
lean_object* v_c_3521_; lean_object* v___x_3522_; 
v_c_3521_ = lean_ctor_get(v_h_3515_, 0);
lean_inc_ref(v_c_3521_);
lean_dec_ref_known(v_h_3515_, 1);
v___x_3522_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_c_3521_, v_a_3516_, v_a_3517_);
return v___x_3522_;
}
case 2:
{
lean_object* v_c_3523_; lean_object* v___x_3524_; 
v_c_3523_ = lean_ctor_get(v_h_3515_, 0);
lean_inc_ref(v_c_3523_);
lean_dec_ref_known(v_h_3515_, 1);
v___x_3524_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(v_c_3523_, v_a_3516_, v_a_3517_);
return v___x_3524_;
}
case 3:
{
lean_object* v_c_3525_; lean_object* v___x_3526_; 
v_c_3525_ = lean_ctor_get(v_h_3515_, 0);
lean_inc_ref(v_c_3525_);
lean_dec_ref_known(v_h_3515_, 1);
v___x_3526_ = l_Lean_Meta_Grind_Arith_Cutsat_DiseqCnstr_pp___redArg(v_c_3525_, v_a_3516_, v_a_3517_);
return v___x_3526_;
}
default: 
{
lean_object* v_c_u2081_3527_; lean_object* v_c_u2082_3528_; lean_object* v_c_u2083_3529_; lean_object* v___x_3530_; 
v_c_u2081_3527_ = lean_ctor_get(v_h_3515_, 0);
lean_inc_ref(v_c_u2081_3527_);
v_c_u2082_3528_ = lean_ctor_get(v_h_3515_, 1);
lean_inc_ref(v_c_u2082_3528_);
v_c_u2083_3529_ = lean_ctor_get(v_h_3515_, 2);
lean_inc_ref(v_c_u2083_3529_);
lean_dec_ref_known(v_h_3515_, 3);
v___x_3530_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_c_u2081_3527_, v_a_3516_, v_a_3517_);
if (lean_obj_tag(v___x_3530_) == 0)
{
lean_object* v_a_3531_; lean_object* v___x_3532_; 
v_a_3531_ = lean_ctor_get(v___x_3530_, 0);
lean_inc(v_a_3531_);
lean_dec_ref_known(v___x_3530_, 1);
v___x_3532_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_c_u2082_3528_, v_a_3516_, v_a_3517_);
if (lean_obj_tag(v___x_3532_) == 0)
{
lean_object* v_a_3533_; lean_object* v___x_3534_; 
v_a_3533_ = lean_ctor_get(v___x_3532_, 0);
lean_inc(v_a_3533_);
lean_dec_ref_known(v___x_3532_, 1);
v___x_3534_ = l_Lean_Meta_Grind_Arith_Cutsat_DvdCnstr_pp___redArg(v_c_u2083_3529_, v_a_3516_, v_a_3517_);
if (lean_obj_tag(v___x_3534_) == 0)
{
lean_object* v_a_3535_; lean_object* v___x_3537_; uint8_t v_isShared_3538_; uint8_t v_isSharedCheck_3547_; 
v_a_3535_ = lean_ctor_get(v___x_3534_, 0);
v_isSharedCheck_3547_ = !lean_is_exclusive(v___x_3534_);
if (v_isSharedCheck_3547_ == 0)
{
v___x_3537_ = v___x_3534_;
v_isShared_3538_ = v_isSharedCheck_3547_;
goto v_resetjp_3536_;
}
else
{
lean_inc(v_a_3535_);
lean_dec(v___x_3534_);
v___x_3537_ = lean_box(0);
v_isShared_3538_ = v_isSharedCheck_3547_;
goto v_resetjp_3536_;
}
v_resetjp_3536_:
{
lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3545_; 
v___x_3539_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__1, &l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_CooperSplitPred_pp___redArg___closed__1);
v___x_3540_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3540_, 0, v_a_3531_);
lean_ctor_set(v___x_3540_, 1, v___x_3539_);
v___x_3541_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3541_, 0, v___x_3540_);
lean_ctor_set(v___x_3541_, 1, v_a_3533_);
v___x_3542_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3542_, 0, v___x_3541_);
lean_ctor_set(v___x_3542_, 1, v___x_3539_);
v___x_3543_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3543_, 0, v___x_3542_);
lean_ctor_set(v___x_3543_, 1, v_a_3535_);
if (v_isShared_3538_ == 0)
{
lean_ctor_set(v___x_3537_, 0, v___x_3543_);
v___x_3545_ = v___x_3537_;
goto v_reusejp_3544_;
}
else
{
lean_object* v_reuseFailAlloc_3546_; 
v_reuseFailAlloc_3546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3546_, 0, v___x_3543_);
v___x_3545_ = v_reuseFailAlloc_3546_;
goto v_reusejp_3544_;
}
v_reusejp_3544_:
{
return v___x_3545_;
}
}
}
else
{
lean_dec(v_a_3533_);
lean_dec(v_a_3531_);
return v___x_3534_;
}
}
else
{
lean_dec(v_a_3531_);
lean_dec_ref(v_c_u2083_3529_);
return v___x_3532_;
}
}
else
{
lean_dec_ref(v_c_u2083_3529_);
lean_dec_ref(v_c_u2082_3528_);
return v___x_3530_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_UnsatProof_pp___redArg___boxed(lean_object* v_h_3548_, lean_object* v_a_3549_, lean_object* v_a_3550_, lean_object* v_a_3551_){
_start:
{
lean_object* v_res_3552_; 
v_res_3552_ = l_Lean_Meta_Grind_Arith_Cutsat_UnsatProof_pp___redArg(v_h_3548_, v_a_3549_, v_a_3550_);
lean_dec_ref(v_a_3550_);
lean_dec(v_a_3549_);
return v_res_3552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_UnsatProof_pp(lean_object* v_h_3553_, lean_object* v_a_3554_, lean_object* v_a_3555_, lean_object* v_a_3556_, lean_object* v_a_3557_, lean_object* v_a_3558_, lean_object* v_a_3559_, lean_object* v_a_3560_, lean_object* v_a_3561_, lean_object* v_a_3562_, lean_object* v_a_3563_){
_start:
{
lean_object* v___x_3565_; 
v___x_3565_ = l_Lean_Meta_Grind_Arith_Cutsat_UnsatProof_pp___redArg(v_h_3553_, v_a_3554_, v_a_3562_);
return v___x_3565_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_UnsatProof_pp___boxed(lean_object* v_h_3566_, lean_object* v_a_3567_, lean_object* v_a_3568_, lean_object* v_a_3569_, lean_object* v_a_3570_, lean_object* v_a_3571_, lean_object* v_a_3572_, lean_object* v_a_3573_, lean_object* v_a_3574_, lean_object* v_a_3575_, lean_object* v_a_3576_, lean_object* v_a_3577_){
_start:
{
lean_object* v_res_3578_; 
v_res_3578_ = l_Lean_Meta_Grind_Arith_Cutsat_UnsatProof_pp(v_h_3566_, v_a_3567_, v_a_3568_, v_a_3569_, v_a_3570_, v_a_3571_, v_a_3572_, v_a_3573_, v_a_3574_, v_a_3575_, v_a_3576_);
lean_dec(v_a_3576_);
lean_dec_ref(v_a_3575_);
lean_dec(v_a_3574_);
lean_dec_ref(v_a_3573_);
lean_dec(v_a_3572_);
lean_dec_ref(v_a_3571_);
lean_dec(v_a_3570_);
lean_dec_ref(v_a_3569_);
lean_dec(v_a_3568_);
lean_dec(v_a_3567_);
return v_res_3578_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Arith_Int_Simp(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Arith_Int_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Arith_Int_Simp(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Arith_Int_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(builtin);
}
#ifdef __cplusplus
}
#endif
