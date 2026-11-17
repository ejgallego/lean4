// Lean compiler output
// Module: Lean.Meta.Decidable
// Imports: public import Lean.Meta.WHNF
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(lean_object*, lean_object*);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*, uint8_t, uint8_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_projectCore_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* lean_replace_expr(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_getBoolDecision_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_getBoolDecision_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_getBoolDecision_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_getBoolDecision_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_getBoolDecision_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l_Lean_Meta_getBoolDecision_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_getBoolDecision_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Meta_getBoolDecision_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_getBoolDecision_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l_Lean_Meta_getBoolDecision_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_getBoolDecision_x3f___closed__1_value;
static const lean_string_object l_Lean_Meta_getBoolDecision_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "decide"};
static const lean_object* l_Lean_Meta_getBoolDecision_x3f___closed__2 = (const lean_object*)&l_Lean_Meta_getBoolDecision_x3f___closed__2_value;
static const lean_ctor_object l_Lean_Meta_getBoolDecision_x3f___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_getBoolDecision_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_ctor_object l_Lean_Meta_getBoolDecision_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_getBoolDecision_x3f___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_getBoolDecision_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(16, 96, 65, 173, 152, 155, 4, 222)}};
static const lean_object* l_Lean_Meta_getBoolDecision_x3f___closed__3 = (const lean_object*)&l_Lean_Meta_getBoolDecision_x3f___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_getBoolDecision_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getBoolDecision_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_getGuardDecision___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Meta_getGuardDecision___closed__0 = (const lean_object*)&l_Lean_Meta_getGuardDecision___closed__0_value;
static const lean_string_object l_Lean_Meta_getGuardDecision___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Meta_getGuardDecision___closed__1 = (const lean_object*)&l_Lean_Meta_getGuardDecision___closed__1_value;
static const lean_ctor_object l_Lean_Meta_getGuardDecision___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_getGuardDecision___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_getGuardDecision___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_getGuardDecision___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_getGuardDecision___closed__1_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Meta_getGuardDecision___closed__2 = (const lean_object*)&l_Lean_Meta_getGuardDecision___closed__2_value;
static lean_once_cell_t l_Lean_Meta_getGuardDecision___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getGuardDecision___closed__3;
static const lean_string_object l_Lean_Meta_getGuardDecision___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_getGuardDecision___closed__4 = (const lean_object*)&l_Lean_Meta_getGuardDecision___closed__4_value;
static const lean_ctor_object l_Lean_Meta_getGuardDecision___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_getGuardDecision___closed__4_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_getGuardDecision___closed__5 = (const lean_object*)&l_Lean_Meta_getGuardDecision___closed__5_value;
static lean_once_cell_t l_Lean_Meta_getGuardDecision___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getGuardDecision___closed__6;
static lean_once_cell_t l_Lean_Meta_getGuardDecision___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getGuardDecision___closed__7;
static lean_once_cell_t l_Lean_Meta_getGuardDecision___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getGuardDecision___closed__8;
static const lean_ctor_object l_Lean_Meta_getGuardDecision___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_getGuardDecision___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l_Lean_Meta_getGuardDecision___closed__9 = (const lean_object*)&l_Lean_Meta_getGuardDecision___closed__9_value;
static lean_once_cell_t l_Lean_Meta_getGuardDecision___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getGuardDecision___closed__10;
static const lean_string_object l_Lean_Meta_getGuardDecision___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "instDecidableEqBool"};
static const lean_object* l_Lean_Meta_getGuardDecision___closed__11 = (const lean_object*)&l_Lean_Meta_getGuardDecision___closed__11_value;
static const lean_ctor_object l_Lean_Meta_getGuardDecision___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_getGuardDecision___closed__11_value),LEAN_SCALAR_PTR_LITERAL(31, 149, 37, 168, 195, 83, 72, 87)}};
static const lean_object* l_Lean_Meta_getGuardDecision___closed__12 = (const lean_object*)&l_Lean_Meta_getGuardDecision___closed__12_value;
static lean_once_cell_t l_Lean_Meta_getGuardDecision___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getGuardDecision___closed__13;
LEAN_EXPORT lean_object* l_Lean_Meta_getGuardDecision(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getGuardDecision___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkDecisionGuard(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkDecisionGuard___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_normalizeBoolTests___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_normalizeBoolTests___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_normalizeBoolTests(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_normalizeBoolTests___boxed(lean_object*);
static const lean_string_object l_Lean_Meta_canonicalizeIte_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l_Lean_Meta_canonicalizeIte_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_canonicalizeIte_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Meta_canonicalizeIte_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_canonicalizeIte_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(15, 2, 151, 246, 61, 29, 192, 254)}};
static const lean_object* l_Lean_Meta_canonicalizeIte_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_canonicalizeIte_x3f___closed__1_value;
static lean_once_cell_t l_Lean_Meta_canonicalizeIte_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_canonicalizeIte_x3f___closed__2;
static const lean_string_object l_Lean_Meta_canonicalizeIte_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l_Lean_Meta_canonicalizeIte_x3f___closed__3 = (const lean_object*)&l_Lean_Meta_canonicalizeIte_x3f___closed__3_value;
static const lean_ctor_object l_Lean_Meta_canonicalizeIte_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_canonicalizeIte_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(130, 140, 200, 235, 144, 197, 118, 1)}};
static const lean_object* l_Lean_Meta_canonicalizeIte_x3f___closed__4 = (const lean_object*)&l_Lean_Meta_canonicalizeIte_x3f___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Meta_canonicalizeIte_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_canonicalizeItes___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_canonicalizeItes(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_canonicalizeItes___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_canonicalizeDecisionProjections___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_canonicalizeDecisionProjections___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_canonicalizeDecisionProjections(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_canonicalizeDecisionProjections___boxed(lean_object*);
static const lean_string_object l_Lean_Meta_mkDecisionProjectionProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l_Lean_Meta_mkDecisionProjectionProof___closed__0 = (const lean_object*)&l_Lean_Meta_mkDecisionProjectionProof___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkDecisionProjectionProof___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkDecisionProjectionProof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 78, 141, 85, 50, 255, 216, 83)}};
static const lean_object* l_Lean_Meta_mkDecisionProjectionProof___closed__1 = (const lean_object*)&l_Lean_Meta_mkDecisionProjectionProof___closed__1_value;
static const lean_ctor_object l_Lean_Meta_mkDecisionProjectionProof___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_mkDecisionProjectionProof___closed__2 = (const lean_object*)&l_Lean_Meta_mkDecisionProjectionProof___closed__2_value;
static lean_once_cell_t l_Lean_Meta_mkDecisionProjectionProof___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkDecisionProjectionProof___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_mkDecisionProjectionProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkDecisionProjectionProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_reduceDecisionProjection_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* l_Lean_Meta_reduceDecisionProjection_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_reduceDecisionProjection_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Meta_reduceDecisionProjection_x3f___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_getBoolDecision_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_ctor_object l_Lean_Meta_reduceDecisionProjection_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_reduceDecisionProjection_x3f___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_reduceDecisionProjection_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 237, 71, 156, 244, 3, 80, 55)}};
static const lean_object* l_Lean_Meta_reduceDecisionProjection_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_reduceDecisionProjection_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_reduceDecisionProjection_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_reduceDecisionProjection_x3f___boxed(lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "decision projection preparation"};
static const lean_object* l___private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance___closed__0 = (const lean_object*)&l___private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_reduceDecisionProjectionR_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_reduceDecisionProjectionR_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_prepareDecisionProjectionForAbstraction_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_prepareDecisionProjectionForAbstraction_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_getBoolDecision_x3f_spec__0___redArg(lean_object* v_e_1_, lean_object* v___y_2_){
_start:
{
uint8_t v___x_4_; 
v___x_4_ = l_Lean_Expr_hasMVar(v_e_1_);
if (v___x_4_ == 0)
{
lean_object* v___x_5_; 
v___x_5_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5_, 0, v_e_1_);
return v___x_5_;
}
else
{
lean_object* v___x_6_; lean_object* v_mctx_7_; lean_object* v___x_8_; lean_object* v_fst_9_; lean_object* v_snd_10_; lean_object* v___x_11_; lean_object* v_cache_12_; lean_object* v_zetaDeltaFVarIds_13_; lean_object* v_postponed_14_; lean_object* v_diag_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_24_; 
v___x_6_ = lean_st_ref_get(v___y_2_);
v_mctx_7_ = lean_ctor_get(v___x_6_, 0);
lean_inc_ref(v_mctx_7_);
lean_dec(v___x_6_);
v___x_8_ = l_Lean_instantiateMVarsCore(v_mctx_7_, v_e_1_);
v_fst_9_ = lean_ctor_get(v___x_8_, 0);
lean_inc(v_fst_9_);
v_snd_10_ = lean_ctor_get(v___x_8_, 1);
lean_inc(v_snd_10_);
lean_dec_ref(v___x_8_);
v___x_11_ = lean_st_ref_take(v___y_2_);
v_cache_12_ = lean_ctor_get(v___x_11_, 1);
v_zetaDeltaFVarIds_13_ = lean_ctor_get(v___x_11_, 2);
v_postponed_14_ = lean_ctor_get(v___x_11_, 3);
v_diag_15_ = lean_ctor_get(v___x_11_, 4);
v_isSharedCheck_24_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_24_ == 0)
{
lean_object* v_unused_25_; 
v_unused_25_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_25_);
v___x_17_ = v___x_11_;
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_diag_15_);
lean_inc(v_postponed_14_);
lean_inc(v_zetaDeltaFVarIds_13_);
lean_inc(v_cache_12_);
lean_dec(v___x_11_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
lean_object* v___x_20_; 
if (v_isShared_18_ == 0)
{
lean_ctor_set(v___x_17_, 0, v_snd_10_);
v___x_20_ = v___x_17_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v_snd_10_);
lean_ctor_set(v_reuseFailAlloc_23_, 1, v_cache_12_);
lean_ctor_set(v_reuseFailAlloc_23_, 2, v_zetaDeltaFVarIds_13_);
lean_ctor_set(v_reuseFailAlloc_23_, 3, v_postponed_14_);
lean_ctor_set(v_reuseFailAlloc_23_, 4, v_diag_15_);
v___x_20_ = v_reuseFailAlloc_23_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = lean_st_ref_put(v___y_2_, v___x_20_);
v___x_22_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_22_, 0, v_fst_9_);
return v___x_22_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_getBoolDecision_x3f_spec__0___redArg___boxed(lean_object* v_e_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_instantiateMVars___at___00Lean_Meta_getBoolDecision_x3f_spec__0___redArg(v_e_26_, v___y_27_);
lean_dec(v___y_27_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_getBoolDecision_x3f_spec__0(lean_object* v_e_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lean_instantiateMVars___at___00Lean_Meta_getBoolDecision_x3f_spec__0___redArg(v_e_30_, v___y_32_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_getBoolDecision_x3f_spec__0___boxed(lean_object* v_e_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Lean_instantiateMVars___at___00Lean_Meta_getBoolDecision_x3f_spec__0(v_e_37_, v___y_38_, v___y_39_, v___y_40_, v___y_41_);
lean_dec(v___y_41_);
lean_dec_ref(v___y_40_);
lean_dec(v___y_39_);
lean_dec_ref(v___y_38_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getBoolDecision_x3f(lean_object* v_e_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_, lean_object* v_a_55_){
_start:
{
lean_object* v___y_58_; lean_object* v_type_59_; lean_object* v_d_70_; lean_object* v___y_71_; lean_object* v___y_72_; lean_object* v___y_73_; lean_object* v___y_74_; lean_object* v___x_98_; lean_object* v_a_99_; lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_126_; 
v___x_98_ = l_Lean_instantiateMVars___at___00Lean_Meta_getBoolDecision_x3f_spec__0___redArg(v_e_51_, v_a_53_);
v_a_99_ = lean_ctor_get(v___x_98_, 0);
v_isSharedCheck_126_ = !lean_is_exclusive(v___x_98_);
if (v_isSharedCheck_126_ == 0)
{
v___x_101_ = v___x_98_;
v_isShared_102_ = v_isSharedCheck_126_;
goto v_resetjp_100_;
}
else
{
lean_inc(v_a_99_);
lean_dec(v___x_98_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_126_;
goto v_resetjp_100_;
}
v___jp_57_:
{
lean_object* v___x_60_; lean_object* v___x_61_; uint8_t v___x_62_; 
v___x_60_ = ((lean_object*)(l_Lean_Meta_getBoolDecision_x3f___closed__1));
v___x_61_ = lean_unsigned_to_nat(1u);
v___x_62_ = l_Lean_Expr_isAppOfArity(v_type_59_, v___x_60_, v___x_61_);
if (v___x_62_ == 0)
{
lean_object* v___x_63_; lean_object* v___x_64_; 
lean_dec_ref(v_type_59_);
lean_dec_ref(v___y_58_);
v___x_63_ = lean_box(0);
v___x_64_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_64_, 0, v___x_63_);
return v___x_64_;
}
else
{
lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_65_ = l_Lean_Expr_appArg_x21(v_type_59_);
lean_dec_ref(v_type_59_);
v___x_66_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
lean_ctor_set(v___x_66_, 1, v___y_58_);
v___x_67_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_67_, 0, v___x_66_);
v___x_68_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_68_, 0, v___x_67_);
return v___x_68_;
}
}
v___jp_69_:
{
lean_object* v___x_75_; 
lean_inc(v___y_74_);
lean_inc_ref(v___y_73_);
lean_inc(v___y_72_);
lean_inc_ref(v___y_71_);
lean_inc_ref(v_d_70_);
v___x_75_ = lean_infer_type(v_d_70_, v___y_71_, v___y_72_, v___y_73_, v___y_74_);
if (lean_obj_tag(v___x_75_) == 0)
{
lean_object* v_a_76_; lean_object* v___x_77_; lean_object* v___x_78_; uint8_t v___x_79_; 
v_a_76_ = lean_ctor_get(v___x_75_, 0);
lean_inc(v_a_76_);
lean_dec_ref_known(v___x_75_, 1);
v___x_77_ = ((lean_object*)(l_Lean_Meta_getBoolDecision_x3f___closed__1));
v___x_78_ = lean_unsigned_to_nat(1u);
v___x_79_ = l_Lean_Expr_isAppOfArity(v_a_76_, v___x_77_, v___x_78_);
if (v___x_79_ == 0)
{
lean_object* v___x_80_; 
v___x_80_ = l_Lean_Meta_whnfR(v_a_76_, v___y_71_, v___y_72_, v___y_73_, v___y_74_);
if (lean_obj_tag(v___x_80_) == 0)
{
lean_object* v_a_81_; 
v_a_81_ = lean_ctor_get(v___x_80_, 0);
lean_inc(v_a_81_);
lean_dec_ref_known(v___x_80_, 1);
v___y_58_ = v_d_70_;
v_type_59_ = v_a_81_;
goto v___jp_57_;
}
else
{
lean_object* v_a_82_; lean_object* v___x_84_; uint8_t v_isShared_85_; uint8_t v_isSharedCheck_89_; 
lean_dec_ref(v_d_70_);
v_a_82_ = lean_ctor_get(v___x_80_, 0);
v_isSharedCheck_89_ = !lean_is_exclusive(v___x_80_);
if (v_isSharedCheck_89_ == 0)
{
v___x_84_ = v___x_80_;
v_isShared_85_ = v_isSharedCheck_89_;
goto v_resetjp_83_;
}
else
{
lean_inc(v_a_82_);
lean_dec(v___x_80_);
v___x_84_ = lean_box(0);
v_isShared_85_ = v_isSharedCheck_89_;
goto v_resetjp_83_;
}
v_resetjp_83_:
{
lean_object* v___x_87_; 
if (v_isShared_85_ == 0)
{
v___x_87_ = v___x_84_;
goto v_reusejp_86_;
}
else
{
lean_object* v_reuseFailAlloc_88_; 
v_reuseFailAlloc_88_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_88_, 0, v_a_82_);
v___x_87_ = v_reuseFailAlloc_88_;
goto v_reusejp_86_;
}
v_reusejp_86_:
{
return v___x_87_;
}
}
}
}
else
{
v___y_58_ = v_d_70_;
v_type_59_ = v_a_76_;
goto v___jp_57_;
}
}
else
{
lean_object* v_a_90_; lean_object* v___x_92_; uint8_t v_isShared_93_; uint8_t v_isSharedCheck_97_; 
lean_dec_ref(v_d_70_);
v_a_90_ = lean_ctor_get(v___x_75_, 0);
v_isSharedCheck_97_ = !lean_is_exclusive(v___x_75_);
if (v_isSharedCheck_97_ == 0)
{
v___x_92_ = v___x_75_;
v_isShared_93_ = v_isSharedCheck_97_;
goto v_resetjp_91_;
}
else
{
lean_inc(v_a_90_);
lean_dec(v___x_75_);
v___x_92_ = lean_box(0);
v_isShared_93_ = v_isSharedCheck_97_;
goto v_resetjp_91_;
}
v_resetjp_91_:
{
lean_object* v___x_95_; 
if (v_isShared_93_ == 0)
{
v___x_95_ = v___x_92_;
goto v_reusejp_94_;
}
else
{
lean_object* v_reuseFailAlloc_96_; 
v_reuseFailAlloc_96_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_96_, 0, v_a_90_);
v___x_95_ = v_reuseFailAlloc_96_;
goto v_reusejp_94_;
}
v_reusejp_94_:
{
return v___x_95_;
}
}
}
}
v_resetjp_100_:
{
lean_object* v___x_103_; lean_object* v___y_105_; lean_object* v___y_106_; lean_object* v___y_107_; lean_object* v___y_108_; 
v___x_103_ = l_Lean_Expr_consumeMData(v_a_99_);
lean_dec(v_a_99_);
if (lean_obj_tag(v___x_103_) == 11)
{
lean_object* v_typeName_117_; 
v_typeName_117_ = lean_ctor_get(v___x_103_, 0);
if (lean_obj_tag(v_typeName_117_) == 1)
{
lean_object* v_pre_118_; 
v_pre_118_ = lean_ctor_get(v_typeName_117_, 0);
if (lean_obj_tag(v_pre_118_) == 0)
{
lean_object* v_idx_119_; lean_object* v_struct_120_; lean_object* v_str_121_; lean_object* v___x_122_; uint8_t v___x_123_; 
v_idx_119_ = lean_ctor_get(v___x_103_, 1);
v_struct_120_ = lean_ctor_get(v___x_103_, 2);
v_str_121_ = lean_ctor_get(v_typeName_117_, 1);
v___x_122_ = ((lean_object*)(l_Lean_Meta_getBoolDecision_x3f___closed__0));
v___x_123_ = lean_string_dec_eq(v_str_121_, v___x_122_);
if (v___x_123_ == 0)
{
v___y_105_ = v_a_52_;
v___y_106_ = v_a_53_;
v___y_107_ = v_a_54_;
v___y_108_ = v_a_55_;
goto v___jp_104_;
}
else
{
lean_object* v___x_124_; uint8_t v___x_125_; 
v___x_124_ = lean_unsigned_to_nat(0u);
v___x_125_ = lean_nat_dec_eq(v_idx_119_, v___x_124_);
if (v___x_125_ == 0)
{
v___y_105_ = v_a_52_;
v___y_106_ = v_a_53_;
v___y_107_ = v_a_54_;
v___y_108_ = v_a_55_;
goto v___jp_104_;
}
else
{
lean_inc_ref(v_struct_120_);
lean_dec_ref_known(v___x_103_, 3);
lean_del_object(v___x_101_);
v_d_70_ = v_struct_120_;
v___y_71_ = v_a_52_;
v___y_72_ = v_a_53_;
v___y_73_ = v_a_54_;
v___y_74_ = v_a_55_;
goto v___jp_69_;
}
}
}
else
{
v___y_105_ = v_a_52_;
v___y_106_ = v_a_53_;
v___y_107_ = v_a_54_;
v___y_108_ = v_a_55_;
goto v___jp_104_;
}
}
else
{
v___y_105_ = v_a_52_;
v___y_106_ = v_a_53_;
v___y_107_ = v_a_54_;
v___y_108_ = v_a_55_;
goto v___jp_104_;
}
}
else
{
v___y_105_ = v_a_52_;
v___y_106_ = v_a_53_;
v___y_107_ = v_a_54_;
v___y_108_ = v_a_55_;
goto v___jp_104_;
}
v___jp_104_:
{
lean_object* v___x_109_; lean_object* v___x_110_; uint8_t v___x_111_; 
v___x_109_ = ((lean_object*)(l_Lean_Meta_getBoolDecision_x3f___closed__3));
v___x_110_ = lean_unsigned_to_nat(2u);
v___x_111_ = l_Lean_Expr_isAppOfArity(v___x_103_, v___x_109_, v___x_110_);
if (v___x_111_ == 0)
{
lean_object* v___x_112_; lean_object* v___x_114_; 
lean_dec_ref(v___x_103_);
v___x_112_ = lean_box(0);
if (v_isShared_102_ == 0)
{
lean_ctor_set(v___x_101_, 0, v___x_112_);
v___x_114_ = v___x_101_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_115_; 
v_reuseFailAlloc_115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_115_, 0, v___x_112_);
v___x_114_ = v_reuseFailAlloc_115_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
return v___x_114_;
}
}
else
{
lean_object* v___x_116_; 
lean_del_object(v___x_101_);
v___x_116_ = l_Lean_Expr_appArg_x21(v___x_103_);
lean_dec_ref(v___x_103_);
v_d_70_ = v___x_116_;
v___y_71_ = v___y_105_;
v___y_72_ = v___y_106_;
v___y_73_ = v___y_107_;
v___y_74_ = v___y_108_;
goto v___jp_69_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getBoolDecision_x3f___boxed(lean_object* v_e_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_){
_start:
{
lean_object* v_res_133_; 
v_res_133_ = l_Lean_Meta_getBoolDecision_x3f(v_e_127_, v_a_128_, v_a_129_, v_a_130_, v_a_131_);
lean_dec(v_a_131_);
lean_dec_ref(v_a_130_);
lean_dec(v_a_129_);
lean_dec_ref(v_a_128_);
return v_res_133_;
}
}
static lean_object* _init_l_Lean_Meta_getGuardDecision___closed__3(void){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_139_ = lean_box(0);
v___x_140_ = ((lean_object*)(l_Lean_Meta_getGuardDecision___closed__2));
v___x_141_ = l_Lean_mkConst(v___x_140_, v___x_139_);
return v___x_141_;
}
}
static lean_object* _init_l_Lean_Meta_getGuardDecision___closed__6(void){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_145_ = lean_unsigned_to_nat(1u);
v___x_146_ = l_Lean_Level_ofNat(v___x_145_);
return v___x_146_;
}
}
static lean_object* _init_l_Lean_Meta_getGuardDecision___closed__7(void){
_start:
{
lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_147_ = lean_box(0);
v___x_148_ = lean_obj_once(&l_Lean_Meta_getGuardDecision___closed__6, &l_Lean_Meta_getGuardDecision___closed__6_once, _init_l_Lean_Meta_getGuardDecision___closed__6);
v___x_149_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_149_, 0, v___x_148_);
lean_ctor_set(v___x_149_, 1, v___x_147_);
return v___x_149_;
}
}
static lean_object* _init_l_Lean_Meta_getGuardDecision___closed__8(void){
_start:
{
lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_150_ = lean_obj_once(&l_Lean_Meta_getGuardDecision___closed__7, &l_Lean_Meta_getGuardDecision___closed__7_once, _init_l_Lean_Meta_getGuardDecision___closed__7);
v___x_151_ = ((lean_object*)(l_Lean_Meta_getGuardDecision___closed__5));
v___x_152_ = l_Lean_mkConst(v___x_151_, v___x_150_);
return v___x_152_;
}
}
static lean_object* _init_l_Lean_Meta_getGuardDecision___closed__10(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_155_ = lean_box(0);
v___x_156_ = ((lean_object*)(l_Lean_Meta_getGuardDecision___closed__9));
v___x_157_ = l_Lean_mkConst(v___x_156_, v___x_155_);
return v___x_157_;
}
}
static lean_object* _init_l_Lean_Meta_getGuardDecision___closed__13(void){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_161_ = lean_box(0);
v___x_162_ = ((lean_object*)(l_Lean_Meta_getGuardDecision___closed__12));
v___x_163_ = l_Lean_mkConst(v___x_162_, v___x_161_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getGuardDecision(lean_object* v_c_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_){
_start:
{
lean_object* v___x_170_; 
lean_inc_ref(v_c_164_);
v___x_170_ = l_Lean_Meta_getBoolDecision_x3f(v_c_164_, v_a_165_, v_a_166_, v_a_167_, v_a_168_);
if (lean_obj_tag(v___x_170_) == 0)
{
lean_object* v_a_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_189_; 
v_a_171_ = lean_ctor_get(v___x_170_, 0);
v_isSharedCheck_189_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_189_ == 0)
{
v___x_173_ = v___x_170_;
v_isShared_174_ = v_isSharedCheck_189_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_a_171_);
lean_dec(v___x_170_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_189_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
if (lean_obj_tag(v_a_171_) == 1)
{
lean_object* v_val_175_; lean_object* v___x_177_; 
lean_dec_ref(v_c_164_);
v_val_175_ = lean_ctor_get(v_a_171_, 0);
lean_inc(v_val_175_);
lean_dec_ref_known(v_a_171_, 1);
if (v_isShared_174_ == 0)
{
lean_ctor_set(v___x_173_, 0, v_val_175_);
v___x_177_ = v___x_173_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v_val_175_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
else
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_187_; 
lean_dec(v_a_171_);
v___x_179_ = lean_obj_once(&l_Lean_Meta_getGuardDecision___closed__3, &l_Lean_Meta_getGuardDecision___closed__3_once, _init_l_Lean_Meta_getGuardDecision___closed__3);
v___x_180_ = lean_obj_once(&l_Lean_Meta_getGuardDecision___closed__8, &l_Lean_Meta_getGuardDecision___closed__8_once, _init_l_Lean_Meta_getGuardDecision___closed__8);
v___x_181_ = lean_obj_once(&l_Lean_Meta_getGuardDecision___closed__10, &l_Lean_Meta_getGuardDecision___closed__10_once, _init_l_Lean_Meta_getGuardDecision___closed__10);
lean_inc_ref(v_c_164_);
v___x_182_ = l_Lean_mkApp3(v___x_180_, v___x_181_, v_c_164_, v___x_179_);
v___x_183_ = lean_obj_once(&l_Lean_Meta_getGuardDecision___closed__13, &l_Lean_Meta_getGuardDecision___closed__13_once, _init_l_Lean_Meta_getGuardDecision___closed__13);
v___x_184_ = l_Lean_mkAppB(v___x_183_, v_c_164_, v___x_179_);
v___x_185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_185_, 0, v___x_182_);
lean_ctor_set(v___x_185_, 1, v___x_184_);
if (v_isShared_174_ == 0)
{
lean_ctor_set(v___x_173_, 0, v___x_185_);
v___x_187_ = v___x_173_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v___x_185_);
v___x_187_ = v_reuseFailAlloc_188_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
return v___x_187_;
}
}
}
}
else
{
lean_object* v_a_190_; lean_object* v___x_192_; uint8_t v_isShared_193_; uint8_t v_isSharedCheck_197_; 
lean_dec_ref(v_c_164_);
v_a_190_ = lean_ctor_get(v___x_170_, 0);
v_isSharedCheck_197_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_197_ == 0)
{
v___x_192_ = v___x_170_;
v_isShared_193_ = v_isSharedCheck_197_;
goto v_resetjp_191_;
}
else
{
lean_inc(v_a_190_);
lean_dec(v___x_170_);
v___x_192_ = lean_box(0);
v_isShared_193_ = v_isSharedCheck_197_;
goto v_resetjp_191_;
}
v_resetjp_191_:
{
lean_object* v___x_195_; 
if (v_isShared_193_ == 0)
{
v___x_195_ = v___x_192_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_196_; 
v_reuseFailAlloc_196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_196_, 0, v_a_190_);
v___x_195_ = v_reuseFailAlloc_196_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
return v___x_195_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getGuardDecision___boxed(lean_object* v_c_198_, lean_object* v_a_199_, lean_object* v_a_200_, lean_object* v_a_201_, lean_object* v_a_202_, lean_object* v_a_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l_Lean_Meta_getGuardDecision(v_c_198_, v_a_199_, v_a_200_, v_a_201_, v_a_202_);
lean_dec(v_a_202_);
lean_dec_ref(v_a_201_);
lean_dec(v_a_200_);
lean_dec_ref(v_a_199_);
return v_res_204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkDecisionGuard(lean_object* v_p_205_, lean_object* v_d_206_){
_start:
{
lean_object* v___x_211_; lean_object* v___x_212_; uint8_t v___x_213_; 
v___x_211_ = ((lean_object*)(l_Lean_Meta_getGuardDecision___closed__5));
v___x_212_ = lean_unsigned_to_nat(3u);
v___x_213_ = l_Lean_Expr_isAppOfArity(v_p_205_, v___x_211_, v___x_212_);
if (v___x_213_ == 0)
{
goto v___jp_207_;
}
else
{
lean_object* v___x_214_; lean_object* v___x_215_; uint8_t v___x_216_; 
v___x_214_ = ((lean_object*)(l_Lean_Meta_getGuardDecision___closed__12));
v___x_215_ = lean_unsigned_to_nat(2u);
v___x_216_ = l_Lean_Expr_isAppOfArity(v_d_206_, v___x_214_, v___x_215_);
if (v___x_216_ == 0)
{
goto v___jp_207_;
}
else
{
lean_object* v___x_217_; lean_object* v___x_218_; uint8_t v___x_219_; 
v___x_217_ = l_Lean_Expr_appArg_x21(v_p_205_);
v___x_218_ = ((lean_object*)(l_Lean_Meta_getGuardDecision___closed__2));
v___x_219_ = l_Lean_Expr_isConstOf(v___x_217_, v___x_218_);
if (v___x_219_ == 0)
{
lean_dec_ref(v___x_217_);
goto v___jp_207_;
}
else
{
lean_object* v___x_220_; uint8_t v___x_221_; 
v___x_220_ = l_Lean_Expr_appArg_x21(v_d_206_);
v___x_221_ = lean_expr_eqv(v___x_220_, v___x_217_);
lean_dec_ref(v___x_217_);
lean_dec_ref(v___x_220_);
if (v___x_221_ == 0)
{
goto v___jp_207_;
}
else
{
lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; uint8_t v___x_226_; 
v___x_222_ = l_Lean_Expr_appFn_x21(v_d_206_);
v___x_223_ = l_Lean_Expr_appArg_x21(v___x_222_);
lean_dec_ref(v___x_222_);
v___x_224_ = l_Lean_Expr_appFn_x21(v_p_205_);
v___x_225_ = l_Lean_Expr_appArg_x21(v___x_224_);
lean_dec_ref(v___x_224_);
v___x_226_ = lean_expr_eqv(v___x_223_, v___x_225_);
lean_dec_ref(v___x_223_);
if (v___x_226_ == 0)
{
lean_dec_ref(v___x_225_);
goto v___jp_207_;
}
else
{
lean_dec_ref(v_d_206_);
return v___x_225_;
}
}
}
}
}
v___jp_207_:
{
lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_208_ = ((lean_object*)(l_Lean_Meta_getBoolDecision_x3f___closed__1));
v___x_209_ = lean_unsigned_to_nat(0u);
v___x_210_ = l_Lean_mkProj(v___x_208_, v___x_209_, v_d_206_);
return v___x_210_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkDecisionGuard___boxed(lean_object* v_p_227_, lean_object* v_d_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l_Lean_Meta_mkDecisionGuard(v_p_227_, v_d_228_);
lean_dec_ref(v_p_227_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_normalizeBoolTests___lam__0(lean_object* v_x_230_){
_start:
{
if (lean_obj_tag(v_x_230_) == 11)
{
lean_object* v_typeName_231_; 
v_typeName_231_ = lean_ctor_get(v_x_230_, 0);
if (lean_obj_tag(v_typeName_231_) == 1)
{
lean_object* v_pre_232_; 
v_pre_232_ = lean_ctor_get(v_typeName_231_, 0);
if (lean_obj_tag(v_pre_232_) == 0)
{
lean_object* v_idx_233_; lean_object* v_struct_234_; lean_object* v_str_235_; lean_object* v___x_236_; uint8_t v___x_237_; 
v_idx_233_ = lean_ctor_get(v_x_230_, 1);
v_struct_234_ = lean_ctor_get(v_x_230_, 2);
v_str_235_ = lean_ctor_get(v_typeName_231_, 1);
v___x_236_ = ((lean_object*)(l_Lean_Meta_getBoolDecision_x3f___closed__0));
v___x_237_ = lean_string_dec_eq(v_str_235_, v___x_236_);
if (v___x_237_ == 0)
{
lean_object* v___x_238_; 
v___x_238_ = lean_box(0);
return v___x_238_;
}
else
{
lean_object* v___x_239_; uint8_t v___x_240_; 
v___x_239_ = lean_unsigned_to_nat(0u);
v___x_240_ = lean_nat_dec_eq(v_idx_233_, v___x_239_);
if (v___x_240_ == 0)
{
lean_object* v___x_241_; 
v___x_241_ = lean_box(0);
return v___x_241_;
}
else
{
lean_object* v___x_242_; lean_object* v___x_243_; uint8_t v___x_244_; 
v___x_242_ = ((lean_object*)(l_Lean_Meta_getGuardDecision___closed__12));
v___x_243_ = lean_unsigned_to_nat(2u);
v___x_244_ = l_Lean_Expr_isAppOfArity(v_struct_234_, v___x_242_, v___x_243_);
if (v___x_244_ == 0)
{
lean_object* v___x_245_; 
v___x_245_ = lean_box(0);
return v___x_245_;
}
else
{
lean_object* v___x_246_; lean_object* v___x_247_; uint8_t v___x_248_; 
v___x_246_ = l_Lean_Expr_appArg_x21(v_struct_234_);
v___x_247_ = ((lean_object*)(l_Lean_Meta_getGuardDecision___closed__2));
v___x_248_ = l_Lean_Expr_isConstOf(v___x_246_, v___x_247_);
lean_dec_ref(v___x_246_);
if (v___x_248_ == 0)
{
lean_object* v___x_249_; 
v___x_249_ = lean_box(0);
return v___x_249_;
}
else
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_250_ = l_Lean_Expr_appFn_x21(v_struct_234_);
v___x_251_ = l_Lean_Expr_appArg_x21(v___x_250_);
lean_dec_ref(v___x_250_);
v___x_252_ = l_Lean_Meta_normalizeBoolTests(v___x_251_);
lean_dec_ref(v___x_251_);
v___x_253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
return v___x_253_;
}
}
}
}
}
else
{
lean_object* v___x_254_; 
v___x_254_ = lean_box(0);
return v___x_254_;
}
}
else
{
lean_object* v___x_255_; 
v___x_255_ = lean_box(0);
return v___x_255_;
}
}
else
{
lean_object* v___x_256_; 
v___x_256_ = lean_box(0);
return v___x_256_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_normalizeBoolTests___lam__0___boxed(lean_object* v_x_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = l_Lean_Meta_normalizeBoolTests___lam__0(v_x_257_);
lean_dec_ref(v_x_257_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_normalizeBoolTests(lean_object* v_e_259_){
_start:
{
lean_object* v___f_260_; lean_object* v___x_261_; 
v___f_260_ = lean_alloc_closure((void*)(l_Lean_Meta_normalizeBoolTests___lam__0___boxed), 1, 0);
v___x_261_ = lean_replace_expr(v___f_260_, v_e_259_);
lean_dec_ref(v___f_260_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_normalizeBoolTests___boxed(lean_object* v_e_262_){
_start:
{
lean_object* v_res_263_; 
v_res_263_ = l_Lean_Meta_normalizeBoolTests(v_e_262_);
lean_dec_ref(v_e_262_);
return v_res_263_;
}
}
static lean_object* _init_l_Lean_Meta_canonicalizeIte_x3f___closed__2(void){
_start:
{
lean_object* v___x_267_; lean_object* v_dummy_268_; 
v___x_267_ = lean_box(0);
v_dummy_268_ = l_Lean_Expr_sort___override(v___x_267_);
return v_dummy_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_canonicalizeIte_x3f(lean_object* v_e_272_){
_start:
{
lean_object* v_n_273_; lean_object* v___x_274_; uint8_t v___x_275_; 
v_n_273_ = l_Lean_Expr_getAppNumArgs(v_e_272_);
v___x_274_ = lean_unsigned_to_nat(5u);
v___x_275_ = lean_nat_dec_le(v___x_274_, v_n_273_);
if (v___x_275_ == 0)
{
lean_object* v___x_276_; 
lean_dec(v_n_273_);
lean_dec_ref(v_e_272_);
v___x_276_ = lean_box(0);
return v___x_276_;
}
else
{
lean_object* v___x_277_; lean_object* v___x_278_; uint8_t v___x_279_; 
v___x_277_ = l_Lean_Expr_getAppFn(v_e_272_);
v___x_278_ = ((lean_object*)(l_Lean_Meta_canonicalizeIte_x3f___closed__1));
v___x_279_ = l_Lean_Expr_isConstOf(v___x_277_, v___x_278_);
if (v___x_279_ == 0)
{
lean_object* v___x_280_; 
lean_dec_ref(v___x_277_);
lean_dec(v_n_273_);
lean_dec_ref(v_e_272_);
v___x_280_ = lean_box(0);
return v___x_280_;
}
else
{
lean_object* v___x_281_; lean_object* v_dummy_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_281_ = l_Lean_instInhabitedExpr;
v_dummy_282_ = lean_obj_once(&l_Lean_Meta_canonicalizeIte_x3f___closed__2, &l_Lean_Meta_canonicalizeIte_x3f___closed__2_once, _init_l_Lean_Meta_canonicalizeIte_x3f___closed__2);
lean_inc(v_n_273_);
v___x_283_ = lean_mk_array(v_n_273_, v_dummy_282_);
v___x_284_ = lean_unsigned_to_nat(1u);
v___x_285_ = lean_nat_sub(v_n_273_, v___x_284_);
v___x_286_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_272_, v___x_283_, v___x_285_);
v___x_287_ = ((lean_object*)(l_Lean_Meta_canonicalizeIte_x3f___closed__4));
v___x_288_ = l_Lean_Expr_constLevels_x21(v___x_277_);
lean_dec_ref(v___x_277_);
v___x_289_ = l_Lean_mkConst(v___x_287_, v___x_288_);
v___x_290_ = lean_unsigned_to_nat(0u);
v___x_291_ = lean_array_get_borrowed(v___x_281_, v___x_286_, v___x_290_);
v___x_292_ = lean_array_get_borrowed(v___x_281_, v___x_286_, v___x_284_);
v___x_293_ = lean_unsigned_to_nat(2u);
v___x_294_ = lean_array_get_borrowed(v___x_281_, v___x_286_, v___x_293_);
lean_inc(v___x_294_);
v___x_295_ = l_Lean_Meta_mkDecisionGuard(v___x_292_, v___x_294_);
v___x_296_ = lean_unsigned_to_nat(3u);
v___x_297_ = lean_array_get_borrowed(v___x_281_, v___x_286_, v___x_296_);
v___x_298_ = lean_unsigned_to_nat(4u);
v___x_299_ = lean_array_get_borrowed(v___x_281_, v___x_286_, v___x_298_);
lean_inc(v___x_299_);
lean_inc(v___x_297_);
lean_inc(v___x_291_);
v___x_300_ = l_Lean_mkApp4(v___x_289_, v___x_291_, v___x_295_, v___x_297_, v___x_299_);
v___x_301_ = l_Array_extract___redArg(v___x_286_, v___x_274_, v_n_273_);
lean_dec_ref(v___x_286_);
v___x_302_ = l_Lean_mkAppN(v___x_300_, v___x_301_);
lean_dec_ref(v___x_301_);
v___x_303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_303_, 0, v___x_302_);
return v___x_303_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_canonicalizeItes___lam__0(lean_object* v_e_304_){
_start:
{
lean_object* v___x_305_; 
v___x_305_ = l_Lean_Meta_canonicalizeIte_x3f(v_e_304_);
if (lean_obj_tag(v___x_305_) == 0)
{
return v___x_305_;
}
else
{
lean_object* v_val_306_; lean_object* v___x_308_; uint8_t v_isShared_309_; uint8_t v_isSharedCheck_314_; 
v_val_306_ = lean_ctor_get(v___x_305_, 0);
v_isSharedCheck_314_ = !lean_is_exclusive(v___x_305_);
if (v_isSharedCheck_314_ == 0)
{
v___x_308_ = v___x_305_;
v_isShared_309_ = v_isSharedCheck_314_;
goto v_resetjp_307_;
}
else
{
lean_inc(v_val_306_);
lean_dec(v___x_305_);
v___x_308_ = lean_box(0);
v_isShared_309_ = v_isSharedCheck_314_;
goto v_resetjp_307_;
}
v_resetjp_307_:
{
lean_object* v___x_310_; lean_object* v___x_312_; 
v___x_310_ = l_Lean_Meta_canonicalizeItes(v_val_306_);
lean_dec(v_val_306_);
if (v_isShared_309_ == 0)
{
lean_ctor_set(v___x_308_, 0, v___x_310_);
v___x_312_ = v___x_308_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v___x_310_);
v___x_312_ = v_reuseFailAlloc_313_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
return v___x_312_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_canonicalizeItes(lean_object* v_e_315_){
_start:
{
lean_object* v___f_316_; lean_object* v___x_317_; 
v___f_316_ = lean_alloc_closure((void*)(l_Lean_Meta_canonicalizeItes___lam__0), 1, 0);
v___x_317_ = lean_replace_expr(v___f_316_, v_e_315_);
lean_dec_ref(v___f_316_);
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_canonicalizeItes___boxed(lean_object* v_e_318_){
_start:
{
lean_object* v_res_319_; 
v_res_319_ = l_Lean_Meta_canonicalizeItes(v_e_318_);
lean_dec_ref(v_e_318_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_canonicalizeDecisionProjections___lam__0(lean_object* v_e_320_){
_start:
{
lean_object* v___x_321_; lean_object* v___x_322_; uint8_t v___x_323_; 
v___x_321_ = ((lean_object*)(l_Lean_Meta_getBoolDecision_x3f___closed__3));
v___x_322_ = lean_unsigned_to_nat(2u);
v___x_323_ = l_Lean_Expr_isAppOfArity(v_e_320_, v___x_321_, v___x_322_);
if (v___x_323_ == 0)
{
lean_object* v___x_324_; 
v___x_324_ = lean_box(0);
return v___x_324_;
}
else
{
lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_325_ = ((lean_object*)(l_Lean_Meta_getBoolDecision_x3f___closed__1));
v___x_326_ = lean_unsigned_to_nat(0u);
v___x_327_ = l_Lean_Expr_appArg_x21(v_e_320_);
v___x_328_ = l_Lean_Meta_canonicalizeDecisionProjections(v___x_327_);
lean_dec_ref(v___x_327_);
v___x_329_ = l_Lean_mkProj(v___x_325_, v___x_326_, v___x_328_);
v___x_330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_330_, 0, v___x_329_);
return v___x_330_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_canonicalizeDecisionProjections___lam__0___boxed(lean_object* v_e_331_){
_start:
{
lean_object* v_res_332_; 
v_res_332_ = l_Lean_Meta_canonicalizeDecisionProjections___lam__0(v_e_331_);
lean_dec_ref(v_e_331_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_canonicalizeDecisionProjections(lean_object* v_e_333_){
_start:
{
lean_object* v___f_334_; lean_object* v___x_335_; 
v___f_334_ = lean_alloc_closure((void*)(l_Lean_Meta_canonicalizeDecisionProjections___lam__0___boxed), 1, 0);
v___x_335_ = lean_replace_expr(v___f_334_, v_e_333_);
lean_dec_ref(v___f_334_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_canonicalizeDecisionProjections___boxed(lean_object* v_e_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l_Lean_Meta_canonicalizeDecisionProjections(v_e_336_);
lean_dec_ref(v_e_336_);
return v_res_337_;
}
}
static lean_object* _init_l_Lean_Meta_mkDecisionProjectionProof___closed__3(void){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_344_ = ((lean_object*)(l_Lean_Meta_mkDecisionProjectionProof___closed__2));
v___x_345_ = ((lean_object*)(l_Lean_Meta_mkDecisionProjectionProof___closed__1));
v___x_346_ = l_Lean_mkConst(v___x_345_, v___x_344_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkDecisionProjectionProof(lean_object* v_declName_347_, lean_object* v_levels_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_, lean_object* v_a_352_){
_start:
{
lean_object* v_proof_354_; lean_object* v___x_355_; 
v_proof_354_ = l_Lean_mkConst(v_declName_347_, v_levels_348_);
lean_inc(v_a_352_);
lean_inc_ref(v_a_351_);
lean_inc(v_a_350_);
lean_inc_ref(v_a_349_);
lean_inc_ref(v_proof_354_);
v___x_355_ = lean_infer_type(v_proof_354_, v_a_349_, v_a_350_, v_a_351_, v_a_352_);
if (lean_obj_tag(v___x_355_) == 0)
{
lean_object* v_a_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_370_; 
v_a_356_ = lean_ctor_get(v___x_355_, 0);
v_isSharedCheck_370_ = !lean_is_exclusive(v___x_355_);
if (v_isSharedCheck_370_ == 0)
{
v___x_358_ = v___x_355_;
v_isShared_359_ = v_isSharedCheck_370_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_a_356_);
lean_dec(v___x_355_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_370_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
lean_object* v___x_360_; uint8_t v___x_361_; 
v___x_360_ = l_Lean_Meta_canonicalizeDecisionProjections(v_a_356_);
v___x_361_ = lean_expr_eqv(v_a_356_, v___x_360_);
lean_dec(v_a_356_);
if (v___x_361_ == 0)
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_365_; 
v___x_362_ = lean_obj_once(&l_Lean_Meta_mkDecisionProjectionProof___closed__3, &l_Lean_Meta_mkDecisionProjectionProof___closed__3_once, _init_l_Lean_Meta_mkDecisionProjectionProof___closed__3);
v___x_363_ = l_Lean_mkAppB(v___x_362_, v___x_360_, v_proof_354_);
if (v_isShared_359_ == 0)
{
lean_ctor_set(v___x_358_, 0, v___x_363_);
v___x_365_ = v___x_358_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v___x_363_);
v___x_365_ = v_reuseFailAlloc_366_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
return v___x_365_;
}
}
else
{
lean_object* v___x_368_; 
lean_dec_ref(v___x_360_);
if (v_isShared_359_ == 0)
{
lean_ctor_set(v___x_358_, 0, v_proof_354_);
v___x_368_ = v___x_358_;
goto v_reusejp_367_;
}
else
{
lean_object* v_reuseFailAlloc_369_; 
v_reuseFailAlloc_369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_369_, 0, v_proof_354_);
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
else
{
lean_dec_ref(v_proof_354_);
return v___x_355_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkDecisionProjectionProof___boxed(lean_object* v_declName_371_, lean_object* v_levels_372_, lean_object* v_a_373_, lean_object* v_a_374_, lean_object* v_a_375_, lean_object* v_a_376_, lean_object* v_a_377_){
_start:
{
lean_object* v_res_378_; 
v_res_378_ = l_Lean_Meta_mkDecisionProjectionProof(v_declName_371_, v_levels_372_, v_a_373_, v_a_374_, v_a_375_, v_a_376_);
lean_dec(v_a_376_);
lean_dec_ref(v_a_375_);
lean_dec(v_a_374_);
lean_dec_ref(v_a_373_);
return v_res_378_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_reduceDecisionProjection_x3f(lean_object* v_e_383_){
_start:
{
lean_object* v_d_385_; lean_object* v_e_397_; 
v_e_397_ = l_Lean_Expr_consumeMData(v_e_383_);
if (lean_obj_tag(v_e_397_) == 11)
{
lean_object* v_typeName_404_; 
v_typeName_404_ = lean_ctor_get(v_e_397_, 0);
if (lean_obj_tag(v_typeName_404_) == 1)
{
lean_object* v_pre_405_; 
v_pre_405_ = lean_ctor_get(v_typeName_404_, 0);
if (lean_obj_tag(v_pre_405_) == 0)
{
lean_object* v_idx_406_; lean_object* v_struct_407_; lean_object* v_str_408_; lean_object* v___x_409_; uint8_t v___x_410_; 
v_idx_406_ = lean_ctor_get(v_e_397_, 1);
v_struct_407_ = lean_ctor_get(v_e_397_, 2);
v_str_408_ = lean_ctor_get(v_typeName_404_, 1);
v___x_409_ = ((lean_object*)(l_Lean_Meta_getBoolDecision_x3f___closed__0));
v___x_410_ = lean_string_dec_eq(v_str_408_, v___x_409_);
if (v___x_410_ == 0)
{
goto v___jp_398_;
}
else
{
lean_object* v___x_411_; uint8_t v___x_412_; 
v___x_411_ = lean_unsigned_to_nat(0u);
v___x_412_ = lean_nat_dec_eq(v_idx_406_, v___x_411_);
if (v___x_412_ == 0)
{
goto v___jp_398_;
}
else
{
lean_inc_ref(v_struct_407_);
lean_dec_ref_known(v_e_397_, 3);
v_d_385_ = v_struct_407_;
goto v___jp_384_;
}
}
}
else
{
goto v___jp_398_;
}
}
else
{
goto v___jp_398_;
}
}
else
{
goto v___jp_398_;
}
v___jp_384_:
{
lean_object* v_d_386_; lean_object* v___x_387_; lean_object* v___x_388_; uint8_t v___x_389_; 
v_d_386_ = l_Lean_Expr_consumeMData(v_d_385_);
lean_dec_ref(v_d_385_);
v___x_387_ = ((lean_object*)(l_Lean_Meta_reduceDecisionProjection_x3f___closed__1));
v___x_388_ = lean_unsigned_to_nat(3u);
v___x_389_ = l_Lean_Expr_isAppOfArity(v_d_386_, v___x_387_, v___x_388_);
if (v___x_389_ == 0)
{
lean_object* v___x_390_; 
lean_dec_ref(v_d_386_);
v___x_390_ = lean_box(0);
return v___x_390_;
}
else
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; 
v___x_391_ = lean_unsigned_to_nat(1u);
v___x_392_ = l_Lean_Expr_getAppNumArgs(v_d_386_);
v___x_393_ = lean_nat_sub(v___x_392_, v___x_391_);
lean_dec(v___x_392_);
v___x_394_ = lean_nat_sub(v___x_393_, v___x_391_);
lean_dec(v___x_393_);
v___x_395_ = l_Lean_Expr_getRevArg_x21(v_d_386_, v___x_394_);
lean_dec_ref(v_d_386_);
v___x_396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_396_, 0, v___x_395_);
return v___x_396_;
}
}
v___jp_398_:
{
lean_object* v___x_399_; lean_object* v___x_400_; uint8_t v___x_401_; 
v___x_399_ = ((lean_object*)(l_Lean_Meta_getBoolDecision_x3f___closed__3));
v___x_400_ = lean_unsigned_to_nat(2u);
v___x_401_ = l_Lean_Expr_isAppOfArity(v_e_397_, v___x_399_, v___x_400_);
if (v___x_401_ == 0)
{
lean_object* v___x_402_; 
lean_dec_ref(v_e_397_);
v___x_402_ = lean_box(0);
return v___x_402_;
}
else
{
lean_object* v___x_403_; 
v___x_403_ = l_Lean_Expr_appArg_x21(v_e_397_);
lean_dec_ref(v_e_397_);
v_d_385_ = v___x_403_;
goto v___jp_384_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_reduceDecisionProjection_x3f___boxed(lean_object* v_e_413_){
_start:
{
lean_object* v_res_414_; 
v_res_414_ = l_Lean_Meta_reduceDecisionProjection_x3f(v_e_413_);
lean_dec_ref(v_e_413_);
return v_res_414_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_420_; lean_object* v___x_421_; 
v___x_420_ = l_Lean_maxRecDepthErrorMessage;
v___x_421_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_421_, 0, v___x_420_);
return v___x_421_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_422_; lean_object* v___x_423_; 
v___x_422_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__3);
v___x_423_ = l_Lean_MessageData_ofFormat(v___x_422_);
return v___x_423_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_424_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__4);
v___x_425_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__2));
v___x_426_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_426_, 0, v___x_425_);
lean_ctor_set(v___x_426_, 1, v___x_424_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg(lean_object* v_ref_427_){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_429_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___closed__5);
v___x_430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_430_, 0, v_ref_427_);
lean_ctor_set(v___x_430_, 1, v___x_429_);
v___x_431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_431_, 0, v___x_430_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg___boxed(lean_object* v_ref_432_, lean_object* v___y_433_){
_start:
{
lean_object* v_res_434_; 
v_res_434_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg(v_ref_432_);
return v_res_434_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0(lean_object* v_00_u03b1_435_, lean_object* v_ref_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_){
_start:
{
lean_object* v___x_442_; 
v___x_442_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg(v_ref_436_);
return v___x_442_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___boxed(lean_object* v_00_u03b1_443_, lean_object* v_ref_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_){
_start:
{
lean_object* v_res_450_; 
v_res_450_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0(v_00_u03b1_443_, v_ref_444_, v___y_445_, v___y_446_, v___y_447_, v___y_448_);
lean_dec(v___y_448_);
lean_dec_ref(v___y_447_);
lean_dec(v___y_446_);
lean_dec_ref(v___y_445_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance(lean_object* v_e_452_, uint8_t v_transparency_453_, lean_object* v_a_454_, lean_object* v_a_455_, lean_object* v_a_456_, lean_object* v_a_457_){
_start:
{
lean_object* v___y_460_; lean_object* v_toCold_477_; lean_object* v_currRecDepth_478_; lean_object* v_ref_479_; uint16_t v_optionFlags_480_; uint8_t v_suppressElabErrors_481_; uint8_t v_checkDeprecated_482_; uint8_t v_isRecordingDeps_483_; lean_object* v_maxRecDepth_484_; lean_object* v___x_485_; lean_object* v___x_571_; uint8_t v___x_572_; 
v_toCold_477_ = lean_ctor_get(v_a_456_, 0);
lean_inc_ref(v_toCold_477_);
v_currRecDepth_478_ = lean_ctor_get(v_a_456_, 1);
lean_inc(v_currRecDepth_478_);
v_ref_479_ = lean_ctor_get(v_a_456_, 2);
lean_inc(v_ref_479_);
v_optionFlags_480_ = lean_ctor_get_uint16(v_a_456_, sizeof(void*)*3);
v_suppressElabErrors_481_ = lean_ctor_get_uint8(v_a_456_, sizeof(void*)*3 + 2);
v_checkDeprecated_482_ = lean_ctor_get_uint8(v_a_456_, sizeof(void*)*3 + 3);
v_isRecordingDeps_483_ = lean_ctor_get_uint8(v_a_456_, sizeof(void*)*3 + 4);
lean_dec_ref(v_a_456_);
v_maxRecDepth_484_ = lean_ctor_get(v_toCold_477_, 3);
v___x_485_ = ((lean_object*)(l___private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance___closed__0));
v___x_571_ = lean_unsigned_to_nat(0u);
v___x_572_ = lean_nat_dec_eq(v_maxRecDepth_484_, v___x_571_);
if (v___x_572_ == 0)
{
uint8_t v___x_573_; 
v___x_573_ = lean_nat_dec_eq(v_currRecDepth_478_, v_maxRecDepth_484_);
if (v___x_573_ == 0)
{
goto v___jp_486_;
}
else
{
lean_object* v___x_574_; 
lean_dec(v_currRecDepth_478_);
lean_dec_ref(v_toCold_477_);
lean_dec_ref(v_e_452_);
v___x_574_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance_spec__0___redArg(v_ref_479_);
return v___x_574_;
}
}
else
{
goto v___jp_486_;
}
v___jp_459_:
{
if (lean_obj_tag(v___y_460_) == 0)
{
lean_object* v_a_461_; lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_468_; 
v_a_461_ = lean_ctor_get(v___y_460_, 0);
v_isSharedCheck_468_ = !lean_is_exclusive(v___y_460_);
if (v_isSharedCheck_468_ == 0)
{
v___x_463_ = v___y_460_;
v_isShared_464_ = v_isSharedCheck_468_;
goto v_resetjp_462_;
}
else
{
lean_inc(v_a_461_);
lean_dec(v___y_460_);
v___x_463_ = lean_box(0);
v_isShared_464_ = v_isSharedCheck_468_;
goto v_resetjp_462_;
}
v_resetjp_462_:
{
lean_object* v___x_466_; 
if (v_isShared_464_ == 0)
{
v___x_466_ = v___x_463_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v_a_461_);
v___x_466_ = v_reuseFailAlloc_467_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
return v___x_466_;
}
}
}
else
{
lean_object* v_a_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_476_; 
v_a_469_ = lean_ctor_get(v___y_460_, 0);
v_isSharedCheck_476_ = !lean_is_exclusive(v___y_460_);
if (v_isSharedCheck_476_ == 0)
{
v___x_471_ = v___y_460_;
v_isShared_472_ = v_isSharedCheck_476_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_a_469_);
lean_dec(v___y_460_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_476_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v___x_474_; 
if (v_isShared_472_ == 0)
{
v___x_474_ = v___x_471_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_475_; 
v_reuseFailAlloc_475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_475_, 0, v_a_469_);
v___x_474_ = v_reuseFailAlloc_475_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
return v___x_474_;
}
}
}
}
v___jp_486_:
{
lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_487_ = lean_unsigned_to_nat(1u);
v___x_488_ = lean_nat_add(v_currRecDepth_478_, v___x_487_);
lean_dec(v_currRecDepth_478_);
v___x_489_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_489_, 0, v_toCold_477_);
lean_ctor_set(v___x_489_, 1, v___x_488_);
lean_ctor_set(v___x_489_, 2, v_ref_479_);
lean_ctor_set_uint16(v___x_489_, sizeof(void*)*3, v_optionFlags_480_);
lean_ctor_set_uint8(v___x_489_, sizeof(void*)*3 + 2, v_suppressElabErrors_481_);
lean_ctor_set_uint8(v___x_489_, sizeof(void*)*3 + 3, v_checkDeprecated_482_);
lean_ctor_set_uint8(v___x_489_, sizeof(void*)*3 + 4, v_isRecordingDeps_483_);
v___x_490_ = l_Lean_Core_checkSystem(v___x_485_, v___x_489_, v_a_457_);
if (lean_obj_tag(v___x_490_) == 0)
{
lean_object* v___x_492_; uint8_t v_isShared_493_; uint8_t v_isSharedCheck_561_; 
v_isSharedCheck_561_ = !lean_is_exclusive(v___x_490_);
if (v_isSharedCheck_561_ == 0)
{
lean_object* v_unused_562_; 
v_unused_562_ = lean_ctor_get(v___x_490_, 0);
lean_dec(v_unused_562_);
v___x_492_ = v___x_490_;
v_isShared_493_ = v_isSharedCheck_561_;
goto v_resetjp_491_;
}
else
{
lean_dec(v___x_490_);
v___x_492_ = lean_box(0);
v_isShared_493_ = v_isSharedCheck_561_;
goto v_resetjp_491_;
}
v_resetjp_491_:
{
lean_object* v___x_494_; uint8_t v___x_495_; 
v___x_494_ = l_Lean_Expr_consumeMData(v_e_452_);
lean_dec_ref(v_e_452_);
v___x_495_ = l_Lean_Expr_hasLooseBVars(v___x_494_);
if (v___x_495_ == 0)
{
lean_object* v___x_496_; uint8_t v_transparency_497_; uint8_t v___x_498_; 
lean_del_object(v___x_492_);
v___x_496_ = l_Lean_Meta_Context_config(v_a_454_);
v_transparency_497_ = lean_ctor_get_uint8(v___x_496_, 9);
lean_dec_ref(v___x_496_);
v___x_498_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_497_, v_transparency_453_);
if (v___x_498_ == 0)
{
lean_object* v_keyedConfig_499_; uint8_t v_trackZetaDelta_500_; lean_object* v_zetaDeltaSet_501_; lean_object* v_lctx_502_; lean_object* v_localInstances_503_; lean_object* v_defEqCtx_x3f_504_; lean_object* v_synthPendingDepth_505_; lean_object* v_customCanUnfoldPredicate_x3f_506_; uint8_t v_univApprox_507_; uint8_t v_inTypeClassResolution_508_; uint8_t v_cacheInferType_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
v_keyedConfig_499_ = lean_ctor_get(v_a_454_, 0);
v_trackZetaDelta_500_ = lean_ctor_get_uint8(v_a_454_, sizeof(void*)*7);
v_zetaDeltaSet_501_ = lean_ctor_get(v_a_454_, 1);
v_lctx_502_ = lean_ctor_get(v_a_454_, 2);
v_localInstances_503_ = lean_ctor_get(v_a_454_, 3);
v_defEqCtx_x3f_504_ = lean_ctor_get(v_a_454_, 4);
v_synthPendingDepth_505_ = lean_ctor_get(v_a_454_, 5);
v_customCanUnfoldPredicate_x3f_506_ = lean_ctor_get(v_a_454_, 6);
v_univApprox_507_ = lean_ctor_get_uint8(v_a_454_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_508_ = lean_ctor_get_uint8(v_a_454_, sizeof(void*)*7 + 2);
v_cacheInferType_509_ = lean_ctor_get_uint8(v_a_454_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_499_);
v___x_510_ = l_Lean_Meta_ConfigWithKey_setTransparency(v_transparency_453_, v_keyedConfig_499_);
lean_inc(v_customCanUnfoldPredicate_x3f_506_);
lean_inc(v_synthPendingDepth_505_);
lean_inc(v_defEqCtx_x3f_504_);
lean_inc_ref(v_localInstances_503_);
lean_inc_ref(v_lctx_502_);
lean_inc(v_zetaDeltaSet_501_);
v___x_511_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_511_, 0, v___x_510_);
lean_ctor_set(v___x_511_, 1, v_zetaDeltaSet_501_);
lean_ctor_set(v___x_511_, 2, v_lctx_502_);
lean_ctor_set(v___x_511_, 3, v_localInstances_503_);
lean_ctor_set(v___x_511_, 4, v_defEqCtx_x3f_504_);
lean_ctor_set(v___x_511_, 5, v_synthPendingDepth_505_);
lean_ctor_set(v___x_511_, 6, v_customCanUnfoldPredicate_x3f_506_);
lean_ctor_set_uint8(v___x_511_, sizeof(void*)*7, v_trackZetaDelta_500_);
lean_ctor_set_uint8(v___x_511_, sizeof(void*)*7 + 1, v_univApprox_507_);
lean_ctor_set_uint8(v___x_511_, sizeof(void*)*7 + 2, v_inTypeClassResolution_508_);
lean_ctor_set_uint8(v___x_511_, sizeof(void*)*7 + 3, v_cacheInferType_509_);
lean_inc(v_a_457_);
lean_inc(v_a_455_);
v___x_512_ = lean_whnf(v___x_494_, v___x_511_, v_a_455_, v___x_489_, v_a_457_);
v___y_460_ = v___x_512_;
goto v___jp_459_;
}
else
{
lean_object* v___x_513_; 
lean_inc(v_a_457_);
lean_inc(v_a_455_);
lean_inc_ref(v_a_454_);
v___x_513_ = lean_whnf(v___x_494_, v_a_454_, v_a_455_, v___x_489_, v_a_457_);
v___y_460_ = v___x_513_;
goto v___jp_459_;
}
}
else
{
switch(lean_obj_tag(v___x_494_))
{
case 8:
{
lean_object* v_value_514_; lean_object* v_body_515_; lean_object* v___x_516_; 
lean_del_object(v___x_492_);
v_value_514_ = lean_ctor_get(v___x_494_, 2);
lean_inc_ref(v_value_514_);
v_body_515_ = lean_ctor_get(v___x_494_, 3);
lean_inc_ref(v_body_515_);
lean_dec_ref_known(v___x_494_, 4);
v___x_516_ = lean_expr_instantiate1(v_body_515_, v_value_514_);
lean_dec_ref(v_value_514_);
lean_dec_ref(v_body_515_);
v_e_452_ = v___x_516_;
v_a_456_ = v___x_489_;
goto _start;
}
case 5:
{
uint8_t v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; 
lean_del_object(v___x_492_);
v___x_518_ = 0;
v___x_519_ = l_Lean_Expr_getAppFn(v___x_494_);
lean_inc_ref(v___x_489_);
v___x_520_ = l___private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance(v___x_519_, v_transparency_453_, v_a_454_, v_a_455_, v___x_489_, v_a_457_);
if (lean_obj_tag(v___x_520_) == 0)
{
lean_object* v_a_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_534_; 
v_a_521_ = lean_ctor_get(v___x_520_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v___x_520_);
if (v_isSharedCheck_534_ == 0)
{
v___x_523_ = v___x_520_;
v_isShared_524_ = v_isSharedCheck_534_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_a_521_);
lean_dec(v___x_520_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_534_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; uint8_t v___x_529_; 
v___x_525_ = l_Lean_Expr_getAppNumArgs(v___x_494_);
v___x_526_ = lean_mk_empty_array_with_capacity(v___x_525_);
lean_dec(v___x_525_);
lean_inc_ref(v___x_494_);
v___x_527_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v___x_494_, v___x_526_);
v___x_528_ = l_Lean_Expr_betaRev(v_a_521_, v___x_527_, v___x_518_, v___x_518_);
lean_dec_ref(v___x_527_);
v___x_529_ = lean_expr_eqv(v___x_528_, v___x_494_);
if (v___x_529_ == 0)
{
lean_del_object(v___x_523_);
lean_dec_ref_known(v___x_494_, 2);
v_e_452_ = v___x_528_;
v_a_456_ = v___x_489_;
goto _start;
}
else
{
lean_object* v___x_532_; 
lean_dec_ref(v___x_528_);
lean_dec_ref_known(v___x_489_, 3);
if (v_isShared_524_ == 0)
{
lean_ctor_set(v___x_523_, 0, v___x_494_);
v___x_532_ = v___x_523_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v___x_494_);
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
else
{
lean_dec_ref_known(v___x_494_, 2);
lean_dec_ref_known(v___x_489_, 3);
return v___x_520_;
}
}
case 11:
{
lean_object* v_idx_535_; lean_object* v_struct_536_; lean_object* v___x_537_; 
lean_del_object(v___x_492_);
v_idx_535_ = lean_ctor_get(v___x_494_, 1);
v_struct_536_ = lean_ctor_get(v___x_494_, 2);
lean_inc_ref(v___x_489_);
lean_inc_ref(v_struct_536_);
v___x_537_ = l___private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance(v_struct_536_, v_transparency_453_, v_a_454_, v_a_455_, v___x_489_, v_a_457_);
if (lean_obj_tag(v___x_537_) == 0)
{
lean_object* v_a_538_; lean_object* v___x_539_; 
v_a_538_ = lean_ctor_get(v___x_537_, 0);
lean_inc(v_a_538_);
lean_dec_ref_known(v___x_537_, 1);
v___x_539_ = l_Lean_Meta_projectCore_x3f(v_a_538_, v_idx_535_, v_a_454_, v_a_455_, v___x_489_, v_a_457_);
if (lean_obj_tag(v___x_539_) == 0)
{
lean_object* v_a_540_; lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_549_; 
v_a_540_ = lean_ctor_get(v___x_539_, 0);
v_isSharedCheck_549_ = !lean_is_exclusive(v___x_539_);
if (v_isSharedCheck_549_ == 0)
{
v___x_542_ = v___x_539_;
v_isShared_543_ = v_isSharedCheck_549_;
goto v_resetjp_541_;
}
else
{
lean_inc(v_a_540_);
lean_dec(v___x_539_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_549_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
if (lean_obj_tag(v_a_540_) == 1)
{
lean_object* v_val_544_; 
lean_del_object(v___x_542_);
lean_dec_ref_known(v___x_494_, 3);
v_val_544_ = lean_ctor_get(v_a_540_, 0);
lean_inc(v_val_544_);
lean_dec_ref_known(v_a_540_, 1);
v_e_452_ = v_val_544_;
v_a_456_ = v___x_489_;
goto _start;
}
else
{
lean_object* v___x_547_; 
lean_dec(v_a_540_);
lean_dec_ref_known(v___x_489_, 3);
if (v_isShared_543_ == 0)
{
lean_ctor_set(v___x_542_, 0, v___x_494_);
v___x_547_ = v___x_542_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v___x_494_);
v___x_547_ = v_reuseFailAlloc_548_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
return v___x_547_;
}
}
}
}
else
{
lean_object* v_a_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_557_; 
lean_dec_ref_known(v___x_494_, 3);
lean_dec_ref_known(v___x_489_, 3);
v_a_550_ = lean_ctor_get(v___x_539_, 0);
v_isSharedCheck_557_ = !lean_is_exclusive(v___x_539_);
if (v_isSharedCheck_557_ == 0)
{
v___x_552_ = v___x_539_;
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_a_550_);
lean_dec(v___x_539_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v___x_555_; 
if (v_isShared_553_ == 0)
{
v___x_555_ = v___x_552_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v_a_550_);
v___x_555_ = v_reuseFailAlloc_556_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
return v___x_555_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_494_, 3);
lean_dec_ref_known(v___x_489_, 3);
return v___x_537_;
}
}
default: 
{
lean_object* v___x_559_; 
lean_dec_ref_known(v___x_489_, 3);
if (v_isShared_493_ == 0)
{
lean_ctor_set(v___x_492_, 0, v___x_494_);
v___x_559_ = v___x_492_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v___x_494_);
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
}
else
{
lean_object* v_a_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_570_; 
lean_dec_ref_known(v___x_489_, 3);
lean_dec_ref(v_e_452_);
v_a_563_ = lean_ctor_get(v___x_490_, 0);
v_isSharedCheck_570_ = !lean_is_exclusive(v___x_490_);
if (v_isSharedCheck_570_ == 0)
{
v___x_565_ = v___x_490_;
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_a_563_);
lean_dec(v___x_490_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v___x_568_; 
if (v_isShared_566_ == 0)
{
v___x_568_ = v___x_565_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v_a_563_);
v___x_568_ = v_reuseFailAlloc_569_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
return v___x_568_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance___boxed(lean_object* v_e_575_, lean_object* v_transparency_576_, lean_object* v_a_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_){
_start:
{
uint8_t v_transparency_boxed_582_; lean_object* v_res_583_; 
v_transparency_boxed_582_ = lean_unbox(v_transparency_576_);
v_res_583_ = l___private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance(v_e_575_, v_transparency_boxed_582_, v_a_577_, v_a_578_, v_a_579_, v_a_580_);
lean_dec(v_a_580_);
lean_dec(v_a_578_);
lean_dec_ref(v_a_577_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_reduceDecisionProjectionR_x3f(lean_object* v_e_584_, lean_object* v_a_585_, lean_object* v_a_586_, lean_object* v_a_587_, lean_object* v_a_588_){
_start:
{
lean_object* v_d_591_; lean_object* v___y_592_; lean_object* v___y_593_; lean_object* v___y_594_; lean_object* v___y_595_; lean_object* v___x_618_; lean_object* v_a_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_646_; 
v___x_618_ = l_Lean_instantiateMVars___at___00Lean_Meta_getBoolDecision_x3f_spec__0___redArg(v_e_584_, v_a_586_);
v_a_619_ = lean_ctor_get(v___x_618_, 0);
v_isSharedCheck_646_ = !lean_is_exclusive(v___x_618_);
if (v_isSharedCheck_646_ == 0)
{
v___x_621_ = v___x_618_;
v_isShared_622_ = v_isSharedCheck_646_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_a_619_);
lean_dec(v___x_618_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_646_;
goto v_resetjp_620_;
}
v___jp_590_:
{
uint8_t v___x_596_; lean_object* v___x_597_; 
v___x_596_ = 2;
lean_inc_ref(v___y_594_);
v___x_597_ = l___private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance(v_d_591_, v___x_596_, v___y_592_, v___y_593_, v___y_594_, v___y_595_);
if (lean_obj_tag(v___x_597_) == 0)
{
lean_object* v_a_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_609_; 
v_a_598_ = lean_ctor_get(v___x_597_, 0);
v_isSharedCheck_609_ = !lean_is_exclusive(v___x_597_);
if (v_isSharedCheck_609_ == 0)
{
v___x_600_ = v___x_597_;
v_isShared_601_ = v_isSharedCheck_609_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_a_598_);
lean_dec(v___x_597_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_609_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_607_; 
v___x_602_ = ((lean_object*)(l_Lean_Meta_getBoolDecision_x3f___closed__1));
v___x_603_ = lean_unsigned_to_nat(0u);
v___x_604_ = l_Lean_mkProj(v___x_602_, v___x_603_, v_a_598_);
v___x_605_ = l_Lean_Meta_reduceDecisionProjection_x3f(v___x_604_);
lean_dec_ref(v___x_604_);
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 0, v___x_605_);
v___x_607_ = v___x_600_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v___x_605_);
v___x_607_ = v_reuseFailAlloc_608_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
return v___x_607_;
}
}
}
else
{
lean_object* v_a_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_617_; 
v_a_610_ = lean_ctor_get(v___x_597_, 0);
v_isSharedCheck_617_ = !lean_is_exclusive(v___x_597_);
if (v_isSharedCheck_617_ == 0)
{
v___x_612_ = v___x_597_;
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_a_610_);
lean_dec(v___x_597_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
lean_object* v___x_615_; 
if (v_isShared_613_ == 0)
{
v___x_615_ = v___x_612_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v_a_610_);
v___x_615_ = v_reuseFailAlloc_616_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
return v___x_615_;
}
}
}
}
v_resetjp_620_:
{
lean_object* v___x_623_; lean_object* v___y_625_; lean_object* v___y_626_; lean_object* v___y_627_; lean_object* v___y_628_; 
v___x_623_ = l_Lean_Expr_consumeMData(v_a_619_);
lean_dec(v_a_619_);
if (lean_obj_tag(v___x_623_) == 11)
{
lean_object* v_typeName_637_; 
v_typeName_637_ = lean_ctor_get(v___x_623_, 0);
if (lean_obj_tag(v_typeName_637_) == 1)
{
lean_object* v_pre_638_; 
v_pre_638_ = lean_ctor_get(v_typeName_637_, 0);
if (lean_obj_tag(v_pre_638_) == 0)
{
lean_object* v_idx_639_; lean_object* v_struct_640_; lean_object* v_str_641_; lean_object* v___x_642_; uint8_t v___x_643_; 
v_idx_639_ = lean_ctor_get(v___x_623_, 1);
v_struct_640_ = lean_ctor_get(v___x_623_, 2);
v_str_641_ = lean_ctor_get(v_typeName_637_, 1);
v___x_642_ = ((lean_object*)(l_Lean_Meta_getBoolDecision_x3f___closed__0));
v___x_643_ = lean_string_dec_eq(v_str_641_, v___x_642_);
if (v___x_643_ == 0)
{
v___y_625_ = v_a_585_;
v___y_626_ = v_a_586_;
v___y_627_ = v_a_587_;
v___y_628_ = v_a_588_;
goto v___jp_624_;
}
else
{
lean_object* v___x_644_; uint8_t v___x_645_; 
v___x_644_ = lean_unsigned_to_nat(0u);
v___x_645_ = lean_nat_dec_eq(v_idx_639_, v___x_644_);
if (v___x_645_ == 0)
{
v___y_625_ = v_a_585_;
v___y_626_ = v_a_586_;
v___y_627_ = v_a_587_;
v___y_628_ = v_a_588_;
goto v___jp_624_;
}
else
{
lean_inc_ref(v_struct_640_);
lean_dec_ref_known(v___x_623_, 3);
lean_del_object(v___x_621_);
v_d_591_ = v_struct_640_;
v___y_592_ = v_a_585_;
v___y_593_ = v_a_586_;
v___y_594_ = v_a_587_;
v___y_595_ = v_a_588_;
goto v___jp_590_;
}
}
}
else
{
v___y_625_ = v_a_585_;
v___y_626_ = v_a_586_;
v___y_627_ = v_a_587_;
v___y_628_ = v_a_588_;
goto v___jp_624_;
}
}
else
{
v___y_625_ = v_a_585_;
v___y_626_ = v_a_586_;
v___y_627_ = v_a_587_;
v___y_628_ = v_a_588_;
goto v___jp_624_;
}
}
else
{
v___y_625_ = v_a_585_;
v___y_626_ = v_a_586_;
v___y_627_ = v_a_587_;
v___y_628_ = v_a_588_;
goto v___jp_624_;
}
v___jp_624_:
{
lean_object* v___x_629_; lean_object* v___x_630_; uint8_t v___x_631_; 
v___x_629_ = ((lean_object*)(l_Lean_Meta_getBoolDecision_x3f___closed__3));
v___x_630_ = lean_unsigned_to_nat(2u);
v___x_631_ = l_Lean_Expr_isAppOfArity(v___x_623_, v___x_629_, v___x_630_);
if (v___x_631_ == 0)
{
lean_object* v___x_632_; lean_object* v___x_634_; 
lean_dec_ref(v___x_623_);
v___x_632_ = lean_box(0);
if (v_isShared_622_ == 0)
{
lean_ctor_set(v___x_621_, 0, v___x_632_);
v___x_634_ = v___x_621_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_635_; 
v_reuseFailAlloc_635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_635_, 0, v___x_632_);
v___x_634_ = v_reuseFailAlloc_635_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
return v___x_634_;
}
}
else
{
lean_object* v___x_636_; 
lean_del_object(v___x_621_);
v___x_636_ = l_Lean_Expr_appArg_x21(v___x_623_);
lean_dec_ref(v___x_623_);
v_d_591_ = v___x_636_;
v___y_592_ = v___y_625_;
v___y_593_ = v___y_626_;
v___y_594_ = v___y_627_;
v___y_595_ = v___y_628_;
goto v___jp_590_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_reduceDecisionProjectionR_x3f___boxed(lean_object* v_e_647_, lean_object* v_a_648_, lean_object* v_a_649_, lean_object* v_a_650_, lean_object* v_a_651_, lean_object* v_a_652_){
_start:
{
lean_object* v_res_653_; 
v_res_653_ = l_Lean_Meta_reduceDecisionProjectionR_x3f(v_e_647_, v_a_648_, v_a_649_, v_a_650_, v_a_651_);
lean_dec(v_a_651_);
lean_dec_ref(v_a_650_);
lean_dec(v_a_649_);
lean_dec_ref(v_a_648_);
return v_res_653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_prepareDecisionProjectionForAbstraction_x3f(lean_object* v_e_654_, lean_object* v_a_655_, lean_object* v_a_656_, lean_object* v_a_657_, lean_object* v_a_658_){
_start:
{
lean_object* v___x_660_; lean_object* v_a_661_; lean_object* v___x_663_; uint8_t v_isShared_664_; uint8_t v_isSharedCheck_725_; 
v___x_660_ = l_Lean_instantiateMVars___at___00Lean_Meta_getBoolDecision_x3f_spec__0___redArg(v_e_654_, v_a_656_);
v_a_661_ = lean_ctor_get(v___x_660_, 0);
v_isSharedCheck_725_ = !lean_is_exclusive(v___x_660_);
if (v_isSharedCheck_725_ == 0)
{
v___x_663_ = v___x_660_;
v_isShared_664_ = v_isSharedCheck_725_;
goto v_resetjp_662_;
}
else
{
lean_inc(v_a_661_);
lean_dec(v___x_660_);
v___x_663_ = lean_box(0);
v_isShared_664_ = v_isSharedCheck_725_;
goto v_resetjp_662_;
}
v_resetjp_662_:
{
lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; uint8_t v___x_669_; lean_object* v_d_671_; lean_object* v___y_672_; lean_object* v___y_673_; lean_object* v___y_674_; lean_object* v___y_675_; lean_object* v___y_708_; lean_object* v___y_709_; lean_object* v___y_710_; lean_object* v___y_711_; 
v___x_665_ = l_Lean_Expr_consumeMData(v_a_661_);
lean_dec(v_a_661_);
v___x_666_ = ((lean_object*)(l_Lean_Meta_getBoolDecision_x3f___closed__0));
v___x_667_ = ((lean_object*)(l_Lean_Meta_getBoolDecision_x3f___closed__3));
v___x_668_ = lean_unsigned_to_nat(2u);
v___x_669_ = l_Lean_Expr_isAppOfArity(v___x_665_, v___x_667_, v___x_668_);
if (lean_obj_tag(v___x_665_) == 11)
{
lean_object* v_typeName_717_; 
v_typeName_717_ = lean_ctor_get(v___x_665_, 0);
if (lean_obj_tag(v_typeName_717_) == 1)
{
lean_object* v_pre_718_; 
v_pre_718_ = lean_ctor_get(v_typeName_717_, 0);
if (lean_obj_tag(v_pre_718_) == 0)
{
lean_object* v_idx_719_; lean_object* v_struct_720_; lean_object* v_str_721_; uint8_t v___x_722_; 
v_idx_719_ = lean_ctor_get(v___x_665_, 1);
v_struct_720_ = lean_ctor_get(v___x_665_, 2);
v_str_721_ = lean_ctor_get(v_typeName_717_, 1);
v___x_722_ = lean_string_dec_eq(v_str_721_, v___x_666_);
if (v___x_722_ == 0)
{
v___y_708_ = v_a_655_;
v___y_709_ = v_a_656_;
v___y_710_ = v_a_657_;
v___y_711_ = v_a_658_;
goto v___jp_707_;
}
else
{
lean_object* v___x_723_; uint8_t v___x_724_; 
v___x_723_ = lean_unsigned_to_nat(0u);
v___x_724_ = lean_nat_dec_eq(v_idx_719_, v___x_723_);
if (v___x_724_ == 0)
{
v___y_708_ = v_a_655_;
v___y_709_ = v_a_656_;
v___y_710_ = v_a_657_;
v___y_711_ = v_a_658_;
goto v___jp_707_;
}
else
{
lean_inc_ref(v_struct_720_);
lean_dec_ref_known(v___x_665_, 3);
lean_del_object(v___x_663_);
v_d_671_ = v_struct_720_;
v___y_672_ = v_a_655_;
v___y_673_ = v_a_656_;
v___y_674_ = v_a_657_;
v___y_675_ = v_a_658_;
goto v___jp_670_;
}
}
}
else
{
v___y_708_ = v_a_655_;
v___y_709_ = v_a_656_;
v___y_710_ = v_a_657_;
v___y_711_ = v_a_658_;
goto v___jp_707_;
}
}
else
{
v___y_708_ = v_a_655_;
v___y_709_ = v_a_656_;
v___y_710_ = v_a_657_;
v___y_711_ = v_a_658_;
goto v___jp_707_;
}
}
else
{
v___y_708_ = v_a_655_;
v___y_709_ = v_a_656_;
v___y_710_ = v_a_657_;
v___y_711_ = v_a_658_;
goto v___jp_707_;
}
v___jp_670_:
{
uint8_t v___x_676_; lean_object* v___x_677_; 
v___x_676_ = 1;
lean_inc_ref(v___y_674_);
lean_inc_ref(v_d_671_);
v___x_677_ = l___private_Lean_Meta_Decidable_0__Lean_Meta_exposeDecisionInstance(v_d_671_, v___x_676_, v___y_672_, v___y_673_, v___y_674_, v___y_675_);
if (lean_obj_tag(v___x_677_) == 0)
{
lean_object* v_a_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_698_; 
v_a_678_ = lean_ctor_get(v___x_677_, 0);
v_isSharedCheck_698_ = !lean_is_exclusive(v___x_677_);
if (v_isSharedCheck_698_ == 0)
{
v___x_680_ = v___x_677_;
v_isShared_681_ = v_isSharedCheck_698_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_a_678_);
lean_dec(v___x_677_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_698_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; 
v___x_682_ = ((lean_object*)(l_Lean_Meta_getBoolDecision_x3f___closed__1));
v___x_683_ = lean_unsigned_to_nat(0u);
v___x_684_ = l_Lean_mkProj(v___x_682_, v___x_683_, v_a_678_);
v___x_685_ = l_Lean_Meta_reduceDecisionProjection_x3f(v___x_684_);
lean_dec_ref(v___x_684_);
if (lean_obj_tag(v___x_685_) == 1)
{
lean_object* v___x_687_; 
lean_dec_ref(v_d_671_);
if (v_isShared_681_ == 0)
{
lean_ctor_set(v___x_680_, 0, v___x_685_);
v___x_687_ = v___x_680_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v___x_685_);
v___x_687_ = v_reuseFailAlloc_688_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
return v___x_687_;
}
}
else
{
lean_dec(v___x_685_);
if (v___x_669_ == 0)
{
lean_object* v___x_689_; lean_object* v___x_691_; 
lean_dec_ref(v_d_671_);
v___x_689_ = lean_box(0);
if (v_isShared_681_ == 0)
{
lean_ctor_set(v___x_680_, 0, v___x_689_);
v___x_691_ = v___x_680_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v___x_689_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
return v___x_691_;
}
}
else
{
lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_696_; 
v___x_693_ = l_Lean_mkProj(v___x_682_, v___x_683_, v_d_671_);
v___x_694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_694_, 0, v___x_693_);
if (v_isShared_681_ == 0)
{
lean_ctor_set(v___x_680_, 0, v___x_694_);
v___x_696_ = v___x_680_;
goto v_reusejp_695_;
}
else
{
lean_object* v_reuseFailAlloc_697_; 
v_reuseFailAlloc_697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_697_, 0, v___x_694_);
v___x_696_ = v_reuseFailAlloc_697_;
goto v_reusejp_695_;
}
v_reusejp_695_:
{
return v___x_696_;
}
}
}
}
}
else
{
lean_object* v_a_699_; lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_706_; 
lean_dec_ref(v_d_671_);
v_a_699_ = lean_ctor_get(v___x_677_, 0);
v_isSharedCheck_706_ = !lean_is_exclusive(v___x_677_);
if (v_isSharedCheck_706_ == 0)
{
v___x_701_ = v___x_677_;
v_isShared_702_ = v_isSharedCheck_706_;
goto v_resetjp_700_;
}
else
{
lean_inc(v_a_699_);
lean_dec(v___x_677_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_706_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
lean_object* v___x_704_; 
if (v_isShared_702_ == 0)
{
v___x_704_ = v___x_701_;
goto v_reusejp_703_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v_a_699_);
v___x_704_ = v_reuseFailAlloc_705_;
goto v_reusejp_703_;
}
v_reusejp_703_:
{
return v___x_704_;
}
}
}
}
v___jp_707_:
{
if (v___x_669_ == 0)
{
lean_object* v___x_712_; lean_object* v___x_714_; 
lean_dec_ref(v___x_665_);
v___x_712_ = lean_box(0);
if (v_isShared_664_ == 0)
{
lean_ctor_set(v___x_663_, 0, v___x_712_);
v___x_714_ = v___x_663_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v___x_712_);
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
lean_object* v___x_716_; 
lean_del_object(v___x_663_);
v___x_716_ = l_Lean_Expr_appArg_x21(v___x_665_);
lean_dec_ref(v___x_665_);
v_d_671_ = v___x_716_;
v___y_672_ = v___y_708_;
v___y_673_ = v___y_709_;
v___y_674_ = v___y_710_;
v___y_675_ = v___y_711_;
goto v___jp_670_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_prepareDecisionProjectionForAbstraction_x3f___boxed(lean_object* v_e_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_){
_start:
{
lean_object* v_res_732_; 
v_res_732_ = l_Lean_Meta_prepareDecisionProjectionForAbstraction_x3f(v_e_726_, v_a_727_, v_a_728_, v_a_729_, v_a_730_);
lean_dec(v_a_730_);
lean_dec_ref(v_a_729_);
lean_dec(v_a_728_);
lean_dec_ref(v_a_727_);
return v_res_732_;
}
}
lean_object* runtime_initialize_Lean_Meta_WHNF(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Decidable(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Decidable(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_WHNF(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Decidable(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Decidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Decidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Decidable(builtin);
}
#ifdef __cplusplus
}
#endif
