// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.Cutsat.CommRing
// Imports: public import Lean.Meta.Tactic.Grind.Arith.Cutsat.Types public import Lean.Meta.Tactic.Grind.Arith.CommRing.RingId import Lean.Meta.Tactic.Grind.Simp import Lean.Meta.Tactic.Grind.Arith.Cutsat.Util import Lean.Meta.Tactic.Grind.Arith.Cutsat.Var import Lean.Meta.Tactic.Grind.Arith.CommRing.Reify import Lean.Meta.Tactic.Grind.Arith.CommRing.DenoteExpr import Lean.Meta.Tactic.Grind.Arith.CommRing.SafePoly
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
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Meta_Sym_synthInstance_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* l_Lean_mkRawNatLit(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_canon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
extern lean_object* l_Lean_Nat_mkType;
lean_object* l_Lean_mkNatLit(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRingState___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getGeneration___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getIntExpr___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_getCommRingId_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent;
lean_object* l_Int_Internal_Linear_Poly_denoteExpr_x27___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_reify_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Grind_CommRing_Expr_toPolyM_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_preprocessLight___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_internalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_toPoly(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Int_Internal_Linear_instBEqPoly_beq(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
lean_object* l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Int_Internal_Linear_Poly_pp___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMul"};
static const lean_object* l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__0 = (const lean_object*)&l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__0_value;
static const lean_string_object l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMul"};
static const lean_object* l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__1 = (const lean_object*)&l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__1_value;
static const lean_ctor_object l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_ctor_object l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__2_value_aux_0),((lean_object*)&l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(248, 227, 200, 215, 229, 255, 92, 22)}};
static const lean_object* l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__2 = (const lean_object*)&l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__2_value;
static const lean_string_object l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HPow"};
static const lean_object* l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__3 = (const lean_object*)&l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__3_value;
static const lean_string_object l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hPow"};
static const lean_object* l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__4 = (const lean_object*)&l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__4_value;
static const lean_ctor_object l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(155, 188, 136, 200, 106, 253, 76, 178)}};
static const lean_ctor_object l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__5_value_aux_0),((lean_object*)&l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(32, 63, 208, 57, 56, 184, 164, 144)}};
static const lean_object* l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__5 = (const lean_object*)&l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_isNonlinear___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_isNonlinear___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_isNonlinear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_isNonlinear___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing_0__Int_Internal_Linear_Poly_getGeneration_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing_0__Int_Internal_Linear_Poly_getGeneration_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing_0__Int_Internal_Linear_Poly_getGeneration_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing_0__Int_Internal_Linear_Poly_getGeneration_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_getGeneration___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_getGeneration___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_getGeneration(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_getGeneration___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getIntRingId_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getIntRingId_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getIntRingId_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getIntRingId_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_normCommRing_x3f___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_normCommRing_x3f___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4_spec__7_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4_spec__7_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "failed to find instance"};
static const lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4_spec__7___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4_spec__7___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4_spec__7___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4_spec__7___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___at___00Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___at___00Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3_spec__7___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___lam__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instHAdd"};
static const lean_object* l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(229, 81, 239, 34, 203, 244, 36, 133)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__2_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__3_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Semiring"};
static const lean_object* l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__4_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toAdd"};
static const lean_object* l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__6_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__4_value),LEAN_SCALAR_PTR_LITERAL(246, 150, 10, 46, 185, 54, 59, 167)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__6_value_aux_2),((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__5_value),LEAN_SCALAR_PTR_LITERAL(7, 205, 186, 60, 7, 38, 135, 75)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__6 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__6_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAdd"};
static const lean_object* l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__7 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__7_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__8 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__8_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAdd"};
static const lean_object* l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__9 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__7_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__10_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__9_value),LEAN_SCALAR_PTR_LITERAL(134, 172, 115, 219, 189, 252, 56, 148)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__10 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___lam__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Ring"};
static const lean_object* l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toNeg"};
static const lean_object* l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 225, 111, 69, 82, 38, 249, 149)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__2_value_aux_2),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(100, 233, 103, 154, 53, 22, 86, 139)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__2_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Neg"};
static const lean_object* l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__4_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "neg"};
static const lean_object* l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(105, 26, 70, 221, 245, 238, 127, 238)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__6 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_object* l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__4;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__4_value),LEAN_SCALAR_PTR_LITERAL(246, 150, 10, 46, 185, 54, 59, 167)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__5_value_aux_2),((lean_object*)&l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 49, 23, 61, 125, 46, 165, 129)}};
static const lean_object* l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___at___00Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12_spec__15___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(155, 188, 136, 200, 106, 253, 76, 178)}};
static const lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___at___00Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12_spec__15___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___at___00Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12_spec__15___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___at___00Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12_spec__15___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___at___00Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12_spec__15___closed__1;
static const lean_string_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___at___00Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12_spec__15___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "npow"};
static const lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___at___00Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12_spec__15___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___at___00Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12_spec__15___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___at___00Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12_spec__15___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___at___00Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12_spec__15___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___at___00Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12_spec__15___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___at___00Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12_spec__15___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___at___00Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12_spec__15___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__4_value),LEAN_SCALAR_PTR_LITERAL(246, 150, 10, 46, 185, 54, 59, 167)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___at___00Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12_spec__15___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___at___00Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12_spec__15___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___at___00Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12_spec__15___closed__2_value),LEAN_SCALAR_PTR_LITERAL(227, 91, 39, 101, 227, 157, 49, 255)}};
static const lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___at___00Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12_spec__15___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___at___00Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12_spec__15___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___at___00Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___at___00Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___lam__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instHMul"};
static const lean_object* l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(177, 107, 107, 59, 202, 230, 169, 251)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toMul"};
static const lean_object* l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__4_value),LEAN_SCALAR_PTR_LITERAL(246, 150, 10, 46, 185, 54, 59, 167)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___closed__3_value_aux_2),((lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(232, 23, 103, 115, 5, 120, 143, 98)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denoteMon_go___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denoteMon_go___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__0;
static const lean_string_object l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__1 = (const lean_object*)&l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__1_value;
static const lean_string_object l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lia"};
static const lean_object* l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__2 = (const lean_object*)&l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__2_value;
static const lean_string_object l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "assert"};
static const lean_object* l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__3 = (const lean_object*)&l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__3_value;
static const lean_string_object l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "nonlinear"};
static const lean_object* l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__4 = (const lean_object*)&l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__4_value;
static const lean_ctor_object l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__5_value_aux_0),((lean_object*)&l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(24, 23, 180, 58, 194, 72, 175, 153)}};
static const lean_ctor_object l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__5_value_aux_1),((lean_object*)&l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(198, 137, 50, 202, 239, 114, 140, 141)}};
static const lean_ctor_object l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__5_value_aux_2),((lean_object*)&l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__4_value),LEAN_SCALAR_PTR_LITERAL(51, 45, 160, 130, 43, 179, 195, 57)}};
static const lean_object* l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__5 = (const lean_object*)&l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__5_value;
static const lean_string_object l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__6 = (const lean_object*)&l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__6_value;
static const lean_ctor_object l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__6_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__7 = (const lean_object*)&l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__7_value;
static lean_once_cell_t l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__8;
static const lean_string_object l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " ===> "};
static const lean_object* l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__9 = (const lean_object*)&l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__9_value;
static lean_once_cell_t l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__10;
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_normCommRing_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_normCommRing_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4_spec__7_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4_spec__7_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_isNonlinear___redArg(lean_object* v_p_11_, lean_object* v_a_12_, lean_object* v_a_13_){
_start:
{
if (lean_obj_tag(v_p_11_) == 1)
{
lean_object* v_v_15_; lean_object* v_p_16_; lean_object* v___x_17_; 
v_v_15_ = lean_ctor_get(v_p_11_, 1);
v_p_16_ = lean_ctor_get(v_p_11_, 2);
v___x_17_ = l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg(v_v_15_, v_a_12_, v_a_13_);
if (lean_obj_tag(v___x_17_) == 0)
{
lean_object* v_a_18_; lean_object* v___x_19_; 
v_a_18_ = lean_ctor_get(v___x_17_, 0);
lean_inc(v_a_18_);
lean_dec_ref_known(v___x_17_, 1);
v___x_19_ = l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg(v_v_15_, v_a_12_, v_a_13_);
if (lean_obj_tag(v___x_19_) == 0)
{
lean_object* v_a_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_37_; 
v_a_20_ = lean_ctor_get(v___x_19_, 0);
v_isSharedCheck_37_ = !lean_is_exclusive(v___x_19_);
if (v_isSharedCheck_37_ == 0)
{
v___x_22_ = v___x_19_;
v_isShared_23_ = v_isSharedCheck_37_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_a_20_);
lean_dec(v___x_19_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_37_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
lean_object* v___x_24_; uint8_t v___x_25_; 
v___x_24_ = ((lean_object*)(l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__2));
v___x_25_ = l_Lean_Expr_isAppOf(v_a_18_, v___x_24_);
lean_dec(v_a_18_);
if (v___x_25_ == 0)
{
lean_object* v___x_26_; uint8_t v___x_27_; 
v___x_26_ = ((lean_object*)(l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__5));
v___x_27_ = l_Lean_Expr_isAppOf(v_a_20_, v___x_26_);
lean_dec(v_a_20_);
if (v___x_27_ == 0)
{
lean_del_object(v___x_22_);
v_p_11_ = v_p_16_;
goto _start;
}
else
{
lean_object* v___x_29_; lean_object* v___x_31_; 
v___x_29_ = lean_box(v___x_27_);
if (v_isShared_23_ == 0)
{
lean_ctor_set(v___x_22_, 0, v___x_29_);
v___x_31_ = v___x_22_;
goto v_reusejp_30_;
}
else
{
lean_object* v_reuseFailAlloc_32_; 
v_reuseFailAlloc_32_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_32_, 0, v___x_29_);
v___x_31_ = v_reuseFailAlloc_32_;
goto v_reusejp_30_;
}
v_reusejp_30_:
{
return v___x_31_;
}
}
}
else
{
lean_object* v___x_33_; lean_object* v___x_35_; 
lean_dec(v_a_20_);
v___x_33_ = lean_box(v___x_25_);
if (v_isShared_23_ == 0)
{
lean_ctor_set(v___x_22_, 0, v___x_33_);
v___x_35_ = v___x_22_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_36_; 
v_reuseFailAlloc_36_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_36_, 0, v___x_33_);
v___x_35_ = v_reuseFailAlloc_36_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
return v___x_35_;
}
}
}
}
else
{
lean_object* v_a_38_; lean_object* v___x_40_; uint8_t v_isShared_41_; uint8_t v_isSharedCheck_45_; 
lean_dec(v_a_18_);
v_a_38_ = lean_ctor_get(v___x_19_, 0);
v_isSharedCheck_45_ = !lean_is_exclusive(v___x_19_);
if (v_isSharedCheck_45_ == 0)
{
v___x_40_ = v___x_19_;
v_isShared_41_ = v_isSharedCheck_45_;
goto v_resetjp_39_;
}
else
{
lean_inc(v_a_38_);
lean_dec(v___x_19_);
v___x_40_ = lean_box(0);
v_isShared_41_ = v_isSharedCheck_45_;
goto v_resetjp_39_;
}
v_resetjp_39_:
{
lean_object* v___x_43_; 
if (v_isShared_41_ == 0)
{
v___x_43_ = v___x_40_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v_a_38_);
v___x_43_ = v_reuseFailAlloc_44_;
goto v_reusejp_42_;
}
v_reusejp_42_:
{
return v___x_43_;
}
}
}
}
else
{
lean_object* v_a_46_; lean_object* v___x_48_; uint8_t v_isShared_49_; uint8_t v_isSharedCheck_53_; 
v_a_46_ = lean_ctor_get(v___x_17_, 0);
v_isSharedCheck_53_ = !lean_is_exclusive(v___x_17_);
if (v_isSharedCheck_53_ == 0)
{
v___x_48_ = v___x_17_;
v_isShared_49_ = v_isSharedCheck_53_;
goto v_resetjp_47_;
}
else
{
lean_inc(v_a_46_);
lean_dec(v___x_17_);
v___x_48_ = lean_box(0);
v_isShared_49_ = v_isSharedCheck_53_;
goto v_resetjp_47_;
}
v_resetjp_47_:
{
lean_object* v___x_51_; 
if (v_isShared_49_ == 0)
{
v___x_51_ = v___x_48_;
goto v_reusejp_50_;
}
else
{
lean_object* v_reuseFailAlloc_52_; 
v_reuseFailAlloc_52_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_52_, 0, v_a_46_);
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
uint8_t v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_54_ = 0;
v___x_55_ = lean_box(v___x_54_);
v___x_56_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_56_, 0, v___x_55_);
return v___x_56_;
}
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_isNonlinear___redArg___boxed(lean_object* v_p_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = l_Int_Internal_Linear_Poly_isNonlinear___redArg(v_p_57_, v_a_58_, v_a_59_);
lean_dec_ref(v_a_59_);
lean_dec(v_a_58_);
lean_dec_ref(v_p_57_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_isNonlinear(lean_object* v_p_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = l_Int_Internal_Linear_Poly_isNonlinear___redArg(v_p_62_, v_a_63_, v_a_71_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_isNonlinear___boxed(lean_object* v_p_75_, lean_object* v_a_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_, lean_object* v_a_85_, lean_object* v_a_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = l_Int_Internal_Linear_Poly_isNonlinear(v_p_75_, v_a_76_, v_a_77_, v_a_78_, v_a_79_, v_a_80_, v_a_81_, v_a_82_, v_a_83_, v_a_84_, v_a_85_);
lean_dec(v_a_85_);
lean_dec_ref(v_a_84_);
lean_dec(v_a_83_);
lean_dec_ref(v_a_82_);
lean_dec(v_a_81_);
lean_dec_ref(v_a_80_);
lean_dec(v_a_79_);
lean_dec_ref(v_a_78_);
lean_dec(v_a_77_);
lean_dec(v_a_76_);
lean_dec_ref(v_p_75_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing_0__Int_Internal_Linear_Poly_getGeneration_go___redArg(lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_){
_start:
{
if (lean_obj_tag(v_a_88_) == 0)
{
lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_99_; 
v_isSharedCheck_99_ = !lean_is_exclusive(v_a_88_);
if (v_isSharedCheck_99_ == 0)
{
lean_object* v_unused_100_; 
v_unused_100_ = lean_ctor_get(v_a_88_, 0);
lean_dec(v_unused_100_);
v___x_94_ = v_a_88_;
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
else
{
lean_dec(v_a_88_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
lean_object* v___x_97_; 
if (v_isShared_95_ == 0)
{
lean_ctor_set(v___x_94_, 0, v_a_89_);
v___x_97_ = v___x_94_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v_a_89_);
v___x_97_ = v_reuseFailAlloc_98_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
return v___x_97_;
}
}
}
else
{
lean_object* v_v_101_; lean_object* v_p_102_; lean_object* v___x_103_; 
v_v_101_ = lean_ctor_get(v_a_88_, 1);
lean_inc(v_v_101_);
v_p_102_ = lean_ctor_get(v_a_88_, 2);
lean_inc_ref(v_p_102_);
lean_dec_ref_known(v_a_88_, 3);
v___x_103_ = l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg(v_v_101_, v_a_90_, v_a_91_);
lean_dec(v_v_101_);
if (lean_obj_tag(v___x_103_) == 0)
{
lean_object* v_a_104_; lean_object* v___x_105_; 
v_a_104_ = lean_ctor_get(v___x_103_, 0);
lean_inc(v_a_104_);
lean_dec_ref_known(v___x_103_, 1);
v___x_105_ = l_Lean_Meta_Grind_getGeneration___redArg(v_a_104_, v_a_90_);
lean_dec(v_a_104_);
if (lean_obj_tag(v___x_105_) == 0)
{
lean_object* v_a_106_; uint8_t v___x_107_; 
v_a_106_ = lean_ctor_get(v___x_105_, 0);
lean_inc(v_a_106_);
lean_dec_ref_known(v___x_105_, 1);
v___x_107_ = lean_nat_dec_le(v_a_106_, v_a_89_);
if (v___x_107_ == 0)
{
lean_dec(v_a_89_);
v_a_88_ = v_p_102_;
v_a_89_ = v_a_106_;
goto _start;
}
else
{
lean_dec(v_a_106_);
v_a_88_ = v_p_102_;
goto _start;
}
}
else
{
lean_dec_ref(v_p_102_);
lean_dec(v_a_89_);
return v___x_105_;
}
}
else
{
lean_object* v_a_110_; lean_object* v___x_112_; uint8_t v_isShared_113_; uint8_t v_isSharedCheck_117_; 
lean_dec_ref(v_p_102_);
lean_dec(v_a_89_);
v_a_110_ = lean_ctor_get(v___x_103_, 0);
v_isSharedCheck_117_ = !lean_is_exclusive(v___x_103_);
if (v_isSharedCheck_117_ == 0)
{
v___x_112_ = v___x_103_;
v_isShared_113_ = v_isSharedCheck_117_;
goto v_resetjp_111_;
}
else
{
lean_inc(v_a_110_);
lean_dec(v___x_103_);
v___x_112_ = lean_box(0);
v_isShared_113_ = v_isSharedCheck_117_;
goto v_resetjp_111_;
}
v_resetjp_111_:
{
lean_object* v___x_115_; 
if (v_isShared_113_ == 0)
{
v___x_115_ = v___x_112_;
goto v_reusejp_114_;
}
else
{
lean_object* v_reuseFailAlloc_116_; 
v_reuseFailAlloc_116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_116_, 0, v_a_110_);
v___x_115_ = v_reuseFailAlloc_116_;
goto v_reusejp_114_;
}
v_reusejp_114_:
{
return v___x_115_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing_0__Int_Internal_Linear_Poly_getGeneration_go___redArg___boxed(lean_object* v_a_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_, lean_object* v_a_122_){
_start:
{
lean_object* v_res_123_; 
v_res_123_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing_0__Int_Internal_Linear_Poly_getGeneration_go___redArg(v_a_118_, v_a_119_, v_a_120_, v_a_121_);
lean_dec_ref(v_a_121_);
lean_dec(v_a_120_);
return v_res_123_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing_0__Int_Internal_Linear_Poly_getGeneration_go(lean_object* v_a_124_, lean_object* v_a_125_, lean_object* v_a_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing_0__Int_Internal_Linear_Poly_getGeneration_go___redArg(v_a_124_, v_a_125_, v_a_126_, v_a_134_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing_0__Int_Internal_Linear_Poly_getGeneration_go___boxed(lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_, lean_object* v_a_150_){
_start:
{
lean_object* v_res_151_; 
v_res_151_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing_0__Int_Internal_Linear_Poly_getGeneration_go(v_a_138_, v_a_139_, v_a_140_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
lean_dec(v_a_149_);
lean_dec_ref(v_a_148_);
lean_dec(v_a_147_);
lean_dec_ref(v_a_146_);
lean_dec(v_a_145_);
lean_dec_ref(v_a_144_);
lean_dec(v_a_143_);
lean_dec_ref(v_a_142_);
lean_dec(v_a_141_);
lean_dec(v_a_140_);
return v_res_151_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_getGeneration___redArg(lean_object* v_p_152_, lean_object* v_a_153_, lean_object* v_a_154_){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_156_ = lean_unsigned_to_nat(0u);
v___x_157_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing_0__Int_Internal_Linear_Poly_getGeneration_go___redArg(v_p_152_, v___x_156_, v_a_153_, v_a_154_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_getGeneration___redArg___boxed(lean_object* v_p_158_, lean_object* v_a_159_, lean_object* v_a_160_, lean_object* v_a_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = l_Int_Internal_Linear_Poly_getGeneration___redArg(v_p_158_, v_a_159_, v_a_160_);
lean_dec_ref(v_a_160_);
lean_dec(v_a_159_);
return v_res_162_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_getGeneration(lean_object* v_p_163_, lean_object* v_a_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_){
_start:
{
lean_object* v___x_175_; 
v___x_175_ = l_Int_Internal_Linear_Poly_getGeneration___redArg(v_p_163_, v_a_164_, v_a_172_);
return v___x_175_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_getGeneration___boxed(lean_object* v_p_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_, lean_object* v_a_180_, lean_object* v_a_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_){
_start:
{
lean_object* v_res_188_; 
v_res_188_ = l_Int_Internal_Linear_Poly_getGeneration(v_p_176_, v_a_177_, v_a_178_, v_a_179_, v_a_180_, v_a_181_, v_a_182_, v_a_183_, v_a_184_, v_a_185_, v_a_186_);
lean_dec(v_a_186_);
lean_dec_ref(v_a_185_);
lean_dec(v_a_184_);
lean_dec_ref(v_a_183_);
lean_dec(v_a_182_);
lean_dec_ref(v_a_181_);
lean_dec(v_a_180_);
lean_dec_ref(v_a_179_);
lean_dec(v_a_178_);
lean_dec(v_a_177_);
return v_res_188_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getIntRingId_x3f___redArg(lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_, lean_object* v_a_193_, lean_object* v_a_194_){
_start:
{
lean_object* v___x_196_; 
v___x_196_ = l_Lean_Meta_Sym_getIntExpr___redArg(v_a_189_);
if (lean_obj_tag(v___x_196_) == 0)
{
lean_object* v_a_197_; lean_object* v___x_198_; 
v_a_197_ = lean_ctor_get(v___x_196_, 0);
lean_inc(v_a_197_);
lean_dec_ref_known(v___x_196_, 1);
v___x_198_ = l_Lean_Meta_Grind_Arith_CommRing_getCommRingId_x3f___redArg(v_a_197_, v_a_189_, v_a_190_, v_a_191_, v_a_192_, v_a_193_, v_a_194_);
return v___x_198_;
}
else
{
lean_object* v_a_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_206_; 
v_a_199_ = lean_ctor_get(v___x_196_, 0);
v_isSharedCheck_206_ = !lean_is_exclusive(v___x_196_);
if (v_isSharedCheck_206_ == 0)
{
v___x_201_ = v___x_196_;
v_isShared_202_ = v_isSharedCheck_206_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_a_199_);
lean_dec(v___x_196_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_206_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___x_204_; 
if (v_isShared_202_ == 0)
{
v___x_204_ = v___x_201_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v_a_199_);
v___x_204_ = v_reuseFailAlloc_205_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
return v___x_204_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getIntRingId_x3f___redArg___boxed(lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_, lean_object* v_a_210_, lean_object* v_a_211_, lean_object* v_a_212_, lean_object* v_a_213_){
_start:
{
lean_object* v_res_214_; 
v_res_214_ = l_Lean_Meta_Grind_Arith_Cutsat_getIntRingId_x3f___redArg(v_a_207_, v_a_208_, v_a_209_, v_a_210_, v_a_211_, v_a_212_);
lean_dec(v_a_212_);
lean_dec_ref(v_a_211_);
lean_dec(v_a_210_);
lean_dec_ref(v_a_209_);
lean_dec(v_a_208_);
lean_dec_ref(v_a_207_);
return v_res_214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getIntRingId_x3f(lean_object* v_a_215_, lean_object* v_a_216_, lean_object* v_a_217_, lean_object* v_a_218_, lean_object* v_a_219_, lean_object* v_a_220_, lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = l_Lean_Meta_Grind_Arith_Cutsat_getIntRingId_x3f___redArg(v_a_219_, v_a_220_, v_a_221_, v_a_222_, v_a_223_, v_a_224_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getIntRingId_x3f___boxed(lean_object* v_a_227_, lean_object* v_a_228_, lean_object* v_a_229_, lean_object* v_a_230_, lean_object* v_a_231_, lean_object* v_a_232_, lean_object* v_a_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_, lean_object* v_a_237_){
_start:
{
lean_object* v_res_238_; 
v_res_238_ = l_Lean_Meta_Grind_Arith_Cutsat_getIntRingId_x3f(v_a_227_, v_a_228_, v_a_229_, v_a_230_, v_a_231_, v_a_232_, v_a_233_, v_a_234_, v_a_235_, v_a_236_);
lean_dec(v_a_236_);
lean_dec_ref(v_a_235_);
lean_dec(v_a_234_);
lean_dec_ref(v_a_233_);
lean_dec(v_a_232_);
lean_dec_ref(v_a_231_);
lean_dec(v_a_230_);
lean_dec_ref(v_a_229_);
lean_dec(v_a_228_);
lean_dec(v_a_227_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_normCommRing_x3f___lam__0(uint8_t v_a_239_, lean_object* v_s_240_){
_start:
{
lean_object* v_vars_241_; lean_object* v_varMap_242_; lean_object* v_varsHistory_243_; lean_object* v_natToIntMap_244_; lean_object* v_natDef_245_; lean_object* v_dvds_246_; lean_object* v_lowers_247_; lean_object* v_uppers_248_; lean_object* v_diseqs_249_; lean_object* v_elimEqs_250_; lean_object* v_active_251_; lean_object* v_elimStack_252_; lean_object* v_occurs_253_; lean_object* v_assignment_254_; lean_object* v_nextCnstrId_255_; uint8_t v_caseSplits_256_; lean_object* v_steps_257_; lean_object* v_penalties_258_; lean_object* v_numReorderRequests_259_; lean_object* v_conflict_x3f_260_; lean_object* v_diseqSplits_261_; lean_object* v_divMod_262_; lean_object* v_nonlinearOccs_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_270_; 
v_vars_241_ = lean_ctor_get(v_s_240_, 0);
v_varMap_242_ = lean_ctor_get(v_s_240_, 1);
v_varsHistory_243_ = lean_ctor_get(v_s_240_, 2);
v_natToIntMap_244_ = lean_ctor_get(v_s_240_, 3);
v_natDef_245_ = lean_ctor_get(v_s_240_, 4);
v_dvds_246_ = lean_ctor_get(v_s_240_, 5);
v_lowers_247_ = lean_ctor_get(v_s_240_, 6);
v_uppers_248_ = lean_ctor_get(v_s_240_, 7);
v_diseqs_249_ = lean_ctor_get(v_s_240_, 8);
v_elimEqs_250_ = lean_ctor_get(v_s_240_, 9);
v_active_251_ = lean_ctor_get(v_s_240_, 10);
v_elimStack_252_ = lean_ctor_get(v_s_240_, 11);
v_occurs_253_ = lean_ctor_get(v_s_240_, 12);
v_assignment_254_ = lean_ctor_get(v_s_240_, 13);
v_nextCnstrId_255_ = lean_ctor_get(v_s_240_, 14);
v_caseSplits_256_ = lean_ctor_get_uint8(v_s_240_, sizeof(void*)*22);
v_steps_257_ = lean_ctor_get(v_s_240_, 15);
v_penalties_258_ = lean_ctor_get(v_s_240_, 16);
v_numReorderRequests_259_ = lean_ctor_get(v_s_240_, 17);
v_conflict_x3f_260_ = lean_ctor_get(v_s_240_, 18);
v_diseqSplits_261_ = lean_ctor_get(v_s_240_, 19);
v_divMod_262_ = lean_ctor_get(v_s_240_, 20);
v_nonlinearOccs_263_ = lean_ctor_get(v_s_240_, 21);
v_isSharedCheck_270_ = !lean_is_exclusive(v_s_240_);
if (v_isSharedCheck_270_ == 0)
{
v___x_265_ = v_s_240_;
v_isShared_266_ = v_isSharedCheck_270_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_nonlinearOccs_263_);
lean_inc(v_divMod_262_);
lean_inc(v_diseqSplits_261_);
lean_inc(v_conflict_x3f_260_);
lean_inc(v_numReorderRequests_259_);
lean_inc(v_penalties_258_);
lean_inc(v_steps_257_);
lean_inc(v_nextCnstrId_255_);
lean_inc(v_assignment_254_);
lean_inc(v_occurs_253_);
lean_inc(v_elimStack_252_);
lean_inc(v_active_251_);
lean_inc(v_elimEqs_250_);
lean_inc(v_diseqs_249_);
lean_inc(v_uppers_248_);
lean_inc(v_lowers_247_);
lean_inc(v_dvds_246_);
lean_inc(v_natDef_245_);
lean_inc(v_natToIntMap_244_);
lean_inc(v_varsHistory_243_);
lean_inc(v_varMap_242_);
lean_inc(v_vars_241_);
lean_dec(v_s_240_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_270_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
lean_object* v___x_268_; 
if (v_isShared_266_ == 0)
{
v___x_268_ = v___x_265_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(0, 22, 2);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v_vars_241_);
lean_ctor_set(v_reuseFailAlloc_269_, 1, v_varMap_242_);
lean_ctor_set(v_reuseFailAlloc_269_, 2, v_varsHistory_243_);
lean_ctor_set(v_reuseFailAlloc_269_, 3, v_natToIntMap_244_);
lean_ctor_set(v_reuseFailAlloc_269_, 4, v_natDef_245_);
lean_ctor_set(v_reuseFailAlloc_269_, 5, v_dvds_246_);
lean_ctor_set(v_reuseFailAlloc_269_, 6, v_lowers_247_);
lean_ctor_set(v_reuseFailAlloc_269_, 7, v_uppers_248_);
lean_ctor_set(v_reuseFailAlloc_269_, 8, v_diseqs_249_);
lean_ctor_set(v_reuseFailAlloc_269_, 9, v_elimEqs_250_);
lean_ctor_set(v_reuseFailAlloc_269_, 10, v_active_251_);
lean_ctor_set(v_reuseFailAlloc_269_, 11, v_elimStack_252_);
lean_ctor_set(v_reuseFailAlloc_269_, 12, v_occurs_253_);
lean_ctor_set(v_reuseFailAlloc_269_, 13, v_assignment_254_);
lean_ctor_set(v_reuseFailAlloc_269_, 14, v_nextCnstrId_255_);
lean_ctor_set(v_reuseFailAlloc_269_, 15, v_steps_257_);
lean_ctor_set(v_reuseFailAlloc_269_, 16, v_penalties_258_);
lean_ctor_set(v_reuseFailAlloc_269_, 17, v_numReorderRequests_259_);
lean_ctor_set(v_reuseFailAlloc_269_, 18, v_conflict_x3f_260_);
lean_ctor_set(v_reuseFailAlloc_269_, 19, v_diseqSplits_261_);
lean_ctor_set(v_reuseFailAlloc_269_, 20, v_divMod_262_);
lean_ctor_set(v_reuseFailAlloc_269_, 21, v_nonlinearOccs_263_);
lean_ctor_set_uint8(v_reuseFailAlloc_269_, sizeof(void*)*22, v_caseSplits_256_);
v___x_268_ = v_reuseFailAlloc_269_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
lean_ctor_set_uint8(v___x_268_, sizeof(void*)*22 + 1, v_a_239_);
return v___x_268_;
}
}
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_normCommRing_x3f___lam__0___boxed(lean_object* v_a_271_, lean_object* v_s_272_){
_start:
{
uint8_t v_a_128287__boxed_273_; lean_object* v_res_274_; 
v_a_128287__boxed_273_ = lean_unbox(v_a_271_);
v_res_274_ = l_Int_Internal_Linear_Poly_normCommRing_x3f___lam__0(v_a_128287__boxed_273_, v_s_272_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1_spec__4(lean_object* v_msgData_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_){
_start:
{
lean_object* v___x_281_; lean_object* v_env_282_; uint8_t v___x_283_; lean_object* v_env_284_; lean_object* v___x_285_; lean_object* v_toCold_286_; lean_object* v_mctx_287_; lean_object* v_lctx_288_; lean_object* v_options_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_281_ = lean_st_ref_get(v___y_279_);
v_env_282_ = lean_ctor_get(v___x_281_, 0);
lean_inc_ref(v_env_282_);
lean_dec(v___x_281_);
v___x_283_ = 0;
v_env_284_ = l_Lean_Environment_setRecordingDeps(v_env_282_, v___x_283_);
v___x_285_ = lean_st_ref_get(v___y_277_);
v_toCold_286_ = lean_ctor_get(v___y_278_, 0);
v_mctx_287_ = lean_ctor_get(v___x_285_, 0);
lean_inc_ref(v_mctx_287_);
lean_dec(v___x_285_);
v_lctx_288_ = lean_ctor_get(v___y_276_, 2);
v_options_289_ = lean_ctor_get(v_toCold_286_, 2);
lean_inc_ref(v_options_289_);
lean_inc_ref(v_lctx_288_);
v___x_290_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_290_, 0, v_env_284_);
lean_ctor_set(v___x_290_, 1, v_mctx_287_);
lean_ctor_set(v___x_290_, 2, v_lctx_288_);
lean_ctor_set(v___x_290_, 3, v_options_289_);
v___x_291_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_291_, 0, v___x_290_);
lean_ctor_set(v___x_291_, 1, v_msgData_275_);
v___x_292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_292_, 0, v___x_291_);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1_spec__4___boxed(lean_object* v_msgData_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1_spec__4(v_msgData_293_, v___y_294_, v___y_295_, v___y_296_, v___y_297_);
lean_dec(v___y_297_);
lean_dec_ref(v___y_296_);
lean_dec(v___y_295_);
lean_dec_ref(v___y_294_);
return v_res_299_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4_spec__7_spec__11___redArg(lean_object* v_msg_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_){
_start:
{
lean_object* v_ref_306_; lean_object* v___x_307_; lean_object* v_a_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_316_; 
v_ref_306_ = lean_ctor_get(v___y_303_, 2);
v___x_307_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1_spec__4(v_msg_300_, v___y_301_, v___y_302_, v___y_303_, v___y_304_);
v_a_308_ = lean_ctor_get(v___x_307_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_307_);
if (v_isSharedCheck_316_ == 0)
{
v___x_310_ = v___x_307_;
v_isShared_311_ = v_isSharedCheck_316_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_a_308_);
lean_dec(v___x_307_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_316_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_312_; lean_object* v___x_314_; 
lean_inc(v_ref_306_);
v___x_312_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_312_, 0, v_ref_306_);
lean_ctor_set(v___x_312_, 1, v_a_308_);
if (v_isShared_311_ == 0)
{
lean_ctor_set_tag(v___x_310_, 1);
lean_ctor_set(v___x_310_, 0, v___x_312_);
v___x_314_ = v___x_310_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v___x_312_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4_spec__7_spec__11___redArg___boxed(lean_object* v_msg_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_){
_start:
{
lean_object* v_res_323_; 
v_res_323_ = l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4_spec__7_spec__11___redArg(v_msg_317_, v___y_318_, v___y_319_, v___y_320_, v___y_321_);
lean_dec(v___y_321_);
lean_dec_ref(v___y_320_);
lean_dec(v___y_319_);
lean_dec_ref(v___y_318_);
return v_res_323_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4_spec__7___closed__1(void){
_start:
{
lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_325_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4_spec__7___closed__0));
v___x_326_ = l_Lean_stringToMessageData(v___x_325_);
return v___x_326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4_spec__7(lean_object* v_type_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_){
_start:
{
lean_object* v___x_340_; 
lean_inc_ref(v_type_327_);
v___x_340_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_type_327_, v___y_334_, v___y_335_, v___y_336_, v___y_337_, v___y_338_);
if (lean_obj_tag(v___x_340_) == 0)
{
lean_object* v_a_341_; lean_object* v___x_343_; uint8_t v_isShared_344_; uint8_t v_isSharedCheck_353_; 
v_a_341_ = lean_ctor_get(v___x_340_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_340_);
if (v_isSharedCheck_353_ == 0)
{
v___x_343_ = v___x_340_;
v_isShared_344_ = v_isSharedCheck_353_;
goto v_resetjp_342_;
}
else
{
lean_inc(v_a_341_);
lean_dec(v___x_340_);
v___x_343_ = lean_box(0);
v_isShared_344_ = v_isSharedCheck_353_;
goto v_resetjp_342_;
}
v_resetjp_342_:
{
if (lean_obj_tag(v_a_341_) == 1)
{
lean_object* v_val_345_; lean_object* v___x_347_; 
lean_dec_ref(v_type_327_);
v_val_345_ = lean_ctor_get(v_a_341_, 0);
lean_inc(v_val_345_);
lean_dec_ref_known(v_a_341_, 1);
if (v_isShared_344_ == 0)
{
lean_ctor_set(v___x_343_, 0, v_val_345_);
v___x_347_ = v___x_343_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v_val_345_);
v___x_347_ = v_reuseFailAlloc_348_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
return v___x_347_;
}
}
else
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
lean_del_object(v___x_343_);
lean_dec(v_a_341_);
v___x_349_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4_spec__7___closed__1, &l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4_spec__7___closed__1_once, _init_l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4_spec__7___closed__1);
v___x_350_ = l_Lean_indentExpr(v_type_327_);
v___x_351_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_351_, 0, v___x_349_);
lean_ctor_set(v___x_351_, 1, v___x_350_);
v___x_352_ = l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4_spec__7_spec__11___redArg(v___x_351_, v___y_335_, v___y_336_, v___y_337_, v___y_338_);
return v___x_352_;
}
}
}
else
{
lean_object* v_a_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_361_; 
lean_dec_ref(v_type_327_);
v_a_354_ = lean_ctor_get(v___x_340_, 0);
v_isSharedCheck_361_ = !lean_is_exclusive(v___x_340_);
if (v_isSharedCheck_361_ == 0)
{
v___x_356_ = v___x_340_;
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_a_354_);
lean_dec(v___x_340_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_359_; 
if (v_isShared_357_ == 0)
{
v___x_359_ = v___x_356_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v_a_354_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4_spec__7___boxed(lean_object* v_type_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_){
_start:
{
lean_object* v_res_375_; 
v_res_375_ = l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4_spec__7(v_type_362_, v___y_363_, v___y_364_, v___y_365_, v___y_366_, v___y_367_, v___y_368_, v___y_369_, v___y_370_, v___y_371_, v___y_372_, v___y_373_);
lean_dec(v___y_373_);
lean_dec_ref(v___y_372_);
lean_dec(v___y_371_);
lean_dec_ref(v___y_370_);
lean_dec(v___y_369_);
lean_dec_ref(v___y_368_);
lean_dec(v___y_367_);
lean_dec_ref(v___y_366_);
lean_dec(v___y_365_);
lean_dec(v___y_364_);
lean_dec_ref(v___y_363_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___at___00Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3_spec__7(lean_object* v_type_376_, lean_object* v_u_377_, lean_object* v_instDeclName_378_, lean_object* v_declName_379_, lean_object* v_expectedInst_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_){
_start:
{
lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_393_ = lean_box(0);
lean_inc_n(v_u_377_, 2);
v___x_394_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_394_, 0, v_u_377_);
lean_ctor_set(v___x_394_, 1, v___x_393_);
v___x_395_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_395_, 0, v_u_377_);
lean_ctor_set(v___x_395_, 1, v___x_394_);
v___x_396_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_396_, 0, v_u_377_);
lean_ctor_set(v___x_396_, 1, v___x_395_);
lean_inc_ref(v___x_396_);
v___x_397_ = l_Lean_mkConst(v_instDeclName_378_, v___x_396_);
lean_inc_ref_n(v_type_376_, 3);
v___x_398_ = l_Lean_mkApp3(v___x_397_, v_type_376_, v_type_376_, v_type_376_);
v___x_399_ = l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4_spec__7(v___x_398_, v___y_381_, v___y_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_, v___y_391_);
if (lean_obj_tag(v___x_399_) == 0)
{
lean_object* v_a_400_; lean_object* v___x_401_; 
v_a_400_ = lean_ctor_get(v___x_399_, 0);
lean_inc_n(v_a_400_, 2);
lean_dec_ref_known(v___x_399_, 1);
lean_inc(v_declName_379_);
v___x_401_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst(v_declName_379_, v_a_400_, v_expectedInst_380_, v___y_388_, v___y_389_, v___y_390_, v___y_391_);
if (lean_obj_tag(v___x_401_) == 0)
{
lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
lean_dec_ref_known(v___x_401_, 1);
v___x_402_ = l_Lean_mkConst(v_declName_379_, v___x_396_);
lean_inc_ref_n(v_type_376_, 2);
v___x_403_ = l_Lean_mkApp4(v___x_402_, v_type_376_, v_type_376_, v_type_376_, v_a_400_);
v___x_404_ = l_Lean_Meta_Sym_canon(v___x_403_, v___y_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_, v___y_391_);
if (lean_obj_tag(v___x_404_) == 0)
{
lean_object* v_a_405_; lean_object* v___x_406_; 
v_a_405_ = lean_ctor_get(v___x_404_, 0);
lean_inc(v_a_405_);
lean_dec_ref_known(v___x_404_, 1);
v___x_406_ = l_Lean_Meta_Sym_shareCommon(v_a_405_, v___y_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_, v___y_391_);
return v___x_406_;
}
else
{
return v___x_404_;
}
}
else
{
lean_object* v_a_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_414_; 
lean_dec(v_a_400_);
lean_dec_ref_known(v___x_396_, 2);
lean_dec(v_declName_379_);
lean_dec_ref(v_type_376_);
v_a_407_ = lean_ctor_get(v___x_401_, 0);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_401_);
if (v_isSharedCheck_414_ == 0)
{
v___x_409_ = v___x_401_;
v_isShared_410_ = v_isSharedCheck_414_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_a_407_);
lean_dec(v___x_401_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_414_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v___x_412_; 
if (v_isShared_410_ == 0)
{
v___x_412_ = v___x_409_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v_a_407_);
v___x_412_ = v_reuseFailAlloc_413_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
return v___x_412_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_396_, 2);
lean_dec_ref(v_expectedInst_380_);
lean_dec(v_declName_379_);
lean_dec_ref(v_type_376_);
return v___x_399_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___at___00Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3_spec__7___boxed(lean_object** _args){
lean_object* v_type_415_ = _args[0];
lean_object* v_u_416_ = _args[1];
lean_object* v_instDeclName_417_ = _args[2];
lean_object* v_declName_418_ = _args[3];
lean_object* v_expectedInst_419_ = _args[4];
lean_object* v___y_420_ = _args[5];
lean_object* v___y_421_ = _args[6];
lean_object* v___y_422_ = _args[7];
lean_object* v___y_423_ = _args[8];
lean_object* v___y_424_ = _args[9];
lean_object* v___y_425_ = _args[10];
lean_object* v___y_426_ = _args[11];
lean_object* v___y_427_ = _args[12];
lean_object* v___y_428_ = _args[13];
lean_object* v___y_429_ = _args[14];
lean_object* v___y_430_ = _args[15];
lean_object* v___y_431_ = _args[16];
_start:
{
lean_object* v_res_432_; 
v_res_432_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___at___00Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3_spec__7(v_type_415_, v_u_416_, v_instDeclName_417_, v_declName_418_, v_expectedInst_419_, v___y_420_, v___y_421_, v___y_422_, v___y_423_, v___y_424_, v___y_425_, v___y_426_, v___y_427_, v___y_428_, v___y_429_, v___y_430_);
lean_dec(v___y_430_);
lean_dec_ref(v___y_429_);
lean_dec(v___y_428_);
lean_dec_ref(v___y_427_);
lean_dec(v___y_426_);
lean_dec_ref(v___y_425_);
lean_dec(v___y_424_);
lean_dec_ref(v___y_423_);
lean_dec(v___y_422_);
lean_dec(v___y_421_);
lean_dec_ref(v___y_420_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___lam__0(lean_object* v_a_433_, lean_object* v_s_434_){
_start:
{
lean_object* v_toRing_435_; lean_object* v_invFn_x3f_436_; lean_object* v_divFn_x3f_437_; lean_object* v_zpowFn_x3f_438_; lean_object* v_semiringId_x3f_439_; lean_object* v_commSemiringInst_440_; lean_object* v_commRingInst_441_; lean_object* v_noZeroDivInst_x3f_442_; lean_object* v_fieldInst_x3f_443_; lean_object* v_powIdentityInst_x3f_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_476_; 
v_toRing_435_ = lean_ctor_get(v_s_434_, 0);
v_invFn_x3f_436_ = lean_ctor_get(v_s_434_, 1);
v_divFn_x3f_437_ = lean_ctor_get(v_s_434_, 2);
v_zpowFn_x3f_438_ = lean_ctor_get(v_s_434_, 3);
v_semiringId_x3f_439_ = lean_ctor_get(v_s_434_, 4);
v_commSemiringInst_440_ = lean_ctor_get(v_s_434_, 5);
v_commRingInst_441_ = lean_ctor_get(v_s_434_, 6);
v_noZeroDivInst_x3f_442_ = lean_ctor_get(v_s_434_, 7);
v_fieldInst_x3f_443_ = lean_ctor_get(v_s_434_, 8);
v_powIdentityInst_x3f_444_ = lean_ctor_get(v_s_434_, 9);
v_isSharedCheck_476_ = !lean_is_exclusive(v_s_434_);
if (v_isSharedCheck_476_ == 0)
{
v___x_446_ = v_s_434_;
v_isShared_447_ = v_isSharedCheck_476_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_powIdentityInst_x3f_444_);
lean_inc(v_fieldInst_x3f_443_);
lean_inc(v_noZeroDivInst_x3f_442_);
lean_inc(v_commRingInst_441_);
lean_inc(v_commSemiringInst_440_);
lean_inc(v_semiringId_x3f_439_);
lean_inc(v_zpowFn_x3f_438_);
lean_inc(v_divFn_x3f_437_);
lean_inc(v_invFn_x3f_436_);
lean_inc(v_toRing_435_);
lean_dec(v_s_434_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_476_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v_id_448_; lean_object* v_type_449_; lean_object* v_u_450_; lean_object* v_ringInst_451_; lean_object* v_semiringInst_452_; lean_object* v_charInst_x3f_453_; uint8_t v_symbolicChar_454_; lean_object* v_mulFn_x3f_455_; lean_object* v_subFn_x3f_456_; lean_object* v_negFn_x3f_457_; lean_object* v_powFn_x3f_458_; lean_object* v_intCastFn_x3f_459_; lean_object* v_natCastFn_x3f_460_; lean_object* v_natSMulFn_x3f_461_; lean_object* v_intSMulFn_x3f_462_; lean_object* v_one_x3f_463_; lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_474_; 
v_id_448_ = lean_ctor_get(v_toRing_435_, 0);
v_type_449_ = lean_ctor_get(v_toRing_435_, 1);
v_u_450_ = lean_ctor_get(v_toRing_435_, 2);
v_ringInst_451_ = lean_ctor_get(v_toRing_435_, 3);
v_semiringInst_452_ = lean_ctor_get(v_toRing_435_, 4);
v_charInst_x3f_453_ = lean_ctor_get(v_toRing_435_, 5);
v_symbolicChar_454_ = lean_ctor_get_uint8(v_toRing_435_, sizeof(void*)*16);
v_mulFn_x3f_455_ = lean_ctor_get(v_toRing_435_, 7);
v_subFn_x3f_456_ = lean_ctor_get(v_toRing_435_, 8);
v_negFn_x3f_457_ = lean_ctor_get(v_toRing_435_, 9);
v_powFn_x3f_458_ = lean_ctor_get(v_toRing_435_, 10);
v_intCastFn_x3f_459_ = lean_ctor_get(v_toRing_435_, 11);
v_natCastFn_x3f_460_ = lean_ctor_get(v_toRing_435_, 12);
v_natSMulFn_x3f_461_ = lean_ctor_get(v_toRing_435_, 13);
v_intSMulFn_x3f_462_ = lean_ctor_get(v_toRing_435_, 14);
v_one_x3f_463_ = lean_ctor_get(v_toRing_435_, 15);
v_isSharedCheck_474_ = !lean_is_exclusive(v_toRing_435_);
if (v_isSharedCheck_474_ == 0)
{
lean_object* v_unused_475_; 
v_unused_475_ = lean_ctor_get(v_toRing_435_, 6);
lean_dec(v_unused_475_);
v___x_465_ = v_toRing_435_;
v_isShared_466_ = v_isSharedCheck_474_;
goto v_resetjp_464_;
}
else
{
lean_inc(v_one_x3f_463_);
lean_inc(v_intSMulFn_x3f_462_);
lean_inc(v_natSMulFn_x3f_461_);
lean_inc(v_natCastFn_x3f_460_);
lean_inc(v_intCastFn_x3f_459_);
lean_inc(v_powFn_x3f_458_);
lean_inc(v_negFn_x3f_457_);
lean_inc(v_subFn_x3f_456_);
lean_inc(v_mulFn_x3f_455_);
lean_inc(v_charInst_x3f_453_);
lean_inc(v_semiringInst_452_);
lean_inc(v_ringInst_451_);
lean_inc(v_u_450_);
lean_inc(v_type_449_);
lean_inc(v_id_448_);
lean_dec(v_toRing_435_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_474_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
lean_object* v___x_467_; lean_object* v___x_469_; 
v___x_467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_467_, 0, v_a_433_);
if (v_isShared_466_ == 0)
{
lean_ctor_set(v___x_465_, 6, v___x_467_);
v___x_469_ = v___x_465_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_473_; 
v_reuseFailAlloc_473_ = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(v_reuseFailAlloc_473_, 0, v_id_448_);
lean_ctor_set(v_reuseFailAlloc_473_, 1, v_type_449_);
lean_ctor_set(v_reuseFailAlloc_473_, 2, v_u_450_);
lean_ctor_set(v_reuseFailAlloc_473_, 3, v_ringInst_451_);
lean_ctor_set(v_reuseFailAlloc_473_, 4, v_semiringInst_452_);
lean_ctor_set(v_reuseFailAlloc_473_, 5, v_charInst_x3f_453_);
lean_ctor_set(v_reuseFailAlloc_473_, 6, v___x_467_);
lean_ctor_set(v_reuseFailAlloc_473_, 7, v_mulFn_x3f_455_);
lean_ctor_set(v_reuseFailAlloc_473_, 8, v_subFn_x3f_456_);
lean_ctor_set(v_reuseFailAlloc_473_, 9, v_negFn_x3f_457_);
lean_ctor_set(v_reuseFailAlloc_473_, 10, v_powFn_x3f_458_);
lean_ctor_set(v_reuseFailAlloc_473_, 11, v_intCastFn_x3f_459_);
lean_ctor_set(v_reuseFailAlloc_473_, 12, v_natCastFn_x3f_460_);
lean_ctor_set(v_reuseFailAlloc_473_, 13, v_natSMulFn_x3f_461_);
lean_ctor_set(v_reuseFailAlloc_473_, 14, v_intSMulFn_x3f_462_);
lean_ctor_set(v_reuseFailAlloc_473_, 15, v_one_x3f_463_);
lean_ctor_set_uint8(v_reuseFailAlloc_473_, sizeof(void*)*16, v_symbolicChar_454_);
v___x_469_ = v_reuseFailAlloc_473_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
lean_object* v___x_471_; 
if (v_isShared_447_ == 0)
{
lean_ctor_set(v___x_446_, 0, v___x_469_);
v___x_471_ = v___x_446_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v___x_469_);
lean_ctor_set(v_reuseFailAlloc_472_, 1, v_invFn_x3f_436_);
lean_ctor_set(v_reuseFailAlloc_472_, 2, v_divFn_x3f_437_);
lean_ctor_set(v_reuseFailAlloc_472_, 3, v_zpowFn_x3f_438_);
lean_ctor_set(v_reuseFailAlloc_472_, 4, v_semiringId_x3f_439_);
lean_ctor_set(v_reuseFailAlloc_472_, 5, v_commSemiringInst_440_);
lean_ctor_set(v_reuseFailAlloc_472_, 6, v_commRingInst_441_);
lean_ctor_set(v_reuseFailAlloc_472_, 7, v_noZeroDivInst_x3f_442_);
lean_ctor_set(v_reuseFailAlloc_472_, 8, v_fieldInst_x3f_443_);
lean_ctor_set(v_reuseFailAlloc_472_, 9, v_powIdentityInst_x3f_444_);
v___x_471_ = v_reuseFailAlloc_472_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
return v___x_471_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6(lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_){
_start:
{
lean_object* v___x_508_; 
v___x_508_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v___y_496_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_, v___y_505_, v___y_506_);
if (lean_obj_tag(v___x_508_) == 0)
{
lean_object* v_a_509_; lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_552_; 
v_a_509_ = lean_ctor_get(v___x_508_, 0);
v_isSharedCheck_552_ = !lean_is_exclusive(v___x_508_);
if (v_isSharedCheck_552_ == 0)
{
v___x_511_ = v___x_508_;
v_isShared_512_ = v_isSharedCheck_552_;
goto v_resetjp_510_;
}
else
{
lean_inc(v_a_509_);
lean_dec(v___x_508_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_552_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
lean_object* v_toRing_513_; lean_object* v_addFn_x3f_514_; 
v_toRing_513_ = lean_ctor_get(v_a_509_, 0);
lean_inc_ref(v_toRing_513_);
lean_dec(v_a_509_);
v_addFn_x3f_514_ = lean_ctor_get(v_toRing_513_, 6);
if (lean_obj_tag(v_addFn_x3f_514_) == 1)
{
lean_object* v_val_515_; lean_object* v___x_517_; 
lean_inc_ref(v_addFn_x3f_514_);
lean_dec_ref(v_toRing_513_);
v_val_515_ = lean_ctor_get(v_addFn_x3f_514_, 0);
lean_inc(v_val_515_);
lean_dec_ref_known(v_addFn_x3f_514_, 1);
if (v_isShared_512_ == 0)
{
lean_ctor_set(v___x_511_, 0, v_val_515_);
v___x_517_ = v___x_511_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v_val_515_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
return v___x_517_;
}
}
else
{
lean_object* v_type_519_; lean_object* v_u_520_; lean_object* v_semiringInst_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v_expectedInst_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
lean_del_object(v___x_511_);
v_type_519_ = lean_ctor_get(v_toRing_513_, 1);
lean_inc_ref_n(v_type_519_, 3);
v_u_520_ = lean_ctor_get(v_toRing_513_, 2);
lean_inc_n(v_u_520_, 2);
v_semiringInst_521_ = lean_ctor_get(v_toRing_513_, 4);
lean_inc_ref(v_semiringInst_521_);
lean_dec_ref(v_toRing_513_);
v___x_522_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__1));
v___x_523_ = lean_box(0);
v___x_524_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_524_, 0, v_u_520_);
lean_ctor_set(v___x_524_, 1, v___x_523_);
lean_inc_ref(v___x_524_);
v___x_525_ = l_Lean_mkConst(v___x_522_, v___x_524_);
v___x_526_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__6));
v___x_527_ = l_Lean_mkConst(v___x_526_, v___x_524_);
v___x_528_ = l_Lean_mkAppB(v___x_527_, v_type_519_, v_semiringInst_521_);
v_expectedInst_529_ = l_Lean_mkAppB(v___x_525_, v_type_519_, v___x_528_);
v___x_530_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__8));
v___x_531_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___closed__10));
v___x_532_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___at___00Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3_spec__7(v_type_519_, v_u_520_, v___x_530_, v___x_531_, v_expectedInst_529_, v___y_496_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_, v___y_505_, v___y_506_);
if (lean_obj_tag(v___x_532_) == 0)
{
lean_object* v_a_533_; lean_object* v___f_534_; lean_object* v___x_535_; 
v_a_533_ = lean_ctor_get(v___x_532_, 0);
lean_inc_n(v_a_533_, 2);
lean_dec_ref_known(v___x_532_, 1);
v___f_534_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___lam__0), 2, 1);
lean_closure_set(v___f_534_, 0, v_a_533_);
v___x_535_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(v___f_534_, v___y_496_, v___y_502_);
if (lean_obj_tag(v___x_535_) == 0)
{
lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_542_; 
v_isSharedCheck_542_ = !lean_is_exclusive(v___x_535_);
if (v_isSharedCheck_542_ == 0)
{
lean_object* v_unused_543_; 
v_unused_543_ = lean_ctor_get(v___x_535_, 0);
lean_dec(v_unused_543_);
v___x_537_ = v___x_535_;
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
else
{
lean_dec(v___x_535_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v___x_540_; 
if (v_isShared_538_ == 0)
{
lean_ctor_set(v___x_537_, 0, v_a_533_);
v___x_540_ = v___x_537_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v_a_533_);
v___x_540_ = v_reuseFailAlloc_541_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
return v___x_540_;
}
}
}
else
{
lean_object* v_a_544_; lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_551_; 
lean_dec(v_a_533_);
v_a_544_ = lean_ctor_get(v___x_535_, 0);
v_isSharedCheck_551_ = !lean_is_exclusive(v___x_535_);
if (v_isSharedCheck_551_ == 0)
{
v___x_546_ = v___x_535_;
v_isShared_547_ = v_isSharedCheck_551_;
goto v_resetjp_545_;
}
else
{
lean_inc(v_a_544_);
lean_dec(v___x_535_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_551_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v___x_549_; 
if (v_isShared_547_ == 0)
{
v___x_549_ = v___x_546_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v_a_544_);
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
return v___x_532_;
}
}
}
}
else
{
lean_object* v_a_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_560_; 
v_a_553_ = lean_ctor_get(v___x_508_, 0);
v_isSharedCheck_560_ = !lean_is_exclusive(v___x_508_);
if (v_isSharedCheck_560_ == 0)
{
v___x_555_ = v___x_508_;
v_isShared_556_ = v_isSharedCheck_560_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_a_553_);
lean_dec(v___x_508_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_560_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
lean_object* v___x_558_; 
if (v_isShared_556_ == 0)
{
v___x_558_ = v___x_555_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v_a_553_);
v___x_558_ = v_reuseFailAlloc_559_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
return v___x_558_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6___boxed(lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6(v___y_561_, v___y_562_, v___y_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_, v___y_568_, v___y_569_, v___y_570_, v___y_571_);
lean_dec(v___y_571_);
lean_dec_ref(v___y_570_);
lean_dec(v___y_569_);
lean_dec_ref(v___y_568_);
lean_dec(v___y_567_);
lean_dec_ref(v___y_566_);
lean_dec(v___y_565_);
lean_dec_ref(v___y_564_);
lean_dec(v___y_563_);
lean_dec(v___y_562_);
lean_dec_ref(v___y_561_);
return v_res_573_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4(lean_object* v_type_574_, lean_object* v_u_575_, lean_object* v_instDeclName_576_, lean_object* v_declName_577_, lean_object* v_expectedInst_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_){
_start:
{
lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_591_ = lean_box(0);
v___x_592_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_592_, 0, v_u_575_);
lean_ctor_set(v___x_592_, 1, v___x_591_);
lean_inc_ref(v___x_592_);
v___x_593_ = l_Lean_mkConst(v_instDeclName_576_, v___x_592_);
lean_inc_ref(v_type_574_);
v___x_594_ = l_Lean_Expr_app___override(v___x_593_, v_type_574_);
v___x_595_ = l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4_spec__7(v___x_594_, v___y_579_, v___y_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_);
if (lean_obj_tag(v___x_595_) == 0)
{
lean_object* v_a_596_; lean_object* v___x_597_; 
v_a_596_ = lean_ctor_get(v___x_595_, 0);
lean_inc_n(v_a_596_, 2);
lean_dec_ref_known(v___x_595_, 1);
lean_inc(v_declName_577_);
v___x_597_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst(v_declName_577_, v_a_596_, v_expectedInst_578_, v___y_586_, v___y_587_, v___y_588_, v___y_589_);
if (lean_obj_tag(v___x_597_) == 0)
{
lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
lean_dec_ref_known(v___x_597_, 1);
v___x_598_ = l_Lean_mkConst(v_declName_577_, v___x_592_);
v___x_599_ = l_Lean_mkAppB(v___x_598_, v_type_574_, v_a_596_);
v___x_600_ = l_Lean_Meta_Sym_canon(v___x_599_, v___y_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_);
if (lean_obj_tag(v___x_600_) == 0)
{
lean_object* v_a_601_; lean_object* v___x_602_; 
v_a_601_ = lean_ctor_get(v___x_600_, 0);
lean_inc(v_a_601_);
lean_dec_ref_known(v___x_600_, 1);
v___x_602_ = l_Lean_Meta_Sym_shareCommon(v_a_601_, v___y_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_);
return v___x_602_;
}
else
{
return v___x_600_;
}
}
else
{
lean_object* v_a_603_; lean_object* v___x_605_; uint8_t v_isShared_606_; uint8_t v_isSharedCheck_610_; 
lean_dec(v_a_596_);
lean_dec_ref_known(v___x_592_, 2);
lean_dec(v_declName_577_);
lean_dec_ref(v_type_574_);
v_a_603_ = lean_ctor_get(v___x_597_, 0);
v_isSharedCheck_610_ = !lean_is_exclusive(v___x_597_);
if (v_isSharedCheck_610_ == 0)
{
v___x_605_ = v___x_597_;
v_isShared_606_ = v_isSharedCheck_610_;
goto v_resetjp_604_;
}
else
{
lean_inc(v_a_603_);
lean_dec(v___x_597_);
v___x_605_ = lean_box(0);
v_isShared_606_ = v_isSharedCheck_610_;
goto v_resetjp_604_;
}
v_resetjp_604_:
{
lean_object* v___x_608_; 
if (v_isShared_606_ == 0)
{
v___x_608_ = v___x_605_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v_a_603_);
v___x_608_ = v_reuseFailAlloc_609_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
return v___x_608_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_592_, 2);
lean_dec_ref(v_expectedInst_578_);
lean_dec(v_declName_577_);
lean_dec_ref(v_type_574_);
return v___x_595_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4___boxed(lean_object** _args){
lean_object* v_type_611_ = _args[0];
lean_object* v_u_612_ = _args[1];
lean_object* v_instDeclName_613_ = _args[2];
lean_object* v_declName_614_ = _args[3];
lean_object* v_expectedInst_615_ = _args[4];
lean_object* v___y_616_ = _args[5];
lean_object* v___y_617_ = _args[6];
lean_object* v___y_618_ = _args[7];
lean_object* v___y_619_ = _args[8];
lean_object* v___y_620_ = _args[9];
lean_object* v___y_621_ = _args[10];
lean_object* v___y_622_ = _args[11];
lean_object* v___y_623_ = _args[12];
lean_object* v___y_624_ = _args[13];
lean_object* v___y_625_ = _args[14];
lean_object* v___y_626_ = _args[15];
lean_object* v___y_627_ = _args[16];
_start:
{
lean_object* v_res_628_; 
v_res_628_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4(v_type_611_, v_u_612_, v_instDeclName_613_, v_declName_614_, v_expectedInst_615_, v___y_616_, v___y_617_, v___y_618_, v___y_619_, v___y_620_, v___y_621_, v___y_622_, v___y_623_, v___y_624_, v___y_625_, v___y_626_);
lean_dec(v___y_626_);
lean_dec_ref(v___y_625_);
lean_dec(v___y_624_);
lean_dec_ref(v___y_623_);
lean_dec(v___y_622_);
lean_dec_ref(v___y_621_);
lean_dec(v___y_620_);
lean_dec_ref(v___y_619_);
lean_dec(v___y_618_);
lean_dec(v___y_617_);
lean_dec_ref(v___y_616_);
return v_res_628_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___lam__0(lean_object* v_a_629_, lean_object* v_s_630_){
_start:
{
lean_object* v_toRing_631_; lean_object* v_invFn_x3f_632_; lean_object* v_divFn_x3f_633_; lean_object* v_zpowFn_x3f_634_; lean_object* v_semiringId_x3f_635_; lean_object* v_commSemiringInst_636_; lean_object* v_commRingInst_637_; lean_object* v_noZeroDivInst_x3f_638_; lean_object* v_fieldInst_x3f_639_; lean_object* v_powIdentityInst_x3f_640_; lean_object* v___x_642_; uint8_t v_isShared_643_; uint8_t v_isSharedCheck_672_; 
v_toRing_631_ = lean_ctor_get(v_s_630_, 0);
v_invFn_x3f_632_ = lean_ctor_get(v_s_630_, 1);
v_divFn_x3f_633_ = lean_ctor_get(v_s_630_, 2);
v_zpowFn_x3f_634_ = lean_ctor_get(v_s_630_, 3);
v_semiringId_x3f_635_ = lean_ctor_get(v_s_630_, 4);
v_commSemiringInst_636_ = lean_ctor_get(v_s_630_, 5);
v_commRingInst_637_ = lean_ctor_get(v_s_630_, 6);
v_noZeroDivInst_x3f_638_ = lean_ctor_get(v_s_630_, 7);
v_fieldInst_x3f_639_ = lean_ctor_get(v_s_630_, 8);
v_powIdentityInst_x3f_640_ = lean_ctor_get(v_s_630_, 9);
v_isSharedCheck_672_ = !lean_is_exclusive(v_s_630_);
if (v_isSharedCheck_672_ == 0)
{
v___x_642_ = v_s_630_;
v_isShared_643_ = v_isSharedCheck_672_;
goto v_resetjp_641_;
}
else
{
lean_inc(v_powIdentityInst_x3f_640_);
lean_inc(v_fieldInst_x3f_639_);
lean_inc(v_noZeroDivInst_x3f_638_);
lean_inc(v_commRingInst_637_);
lean_inc(v_commSemiringInst_636_);
lean_inc(v_semiringId_x3f_635_);
lean_inc(v_zpowFn_x3f_634_);
lean_inc(v_divFn_x3f_633_);
lean_inc(v_invFn_x3f_632_);
lean_inc(v_toRing_631_);
lean_dec(v_s_630_);
v___x_642_ = lean_box(0);
v_isShared_643_ = v_isSharedCheck_672_;
goto v_resetjp_641_;
}
v_resetjp_641_:
{
lean_object* v_id_644_; lean_object* v_type_645_; lean_object* v_u_646_; lean_object* v_ringInst_647_; lean_object* v_semiringInst_648_; lean_object* v_charInst_x3f_649_; uint8_t v_symbolicChar_650_; lean_object* v_addFn_x3f_651_; lean_object* v_mulFn_x3f_652_; lean_object* v_subFn_x3f_653_; lean_object* v_powFn_x3f_654_; lean_object* v_intCastFn_x3f_655_; lean_object* v_natCastFn_x3f_656_; lean_object* v_natSMulFn_x3f_657_; lean_object* v_intSMulFn_x3f_658_; lean_object* v_one_x3f_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_670_; 
v_id_644_ = lean_ctor_get(v_toRing_631_, 0);
v_type_645_ = lean_ctor_get(v_toRing_631_, 1);
v_u_646_ = lean_ctor_get(v_toRing_631_, 2);
v_ringInst_647_ = lean_ctor_get(v_toRing_631_, 3);
v_semiringInst_648_ = lean_ctor_get(v_toRing_631_, 4);
v_charInst_x3f_649_ = lean_ctor_get(v_toRing_631_, 5);
v_symbolicChar_650_ = lean_ctor_get_uint8(v_toRing_631_, sizeof(void*)*16);
v_addFn_x3f_651_ = lean_ctor_get(v_toRing_631_, 6);
v_mulFn_x3f_652_ = lean_ctor_get(v_toRing_631_, 7);
v_subFn_x3f_653_ = lean_ctor_get(v_toRing_631_, 8);
v_powFn_x3f_654_ = lean_ctor_get(v_toRing_631_, 10);
v_intCastFn_x3f_655_ = lean_ctor_get(v_toRing_631_, 11);
v_natCastFn_x3f_656_ = lean_ctor_get(v_toRing_631_, 12);
v_natSMulFn_x3f_657_ = lean_ctor_get(v_toRing_631_, 13);
v_intSMulFn_x3f_658_ = lean_ctor_get(v_toRing_631_, 14);
v_one_x3f_659_ = lean_ctor_get(v_toRing_631_, 15);
v_isSharedCheck_670_ = !lean_is_exclusive(v_toRing_631_);
if (v_isSharedCheck_670_ == 0)
{
lean_object* v_unused_671_; 
v_unused_671_ = lean_ctor_get(v_toRing_631_, 9);
lean_dec(v_unused_671_);
v___x_661_ = v_toRing_631_;
v_isShared_662_ = v_isSharedCheck_670_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_one_x3f_659_);
lean_inc(v_intSMulFn_x3f_658_);
lean_inc(v_natSMulFn_x3f_657_);
lean_inc(v_natCastFn_x3f_656_);
lean_inc(v_intCastFn_x3f_655_);
lean_inc(v_powFn_x3f_654_);
lean_inc(v_subFn_x3f_653_);
lean_inc(v_mulFn_x3f_652_);
lean_inc(v_addFn_x3f_651_);
lean_inc(v_charInst_x3f_649_);
lean_inc(v_semiringInst_648_);
lean_inc(v_ringInst_647_);
lean_inc(v_u_646_);
lean_inc(v_type_645_);
lean_inc(v_id_644_);
lean_dec(v_toRing_631_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_670_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v___x_663_; lean_object* v___x_665_; 
v___x_663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_663_, 0, v_a_629_);
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 9, v___x_663_);
v___x_665_ = v___x_661_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_id_644_);
lean_ctor_set(v_reuseFailAlloc_669_, 1, v_type_645_);
lean_ctor_set(v_reuseFailAlloc_669_, 2, v_u_646_);
lean_ctor_set(v_reuseFailAlloc_669_, 3, v_ringInst_647_);
lean_ctor_set(v_reuseFailAlloc_669_, 4, v_semiringInst_648_);
lean_ctor_set(v_reuseFailAlloc_669_, 5, v_charInst_x3f_649_);
lean_ctor_set(v_reuseFailAlloc_669_, 6, v_addFn_x3f_651_);
lean_ctor_set(v_reuseFailAlloc_669_, 7, v_mulFn_x3f_652_);
lean_ctor_set(v_reuseFailAlloc_669_, 8, v_subFn_x3f_653_);
lean_ctor_set(v_reuseFailAlloc_669_, 9, v___x_663_);
lean_ctor_set(v_reuseFailAlloc_669_, 10, v_powFn_x3f_654_);
lean_ctor_set(v_reuseFailAlloc_669_, 11, v_intCastFn_x3f_655_);
lean_ctor_set(v_reuseFailAlloc_669_, 12, v_natCastFn_x3f_656_);
lean_ctor_set(v_reuseFailAlloc_669_, 13, v_natSMulFn_x3f_657_);
lean_ctor_set(v_reuseFailAlloc_669_, 14, v_intSMulFn_x3f_658_);
lean_ctor_set(v_reuseFailAlloc_669_, 15, v_one_x3f_659_);
lean_ctor_set_uint8(v_reuseFailAlloc_669_, sizeof(void*)*16, v_symbolicChar_650_);
v___x_665_ = v_reuseFailAlloc_669_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
lean_object* v___x_667_; 
if (v_isShared_643_ == 0)
{
lean_ctor_set(v___x_642_, 0, v___x_665_);
v___x_667_ = v___x_642_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v___x_665_);
lean_ctor_set(v_reuseFailAlloc_668_, 1, v_invFn_x3f_632_);
lean_ctor_set(v_reuseFailAlloc_668_, 2, v_divFn_x3f_633_);
lean_ctor_set(v_reuseFailAlloc_668_, 3, v_zpowFn_x3f_634_);
lean_ctor_set(v_reuseFailAlloc_668_, 4, v_semiringId_x3f_635_);
lean_ctor_set(v_reuseFailAlloc_668_, 5, v_commSemiringInst_636_);
lean_ctor_set(v_reuseFailAlloc_668_, 6, v_commRingInst_637_);
lean_ctor_set(v_reuseFailAlloc_668_, 7, v_noZeroDivInst_x3f_638_);
lean_ctor_set(v_reuseFailAlloc_668_, 8, v_fieldInst_x3f_639_);
lean_ctor_set(v_reuseFailAlloc_668_, 9, v_powIdentityInst_x3f_640_);
v___x_667_ = v_reuseFailAlloc_668_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
return v___x_667_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1(lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_){
_start:
{
lean_object* v___x_699_; 
v___x_699_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v___y_687_, v___y_688_, v___y_689_, v___y_690_, v___y_691_, v___y_692_, v___y_693_, v___y_694_, v___y_695_, v___y_696_, v___y_697_);
if (lean_obj_tag(v___x_699_) == 0)
{
lean_object* v_a_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_740_; 
v_a_700_ = lean_ctor_get(v___x_699_, 0);
v_isSharedCheck_740_ = !lean_is_exclusive(v___x_699_);
if (v_isSharedCheck_740_ == 0)
{
v___x_702_ = v___x_699_;
v_isShared_703_ = v_isSharedCheck_740_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_a_700_);
lean_dec(v___x_699_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_740_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
lean_object* v_toRing_704_; lean_object* v_negFn_x3f_705_; 
v_toRing_704_ = lean_ctor_get(v_a_700_, 0);
lean_inc_ref(v_toRing_704_);
lean_dec(v_a_700_);
v_negFn_x3f_705_ = lean_ctor_get(v_toRing_704_, 9);
if (lean_obj_tag(v_negFn_x3f_705_) == 1)
{
lean_object* v_val_706_; lean_object* v___x_708_; 
lean_inc_ref(v_negFn_x3f_705_);
lean_dec_ref(v_toRing_704_);
v_val_706_ = lean_ctor_get(v_negFn_x3f_705_, 0);
lean_inc(v_val_706_);
lean_dec_ref_known(v_negFn_x3f_705_, 1);
if (v_isShared_703_ == 0)
{
lean_ctor_set(v___x_702_, 0, v_val_706_);
v___x_708_ = v___x_702_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v_val_706_);
v___x_708_ = v_reuseFailAlloc_709_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
return v___x_708_;
}
}
else
{
lean_object* v_type_710_; lean_object* v_u_711_; lean_object* v_ringInst_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v_expectedInst_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; 
lean_del_object(v___x_702_);
v_type_710_ = lean_ctor_get(v_toRing_704_, 1);
lean_inc_ref_n(v_type_710_, 2);
v_u_711_ = lean_ctor_get(v_toRing_704_, 2);
lean_inc_n(v_u_711_, 2);
v_ringInst_712_ = lean_ctor_get(v_toRing_704_, 3);
lean_inc_ref(v_ringInst_712_);
lean_dec_ref(v_toRing_704_);
v___x_713_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__2));
v___x_714_ = lean_box(0);
v___x_715_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_715_, 0, v_u_711_);
lean_ctor_set(v___x_715_, 1, v___x_714_);
v___x_716_ = l_Lean_mkConst(v___x_713_, v___x_715_);
v_expectedInst_717_ = l_Lean_mkAppB(v___x_716_, v_type_710_, v_ringInst_712_);
v___x_718_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__4));
v___x_719_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___closed__6));
v___x_720_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4(v_type_710_, v_u_711_, v___x_718_, v___x_719_, v_expectedInst_717_, v___y_687_, v___y_688_, v___y_689_, v___y_690_, v___y_691_, v___y_692_, v___y_693_, v___y_694_, v___y_695_, v___y_696_, v___y_697_);
if (lean_obj_tag(v___x_720_) == 0)
{
lean_object* v_a_721_; lean_object* v___f_722_; lean_object* v___x_723_; 
v_a_721_ = lean_ctor_get(v___x_720_, 0);
lean_inc_n(v_a_721_, 2);
lean_dec_ref_known(v___x_720_, 1);
v___f_722_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___lam__0), 2, 1);
lean_closure_set(v___f_722_, 0, v_a_721_);
v___x_723_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(v___f_722_, v___y_687_, v___y_693_);
if (lean_obj_tag(v___x_723_) == 0)
{
lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_730_; 
v_isSharedCheck_730_ = !lean_is_exclusive(v___x_723_);
if (v_isSharedCheck_730_ == 0)
{
lean_object* v_unused_731_; 
v_unused_731_ = lean_ctor_get(v___x_723_, 0);
lean_dec(v_unused_731_);
v___x_725_ = v___x_723_;
v_isShared_726_ = v_isSharedCheck_730_;
goto v_resetjp_724_;
}
else
{
lean_dec(v___x_723_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_730_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v___x_728_; 
if (v_isShared_726_ == 0)
{
lean_ctor_set(v___x_725_, 0, v_a_721_);
v___x_728_ = v___x_725_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v_a_721_);
v___x_728_ = v_reuseFailAlloc_729_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
return v___x_728_;
}
}
}
else
{
lean_object* v_a_732_; lean_object* v___x_734_; uint8_t v_isShared_735_; uint8_t v_isSharedCheck_739_; 
lean_dec(v_a_721_);
v_a_732_ = lean_ctor_get(v___x_723_, 0);
v_isSharedCheck_739_ = !lean_is_exclusive(v___x_723_);
if (v_isSharedCheck_739_ == 0)
{
v___x_734_ = v___x_723_;
v_isShared_735_ = v_isSharedCheck_739_;
goto v_resetjp_733_;
}
else
{
lean_inc(v_a_732_);
lean_dec(v___x_723_);
v___x_734_ = lean_box(0);
v_isShared_735_ = v_isSharedCheck_739_;
goto v_resetjp_733_;
}
v_resetjp_733_:
{
lean_object* v___x_737_; 
if (v_isShared_735_ == 0)
{
v___x_737_ = v___x_734_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v_a_732_);
v___x_737_ = v_reuseFailAlloc_738_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
return v___x_737_;
}
}
}
}
else
{
return v___x_720_;
}
}
}
}
else
{
lean_object* v_a_741_; lean_object* v___x_743_; uint8_t v_isShared_744_; uint8_t v_isSharedCheck_748_; 
v_a_741_ = lean_ctor_get(v___x_699_, 0);
v_isSharedCheck_748_ = !lean_is_exclusive(v___x_699_);
if (v_isSharedCheck_748_ == 0)
{
v___x_743_ = v___x_699_;
v_isShared_744_ = v_isSharedCheck_748_;
goto v_resetjp_742_;
}
else
{
lean_inc(v_a_741_);
lean_dec(v___x_699_);
v___x_743_ = lean_box(0);
v_isShared_744_ = v_isSharedCheck_748_;
goto v_resetjp_742_;
}
v_resetjp_742_:
{
lean_object* v___x_746_; 
if (v_isShared_744_ == 0)
{
v___x_746_ = v___x_743_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v_a_741_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_){
_start:
{
lean_object* v_res_761_; 
v_res_761_ = l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1(v___y_749_, v___y_750_, v___y_751_, v___y_752_, v___y_753_, v___y_754_, v___y_755_, v___y_756_, v___y_757_, v___y_758_, v___y_759_);
lean_dec(v___y_759_);
lean_dec_ref(v___y_758_);
lean_dec(v___y_757_);
lean_dec_ref(v___y_756_);
lean_dec(v___y_755_);
lean_dec_ref(v___y_754_);
lean_dec(v___y_753_);
lean_dec_ref(v___y_752_);
lean_dec(v___y_751_);
lean_dec(v___y_750_);
lean_dec_ref(v___y_749_);
return v_res_761_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_769_ = lean_unsigned_to_nat(0u);
v___x_770_ = lean_nat_to_int(v___x_769_);
return v___x_770_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0(lean_object* v_k_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_){
_start:
{
lean_object* v___x_789_; 
v___x_789_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v___y_777_, v___y_778_, v___y_779_, v___y_780_, v___y_781_, v___y_782_, v___y_783_, v___y_784_, v___y_785_, v___y_786_, v___y_787_);
if (lean_obj_tag(v___x_789_) == 0)
{
lean_object* v_a_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_850_; 
v_a_790_ = lean_ctor_get(v___x_789_, 0);
v_isSharedCheck_850_ = !lean_is_exclusive(v___x_789_);
if (v_isSharedCheck_850_ == 0)
{
v___x_792_ = v___x_789_;
v_isShared_793_ = v_isSharedCheck_850_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_a_790_);
lean_dec(v___x_789_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_850_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
lean_object* v_toRing_794_; lean_object* v_type_795_; lean_object* v_u_796_; lean_object* v_semiringInst_797_; lean_object* v___x_798_; lean_object* v_n_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v_ofNatInst_804_; lean_object* v___y_805_; lean_object* v___y_806_; lean_object* v___y_807_; lean_object* v___y_808_; lean_object* v___y_809_; lean_object* v___y_810_; lean_object* v___y_811_; lean_object* v___y_812_; lean_object* v___y_813_; lean_object* v___y_814_; lean_object* v___y_815_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; 
v_toRing_794_ = lean_ctor_get(v_a_790_, 0);
lean_inc_ref(v_toRing_794_);
lean_dec(v_a_790_);
v_type_795_ = lean_ctor_get(v_toRing_794_, 1);
lean_inc_ref_n(v_type_795_, 2);
v_u_796_ = lean_ctor_get(v_toRing_794_, 2);
lean_inc(v_u_796_);
v_semiringInst_797_ = lean_ctor_get(v_toRing_794_, 4);
lean_inc_ref(v_semiringInst_797_);
lean_dec_ref(v_toRing_794_);
v___x_798_ = lean_nat_abs(v_k_776_);
v_n_799_ = l_Lean_mkRawNatLit(v___x_798_);
v___x_800_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__1));
v___x_801_ = lean_box(0);
v___x_802_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_802_, 0, v_u_796_);
lean_ctor_set(v___x_802_, 1, v___x_801_);
lean_inc_ref(v___x_802_);
v___x_834_ = l_Lean_mkConst(v___x_800_, v___x_802_);
lean_inc_ref(v_n_799_);
v___x_835_ = l_Lean_mkAppB(v___x_834_, v_type_795_, v_n_799_);
v___x_836_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v___x_835_, v___y_783_, v___y_784_, v___y_785_, v___y_786_, v___y_787_);
if (lean_obj_tag(v___x_836_) == 0)
{
lean_object* v_a_837_; 
v_a_837_ = lean_ctor_get(v___x_836_, 0);
lean_inc(v_a_837_);
lean_dec_ref_known(v___x_836_, 1);
if (lean_obj_tag(v_a_837_) == 1)
{
lean_object* v_val_838_; 
lean_dec_ref(v_semiringInst_797_);
v_val_838_ = lean_ctor_get(v_a_837_, 0);
lean_inc(v_val_838_);
lean_dec_ref_known(v_a_837_, 1);
v_ofNatInst_804_ = v_val_838_;
v___y_805_ = v___y_777_;
v___y_806_ = v___y_778_;
v___y_807_ = v___y_779_;
v___y_808_ = v___y_780_;
v___y_809_ = v___y_781_;
v___y_810_ = v___y_782_;
v___y_811_ = v___y_783_;
v___y_812_ = v___y_784_;
v___y_813_ = v___y_785_;
v___y_814_ = v___y_786_;
v___y_815_ = v___y_787_;
goto v___jp_803_;
}
else
{
lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; 
lean_dec(v_a_837_);
v___x_839_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__5));
lean_inc_ref(v___x_802_);
v___x_840_ = l_Lean_mkConst(v___x_839_, v___x_802_);
lean_inc_ref(v_n_799_);
lean_inc_ref(v_type_795_);
v___x_841_ = l_Lean_mkApp3(v___x_840_, v_type_795_, v_semiringInst_797_, v_n_799_);
v_ofNatInst_804_ = v___x_841_;
v___y_805_ = v___y_777_;
v___y_806_ = v___y_778_;
v___y_807_ = v___y_779_;
v___y_808_ = v___y_780_;
v___y_809_ = v___y_781_;
v___y_810_ = v___y_782_;
v___y_811_ = v___y_783_;
v___y_812_ = v___y_784_;
v___y_813_ = v___y_785_;
v___y_814_ = v___y_786_;
v___y_815_ = v___y_787_;
goto v___jp_803_;
}
}
else
{
lean_object* v_a_842_; lean_object* v___x_844_; uint8_t v_isShared_845_; uint8_t v_isSharedCheck_849_; 
lean_dec_ref_known(v___x_802_, 2);
lean_dec_ref(v_n_799_);
lean_dec_ref(v_semiringInst_797_);
lean_dec_ref(v_type_795_);
lean_del_object(v___x_792_);
v_a_842_ = lean_ctor_get(v___x_836_, 0);
v_isSharedCheck_849_ = !lean_is_exclusive(v___x_836_);
if (v_isSharedCheck_849_ == 0)
{
v___x_844_ = v___x_836_;
v_isShared_845_ = v_isSharedCheck_849_;
goto v_resetjp_843_;
}
else
{
lean_inc(v_a_842_);
lean_dec(v___x_836_);
v___x_844_ = lean_box(0);
v_isShared_845_ = v_isSharedCheck_849_;
goto v_resetjp_843_;
}
v_resetjp_843_:
{
lean_object* v___x_847_; 
if (v_isShared_845_ == 0)
{
v___x_847_ = v___x_844_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v_a_842_);
v___x_847_ = v_reuseFailAlloc_848_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
return v___x_847_;
}
}
}
v___jp_803_:
{
lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v_e_818_; lean_object* v___x_819_; uint8_t v___x_820_; 
v___x_816_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__3));
v___x_817_ = l_Lean_mkConst(v___x_816_, v___x_802_);
v_e_818_ = l_Lean_mkApp3(v___x_817_, v_type_795_, v_n_799_, v_ofNatInst_804_);
v___x_819_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__4, &l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__4_once, _init_l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__4);
v___x_820_ = lean_int_dec_lt(v_k_776_, v___x_819_);
if (v___x_820_ == 0)
{
lean_object* v___x_822_; 
if (v_isShared_793_ == 0)
{
lean_ctor_set(v___x_792_, 0, v_e_818_);
v___x_822_ = v___x_792_;
goto v_reusejp_821_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v_e_818_);
v___x_822_ = v_reuseFailAlloc_823_;
goto v_reusejp_821_;
}
v_reusejp_821_:
{
return v___x_822_;
}
}
else
{
lean_object* v___x_824_; 
lean_del_object(v___x_792_);
v___x_824_ = l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1(v___y_805_, v___y_806_, v___y_807_, v___y_808_, v___y_809_, v___y_810_, v___y_811_, v___y_812_, v___y_813_, v___y_814_, v___y_815_);
if (lean_obj_tag(v___x_824_) == 0)
{
lean_object* v_a_825_; lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_833_; 
v_a_825_ = lean_ctor_get(v___x_824_, 0);
v_isSharedCheck_833_ = !lean_is_exclusive(v___x_824_);
if (v_isSharedCheck_833_ == 0)
{
v___x_827_ = v___x_824_;
v_isShared_828_ = v_isSharedCheck_833_;
goto v_resetjp_826_;
}
else
{
lean_inc(v_a_825_);
lean_dec(v___x_824_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_833_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
lean_object* v___x_829_; lean_object* v___x_831_; 
v___x_829_ = l_Lean_Expr_app___override(v_a_825_, v_e_818_);
if (v_isShared_828_ == 0)
{
lean_ctor_set(v___x_827_, 0, v___x_829_);
v___x_831_ = v___x_827_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v___x_829_);
v___x_831_ = v_reuseFailAlloc_832_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
return v___x_831_;
}
}
}
else
{
lean_dec_ref(v_e_818_);
return v___x_824_;
}
}
}
}
}
else
{
lean_object* v_a_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_858_; 
v_a_851_ = lean_ctor_get(v___x_789_, 0);
v_isSharedCheck_858_ = !lean_is_exclusive(v___x_789_);
if (v_isSharedCheck_858_ == 0)
{
v___x_853_ = v___x_789_;
v_isShared_854_ = v_isSharedCheck_858_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_a_851_);
lean_dec(v___x_789_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_858_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v___x_856_; 
if (v_isShared_854_ == 0)
{
v___x_856_ = v___x_853_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v_a_851_);
v___x_856_ = v_reuseFailAlloc_857_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
return v___x_856_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___boxed(lean_object* v_k_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_, lean_object* v___y_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_){
_start:
{
lean_object* v_res_872_; 
v_res_872_ = l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0(v_k_859_, v___y_860_, v___y_861_, v___y_862_, v___y_863_, v___y_864_, v___y_865_, v___y_866_, v___y_867_, v___y_868_, v___y_869_, v___y_870_);
lean_dec(v___y_870_);
lean_dec_ref(v___y_869_);
lean_dec(v___y_868_);
lean_dec_ref(v___y_867_);
lean_dec(v___y_866_);
lean_dec_ref(v___y_865_);
lean_dec(v___y_864_);
lean_dec_ref(v___y_863_);
lean_dec(v___y_862_);
lean_dec(v___y_861_);
lean_dec_ref(v___y_860_);
lean_dec(v_k_859_);
return v_res_872_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___at___00Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12_spec__15___closed__1(void){
_start:
{
lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_875_ = lean_unsigned_to_nat(0u);
v___x_876_ = l_Lean_Level_ofNat(v___x_875_);
return v___x_876_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___at___00Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12_spec__15(lean_object* v_u_883_, lean_object* v_type_884_, lean_object* v_semiringInst_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_){
_start:
{
lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; 
v___x_898_ = ((lean_object*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___at___00Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12_spec__15___closed__0));
v___x_899_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___at___00Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12_spec__15___closed__1, &l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___at___00Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12_spec__15___closed__1_once, _init_l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___at___00Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12_spec__15___closed__1);
v___x_900_ = lean_box(0);
lean_inc(v_u_883_);
v___x_901_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_901_, 0, v_u_883_);
lean_ctor_set(v___x_901_, 1, v___x_900_);
lean_inc_ref(v___x_901_);
v___x_902_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_902_, 0, v___x_899_);
lean_ctor_set(v___x_902_, 1, v___x_901_);
v___x_903_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_903_, 0, v_u_883_);
lean_ctor_set(v___x_903_, 1, v___x_902_);
lean_inc_ref(v___x_903_);
v___x_904_ = l_Lean_mkConst(v___x_898_, v___x_903_);
v___x_905_ = l_Lean_Nat_mkType;
lean_inc_ref_n(v_type_884_, 2);
v___x_906_ = l_Lean_mkApp3(v___x_904_, v_type_884_, v___x_905_, v_type_884_);
v___x_907_ = l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4_spec__7(v___x_906_, v___y_886_, v___y_887_, v___y_888_, v___y_889_, v___y_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_, v___y_895_, v___y_896_);
if (lean_obj_tag(v___x_907_) == 0)
{
lean_object* v_a_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v_inst_x27_911_; lean_object* v___x_912_; lean_object* v___x_913_; 
v_a_908_ = lean_ctor_get(v___x_907_, 0);
lean_inc_n(v_a_908_, 2);
lean_dec_ref_known(v___x_907_, 1);
v___x_909_ = ((lean_object*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___at___00Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12_spec__15___closed__3));
v___x_910_ = l_Lean_mkConst(v___x_909_, v___x_901_);
lean_inc_ref(v_type_884_);
v_inst_x27_911_ = l_Lean_mkAppB(v___x_910_, v_type_884_, v_semiringInst_885_);
v___x_912_ = ((lean_object*)(l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__5));
v___x_913_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst(v___x_912_, v_a_908_, v_inst_x27_911_, v___y_893_, v___y_894_, v___y_895_, v___y_896_);
if (lean_obj_tag(v___x_913_) == 0)
{
lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
lean_dec_ref_known(v___x_913_, 1);
v___x_914_ = l_Lean_mkConst(v___x_912_, v___x_903_);
lean_inc_ref(v_type_884_);
v___x_915_ = l_Lean_mkApp4(v___x_914_, v_type_884_, v___x_905_, v_type_884_, v_a_908_);
v___x_916_ = l_Lean_Meta_Sym_canon(v___x_915_, v___y_891_, v___y_892_, v___y_893_, v___y_894_, v___y_895_, v___y_896_);
if (lean_obj_tag(v___x_916_) == 0)
{
lean_object* v_a_917_; lean_object* v___x_918_; 
v_a_917_ = lean_ctor_get(v___x_916_, 0);
lean_inc(v_a_917_);
lean_dec_ref_known(v___x_916_, 1);
v___x_918_ = l_Lean_Meta_Sym_shareCommon(v_a_917_, v___y_891_, v___y_892_, v___y_893_, v___y_894_, v___y_895_, v___y_896_);
return v___x_918_;
}
else
{
return v___x_916_;
}
}
else
{
lean_object* v_a_919_; lean_object* v___x_921_; uint8_t v_isShared_922_; uint8_t v_isSharedCheck_926_; 
lean_dec(v_a_908_);
lean_dec_ref_known(v___x_903_, 2);
lean_dec_ref(v_type_884_);
v_a_919_ = lean_ctor_get(v___x_913_, 0);
v_isSharedCheck_926_ = !lean_is_exclusive(v___x_913_);
if (v_isSharedCheck_926_ == 0)
{
v___x_921_ = v___x_913_;
v_isShared_922_ = v_isSharedCheck_926_;
goto v_resetjp_920_;
}
else
{
lean_inc(v_a_919_);
lean_dec(v___x_913_);
v___x_921_ = lean_box(0);
v_isShared_922_ = v_isSharedCheck_926_;
goto v_resetjp_920_;
}
v_resetjp_920_:
{
lean_object* v___x_924_; 
if (v_isShared_922_ == 0)
{
v___x_924_ = v___x_921_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v_a_919_);
v___x_924_ = v_reuseFailAlloc_925_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
return v___x_924_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_903_, 2);
lean_dec_ref_known(v___x_901_, 2);
lean_dec_ref(v_semiringInst_885_);
lean_dec_ref(v_type_884_);
return v___x_907_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___at___00Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12_spec__15___boxed(lean_object* v_u_927_, lean_object* v_type_928_, lean_object* v_semiringInst_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_){
_start:
{
lean_object* v_res_942_; 
v_res_942_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___at___00Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12_spec__15(v_u_927_, v_type_928_, v_semiringInst_929_, v___y_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_, v___y_940_);
lean_dec(v___y_940_);
lean_dec_ref(v___y_939_);
lean_dec(v___y_938_);
lean_dec_ref(v___y_937_);
lean_dec(v___y_936_);
lean_dec_ref(v___y_935_);
lean_dec(v___y_934_);
lean_dec_ref(v___y_933_);
lean_dec(v___y_932_);
lean_dec(v___y_931_);
lean_dec_ref(v___y_930_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12___lam__0(lean_object* v_a_943_, lean_object* v_s_944_){
_start:
{
lean_object* v_toRing_945_; lean_object* v_invFn_x3f_946_; lean_object* v_divFn_x3f_947_; lean_object* v_zpowFn_x3f_948_; lean_object* v_semiringId_x3f_949_; lean_object* v_commSemiringInst_950_; lean_object* v_commRingInst_951_; lean_object* v_noZeroDivInst_x3f_952_; lean_object* v_fieldInst_x3f_953_; lean_object* v_powIdentityInst_x3f_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_986_; 
v_toRing_945_ = lean_ctor_get(v_s_944_, 0);
v_invFn_x3f_946_ = lean_ctor_get(v_s_944_, 1);
v_divFn_x3f_947_ = lean_ctor_get(v_s_944_, 2);
v_zpowFn_x3f_948_ = lean_ctor_get(v_s_944_, 3);
v_semiringId_x3f_949_ = lean_ctor_get(v_s_944_, 4);
v_commSemiringInst_950_ = lean_ctor_get(v_s_944_, 5);
v_commRingInst_951_ = lean_ctor_get(v_s_944_, 6);
v_noZeroDivInst_x3f_952_ = lean_ctor_get(v_s_944_, 7);
v_fieldInst_x3f_953_ = lean_ctor_get(v_s_944_, 8);
v_powIdentityInst_x3f_954_ = lean_ctor_get(v_s_944_, 9);
v_isSharedCheck_986_ = !lean_is_exclusive(v_s_944_);
if (v_isSharedCheck_986_ == 0)
{
v___x_956_ = v_s_944_;
v_isShared_957_ = v_isSharedCheck_986_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_powIdentityInst_x3f_954_);
lean_inc(v_fieldInst_x3f_953_);
lean_inc(v_noZeroDivInst_x3f_952_);
lean_inc(v_commRingInst_951_);
lean_inc(v_commSemiringInst_950_);
lean_inc(v_semiringId_x3f_949_);
lean_inc(v_zpowFn_x3f_948_);
lean_inc(v_divFn_x3f_947_);
lean_inc(v_invFn_x3f_946_);
lean_inc(v_toRing_945_);
lean_dec(v_s_944_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_986_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v_id_958_; lean_object* v_type_959_; lean_object* v_u_960_; lean_object* v_ringInst_961_; lean_object* v_semiringInst_962_; lean_object* v_charInst_x3f_963_; uint8_t v_symbolicChar_964_; lean_object* v_addFn_x3f_965_; lean_object* v_mulFn_x3f_966_; lean_object* v_subFn_x3f_967_; lean_object* v_negFn_x3f_968_; lean_object* v_intCastFn_x3f_969_; lean_object* v_natCastFn_x3f_970_; lean_object* v_natSMulFn_x3f_971_; lean_object* v_intSMulFn_x3f_972_; lean_object* v_one_x3f_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_984_; 
v_id_958_ = lean_ctor_get(v_toRing_945_, 0);
v_type_959_ = lean_ctor_get(v_toRing_945_, 1);
v_u_960_ = lean_ctor_get(v_toRing_945_, 2);
v_ringInst_961_ = lean_ctor_get(v_toRing_945_, 3);
v_semiringInst_962_ = lean_ctor_get(v_toRing_945_, 4);
v_charInst_x3f_963_ = lean_ctor_get(v_toRing_945_, 5);
v_symbolicChar_964_ = lean_ctor_get_uint8(v_toRing_945_, sizeof(void*)*16);
v_addFn_x3f_965_ = lean_ctor_get(v_toRing_945_, 6);
v_mulFn_x3f_966_ = lean_ctor_get(v_toRing_945_, 7);
v_subFn_x3f_967_ = lean_ctor_get(v_toRing_945_, 8);
v_negFn_x3f_968_ = lean_ctor_get(v_toRing_945_, 9);
v_intCastFn_x3f_969_ = lean_ctor_get(v_toRing_945_, 11);
v_natCastFn_x3f_970_ = lean_ctor_get(v_toRing_945_, 12);
v_natSMulFn_x3f_971_ = lean_ctor_get(v_toRing_945_, 13);
v_intSMulFn_x3f_972_ = lean_ctor_get(v_toRing_945_, 14);
v_one_x3f_973_ = lean_ctor_get(v_toRing_945_, 15);
v_isSharedCheck_984_ = !lean_is_exclusive(v_toRing_945_);
if (v_isSharedCheck_984_ == 0)
{
lean_object* v_unused_985_; 
v_unused_985_ = lean_ctor_get(v_toRing_945_, 10);
lean_dec(v_unused_985_);
v___x_975_ = v_toRing_945_;
v_isShared_976_ = v_isSharedCheck_984_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_one_x3f_973_);
lean_inc(v_intSMulFn_x3f_972_);
lean_inc(v_natSMulFn_x3f_971_);
lean_inc(v_natCastFn_x3f_970_);
lean_inc(v_intCastFn_x3f_969_);
lean_inc(v_negFn_x3f_968_);
lean_inc(v_subFn_x3f_967_);
lean_inc(v_mulFn_x3f_966_);
lean_inc(v_addFn_x3f_965_);
lean_inc(v_charInst_x3f_963_);
lean_inc(v_semiringInst_962_);
lean_inc(v_ringInst_961_);
lean_inc(v_u_960_);
lean_inc(v_type_959_);
lean_inc(v_id_958_);
lean_dec(v_toRing_945_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_984_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
lean_object* v___x_977_; lean_object* v___x_979_; 
v___x_977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_977_, 0, v_a_943_);
if (v_isShared_976_ == 0)
{
lean_ctor_set(v___x_975_, 10, v___x_977_);
v___x_979_ = v___x_975_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v_id_958_);
lean_ctor_set(v_reuseFailAlloc_983_, 1, v_type_959_);
lean_ctor_set(v_reuseFailAlloc_983_, 2, v_u_960_);
lean_ctor_set(v_reuseFailAlloc_983_, 3, v_ringInst_961_);
lean_ctor_set(v_reuseFailAlloc_983_, 4, v_semiringInst_962_);
lean_ctor_set(v_reuseFailAlloc_983_, 5, v_charInst_x3f_963_);
lean_ctor_set(v_reuseFailAlloc_983_, 6, v_addFn_x3f_965_);
lean_ctor_set(v_reuseFailAlloc_983_, 7, v_mulFn_x3f_966_);
lean_ctor_set(v_reuseFailAlloc_983_, 8, v_subFn_x3f_967_);
lean_ctor_set(v_reuseFailAlloc_983_, 9, v_negFn_x3f_968_);
lean_ctor_set(v_reuseFailAlloc_983_, 10, v___x_977_);
lean_ctor_set(v_reuseFailAlloc_983_, 11, v_intCastFn_x3f_969_);
lean_ctor_set(v_reuseFailAlloc_983_, 12, v_natCastFn_x3f_970_);
lean_ctor_set(v_reuseFailAlloc_983_, 13, v_natSMulFn_x3f_971_);
lean_ctor_set(v_reuseFailAlloc_983_, 14, v_intSMulFn_x3f_972_);
lean_ctor_set(v_reuseFailAlloc_983_, 15, v_one_x3f_973_);
lean_ctor_set_uint8(v_reuseFailAlloc_983_, sizeof(void*)*16, v_symbolicChar_964_);
v___x_979_ = v_reuseFailAlloc_983_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
lean_object* v___x_981_; 
if (v_isShared_957_ == 0)
{
lean_ctor_set(v___x_956_, 0, v___x_979_);
v___x_981_ = v___x_956_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v___x_979_);
lean_ctor_set(v_reuseFailAlloc_982_, 1, v_invFn_x3f_946_);
lean_ctor_set(v_reuseFailAlloc_982_, 2, v_divFn_x3f_947_);
lean_ctor_set(v_reuseFailAlloc_982_, 3, v_zpowFn_x3f_948_);
lean_ctor_set(v_reuseFailAlloc_982_, 4, v_semiringId_x3f_949_);
lean_ctor_set(v_reuseFailAlloc_982_, 5, v_commSemiringInst_950_);
lean_ctor_set(v_reuseFailAlloc_982_, 6, v_commRingInst_951_);
lean_ctor_set(v_reuseFailAlloc_982_, 7, v_noZeroDivInst_x3f_952_);
lean_ctor_set(v_reuseFailAlloc_982_, 8, v_fieldInst_x3f_953_);
lean_ctor_set(v_reuseFailAlloc_982_, 9, v_powIdentityInst_x3f_954_);
v___x_981_ = v_reuseFailAlloc_982_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
return v___x_981_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12(lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_){
_start:
{
lean_object* v___x_999_; 
v___x_999_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v___y_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_, v___y_993_, v___y_994_, v___y_995_, v___y_996_, v___y_997_);
if (lean_obj_tag(v___x_999_) == 0)
{
lean_object* v_a_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1033_; 
v_a_1000_ = lean_ctor_get(v___x_999_, 0);
v_isSharedCheck_1033_ = !lean_is_exclusive(v___x_999_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_1002_ = v___x_999_;
v_isShared_1003_ = v_isSharedCheck_1033_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_a_1000_);
lean_dec(v___x_999_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1033_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
lean_object* v_toRing_1004_; lean_object* v_powFn_x3f_1005_; 
v_toRing_1004_ = lean_ctor_get(v_a_1000_, 0);
lean_inc_ref(v_toRing_1004_);
lean_dec(v_a_1000_);
v_powFn_x3f_1005_ = lean_ctor_get(v_toRing_1004_, 10);
if (lean_obj_tag(v_powFn_x3f_1005_) == 1)
{
lean_object* v_val_1006_; lean_object* v___x_1008_; 
lean_inc_ref(v_powFn_x3f_1005_);
lean_dec_ref(v_toRing_1004_);
v_val_1006_ = lean_ctor_get(v_powFn_x3f_1005_, 0);
lean_inc(v_val_1006_);
lean_dec_ref_known(v_powFn_x3f_1005_, 1);
if (v_isShared_1003_ == 0)
{
lean_ctor_set(v___x_1002_, 0, v_val_1006_);
v___x_1008_ = v___x_1002_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1009_; 
v_reuseFailAlloc_1009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1009_, 0, v_val_1006_);
v___x_1008_ = v_reuseFailAlloc_1009_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
return v___x_1008_;
}
}
else
{
lean_object* v_type_1010_; lean_object* v_u_1011_; lean_object* v_semiringInst_1012_; lean_object* v___x_1013_; 
lean_del_object(v___x_1002_);
v_type_1010_ = lean_ctor_get(v_toRing_1004_, 1);
lean_inc_ref(v_type_1010_);
v_u_1011_ = lean_ctor_get(v_toRing_1004_, 2);
lean_inc(v_u_1011_);
v_semiringInst_1012_ = lean_ctor_get(v_toRing_1004_, 4);
lean_inc_ref(v_semiringInst_1012_);
lean_dec_ref(v_toRing_1004_);
v___x_1013_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkPowFn___at___00Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12_spec__15(v_u_1011_, v_type_1010_, v_semiringInst_1012_, v___y_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_, v___y_993_, v___y_994_, v___y_995_, v___y_996_, v___y_997_);
if (lean_obj_tag(v___x_1013_) == 0)
{
lean_object* v_a_1014_; lean_object* v___f_1015_; lean_object* v___x_1016_; 
v_a_1014_ = lean_ctor_get(v___x_1013_, 0);
lean_inc_n(v_a_1014_, 2);
lean_dec_ref_known(v___x_1013_, 1);
v___f_1015_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12___lam__0), 2, 1);
lean_closure_set(v___f_1015_, 0, v_a_1014_);
v___x_1016_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(v___f_1015_, v___y_987_, v___y_993_);
if (lean_obj_tag(v___x_1016_) == 0)
{
lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1023_; 
v_isSharedCheck_1023_ = !lean_is_exclusive(v___x_1016_);
if (v_isSharedCheck_1023_ == 0)
{
lean_object* v_unused_1024_; 
v_unused_1024_ = lean_ctor_get(v___x_1016_, 0);
lean_dec(v_unused_1024_);
v___x_1018_ = v___x_1016_;
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
else
{
lean_dec(v___x_1016_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1021_; 
if (v_isShared_1019_ == 0)
{
lean_ctor_set(v___x_1018_, 0, v_a_1014_);
v___x_1021_ = v___x_1018_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v_a_1014_);
v___x_1021_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
return v___x_1021_;
}
}
}
else
{
lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1032_; 
lean_dec(v_a_1014_);
v_a_1025_ = lean_ctor_get(v___x_1016_, 0);
v_isSharedCheck_1032_ = !lean_is_exclusive(v___x_1016_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1027_ = v___x_1016_;
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v___x_1016_);
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
else
{
return v___x_1013_;
}
}
}
}
else
{
lean_object* v_a_1034_; lean_object* v___x_1036_; uint8_t v_isShared_1037_; uint8_t v_isSharedCheck_1041_; 
v_a_1034_ = lean_ctor_get(v___x_999_, 0);
v_isSharedCheck_1041_ = !lean_is_exclusive(v___x_999_);
if (v_isSharedCheck_1041_ == 0)
{
v___x_1036_ = v___x_999_;
v_isShared_1037_ = v_isSharedCheck_1041_;
goto v_resetjp_1035_;
}
else
{
lean_inc(v_a_1034_);
lean_dec(v___x_999_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12___boxed(lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_){
_start:
{
lean_object* v_res_1054_; 
v_res_1054_ = l_Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12(v___y_1042_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_);
lean_dec(v___y_1052_);
lean_dec_ref(v___y_1051_);
lean_dec(v___y_1050_);
lean_dec_ref(v___y_1049_);
lean_dec(v___y_1048_);
lean_dec_ref(v___y_1047_);
lean_dec(v___y_1046_);
lean_dec_ref(v___y_1045_);
lean_dec(v___y_1044_);
lean_dec(v___y_1043_);
lean_dec_ref(v___y_1042_);
return v_res_1054_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9(lean_object* v_pw_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_){
_start:
{
lean_object* v_x_1068_; lean_object* v_k_1069_; lean_object* v___y_1071_; lean_object* v_a_1072_; lean_object* v___x_1086_; lean_object* v___x_1087_; 
v_x_1068_ = lean_ctor_get(v_pw_1055_, 0);
lean_inc(v_x_1068_);
v_k_1069_ = lean_ctor_get(v_pw_1055_, 1);
lean_inc(v_k_1069_);
lean_dec_ref(v_pw_1055_);
v___x_1086_ = l_Lean_instInhabitedExpr;
v___x_1087_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRingState___redArg(v___y_1056_, v___y_1057_, v___y_1065_);
if (lean_obj_tag(v___x_1087_) == 0)
{
lean_object* v_a_1088_; lean_object* v___x_1090_; uint8_t v_isShared_1091_; uint8_t v_isSharedCheck_1104_; 
v_a_1088_ = lean_ctor_get(v___x_1087_, 0);
v_isSharedCheck_1104_ = !lean_is_exclusive(v___x_1087_);
if (v_isSharedCheck_1104_ == 0)
{
v___x_1090_ = v___x_1087_;
v_isShared_1091_ = v_isSharedCheck_1104_;
goto v_resetjp_1089_;
}
else
{
lean_inc(v_a_1088_);
lean_dec(v___x_1087_);
v___x_1090_ = lean_box(0);
v_isShared_1091_ = v_isSharedCheck_1104_;
goto v_resetjp_1089_;
}
v_resetjp_1089_:
{
lean_object* v_toRingState_1092_; lean_object* v_vars_1093_; lean_object* v_size_1094_; uint8_t v___x_1095_; 
v_toRingState_1092_ = lean_ctor_get(v_a_1088_, 0);
lean_inc_ref(v_toRingState_1092_);
lean_dec(v_a_1088_);
v_vars_1093_ = lean_ctor_get(v_toRingState_1092_, 0);
lean_inc_ref(v_vars_1093_);
lean_dec_ref(v_toRingState_1092_);
v_size_1094_ = lean_ctor_get(v_vars_1093_, 2);
v___x_1095_ = lean_nat_dec_lt(v_x_1068_, v_size_1094_);
if (v___x_1095_ == 0)
{
lean_object* v___x_1096_; lean_object* v___x_1098_; 
lean_dec_ref(v_vars_1093_);
lean_dec(v_x_1068_);
v___x_1096_ = l_outOfBounds___redArg(v___x_1086_);
lean_inc(v___x_1096_);
if (v_isShared_1091_ == 0)
{
lean_ctor_set(v___x_1090_, 0, v___x_1096_);
v___x_1098_ = v___x_1090_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v___x_1096_);
v___x_1098_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
v___y_1071_ = v___x_1098_;
v_a_1072_ = v___x_1096_;
goto v___jp_1070_;
}
}
else
{
lean_object* v___x_1100_; lean_object* v___x_1102_; 
v___x_1100_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1086_, v_vars_1093_, v_x_1068_);
lean_dec(v_x_1068_);
lean_dec_ref(v_vars_1093_);
lean_inc(v___x_1100_);
if (v_isShared_1091_ == 0)
{
lean_ctor_set(v___x_1090_, 0, v___x_1100_);
v___x_1102_ = v___x_1090_;
goto v_reusejp_1101_;
}
else
{
lean_object* v_reuseFailAlloc_1103_; 
v_reuseFailAlloc_1103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1103_, 0, v___x_1100_);
v___x_1102_ = v_reuseFailAlloc_1103_;
goto v_reusejp_1101_;
}
v_reusejp_1101_:
{
v___y_1071_ = v___x_1102_;
v_a_1072_ = v___x_1100_;
goto v___jp_1070_;
}
}
}
}
else
{
lean_object* v_a_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1112_; 
lean_dec(v_k_1069_);
lean_dec(v_x_1068_);
v_a_1105_ = lean_ctor_get(v___x_1087_, 0);
v_isSharedCheck_1112_ = !lean_is_exclusive(v___x_1087_);
if (v_isSharedCheck_1112_ == 0)
{
v___x_1107_ = v___x_1087_;
v_isShared_1108_ = v_isSharedCheck_1112_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_a_1105_);
lean_dec(v___x_1087_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1112_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v___x_1110_; 
if (v_isShared_1108_ == 0)
{
v___x_1110_ = v___x_1107_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v_a_1105_);
v___x_1110_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
return v___x_1110_;
}
}
}
v___jp_1070_:
{
lean_object* v___x_1073_; uint8_t v___x_1074_; 
v___x_1073_ = lean_unsigned_to_nat(1u);
v___x_1074_ = lean_nat_dec_eq(v_k_1069_, v___x_1073_);
if (v___x_1074_ == 0)
{
lean_object* v___x_1075_; 
lean_dec_ref(v___y_1071_);
v___x_1075_ = l_Lean_Meta_Sym_Arith_getPowFn___at___00Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9_spec__12(v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_);
if (lean_obj_tag(v___x_1075_) == 0)
{
lean_object* v_a_1076_; lean_object* v___x_1078_; uint8_t v_isShared_1079_; uint8_t v_isSharedCheck_1085_; 
v_a_1076_ = lean_ctor_get(v___x_1075_, 0);
v_isSharedCheck_1085_ = !lean_is_exclusive(v___x_1075_);
if (v_isSharedCheck_1085_ == 0)
{
v___x_1078_ = v___x_1075_;
v_isShared_1079_ = v_isSharedCheck_1085_;
goto v_resetjp_1077_;
}
else
{
lean_inc(v_a_1076_);
lean_dec(v___x_1075_);
v___x_1078_ = lean_box(0);
v_isShared_1079_ = v_isSharedCheck_1085_;
goto v_resetjp_1077_;
}
v_resetjp_1077_:
{
lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1083_; 
v___x_1080_ = l_Lean_mkNatLit(v_k_1069_);
v___x_1081_ = l_Lean_mkAppB(v_a_1076_, v_a_1072_, v___x_1080_);
if (v_isShared_1079_ == 0)
{
lean_ctor_set(v___x_1078_, 0, v___x_1081_);
v___x_1083_ = v___x_1078_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1084_; 
v_reuseFailAlloc_1084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1084_, 0, v___x_1081_);
v___x_1083_ = v_reuseFailAlloc_1084_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
return v___x_1083_;
}
}
}
else
{
lean_dec_ref(v_a_1072_);
lean_dec(v_k_1069_);
return v___x_1075_;
}
}
else
{
lean_dec_ref(v_a_1072_);
lean_dec(v_k_1069_);
return v___y_1071_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9___boxed(lean_object* v_pw_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_){
_start:
{
lean_object* v_res_1126_; 
v_res_1126_ = l_Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9(v_pw_1113_, v___y_1114_, v___y_1115_, v___y_1116_, v___y_1117_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_);
lean_dec(v___y_1124_);
lean_dec_ref(v___y_1123_);
lean_dec(v___y_1122_);
lean_dec_ref(v___y_1121_);
lean_dec(v___y_1120_);
lean_dec_ref(v___y_1119_);
lean_dec(v___y_1118_);
lean_dec_ref(v___y_1117_);
lean_dec(v___y_1116_);
lean_dec(v___y_1115_);
lean_dec_ref(v___y_1114_);
return v_res_1126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___lam__0(lean_object* v_a_1127_, lean_object* v_s_1128_){
_start:
{
lean_object* v_toRing_1129_; lean_object* v_invFn_x3f_1130_; lean_object* v_divFn_x3f_1131_; lean_object* v_zpowFn_x3f_1132_; lean_object* v_semiringId_x3f_1133_; lean_object* v_commSemiringInst_1134_; lean_object* v_commRingInst_1135_; lean_object* v_noZeroDivInst_x3f_1136_; lean_object* v_fieldInst_x3f_1137_; lean_object* v_powIdentityInst_x3f_1138_; lean_object* v___x_1140_; uint8_t v_isShared_1141_; uint8_t v_isSharedCheck_1170_; 
v_toRing_1129_ = lean_ctor_get(v_s_1128_, 0);
v_invFn_x3f_1130_ = lean_ctor_get(v_s_1128_, 1);
v_divFn_x3f_1131_ = lean_ctor_get(v_s_1128_, 2);
v_zpowFn_x3f_1132_ = lean_ctor_get(v_s_1128_, 3);
v_semiringId_x3f_1133_ = lean_ctor_get(v_s_1128_, 4);
v_commSemiringInst_1134_ = lean_ctor_get(v_s_1128_, 5);
v_commRingInst_1135_ = lean_ctor_get(v_s_1128_, 6);
v_noZeroDivInst_x3f_1136_ = lean_ctor_get(v_s_1128_, 7);
v_fieldInst_x3f_1137_ = lean_ctor_get(v_s_1128_, 8);
v_powIdentityInst_x3f_1138_ = lean_ctor_get(v_s_1128_, 9);
v_isSharedCheck_1170_ = !lean_is_exclusive(v_s_1128_);
if (v_isSharedCheck_1170_ == 0)
{
v___x_1140_ = v_s_1128_;
v_isShared_1141_ = v_isSharedCheck_1170_;
goto v_resetjp_1139_;
}
else
{
lean_inc(v_powIdentityInst_x3f_1138_);
lean_inc(v_fieldInst_x3f_1137_);
lean_inc(v_noZeroDivInst_x3f_1136_);
lean_inc(v_commRingInst_1135_);
lean_inc(v_commSemiringInst_1134_);
lean_inc(v_semiringId_x3f_1133_);
lean_inc(v_zpowFn_x3f_1132_);
lean_inc(v_divFn_x3f_1131_);
lean_inc(v_invFn_x3f_1130_);
lean_inc(v_toRing_1129_);
lean_dec(v_s_1128_);
v___x_1140_ = lean_box(0);
v_isShared_1141_ = v_isSharedCheck_1170_;
goto v_resetjp_1139_;
}
v_resetjp_1139_:
{
lean_object* v_id_1142_; lean_object* v_type_1143_; lean_object* v_u_1144_; lean_object* v_ringInst_1145_; lean_object* v_semiringInst_1146_; lean_object* v_charInst_x3f_1147_; uint8_t v_symbolicChar_1148_; lean_object* v_addFn_x3f_1149_; lean_object* v_subFn_x3f_1150_; lean_object* v_negFn_x3f_1151_; lean_object* v_powFn_x3f_1152_; lean_object* v_intCastFn_x3f_1153_; lean_object* v_natCastFn_x3f_1154_; lean_object* v_natSMulFn_x3f_1155_; lean_object* v_intSMulFn_x3f_1156_; lean_object* v_one_x3f_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1168_; 
v_id_1142_ = lean_ctor_get(v_toRing_1129_, 0);
v_type_1143_ = lean_ctor_get(v_toRing_1129_, 1);
v_u_1144_ = lean_ctor_get(v_toRing_1129_, 2);
v_ringInst_1145_ = lean_ctor_get(v_toRing_1129_, 3);
v_semiringInst_1146_ = lean_ctor_get(v_toRing_1129_, 4);
v_charInst_x3f_1147_ = lean_ctor_get(v_toRing_1129_, 5);
v_symbolicChar_1148_ = lean_ctor_get_uint8(v_toRing_1129_, sizeof(void*)*16);
v_addFn_x3f_1149_ = lean_ctor_get(v_toRing_1129_, 6);
v_subFn_x3f_1150_ = lean_ctor_get(v_toRing_1129_, 8);
v_negFn_x3f_1151_ = lean_ctor_get(v_toRing_1129_, 9);
v_powFn_x3f_1152_ = lean_ctor_get(v_toRing_1129_, 10);
v_intCastFn_x3f_1153_ = lean_ctor_get(v_toRing_1129_, 11);
v_natCastFn_x3f_1154_ = lean_ctor_get(v_toRing_1129_, 12);
v_natSMulFn_x3f_1155_ = lean_ctor_get(v_toRing_1129_, 13);
v_intSMulFn_x3f_1156_ = lean_ctor_get(v_toRing_1129_, 14);
v_one_x3f_1157_ = lean_ctor_get(v_toRing_1129_, 15);
v_isSharedCheck_1168_ = !lean_is_exclusive(v_toRing_1129_);
if (v_isSharedCheck_1168_ == 0)
{
lean_object* v_unused_1169_; 
v_unused_1169_ = lean_ctor_get(v_toRing_1129_, 7);
lean_dec(v_unused_1169_);
v___x_1159_ = v_toRing_1129_;
v_isShared_1160_ = v_isSharedCheck_1168_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_one_x3f_1157_);
lean_inc(v_intSMulFn_x3f_1156_);
lean_inc(v_natSMulFn_x3f_1155_);
lean_inc(v_natCastFn_x3f_1154_);
lean_inc(v_intCastFn_x3f_1153_);
lean_inc(v_powFn_x3f_1152_);
lean_inc(v_negFn_x3f_1151_);
lean_inc(v_subFn_x3f_1150_);
lean_inc(v_addFn_x3f_1149_);
lean_inc(v_charInst_x3f_1147_);
lean_inc(v_semiringInst_1146_);
lean_inc(v_ringInst_1145_);
lean_inc(v_u_1144_);
lean_inc(v_type_1143_);
lean_inc(v_id_1142_);
lean_dec(v_toRing_1129_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1168_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v___x_1161_; lean_object* v___x_1163_; 
v___x_1161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1161_, 0, v_a_1127_);
if (v_isShared_1160_ == 0)
{
lean_ctor_set(v___x_1159_, 7, v___x_1161_);
v___x_1163_ = v___x_1159_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v_id_1142_);
lean_ctor_set(v_reuseFailAlloc_1167_, 1, v_type_1143_);
lean_ctor_set(v_reuseFailAlloc_1167_, 2, v_u_1144_);
lean_ctor_set(v_reuseFailAlloc_1167_, 3, v_ringInst_1145_);
lean_ctor_set(v_reuseFailAlloc_1167_, 4, v_semiringInst_1146_);
lean_ctor_set(v_reuseFailAlloc_1167_, 5, v_charInst_x3f_1147_);
lean_ctor_set(v_reuseFailAlloc_1167_, 6, v_addFn_x3f_1149_);
lean_ctor_set(v_reuseFailAlloc_1167_, 7, v___x_1161_);
lean_ctor_set(v_reuseFailAlloc_1167_, 8, v_subFn_x3f_1150_);
lean_ctor_set(v_reuseFailAlloc_1167_, 9, v_negFn_x3f_1151_);
lean_ctor_set(v_reuseFailAlloc_1167_, 10, v_powFn_x3f_1152_);
lean_ctor_set(v_reuseFailAlloc_1167_, 11, v_intCastFn_x3f_1153_);
lean_ctor_set(v_reuseFailAlloc_1167_, 12, v_natCastFn_x3f_1154_);
lean_ctor_set(v_reuseFailAlloc_1167_, 13, v_natSMulFn_x3f_1155_);
lean_ctor_set(v_reuseFailAlloc_1167_, 14, v_intSMulFn_x3f_1156_);
lean_ctor_set(v_reuseFailAlloc_1167_, 15, v_one_x3f_1157_);
lean_ctor_set_uint8(v_reuseFailAlloc_1167_, sizeof(void*)*16, v_symbolicChar_1148_);
v___x_1163_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
lean_object* v___x_1165_; 
if (v_isShared_1141_ == 0)
{
lean_ctor_set(v___x_1140_, 0, v___x_1163_);
v___x_1165_ = v___x_1140_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v___x_1163_);
lean_ctor_set(v_reuseFailAlloc_1166_, 1, v_invFn_x3f_1130_);
lean_ctor_set(v_reuseFailAlloc_1166_, 2, v_divFn_x3f_1131_);
lean_ctor_set(v_reuseFailAlloc_1166_, 3, v_zpowFn_x3f_1132_);
lean_ctor_set(v_reuseFailAlloc_1166_, 4, v_semiringId_x3f_1133_);
lean_ctor_set(v_reuseFailAlloc_1166_, 5, v_commSemiringInst_1134_);
lean_ctor_set(v_reuseFailAlloc_1166_, 6, v_commRingInst_1135_);
lean_ctor_set(v_reuseFailAlloc_1166_, 7, v_noZeroDivInst_x3f_1136_);
lean_ctor_set(v_reuseFailAlloc_1166_, 8, v_fieldInst_x3f_1137_);
lean_ctor_set(v_reuseFailAlloc_1166_, 9, v_powIdentityInst_x3f_1138_);
v___x_1165_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
return v___x_1165_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3(lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_){
_start:
{
lean_object* v___x_1194_; 
v___x_1194_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v___y_1182_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_);
if (lean_obj_tag(v___x_1194_) == 0)
{
lean_object* v_a_1195_; lean_object* v___x_1197_; uint8_t v_isShared_1198_; uint8_t v_isSharedCheck_1238_; 
v_a_1195_ = lean_ctor_get(v___x_1194_, 0);
v_isSharedCheck_1238_ = !lean_is_exclusive(v___x_1194_);
if (v_isSharedCheck_1238_ == 0)
{
v___x_1197_ = v___x_1194_;
v_isShared_1198_ = v_isSharedCheck_1238_;
goto v_resetjp_1196_;
}
else
{
lean_inc(v_a_1195_);
lean_dec(v___x_1194_);
v___x_1197_ = lean_box(0);
v_isShared_1198_ = v_isSharedCheck_1238_;
goto v_resetjp_1196_;
}
v_resetjp_1196_:
{
lean_object* v_toRing_1199_; lean_object* v_mulFn_x3f_1200_; 
v_toRing_1199_ = lean_ctor_get(v_a_1195_, 0);
lean_inc_ref(v_toRing_1199_);
lean_dec(v_a_1195_);
v_mulFn_x3f_1200_ = lean_ctor_get(v_toRing_1199_, 7);
if (lean_obj_tag(v_mulFn_x3f_1200_) == 1)
{
lean_object* v_val_1201_; lean_object* v___x_1203_; 
lean_inc_ref(v_mulFn_x3f_1200_);
lean_dec_ref(v_toRing_1199_);
v_val_1201_ = lean_ctor_get(v_mulFn_x3f_1200_, 0);
lean_inc(v_val_1201_);
lean_dec_ref_known(v_mulFn_x3f_1200_, 1);
if (v_isShared_1198_ == 0)
{
lean_ctor_set(v___x_1197_, 0, v_val_1201_);
v___x_1203_ = v___x_1197_;
goto v_reusejp_1202_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v_val_1201_);
v___x_1203_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1202_;
}
v_reusejp_1202_:
{
return v___x_1203_;
}
}
else
{
lean_object* v_type_1205_; lean_object* v_u_1206_; lean_object* v_semiringInst_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v_expectedInst_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; 
lean_del_object(v___x_1197_);
v_type_1205_ = lean_ctor_get(v_toRing_1199_, 1);
lean_inc_ref_n(v_type_1205_, 3);
v_u_1206_ = lean_ctor_get(v_toRing_1199_, 2);
lean_inc_n(v_u_1206_, 2);
v_semiringInst_1207_ = lean_ctor_get(v_toRing_1199_, 4);
lean_inc_ref(v_semiringInst_1207_);
lean_dec_ref(v_toRing_1199_);
v___x_1208_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___closed__1));
v___x_1209_ = lean_box(0);
v___x_1210_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1210_, 0, v_u_1206_);
lean_ctor_set(v___x_1210_, 1, v___x_1209_);
lean_inc_ref(v___x_1210_);
v___x_1211_ = l_Lean_mkConst(v___x_1208_, v___x_1210_);
v___x_1212_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___closed__3));
v___x_1213_ = l_Lean_mkConst(v___x_1212_, v___x_1210_);
v___x_1214_ = l_Lean_mkAppB(v___x_1213_, v_type_1205_, v_semiringInst_1207_);
v_expectedInst_1215_ = l_Lean_mkAppB(v___x_1211_, v_type_1205_, v___x_1214_);
v___x_1216_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___closed__4));
v___x_1217_ = ((lean_object*)(l_Int_Internal_Linear_Poly_isNonlinear___redArg___closed__2));
v___x_1218_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___at___00Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3_spec__7(v_type_1205_, v_u_1206_, v___x_1216_, v___x_1217_, v_expectedInst_1215_, v___y_1182_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_);
if (lean_obj_tag(v___x_1218_) == 0)
{
lean_object* v_a_1219_; lean_object* v___f_1220_; lean_object* v___x_1221_; 
v_a_1219_ = lean_ctor_get(v___x_1218_, 0);
lean_inc_n(v_a_1219_, 2);
lean_dec_ref_known(v___x_1218_, 1);
v___f_1220_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___lam__0), 2, 1);
lean_closure_set(v___f_1220_, 0, v_a_1219_);
v___x_1221_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(v___f_1220_, v___y_1182_, v___y_1188_);
if (lean_obj_tag(v___x_1221_) == 0)
{
lean_object* v___x_1223_; uint8_t v_isShared_1224_; uint8_t v_isSharedCheck_1228_; 
v_isSharedCheck_1228_ = !lean_is_exclusive(v___x_1221_);
if (v_isSharedCheck_1228_ == 0)
{
lean_object* v_unused_1229_; 
v_unused_1229_ = lean_ctor_get(v___x_1221_, 0);
lean_dec(v_unused_1229_);
v___x_1223_ = v___x_1221_;
v_isShared_1224_ = v_isSharedCheck_1228_;
goto v_resetjp_1222_;
}
else
{
lean_dec(v___x_1221_);
v___x_1223_ = lean_box(0);
v_isShared_1224_ = v_isSharedCheck_1228_;
goto v_resetjp_1222_;
}
v_resetjp_1222_:
{
lean_object* v___x_1226_; 
if (v_isShared_1224_ == 0)
{
lean_ctor_set(v___x_1223_, 0, v_a_1219_);
v___x_1226_ = v___x_1223_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1227_; 
v_reuseFailAlloc_1227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1227_, 0, v_a_1219_);
v___x_1226_ = v_reuseFailAlloc_1227_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
return v___x_1226_;
}
}
}
else
{
lean_object* v_a_1230_; lean_object* v___x_1232_; uint8_t v_isShared_1233_; uint8_t v_isSharedCheck_1237_; 
lean_dec(v_a_1219_);
v_a_1230_ = lean_ctor_get(v___x_1221_, 0);
v_isSharedCheck_1237_ = !lean_is_exclusive(v___x_1221_);
if (v_isSharedCheck_1237_ == 0)
{
v___x_1232_ = v___x_1221_;
v_isShared_1233_ = v_isSharedCheck_1237_;
goto v_resetjp_1231_;
}
else
{
lean_inc(v_a_1230_);
lean_dec(v___x_1221_);
v___x_1232_ = lean_box(0);
v_isShared_1233_ = v_isSharedCheck_1237_;
goto v_resetjp_1231_;
}
v_resetjp_1231_:
{
lean_object* v___x_1235_; 
if (v_isShared_1233_ == 0)
{
v___x_1235_ = v___x_1232_;
goto v_reusejp_1234_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v_a_1230_);
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
return v___x_1218_;
}
}
}
}
else
{
lean_object* v_a_1239_; lean_object* v___x_1241_; uint8_t v_isShared_1242_; uint8_t v_isSharedCheck_1246_; 
v_a_1239_ = lean_ctor_get(v___x_1194_, 0);
v_isSharedCheck_1246_ = !lean_is_exclusive(v___x_1194_);
if (v_isSharedCheck_1246_ == 0)
{
v___x_1241_ = v___x_1194_;
v_isShared_1242_ = v_isSharedCheck_1246_;
goto v_resetjp_1240_;
}
else
{
lean_inc(v_a_1239_);
lean_dec(v___x_1194_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3___boxed(lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_){
_start:
{
lean_object* v_res_1259_; 
v_res_1259_ = l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3(v___y_1247_, v___y_1248_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_);
lean_dec(v___y_1257_);
lean_dec_ref(v___y_1256_);
lean_dec(v___y_1255_);
lean_dec_ref(v___y_1254_);
lean_dec(v___y_1253_);
lean_dec_ref(v___y_1252_);
lean_dec(v___y_1251_);
lean_dec_ref(v___y_1250_);
lean_dec(v___y_1249_);
lean_dec(v___y_1248_);
lean_dec_ref(v___y_1247_);
return v_res_1259_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denoteMon_go___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__10(lean_object* v_mn_1260_, lean_object* v_acc_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_){
_start:
{
if (lean_obj_tag(v_mn_1260_) == 0)
{
lean_object* v___x_1274_; 
v___x_1274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1274_, 0, v_acc_1261_);
return v___x_1274_;
}
else
{
lean_object* v_p_1275_; lean_object* v_m_1276_; lean_object* v___x_1277_; 
v_p_1275_ = lean_ctor_get(v_mn_1260_, 0);
lean_inc_ref(v_p_1275_);
v_m_1276_ = lean_ctor_get(v_mn_1260_, 1);
lean_inc(v_m_1276_);
lean_dec_ref_known(v_mn_1260_, 2);
v___x_1277_ = l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3(v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_);
if (lean_obj_tag(v___x_1277_) == 0)
{
lean_object* v_a_1278_; lean_object* v___x_1279_; 
v_a_1278_ = lean_ctor_get(v___x_1277_, 0);
lean_inc(v_a_1278_);
lean_dec_ref_known(v___x_1277_, 1);
v___x_1279_ = l_Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9(v_p_1275_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_);
if (lean_obj_tag(v___x_1279_) == 0)
{
lean_object* v_a_1280_; lean_object* v___x_1281_; 
v_a_1280_ = lean_ctor_get(v___x_1279_, 0);
lean_inc(v_a_1280_);
lean_dec_ref_known(v___x_1279_, 1);
v___x_1281_ = l_Lean_mkAppB(v_a_1278_, v_acc_1261_, v_a_1280_);
v_mn_1260_ = v_m_1276_;
v_acc_1261_ = v___x_1281_;
goto _start;
}
else
{
lean_dec(v_a_1278_);
lean_dec(v_m_1276_);
lean_dec_ref(v_acc_1261_);
return v___x_1279_;
}
}
else
{
lean_dec(v_m_1276_);
lean_dec_ref(v_p_1275_);
lean_dec_ref(v_acc_1261_);
return v___x_1277_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denoteMon_go___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__10___boxed(lean_object* v_mn_1283_, lean_object* v_acc_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_){
_start:
{
lean_object* v_res_1297_; 
v_res_1297_ = l___private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denoteMon_go___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__10(v_mn_1283_, v_acc_1284_, v___y_1285_, v___y_1286_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_);
lean_dec(v___y_1295_);
lean_dec_ref(v___y_1294_);
lean_dec(v___y_1293_);
lean_dec_ref(v___y_1292_);
lean_dec(v___y_1291_);
lean_dec_ref(v___y_1290_);
lean_dec(v___y_1289_);
lean_dec_ref(v___y_1288_);
lean_dec(v___y_1287_);
lean_dec(v___y_1286_);
lean_dec_ref(v___y_1285_);
return v_res_1297_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4___closed__0(void){
_start:
{
lean_object* v___x_1298_; lean_object* v___x_1299_; 
v___x_1298_ = lean_unsigned_to_nat(1u);
v___x_1299_ = lean_nat_to_int(v___x_1298_);
return v___x_1299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4(lean_object* v_mn_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_){
_start:
{
if (lean_obj_tag(v_mn_1300_) == 0)
{
lean_object* v___x_1313_; lean_object* v___x_1314_; 
v___x_1313_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4___closed__0, &l_Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4___closed__0_once, _init_l_Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4___closed__0);
v___x_1314_ = l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0(v___x_1313_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_);
return v___x_1314_;
}
else
{
lean_object* v_p_1315_; lean_object* v_m_1316_; lean_object* v___x_1317_; 
v_p_1315_ = lean_ctor_get(v_mn_1300_, 0);
lean_inc_ref(v_p_1315_);
v_m_1316_ = lean_ctor_get(v_mn_1300_, 1);
lean_inc(v_m_1316_);
lean_dec_ref_known(v_mn_1300_, 2);
v___x_1317_ = l_Lean_Meta_Sym_Arith_denotePower___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__9(v_p_1315_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_);
if (lean_obj_tag(v___x_1317_) == 0)
{
lean_object* v_a_1318_; lean_object* v___x_1319_; 
v_a_1318_ = lean_ctor_get(v___x_1317_, 0);
lean_inc(v_a_1318_);
lean_dec_ref_known(v___x_1317_, 1);
v___x_1319_ = l___private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denoteMon_go___at___00Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4_spec__10(v_m_1316_, v_a_1318_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_);
return v___x_1319_;
}
else
{
lean_dec(v_m_1316_);
return v___x_1317_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4___boxed(lean_object* v_mn_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_){
_start:
{
lean_object* v_res_1333_; 
v_res_1333_ = l_Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4(v_mn_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_, v___y_1328_, v___y_1329_, v___y_1330_, v___y_1331_);
lean_dec(v___y_1331_);
lean_dec_ref(v___y_1330_);
lean_dec(v___y_1329_);
lean_dec_ref(v___y_1328_);
lean_dec(v___y_1327_);
lean_dec_ref(v___y_1326_);
lean_dec(v___y_1325_);
lean_dec_ref(v___y_1324_);
lean_dec(v___y_1323_);
lean_dec(v___y_1322_);
lean_dec_ref(v___y_1321_);
return v_res_1333_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1(lean_object* v_k_1334_, lean_object* v_mn_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_){
_start:
{
lean_object* v___x_1348_; uint8_t v___x_1349_; 
v___x_1348_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4___closed__0, &l_Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4___closed__0_once, _init_l_Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4___closed__0);
v___x_1349_ = lean_int_dec_eq(v_k_1334_, v___x_1348_);
if (v___x_1349_ == 0)
{
lean_object* v___x_1350_; 
v___x_1350_ = l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__3(v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_, v___y_1346_);
if (lean_obj_tag(v___x_1350_) == 0)
{
lean_object* v_a_1351_; lean_object* v___x_1352_; 
v_a_1351_ = lean_ctor_get(v___x_1350_, 0);
lean_inc(v_a_1351_);
lean_dec_ref_known(v___x_1350_, 1);
v___x_1352_ = l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0(v_k_1334_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_, v___y_1346_);
if (lean_obj_tag(v___x_1352_) == 0)
{
lean_object* v_a_1353_; lean_object* v___x_1354_; 
v_a_1353_ = lean_ctor_get(v___x_1352_, 0);
lean_inc(v_a_1353_);
lean_dec_ref_known(v___x_1352_, 1);
v___x_1354_ = l_Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4(v_mn_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_, v___y_1346_);
if (lean_obj_tag(v___x_1354_) == 0)
{
lean_object* v_a_1355_; lean_object* v___x_1357_; uint8_t v_isShared_1358_; uint8_t v_isSharedCheck_1363_; 
v_a_1355_ = lean_ctor_get(v___x_1354_, 0);
v_isSharedCheck_1363_ = !lean_is_exclusive(v___x_1354_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1357_ = v___x_1354_;
v_isShared_1358_ = v_isSharedCheck_1363_;
goto v_resetjp_1356_;
}
else
{
lean_inc(v_a_1355_);
lean_dec(v___x_1354_);
v___x_1357_ = lean_box(0);
v_isShared_1358_ = v_isSharedCheck_1363_;
goto v_resetjp_1356_;
}
v_resetjp_1356_:
{
lean_object* v___x_1359_; lean_object* v___x_1361_; 
v___x_1359_ = l_Lean_mkAppB(v_a_1351_, v_a_1353_, v_a_1355_);
if (v_isShared_1358_ == 0)
{
lean_ctor_set(v___x_1357_, 0, v___x_1359_);
v___x_1361_ = v___x_1357_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v___x_1359_);
v___x_1361_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1360_;
}
v_reusejp_1360_:
{
return v___x_1361_;
}
}
}
else
{
lean_dec(v_a_1353_);
lean_dec(v_a_1351_);
return v___x_1354_;
}
}
else
{
lean_dec(v_a_1351_);
lean_dec(v_mn_1335_);
return v___x_1352_;
}
}
else
{
lean_dec(v_mn_1335_);
return v___x_1350_;
}
}
else
{
lean_object* v___x_1364_; 
v___x_1364_ = l_Lean_Meta_Sym_Arith_denoteMon___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1_spec__4(v_mn_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_, v___y_1346_);
return v___x_1364_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1___boxed(lean_object* v_k_1365_, lean_object* v_mn_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_){
_start:
{
lean_object* v_res_1379_; 
v_res_1379_ = l___private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1(v_k_1365_, v_mn_1366_, v___y_1367_, v___y_1368_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_, v___y_1374_, v___y_1375_, v___y_1376_, v___y_1377_);
lean_dec(v___y_1377_);
lean_dec_ref(v___y_1376_);
lean_dec(v___y_1375_);
lean_dec_ref(v___y_1374_);
lean_dec(v___y_1373_);
lean_dec_ref(v___y_1372_);
lean_dec(v___y_1371_);
lean_dec_ref(v___y_1370_);
lean_dec(v___y_1369_);
lean_dec(v___y_1368_);
lean_dec_ref(v___y_1367_);
lean_dec(v_k_1365_);
return v_res_1379_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2(lean_object* v_p_1380_, lean_object* v_acc_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_){
_start:
{
if (lean_obj_tag(v_p_1380_) == 0)
{
lean_object* v_k_1394_; lean_object* v___x_1396_; uint8_t v_isShared_1397_; uint8_t v_isSharedCheck_1415_; 
v_k_1394_ = lean_ctor_get(v_p_1380_, 0);
v_isSharedCheck_1415_ = !lean_is_exclusive(v_p_1380_);
if (v_isSharedCheck_1415_ == 0)
{
v___x_1396_ = v_p_1380_;
v_isShared_1397_ = v_isSharedCheck_1415_;
goto v_resetjp_1395_;
}
else
{
lean_inc(v_k_1394_);
lean_dec(v_p_1380_);
v___x_1396_ = lean_box(0);
v_isShared_1397_ = v_isSharedCheck_1415_;
goto v_resetjp_1395_;
}
v_resetjp_1395_:
{
lean_object* v___x_1398_; uint8_t v___x_1399_; 
v___x_1398_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__4, &l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__4_once, _init_l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0___closed__4);
v___x_1399_ = lean_int_dec_eq(v_k_1394_, v___x_1398_);
if (v___x_1399_ == 0)
{
lean_object* v___x_1400_; 
lean_del_object(v___x_1396_);
v___x_1400_ = l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6(v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_, v___y_1386_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_);
if (lean_obj_tag(v___x_1400_) == 0)
{
lean_object* v_a_1401_; lean_object* v___x_1402_; 
v_a_1401_ = lean_ctor_get(v___x_1400_, 0);
lean_inc(v_a_1401_);
lean_dec_ref_known(v___x_1400_, 1);
v___x_1402_ = l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0(v_k_1394_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_, v___y_1386_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_);
lean_dec(v_k_1394_);
if (lean_obj_tag(v___x_1402_) == 0)
{
lean_object* v_a_1403_; lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1411_; 
v_a_1403_ = lean_ctor_get(v___x_1402_, 0);
v_isSharedCheck_1411_ = !lean_is_exclusive(v___x_1402_);
if (v_isSharedCheck_1411_ == 0)
{
v___x_1405_ = v___x_1402_;
v_isShared_1406_ = v_isSharedCheck_1411_;
goto v_resetjp_1404_;
}
else
{
lean_inc(v_a_1403_);
lean_dec(v___x_1402_);
v___x_1405_ = lean_box(0);
v_isShared_1406_ = v_isSharedCheck_1411_;
goto v_resetjp_1404_;
}
v_resetjp_1404_:
{
lean_object* v___x_1407_; lean_object* v___x_1409_; 
v___x_1407_ = l_Lean_mkAppB(v_a_1401_, v_acc_1381_, v_a_1403_);
if (v_isShared_1406_ == 0)
{
lean_ctor_set(v___x_1405_, 0, v___x_1407_);
v___x_1409_ = v___x_1405_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v___x_1407_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
}
}
}
else
{
lean_dec(v_a_1401_);
lean_dec_ref(v_acc_1381_);
return v___x_1402_;
}
}
else
{
lean_dec(v_k_1394_);
lean_dec_ref(v_acc_1381_);
return v___x_1400_;
}
}
else
{
lean_object* v___x_1413_; 
lean_dec(v_k_1394_);
if (v_isShared_1397_ == 0)
{
lean_ctor_set(v___x_1396_, 0, v_acc_1381_);
v___x_1413_ = v___x_1396_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v_acc_1381_);
v___x_1413_ = v_reuseFailAlloc_1414_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
return v___x_1413_;
}
}
}
}
else
{
lean_object* v_k_1416_; lean_object* v_v_1417_; lean_object* v_p_1418_; lean_object* v___x_1419_; 
v_k_1416_ = lean_ctor_get(v_p_1380_, 0);
lean_inc(v_k_1416_);
v_v_1417_ = lean_ctor_get(v_p_1380_, 1);
lean_inc(v_v_1417_);
v_p_1418_ = lean_ctor_get(v_p_1380_, 2);
lean_inc_ref(v_p_1418_);
lean_dec_ref_known(v_p_1380_, 3);
v___x_1419_ = l_Lean_Meta_Sym_Arith_getAddFn___at___00__private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2_spec__6(v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_, v___y_1386_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_);
if (lean_obj_tag(v___x_1419_) == 0)
{
lean_object* v_a_1420_; lean_object* v___x_1421_; 
v_a_1420_ = lean_ctor_get(v___x_1419_, 0);
lean_inc(v_a_1420_);
lean_dec_ref_known(v___x_1419_, 1);
v___x_1421_ = l___private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1(v_k_1416_, v_v_1417_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_, v___y_1386_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_);
lean_dec(v_k_1416_);
if (lean_obj_tag(v___x_1421_) == 0)
{
lean_object* v_a_1422_; lean_object* v___x_1423_; 
v_a_1422_ = lean_ctor_get(v___x_1421_, 0);
lean_inc(v_a_1422_);
lean_dec_ref_known(v___x_1421_, 1);
v___x_1423_ = l_Lean_mkAppB(v_a_1420_, v_acc_1381_, v_a_1422_);
v_p_1380_ = v_p_1418_;
v_acc_1381_ = v___x_1423_;
goto _start;
}
else
{
lean_dec(v_a_1420_);
lean_dec_ref(v_p_1418_);
lean_dec_ref(v_acc_1381_);
return v___x_1421_;
}
}
else
{
lean_dec_ref(v_p_1418_);
lean_dec(v_v_1417_);
lean_dec(v_k_1416_);
lean_dec_ref(v_acc_1381_);
return v___x_1419_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2___boxed(lean_object* v_p_1425_, lean_object* v_acc_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_){
_start:
{
lean_object* v_res_1439_; 
v_res_1439_ = l___private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2(v_p_1425_, v_acc_1426_, v___y_1427_, v___y_1428_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_, v___y_1437_);
lean_dec(v___y_1437_);
lean_dec_ref(v___y_1436_);
lean_dec(v___y_1435_);
lean_dec_ref(v___y_1434_);
lean_dec(v___y_1433_);
lean_dec_ref(v___y_1432_);
lean_dec(v___y_1431_);
lean_dec_ref(v___y_1430_);
lean_dec(v___y_1429_);
lean_dec(v___y_1428_);
lean_dec_ref(v___y_1427_);
return v_res_1439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0(lean_object* v_p_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_){
_start:
{
if (lean_obj_tag(v_p_1440_) == 0)
{
lean_object* v_k_1453_; lean_object* v___x_1454_; 
v_k_1453_ = lean_ctor_get(v_p_1440_, 0);
lean_inc(v_k_1453_);
lean_dec_ref_known(v_p_1440_, 1);
v___x_1454_ = l_Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0(v_k_1453_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_, v___y_1451_);
lean_dec(v_k_1453_);
return v___x_1454_;
}
else
{
lean_object* v_k_1455_; lean_object* v_v_1456_; lean_object* v_p_1457_; lean_object* v___x_1458_; 
v_k_1455_ = lean_ctor_get(v_p_1440_, 0);
lean_inc(v_k_1455_);
v_v_1456_ = lean_ctor_get(v_p_1440_, 1);
lean_inc(v_v_1456_);
v_p_1457_ = lean_ctor_get(v_p_1440_, 2);
lean_inc_ref(v_p_1457_);
lean_dec_ref_known(v_p_1440_, 3);
v___x_1458_ = l___private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_denoteTerm___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__1(v_k_1455_, v_v_1456_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_, v___y_1451_);
lean_dec(v_k_1455_);
if (lean_obj_tag(v___x_1458_) == 0)
{
lean_object* v_a_1459_; lean_object* v___x_1460_; 
v_a_1459_ = lean_ctor_get(v___x_1458_, 0);
lean_inc(v_a_1459_);
lean_dec_ref_known(v___x_1458_, 1);
v___x_1460_ = l___private_Lean_Meta_Sym_Arith_DenoteExpr_0__Lean_Meta_Sym_Arith_denotePoly_go___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__2(v_p_1457_, v_a_1459_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_, v___y_1451_);
return v___x_1460_;
}
else
{
lean_dec_ref(v_p_1457_);
return v___x_1458_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0___boxed(lean_object* v_p_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_){
_start:
{
lean_object* v_res_1474_; 
v_res_1474_ = l_Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0(v_p_1461_, v___y_1462_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_, v___y_1469_, v___y_1470_, v___y_1471_, v___y_1472_);
lean_dec(v___y_1472_);
lean_dec_ref(v___y_1471_);
lean_dec(v___y_1470_);
lean_dec_ref(v___y_1469_);
lean_dec(v___y_1468_);
lean_dec_ref(v___y_1467_);
lean_dec(v___y_1466_);
lean_dec_ref(v___y_1465_);
lean_dec(v___y_1464_);
lean_dec(v___y_1463_);
lean_dec_ref(v___y_1462_);
return v_res_1474_;
}
}
static double _init_l_Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1475_; double v___x_1476_; 
v___x_1475_ = lean_unsigned_to_nat(0u);
v___x_1476_ = lean_float_of_nat(v___x_1475_);
return v___x_1476_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1___redArg(lean_object* v_cls_1480_, lean_object* v_msg_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_){
_start:
{
lean_object* v_ref_1487_; lean_object* v___x_1488_; lean_object* v_a_1489_; lean_object* v___x_1491_; uint8_t v_isShared_1492_; uint8_t v_isSharedCheck_1534_; 
v_ref_1487_ = lean_ctor_get(v___y_1484_, 2);
v___x_1488_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1_spec__4(v_msg_1481_, v___y_1482_, v___y_1483_, v___y_1484_, v___y_1485_);
v_a_1489_ = lean_ctor_get(v___x_1488_, 0);
v_isSharedCheck_1534_ = !lean_is_exclusive(v___x_1488_);
if (v_isSharedCheck_1534_ == 0)
{
v___x_1491_ = v___x_1488_;
v_isShared_1492_ = v_isSharedCheck_1534_;
goto v_resetjp_1490_;
}
else
{
lean_inc(v_a_1489_);
lean_dec(v___x_1488_);
v___x_1491_ = lean_box(0);
v_isShared_1492_ = v_isSharedCheck_1534_;
goto v_resetjp_1490_;
}
v_resetjp_1490_:
{
lean_object* v___x_1493_; lean_object* v_traceState_1494_; lean_object* v_env_1495_; lean_object* v_nextMacroScope_1496_; lean_object* v_ngen_1497_; lean_object* v_auxDeclNGen_1498_; lean_object* v_cache_1499_; lean_object* v_recordedDeps_1500_; lean_object* v_messages_1501_; lean_object* v_infoState_1502_; lean_object* v_snapshotTasks_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1533_; 
v___x_1493_ = lean_st_ref_take(v___y_1485_);
v_traceState_1494_ = lean_ctor_get(v___x_1493_, 4);
v_env_1495_ = lean_ctor_get(v___x_1493_, 0);
v_nextMacroScope_1496_ = lean_ctor_get(v___x_1493_, 1);
v_ngen_1497_ = lean_ctor_get(v___x_1493_, 2);
v_auxDeclNGen_1498_ = lean_ctor_get(v___x_1493_, 3);
v_cache_1499_ = lean_ctor_get(v___x_1493_, 5);
v_recordedDeps_1500_ = lean_ctor_get(v___x_1493_, 6);
v_messages_1501_ = lean_ctor_get(v___x_1493_, 7);
v_infoState_1502_ = lean_ctor_get(v___x_1493_, 8);
v_snapshotTasks_1503_ = lean_ctor_get(v___x_1493_, 9);
v_isSharedCheck_1533_ = !lean_is_exclusive(v___x_1493_);
if (v_isSharedCheck_1533_ == 0)
{
v___x_1505_ = v___x_1493_;
v_isShared_1506_ = v_isSharedCheck_1533_;
goto v_resetjp_1504_;
}
else
{
lean_inc(v_snapshotTasks_1503_);
lean_inc(v_infoState_1502_);
lean_inc(v_messages_1501_);
lean_inc(v_recordedDeps_1500_);
lean_inc(v_cache_1499_);
lean_inc(v_traceState_1494_);
lean_inc(v_auxDeclNGen_1498_);
lean_inc(v_ngen_1497_);
lean_inc(v_nextMacroScope_1496_);
lean_inc(v_env_1495_);
lean_dec(v___x_1493_);
v___x_1505_ = lean_box(0);
v_isShared_1506_ = v_isSharedCheck_1533_;
goto v_resetjp_1504_;
}
v_resetjp_1504_:
{
uint64_t v_tid_1507_; lean_object* v_traces_1508_; lean_object* v___x_1510_; uint8_t v_isShared_1511_; uint8_t v_isSharedCheck_1532_; 
v_tid_1507_ = lean_ctor_get_uint64(v_traceState_1494_, sizeof(void*)*1);
v_traces_1508_ = lean_ctor_get(v_traceState_1494_, 0);
v_isSharedCheck_1532_ = !lean_is_exclusive(v_traceState_1494_);
if (v_isSharedCheck_1532_ == 0)
{
v___x_1510_ = v_traceState_1494_;
v_isShared_1511_ = v_isSharedCheck_1532_;
goto v_resetjp_1509_;
}
else
{
lean_inc(v_traces_1508_);
lean_dec(v_traceState_1494_);
v___x_1510_ = lean_box(0);
v_isShared_1511_ = v_isSharedCheck_1532_;
goto v_resetjp_1509_;
}
v_resetjp_1509_:
{
lean_object* v___x_1512_; lean_object* v___x_1513_; double v___x_1514_; uint8_t v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1523_; 
v___x_1512_ = lean_box(0);
v___x_1513_ = lean_box(0);
v___x_1514_ = lean_float_once(&l_Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1___redArg___closed__0, &l_Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1___redArg___closed__0);
v___x_1515_ = 0;
v___x_1516_ = ((lean_object*)(l_Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1___redArg___closed__1));
v___x_1517_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1517_, 0, v_cls_1480_);
lean_ctor_set(v___x_1517_, 1, v___x_1513_);
lean_ctor_set(v___x_1517_, 2, v___x_1516_);
lean_ctor_set_float(v___x_1517_, sizeof(void*)*3, v___x_1514_);
lean_ctor_set_float(v___x_1517_, sizeof(void*)*3 + 8, v___x_1514_);
lean_ctor_set_uint8(v___x_1517_, sizeof(void*)*3 + 16, v___x_1515_);
v___x_1518_ = ((lean_object*)(l_Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1___redArg___closed__2));
v___x_1519_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1519_, 0, v___x_1517_);
lean_ctor_set(v___x_1519_, 1, v_a_1489_);
lean_ctor_set(v___x_1519_, 2, v___x_1518_);
lean_inc(v_ref_1487_);
v___x_1520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1520_, 0, v_ref_1487_);
lean_ctor_set(v___x_1520_, 1, v___x_1519_);
v___x_1521_ = l_Lean_PersistentArray_push___redArg(v_traces_1508_, v___x_1520_);
if (v_isShared_1511_ == 0)
{
lean_ctor_set(v___x_1510_, 0, v___x_1521_);
v___x_1523_ = v___x_1510_;
goto v_reusejp_1522_;
}
else
{
lean_object* v_reuseFailAlloc_1531_; 
v_reuseFailAlloc_1531_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1531_, 0, v___x_1521_);
lean_ctor_set_uint64(v_reuseFailAlloc_1531_, sizeof(void*)*1, v_tid_1507_);
v___x_1523_ = v_reuseFailAlloc_1531_;
goto v_reusejp_1522_;
}
v_reusejp_1522_:
{
lean_object* v___x_1525_; 
if (v_isShared_1506_ == 0)
{
lean_ctor_set(v___x_1505_, 4, v___x_1523_);
v___x_1525_ = v___x_1505_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1530_; 
v_reuseFailAlloc_1530_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1530_, 0, v_env_1495_);
lean_ctor_set(v_reuseFailAlloc_1530_, 1, v_nextMacroScope_1496_);
lean_ctor_set(v_reuseFailAlloc_1530_, 2, v_ngen_1497_);
lean_ctor_set(v_reuseFailAlloc_1530_, 3, v_auxDeclNGen_1498_);
lean_ctor_set(v_reuseFailAlloc_1530_, 4, v___x_1523_);
lean_ctor_set(v_reuseFailAlloc_1530_, 5, v_cache_1499_);
lean_ctor_set(v_reuseFailAlloc_1530_, 6, v_recordedDeps_1500_);
lean_ctor_set(v_reuseFailAlloc_1530_, 7, v_messages_1501_);
lean_ctor_set(v_reuseFailAlloc_1530_, 8, v_infoState_1502_);
lean_ctor_set(v_reuseFailAlloc_1530_, 9, v_snapshotTasks_1503_);
v___x_1525_ = v_reuseFailAlloc_1530_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
lean_object* v___x_1526_; lean_object* v___x_1528_; 
v___x_1526_ = lean_st_ref_put(v___y_1485_, v___x_1525_);
if (v_isShared_1492_ == 0)
{
lean_ctor_set(v___x_1491_, 0, v___x_1512_);
v___x_1528_ = v___x_1491_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v___x_1512_);
v___x_1528_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
return v___x_1528_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1___redArg___boxed(lean_object* v_cls_1535_, lean_object* v_msg_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_){
_start:
{
lean_object* v_res_1542_; 
v_res_1542_ = l_Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1___redArg(v_cls_1535_, v_msg_1536_, v___y_1537_, v___y_1538_, v___y_1539_, v___y_1540_);
lean_dec(v___y_1540_);
lean_dec_ref(v___y_1539_);
lean_dec(v___y_1538_);
lean_dec_ref(v___y_1537_);
return v_res_1542_;
}
}
static lean_object* _init_l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__0(void){
_start:
{
lean_object* v___x_1543_; lean_object* v___x_1544_; 
v___x_1543_ = l_Lean_Meta_Grind_Arith_getIntModuleVirtualParent;
v___x_1544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1544_, 0, v___x_1543_);
return v___x_1544_;
}
}
static lean_object* _init_l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__8(void){
_start:
{
lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; 
v___x_1557_ = ((lean_object*)(l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__5));
v___x_1558_ = ((lean_object*)(l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__7));
v___x_1559_ = l_Lean_Name_append(v___x_1558_, v___x_1557_);
return v___x_1559_;
}
}
static lean_object* _init_l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__10(void){
_start:
{
lean_object* v___x_1561_; lean_object* v___x_1562_; 
v___x_1561_ = ((lean_object*)(l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__9));
v___x_1562_ = l_Lean_stringToMessageData(v___x_1561_);
return v___x_1562_;
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_normCommRing_x3f(lean_object* v_p_1563_, lean_object* v_a_1564_, lean_object* v_a_1565_, lean_object* v_a_1566_, lean_object* v_a_1567_, lean_object* v_a_1568_, lean_object* v_a_1569_, lean_object* v_a_1570_, lean_object* v_a_1571_, lean_object* v_a_1572_, lean_object* v_a_1573_){
_start:
{
lean_object* v___x_1575_; 
v___x_1575_ = l_Int_Internal_Linear_Poly_isNonlinear___redArg(v_p_1563_, v_a_1564_, v_a_1572_);
if (lean_obj_tag(v___x_1575_) == 0)
{
lean_object* v_a_1576_; lean_object* v___x_1578_; uint8_t v_isShared_1579_; uint8_t v_isSharedCheck_1802_; 
v_a_1576_ = lean_ctor_get(v___x_1575_, 0);
v_isSharedCheck_1802_ = !lean_is_exclusive(v___x_1575_);
if (v_isSharedCheck_1802_ == 0)
{
v___x_1578_ = v___x_1575_;
v_isShared_1579_ = v_isSharedCheck_1802_;
goto v_resetjp_1577_;
}
else
{
lean_inc(v_a_1576_);
lean_dec(v___x_1575_);
v___x_1578_ = lean_box(0);
v_isShared_1579_ = v_isSharedCheck_1802_;
goto v_resetjp_1577_;
}
v_resetjp_1577_:
{
uint8_t v___x_1580_; 
v___x_1580_ = lean_unbox(v_a_1576_);
if (v___x_1580_ == 0)
{
lean_object* v___x_1581_; lean_object* v___x_1583_; 
lean_dec(v_a_1576_);
lean_dec_ref(v_p_1563_);
v___x_1581_ = lean_box(0);
if (v_isShared_1579_ == 0)
{
lean_ctor_set(v___x_1578_, 0, v___x_1581_);
v___x_1583_ = v___x_1578_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v___x_1581_);
v___x_1583_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
return v___x_1583_;
}
}
else
{
lean_object* v___f_1585_; lean_object* v___x_1586_; 
lean_del_object(v___x_1578_);
lean_inc(v_a_1576_);
v___f_1585_ = lean_alloc_closure((void*)(l_Int_Internal_Linear_Poly_normCommRing_x3f___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1585_, 0, v_a_1576_);
v___x_1586_ = l_Lean_Meta_Grind_Arith_Cutsat_getIntRingId_x3f___redArg(v_a_1568_, v_a_1569_, v_a_1570_, v_a_1571_, v_a_1572_, v_a_1573_);
if (lean_obj_tag(v___x_1586_) == 0)
{
lean_object* v_a_1587_; lean_object* v___x_1589_; uint8_t v_isShared_1590_; uint8_t v_isSharedCheck_1793_; 
v_a_1587_ = lean_ctor_get(v___x_1586_, 0);
v_isSharedCheck_1793_ = !lean_is_exclusive(v___x_1586_);
if (v_isSharedCheck_1793_ == 0)
{
v___x_1589_ = v___x_1586_;
v_isShared_1590_ = v_isSharedCheck_1793_;
goto v_resetjp_1588_;
}
else
{
lean_inc(v_a_1587_);
lean_dec(v___x_1586_);
v___x_1589_ = lean_box(0);
v_isShared_1590_ = v_isSharedCheck_1793_;
goto v_resetjp_1588_;
}
v_resetjp_1588_:
{
if (lean_obj_tag(v_a_1587_) == 1)
{
lean_object* v_val_1591_; uint8_t v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; 
lean_del_object(v___x_1589_);
v_val_1591_ = lean_ctor_get(v_a_1587_, 0);
lean_inc(v_val_1591_);
lean_dec_ref_known(v_a_1587_, 1);
v___x_1592_ = 0;
v___x_1593_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1593_, 0, v_val_1591_);
lean_ctor_set_uint8(v___x_1593_, sizeof(void*)*1, v___x_1592_);
lean_inc_ref(v_p_1563_);
v___x_1594_ = l_Int_Internal_Linear_Poly_denoteExpr_x27___redArg(v_p_1563_, v_a_1564_, v_a_1572_);
if (lean_obj_tag(v___x_1594_) == 0)
{
lean_object* v_a_1595_; lean_object* v___x_1596_; 
v_a_1595_ = lean_ctor_get(v___x_1594_, 0);
lean_inc(v_a_1595_);
lean_dec_ref_known(v___x_1594_, 1);
v___x_1596_ = l_Lean_Meta_Sym_canon(v_a_1595_, v_a_1568_, v_a_1569_, v_a_1570_, v_a_1571_, v_a_1572_, v_a_1573_);
if (lean_obj_tag(v___x_1596_) == 0)
{
lean_object* v_a_1597_; lean_object* v___x_1598_; 
v_a_1597_ = lean_ctor_get(v___x_1596_, 0);
lean_inc(v_a_1597_);
lean_dec_ref_known(v___x_1596_, 1);
v___x_1598_ = l_Lean_Meta_Sym_shareCommon(v_a_1597_, v_a_1568_, v_a_1569_, v_a_1570_, v_a_1571_, v_a_1572_, v_a_1573_);
if (lean_obj_tag(v___x_1598_) == 0)
{
lean_object* v_a_1599_; lean_object* v___x_1600_; 
v_a_1599_ = lean_ctor_get(v___x_1598_, 0);
lean_inc(v_a_1599_);
lean_dec_ref_known(v___x_1598_, 1);
lean_inc_ref(v_p_1563_);
v___x_1600_ = l_Int_Internal_Linear_Poly_getGeneration___redArg(v_p_1563_, v_a_1564_, v_a_1572_);
if (lean_obj_tag(v___x_1600_) == 0)
{
lean_object* v_a_1601_; uint8_t v___x_1602_; lean_object* v___x_1603_; 
v_a_1601_ = lean_ctor_get(v___x_1600_, 0);
lean_inc(v_a_1601_);
lean_dec_ref_known(v___x_1600_, 1);
v___x_1602_ = lean_unbox(v_a_1576_);
lean_dec(v_a_1576_);
v___x_1603_ = l_Lean_Meta_Grind_Arith_CommRing_reify_x3f(v_a_1599_, v___x_1602_, v___x_1593_, v_a_1564_, v_a_1565_, v_a_1566_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_, v_a_1571_, v_a_1572_, v_a_1573_);
if (lean_obj_tag(v___x_1603_) == 0)
{
lean_object* v_a_1604_; lean_object* v___x_1606_; uint8_t v_isShared_1607_; uint8_t v_isSharedCheck_1748_; 
v_a_1604_ = lean_ctor_get(v___x_1603_, 0);
v_isSharedCheck_1748_ = !lean_is_exclusive(v___x_1603_);
if (v_isSharedCheck_1748_ == 0)
{
v___x_1606_ = v___x_1603_;
v_isShared_1607_ = v_isSharedCheck_1748_;
goto v_resetjp_1605_;
}
else
{
lean_inc(v_a_1604_);
lean_dec(v___x_1603_);
v___x_1606_ = lean_box(0);
v_isShared_1607_ = v_isSharedCheck_1748_;
goto v_resetjp_1605_;
}
v_resetjp_1605_:
{
if (lean_obj_tag(v_a_1604_) == 1)
{
lean_object* v_val_1608_; lean_object* v___x_1609_; 
lean_del_object(v___x_1606_);
v_val_1608_ = lean_ctor_get(v_a_1604_, 0);
lean_inc_n(v_val_1608_, 2);
lean_dec_ref_known(v_a_1604_, 1);
v___x_1609_ = l_Lean_Grind_CommRing_Expr_toPolyM_x3f(v_val_1608_, v___x_1593_, v_a_1564_, v_a_1565_, v_a_1566_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_, v_a_1571_, v_a_1572_, v_a_1573_);
if (lean_obj_tag(v___x_1609_) == 0)
{
lean_object* v_a_1610_; lean_object* v___x_1612_; uint8_t v_isShared_1613_; uint8_t v_isSharedCheck_1735_; 
v_a_1610_ = lean_ctor_get(v___x_1609_, 0);
v_isSharedCheck_1735_ = !lean_is_exclusive(v___x_1609_);
if (v_isSharedCheck_1735_ == 0)
{
v___x_1612_ = v___x_1609_;
v_isShared_1613_ = v_isSharedCheck_1735_;
goto v_resetjp_1611_;
}
else
{
lean_inc(v_a_1610_);
lean_dec(v___x_1609_);
v___x_1612_ = lean_box(0);
v_isShared_1613_ = v_isSharedCheck_1735_;
goto v_resetjp_1611_;
}
v_resetjp_1611_:
{
if (lean_obj_tag(v_a_1610_) == 1)
{
lean_object* v_val_1614_; lean_object* v___x_1616_; uint8_t v_isShared_1617_; uint8_t v_isSharedCheck_1730_; 
lean_del_object(v___x_1612_);
v_val_1614_ = lean_ctor_get(v_a_1610_, 0);
v_isSharedCheck_1730_ = !lean_is_exclusive(v_a_1610_);
if (v_isSharedCheck_1730_ == 0)
{
v___x_1616_ = v_a_1610_;
v_isShared_1617_ = v_isSharedCheck_1730_;
goto v_resetjp_1615_;
}
else
{
lean_inc(v_val_1614_);
lean_dec(v_a_1610_);
v___x_1616_ = lean_box(0);
v_isShared_1617_ = v_isSharedCheck_1730_;
goto v_resetjp_1615_;
}
v_resetjp_1615_:
{
lean_object* v___x_1618_; 
lean_inc(v_val_1614_);
v___x_1618_ = l_Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0(v_val_1614_, v___x_1593_, v_a_1564_, v_a_1565_, v_a_1566_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_, v_a_1571_, v_a_1572_, v_a_1573_);
lean_dec_ref_known(v___x_1593_, 1);
if (lean_obj_tag(v___x_1618_) == 0)
{
lean_object* v_a_1619_; lean_object* v___x_1620_; 
v_a_1619_ = lean_ctor_get(v___x_1618_, 0);
lean_inc(v_a_1619_);
lean_dec_ref_known(v___x_1618_, 1);
v___x_1620_ = l_Lean_Meta_Grind_preprocessLight___redArg(v_a_1619_, v_a_1565_, v_a_1566_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_, v_a_1571_, v_a_1572_, v_a_1573_);
if (lean_obj_tag(v___x_1620_) == 0)
{
lean_object* v_a_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; 
v_a_1621_ = lean_ctor_get(v___x_1620_, 0);
lean_inc_n(v_a_1621_, 2);
lean_dec_ref_known(v___x_1620_, 1);
v___x_1622_ = lean_obj_once(&l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__0, &l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__0_once, _init_l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__0);
lean_inc(v_a_1573_);
lean_inc_ref(v_a_1572_);
lean_inc(v_a_1571_);
lean_inc_ref(v_a_1570_);
lean_inc(v_a_1569_);
lean_inc_ref(v_a_1568_);
lean_inc(v_a_1567_);
lean_inc_ref(v_a_1566_);
lean_inc(v_a_1565_);
lean_inc(v_a_1564_);
v___x_1623_ = lean_grind_internalize(v_a_1621_, v_a_1601_, v___x_1622_, v_a_1564_, v_a_1565_, v_a_1566_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_, v_a_1571_, v_a_1572_, v_a_1573_);
if (lean_obj_tag(v___x_1623_) == 0)
{
lean_object* v___x_1625_; uint8_t v_isShared_1626_; uint8_t v_isSharedCheck_1704_; 
v_isSharedCheck_1704_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1704_ == 0)
{
lean_object* v_unused_1705_; 
v_unused_1705_ = lean_ctor_get(v___x_1623_, 0);
lean_dec(v_unused_1705_);
v___x_1625_ = v___x_1623_;
v_isShared_1626_ = v_isSharedCheck_1704_;
goto v_resetjp_1624_;
}
else
{
lean_dec(v___x_1623_);
v___x_1625_ = lean_box(0);
v_isShared_1626_ = v_isSharedCheck_1704_;
goto v_resetjp_1624_;
}
v_resetjp_1624_:
{
lean_object* v___x_1627_; 
v___x_1627_ = l_Lean_Meta_Grind_Arith_Cutsat_toPoly(v_a_1621_, v_a_1564_, v_a_1565_, v_a_1566_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_, v_a_1571_, v_a_1572_, v_a_1573_);
if (lean_obj_tag(v___x_1627_) == 0)
{
lean_object* v_a_1628_; lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1695_; 
v_a_1628_ = lean_ctor_get(v___x_1627_, 0);
v_isSharedCheck_1695_ = !lean_is_exclusive(v___x_1627_);
if (v_isSharedCheck_1695_ == 0)
{
v___x_1630_ = v___x_1627_;
v_isShared_1631_ = v_isSharedCheck_1695_;
goto v_resetjp_1629_;
}
else
{
lean_inc(v_a_1628_);
lean_dec(v___x_1627_);
v___x_1630_ = lean_box(0);
v_isShared_1631_ = v_isSharedCheck_1695_;
goto v_resetjp_1629_;
}
v_resetjp_1629_:
{
uint8_t v___x_1641_; 
v___x_1641_ = l_Int_Internal_Linear_instBEqPoly_beq(v_p_1563_, v_a_1628_);
if (v___x_1641_ == 0)
{
lean_object* v___x_1642_; lean_object* v___x_1643_; 
lean_del_object(v___x_1625_);
v___x_1642_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_1643_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_1642_, v___f_1585_, v_a_1564_);
if (lean_obj_tag(v___x_1643_) == 0)
{
lean_object* v_toCold_1644_; lean_object* v_options_1645_; uint8_t v_hasTrace_1646_; 
lean_dec_ref_known(v___x_1643_, 1);
v_toCold_1644_ = lean_ctor_get(v_a_1572_, 0);
v_options_1645_ = lean_ctor_get(v_toCold_1644_, 2);
v_hasTrace_1646_ = lean_ctor_get_uint8(v_options_1645_, sizeof(void*)*1);
if (v_hasTrace_1646_ == 0)
{
lean_dec_ref(v_p_1563_);
goto v___jp_1632_;
}
else
{
lean_object* v_inheritedTraceOptions_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; uint8_t v___x_1650_; 
v_inheritedTraceOptions_1647_ = lean_ctor_get(v_toCold_1644_, 11);
v___x_1648_ = ((lean_object*)(l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__5));
v___x_1649_ = lean_obj_once(&l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__8, &l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__8_once, _init_l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__8);
v___x_1650_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1647_, v_options_1645_, v___x_1649_);
if (v___x_1650_ == 0)
{
lean_dec_ref(v_p_1563_);
goto v___jp_1632_;
}
else
{
lean_object* v___x_1651_; 
v___x_1651_ = l_Int_Internal_Linear_Poly_pp___redArg(v_p_1563_, v_a_1564_, v_a_1572_);
if (lean_obj_tag(v___x_1651_) == 0)
{
lean_object* v_a_1652_; lean_object* v___x_1653_; 
v_a_1652_ = lean_ctor_get(v___x_1651_, 0);
lean_inc(v_a_1652_);
lean_dec_ref_known(v___x_1651_, 1);
lean_inc(v_a_1628_);
v___x_1653_ = l_Int_Internal_Linear_Poly_pp___redArg(v_a_1628_, v_a_1564_, v_a_1572_);
if (lean_obj_tag(v___x_1653_) == 0)
{
lean_object* v_a_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; 
v_a_1654_ = lean_ctor_get(v___x_1653_, 0);
lean_inc(v_a_1654_);
lean_dec_ref_known(v___x_1653_, 1);
v___x_1655_ = lean_obj_once(&l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__10, &l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__10_once, _init_l_Int_Internal_Linear_Poly_normCommRing_x3f___closed__10);
v___x_1656_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1656_, 0, v_a_1652_);
lean_ctor_set(v___x_1656_, 1, v___x_1655_);
v___x_1657_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1657_, 0, v___x_1656_);
lean_ctor_set(v___x_1657_, 1, v_a_1654_);
v___x_1658_ = l_Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1___redArg(v___x_1648_, v___x_1657_, v_a_1570_, v_a_1571_, v_a_1572_, v_a_1573_);
if (lean_obj_tag(v___x_1658_) == 0)
{
lean_dec_ref_known(v___x_1658_, 1);
goto v___jp_1632_;
}
else
{
lean_object* v_a_1659_; lean_object* v___x_1661_; uint8_t v_isShared_1662_; uint8_t v_isSharedCheck_1666_; 
lean_del_object(v___x_1630_);
lean_dec(v_a_1628_);
lean_del_object(v___x_1616_);
lean_dec(v_val_1614_);
lean_dec(v_val_1608_);
v_a_1659_ = lean_ctor_get(v___x_1658_, 0);
v_isSharedCheck_1666_ = !lean_is_exclusive(v___x_1658_);
if (v_isSharedCheck_1666_ == 0)
{
v___x_1661_ = v___x_1658_;
v_isShared_1662_ = v_isSharedCheck_1666_;
goto v_resetjp_1660_;
}
else
{
lean_inc(v_a_1659_);
lean_dec(v___x_1658_);
v___x_1661_ = lean_box(0);
v_isShared_1662_ = v_isSharedCheck_1666_;
goto v_resetjp_1660_;
}
v_resetjp_1660_:
{
lean_object* v___x_1664_; 
if (v_isShared_1662_ == 0)
{
v___x_1664_ = v___x_1661_;
goto v_reusejp_1663_;
}
else
{
lean_object* v_reuseFailAlloc_1665_; 
v_reuseFailAlloc_1665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1665_, 0, v_a_1659_);
v___x_1664_ = v_reuseFailAlloc_1665_;
goto v_reusejp_1663_;
}
v_reusejp_1663_:
{
return v___x_1664_;
}
}
}
}
else
{
lean_object* v_a_1667_; lean_object* v___x_1669_; uint8_t v_isShared_1670_; uint8_t v_isSharedCheck_1674_; 
lean_dec(v_a_1652_);
lean_del_object(v___x_1630_);
lean_dec(v_a_1628_);
lean_del_object(v___x_1616_);
lean_dec(v_val_1614_);
lean_dec(v_val_1608_);
v_a_1667_ = lean_ctor_get(v___x_1653_, 0);
v_isSharedCheck_1674_ = !lean_is_exclusive(v___x_1653_);
if (v_isSharedCheck_1674_ == 0)
{
v___x_1669_ = v___x_1653_;
v_isShared_1670_ = v_isSharedCheck_1674_;
goto v_resetjp_1668_;
}
else
{
lean_inc(v_a_1667_);
lean_dec(v___x_1653_);
v___x_1669_ = lean_box(0);
v_isShared_1670_ = v_isSharedCheck_1674_;
goto v_resetjp_1668_;
}
v_resetjp_1668_:
{
lean_object* v___x_1672_; 
if (v_isShared_1670_ == 0)
{
v___x_1672_ = v___x_1669_;
goto v_reusejp_1671_;
}
else
{
lean_object* v_reuseFailAlloc_1673_; 
v_reuseFailAlloc_1673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1673_, 0, v_a_1667_);
v___x_1672_ = v_reuseFailAlloc_1673_;
goto v_reusejp_1671_;
}
v_reusejp_1671_:
{
return v___x_1672_;
}
}
}
}
else
{
lean_object* v_a_1675_; lean_object* v___x_1677_; uint8_t v_isShared_1678_; uint8_t v_isSharedCheck_1682_; 
lean_del_object(v___x_1630_);
lean_dec(v_a_1628_);
lean_del_object(v___x_1616_);
lean_dec(v_val_1614_);
lean_dec(v_val_1608_);
v_a_1675_ = lean_ctor_get(v___x_1651_, 0);
v_isSharedCheck_1682_ = !lean_is_exclusive(v___x_1651_);
if (v_isSharedCheck_1682_ == 0)
{
v___x_1677_ = v___x_1651_;
v_isShared_1678_ = v_isSharedCheck_1682_;
goto v_resetjp_1676_;
}
else
{
lean_inc(v_a_1675_);
lean_dec(v___x_1651_);
v___x_1677_ = lean_box(0);
v_isShared_1678_ = v_isSharedCheck_1682_;
goto v_resetjp_1676_;
}
v_resetjp_1676_:
{
lean_object* v___x_1680_; 
if (v_isShared_1678_ == 0)
{
v___x_1680_ = v___x_1677_;
goto v_reusejp_1679_;
}
else
{
lean_object* v_reuseFailAlloc_1681_; 
v_reuseFailAlloc_1681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1681_, 0, v_a_1675_);
v___x_1680_ = v_reuseFailAlloc_1681_;
goto v_reusejp_1679_;
}
v_reusejp_1679_:
{
return v___x_1680_;
}
}
}
}
}
}
else
{
lean_object* v_a_1683_; lean_object* v___x_1685_; uint8_t v_isShared_1686_; uint8_t v_isSharedCheck_1690_; 
lean_del_object(v___x_1630_);
lean_dec(v_a_1628_);
lean_del_object(v___x_1616_);
lean_dec(v_val_1614_);
lean_dec(v_val_1608_);
lean_dec_ref(v_p_1563_);
v_a_1683_ = lean_ctor_get(v___x_1643_, 0);
v_isSharedCheck_1690_ = !lean_is_exclusive(v___x_1643_);
if (v_isSharedCheck_1690_ == 0)
{
v___x_1685_ = v___x_1643_;
v_isShared_1686_ = v_isSharedCheck_1690_;
goto v_resetjp_1684_;
}
else
{
lean_inc(v_a_1683_);
lean_dec(v___x_1643_);
v___x_1685_ = lean_box(0);
v_isShared_1686_ = v_isSharedCheck_1690_;
goto v_resetjp_1684_;
}
v_resetjp_1684_:
{
lean_object* v___x_1688_; 
if (v_isShared_1686_ == 0)
{
v___x_1688_ = v___x_1685_;
goto v_reusejp_1687_;
}
else
{
lean_object* v_reuseFailAlloc_1689_; 
v_reuseFailAlloc_1689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1689_, 0, v_a_1683_);
v___x_1688_ = v_reuseFailAlloc_1689_;
goto v_reusejp_1687_;
}
v_reusejp_1687_:
{
return v___x_1688_;
}
}
}
}
else
{
lean_object* v___x_1691_; lean_object* v___x_1693_; 
lean_del_object(v___x_1630_);
lean_dec(v_a_1628_);
lean_del_object(v___x_1616_);
lean_dec(v_val_1614_);
lean_dec(v_val_1608_);
lean_dec_ref(v___f_1585_);
lean_dec_ref(v_p_1563_);
v___x_1691_ = lean_box(0);
if (v_isShared_1626_ == 0)
{
lean_ctor_set(v___x_1625_, 0, v___x_1691_);
v___x_1693_ = v___x_1625_;
goto v_reusejp_1692_;
}
else
{
lean_object* v_reuseFailAlloc_1694_; 
v_reuseFailAlloc_1694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1694_, 0, v___x_1691_);
v___x_1693_ = v_reuseFailAlloc_1694_;
goto v_reusejp_1692_;
}
v_reusejp_1692_:
{
return v___x_1693_;
}
}
v___jp_1632_:
{
lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1636_; 
v___x_1633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1633_, 0, v_val_1614_);
lean_ctor_set(v___x_1633_, 1, v_a_1628_);
v___x_1634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1634_, 0, v_val_1608_);
lean_ctor_set(v___x_1634_, 1, v___x_1633_);
if (v_isShared_1617_ == 0)
{
lean_ctor_set(v___x_1616_, 0, v___x_1634_);
v___x_1636_ = v___x_1616_;
goto v_reusejp_1635_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v___x_1634_);
v___x_1636_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1635_;
}
v_reusejp_1635_:
{
lean_object* v___x_1638_; 
if (v_isShared_1631_ == 0)
{
lean_ctor_set(v___x_1630_, 0, v___x_1636_);
v___x_1638_ = v___x_1630_;
goto v_reusejp_1637_;
}
else
{
lean_object* v_reuseFailAlloc_1639_; 
v_reuseFailAlloc_1639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1639_, 0, v___x_1636_);
v___x_1638_ = v_reuseFailAlloc_1639_;
goto v_reusejp_1637_;
}
v_reusejp_1637_:
{
return v___x_1638_;
}
}
}
}
}
else
{
lean_object* v_a_1696_; lean_object* v___x_1698_; uint8_t v_isShared_1699_; uint8_t v_isSharedCheck_1703_; 
lean_del_object(v___x_1625_);
lean_del_object(v___x_1616_);
lean_dec(v_val_1614_);
lean_dec(v_val_1608_);
lean_dec_ref(v___f_1585_);
lean_dec_ref(v_p_1563_);
v_a_1696_ = lean_ctor_get(v___x_1627_, 0);
v_isSharedCheck_1703_ = !lean_is_exclusive(v___x_1627_);
if (v_isSharedCheck_1703_ == 0)
{
v___x_1698_ = v___x_1627_;
v_isShared_1699_ = v_isSharedCheck_1703_;
goto v_resetjp_1697_;
}
else
{
lean_inc(v_a_1696_);
lean_dec(v___x_1627_);
v___x_1698_ = lean_box(0);
v_isShared_1699_ = v_isSharedCheck_1703_;
goto v_resetjp_1697_;
}
v_resetjp_1697_:
{
lean_object* v___x_1701_; 
if (v_isShared_1699_ == 0)
{
v___x_1701_ = v___x_1698_;
goto v_reusejp_1700_;
}
else
{
lean_object* v_reuseFailAlloc_1702_; 
v_reuseFailAlloc_1702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1702_, 0, v_a_1696_);
v___x_1701_ = v_reuseFailAlloc_1702_;
goto v_reusejp_1700_;
}
v_reusejp_1700_:
{
return v___x_1701_;
}
}
}
}
}
else
{
lean_object* v_a_1706_; lean_object* v___x_1708_; uint8_t v_isShared_1709_; uint8_t v_isSharedCheck_1713_; 
lean_dec(v_a_1621_);
lean_del_object(v___x_1616_);
lean_dec(v_val_1614_);
lean_dec(v_val_1608_);
lean_dec_ref(v___f_1585_);
lean_dec_ref(v_p_1563_);
v_a_1706_ = lean_ctor_get(v___x_1623_, 0);
v_isSharedCheck_1713_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1713_ == 0)
{
v___x_1708_ = v___x_1623_;
v_isShared_1709_ = v_isSharedCheck_1713_;
goto v_resetjp_1707_;
}
else
{
lean_inc(v_a_1706_);
lean_dec(v___x_1623_);
v___x_1708_ = lean_box(0);
v_isShared_1709_ = v_isSharedCheck_1713_;
goto v_resetjp_1707_;
}
v_resetjp_1707_:
{
lean_object* v___x_1711_; 
if (v_isShared_1709_ == 0)
{
v___x_1711_ = v___x_1708_;
goto v_reusejp_1710_;
}
else
{
lean_object* v_reuseFailAlloc_1712_; 
v_reuseFailAlloc_1712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1712_, 0, v_a_1706_);
v___x_1711_ = v_reuseFailAlloc_1712_;
goto v_reusejp_1710_;
}
v_reusejp_1710_:
{
return v___x_1711_;
}
}
}
}
else
{
lean_object* v_a_1714_; lean_object* v___x_1716_; uint8_t v_isShared_1717_; uint8_t v_isSharedCheck_1721_; 
lean_del_object(v___x_1616_);
lean_dec(v_val_1614_);
lean_dec(v_val_1608_);
lean_dec(v_a_1601_);
lean_dec_ref(v___f_1585_);
lean_dec_ref(v_p_1563_);
v_a_1714_ = lean_ctor_get(v___x_1620_, 0);
v_isSharedCheck_1721_ = !lean_is_exclusive(v___x_1620_);
if (v_isSharedCheck_1721_ == 0)
{
v___x_1716_ = v___x_1620_;
v_isShared_1717_ = v_isSharedCheck_1721_;
goto v_resetjp_1715_;
}
else
{
lean_inc(v_a_1714_);
lean_dec(v___x_1620_);
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
lean_del_object(v___x_1616_);
lean_dec(v_val_1614_);
lean_dec(v_val_1608_);
lean_dec(v_a_1601_);
lean_dec_ref(v___f_1585_);
lean_dec_ref(v_p_1563_);
v_a_1722_ = lean_ctor_get(v___x_1618_, 0);
v_isSharedCheck_1729_ = !lean_is_exclusive(v___x_1618_);
if (v_isSharedCheck_1729_ == 0)
{
v___x_1724_ = v___x_1618_;
v_isShared_1725_ = v_isSharedCheck_1729_;
goto v_resetjp_1723_;
}
else
{
lean_inc(v_a_1722_);
lean_dec(v___x_1618_);
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
else
{
lean_object* v___x_1731_; lean_object* v___x_1733_; 
lean_dec(v_a_1610_);
lean_dec(v_val_1608_);
lean_dec(v_a_1601_);
lean_dec_ref_known(v___x_1593_, 1);
lean_dec_ref(v___f_1585_);
lean_dec_ref(v_p_1563_);
v___x_1731_ = lean_box(0);
if (v_isShared_1613_ == 0)
{
lean_ctor_set(v___x_1612_, 0, v___x_1731_);
v___x_1733_ = v___x_1612_;
goto v_reusejp_1732_;
}
else
{
lean_object* v_reuseFailAlloc_1734_; 
v_reuseFailAlloc_1734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1734_, 0, v___x_1731_);
v___x_1733_ = v_reuseFailAlloc_1734_;
goto v_reusejp_1732_;
}
v_reusejp_1732_:
{
return v___x_1733_;
}
}
}
}
else
{
lean_object* v_a_1736_; lean_object* v___x_1738_; uint8_t v_isShared_1739_; uint8_t v_isSharedCheck_1743_; 
lean_dec(v_val_1608_);
lean_dec(v_a_1601_);
lean_dec_ref_known(v___x_1593_, 1);
lean_dec_ref(v___f_1585_);
lean_dec_ref(v_p_1563_);
v_a_1736_ = lean_ctor_get(v___x_1609_, 0);
v_isSharedCheck_1743_ = !lean_is_exclusive(v___x_1609_);
if (v_isSharedCheck_1743_ == 0)
{
v___x_1738_ = v___x_1609_;
v_isShared_1739_ = v_isSharedCheck_1743_;
goto v_resetjp_1737_;
}
else
{
lean_inc(v_a_1736_);
lean_dec(v___x_1609_);
v___x_1738_ = lean_box(0);
v_isShared_1739_ = v_isSharedCheck_1743_;
goto v_resetjp_1737_;
}
v_resetjp_1737_:
{
lean_object* v___x_1741_; 
if (v_isShared_1739_ == 0)
{
v___x_1741_ = v___x_1738_;
goto v_reusejp_1740_;
}
else
{
lean_object* v_reuseFailAlloc_1742_; 
v_reuseFailAlloc_1742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1742_, 0, v_a_1736_);
v___x_1741_ = v_reuseFailAlloc_1742_;
goto v_reusejp_1740_;
}
v_reusejp_1740_:
{
return v___x_1741_;
}
}
}
}
else
{
lean_object* v___x_1744_; lean_object* v___x_1746_; 
lean_dec(v_a_1604_);
lean_dec(v_a_1601_);
lean_dec_ref_known(v___x_1593_, 1);
lean_dec_ref(v___f_1585_);
lean_dec_ref(v_p_1563_);
v___x_1744_ = lean_box(0);
if (v_isShared_1607_ == 0)
{
lean_ctor_set(v___x_1606_, 0, v___x_1744_);
v___x_1746_ = v___x_1606_;
goto v_reusejp_1745_;
}
else
{
lean_object* v_reuseFailAlloc_1747_; 
v_reuseFailAlloc_1747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1747_, 0, v___x_1744_);
v___x_1746_ = v_reuseFailAlloc_1747_;
goto v_reusejp_1745_;
}
v_reusejp_1745_:
{
return v___x_1746_;
}
}
}
}
else
{
lean_object* v_a_1749_; lean_object* v___x_1751_; uint8_t v_isShared_1752_; uint8_t v_isSharedCheck_1756_; 
lean_dec(v_a_1601_);
lean_dec_ref_known(v___x_1593_, 1);
lean_dec_ref(v___f_1585_);
lean_dec_ref(v_p_1563_);
v_a_1749_ = lean_ctor_get(v___x_1603_, 0);
v_isSharedCheck_1756_ = !lean_is_exclusive(v___x_1603_);
if (v_isSharedCheck_1756_ == 0)
{
v___x_1751_ = v___x_1603_;
v_isShared_1752_ = v_isSharedCheck_1756_;
goto v_resetjp_1750_;
}
else
{
lean_inc(v_a_1749_);
lean_dec(v___x_1603_);
v___x_1751_ = lean_box(0);
v_isShared_1752_ = v_isSharedCheck_1756_;
goto v_resetjp_1750_;
}
v_resetjp_1750_:
{
lean_object* v___x_1754_; 
if (v_isShared_1752_ == 0)
{
v___x_1754_ = v___x_1751_;
goto v_reusejp_1753_;
}
else
{
lean_object* v_reuseFailAlloc_1755_; 
v_reuseFailAlloc_1755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1755_, 0, v_a_1749_);
v___x_1754_ = v_reuseFailAlloc_1755_;
goto v_reusejp_1753_;
}
v_reusejp_1753_:
{
return v___x_1754_;
}
}
}
}
else
{
lean_object* v_a_1757_; lean_object* v___x_1759_; uint8_t v_isShared_1760_; uint8_t v_isSharedCheck_1764_; 
lean_dec(v_a_1599_);
lean_dec_ref_known(v___x_1593_, 1);
lean_dec_ref(v___f_1585_);
lean_dec(v_a_1576_);
lean_dec_ref(v_p_1563_);
v_a_1757_ = lean_ctor_get(v___x_1600_, 0);
v_isSharedCheck_1764_ = !lean_is_exclusive(v___x_1600_);
if (v_isSharedCheck_1764_ == 0)
{
v___x_1759_ = v___x_1600_;
v_isShared_1760_ = v_isSharedCheck_1764_;
goto v_resetjp_1758_;
}
else
{
lean_inc(v_a_1757_);
lean_dec(v___x_1600_);
v___x_1759_ = lean_box(0);
v_isShared_1760_ = v_isSharedCheck_1764_;
goto v_resetjp_1758_;
}
v_resetjp_1758_:
{
lean_object* v___x_1762_; 
if (v_isShared_1760_ == 0)
{
v___x_1762_ = v___x_1759_;
goto v_reusejp_1761_;
}
else
{
lean_object* v_reuseFailAlloc_1763_; 
v_reuseFailAlloc_1763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1763_, 0, v_a_1757_);
v___x_1762_ = v_reuseFailAlloc_1763_;
goto v_reusejp_1761_;
}
v_reusejp_1761_:
{
return v___x_1762_;
}
}
}
}
else
{
lean_object* v_a_1765_; lean_object* v___x_1767_; uint8_t v_isShared_1768_; uint8_t v_isSharedCheck_1772_; 
lean_dec_ref_known(v___x_1593_, 1);
lean_dec_ref(v___f_1585_);
lean_dec(v_a_1576_);
lean_dec_ref(v_p_1563_);
v_a_1765_ = lean_ctor_get(v___x_1598_, 0);
v_isSharedCheck_1772_ = !lean_is_exclusive(v___x_1598_);
if (v_isSharedCheck_1772_ == 0)
{
v___x_1767_ = v___x_1598_;
v_isShared_1768_ = v_isSharedCheck_1772_;
goto v_resetjp_1766_;
}
else
{
lean_inc(v_a_1765_);
lean_dec(v___x_1598_);
v___x_1767_ = lean_box(0);
v_isShared_1768_ = v_isSharedCheck_1772_;
goto v_resetjp_1766_;
}
v_resetjp_1766_:
{
lean_object* v___x_1770_; 
if (v_isShared_1768_ == 0)
{
v___x_1770_ = v___x_1767_;
goto v_reusejp_1769_;
}
else
{
lean_object* v_reuseFailAlloc_1771_; 
v_reuseFailAlloc_1771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1771_, 0, v_a_1765_);
v___x_1770_ = v_reuseFailAlloc_1771_;
goto v_reusejp_1769_;
}
v_reusejp_1769_:
{
return v___x_1770_;
}
}
}
}
else
{
lean_object* v_a_1773_; lean_object* v___x_1775_; uint8_t v_isShared_1776_; uint8_t v_isSharedCheck_1780_; 
lean_dec_ref_known(v___x_1593_, 1);
lean_dec_ref(v___f_1585_);
lean_dec(v_a_1576_);
lean_dec_ref(v_p_1563_);
v_a_1773_ = lean_ctor_get(v___x_1596_, 0);
v_isSharedCheck_1780_ = !lean_is_exclusive(v___x_1596_);
if (v_isSharedCheck_1780_ == 0)
{
v___x_1775_ = v___x_1596_;
v_isShared_1776_ = v_isSharedCheck_1780_;
goto v_resetjp_1774_;
}
else
{
lean_inc(v_a_1773_);
lean_dec(v___x_1596_);
v___x_1775_ = lean_box(0);
v_isShared_1776_ = v_isSharedCheck_1780_;
goto v_resetjp_1774_;
}
v_resetjp_1774_:
{
lean_object* v___x_1778_; 
if (v_isShared_1776_ == 0)
{
v___x_1778_ = v___x_1775_;
goto v_reusejp_1777_;
}
else
{
lean_object* v_reuseFailAlloc_1779_; 
v_reuseFailAlloc_1779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1779_, 0, v_a_1773_);
v___x_1778_ = v_reuseFailAlloc_1779_;
goto v_reusejp_1777_;
}
v_reusejp_1777_:
{
return v___x_1778_;
}
}
}
}
else
{
lean_object* v_a_1781_; lean_object* v___x_1783_; uint8_t v_isShared_1784_; uint8_t v_isSharedCheck_1788_; 
lean_dec_ref_known(v___x_1593_, 1);
lean_dec_ref(v___f_1585_);
lean_dec(v_a_1576_);
lean_dec_ref(v_p_1563_);
v_a_1781_ = lean_ctor_get(v___x_1594_, 0);
v_isSharedCheck_1788_ = !lean_is_exclusive(v___x_1594_);
if (v_isSharedCheck_1788_ == 0)
{
v___x_1783_ = v___x_1594_;
v_isShared_1784_ = v_isSharedCheck_1788_;
goto v_resetjp_1782_;
}
else
{
lean_inc(v_a_1781_);
lean_dec(v___x_1594_);
v___x_1783_ = lean_box(0);
v_isShared_1784_ = v_isSharedCheck_1788_;
goto v_resetjp_1782_;
}
v_resetjp_1782_:
{
lean_object* v___x_1786_; 
if (v_isShared_1784_ == 0)
{
v___x_1786_ = v___x_1783_;
goto v_reusejp_1785_;
}
else
{
lean_object* v_reuseFailAlloc_1787_; 
v_reuseFailAlloc_1787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1787_, 0, v_a_1781_);
v___x_1786_ = v_reuseFailAlloc_1787_;
goto v_reusejp_1785_;
}
v_reusejp_1785_:
{
return v___x_1786_;
}
}
}
}
else
{
lean_object* v___x_1789_; lean_object* v___x_1791_; 
lean_dec(v_a_1587_);
lean_dec_ref(v___f_1585_);
lean_dec(v_a_1576_);
lean_dec_ref(v_p_1563_);
v___x_1789_ = lean_box(0);
if (v_isShared_1590_ == 0)
{
lean_ctor_set(v___x_1589_, 0, v___x_1789_);
v___x_1791_ = v___x_1589_;
goto v_reusejp_1790_;
}
else
{
lean_object* v_reuseFailAlloc_1792_; 
v_reuseFailAlloc_1792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1792_, 0, v___x_1789_);
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
else
{
lean_object* v_a_1794_; lean_object* v___x_1796_; uint8_t v_isShared_1797_; uint8_t v_isSharedCheck_1801_; 
lean_dec_ref(v___f_1585_);
lean_dec(v_a_1576_);
lean_dec_ref(v_p_1563_);
v_a_1794_ = lean_ctor_get(v___x_1586_, 0);
v_isSharedCheck_1801_ = !lean_is_exclusive(v___x_1586_);
if (v_isSharedCheck_1801_ == 0)
{
v___x_1796_ = v___x_1586_;
v_isShared_1797_ = v_isSharedCheck_1801_;
goto v_resetjp_1795_;
}
else
{
lean_inc(v_a_1794_);
lean_dec(v___x_1586_);
v___x_1796_ = lean_box(0);
v_isShared_1797_ = v_isSharedCheck_1801_;
goto v_resetjp_1795_;
}
v_resetjp_1795_:
{
lean_object* v___x_1799_; 
if (v_isShared_1797_ == 0)
{
v___x_1799_ = v___x_1796_;
goto v_reusejp_1798_;
}
else
{
lean_object* v_reuseFailAlloc_1800_; 
v_reuseFailAlloc_1800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1800_, 0, v_a_1794_);
v___x_1799_ = v_reuseFailAlloc_1800_;
goto v_reusejp_1798_;
}
v_reusejp_1798_:
{
return v___x_1799_;
}
}
}
}
}
}
else
{
lean_object* v_a_1803_; lean_object* v___x_1805_; uint8_t v_isShared_1806_; uint8_t v_isSharedCheck_1810_; 
lean_dec_ref(v_p_1563_);
v_a_1803_ = lean_ctor_get(v___x_1575_, 0);
v_isSharedCheck_1810_ = !lean_is_exclusive(v___x_1575_);
if (v_isSharedCheck_1810_ == 0)
{
v___x_1805_ = v___x_1575_;
v_isShared_1806_ = v_isSharedCheck_1810_;
goto v_resetjp_1804_;
}
else
{
lean_inc(v_a_1803_);
lean_dec(v___x_1575_);
v___x_1805_ = lean_box(0);
v_isShared_1806_ = v_isSharedCheck_1810_;
goto v_resetjp_1804_;
}
v_resetjp_1804_:
{
lean_object* v___x_1808_; 
if (v_isShared_1806_ == 0)
{
v___x_1808_ = v___x_1805_;
goto v_reusejp_1807_;
}
else
{
lean_object* v_reuseFailAlloc_1809_; 
v_reuseFailAlloc_1809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1809_, 0, v_a_1803_);
v___x_1808_ = v_reuseFailAlloc_1809_;
goto v_reusejp_1807_;
}
v_reusejp_1807_:
{
return v___x_1808_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Int_Internal_Linear_Poly_normCommRing_x3f___boxed(lean_object* v_p_1811_, lean_object* v_a_1812_, lean_object* v_a_1813_, lean_object* v_a_1814_, lean_object* v_a_1815_, lean_object* v_a_1816_, lean_object* v_a_1817_, lean_object* v_a_1818_, lean_object* v_a_1819_, lean_object* v_a_1820_, lean_object* v_a_1821_, lean_object* v_a_1822_){
_start:
{
lean_object* v_res_1823_; 
v_res_1823_ = l_Int_Internal_Linear_Poly_normCommRing_x3f(v_p_1811_, v_a_1812_, v_a_1813_, v_a_1814_, v_a_1815_, v_a_1816_, v_a_1817_, v_a_1818_, v_a_1819_, v_a_1820_, v_a_1821_);
lean_dec(v_a_1821_);
lean_dec_ref(v_a_1820_);
lean_dec(v_a_1819_);
lean_dec_ref(v_a_1818_);
lean_dec(v_a_1817_);
lean_dec_ref(v_a_1816_);
lean_dec(v_a_1815_);
lean_dec_ref(v_a_1814_);
lean_dec(v_a_1813_);
lean_dec(v_a_1812_);
return v_res_1823_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1(lean_object* v_cls_1824_, lean_object* v_msg_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_){
_start:
{
lean_object* v___x_1838_; 
v___x_1838_ = l_Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1___redArg(v_cls_1824_, v_msg_1825_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_);
return v___x_1838_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1___boxed(lean_object* v_cls_1839_, lean_object* v_msg_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_){
_start:
{
lean_object* v_res_1853_; 
v_res_1853_ = l_Lean_addTrace___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__1(v_cls_1839_, v_msg_1840_, v___y_1841_, v___y_1842_, v___y_1843_, v___y_1844_, v___y_1845_, v___y_1846_, v___y_1847_, v___y_1848_, v___y_1849_, v___y_1850_, v___y_1851_);
lean_dec(v___y_1851_);
lean_dec_ref(v___y_1850_);
lean_dec(v___y_1849_);
lean_dec_ref(v___y_1848_);
lean_dec(v___y_1847_);
lean_dec_ref(v___y_1846_);
lean_dec(v___y_1845_);
lean_dec_ref(v___y_1844_);
lean_dec(v___y_1843_);
lean_dec(v___y_1842_);
lean_dec_ref(v___y_1841_);
return v_res_1853_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4_spec__7_spec__11(lean_object* v_00_u03b1_1854_, lean_object* v_msg_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_){
_start:
{
lean_object* v___x_1868_; 
v___x_1868_ = l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4_spec__7_spec__11___redArg(v_msg_1855_, v___y_1863_, v___y_1864_, v___y_1865_, v___y_1866_);
return v___x_1868_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4_spec__7_spec__11___boxed(lean_object* v_00_u03b1_1869_, lean_object* v_msg_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_){
_start:
{
lean_object* v_res_1883_; 
v_res_1883_ = l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_denoteNum___at___00Lean_Meta_Sym_Arith_denotePoly___at___00Int_Internal_Linear_Poly_normCommRing_x3f_spec__0_spec__0_spec__1_spec__4_spec__7_spec__11(v_00_u03b1_1869_, v_msg_1870_, v___y_1871_, v___y_1872_, v___y_1873_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_, v___y_1880_, v___y_1881_);
lean_dec(v___y_1881_);
lean_dec_ref(v___y_1880_);
lean_dec(v___y_1879_);
lean_dec_ref(v___y_1878_);
lean_dec(v___y_1877_);
lean_dec_ref(v___y_1876_);
lean_dec(v___y_1875_);
lean_dec_ref(v___y_1874_);
lean_dec(v___y_1873_);
lean_dec(v___y_1872_);
lean_dec_ref(v___y_1871_);
return v_res_1883_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingId(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Var(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Reify(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_DenoteExpr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_SafePoly(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingId(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Var(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Reify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_DenoteExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_SafePoly(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingId(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Var(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Reify(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_DenoteExpr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_SafePoly(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingId(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Var(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Reify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_DenoteExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_SafePoly(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing(builtin);
}
#ifdef __cplusplus
}
#endif
