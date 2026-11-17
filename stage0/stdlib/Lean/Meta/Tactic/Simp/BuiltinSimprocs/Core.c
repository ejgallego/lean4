// Lean compiler output
// Module: Lean.Meta.Tactic.Simp.BuiltinSimprocs.Core
// Imports: public import Init.Simproc public import Lean.Meta.Tactic.Simp.Simproc import Lean.Meta.Tactic.Simp.Main import Lean.Meta.CtorRecognizer
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_normalizeDecisionCondition_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Result_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isTrue(lean_object*);
uint8_t l_Lean_Expr_isFalse(lean_object*);
lean_object* l_Lean_Meta_Simp_Result_getProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_registerBuiltinSimproc(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getBoolDecision_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Meta_mkNoConfusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqFalse_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_constructorApp_x27_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_Simp_addSimprocBuiltinAttr(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* l_Lean_Meta_Simp_registerBuiltinDSimproc(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_reduceIte___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_reduceIte___closed__0 = (const lean_object*)&l_reduceIte___closed__0_value;
static const lean_string_object l_reduceIte___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l_reduceIte___closed__1 = (const lean_object*)&l_reduceIte___closed__1_value;
static const lean_ctor_object l_reduceIte___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceIte___closed__1_value),LEAN_SCALAR_PTR_LITERAL(130, 140, 200, 235, 144, 197, 118, 1)}};
static const lean_object* l_reduceIte___closed__2 = (const lean_object*)&l_reduceIte___closed__2_value;
static const lean_string_object l_reduceIte___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_reduceIte___closed__3 = (const lean_object*)&l_reduceIte___closed__3_value;
static const lean_string_object l_reduceIte___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "cond_eq_right_of_eq_false"};
static const lean_object* l_reduceIte___closed__4 = (const lean_object*)&l_reduceIte___closed__4_value;
static const lean_ctor_object l_reduceIte___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceIte___closed__3_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_reduceIte___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_reduceIte___closed__5_value_aux_0),((lean_object*)&l_reduceIte___closed__4_value),LEAN_SCALAR_PTR_LITERAL(9, 121, 9, 228, 215, 38, 223, 75)}};
static const lean_object* l_reduceIte___closed__5 = (const lean_object*)&l_reduceIte___closed__5_value;
static const lean_string_object l_reduceIte___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_reduceIte___closed__6 = (const lean_object*)&l_reduceIte___closed__6_value;
static const lean_ctor_object l_reduceIte___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceIte___closed__6_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_reduceIte___closed__7 = (const lean_object*)&l_reduceIte___closed__7_value;
static lean_once_cell_t l_reduceIte___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_reduceIte___closed__8;
static lean_once_cell_t l_reduceIte___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_reduceIte___closed__9;
static lean_once_cell_t l_reduceIte___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_reduceIte___closed__10;
static const lean_ctor_object l_reduceIte___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceIte___closed__3_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l_reduceIte___closed__11 = (const lean_object*)&l_reduceIte___closed__11_value;
static lean_once_cell_t l_reduceIte___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_reduceIte___closed__12;
static const lean_string_object l_reduceIte___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_reduceIte___closed__13 = (const lean_object*)&l_reduceIte___closed__13_value;
static const lean_ctor_object l_reduceIte___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceIte___closed__3_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_reduceIte___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_reduceIte___closed__14_value_aux_0),((lean_object*)&l_reduceIte___closed__13_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_reduceIte___closed__14 = (const lean_object*)&l_reduceIte___closed__14_value;
static lean_once_cell_t l_reduceIte___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_reduceIte___closed__15;
static const lean_string_object l_reduceIte___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "cond_eq_left_of_eq_true"};
static const lean_object* l_reduceIte___closed__16 = (const lean_object*)&l_reduceIte___closed__16_value;
static const lean_ctor_object l_reduceIte___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceIte___closed__3_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_reduceIte___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_reduceIte___closed__17_value_aux_0),((lean_object*)&l_reduceIte___closed__16_value),LEAN_SCALAR_PTR_LITERAL(252, 34, 57, 233, 120, 181, 60, 212)}};
static const lean_object* l_reduceIte___closed__17 = (const lean_object*)&l_reduceIte___closed__17_value;
LEAN_EXPORT lean_object* l_reduceIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_reduceIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reduceIte"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_22__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_22__value),LEAN_SCALAR_PTR_LITERAL(1, 182, 106, 10, 77, 189, 166, 185)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_22__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_reduceIte___closed__2_value),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_22__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 246}, .m_size = 5, .m_capacity = 5, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_22__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_22__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_22_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_22____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_24__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_24_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_24_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_24____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_26____boxed(lean_object*);
static const lean_string_object l_reduceDIte___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l_reduceDIte___closed__0 = (const lean_object*)&l_reduceDIte___closed__0_value;
static const lean_ctor_object l_reduceDIte___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceDIte___closed__0_value),LEAN_SCALAR_PTR_LITERAL(137, 166, 197, 161, 68, 218, 116, 116)}};
static const lean_object* l_reduceDIte___closed__1 = (const lean_object*)&l_reduceDIte___closed__1_value;
static const lean_string_object l_reduceDIte___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "of_eq_false"};
static const lean_object* l_reduceDIte___closed__2 = (const lean_object*)&l_reduceDIte___closed__2_value;
static const lean_ctor_object l_reduceDIte___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceDIte___closed__2_value),LEAN_SCALAR_PTR_LITERAL(182, 110, 142, 77, 120, 210, 227, 9)}};
static const lean_object* l_reduceDIte___closed__3 = (const lean_object*)&l_reduceDIte___closed__3_value;
static lean_once_cell_t l_reduceDIte___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_reduceDIte___closed__4;
static const lean_string_object l_reduceDIte___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "dite_eq_right_of_eq_false"};
static const lean_object* l_reduceDIte___closed__5 = (const lean_object*)&l_reduceDIte___closed__5_value;
static const lean_ctor_object l_reduceDIte___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceDIte___closed__5_value),LEAN_SCALAR_PTR_LITERAL(181, 72, 248, 145, 136, 9, 228, 221)}};
static const lean_object* l_reduceDIte___closed__6 = (const lean_object*)&l_reduceDIte___closed__6_value;
static const lean_string_object l_reduceDIte___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "of_eq_true"};
static const lean_object* l_reduceDIte___closed__7 = (const lean_object*)&l_reduceDIte___closed__7_value;
static const lean_ctor_object l_reduceDIte___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceDIte___closed__7_value),LEAN_SCALAR_PTR_LITERAL(180, 216, 190, 52, 49, 30, 207, 178)}};
static const lean_object* l_reduceDIte___closed__8 = (const lean_object*)&l_reduceDIte___closed__8_value;
static lean_once_cell_t l_reduceDIte___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_reduceDIte___closed__9;
static const lean_string_object l_reduceDIte___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "dite_eq_left_of_eq_true"};
static const lean_object* l_reduceDIte___closed__10 = (const lean_object*)&l_reduceDIte___closed__10_value;
static const lean_ctor_object l_reduceDIte___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceDIte___closed__10_value),LEAN_SCALAR_PTR_LITERAL(36, 253, 19, 136, 170, 78, 36, 13)}};
static const lean_object* l_reduceDIte___closed__11 = (const lean_object*)&l_reduceDIte___closed__11_value;
LEAN_EXPORT lean_object* l_reduceDIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_reduceDIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "reduceDIte"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_22__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_22__value),LEAN_SCALAR_PTR_LITERAL(30, 101, 22, 109, 248, 175, 82, 75)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_22__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_reduceDIte___closed__1_value),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_22__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*6, .m_other = 0, .m_tag = 246}, .m_size = 6, .m_capacity = 6, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_22__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_22__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_22_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_22____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_24__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_24_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_24_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_24____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_26____boxed(lean_object*);
static const lean_ctor_object l_dreduceIte___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_dreduceIte___closed__0 = (const lean_object*)&l_dreduceIte___closed__0_value;
static const lean_string_object l_dreduceIte___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l_dreduceIte___closed__1 = (const lean_object*)&l_dreduceIte___closed__1_value;
static const lean_ctor_object l_dreduceIte___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_dreduceIte___closed__1_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l_dreduceIte___closed__2 = (const lean_object*)&l_dreduceIte___closed__2_value;
static const lean_string_object l_dreduceIte___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_dreduceIte___closed__3 = (const lean_object*)&l_dreduceIte___closed__3_value;
static const lean_ctor_object l_dreduceIte___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceIte___closed__3_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_dreduceIte___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_dreduceIte___closed__4_value_aux_0),((lean_object*)&l_dreduceIte___closed__3_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_dreduceIte___closed__4 = (const lean_object*)&l_dreduceIte___closed__4_value;
LEAN_EXPORT lean_object* l_dreduceIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dreduceIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__15___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "dreduceIte"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__15___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__15___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_22__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__15___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__15___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_22__value),LEAN_SCALAR_PTR_LITERAL(20, 216, 99, 140, 103, 209, 78, 255)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__15___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__15___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_22__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__15_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_22_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__15_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_22____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_24__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_24_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_24_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_24____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_26____boxed(lean_object*);
LEAN_EXPORT lean_object* l_dreduceDIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_dreduceDIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__20___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "dreduceDIte"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__20___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__20___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__20___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__20___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22__value),LEAN_SCALAR_PTR_LITERAL(222, 220, 170, 50, 32, 2, 19, 55)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__20___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__20___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__20_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__20_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_26____boxed(lean_object*);
LEAN_EXPORT lean_object* l_reduceDecisionEq___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_reduceDecisionEq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_reduceDecisionEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_reduceDecisionEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDecisionEq_declare__25___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "reduceDecisionEq"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDecisionEq_declare__25___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDecisionEq_declare__25___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_22__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDecisionEq_declare__25___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDecisionEq_declare__25___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_22__value),LEAN_SCALAR_PTR_LITERAL(70, 130, 230, 4, 41, 60, 22, 156)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDecisionEq_declare__25___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDecisionEq_declare__25___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_22__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDecisionEq_declare__25___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_reduceIte___closed__7_value),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDecisionEq_declare__25___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDecisionEq_declare__25___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_22__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDecisionEq_declare__25___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_reduceIte___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDecisionEq_declare__25___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDecisionEq_declare__25___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_22__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDecisionEq_declare__25___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_22__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDecisionEq_declare__25___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_22__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDecisionEq_declare__25___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_22__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDecisionEq_declare__25___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_22_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDecisionEq_declare__25___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_22__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDecisionEq_declare__25_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_22_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDecisionEq_declare__25_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_22____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDecisionEq___regBuiltin_reduceDecisionEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_24__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDecisionEq___regBuiltin_reduceDecisionEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_24_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDecisionEq___regBuiltin_reduceDecisionEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_24_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDecisionEq___regBuiltin_reduceDecisionEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_24____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDecisionEq___regBuiltin_reduceDecisionEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_26_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDecisionEq___regBuiltin_reduceDecisionEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_26____boxed(lean_object*);
LEAN_EXPORT lean_object* l_reduceCtorEq___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_reduceCtorEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_reduceCtorEq___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_reduceCtorEq___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_reduceCtorEq___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* l_reduceCtorEq___lam__2___closed__0 = (const lean_object*)&l_reduceCtorEq___lam__2___closed__0_value;
static const lean_ctor_object l_reduceCtorEq___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceCtorEq___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* l_reduceCtorEq___lam__2___closed__1 = (const lean_object*)&l_reduceCtorEq___lam__2___closed__1_value;
static lean_once_cell_t l_reduceCtorEq___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_reduceCtorEq___lam__2___closed__2;
LEAN_EXPORT lean_object* l_reduceCtorEq___lam__2(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_reduceCtorEq___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_reduceCtorEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l_reduceCtorEq___closed__0 = (const lean_object*)&l_reduceCtorEq___closed__0_value;
static const lean_ctor_object l_reduceCtorEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_reduceCtorEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l_reduceCtorEq___closed__1 = (const lean_object*)&l_reduceCtorEq___closed__1_value;
LEAN_EXPORT lean_object* l_reduceCtorEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_reduceCtorEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__30___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "reduceCtorEq"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__30___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__30___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__30___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__30___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23__value),LEAN_SCALAR_PTR_LITERAL(241, 230, 128, 19, 70, 224, 61, 3)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__30___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__30___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__30___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDecisionEq_declare__25___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_22__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__30___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__30___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__30_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__30_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_27_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_27____boxed(lean_object*);
static lean_object* _init_l_reduceIte___closed__8(void){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_14_ = lean_unsigned_to_nat(1u);
v___x_15_ = l_Lean_Level_ofNat(v___x_14_);
return v___x_15_;
}
}
static lean_object* _init_l_reduceIte___closed__9(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_16_ = lean_box(0);
v___x_17_ = lean_obj_once(&l_reduceIte___closed__8, &l_reduceIte___closed__8_once, _init_l_reduceIte___closed__8);
v___x_18_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_18_, 0, v___x_17_);
lean_ctor_set(v___x_18_, 1, v___x_16_);
return v___x_18_;
}
}
static lean_object* _init_l_reduceIte___closed__10(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_19_ = lean_obj_once(&l_reduceIte___closed__9, &l_reduceIte___closed__9_once, _init_l_reduceIte___closed__9);
v___x_20_ = ((lean_object*)(l_reduceIte___closed__7));
v___x_21_ = l_Lean_mkConst(v___x_20_, v___x_19_);
return v___x_21_;
}
}
static lean_object* _init_l_reduceIte___closed__12(void){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_24_ = lean_box(0);
v___x_25_ = ((lean_object*)(l_reduceIte___closed__11));
v___x_26_ = l_Lean_mkConst(v___x_25_, v___x_24_);
return v___x_26_;
}
}
static lean_object* _init_l_reduceIte___closed__15(void){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_31_ = lean_box(0);
v___x_32_ = ((lean_object*)(l_reduceIte___closed__14));
v___x_33_ = l_Lean_mkConst(v___x_32_, v___x_31_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_reduceIte(lean_object* v_e_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_38_, v_a_43_);
if (lean_obj_tag(v___x_50_) == 0)
{
lean_object* v_a_51_; lean_object* v___x_53_; uint8_t v_isShared_54_; uint8_t v_isSharedCheck_177_; 
v_a_51_ = lean_ctor_get(v___x_50_, 0);
v_isSharedCheck_177_ = !lean_is_exclusive(v___x_50_);
if (v_isSharedCheck_177_ == 0)
{
v___x_53_ = v___x_50_;
v_isShared_54_ = v_isSharedCheck_177_;
goto v_resetjp_52_;
}
else
{
lean_inc(v_a_51_);
lean_dec(v___x_50_);
v___x_53_ = lean_box(0);
v_isShared_54_ = v_isSharedCheck_177_;
goto v_resetjp_52_;
}
v_resetjp_52_:
{
lean_object* v___x_55_; uint8_t v___x_56_; 
v___x_55_ = l_Lean_Expr_cleanupAnnotations(v_a_51_);
lean_dec(v_a_51_);
v___x_56_ = l_Lean_Expr_isApp(v___x_55_);
if (v___x_56_ == 0)
{
lean_dec_ref(v___x_55_);
lean_del_object(v___x_53_);
goto v___jp_47_;
}
else
{
lean_object* v___x_57_; uint8_t v___x_58_; 
v___x_57_ = l_Lean_Expr_appFnCleanup___redArg(v___x_55_);
v___x_58_ = l_Lean_Expr_isApp(v___x_57_);
if (v___x_58_ == 0)
{
lean_dec_ref(v___x_57_);
lean_dec_ref(v___x_55_);
lean_del_object(v___x_53_);
goto v___jp_47_;
}
else
{
lean_object* v___x_59_; uint8_t v___x_60_; 
v___x_59_ = l_Lean_Expr_appFnCleanup___redArg(v___x_57_);
v___x_60_ = l_Lean_Expr_isApp(v___x_59_);
if (v___x_60_ == 0)
{
lean_dec_ref(v___x_59_);
lean_dec_ref(v___x_57_);
lean_dec_ref(v___x_55_);
lean_del_object(v___x_53_);
goto v___jp_47_;
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
lean_dec_ref(v___x_57_);
lean_dec_ref(v___x_55_);
lean_del_object(v___x_53_);
goto v___jp_47_;
}
else
{
lean_object* v___x_63_; lean_object* v___x_64_; uint8_t v___x_65_; 
v___x_63_ = l_Lean_Expr_appFnCleanup___redArg(v___x_61_);
v___x_64_ = ((lean_object*)(l_reduceIte___closed__2));
v___x_65_ = l_Lean_Expr_isConstOf(v___x_63_, v___x_64_);
if (v___x_65_ == 0)
{
lean_dec_ref(v___x_63_);
lean_dec_ref(v___x_61_);
lean_dec_ref(v___x_59_);
lean_dec_ref(v___x_57_);
lean_dec_ref(v___x_55_);
lean_del_object(v___x_53_);
goto v___jp_47_;
}
else
{
lean_object* v_arg_66_; lean_object* v_arg_67_; lean_object* v_arg_68_; lean_object* v_arg_69_; lean_object* v___x_70_; lean_object* v_env_71_; lean_object* v___x_72_; uint8_t v___x_73_; 
v_arg_66_ = lean_ctor_get(v___x_55_, 1);
lean_inc_ref(v_arg_66_);
lean_dec_ref(v___x_55_);
v_arg_67_ = lean_ctor_get(v___x_57_, 1);
lean_inc_ref(v_arg_67_);
lean_dec_ref(v___x_57_);
v_arg_68_ = lean_ctor_get(v___x_59_, 1);
lean_inc_ref(v_arg_68_);
lean_dec_ref(v___x_59_);
v_arg_69_ = lean_ctor_get(v___x_61_, 1);
lean_inc_ref(v_arg_69_);
lean_dec_ref(v___x_61_);
v___x_70_ = lean_st_ref_get(v_a_45_);
v_env_71_ = lean_ctor_get(v___x_70_, 0);
lean_inc_ref(v_env_71_);
lean_dec(v___x_70_);
v___x_72_ = ((lean_object*)(l_reduceIte___closed__5));
v___x_73_ = l_Lean_Environment_contains(v_env_71_, v___x_72_, v___x_65_);
if (v___x_73_ == 0)
{
lean_object* v___x_74_; lean_object* v___x_76_; 
lean_dec_ref(v_arg_69_);
lean_dec_ref(v_arg_68_);
lean_dec_ref(v_arg_67_);
lean_dec_ref(v_arg_66_);
lean_dec_ref(v___x_63_);
v___x_74_ = ((lean_object*)(l_reduceIte___closed__0));
if (v_isShared_54_ == 0)
{
lean_ctor_set(v___x_53_, 0, v___x_74_);
v___x_76_ = v___x_53_;
goto v_reusejp_75_;
}
else
{
lean_object* v_reuseFailAlloc_77_; 
v_reuseFailAlloc_77_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_77_, 0, v___x_74_);
v___x_76_ = v_reuseFailAlloc_77_;
goto v_reusejp_75_;
}
v_reusejp_75_:
{
return v___x_76_;
}
}
else
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
lean_del_object(v___x_53_);
v___x_78_ = lean_obj_once(&l_reduceIte___closed__10, &l_reduceIte___closed__10_once, _init_l_reduceIte___closed__10);
v___x_79_ = lean_obj_once(&l_reduceIte___closed__12, &l_reduceIte___closed__12_once, _init_l_reduceIte___closed__12);
v___x_80_ = lean_obj_once(&l_reduceIte___closed__15, &l_reduceIte___closed__15_once, _init_l_reduceIte___closed__15);
lean_inc_ref(v_arg_68_);
v___x_81_ = l_Lean_mkApp3(v___x_78_, v___x_79_, v_arg_68_, v___x_80_);
lean_inc_ref(v___x_81_);
v___x_82_ = l_Lean_Meta_Simp_normalizeDecisionCondition_x3f(v___x_81_, v_a_42_, v_a_43_, v_a_44_, v_a_45_);
if (lean_obj_tag(v___x_82_) == 0)
{
lean_object* v_a_83_; lean_object* v___y_85_; lean_object* v_expr_86_; 
v_a_83_ = lean_ctor_get(v___x_82_, 0);
lean_inc(v_a_83_);
lean_dec_ref_known(v___x_82_, 1);
if (lean_obj_tag(v_a_83_) == 0)
{
lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_165_ = lean_box(0);
lean_inc_ref(v___x_81_);
v___x_166_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_166_, 0, v___x_81_);
lean_ctor_set(v___x_166_, 1, v___x_165_);
lean_ctor_set_uint8(v___x_166_, sizeof(void*)*2, v___x_73_);
v___y_85_ = v___x_166_;
v_expr_86_ = v___x_81_;
goto v___jp_84_;
}
else
{
lean_object* v_val_167_; lean_object* v_expr_168_; 
lean_dec_ref(v___x_81_);
v_val_167_ = lean_ctor_get(v_a_83_, 0);
lean_inc(v_val_167_);
lean_dec_ref_known(v_a_83_, 1);
v_expr_168_ = lean_ctor_get(v_val_167_, 0);
lean_inc_ref(v_expr_168_);
v___y_85_ = v_val_167_;
v_expr_86_ = v_expr_168_;
goto v___jp_84_;
}
v___jp_84_:
{
lean_object* v___x_87_; 
lean_inc(v_a_45_);
lean_inc_ref(v_a_44_);
lean_inc(v_a_43_);
lean_inc_ref(v_a_42_);
lean_inc(v_a_41_);
lean_inc_ref(v_a_40_);
lean_inc(v_a_39_);
v___x_87_ = lean_simp(v_expr_86_, v_a_39_, v_a_40_, v_a_41_, v_a_42_, v_a_43_, v_a_44_, v_a_45_);
if (lean_obj_tag(v___x_87_) == 0)
{
lean_object* v_a_88_; lean_object* v___x_89_; 
v_a_88_ = lean_ctor_get(v___x_87_, 0);
lean_inc(v_a_88_);
lean_dec_ref_known(v___x_87_, 1);
v___x_89_ = l_Lean_Meta_Simp_Result_mkEqTrans(v___y_85_, v_a_88_, v_a_42_, v_a_43_, v_a_44_, v_a_45_);
if (lean_obj_tag(v___x_89_) == 0)
{
lean_object* v_a_90_; lean_object* v___x_92_; uint8_t v_isShared_93_; uint8_t v_isSharedCheck_148_; 
v_a_90_ = lean_ctor_get(v___x_89_, 0);
v_isSharedCheck_148_ = !lean_is_exclusive(v___x_89_);
if (v_isSharedCheck_148_ == 0)
{
v___x_92_ = v___x_89_;
v_isShared_93_ = v_isSharedCheck_148_;
goto v_resetjp_91_;
}
else
{
lean_inc(v_a_90_);
lean_dec(v___x_89_);
v___x_92_ = lean_box(0);
v_isShared_93_ = v_isSharedCheck_148_;
goto v_resetjp_91_;
}
v_resetjp_91_:
{
lean_object* v_expr_94_; uint8_t v___x_95_; 
v_expr_94_ = lean_ctor_get(v_a_90_, 0);
v___x_95_ = l_Lean_Expr_isTrue(v_expr_94_);
if (v___x_95_ == 0)
{
uint8_t v___x_96_; 
v___x_96_ = l_Lean_Expr_isFalse(v_expr_94_);
if (v___x_96_ == 0)
{
lean_object* v___x_97_; lean_object* v___x_99_; 
lean_dec(v_a_90_);
lean_dec_ref(v_arg_69_);
lean_dec_ref(v_arg_68_);
lean_dec_ref(v_arg_67_);
lean_dec_ref(v_arg_66_);
lean_dec_ref(v___x_63_);
v___x_97_ = ((lean_object*)(l_reduceIte___closed__0));
if (v_isShared_93_ == 0)
{
lean_ctor_set(v___x_92_, 0, v___x_97_);
v___x_99_ = v___x_92_;
goto v_reusejp_98_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v___x_97_);
v___x_99_ = v_reuseFailAlloc_100_;
goto v_reusejp_98_;
}
v_reusejp_98_:
{
return v___x_99_;
}
}
else
{
lean_object* v___x_101_; 
lean_del_object(v___x_92_);
v___x_101_ = l_Lean_Meta_Simp_Result_getProof(v_a_90_, v_a_42_, v_a_43_, v_a_44_, v_a_45_);
if (lean_obj_tag(v___x_101_) == 0)
{
lean_object* v_a_102_; lean_object* v___x_104_; uint8_t v_isShared_105_; uint8_t v_isSharedCheck_115_; 
v_a_102_ = lean_ctor_get(v___x_101_, 0);
v_isSharedCheck_115_ = !lean_is_exclusive(v___x_101_);
if (v_isSharedCheck_115_ == 0)
{
v___x_104_ = v___x_101_;
v_isShared_105_ = v_isSharedCheck_115_;
goto v_resetjp_103_;
}
else
{
lean_inc(v_a_102_);
lean_dec(v___x_101_);
v___x_104_ = lean_box(0);
v_isShared_105_ = v_isSharedCheck_115_;
goto v_resetjp_103_;
}
v_resetjp_103_:
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_113_; 
v___x_106_ = l_Lean_Expr_constLevels_x21(v___x_63_);
lean_dec_ref(v___x_63_);
v___x_107_ = l_Lean_mkConst(v___x_72_, v___x_106_);
lean_inc_ref(v_arg_66_);
v___x_108_ = l_Lean_mkApp5(v___x_107_, v_arg_69_, v_arg_68_, v_arg_67_, v_arg_66_, v_a_102_);
v___x_109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_109_, 0, v___x_108_);
v___x_110_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_110_, 0, v_arg_66_);
lean_ctor_set(v___x_110_, 1, v___x_109_);
lean_ctor_set_uint8(v___x_110_, sizeof(void*)*2, v___x_96_);
v___x_111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_111_, 0, v___x_110_);
if (v_isShared_105_ == 0)
{
lean_ctor_set(v___x_104_, 0, v___x_111_);
v___x_113_ = v___x_104_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_114_; 
v_reuseFailAlloc_114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_114_, 0, v___x_111_);
v___x_113_ = v_reuseFailAlloc_114_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
return v___x_113_;
}
}
}
else
{
lean_object* v_a_116_; lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_123_; 
lean_dec_ref(v_arg_69_);
lean_dec_ref(v_arg_68_);
lean_dec_ref(v_arg_67_);
lean_dec_ref(v_arg_66_);
lean_dec_ref(v___x_63_);
v_a_116_ = lean_ctor_get(v___x_101_, 0);
v_isSharedCheck_123_ = !lean_is_exclusive(v___x_101_);
if (v_isSharedCheck_123_ == 0)
{
v___x_118_ = v___x_101_;
v_isShared_119_ = v_isSharedCheck_123_;
goto v_resetjp_117_;
}
else
{
lean_inc(v_a_116_);
lean_dec(v___x_101_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_123_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
lean_object* v___x_121_; 
if (v_isShared_119_ == 0)
{
v___x_121_ = v___x_118_;
goto v_reusejp_120_;
}
else
{
lean_object* v_reuseFailAlloc_122_; 
v_reuseFailAlloc_122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_122_, 0, v_a_116_);
v___x_121_ = v_reuseFailAlloc_122_;
goto v_reusejp_120_;
}
v_reusejp_120_:
{
return v___x_121_;
}
}
}
}
}
else
{
lean_object* v___x_124_; 
lean_del_object(v___x_92_);
v___x_124_ = l_Lean_Meta_Simp_Result_getProof(v_a_90_, v_a_42_, v_a_43_, v_a_44_, v_a_45_);
if (lean_obj_tag(v___x_124_) == 0)
{
lean_object* v_a_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_139_; 
v_a_125_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_139_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_139_ == 0)
{
v___x_127_ = v___x_124_;
v_isShared_128_ = v_isSharedCheck_139_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_a_125_);
lean_dec(v___x_124_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_139_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_137_; 
v___x_129_ = ((lean_object*)(l_reduceIte___closed__17));
v___x_130_ = l_Lean_Expr_constLevels_x21(v___x_63_);
lean_dec_ref(v___x_63_);
v___x_131_ = l_Lean_mkConst(v___x_129_, v___x_130_);
lean_inc_ref(v_arg_67_);
v___x_132_ = l_Lean_mkApp5(v___x_131_, v_arg_69_, v_arg_68_, v_arg_67_, v_arg_66_, v_a_125_);
v___x_133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_133_, 0, v___x_132_);
v___x_134_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_134_, 0, v_arg_67_);
lean_ctor_set(v___x_134_, 1, v___x_133_);
lean_ctor_set_uint8(v___x_134_, sizeof(void*)*2, v___x_95_);
v___x_135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_135_, 0, v___x_134_);
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 0, v___x_135_);
v___x_137_ = v___x_127_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_138_; 
v_reuseFailAlloc_138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_138_, 0, v___x_135_);
v___x_137_ = v_reuseFailAlloc_138_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
return v___x_137_;
}
}
}
else
{
lean_object* v_a_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_147_; 
lean_dec_ref(v_arg_69_);
lean_dec_ref(v_arg_68_);
lean_dec_ref(v_arg_67_);
lean_dec_ref(v_arg_66_);
lean_dec_ref(v___x_63_);
v_a_140_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_147_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_147_ == 0)
{
v___x_142_ = v___x_124_;
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_a_140_);
lean_dec(v___x_124_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___x_145_; 
if (v_isShared_143_ == 0)
{
v___x_145_ = v___x_142_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v_a_140_);
v___x_145_ = v_reuseFailAlloc_146_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
return v___x_145_;
}
}
}
}
}
}
else
{
lean_object* v_a_149_; lean_object* v___x_151_; uint8_t v_isShared_152_; uint8_t v_isSharedCheck_156_; 
lean_dec_ref(v_arg_69_);
lean_dec_ref(v_arg_68_);
lean_dec_ref(v_arg_67_);
lean_dec_ref(v_arg_66_);
lean_dec_ref(v___x_63_);
v_a_149_ = lean_ctor_get(v___x_89_, 0);
v_isSharedCheck_156_ = !lean_is_exclusive(v___x_89_);
if (v_isSharedCheck_156_ == 0)
{
v___x_151_ = v___x_89_;
v_isShared_152_ = v_isSharedCheck_156_;
goto v_resetjp_150_;
}
else
{
lean_inc(v_a_149_);
lean_dec(v___x_89_);
v___x_151_ = lean_box(0);
v_isShared_152_ = v_isSharedCheck_156_;
goto v_resetjp_150_;
}
v_resetjp_150_:
{
lean_object* v___x_154_; 
if (v_isShared_152_ == 0)
{
v___x_154_ = v___x_151_;
goto v_reusejp_153_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v_a_149_);
v___x_154_ = v_reuseFailAlloc_155_;
goto v_reusejp_153_;
}
v_reusejp_153_:
{
return v___x_154_;
}
}
}
}
else
{
lean_object* v_a_157_; lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_164_; 
lean_dec_ref(v___y_85_);
lean_dec_ref(v_arg_69_);
lean_dec_ref(v_arg_68_);
lean_dec_ref(v_arg_67_);
lean_dec_ref(v_arg_66_);
lean_dec_ref(v___x_63_);
v_a_157_ = lean_ctor_get(v___x_87_, 0);
v_isSharedCheck_164_ = !lean_is_exclusive(v___x_87_);
if (v_isSharedCheck_164_ == 0)
{
v___x_159_ = v___x_87_;
v_isShared_160_ = v_isSharedCheck_164_;
goto v_resetjp_158_;
}
else
{
lean_inc(v_a_157_);
lean_dec(v___x_87_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_164_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
lean_object* v___x_162_; 
if (v_isShared_160_ == 0)
{
v___x_162_ = v___x_159_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v_a_157_);
v___x_162_ = v_reuseFailAlloc_163_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
return v___x_162_;
}
}
}
}
}
else
{
lean_object* v_a_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_176_; 
lean_dec_ref(v___x_81_);
lean_dec_ref(v_arg_69_);
lean_dec_ref(v_arg_68_);
lean_dec_ref(v_arg_67_);
lean_dec_ref(v_arg_66_);
lean_dec_ref(v___x_63_);
v_a_169_ = lean_ctor_get(v___x_82_, 0);
v_isSharedCheck_176_ = !lean_is_exclusive(v___x_82_);
if (v_isSharedCheck_176_ == 0)
{
v___x_171_ = v___x_82_;
v_isShared_172_ = v_isSharedCheck_176_;
goto v_resetjp_170_;
}
else
{
lean_inc(v_a_169_);
lean_dec(v___x_82_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_176_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v___x_174_; 
if (v_isShared_172_ == 0)
{
v___x_174_ = v___x_171_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v_a_169_);
v___x_174_ = v_reuseFailAlloc_175_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
return v___x_174_;
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
lean_object* v_a_178_; lean_object* v___x_180_; uint8_t v_isShared_181_; uint8_t v_isSharedCheck_185_; 
v_a_178_ = lean_ctor_get(v___x_50_, 0);
v_isSharedCheck_185_ = !lean_is_exclusive(v___x_50_);
if (v_isSharedCheck_185_ == 0)
{
v___x_180_ = v___x_50_;
v_isShared_181_ = v_isSharedCheck_185_;
goto v_resetjp_179_;
}
else
{
lean_inc(v_a_178_);
lean_dec(v___x_50_);
v___x_180_ = lean_box(0);
v_isShared_181_ = v_isSharedCheck_185_;
goto v_resetjp_179_;
}
v_resetjp_179_:
{
lean_object* v___x_183_; 
if (v_isShared_181_ == 0)
{
v___x_183_ = v___x_180_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v_a_178_);
v___x_183_ = v_reuseFailAlloc_184_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
return v___x_183_;
}
}
}
v___jp_47_:
{
lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_48_ = ((lean_object*)(l_reduceIte___closed__0));
v___x_49_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_49_, 0, v___x_48_);
return v___x_49_;
}
}
}
LEAN_EXPORT lean_object* l_reduceIte___boxed(lean_object* v_e_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_, lean_object* v_a_193_, lean_object* v_a_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = l_reduceIte(v_e_186_, v_a_187_, v_a_188_, v_a_189_, v_a_190_, v_a_191_, v_a_192_, v_a_193_);
lean_dec(v_a_193_);
lean_dec_ref(v_a_192_);
lean_dec(v_a_191_);
lean_dec_ref(v_a_190_);
lean_dec(v_a_189_);
lean_dec_ref(v_a_188_);
lean_dec(v_a_187_);
return v_res_195_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_22_(){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_212_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_22_));
v___x_213_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_22_));
v___x_214_ = lean_alloc_closure((void*)(l_reduceIte___boxed), 9, 0);
v___x_215_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_212_, v___x_213_, v___x_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_22____boxed(lean_object* v_a_216_){
_start:
{
lean_object* v_res_217_; 
v_res_217_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_22_();
return v_res_217_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_24_(void){
_start:
{
lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_218_ = lean_alloc_closure((void*)(l_reduceIte___boxed), 9, 0);
v___x_219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_24_(){
_start:
{
lean_object* v___x_221_; uint8_t v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_221_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_22_));
v___x_222_ = 0;
v___x_223_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_24_);
v___x_224_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_221_, v___x_222_, v___x_223_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_24____boxed(lean_object* v_a_225_){
_start:
{
lean_object* v_res_226_; 
v_res_226_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_24_();
return v_res_226_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_228_; uint8_t v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_228_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_22_));
v___x_229_ = 0;
v___x_230_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_24_);
v___x_231_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_228_, v___x_229_, v___x_230_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_26____boxed(lean_object* v_a_232_){
_start:
{
lean_object* v_res_233_; 
v_res_233_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_26_();
return v_res_233_;
}
}
static lean_object* _init_l_reduceDIte___closed__4(void){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_240_ = lean_box(0);
v___x_241_ = ((lean_object*)(l_reduceDIte___closed__3));
v___x_242_ = l_Lean_mkConst(v___x_241_, v___x_240_);
return v___x_242_;
}
}
static lean_object* _init_l_reduceDIte___closed__9(void){
_start:
{
lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_249_ = lean_box(0);
v___x_250_ = ((lean_object*)(l_reduceDIte___closed__8));
v___x_251_ = l_Lean_mkConst(v___x_250_, v___x_249_);
return v___x_251_;
}
}
LEAN_EXPORT lean_object* l_reduceDIte(lean_object* v_e_255_, lean_object* v_a_256_, lean_object* v_a_257_, lean_object* v_a_258_, lean_object* v_a_259_, lean_object* v_a_260_, lean_object* v_a_261_, lean_object* v_a_262_){
_start:
{
lean_object* v___x_267_; 
v___x_267_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_255_, v_a_260_);
if (lean_obj_tag(v___x_267_) == 0)
{
lean_object* v_a_268_; lean_object* v___x_269_; uint8_t v___x_270_; 
v_a_268_ = lean_ctor_get(v___x_267_, 0);
lean_inc(v_a_268_);
lean_dec_ref_known(v___x_267_, 1);
v___x_269_ = l_Lean_Expr_cleanupAnnotations(v_a_268_);
lean_dec(v_a_268_);
v___x_270_ = l_Lean_Expr_isApp(v___x_269_);
if (v___x_270_ == 0)
{
lean_dec_ref(v___x_269_);
goto v___jp_264_;
}
else
{
lean_object* v___x_271_; uint8_t v___x_272_; 
v___x_271_ = l_Lean_Expr_appFnCleanup___redArg(v___x_269_);
v___x_272_ = l_Lean_Expr_isApp(v___x_271_);
if (v___x_272_ == 0)
{
lean_dec_ref(v___x_271_);
lean_dec_ref(v___x_269_);
goto v___jp_264_;
}
else
{
lean_object* v___x_273_; uint8_t v___x_274_; 
v___x_273_ = l_Lean_Expr_appFnCleanup___redArg(v___x_271_);
v___x_274_ = l_Lean_Expr_isApp(v___x_273_);
if (v___x_274_ == 0)
{
lean_dec_ref(v___x_273_);
lean_dec_ref(v___x_271_);
lean_dec_ref(v___x_269_);
goto v___jp_264_;
}
else
{
lean_object* v___x_275_; uint8_t v___x_276_; 
v___x_275_ = l_Lean_Expr_appFnCleanup___redArg(v___x_273_);
v___x_276_ = l_Lean_Expr_isApp(v___x_275_);
if (v___x_276_ == 0)
{
lean_dec_ref(v___x_275_);
lean_dec_ref(v___x_273_);
lean_dec_ref(v___x_271_);
lean_dec_ref(v___x_269_);
goto v___jp_264_;
}
else
{
lean_object* v___x_277_; uint8_t v___x_278_; 
v___x_277_ = l_Lean_Expr_appFnCleanup___redArg(v___x_275_);
v___x_278_ = l_Lean_Expr_isApp(v___x_277_);
if (v___x_278_ == 0)
{
lean_dec_ref(v___x_277_);
lean_dec_ref(v___x_275_);
lean_dec_ref(v___x_273_);
lean_dec_ref(v___x_271_);
lean_dec_ref(v___x_269_);
goto v___jp_264_;
}
else
{
lean_object* v___x_279_; lean_object* v___x_280_; uint8_t v___x_281_; 
v___x_279_ = l_Lean_Expr_appFnCleanup___redArg(v___x_277_);
v___x_280_ = ((lean_object*)(l_reduceDIte___closed__1));
v___x_281_ = l_Lean_Expr_isConstOf(v___x_279_, v___x_280_);
if (v___x_281_ == 0)
{
lean_dec_ref(v___x_279_);
lean_dec_ref(v___x_277_);
lean_dec_ref(v___x_275_);
lean_dec_ref(v___x_273_);
lean_dec_ref(v___x_271_);
lean_dec_ref(v___x_269_);
goto v___jp_264_;
}
else
{
lean_object* v_arg_282_; lean_object* v_arg_283_; lean_object* v_arg_284_; lean_object* v_arg_285_; lean_object* v_arg_286_; lean_object* v___x_287_; 
v_arg_282_ = lean_ctor_get(v___x_269_, 1);
lean_inc_ref(v_arg_282_);
lean_dec_ref(v___x_269_);
v_arg_283_ = lean_ctor_get(v___x_271_, 1);
lean_inc_ref(v_arg_283_);
lean_dec_ref(v___x_271_);
v_arg_284_ = lean_ctor_get(v___x_273_, 1);
lean_inc_ref(v_arg_284_);
lean_dec_ref(v___x_273_);
v_arg_285_ = lean_ctor_get(v___x_275_, 1);
lean_inc_ref_n(v_arg_285_, 2);
lean_dec_ref(v___x_275_);
v_arg_286_ = lean_ctor_get(v___x_277_, 1);
lean_inc_ref(v_arg_286_);
lean_dec_ref(v___x_277_);
v___x_287_ = l_Lean_Meta_Simp_normalizeDecisionCondition_x3f(v_arg_285_, v_a_259_, v_a_260_, v_a_261_, v_a_262_);
if (lean_obj_tag(v___x_287_) == 0)
{
lean_object* v_a_288_; lean_object* v___y_290_; lean_object* v_expr_291_; 
v_a_288_ = lean_ctor_get(v___x_287_, 0);
lean_inc(v_a_288_);
lean_dec_ref_known(v___x_287_, 1);
if (lean_obj_tag(v_a_288_) == 0)
{
lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_381_ = lean_box(0);
lean_inc_ref_n(v_arg_285_, 2);
v___x_382_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_382_, 0, v_arg_285_);
lean_ctor_set(v___x_382_, 1, v___x_381_);
lean_ctor_set_uint8(v___x_382_, sizeof(void*)*2, v___x_281_);
v___y_290_ = v___x_382_;
v_expr_291_ = v_arg_285_;
goto v___jp_289_;
}
else
{
lean_object* v_val_383_; lean_object* v_expr_384_; 
v_val_383_ = lean_ctor_get(v_a_288_, 0);
lean_inc(v_val_383_);
lean_dec_ref_known(v_a_288_, 1);
v_expr_384_ = lean_ctor_get(v_val_383_, 0);
lean_inc_ref(v_expr_384_);
v___y_290_ = v_val_383_;
v_expr_291_ = v_expr_384_;
goto v___jp_289_;
}
v___jp_289_:
{
lean_object* v___x_292_; 
lean_inc(v_a_262_);
lean_inc_ref(v_a_261_);
lean_inc(v_a_260_);
lean_inc_ref(v_a_259_);
lean_inc(v_a_258_);
lean_inc_ref(v_a_257_);
lean_inc(v_a_256_);
v___x_292_ = lean_simp(v_expr_291_, v_a_256_, v_a_257_, v_a_258_, v_a_259_, v_a_260_, v_a_261_, v_a_262_);
if (lean_obj_tag(v___x_292_) == 0)
{
lean_object* v_a_293_; lean_object* v___x_294_; 
v_a_293_ = lean_ctor_get(v___x_292_, 0);
lean_inc(v_a_293_);
lean_dec_ref_known(v___x_292_, 1);
v___x_294_ = l_Lean_Meta_Simp_Result_mkEqTrans(v___y_290_, v_a_293_, v_a_259_, v_a_260_, v_a_261_, v_a_262_);
if (lean_obj_tag(v___x_294_) == 0)
{
lean_object* v_a_295_; lean_object* v___x_297_; uint8_t v_isShared_298_; uint8_t v_isSharedCheck_364_; 
v_a_295_ = lean_ctor_get(v___x_294_, 0);
v_isSharedCheck_364_ = !lean_is_exclusive(v___x_294_);
if (v_isSharedCheck_364_ == 0)
{
v___x_297_ = v___x_294_;
v_isShared_298_ = v_isSharedCheck_364_;
goto v_resetjp_296_;
}
else
{
lean_inc(v_a_295_);
lean_dec(v___x_294_);
v___x_297_ = lean_box(0);
v_isShared_298_ = v_isSharedCheck_364_;
goto v_resetjp_296_;
}
v_resetjp_296_:
{
lean_object* v_expr_299_; uint8_t v___x_300_; 
v_expr_299_ = lean_ctor_get(v_a_295_, 0);
v___x_300_ = l_Lean_Expr_isTrue(v_expr_299_);
if (v___x_300_ == 0)
{
uint8_t v___x_301_; 
v___x_301_ = l_Lean_Expr_isFalse(v_expr_299_);
if (v___x_301_ == 0)
{
lean_object* v___x_302_; lean_object* v___x_304_; 
lean_dec(v_a_295_);
lean_dec_ref(v_arg_286_);
lean_dec_ref(v_arg_285_);
lean_dec_ref(v_arg_284_);
lean_dec_ref(v_arg_283_);
lean_dec_ref(v_arg_282_);
lean_dec_ref(v___x_279_);
v___x_302_ = ((lean_object*)(l_reduceIte___closed__0));
if (v_isShared_298_ == 0)
{
lean_ctor_set(v___x_297_, 0, v___x_302_);
v___x_304_ = v___x_297_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v___x_302_);
v___x_304_ = v_reuseFailAlloc_305_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
return v___x_304_;
}
}
else
{
lean_object* v___x_306_; 
lean_del_object(v___x_297_);
v___x_306_ = l_Lean_Meta_Simp_Result_getProof(v_a_295_, v_a_259_, v_a_260_, v_a_261_, v_a_262_);
if (lean_obj_tag(v___x_306_) == 0)
{
lean_object* v_a_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_326_; 
v_a_307_ = lean_ctor_get(v___x_306_, 0);
v_isSharedCheck_326_ = !lean_is_exclusive(v___x_306_);
if (v_isSharedCheck_326_ == 0)
{
v___x_309_ = v___x_306_;
v_isShared_310_ = v_isSharedCheck_326_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_a_307_);
lean_dec(v___x_306_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_326_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_324_; 
v___x_311_ = lean_obj_once(&l_reduceDIte___closed__4, &l_reduceDIte___closed__4_once, _init_l_reduceDIte___closed__4);
lean_inc(v_a_307_);
lean_inc_ref(v_arg_285_);
v___x_312_ = l_Lean_mkAppB(v___x_311_, v_arg_285_, v_a_307_);
lean_inc_ref(v_arg_282_);
v___x_313_ = l_Lean_Expr_app___override(v_arg_282_, v___x_312_);
v___x_314_ = l_Lean_Expr_headBeta(v___x_313_);
v___x_315_ = ((lean_object*)(l_reduceDIte___closed__6));
v___x_316_ = l_Lean_Expr_constLevels_x21(v___x_279_);
lean_dec_ref(v___x_279_);
v___x_317_ = l_Lean_mkConst(v___x_315_, v___x_316_);
v___x_318_ = l_Lean_mkApp5(v___x_317_, v_arg_286_, v_arg_285_, v_arg_284_, v_arg_283_, v_arg_282_);
v___x_319_ = l_Lean_Expr_app___override(v___x_318_, v_a_307_);
v___x_320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_320_, 0, v___x_319_);
v___x_321_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_321_, 0, v___x_314_);
lean_ctor_set(v___x_321_, 1, v___x_320_);
lean_ctor_set_uint8(v___x_321_, sizeof(void*)*2, v___x_301_);
v___x_322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_322_, 0, v___x_321_);
if (v_isShared_310_ == 0)
{
lean_ctor_set(v___x_309_, 0, v___x_322_);
v___x_324_ = v___x_309_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v___x_322_);
v___x_324_ = v_reuseFailAlloc_325_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
return v___x_324_;
}
}
}
else
{
lean_object* v_a_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_334_; 
lean_dec_ref(v_arg_286_);
lean_dec_ref(v_arg_285_);
lean_dec_ref(v_arg_284_);
lean_dec_ref(v_arg_283_);
lean_dec_ref(v_arg_282_);
lean_dec_ref(v___x_279_);
v_a_327_ = lean_ctor_get(v___x_306_, 0);
v_isSharedCheck_334_ = !lean_is_exclusive(v___x_306_);
if (v_isSharedCheck_334_ == 0)
{
v___x_329_ = v___x_306_;
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_a_327_);
lean_dec(v___x_306_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
lean_object* v___x_332_; 
if (v_isShared_330_ == 0)
{
v___x_332_ = v___x_329_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v_a_327_);
v___x_332_ = v_reuseFailAlloc_333_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
return v___x_332_;
}
}
}
}
}
else
{
lean_object* v___x_335_; 
lean_del_object(v___x_297_);
v___x_335_ = l_Lean_Meta_Simp_Result_getProof(v_a_295_, v_a_259_, v_a_260_, v_a_261_, v_a_262_);
if (lean_obj_tag(v___x_335_) == 0)
{
lean_object* v_a_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_355_; 
v_a_336_ = lean_ctor_get(v___x_335_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_355_ == 0)
{
v___x_338_ = v___x_335_;
v_isShared_339_ = v_isSharedCheck_355_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_a_336_);
lean_dec(v___x_335_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_355_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_353_; 
v___x_340_ = lean_obj_once(&l_reduceDIte___closed__9, &l_reduceDIte___closed__9_once, _init_l_reduceDIte___closed__9);
lean_inc(v_a_336_);
lean_inc_ref(v_arg_285_);
v___x_341_ = l_Lean_mkAppB(v___x_340_, v_arg_285_, v_a_336_);
lean_inc_ref(v_arg_283_);
v___x_342_ = l_Lean_Expr_app___override(v_arg_283_, v___x_341_);
v___x_343_ = l_Lean_Expr_headBeta(v___x_342_);
v___x_344_ = ((lean_object*)(l_reduceDIte___closed__11));
v___x_345_ = l_Lean_Expr_constLevels_x21(v___x_279_);
lean_dec_ref(v___x_279_);
v___x_346_ = l_Lean_mkConst(v___x_344_, v___x_345_);
v___x_347_ = l_Lean_mkApp5(v___x_346_, v_arg_286_, v_arg_285_, v_arg_284_, v_arg_283_, v_arg_282_);
v___x_348_ = l_Lean_Expr_app___override(v___x_347_, v_a_336_);
v___x_349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_349_, 0, v___x_348_);
v___x_350_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_350_, 0, v___x_343_);
lean_ctor_set(v___x_350_, 1, v___x_349_);
lean_ctor_set_uint8(v___x_350_, sizeof(void*)*2, v___x_300_);
v___x_351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_351_, 0, v___x_350_);
if (v_isShared_339_ == 0)
{
lean_ctor_set(v___x_338_, 0, v___x_351_);
v___x_353_ = v___x_338_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v___x_351_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
}
else
{
lean_object* v_a_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_363_; 
lean_dec_ref(v_arg_286_);
lean_dec_ref(v_arg_285_);
lean_dec_ref(v_arg_284_);
lean_dec_ref(v_arg_283_);
lean_dec_ref(v_arg_282_);
lean_dec_ref(v___x_279_);
v_a_356_ = lean_ctor_get(v___x_335_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_363_ == 0)
{
v___x_358_ = v___x_335_;
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_a_356_);
lean_dec(v___x_335_);
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
else
{
lean_object* v_a_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_372_; 
lean_dec_ref(v_arg_286_);
lean_dec_ref(v_arg_285_);
lean_dec_ref(v_arg_284_);
lean_dec_ref(v_arg_283_);
lean_dec_ref(v_arg_282_);
lean_dec_ref(v___x_279_);
v_a_365_ = lean_ctor_get(v___x_294_, 0);
v_isSharedCheck_372_ = !lean_is_exclusive(v___x_294_);
if (v_isSharedCheck_372_ == 0)
{
v___x_367_ = v___x_294_;
v_isShared_368_ = v_isSharedCheck_372_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_a_365_);
lean_dec(v___x_294_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_372_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_370_; 
if (v_isShared_368_ == 0)
{
v___x_370_ = v___x_367_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v_a_365_);
v___x_370_ = v_reuseFailAlloc_371_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
return v___x_370_;
}
}
}
}
else
{
lean_object* v_a_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_380_; 
lean_dec_ref(v___y_290_);
lean_dec_ref(v_arg_286_);
lean_dec_ref(v_arg_285_);
lean_dec_ref(v_arg_284_);
lean_dec_ref(v_arg_283_);
lean_dec_ref(v_arg_282_);
lean_dec_ref(v___x_279_);
v_a_373_ = lean_ctor_get(v___x_292_, 0);
v_isSharedCheck_380_ = !lean_is_exclusive(v___x_292_);
if (v_isSharedCheck_380_ == 0)
{
v___x_375_ = v___x_292_;
v_isShared_376_ = v_isSharedCheck_380_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_a_373_);
lean_dec(v___x_292_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_380_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v___x_378_; 
if (v_isShared_376_ == 0)
{
v___x_378_ = v___x_375_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v_a_373_);
v___x_378_ = v_reuseFailAlloc_379_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
return v___x_378_;
}
}
}
}
}
else
{
lean_object* v_a_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_392_; 
lean_dec_ref(v_arg_286_);
lean_dec_ref(v_arg_285_);
lean_dec_ref(v_arg_284_);
lean_dec_ref(v_arg_283_);
lean_dec_ref(v_arg_282_);
lean_dec_ref(v___x_279_);
v_a_385_ = lean_ctor_get(v___x_287_, 0);
v_isSharedCheck_392_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_392_ == 0)
{
v___x_387_ = v___x_287_;
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_a_385_);
lean_dec(v___x_287_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v___x_390_; 
if (v_isShared_388_ == 0)
{
v___x_390_ = v___x_387_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v_a_385_);
v___x_390_ = v_reuseFailAlloc_391_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
return v___x_390_;
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
lean_object* v_a_393_; lean_object* v___x_395_; uint8_t v_isShared_396_; uint8_t v_isSharedCheck_400_; 
v_a_393_ = lean_ctor_get(v___x_267_, 0);
v_isSharedCheck_400_ = !lean_is_exclusive(v___x_267_);
if (v_isSharedCheck_400_ == 0)
{
v___x_395_ = v___x_267_;
v_isShared_396_ = v_isSharedCheck_400_;
goto v_resetjp_394_;
}
else
{
lean_inc(v_a_393_);
lean_dec(v___x_267_);
v___x_395_ = lean_box(0);
v_isShared_396_ = v_isSharedCheck_400_;
goto v_resetjp_394_;
}
v_resetjp_394_:
{
lean_object* v___x_398_; 
if (v_isShared_396_ == 0)
{
v___x_398_ = v___x_395_;
goto v_reusejp_397_;
}
else
{
lean_object* v_reuseFailAlloc_399_; 
v_reuseFailAlloc_399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_399_, 0, v_a_393_);
v___x_398_ = v_reuseFailAlloc_399_;
goto v_reusejp_397_;
}
v_reusejp_397_:
{
return v___x_398_;
}
}
}
v___jp_264_:
{
lean_object* v___x_265_; lean_object* v___x_266_; 
v___x_265_ = ((lean_object*)(l_reduceIte___closed__0));
v___x_266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_266_, 0, v___x_265_);
return v___x_266_;
}
}
}
LEAN_EXPORT lean_object* l_reduceDIte___boxed(lean_object* v_e_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_, lean_object* v_a_408_, lean_object* v_a_409_){
_start:
{
lean_object* v_res_410_; 
v_res_410_ = l_reduceDIte(v_e_401_, v_a_402_, v_a_403_, v_a_404_, v_a_405_, v_a_406_, v_a_407_, v_a_408_);
lean_dec(v_a_408_);
lean_dec_ref(v_a_407_);
lean_dec(v_a_406_);
lean_dec_ref(v_a_405_);
lean_dec(v_a_404_);
lean_dec_ref(v_a_403_);
lean_dec(v_a_402_);
return v_res_410_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_22_(){
_start:
{
lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_428_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_22_));
v___x_429_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_22_));
v___x_430_ = lean_alloc_closure((void*)(l_reduceDIte___boxed), 9, 0);
v___x_431_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_428_, v___x_429_, v___x_430_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_22____boxed(lean_object* v_a_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_22_();
return v_res_433_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_24_(void){
_start:
{
lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_434_ = lean_alloc_closure((void*)(l_reduceDIte___boxed), 9, 0);
v___x_435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_435_, 0, v___x_434_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_24_(){
_start:
{
lean_object* v___x_437_; uint8_t v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_437_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_22_));
v___x_438_ = 0;
v___x_439_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_24_);
v___x_440_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_437_, v___x_438_, v___x_439_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_24____boxed(lean_object* v_a_441_){
_start:
{
lean_object* v_res_442_; 
v_res_442_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_24_();
return v_res_442_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_444_; uint8_t v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_444_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_22_));
v___x_445_ = 0;
v___x_446_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_24_);
v___x_447_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_444_, v___x_445_, v___x_446_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_26____boxed(lean_object* v_a_448_){
_start:
{
lean_object* v_res_449_; 
v_res_449_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_26_();
return v_res_449_;
}
}
LEAN_EXPORT lean_object* l_dreduceIte(lean_object* v_e_459_, lean_object* v_a_460_, lean_object* v_a_461_, lean_object* v_a_462_, lean_object* v_a_463_, lean_object* v_a_464_, lean_object* v_a_465_, lean_object* v_a_466_){
_start:
{
uint8_t v_inDSimp_471_; 
v_inDSimp_471_ = lean_ctor_get_uint8(v_a_461_, sizeof(void*)*10 + 9);
if (v_inDSimp_471_ == 0)
{
lean_object* v___x_472_; lean_object* v___x_473_; 
lean_dec_ref(v_e_459_);
v___x_472_ = ((lean_object*)(l_dreduceIte___closed__0));
v___x_473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_473_, 0, v___x_472_);
return v___x_473_;
}
else
{
lean_object* v___x_474_; 
v___x_474_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_459_, v_a_464_);
if (lean_obj_tag(v___x_474_) == 0)
{
lean_object* v_a_475_; lean_object* v___x_476_; uint8_t v___x_477_; 
v_a_475_ = lean_ctor_get(v___x_474_, 0);
lean_inc(v_a_475_);
lean_dec_ref_known(v___x_474_, 1);
v___x_476_ = l_Lean_Expr_cleanupAnnotations(v_a_475_);
lean_dec(v_a_475_);
v___x_477_ = l_Lean_Expr_isApp(v___x_476_);
if (v___x_477_ == 0)
{
lean_dec_ref(v___x_476_);
goto v___jp_468_;
}
else
{
lean_object* v___x_478_; uint8_t v___x_479_; 
v___x_478_ = l_Lean_Expr_appFnCleanup___redArg(v___x_476_);
v___x_479_ = l_Lean_Expr_isApp(v___x_478_);
if (v___x_479_ == 0)
{
lean_dec_ref(v___x_478_);
lean_dec_ref(v___x_476_);
goto v___jp_468_;
}
else
{
lean_object* v___x_480_; uint8_t v___x_481_; 
v___x_480_ = l_Lean_Expr_appFnCleanup___redArg(v___x_478_);
v___x_481_ = l_Lean_Expr_isApp(v___x_480_);
if (v___x_481_ == 0)
{
lean_dec_ref(v___x_480_);
lean_dec_ref(v___x_478_);
lean_dec_ref(v___x_476_);
goto v___jp_468_;
}
else
{
lean_object* v___x_482_; uint8_t v___x_483_; 
v___x_482_ = l_Lean_Expr_appFnCleanup___redArg(v___x_480_);
v___x_483_ = l_Lean_Expr_isApp(v___x_482_);
if (v___x_483_ == 0)
{
lean_dec_ref(v___x_482_);
lean_dec_ref(v___x_480_);
lean_dec_ref(v___x_478_);
lean_dec_ref(v___x_476_);
goto v___jp_468_;
}
else
{
lean_object* v___x_484_; lean_object* v___x_485_; uint8_t v___x_486_; 
v___x_484_ = l_Lean_Expr_appFnCleanup___redArg(v___x_482_);
lean_dec_ref(v___x_482_);
v___x_485_ = ((lean_object*)(l_reduceIte___closed__2));
v___x_486_ = l_Lean_Expr_isConstOf(v___x_484_, v___x_485_);
lean_dec_ref(v___x_484_);
if (v___x_486_ == 0)
{
lean_dec_ref(v___x_480_);
lean_dec_ref(v___x_478_);
lean_dec_ref(v___x_476_);
goto v___jp_468_;
}
else
{
lean_object* v_arg_487_; lean_object* v_arg_488_; lean_object* v_arg_489_; lean_object* v___x_490_; 
v_arg_487_ = lean_ctor_get(v___x_476_, 1);
lean_inc_ref(v_arg_487_);
lean_dec_ref(v___x_476_);
v_arg_488_ = lean_ctor_get(v___x_478_, 1);
lean_inc_ref(v_arg_488_);
lean_dec_ref(v___x_478_);
v_arg_489_ = lean_ctor_get(v___x_480_, 1);
lean_inc_ref(v_arg_489_);
lean_dec_ref(v___x_480_);
v___x_490_ = l_Lean_Meta_getBoolDecision_x3f(v_arg_489_, v_a_463_, v_a_464_, v_a_465_, v_a_466_);
if (lean_obj_tag(v___x_490_) == 0)
{
lean_object* v_a_491_; lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_576_; 
v_a_491_ = lean_ctor_get(v___x_490_, 0);
v_isSharedCheck_576_ = !lean_is_exclusive(v___x_490_);
if (v_isSharedCheck_576_ == 0)
{
v___x_493_ = v___x_490_;
v_isShared_494_ = v_isSharedCheck_576_;
goto v_resetjp_492_;
}
else
{
lean_inc(v_a_491_);
lean_dec(v___x_490_);
v___x_493_ = lean_box(0);
v_isShared_494_ = v_isSharedCheck_576_;
goto v_resetjp_492_;
}
v_resetjp_492_:
{
if (lean_obj_tag(v_a_491_) == 1)
{
lean_object* v_val_495_; lean_object* v___x_497_; uint8_t v_isShared_498_; uint8_t v_isSharedCheck_571_; 
lean_del_object(v___x_493_);
v_val_495_ = lean_ctor_get(v_a_491_, 0);
v_isSharedCheck_571_ = !lean_is_exclusive(v_a_491_);
if (v_isSharedCheck_571_ == 0)
{
v___x_497_ = v_a_491_;
v_isShared_498_ = v_isSharedCheck_571_;
goto v_resetjp_496_;
}
else
{
lean_inc(v_val_495_);
lean_dec(v_a_491_);
v___x_497_ = lean_box(0);
v_isShared_498_ = v_isSharedCheck_571_;
goto v_resetjp_496_;
}
v_resetjp_496_:
{
lean_object* v_fst_499_; lean_object* v_snd_500_; lean_object* v___x_501_; 
v_fst_499_ = lean_ctor_get(v_val_495_, 0);
lean_inc(v_fst_499_);
v_snd_500_ = lean_ctor_get(v_val_495_, 1);
lean_inc(v_snd_500_);
lean_dec(v_val_495_);
lean_inc(v_a_466_);
lean_inc_ref(v_a_465_);
lean_inc(v_a_464_);
lean_inc_ref(v_a_463_);
lean_inc(v_a_462_);
lean_inc_ref(v_a_461_);
lean_inc(v_a_460_);
v___x_501_ = lean_simp(v_fst_499_, v_a_460_, v_a_461_, v_a_462_, v_a_463_, v_a_464_, v_a_465_, v_a_466_);
if (lean_obj_tag(v___x_501_) == 0)
{
lean_object* v_a_502_; lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_562_; 
v_a_502_ = lean_ctor_get(v___x_501_, 0);
v_isSharedCheck_562_ = !lean_is_exclusive(v___x_501_);
if (v_isSharedCheck_562_ == 0)
{
v___x_504_ = v___x_501_;
v_isShared_505_ = v_isSharedCheck_562_;
goto v_resetjp_503_;
}
else
{
lean_inc(v_a_502_);
lean_dec(v___x_501_);
v___x_504_ = lean_box(0);
v_isShared_505_ = v_isSharedCheck_562_;
goto v_resetjp_503_;
}
v_resetjp_503_:
{
lean_object* v_expr_555_; uint8_t v___x_556_; 
v_expr_555_ = lean_ctor_get(v_a_502_, 0);
lean_inc_ref(v_expr_555_);
lean_dec(v_a_502_);
v___x_556_ = l_Lean_Expr_isTrue(v_expr_555_);
if (v___x_556_ == 0)
{
uint8_t v___x_557_; 
v___x_557_ = l_Lean_Expr_isFalse(v_expr_555_);
lean_dec_ref(v_expr_555_);
if (v___x_557_ == 0)
{
lean_object* v___x_558_; lean_object* v___x_560_; 
lean_dec(v_snd_500_);
lean_del_object(v___x_497_);
lean_dec_ref(v_arg_488_);
lean_dec_ref(v_arg_487_);
v___x_558_ = ((lean_object*)(l_dreduceIte___closed__0));
if (v_isShared_505_ == 0)
{
lean_ctor_set(v___x_504_, 0, v___x_558_);
v___x_560_ = v___x_504_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v___x_558_);
v___x_560_ = v_reuseFailAlloc_561_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
return v___x_560_;
}
}
else
{
lean_del_object(v___x_504_);
goto v___jp_506_;
}
}
else
{
lean_dec_ref(v_expr_555_);
lean_del_object(v___x_504_);
goto v___jp_506_;
}
v___jp_506_:
{
lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_507_ = ((lean_object*)(l_dreduceIte___closed__2));
v___x_508_ = lean_unsigned_to_nat(0u);
v___x_509_ = l_Lean_Expr_proj___override(v___x_507_, v___x_508_, v_snd_500_);
v___x_510_ = l_Lean_Meta_whnfD(v___x_509_, v_a_463_, v_a_464_, v_a_465_, v_a_466_);
if (lean_obj_tag(v___x_510_) == 0)
{
lean_object* v_a_511_; lean_object* v___x_512_; 
v_a_511_ = lean_ctor_get(v___x_510_, 0);
lean_inc(v_a_511_);
lean_dec_ref_known(v___x_510_, 1);
v___x_512_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_a_511_, v_a_464_);
if (lean_obj_tag(v___x_512_) == 0)
{
lean_object* v_a_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_538_; 
v_a_513_ = lean_ctor_get(v___x_512_, 0);
v_isSharedCheck_538_ = !lean_is_exclusive(v___x_512_);
if (v_isSharedCheck_538_ == 0)
{
v___x_515_ = v___x_512_;
v_isShared_516_ = v_isSharedCheck_538_;
goto v_resetjp_514_;
}
else
{
lean_inc(v_a_513_);
lean_dec(v___x_512_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_538_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
lean_object* v___x_517_; lean_object* v___x_518_; uint8_t v___x_519_; 
v___x_517_ = l_Lean_Expr_cleanupAnnotations(v_a_513_);
lean_dec(v_a_513_);
v___x_518_ = ((lean_object*)(l_dreduceIte___closed__4));
v___x_519_ = l_Lean_Expr_isConstOf(v___x_517_, v___x_518_);
if (v___x_519_ == 0)
{
lean_object* v___x_520_; uint8_t v___x_521_; 
lean_dec_ref(v_arg_487_);
v___x_520_ = ((lean_object*)(l_reduceIte___closed__14));
v___x_521_ = l_Lean_Expr_isConstOf(v___x_517_, v___x_520_);
lean_dec_ref(v___x_517_);
if (v___x_521_ == 0)
{
lean_object* v___x_522_; lean_object* v___x_524_; 
lean_del_object(v___x_497_);
lean_dec_ref(v_arg_488_);
v___x_522_ = ((lean_object*)(l_dreduceIte___closed__0));
if (v_isShared_516_ == 0)
{
lean_ctor_set(v___x_515_, 0, v___x_522_);
v___x_524_ = v___x_515_;
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
else
{
lean_object* v___x_527_; 
if (v_isShared_498_ == 0)
{
lean_ctor_set(v___x_497_, 0, v_arg_488_);
v___x_527_ = v___x_497_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v_arg_488_);
v___x_527_ = v_reuseFailAlloc_531_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
lean_object* v___x_529_; 
if (v_isShared_516_ == 0)
{
lean_ctor_set(v___x_515_, 0, v___x_527_);
v___x_529_ = v___x_515_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v___x_527_);
v___x_529_ = v_reuseFailAlloc_530_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
return v___x_529_;
}
}
}
}
else
{
lean_object* v___x_533_; 
lean_dec_ref(v___x_517_);
lean_dec_ref(v_arg_488_);
if (v_isShared_498_ == 0)
{
lean_ctor_set(v___x_497_, 0, v_arg_487_);
v___x_533_ = v___x_497_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_537_; 
v_reuseFailAlloc_537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_537_, 0, v_arg_487_);
v___x_533_ = v_reuseFailAlloc_537_;
goto v_reusejp_532_;
}
v_reusejp_532_:
{
lean_object* v___x_535_; 
if (v_isShared_516_ == 0)
{
lean_ctor_set(v___x_515_, 0, v___x_533_);
v___x_535_ = v___x_515_;
goto v_reusejp_534_;
}
else
{
lean_object* v_reuseFailAlloc_536_; 
v_reuseFailAlloc_536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_536_, 0, v___x_533_);
v___x_535_ = v_reuseFailAlloc_536_;
goto v_reusejp_534_;
}
v_reusejp_534_:
{
return v___x_535_;
}
}
}
}
}
else
{
lean_object* v_a_539_; lean_object* v___x_541_; uint8_t v_isShared_542_; uint8_t v_isSharedCheck_546_; 
lean_del_object(v___x_497_);
lean_dec_ref(v_arg_488_);
lean_dec_ref(v_arg_487_);
v_a_539_ = lean_ctor_get(v___x_512_, 0);
v_isSharedCheck_546_ = !lean_is_exclusive(v___x_512_);
if (v_isSharedCheck_546_ == 0)
{
v___x_541_ = v___x_512_;
v_isShared_542_ = v_isSharedCheck_546_;
goto v_resetjp_540_;
}
else
{
lean_inc(v_a_539_);
lean_dec(v___x_512_);
v___x_541_ = lean_box(0);
v_isShared_542_ = v_isSharedCheck_546_;
goto v_resetjp_540_;
}
v_resetjp_540_:
{
lean_object* v___x_544_; 
if (v_isShared_542_ == 0)
{
v___x_544_ = v___x_541_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v_a_539_);
v___x_544_ = v_reuseFailAlloc_545_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
return v___x_544_;
}
}
}
}
else
{
lean_object* v_a_547_; lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_554_; 
lean_del_object(v___x_497_);
lean_dec_ref(v_arg_488_);
lean_dec_ref(v_arg_487_);
v_a_547_ = lean_ctor_get(v___x_510_, 0);
v_isSharedCheck_554_ = !lean_is_exclusive(v___x_510_);
if (v_isSharedCheck_554_ == 0)
{
v___x_549_ = v___x_510_;
v_isShared_550_ = v_isSharedCheck_554_;
goto v_resetjp_548_;
}
else
{
lean_inc(v_a_547_);
lean_dec(v___x_510_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_554_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
lean_object* v___x_552_; 
if (v_isShared_550_ == 0)
{
v___x_552_ = v___x_549_;
goto v_reusejp_551_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v_a_547_);
v___x_552_ = v_reuseFailAlloc_553_;
goto v_reusejp_551_;
}
v_reusejp_551_:
{
return v___x_552_;
}
}
}
}
}
}
else
{
lean_object* v_a_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_570_; 
lean_dec(v_snd_500_);
lean_del_object(v___x_497_);
lean_dec_ref(v_arg_488_);
lean_dec_ref(v_arg_487_);
v_a_563_ = lean_ctor_get(v___x_501_, 0);
v_isSharedCheck_570_ = !lean_is_exclusive(v___x_501_);
if (v_isSharedCheck_570_ == 0)
{
v___x_565_ = v___x_501_;
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_a_563_);
lean_dec(v___x_501_);
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
else
{
lean_object* v___x_572_; lean_object* v___x_574_; 
lean_dec(v_a_491_);
lean_dec_ref(v_arg_488_);
lean_dec_ref(v_arg_487_);
v___x_572_ = ((lean_object*)(l_dreduceIte___closed__0));
if (v_isShared_494_ == 0)
{
lean_ctor_set(v___x_493_, 0, v___x_572_);
v___x_574_ = v___x_493_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v___x_572_);
v___x_574_ = v_reuseFailAlloc_575_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
return v___x_574_;
}
}
}
}
else
{
lean_object* v_a_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_584_; 
lean_dec_ref(v_arg_488_);
lean_dec_ref(v_arg_487_);
v_a_577_ = lean_ctor_get(v___x_490_, 0);
v_isSharedCheck_584_ = !lean_is_exclusive(v___x_490_);
if (v_isSharedCheck_584_ == 0)
{
v___x_579_ = v___x_490_;
v_isShared_580_ = v_isSharedCheck_584_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_a_577_);
lean_dec(v___x_490_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_584_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v___x_582_; 
if (v_isShared_580_ == 0)
{
v___x_582_ = v___x_579_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v_a_577_);
v___x_582_ = v_reuseFailAlloc_583_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
return v___x_582_;
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
lean_object* v_a_585_; lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_592_; 
v_a_585_ = lean_ctor_get(v___x_474_, 0);
v_isSharedCheck_592_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_592_ == 0)
{
v___x_587_ = v___x_474_;
v_isShared_588_ = v_isSharedCheck_592_;
goto v_resetjp_586_;
}
else
{
lean_inc(v_a_585_);
lean_dec(v___x_474_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_592_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v___x_590_; 
if (v_isShared_588_ == 0)
{
v___x_590_ = v___x_587_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v_a_585_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
return v___x_590_;
}
}
}
}
v___jp_468_:
{
lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_469_ = ((lean_object*)(l_dreduceIte___closed__0));
v___x_470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_470_, 0, v___x_469_);
return v___x_470_;
}
}
}
LEAN_EXPORT lean_object* l_dreduceIte___boxed(lean_object* v_e_593_, lean_object* v_a_594_, lean_object* v_a_595_, lean_object* v_a_596_, lean_object* v_a_597_, lean_object* v_a_598_, lean_object* v_a_599_, lean_object* v_a_600_, lean_object* v_a_601_){
_start:
{
lean_object* v_res_602_; 
v_res_602_ = l_dreduceIte(v_e_593_, v_a_594_, v_a_595_, v_a_596_, v_a_597_, v_a_598_, v_a_599_, v_a_600_);
lean_dec(v_a_600_);
lean_dec_ref(v_a_599_);
lean_dec(v_a_598_);
lean_dec_ref(v_a_597_);
lean_dec(v_a_596_);
lean_dec_ref(v_a_595_);
lean_dec(v_a_594_);
return v_res_602_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__15_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_22_(){
_start:
{
lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_607_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__15___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_22_));
v___x_608_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_22_));
v___x_609_ = lean_alloc_closure((void*)(l_dreduceIte___boxed), 9, 0);
v___x_610_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_607_, v___x_608_, v___x_609_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__15_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_22____boxed(lean_object* v_a_611_){
_start:
{
lean_object* v_res_612_; 
v_res_612_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__15_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_22_();
return v_res_612_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_24_(void){
_start:
{
lean_object* v___x_613_; lean_object* v___x_614_; 
v___x_613_ = lean_alloc_closure((void*)(l_dreduceIte___boxed), 9, 0);
v___x_614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_614_, 0, v___x_613_);
return v___x_614_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_24_(){
_start:
{
lean_object* v___x_616_; uint8_t v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; 
v___x_616_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__15___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_22_));
v___x_617_ = 0;
v___x_618_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_24_);
v___x_619_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_616_, v___x_617_, v___x_618_);
return v___x_619_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_24____boxed(lean_object* v_a_620_){
_start:
{
lean_object* v_res_621_; 
v_res_621_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_24_();
return v_res_621_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_623_; uint8_t v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_623_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__15___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_22_));
v___x_624_ = 0;
v___x_625_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_24_);
v___x_626_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_623_, v___x_624_, v___x_625_);
return v___x_626_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_26____boxed(lean_object* v_a_627_){
_start:
{
lean_object* v_res_628_; 
v_res_628_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_26_();
return v_res_628_;
}
}
LEAN_EXPORT lean_object* l_dreduceDIte(lean_object* v_e_629_, lean_object* v_a_630_, lean_object* v_a_631_, lean_object* v_a_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_a_635_, lean_object* v_a_636_){
_start:
{
uint8_t v_inDSimp_641_; 
v_inDSimp_641_ = lean_ctor_get_uint8(v_a_631_, sizeof(void*)*10 + 9);
if (v_inDSimp_641_ == 0)
{
lean_object* v___x_642_; lean_object* v___x_643_; 
lean_dec_ref(v_e_629_);
v___x_642_ = ((lean_object*)(l_dreduceIte___closed__0));
v___x_643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_643_, 0, v___x_642_);
return v___x_643_;
}
else
{
lean_object* v___x_644_; 
v___x_644_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_629_, v_a_634_);
if (lean_obj_tag(v___x_644_) == 0)
{
lean_object* v_a_645_; lean_object* v___x_646_; uint8_t v___x_647_; 
v_a_645_ = lean_ctor_get(v___x_644_, 0);
lean_inc(v_a_645_);
lean_dec_ref_known(v___x_644_, 1);
v___x_646_ = l_Lean_Expr_cleanupAnnotations(v_a_645_);
lean_dec(v_a_645_);
v___x_647_ = l_Lean_Expr_isApp(v___x_646_);
if (v___x_647_ == 0)
{
lean_dec_ref(v___x_646_);
goto v___jp_638_;
}
else
{
lean_object* v___x_648_; uint8_t v___x_649_; 
v___x_648_ = l_Lean_Expr_appFnCleanup___redArg(v___x_646_);
v___x_649_ = l_Lean_Expr_isApp(v___x_648_);
if (v___x_649_ == 0)
{
lean_dec_ref(v___x_648_);
lean_dec_ref(v___x_646_);
goto v___jp_638_;
}
else
{
lean_object* v___x_650_; uint8_t v___x_651_; 
v___x_650_ = l_Lean_Expr_appFnCleanup___redArg(v___x_648_);
v___x_651_ = l_Lean_Expr_isApp(v___x_650_);
if (v___x_651_ == 0)
{
lean_dec_ref(v___x_650_);
lean_dec_ref(v___x_648_);
lean_dec_ref(v___x_646_);
goto v___jp_638_;
}
else
{
lean_object* v___x_652_; uint8_t v___x_653_; 
v___x_652_ = l_Lean_Expr_appFnCleanup___redArg(v___x_650_);
v___x_653_ = l_Lean_Expr_isApp(v___x_652_);
if (v___x_653_ == 0)
{
lean_dec_ref(v___x_652_);
lean_dec_ref(v___x_650_);
lean_dec_ref(v___x_648_);
lean_dec_ref(v___x_646_);
goto v___jp_638_;
}
else
{
lean_object* v___x_654_; uint8_t v___x_655_; 
v___x_654_ = l_Lean_Expr_appFnCleanup___redArg(v___x_652_);
v___x_655_ = l_Lean_Expr_isApp(v___x_654_);
if (v___x_655_ == 0)
{
lean_dec_ref(v___x_654_);
lean_dec_ref(v___x_652_);
lean_dec_ref(v___x_650_);
lean_dec_ref(v___x_648_);
lean_dec_ref(v___x_646_);
goto v___jp_638_;
}
else
{
lean_object* v___x_656_; lean_object* v___x_657_; uint8_t v___x_658_; 
v___x_656_ = l_Lean_Expr_appFnCleanup___redArg(v___x_654_);
lean_dec_ref(v___x_654_);
v___x_657_ = ((lean_object*)(l_reduceDIte___closed__1));
v___x_658_ = l_Lean_Expr_isConstOf(v___x_656_, v___x_657_);
lean_dec_ref(v___x_656_);
if (v___x_658_ == 0)
{
lean_dec_ref(v___x_652_);
lean_dec_ref(v___x_650_);
lean_dec_ref(v___x_648_);
lean_dec_ref(v___x_646_);
goto v___jp_638_;
}
else
{
lean_object* v_arg_659_; lean_object* v_arg_660_; lean_object* v_arg_661_; lean_object* v_arg_662_; lean_object* v___x_663_; 
v_arg_659_ = lean_ctor_get(v___x_646_, 1);
lean_inc_ref(v_arg_659_);
lean_dec_ref(v___x_646_);
v_arg_660_ = lean_ctor_get(v___x_648_, 1);
lean_inc_ref(v_arg_660_);
lean_dec_ref(v___x_648_);
v_arg_661_ = lean_ctor_get(v___x_650_, 1);
lean_inc_ref(v_arg_661_);
lean_dec_ref(v___x_650_);
v_arg_662_ = lean_ctor_get(v___x_652_, 1);
lean_inc_ref_n(v_arg_662_, 2);
lean_dec_ref(v___x_652_);
lean_inc(v_a_636_);
lean_inc_ref(v_a_635_);
lean_inc(v_a_634_);
lean_inc_ref(v_a_633_);
lean_inc(v_a_632_);
lean_inc_ref(v_a_631_);
lean_inc(v_a_630_);
v___x_663_ = lean_simp(v_arg_662_, v_a_630_, v_a_631_, v_a_632_, v_a_633_, v_a_634_, v_a_635_, v_a_636_);
if (lean_obj_tag(v___x_663_) == 0)
{
lean_object* v_a_664_; lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_731_; 
v_a_664_ = lean_ctor_get(v___x_663_, 0);
v_isSharedCheck_731_ = !lean_is_exclusive(v___x_663_);
if (v_isSharedCheck_731_ == 0)
{
v___x_666_ = v___x_663_;
v_isShared_667_ = v_isSharedCheck_731_;
goto v_resetjp_665_;
}
else
{
lean_inc(v_a_664_);
lean_dec(v___x_663_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_731_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
lean_object* v_expr_724_; uint8_t v___x_725_; 
v_expr_724_ = lean_ctor_get(v_a_664_, 0);
lean_inc_ref(v_expr_724_);
lean_dec(v_a_664_);
v___x_725_ = l_Lean_Expr_isTrue(v_expr_724_);
if (v___x_725_ == 0)
{
uint8_t v___x_726_; 
v___x_726_ = l_Lean_Expr_isFalse(v_expr_724_);
lean_dec_ref(v_expr_724_);
if (v___x_726_ == 0)
{
lean_object* v___x_727_; lean_object* v___x_729_; 
lean_dec_ref(v_arg_662_);
lean_dec_ref(v_arg_661_);
lean_dec_ref(v_arg_660_);
lean_dec_ref(v_arg_659_);
v___x_727_ = ((lean_object*)(l_dreduceIte___closed__0));
if (v_isShared_667_ == 0)
{
lean_ctor_set(v___x_666_, 0, v___x_727_);
v___x_729_ = v___x_666_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v___x_727_);
v___x_729_ = v_reuseFailAlloc_730_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
return v___x_729_;
}
}
else
{
lean_del_object(v___x_666_);
goto v___jp_668_;
}
}
else
{
lean_dec_ref(v_expr_724_);
lean_del_object(v___x_666_);
goto v___jp_668_;
}
v___jp_668_:
{
lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_669_ = ((lean_object*)(l_dreduceIte___closed__2));
v___x_670_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_arg_661_);
v___x_671_ = l_Lean_Expr_proj___override(v___x_669_, v___x_670_, v_arg_661_);
v___x_672_ = l_Lean_Meta_whnfD(v___x_671_, v_a_633_, v_a_634_, v_a_635_, v_a_636_);
if (lean_obj_tag(v___x_672_) == 0)
{
lean_object* v_a_673_; lean_object* v___x_674_; 
v_a_673_ = lean_ctor_get(v___x_672_, 0);
lean_inc(v_a_673_);
lean_dec_ref_known(v___x_672_, 1);
v___x_674_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_a_673_, v_a_634_);
if (lean_obj_tag(v___x_674_) == 0)
{
lean_object* v_a_675_; lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_707_; 
v_a_675_ = lean_ctor_get(v___x_674_, 0);
v_isSharedCheck_707_ = !lean_is_exclusive(v___x_674_);
if (v_isSharedCheck_707_ == 0)
{
v___x_677_ = v___x_674_;
v_isShared_678_ = v_isSharedCheck_707_;
goto v_resetjp_676_;
}
else
{
lean_inc(v_a_675_);
lean_dec(v___x_674_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_707_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
lean_object* v___x_679_; lean_object* v___x_680_; uint8_t v___x_681_; 
v___x_679_ = l_Lean_Expr_cleanupAnnotations(v_a_675_);
lean_dec(v_a_675_);
v___x_680_ = ((lean_object*)(l_dreduceIte___closed__4));
v___x_681_ = l_Lean_Expr_isConstOf(v___x_679_, v___x_680_);
if (v___x_681_ == 0)
{
lean_object* v___x_682_; uint8_t v___x_683_; 
lean_dec_ref(v_arg_659_);
v___x_682_ = ((lean_object*)(l_reduceIte___closed__14));
v___x_683_ = l_Lean_Expr_isConstOf(v___x_679_, v___x_682_);
lean_dec_ref(v___x_679_);
if (v___x_683_ == 0)
{
lean_object* v___x_684_; lean_object* v___x_686_; 
lean_dec_ref(v_arg_662_);
lean_dec_ref(v_arg_661_);
lean_dec_ref(v_arg_660_);
v___x_684_ = ((lean_object*)(l_dreduceIte___closed__0));
if (v_isShared_678_ == 0)
{
lean_ctor_set(v___x_677_, 0, v___x_684_);
v___x_686_ = v___x_677_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v___x_684_);
v___x_686_ = v_reuseFailAlloc_687_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
return v___x_686_;
}
}
else
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_695_; 
v___x_688_ = lean_unsigned_to_nat(1u);
v___x_689_ = l_Lean_Expr_proj___override(v___x_669_, v___x_688_, v_arg_661_);
v___x_690_ = l_Lean_Meta_mkExpectedPropHint(v___x_689_, v_arg_662_);
v___x_691_ = l_Lean_Expr_app___override(v_arg_660_, v___x_690_);
v___x_692_ = l_Lean_Expr_headBeta(v___x_691_);
v___x_693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_693_, 0, v___x_692_);
if (v_isShared_678_ == 0)
{
lean_ctor_set(v___x_677_, 0, v___x_693_);
v___x_695_ = v___x_677_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v___x_693_);
v___x_695_ = v_reuseFailAlloc_696_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
return v___x_695_;
}
}
}
else
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_705_; 
lean_dec_ref(v___x_679_);
lean_dec_ref(v_arg_660_);
v___x_697_ = lean_unsigned_to_nat(1u);
v___x_698_ = l_Lean_Expr_proj___override(v___x_669_, v___x_697_, v_arg_661_);
v___x_699_ = l_Lean_mkNot(v_arg_662_);
v___x_700_ = l_Lean_Meta_mkExpectedPropHint(v___x_698_, v___x_699_);
v___x_701_ = l_Lean_Expr_app___override(v_arg_659_, v___x_700_);
v___x_702_ = l_Lean_Expr_headBeta(v___x_701_);
v___x_703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_703_, 0, v___x_702_);
if (v_isShared_678_ == 0)
{
lean_ctor_set(v___x_677_, 0, v___x_703_);
v___x_705_ = v___x_677_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v___x_703_);
v___x_705_ = v_reuseFailAlloc_706_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
return v___x_705_;
}
}
}
}
else
{
lean_object* v_a_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_715_; 
lean_dec_ref(v_arg_662_);
lean_dec_ref(v_arg_661_);
lean_dec_ref(v_arg_660_);
lean_dec_ref(v_arg_659_);
v_a_708_ = lean_ctor_get(v___x_674_, 0);
v_isSharedCheck_715_ = !lean_is_exclusive(v___x_674_);
if (v_isSharedCheck_715_ == 0)
{
v___x_710_ = v___x_674_;
v_isShared_711_ = v_isSharedCheck_715_;
goto v_resetjp_709_;
}
else
{
lean_inc(v_a_708_);
lean_dec(v___x_674_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_715_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
lean_object* v___x_713_; 
if (v_isShared_711_ == 0)
{
v___x_713_ = v___x_710_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v_a_708_);
v___x_713_ = v_reuseFailAlloc_714_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
return v___x_713_;
}
}
}
}
else
{
lean_object* v_a_716_; lean_object* v___x_718_; uint8_t v_isShared_719_; uint8_t v_isSharedCheck_723_; 
lean_dec_ref(v_arg_662_);
lean_dec_ref(v_arg_661_);
lean_dec_ref(v_arg_660_);
lean_dec_ref(v_arg_659_);
v_a_716_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_723_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_723_ == 0)
{
v___x_718_ = v___x_672_;
v_isShared_719_ = v_isSharedCheck_723_;
goto v_resetjp_717_;
}
else
{
lean_inc(v_a_716_);
lean_dec(v___x_672_);
v___x_718_ = lean_box(0);
v_isShared_719_ = v_isSharedCheck_723_;
goto v_resetjp_717_;
}
v_resetjp_717_:
{
lean_object* v___x_721_; 
if (v_isShared_719_ == 0)
{
v___x_721_ = v___x_718_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v_a_716_);
v___x_721_ = v_reuseFailAlloc_722_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
return v___x_721_;
}
}
}
}
}
}
else
{
lean_object* v_a_732_; lean_object* v___x_734_; uint8_t v_isShared_735_; uint8_t v_isSharedCheck_739_; 
lean_dec_ref(v_arg_662_);
lean_dec_ref(v_arg_661_);
lean_dec_ref(v_arg_660_);
lean_dec_ref(v_arg_659_);
v_a_732_ = lean_ctor_get(v___x_663_, 0);
v_isSharedCheck_739_ = !lean_is_exclusive(v___x_663_);
if (v_isSharedCheck_739_ == 0)
{
v___x_734_ = v___x_663_;
v_isShared_735_ = v_isSharedCheck_739_;
goto v_resetjp_733_;
}
else
{
lean_inc(v_a_732_);
lean_dec(v___x_663_);
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
}
}
}
}
}
}
else
{
lean_object* v_a_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_747_; 
v_a_740_ = lean_ctor_get(v___x_644_, 0);
v_isSharedCheck_747_ = !lean_is_exclusive(v___x_644_);
if (v_isSharedCheck_747_ == 0)
{
v___x_742_ = v___x_644_;
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_a_740_);
lean_dec(v___x_644_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_745_; 
if (v_isShared_743_ == 0)
{
v___x_745_ = v___x_742_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v_a_740_);
v___x_745_ = v_reuseFailAlloc_746_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
return v___x_745_;
}
}
}
}
v___jp_638_:
{
lean_object* v___x_639_; lean_object* v___x_640_; 
v___x_639_ = ((lean_object*)(l_dreduceIte___closed__0));
v___x_640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_640_, 0, v___x_639_);
return v___x_640_;
}
}
}
LEAN_EXPORT lean_object* l_dreduceDIte___boxed(lean_object* v_e_748_, lean_object* v_a_749_, lean_object* v_a_750_, lean_object* v_a_751_, lean_object* v_a_752_, lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_){
_start:
{
lean_object* v_res_757_; 
v_res_757_ = l_dreduceDIte(v_e_748_, v_a_749_, v_a_750_, v_a_751_, v_a_752_, v_a_753_, v_a_754_, v_a_755_);
lean_dec(v_a_755_);
lean_dec_ref(v_a_754_);
lean_dec(v_a_753_);
lean_dec_ref(v_a_752_);
lean_dec(v_a_751_);
lean_dec_ref(v_a_750_);
lean_dec(v_a_749_);
return v_res_757_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__20_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22_(){
_start:
{
lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_762_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__20___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22_));
v___x_763_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10___closed__3_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_22_));
v___x_764_ = lean_alloc_closure((void*)(l_dreduceDIte___boxed), 9, 0);
v___x_765_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_762_, v___x_763_, v___x_764_);
return v___x_765_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__20_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22____boxed(lean_object* v_a_766_){
_start:
{
lean_object* v_res_767_; 
v_res_767_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__20_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22_();
return v_res_767_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24_(void){
_start:
{
lean_object* v___x_768_; lean_object* v___x_769_; 
v___x_768_ = lean_alloc_closure((void*)(l_dreduceDIte___boxed), 9, 0);
v___x_769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_769_, 0, v___x_768_);
return v___x_769_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24_(){
_start:
{
lean_object* v___x_771_; uint8_t v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; 
v___x_771_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__20___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22_));
v___x_772_ = 0;
v___x_773_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24_);
v___x_774_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_771_, v___x_772_, v___x_773_);
return v___x_774_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24____boxed(lean_object* v_a_775_){
_start:
{
lean_object* v_res_776_; 
v_res_776_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24_();
return v_res_776_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_778_; uint8_t v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_778_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__20___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22_));
v___x_779_ = 0;
v___x_780_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24_);
v___x_781_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_778_, v___x_779_, v___x_780_);
return v___x_781_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_26____boxed(lean_object* v_a_782_){
_start:
{
lean_object* v_res_783_; 
v_res_783_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_26_();
return v_res_783_;
}
}
LEAN_EXPORT lean_object* l_reduceDecisionEq___redArg(lean_object* v_e_784_, lean_object* v_a_785_, lean_object* v_a_786_, lean_object* v_a_787_, lean_object* v_a_788_){
_start:
{
lean_object* v___x_790_; 
v___x_790_ = l_Lean_Meta_Simp_normalizeDecisionCondition_x3f(v_e_784_, v_a_785_, v_a_786_, v_a_787_, v_a_788_);
if (lean_obj_tag(v___x_790_) == 0)
{
lean_object* v_a_791_; lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_810_; 
v_a_791_ = lean_ctor_get(v___x_790_, 0);
v_isSharedCheck_810_ = !lean_is_exclusive(v___x_790_);
if (v_isSharedCheck_810_ == 0)
{
v___x_793_ = v___x_790_;
v_isShared_794_ = v_isSharedCheck_810_;
goto v_resetjp_792_;
}
else
{
lean_inc(v_a_791_);
lean_dec(v___x_790_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_810_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
if (lean_obj_tag(v_a_791_) == 1)
{
lean_object* v_val_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_805_; 
v_val_795_ = lean_ctor_get(v_a_791_, 0);
v_isSharedCheck_805_ = !lean_is_exclusive(v_a_791_);
if (v_isSharedCheck_805_ == 0)
{
v___x_797_ = v_a_791_;
v_isShared_798_ = v_isSharedCheck_805_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_val_795_);
lean_dec(v_a_791_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_805_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
lean_object* v___x_800_; 
if (v_isShared_798_ == 0)
{
v___x_800_ = v___x_797_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v_val_795_);
v___x_800_ = v_reuseFailAlloc_804_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
lean_object* v___x_802_; 
if (v_isShared_794_ == 0)
{
lean_ctor_set(v___x_793_, 0, v___x_800_);
v___x_802_ = v___x_793_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v___x_800_);
v___x_802_ = v_reuseFailAlloc_803_;
goto v_reusejp_801_;
}
v_reusejp_801_:
{
return v___x_802_;
}
}
}
}
else
{
lean_object* v___x_806_; lean_object* v___x_808_; 
lean_dec(v_a_791_);
v___x_806_ = ((lean_object*)(l_reduceIte___closed__0));
if (v_isShared_794_ == 0)
{
lean_ctor_set(v___x_793_, 0, v___x_806_);
v___x_808_ = v___x_793_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v___x_806_);
v___x_808_ = v_reuseFailAlloc_809_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
return v___x_808_;
}
}
}
}
else
{
lean_object* v_a_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_818_; 
v_a_811_ = lean_ctor_get(v___x_790_, 0);
v_isSharedCheck_818_ = !lean_is_exclusive(v___x_790_);
if (v_isSharedCheck_818_ == 0)
{
v___x_813_ = v___x_790_;
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_a_811_);
lean_dec(v___x_790_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v___x_816_; 
if (v_isShared_814_ == 0)
{
v___x_816_ = v___x_813_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v_a_811_);
v___x_816_ = v_reuseFailAlloc_817_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
return v___x_816_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_reduceDecisionEq___redArg___boxed(lean_object* v_e_819_, lean_object* v_a_820_, lean_object* v_a_821_, lean_object* v_a_822_, lean_object* v_a_823_, lean_object* v_a_824_){
_start:
{
lean_object* v_res_825_; 
v_res_825_ = l_reduceDecisionEq___redArg(v_e_819_, v_a_820_, v_a_821_, v_a_822_, v_a_823_);
lean_dec(v_a_823_);
lean_dec_ref(v_a_822_);
lean_dec(v_a_821_);
lean_dec_ref(v_a_820_);
return v_res_825_;
}
}
LEAN_EXPORT lean_object* l_reduceDecisionEq(lean_object* v_e_826_, lean_object* v_a_827_, lean_object* v_a_828_, lean_object* v_a_829_, lean_object* v_a_830_, lean_object* v_a_831_, lean_object* v_a_832_, lean_object* v_a_833_){
_start:
{
lean_object* v___x_835_; 
v___x_835_ = l_reduceDecisionEq___redArg(v_e_826_, v_a_830_, v_a_831_, v_a_832_, v_a_833_);
return v___x_835_;
}
}
LEAN_EXPORT lean_object* l_reduceDecisionEq___boxed(lean_object* v_e_836_, lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_, lean_object* v_a_840_, lean_object* v_a_841_, lean_object* v_a_842_, lean_object* v_a_843_, lean_object* v_a_844_){
_start:
{
lean_object* v_res_845_; 
v_res_845_ = l_reduceDecisionEq(v_e_836_, v_a_837_, v_a_838_, v_a_839_, v_a_840_, v_a_841_, v_a_842_, v_a_843_);
lean_dec(v_a_843_);
lean_dec_ref(v_a_842_);
lean_dec(v_a_841_);
lean_dec_ref(v_a_840_);
lean_dec(v_a_839_);
lean_dec_ref(v_a_838_);
lean_dec(v_a_837_);
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDecisionEq_declare__25_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_22_(){
_start:
{
lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; 
v___x_865_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDecisionEq_declare__25___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_22_));
v___x_866_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDecisionEq_declare__25___closed__4_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_22_));
v___x_867_ = lean_alloc_closure((void*)(l_reduceDecisionEq___boxed), 9, 0);
v___x_868_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_865_, v___x_866_, v___x_867_);
return v___x_868_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDecisionEq_declare__25_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_22____boxed(lean_object* v_a_869_){
_start:
{
lean_object* v_res_870_; 
v_res_870_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDecisionEq_declare__25_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_22_();
return v_res_870_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDecisionEq___regBuiltin_reduceDecisionEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_24_(void){
_start:
{
lean_object* v___x_871_; lean_object* v___x_872_; 
v___x_871_ = lean_alloc_closure((void*)(l_reduceDecisionEq___boxed), 9, 0);
v___x_872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_872_, 0, v___x_871_);
return v___x_872_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDecisionEq___regBuiltin_reduceDecisionEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_24_(){
_start:
{
lean_object* v___x_874_; uint8_t v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; 
v___x_874_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDecisionEq_declare__25___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_22_));
v___x_875_ = 0;
v___x_876_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDecisionEq___regBuiltin_reduceDecisionEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDecisionEq___regBuiltin_reduceDecisionEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDecisionEq___regBuiltin_reduceDecisionEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_24_);
v___x_877_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_874_, v___x_875_, v___x_876_);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDecisionEq___regBuiltin_reduceDecisionEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_24____boxed(lean_object* v_a_878_){
_start:
{
lean_object* v_res_879_; 
v_res_879_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDecisionEq___regBuiltin_reduceDecisionEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_24_();
return v_res_879_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDecisionEq___regBuiltin_reduceDecisionEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_26_(){
_start:
{
lean_object* v___x_881_; uint8_t v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; 
v___x_881_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDecisionEq_declare__25___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_22_));
v___x_882_ = 0;
v___x_883_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDecisionEq___regBuiltin_reduceDecisionEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_24_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDecisionEq___regBuiltin_reduceDecisionEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_24__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDecisionEq___regBuiltin_reduceDecisionEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_24_);
v___x_884_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_881_, v___x_882_, v___x_883_);
return v___x_884_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDecisionEq___regBuiltin_reduceDecisionEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_26____boxed(lean_object* v_a_885_){
_start:
{
lean_object* v_res_886_; 
v_res_886_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDecisionEq___regBuiltin_reduceDecisionEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_26_();
return v_res_886_;
}
}
LEAN_EXPORT lean_object* l_reduceCtorEq___lam__0(lean_object* v_x_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_){
_start:
{
lean_object* v___x_896_; lean_object* v___x_897_; 
v___x_896_ = ((lean_object*)(l_reduceIte___closed__0));
v___x_897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_897_, 0, v___x_896_);
return v___x_897_;
}
}
LEAN_EXPORT lean_object* l_reduceCtorEq___lam__0___boxed(lean_object* v_x_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_){
_start:
{
lean_object* v_res_907_; 
v_res_907_ = l_reduceCtorEq___lam__0(v_x_898_, v___y_899_, v___y_900_, v___y_901_, v___y_902_, v___y_903_, v___y_904_, v___y_905_);
lean_dec(v___y_905_);
lean_dec_ref(v___y_904_);
lean_dec(v___y_903_);
lean_dec_ref(v___y_902_);
lean_dec(v___y_901_);
lean_dec_ref(v___y_900_);
lean_dec(v___y_899_);
return v_res_907_;
}
}
LEAN_EXPORT lean_object* l_reduceCtorEq___lam__1(lean_object* v_x_908_, lean_object* v_x_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_){
_start:
{
lean_object* v___x_918_; lean_object* v___x_919_; 
v___x_918_ = ((lean_object*)(l_reduceIte___closed__0));
v___x_919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_919_, 0, v___x_918_);
return v___x_919_;
}
}
LEAN_EXPORT lean_object* l_reduceCtorEq___lam__1___boxed(lean_object* v_x_920_, lean_object* v_x_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_){
_start:
{
lean_object* v_res_930_; 
v_res_930_ = l_reduceCtorEq___lam__1(v_x_920_, v_x_921_, v___y_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, v___y_928_);
lean_dec(v___y_928_);
lean_dec_ref(v___y_927_);
lean_dec(v___y_926_);
lean_dec_ref(v___y_925_);
lean_dec(v___y_924_);
lean_dec_ref(v___y_923_);
lean_dec(v___y_922_);
lean_dec(v_x_921_);
lean_dec(v_x_920_);
return v_res_930_;
}
}
static lean_object* _init_l_reduceCtorEq___lam__2___closed__2(void){
_start:
{
lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; 
v___x_934_ = lean_box(0);
v___x_935_ = ((lean_object*)(l_reduceCtorEq___lam__2___closed__1));
v___x_936_ = l_Lean_mkConst(v___x_935_, v___x_934_);
return v___x_936_;
}
}
LEAN_EXPORT lean_object* l_reduceCtorEq___lam__2(uint8_t v___x_937_, uint8_t v___x_938_, lean_object* v_h_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_){
_start:
{
lean_object* v___x_948_; lean_object* v___y_950_; lean_object* v___x_970_; 
v___x_948_ = lean_obj_once(&l_reduceCtorEq___lam__2___closed__2, &l_reduceCtorEq___lam__2___closed__2_once, _init_l_reduceCtorEq___lam__2___closed__2);
lean_inc_ref(v_h_939_);
v___x_970_ = l_Lean_Meta_mkNoConfusion(v___x_948_, v_h_939_, v___y_943_, v___y_944_, v___y_945_, v___y_946_);
if (lean_obj_tag(v___x_970_) == 0)
{
lean_object* v_a_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; uint8_t v___x_975_; lean_object* v___x_976_; 
v_a_971_ = lean_ctor_get(v___x_970_, 0);
lean_inc(v_a_971_);
lean_dec_ref_known(v___x_970_, 1);
v___x_972_ = lean_unsigned_to_nat(1u);
v___x_973_ = lean_mk_empty_array_with_capacity(v___x_972_);
v___x_974_ = lean_array_push(v___x_973_, v_h_939_);
v___x_975_ = 1;
v___x_976_ = l_Lean_Meta_mkLambdaFVars(v___x_974_, v_a_971_, v___x_938_, v___x_937_, v___x_938_, v___x_937_, v___x_975_, v___y_943_, v___y_944_, v___y_945_, v___y_946_);
lean_dec_ref(v___x_974_);
if (lean_obj_tag(v___x_976_) == 0)
{
lean_object* v_a_977_; lean_object* v___x_978_; uint8_t v_transparency_979_; uint8_t v___x_980_; uint8_t v___x_981_; 
v_a_977_ = lean_ctor_get(v___x_976_, 0);
lean_inc(v_a_977_);
lean_dec_ref_known(v___x_976_, 1);
v___x_978_ = l_Lean_Meta_Context_config(v___y_943_);
v_transparency_979_ = lean_ctor_get_uint8(v___x_978_, 9);
lean_dec_ref(v___x_978_);
v___x_980_ = 1;
v___x_981_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_979_, v___x_980_);
if (v___x_981_ == 0)
{
lean_object* v_keyedConfig_982_; uint8_t v_trackZetaDelta_983_; lean_object* v_zetaDeltaSet_984_; lean_object* v_lctx_985_; lean_object* v_localInstances_986_; lean_object* v_defEqCtx_x3f_987_; lean_object* v_synthPendingDepth_988_; lean_object* v_customCanUnfoldPredicate_x3f_989_; uint8_t v_univApprox_990_; uint8_t v_inTypeClassResolution_991_; uint8_t v_cacheInferType_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; 
v_keyedConfig_982_ = lean_ctor_get(v___y_943_, 0);
v_trackZetaDelta_983_ = lean_ctor_get_uint8(v___y_943_, sizeof(void*)*7);
v_zetaDeltaSet_984_ = lean_ctor_get(v___y_943_, 1);
v_lctx_985_ = lean_ctor_get(v___y_943_, 2);
v_localInstances_986_ = lean_ctor_get(v___y_943_, 3);
v_defEqCtx_x3f_987_ = lean_ctor_get(v___y_943_, 4);
v_synthPendingDepth_988_ = lean_ctor_get(v___y_943_, 5);
v_customCanUnfoldPredicate_x3f_989_ = lean_ctor_get(v___y_943_, 6);
v_univApprox_990_ = lean_ctor_get_uint8(v___y_943_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_991_ = lean_ctor_get_uint8(v___y_943_, sizeof(void*)*7 + 2);
v_cacheInferType_992_ = lean_ctor_get_uint8(v___y_943_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_982_);
v___x_993_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_980_, v_keyedConfig_982_);
lean_inc(v_customCanUnfoldPredicate_x3f_989_);
lean_inc(v_synthPendingDepth_988_);
lean_inc(v_defEqCtx_x3f_987_);
lean_inc_ref(v_localInstances_986_);
lean_inc_ref(v_lctx_985_);
lean_inc(v_zetaDeltaSet_984_);
v___x_994_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_994_, 0, v___x_993_);
lean_ctor_set(v___x_994_, 1, v_zetaDeltaSet_984_);
lean_ctor_set(v___x_994_, 2, v_lctx_985_);
lean_ctor_set(v___x_994_, 3, v_localInstances_986_);
lean_ctor_set(v___x_994_, 4, v_defEqCtx_x3f_987_);
lean_ctor_set(v___x_994_, 5, v_synthPendingDepth_988_);
lean_ctor_set(v___x_994_, 6, v_customCanUnfoldPredicate_x3f_989_);
lean_ctor_set_uint8(v___x_994_, sizeof(void*)*7, v_trackZetaDelta_983_);
lean_ctor_set_uint8(v___x_994_, sizeof(void*)*7 + 1, v_univApprox_990_);
lean_ctor_set_uint8(v___x_994_, sizeof(void*)*7 + 2, v_inTypeClassResolution_991_);
lean_ctor_set_uint8(v___x_994_, sizeof(void*)*7 + 3, v_cacheInferType_992_);
v___x_995_ = l_Lean_Meta_mkEqFalse_x27(v_a_977_, v___x_994_, v___y_944_, v___y_945_, v___y_946_);
lean_dec_ref_known(v___x_994_, 7);
v___y_950_ = v___x_995_;
goto v___jp_949_;
}
else
{
lean_object* v___x_996_; 
v___x_996_ = l_Lean_Meta_mkEqFalse_x27(v_a_977_, v___y_943_, v___y_944_, v___y_945_, v___y_946_);
v___y_950_ = v___x_996_;
goto v___jp_949_;
}
}
else
{
lean_object* v_a_997_; lean_object* v___x_999_; uint8_t v_isShared_1000_; uint8_t v_isSharedCheck_1004_; 
v_a_997_ = lean_ctor_get(v___x_976_, 0);
v_isSharedCheck_1004_ = !lean_is_exclusive(v___x_976_);
if (v_isSharedCheck_1004_ == 0)
{
v___x_999_ = v___x_976_;
v_isShared_1000_ = v_isSharedCheck_1004_;
goto v_resetjp_998_;
}
else
{
lean_inc(v_a_997_);
lean_dec(v___x_976_);
v___x_999_ = lean_box(0);
v_isShared_1000_ = v_isSharedCheck_1004_;
goto v_resetjp_998_;
}
v_resetjp_998_:
{
lean_object* v___x_1002_; 
if (v_isShared_1000_ == 0)
{
v___x_1002_ = v___x_999_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v_a_997_);
v___x_1002_ = v_reuseFailAlloc_1003_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
return v___x_1002_;
}
}
}
}
else
{
lean_object* v_a_1005_; lean_object* v___x_1007_; uint8_t v_isShared_1008_; uint8_t v_isSharedCheck_1012_; 
lean_dec_ref(v_h_939_);
v_a_1005_ = lean_ctor_get(v___x_970_, 0);
v_isSharedCheck_1012_ = !lean_is_exclusive(v___x_970_);
if (v_isSharedCheck_1012_ == 0)
{
v___x_1007_ = v___x_970_;
v_isShared_1008_ = v_isSharedCheck_1012_;
goto v_resetjp_1006_;
}
else
{
lean_inc(v_a_1005_);
lean_dec(v___x_970_);
v___x_1007_ = lean_box(0);
v_isShared_1008_ = v_isSharedCheck_1012_;
goto v_resetjp_1006_;
}
v_resetjp_1006_:
{
lean_object* v___x_1010_; 
if (v_isShared_1008_ == 0)
{
v___x_1010_ = v___x_1007_;
goto v_reusejp_1009_;
}
else
{
lean_object* v_reuseFailAlloc_1011_; 
v_reuseFailAlloc_1011_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1011_, 0, v_a_1005_);
v___x_1010_ = v_reuseFailAlloc_1011_;
goto v_reusejp_1009_;
}
v_reusejp_1009_:
{
return v___x_1010_;
}
}
}
v___jp_949_:
{
if (lean_obj_tag(v___y_950_) == 0)
{
lean_object* v_a_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_961_; 
v_a_951_ = lean_ctor_get(v___y_950_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___y_950_);
if (v_isSharedCheck_961_ == 0)
{
v___x_953_ = v___y_950_;
v_isShared_954_ = v_isSharedCheck_961_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_a_951_);
lean_dec(v___y_950_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_961_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_959_; 
v___x_955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_955_, 0, v_a_951_);
v___x_956_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_956_, 0, v___x_948_);
lean_ctor_set(v___x_956_, 1, v___x_955_);
lean_ctor_set_uint8(v___x_956_, sizeof(void*)*2, v___x_937_);
v___x_957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_957_, 0, v___x_956_);
if (v_isShared_954_ == 0)
{
lean_ctor_set(v___x_953_, 0, v___x_957_);
v___x_959_ = v___x_953_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v___x_957_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
return v___x_959_;
}
}
}
else
{
lean_object* v_a_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_969_; 
v_a_962_ = lean_ctor_get(v___y_950_, 0);
v_isSharedCheck_969_ = !lean_is_exclusive(v___y_950_);
if (v_isSharedCheck_969_ == 0)
{
v___x_964_ = v___y_950_;
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_a_962_);
lean_dec(v___y_950_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v___x_967_; 
if (v_isShared_965_ == 0)
{
v___x_967_ = v___x_964_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v_a_962_);
v___x_967_ = v_reuseFailAlloc_968_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
return v___x_967_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_reduceCtorEq___lam__2___boxed(lean_object* v___x_1013_, lean_object* v___x_1014_, lean_object* v_h_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_){
_start:
{
uint8_t v___x_19066__boxed_1024_; uint8_t v___x_19067__boxed_1025_; lean_object* v_res_1026_; 
v___x_19066__boxed_1024_ = lean_unbox(v___x_1013_);
v___x_19067__boxed_1025_ = lean_unbox(v___x_1014_);
v_res_1026_ = l_reduceCtorEq___lam__2(v___x_19066__boxed_1024_, v___x_19067__boxed_1025_, v_h_1015_, v___y_1016_, v___y_1017_, v___y_1018_, v___y_1019_, v___y_1020_, v___y_1021_, v___y_1022_);
lean_dec(v___y_1022_);
lean_dec_ref(v___y_1021_);
lean_dec(v___y_1020_);
lean_dec_ref(v___y_1019_);
lean_dec(v___y_1018_);
lean_dec_ref(v___y_1017_);
lean_dec(v___y_1016_);
return v_res_1026_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg___lam__0(lean_object* v_k_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v_b_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_){
_start:
{
lean_object* v___x_1037_; 
lean_inc(v___y_1035_);
lean_inc_ref(v___y_1034_);
lean_inc(v___y_1033_);
lean_inc_ref(v___y_1032_);
lean_inc(v___y_1030_);
lean_inc_ref(v___y_1029_);
lean_inc(v___y_1028_);
v___x_1037_ = lean_apply_9(v_k_1027_, v_b_1031_, v___y_1028_, v___y_1029_, v___y_1030_, v___y_1032_, v___y_1033_, v___y_1034_, v___y_1035_, lean_box(0));
return v___x_1037_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v_b_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_){
_start:
{
lean_object* v_res_1048_; 
v_res_1048_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg___lam__0(v_k_1038_, v___y_1039_, v___y_1040_, v___y_1041_, v_b_1042_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_);
lean_dec(v___y_1046_);
lean_dec_ref(v___y_1045_);
lean_dec(v___y_1044_);
lean_dec_ref(v___y_1043_);
lean_dec(v___y_1041_);
lean_dec_ref(v___y_1040_);
lean_dec(v___y_1039_);
return v_res_1048_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg(lean_object* v_name_1049_, uint8_t v_bi_1050_, lean_object* v_type_1051_, lean_object* v_k_1052_, uint8_t v_kind_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_){
_start:
{
lean_object* v___f_1062_; lean_object* v___x_1063_; 
lean_inc(v___y_1056_);
lean_inc_ref(v___y_1055_);
lean_inc(v___y_1054_);
v___f_1062_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1062_, 0, v_k_1052_);
lean_closure_set(v___f_1062_, 1, v___y_1054_);
lean_closure_set(v___f_1062_, 2, v___y_1055_);
lean_closure_set(v___f_1062_, 3, v___y_1056_);
v___x_1063_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1049_, v_bi_1050_, v_type_1051_, v___f_1062_, v_kind_1053_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_);
if (lean_obj_tag(v___x_1063_) == 0)
{
return v___x_1063_;
}
else
{
lean_object* v_a_1064_; lean_object* v___x_1066_; uint8_t v_isShared_1067_; uint8_t v_isSharedCheck_1071_; 
v_a_1064_ = lean_ctor_get(v___x_1063_, 0);
v_isSharedCheck_1071_ = !lean_is_exclusive(v___x_1063_);
if (v_isSharedCheck_1071_ == 0)
{
v___x_1066_ = v___x_1063_;
v_isShared_1067_ = v_isSharedCheck_1071_;
goto v_resetjp_1065_;
}
else
{
lean_inc(v_a_1064_);
lean_dec(v___x_1063_);
v___x_1066_ = lean_box(0);
v_isShared_1067_ = v_isSharedCheck_1071_;
goto v_resetjp_1065_;
}
v_resetjp_1065_:
{
lean_object* v___x_1069_; 
if (v_isShared_1067_ == 0)
{
v___x_1069_ = v___x_1066_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1070_; 
v_reuseFailAlloc_1070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1070_, 0, v_a_1064_);
v___x_1069_ = v_reuseFailAlloc_1070_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
return v___x_1069_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg___boxed(lean_object* v_name_1072_, lean_object* v_bi_1073_, lean_object* v_type_1074_, lean_object* v_k_1075_, lean_object* v_kind_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_){
_start:
{
uint8_t v_bi_boxed_1085_; uint8_t v_kind_boxed_1086_; lean_object* v_res_1087_; 
v_bi_boxed_1085_ = lean_unbox(v_bi_1073_);
v_kind_boxed_1086_ = lean_unbox(v_kind_1076_);
v_res_1087_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg(v_name_1072_, v_bi_boxed_1085_, v_type_1074_, v_k_1075_, v_kind_boxed_1086_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_, v___y_1083_);
lean_dec(v___y_1083_);
lean_dec_ref(v___y_1082_);
lean_dec(v___y_1081_);
lean_dec_ref(v___y_1080_);
lean_dec(v___y_1079_);
lean_dec_ref(v___y_1078_);
lean_dec(v___y_1077_);
return v_res_1087_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0___redArg(lean_object* v_name_1088_, lean_object* v_type_1089_, lean_object* v_k_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_){
_start:
{
uint8_t v___x_1099_; uint8_t v___x_1100_; lean_object* v___x_1101_; 
v___x_1099_ = 0;
v___x_1100_ = 0;
v___x_1101_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg(v_name_1088_, v___x_1099_, v_type_1089_, v_k_1090_, v___x_1100_, v___y_1091_, v___y_1092_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_, v___y_1097_);
return v___x_1101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0___redArg___boxed(lean_object* v_name_1102_, lean_object* v_type_1103_, lean_object* v_k_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_){
_start:
{
lean_object* v_res_1113_; 
v_res_1113_ = l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0___redArg(v_name_1102_, v_type_1103_, v_k_1104_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_, v___y_1111_);
lean_dec(v___y_1111_);
lean_dec_ref(v___y_1110_);
lean_dec(v___y_1109_);
lean_dec_ref(v___y_1108_);
lean_dec(v___y_1107_);
lean_dec_ref(v___y_1106_);
lean_dec(v___y_1105_);
return v_res_1113_;
}
}
LEAN_EXPORT lean_object* l_reduceCtorEq(lean_object* v_e_1117_, lean_object* v_a_1118_, lean_object* v_a_1119_, lean_object* v_a_1120_, lean_object* v_a_1121_, lean_object* v_a_1122_, lean_object* v_a_1123_, lean_object* v_a_1124_){
_start:
{
lean_object* v___y_1127_; lean_object* v___x_1136_; uint8_t v_transparency_1137_; uint8_t v___x_1138_; uint8_t v___x_1139_; 
v___x_1136_ = l_Lean_Meta_Context_config(v_a_1121_);
v_transparency_1137_ = lean_ctor_get_uint8(v___x_1136_, 9);
lean_dec_ref(v___x_1136_);
v___x_1138_ = 3;
v___x_1139_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1137_, v___x_1138_);
if (v___x_1139_ == 0)
{
lean_object* v_keyedConfig_1140_; uint8_t v_trackZetaDelta_1141_; lean_object* v_zetaDeltaSet_1142_; lean_object* v_lctx_1143_; lean_object* v_localInstances_1144_; lean_object* v_defEqCtx_x3f_1145_; lean_object* v_synthPendingDepth_1146_; lean_object* v_customCanUnfoldPredicate_x3f_1147_; uint8_t v_univApprox_1148_; uint8_t v_inTypeClassResolution_1149_; uint8_t v_cacheInferType_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; 
v_keyedConfig_1140_ = lean_ctor_get(v_a_1121_, 0);
v_trackZetaDelta_1141_ = lean_ctor_get_uint8(v_a_1121_, sizeof(void*)*7);
v_zetaDeltaSet_1142_ = lean_ctor_get(v_a_1121_, 1);
v_lctx_1143_ = lean_ctor_get(v_a_1121_, 2);
v_localInstances_1144_ = lean_ctor_get(v_a_1121_, 3);
v_defEqCtx_x3f_1145_ = lean_ctor_get(v_a_1121_, 4);
v_synthPendingDepth_1146_ = lean_ctor_get(v_a_1121_, 5);
v_customCanUnfoldPredicate_x3f_1147_ = lean_ctor_get(v_a_1121_, 6);
v_univApprox_1148_ = lean_ctor_get_uint8(v_a_1121_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1149_ = lean_ctor_get_uint8(v_a_1121_, sizeof(void*)*7 + 2);
v_cacheInferType_1150_ = lean_ctor_get_uint8(v_a_1121_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_1140_);
v___x_1151_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1138_, v_keyedConfig_1140_);
lean_inc(v_customCanUnfoldPredicate_x3f_1147_);
lean_inc(v_synthPendingDepth_1146_);
lean_inc(v_defEqCtx_x3f_1145_);
lean_inc_ref(v_localInstances_1144_);
lean_inc_ref(v_lctx_1143_);
lean_inc(v_zetaDeltaSet_1142_);
v___x_1152_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1152_, 0, v___x_1151_);
lean_ctor_set(v___x_1152_, 1, v_zetaDeltaSet_1142_);
lean_ctor_set(v___x_1152_, 2, v_lctx_1143_);
lean_ctor_set(v___x_1152_, 3, v_localInstances_1144_);
lean_ctor_set(v___x_1152_, 4, v_defEqCtx_x3f_1145_);
lean_ctor_set(v___x_1152_, 5, v_synthPendingDepth_1146_);
lean_ctor_set(v___x_1152_, 6, v_customCanUnfoldPredicate_x3f_1147_);
lean_ctor_set_uint8(v___x_1152_, sizeof(void*)*7, v_trackZetaDelta_1141_);
lean_ctor_set_uint8(v___x_1152_, sizeof(void*)*7 + 1, v_univApprox_1148_);
lean_ctor_set_uint8(v___x_1152_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1149_);
lean_ctor_set_uint8(v___x_1152_, sizeof(void*)*7 + 3, v_cacheInferType_1150_);
lean_inc_ref(v_e_1117_);
v___x_1153_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_1117_, v_a_1122_);
if (lean_obj_tag(v___x_1153_) == 0)
{
lean_object* v_a_1154_; lean_object* v___x_1155_; uint8_t v___x_1156_; 
v_a_1154_ = lean_ctor_get(v___x_1153_, 0);
lean_inc(v_a_1154_);
lean_dec_ref_known(v___x_1153_, 1);
v___x_1155_ = l_Lean_Expr_cleanupAnnotations(v_a_1154_);
lean_dec(v_a_1154_);
v___x_1156_ = l_Lean_Expr_isApp(v___x_1155_);
if (v___x_1156_ == 0)
{
lean_object* v___x_1157_; lean_object* v___x_1158_; 
lean_dec_ref(v___x_1155_);
lean_dec_ref(v_e_1117_);
v___x_1157_ = lean_box(0);
v___x_1158_ = l_reduceCtorEq___lam__0(v___x_1157_, v_a_1118_, v_a_1119_, v_a_1120_, v___x_1152_, v_a_1122_, v_a_1123_, v_a_1124_);
lean_dec_ref_known(v___x_1152_, 7);
v___y_1127_ = v___x_1158_;
goto v___jp_1126_;
}
else
{
lean_object* v___x_1159_; uint8_t v___x_1160_; 
v___x_1159_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1155_);
v___x_1160_ = l_Lean_Expr_isApp(v___x_1159_);
if (v___x_1160_ == 0)
{
lean_object* v___x_1161_; lean_object* v___x_1162_; 
lean_dec_ref(v___x_1159_);
lean_dec_ref(v___x_1155_);
lean_dec_ref(v_e_1117_);
v___x_1161_ = lean_box(0);
v___x_1162_ = l_reduceCtorEq___lam__0(v___x_1161_, v_a_1118_, v_a_1119_, v_a_1120_, v___x_1152_, v_a_1122_, v_a_1123_, v_a_1124_);
lean_dec_ref_known(v___x_1152_, 7);
v___y_1127_ = v___x_1162_;
goto v___jp_1126_;
}
else
{
lean_object* v___x_1163_; uint8_t v___x_1164_; 
v___x_1163_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1159_);
v___x_1164_ = l_Lean_Expr_isApp(v___x_1163_);
if (v___x_1164_ == 0)
{
lean_object* v___x_1165_; lean_object* v___x_1166_; 
lean_dec_ref(v___x_1163_);
lean_dec_ref(v___x_1159_);
lean_dec_ref(v___x_1155_);
lean_dec_ref(v_e_1117_);
v___x_1165_ = lean_box(0);
v___x_1166_ = l_reduceCtorEq___lam__0(v___x_1165_, v_a_1118_, v_a_1119_, v_a_1120_, v___x_1152_, v_a_1122_, v_a_1123_, v_a_1124_);
lean_dec_ref_known(v___x_1152_, 7);
v___y_1127_ = v___x_1166_;
goto v___jp_1126_;
}
else
{
lean_object* v___x_1167_; lean_object* v___x_1168_; uint8_t v___x_1169_; 
v___x_1167_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1163_);
lean_dec_ref(v___x_1163_);
v___x_1168_ = ((lean_object*)(l_reduceIte___closed__7));
v___x_1169_ = l_Lean_Expr_isConstOf(v___x_1167_, v___x_1168_);
lean_dec_ref(v___x_1167_);
if (v___x_1169_ == 0)
{
lean_object* v___x_1170_; lean_object* v___x_1171_; 
lean_dec_ref(v___x_1159_);
lean_dec_ref(v___x_1155_);
lean_dec_ref(v_e_1117_);
v___x_1170_ = lean_box(0);
v___x_1171_ = l_reduceCtorEq___lam__0(v___x_1170_, v_a_1118_, v_a_1119_, v_a_1120_, v___x_1152_, v_a_1122_, v_a_1123_, v_a_1124_);
lean_dec_ref_known(v___x_1152_, 7);
v___y_1127_ = v___x_1171_;
goto v___jp_1126_;
}
else
{
lean_object* v_arg_1172_; lean_object* v_arg_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___f_1176_; lean_object* v___x_1177_; 
v_arg_1172_ = lean_ctor_get(v___x_1155_, 1);
lean_inc_ref(v_arg_1172_);
lean_dec_ref(v___x_1155_);
v_arg_1173_ = lean_ctor_get(v___x_1159_, 1);
lean_inc_ref(v_arg_1173_);
lean_dec_ref(v___x_1159_);
v___x_1174_ = lean_box(v___x_1169_);
v___x_1175_ = lean_box(v___x_1139_);
v___f_1176_ = lean_alloc_closure((void*)(l_reduceCtorEq___lam__2___boxed), 11, 2);
lean_closure_set(v___f_1176_, 0, v___x_1174_);
lean_closure_set(v___f_1176_, 1, v___x_1175_);
v___x_1177_ = l_Lean_Meta_constructorApp_x27_x3f(v_arg_1173_, v___x_1152_, v_a_1122_, v_a_1123_, v_a_1124_);
if (lean_obj_tag(v___x_1177_) == 0)
{
lean_object* v_a_1178_; lean_object* v___x_1179_; 
v_a_1178_ = lean_ctor_get(v___x_1177_, 0);
lean_inc(v_a_1178_);
lean_dec_ref_known(v___x_1177_, 1);
v___x_1179_ = l_Lean_Meta_constructorApp_x27_x3f(v_arg_1172_, v___x_1152_, v_a_1122_, v_a_1123_, v_a_1124_);
if (lean_obj_tag(v___x_1179_) == 0)
{
if (lean_obj_tag(v_a_1178_) == 1)
{
lean_object* v_val_1180_; lean_object* v_a_1181_; lean_object* v___x_1183_; uint8_t v_isShared_1184_; uint8_t v_isSharedCheck_1200_; 
v_val_1180_ = lean_ctor_get(v_a_1178_, 0);
v_a_1181_ = lean_ctor_get(v___x_1179_, 0);
v_isSharedCheck_1200_ = !lean_is_exclusive(v___x_1179_);
if (v_isSharedCheck_1200_ == 0)
{
v___x_1183_ = v___x_1179_;
v_isShared_1184_ = v_isSharedCheck_1200_;
goto v_resetjp_1182_;
}
else
{
lean_inc(v_a_1181_);
lean_dec(v___x_1179_);
v___x_1183_ = lean_box(0);
v_isShared_1184_ = v_isSharedCheck_1200_;
goto v_resetjp_1182_;
}
v_resetjp_1182_:
{
if (lean_obj_tag(v_a_1181_) == 1)
{
lean_object* v_val_1185_; lean_object* v_fst_1186_; lean_object* v_toConstantVal_1187_; lean_object* v_fst_1188_; lean_object* v_toConstantVal_1189_; lean_object* v_name_1190_; lean_object* v_name_1191_; uint8_t v___x_1192_; 
lean_inc(v_val_1180_);
lean_dec_ref_known(v_a_1178_, 1);
v_val_1185_ = lean_ctor_get(v_a_1181_, 0);
lean_inc(v_val_1185_);
lean_dec_ref_known(v_a_1181_, 1);
v_fst_1186_ = lean_ctor_get(v_val_1180_, 0);
lean_inc(v_fst_1186_);
lean_dec(v_val_1180_);
v_toConstantVal_1187_ = lean_ctor_get(v_fst_1186_, 0);
lean_inc_ref(v_toConstantVal_1187_);
lean_dec(v_fst_1186_);
v_fst_1188_ = lean_ctor_get(v_val_1185_, 0);
lean_inc(v_fst_1188_);
lean_dec(v_val_1185_);
v_toConstantVal_1189_ = lean_ctor_get(v_fst_1188_, 0);
lean_inc_ref(v_toConstantVal_1189_);
lean_dec(v_fst_1188_);
v_name_1190_ = lean_ctor_get(v_toConstantVal_1187_, 0);
lean_inc(v_name_1190_);
lean_dec_ref(v_toConstantVal_1187_);
v_name_1191_ = lean_ctor_get(v_toConstantVal_1189_, 0);
lean_inc(v_name_1191_);
lean_dec_ref(v_toConstantVal_1189_);
v___x_1192_ = lean_name_eq(v_name_1190_, v_name_1191_);
lean_dec(v_name_1191_);
lean_dec(v_name_1190_);
if (v___x_1192_ == 0)
{
lean_object* v___x_1193_; lean_object* v___x_1194_; 
lean_del_object(v___x_1183_);
v___x_1193_ = ((lean_object*)(l_reduceCtorEq___closed__1));
v___x_1194_ = l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0___redArg(v___x_1193_, v_e_1117_, v___f_1176_, v_a_1118_, v_a_1119_, v_a_1120_, v___x_1152_, v_a_1122_, v_a_1123_, v_a_1124_);
lean_dec_ref_known(v___x_1152_, 7);
v___y_1127_ = v___x_1194_;
goto v___jp_1126_;
}
else
{
lean_object* v___x_1195_; lean_object* v___x_1197_; 
lean_dec_ref(v___f_1176_);
lean_dec_ref_known(v___x_1152_, 7);
lean_dec_ref(v_e_1117_);
v___x_1195_ = ((lean_object*)(l_reduceIte___closed__0));
if (v_isShared_1184_ == 0)
{
lean_ctor_set(v___x_1183_, 0, v___x_1195_);
v___x_1197_ = v___x_1183_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v___x_1195_);
v___x_1197_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
return v___x_1197_;
}
}
}
else
{
lean_object* v___x_1199_; 
lean_del_object(v___x_1183_);
lean_dec_ref(v___f_1176_);
lean_dec_ref(v_e_1117_);
v___x_1199_ = l_reduceCtorEq___lam__1(v_a_1178_, v_a_1181_, v_a_1118_, v_a_1119_, v_a_1120_, v___x_1152_, v_a_1122_, v_a_1123_, v_a_1124_);
lean_dec_ref_known(v___x_1152_, 7);
lean_dec(v_a_1181_);
lean_dec_ref_known(v_a_1178_, 1);
v___y_1127_ = v___x_1199_;
goto v___jp_1126_;
}
}
}
else
{
lean_object* v_a_1201_; lean_object* v___x_1202_; 
lean_dec_ref(v___f_1176_);
lean_dec_ref(v_e_1117_);
v_a_1201_ = lean_ctor_get(v___x_1179_, 0);
lean_inc(v_a_1201_);
lean_dec_ref_known(v___x_1179_, 1);
v___x_1202_ = l_reduceCtorEq___lam__1(v_a_1178_, v_a_1201_, v_a_1118_, v_a_1119_, v_a_1120_, v___x_1152_, v_a_1122_, v_a_1123_, v_a_1124_);
lean_dec_ref_known(v___x_1152_, 7);
lean_dec(v_a_1201_);
lean_dec(v_a_1178_);
v___y_1127_ = v___x_1202_;
goto v___jp_1126_;
}
}
else
{
lean_object* v_a_1203_; lean_object* v___x_1205_; uint8_t v_isShared_1206_; uint8_t v_isSharedCheck_1210_; 
lean_dec(v_a_1178_);
lean_dec_ref(v___f_1176_);
lean_dec_ref_known(v___x_1152_, 7);
lean_dec_ref(v_e_1117_);
v_a_1203_ = lean_ctor_get(v___x_1179_, 0);
v_isSharedCheck_1210_ = !lean_is_exclusive(v___x_1179_);
if (v_isSharedCheck_1210_ == 0)
{
v___x_1205_ = v___x_1179_;
v_isShared_1206_ = v_isSharedCheck_1210_;
goto v_resetjp_1204_;
}
else
{
lean_inc(v_a_1203_);
lean_dec(v___x_1179_);
v___x_1205_ = lean_box(0);
v_isShared_1206_ = v_isSharedCheck_1210_;
goto v_resetjp_1204_;
}
v_resetjp_1204_:
{
lean_object* v___x_1208_; 
if (v_isShared_1206_ == 0)
{
v___x_1208_ = v___x_1205_;
goto v_reusejp_1207_;
}
else
{
lean_object* v_reuseFailAlloc_1209_; 
v_reuseFailAlloc_1209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1209_, 0, v_a_1203_);
v___x_1208_ = v_reuseFailAlloc_1209_;
goto v_reusejp_1207_;
}
v_reusejp_1207_:
{
return v___x_1208_;
}
}
}
}
else
{
lean_object* v_a_1211_; lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1218_; 
lean_dec_ref(v___f_1176_);
lean_dec_ref(v_arg_1172_);
lean_dec_ref_known(v___x_1152_, 7);
lean_dec_ref(v_e_1117_);
v_a_1211_ = lean_ctor_get(v___x_1177_, 0);
v_isSharedCheck_1218_ = !lean_is_exclusive(v___x_1177_);
if (v_isSharedCheck_1218_ == 0)
{
v___x_1213_ = v___x_1177_;
v_isShared_1214_ = v_isSharedCheck_1218_;
goto v_resetjp_1212_;
}
else
{
lean_inc(v_a_1211_);
lean_dec(v___x_1177_);
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
}
}
}
}
else
{
lean_object* v_a_1219_; lean_object* v___x_1221_; uint8_t v_isShared_1222_; uint8_t v_isSharedCheck_1226_; 
lean_dec_ref_known(v___x_1152_, 7);
lean_dec_ref(v_e_1117_);
v_a_1219_ = lean_ctor_get(v___x_1153_, 0);
v_isSharedCheck_1226_ = !lean_is_exclusive(v___x_1153_);
if (v_isSharedCheck_1226_ == 0)
{
v___x_1221_ = v___x_1153_;
v_isShared_1222_ = v_isSharedCheck_1226_;
goto v_resetjp_1220_;
}
else
{
lean_inc(v_a_1219_);
lean_dec(v___x_1153_);
v___x_1221_ = lean_box(0);
v_isShared_1222_ = v_isSharedCheck_1226_;
goto v_resetjp_1220_;
}
v_resetjp_1220_:
{
lean_object* v___x_1224_; 
if (v_isShared_1222_ == 0)
{
v___x_1224_ = v___x_1221_;
goto v_reusejp_1223_;
}
else
{
lean_object* v_reuseFailAlloc_1225_; 
v_reuseFailAlloc_1225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1225_, 0, v_a_1219_);
v___x_1224_ = v_reuseFailAlloc_1225_;
goto v_reusejp_1223_;
}
v_reusejp_1223_:
{
return v___x_1224_;
}
}
}
}
else
{
lean_object* v___x_1227_; 
lean_inc_ref(v_e_1117_);
v___x_1227_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_1117_, v_a_1122_);
if (lean_obj_tag(v___x_1227_) == 0)
{
lean_object* v_a_1228_; lean_object* v___x_1229_; uint8_t v___x_1230_; 
v_a_1228_ = lean_ctor_get(v___x_1227_, 0);
lean_inc(v_a_1228_);
lean_dec_ref_known(v___x_1227_, 1);
v___x_1229_ = l_Lean_Expr_cleanupAnnotations(v_a_1228_);
lean_dec(v_a_1228_);
v___x_1230_ = l_Lean_Expr_isApp(v___x_1229_);
if (v___x_1230_ == 0)
{
lean_object* v___x_1231_; lean_object* v___x_1232_; 
lean_dec_ref(v___x_1229_);
lean_dec_ref(v_e_1117_);
v___x_1231_ = lean_box(0);
v___x_1232_ = l_reduceCtorEq___lam__0(v___x_1231_, v_a_1118_, v_a_1119_, v_a_1120_, v_a_1121_, v_a_1122_, v_a_1123_, v_a_1124_);
v___y_1127_ = v___x_1232_;
goto v___jp_1126_;
}
else
{
lean_object* v___x_1233_; uint8_t v___x_1234_; 
v___x_1233_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1229_);
v___x_1234_ = l_Lean_Expr_isApp(v___x_1233_);
if (v___x_1234_ == 0)
{
lean_object* v___x_1235_; lean_object* v___x_1236_; 
lean_dec_ref(v___x_1233_);
lean_dec_ref(v___x_1229_);
lean_dec_ref(v_e_1117_);
v___x_1235_ = lean_box(0);
v___x_1236_ = l_reduceCtorEq___lam__0(v___x_1235_, v_a_1118_, v_a_1119_, v_a_1120_, v_a_1121_, v_a_1122_, v_a_1123_, v_a_1124_);
v___y_1127_ = v___x_1236_;
goto v___jp_1126_;
}
else
{
lean_object* v___x_1237_; uint8_t v___x_1238_; 
v___x_1237_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1233_);
v___x_1238_ = l_Lean_Expr_isApp(v___x_1237_);
if (v___x_1238_ == 0)
{
lean_object* v___x_1239_; lean_object* v___x_1240_; 
lean_dec_ref(v___x_1237_);
lean_dec_ref(v___x_1233_);
lean_dec_ref(v___x_1229_);
lean_dec_ref(v_e_1117_);
v___x_1239_ = lean_box(0);
v___x_1240_ = l_reduceCtorEq___lam__0(v___x_1239_, v_a_1118_, v_a_1119_, v_a_1120_, v_a_1121_, v_a_1122_, v_a_1123_, v_a_1124_);
v___y_1127_ = v___x_1240_;
goto v___jp_1126_;
}
else
{
lean_object* v___x_1241_; lean_object* v___x_1242_; uint8_t v___x_1243_; 
v___x_1241_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1237_);
lean_dec_ref(v___x_1237_);
v___x_1242_ = ((lean_object*)(l_reduceIte___closed__7));
v___x_1243_ = l_Lean_Expr_isConstOf(v___x_1241_, v___x_1242_);
lean_dec_ref(v___x_1241_);
if (v___x_1243_ == 0)
{
lean_object* v___x_1244_; lean_object* v___x_1245_; 
lean_dec_ref(v___x_1233_);
lean_dec_ref(v___x_1229_);
lean_dec_ref(v_e_1117_);
v___x_1244_ = lean_box(0);
v___x_1245_ = l_reduceCtorEq___lam__0(v___x_1244_, v_a_1118_, v_a_1119_, v_a_1120_, v_a_1121_, v_a_1122_, v_a_1123_, v_a_1124_);
v___y_1127_ = v___x_1245_;
goto v___jp_1126_;
}
else
{
lean_object* v_arg_1246_; lean_object* v_arg_1247_; lean_object* v___x_1248_; 
v_arg_1246_ = lean_ctor_get(v___x_1229_, 1);
lean_inc_ref(v_arg_1246_);
lean_dec_ref(v___x_1229_);
v_arg_1247_ = lean_ctor_get(v___x_1233_, 1);
lean_inc_ref(v_arg_1247_);
lean_dec_ref(v___x_1233_);
v___x_1248_ = l_Lean_Meta_constructorApp_x27_x3f(v_arg_1247_, v_a_1121_, v_a_1122_, v_a_1123_, v_a_1124_);
if (lean_obj_tag(v___x_1248_) == 0)
{
lean_object* v_a_1249_; lean_object* v___x_1250_; 
v_a_1249_ = lean_ctor_get(v___x_1248_, 0);
lean_inc(v_a_1249_);
lean_dec_ref_known(v___x_1248_, 1);
v___x_1250_ = l_Lean_Meta_constructorApp_x27_x3f(v_arg_1246_, v_a_1121_, v_a_1122_, v_a_1123_, v_a_1124_);
if (lean_obj_tag(v___x_1250_) == 0)
{
if (lean_obj_tag(v_a_1249_) == 1)
{
lean_object* v_val_1251_; lean_object* v_a_1252_; lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1274_; 
v_val_1251_ = lean_ctor_get(v_a_1249_, 0);
v_a_1252_ = lean_ctor_get(v___x_1250_, 0);
v_isSharedCheck_1274_ = !lean_is_exclusive(v___x_1250_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1254_ = v___x_1250_;
v_isShared_1255_ = v_isSharedCheck_1274_;
goto v_resetjp_1253_;
}
else
{
lean_inc(v_a_1252_);
lean_dec(v___x_1250_);
v___x_1254_ = lean_box(0);
v_isShared_1255_ = v_isSharedCheck_1274_;
goto v_resetjp_1253_;
}
v_resetjp_1253_:
{
if (lean_obj_tag(v_a_1252_) == 1)
{
lean_object* v_val_1256_; lean_object* v_fst_1257_; lean_object* v_toConstantVal_1258_; lean_object* v_fst_1259_; lean_object* v_toConstantVal_1260_; lean_object* v_name_1261_; lean_object* v_name_1262_; uint8_t v___x_1263_; 
lean_inc(v_val_1251_);
lean_dec_ref_known(v_a_1249_, 1);
v_val_1256_ = lean_ctor_get(v_a_1252_, 0);
lean_inc(v_val_1256_);
lean_dec_ref_known(v_a_1252_, 1);
v_fst_1257_ = lean_ctor_get(v_val_1251_, 0);
lean_inc(v_fst_1257_);
lean_dec(v_val_1251_);
v_toConstantVal_1258_ = lean_ctor_get(v_fst_1257_, 0);
lean_inc_ref(v_toConstantVal_1258_);
lean_dec(v_fst_1257_);
v_fst_1259_ = lean_ctor_get(v_val_1256_, 0);
lean_inc(v_fst_1259_);
lean_dec(v_val_1256_);
v_toConstantVal_1260_ = lean_ctor_get(v_fst_1259_, 0);
lean_inc_ref(v_toConstantVal_1260_);
lean_dec(v_fst_1259_);
v_name_1261_ = lean_ctor_get(v_toConstantVal_1258_, 0);
lean_inc(v_name_1261_);
lean_dec_ref(v_toConstantVal_1258_);
v_name_1262_ = lean_ctor_get(v_toConstantVal_1260_, 0);
lean_inc(v_name_1262_);
lean_dec_ref(v_toConstantVal_1260_);
v___x_1263_ = lean_name_eq(v_name_1261_, v_name_1262_);
lean_dec(v_name_1262_);
lean_dec(v_name_1261_);
if (v___x_1263_ == 0)
{
lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___f_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; 
lean_del_object(v___x_1254_);
v___x_1264_ = lean_box(v___x_1243_);
v___x_1265_ = lean_box(v___x_1263_);
v___f_1266_ = lean_alloc_closure((void*)(l_reduceCtorEq___lam__2___boxed), 11, 2);
lean_closure_set(v___f_1266_, 0, v___x_1264_);
lean_closure_set(v___f_1266_, 1, v___x_1265_);
v___x_1267_ = ((lean_object*)(l_reduceCtorEq___closed__1));
v___x_1268_ = l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0___redArg(v___x_1267_, v_e_1117_, v___f_1266_, v_a_1118_, v_a_1119_, v_a_1120_, v_a_1121_, v_a_1122_, v_a_1123_, v_a_1124_);
v___y_1127_ = v___x_1268_;
goto v___jp_1126_;
}
else
{
lean_object* v___x_1269_; lean_object* v___x_1271_; 
lean_dec_ref(v_e_1117_);
v___x_1269_ = ((lean_object*)(l_reduceIte___closed__0));
if (v_isShared_1255_ == 0)
{
lean_ctor_set(v___x_1254_, 0, v___x_1269_);
v___x_1271_ = v___x_1254_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v___x_1269_);
v___x_1271_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1270_;
}
v_reusejp_1270_:
{
return v___x_1271_;
}
}
}
else
{
lean_object* v___x_1273_; 
lean_del_object(v___x_1254_);
lean_dec_ref(v_e_1117_);
v___x_1273_ = l_reduceCtorEq___lam__1(v_a_1249_, v_a_1252_, v_a_1118_, v_a_1119_, v_a_1120_, v_a_1121_, v_a_1122_, v_a_1123_, v_a_1124_);
lean_dec(v_a_1252_);
lean_dec_ref_known(v_a_1249_, 1);
v___y_1127_ = v___x_1273_;
goto v___jp_1126_;
}
}
}
else
{
lean_object* v_a_1275_; lean_object* v___x_1276_; 
lean_dec_ref(v_e_1117_);
v_a_1275_ = lean_ctor_get(v___x_1250_, 0);
lean_inc(v_a_1275_);
lean_dec_ref_known(v___x_1250_, 1);
v___x_1276_ = l_reduceCtorEq___lam__1(v_a_1249_, v_a_1275_, v_a_1118_, v_a_1119_, v_a_1120_, v_a_1121_, v_a_1122_, v_a_1123_, v_a_1124_);
lean_dec(v_a_1275_);
lean_dec(v_a_1249_);
v___y_1127_ = v___x_1276_;
goto v___jp_1126_;
}
}
else
{
lean_object* v_a_1277_; lean_object* v___x_1279_; uint8_t v_isShared_1280_; uint8_t v_isSharedCheck_1284_; 
lean_dec(v_a_1249_);
lean_dec_ref(v_e_1117_);
v_a_1277_ = lean_ctor_get(v___x_1250_, 0);
v_isSharedCheck_1284_ = !lean_is_exclusive(v___x_1250_);
if (v_isSharedCheck_1284_ == 0)
{
v___x_1279_ = v___x_1250_;
v_isShared_1280_ = v_isSharedCheck_1284_;
goto v_resetjp_1278_;
}
else
{
lean_inc(v_a_1277_);
lean_dec(v___x_1250_);
v___x_1279_ = lean_box(0);
v_isShared_1280_ = v_isSharedCheck_1284_;
goto v_resetjp_1278_;
}
v_resetjp_1278_:
{
lean_object* v___x_1282_; 
if (v_isShared_1280_ == 0)
{
v___x_1282_ = v___x_1279_;
goto v_reusejp_1281_;
}
else
{
lean_object* v_reuseFailAlloc_1283_; 
v_reuseFailAlloc_1283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1283_, 0, v_a_1277_);
v___x_1282_ = v_reuseFailAlloc_1283_;
goto v_reusejp_1281_;
}
v_reusejp_1281_:
{
return v___x_1282_;
}
}
}
}
else
{
lean_object* v_a_1285_; lean_object* v___x_1287_; uint8_t v_isShared_1288_; uint8_t v_isSharedCheck_1292_; 
lean_dec_ref(v_arg_1246_);
lean_dec_ref(v_e_1117_);
v_a_1285_ = lean_ctor_get(v___x_1248_, 0);
v_isSharedCheck_1292_ = !lean_is_exclusive(v___x_1248_);
if (v_isSharedCheck_1292_ == 0)
{
v___x_1287_ = v___x_1248_;
v_isShared_1288_ = v_isSharedCheck_1292_;
goto v_resetjp_1286_;
}
else
{
lean_inc(v_a_1285_);
lean_dec(v___x_1248_);
v___x_1287_ = lean_box(0);
v_isShared_1288_ = v_isSharedCheck_1292_;
goto v_resetjp_1286_;
}
v_resetjp_1286_:
{
lean_object* v___x_1290_; 
if (v_isShared_1288_ == 0)
{
v___x_1290_ = v___x_1287_;
goto v_reusejp_1289_;
}
else
{
lean_object* v_reuseFailAlloc_1291_; 
v_reuseFailAlloc_1291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1291_, 0, v_a_1285_);
v___x_1290_ = v_reuseFailAlloc_1291_;
goto v_reusejp_1289_;
}
v_reusejp_1289_:
{
return v___x_1290_;
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
lean_object* v_a_1293_; lean_object* v___x_1295_; uint8_t v_isShared_1296_; uint8_t v_isSharedCheck_1300_; 
lean_dec_ref(v_e_1117_);
v_a_1293_ = lean_ctor_get(v___x_1227_, 0);
v_isSharedCheck_1300_ = !lean_is_exclusive(v___x_1227_);
if (v_isSharedCheck_1300_ == 0)
{
v___x_1295_ = v___x_1227_;
v_isShared_1296_ = v_isSharedCheck_1300_;
goto v_resetjp_1294_;
}
else
{
lean_inc(v_a_1293_);
lean_dec(v___x_1227_);
v___x_1295_ = lean_box(0);
v_isShared_1296_ = v_isSharedCheck_1300_;
goto v_resetjp_1294_;
}
v_resetjp_1294_:
{
lean_object* v___x_1298_; 
if (v_isShared_1296_ == 0)
{
v___x_1298_ = v___x_1295_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v_a_1293_);
v___x_1298_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
return v___x_1298_;
}
}
}
}
v___jp_1126_:
{
if (lean_obj_tag(v___y_1127_) == 0)
{
return v___y_1127_;
}
else
{
lean_object* v_a_1128_; lean_object* v___x_1130_; uint8_t v_isShared_1131_; uint8_t v_isSharedCheck_1135_; 
v_a_1128_ = lean_ctor_get(v___y_1127_, 0);
v_isSharedCheck_1135_ = !lean_is_exclusive(v___y_1127_);
if (v_isSharedCheck_1135_ == 0)
{
v___x_1130_ = v___y_1127_;
v_isShared_1131_ = v_isSharedCheck_1135_;
goto v_resetjp_1129_;
}
else
{
lean_inc(v_a_1128_);
lean_dec(v___y_1127_);
v___x_1130_ = lean_box(0);
v_isShared_1131_ = v_isSharedCheck_1135_;
goto v_resetjp_1129_;
}
v_resetjp_1129_:
{
lean_object* v___x_1133_; 
if (v_isShared_1131_ == 0)
{
v___x_1133_ = v___x_1130_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v_a_1128_);
v___x_1133_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
return v___x_1133_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_reduceCtorEq___boxed(lean_object* v_e_1301_, lean_object* v_a_1302_, lean_object* v_a_1303_, lean_object* v_a_1304_, lean_object* v_a_1305_, lean_object* v_a_1306_, lean_object* v_a_1307_, lean_object* v_a_1308_, lean_object* v_a_1309_){
_start:
{
lean_object* v_res_1310_; 
v_res_1310_ = l_reduceCtorEq(v_e_1301_, v_a_1302_, v_a_1303_, v_a_1304_, v_a_1305_, v_a_1306_, v_a_1307_, v_a_1308_);
lean_dec(v_a_1308_);
lean_dec_ref(v_a_1307_);
lean_dec(v_a_1306_);
lean_dec_ref(v_a_1305_);
lean_dec(v_a_1304_);
lean_dec_ref(v_a_1303_);
lean_dec(v_a_1302_);
return v_res_1310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0(lean_object* v_00_u03b1_1311_, lean_object* v_name_1312_, uint8_t v_bi_1313_, lean_object* v_type_1314_, lean_object* v_k_1315_, uint8_t v_kind_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_){
_start:
{
lean_object* v___x_1325_; 
v___x_1325_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___redArg(v_name_1312_, v_bi_1313_, v_type_1314_, v_k_1315_, v_kind_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_);
return v___x_1325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1326_, lean_object* v_name_1327_, lean_object* v_bi_1328_, lean_object* v_type_1329_, lean_object* v_k_1330_, lean_object* v_kind_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_){
_start:
{
uint8_t v_bi_boxed_1340_; uint8_t v_kind_boxed_1341_; lean_object* v_res_1342_; 
v_bi_boxed_1340_ = lean_unbox(v_bi_1328_);
v_kind_boxed_1341_ = lean_unbox(v_kind_1331_);
v_res_1342_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0_spec__0(v_00_u03b1_1326_, v_name_1327_, v_bi_boxed_1340_, v_type_1329_, v_k_1330_, v_kind_boxed_1341_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_);
lean_dec(v___y_1338_);
lean_dec_ref(v___y_1337_);
lean_dec(v___y_1336_);
lean_dec_ref(v___y_1335_);
lean_dec(v___y_1334_);
lean_dec_ref(v___y_1333_);
lean_dec(v___y_1332_);
return v_res_1342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0(lean_object* v_00_u03b1_1343_, lean_object* v_name_1344_, lean_object* v_type_1345_, lean_object* v_k_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_){
_start:
{
lean_object* v___x_1355_; 
v___x_1355_ = l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0___redArg(v_name_1344_, v_type_1345_, v_k_1346_, v___y_1347_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_);
return v___x_1355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0___boxed(lean_object* v_00_u03b1_1356_, lean_object* v_name_1357_, lean_object* v_type_1358_, lean_object* v_k_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_){
_start:
{
lean_object* v_res_1368_; 
v_res_1368_ = l_Lean_Meta_withLocalDeclD___at___00reduceCtorEq_spec__0(v_00_u03b1_1356_, v_name_1357_, v_type_1358_, v_k_1359_, v___y_1360_, v___y_1361_, v___y_1362_, v___y_1363_, v___y_1364_, v___y_1365_, v___y_1366_);
lean_dec(v___y_1366_);
lean_dec_ref(v___y_1365_);
lean_dec(v___y_1364_);
lean_dec_ref(v___y_1363_);
lean_dec(v___y_1362_);
lean_dec_ref(v___y_1361_);
lean_dec(v___y_1360_);
return v_res_1368_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__30_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_(){
_start:
{
lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; 
v___x_1381_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__30___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_));
v___x_1382_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__30___closed__2_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_));
v___x_1383_ = lean_alloc_closure((void*)(l_reduceCtorEq___boxed), 9, 0);
v___x_1384_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_1381_, v___x_1382_, v___x_1383_);
return v___x_1384_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__30_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23____boxed(lean_object* v_a_1385_){
_start:
{
lean_object* v_res_1386_; 
v_res_1386_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__30_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_();
return v_res_1386_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25_(void){
_start:
{
lean_object* v___x_1387_; lean_object* v___x_1388_; 
v___x_1387_ = lean_alloc_closure((void*)(l_reduceCtorEq___boxed), 9, 0);
v___x_1388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1388_, 0, v___x_1387_);
return v___x_1388_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25_(){
_start:
{
lean_object* v___x_1390_; uint8_t v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; 
v___x_1390_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__30___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_));
v___x_1391_ = 1;
v___x_1392_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25_);
v___x_1393_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v___x_1390_, v___x_1391_, v___x_1392_);
return v___x_1393_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25____boxed(lean_object* v_a_1394_){
_start:
{
lean_object* v_res_1395_; 
v_res_1395_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25_();
return v_res_1395_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_27_(){
_start:
{
lean_object* v___x_1397_; uint8_t v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; 
v___x_1397_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__30___closed__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_));
v___x_1398_ = 1;
v___x_1399_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25_, &l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25__once, _init_l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25_);
v___x_1400_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v___x_1397_, v___x_1398_, v___x_1399_);
return v___x_1400_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_27____boxed(lean_object* v_a_1401_){
_start:
{
lean_object* v_res_1402_; 
v_res_1402_ = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_27_();
return v_res_1402_;
}
}
lean_object* runtime_initialize_Init_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_CtorRecognizer(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_CtorRecognizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceIte_declare__5_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_22_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_24_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceIte___regBuiltin_reduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_4131964668____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDIte_declare__10_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_22_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_24_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDIte___regBuiltin_reduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_1728655206____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceIte_declare__15_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_22_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_24_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceIte___regBuiltin_dreduceIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2696430789____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_dreduceDIte_declare__20_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_22_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_24_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__dreduceDIte___regBuiltin_dreduceDIte_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_2523473668____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceDecisionEq_declare__25_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_22_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDecisionEq___regBuiltin_reduceDecisionEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_24_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceDecisionEq___regBuiltin_reduceDecisionEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3592514226____hygCtx___hyg_26_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0____regBuiltin_reduceCtorEq_declare__30_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_23_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_25_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_0__reduceCtorEq___regBuiltin_reduceCtorEq_declare__1_00___x40_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core_3278911854____hygCtx___hyg_27_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Simproc(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Simproc(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
lean_object* initialize_Lean_Meta_CtorRecognizer(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_CtorRecognizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core(builtin);
}
#ifdef __cplusplus
}
#endif
