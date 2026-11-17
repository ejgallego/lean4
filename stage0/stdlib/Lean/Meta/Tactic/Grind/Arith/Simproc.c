// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.Simproc
// Imports: public import Init.Grind.Ring.Basic public import Init.Simproc public import Lean.Meta.Tactic.Grind.SynthInstance public import Init.Simproc public import Lean.Meta.Tactic.Simp.BuiltinSimprocs.Util import Lean.Meta.LitValues import Init.Grind.Ring.Field import Lean.Meta.DecLevel import Lean.Meta.Tactic.Grind.Arith.FieldNormNum import Lean.Util.SafeExponentiation
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
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
extern lean_object* l_Lean_Nat_mkInstHMul;
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_registerBuiltinDSimproc(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_getIntValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIntLit(lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_synthInstanceMeta_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* l_Lean_Meta_mkNumeral(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_eagerReflBoolTrue;
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Int_mkInstHPow;
extern lean_object* l_Lean_Nat_mkInstMod;
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Nat_mkInstHPow;
lean_object* l_Lean_Meta_getRatValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_checkExponent(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Rat_zpow(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instToExprRat_mkInt(lean_object*);
lean_object* l_Lean_Meta_getNatValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
extern lean_object* l_Lean_Nat_mkInstHAdd;
lean_object* l_Lean_Meta_Simp_registerBuiltinSimproc(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Nat_mkInstHSub;
extern lean_object* l_Lean_Int_mkInstNatCast;
lean_object* l_Lean_Meta_Grind_Arith_normFieldExpr_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_checkWithKernel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Int_mkInstHSub;
lean_object* l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_getDecLevel_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Int_mkInstMod;
lean_object* l_Lean_Meta_Simp_addSimprocBuiltinAttr(lean_object*, uint8_t, lean_object*);
extern lean_object* l_Lean_Int_mkInstHMul;
extern lean_object* l_Lean_Nat_mkInstHDiv;
extern lean_object* l_Lean_Int_mkInstHAdd;
extern lean_object* l_Lean_Int_mkInstHDiv;
extern lean_object* l_Lean_Int_mkInstNeg;
lean_object* l_Lean_Meta_Simp_Simprocs_add(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Semiring"};
static const lean_object* l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__2_value),LEAN_SCALAR_PTR_LITERAL(246, 150, 10, 46, 185, 54, 59, 167)}};
static const lean_object* l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_mkSemiringThm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_mkSemiringThm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HPow"};
static const lean_object* l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hPow"};
static const lean_object* l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(155, 188, 136, 200, 106, 253, 76, 178)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(32, 63, 208, 57, 56, 184, 164, 144)}};
static const lean_object* l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__5_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "pow_one"};
static const lean_object* l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__7_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__2_value),LEAN_SCALAR_PTR_LITERAL(246, 150, 10, 46, 185, 54, 59, 167)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__7_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(183, 227, 218, 115, 211, 240, 122, 5)}};
static const lean_object* l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__7_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "pow_zero"};
static const lean_object* l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__9_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__9_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__2_value),LEAN_SCALAR_PTR_LITERAL(246, 150, 10, 46, 185, 54, 59, 167)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__9_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(4, 74, 208, 157, 226, 191, 93, 93)}};
static const lean_object* l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_expandPow01___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_expandPow01___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_expandPow01(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_expandPow01___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Arith"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "expandPow01"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(24, 253, 215, 57, 236, 94, 225, 62)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(201, 179, 244, 162, 138, 60, 144, 37)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__3_value),((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__5_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__5_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__5_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__1(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__2_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "BitVec"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__4_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "UInt8"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__6_value),LEAN_SCALAR_PTR_LITERAL(144, 254, 64, 72, 7, 99, 197, 218)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt16"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__8_value),LEAN_SCALAR_PTR_LITERAL(6, 214, 154, 233, 192, 74, 99, 135)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt32"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__10_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__10_value),LEAN_SCALAR_PTR_LITERAL(98, 192, 58, 241, 186, 14, 255, 186)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__11_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Int64"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__12_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__12_value),LEAN_SCALAR_PTR_LITERAL(67, 100, 38, 50, 157, 43, 83, 90)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__13_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Int8"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__14_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__14_value),LEAN_SCALAR_PTR_LITERAL(17, 171, 155, 218, 43, 77, 1, 67)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__15 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__15_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Int16"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__16 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__16_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__16_value),LEAN_SCALAR_PTR_LITERAL(61, 121, 89, 120, 57, 100, 28, 22)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__17 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__17_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Int32"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__18 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__18_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__18_value),LEAN_SCALAR_PTR_LITERAL(202, 24, 245, 188, 10, 96, 206, 241)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__19 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__19_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__13_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__20 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__20_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__19_value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__20_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__21 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__21_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__17_value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__21_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__22 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__22_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__15_value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__22_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__23 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__23_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__13_value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__23_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__24 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__24_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__11_value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__24_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__25 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__25_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__9_value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__25_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__26 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__26_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__7_value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__26_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__27 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__27_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__5_value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__27_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__28 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__28_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__3_value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__28_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__29 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__29_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__5_value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__29_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__30 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__30_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__31;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNotFieldQuick_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNotFieldQuick_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNotFieldQuick(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNotFieldQuick___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNotFieldQuick_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNotFieldQuick_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HDiv"};
static const lean_object* l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hDiv"};
static const lean_object* l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(74, 223, 78, 88, 255, 236, 144, 164)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(26, 183, 188, 240, 156, 118, 170, 84)}};
static const lean_object* l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Field"};
static const lean_object* l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 164, 44, 189, 207, 226, 143, 119)}};
static const lean_object* l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__4_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMul"};
static const lean_object* l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_object* l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__6_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Inv"};
static const lean_object* l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(142, 68, 231, 210, 96, 163, 154, 19)}};
static const lean_object* l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__8_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMul"};
static const lean_object* l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__10_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__9_value),LEAN_SCALAR_PTR_LITERAL(248, 227, 200, 215, 229, 255, 92, 22)}};
static const lean_object* l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__10_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inv"};
static const lean_object* l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__11_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(142, 68, 231, 210, 96, 163, 154, 19)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__12_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(63, 31, 248, 222, 13, 64, 40, 141)}};
static const lean_object* l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__12_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "div_eq_mul_inv"};
static const lean_object* l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__13 = (const lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__13_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__14_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__14_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 164, 44, 189, 207, 226, 143, 119)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__14_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__13_value),LEAN_SCALAR_PTR_LITERAL(208, 224, 76, 65, 203, 155, 96, 132)}};
static const lean_object* l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__14 = (const lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__14_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_expandDiv___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_expandDiv___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_expandDiv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_expandDiv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "expandDiv"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(24, 253, 215, 57, 236, 94, 225, 62)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14__value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(225, 81, 86, 58, 101, 231, 88, 65)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__2_value),((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14____boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "NatCast"};
static const lean_object* l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "natCast"};
static const lean_object* l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(65, 128, 63, 191, 243, 154, 52, 80)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(47, 224, 192, 179, 253, 143, 7, 98)}};
static const lean_object* l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normFieldInv___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normFieldInv___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normFieldInv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normFieldInv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "normFieldInv"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(24, 253, 215, 57, 236, 94, 225, 62)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13__value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13__value),LEAN_SCALAR_PTR_LITERAL(197, 75, 95, 59, 4, 97, 183, 114)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__12_value),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_Arith_normInst_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_Arith_normInst_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Grind_Arith_normInst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_Arith_normInst___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_normInst___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_normInst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_normInst___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_Arith_normInst_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_Arith_normInst_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatAddInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatAddInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "normNatAddInst"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(24, 253, 215, 57, 236, 94, 225, 62)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(211, 120, 231, 1, 167, 84, 71, 216)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAdd"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAdd"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(134, 172, 115, 219, 189, 252, 56, 148)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__5_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value),((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__5_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__5_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__7_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__5_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__7_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__7_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatMulInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatMulInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "normNatMulInst"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(24, 253, 215, 57, 236, 94, 225, 62)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17__value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(224, 246, 88, 229, 50, 28, 209, 189)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__10_value),((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatSubInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatSubInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "normNatSubInst"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(24, 253, 215, 57, 236, 94, 225, 62)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17__value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(106, 32, 97, 71, 86, 23, 252, 157)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HSub"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hSub"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(121, 130, 45, 212, 110, 237, 236, 233)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(231, 253, 204, 163, 168, 77, 27, 58)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__5_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17__value),((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__5_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__5_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__5_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatDivInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatDivInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatDivInst_declare__48___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3299992319____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "normNatDivInst"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatDivInst_declare__48___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3299992319____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatDivInst_declare__48___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3299992319____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatDivInst_declare__48___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3299992319____hygCtx___hyg_17__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatDivInst_declare__48___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3299992319____hygCtx___hyg_17__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatDivInst_declare__48___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3299992319____hygCtx___hyg_17__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatDivInst_declare__48___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3299992319____hygCtx___hyg_17__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatDivInst_declare__48___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3299992319____hygCtx___hyg_17__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatDivInst_declare__48___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3299992319____hygCtx___hyg_17__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatDivInst_declare__48___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3299992319____hygCtx___hyg_17__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(24, 253, 215, 57, 236, 94, 225, 62)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatDivInst_declare__48___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3299992319____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatDivInst_declare__48___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3299992319____hygCtx___hyg_17__value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatDivInst_declare__48___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3299992319____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(116, 44, 37, 246, 242, 49, 114, 70)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatDivInst_declare__48___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3299992319____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatDivInst_declare__48___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3299992319____hygCtx___hyg_17__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatDivInst_declare__48___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3299992319____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatDivInst_declare__48___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3299992319____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatDivInst_declare__48___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3299992319____hygCtx___hyg_17__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatDivInst_declare__48_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3299992319____hygCtx___hyg_17_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatDivInst_declare__48_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3299992319____hygCtx___hyg_17____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatModInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatModInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "normNatModInst"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(24, 253, 215, 57, 236, 94, 225, 62)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17__value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(133, 250, 163, 150, 152, 47, 196, 182)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMod"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMod"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(93, 4, 3, 35, 188, 254, 191, 190)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(120, 199, 142, 238, 9, 44, 94, 134)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__5_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17__value),((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__5_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__5_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__5_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatPowInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatPowInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatPowInst_declare__58___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4112346720____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "normNatPowInst"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatPowInst_declare__58___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4112346720____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatPowInst_declare__58___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4112346720____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatPowInst_declare__58___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4112346720____hygCtx___hyg_17__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatPowInst_declare__58___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4112346720____hygCtx___hyg_17__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatPowInst_declare__58___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4112346720____hygCtx___hyg_17__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatPowInst_declare__58___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4112346720____hygCtx___hyg_17__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatPowInst_declare__58___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4112346720____hygCtx___hyg_17__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatPowInst_declare__58___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4112346720____hygCtx___hyg_17__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatPowInst_declare__58___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4112346720____hygCtx___hyg_17__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(24, 253, 215, 57, 236, 94, 225, 62)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatPowInst_declare__58___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4112346720____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatPowInst_declare__58___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4112346720____hygCtx___hyg_17__value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatPowInst_declare__58___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4112346720____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(177, 239, 110, 238, 215, 59, 226, 215)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatPowInst_declare__58___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4112346720____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatPowInst_declare__58___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4112346720____hygCtx___hyg_17__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatPowInst_declare__58___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4112346720____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatPowInst_declare__58___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4112346720____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatPowInst_declare__58___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4112346720____hygCtx___hyg_17__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatPowInst_declare__58_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4112346720____hygCtx___hyg_17_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatPowInst_declare__58_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4112346720____hygCtx___hyg_17____boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNormNatNum___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "instOfNatNat"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNormNatNum___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNormNatNum___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNormNatNum___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNormNatNum___closed__0_value),LEAN_SCALAR_PTR_LITERAL(217, 8, 172, 44, 179, 254, 147, 95)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNormNatNum___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNormNatNum___closed__1_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNormNatNum(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNormNatNum___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatOfNatInst___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatOfNatInst___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatOfNatInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatOfNatInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "normNatOfNatInst"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(24, 253, 215, 57, 236, 94, 225, 62)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14__value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(163, 101, 184, 38, 38, 74, 113, 159)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__2_value),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntNegInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntNegInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "normIntNegInst"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(24, 253, 215, 57, 236, 94, 225, 62)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value),LEAN_SCALAR_PTR_LITERAL(190, 31, 98, 41, 219, 148, 19, 112)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Neg"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "neg"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value),LEAN_SCALAR_PTR_LITERAL(105, 26, 70, 221, 245, 238, 127, 238)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__5_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__5_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__5_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__7_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__5_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__7_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__7_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntAddInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntAddInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntAddInst_declare__76___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3522364415____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "normIntAddInst"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntAddInst_declare__76___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3522364415____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntAddInst_declare__76___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3522364415____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntAddInst_declare__76___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3522364415____hygCtx___hyg_17__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntAddInst_declare__76___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3522364415____hygCtx___hyg_17__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntAddInst_declare__76___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3522364415____hygCtx___hyg_17__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntAddInst_declare__76___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3522364415____hygCtx___hyg_17__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntAddInst_declare__76___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3522364415____hygCtx___hyg_17__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntAddInst_declare__76___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3522364415____hygCtx___hyg_17__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntAddInst_declare__76___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3522364415____hygCtx___hyg_17__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(24, 253, 215, 57, 236, 94, 225, 62)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntAddInst_declare__76___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3522364415____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntAddInst_declare__76___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3522364415____hygCtx___hyg_17__value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntAddInst_declare__76___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3522364415____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(47, 25, 51, 155, 80, 65, 161, 29)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntAddInst_declare__76___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3522364415____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntAddInst_declare__76___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3522364415____hygCtx___hyg_17__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntAddInst_declare__76___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3522364415____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__5_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntAddInst_declare__76___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3522364415____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntAddInst_declare__76___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3522364415____hygCtx___hyg_17__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntAddInst_declare__76_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3522364415____hygCtx___hyg_17_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntAddInst_declare__76_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3522364415____hygCtx___hyg_17____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntMulInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntMulInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntMulInst_declare__81___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3205577538____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "normIntMulInst"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntMulInst_declare__81___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3205577538____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntMulInst_declare__81___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3205577538____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntMulInst_declare__81___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3205577538____hygCtx___hyg_17__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntMulInst_declare__81___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3205577538____hygCtx___hyg_17__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntMulInst_declare__81___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3205577538____hygCtx___hyg_17__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntMulInst_declare__81___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3205577538____hygCtx___hyg_17__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntMulInst_declare__81___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3205577538____hygCtx___hyg_17__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntMulInst_declare__81___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3205577538____hygCtx___hyg_17__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntMulInst_declare__81___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3205577538____hygCtx___hyg_17__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(24, 253, 215, 57, 236, 94, 225, 62)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntMulInst_declare__81___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3205577538____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntMulInst_declare__81___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3205577538____hygCtx___hyg_17__value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntMulInst_declare__81___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3205577538____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(170, 202, 143, 124, 209, 33, 163, 68)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntMulInst_declare__81___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3205577538____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntMulInst_declare__81___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3205577538____hygCtx___hyg_17__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntMulInst_declare__81___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3205577538____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntMulInst_declare__81___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3205577538____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntMulInst_declare__81___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3205577538____hygCtx___hyg_17__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntMulInst_declare__81_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3205577538____hygCtx___hyg_17_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntMulInst_declare__81_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3205577538____hygCtx___hyg_17____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntSubInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntSubInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntSubInst_declare__86___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3607485820____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "normIntSubInst"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntSubInst_declare__86___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3607485820____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntSubInst_declare__86___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3607485820____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntSubInst_declare__86___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3607485820____hygCtx___hyg_17__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntSubInst_declare__86___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3607485820____hygCtx___hyg_17__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntSubInst_declare__86___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3607485820____hygCtx___hyg_17__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntSubInst_declare__86___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3607485820____hygCtx___hyg_17__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntSubInst_declare__86___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3607485820____hygCtx___hyg_17__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntSubInst_declare__86___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3607485820____hygCtx___hyg_17__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntSubInst_declare__86___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3607485820____hygCtx___hyg_17__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(24, 253, 215, 57, 236, 94, 225, 62)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntSubInst_declare__86___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3607485820____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntSubInst_declare__86___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3607485820____hygCtx___hyg_17__value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntSubInst_declare__86___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3607485820____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(166, 88, 178, 232, 62, 9, 98, 113)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntSubInst_declare__86___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3607485820____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntSubInst_declare__86___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3607485820____hygCtx___hyg_17__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntSubInst_declare__86___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3607485820____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__5_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntSubInst_declare__86___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3607485820____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntSubInst_declare__86___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3607485820____hygCtx___hyg_17__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntSubInst_declare__86_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3607485820____hygCtx___hyg_17_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntSubInst_declare__86_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3607485820____hygCtx___hyg_17____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntDivInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntDivInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntDivInst_declare__91___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4859482____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "normIntDivInst"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntDivInst_declare__91___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4859482____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntDivInst_declare__91___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4859482____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntDivInst_declare__91___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4859482____hygCtx___hyg_17__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntDivInst_declare__91___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4859482____hygCtx___hyg_17__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntDivInst_declare__91___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4859482____hygCtx___hyg_17__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntDivInst_declare__91___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4859482____hygCtx___hyg_17__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntDivInst_declare__91___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4859482____hygCtx___hyg_17__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntDivInst_declare__91___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4859482____hygCtx___hyg_17__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntDivInst_declare__91___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4859482____hygCtx___hyg_17__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(24, 253, 215, 57, 236, 94, 225, 62)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntDivInst_declare__91___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4859482____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntDivInst_declare__91___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4859482____hygCtx___hyg_17__value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntDivInst_declare__91___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4859482____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(126, 35, 105, 46, 171, 32, 17, 108)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntDivInst_declare__91___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4859482____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntDivInst_declare__91___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4859482____hygCtx___hyg_17__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntDivInst_declare__91___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4859482____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntDivInst_declare__91___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4859482____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntDivInst_declare__91___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4859482____hygCtx___hyg_17__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntDivInst_declare__91_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4859482____hygCtx___hyg_17_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntDivInst_declare__91_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4859482____hygCtx___hyg_17____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntModInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntModInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntModInst_declare__96___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_807206037____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "normIntModInst"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntModInst_declare__96___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_807206037____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntModInst_declare__96___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_807206037____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntModInst_declare__96___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_807206037____hygCtx___hyg_17__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntModInst_declare__96___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_807206037____hygCtx___hyg_17__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntModInst_declare__96___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_807206037____hygCtx___hyg_17__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntModInst_declare__96___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_807206037____hygCtx___hyg_17__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntModInst_declare__96___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_807206037____hygCtx___hyg_17__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntModInst_declare__96___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_807206037____hygCtx___hyg_17__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntModInst_declare__96___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_807206037____hygCtx___hyg_17__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(24, 253, 215, 57, 236, 94, 225, 62)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntModInst_declare__96___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_807206037____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntModInst_declare__96___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_807206037____hygCtx___hyg_17__value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntModInst_declare__96___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_807206037____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(169, 196, 71, 99, 126, 113, 154, 162)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntModInst_declare__96___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_807206037____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntModInst_declare__96___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_807206037____hygCtx___hyg_17__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntModInst_declare__96___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_807206037____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__5_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntModInst_declare__96___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_807206037____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntModInst_declare__96___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_807206037____hygCtx___hyg_17__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntModInst_declare__96_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_807206037____hygCtx___hyg_17_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntModInst_declare__96_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_807206037____hygCtx___hyg_17____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntPowInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntPowInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntPowInst_declare__101___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1870397832____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "normIntPowInst"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntPowInst_declare__101___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1870397832____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntPowInst_declare__101___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1870397832____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntPowInst_declare__101___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1870397832____hygCtx___hyg_17__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntPowInst_declare__101___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1870397832____hygCtx___hyg_17__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntPowInst_declare__101___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1870397832____hygCtx___hyg_17__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntPowInst_declare__101___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1870397832____hygCtx___hyg_17__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntPowInst_declare__101___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1870397832____hygCtx___hyg_17__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntPowInst_declare__101___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1870397832____hygCtx___hyg_17__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntPowInst_declare__101___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1870397832____hygCtx___hyg_17__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(24, 253, 215, 57, 236, 94, 225, 62)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntPowInst_declare__101___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1870397832____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntPowInst_declare__101___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1870397832____hygCtx___hyg_17__value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntPowInst_declare__101___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1870397832____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(203, 53, 215, 151, 196, 44, 115, 189)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntPowInst_declare__101___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1870397832____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntPowInst_declare__101___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1870397832____hygCtx___hyg_17__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntPowInst_declare__101___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1870397832____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntPowInst_declare__101___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1870397832____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntPowInst_declare__101___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1870397832____hygCtx___hyg_17__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntPowInst_declare__101_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1870397832____hygCtx___hyg_17_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntPowInst_declare__101_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1870397832____hygCtx___hyg_17____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatCastInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatCastInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "normNatCastInst"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(24, 253, 215, 57, 236, 94, 225, 62)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14__value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(238, 75, 190, 220, 87, 37, 55, 194)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__5_value),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14____boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNormIntNum___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "instOfNat"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNormIntNum___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNormIntNum___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNormIntNum___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNormIntNum___closed__0_value),LEAN_SCALAR_PTR_LITERAL(29, 68, 253, 199, 38, 151, 242, 146)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNormIntNum___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNormIntNum___closed__1_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNormIntNum(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNormIntNum___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntOfNatInst___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntOfNatInst___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntOfNatInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntOfNatInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntOfNatInst_declare__114___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_906398933____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "normIntOfNatInst"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntOfNatInst_declare__114___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_906398933____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntOfNatInst_declare__114___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_906398933____hygCtx___hyg_14__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntOfNatInst_declare__114___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_906398933____hygCtx___hyg_14__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntOfNatInst_declare__114___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_906398933____hygCtx___hyg_14__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntOfNatInst_declare__114___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_906398933____hygCtx___hyg_14__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntOfNatInst_declare__114___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_906398933____hygCtx___hyg_14__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntOfNatInst_declare__114___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_906398933____hygCtx___hyg_14__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntOfNatInst_declare__114___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_906398933____hygCtx___hyg_14__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntOfNatInst_declare__114___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_906398933____hygCtx___hyg_14__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(24, 253, 215, 57, 236, 94, 225, 62)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntOfNatInst_declare__114___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_906398933____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntOfNatInst_declare__114___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_906398933____hygCtx___hyg_14__value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntOfNatInst_declare__114___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_906398933____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(0, 210, 82, 153, 11, 211, 109, 13)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntOfNatInst_declare__114___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_906398933____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntOfNatInst_declare__114___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_906398933____hygCtx___hyg_14__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntOfNatInst_declare__114___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_906398933____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntOfNatInst_declare__114___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_906398933____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntOfNatInst_declare__114___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_906398933____hygCtx___hyg_14__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntOfNatInst_declare__114_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_906398933____hygCtx___hyg_14_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntOfNatInst_declare__114_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_906398933____hygCtx___hyg_14____boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_normNatCastNum___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "natCast_eq_ofNat"};
static const lean_object* l_Lean_Meta_Grind_Arith_normNatCastNum___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_normNatCastNum___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_normNatCastNum___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_normNatCastNum___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_normNatCastNum___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_normNatCastNum___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_normNatCastNum___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__2_value),LEAN_SCALAR_PTR_LITERAL(246, 150, 10, 46, 185, 54, 59, 167)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_normNatCastNum___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_normNatCastNum___redArg___closed__1_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_normNatCastNum___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(92, 206, 147, 184, 29, 48, 44, 145)}};
static const lean_object* l_Lean_Meta_Grind_Arith_normNatCastNum___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_normNatCastNum___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatCastNum___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatCastNum___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatCastNum(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatCastNum___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastNum_declare__119___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3624952232____hygCtx___hyg_11__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "normNatCastNum"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastNum_declare__119___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3624952232____hygCtx___hyg_11_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastNum_declare__119___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3624952232____hygCtx___hyg_11__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastNum_declare__119___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3624952232____hygCtx___hyg_11__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastNum_declare__119___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3624952232____hygCtx___hyg_11__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastNum_declare__119___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3624952232____hygCtx___hyg_11__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastNum_declare__119___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3624952232____hygCtx___hyg_11__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastNum_declare__119___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3624952232____hygCtx___hyg_11__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastNum_declare__119___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3624952232____hygCtx___hyg_11__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastNum_declare__119___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3624952232____hygCtx___hyg_11__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(24, 253, 215, 57, 236, 94, 225, 62)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastNum_declare__119___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3624952232____hygCtx___hyg_11__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastNum_declare__119___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3624952232____hygCtx___hyg_11__value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastNum_declare__119___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3624952232____hygCtx___hyg_11__value),LEAN_SCALAR_PTR_LITERAL(27, 27, 213, 168, 224, 139, 106, 67)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastNum_declare__119___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3624952232____hygCtx___hyg_11_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastNum_declare__119___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3624952232____hygCtx___hyg_11__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastNum_declare__119___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3624952232____hygCtx___hyg_11__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastNum_declare__119___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3624952232____hygCtx___hyg_11_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastNum_declare__119___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3624952232____hygCtx___hyg_11__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastNum_declare__119_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3624952232____hygCtx___hyg_11_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastNum_declare__119_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3624952232____hygCtx___hyg_11____boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "IntCast"};
static const lean_object* l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "intCast"};
static const lean_object* l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(63, 186, 193, 83, 149, 255, 18, 69)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(190, 203, 124, 26, 63, 107, 241, 61)}};
static const lean_object* l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Ring"};
static const lean_object* l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(196, 225, 111, 69, 82, 38, 249, 149)}};
static const lean_object* l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__5;
static const lean_string_object l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "intCast_eq_ofNat_of_nonneg"};
static const lean_object* l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__7_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(196, 225, 111, 69, 82, 38, 249, 149)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__7_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(237, 135, 58, 41, 218, 150, 4, 199)}};
static const lean_object* l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_object* l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__8_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "intCast_eq_ofNat_of_nonpos"};
static const lean_object* l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__10_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__10_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(196, 225, 111, 69, 82, 38, 249, 149)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__10_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__9_value),LEAN_SCALAR_PTR_LITERAL(163, 25, 181, 245, 104, 42, 165, 107)}};
static const lean_object* l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntCastNum___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntCastNum(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntCastNum___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "normIntCastNum"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(24, 253, 215, 57, 236, 94, 225, 62)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11__value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11__value),LEAN_SCALAR_PTR_LITERAL(235, 35, 143, 36, 16, 95, 82, 222)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__2_value),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Meta_Grind_Arith_normPowRatInt_spec__0(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__4;
static const lean_string_object l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Rat"};
static const lean_object* l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(231, 55, 105, 214, 206, 30, 120, 51)}};
static const lean_object* l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__7;
static const lean_string_object l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instHDiv"};
static const lean_object* l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(34, 70, 113, 198, 157, 211, 131, 18)}};
static const lean_object* l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__9_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__10;
static const lean_string_object l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "instDiv"};
static const lean_object* l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__11_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(231, 55, 105, 214, 206, 30, 120, 51)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__12_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(136, 163, 206, 229, 214, 76, 207, 233)}};
static const lean_object* l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__12_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__13;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__14;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normPowRatInt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normPowRatInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normPowRatInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "normPowRatInt"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(24, 253, 215, 57, 236, 94, 225, 62)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24__value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24__value),LEAN_SCALAR_PTR_LITERAL(111, 67, 13, 143, 70, 185, 206, 118)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 246}, .m_size = 7, .m_capacity = 7, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_normPowRatInt___regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_26__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_normPowRatInt___regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_26_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_normPowRatInt___regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_normPowRatInt___regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_26____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_normPowRatInt___regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_28_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_normPowRatInt___regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_28____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_addSimproc(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_addSimproc___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_mkSemiringThm(lean_object* v_declName_8_, lean_object* v_00_u03b1_9_, lean_object* v_a_10_, lean_object* v_a_11_, lean_object* v_a_12_, lean_object* v_a_13_){
_start:
{
lean_object* v___x_15_; 
lean_inc_ref(v_00_u03b1_9_);
v___x_15_ = l_Lean_Meta_getDecLevel_x3f(v_00_u03b1_9_, v_a_10_, v_a_11_, v_a_12_, v_a_13_);
if (lean_obj_tag(v___x_15_) == 0)
{
lean_object* v_a_16_; lean_object* v___x_18_; uint8_t v_isShared_19_; uint8_t v_isSharedCheck_53_; 
v_a_16_ = lean_ctor_get(v___x_15_, 0);
v_isSharedCheck_53_ = !lean_is_exclusive(v___x_15_);
if (v_isSharedCheck_53_ == 0)
{
v___x_18_ = v___x_15_;
v_isShared_19_ = v_isSharedCheck_53_;
goto v_resetjp_17_;
}
else
{
lean_inc(v_a_16_);
lean_dec(v___x_15_);
v___x_18_ = lean_box(0);
v_isShared_19_ = v_isSharedCheck_53_;
goto v_resetjp_17_;
}
v_resetjp_17_:
{
if (lean_obj_tag(v_a_16_) == 1)
{
lean_object* v_val_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
lean_del_object(v___x_18_);
v_val_20_ = lean_ctor_get(v_a_16_, 0);
lean_inc(v_val_20_);
lean_dec_ref_known(v_a_16_, 1);
v___x_21_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__3));
v___x_22_ = lean_box(0);
v___x_23_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_23_, 0, v_val_20_);
lean_ctor_set(v___x_23_, 1, v___x_22_);
lean_inc_ref(v___x_23_);
v___x_24_ = l_Lean_mkConst(v___x_21_, v___x_23_);
lean_inc_ref(v_00_u03b1_9_);
v___x_25_ = l_Lean_Expr_app___override(v___x_24_, v_00_u03b1_9_);
v___x_26_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v___x_25_, v_a_10_, v_a_11_, v_a_12_, v_a_13_);
if (lean_obj_tag(v___x_26_) == 0)
{
lean_object* v_a_27_; lean_object* v___x_29_; uint8_t v_isShared_30_; uint8_t v_isSharedCheck_48_; 
v_a_27_ = lean_ctor_get(v___x_26_, 0);
v_isSharedCheck_48_ = !lean_is_exclusive(v___x_26_);
if (v_isSharedCheck_48_ == 0)
{
v___x_29_ = v___x_26_;
v_isShared_30_ = v_isSharedCheck_48_;
goto v_resetjp_28_;
}
else
{
lean_inc(v_a_27_);
lean_dec(v___x_26_);
v___x_29_ = lean_box(0);
v_isShared_30_ = v_isSharedCheck_48_;
goto v_resetjp_28_;
}
v_resetjp_28_:
{
if (lean_obj_tag(v_a_27_) == 1)
{
lean_object* v_val_31_; lean_object* v___x_33_; uint8_t v_isShared_34_; uint8_t v_isSharedCheck_43_; 
v_val_31_ = lean_ctor_get(v_a_27_, 0);
v_isSharedCheck_43_ = !lean_is_exclusive(v_a_27_);
if (v_isSharedCheck_43_ == 0)
{
v___x_33_ = v_a_27_;
v_isShared_34_ = v_isSharedCheck_43_;
goto v_resetjp_32_;
}
else
{
lean_inc(v_val_31_);
lean_dec(v_a_27_);
v___x_33_ = lean_box(0);
v_isShared_34_ = v_isSharedCheck_43_;
goto v_resetjp_32_;
}
v_resetjp_32_:
{
lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_38_; 
v___x_35_ = l_Lean_mkConst(v_declName_8_, v___x_23_);
v___x_36_ = l_Lean_mkAppB(v___x_35_, v_00_u03b1_9_, v_val_31_);
if (v_isShared_34_ == 0)
{
lean_ctor_set(v___x_33_, 0, v___x_36_);
v___x_38_ = v___x_33_;
goto v_reusejp_37_;
}
else
{
lean_object* v_reuseFailAlloc_42_; 
v_reuseFailAlloc_42_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_42_, 0, v___x_36_);
v___x_38_ = v_reuseFailAlloc_42_;
goto v_reusejp_37_;
}
v_reusejp_37_:
{
lean_object* v___x_40_; 
if (v_isShared_30_ == 0)
{
lean_ctor_set(v___x_29_, 0, v___x_38_);
v___x_40_ = v___x_29_;
goto v_reusejp_39_;
}
else
{
lean_object* v_reuseFailAlloc_41_; 
v_reuseFailAlloc_41_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v___x_44_; lean_object* v___x_46_; 
lean_dec(v_a_27_);
lean_dec_ref_known(v___x_23_, 2);
lean_dec_ref(v_00_u03b1_9_);
lean_dec(v_declName_8_);
v___x_44_ = lean_box(0);
if (v_isShared_30_ == 0)
{
lean_ctor_set(v___x_29_, 0, v___x_44_);
v___x_46_ = v___x_29_;
goto v_reusejp_45_;
}
else
{
lean_object* v_reuseFailAlloc_47_; 
v_reuseFailAlloc_47_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_47_, 0, v___x_44_);
v___x_46_ = v_reuseFailAlloc_47_;
goto v_reusejp_45_;
}
v_reusejp_45_:
{
return v___x_46_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_23_, 2);
lean_dec_ref(v_00_u03b1_9_);
lean_dec(v_declName_8_);
return v___x_26_;
}
}
else
{
lean_object* v___x_49_; lean_object* v___x_51_; 
lean_dec(v_a_16_);
lean_dec_ref(v_00_u03b1_9_);
lean_dec(v_declName_8_);
v___x_49_ = lean_box(0);
if (v_isShared_19_ == 0)
{
lean_ctor_set(v___x_18_, 0, v___x_49_);
v___x_51_ = v___x_18_;
goto v_reusejp_50_;
}
else
{
lean_object* v_reuseFailAlloc_52_; 
v_reuseFailAlloc_52_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_52_, 0, v___x_49_);
v___x_51_ = v_reuseFailAlloc_52_;
goto v_reusejp_50_;
}
v_reusejp_50_:
{
return v___x_51_;
}
}
}
}
else
{
lean_object* v_a_54_; lean_object* v___x_56_; uint8_t v_isShared_57_; uint8_t v_isSharedCheck_61_; 
lean_dec_ref(v_00_u03b1_9_);
lean_dec(v_declName_8_);
v_a_54_ = lean_ctor_get(v___x_15_, 0);
v_isSharedCheck_61_ = !lean_is_exclusive(v___x_15_);
if (v_isSharedCheck_61_ == 0)
{
v___x_56_ = v___x_15_;
v_isShared_57_ = v_isSharedCheck_61_;
goto v_resetjp_55_;
}
else
{
lean_inc(v_a_54_);
lean_dec(v___x_15_);
v___x_56_ = lean_box(0);
v_isShared_57_ = v_isSharedCheck_61_;
goto v_resetjp_55_;
}
v_resetjp_55_:
{
lean_object* v___x_59_; 
if (v_isShared_57_ == 0)
{
v___x_59_ = v___x_56_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_60_; 
v_reuseFailAlloc_60_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_60_, 0, v_a_54_);
v___x_59_ = v_reuseFailAlloc_60_;
goto v_reusejp_58_;
}
v_reusejp_58_:
{
return v___x_59_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_mkSemiringThm___boxed(lean_object* v_declName_62_, lean_object* v_00_u03b1_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l_Lean_Meta_Grind_Arith_mkSemiringThm(v_declName_62_, v_00_u03b1_63_, v_a_64_, v_a_65_, v_a_66_, v_a_67_);
lean_dec(v_a_67_);
lean_dec_ref(v_a_66_);
lean_dec(v_a_65_);
lean_dec_ref(v_a_64_);
return v_res_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_expandPow01___redArg(lean_object* v_e_92_, lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_){
_start:
{
lean_object* v___x_101_; uint8_t v___x_102_; 
v___x_101_ = l_Lean_Expr_cleanupAnnotations(v_e_92_);
v___x_102_ = l_Lean_Expr_isApp(v___x_101_);
if (v___x_102_ == 0)
{
lean_dec_ref(v___x_101_);
goto v___jp_98_;
}
else
{
lean_object* v___x_103_; uint8_t v___x_104_; 
v___x_103_ = l_Lean_Expr_appFnCleanup___redArg(v___x_101_);
v___x_104_ = l_Lean_Expr_isApp(v___x_103_);
if (v___x_104_ == 0)
{
lean_dec_ref(v___x_103_);
lean_dec_ref(v___x_101_);
goto v___jp_98_;
}
else
{
lean_object* v___x_105_; uint8_t v___x_106_; 
v___x_105_ = l_Lean_Expr_appFnCleanup___redArg(v___x_103_);
v___x_106_ = l_Lean_Expr_isApp(v___x_105_);
if (v___x_106_ == 0)
{
lean_dec_ref(v___x_105_);
lean_dec_ref(v___x_103_);
lean_dec_ref(v___x_101_);
goto v___jp_98_;
}
else
{
lean_object* v___x_107_; uint8_t v___x_108_; 
v___x_107_ = l_Lean_Expr_appFnCleanup___redArg(v___x_105_);
lean_dec_ref(v___x_105_);
v___x_108_ = l_Lean_Expr_isApp(v___x_107_);
if (v___x_108_ == 0)
{
lean_dec_ref(v___x_107_);
lean_dec_ref(v___x_103_);
lean_dec_ref(v___x_101_);
goto v___jp_98_;
}
else
{
lean_object* v___x_109_; uint8_t v___x_110_; 
v___x_109_ = l_Lean_Expr_appFnCleanup___redArg(v___x_107_);
v___x_110_ = l_Lean_Expr_isApp(v___x_109_);
if (v___x_110_ == 0)
{
lean_dec_ref(v___x_109_);
lean_dec_ref(v___x_107_);
lean_dec_ref(v___x_103_);
lean_dec_ref(v___x_101_);
goto v___jp_98_;
}
else
{
lean_object* v___x_111_; uint8_t v___x_112_; 
v___x_111_ = l_Lean_Expr_appFnCleanup___redArg(v___x_109_);
v___x_112_ = l_Lean_Expr_isApp(v___x_111_);
if (v___x_112_ == 0)
{
lean_dec_ref(v___x_111_);
lean_dec_ref(v___x_109_);
lean_dec_ref(v___x_107_);
lean_dec_ref(v___x_103_);
lean_dec_ref(v___x_101_);
goto v___jp_98_;
}
else
{
lean_object* v___x_113_; lean_object* v___x_114_; uint8_t v___x_115_; 
v___x_113_ = l_Lean_Expr_appFnCleanup___redArg(v___x_111_);
v___x_114_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__3));
v___x_115_ = l_Lean_Expr_isConstOf(v___x_113_, v___x_114_);
lean_dec_ref(v___x_113_);
if (v___x_115_ == 0)
{
lean_dec_ref(v___x_111_);
lean_dec_ref(v___x_109_);
lean_dec_ref(v___x_107_);
lean_dec_ref(v___x_103_);
lean_dec_ref(v___x_101_);
goto v___jp_98_;
}
else
{
lean_object* v_arg_116_; lean_object* v_arg_117_; lean_object* v_arg_118_; lean_object* v_arg_119_; lean_object* v_arg_120_; lean_object* v___x_121_; 
v_arg_116_ = lean_ctor_get(v___x_101_, 1);
lean_inc_ref(v_arg_116_);
lean_dec_ref(v___x_101_);
v_arg_117_ = lean_ctor_get(v___x_103_, 1);
lean_inc_ref(v_arg_117_);
lean_dec_ref(v___x_103_);
v_arg_118_ = lean_ctor_get(v___x_107_, 1);
lean_inc_ref(v_arg_118_);
lean_dec_ref(v___x_107_);
v_arg_119_ = lean_ctor_get(v___x_109_, 1);
lean_inc_ref(v_arg_119_);
lean_dec_ref(v___x_109_);
v_arg_120_ = lean_ctor_get(v___x_111_, 1);
lean_inc_ref(v_arg_120_);
lean_dec_ref(v___x_111_);
v___x_121_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_119_, v_a_94_);
if (lean_obj_tag(v___x_121_) == 0)
{
lean_object* v_a_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_289_; 
v_a_122_ = lean_ctor_get(v___x_121_, 0);
v_isSharedCheck_289_ = !lean_is_exclusive(v___x_121_);
if (v_isSharedCheck_289_ == 0)
{
v___x_124_ = v___x_121_;
v_isShared_125_ = v_isSharedCheck_289_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_a_122_);
lean_dec(v___x_121_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_289_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___x_126_; lean_object* v___x_127_; uint8_t v___x_128_; 
v___x_126_ = l_Lean_Expr_cleanupAnnotations(v_a_122_);
lean_dec(v_a_122_);
v___x_127_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__5));
v___x_128_ = l_Lean_Expr_isConstOf(v___x_126_, v___x_127_);
lean_dec_ref(v___x_126_);
if (v___x_128_ == 0)
{
lean_object* v___x_129_; lean_object* v___x_131_; 
lean_dec_ref(v_arg_120_);
lean_dec_ref(v_arg_118_);
lean_dec_ref(v_arg_117_);
lean_dec_ref(v_arg_116_);
v___x_129_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__0));
if (v_isShared_125_ == 0)
{
lean_ctor_set(v___x_124_, 0, v___x_129_);
v___x_131_ = v___x_124_;
goto v_reusejp_130_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v___x_129_);
v___x_131_ = v_reuseFailAlloc_132_;
goto v_reusejp_130_;
}
v_reusejp_130_:
{
return v___x_131_;
}
}
else
{
lean_object* v___x_133_; 
lean_del_object(v___x_124_);
v___x_133_ = l_Lean_Meta_getNatValue_x3f(v_arg_116_, v_a_93_, v_a_94_, v_a_95_, v_a_96_);
lean_dec_ref(v_arg_116_);
if (lean_obj_tag(v___x_133_) == 0)
{
lean_object* v_a_134_; lean_object* v___x_136_; uint8_t v_isShared_137_; uint8_t v_isSharedCheck_280_; 
v_a_134_ = lean_ctor_get(v___x_133_, 0);
v_isSharedCheck_280_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_280_ == 0)
{
v___x_136_ = v___x_133_;
v_isShared_137_ = v_isSharedCheck_280_;
goto v_resetjp_135_;
}
else
{
lean_inc(v_a_134_);
lean_dec(v___x_133_);
v___x_136_ = lean_box(0);
v_isShared_137_ = v_isSharedCheck_280_;
goto v_resetjp_135_;
}
v_resetjp_135_:
{
if (lean_obj_tag(v_a_134_) == 1)
{
lean_object* v_val_138_; lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_275_; 
v_val_138_ = lean_ctor_get(v_a_134_, 0);
v_isSharedCheck_275_ = !lean_is_exclusive(v_a_134_);
if (v_isSharedCheck_275_ == 0)
{
v___x_140_ = v_a_134_;
v_isShared_141_ = v_isSharedCheck_275_;
goto v_resetjp_139_;
}
else
{
lean_inc(v_val_138_);
lean_dec(v_a_134_);
v___x_140_ = lean_box(0);
v_isShared_141_ = v_isSharedCheck_275_;
goto v_resetjp_139_;
}
v_resetjp_139_:
{
lean_object* v___x_142_; uint8_t v___x_143_; 
v___x_142_ = lean_unsigned_to_nat(0u);
v___x_143_ = lean_nat_dec_eq(v_val_138_, v___x_142_);
if (v___x_143_ == 0)
{
lean_object* v___x_144_; uint8_t v___x_145_; 
v___x_144_ = lean_unsigned_to_nat(1u);
v___x_145_ = lean_nat_dec_eq(v_val_138_, v___x_144_);
lean_dec(v_val_138_);
if (v___x_145_ == 0)
{
lean_object* v___x_146_; lean_object* v___x_148_; 
lean_del_object(v___x_140_);
lean_dec_ref(v_arg_120_);
lean_dec_ref(v_arg_118_);
lean_dec_ref(v_arg_117_);
v___x_146_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__0));
if (v_isShared_137_ == 0)
{
lean_ctor_set(v___x_136_, 0, v___x_146_);
v___x_148_ = v___x_136_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v___x_146_);
v___x_148_ = v_reuseFailAlloc_149_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
return v___x_148_;
}
}
else
{
lean_object* v___x_150_; 
lean_del_object(v___x_136_);
lean_inc_ref(v_arg_120_);
v___x_150_ = l_Lean_Meta_isExprDefEq(v_arg_120_, v_arg_118_, v_a_93_, v_a_94_, v_a_95_, v_a_96_);
if (lean_obj_tag(v___x_150_) == 0)
{
lean_object* v_a_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_196_; 
v_a_151_ = lean_ctor_get(v___x_150_, 0);
v_isSharedCheck_196_ = !lean_is_exclusive(v___x_150_);
if (v_isSharedCheck_196_ == 0)
{
v___x_153_ = v___x_150_;
v_isShared_154_ = v_isSharedCheck_196_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_a_151_);
lean_dec(v___x_150_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_196_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
uint8_t v___x_155_; 
v___x_155_ = lean_unbox(v_a_151_);
if (v___x_155_ == 0)
{
lean_object* v___x_156_; lean_object* v___x_158_; 
lean_dec(v_a_151_);
lean_del_object(v___x_140_);
lean_dec_ref(v_arg_120_);
lean_dec_ref(v_arg_117_);
v___x_156_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__0));
if (v_isShared_154_ == 0)
{
lean_ctor_set(v___x_153_, 0, v___x_156_);
v___x_158_ = v___x_153_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v___x_156_);
v___x_158_ = v_reuseFailAlloc_159_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
return v___x_158_;
}
}
else
{
lean_object* v___x_160_; lean_object* v___x_161_; 
lean_del_object(v___x_153_);
v___x_160_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__7));
v___x_161_ = l_Lean_Meta_Grind_Arith_mkSemiringThm(v___x_160_, v_arg_120_, v_a_93_, v_a_94_, v_a_95_, v_a_96_);
if (lean_obj_tag(v___x_161_) == 0)
{
lean_object* v_a_162_; lean_object* v___x_164_; uint8_t v_isShared_165_; uint8_t v_isSharedCheck_187_; 
v_a_162_ = lean_ctor_get(v___x_161_, 0);
v_isSharedCheck_187_ = !lean_is_exclusive(v___x_161_);
if (v_isSharedCheck_187_ == 0)
{
v___x_164_ = v___x_161_;
v_isShared_165_ = v_isSharedCheck_187_;
goto v_resetjp_163_;
}
else
{
lean_inc(v_a_162_);
lean_dec(v___x_161_);
v___x_164_ = lean_box(0);
v_isShared_165_ = v_isSharedCheck_187_;
goto v_resetjp_163_;
}
v_resetjp_163_:
{
if (lean_obj_tag(v_a_162_) == 1)
{
lean_object* v_val_166_; lean_object* v___x_168_; uint8_t v_isShared_169_; uint8_t v_isSharedCheck_182_; 
v_val_166_ = lean_ctor_get(v_a_162_, 0);
v_isSharedCheck_182_ = !lean_is_exclusive(v_a_162_);
if (v_isSharedCheck_182_ == 0)
{
v___x_168_ = v_a_162_;
v_isShared_169_ = v_isSharedCheck_182_;
goto v_resetjp_167_;
}
else
{
lean_inc(v_val_166_);
lean_dec(v_a_162_);
v___x_168_ = lean_box(0);
v_isShared_169_ = v_isSharedCheck_182_;
goto v_resetjp_167_;
}
v_resetjp_167_:
{
lean_object* v___x_170_; lean_object* v___x_172_; 
lean_inc_ref(v_arg_117_);
v___x_170_ = l_Lean_Expr_app___override(v_val_166_, v_arg_117_);
if (v_isShared_169_ == 0)
{
lean_ctor_set(v___x_168_, 0, v___x_170_);
v___x_172_ = v___x_168_;
goto v_reusejp_171_;
}
else
{
lean_object* v_reuseFailAlloc_181_; 
v_reuseFailAlloc_181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_181_, 0, v___x_170_);
v___x_172_ = v_reuseFailAlloc_181_;
goto v_reusejp_171_;
}
v_reusejp_171_:
{
lean_object* v___x_173_; uint8_t v___x_174_; lean_object* v___x_176_; 
v___x_173_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_173_, 0, v_arg_117_);
lean_ctor_set(v___x_173_, 1, v___x_172_);
v___x_174_ = lean_unbox(v_a_151_);
lean_dec(v_a_151_);
lean_ctor_set_uint8(v___x_173_, sizeof(void*)*2, v___x_174_);
if (v_isShared_141_ == 0)
{
lean_ctor_set_tag(v___x_140_, 0);
lean_ctor_set(v___x_140_, 0, v___x_173_);
v___x_176_ = v___x_140_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_180_; 
v_reuseFailAlloc_180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_180_, 0, v___x_173_);
v___x_176_ = v_reuseFailAlloc_180_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
lean_object* v___x_178_; 
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 0, v___x_176_);
v___x_178_ = v___x_164_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v___x_176_);
v___x_178_ = v_reuseFailAlloc_179_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
return v___x_178_;
}
}
}
}
}
else
{
lean_object* v___x_183_; lean_object* v___x_185_; 
lean_dec(v_a_162_);
lean_dec(v_a_151_);
lean_del_object(v___x_140_);
lean_dec_ref(v_arg_117_);
v___x_183_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__0));
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 0, v___x_183_);
v___x_185_ = v___x_164_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_186_; 
v_reuseFailAlloc_186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_186_, 0, v___x_183_);
v___x_185_ = v_reuseFailAlloc_186_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
return v___x_185_;
}
}
}
}
else
{
lean_object* v_a_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_195_; 
lean_dec(v_a_151_);
lean_del_object(v___x_140_);
lean_dec_ref(v_arg_117_);
v_a_188_ = lean_ctor_get(v___x_161_, 0);
v_isSharedCheck_195_ = !lean_is_exclusive(v___x_161_);
if (v_isSharedCheck_195_ == 0)
{
v___x_190_ = v___x_161_;
v_isShared_191_ = v_isSharedCheck_195_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_a_188_);
lean_dec(v___x_161_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_195_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___x_193_; 
if (v_isShared_191_ == 0)
{
v___x_193_ = v___x_190_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v_a_188_);
v___x_193_ = v_reuseFailAlloc_194_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
return v___x_193_;
}
}
}
}
}
}
else
{
lean_object* v_a_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_204_; 
lean_del_object(v___x_140_);
lean_dec_ref(v_arg_120_);
lean_dec_ref(v_arg_117_);
v_a_197_ = lean_ctor_get(v___x_150_, 0);
v_isSharedCheck_204_ = !lean_is_exclusive(v___x_150_);
if (v_isSharedCheck_204_ == 0)
{
v___x_199_ = v___x_150_;
v_isShared_200_ = v_isSharedCheck_204_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_a_197_);
lean_dec(v___x_150_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_204_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_202_; 
if (v_isShared_200_ == 0)
{
v___x_202_ = v___x_199_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v_a_197_);
v___x_202_ = v_reuseFailAlloc_203_;
goto v_reusejp_201_;
}
v_reusejp_201_:
{
return v___x_202_;
}
}
}
}
}
else
{
lean_object* v___x_205_; 
lean_dec(v_val_138_);
lean_del_object(v___x_136_);
lean_inc_ref(v_arg_120_);
v___x_205_ = l_Lean_Meta_isExprDefEq(v_arg_120_, v_arg_118_, v_a_93_, v_a_94_, v_a_95_, v_a_96_);
if (lean_obj_tag(v___x_205_) == 0)
{
lean_object* v_a_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_266_; 
v_a_206_ = lean_ctor_get(v___x_205_, 0);
v_isSharedCheck_266_ = !lean_is_exclusive(v___x_205_);
if (v_isSharedCheck_266_ == 0)
{
v___x_208_ = v___x_205_;
v_isShared_209_ = v_isSharedCheck_266_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_a_206_);
lean_dec(v___x_205_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_266_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
uint8_t v___x_210_; 
v___x_210_ = lean_unbox(v_a_206_);
if (v___x_210_ == 0)
{
lean_object* v___x_211_; lean_object* v___x_213_; 
lean_dec(v_a_206_);
lean_del_object(v___x_140_);
lean_dec_ref(v_arg_120_);
lean_dec_ref(v_arg_117_);
v___x_211_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__0));
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 0, v___x_211_);
v___x_213_ = v___x_208_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v___x_211_);
v___x_213_ = v_reuseFailAlloc_214_;
goto v_reusejp_212_;
}
v_reusejp_212_:
{
return v___x_213_;
}
}
else
{
lean_object* v___x_215_; lean_object* v___x_216_; 
lean_del_object(v___x_208_);
v___x_215_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__9));
lean_inc_ref(v_arg_120_);
v___x_216_ = l_Lean_Meta_Grind_Arith_mkSemiringThm(v___x_215_, v_arg_120_, v_a_93_, v_a_94_, v_a_95_, v_a_96_);
if (lean_obj_tag(v___x_216_) == 0)
{
lean_object* v_a_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_257_; 
v_a_217_ = lean_ctor_get(v___x_216_, 0);
v_isSharedCheck_257_ = !lean_is_exclusive(v___x_216_);
if (v_isSharedCheck_257_ == 0)
{
v___x_219_ = v___x_216_;
v_isShared_220_ = v_isSharedCheck_257_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_a_217_);
lean_dec(v___x_216_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_257_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
if (lean_obj_tag(v_a_217_) == 1)
{
lean_object* v_val_221_; lean_object* v___x_223_; uint8_t v_isShared_224_; uint8_t v_isSharedCheck_252_; 
lean_del_object(v___x_219_);
v_val_221_ = lean_ctor_get(v_a_217_, 0);
v_isSharedCheck_252_ = !lean_is_exclusive(v_a_217_);
if (v_isSharedCheck_252_ == 0)
{
v___x_223_ = v_a_217_;
v_isShared_224_ = v_isSharedCheck_252_;
goto v_resetjp_222_;
}
else
{
lean_inc(v_val_221_);
lean_dec(v_a_217_);
v___x_223_ = lean_box(0);
v_isShared_224_ = v_isSharedCheck_252_;
goto v_resetjp_222_;
}
v_resetjp_222_:
{
lean_object* v___x_225_; lean_object* v___x_226_; 
v___x_225_ = lean_unsigned_to_nat(1u);
v___x_226_ = l_Lean_Meta_mkNumeral(v_arg_120_, v___x_225_, v_a_93_, v_a_94_, v_a_95_, v_a_96_);
if (lean_obj_tag(v___x_226_) == 0)
{
lean_object* v_a_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_243_; 
v_a_227_ = lean_ctor_get(v___x_226_, 0);
v_isSharedCheck_243_ = !lean_is_exclusive(v___x_226_);
if (v_isSharedCheck_243_ == 0)
{
v___x_229_ = v___x_226_;
v_isShared_230_ = v_isSharedCheck_243_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_a_227_);
lean_dec(v___x_226_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_243_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
lean_object* v___x_231_; lean_object* v___x_233_; 
v___x_231_ = l_Lean_Expr_app___override(v_val_221_, v_arg_117_);
if (v_isShared_224_ == 0)
{
lean_ctor_set(v___x_223_, 0, v___x_231_);
v___x_233_ = v___x_223_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v___x_231_);
v___x_233_ = v_reuseFailAlloc_242_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
lean_object* v___x_234_; uint8_t v___x_235_; lean_object* v___x_237_; 
v___x_234_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_234_, 0, v_a_227_);
lean_ctor_set(v___x_234_, 1, v___x_233_);
v___x_235_ = lean_unbox(v_a_206_);
lean_dec(v_a_206_);
lean_ctor_set_uint8(v___x_234_, sizeof(void*)*2, v___x_235_);
if (v_isShared_141_ == 0)
{
lean_ctor_set_tag(v___x_140_, 0);
lean_ctor_set(v___x_140_, 0, v___x_234_);
v___x_237_ = v___x_140_;
goto v_reusejp_236_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v___x_234_);
v___x_237_ = v_reuseFailAlloc_241_;
goto v_reusejp_236_;
}
v_reusejp_236_:
{
lean_object* v___x_239_; 
if (v_isShared_230_ == 0)
{
lean_ctor_set(v___x_229_, 0, v___x_237_);
v___x_239_ = v___x_229_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v___x_237_);
v___x_239_ = v_reuseFailAlloc_240_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
return v___x_239_;
}
}
}
}
}
else
{
lean_object* v_a_244_; lean_object* v___x_246_; uint8_t v_isShared_247_; uint8_t v_isSharedCheck_251_; 
lean_del_object(v___x_223_);
lean_dec(v_val_221_);
lean_dec(v_a_206_);
lean_del_object(v___x_140_);
lean_dec_ref(v_arg_117_);
v_a_244_ = lean_ctor_get(v___x_226_, 0);
v_isSharedCheck_251_ = !lean_is_exclusive(v___x_226_);
if (v_isSharedCheck_251_ == 0)
{
v___x_246_ = v___x_226_;
v_isShared_247_ = v_isSharedCheck_251_;
goto v_resetjp_245_;
}
else
{
lean_inc(v_a_244_);
lean_dec(v___x_226_);
v___x_246_ = lean_box(0);
v_isShared_247_ = v_isSharedCheck_251_;
goto v_resetjp_245_;
}
v_resetjp_245_:
{
lean_object* v___x_249_; 
if (v_isShared_247_ == 0)
{
v___x_249_ = v___x_246_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v_a_244_);
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
}
else
{
lean_object* v___x_253_; lean_object* v___x_255_; 
lean_dec(v_a_217_);
lean_dec(v_a_206_);
lean_del_object(v___x_140_);
lean_dec_ref(v_arg_120_);
lean_dec_ref(v_arg_117_);
v___x_253_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__0));
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 0, v___x_253_);
v___x_255_ = v___x_219_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v___x_253_);
v___x_255_ = v_reuseFailAlloc_256_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
return v___x_255_;
}
}
}
}
else
{
lean_object* v_a_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_265_; 
lean_dec(v_a_206_);
lean_del_object(v___x_140_);
lean_dec_ref(v_arg_120_);
lean_dec_ref(v_arg_117_);
v_a_258_ = lean_ctor_get(v___x_216_, 0);
v_isSharedCheck_265_ = !lean_is_exclusive(v___x_216_);
if (v_isSharedCheck_265_ == 0)
{
v___x_260_ = v___x_216_;
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_a_258_);
lean_dec(v___x_216_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v___x_263_; 
if (v_isShared_261_ == 0)
{
v___x_263_ = v___x_260_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v_a_258_);
v___x_263_ = v_reuseFailAlloc_264_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
return v___x_263_;
}
}
}
}
}
}
else
{
lean_object* v_a_267_; lean_object* v___x_269_; uint8_t v_isShared_270_; uint8_t v_isSharedCheck_274_; 
lean_del_object(v___x_140_);
lean_dec_ref(v_arg_120_);
lean_dec_ref(v_arg_117_);
v_a_267_ = lean_ctor_get(v___x_205_, 0);
v_isSharedCheck_274_ = !lean_is_exclusive(v___x_205_);
if (v_isSharedCheck_274_ == 0)
{
v___x_269_ = v___x_205_;
v_isShared_270_ = v_isSharedCheck_274_;
goto v_resetjp_268_;
}
else
{
lean_inc(v_a_267_);
lean_dec(v___x_205_);
v___x_269_ = lean_box(0);
v_isShared_270_ = v_isSharedCheck_274_;
goto v_resetjp_268_;
}
v_resetjp_268_:
{
lean_object* v___x_272_; 
if (v_isShared_270_ == 0)
{
v___x_272_ = v___x_269_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v_a_267_);
v___x_272_ = v_reuseFailAlloc_273_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
return v___x_272_;
}
}
}
}
}
}
else
{
lean_object* v___x_276_; lean_object* v___x_278_; 
lean_dec(v_a_134_);
lean_dec_ref(v_arg_120_);
lean_dec_ref(v_arg_118_);
lean_dec_ref(v_arg_117_);
v___x_276_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__0));
if (v_isShared_137_ == 0)
{
lean_ctor_set(v___x_136_, 0, v___x_276_);
v___x_278_ = v___x_136_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v___x_276_);
v___x_278_ = v_reuseFailAlloc_279_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
return v___x_278_;
}
}
}
}
else
{
lean_object* v_a_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_288_; 
lean_dec_ref(v_arg_120_);
lean_dec_ref(v_arg_118_);
lean_dec_ref(v_arg_117_);
v_a_281_ = lean_ctor_get(v___x_133_, 0);
v_isSharedCheck_288_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_288_ == 0)
{
v___x_283_ = v___x_133_;
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_a_281_);
lean_dec(v___x_133_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_286_; 
if (v_isShared_284_ == 0)
{
v___x_286_ = v___x_283_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_a_281_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
}
}
}
}
else
{
lean_object* v_a_290_; lean_object* v___x_292_; uint8_t v_isShared_293_; uint8_t v_isSharedCheck_297_; 
lean_dec_ref(v_arg_120_);
lean_dec_ref(v_arg_118_);
lean_dec_ref(v_arg_117_);
lean_dec_ref(v_arg_116_);
v_a_290_ = lean_ctor_get(v___x_121_, 0);
v_isSharedCheck_297_ = !lean_is_exclusive(v___x_121_);
if (v_isSharedCheck_297_ == 0)
{
v___x_292_ = v___x_121_;
v_isShared_293_ = v_isSharedCheck_297_;
goto v_resetjp_291_;
}
else
{
lean_inc(v_a_290_);
lean_dec(v___x_121_);
v___x_292_ = lean_box(0);
v_isShared_293_ = v_isSharedCheck_297_;
goto v_resetjp_291_;
}
v_resetjp_291_:
{
lean_object* v___x_295_; 
if (v_isShared_293_ == 0)
{
v___x_295_ = v___x_292_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v_a_290_);
v___x_295_ = v_reuseFailAlloc_296_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
return v___x_295_;
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
v___jp_98_:
{
lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_99_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__0));
v___x_100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_100_, 0, v___x_99_);
return v___x_100_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_expandPow01___redArg___boxed(lean_object* v_e_298_, lean_object* v_a_299_, lean_object* v_a_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_){
_start:
{
lean_object* v_res_304_; 
v_res_304_ = l_Lean_Meta_Grind_Arith_expandPow01___redArg(v_e_298_, v_a_299_, v_a_300_, v_a_301_, v_a_302_);
lean_dec(v_a_302_);
lean_dec_ref(v_a_301_);
lean_dec(v_a_300_);
lean_dec_ref(v_a_299_);
lean_dec_ref(v_e_298_);
return v_res_304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_expandPow01(lean_object* v_e_305_, lean_object* v_a_306_, lean_object* v_a_307_, lean_object* v_a_308_, lean_object* v_a_309_, lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_){
_start:
{
lean_object* v___x_314_; 
v___x_314_ = l_Lean_Meta_Grind_Arith_expandPow01___redArg(v_e_305_, v_a_309_, v_a_310_, v_a_311_, v_a_312_);
return v___x_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_expandPow01___boxed(lean_object* v_e_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_, lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_){
_start:
{
lean_object* v_res_324_; 
v_res_324_ = l_Lean_Meta_Grind_Arith_expandPow01(v_e_315_, v_a_316_, v_a_317_, v_a_318_, v_a_319_, v_a_320_, v_a_321_, v_a_322_);
lean_dec(v_a_322_);
lean_dec_ref(v_a_321_);
lean_dec(v_a_320_);
lean_dec_ref(v_a_319_);
lean_dec(v_a_318_);
lean_dec_ref(v_a_317_);
lean_dec(v_a_316_);
lean_dec_ref(v_e_315_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14_(){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_349_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14_));
v___x_350_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__5_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14_));
v___x_351_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_expandPow01___boxed), 9, 0);
v___x_352_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_349_, v___x_350_, v___x_351_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14____boxed(lean_object* v_a_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14_();
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_x_355_, lean_object* v_x_356_){
_start:
{
if (lean_obj_tag(v_x_356_) == 0)
{
return v_x_355_;
}
else
{
lean_object* v_key_357_; lean_object* v_value_358_; lean_object* v_tail_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_385_; 
v_key_357_ = lean_ctor_get(v_x_356_, 0);
v_value_358_ = lean_ctor_get(v_x_356_, 1);
v_tail_359_ = lean_ctor_get(v_x_356_, 2);
v_isSharedCheck_385_ = !lean_is_exclusive(v_x_356_);
if (v_isSharedCheck_385_ == 0)
{
v___x_361_ = v_x_356_;
v_isShared_362_ = v_isSharedCheck_385_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_tail_359_);
lean_inc(v_value_358_);
lean_inc(v_key_357_);
lean_dec(v_x_356_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_385_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v___x_363_; uint64_t v___y_365_; 
v___x_363_ = lean_array_get_size(v_x_355_);
if (lean_obj_tag(v_key_357_) == 0)
{
uint64_t v___x_383_; 
v___x_383_ = 1723ULL;
v___y_365_ = v___x_383_;
goto v___jp_364_;
}
else
{
uint64_t v_hash_384_; 
v_hash_384_ = lean_ctor_get_uint64(v_key_357_, sizeof(void*)*2);
v___y_365_ = v_hash_384_;
goto v___jp_364_;
}
v___jp_364_:
{
uint64_t v___x_366_; uint64_t v___x_367_; uint64_t v_fold_368_; uint64_t v___x_369_; uint64_t v___x_370_; uint64_t v___x_371_; size_t v___x_372_; size_t v___x_373_; size_t v___x_374_; size_t v___x_375_; size_t v___x_376_; lean_object* v___x_377_; lean_object* v___x_379_; 
v___x_366_ = 32ULL;
v___x_367_ = lean_uint64_shift_right(v___y_365_, v___x_366_);
v_fold_368_ = lean_uint64_xor(v___y_365_, v___x_367_);
v___x_369_ = 16ULL;
v___x_370_ = lean_uint64_shift_right(v_fold_368_, v___x_369_);
v___x_371_ = lean_uint64_xor(v_fold_368_, v___x_370_);
v___x_372_ = lean_uint64_to_usize(v___x_371_);
v___x_373_ = lean_usize_of_nat(v___x_363_);
v___x_374_ = ((size_t)1ULL);
v___x_375_ = lean_usize_sub(v___x_373_, v___x_374_);
v___x_376_ = lean_usize_land(v___x_372_, v___x_375_);
v___x_377_ = lean_array_uget_borrowed(v_x_355_, v___x_376_);
lean_inc(v___x_377_);
if (v_isShared_362_ == 0)
{
lean_ctor_set(v___x_361_, 2, v___x_377_);
v___x_379_ = v___x_361_;
goto v_reusejp_378_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v_key_357_);
lean_ctor_set(v_reuseFailAlloc_382_, 1, v_value_358_);
lean_ctor_set(v_reuseFailAlloc_382_, 2, v___x_377_);
v___x_379_ = v_reuseFailAlloc_382_;
goto v_reusejp_378_;
}
v_reusejp_378_:
{
lean_object* v___x_380_; 
v___x_380_ = lean_array_uset(v_x_355_, v___x_376_, v___x_379_);
v_x_355_ = v___x_380_;
v_x_356_ = v_tail_359_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__1_spec__2___redArg(lean_object* v_i_386_, lean_object* v_source_387_, lean_object* v_target_388_){
_start:
{
lean_object* v___x_389_; uint8_t v___x_390_; 
v___x_389_ = lean_array_get_size(v_source_387_);
v___x_390_ = lean_nat_dec_lt(v_i_386_, v___x_389_);
if (v___x_390_ == 0)
{
lean_dec_ref(v_source_387_);
lean_dec(v_i_386_);
return v_target_388_;
}
else
{
lean_object* v_es_391_; lean_object* v___x_392_; lean_object* v_source_393_; lean_object* v_target_394_; lean_object* v___x_395_; lean_object* v___x_396_; 
v_es_391_ = lean_array_fget(v_source_387_, v_i_386_);
v___x_392_ = lean_box(0);
v_source_393_ = lean_array_fset(v_source_387_, v_i_386_, v___x_392_);
v_target_394_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__1_spec__2_spec__4___redArg(v_target_388_, v_es_391_);
v___x_395_ = lean_unsigned_to_nat(1u);
v___x_396_ = lean_nat_add(v_i_386_, v___x_395_);
lean_dec(v_i_386_);
v_i_386_ = v___x_396_;
v_source_387_ = v_source_393_;
v_target_388_ = v_target_394_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__1___redArg(lean_object* v_data_398_){
_start:
{
lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v_nbuckets_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_399_ = lean_array_get_size(v_data_398_);
v___x_400_ = lean_unsigned_to_nat(2u);
v_nbuckets_401_ = lean_nat_mul(v___x_399_, v___x_400_);
v___x_402_ = lean_unsigned_to_nat(0u);
v___x_403_ = lean_box(0);
v___x_404_ = lean_mk_array(v_nbuckets_401_, v___x_403_);
v___x_405_ = lean_array_propagate_mark(v_data_398_, v___x_404_);
v___x_406_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__1_spec__2___redArg(v___x_402_, v_data_398_, v___x_405_);
return v___x_406_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__0___redArg(lean_object* v_a_407_, lean_object* v_x_408_){
_start:
{
if (lean_obj_tag(v_x_408_) == 0)
{
uint8_t v___x_409_; 
v___x_409_ = 0;
return v___x_409_;
}
else
{
lean_object* v_key_410_; lean_object* v_tail_411_; uint8_t v___x_412_; 
v_key_410_ = lean_ctor_get(v_x_408_, 0);
v_tail_411_ = lean_ctor_get(v_x_408_, 2);
v___x_412_ = lean_name_eq(v_key_410_, v_a_407_);
if (v___x_412_ == 0)
{
v_x_408_ = v_tail_411_;
goto _start;
}
else
{
return v___x_412_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__0___redArg___boxed(lean_object* v_a_414_, lean_object* v_x_415_){
_start:
{
uint8_t v_res_416_; lean_object* v_r_417_; 
v_res_416_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__0___redArg(v_a_414_, v_x_415_);
lean_dec(v_x_415_);
lean_dec(v_a_414_);
v_r_417_ = lean_box(v_res_416_);
return v_r_417_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0___redArg(lean_object* v_m_418_, lean_object* v_a_419_, lean_object* v_b_420_){
_start:
{
lean_object* v_size_421_; lean_object* v_buckets_422_; lean_object* v___x_423_; uint64_t v___y_425_; 
v_size_421_ = lean_ctor_get(v_m_418_, 0);
v_buckets_422_ = lean_ctor_get(v_m_418_, 1);
v___x_423_ = lean_array_get_size(v_buckets_422_);
if (lean_obj_tag(v_a_419_) == 0)
{
uint64_t v___x_462_; 
v___x_462_ = 1723ULL;
v___y_425_ = v___x_462_;
goto v___jp_424_;
}
else
{
uint64_t v_hash_463_; 
v_hash_463_ = lean_ctor_get_uint64(v_a_419_, sizeof(void*)*2);
v___y_425_ = v_hash_463_;
goto v___jp_424_;
}
v___jp_424_:
{
uint64_t v___x_426_; uint64_t v___x_427_; uint64_t v_fold_428_; uint64_t v___x_429_; uint64_t v___x_430_; uint64_t v___x_431_; size_t v___x_432_; size_t v___x_433_; size_t v___x_434_; size_t v___x_435_; size_t v___x_436_; lean_object* v_bkt_437_; uint8_t v___x_438_; 
v___x_426_ = 32ULL;
v___x_427_ = lean_uint64_shift_right(v___y_425_, v___x_426_);
v_fold_428_ = lean_uint64_xor(v___y_425_, v___x_427_);
v___x_429_ = 16ULL;
v___x_430_ = lean_uint64_shift_right(v_fold_428_, v___x_429_);
v___x_431_ = lean_uint64_xor(v_fold_428_, v___x_430_);
v___x_432_ = lean_uint64_to_usize(v___x_431_);
v___x_433_ = lean_usize_of_nat(v___x_423_);
v___x_434_ = ((size_t)1ULL);
v___x_435_ = lean_usize_sub(v___x_433_, v___x_434_);
v___x_436_ = lean_usize_land(v___x_432_, v___x_435_);
v_bkt_437_ = lean_array_uget_borrowed(v_buckets_422_, v___x_436_);
v___x_438_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__0___redArg(v_a_419_, v_bkt_437_);
if (v___x_438_ == 0)
{
lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_459_; 
lean_inc_ref(v_buckets_422_);
lean_inc(v_size_421_);
v_isSharedCheck_459_ = !lean_is_exclusive(v_m_418_);
if (v_isSharedCheck_459_ == 0)
{
lean_object* v_unused_460_; lean_object* v_unused_461_; 
v_unused_460_ = lean_ctor_get(v_m_418_, 1);
lean_dec(v_unused_460_);
v_unused_461_ = lean_ctor_get(v_m_418_, 0);
lean_dec(v_unused_461_);
v___x_440_ = v_m_418_;
v_isShared_441_ = v_isSharedCheck_459_;
goto v_resetjp_439_;
}
else
{
lean_dec(v_m_418_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_459_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_442_; lean_object* v_size_x27_443_; lean_object* v___x_444_; lean_object* v_buckets_x27_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; uint8_t v___x_451_; 
v___x_442_ = lean_unsigned_to_nat(1u);
v_size_x27_443_ = lean_nat_add(v_size_421_, v___x_442_);
lean_dec(v_size_421_);
lean_inc(v_bkt_437_);
v___x_444_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_444_, 0, v_a_419_);
lean_ctor_set(v___x_444_, 1, v_b_420_);
lean_ctor_set(v___x_444_, 2, v_bkt_437_);
v_buckets_x27_445_ = lean_array_uset(v_buckets_422_, v___x_436_, v___x_444_);
v___x_446_ = lean_unsigned_to_nat(4u);
v___x_447_ = lean_nat_mul(v_size_x27_443_, v___x_446_);
v___x_448_ = lean_unsigned_to_nat(3u);
v___x_449_ = lean_nat_div(v___x_447_, v___x_448_);
lean_dec(v___x_447_);
v___x_450_ = lean_array_get_size(v_buckets_x27_445_);
v___x_451_ = lean_nat_dec_le(v___x_449_, v___x_450_);
lean_dec(v___x_449_);
if (v___x_451_ == 0)
{
lean_object* v_val_452_; lean_object* v___x_454_; 
v_val_452_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__1___redArg(v_buckets_x27_445_);
if (v_isShared_441_ == 0)
{
lean_ctor_set(v___x_440_, 1, v_val_452_);
lean_ctor_set(v___x_440_, 0, v_size_x27_443_);
v___x_454_ = v___x_440_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v_size_x27_443_);
lean_ctor_set(v_reuseFailAlloc_455_, 1, v_val_452_);
v___x_454_ = v_reuseFailAlloc_455_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
return v___x_454_;
}
}
else
{
lean_object* v___x_457_; 
if (v_isShared_441_ == 0)
{
lean_ctor_set(v___x_440_, 1, v_buckets_x27_445_);
lean_ctor_set(v___x_440_, 0, v_size_x27_443_);
v___x_457_ = v___x_440_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v_size_x27_443_);
lean_ctor_set(v_reuseFailAlloc_458_, 1, v_buckets_x27_445_);
v___x_457_ = v_reuseFailAlloc_458_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
return v___x_457_;
}
}
}
}
else
{
lean_dec(v_b_420_);
lean_dec(v_a_419_);
return v_m_418_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__1(lean_object* v_x_464_, lean_object* v_x_465_){
_start:
{
if (lean_obj_tag(v_x_465_) == 0)
{
return v_x_464_;
}
else
{
lean_object* v_head_466_; lean_object* v_tail_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
v_head_466_ = lean_ctor_get(v_x_465_, 0);
lean_inc(v_head_466_);
v_tail_467_ = lean_ctor_get(v_x_465_, 1);
lean_inc(v_tail_467_);
lean_dec_ref_known(v_x_465_, 2);
v___x_468_ = lean_box(0);
v___x_469_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0___redArg(v_x_464_, v_head_466_, v___x_468_);
v_x_464_ = v___x_469_;
v_x_465_ = v_tail_467_;
goto _start;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__0(void){
_start:
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
v___x_471_ = lean_box(0);
v___x_472_ = lean_unsigned_to_nat(16u);
v___x_473_ = lean_mk_array(v___x_472_, v___x_471_);
return v___x_473_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__1(void){
_start:
{
lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_474_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__0);
v___x_475_ = lean_unsigned_to_nat(0u);
v___x_476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_476_, 0, v___x_475_);
lean_ctor_set(v___x_476_, 1, v___x_474_);
return v___x_476_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__31(void){
_start:
{
lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_537_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__30));
v___x_538_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__1);
v___x_539_ = l_List_foldl___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__1(v___x_538_, v___x_537_);
return v___x_539_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField(void){
_start:
{
lean_object* v___x_540_; 
v___x_540_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__31, &l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__31_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__31);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0(lean_object* v_00_u03b2_541_, lean_object* v_m_542_, lean_object* v_a_543_, lean_object* v_b_544_){
_start:
{
lean_object* v___x_545_; 
v___x_545_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0___redArg(v_m_542_, v_a_543_, v_b_544_);
return v___x_545_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__0(lean_object* v_00_u03b2_546_, lean_object* v_a_547_, lean_object* v_x_548_){
_start:
{
uint8_t v___x_549_; 
v___x_549_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__0___redArg(v_a_547_, v_x_548_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__0___boxed(lean_object* v_00_u03b2_550_, lean_object* v_a_551_, lean_object* v_x_552_){
_start:
{
uint8_t v_res_553_; lean_object* v_r_554_; 
v_res_553_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__0(v_00_u03b2_550_, v_a_551_, v_x_552_);
lean_dec(v_x_552_);
lean_dec(v_a_551_);
v_r_554_ = lean_box(v_res_553_);
return v_r_554_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__1(lean_object* v_00_u03b2_555_, lean_object* v_data_556_){
_start:
{
lean_object* v___x_557_; 
v___x_557_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__1___redArg(v_data_556_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_558_, lean_object* v_i_559_, lean_object* v_source_560_, lean_object* v_target_561_){
_start:
{
lean_object* v___x_562_; 
v___x_562_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__1_spec__2___redArg(v_i_559_, v_source_560_, v_target_561_);
return v___x_562_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_563_, lean_object* v_x_564_, lean_object* v_x_565_){
_start:
{
lean_object* v___x_566_; 
v___x_566_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__1_spec__2_spec__4___redArg(v_x_564_, v_x_565_);
return v___x_566_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNotFieldQuick_spec__0___redArg(lean_object* v_m_567_, lean_object* v_a_568_){
_start:
{
lean_object* v_buckets_569_; lean_object* v___x_570_; uint64_t v___y_572_; 
v_buckets_569_ = lean_ctor_get(v_m_567_, 1);
v___x_570_ = lean_array_get_size(v_buckets_569_);
if (lean_obj_tag(v_a_568_) == 0)
{
uint64_t v___x_586_; 
v___x_586_ = 1723ULL;
v___y_572_ = v___x_586_;
goto v___jp_571_;
}
else
{
uint64_t v_hash_587_; 
v_hash_587_ = lean_ctor_get_uint64(v_a_568_, sizeof(void*)*2);
v___y_572_ = v_hash_587_;
goto v___jp_571_;
}
v___jp_571_:
{
uint64_t v___x_573_; uint64_t v___x_574_; uint64_t v_fold_575_; uint64_t v___x_576_; uint64_t v___x_577_; uint64_t v___x_578_; size_t v___x_579_; size_t v___x_580_; size_t v___x_581_; size_t v___x_582_; size_t v___x_583_; lean_object* v___x_584_; uint8_t v___x_585_; 
v___x_573_ = 32ULL;
v___x_574_ = lean_uint64_shift_right(v___y_572_, v___x_573_);
v_fold_575_ = lean_uint64_xor(v___y_572_, v___x_574_);
v___x_576_ = 16ULL;
v___x_577_ = lean_uint64_shift_right(v_fold_575_, v___x_576_);
v___x_578_ = lean_uint64_xor(v_fold_575_, v___x_577_);
v___x_579_ = lean_uint64_to_usize(v___x_578_);
v___x_580_ = lean_usize_of_nat(v___x_570_);
v___x_581_ = ((size_t)1ULL);
v___x_582_ = lean_usize_sub(v___x_580_, v___x_581_);
v___x_583_ = lean_usize_land(v___x_579_, v___x_582_);
v___x_584_ = lean_array_uget_borrowed(v_buckets_569_, v___x_583_);
v___x_585_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField_spec__0_spec__0___redArg(v_a_568_, v___x_584_);
return v___x_585_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNotFieldQuick_spec__0___redArg___boxed(lean_object* v_m_588_, lean_object* v_a_589_){
_start:
{
uint8_t v_res_590_; lean_object* v_r_591_; 
v_res_590_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNotFieldQuick_spec__0___redArg(v_m_588_, v_a_589_);
lean_dec(v_a_589_);
lean_dec_ref(v_m_588_);
v_r_591_ = lean_box(v_res_590_);
return v_r_591_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNotFieldQuick(lean_object* v_type_592_){
_start:
{
lean_object* v___x_593_; 
v___x_593_ = l_Lean_Expr_getAppFn(v_type_592_);
if (lean_obj_tag(v___x_593_) == 4)
{
lean_object* v_declName_594_; lean_object* v___x_595_; uint8_t v___x_596_; 
v_declName_594_ = lean_ctor_get(v___x_593_, 0);
lean_inc(v_declName_594_);
lean_dec_ref_known(v___x_593_, 2);
v___x_595_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField;
v___x_596_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNotFieldQuick_spec__0___redArg(v___x_595_, v_declName_594_);
lean_dec(v_declName_594_);
return v___x_596_;
}
else
{
uint8_t v___x_597_; 
lean_dec_ref(v___x_593_);
v___x_597_ = 0;
return v___x_597_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNotFieldQuick___boxed(lean_object* v_type_598_){
_start:
{
uint8_t v_res_599_; lean_object* v_r_600_; 
v_res_599_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNotFieldQuick(v_type_598_);
lean_dec_ref(v_type_598_);
v_r_600_ = lean_box(v_res_599_);
return v_r_600_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNotFieldQuick_spec__0(lean_object* v_00_u03b2_601_, lean_object* v_m_602_, lean_object* v_a_603_){
_start:
{
uint8_t v___x_604_; 
v___x_604_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNotFieldQuick_spec__0___redArg(v_m_602_, v_a_603_);
return v___x_604_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNotFieldQuick_spec__0___boxed(lean_object* v_00_u03b2_605_, lean_object* v_m_606_, lean_object* v_a_607_){
_start:
{
uint8_t v_res_608_; lean_object* v_r_609_; 
v_res_608_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNotFieldQuick_spec__0(v_00_u03b2_605_, v_m_606_, v_a_607_);
lean_dec(v_a_607_);
lean_dec_ref(v_m_606_);
v_r_609_ = lean_box(v_res_608_);
return v_r_609_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_expandDiv___redArg(lean_object* v_e_640_, lean_object* v_a_641_, lean_object* v_a_642_, lean_object* v_a_643_, lean_object* v_a_644_){
_start:
{
lean_object* v___x_655_; 
v___x_655_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_640_, v_a_642_);
if (lean_obj_tag(v___x_655_) == 0)
{
lean_object* v_a_656_; lean_object* v___x_657_; uint8_t v___x_658_; 
v_a_656_ = lean_ctor_get(v___x_655_, 0);
lean_inc(v_a_656_);
lean_dec_ref_known(v___x_655_, 1);
v___x_657_ = l_Lean_Expr_cleanupAnnotations(v_a_656_);
lean_dec(v_a_656_);
v___x_658_ = l_Lean_Expr_isApp(v___x_657_);
if (v___x_658_ == 0)
{
lean_dec_ref(v___x_657_);
goto v___jp_646_;
}
else
{
lean_object* v___x_659_; uint8_t v___x_660_; 
v___x_659_ = l_Lean_Expr_appFnCleanup___redArg(v___x_657_);
v___x_660_ = l_Lean_Expr_isApp(v___x_659_);
if (v___x_660_ == 0)
{
lean_dec_ref(v___x_659_);
lean_dec_ref(v___x_657_);
goto v___jp_646_;
}
else
{
lean_object* v___x_661_; uint8_t v___x_662_; 
v___x_661_ = l_Lean_Expr_appFnCleanup___redArg(v___x_659_);
v___x_662_ = l_Lean_Expr_isApp(v___x_661_);
if (v___x_662_ == 0)
{
lean_dec_ref(v___x_661_);
lean_dec_ref(v___x_659_);
lean_dec_ref(v___x_657_);
goto v___jp_646_;
}
else
{
lean_object* v___x_663_; uint8_t v___x_664_; 
v___x_663_ = l_Lean_Expr_appFnCleanup___redArg(v___x_661_);
lean_dec_ref(v___x_661_);
v___x_664_ = l_Lean_Expr_isApp(v___x_663_);
if (v___x_664_ == 0)
{
lean_dec_ref(v___x_663_);
lean_dec_ref(v___x_659_);
lean_dec_ref(v___x_657_);
goto v___jp_646_;
}
else
{
lean_object* v___x_665_; uint8_t v___x_666_; 
v___x_665_ = l_Lean_Expr_appFnCleanup___redArg(v___x_663_);
v___x_666_ = l_Lean_Expr_isApp(v___x_665_);
if (v___x_666_ == 0)
{
lean_dec_ref(v___x_665_);
lean_dec_ref(v___x_663_);
lean_dec_ref(v___x_659_);
lean_dec_ref(v___x_657_);
goto v___jp_646_;
}
else
{
lean_object* v___x_667_; uint8_t v___x_668_; 
v___x_667_ = l_Lean_Expr_appFnCleanup___redArg(v___x_665_);
v___x_668_ = l_Lean_Expr_isApp(v___x_667_);
if (v___x_668_ == 0)
{
lean_dec_ref(v___x_667_);
lean_dec_ref(v___x_665_);
lean_dec_ref(v___x_663_);
lean_dec_ref(v___x_659_);
lean_dec_ref(v___x_657_);
goto v___jp_646_;
}
else
{
lean_object* v___x_669_; lean_object* v___x_670_; uint8_t v___x_671_; 
v___x_669_ = l_Lean_Expr_appFnCleanup___redArg(v___x_667_);
v___x_670_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__2));
v___x_671_ = l_Lean_Expr_isConstOf(v___x_669_, v___x_670_);
if (v___x_671_ == 0)
{
lean_dec_ref(v___x_669_);
lean_dec_ref(v___x_667_);
lean_dec_ref(v___x_665_);
lean_dec_ref(v___x_663_);
lean_dec_ref(v___x_659_);
lean_dec_ref(v___x_657_);
goto v___jp_646_;
}
else
{
lean_object* v_arg_672_; uint8_t v___x_673_; 
v_arg_672_ = lean_ctor_get(v___x_667_, 1);
lean_inc_ref(v_arg_672_);
lean_dec_ref(v___x_667_);
v___x_673_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNotFieldQuick(v_arg_672_);
if (v___x_673_ == 0)
{
lean_object* v_arg_674_; lean_object* v_arg_675_; lean_object* v_arg_676_; lean_object* v_arg_677_; lean_object* v___x_678_; 
v_arg_674_ = lean_ctor_get(v___x_657_, 1);
lean_inc_ref(v_arg_674_);
lean_dec_ref(v___x_657_);
v_arg_675_ = lean_ctor_get(v___x_659_, 1);
lean_inc_ref(v_arg_675_);
lean_dec_ref(v___x_659_);
v_arg_676_ = lean_ctor_get(v___x_663_, 1);
lean_inc_ref(v_arg_676_);
lean_dec_ref(v___x_663_);
v_arg_677_ = lean_ctor_get(v___x_665_, 1);
lean_inc_ref(v_arg_677_);
lean_dec_ref(v___x_665_);
lean_inc_ref(v_arg_672_);
v___x_678_ = l_Lean_Meta_isExprDefEq(v_arg_672_, v_arg_677_, v_a_641_, v_a_642_, v_a_643_, v_a_644_);
if (lean_obj_tag(v___x_678_) == 0)
{
lean_object* v_a_679_; uint8_t v___x_680_; 
v_a_679_ = lean_ctor_get(v___x_678_, 0);
lean_inc(v_a_679_);
lean_dec_ref_known(v___x_678_, 1);
v___x_680_ = lean_unbox(v_a_679_);
lean_dec(v_a_679_);
if (v___x_680_ == 0)
{
lean_dec_ref(v_arg_676_);
lean_dec_ref(v_arg_675_);
lean_dec_ref(v_arg_674_);
lean_dec_ref(v_arg_672_);
lean_dec_ref(v___x_669_);
goto v___jp_649_;
}
else
{
lean_object* v___x_681_; 
lean_inc_ref(v_arg_672_);
v___x_681_ = l_Lean_Meta_isExprDefEq(v_arg_672_, v_arg_676_, v_a_641_, v_a_642_, v_a_643_, v_a_644_);
if (lean_obj_tag(v___x_681_) == 0)
{
lean_object* v_a_682_; uint8_t v___x_683_; 
v_a_682_ = lean_ctor_get(v___x_681_, 0);
lean_inc(v_a_682_);
lean_dec_ref_known(v___x_681_, 1);
v___x_683_ = lean_unbox(v_a_682_);
if (v___x_683_ == 0)
{
lean_dec(v_a_682_);
lean_dec_ref(v_arg_675_);
lean_dec_ref(v_arg_674_);
lean_dec_ref(v_arg_672_);
lean_dec_ref(v___x_669_);
goto v___jp_649_;
}
else
{
lean_object* v___x_684_; 
v___x_684_ = l_Lean_Expr_constLevels_x21(v___x_669_);
lean_dec_ref(v___x_669_);
if (lean_obj_tag(v___x_684_) == 1)
{
lean_object* v_tail_685_; 
v_tail_685_ = lean_ctor_get(v___x_684_, 1);
if (lean_obj_tag(v_tail_685_) == 1)
{
lean_object* v_tail_686_; 
v_tail_686_ = lean_ctor_get(v_tail_685_, 1);
lean_inc(v_tail_686_);
if (lean_obj_tag(v_tail_686_) == 1)
{
lean_object* v_tail_687_; lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_789_; 
v_tail_687_ = lean_ctor_get(v_tail_686_, 1);
v_isSharedCheck_789_ = !lean_is_exclusive(v_tail_686_);
if (v_isSharedCheck_789_ == 0)
{
lean_object* v_unused_790_; 
v_unused_790_ = lean_ctor_get(v_tail_686_, 0);
lean_dec(v_unused_790_);
v___x_689_ = v_tail_686_;
v_isShared_690_ = v_isSharedCheck_789_;
goto v_resetjp_688_;
}
else
{
lean_inc(v_tail_687_);
lean_dec(v_tail_686_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_789_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
if (lean_obj_tag(v_tail_687_) == 0)
{
lean_object* v_head_691_; lean_object* v___x_692_; lean_object* v___x_694_; 
v_head_691_ = lean_ctor_get(v___x_684_, 0);
v___x_692_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__4));
lean_inc(v_head_691_);
if (v_isShared_690_ == 0)
{
lean_ctor_set(v___x_689_, 0, v_head_691_);
v___x_694_ = v___x_689_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v_head_691_);
lean_ctor_set(v_reuseFailAlloc_788_, 1, v_tail_687_);
v___x_694_ = v_reuseFailAlloc_788_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; 
lean_inc_ref(v___x_694_);
v___x_695_ = l_Lean_mkConst(v___x_692_, v___x_694_);
lean_inc_ref(v_arg_672_);
v___x_696_ = l_Lean_Expr_app___override(v___x_695_, v_arg_672_);
v___x_697_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v___x_696_, v_a_641_, v_a_642_, v_a_643_, v_a_644_);
if (lean_obj_tag(v___x_697_) == 0)
{
lean_object* v_a_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_779_; 
v_a_698_ = lean_ctor_get(v___x_697_, 0);
v_isSharedCheck_779_ = !lean_is_exclusive(v___x_697_);
if (v_isSharedCheck_779_ == 0)
{
v___x_700_ = v___x_697_;
v_isShared_701_ = v_isSharedCheck_779_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_a_698_);
lean_dec(v___x_697_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_779_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
if (lean_obj_tag(v_a_698_) == 1)
{
lean_object* v_val_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
lean_del_object(v___x_700_);
v_val_702_ = lean_ctor_get(v_a_698_, 0);
lean_inc(v_val_702_);
lean_dec_ref_known(v_a_698_, 1);
v___x_703_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__6));
lean_inc_ref(v___x_684_);
v___x_704_ = l_Lean_mkConst(v___x_703_, v___x_684_);
lean_inc_ref_n(v_arg_672_, 3);
v___x_705_ = l_Lean_mkApp3(v___x_704_, v_arg_672_, v_arg_672_, v_arg_672_);
v___x_706_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v___x_705_, v_a_641_, v_a_642_, v_a_643_, v_a_644_);
if (lean_obj_tag(v___x_706_) == 0)
{
lean_object* v_a_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_766_; 
v_a_707_ = lean_ctor_get(v___x_706_, 0);
v_isSharedCheck_766_ = !lean_is_exclusive(v___x_706_);
if (v_isSharedCheck_766_ == 0)
{
v___x_709_ = v___x_706_;
v_isShared_710_ = v_isSharedCheck_766_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_a_707_);
lean_dec(v___x_706_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_766_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
if (lean_obj_tag(v_a_707_) == 1)
{
lean_object* v_val_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_761_; 
lean_del_object(v___x_709_);
v_val_711_ = lean_ctor_get(v_a_707_, 0);
v_isSharedCheck_761_ = !lean_is_exclusive(v_a_707_);
if (v_isSharedCheck_761_ == 0)
{
v___x_713_ = v_a_707_;
v_isShared_714_ = v_isSharedCheck_761_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_val_711_);
lean_dec(v_a_707_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_761_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; 
v___x_715_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__8));
lean_inc_ref(v___x_694_);
v___x_716_ = l_Lean_mkConst(v___x_715_, v___x_694_);
lean_inc_ref(v_arg_672_);
v___x_717_ = l_Lean_Expr_app___override(v___x_716_, v_arg_672_);
v___x_718_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v___x_717_, v_a_641_, v_a_642_, v_a_643_, v_a_644_);
if (lean_obj_tag(v___x_718_) == 0)
{
lean_object* v_a_719_; lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_752_; 
v_a_719_ = lean_ctor_get(v___x_718_, 0);
v_isSharedCheck_752_ = !lean_is_exclusive(v___x_718_);
if (v_isSharedCheck_752_ == 0)
{
v___x_721_ = v___x_718_;
v_isShared_722_ = v_isSharedCheck_752_;
goto v_resetjp_720_;
}
else
{
lean_inc(v_a_719_);
lean_dec(v___x_718_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_752_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
if (lean_obj_tag(v_a_719_) == 1)
{
lean_object* v_val_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_747_; 
v_val_723_ = lean_ctor_get(v_a_719_, 0);
v_isSharedCheck_747_ = !lean_is_exclusive(v_a_719_);
if (v_isSharedCheck_747_ == 0)
{
v___x_725_ = v_a_719_;
v_isShared_726_ = v_isSharedCheck_747_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_val_723_);
lean_dec(v_a_719_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_747_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_737_; 
v___x_727_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__10));
v___x_728_ = l_Lean_mkConst(v___x_727_, v___x_684_);
v___x_729_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__12));
lean_inc_ref(v___x_694_);
v___x_730_ = l_Lean_mkConst(v___x_729_, v___x_694_);
lean_inc_ref(v_arg_674_);
lean_inc_ref_n(v_arg_672_, 4);
v___x_731_ = l_Lean_mkApp3(v___x_730_, v_arg_672_, v_val_723_, v_arg_674_);
lean_inc_ref(v_arg_675_);
v___x_732_ = l_Lean_mkApp6(v___x_728_, v_arg_672_, v_arg_672_, v_arg_672_, v_val_711_, v_arg_675_, v___x_731_);
v___x_733_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__14));
v___x_734_ = l_Lean_mkConst(v___x_733_, v___x_694_);
v___x_735_ = l_Lean_mkApp4(v___x_734_, v_arg_672_, v_val_702_, v_arg_675_, v_arg_674_);
if (v_isShared_726_ == 0)
{
lean_ctor_set(v___x_725_, 0, v___x_735_);
v___x_737_ = v___x_725_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v___x_735_);
v___x_737_ = v_reuseFailAlloc_746_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
lean_object* v___x_738_; uint8_t v___x_739_; lean_object* v___x_741_; 
v___x_738_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_738_, 0, v___x_732_);
lean_ctor_set(v___x_738_, 1, v___x_737_);
v___x_739_ = lean_unbox(v_a_682_);
lean_dec(v_a_682_);
lean_ctor_set_uint8(v___x_738_, sizeof(void*)*2, v___x_739_);
if (v_isShared_714_ == 0)
{
lean_ctor_set(v___x_713_, 0, v___x_738_);
v___x_741_ = v___x_713_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v___x_738_);
v___x_741_ = v_reuseFailAlloc_745_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
lean_object* v___x_743_; 
if (v_isShared_722_ == 0)
{
lean_ctor_set(v___x_721_, 0, v___x_741_);
v___x_743_ = v___x_721_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v___x_741_);
v___x_743_ = v_reuseFailAlloc_744_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
return v___x_743_;
}
}
}
}
}
else
{
lean_object* v___x_748_; lean_object* v___x_750_; 
lean_dec(v_a_719_);
lean_del_object(v___x_713_);
lean_dec(v_val_711_);
lean_dec(v_val_702_);
lean_dec_ref(v___x_694_);
lean_dec_ref_known(v___x_684_, 2);
lean_dec(v_a_682_);
lean_dec_ref(v_arg_675_);
lean_dec_ref(v_arg_674_);
lean_dec_ref(v_arg_672_);
v___x_748_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__0));
if (v_isShared_722_ == 0)
{
lean_ctor_set(v___x_721_, 0, v___x_748_);
v___x_750_ = v___x_721_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v___x_748_);
v___x_750_ = v_reuseFailAlloc_751_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
return v___x_750_;
}
}
}
}
else
{
lean_object* v_a_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_760_; 
lean_del_object(v___x_713_);
lean_dec(v_val_711_);
lean_dec(v_val_702_);
lean_dec_ref(v___x_694_);
lean_dec_ref_known(v___x_684_, 2);
lean_dec(v_a_682_);
lean_dec_ref(v_arg_675_);
lean_dec_ref(v_arg_674_);
lean_dec_ref(v_arg_672_);
v_a_753_ = lean_ctor_get(v___x_718_, 0);
v_isSharedCheck_760_ = !lean_is_exclusive(v___x_718_);
if (v_isSharedCheck_760_ == 0)
{
v___x_755_ = v___x_718_;
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_a_753_);
lean_dec(v___x_718_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v___x_758_; 
if (v_isShared_756_ == 0)
{
v___x_758_ = v___x_755_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v_a_753_);
v___x_758_ = v_reuseFailAlloc_759_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
return v___x_758_;
}
}
}
}
}
else
{
lean_object* v___x_762_; lean_object* v___x_764_; 
lean_dec(v_a_707_);
lean_dec(v_val_702_);
lean_dec_ref(v___x_694_);
lean_dec_ref_known(v___x_684_, 2);
lean_dec(v_a_682_);
lean_dec_ref(v_arg_675_);
lean_dec_ref(v_arg_674_);
lean_dec_ref(v_arg_672_);
v___x_762_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__0));
if (v_isShared_710_ == 0)
{
lean_ctor_set(v___x_709_, 0, v___x_762_);
v___x_764_ = v___x_709_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v___x_762_);
v___x_764_ = v_reuseFailAlloc_765_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
return v___x_764_;
}
}
}
}
else
{
lean_object* v_a_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_774_; 
lean_dec(v_val_702_);
lean_dec_ref(v___x_694_);
lean_dec_ref_known(v___x_684_, 2);
lean_dec(v_a_682_);
lean_dec_ref(v_arg_675_);
lean_dec_ref(v_arg_674_);
lean_dec_ref(v_arg_672_);
v_a_767_ = lean_ctor_get(v___x_706_, 0);
v_isSharedCheck_774_ = !lean_is_exclusive(v___x_706_);
if (v_isSharedCheck_774_ == 0)
{
v___x_769_ = v___x_706_;
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_a_767_);
lean_dec(v___x_706_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v___x_772_; 
if (v_isShared_770_ == 0)
{
v___x_772_ = v___x_769_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v_a_767_);
v___x_772_ = v_reuseFailAlloc_773_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
return v___x_772_;
}
}
}
}
else
{
lean_object* v___x_775_; lean_object* v___x_777_; 
lean_dec(v_a_698_);
lean_dec_ref(v___x_694_);
lean_dec_ref_known(v___x_684_, 2);
lean_dec(v_a_682_);
lean_dec_ref(v_arg_675_);
lean_dec_ref(v_arg_674_);
lean_dec_ref(v_arg_672_);
v___x_775_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__0));
if (v_isShared_701_ == 0)
{
lean_ctor_set(v___x_700_, 0, v___x_775_);
v___x_777_ = v___x_700_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v___x_775_);
v___x_777_ = v_reuseFailAlloc_778_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
return v___x_777_;
}
}
}
}
else
{
lean_object* v_a_780_; lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_787_; 
lean_dec_ref(v___x_694_);
lean_dec_ref_known(v___x_684_, 2);
lean_dec(v_a_682_);
lean_dec_ref(v_arg_675_);
lean_dec_ref(v_arg_674_);
lean_dec_ref(v_arg_672_);
v_a_780_ = lean_ctor_get(v___x_697_, 0);
v_isSharedCheck_787_ = !lean_is_exclusive(v___x_697_);
if (v_isSharedCheck_787_ == 0)
{
v___x_782_ = v___x_697_;
v_isShared_783_ = v_isSharedCheck_787_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_a_780_);
lean_dec(v___x_697_);
v___x_782_ = lean_box(0);
v_isShared_783_ = v_isSharedCheck_787_;
goto v_resetjp_781_;
}
v_resetjp_781_:
{
lean_object* v___x_785_; 
if (v_isShared_783_ == 0)
{
v___x_785_ = v___x_782_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v_a_780_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
return v___x_785_;
}
}
}
}
}
else
{
lean_del_object(v___x_689_);
lean_dec(v_tail_687_);
lean_dec_ref_known(v___x_684_, 2);
lean_dec(v_a_682_);
lean_dec_ref(v_arg_675_);
lean_dec_ref(v_arg_674_);
lean_dec_ref(v_arg_672_);
goto v___jp_652_;
}
}
}
else
{
lean_dec(v_tail_686_);
lean_dec_ref_known(v___x_684_, 2);
lean_dec(v_a_682_);
lean_dec_ref(v_arg_675_);
lean_dec_ref(v_arg_674_);
lean_dec_ref(v_arg_672_);
goto v___jp_652_;
}
}
else
{
lean_dec_ref_known(v___x_684_, 2);
lean_dec(v_a_682_);
lean_dec_ref(v_arg_675_);
lean_dec_ref(v_arg_674_);
lean_dec_ref(v_arg_672_);
goto v___jp_652_;
}
}
else
{
lean_dec(v___x_684_);
lean_dec(v_a_682_);
lean_dec_ref(v_arg_675_);
lean_dec_ref(v_arg_674_);
lean_dec_ref(v_arg_672_);
goto v___jp_652_;
}
}
}
else
{
lean_object* v_a_791_; lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_798_; 
lean_dec_ref(v_arg_675_);
lean_dec_ref(v_arg_674_);
lean_dec_ref(v_arg_672_);
lean_dec_ref(v___x_669_);
v_a_791_ = lean_ctor_get(v___x_681_, 0);
v_isSharedCheck_798_ = !lean_is_exclusive(v___x_681_);
if (v_isSharedCheck_798_ == 0)
{
v___x_793_ = v___x_681_;
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
else
{
lean_inc(v_a_791_);
lean_dec(v___x_681_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
lean_object* v___x_796_; 
if (v_isShared_794_ == 0)
{
v___x_796_ = v___x_793_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v_a_791_);
v___x_796_ = v_reuseFailAlloc_797_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
return v___x_796_;
}
}
}
}
}
else
{
lean_object* v_a_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_806_; 
lean_dec_ref(v_arg_676_);
lean_dec_ref(v_arg_675_);
lean_dec_ref(v_arg_674_);
lean_dec_ref(v_arg_672_);
lean_dec_ref(v___x_669_);
v_a_799_ = lean_ctor_get(v___x_678_, 0);
v_isSharedCheck_806_ = !lean_is_exclusive(v___x_678_);
if (v_isSharedCheck_806_ == 0)
{
v___x_801_ = v___x_678_;
v_isShared_802_ = v_isSharedCheck_806_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_a_799_);
lean_dec(v___x_678_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_806_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v___x_804_; 
if (v_isShared_802_ == 0)
{
v___x_804_ = v___x_801_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_a_799_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
}
}
else
{
lean_dec_ref(v_arg_672_);
lean_dec_ref(v___x_669_);
lean_dec_ref(v___x_665_);
lean_dec_ref(v___x_663_);
lean_dec_ref(v___x_659_);
lean_dec_ref(v___x_657_);
goto v___jp_649_;
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
lean_object* v_a_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_814_; 
v_a_807_ = lean_ctor_get(v___x_655_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_655_);
if (v_isSharedCheck_814_ == 0)
{
v___x_809_ = v___x_655_;
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_a_807_);
lean_dec(v___x_655_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_814_;
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
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_a_807_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
}
v___jp_646_:
{
lean_object* v___x_647_; lean_object* v___x_648_; 
v___x_647_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__0));
v___x_648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_648_, 0, v___x_647_);
return v___x_648_;
}
v___jp_649_:
{
lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_650_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__0));
v___x_651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_651_, 0, v___x_650_);
return v___x_651_;
}
v___jp_652_:
{
lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_653_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__0));
v___x_654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_654_, 0, v___x_653_);
return v___x_654_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_expandDiv___redArg___boxed(lean_object* v_e_815_, lean_object* v_a_816_, lean_object* v_a_817_, lean_object* v_a_818_, lean_object* v_a_819_, lean_object* v_a_820_){
_start:
{
lean_object* v_res_821_; 
v_res_821_ = l_Lean_Meta_Grind_Arith_expandDiv___redArg(v_e_815_, v_a_816_, v_a_817_, v_a_818_, v_a_819_);
lean_dec(v_a_819_);
lean_dec_ref(v_a_818_);
lean_dec(v_a_817_);
lean_dec_ref(v_a_816_);
return v_res_821_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_expandDiv(lean_object* v_e_822_, lean_object* v_a_823_, lean_object* v_a_824_, lean_object* v_a_825_, lean_object* v_a_826_, lean_object* v_a_827_, lean_object* v_a_828_, lean_object* v_a_829_){
_start:
{
lean_object* v___x_831_; 
v___x_831_ = l_Lean_Meta_Grind_Arith_expandDiv___redArg(v_e_822_, v_a_826_, v_a_827_, v_a_828_, v_a_829_);
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_expandDiv___boxed(lean_object* v_e_832_, lean_object* v_a_833_, lean_object* v_a_834_, lean_object* v_a_835_, lean_object* v_a_836_, lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_, lean_object* v_a_840_){
_start:
{
lean_object* v_res_841_; 
v_res_841_ = l_Lean_Meta_Grind_Arith_expandDiv(v_e_832_, v_a_833_, v_a_834_, v_a_835_, v_a_836_, v_a_837_, v_a_838_, v_a_839_);
lean_dec(v_a_839_);
lean_dec_ref(v_a_838_);
lean_dec(v_a_837_);
lean_dec_ref(v_a_836_);
lean_dec(v_a_835_);
lean_dec_ref(v_a_834_);
lean_dec(v_a_833_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14_(){
_start:
{
lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_864_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14_));
v___x_865_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14_));
v___x_866_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_expandDiv___boxed), 9, 0);
v___x_867_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_864_, v___x_865_, v___x_866_);
return v___x_867_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14____boxed(lean_object* v_a_868_){
_start:
{
lean_object* v_res_869_; 
v_res_869_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14_();
return v_res_869_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normFieldInv___redArg(lean_object* v_e_880_, lean_object* v_a_881_, lean_object* v_a_882_, lean_object* v_a_883_, lean_object* v_a_884_){
_start:
{
lean_object* v___x_892_; 
lean_inc_ref(v_e_880_);
v___x_892_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_880_, v_a_882_);
if (lean_obj_tag(v___x_892_) == 0)
{
lean_object* v_a_893_; lean_object* v___x_894_; uint8_t v___x_895_; 
v_a_893_ = lean_ctor_get(v___x_892_, 0);
lean_inc(v_a_893_);
lean_dec_ref_known(v___x_892_, 1);
v___x_894_ = l_Lean_Expr_cleanupAnnotations(v_a_893_);
lean_dec(v_a_893_);
v___x_895_ = l_Lean_Expr_isApp(v___x_894_);
if (v___x_895_ == 0)
{
lean_dec_ref(v___x_894_);
lean_dec_ref(v_e_880_);
goto v___jp_889_;
}
else
{
lean_object* v___x_896_; uint8_t v___x_897_; 
v___x_896_ = l_Lean_Expr_appFnCleanup___redArg(v___x_894_);
v___x_897_ = l_Lean_Expr_isApp(v___x_896_);
if (v___x_897_ == 0)
{
lean_dec_ref(v___x_896_);
lean_dec_ref(v___x_894_);
lean_dec_ref(v_e_880_);
goto v___jp_889_;
}
else
{
lean_object* v___x_898_; uint8_t v___x_899_; 
v___x_898_ = l_Lean_Expr_appFnCleanup___redArg(v___x_896_);
lean_dec_ref(v___x_896_);
v___x_899_ = l_Lean_Expr_isApp(v___x_898_);
if (v___x_899_ == 0)
{
lean_dec_ref(v___x_898_);
lean_dec_ref(v___x_894_);
lean_dec_ref(v_e_880_);
goto v___jp_889_;
}
else
{
lean_object* v___x_900_; lean_object* v___x_901_; uint8_t v___x_902_; 
v___x_900_ = l_Lean_Expr_appFnCleanup___redArg(v___x_898_);
v___x_901_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__12));
v___x_902_ = l_Lean_Expr_isConstOf(v___x_900_, v___x_901_);
lean_dec_ref(v___x_900_);
if (v___x_902_ == 0)
{
lean_dec_ref(v___x_898_);
lean_dec_ref(v___x_894_);
lean_dec_ref(v_e_880_);
goto v___jp_889_;
}
else
{
lean_object* v_arg_903_; lean_object* v___y_905_; lean_object* v___y_906_; lean_object* v___y_907_; lean_object* v___y_908_; uint8_t v___x_956_; 
v_arg_903_ = lean_ctor_get(v___x_898_, 1);
lean_inc_ref(v_arg_903_);
lean_dec_ref(v___x_898_);
v___x_956_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNotFieldQuick(v_arg_903_);
if (v___x_956_ == 0)
{
lean_object* v_arg_957_; lean_object* v___x_958_; 
v_arg_957_ = lean_ctor_get(v___x_894_, 1);
lean_inc_ref(v_arg_957_);
lean_dec_ref(v___x_894_);
v___x_958_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_957_, v_a_882_);
if (lean_obj_tag(v___x_958_) == 0)
{
lean_object* v_a_959_; lean_object* v___x_960_; uint8_t v___x_961_; 
v_a_959_ = lean_ctor_get(v___x_958_, 0);
lean_inc(v_a_959_);
lean_dec_ref_known(v___x_958_, 1);
v___x_960_ = l_Lean_Expr_cleanupAnnotations(v_a_959_);
lean_dec(v_a_959_);
v___x_961_ = l_Lean_Expr_isApp(v___x_960_);
if (v___x_961_ == 0)
{
lean_dec_ref(v___x_960_);
v___y_905_ = v_a_881_;
v___y_906_ = v_a_882_;
v___y_907_ = v_a_883_;
v___y_908_ = v_a_884_;
goto v___jp_904_;
}
else
{
lean_object* v___x_962_; uint8_t v___x_963_; 
v___x_962_ = l_Lean_Expr_appFnCleanup___redArg(v___x_960_);
lean_dec_ref(v___x_960_);
v___x_963_ = l_Lean_Expr_isApp(v___x_962_);
if (v___x_963_ == 0)
{
lean_dec_ref(v___x_962_);
v___y_905_ = v_a_881_;
v___y_906_ = v_a_882_;
v___y_907_ = v_a_883_;
v___y_908_ = v_a_884_;
goto v___jp_904_;
}
else
{
lean_object* v___x_964_; uint8_t v___x_965_; 
v___x_964_ = l_Lean_Expr_appFnCleanup___redArg(v___x_962_);
lean_dec_ref(v___x_962_);
v___x_965_ = l_Lean_Expr_isApp(v___x_964_);
if (v___x_965_ == 0)
{
lean_dec_ref(v___x_964_);
v___y_905_ = v_a_881_;
v___y_906_ = v_a_882_;
v___y_907_ = v_a_883_;
v___y_908_ = v_a_884_;
goto v___jp_904_;
}
else
{
lean_object* v___x_966_; lean_object* v___x_967_; uint8_t v___x_968_; 
v___x_966_ = l_Lean_Expr_appFnCleanup___redArg(v___x_964_);
lean_dec_ref(v___x_964_);
v___x_967_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__2));
v___x_968_ = l_Lean_Expr_isConstOf(v___x_966_, v___x_967_);
if (v___x_968_ == 0)
{
lean_object* v___x_969_; uint8_t v___x_970_; 
v___x_969_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__5));
v___x_970_ = l_Lean_Expr_isConstOf(v___x_966_, v___x_969_);
lean_dec_ref(v___x_966_);
if (v___x_970_ == 0)
{
v___y_905_ = v_a_881_;
v___y_906_ = v_a_882_;
v___y_907_ = v_a_883_;
v___y_908_ = v_a_884_;
goto v___jp_904_;
}
else
{
lean_dec_ref(v_arg_903_);
lean_dec_ref(v_e_880_);
goto v___jp_886_;
}
}
else
{
lean_dec_ref(v___x_966_);
lean_dec_ref(v_arg_903_);
lean_dec_ref(v_e_880_);
goto v___jp_886_;
}
}
}
}
}
else
{
lean_object* v_a_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_978_; 
lean_dec_ref(v_arg_903_);
lean_dec_ref(v_e_880_);
v_a_971_ = lean_ctor_get(v___x_958_, 0);
v_isSharedCheck_978_ = !lean_is_exclusive(v___x_958_);
if (v_isSharedCheck_978_ == 0)
{
v___x_973_ = v___x_958_;
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_a_971_);
lean_dec(v___x_958_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
lean_object* v___x_976_; 
if (v_isShared_974_ == 0)
{
v___x_976_ = v___x_973_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v_a_971_);
v___x_976_ = v_reuseFailAlloc_977_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
return v___x_976_;
}
}
}
}
else
{
lean_dec_ref(v_arg_903_);
lean_dec_ref(v___x_894_);
lean_dec_ref(v_e_880_);
goto v___jp_886_;
}
v___jp_904_:
{
lean_object* v___x_909_; 
v___x_909_ = l_Lean_Meta_Grind_Arith_normFieldExpr_x3f(v_e_880_, v_arg_903_, v___y_905_, v___y_906_, v___y_907_, v___y_908_);
if (lean_obj_tag(v___x_909_) == 0)
{
lean_object* v_a_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_947_; 
v_a_910_ = lean_ctor_get(v___x_909_, 0);
v_isSharedCheck_947_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_947_ == 0)
{
v___x_912_ = v___x_909_;
v_isShared_913_ = v_isSharedCheck_947_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_a_910_);
lean_dec(v___x_909_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_947_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
if (lean_obj_tag(v_a_910_) == 1)
{
lean_object* v_val_914_; lean_object* v___x_916_; uint8_t v_isShared_917_; uint8_t v_isSharedCheck_942_; 
lean_del_object(v___x_912_);
v_val_914_ = lean_ctor_get(v_a_910_, 0);
v_isSharedCheck_942_ = !lean_is_exclusive(v_a_910_);
if (v_isSharedCheck_942_ == 0)
{
v___x_916_ = v_a_910_;
v_isShared_917_ = v_isSharedCheck_942_;
goto v_resetjp_915_;
}
else
{
lean_inc(v_val_914_);
lean_dec(v_a_910_);
v___x_916_ = lean_box(0);
v_isShared_917_ = v_isSharedCheck_942_;
goto v_resetjp_915_;
}
v_resetjp_915_:
{
lean_object* v_fst_918_; lean_object* v_snd_919_; lean_object* v___x_920_; 
v_fst_918_ = lean_ctor_get(v_val_914_, 0);
lean_inc(v_fst_918_);
v_snd_919_ = lean_ctor_get(v_val_914_, 1);
lean_inc_n(v_snd_919_, 2);
lean_dec(v_val_914_);
v___x_920_ = l_Lean_Meta_checkWithKernel(v_snd_919_, v___y_905_, v___y_906_, v___y_907_, v___y_908_);
if (lean_obj_tag(v___x_920_) == 0)
{
lean_object* v___x_922_; uint8_t v_isShared_923_; uint8_t v_isSharedCheck_932_; 
v_isSharedCheck_932_ = !lean_is_exclusive(v___x_920_);
if (v_isSharedCheck_932_ == 0)
{
lean_object* v_unused_933_; 
v_unused_933_ = lean_ctor_get(v___x_920_, 0);
lean_dec(v_unused_933_);
v___x_922_ = v___x_920_;
v_isShared_923_ = v_isSharedCheck_932_;
goto v_resetjp_921_;
}
else
{
lean_dec(v___x_920_);
v___x_922_ = lean_box(0);
v_isShared_923_ = v_isSharedCheck_932_;
goto v_resetjp_921_;
}
v_resetjp_921_:
{
lean_object* v___x_925_; 
if (v_isShared_917_ == 0)
{
lean_ctor_set(v___x_916_, 0, v_snd_919_);
v___x_925_ = v___x_916_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v_snd_919_);
v___x_925_ = v_reuseFailAlloc_931_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_929_; 
v___x_926_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_926_, 0, v_fst_918_);
lean_ctor_set(v___x_926_, 1, v___x_925_);
lean_ctor_set_uint8(v___x_926_, sizeof(void*)*2, v___x_902_);
v___x_927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_927_, 0, v___x_926_);
if (v_isShared_923_ == 0)
{
lean_ctor_set(v___x_922_, 0, v___x_927_);
v___x_929_ = v___x_922_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v___x_927_);
v___x_929_ = v_reuseFailAlloc_930_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
return v___x_929_;
}
}
}
}
else
{
lean_object* v_a_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_941_; 
lean_dec(v_snd_919_);
lean_dec(v_fst_918_);
lean_del_object(v___x_916_);
v_a_934_ = lean_ctor_get(v___x_920_, 0);
v_isSharedCheck_941_ = !lean_is_exclusive(v___x_920_);
if (v_isSharedCheck_941_ == 0)
{
v___x_936_ = v___x_920_;
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_a_934_);
lean_dec(v___x_920_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v___x_939_; 
if (v_isShared_937_ == 0)
{
v___x_939_ = v___x_936_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v_a_934_);
v___x_939_ = v_reuseFailAlloc_940_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
return v___x_939_;
}
}
}
}
}
else
{
lean_object* v___x_943_; lean_object* v___x_945_; 
lean_dec(v_a_910_);
v___x_943_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__0));
if (v_isShared_913_ == 0)
{
lean_ctor_set(v___x_912_, 0, v___x_943_);
v___x_945_ = v___x_912_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v___x_943_);
v___x_945_ = v_reuseFailAlloc_946_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
return v___x_945_;
}
}
}
}
else
{
lean_object* v_a_948_; lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_955_; 
v_a_948_ = lean_ctor_get(v___x_909_, 0);
v_isSharedCheck_955_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_955_ == 0)
{
v___x_950_ = v___x_909_;
v_isShared_951_ = v_isSharedCheck_955_;
goto v_resetjp_949_;
}
else
{
lean_inc(v_a_948_);
lean_dec(v___x_909_);
v___x_950_ = lean_box(0);
v_isShared_951_ = v_isSharedCheck_955_;
goto v_resetjp_949_;
}
v_resetjp_949_:
{
lean_object* v___x_953_; 
if (v_isShared_951_ == 0)
{
v___x_953_ = v___x_950_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v_a_948_);
v___x_953_ = v_reuseFailAlloc_954_;
goto v_reusejp_952_;
}
v_reusejp_952_:
{
return v___x_953_;
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
lean_object* v_a_979_; lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_986_; 
lean_dec_ref(v_e_880_);
v_a_979_ = lean_ctor_get(v___x_892_, 0);
v_isSharedCheck_986_ = !lean_is_exclusive(v___x_892_);
if (v_isSharedCheck_986_ == 0)
{
v___x_981_ = v___x_892_;
v_isShared_982_ = v_isSharedCheck_986_;
goto v_resetjp_980_;
}
else
{
lean_inc(v_a_979_);
lean_dec(v___x_892_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_986_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
lean_object* v___x_984_; 
if (v_isShared_982_ == 0)
{
v___x_984_ = v___x_981_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v_a_979_);
v___x_984_ = v_reuseFailAlloc_985_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
return v___x_984_;
}
}
}
v___jp_886_:
{
lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_887_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__0));
v___x_888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_888_, 0, v___x_887_);
return v___x_888_;
}
v___jp_889_:
{
lean_object* v___x_890_; lean_object* v___x_891_; 
v___x_890_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__0));
v___x_891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_891_, 0, v___x_890_);
return v___x_891_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normFieldInv___redArg___boxed(lean_object* v_e_987_, lean_object* v_a_988_, lean_object* v_a_989_, lean_object* v_a_990_, lean_object* v_a_991_, lean_object* v_a_992_){
_start:
{
lean_object* v_res_993_; 
v_res_993_ = l_Lean_Meta_Grind_Arith_normFieldInv___redArg(v_e_987_, v_a_988_, v_a_989_, v_a_990_, v_a_991_);
lean_dec(v_a_991_);
lean_dec_ref(v_a_990_);
lean_dec(v_a_989_);
lean_dec_ref(v_a_988_);
return v_res_993_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normFieldInv(lean_object* v_e_994_, lean_object* v_a_995_, lean_object* v_a_996_, lean_object* v_a_997_, lean_object* v_a_998_, lean_object* v_a_999_, lean_object* v_a_1000_, lean_object* v_a_1001_){
_start:
{
lean_object* v___x_1003_; 
v___x_1003_ = l_Lean_Meta_Grind_Arith_normFieldInv___redArg(v_e_994_, v_a_998_, v_a_999_, v_a_1000_, v_a_1001_);
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normFieldInv___boxed(lean_object* v_e_1004_, lean_object* v_a_1005_, lean_object* v_a_1006_, lean_object* v_a_1007_, lean_object* v_a_1008_, lean_object* v_a_1009_, lean_object* v_a_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_){
_start:
{
lean_object* v_res_1013_; 
v_res_1013_ = l_Lean_Meta_Grind_Arith_normFieldInv(v_e_1004_, v_a_1005_, v_a_1006_, v_a_1007_, v_a_1008_, v_a_1009_, v_a_1010_, v_a_1011_);
lean_dec(v_a_1011_);
lean_dec_ref(v_a_1010_);
lean_dec(v_a_1009_);
lean_dec_ref(v_a_1008_);
lean_dec(v_a_1007_);
lean_dec_ref(v_a_1006_);
lean_dec(v_a_1005_);
return v_res_1013_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13_(){
_start:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; 
v___x_1033_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13_));
v___x_1034_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13_));
v___x_1035_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_normFieldInv___boxed), 9, 0);
v___x_1036_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_1033_, v___x_1034_, v___x_1035_);
return v___x_1036_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13____boxed(lean_object* v_a_1037_){
_start:
{
lean_object* v_res_1038_; 
v_res_1038_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13_();
return v_res_1038_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_Arith_normInst_spec__0___redArg(lean_object* v_instPos_1039_, lean_object* v_inst_1040_, lean_object* v_x_1041_, lean_object* v_x_1042_, lean_object* v_x_1043_){
_start:
{
if (lean_obj_tag(v_x_1041_) == 5)
{
lean_object* v_fn_1045_; lean_object* v_arg_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; 
v_fn_1045_ = lean_ctor_get(v_x_1041_, 0);
lean_inc_ref(v_fn_1045_);
v_arg_1046_ = lean_ctor_get(v_x_1041_, 1);
lean_inc_ref(v_arg_1046_);
lean_dec_ref_known(v_x_1041_, 2);
v___x_1047_ = lean_array_set(v_x_1042_, v_x_1043_, v_arg_1046_);
v___x_1048_ = lean_unsigned_to_nat(1u);
v___x_1049_ = lean_nat_sub(v_x_1043_, v___x_1048_);
lean_dec(v_x_1043_);
v_x_1041_ = v_fn_1045_;
v_x_1042_ = v___x_1047_;
v_x_1043_ = v___x_1049_;
goto _start;
}
else
{
lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; 
lean_dec(v_x_1043_);
v___x_1051_ = lean_array_set(v_x_1042_, v_instPos_1039_, v_inst_1040_);
v___x_1052_ = l_Lean_mkAppN(v_x_1041_, v___x_1051_);
lean_dec_ref(v___x_1051_);
v___x_1053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1053_, 0, v___x_1052_);
v___x_1054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1054_, 0, v___x_1053_);
return v___x_1054_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_Arith_normInst_spec__0___redArg___boxed(lean_object* v_instPos_1055_, lean_object* v_inst_1056_, lean_object* v_x_1057_, lean_object* v_x_1058_, lean_object* v_x_1059_, lean_object* v___y_1060_){
_start:
{
lean_object* v_res_1061_; 
v_res_1061_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_Arith_normInst_spec__0___redArg(v_instPos_1055_, v_inst_1056_, v_x_1057_, v_x_1058_, v_x_1059_);
lean_dec(v_instPos_1055_);
return v_res_1061_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_normInst___closed__1(void){
_start:
{
lean_object* v___x_1064_; lean_object* v_dummy_1065_; 
v___x_1064_ = lean_box(0);
v_dummy_1065_ = l_Lean_Expr_sort___override(v___x_1064_);
return v_dummy_1065_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normInst(lean_object* v_instPos_1066_, lean_object* v_inst_1067_, lean_object* v_e_1068_, lean_object* v_a_1069_, lean_object* v_a_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_){
_start:
{
lean_object* v___y_1081_; lean_object* v___x_1098_; uint8_t v___x_1099_; 
v___x_1098_ = l_Lean_Expr_getAppNumArgs(v_e_1068_);
v___x_1099_ = lean_nat_dec_lt(v_instPos_1066_, v___x_1098_);
if (v___x_1099_ == 0)
{
lean_object* v___x_1100_; lean_object* v___x_1101_; 
lean_dec(v___x_1098_);
lean_dec_ref(v_e_1068_);
lean_dec_ref(v_inst_1067_);
v___x_1100_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_normInst___closed__0));
v___x_1101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1100_);
return v___x_1101_;
}
else
{
lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v_instCurr_1105_; uint8_t v___x_1106_; 
v___x_1102_ = lean_nat_sub(v___x_1098_, v_instPos_1066_);
lean_dec(v___x_1098_);
v___x_1103_ = lean_unsigned_to_nat(1u);
v___x_1104_ = lean_nat_sub(v___x_1102_, v___x_1103_);
lean_dec(v___x_1102_);
v_instCurr_1105_ = l_Lean_Expr_getRevArg_x21(v_e_1068_, v___x_1104_);
v___x_1106_ = lean_expr_eqv(v_inst_1067_, v_instCurr_1105_);
if (v___x_1106_ == 0)
{
lean_object* v___x_1107_; uint8_t v_transparency_1108_; uint8_t v___x_1109_; uint8_t v___x_1110_; 
v___x_1107_ = l_Lean_Meta_Context_config(v_a_1072_);
v_transparency_1108_ = lean_ctor_get_uint8(v___x_1107_, 9);
lean_dec_ref(v___x_1107_);
v___x_1109_ = 3;
v___x_1110_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1108_, v___x_1109_);
if (v___x_1110_ == 0)
{
lean_object* v_keyedConfig_1111_; uint8_t v_trackZetaDelta_1112_; lean_object* v_zetaDeltaSet_1113_; lean_object* v_lctx_1114_; lean_object* v_localInstances_1115_; lean_object* v_defEqCtx_x3f_1116_; lean_object* v_synthPendingDepth_1117_; lean_object* v_customCanUnfoldPredicate_x3f_1118_; uint8_t v_univApprox_1119_; uint8_t v_inTypeClassResolution_1120_; uint8_t v_cacheInferType_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; 
v_keyedConfig_1111_ = lean_ctor_get(v_a_1072_, 0);
v_trackZetaDelta_1112_ = lean_ctor_get_uint8(v_a_1072_, sizeof(void*)*7);
v_zetaDeltaSet_1113_ = lean_ctor_get(v_a_1072_, 1);
v_lctx_1114_ = lean_ctor_get(v_a_1072_, 2);
v_localInstances_1115_ = lean_ctor_get(v_a_1072_, 3);
v_defEqCtx_x3f_1116_ = lean_ctor_get(v_a_1072_, 4);
v_synthPendingDepth_1117_ = lean_ctor_get(v_a_1072_, 5);
v_customCanUnfoldPredicate_x3f_1118_ = lean_ctor_get(v_a_1072_, 6);
v_univApprox_1119_ = lean_ctor_get_uint8(v_a_1072_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1120_ = lean_ctor_get_uint8(v_a_1072_, sizeof(void*)*7 + 2);
v_cacheInferType_1121_ = lean_ctor_get_uint8(v_a_1072_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_1111_);
v___x_1122_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1109_, v_keyedConfig_1111_);
lean_inc(v_customCanUnfoldPredicate_x3f_1118_);
lean_inc(v_synthPendingDepth_1117_);
lean_inc(v_defEqCtx_x3f_1116_);
lean_inc_ref(v_localInstances_1115_);
lean_inc_ref(v_lctx_1114_);
lean_inc(v_zetaDeltaSet_1113_);
v___x_1123_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1123_, 0, v___x_1122_);
lean_ctor_set(v___x_1123_, 1, v_zetaDeltaSet_1113_);
lean_ctor_set(v___x_1123_, 2, v_lctx_1114_);
lean_ctor_set(v___x_1123_, 3, v_localInstances_1115_);
lean_ctor_set(v___x_1123_, 4, v_defEqCtx_x3f_1116_);
lean_ctor_set(v___x_1123_, 5, v_synthPendingDepth_1117_);
lean_ctor_set(v___x_1123_, 6, v_customCanUnfoldPredicate_x3f_1118_);
lean_ctor_set_uint8(v___x_1123_, sizeof(void*)*7, v_trackZetaDelta_1112_);
lean_ctor_set_uint8(v___x_1123_, sizeof(void*)*7 + 1, v_univApprox_1119_);
lean_ctor_set_uint8(v___x_1123_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1120_);
lean_ctor_set_uint8(v___x_1123_, sizeof(void*)*7 + 3, v_cacheInferType_1121_);
lean_inc_ref(v_inst_1067_);
v___x_1124_ = l_Lean_Meta_isExprDefEq(v_inst_1067_, v_instCurr_1105_, v___x_1123_, v_a_1073_, v_a_1074_, v_a_1075_);
lean_dec_ref_known(v___x_1123_, 7);
v___y_1081_ = v___x_1124_;
goto v___jp_1080_;
}
else
{
lean_object* v___x_1125_; 
lean_inc_ref(v_inst_1067_);
v___x_1125_ = l_Lean_Meta_isExprDefEq(v_inst_1067_, v_instCurr_1105_, v_a_1072_, v_a_1073_, v_a_1074_, v_a_1075_);
v___y_1081_ = v___x_1125_;
goto v___jp_1080_;
}
}
else
{
lean_dec_ref(v_instCurr_1105_);
lean_dec_ref(v_e_1068_);
lean_dec_ref(v_inst_1067_);
goto v___jp_1077_;
}
}
v___jp_1077_:
{
lean_object* v___x_1078_; lean_object* v___x_1079_; 
v___x_1078_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_normInst___closed__0));
v___x_1079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1079_, 0, v___x_1078_);
return v___x_1079_;
}
v___jp_1080_:
{
if (lean_obj_tag(v___y_1081_) == 0)
{
lean_object* v_a_1082_; uint8_t v___x_1083_; 
v_a_1082_ = lean_ctor_get(v___y_1081_, 0);
lean_inc(v_a_1082_);
lean_dec_ref_known(v___y_1081_, 1);
v___x_1083_ = lean_unbox(v_a_1082_);
lean_dec(v_a_1082_);
if (v___x_1083_ == 0)
{
lean_dec_ref(v_e_1068_);
lean_dec_ref(v_inst_1067_);
goto v___jp_1077_;
}
else
{
lean_object* v_dummy_1084_; lean_object* v_nargs_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; 
v_dummy_1084_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_normInst___closed__1, &l_Lean_Meta_Grind_Arith_normInst___closed__1_once, _init_l_Lean_Meta_Grind_Arith_normInst___closed__1);
v_nargs_1085_ = l_Lean_Expr_getAppNumArgs(v_e_1068_);
lean_inc(v_nargs_1085_);
v___x_1086_ = lean_mk_array(v_nargs_1085_, v_dummy_1084_);
v___x_1087_ = lean_unsigned_to_nat(1u);
v___x_1088_ = lean_nat_sub(v_nargs_1085_, v___x_1087_);
lean_dec(v_nargs_1085_);
v___x_1089_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_Arith_normInst_spec__0___redArg(v_instPos_1066_, v_inst_1067_, v_e_1068_, v___x_1086_, v___x_1088_);
return v___x_1089_;
}
}
else
{
lean_object* v_a_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1097_; 
lean_dec_ref(v_e_1068_);
lean_dec_ref(v_inst_1067_);
v_a_1090_ = lean_ctor_get(v___y_1081_, 0);
v_isSharedCheck_1097_ = !lean_is_exclusive(v___y_1081_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_1092_ = v___y_1081_;
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_a_1090_);
lean_dec(v___y_1081_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v___x_1095_; 
if (v_isShared_1093_ == 0)
{
v___x_1095_ = v___x_1092_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1096_; 
v_reuseFailAlloc_1096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1096_, 0, v_a_1090_);
v___x_1095_ = v_reuseFailAlloc_1096_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
return v___x_1095_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normInst___boxed(lean_object* v_instPos_1126_, lean_object* v_inst_1127_, lean_object* v_e_1128_, lean_object* v_a_1129_, lean_object* v_a_1130_, lean_object* v_a_1131_, lean_object* v_a_1132_, lean_object* v_a_1133_, lean_object* v_a_1134_, lean_object* v_a_1135_, lean_object* v_a_1136_){
_start:
{
lean_object* v_res_1137_; 
v_res_1137_ = l_Lean_Meta_Grind_Arith_normInst(v_instPos_1126_, v_inst_1127_, v_e_1128_, v_a_1129_, v_a_1130_, v_a_1131_, v_a_1132_, v_a_1133_, v_a_1134_, v_a_1135_);
lean_dec(v_a_1135_);
lean_dec_ref(v_a_1134_);
lean_dec(v_a_1133_);
lean_dec_ref(v_a_1132_);
lean_dec(v_a_1131_);
lean_dec_ref(v_a_1130_);
lean_dec(v_a_1129_);
lean_dec(v_instPos_1126_);
return v_res_1137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_Arith_normInst_spec__0(lean_object* v_instPos_1138_, lean_object* v_inst_1139_, lean_object* v_x_1140_, lean_object* v_x_1141_, lean_object* v_x_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_){
_start:
{
lean_object* v___x_1151_; 
v___x_1151_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_Arith_normInst_spec__0___redArg(v_instPos_1138_, v_inst_1139_, v_x_1140_, v_x_1141_, v_x_1142_);
return v___x_1151_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_Arith_normInst_spec__0___boxed(lean_object* v_instPos_1152_, lean_object* v_inst_1153_, lean_object* v_x_1154_, lean_object* v_x_1155_, lean_object* v_x_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_){
_start:
{
lean_object* v_res_1165_; 
v_res_1165_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_Arith_normInst_spec__0(v_instPos_1152_, v_inst_1153_, v_x_1154_, v_x_1155_, v_x_1156_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_, v___y_1163_);
lean_dec(v___y_1163_);
lean_dec_ref(v___y_1162_);
lean_dec(v___y_1161_);
lean_dec_ref(v___y_1160_);
lean_dec(v___y_1159_);
lean_dec_ref(v___y_1158_);
lean_dec(v___y_1157_);
lean_dec(v_instPos_1152_);
return v_res_1165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatAddInst(lean_object* v_e_1166_, lean_object* v_a_1167_, lean_object* v_a_1168_, lean_object* v_a_1169_, lean_object* v_a_1170_, lean_object* v_a_1171_, lean_object* v_a_1172_, lean_object* v_a_1173_){
_start:
{
lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; 
v___x_1175_ = lean_unsigned_to_nat(3u);
v___x_1176_ = l_Lean_Nat_mkInstHAdd;
v___x_1177_ = l_Lean_Meta_Grind_Arith_normInst(v___x_1175_, v___x_1176_, v_e_1166_, v_a_1167_, v_a_1168_, v_a_1169_, v_a_1170_, v_a_1171_, v_a_1172_, v_a_1173_);
return v___x_1177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatAddInst___boxed(lean_object* v_e_1178_, lean_object* v_a_1179_, lean_object* v_a_1180_, lean_object* v_a_1181_, lean_object* v_a_1182_, lean_object* v_a_1183_, lean_object* v_a_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_){
_start:
{
lean_object* v_res_1187_; 
v_res_1187_ = l_Lean_Meta_Grind_Arith_normNatAddInst(v_e_1178_, v_a_1179_, v_a_1180_, v_a_1181_, v_a_1182_, v_a_1183_, v_a_1184_, v_a_1185_);
lean_dec(v_a_1185_);
lean_dec_ref(v_a_1184_);
lean_dec(v_a_1183_);
lean_dec_ref(v_a_1182_);
lean_dec(v_a_1181_);
lean_dec_ref(v_a_1180_);
lean_dec(v_a_1179_);
return v_res_1187_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17_(){
_start:
{
lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; 
v___x_1219_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17_));
v___x_1220_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__7_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17_));
v___x_1221_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_normNatAddInst___boxed), 9, 0);
v___x_1222_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_1219_, v___x_1220_, v___x_1221_);
return v___x_1222_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17____boxed(lean_object* v_a_1223_){
_start:
{
lean_object* v_res_1224_; 
v_res_1224_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17_();
return v_res_1224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatMulInst(lean_object* v_e_1225_, lean_object* v_a_1226_, lean_object* v_a_1227_, lean_object* v_a_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_, lean_object* v_a_1231_, lean_object* v_a_1232_){
_start:
{
lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; 
v___x_1234_ = lean_unsigned_to_nat(3u);
v___x_1235_ = l_Lean_Nat_mkInstHMul;
v___x_1236_ = l_Lean_Meta_Grind_Arith_normInst(v___x_1234_, v___x_1235_, v_e_1225_, v_a_1226_, v_a_1227_, v_a_1228_, v_a_1229_, v_a_1230_, v_a_1231_, v_a_1232_);
return v___x_1236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatMulInst___boxed(lean_object* v_e_1237_, lean_object* v_a_1238_, lean_object* v_a_1239_, lean_object* v_a_1240_, lean_object* v_a_1241_, lean_object* v_a_1242_, lean_object* v_a_1243_, lean_object* v_a_1244_, lean_object* v_a_1245_){
_start:
{
lean_object* v_res_1246_; 
v_res_1246_ = l_Lean_Meta_Grind_Arith_normNatMulInst(v_e_1237_, v_a_1238_, v_a_1239_, v_a_1240_, v_a_1241_, v_a_1242_, v_a_1243_, v_a_1244_);
lean_dec(v_a_1244_);
lean_dec_ref(v_a_1243_);
lean_dec(v_a_1242_);
lean_dec_ref(v_a_1241_);
lean_dec(v_a_1240_);
lean_dec_ref(v_a_1239_);
lean_dec(v_a_1238_);
return v_res_1246_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17_(){
_start:
{
lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; 
v___x_1270_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17_));
v___x_1271_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17_));
v___x_1272_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_normNatMulInst___boxed), 9, 0);
v___x_1273_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_1270_, v___x_1271_, v___x_1272_);
return v___x_1273_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17____boxed(lean_object* v_a_1274_){
_start:
{
lean_object* v_res_1275_; 
v_res_1275_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17_();
return v_res_1275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatSubInst(lean_object* v_e_1276_, lean_object* v_a_1277_, lean_object* v_a_1278_, lean_object* v_a_1279_, lean_object* v_a_1280_, lean_object* v_a_1281_, lean_object* v_a_1282_, lean_object* v_a_1283_){
_start:
{
lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; 
v___x_1285_ = lean_unsigned_to_nat(3u);
v___x_1286_ = l_Lean_Nat_mkInstHSub;
v___x_1287_ = l_Lean_Meta_Grind_Arith_normInst(v___x_1285_, v___x_1286_, v_e_1276_, v_a_1277_, v_a_1278_, v_a_1279_, v_a_1280_, v_a_1281_, v_a_1282_, v_a_1283_);
return v___x_1287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatSubInst___boxed(lean_object* v_e_1288_, lean_object* v_a_1289_, lean_object* v_a_1290_, lean_object* v_a_1291_, lean_object* v_a_1292_, lean_object* v_a_1293_, lean_object* v_a_1294_, lean_object* v_a_1295_, lean_object* v_a_1296_){
_start:
{
lean_object* v_res_1297_; 
v_res_1297_ = l_Lean_Meta_Grind_Arith_normNatSubInst(v_e_1288_, v_a_1289_, v_a_1290_, v_a_1291_, v_a_1292_, v_a_1293_, v_a_1294_, v_a_1295_);
lean_dec(v_a_1295_);
lean_dec_ref(v_a_1294_);
lean_dec(v_a_1293_);
lean_dec_ref(v_a_1292_);
lean_dec(v_a_1291_);
lean_dec_ref(v_a_1290_);
lean_dec(v_a_1289_);
return v_res_1297_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17_(){
_start:
{
lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; 
v___x_1326_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17_));
v___x_1327_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17_));
v___x_1328_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_normNatSubInst___boxed), 9, 0);
v___x_1329_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_1326_, v___x_1327_, v___x_1328_);
return v___x_1329_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17____boxed(lean_object* v_a_1330_){
_start:
{
lean_object* v_res_1331_; 
v_res_1331_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17_();
return v_res_1331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatDivInst(lean_object* v_e_1332_, lean_object* v_a_1333_, lean_object* v_a_1334_, lean_object* v_a_1335_, lean_object* v_a_1336_, lean_object* v_a_1337_, lean_object* v_a_1338_, lean_object* v_a_1339_){
_start:
{
lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1341_ = lean_unsigned_to_nat(3u);
v___x_1342_ = l_Lean_Nat_mkInstHDiv;
v___x_1343_ = l_Lean_Meta_Grind_Arith_normInst(v___x_1341_, v___x_1342_, v_e_1332_, v_a_1333_, v_a_1334_, v_a_1335_, v_a_1336_, v_a_1337_, v_a_1338_, v_a_1339_);
return v___x_1343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatDivInst___boxed(lean_object* v_e_1344_, lean_object* v_a_1345_, lean_object* v_a_1346_, lean_object* v_a_1347_, lean_object* v_a_1348_, lean_object* v_a_1349_, lean_object* v_a_1350_, lean_object* v_a_1351_, lean_object* v_a_1352_){
_start:
{
lean_object* v_res_1353_; 
v_res_1353_ = l_Lean_Meta_Grind_Arith_normNatDivInst(v_e_1344_, v_a_1345_, v_a_1346_, v_a_1347_, v_a_1348_, v_a_1349_, v_a_1350_, v_a_1351_);
lean_dec(v_a_1351_);
lean_dec_ref(v_a_1350_);
lean_dec(v_a_1349_);
lean_dec_ref(v_a_1348_);
lean_dec(v_a_1347_);
lean_dec_ref(v_a_1346_);
lean_dec(v_a_1345_);
return v_res_1353_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatDivInst_declare__48_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3299992319____hygCtx___hyg_17_(){
_start:
{
lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; 
v___x_1374_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatDivInst_declare__48___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3299992319____hygCtx___hyg_17_));
v___x_1375_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatDivInst_declare__48___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3299992319____hygCtx___hyg_17_));
v___x_1376_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_normNatDivInst___boxed), 9, 0);
v___x_1377_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_1374_, v___x_1375_, v___x_1376_);
return v___x_1377_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatDivInst_declare__48_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3299992319____hygCtx___hyg_17____boxed(lean_object* v_a_1378_){
_start:
{
lean_object* v_res_1379_; 
v_res_1379_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatDivInst_declare__48_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3299992319____hygCtx___hyg_17_();
return v_res_1379_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatModInst(lean_object* v_e_1380_, lean_object* v_a_1381_, lean_object* v_a_1382_, lean_object* v_a_1383_, lean_object* v_a_1384_, lean_object* v_a_1385_, lean_object* v_a_1386_, lean_object* v_a_1387_){
_start:
{
lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; 
v___x_1389_ = lean_unsigned_to_nat(3u);
v___x_1390_ = l_Lean_Nat_mkInstMod;
v___x_1391_ = l_Lean_Meta_Grind_Arith_normInst(v___x_1389_, v___x_1390_, v_e_1380_, v_a_1381_, v_a_1382_, v_a_1383_, v_a_1384_, v_a_1385_, v_a_1386_, v_a_1387_);
return v___x_1391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatModInst___boxed(lean_object* v_e_1392_, lean_object* v_a_1393_, lean_object* v_a_1394_, lean_object* v_a_1395_, lean_object* v_a_1396_, lean_object* v_a_1397_, lean_object* v_a_1398_, lean_object* v_a_1399_, lean_object* v_a_1400_){
_start:
{
lean_object* v_res_1401_; 
v_res_1401_ = l_Lean_Meta_Grind_Arith_normNatModInst(v_e_1392_, v_a_1393_, v_a_1394_, v_a_1395_, v_a_1396_, v_a_1397_, v_a_1398_, v_a_1399_);
lean_dec(v_a_1399_);
lean_dec_ref(v_a_1398_);
lean_dec(v_a_1397_);
lean_dec_ref(v_a_1396_);
lean_dec(v_a_1395_);
lean_dec_ref(v_a_1394_);
lean_dec(v_a_1393_);
return v_res_1401_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17_(){
_start:
{
lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; 
v___x_1430_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17_));
v___x_1431_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__6_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17_));
v___x_1432_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_normNatModInst___boxed), 9, 0);
v___x_1433_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_1430_, v___x_1431_, v___x_1432_);
return v___x_1433_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17____boxed(lean_object* v_a_1434_){
_start:
{
lean_object* v_res_1435_; 
v_res_1435_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17_();
return v_res_1435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatPowInst(lean_object* v_e_1436_, lean_object* v_a_1437_, lean_object* v_a_1438_, lean_object* v_a_1439_, lean_object* v_a_1440_, lean_object* v_a_1441_, lean_object* v_a_1442_, lean_object* v_a_1443_){
_start:
{
lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; 
v___x_1445_ = lean_unsigned_to_nat(3u);
v___x_1446_ = l_Lean_Nat_mkInstHPow;
v___x_1447_ = l_Lean_Meta_Grind_Arith_normInst(v___x_1445_, v___x_1446_, v_e_1436_, v_a_1437_, v_a_1438_, v_a_1439_, v_a_1440_, v_a_1441_, v_a_1442_, v_a_1443_);
return v___x_1447_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatPowInst___boxed(lean_object* v_e_1448_, lean_object* v_a_1449_, lean_object* v_a_1450_, lean_object* v_a_1451_, lean_object* v_a_1452_, lean_object* v_a_1453_, lean_object* v_a_1454_, lean_object* v_a_1455_, lean_object* v_a_1456_){
_start:
{
lean_object* v_res_1457_; 
v_res_1457_ = l_Lean_Meta_Grind_Arith_normNatPowInst(v_e_1448_, v_a_1449_, v_a_1450_, v_a_1451_, v_a_1452_, v_a_1453_, v_a_1454_, v_a_1455_);
lean_dec(v_a_1455_);
lean_dec_ref(v_a_1454_);
lean_dec(v_a_1453_);
lean_dec_ref(v_a_1452_);
lean_dec(v_a_1451_);
lean_dec_ref(v_a_1450_);
lean_dec(v_a_1449_);
return v_res_1457_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatPowInst_declare__58_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4112346720____hygCtx___hyg_17_(){
_start:
{
lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; 
v___x_1478_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatPowInst_declare__58___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4112346720____hygCtx___hyg_17_));
v___x_1479_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatPowInst_declare__58___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4112346720____hygCtx___hyg_17_));
v___x_1480_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_normNatPowInst___boxed), 9, 0);
v___x_1481_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_1478_, v___x_1479_, v___x_1480_);
return v___x_1481_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatPowInst_declare__58_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4112346720____hygCtx___hyg_17____boxed(lean_object* v_a_1482_){
_start:
{
lean_object* v_res_1483_; 
v_res_1483_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatPowInst_declare__58_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4112346720____hygCtx___hyg_17_();
return v_res_1483_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNormNatNum(lean_object* v_00_u03b1_1487_, lean_object* v_n_1488_, lean_object* v_inst_1489_){
_start:
{
lean_object* v___x_1490_; uint8_t v___x_1491_; 
v___x_1490_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__5));
v___x_1491_ = l_Lean_Expr_isConstOf(v_00_u03b1_1487_, v___x_1490_);
if (v___x_1491_ == 0)
{
return v___x_1491_;
}
else
{
if (lean_obj_tag(v_n_1488_) == 9)
{
lean_object* v_a_1492_; 
v_a_1492_ = lean_ctor_get(v_n_1488_, 0);
if (lean_obj_tag(v_a_1492_) == 0)
{
lean_object* v___x_1493_; lean_object* v___x_1494_; uint8_t v___x_1495_; 
v___x_1493_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNormNatNum___closed__1));
v___x_1494_ = lean_unsigned_to_nat(1u);
v___x_1495_ = l_Lean_Expr_isAppOfArity(v_inst_1489_, v___x_1493_, v___x_1494_);
if (v___x_1495_ == 0)
{
return v___x_1495_;
}
else
{
lean_object* v___x_1496_; uint8_t v___x_1497_; 
v___x_1496_ = l_Lean_Expr_appArg_x21(v_inst_1489_);
v___x_1497_ = lean_expr_eqv(v___x_1496_, v_n_1488_);
lean_dec_ref(v___x_1496_);
return v___x_1497_;
}
}
else
{
uint8_t v___x_1498_; 
v___x_1498_ = 0;
return v___x_1498_;
}
}
else
{
uint8_t v___x_1499_; 
v___x_1499_ = 0;
return v___x_1499_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNormNatNum___boxed(lean_object* v_00_u03b1_1500_, lean_object* v_n_1501_, lean_object* v_inst_1502_){
_start:
{
uint8_t v_res_1503_; lean_object* v_r_1504_; 
v_res_1503_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNormNatNum(v_00_u03b1_1500_, v_n_1501_, v_inst_1502_);
lean_dec_ref(v_inst_1502_);
lean_dec_ref(v_n_1501_);
lean_dec_ref(v_00_u03b1_1500_);
v_r_1504_ = lean_box(v_res_1503_);
return v_r_1504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatOfNatInst___redArg(lean_object* v_e_1505_, lean_object* v_a_1506_, lean_object* v_a_1507_, lean_object* v_a_1508_, lean_object* v_a_1509_){
_start:
{
lean_object* v___x_1514_; uint8_t v___x_1515_; 
v___x_1514_ = l_Lean_Expr_cleanupAnnotations(v_e_1505_);
v___x_1515_ = l_Lean_Expr_isApp(v___x_1514_);
if (v___x_1515_ == 0)
{
lean_dec_ref(v___x_1514_);
lean_dec_ref(v_e_1505_);
goto v___jp_1511_;
}
else
{
lean_object* v___x_1516_; uint8_t v___x_1517_; 
v___x_1516_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1514_);
v___x_1517_ = l_Lean_Expr_isApp(v___x_1516_);
if (v___x_1517_ == 0)
{
lean_dec_ref(v___x_1516_);
lean_dec_ref(v___x_1514_);
lean_dec_ref(v_e_1505_);
goto v___jp_1511_;
}
else
{
lean_object* v___x_1518_; uint8_t v___x_1519_; 
v___x_1518_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1516_);
v___x_1519_ = l_Lean_Expr_isApp(v___x_1518_);
if (v___x_1519_ == 0)
{
lean_dec_ref(v___x_1518_);
lean_dec_ref(v___x_1516_);
lean_dec_ref(v___x_1514_);
lean_dec_ref(v_e_1505_);
goto v___jp_1511_;
}
else
{
lean_object* v___x_1520_; lean_object* v___x_1521_; uint8_t v___x_1522_; 
v___x_1520_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1518_);
v___x_1521_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__2));
v___x_1522_ = l_Lean_Expr_isConstOf(v___x_1520_, v___x_1521_);
lean_dec_ref(v___x_1520_);
if (v___x_1522_ == 0)
{
lean_dec_ref(v___x_1518_);
lean_dec_ref(v___x_1516_);
lean_dec_ref(v___x_1514_);
lean_dec_ref(v_e_1505_);
goto v___jp_1511_;
}
else
{
lean_object* v_arg_1523_; lean_object* v_arg_1524_; lean_object* v_arg_1525_; uint8_t v___x_1526_; 
v_arg_1523_ = lean_ctor_get(v___x_1514_, 1);
lean_inc_ref(v_arg_1523_);
lean_dec_ref(v___x_1514_);
v_arg_1524_ = lean_ctor_get(v___x_1516_, 1);
lean_inc_ref(v_arg_1524_);
lean_dec_ref(v___x_1516_);
v_arg_1525_ = lean_ctor_get(v___x_1518_, 1);
lean_inc_ref(v_arg_1525_);
lean_dec_ref(v___x_1518_);
v___x_1526_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNormNatNum(v_arg_1525_, v_arg_1524_, v_arg_1523_);
lean_dec_ref(v_arg_1523_);
lean_dec_ref(v_arg_1524_);
lean_dec_ref(v_arg_1525_);
if (v___x_1526_ == 0)
{
lean_object* v___x_1527_; 
v___x_1527_ = l_Lean_Meta_getNatValue_x3f(v_e_1505_, v_a_1506_, v_a_1507_, v_a_1508_, v_a_1509_);
lean_dec_ref(v_e_1505_);
if (lean_obj_tag(v___x_1527_) == 0)
{
lean_object* v_a_1528_; lean_object* v___x_1530_; uint8_t v_isShared_1531_; uint8_t v_isSharedCheck_1548_; 
v_a_1528_ = lean_ctor_get(v___x_1527_, 0);
v_isSharedCheck_1548_ = !lean_is_exclusive(v___x_1527_);
if (v_isSharedCheck_1548_ == 0)
{
v___x_1530_ = v___x_1527_;
v_isShared_1531_ = v_isSharedCheck_1548_;
goto v_resetjp_1529_;
}
else
{
lean_inc(v_a_1528_);
lean_dec(v___x_1527_);
v___x_1530_ = lean_box(0);
v_isShared_1531_ = v_isSharedCheck_1548_;
goto v_resetjp_1529_;
}
v_resetjp_1529_:
{
if (lean_obj_tag(v_a_1528_) == 1)
{
lean_object* v_val_1532_; lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1543_; 
v_val_1532_ = lean_ctor_get(v_a_1528_, 0);
v_isSharedCheck_1543_ = !lean_is_exclusive(v_a_1528_);
if (v_isSharedCheck_1543_ == 0)
{
v___x_1534_ = v_a_1528_;
v_isShared_1535_ = v_isSharedCheck_1543_;
goto v_resetjp_1533_;
}
else
{
lean_inc(v_val_1532_);
lean_dec(v_a_1528_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1543_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
lean_object* v___x_1536_; lean_object* v___x_1538_; 
v___x_1536_ = l_Lean_mkNatLit(v_val_1532_);
if (v_isShared_1535_ == 0)
{
lean_ctor_set_tag(v___x_1534_, 0);
lean_ctor_set(v___x_1534_, 0, v___x_1536_);
v___x_1538_ = v___x_1534_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1542_; 
v_reuseFailAlloc_1542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1542_, 0, v___x_1536_);
v___x_1538_ = v_reuseFailAlloc_1542_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
lean_object* v___x_1540_; 
if (v_isShared_1531_ == 0)
{
lean_ctor_set(v___x_1530_, 0, v___x_1538_);
v___x_1540_ = v___x_1530_;
goto v_reusejp_1539_;
}
else
{
lean_object* v_reuseFailAlloc_1541_; 
v_reuseFailAlloc_1541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1541_, 0, v___x_1538_);
v___x_1540_ = v_reuseFailAlloc_1541_;
goto v_reusejp_1539_;
}
v_reusejp_1539_:
{
return v___x_1540_;
}
}
}
}
else
{
lean_object* v___x_1544_; lean_object* v___x_1546_; 
lean_dec(v_a_1528_);
v___x_1544_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_normInst___closed__0));
if (v_isShared_1531_ == 0)
{
lean_ctor_set(v___x_1530_, 0, v___x_1544_);
v___x_1546_ = v___x_1530_;
goto v_reusejp_1545_;
}
else
{
lean_object* v_reuseFailAlloc_1547_; 
v_reuseFailAlloc_1547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1547_, 0, v___x_1544_);
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
else
{
lean_object* v_a_1549_; lean_object* v___x_1551_; uint8_t v_isShared_1552_; uint8_t v_isSharedCheck_1556_; 
v_a_1549_ = lean_ctor_get(v___x_1527_, 0);
v_isSharedCheck_1556_ = !lean_is_exclusive(v___x_1527_);
if (v_isSharedCheck_1556_ == 0)
{
v___x_1551_ = v___x_1527_;
v_isShared_1552_ = v_isSharedCheck_1556_;
goto v_resetjp_1550_;
}
else
{
lean_inc(v_a_1549_);
lean_dec(v___x_1527_);
v___x_1551_ = lean_box(0);
v_isShared_1552_ = v_isSharedCheck_1556_;
goto v_resetjp_1550_;
}
v_resetjp_1550_:
{
lean_object* v___x_1554_; 
if (v_isShared_1552_ == 0)
{
v___x_1554_ = v___x_1551_;
goto v_reusejp_1553_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v_a_1549_);
v___x_1554_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1553_;
}
v_reusejp_1553_:
{
return v___x_1554_;
}
}
}
}
else
{
lean_object* v___x_1557_; lean_object* v___x_1558_; 
v___x_1557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1557_, 0, v_e_1505_);
v___x_1558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1558_, 0, v___x_1557_);
return v___x_1558_;
}
}
}
}
}
v___jp_1511_:
{
lean_object* v___x_1512_; lean_object* v___x_1513_; 
v___x_1512_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_normInst___closed__0));
v___x_1513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1513_, 0, v___x_1512_);
return v___x_1513_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatOfNatInst___redArg___boxed(lean_object* v_e_1559_, lean_object* v_a_1560_, lean_object* v_a_1561_, lean_object* v_a_1562_, lean_object* v_a_1563_, lean_object* v_a_1564_){
_start:
{
lean_object* v_res_1565_; 
v_res_1565_ = l_Lean_Meta_Grind_Arith_normNatOfNatInst___redArg(v_e_1559_, v_a_1560_, v_a_1561_, v_a_1562_, v_a_1563_);
lean_dec(v_a_1563_);
lean_dec_ref(v_a_1562_);
lean_dec(v_a_1561_);
lean_dec_ref(v_a_1560_);
return v_res_1565_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatOfNatInst(lean_object* v_e_1566_, lean_object* v_a_1567_, lean_object* v_a_1568_, lean_object* v_a_1569_, lean_object* v_a_1570_, lean_object* v_a_1571_, lean_object* v_a_1572_, lean_object* v_a_1573_){
_start:
{
lean_object* v___x_1575_; 
v___x_1575_ = l_Lean_Meta_Grind_Arith_normNatOfNatInst___redArg(v_e_1566_, v_a_1570_, v_a_1571_, v_a_1572_, v_a_1573_);
return v___x_1575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatOfNatInst___boxed(lean_object* v_e_1576_, lean_object* v_a_1577_, lean_object* v_a_1578_, lean_object* v_a_1579_, lean_object* v_a_1580_, lean_object* v_a_1581_, lean_object* v_a_1582_, lean_object* v_a_1583_, lean_object* v_a_1584_){
_start:
{
lean_object* v_res_1585_; 
v_res_1585_ = l_Lean_Meta_Grind_Arith_normNatOfNatInst(v_e_1576_, v_a_1577_, v_a_1578_, v_a_1579_, v_a_1580_, v_a_1581_, v_a_1582_, v_a_1583_);
lean_dec(v_a_1583_);
lean_dec_ref(v_a_1582_);
lean_dec(v_a_1581_);
lean_dec_ref(v_a_1580_);
lean_dec(v_a_1579_);
lean_dec_ref(v_a_1578_);
lean_dec(v_a_1577_);
return v_res_1585_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14_(){
_start:
{
lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; 
v___x_1606_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14_));
v___x_1607_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14_));
v___x_1608_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_normNatOfNatInst___boxed), 9, 0);
v___x_1609_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_1606_, v___x_1607_, v___x_1608_);
return v___x_1609_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14____boxed(lean_object* v_a_1610_){
_start:
{
lean_object* v_res_1611_; 
v_res_1611_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14_();
return v_res_1611_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntNegInst(lean_object* v_e_1612_, lean_object* v_a_1613_, lean_object* v_a_1614_, lean_object* v_a_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_, lean_object* v_a_1618_, lean_object* v_a_1619_){
_start:
{
lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; 
v___x_1621_ = lean_unsigned_to_nat(1u);
v___x_1622_ = l_Lean_Int_mkInstNeg;
v___x_1623_ = l_Lean_Meta_Grind_Arith_normInst(v___x_1621_, v___x_1622_, v_e_1612_, v_a_1613_, v_a_1614_, v_a_1615_, v_a_1616_, v_a_1617_, v_a_1618_, v_a_1619_);
return v___x_1623_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntNegInst___boxed(lean_object* v_e_1624_, lean_object* v_a_1625_, lean_object* v_a_1626_, lean_object* v_a_1627_, lean_object* v_a_1628_, lean_object* v_a_1629_, lean_object* v_a_1630_, lean_object* v_a_1631_, lean_object* v_a_1632_){
_start:
{
lean_object* v_res_1633_; 
v_res_1633_ = l_Lean_Meta_Grind_Arith_normIntNegInst(v_e_1624_, v_a_1625_, v_a_1626_, v_a_1627_, v_a_1628_, v_a_1629_, v_a_1630_, v_a_1631_);
lean_dec(v_a_1631_);
lean_dec_ref(v_a_1630_);
lean_dec(v_a_1629_);
lean_dec_ref(v_a_1628_);
lean_dec(v_a_1627_);
lean_dec_ref(v_a_1626_);
lean_dec(v_a_1625_);
return v_res_1633_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16_(){
_start:
{
lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; 
v___x_1662_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16_));
v___x_1663_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__7_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16_));
v___x_1664_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_normIntNegInst___boxed), 9, 0);
v___x_1665_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_1662_, v___x_1663_, v___x_1664_);
return v___x_1665_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16____boxed(lean_object* v_a_1666_){
_start:
{
lean_object* v_res_1667_; 
v_res_1667_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16_();
return v_res_1667_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntAddInst(lean_object* v_e_1668_, lean_object* v_a_1669_, lean_object* v_a_1670_, lean_object* v_a_1671_, lean_object* v_a_1672_, lean_object* v_a_1673_, lean_object* v_a_1674_, lean_object* v_a_1675_){
_start:
{
lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; 
v___x_1677_ = lean_unsigned_to_nat(3u);
v___x_1678_ = l_Lean_Int_mkInstHAdd;
v___x_1679_ = l_Lean_Meta_Grind_Arith_normInst(v___x_1677_, v___x_1678_, v_e_1668_, v_a_1669_, v_a_1670_, v_a_1671_, v_a_1672_, v_a_1673_, v_a_1674_, v_a_1675_);
return v___x_1679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntAddInst___boxed(lean_object* v_e_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_, lean_object* v_a_1683_, lean_object* v_a_1684_, lean_object* v_a_1685_, lean_object* v_a_1686_, lean_object* v_a_1687_, lean_object* v_a_1688_){
_start:
{
lean_object* v_res_1689_; 
v_res_1689_ = l_Lean_Meta_Grind_Arith_normIntAddInst(v_e_1680_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_, v_a_1685_, v_a_1686_, v_a_1687_);
lean_dec(v_a_1687_);
lean_dec_ref(v_a_1686_);
lean_dec(v_a_1685_);
lean_dec_ref(v_a_1684_);
lean_dec(v_a_1683_);
lean_dec_ref(v_a_1682_);
lean_dec(v_a_1681_);
return v_res_1689_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntAddInst_declare__76_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3522364415____hygCtx___hyg_17_(){
_start:
{
lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; 
v___x_1710_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntAddInst_declare__76___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3522364415____hygCtx___hyg_17_));
v___x_1711_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntAddInst_declare__76___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3522364415____hygCtx___hyg_17_));
v___x_1712_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_normIntAddInst___boxed), 9, 0);
v___x_1713_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_1710_, v___x_1711_, v___x_1712_);
return v___x_1713_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntAddInst_declare__76_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3522364415____hygCtx___hyg_17____boxed(lean_object* v_a_1714_){
_start:
{
lean_object* v_res_1715_; 
v_res_1715_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntAddInst_declare__76_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3522364415____hygCtx___hyg_17_();
return v_res_1715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntMulInst(lean_object* v_e_1716_, lean_object* v_a_1717_, lean_object* v_a_1718_, lean_object* v_a_1719_, lean_object* v_a_1720_, lean_object* v_a_1721_, lean_object* v_a_1722_, lean_object* v_a_1723_){
_start:
{
lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; 
v___x_1725_ = lean_unsigned_to_nat(3u);
v___x_1726_ = l_Lean_Int_mkInstHMul;
v___x_1727_ = l_Lean_Meta_Grind_Arith_normInst(v___x_1725_, v___x_1726_, v_e_1716_, v_a_1717_, v_a_1718_, v_a_1719_, v_a_1720_, v_a_1721_, v_a_1722_, v_a_1723_);
return v___x_1727_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntMulInst___boxed(lean_object* v_e_1728_, lean_object* v_a_1729_, lean_object* v_a_1730_, lean_object* v_a_1731_, lean_object* v_a_1732_, lean_object* v_a_1733_, lean_object* v_a_1734_, lean_object* v_a_1735_, lean_object* v_a_1736_){
_start:
{
lean_object* v_res_1737_; 
v_res_1737_ = l_Lean_Meta_Grind_Arith_normIntMulInst(v_e_1728_, v_a_1729_, v_a_1730_, v_a_1731_, v_a_1732_, v_a_1733_, v_a_1734_, v_a_1735_);
lean_dec(v_a_1735_);
lean_dec_ref(v_a_1734_);
lean_dec(v_a_1733_);
lean_dec_ref(v_a_1732_);
lean_dec(v_a_1731_);
lean_dec_ref(v_a_1730_);
lean_dec(v_a_1729_);
return v_res_1737_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntMulInst_declare__81_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3205577538____hygCtx___hyg_17_(){
_start:
{
lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; 
v___x_1758_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntMulInst_declare__81___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3205577538____hygCtx___hyg_17_));
v___x_1759_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntMulInst_declare__81___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3205577538____hygCtx___hyg_17_));
v___x_1760_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_normIntMulInst___boxed), 9, 0);
v___x_1761_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_1758_, v___x_1759_, v___x_1760_);
return v___x_1761_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntMulInst_declare__81_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3205577538____hygCtx___hyg_17____boxed(lean_object* v_a_1762_){
_start:
{
lean_object* v_res_1763_; 
v_res_1763_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntMulInst_declare__81_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3205577538____hygCtx___hyg_17_();
return v_res_1763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntSubInst(lean_object* v_e_1764_, lean_object* v_a_1765_, lean_object* v_a_1766_, lean_object* v_a_1767_, lean_object* v_a_1768_, lean_object* v_a_1769_, lean_object* v_a_1770_, lean_object* v_a_1771_){
_start:
{
lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; 
v___x_1773_ = lean_unsigned_to_nat(3u);
v___x_1774_ = l_Lean_Int_mkInstHSub;
v___x_1775_ = l_Lean_Meta_Grind_Arith_normInst(v___x_1773_, v___x_1774_, v_e_1764_, v_a_1765_, v_a_1766_, v_a_1767_, v_a_1768_, v_a_1769_, v_a_1770_, v_a_1771_);
return v___x_1775_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntSubInst___boxed(lean_object* v_e_1776_, lean_object* v_a_1777_, lean_object* v_a_1778_, lean_object* v_a_1779_, lean_object* v_a_1780_, lean_object* v_a_1781_, lean_object* v_a_1782_, lean_object* v_a_1783_, lean_object* v_a_1784_){
_start:
{
lean_object* v_res_1785_; 
v_res_1785_ = l_Lean_Meta_Grind_Arith_normIntSubInst(v_e_1776_, v_a_1777_, v_a_1778_, v_a_1779_, v_a_1780_, v_a_1781_, v_a_1782_, v_a_1783_);
lean_dec(v_a_1783_);
lean_dec_ref(v_a_1782_);
lean_dec(v_a_1781_);
lean_dec_ref(v_a_1780_);
lean_dec(v_a_1779_);
lean_dec_ref(v_a_1778_);
lean_dec(v_a_1777_);
return v_res_1785_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntSubInst_declare__86_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3607485820____hygCtx___hyg_17_(){
_start:
{
lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; 
v___x_1806_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntSubInst_declare__86___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3607485820____hygCtx___hyg_17_));
v___x_1807_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntSubInst_declare__86___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3607485820____hygCtx___hyg_17_));
v___x_1808_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_normIntSubInst___boxed), 9, 0);
v___x_1809_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_1806_, v___x_1807_, v___x_1808_);
return v___x_1809_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntSubInst_declare__86_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3607485820____hygCtx___hyg_17____boxed(lean_object* v_a_1810_){
_start:
{
lean_object* v_res_1811_; 
v_res_1811_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntSubInst_declare__86_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3607485820____hygCtx___hyg_17_();
return v_res_1811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntDivInst(lean_object* v_e_1812_, lean_object* v_a_1813_, lean_object* v_a_1814_, lean_object* v_a_1815_, lean_object* v_a_1816_, lean_object* v_a_1817_, lean_object* v_a_1818_, lean_object* v_a_1819_){
_start:
{
lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; 
v___x_1821_ = lean_unsigned_to_nat(3u);
v___x_1822_ = l_Lean_Int_mkInstHDiv;
v___x_1823_ = l_Lean_Meta_Grind_Arith_normInst(v___x_1821_, v___x_1822_, v_e_1812_, v_a_1813_, v_a_1814_, v_a_1815_, v_a_1816_, v_a_1817_, v_a_1818_, v_a_1819_);
return v___x_1823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntDivInst___boxed(lean_object* v_e_1824_, lean_object* v_a_1825_, lean_object* v_a_1826_, lean_object* v_a_1827_, lean_object* v_a_1828_, lean_object* v_a_1829_, lean_object* v_a_1830_, lean_object* v_a_1831_, lean_object* v_a_1832_){
_start:
{
lean_object* v_res_1833_; 
v_res_1833_ = l_Lean_Meta_Grind_Arith_normIntDivInst(v_e_1824_, v_a_1825_, v_a_1826_, v_a_1827_, v_a_1828_, v_a_1829_, v_a_1830_, v_a_1831_);
lean_dec(v_a_1831_);
lean_dec_ref(v_a_1830_);
lean_dec(v_a_1829_);
lean_dec_ref(v_a_1828_);
lean_dec(v_a_1827_);
lean_dec_ref(v_a_1826_);
lean_dec(v_a_1825_);
return v_res_1833_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntDivInst_declare__91_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4859482____hygCtx___hyg_17_(){
_start:
{
lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; 
v___x_1854_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntDivInst_declare__91___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4859482____hygCtx___hyg_17_));
v___x_1855_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntDivInst_declare__91___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4859482____hygCtx___hyg_17_));
v___x_1856_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_normIntDivInst___boxed), 9, 0);
v___x_1857_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_1854_, v___x_1855_, v___x_1856_);
return v___x_1857_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntDivInst_declare__91_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4859482____hygCtx___hyg_17____boxed(lean_object* v_a_1858_){
_start:
{
lean_object* v_res_1859_; 
v_res_1859_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntDivInst_declare__91_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4859482____hygCtx___hyg_17_();
return v_res_1859_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntModInst(lean_object* v_e_1860_, lean_object* v_a_1861_, lean_object* v_a_1862_, lean_object* v_a_1863_, lean_object* v_a_1864_, lean_object* v_a_1865_, lean_object* v_a_1866_, lean_object* v_a_1867_){
_start:
{
lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; 
v___x_1869_ = lean_unsigned_to_nat(3u);
v___x_1870_ = l_Lean_Int_mkInstMod;
v___x_1871_ = l_Lean_Meta_Grind_Arith_normInst(v___x_1869_, v___x_1870_, v_e_1860_, v_a_1861_, v_a_1862_, v_a_1863_, v_a_1864_, v_a_1865_, v_a_1866_, v_a_1867_);
return v___x_1871_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntModInst___boxed(lean_object* v_e_1872_, lean_object* v_a_1873_, lean_object* v_a_1874_, lean_object* v_a_1875_, lean_object* v_a_1876_, lean_object* v_a_1877_, lean_object* v_a_1878_, lean_object* v_a_1879_, lean_object* v_a_1880_){
_start:
{
lean_object* v_res_1881_; 
v_res_1881_ = l_Lean_Meta_Grind_Arith_normIntModInst(v_e_1872_, v_a_1873_, v_a_1874_, v_a_1875_, v_a_1876_, v_a_1877_, v_a_1878_, v_a_1879_);
lean_dec(v_a_1879_);
lean_dec_ref(v_a_1878_);
lean_dec(v_a_1877_);
lean_dec_ref(v_a_1876_);
lean_dec(v_a_1875_);
lean_dec_ref(v_a_1874_);
lean_dec(v_a_1873_);
return v_res_1881_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntModInst_declare__96_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_807206037____hygCtx___hyg_17_(){
_start:
{
lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; 
v___x_1902_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntModInst_declare__96___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_807206037____hygCtx___hyg_17_));
v___x_1903_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntModInst_declare__96___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_807206037____hygCtx___hyg_17_));
v___x_1904_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_normIntModInst___boxed), 9, 0);
v___x_1905_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_1902_, v___x_1903_, v___x_1904_);
return v___x_1905_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntModInst_declare__96_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_807206037____hygCtx___hyg_17____boxed(lean_object* v_a_1906_){
_start:
{
lean_object* v_res_1907_; 
v_res_1907_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntModInst_declare__96_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_807206037____hygCtx___hyg_17_();
return v_res_1907_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntPowInst(lean_object* v_e_1908_, lean_object* v_a_1909_, lean_object* v_a_1910_, lean_object* v_a_1911_, lean_object* v_a_1912_, lean_object* v_a_1913_, lean_object* v_a_1914_, lean_object* v_a_1915_){
_start:
{
lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; 
v___x_1917_ = lean_unsigned_to_nat(3u);
v___x_1918_ = l_Lean_Int_mkInstHPow;
v___x_1919_ = l_Lean_Meta_Grind_Arith_normInst(v___x_1917_, v___x_1918_, v_e_1908_, v_a_1909_, v_a_1910_, v_a_1911_, v_a_1912_, v_a_1913_, v_a_1914_, v_a_1915_);
return v___x_1919_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntPowInst___boxed(lean_object* v_e_1920_, lean_object* v_a_1921_, lean_object* v_a_1922_, lean_object* v_a_1923_, lean_object* v_a_1924_, lean_object* v_a_1925_, lean_object* v_a_1926_, lean_object* v_a_1927_, lean_object* v_a_1928_){
_start:
{
lean_object* v_res_1929_; 
v_res_1929_ = l_Lean_Meta_Grind_Arith_normIntPowInst(v_e_1920_, v_a_1921_, v_a_1922_, v_a_1923_, v_a_1924_, v_a_1925_, v_a_1926_, v_a_1927_);
lean_dec(v_a_1927_);
lean_dec_ref(v_a_1926_);
lean_dec(v_a_1925_);
lean_dec_ref(v_a_1924_);
lean_dec(v_a_1923_);
lean_dec_ref(v_a_1922_);
lean_dec(v_a_1921_);
return v_res_1929_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntPowInst_declare__101_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1870397832____hygCtx___hyg_17_(){
_start:
{
lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; 
v___x_1950_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntPowInst_declare__101___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1870397832____hygCtx___hyg_17_));
v___x_1951_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntPowInst_declare__101___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1870397832____hygCtx___hyg_17_));
v___x_1952_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_normIntPowInst___boxed), 9, 0);
v___x_1953_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_1950_, v___x_1951_, v___x_1952_);
return v___x_1953_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntPowInst_declare__101_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1870397832____hygCtx___hyg_17____boxed(lean_object* v_a_1954_){
_start:
{
lean_object* v_res_1955_; 
v_res_1955_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntPowInst_declare__101_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1870397832____hygCtx___hyg_17_();
return v_res_1955_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatCastInst(lean_object* v_e_1956_, lean_object* v_a_1957_, lean_object* v_a_1958_, lean_object* v_a_1959_, lean_object* v_a_1960_, lean_object* v_a_1961_, lean_object* v_a_1962_, lean_object* v_a_1963_){
_start:
{
lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; 
v___x_1965_ = lean_unsigned_to_nat(1u);
v___x_1966_ = l_Lean_Int_mkInstNatCast;
v___x_1967_ = l_Lean_Meta_Grind_Arith_normInst(v___x_1965_, v___x_1966_, v_e_1956_, v_a_1957_, v_a_1958_, v_a_1959_, v_a_1960_, v_a_1961_, v_a_1962_, v_a_1963_);
return v___x_1967_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatCastInst___boxed(lean_object* v_e_1968_, lean_object* v_a_1969_, lean_object* v_a_1970_, lean_object* v_a_1971_, lean_object* v_a_1972_, lean_object* v_a_1973_, lean_object* v_a_1974_, lean_object* v_a_1975_, lean_object* v_a_1976_){
_start:
{
lean_object* v_res_1977_; 
v_res_1977_ = l_Lean_Meta_Grind_Arith_normNatCastInst(v_e_1968_, v_a_1969_, v_a_1970_, v_a_1971_, v_a_1972_, v_a_1973_, v_a_1974_, v_a_1975_);
lean_dec(v_a_1975_);
lean_dec_ref(v_a_1974_);
lean_dec(v_a_1973_);
lean_dec_ref(v_a_1972_);
lean_dec(v_a_1971_);
lean_dec_ref(v_a_1970_);
lean_dec(v_a_1969_);
return v_res_1977_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14_(){
_start:
{
lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; 
v___x_1998_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14_));
v___x_1999_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14_));
v___x_2000_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_normNatCastInst___boxed), 9, 0);
v___x_2001_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_1998_, v___x_1999_, v___x_2000_);
return v___x_2001_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14____boxed(lean_object* v_a_2002_){
_start:
{
lean_object* v_res_2003_; 
v_res_2003_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14_();
return v_res_2003_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNormIntNum(lean_object* v_00_u03b1_2007_, lean_object* v_n_2008_, lean_object* v_inst_2009_){
_start:
{
lean_object* v___x_2010_; uint8_t v___x_2011_; 
v___x_2010_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField___closed__3));
v___x_2011_ = l_Lean_Expr_isConstOf(v_00_u03b1_2007_, v___x_2010_);
if (v___x_2011_ == 0)
{
return v___x_2011_;
}
else
{
if (lean_obj_tag(v_n_2008_) == 9)
{
lean_object* v_a_2012_; 
v_a_2012_ = lean_ctor_get(v_n_2008_, 0);
if (lean_obj_tag(v_a_2012_) == 0)
{
lean_object* v___x_2013_; lean_object* v___x_2014_; uint8_t v___x_2015_; 
v___x_2013_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNormIntNum___closed__1));
v___x_2014_ = lean_unsigned_to_nat(1u);
v___x_2015_ = l_Lean_Expr_isAppOfArity(v_inst_2009_, v___x_2013_, v___x_2014_);
if (v___x_2015_ == 0)
{
return v___x_2015_;
}
else
{
lean_object* v___x_2016_; uint8_t v___x_2017_; 
v___x_2016_ = l_Lean_Expr_appArg_x21(v_inst_2009_);
v___x_2017_ = lean_expr_eqv(v___x_2016_, v_n_2008_);
lean_dec_ref(v___x_2016_);
return v___x_2017_;
}
}
else
{
uint8_t v___x_2018_; 
v___x_2018_ = 0;
return v___x_2018_;
}
}
else
{
uint8_t v___x_2019_; 
v___x_2019_ = 0;
return v___x_2019_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNormIntNum___boxed(lean_object* v_00_u03b1_2020_, lean_object* v_n_2021_, lean_object* v_inst_2022_){
_start:
{
uint8_t v_res_2023_; lean_object* v_r_2024_; 
v_res_2023_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNormIntNum(v_00_u03b1_2020_, v_n_2021_, v_inst_2022_);
lean_dec_ref(v_inst_2022_);
lean_dec_ref(v_n_2021_);
lean_dec_ref(v_00_u03b1_2020_);
v_r_2024_ = lean_box(v_res_2023_);
return v_r_2024_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntOfNatInst___redArg(lean_object* v_e_2025_, lean_object* v_a_2026_, lean_object* v_a_2027_, lean_object* v_a_2028_, lean_object* v_a_2029_){
_start:
{
lean_object* v___x_2034_; uint8_t v___x_2035_; 
v___x_2034_ = l_Lean_Expr_cleanupAnnotations(v_e_2025_);
v___x_2035_ = l_Lean_Expr_isApp(v___x_2034_);
if (v___x_2035_ == 0)
{
lean_dec_ref(v___x_2034_);
lean_dec_ref(v_e_2025_);
goto v___jp_2031_;
}
else
{
lean_object* v___x_2036_; uint8_t v___x_2037_; 
v___x_2036_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2034_);
v___x_2037_ = l_Lean_Expr_isApp(v___x_2036_);
if (v___x_2037_ == 0)
{
lean_dec_ref(v___x_2036_);
lean_dec_ref(v___x_2034_);
lean_dec_ref(v_e_2025_);
goto v___jp_2031_;
}
else
{
lean_object* v___x_2038_; uint8_t v___x_2039_; 
v___x_2038_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2036_);
v___x_2039_ = l_Lean_Expr_isApp(v___x_2038_);
if (v___x_2039_ == 0)
{
lean_dec_ref(v___x_2038_);
lean_dec_ref(v___x_2036_);
lean_dec_ref(v___x_2034_);
lean_dec_ref(v_e_2025_);
goto v___jp_2031_;
}
else
{
lean_object* v___x_2040_; lean_object* v___x_2041_; uint8_t v___x_2042_; 
v___x_2040_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2038_);
v___x_2041_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__2));
v___x_2042_ = l_Lean_Expr_isConstOf(v___x_2040_, v___x_2041_);
lean_dec_ref(v___x_2040_);
if (v___x_2042_ == 0)
{
lean_dec_ref(v___x_2038_);
lean_dec_ref(v___x_2036_);
lean_dec_ref(v___x_2034_);
lean_dec_ref(v_e_2025_);
goto v___jp_2031_;
}
else
{
lean_object* v_arg_2043_; lean_object* v_arg_2044_; lean_object* v_arg_2045_; uint8_t v___x_2046_; 
v_arg_2043_ = lean_ctor_get(v___x_2034_, 1);
lean_inc_ref(v_arg_2043_);
lean_dec_ref(v___x_2034_);
v_arg_2044_ = lean_ctor_get(v___x_2036_, 1);
lean_inc_ref(v_arg_2044_);
lean_dec_ref(v___x_2036_);
v_arg_2045_ = lean_ctor_get(v___x_2038_, 1);
lean_inc_ref(v_arg_2045_);
lean_dec_ref(v___x_2038_);
v___x_2046_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_isNormIntNum(v_arg_2045_, v_arg_2044_, v_arg_2043_);
lean_dec_ref(v_arg_2043_);
lean_dec_ref(v_arg_2044_);
lean_dec_ref(v_arg_2045_);
if (v___x_2046_ == 0)
{
lean_object* v___x_2047_; 
v___x_2047_ = l_Lean_Meta_getIntValue_x3f(v_e_2025_, v_a_2026_, v_a_2027_, v_a_2028_, v_a_2029_);
if (lean_obj_tag(v___x_2047_) == 0)
{
lean_object* v_a_2048_; lean_object* v___x_2050_; uint8_t v_isShared_2051_; uint8_t v_isSharedCheck_2068_; 
v_a_2048_ = lean_ctor_get(v___x_2047_, 0);
v_isSharedCheck_2068_ = !lean_is_exclusive(v___x_2047_);
if (v_isSharedCheck_2068_ == 0)
{
v___x_2050_ = v___x_2047_;
v_isShared_2051_ = v_isSharedCheck_2068_;
goto v_resetjp_2049_;
}
else
{
lean_inc(v_a_2048_);
lean_dec(v___x_2047_);
v___x_2050_ = lean_box(0);
v_isShared_2051_ = v_isSharedCheck_2068_;
goto v_resetjp_2049_;
}
v_resetjp_2049_:
{
if (lean_obj_tag(v_a_2048_) == 1)
{
lean_object* v_val_2052_; lean_object* v___x_2054_; uint8_t v_isShared_2055_; uint8_t v_isSharedCheck_2063_; 
v_val_2052_ = lean_ctor_get(v_a_2048_, 0);
v_isSharedCheck_2063_ = !lean_is_exclusive(v_a_2048_);
if (v_isSharedCheck_2063_ == 0)
{
v___x_2054_ = v_a_2048_;
v_isShared_2055_ = v_isSharedCheck_2063_;
goto v_resetjp_2053_;
}
else
{
lean_inc(v_val_2052_);
lean_dec(v_a_2048_);
v___x_2054_ = lean_box(0);
v_isShared_2055_ = v_isSharedCheck_2063_;
goto v_resetjp_2053_;
}
v_resetjp_2053_:
{
lean_object* v___x_2056_; lean_object* v___x_2058_; 
v___x_2056_ = l_Lean_mkIntLit(v_val_2052_);
lean_dec(v_val_2052_);
if (v_isShared_2055_ == 0)
{
lean_ctor_set_tag(v___x_2054_, 0);
lean_ctor_set(v___x_2054_, 0, v___x_2056_);
v___x_2058_ = v___x_2054_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v___x_2056_);
v___x_2058_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
lean_object* v___x_2060_; 
if (v_isShared_2051_ == 0)
{
lean_ctor_set(v___x_2050_, 0, v___x_2058_);
v___x_2060_ = v___x_2050_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v___x_2058_);
v___x_2060_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
return v___x_2060_;
}
}
}
}
else
{
lean_object* v___x_2064_; lean_object* v___x_2066_; 
lean_dec(v_a_2048_);
v___x_2064_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_normInst___closed__0));
if (v_isShared_2051_ == 0)
{
lean_ctor_set(v___x_2050_, 0, v___x_2064_);
v___x_2066_ = v___x_2050_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v___x_2064_);
v___x_2066_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
return v___x_2066_;
}
}
}
}
else
{
lean_object* v_a_2069_; lean_object* v___x_2071_; uint8_t v_isShared_2072_; uint8_t v_isSharedCheck_2076_; 
v_a_2069_ = lean_ctor_get(v___x_2047_, 0);
v_isSharedCheck_2076_ = !lean_is_exclusive(v___x_2047_);
if (v_isSharedCheck_2076_ == 0)
{
v___x_2071_ = v___x_2047_;
v_isShared_2072_ = v_isSharedCheck_2076_;
goto v_resetjp_2070_;
}
else
{
lean_inc(v_a_2069_);
lean_dec(v___x_2047_);
v___x_2071_ = lean_box(0);
v_isShared_2072_ = v_isSharedCheck_2076_;
goto v_resetjp_2070_;
}
v_resetjp_2070_:
{
lean_object* v___x_2074_; 
if (v_isShared_2072_ == 0)
{
v___x_2074_ = v___x_2071_;
goto v_reusejp_2073_;
}
else
{
lean_object* v_reuseFailAlloc_2075_; 
v_reuseFailAlloc_2075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2075_, 0, v_a_2069_);
v___x_2074_ = v_reuseFailAlloc_2075_;
goto v_reusejp_2073_;
}
v_reusejp_2073_:
{
return v___x_2074_;
}
}
}
}
else
{
lean_object* v___x_2077_; lean_object* v___x_2078_; 
v___x_2077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2077_, 0, v_e_2025_);
v___x_2078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2078_, 0, v___x_2077_);
return v___x_2078_;
}
}
}
}
}
v___jp_2031_:
{
lean_object* v___x_2032_; lean_object* v___x_2033_; 
v___x_2032_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_normInst___closed__0));
v___x_2033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2033_, 0, v___x_2032_);
return v___x_2033_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntOfNatInst___redArg___boxed(lean_object* v_e_2079_, lean_object* v_a_2080_, lean_object* v_a_2081_, lean_object* v_a_2082_, lean_object* v_a_2083_, lean_object* v_a_2084_){
_start:
{
lean_object* v_res_2085_; 
v_res_2085_ = l_Lean_Meta_Grind_Arith_normIntOfNatInst___redArg(v_e_2079_, v_a_2080_, v_a_2081_, v_a_2082_, v_a_2083_);
lean_dec(v_a_2083_);
lean_dec_ref(v_a_2082_);
lean_dec(v_a_2081_);
lean_dec_ref(v_a_2080_);
return v_res_2085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntOfNatInst(lean_object* v_e_2086_, lean_object* v_a_2087_, lean_object* v_a_2088_, lean_object* v_a_2089_, lean_object* v_a_2090_, lean_object* v_a_2091_, lean_object* v_a_2092_, lean_object* v_a_2093_){
_start:
{
lean_object* v___x_2095_; 
v___x_2095_ = l_Lean_Meta_Grind_Arith_normIntOfNatInst___redArg(v_e_2086_, v_a_2090_, v_a_2091_, v_a_2092_, v_a_2093_);
return v___x_2095_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntOfNatInst___boxed(lean_object* v_e_2096_, lean_object* v_a_2097_, lean_object* v_a_2098_, lean_object* v_a_2099_, lean_object* v_a_2100_, lean_object* v_a_2101_, lean_object* v_a_2102_, lean_object* v_a_2103_, lean_object* v_a_2104_){
_start:
{
lean_object* v_res_2105_; 
v_res_2105_ = l_Lean_Meta_Grind_Arith_normIntOfNatInst(v_e_2096_, v_a_2097_, v_a_2098_, v_a_2099_, v_a_2100_, v_a_2101_, v_a_2102_, v_a_2103_);
lean_dec(v_a_2103_);
lean_dec_ref(v_a_2102_);
lean_dec(v_a_2101_);
lean_dec_ref(v_a_2100_);
lean_dec(v_a_2099_);
lean_dec_ref(v_a_2098_);
lean_dec(v_a_2097_);
return v_res_2105_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntOfNatInst_declare__114_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_906398933____hygCtx___hyg_14_(){
_start:
{
lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; 
v___x_2123_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntOfNatInst_declare__114___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_906398933____hygCtx___hyg_14_));
v___x_2124_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntOfNatInst_declare__114___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_906398933____hygCtx___hyg_14_));
v___x_2125_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_normIntOfNatInst___boxed), 9, 0);
v___x_2126_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_2123_, v___x_2124_, v___x_2125_);
return v___x_2126_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntOfNatInst_declare__114_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_906398933____hygCtx___hyg_14____boxed(lean_object* v_a_2127_){
_start:
{
lean_object* v_res_2128_; 
v_res_2128_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntOfNatInst_declare__114_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_906398933____hygCtx___hyg_14_();
return v_res_2128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatCastNum___redArg(lean_object* v_e_2135_, lean_object* v_a_2136_, lean_object* v_a_2137_, lean_object* v_a_2138_, lean_object* v_a_2139_){
_start:
{
lean_object* v___x_2144_; uint8_t v___x_2145_; 
v___x_2144_ = l_Lean_Expr_cleanupAnnotations(v_e_2135_);
v___x_2145_ = l_Lean_Expr_isApp(v___x_2144_);
if (v___x_2145_ == 0)
{
lean_dec_ref(v___x_2144_);
goto v___jp_2141_;
}
else
{
lean_object* v___x_2146_; uint8_t v___x_2147_; 
v___x_2146_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2144_);
v___x_2147_ = l_Lean_Expr_isApp(v___x_2146_);
if (v___x_2147_ == 0)
{
lean_dec_ref(v___x_2146_);
lean_dec_ref(v___x_2144_);
goto v___jp_2141_;
}
else
{
lean_object* v___x_2148_; uint8_t v___x_2149_; 
v___x_2148_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2146_);
lean_dec_ref(v___x_2146_);
v___x_2149_ = l_Lean_Expr_isApp(v___x_2148_);
if (v___x_2149_ == 0)
{
lean_dec_ref(v___x_2148_);
lean_dec_ref(v___x_2144_);
goto v___jp_2141_;
}
else
{
lean_object* v___x_2150_; lean_object* v___x_2151_; uint8_t v___x_2152_; 
v___x_2150_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2148_);
v___x_2151_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_normFieldInv___redArg___closed__5));
v___x_2152_ = l_Lean_Expr_isConstOf(v___x_2150_, v___x_2151_);
if (v___x_2152_ == 0)
{
lean_dec_ref(v___x_2150_);
lean_dec_ref(v___x_2148_);
lean_dec_ref(v___x_2144_);
goto v___jp_2141_;
}
else
{
lean_object* v_arg_2153_; lean_object* v_arg_2154_; lean_object* v___x_2155_; 
v_arg_2153_ = lean_ctor_get(v___x_2144_, 1);
lean_inc_ref(v_arg_2153_);
lean_dec_ref(v___x_2144_);
v_arg_2154_ = lean_ctor_get(v___x_2148_, 1);
lean_inc_ref(v_arg_2154_);
lean_dec_ref(v___x_2148_);
v___x_2155_ = l_Lean_Meta_getNatValue_x3f(v_arg_2153_, v_a_2136_, v_a_2137_, v_a_2138_, v_a_2139_);
if (lean_obj_tag(v___x_2155_) == 0)
{
lean_object* v_a_2156_; lean_object* v___x_2158_; uint8_t v_isShared_2159_; uint8_t v_isSharedCheck_2223_; 
v_a_2156_ = lean_ctor_get(v___x_2155_, 0);
v_isSharedCheck_2223_ = !lean_is_exclusive(v___x_2155_);
if (v_isSharedCheck_2223_ == 0)
{
v___x_2158_ = v___x_2155_;
v_isShared_2159_ = v_isSharedCheck_2223_;
goto v_resetjp_2157_;
}
else
{
lean_inc(v_a_2156_);
lean_dec(v___x_2155_);
v___x_2158_ = lean_box(0);
v_isShared_2159_ = v_isSharedCheck_2223_;
goto v_resetjp_2157_;
}
v_resetjp_2157_:
{
if (lean_obj_tag(v_a_2156_) == 1)
{
lean_object* v_val_2160_; lean_object* v___x_2162_; uint8_t v_isShared_2163_; uint8_t v_isSharedCheck_2218_; 
lean_del_object(v___x_2158_);
v_val_2160_ = lean_ctor_get(v_a_2156_, 0);
v_isSharedCheck_2218_ = !lean_is_exclusive(v_a_2156_);
if (v_isSharedCheck_2218_ == 0)
{
v___x_2162_ = v_a_2156_;
v_isShared_2163_ = v_isSharedCheck_2218_;
goto v_resetjp_2161_;
}
else
{
lean_inc(v_val_2160_);
lean_dec(v_a_2156_);
v___x_2162_ = lean_box(0);
v_isShared_2163_ = v_isSharedCheck_2218_;
goto v_resetjp_2161_;
}
v_resetjp_2161_:
{
lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; 
v___x_2164_ = l_Lean_Expr_constLevels_x21(v___x_2150_);
lean_dec_ref(v___x_2150_);
v___x_2165_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_mkSemiringThm___closed__3));
lean_inc(v___x_2164_);
v___x_2166_ = l_Lean_mkConst(v___x_2165_, v___x_2164_);
lean_inc_ref(v_arg_2154_);
v___x_2167_ = l_Lean_Expr_app___override(v___x_2166_, v_arg_2154_);
v___x_2168_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v___x_2167_, v_a_2136_, v_a_2137_, v_a_2138_, v_a_2139_);
if (lean_obj_tag(v___x_2168_) == 0)
{
lean_object* v_a_2169_; lean_object* v___x_2171_; uint8_t v_isShared_2172_; uint8_t v_isSharedCheck_2209_; 
v_a_2169_ = lean_ctor_get(v___x_2168_, 0);
v_isSharedCheck_2209_ = !lean_is_exclusive(v___x_2168_);
if (v_isSharedCheck_2209_ == 0)
{
v___x_2171_ = v___x_2168_;
v_isShared_2172_ = v_isSharedCheck_2209_;
goto v_resetjp_2170_;
}
else
{
lean_inc(v_a_2169_);
lean_dec(v___x_2168_);
v___x_2171_ = lean_box(0);
v_isShared_2172_ = v_isSharedCheck_2209_;
goto v_resetjp_2170_;
}
v_resetjp_2170_:
{
if (lean_obj_tag(v_a_2169_) == 1)
{
lean_object* v_val_2173_; lean_object* v___x_2175_; uint8_t v_isShared_2176_; uint8_t v_isSharedCheck_2204_; 
lean_del_object(v___x_2171_);
v_val_2173_ = lean_ctor_get(v_a_2169_, 0);
v_isSharedCheck_2204_ = !lean_is_exclusive(v_a_2169_);
if (v_isSharedCheck_2204_ == 0)
{
v___x_2175_ = v_a_2169_;
v_isShared_2176_ = v_isSharedCheck_2204_;
goto v_resetjp_2174_;
}
else
{
lean_inc(v_val_2173_);
lean_dec(v_a_2169_);
v___x_2175_ = lean_box(0);
v_isShared_2176_ = v_isSharedCheck_2204_;
goto v_resetjp_2174_;
}
v_resetjp_2174_:
{
lean_object* v___x_2177_; 
lean_inc_ref(v_arg_2154_);
v___x_2177_ = l_Lean_Meta_mkNumeral(v_arg_2154_, v_val_2160_, v_a_2136_, v_a_2137_, v_a_2138_, v_a_2139_);
if (lean_obj_tag(v___x_2177_) == 0)
{
lean_object* v_a_2178_; lean_object* v___x_2180_; uint8_t v_isShared_2181_; uint8_t v_isSharedCheck_2195_; 
v_a_2178_ = lean_ctor_get(v___x_2177_, 0);
v_isSharedCheck_2195_ = !lean_is_exclusive(v___x_2177_);
if (v_isSharedCheck_2195_ == 0)
{
v___x_2180_ = v___x_2177_;
v_isShared_2181_ = v_isSharedCheck_2195_;
goto v_resetjp_2179_;
}
else
{
lean_inc(v_a_2178_);
lean_dec(v___x_2177_);
v___x_2180_ = lean_box(0);
v_isShared_2181_ = v_isSharedCheck_2195_;
goto v_resetjp_2179_;
}
v_resetjp_2179_:
{
lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2186_; 
v___x_2182_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_normNatCastNum___redArg___closed__1));
v___x_2183_ = l_Lean_mkConst(v___x_2182_, v___x_2164_);
v___x_2184_ = l_Lean_mkApp3(v___x_2183_, v_arg_2154_, v_val_2173_, v_arg_2153_);
if (v_isShared_2176_ == 0)
{
lean_ctor_set(v___x_2175_, 0, v___x_2184_);
v___x_2186_ = v___x_2175_;
goto v_reusejp_2185_;
}
else
{
lean_object* v_reuseFailAlloc_2194_; 
v_reuseFailAlloc_2194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2194_, 0, v___x_2184_);
v___x_2186_ = v_reuseFailAlloc_2194_;
goto v_reusejp_2185_;
}
v_reusejp_2185_:
{
lean_object* v___x_2187_; lean_object* v___x_2189_; 
v___x_2187_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2187_, 0, v_a_2178_);
lean_ctor_set(v___x_2187_, 1, v___x_2186_);
lean_ctor_set_uint8(v___x_2187_, sizeof(void*)*2, v___x_2152_);
if (v_isShared_2163_ == 0)
{
lean_ctor_set_tag(v___x_2162_, 0);
lean_ctor_set(v___x_2162_, 0, v___x_2187_);
v___x_2189_ = v___x_2162_;
goto v_reusejp_2188_;
}
else
{
lean_object* v_reuseFailAlloc_2193_; 
v_reuseFailAlloc_2193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2193_, 0, v___x_2187_);
v___x_2189_ = v_reuseFailAlloc_2193_;
goto v_reusejp_2188_;
}
v_reusejp_2188_:
{
lean_object* v___x_2191_; 
if (v_isShared_2181_ == 0)
{
lean_ctor_set(v___x_2180_, 0, v___x_2189_);
v___x_2191_ = v___x_2180_;
goto v_reusejp_2190_;
}
else
{
lean_object* v_reuseFailAlloc_2192_; 
v_reuseFailAlloc_2192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2192_, 0, v___x_2189_);
v___x_2191_ = v_reuseFailAlloc_2192_;
goto v_reusejp_2190_;
}
v_reusejp_2190_:
{
return v___x_2191_;
}
}
}
}
}
else
{
lean_object* v_a_2196_; lean_object* v___x_2198_; uint8_t v_isShared_2199_; uint8_t v_isSharedCheck_2203_; 
lean_del_object(v___x_2175_);
lean_dec(v_val_2173_);
lean_dec(v___x_2164_);
lean_del_object(v___x_2162_);
lean_dec_ref(v_arg_2154_);
lean_dec_ref(v_arg_2153_);
v_a_2196_ = lean_ctor_get(v___x_2177_, 0);
v_isSharedCheck_2203_ = !lean_is_exclusive(v___x_2177_);
if (v_isSharedCheck_2203_ == 0)
{
v___x_2198_ = v___x_2177_;
v_isShared_2199_ = v_isSharedCheck_2203_;
goto v_resetjp_2197_;
}
else
{
lean_inc(v_a_2196_);
lean_dec(v___x_2177_);
v___x_2198_ = lean_box(0);
v_isShared_2199_ = v_isSharedCheck_2203_;
goto v_resetjp_2197_;
}
v_resetjp_2197_:
{
lean_object* v___x_2201_; 
if (v_isShared_2199_ == 0)
{
v___x_2201_ = v___x_2198_;
goto v_reusejp_2200_;
}
else
{
lean_object* v_reuseFailAlloc_2202_; 
v_reuseFailAlloc_2202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2202_, 0, v_a_2196_);
v___x_2201_ = v_reuseFailAlloc_2202_;
goto v_reusejp_2200_;
}
v_reusejp_2200_:
{
return v___x_2201_;
}
}
}
}
}
else
{
lean_object* v___x_2205_; lean_object* v___x_2207_; 
lean_dec(v_a_2169_);
lean_dec(v___x_2164_);
lean_del_object(v___x_2162_);
lean_dec(v_val_2160_);
lean_dec_ref(v_arg_2154_);
lean_dec_ref(v_arg_2153_);
v___x_2205_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__0));
if (v_isShared_2172_ == 0)
{
lean_ctor_set(v___x_2171_, 0, v___x_2205_);
v___x_2207_ = v___x_2171_;
goto v_reusejp_2206_;
}
else
{
lean_object* v_reuseFailAlloc_2208_; 
v_reuseFailAlloc_2208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2208_, 0, v___x_2205_);
v___x_2207_ = v_reuseFailAlloc_2208_;
goto v_reusejp_2206_;
}
v_reusejp_2206_:
{
return v___x_2207_;
}
}
}
}
else
{
lean_object* v_a_2210_; lean_object* v___x_2212_; uint8_t v_isShared_2213_; uint8_t v_isSharedCheck_2217_; 
lean_dec(v___x_2164_);
lean_del_object(v___x_2162_);
lean_dec(v_val_2160_);
lean_dec_ref(v_arg_2154_);
lean_dec_ref(v_arg_2153_);
v_a_2210_ = lean_ctor_get(v___x_2168_, 0);
v_isSharedCheck_2217_ = !lean_is_exclusive(v___x_2168_);
if (v_isSharedCheck_2217_ == 0)
{
v___x_2212_ = v___x_2168_;
v_isShared_2213_ = v_isSharedCheck_2217_;
goto v_resetjp_2211_;
}
else
{
lean_inc(v_a_2210_);
lean_dec(v___x_2168_);
v___x_2212_ = lean_box(0);
v_isShared_2213_ = v_isSharedCheck_2217_;
goto v_resetjp_2211_;
}
v_resetjp_2211_:
{
lean_object* v___x_2215_; 
if (v_isShared_2213_ == 0)
{
v___x_2215_ = v___x_2212_;
goto v_reusejp_2214_;
}
else
{
lean_object* v_reuseFailAlloc_2216_; 
v_reuseFailAlloc_2216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2216_, 0, v_a_2210_);
v___x_2215_ = v_reuseFailAlloc_2216_;
goto v_reusejp_2214_;
}
v_reusejp_2214_:
{
return v___x_2215_;
}
}
}
}
}
else
{
lean_object* v___x_2219_; lean_object* v___x_2221_; 
lean_dec(v_a_2156_);
lean_dec_ref(v_arg_2154_);
lean_dec_ref(v_arg_2153_);
lean_dec_ref(v___x_2150_);
v___x_2219_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__0));
if (v_isShared_2159_ == 0)
{
lean_ctor_set(v___x_2158_, 0, v___x_2219_);
v___x_2221_ = v___x_2158_;
goto v_reusejp_2220_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v___x_2219_);
v___x_2221_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2220_;
}
v_reusejp_2220_:
{
return v___x_2221_;
}
}
}
}
else
{
lean_object* v_a_2224_; lean_object* v___x_2226_; uint8_t v_isShared_2227_; uint8_t v_isSharedCheck_2231_; 
lean_dec_ref(v_arg_2154_);
lean_dec_ref(v_arg_2153_);
lean_dec_ref(v___x_2150_);
v_a_2224_ = lean_ctor_get(v___x_2155_, 0);
v_isSharedCheck_2231_ = !lean_is_exclusive(v___x_2155_);
if (v_isSharedCheck_2231_ == 0)
{
v___x_2226_ = v___x_2155_;
v_isShared_2227_ = v_isSharedCheck_2231_;
goto v_resetjp_2225_;
}
else
{
lean_inc(v_a_2224_);
lean_dec(v___x_2155_);
v___x_2226_ = lean_box(0);
v_isShared_2227_ = v_isSharedCheck_2231_;
goto v_resetjp_2225_;
}
v_resetjp_2225_:
{
lean_object* v___x_2229_; 
if (v_isShared_2227_ == 0)
{
v___x_2229_ = v___x_2226_;
goto v_reusejp_2228_;
}
else
{
lean_object* v_reuseFailAlloc_2230_; 
v_reuseFailAlloc_2230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2230_, 0, v_a_2224_);
v___x_2229_ = v_reuseFailAlloc_2230_;
goto v_reusejp_2228_;
}
v_reusejp_2228_:
{
return v___x_2229_;
}
}
}
}
}
}
}
v___jp_2141_:
{
lean_object* v___x_2142_; lean_object* v___x_2143_; 
v___x_2142_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__0));
v___x_2143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2143_, 0, v___x_2142_);
return v___x_2143_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatCastNum___redArg___boxed(lean_object* v_e_2232_, lean_object* v_a_2233_, lean_object* v_a_2234_, lean_object* v_a_2235_, lean_object* v_a_2236_, lean_object* v_a_2237_){
_start:
{
lean_object* v_res_2238_; 
v_res_2238_ = l_Lean_Meta_Grind_Arith_normNatCastNum___redArg(v_e_2232_, v_a_2233_, v_a_2234_, v_a_2235_, v_a_2236_);
lean_dec(v_a_2236_);
lean_dec_ref(v_a_2235_);
lean_dec(v_a_2234_);
lean_dec_ref(v_a_2233_);
lean_dec_ref(v_e_2232_);
return v_res_2238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatCastNum(lean_object* v_e_2239_, lean_object* v_a_2240_, lean_object* v_a_2241_, lean_object* v_a_2242_, lean_object* v_a_2243_, lean_object* v_a_2244_, lean_object* v_a_2245_, lean_object* v_a_2246_){
_start:
{
lean_object* v___x_2248_; 
v___x_2248_ = l_Lean_Meta_Grind_Arith_normNatCastNum___redArg(v_e_2239_, v_a_2243_, v_a_2244_, v_a_2245_, v_a_2246_);
return v___x_2248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normNatCastNum___boxed(lean_object* v_e_2249_, lean_object* v_a_2250_, lean_object* v_a_2251_, lean_object* v_a_2252_, lean_object* v_a_2253_, lean_object* v_a_2254_, lean_object* v_a_2255_, lean_object* v_a_2256_, lean_object* v_a_2257_){
_start:
{
lean_object* v_res_2258_; 
v_res_2258_ = l_Lean_Meta_Grind_Arith_normNatCastNum(v_e_2249_, v_a_2250_, v_a_2251_, v_a_2252_, v_a_2253_, v_a_2254_, v_a_2255_, v_a_2256_);
lean_dec(v_a_2256_);
lean_dec_ref(v_a_2255_);
lean_dec(v_a_2254_);
lean_dec_ref(v_a_2253_);
lean_dec(v_a_2252_);
lean_dec_ref(v_a_2251_);
lean_dec(v_a_2250_);
lean_dec_ref(v_e_2249_);
return v_res_2258_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastNum_declare__119_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3624952232____hygCtx___hyg_11_(){
_start:
{
lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; 
v___x_2275_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastNum_declare__119___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3624952232____hygCtx___hyg_11_));
v___x_2276_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastNum_declare__119___closed__2_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3624952232____hygCtx___hyg_11_));
v___x_2277_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_normNatCastNum___boxed), 9, 0);
v___x_2278_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_2275_, v___x_2276_, v___x_2277_);
return v___x_2278_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastNum_declare__119_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3624952232____hygCtx___hyg_11____boxed(lean_object* v_a_2279_){
_start:
{
lean_object* v_res_2280_; 
v_res_2280_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastNum_declare__119_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3624952232____hygCtx___hyg_11_();
return v_res_2280_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__5(void){
_start:
{
lean_object* v___x_2291_; lean_object* v___x_2292_; 
v___x_2291_ = lean_unsigned_to_nat(0u);
v___x_2292_ = lean_nat_to_int(v___x_2291_);
return v___x_2292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntCastNum___redArg(lean_object* v_e_2307_, lean_object* v_a_2308_, lean_object* v_a_2309_, lean_object* v_a_2310_, lean_object* v_a_2311_){
_start:
{
lean_object* v___x_2316_; uint8_t v___x_2317_; 
v___x_2316_ = l_Lean_Expr_cleanupAnnotations(v_e_2307_);
v___x_2317_ = l_Lean_Expr_isApp(v___x_2316_);
if (v___x_2317_ == 0)
{
lean_dec_ref(v___x_2316_);
goto v___jp_2313_;
}
else
{
lean_object* v___x_2318_; uint8_t v___x_2319_; 
v___x_2318_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2316_);
v___x_2319_ = l_Lean_Expr_isApp(v___x_2318_);
if (v___x_2319_ == 0)
{
lean_dec_ref(v___x_2318_);
lean_dec_ref(v___x_2316_);
goto v___jp_2313_;
}
else
{
lean_object* v___x_2320_; uint8_t v___x_2321_; 
v___x_2320_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2318_);
lean_dec_ref(v___x_2318_);
v___x_2321_ = l_Lean_Expr_isApp(v___x_2320_);
if (v___x_2321_ == 0)
{
lean_dec_ref(v___x_2320_);
lean_dec_ref(v___x_2316_);
goto v___jp_2313_;
}
else
{
lean_object* v___x_2322_; lean_object* v___x_2323_; uint8_t v___x_2324_; 
v___x_2322_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2320_);
v___x_2323_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__2));
v___x_2324_ = l_Lean_Expr_isConstOf(v___x_2322_, v___x_2323_);
if (v___x_2324_ == 0)
{
lean_dec_ref(v___x_2322_);
lean_dec_ref(v___x_2320_);
lean_dec_ref(v___x_2316_);
goto v___jp_2313_;
}
else
{
lean_object* v_arg_2325_; lean_object* v_arg_2326_; lean_object* v___x_2327_; 
v_arg_2325_ = lean_ctor_get(v___x_2316_, 1);
lean_inc_ref_n(v_arg_2325_, 2);
lean_dec_ref(v___x_2316_);
v_arg_2326_ = lean_ctor_get(v___x_2320_, 1);
lean_inc_ref(v_arg_2326_);
lean_dec_ref(v___x_2320_);
v___x_2327_ = l_Lean_Meta_getIntValue_x3f(v_arg_2325_, v_a_2308_, v_a_2309_, v_a_2310_, v_a_2311_);
if (lean_obj_tag(v___x_2327_) == 0)
{
lean_object* v_a_2328_; lean_object* v___x_2330_; uint8_t v_isShared_2331_; uint8_t v_isSharedCheck_2442_; 
v_a_2328_ = lean_ctor_get(v___x_2327_, 0);
v_isSharedCheck_2442_ = !lean_is_exclusive(v___x_2327_);
if (v_isSharedCheck_2442_ == 0)
{
v___x_2330_ = v___x_2327_;
v_isShared_2331_ = v_isSharedCheck_2442_;
goto v_resetjp_2329_;
}
else
{
lean_inc(v_a_2328_);
lean_dec(v___x_2327_);
v___x_2330_ = lean_box(0);
v_isShared_2331_ = v_isSharedCheck_2442_;
goto v_resetjp_2329_;
}
v_resetjp_2329_:
{
if (lean_obj_tag(v_a_2328_) == 1)
{
lean_object* v_val_2332_; lean_object* v___x_2334_; uint8_t v_isShared_2335_; uint8_t v_isSharedCheck_2437_; 
lean_del_object(v___x_2330_);
v_val_2332_ = lean_ctor_get(v_a_2328_, 0);
v_isSharedCheck_2437_ = !lean_is_exclusive(v_a_2328_);
if (v_isSharedCheck_2437_ == 0)
{
v___x_2334_ = v_a_2328_;
v_isShared_2335_ = v_isSharedCheck_2437_;
goto v_resetjp_2333_;
}
else
{
lean_inc(v_val_2332_);
lean_dec(v_a_2328_);
v___x_2334_ = lean_box(0);
v_isShared_2335_ = v_isSharedCheck_2437_;
goto v_resetjp_2333_;
}
v_resetjp_2333_:
{
lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; 
v___x_2336_ = l_Lean_Expr_constLevels_x21(v___x_2322_);
lean_dec_ref(v___x_2322_);
v___x_2337_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__4));
lean_inc(v___x_2336_);
v___x_2338_ = l_Lean_mkConst(v___x_2337_, v___x_2336_);
lean_inc_ref(v_arg_2326_);
v___x_2339_ = l_Lean_Expr_app___override(v___x_2338_, v_arg_2326_);
v___x_2340_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v___x_2339_, v_a_2308_, v_a_2309_, v_a_2310_, v_a_2311_);
if (lean_obj_tag(v___x_2340_) == 0)
{
lean_object* v_a_2341_; lean_object* v___x_2343_; uint8_t v_isShared_2344_; uint8_t v_isSharedCheck_2428_; 
v_a_2341_ = lean_ctor_get(v___x_2340_, 0);
v_isSharedCheck_2428_ = !lean_is_exclusive(v___x_2340_);
if (v_isSharedCheck_2428_ == 0)
{
v___x_2343_ = v___x_2340_;
v_isShared_2344_ = v_isSharedCheck_2428_;
goto v_resetjp_2342_;
}
else
{
lean_inc(v_a_2341_);
lean_dec(v___x_2340_);
v___x_2343_ = lean_box(0);
v_isShared_2344_ = v_isSharedCheck_2428_;
goto v_resetjp_2342_;
}
v_resetjp_2342_:
{
if (lean_obj_tag(v_a_2341_) == 1)
{
lean_object* v_val_2345_; lean_object* v___x_2347_; uint8_t v_isShared_2348_; uint8_t v_isSharedCheck_2423_; 
lean_del_object(v___x_2343_);
v_val_2345_ = lean_ctor_get(v_a_2341_, 0);
v_isSharedCheck_2423_ = !lean_is_exclusive(v_a_2341_);
if (v_isSharedCheck_2423_ == 0)
{
v___x_2347_ = v_a_2341_;
v_isShared_2348_ = v_isSharedCheck_2423_;
goto v_resetjp_2346_;
}
else
{
lean_inc(v_val_2345_);
lean_dec(v_a_2341_);
v___x_2347_ = lean_box(0);
v_isShared_2348_ = v_isSharedCheck_2423_;
goto v_resetjp_2346_;
}
v_resetjp_2346_:
{
lean_object* v___x_2349_; lean_object* v___x_2350_; 
v___x_2349_ = lean_nat_abs(v_val_2332_);
lean_inc_ref(v_arg_2326_);
v___x_2350_ = l_Lean_Meta_mkNumeral(v_arg_2326_, v___x_2349_, v_a_2308_, v_a_2309_, v_a_2310_, v_a_2311_);
if (lean_obj_tag(v___x_2350_) == 0)
{
lean_object* v_a_2351_; lean_object* v___x_2353_; uint8_t v_isShared_2354_; uint8_t v_isSharedCheck_2414_; 
v_a_2351_ = lean_ctor_get(v___x_2350_, 0);
v_isSharedCheck_2414_ = !lean_is_exclusive(v___x_2350_);
if (v_isSharedCheck_2414_ == 0)
{
v___x_2353_ = v___x_2350_;
v_isShared_2354_ = v_isSharedCheck_2414_;
goto v_resetjp_2352_;
}
else
{
lean_inc(v_a_2351_);
lean_dec(v___x_2350_);
v___x_2353_ = lean_box(0);
v_isShared_2354_ = v_isSharedCheck_2414_;
goto v_resetjp_2352_;
}
v_resetjp_2352_:
{
lean_object* v___x_2355_; uint8_t v___x_2356_; 
v___x_2355_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__5, &l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__5_once, _init_l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__5);
v___x_2356_ = lean_int_dec_lt(v_val_2332_, v___x_2355_);
lean_dec(v_val_2332_);
if (v___x_2356_ == 0)
{
lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2362_; 
v___x_2357_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__7));
v___x_2358_ = l_Lean_mkConst(v___x_2357_, v___x_2336_);
v___x_2359_ = l_Lean_eagerReflBoolTrue;
v___x_2360_ = l_Lean_mkApp4(v___x_2358_, v_arg_2326_, v_val_2345_, v_arg_2325_, v___x_2359_);
if (v_isShared_2348_ == 0)
{
lean_ctor_set(v___x_2347_, 0, v___x_2360_);
v___x_2362_ = v___x_2347_;
goto v_reusejp_2361_;
}
else
{
lean_object* v_reuseFailAlloc_2370_; 
v_reuseFailAlloc_2370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2370_, 0, v___x_2360_);
v___x_2362_ = v_reuseFailAlloc_2370_;
goto v_reusejp_2361_;
}
v_reusejp_2361_:
{
lean_object* v___x_2363_; lean_object* v___x_2365_; 
v___x_2363_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2363_, 0, v_a_2351_);
lean_ctor_set(v___x_2363_, 1, v___x_2362_);
lean_ctor_set_uint8(v___x_2363_, sizeof(void*)*2, v___x_2324_);
if (v_isShared_2335_ == 0)
{
lean_ctor_set_tag(v___x_2334_, 0);
lean_ctor_set(v___x_2334_, 0, v___x_2363_);
v___x_2365_ = v___x_2334_;
goto v_reusejp_2364_;
}
else
{
lean_object* v_reuseFailAlloc_2369_; 
v_reuseFailAlloc_2369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2369_, 0, v___x_2363_);
v___x_2365_ = v_reuseFailAlloc_2369_;
goto v_reusejp_2364_;
}
v_reusejp_2364_:
{
lean_object* v___x_2367_; 
if (v_isShared_2354_ == 0)
{
lean_ctor_set(v___x_2353_, 0, v___x_2365_);
v___x_2367_ = v___x_2353_;
goto v_reusejp_2366_;
}
else
{
lean_object* v_reuseFailAlloc_2368_; 
v_reuseFailAlloc_2368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2368_, 0, v___x_2365_);
v___x_2367_ = v_reuseFailAlloc_2368_;
goto v_reusejp_2366_;
}
v_reusejp_2366_:
{
return v___x_2367_;
}
}
}
}
else
{
lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; 
lean_del_object(v___x_2353_);
lean_del_object(v___x_2347_);
v___x_2371_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__8));
lean_inc(v___x_2336_);
v___x_2372_ = l_Lean_mkConst(v___x_2371_, v___x_2336_);
lean_inc_ref(v_arg_2326_);
v___x_2373_ = l_Lean_Expr_app___override(v___x_2372_, v_arg_2326_);
v___x_2374_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v___x_2373_, v_a_2308_, v_a_2309_, v_a_2310_, v_a_2311_);
if (lean_obj_tag(v___x_2374_) == 0)
{
lean_object* v_a_2375_; lean_object* v___x_2377_; uint8_t v_isShared_2378_; uint8_t v_isSharedCheck_2405_; 
v_a_2375_ = lean_ctor_get(v___x_2374_, 0);
v_isSharedCheck_2405_ = !lean_is_exclusive(v___x_2374_);
if (v_isSharedCheck_2405_ == 0)
{
v___x_2377_ = v___x_2374_;
v_isShared_2378_ = v_isSharedCheck_2405_;
goto v_resetjp_2376_;
}
else
{
lean_inc(v_a_2375_);
lean_dec(v___x_2374_);
v___x_2377_ = lean_box(0);
v_isShared_2378_ = v_isSharedCheck_2405_;
goto v_resetjp_2376_;
}
v_resetjp_2376_:
{
if (lean_obj_tag(v_a_2375_) == 1)
{
lean_object* v_val_2379_; lean_object* v___x_2381_; uint8_t v_isShared_2382_; uint8_t v_isSharedCheck_2400_; 
v_val_2379_ = lean_ctor_get(v_a_2375_, 0);
v_isSharedCheck_2400_ = !lean_is_exclusive(v_a_2375_);
if (v_isSharedCheck_2400_ == 0)
{
v___x_2381_ = v_a_2375_;
v_isShared_2382_ = v_isSharedCheck_2400_;
goto v_resetjp_2380_;
}
else
{
lean_inc(v_val_2379_);
lean_dec(v_a_2375_);
v___x_2381_ = lean_box(0);
v_isShared_2382_ = v_isSharedCheck_2400_;
goto v_resetjp_2380_;
}
v_resetjp_2380_:
{
lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2391_; 
v___x_2383_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__4_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16_));
lean_inc(v___x_2336_);
v___x_2384_ = l_Lean_mkConst(v___x_2383_, v___x_2336_);
lean_inc_ref(v_arg_2326_);
v___x_2385_ = l_Lean_mkApp3(v___x_2384_, v_arg_2326_, v_val_2379_, v_a_2351_);
v___x_2386_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__10));
v___x_2387_ = l_Lean_mkConst(v___x_2386_, v___x_2336_);
v___x_2388_ = l_Lean_eagerReflBoolTrue;
v___x_2389_ = l_Lean_mkApp4(v___x_2387_, v_arg_2326_, v_val_2345_, v_arg_2325_, v___x_2388_);
if (v_isShared_2382_ == 0)
{
lean_ctor_set(v___x_2381_, 0, v___x_2389_);
v___x_2391_ = v___x_2381_;
goto v_reusejp_2390_;
}
else
{
lean_object* v_reuseFailAlloc_2399_; 
v_reuseFailAlloc_2399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2399_, 0, v___x_2389_);
v___x_2391_ = v_reuseFailAlloc_2399_;
goto v_reusejp_2390_;
}
v_reusejp_2390_:
{
lean_object* v___x_2392_; lean_object* v___x_2394_; 
v___x_2392_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2392_, 0, v___x_2385_);
lean_ctor_set(v___x_2392_, 1, v___x_2391_);
lean_ctor_set_uint8(v___x_2392_, sizeof(void*)*2, v___x_2356_);
if (v_isShared_2335_ == 0)
{
lean_ctor_set_tag(v___x_2334_, 0);
lean_ctor_set(v___x_2334_, 0, v___x_2392_);
v___x_2394_ = v___x_2334_;
goto v_reusejp_2393_;
}
else
{
lean_object* v_reuseFailAlloc_2398_; 
v_reuseFailAlloc_2398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2398_, 0, v___x_2392_);
v___x_2394_ = v_reuseFailAlloc_2398_;
goto v_reusejp_2393_;
}
v_reusejp_2393_:
{
lean_object* v___x_2396_; 
if (v_isShared_2378_ == 0)
{
lean_ctor_set(v___x_2377_, 0, v___x_2394_);
v___x_2396_ = v___x_2377_;
goto v_reusejp_2395_;
}
else
{
lean_object* v_reuseFailAlloc_2397_; 
v_reuseFailAlloc_2397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2397_, 0, v___x_2394_);
v___x_2396_ = v_reuseFailAlloc_2397_;
goto v_reusejp_2395_;
}
v_reusejp_2395_:
{
return v___x_2396_;
}
}
}
}
}
else
{
lean_object* v___x_2401_; lean_object* v___x_2403_; 
lean_dec(v_a_2375_);
lean_dec(v_a_2351_);
lean_dec(v_val_2345_);
lean_dec(v___x_2336_);
lean_del_object(v___x_2334_);
lean_dec_ref(v_arg_2326_);
lean_dec_ref(v_arg_2325_);
v___x_2401_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__0));
if (v_isShared_2378_ == 0)
{
lean_ctor_set(v___x_2377_, 0, v___x_2401_);
v___x_2403_ = v___x_2377_;
goto v_reusejp_2402_;
}
else
{
lean_object* v_reuseFailAlloc_2404_; 
v_reuseFailAlloc_2404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2404_, 0, v___x_2401_);
v___x_2403_ = v_reuseFailAlloc_2404_;
goto v_reusejp_2402_;
}
v_reusejp_2402_:
{
return v___x_2403_;
}
}
}
}
else
{
lean_object* v_a_2406_; lean_object* v___x_2408_; uint8_t v_isShared_2409_; uint8_t v_isSharedCheck_2413_; 
lean_dec(v_a_2351_);
lean_dec(v_val_2345_);
lean_dec(v___x_2336_);
lean_del_object(v___x_2334_);
lean_dec_ref(v_arg_2326_);
lean_dec_ref(v_arg_2325_);
v_a_2406_ = lean_ctor_get(v___x_2374_, 0);
v_isSharedCheck_2413_ = !lean_is_exclusive(v___x_2374_);
if (v_isSharedCheck_2413_ == 0)
{
v___x_2408_ = v___x_2374_;
v_isShared_2409_ = v_isSharedCheck_2413_;
goto v_resetjp_2407_;
}
else
{
lean_inc(v_a_2406_);
lean_dec(v___x_2374_);
v___x_2408_ = lean_box(0);
v_isShared_2409_ = v_isSharedCheck_2413_;
goto v_resetjp_2407_;
}
v_resetjp_2407_:
{
lean_object* v___x_2411_; 
if (v_isShared_2409_ == 0)
{
v___x_2411_ = v___x_2408_;
goto v_reusejp_2410_;
}
else
{
lean_object* v_reuseFailAlloc_2412_; 
v_reuseFailAlloc_2412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2412_, 0, v_a_2406_);
v___x_2411_ = v_reuseFailAlloc_2412_;
goto v_reusejp_2410_;
}
v_reusejp_2410_:
{
return v___x_2411_;
}
}
}
}
}
}
else
{
lean_object* v_a_2415_; lean_object* v___x_2417_; uint8_t v_isShared_2418_; uint8_t v_isSharedCheck_2422_; 
lean_del_object(v___x_2347_);
lean_dec(v_val_2345_);
lean_dec(v___x_2336_);
lean_del_object(v___x_2334_);
lean_dec(v_val_2332_);
lean_dec_ref(v_arg_2326_);
lean_dec_ref(v_arg_2325_);
v_a_2415_ = lean_ctor_get(v___x_2350_, 0);
v_isSharedCheck_2422_ = !lean_is_exclusive(v___x_2350_);
if (v_isSharedCheck_2422_ == 0)
{
v___x_2417_ = v___x_2350_;
v_isShared_2418_ = v_isSharedCheck_2422_;
goto v_resetjp_2416_;
}
else
{
lean_inc(v_a_2415_);
lean_dec(v___x_2350_);
v___x_2417_ = lean_box(0);
v_isShared_2418_ = v_isSharedCheck_2422_;
goto v_resetjp_2416_;
}
v_resetjp_2416_:
{
lean_object* v___x_2420_; 
if (v_isShared_2418_ == 0)
{
v___x_2420_ = v___x_2417_;
goto v_reusejp_2419_;
}
else
{
lean_object* v_reuseFailAlloc_2421_; 
v_reuseFailAlloc_2421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2421_, 0, v_a_2415_);
v___x_2420_ = v_reuseFailAlloc_2421_;
goto v_reusejp_2419_;
}
v_reusejp_2419_:
{
return v___x_2420_;
}
}
}
}
}
else
{
lean_object* v___x_2424_; lean_object* v___x_2426_; 
lean_dec(v_a_2341_);
lean_dec(v___x_2336_);
lean_del_object(v___x_2334_);
lean_dec(v_val_2332_);
lean_dec_ref(v_arg_2326_);
lean_dec_ref(v_arg_2325_);
v___x_2424_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__0));
if (v_isShared_2344_ == 0)
{
lean_ctor_set(v___x_2343_, 0, v___x_2424_);
v___x_2426_ = v___x_2343_;
goto v_reusejp_2425_;
}
else
{
lean_object* v_reuseFailAlloc_2427_; 
v_reuseFailAlloc_2427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2427_, 0, v___x_2424_);
v___x_2426_ = v_reuseFailAlloc_2427_;
goto v_reusejp_2425_;
}
v_reusejp_2425_:
{
return v___x_2426_;
}
}
}
}
else
{
lean_object* v_a_2429_; lean_object* v___x_2431_; uint8_t v_isShared_2432_; uint8_t v_isSharedCheck_2436_; 
lean_dec(v___x_2336_);
lean_del_object(v___x_2334_);
lean_dec(v_val_2332_);
lean_dec_ref(v_arg_2326_);
lean_dec_ref(v_arg_2325_);
v_a_2429_ = lean_ctor_get(v___x_2340_, 0);
v_isSharedCheck_2436_ = !lean_is_exclusive(v___x_2340_);
if (v_isSharedCheck_2436_ == 0)
{
v___x_2431_ = v___x_2340_;
v_isShared_2432_ = v_isSharedCheck_2436_;
goto v_resetjp_2430_;
}
else
{
lean_inc(v_a_2429_);
lean_dec(v___x_2340_);
v___x_2431_ = lean_box(0);
v_isShared_2432_ = v_isSharedCheck_2436_;
goto v_resetjp_2430_;
}
v_resetjp_2430_:
{
lean_object* v___x_2434_; 
if (v_isShared_2432_ == 0)
{
v___x_2434_ = v___x_2431_;
goto v_reusejp_2433_;
}
else
{
lean_object* v_reuseFailAlloc_2435_; 
v_reuseFailAlloc_2435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2435_, 0, v_a_2429_);
v___x_2434_ = v_reuseFailAlloc_2435_;
goto v_reusejp_2433_;
}
v_reusejp_2433_:
{
return v___x_2434_;
}
}
}
}
}
else
{
lean_object* v___x_2438_; lean_object* v___x_2440_; 
lean_dec(v_a_2328_);
lean_dec_ref(v_arg_2326_);
lean_dec_ref(v_arg_2325_);
lean_dec_ref(v___x_2322_);
v___x_2438_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__0));
if (v_isShared_2331_ == 0)
{
lean_ctor_set(v___x_2330_, 0, v___x_2438_);
v___x_2440_ = v___x_2330_;
goto v_reusejp_2439_;
}
else
{
lean_object* v_reuseFailAlloc_2441_; 
v_reuseFailAlloc_2441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2441_, 0, v___x_2438_);
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
else
{
lean_object* v_a_2443_; lean_object* v___x_2445_; uint8_t v_isShared_2446_; uint8_t v_isSharedCheck_2450_; 
lean_dec_ref(v_arg_2326_);
lean_dec_ref(v_arg_2325_);
lean_dec_ref(v___x_2322_);
v_a_2443_ = lean_ctor_get(v___x_2327_, 0);
v_isSharedCheck_2450_ = !lean_is_exclusive(v___x_2327_);
if (v_isSharedCheck_2450_ == 0)
{
v___x_2445_ = v___x_2327_;
v_isShared_2446_ = v_isSharedCheck_2450_;
goto v_resetjp_2444_;
}
else
{
lean_inc(v_a_2443_);
lean_dec(v___x_2327_);
v___x_2445_ = lean_box(0);
v_isShared_2446_ = v_isSharedCheck_2450_;
goto v_resetjp_2444_;
}
v_resetjp_2444_:
{
lean_object* v___x_2448_; 
if (v_isShared_2446_ == 0)
{
v___x_2448_ = v___x_2445_;
goto v_reusejp_2447_;
}
else
{
lean_object* v_reuseFailAlloc_2449_; 
v_reuseFailAlloc_2449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2449_, 0, v_a_2443_);
v___x_2448_ = v_reuseFailAlloc_2449_;
goto v_reusejp_2447_;
}
v_reusejp_2447_:
{
return v___x_2448_;
}
}
}
}
}
}
}
v___jp_2313_:
{
lean_object* v___x_2314_; lean_object* v___x_2315_; 
v___x_2314_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__0));
v___x_2315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2315_, 0, v___x_2314_);
return v___x_2315_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___boxed(lean_object* v_e_2451_, lean_object* v_a_2452_, lean_object* v_a_2453_, lean_object* v_a_2454_, lean_object* v_a_2455_, lean_object* v_a_2456_){
_start:
{
lean_object* v_res_2457_; 
v_res_2457_ = l_Lean_Meta_Grind_Arith_normIntCastNum___redArg(v_e_2451_, v_a_2452_, v_a_2453_, v_a_2454_, v_a_2455_);
lean_dec(v_a_2455_);
lean_dec_ref(v_a_2454_);
lean_dec(v_a_2453_);
lean_dec_ref(v_a_2452_);
lean_dec_ref(v_e_2451_);
return v_res_2457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntCastNum(lean_object* v_e_2458_, lean_object* v_a_2459_, lean_object* v_a_2460_, lean_object* v_a_2461_, lean_object* v_a_2462_, lean_object* v_a_2463_, lean_object* v_a_2464_, lean_object* v_a_2465_){
_start:
{
lean_object* v___x_2467_; 
v___x_2467_ = l_Lean_Meta_Grind_Arith_normIntCastNum___redArg(v_e_2458_, v_a_2462_, v_a_2463_, v_a_2464_, v_a_2465_);
return v___x_2467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normIntCastNum___boxed(lean_object* v_e_2468_, lean_object* v_a_2469_, lean_object* v_a_2470_, lean_object* v_a_2471_, lean_object* v_a_2472_, lean_object* v_a_2473_, lean_object* v_a_2474_, lean_object* v_a_2475_, lean_object* v_a_2476_){
_start:
{
lean_object* v_res_2477_; 
v_res_2477_ = l_Lean_Meta_Grind_Arith_normIntCastNum(v_e_2468_, v_a_2469_, v_a_2470_, v_a_2471_, v_a_2472_, v_a_2473_, v_a_2474_, v_a_2475_);
lean_dec(v_a_2475_);
lean_dec_ref(v_a_2474_);
lean_dec(v_a_2473_);
lean_dec_ref(v_a_2472_);
lean_dec(v_a_2471_);
lean_dec_ref(v_a_2470_);
lean_dec(v_a_2469_);
lean_dec_ref(v_e_2468_);
return v_res_2477_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11_(){
_start:
{
lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; 
v___x_2497_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11_));
v___x_2498_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11_));
v___x_2499_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_normIntCastNum___boxed), 9, 0);
v___x_2500_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_2497_, v___x_2498_, v___x_2499_);
return v___x_2500_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11____boxed(lean_object* v_a_2501_){
_start:
{
lean_object* v_res_2502_; 
v_res_2502_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11_();
return v_res_2502_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Meta_Grind_Arith_normPowRatInt_spec__0(lean_object* v_a_2503_){
_start:
{
lean_object* v___x_2504_; 
v___x_2504_ = lean_nat_to_int(v_a_2503_);
return v___x_2504_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__0(void){
_start:
{
lean_object* v___x_2505_; lean_object* v___x_2506_; 
v___x_2505_ = lean_unsigned_to_nat(0u);
v___x_2506_ = l_Lean_Level_ofNat(v___x_2505_);
return v___x_2506_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__1(void){
_start:
{
lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; 
v___x_2507_ = lean_box(0);
v___x_2508_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__0, &l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__0_once, _init_l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__0);
v___x_2509_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2509_, 0, v___x_2508_);
lean_ctor_set(v___x_2509_, 1, v___x_2507_);
return v___x_2509_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__2(void){
_start:
{
lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; 
v___x_2510_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__1, &l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__1);
v___x_2511_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__0, &l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__0_once, _init_l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__0);
v___x_2512_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2512_, 0, v___x_2511_);
lean_ctor_set(v___x_2512_, 1, v___x_2510_);
return v___x_2512_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__3(void){
_start:
{
lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; 
v___x_2513_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__2, &l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__2_once, _init_l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__2);
v___x_2514_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__0, &l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__0_once, _init_l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__0);
v___x_2515_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2515_, 0, v___x_2514_);
lean_ctor_set(v___x_2515_, 1, v___x_2513_);
return v___x_2515_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__4(void){
_start:
{
lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; 
v___x_2516_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__3, &l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__3_once, _init_l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__3);
v___x_2517_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandDiv___redArg___closed__2));
v___x_2518_ = l_Lean_Expr_const___override(v___x_2517_, v___x_2516_);
return v___x_2518_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__7(void){
_start:
{
lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; 
v___x_2522_ = lean_box(0);
v___x_2523_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__6));
v___x_2524_ = l_Lean_Expr_const___override(v___x_2523_, v___x_2522_);
return v___x_2524_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__10(void){
_start:
{
lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; 
v___x_2528_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__1, &l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__1);
v___x_2529_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__9));
v___x_2530_ = l_Lean_Expr_const___override(v___x_2529_, v___x_2528_);
return v___x_2530_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__13(void){
_start:
{
lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; 
v___x_2535_ = lean_box(0);
v___x_2536_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__12));
v___x_2537_ = l_Lean_Expr_const___override(v___x_2536_, v___x_2535_);
return v___x_2537_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__14(void){
_start:
{
lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; 
v___x_2538_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__13, &l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__13_once, _init_l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__13);
v___x_2539_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__7, &l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__7_once, _init_l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__7);
v___x_2540_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__10, &l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__10_once, _init_l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__10);
v___x_2541_ = l_Lean_mkAppB(v___x_2540_, v___x_2539_, v___x_2538_);
return v___x_2541_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normPowRatInt___redArg(lean_object* v_e_2542_, lean_object* v_a_2543_, lean_object* v_a_2544_, lean_object* v_a_2545_, lean_object* v_a_2546_, lean_object* v_a_2547_){
_start:
{
lean_object* v___x_2552_; 
v___x_2552_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_2542_, v_a_2545_);
if (lean_obj_tag(v___x_2552_) == 0)
{
lean_object* v_a_2553_; lean_object* v___x_2554_; uint8_t v___x_2555_; 
v_a_2553_ = lean_ctor_get(v___x_2552_, 0);
lean_inc(v_a_2553_);
lean_dec_ref_known(v___x_2552_, 1);
v___x_2554_ = l_Lean_Expr_cleanupAnnotations(v_a_2553_);
lean_dec(v_a_2553_);
v___x_2555_ = l_Lean_Expr_isApp(v___x_2554_);
if (v___x_2555_ == 0)
{
lean_dec_ref(v___x_2554_);
goto v___jp_2549_;
}
else
{
lean_object* v___x_2556_; uint8_t v___x_2557_; 
v___x_2556_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2554_);
v___x_2557_ = l_Lean_Expr_isApp(v___x_2556_);
if (v___x_2557_ == 0)
{
lean_dec_ref(v___x_2556_);
lean_dec_ref(v___x_2554_);
goto v___jp_2549_;
}
else
{
lean_object* v___x_2558_; uint8_t v___x_2559_; 
v___x_2558_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2556_);
v___x_2559_ = l_Lean_Expr_isApp(v___x_2558_);
if (v___x_2559_ == 0)
{
lean_dec_ref(v___x_2558_);
lean_dec_ref(v___x_2556_);
lean_dec_ref(v___x_2554_);
goto v___jp_2549_;
}
else
{
lean_object* v___x_2560_; uint8_t v___x_2561_; 
v___x_2560_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2558_);
lean_dec_ref(v___x_2558_);
v___x_2561_ = l_Lean_Expr_isApp(v___x_2560_);
if (v___x_2561_ == 0)
{
lean_dec_ref(v___x_2560_);
lean_dec_ref(v___x_2556_);
lean_dec_ref(v___x_2554_);
goto v___jp_2549_;
}
else
{
lean_object* v___x_2562_; uint8_t v___x_2563_; 
v___x_2562_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2560_);
lean_dec_ref(v___x_2560_);
v___x_2563_ = l_Lean_Expr_isApp(v___x_2562_);
if (v___x_2563_ == 0)
{
lean_dec_ref(v___x_2562_);
lean_dec_ref(v___x_2556_);
lean_dec_ref(v___x_2554_);
goto v___jp_2549_;
}
else
{
lean_object* v___x_2564_; uint8_t v___x_2565_; 
v___x_2564_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2562_);
lean_dec_ref(v___x_2562_);
v___x_2565_ = l_Lean_Expr_isApp(v___x_2564_);
if (v___x_2565_ == 0)
{
lean_dec_ref(v___x_2564_);
lean_dec_ref(v___x_2556_);
lean_dec_ref(v___x_2554_);
goto v___jp_2549_;
}
else
{
lean_object* v___x_2566_; lean_object* v___x_2567_; uint8_t v___x_2568_; 
v___x_2566_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2564_);
lean_dec_ref(v___x_2564_);
v___x_2567_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_expandPow01___redArg___closed__3));
v___x_2568_ = l_Lean_Expr_isConstOf(v___x_2566_, v___x_2567_);
lean_dec_ref(v___x_2566_);
if (v___x_2568_ == 0)
{
lean_dec_ref(v___x_2556_);
lean_dec_ref(v___x_2554_);
goto v___jp_2549_;
}
else
{
lean_object* v_arg_2569_; lean_object* v_arg_2570_; lean_object* v___x_2571_; 
v_arg_2569_ = lean_ctor_get(v___x_2554_, 1);
lean_inc_ref(v_arg_2569_);
lean_dec_ref(v___x_2554_);
v_arg_2570_ = lean_ctor_get(v___x_2556_, 1);
lean_inc_ref(v_arg_2570_);
lean_dec_ref(v___x_2556_);
v___x_2571_ = l_Lean_Meta_getRatValue_x3f(v_arg_2570_, v_a_2544_, v_a_2545_, v_a_2546_, v_a_2547_);
if (lean_obj_tag(v___x_2571_) == 0)
{
lean_object* v_a_2572_; lean_object* v___x_2574_; uint8_t v_isShared_2575_; uint8_t v_isSharedCheck_2653_; 
v_a_2572_ = lean_ctor_get(v___x_2571_, 0);
v_isSharedCheck_2653_ = !lean_is_exclusive(v___x_2571_);
if (v_isSharedCheck_2653_ == 0)
{
v___x_2574_ = v___x_2571_;
v_isShared_2575_ = v_isSharedCheck_2653_;
goto v_resetjp_2573_;
}
else
{
lean_inc(v_a_2572_);
lean_dec(v___x_2571_);
v___x_2574_ = lean_box(0);
v_isShared_2575_ = v_isSharedCheck_2653_;
goto v_resetjp_2573_;
}
v_resetjp_2573_:
{
if (lean_obj_tag(v_a_2572_) == 1)
{
lean_object* v_val_2576_; lean_object* v___x_2577_; 
lean_del_object(v___x_2574_);
v_val_2576_ = lean_ctor_get(v_a_2572_, 0);
lean_inc(v_val_2576_);
lean_dec_ref_known(v_a_2572_, 1);
v___x_2577_ = l_Lean_Meta_getIntValue_x3f(v_arg_2569_, v_a_2544_, v_a_2545_, v_a_2546_, v_a_2547_);
if (lean_obj_tag(v___x_2577_) == 0)
{
lean_object* v_a_2578_; lean_object* v___x_2580_; uint8_t v_isShared_2581_; uint8_t v_isSharedCheck_2640_; 
v_a_2578_ = lean_ctor_get(v___x_2577_, 0);
v_isSharedCheck_2640_ = !lean_is_exclusive(v___x_2577_);
if (v_isSharedCheck_2640_ == 0)
{
v___x_2580_ = v___x_2577_;
v_isShared_2581_ = v_isSharedCheck_2640_;
goto v_resetjp_2579_;
}
else
{
lean_inc(v_a_2578_);
lean_dec(v___x_2577_);
v___x_2580_ = lean_box(0);
v_isShared_2581_ = v_isSharedCheck_2640_;
goto v_resetjp_2579_;
}
v_resetjp_2579_:
{
if (lean_obj_tag(v_a_2578_) == 1)
{
lean_object* v_config_2582_; lean_object* v_val_2583_; lean_object* v___x_2585_; uint8_t v_isShared_2586_; uint8_t v_isSharedCheck_2635_; 
v_config_2582_ = lean_ctor_get(v_a_2543_, 0);
v_val_2583_ = lean_ctor_get(v_a_2578_, 0);
v_isSharedCheck_2635_ = !lean_is_exclusive(v_a_2578_);
if (v_isSharedCheck_2635_ == 0)
{
v___x_2585_ = v_a_2578_;
v_isShared_2586_ = v_isSharedCheck_2635_;
goto v_resetjp_2584_;
}
else
{
lean_inc(v_val_2583_);
lean_dec(v_a_2578_);
v___x_2585_ = lean_box(0);
v_isShared_2586_ = v_isSharedCheck_2635_;
goto v_resetjp_2584_;
}
v_resetjp_2584_:
{
uint8_t v_warnExponents_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; 
v_warnExponents_2587_ = lean_ctor_get_uint8(v_config_2582_, sizeof(void*)*3 + 25);
v___x_2588_ = lean_nat_abs(v_val_2583_);
v___x_2589_ = l_Lean_checkExponent(v___x_2588_, v_warnExponents_2587_, v_a_2546_, v_a_2547_);
if (lean_obj_tag(v___x_2589_) == 0)
{
lean_object* v_a_2590_; lean_object* v___x_2592_; uint8_t v_isShared_2593_; uint8_t v_isSharedCheck_2626_; 
v_a_2590_ = lean_ctor_get(v___x_2589_, 0);
v_isSharedCheck_2626_ = !lean_is_exclusive(v___x_2589_);
if (v_isSharedCheck_2626_ == 0)
{
v___x_2592_ = v___x_2589_;
v_isShared_2593_ = v_isSharedCheck_2626_;
goto v_resetjp_2591_;
}
else
{
lean_inc(v_a_2590_);
lean_dec(v___x_2589_);
v___x_2592_ = lean_box(0);
v_isShared_2593_ = v_isSharedCheck_2626_;
goto v_resetjp_2591_;
}
v_resetjp_2591_:
{
lean_object* v___y_2595_; uint8_t v___x_2602_; 
v___x_2602_ = lean_unbox(v_a_2590_);
lean_dec(v_a_2590_);
if (v___x_2602_ == 0)
{
lean_object* v___x_2603_; lean_object* v___x_2605_; 
lean_del_object(v___x_2592_);
lean_del_object(v___x_2585_);
lean_dec(v_val_2583_);
lean_dec(v_val_2576_);
v___x_2603_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_normInst___closed__0));
if (v_isShared_2581_ == 0)
{
lean_ctor_set(v___x_2580_, 0, v___x_2603_);
v___x_2605_ = v___x_2580_;
goto v_reusejp_2604_;
}
else
{
lean_object* v_reuseFailAlloc_2606_; 
v_reuseFailAlloc_2606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2606_, 0, v___x_2603_);
v___x_2605_ = v_reuseFailAlloc_2606_;
goto v_reusejp_2604_;
}
v_reusejp_2604_:
{
return v___x_2605_;
}
}
else
{
lean_object* v___x_2607_; uint8_t v___x_2608_; 
v___x_2607_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__5, &l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__5_once, _init_l_Lean_Meta_Grind_Arith_normIntCastNum___redArg___closed__5);
v___x_2608_ = lean_int_dec_lt(v_val_2583_, v___x_2607_);
if (v___x_2608_ == 0)
{
lean_object* v___x_2609_; lean_object* v_num_2610_; lean_object* v_den_2611_; lean_object* v___x_2612_; uint8_t v___x_2613_; 
lean_del_object(v___x_2580_);
v___x_2609_ = l_Rat_zpow(v_val_2576_, v_val_2583_);
lean_dec(v_val_2583_);
v_num_2610_ = lean_ctor_get(v___x_2609_, 0);
lean_inc(v_num_2610_);
v_den_2611_ = lean_ctor_get(v___x_2609_, 1);
lean_inc(v_den_2611_);
lean_dec_ref(v___x_2609_);
v___x_2612_ = lean_unsigned_to_nat(1u);
v___x_2613_ = lean_nat_dec_eq(v_den_2611_, v___x_2612_);
if (v___x_2613_ == 0)
{
lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; 
v___x_2614_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__4, &l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__4_once, _init_l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__4);
v___x_2615_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__7, &l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__7_once, _init_l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__7);
v___x_2616_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__14, &l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__14_once, _init_l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___closed__14);
v___x_2617_ = l_Lean_instToExprRat_mkInt(v_num_2610_);
lean_dec(v_num_2610_);
v___x_2618_ = lean_nat_to_int(v_den_2611_);
v___x_2619_ = l_Lean_instToExprRat_mkInt(v___x_2618_);
lean_dec(v___x_2618_);
v___x_2620_ = l_Lean_mkApp6(v___x_2614_, v___x_2615_, v___x_2615_, v___x_2615_, v___x_2616_, v___x_2617_, v___x_2619_);
v___y_2595_ = v___x_2620_;
goto v___jp_2594_;
}
else
{
lean_object* v___x_2621_; 
lean_dec(v_den_2611_);
v___x_2621_ = l_Lean_instToExprRat_mkInt(v_num_2610_);
lean_dec(v_num_2610_);
v___y_2595_ = v___x_2621_;
goto v___jp_2594_;
}
}
else
{
lean_object* v___x_2622_; lean_object* v___x_2624_; 
lean_del_object(v___x_2592_);
lean_del_object(v___x_2585_);
lean_dec(v_val_2583_);
lean_dec(v_val_2576_);
v___x_2622_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_normInst___closed__0));
if (v_isShared_2581_ == 0)
{
lean_ctor_set(v___x_2580_, 0, v___x_2622_);
v___x_2624_ = v___x_2580_;
goto v_reusejp_2623_;
}
else
{
lean_object* v_reuseFailAlloc_2625_; 
v_reuseFailAlloc_2625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2625_, 0, v___x_2622_);
v___x_2624_ = v_reuseFailAlloc_2625_;
goto v_reusejp_2623_;
}
v_reusejp_2623_:
{
return v___x_2624_;
}
}
}
v___jp_2594_:
{
lean_object* v___x_2597_; 
if (v_isShared_2586_ == 0)
{
lean_ctor_set_tag(v___x_2585_, 0);
lean_ctor_set(v___x_2585_, 0, v___y_2595_);
v___x_2597_ = v___x_2585_;
goto v_reusejp_2596_;
}
else
{
lean_object* v_reuseFailAlloc_2601_; 
v_reuseFailAlloc_2601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2601_, 0, v___y_2595_);
v___x_2597_ = v_reuseFailAlloc_2601_;
goto v_reusejp_2596_;
}
v_reusejp_2596_:
{
lean_object* v___x_2599_; 
if (v_isShared_2593_ == 0)
{
lean_ctor_set(v___x_2592_, 0, v___x_2597_);
v___x_2599_ = v___x_2592_;
goto v_reusejp_2598_;
}
else
{
lean_object* v_reuseFailAlloc_2600_; 
v_reuseFailAlloc_2600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2600_, 0, v___x_2597_);
v___x_2599_ = v_reuseFailAlloc_2600_;
goto v_reusejp_2598_;
}
v_reusejp_2598_:
{
return v___x_2599_;
}
}
}
}
}
else
{
lean_object* v_a_2627_; lean_object* v___x_2629_; uint8_t v_isShared_2630_; uint8_t v_isSharedCheck_2634_; 
lean_del_object(v___x_2585_);
lean_dec(v_val_2583_);
lean_del_object(v___x_2580_);
lean_dec(v_val_2576_);
v_a_2627_ = lean_ctor_get(v___x_2589_, 0);
v_isSharedCheck_2634_ = !lean_is_exclusive(v___x_2589_);
if (v_isSharedCheck_2634_ == 0)
{
v___x_2629_ = v___x_2589_;
v_isShared_2630_ = v_isSharedCheck_2634_;
goto v_resetjp_2628_;
}
else
{
lean_inc(v_a_2627_);
lean_dec(v___x_2589_);
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
lean_object* v___x_2636_; lean_object* v___x_2638_; 
lean_dec(v_a_2578_);
lean_dec(v_val_2576_);
v___x_2636_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_normInst___closed__0));
if (v_isShared_2581_ == 0)
{
lean_ctor_set(v___x_2580_, 0, v___x_2636_);
v___x_2638_ = v___x_2580_;
goto v_reusejp_2637_;
}
else
{
lean_object* v_reuseFailAlloc_2639_; 
v_reuseFailAlloc_2639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2639_, 0, v___x_2636_);
v___x_2638_ = v_reuseFailAlloc_2639_;
goto v_reusejp_2637_;
}
v_reusejp_2637_:
{
return v___x_2638_;
}
}
}
}
else
{
lean_object* v_a_2641_; lean_object* v___x_2643_; uint8_t v_isShared_2644_; uint8_t v_isSharedCheck_2648_; 
lean_dec(v_val_2576_);
v_a_2641_ = lean_ctor_get(v___x_2577_, 0);
v_isSharedCheck_2648_ = !lean_is_exclusive(v___x_2577_);
if (v_isSharedCheck_2648_ == 0)
{
v___x_2643_ = v___x_2577_;
v_isShared_2644_ = v_isSharedCheck_2648_;
goto v_resetjp_2642_;
}
else
{
lean_inc(v_a_2641_);
lean_dec(v___x_2577_);
v___x_2643_ = lean_box(0);
v_isShared_2644_ = v_isSharedCheck_2648_;
goto v_resetjp_2642_;
}
v_resetjp_2642_:
{
lean_object* v___x_2646_; 
if (v_isShared_2644_ == 0)
{
v___x_2646_ = v___x_2643_;
goto v_reusejp_2645_;
}
else
{
lean_object* v_reuseFailAlloc_2647_; 
v_reuseFailAlloc_2647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2647_, 0, v_a_2641_);
v___x_2646_ = v_reuseFailAlloc_2647_;
goto v_reusejp_2645_;
}
v_reusejp_2645_:
{
return v___x_2646_;
}
}
}
}
else
{
lean_object* v___x_2649_; lean_object* v___x_2651_; 
lean_dec(v_a_2572_);
lean_dec_ref(v_arg_2569_);
v___x_2649_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_normInst___closed__0));
if (v_isShared_2575_ == 0)
{
lean_ctor_set(v___x_2574_, 0, v___x_2649_);
v___x_2651_ = v___x_2574_;
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
else
{
lean_object* v_a_2654_; lean_object* v___x_2656_; uint8_t v_isShared_2657_; uint8_t v_isSharedCheck_2661_; 
lean_dec_ref(v_arg_2569_);
v_a_2654_ = lean_ctor_get(v___x_2571_, 0);
v_isSharedCheck_2661_ = !lean_is_exclusive(v___x_2571_);
if (v_isSharedCheck_2661_ == 0)
{
v___x_2656_ = v___x_2571_;
v_isShared_2657_ = v_isSharedCheck_2661_;
goto v_resetjp_2655_;
}
else
{
lean_inc(v_a_2654_);
lean_dec(v___x_2571_);
v___x_2656_ = lean_box(0);
v_isShared_2657_ = v_isSharedCheck_2661_;
goto v_resetjp_2655_;
}
v_resetjp_2655_:
{
lean_object* v___x_2659_; 
if (v_isShared_2657_ == 0)
{
v___x_2659_ = v___x_2656_;
goto v_reusejp_2658_;
}
else
{
lean_object* v_reuseFailAlloc_2660_; 
v_reuseFailAlloc_2660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2660_, 0, v_a_2654_);
v___x_2659_ = v_reuseFailAlloc_2660_;
goto v_reusejp_2658_;
}
v_reusejp_2658_:
{
return v___x_2659_;
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
lean_object* v_a_2662_; lean_object* v___x_2664_; uint8_t v_isShared_2665_; uint8_t v_isSharedCheck_2669_; 
v_a_2662_ = lean_ctor_get(v___x_2552_, 0);
v_isSharedCheck_2669_ = !lean_is_exclusive(v___x_2552_);
if (v_isSharedCheck_2669_ == 0)
{
v___x_2664_ = v___x_2552_;
v_isShared_2665_ = v_isSharedCheck_2669_;
goto v_resetjp_2663_;
}
else
{
lean_inc(v_a_2662_);
lean_dec(v___x_2552_);
v___x_2664_ = lean_box(0);
v_isShared_2665_ = v_isSharedCheck_2669_;
goto v_resetjp_2663_;
}
v_resetjp_2663_:
{
lean_object* v___x_2667_; 
if (v_isShared_2665_ == 0)
{
v___x_2667_ = v___x_2664_;
goto v_reusejp_2666_;
}
else
{
lean_object* v_reuseFailAlloc_2668_; 
v_reuseFailAlloc_2668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2668_, 0, v_a_2662_);
v___x_2667_ = v_reuseFailAlloc_2668_;
goto v_reusejp_2666_;
}
v_reusejp_2666_:
{
return v___x_2667_;
}
}
}
v___jp_2549_:
{
lean_object* v___x_2550_; lean_object* v___x_2551_; 
v___x_2550_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_normInst___closed__0));
v___x_2551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2551_, 0, v___x_2550_);
return v___x_2551_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normPowRatInt___redArg___boxed(lean_object* v_e_2670_, lean_object* v_a_2671_, lean_object* v_a_2672_, lean_object* v_a_2673_, lean_object* v_a_2674_, lean_object* v_a_2675_, lean_object* v_a_2676_){
_start:
{
lean_object* v_res_2677_; 
v_res_2677_ = l_Lean_Meta_Grind_Arith_normPowRatInt___redArg(v_e_2670_, v_a_2671_, v_a_2672_, v_a_2673_, v_a_2674_, v_a_2675_);
lean_dec(v_a_2675_);
lean_dec_ref(v_a_2674_);
lean_dec(v_a_2673_);
lean_dec_ref(v_a_2672_);
lean_dec_ref(v_a_2671_);
return v_res_2677_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normPowRatInt(lean_object* v_e_2678_, lean_object* v_a_2679_, lean_object* v_a_2680_, lean_object* v_a_2681_, lean_object* v_a_2682_, lean_object* v_a_2683_, lean_object* v_a_2684_, lean_object* v_a_2685_){
_start:
{
lean_object* v___x_2687_; 
v___x_2687_ = l_Lean_Meta_Grind_Arith_normPowRatInt___redArg(v_e_2678_, v_a_2680_, v_a_2682_, v_a_2683_, v_a_2684_, v_a_2685_);
return v___x_2687_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_normPowRatInt___boxed(lean_object* v_e_2688_, lean_object* v_a_2689_, lean_object* v_a_2690_, lean_object* v_a_2691_, lean_object* v_a_2692_, lean_object* v_a_2693_, lean_object* v_a_2694_, lean_object* v_a_2695_, lean_object* v_a_2696_){
_start:
{
lean_object* v_res_2697_; 
v_res_2697_ = l_Lean_Meta_Grind_Arith_normPowRatInt(v_e_2688_, v_a_2689_, v_a_2690_, v_a_2691_, v_a_2692_, v_a_2693_, v_a_2694_, v_a_2695_);
lean_dec(v_a_2695_);
lean_dec_ref(v_a_2694_);
lean_dec(v_a_2693_);
lean_dec_ref(v_a_2692_);
lean_dec(v_a_2691_);
lean_dec_ref(v_a_2690_);
lean_dec(v_a_2689_);
return v_res_2697_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24_(){
_start:
{
lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; 
v___x_2722_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24_));
v___x_2723_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24_));
v___x_2724_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_normPowRatInt___boxed), 9, 0);
v___x_2725_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_2722_, v___x_2723_, v___x_2724_);
return v___x_2725_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24____boxed(lean_object* v_a_2726_){
_start:
{
lean_object* v_res_2727_; 
v_res_2727_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24_();
return v_res_2727_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_normPowRatInt___regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_26_(void){
_start:
{
lean_object* v___x_2728_; lean_object* v___x_2729_; 
v___x_2728_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_normPowRatInt___boxed), 9, 0);
v___x_2729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2729_, 0, v___x_2728_);
return v___x_2729_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_normPowRatInt___regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_2731_; uint8_t v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; 
v___x_2731_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24_));
v___x_2732_ = 1;
v___x_2733_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_normPowRatInt___regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_26_, &l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_normPowRatInt___regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_26__once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_normPowRatInt___regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_26_);
v___x_2734_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_2731_, v___x_2732_, v___x_2733_);
return v___x_2734_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_normPowRatInt___regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_26____boxed(lean_object* v_a_2735_){
_start:
{
lean_object* v_res_2736_; 
v_res_2736_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_normPowRatInt___regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_26_();
return v_res_2736_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_normPowRatInt___regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_28_(){
_start:
{
lean_object* v___x_2738_; uint8_t v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; 
v___x_2738_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24_));
v___x_2739_ = 1;
v___x_2740_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_normPowRatInt___regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_26_, &l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_normPowRatInt___regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_26__once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_normPowRatInt___regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_26_);
v___x_2741_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_2738_, v___x_2739_, v___x_2740_);
return v___x_2741_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_normPowRatInt___regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_28____boxed(lean_object* v_a_2742_){
_start:
{
lean_object* v_res_2743_; 
v_res_2743_ = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_normPowRatInt___regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_28_();
return v_res_2743_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_addSimproc(lean_object* v_s_2744_, lean_object* v_a_2745_, lean_object* v_a_2746_){
_start:
{
lean_object* v___x_2748_; uint8_t v___x_2749_; lean_object* v___x_2750_; 
v___x_2748_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8___closed__3_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14_));
v___x_2749_ = 1;
v___x_2750_ = l_Lean_Meta_Simp_Simprocs_add(v_s_2744_, v___x_2748_, v___x_2749_, v_a_2745_, v_a_2746_);
if (lean_obj_tag(v___x_2750_) == 0)
{
lean_object* v_a_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; 
v_a_2751_ = lean_ctor_get(v___x_2750_, 0);
lean_inc(v_a_2751_);
lean_dec_ref_known(v___x_2750_, 1);
v___x_2752_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14_));
v___x_2753_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2751_, v___x_2752_, v___x_2749_, v_a_2745_, v_a_2746_);
if (lean_obj_tag(v___x_2753_) == 0)
{
lean_object* v_a_2754_; lean_object* v___x_2755_; uint8_t v___x_2756_; lean_object* v___x_2757_; 
v_a_2754_ = lean_ctor_get(v___x_2753_, 0);
lean_inc(v_a_2754_);
lean_dec_ref_known(v___x_2753_, 1);
v___x_2755_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17_));
v___x_2756_ = 0;
v___x_2757_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2754_, v___x_2755_, v___x_2756_, v_a_2745_, v_a_2746_);
if (lean_obj_tag(v___x_2757_) == 0)
{
lean_object* v_a_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; 
v_a_2758_ = lean_ctor_get(v___x_2757_, 0);
lean_inc(v_a_2758_);
lean_dec_ref_known(v___x_2757_, 1);
v___x_2759_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17_));
v___x_2760_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2758_, v___x_2759_, v___x_2756_, v_a_2745_, v_a_2746_);
if (lean_obj_tag(v___x_2760_) == 0)
{
lean_object* v_a_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; 
v_a_2761_ = lean_ctor_get(v___x_2760_, 0);
lean_inc(v_a_2761_);
lean_dec_ref_known(v___x_2760_, 1);
v___x_2762_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17_));
v___x_2763_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2761_, v___x_2762_, v___x_2756_, v_a_2745_, v_a_2746_);
if (lean_obj_tag(v___x_2763_) == 0)
{
lean_object* v_a_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; 
v_a_2764_ = lean_ctor_get(v___x_2763_, 0);
lean_inc(v_a_2764_);
lean_dec_ref_known(v___x_2763_, 1);
v___x_2765_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatDivInst_declare__48___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3299992319____hygCtx___hyg_17_));
v___x_2766_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2764_, v___x_2765_, v___x_2756_, v_a_2745_, v_a_2746_);
if (lean_obj_tag(v___x_2766_) == 0)
{
lean_object* v_a_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; 
v_a_2767_ = lean_ctor_get(v___x_2766_, 0);
lean_inc(v_a_2767_);
lean_dec_ref_known(v___x_2766_, 1);
v___x_2768_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17_));
v___x_2769_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2767_, v___x_2768_, v___x_2756_, v_a_2745_, v_a_2746_);
if (lean_obj_tag(v___x_2769_) == 0)
{
lean_object* v_a_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; 
v_a_2770_ = lean_ctor_get(v___x_2769_, 0);
lean_inc(v_a_2770_);
lean_dec_ref_known(v___x_2769_, 1);
v___x_2771_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatPowInst_declare__58___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4112346720____hygCtx___hyg_17_));
v___x_2772_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2770_, v___x_2771_, v___x_2756_, v_a_2745_, v_a_2746_);
if (lean_obj_tag(v___x_2772_) == 0)
{
lean_object* v_a_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; 
v_a_2773_ = lean_ctor_get(v___x_2772_, 0);
lean_inc(v_a_2773_);
lean_dec_ref_known(v___x_2772_, 1);
v___x_2774_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14_));
v___x_2775_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2773_, v___x_2774_, v___x_2756_, v_a_2745_, v_a_2746_);
if (lean_obj_tag(v___x_2775_) == 0)
{
lean_object* v_a_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; 
v_a_2776_ = lean_ctor_get(v___x_2775_, 0);
lean_inc(v_a_2776_);
lean_dec_ref_known(v___x_2775_, 1);
v___x_2777_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16_));
v___x_2778_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2776_, v___x_2777_, v___x_2756_, v_a_2745_, v_a_2746_);
if (lean_obj_tag(v___x_2778_) == 0)
{
lean_object* v_a_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; 
v_a_2779_ = lean_ctor_get(v___x_2778_, 0);
lean_inc(v_a_2779_);
lean_dec_ref_known(v___x_2778_, 1);
v___x_2780_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntAddInst_declare__76___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3522364415____hygCtx___hyg_17_));
v___x_2781_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2779_, v___x_2780_, v___x_2756_, v_a_2745_, v_a_2746_);
if (lean_obj_tag(v___x_2781_) == 0)
{
lean_object* v_a_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; 
v_a_2782_ = lean_ctor_get(v___x_2781_, 0);
lean_inc(v_a_2782_);
lean_dec_ref_known(v___x_2781_, 1);
v___x_2783_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntMulInst_declare__81___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3205577538____hygCtx___hyg_17_));
v___x_2784_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2782_, v___x_2783_, v___x_2756_, v_a_2745_, v_a_2746_);
if (lean_obj_tag(v___x_2784_) == 0)
{
lean_object* v_a_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; 
v_a_2785_ = lean_ctor_get(v___x_2784_, 0);
lean_inc(v_a_2785_);
lean_dec_ref_known(v___x_2784_, 1);
v___x_2786_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntSubInst_declare__86___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3607485820____hygCtx___hyg_17_));
v___x_2787_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2785_, v___x_2786_, v___x_2756_, v_a_2745_, v_a_2746_);
if (lean_obj_tag(v___x_2787_) == 0)
{
lean_object* v_a_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; 
v_a_2788_ = lean_ctor_get(v___x_2787_, 0);
lean_inc(v_a_2788_);
lean_dec_ref_known(v___x_2787_, 1);
v___x_2789_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntDivInst_declare__91___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4859482____hygCtx___hyg_17_));
v___x_2790_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2788_, v___x_2789_, v___x_2756_, v_a_2745_, v_a_2746_);
if (lean_obj_tag(v___x_2790_) == 0)
{
lean_object* v_a_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; 
v_a_2791_ = lean_ctor_get(v___x_2790_, 0);
lean_inc(v_a_2791_);
lean_dec_ref_known(v___x_2790_, 1);
v___x_2792_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntModInst_declare__96___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_807206037____hygCtx___hyg_17_));
v___x_2793_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2791_, v___x_2792_, v___x_2756_, v_a_2745_, v_a_2746_);
if (lean_obj_tag(v___x_2793_) == 0)
{
lean_object* v_a_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; 
v_a_2794_ = lean_ctor_get(v___x_2793_, 0);
lean_inc(v_a_2794_);
lean_dec_ref_known(v___x_2793_, 1);
v___x_2795_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntPowInst_declare__101___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1870397832____hygCtx___hyg_17_));
v___x_2796_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2794_, v___x_2795_, v___x_2756_, v_a_2745_, v_a_2746_);
if (lean_obj_tag(v___x_2796_) == 0)
{
lean_object* v_a_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; 
v_a_2797_ = lean_ctor_get(v___x_2796_, 0);
lean_inc(v_a_2797_);
lean_dec_ref_known(v___x_2796_, 1);
v___x_2798_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14_));
v___x_2799_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2797_, v___x_2798_, v___x_2756_, v_a_2745_, v_a_2746_);
if (lean_obj_tag(v___x_2799_) == 0)
{
lean_object* v_a_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; 
v_a_2800_ = lean_ctor_get(v___x_2799_, 0);
lean_inc(v_a_2800_);
lean_dec_ref_known(v___x_2799_, 1);
v___x_2801_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntOfNatInst_declare__114___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_906398933____hygCtx___hyg_14_));
v___x_2802_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2800_, v___x_2801_, v___x_2756_, v_a_2745_, v_a_2746_);
if (lean_obj_tag(v___x_2802_) == 0)
{
lean_object* v_a_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; 
v_a_2803_ = lean_ctor_get(v___x_2802_, 0);
lean_inc(v_a_2803_);
lean_dec_ref_known(v___x_2802_, 1);
v___x_2804_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastNum_declare__119___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3624952232____hygCtx___hyg_11_));
v___x_2805_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2803_, v___x_2804_, v___x_2756_, v_a_2745_, v_a_2746_);
if (lean_obj_tag(v___x_2805_) == 0)
{
lean_object* v_a_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; 
v_a_2806_ = lean_ctor_get(v___x_2805_, 0);
lean_inc(v_a_2806_);
lean_dec_ref_known(v___x_2805_, 1);
v___x_2807_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11_));
v___x_2808_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2806_, v___x_2807_, v___x_2756_, v_a_2745_, v_a_2746_);
if (lean_obj_tag(v___x_2808_) == 0)
{
lean_object* v_a_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; 
v_a_2809_ = lean_ctor_get(v___x_2808_, 0);
lean_inc(v_a_2809_);
lean_dec_ref_known(v___x_2808_, 1);
v___x_2810_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24_));
v___x_2811_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2809_, v___x_2810_, v___x_2756_, v_a_2745_, v_a_2746_);
if (lean_obj_tag(v___x_2811_) == 0)
{
lean_object* v_a_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; 
v_a_2812_ = lean_ctor_get(v___x_2811_, 0);
lean_inc(v_a_2812_);
lean_dec_ref_known(v___x_2811_, 1);
v___x_2813_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24___closed__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13_));
v___x_2814_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2812_, v___x_2813_, v___x_2756_, v_a_2745_, v_a_2746_);
return v___x_2814_;
}
else
{
return v___x_2811_;
}
}
else
{
return v___x_2808_;
}
}
else
{
return v___x_2805_;
}
}
else
{
return v___x_2802_;
}
}
else
{
return v___x_2799_;
}
}
else
{
return v___x_2796_;
}
}
else
{
return v___x_2793_;
}
}
else
{
return v___x_2790_;
}
}
else
{
return v___x_2787_;
}
}
else
{
return v___x_2784_;
}
}
else
{
return v___x_2781_;
}
}
else
{
return v___x_2778_;
}
}
else
{
return v___x_2775_;
}
}
else
{
return v___x_2772_;
}
}
else
{
return v___x_2769_;
}
}
else
{
return v___x_2766_;
}
}
else
{
return v___x_2763_;
}
}
else
{
return v___x_2760_;
}
}
else
{
return v___x_2757_;
}
}
else
{
return v___x_2753_;
}
}
else
{
return v___x_2750_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_addSimproc___boxed(lean_object* v_s_2815_, lean_object* v_a_2816_, lean_object* v_a_2817_, lean_object* v_a_2818_){
_start:
{
lean_object* v_res_2819_; 
v_res_2819_ = l_Lean_Meta_Grind_Arith_addSimproc(v_s_2815_, v_a_2816_, v_a_2817_);
lean_dec(v_a_2817_);
lean_dec_ref(v_a_2816_);
return v_res_2819_;
}
}
lean_object* runtime_initialize_Init_Grind_Ring_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_SynthInstance(uint8_t builtin);
lean_object* runtime_initialize_Init_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_LitValues(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Ring_Field(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_DecLevel(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_FieldNormNum(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_SafeExponentiation(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Simproc(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Grind_Ring_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_LitValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Ring_Field(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_DecLevel(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_FieldNormNum(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_SafeExponentiation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandPow01_declare__8_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_729687463____hygCtx___hyg_14_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField = _init_l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_notField);
res = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_expandDiv_declare__19_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_2348362565____hygCtx___hyg_14_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normFieldInv_declare__24_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1655774764____hygCtx___hyg_13_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatAddInst_declare__33_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_114900174____hygCtx___hyg_17_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatMulInst_declare__38_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1721448607____hygCtx___hyg_17_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatSubInst_declare__43_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1219453224____hygCtx___hyg_17_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatDivInst_declare__48_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3299992319____hygCtx___hyg_17_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatModInst_declare__53_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_692861617____hygCtx___hyg_17_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatPowInst_declare__58_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4112346720____hygCtx___hyg_17_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatOfNatInst_declare__66_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1661358275____hygCtx___hyg_14_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntNegInst_declare__71_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_687522244____hygCtx___hyg_16_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntAddInst_declare__76_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3522364415____hygCtx___hyg_17_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntMulInst_declare__81_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3205577538____hygCtx___hyg_17_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntSubInst_declare__86_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3607485820____hygCtx___hyg_17_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntDivInst_declare__91_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_4859482____hygCtx___hyg_17_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntModInst_declare__96_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_807206037____hygCtx___hyg_17_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntPowInst_declare__101_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1870397832____hygCtx___hyg_17_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastInst_declare__106_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_1835662086____hygCtx___hyg_14_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntOfNatInst_declare__114_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_906398933____hygCtx___hyg_14_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normNatCastNum_declare__119_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_3624952232____hygCtx___hyg_11_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normIntCastNum_declare__124_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_589043525____hygCtx___hyg_11_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0____regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__129_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_24_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_normPowRatInt___regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Arith_Simproc_0__Lean_Meta_Grind_Arith_normPowRatInt___regBuiltin_Lean_Meta_Grind_Arith_normPowRatInt_declare__1_00___x40_Lean_Meta_Tactic_Grind_Arith_Simproc_130286773____hygCtx___hyg_28_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_Simproc(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind_Ring_Basic(uint8_t builtin);
lean_object* initialize_Init_Simproc(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_SynthInstance(uint8_t builtin);
lean_object* initialize_Init_Simproc(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_LitValues(uint8_t builtin);
lean_object* initialize_Init_Grind_Ring_Field(uint8_t builtin);
lean_object* initialize_Lean_Meta_DecLevel(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_FieldNormNum(uint8_t builtin);
lean_object* initialize_Lean_Util_SafeExponentiation(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Simproc(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind_Ring_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_LitValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Ring_Field(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_DecLevel(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_FieldNormNum(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_SafeExponentiation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_Simproc(builtin);
}
#ifdef __cplusplus
}
#endif
