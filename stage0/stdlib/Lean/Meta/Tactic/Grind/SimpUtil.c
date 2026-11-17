// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.SimpUtil
// Imports: public import Lean.Meta.Tactic.Simp.Simproc import Lean.Meta.Tactic.Grind.MatchDiscrOnly import Lean.Meta.Tactic.Grind.ForallProp import Lean.Meta.Tactic.Grind.Arith.Simproc import Lean.Meta.Tactic.Simp.BuiltinSimprocs.List import Lean.Meta.Tactic.Simp.BuiltinSimprocs.Core import Lean.Meta.Tactic.Grind.Util import Lean.Meta.Decidable import Lean.Meta.Sym.Util import Init.Grind.Norm public import Init.Grind.Config import Init.ByCases import Lean.Meta.Tactic.Simp.Main
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
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkDecisionProjectionProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_unfoldReducibleStep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Meta_isConstructorApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkNoConfusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Meta_mkEqFalse_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getBoolDecision_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_normalizeBoolCondition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_registerBuiltinSimproc(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_mkAnd(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_mkIntLit(lean_object*);
lean_object* l_Lean_mkIntAdd(lean_object*, lean_object*);
lean_object* l_Lean_mkIntLE(lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_mkNatAdd(lean_object*, lean_object*);
lean_object* l_Lean_mkNatLE(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isProp(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_mkBVar(lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_addCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_getSEvalSimprocs___redArg(lean_object*);
lean_object* l_Lean_Meta_Simp_Simprocs_erase(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Simprocs_add(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_addSimpMatchDiscrsOnly(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_addPreMatchCondSimproc(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_addSimproc(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_addForallSimproc(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_PersistentHashMap_Node_isEmpty___redArg(lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_mkOr(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_normExt;
lean_object* l_Lean_Meta_SimpExtension_getTheorems___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_SimpTheorems_addDeclToUnfold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getSimpCongrTheorems___redArg(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Meta_Simp_mkContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_registerBuiltinDSimproc(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_Grind_addNormTheorem(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkTheoremFromDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_normSymExt;
lean_object* l_Lean_Meta_Grind_addNormSymDeclToUnfold(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at___00Lean_Meta_Grind_registerNormTheorems_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at___00Lean_Meta_Grind_registerNormTheorems_spec__3___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at___00Lean_Meta_Grind_registerNormTheorems_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at___00Lean_Meta_Grind_registerNormTheorems_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2_spec__2_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2_spec__2_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2_spec__2_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2_spec__2_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2_spec__2_spec__4___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2_spec__2_spec__4___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__2;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__3;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__4;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_registerNormTheorems_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_registerNormTheorems_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_registerNormTheorems_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_registerNormTheorems_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_registerNormTheorems___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_registerNormTheorems___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "not_le_eq"};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_registerNormTheorems___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Meta_Grind_registerNormTheorems___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__1_value),LEAN_SCALAR_PTR_LITERAL(235, 23, 140, 144, 182, 73, 3, 60)}};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_registerNormTheorems___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_registerNormTheorems___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__3_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Meta_Grind_registerNormTheorems___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 74, 162, 108, 148, 71, 165, 71)}};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__4_value;
static const lean_string_object l_Lean_Meta_Grind_registerNormTheorems___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "GE"};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__5_value;
static const lean_string_object l_Lean_Meta_Grind_registerNormTheorems___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ge"};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Grind_registerNormTheorems___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__5_value),LEAN_SCALAR_PTR_LITERAL(74, 169, 4, 72, 62, 21, 91, 24)}};
static const lean_ctor_object l_Lean_Meta_Grind_registerNormTheorems___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__6_value),LEAN_SCALAR_PTR_LITERAL(71, 88, 92, 156, 129, 215, 23, 77)}};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__7_value;
static const lean_string_object l_Lean_Meta_Grind_registerNormTheorems___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "GT"};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__8_value;
static const lean_string_object l_Lean_Meta_Grind_registerNormTheorems___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "gt"};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Grind_registerNormTheorems___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__8_value),LEAN_SCALAR_PTR_LITERAL(240, 16, 15, 58, 66, 186, 138, 31)}};
static const lean_ctor_object l_Lean_Meta_Grind_registerNormTheorems___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__10_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__9_value),LEAN_SCALAR_PTR_LITERAL(239, 75, 137, 103, 59, 22, 209, 130)}};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__10_value;
static const lean_string_object l_Lean_Meta_Grind_registerNormTheorems___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cast"};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__11_value;
static const lean_ctor_object l_Lean_Meta_Grind_registerNormTheorems___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Meta_Grind_registerNormTheorems___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__12_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__11_value),LEAN_SCALAR_PTR_LITERAL(19, 237, 167, 212, 100, 179, 19, 112)}};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__12_value;
static const lean_string_object l_Lean_Meta_Grind_registerNormTheorems___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__13 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__13_value;
static const lean_string_object l_Lean_Meta_Grind_registerNormTheorems___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "xor"};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__14 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__14_value;
static const lean_ctor_object l_Lean_Meta_Grind_registerNormTheorems___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__13_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_Grind_registerNormTheorems___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__15_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__14_value),LEAN_SCALAR_PTR_LITERAL(159, 35, 146, 118, 24, 65, 174, 144)}};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__15 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__15_value;
static const lean_string_object l_Lean_Meta_Grind_registerNormTheorems___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Ne"};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__16 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__16_value;
static const lean_ctor_object l_Lean_Meta_Grind_registerNormTheorems___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__16_value),LEAN_SCALAR_PTR_LITERAL(161, 247, 70, 70, 118, 145, 235, 92)}};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__17 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__17_value;
static const lean_string_object l_Lean_Meta_Grind_registerNormTheorems___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "`grind` normalization theorems have already been initialized"};
static const lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__18 = (const lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__18_value;
static lean_once_cell_t l_Lean_Meta_Grind_registerNormTheorems___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_registerNormTheorems___closed__19;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_registerNormTheorems(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_registerNormTheorems___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2_spec__2_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2_spec__2___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2_spec__2___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2_spec__2(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "and"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__13_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__0_value),LEAN_SCALAR_PTR_LITERAL(160, 26, 8, 228, 104, 32, 82, 85)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "or"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__13_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__2_value),LEAN_SCALAR_PTR_LITERAL(90, 191, 239, 225, 113, 224, 109, 182)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "not"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__13_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__4_value),LEAN_SCALAR_PTR_LITERAL(208, 215, 171, 150, 192, 180, 249, 22)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "BEq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "beq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__6_value),LEAN_SCALAR_PTR_LITERAL(195, 188, 39, 55, 57, 152, 88, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__7_value),LEAN_SCALAR_PTR_LITERAL(82, 52, 243, 194, 7, 226, 90, 135)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__8_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "decide"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__10_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__9_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__11_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__10_value),LEAN_SCALAR_PTR_LITERAL(16, 96, 65, 173, 152, 155, 4, 222)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__11_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___boxed(lean_object*);
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_simpEq___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_simpEq___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__13_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpEq___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__5;
static const lean_string_object l_Lean_Meta_Grind_simpEq___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__6_value;
static const lean_string_object l_Lean_Meta_Grind_simpEq___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value;
static const lean_string_object l_Lean_Meta_Grind_simpEq___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "bool_eq_to_prop"};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__9_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__9_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(79, 89, 141, 151, 119, 96, 24, 167)}};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__9_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpEq___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__10;
static const lean_string_object l_Lean_Meta_Grind_simpEq___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "flip_bool_eq"};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__11_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__12_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__12_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(19, 65, 30, 112, 127, 84, 12, 55)}};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__12_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpEq___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__13;
static const lean_string_object l_Lean_Meta_Grind_simpEq___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__14 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__14_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__13_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__15_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__14_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__15 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__15_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__13_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__16 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__16_value;
static const lean_string_object l_Lean_Meta_Grind_simpEq___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__17 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__17_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__17_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__18 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__18_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpEq___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__19;
static const lean_string_object l_Lean_Meta_Grind_simpEq___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__20 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__20_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__20_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__21 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__21_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpEq___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__22;
static const lean_string_object l_Lean_Meta_Grind_simpEq___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "eq_false_eq"};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__23 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__23_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__24_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__24_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__23_value),LEAN_SCALAR_PTR_LITERAL(79, 24, 241, 157, 245, 218, 196, 160)}};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__24 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__24_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpEq___redArg___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__25;
static const lean_string_object l_Lean_Meta_Grind_simpEq___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "eq_true_eq"};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__26 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__26_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__27_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__27_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__26_value),LEAN_SCALAR_PTR_LITERAL(100, 12, 190, 92, 208, 172, 117, 90)}};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__27 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__27_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpEq___redArg___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__28;
static const lean_string_object l_Lean_Meta_Grind_simpEq___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "eq_self"};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__29 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__29_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpEq___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__29_value),LEAN_SCALAR_PTR_LITERAL(224, 148, 98, 216, 254, 239, 13, 169)}};
static const lean_object* l_Lean_Meta_Grind_simpEq___redArg___closed__30 = (const lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__30_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpEq___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpEq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simpEq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13__value),LEAN_SCALAR_PTR_LITERAL(219, 117, 235, 93, 32, 23, 150, 114)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__2_value),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__4_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__4_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__4_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13____boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_simpIteToCond___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l_Lean_Meta_Grind_simpIteToCond___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_simpIteToCond___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpIteToCond___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpIteToCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(15, 2, 151, 246, 61, 29, 192, 254)}};
static const lean_object* l_Lean_Meta_Grind_simpIteToCond___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_simpIteToCond___redArg___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_simpIteToCond___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l_Lean_Meta_Grind_simpIteToCond___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_simpIteToCond___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpIteToCond___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpIteToCond___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(130, 140, 200, 235, 144, 197, 118, 1)}};
static const lean_object* l_Lean_Meta_Grind_simpIteToCond___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_simpIteToCond___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpIteToCond___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__9_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l_Lean_Meta_Grind_simpIteToCond___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_simpIteToCond___redArg___closed__4_value;
static const lean_string_object l_Lean_Meta_Grind_simpIteToCond___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ite_eq_cond"};
static const lean_object* l_Lean_Meta_Grind_simpIteToCond___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_simpIteToCond___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpIteToCond___redArg___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpIteToCond___redArg___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpIteToCond___redArg___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpIteToCond___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpIteToCond___redArg___closed__6_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpIteToCond___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(94, 227, 134, 192, 109, 120, 140, 230)}};
static const lean_object* l_Lean_Meta_Grind_simpIteToCond___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_simpIteToCond___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpIteToCond___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpIteToCond___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpIteToCond(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpIteToCond___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpIteToCond_declare__16___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3199362635____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "simpIteToCond"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpIteToCond_declare__16___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3199362635____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpIteToCond_declare__16___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3199362635____hygCtx___hyg_14__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpIteToCond_declare__16___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3199362635____hygCtx___hyg_14__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpIteToCond_declare__16___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3199362635____hygCtx___hyg_14__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpIteToCond_declare__16___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3199362635____hygCtx___hyg_14__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpIteToCond_declare__16___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3199362635____hygCtx___hyg_14__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpIteToCond_declare__16___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3199362635____hygCtx___hyg_14__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpIteToCond_declare__16___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3199362635____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpIteToCond_declare__16___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3199362635____hygCtx___hyg_14__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpIteToCond_declare__16___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3199362635____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(64, 224, 223, 83, 238, 189, 93, 106)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpIteToCond_declare__16___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3199362635____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpIteToCond_declare__16___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3199362635____hygCtx___hyg_14__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpIteToCond_declare__16___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3199362635____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpIteToCond___redArg___closed__1_value),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpIteToCond_declare__16___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3199362635____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpIteToCond_declare__16___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3199362635____hygCtx___hyg_14__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpIteToCond_declare__16___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3199362635____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*6, .m_other = 0, .m_tag = 246}, .m_size = 6, .m_capacity = 6, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpIteToCond_declare__16___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3199362635____hygCtx___hyg_14__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpIteToCond_declare__16___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3199362635____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpIteToCond_declare__16___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3199362635____hygCtx___hyg_14__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpIteToCond_declare__16_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3199362635____hygCtx___hyg_14_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpIteToCond_declare__16_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3199362635____hygCtx___hyg_14____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpProjectedDecisionEq___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpProjectedDecisionEq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpProjectedDecisionEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpProjectedDecisionEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpProjectedDecisionEq_declare__21___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1166571523____hygCtx___hyg_13__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "simpProjectedDecisionEq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpProjectedDecisionEq_declare__21___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1166571523____hygCtx___hyg_13_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpProjectedDecisionEq_declare__21___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1166571523____hygCtx___hyg_13__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpProjectedDecisionEq_declare__21___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1166571523____hygCtx___hyg_13__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpProjectedDecisionEq_declare__21___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1166571523____hygCtx___hyg_13__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpProjectedDecisionEq_declare__21___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1166571523____hygCtx___hyg_13__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpProjectedDecisionEq_declare__21___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1166571523____hygCtx___hyg_13__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpProjectedDecisionEq_declare__21___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1166571523____hygCtx___hyg_13__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpProjectedDecisionEq_declare__21___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1166571523____hygCtx___hyg_13__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpProjectedDecisionEq_declare__21___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1166571523____hygCtx___hyg_13__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpProjectedDecisionEq_declare__21___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1166571523____hygCtx___hyg_13__value),LEAN_SCALAR_PTR_LITERAL(41, 169, 94, 79, 251, 142, 166, 54)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpProjectedDecisionEq_declare__21___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1166571523____hygCtx___hyg_13_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpProjectedDecisionEq_declare__21___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1166571523____hygCtx___hyg_13__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpProjectedDecisionEq_declare__21___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1166571523____hygCtx___hyg_13__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__16_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpProjectedDecisionEq_declare__21___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1166571523____hygCtx___hyg_13_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpProjectedDecisionEq_declare__21___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1166571523____hygCtx___hyg_13__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpProjectedDecisionEq_declare__21___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1166571523____hygCtx___hyg_13__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpProjectedDecisionEq_declare__21___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1166571523____hygCtx___hyg_13__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpProjectedDecisionEq_declare__21___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1166571523____hygCtx___hyg_13_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpProjectedDecisionEq_declare__21___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1166571523____hygCtx___hyg_13__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpProjectedDecisionEq_declare__21_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1166571523____hygCtx___hyg_13_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpProjectedDecisionEq_declare__21_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1166571523____hygCtx___hyg_13____boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_simpDIte___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l_Lean_Meta_Grind_simpDIte___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_simpDIte___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpDIte___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpDIte___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(137, 166, 197, 161, 68, 218, 116, 116)}};
static const lean_object* l_Lean_Meta_Grind_simpDIte___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_simpDIte___redArg___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_simpDIte___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "dite_eq_cond"};
static const lean_object* l_Lean_Meta_Grind_simpDIte___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_simpDIte___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpDIte___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpDIte___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(66, 109, 12, 90, 6, 191, 54, 69)}};
static const lean_object* l_Lean_Meta_Grind_simpDIte___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_simpDIte___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpDIte___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpDIte___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpDIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpDIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__26___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_423278053____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "simpDIte"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__26___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_423278053____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__26___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_423278053____hygCtx___hyg_14__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__26___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_423278053____hygCtx___hyg_14__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__26___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_423278053____hygCtx___hyg_14__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__26___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_423278053____hygCtx___hyg_14__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__26___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_423278053____hygCtx___hyg_14__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__26___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_423278053____hygCtx___hyg_14__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__26___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_423278053____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__26___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_423278053____hygCtx___hyg_14__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__26___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_423278053____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(207, 95, 197, 147, 158, 94, 39, 166)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__26___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_423278053____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__26___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_423278053____hygCtx___hyg_14__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__26___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_423278053____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpDIte___redArg___closed__1_value),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__26___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_423278053____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__26___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_423278053____hygCtx___hyg_14__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__26___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_423278053____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*6, .m_other = 0, .m_tag = 246}, .m_size = 6, .m_capacity = 6, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__26___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_423278053____hygCtx___hyg_14__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__26___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_423278053____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__26___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_423278053____hygCtx___hyg_14__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__26_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_423278053____hygCtx___hyg_14_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__26_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_423278053____hygCtx___hyg_14____boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Exists"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(65, 29, 48, 135, 199, 176, 149, 70)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "not_forall"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(133, 192, 91, 90, 91, 211, 131, 26)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__5_value;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "not_implies"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__7_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(142, 189, 44, 77, 86, 197, 178, 67)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__8;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Or"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__9_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__10_value;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__11_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__12_value;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LE"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__13 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__13_value;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "le"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__14 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__14_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__13_value),LEAN_SCALAR_PTR_LITERAL(216, 149, 183, 186, 191, 145, 216, 115)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__15_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__14_value),LEAN_SCALAR_PTR_LITERAL(109, 14, 90, 172, 72, 170, 136, 101)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__15 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__15_value;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "not_ite_eq_cond"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__16 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__16_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__17_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__17_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__16_value),LEAN_SCALAR_PTR_LITERAL(250, 228, 252, 70, 76, 87, 162, 120)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__17 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__17_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__18;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "not_cond"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__19 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__19_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__20_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__20_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__19_value),LEAN_SCALAR_PTR_LITERAL(181, 12, 122, 224, 2, 32, 155, 87)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__20 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__20_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__21;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__22 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__22_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__3_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__23 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__23_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__24;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__25;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__26;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__27;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__28;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__29;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "not_eq_true"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__30 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__30_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__13_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__31_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__30_value),LEAN_SCALAR_PTR_LITERAL(225, 244, 63, 40, 164, 6, 8, 162)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__31 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__31_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__32;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "not_eq_false"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__33 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__33_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__34_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_registerNormTheorems___closed__13_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__34_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__33_value),LEAN_SCALAR_PTR_LITERAL(83, 226, 87, 91, 103, 177, 77, 30)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__34 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__34_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__35;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "not_eq_prop"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__36 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__36_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__37_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__37_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__37_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__36_value),LEAN_SCALAR_PTR_LITERAL(93, 9, 240, 16, 38, 110, 5, 203)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__37 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__37_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__38;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__39;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "not_and"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__40 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__40_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__41_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__41_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__41_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__40_value),LEAN_SCALAR_PTR_LITERAL(239, 225, 24, 71, 205, 142, 249, 26)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__41 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__41_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__42;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__43;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "not_or"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__44 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__44_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__45_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__45_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__45_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__45_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__44_value),LEAN_SCALAR_PTR_LITERAL(235, 74, 178, 162, 31, 3, 143, 38)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__45 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__45_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__46;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__47 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__47_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__47_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__48 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__48_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__49;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "not_exists"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__50 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__50_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__51_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__51_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__51_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__51_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__50_value),LEAN_SCALAR_PTR_LITERAL(122, 84, 103, 56, 9, 28, 88, 199)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__51 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__51_value;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "not_not"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__52 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__52_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__53_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__53_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__53_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__53_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__52_value),LEAN_SCALAR_PTR_LITERAL(37, 13, 167, 116, 75, 172, 227, 19)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__53 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__53_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__54;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "not_true"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__55 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__55_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__56_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__56_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__56_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__56_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__55_value),LEAN_SCALAR_PTR_LITERAL(189, 233, 184, 33, 201, 88, 141, 182)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__56 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__56_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__57_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__57;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__58;
static const lean_string_object l_Lean_Meta_Grind_pushNot___redArg___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "not_false"};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__59 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__59_value;
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__60_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__60_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__60_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_pushNot___redArg___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__60_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__59_value),LEAN_SCALAR_PTR_LITERAL(32, 161, 26, 17, 134, 82, 22, 22)}};
static const lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__60 = (const lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__60_value;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__61_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__61;
static lean_once_cell_t l_Lean_Meta_Grind_pushNot___redArg___closed__62_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_pushNot___redArg___closed__62;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNot___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNot___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNot(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNot___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__31___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2103990232____hygCtx___hyg_11__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "pushNot"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__31___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2103990232____hygCtx___hyg_11_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__31___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2103990232____hygCtx___hyg_11__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__31___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2103990232____hygCtx___hyg_11__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__31___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2103990232____hygCtx___hyg_11__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__31___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2103990232____hygCtx___hyg_11__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__31___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2103990232____hygCtx___hyg_11__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__31___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2103990232____hygCtx___hyg_11__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__31___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2103990232____hygCtx___hyg_11__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__31___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2103990232____hygCtx___hyg_11__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__31___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2103990232____hygCtx___hyg_11__value),LEAN_SCALAR_PTR_LITERAL(189, 165, 185, 106, 181, 96, 32, 196)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__31___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2103990232____hygCtx___hyg_11_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__31___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2103990232____hygCtx___hyg_11__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__31___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2103990232____hygCtx___hyg_11__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__31___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2103990232____hygCtx___hyg_11_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__31___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2103990232____hygCtx___hyg_11__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__31___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2103990232____hygCtx___hyg_11__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__31___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2103990232____hygCtx___hyg_11__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__31___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2103990232____hygCtx___hyg_11_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__31___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2103990232____hygCtx___hyg_11__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__31_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2103990232____hygCtx___hyg_11_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__31_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2103990232____hygCtx___hyg_11____boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_simpOr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "or_swap13"};
static const lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpOr___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpOr___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpOr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(240, 5, 180, 71, 127, 106, 169, 101)}};
static const lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpOr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__2;
static const lean_string_object l_Lean_Meta_Grind_simpOr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "or_swap12"};
static const lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpOr___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpOr___redArg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpOr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(122, 217, 194, 116, 8, 17, 212, 54)}};
static const lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpOr___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__5;
static const lean_string_object l_Lean_Meta_Grind_simpOr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "or_true"};
static const lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpOr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(42, 114, 114, 128, 39, 158, 116, 220)}};
static const lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpOr___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__8;
static const lean_string_object l_Lean_Meta_Grind_simpOr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "or_false"};
static const lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpOr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__9_value),LEAN_SCALAR_PTR_LITERAL(153, 216, 196, 245, 126, 96, 113, 194)}};
static const lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__10_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpOr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__11;
static const lean_string_object l_Lean_Meta_Grind_simpOr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "or_assoc"};
static const lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__12_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpOr___redArg___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpOr___redArg___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__13_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_simpOr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__13_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__12_value),LEAN_SCALAR_PTR_LITERAL(177, 212, 104, 129, 180, 187, 236, 119)}};
static const lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__13 = (const lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__13_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpOr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__14;
static const lean_string_object l_Lean_Meta_Grind_simpOr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "true_or"};
static const lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__15 = (const lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__15_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpOr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__15_value),LEAN_SCALAR_PTR_LITERAL(151, 252, 187, 232, 224, 57, 40, 42)}};
static const lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__16 = (const lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__16_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpOr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__17;
static const lean_string_object l_Lean_Meta_Grind_simpOr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "false_or"};
static const lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__18 = (const lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__18_value;
static const lean_ctor_object l_Lean_Meta_Grind_simpOr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__18_value),LEAN_SCALAR_PTR_LITERAL(30, 122, 222, 214, 97, 236, 146, 97)}};
static const lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__19 = (const lean_object*)&l_Lean_Meta_Grind_simpOr___redArg___closed__19_value;
static lean_once_cell_t l_Lean_Meta_Grind_simpOr___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_simpOr___redArg___closed__20;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpOr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpOr___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpOr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpOr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__36___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simpOr"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__36___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__36___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__36___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__36___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__36___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__36___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__36___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__36___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__36___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__36___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value),LEAN_SCALAR_PTR_LITERAL(228, 202, 179, 118, 39, 223, 137, 162)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__36___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__36___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__36___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_pushNot___redArg___closed__10_value),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__36___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__36___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__36___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 246}, .m_size = 3, .m_capacity = 3, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__36___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__36___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__36___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__36_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__36_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_reduceCtorEqCheap___lam__0(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_reduceCtorEqCheap___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_reduceCtorEqCheap___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l_Lean_Meta_Grind_reduceCtorEqCheap___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_reduceCtorEqCheap___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_reduceCtorEqCheap___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_reduceCtorEqCheap___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l_Lean_Meta_Grind_reduceCtorEqCheap___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_reduceCtorEqCheap___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_reduceCtorEqCheap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_reduceCtorEqCheap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__41___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "reduceCtorEqCheap"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__41___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__41___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__41___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__41___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__41___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__41___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__41___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__41___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__41___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__41___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(34, 125, 108, 13, 73, 108, 9, 106)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__41___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__41___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__41_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__41_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_unfoldReducibleSimproc___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_unfoldReducibleSimproc___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_unfoldReducibleSimproc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_unfoldReducibleSimproc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46___lam__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46___lam__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46___lam__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10____boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "unfoldReducibleSimproc"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10__value_aux_1),((lean_object*)&l_Lean_Meta_Grind_simpEq___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10__value),LEAN_SCALAR_PTR_LITERAL(51, 93, 112, 81, 25, 192, 216, 250)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10____boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_getSimprocs___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l_Lean_Meta_Grind_getSimprocs___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_getSimprocs___redArg___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_getSimprocs___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "reduceReplicate"};
static const lean_object* l_Lean_Meta_Grind_getSimprocs___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_getSimprocs___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_getSimprocs___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_getSimprocs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Meta_Grind_getSimprocs___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getSimprocs___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getSimprocs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 105, 104, 187, 83, 144, 177, 61)}};
static const lean_object* l_Lean_Meta_Grind_getSimprocs___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_getSimprocs___redArg___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_getSimprocs___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "reduceCtorEq"};
static const lean_object* l_Lean_Meta_Grind_getSimprocs___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_getSimprocs___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_getSimprocs___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_getSimprocs___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(241, 230, 128, 19, 70, 224, 61, 3)}};
static const lean_object* l_Lean_Meta_Grind_getSimprocs___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_getSimprocs___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getSimprocs___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getSimprocs___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getSimprocs(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getSimprocs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_addDeclToUnfold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_addDeclToUnfold___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNormTheorems(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNormTheorems___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getSimpContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getSimpContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at___00Lean_Meta_Grind_registerNormTheorems_spec__3___redArg(lean_object* v_x_1_){
_start:
{
uint8_t v___x_2_; 
v___x_2_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at___00Lean_Meta_Grind_registerNormTheorems_spec__3___redArg___boxed(lean_object* v_x_3_){
_start:
{
uint8_t v_res_4_; lean_object* v_r_5_; 
v_res_4_ = l_Lean_PersistentHashMap_isEmpty___at___00Lean_Meta_Grind_registerNormTheorems_spec__3___redArg(v_x_3_);
lean_dec_ref(v_x_3_);
v_r_5_ = lean_box(v_res_4_);
return v_r_5_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at___00Lean_Meta_Grind_registerNormTheorems_spec__3(lean_object* v_00_u03b2_6_, lean_object* v_x_7_){
_start:
{
uint8_t v___x_8_; 
v___x_8_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_x_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at___00Lean_Meta_Grind_registerNormTheorems_spec__3___boxed(lean_object* v_00_u03b2_9_, lean_object* v_x_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = l_Lean_PersistentHashMap_isEmpty___at___00Lean_Meta_Grind_registerNormTheorems_spec__3(v_00_u03b2_9_, v_x_10_);
lean_dec_ref(v_x_10_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4_spec__5(lean_object* v_msgData_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v___x_19_; lean_object* v_env_20_; uint8_t v___x_21_; lean_object* v_env_22_; lean_object* v___x_23_; lean_object* v_toCold_24_; lean_object* v_mctx_25_; lean_object* v_lctx_26_; lean_object* v_options_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_19_ = lean_st_ref_get(v___y_17_);
v_env_20_ = lean_ctor_get(v___x_19_, 0);
lean_inc_ref(v_env_20_);
lean_dec(v___x_19_);
v___x_21_ = 0;
v_env_22_ = l_Lean_Environment_setRecordingDeps(v_env_20_, v___x_21_);
v___x_23_ = lean_st_ref_get(v___y_15_);
v_toCold_24_ = lean_ctor_get(v___y_16_, 0);
v_mctx_25_ = lean_ctor_get(v___x_23_, 0);
lean_inc_ref(v_mctx_25_);
lean_dec(v___x_23_);
v_lctx_26_ = lean_ctor_get(v___y_14_, 2);
v_options_27_ = lean_ctor_get(v_toCold_24_, 2);
lean_inc_ref(v_options_27_);
lean_inc_ref(v_lctx_26_);
v___x_28_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_28_, 0, v_env_22_);
lean_ctor_set(v___x_28_, 1, v_mctx_25_);
lean_ctor_set(v___x_28_, 2, v_lctx_26_);
lean_ctor_set(v___x_28_, 3, v_options_27_);
v___x_29_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
lean_ctor_set(v___x_29_, 1, v_msgData_13_);
v___x_30_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4_spec__5___boxed(lean_object* v_msgData_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4_spec__5(v_msgData_31_, v___y_32_, v___y_33_, v___y_34_, v___y_35_);
lean_dec(v___y_35_);
lean_dec_ref(v___y_34_);
lean_dec(v___y_33_);
lean_dec_ref(v___y_32_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4___redArg(lean_object* v_msg_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_){
_start:
{
lean_object* v_ref_44_; lean_object* v___x_45_; lean_object* v_a_46_; lean_object* v___x_48_; uint8_t v_isShared_49_; uint8_t v_isSharedCheck_54_; 
v_ref_44_ = lean_ctor_get(v___y_41_, 2);
v___x_45_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4_spec__5(v_msg_38_, v___y_39_, v___y_40_, v___y_41_, v___y_42_);
v_a_46_ = lean_ctor_get(v___x_45_, 0);
v_isSharedCheck_54_ = !lean_is_exclusive(v___x_45_);
if (v_isSharedCheck_54_ == 0)
{
v___x_48_ = v___x_45_;
v_isShared_49_ = v_isSharedCheck_54_;
goto v_resetjp_47_;
}
else
{
lean_inc(v_a_46_);
lean_dec(v___x_45_);
v___x_48_ = lean_box(0);
v_isShared_49_ = v_isSharedCheck_54_;
goto v_resetjp_47_;
}
v_resetjp_47_:
{
lean_object* v___x_50_; lean_object* v___x_52_; 
lean_inc(v_ref_44_);
v___x_50_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_50_, 0, v_ref_44_);
lean_ctor_set(v___x_50_, 1, v_a_46_);
if (v_isShared_49_ == 0)
{
lean_ctor_set_tag(v___x_48_, 1);
lean_ctor_set(v___x_48_, 0, v___x_50_);
v___x_52_ = v___x_48_;
goto v_reusejp_51_;
}
else
{
lean_object* v_reuseFailAlloc_53_; 
v_reuseFailAlloc_53_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_53_, 0, v___x_50_);
v___x_52_ = v_reuseFailAlloc_53_;
goto v_reusejp_51_;
}
v_reusejp_51_:
{
return v___x_52_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4___redArg___boxed(lean_object* v_msg_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = l_Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4___redArg(v_msg_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_);
lean_dec(v___y_59_);
lean_dec_ref(v___y_58_);
lean_dec(v___y_57_);
lean_dec_ref(v___y_56_);
return v_res_61_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2_spec__2_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_62_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2_spec__2_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_63_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2_spec__2_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2_spec__2_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2_spec__2_spec__4___redArg___closed__0);
v___x_64_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_64_, 0, v___x_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2_spec__2_spec__4___redArg(){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2_spec__2_spec__4___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2_spec__2_spec__4___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2_spec__2_spec__4___redArg___closed__1);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2_spec__2_spec__4___redArg___boxed(lean_object* v___dummy_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2_spec__2_spec__4___redArg();
return v_res_68_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_69_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2_spec__2_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2_spec__2_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2_spec__2_spec__4___redArg___closed__0);
v___x_70_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_70_, 0, v___x_69_);
return v___x_70_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_71_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__0);
v___x_72_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_71_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
return v___x_72_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2_spec__2_spec__4___redArg();
return v___x_73_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_74_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__0);
v___x_75_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_75_, 0, v___x_74_);
lean_ctor_set(v___x_75_, 1, v___x_74_);
return v___x_75_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__4(void){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_76_ = lean_unsigned_to_nat(0u);
v___x_77_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__0);
v___x_78_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_78_, 0, v___x_77_);
lean_ctor_set(v___x_78_, 1, v___x_77_);
lean_ctor_set(v___x_78_, 2, v___x_76_);
return v___x_78_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__5(void){
_start:
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_79_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__4, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__4_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__4);
v___x_80_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__3, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__3_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__3);
v___x_81_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__0);
v___x_82_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__2);
v___x_83_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_83_, 0, v___x_82_);
lean_ctor_set(v___x_83_, 1, v___x_81_);
lean_ctor_set(v___x_83_, 2, v___x_80_);
lean_ctor_set(v___x_83_, 3, v___x_81_);
lean_ctor_set(v___x_83_, 4, v___x_81_);
lean_ctor_set(v___x_83_, 5, v___x_81_);
lean_ctor_set(v___x_83_, 6, v___x_81_);
lean_ctor_set(v___x_83_, 7, v___x_79_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg(lean_object* v_ext_84_, lean_object* v_b_85_, uint8_t v_kind_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_){
_start:
{
lean_object* v_toCold_91_; lean_object* v_currNamespace_92_; lean_object* v___x_93_; lean_object* v_env_94_; lean_object* v_nextMacroScope_95_; lean_object* v_ngen_96_; lean_object* v_auxDeclNGen_97_; lean_object* v_traceState_98_; lean_object* v_recordedDeps_99_; lean_object* v_messages_100_; lean_object* v_infoState_101_; lean_object* v_snapshotTasks_102_; lean_object* v___x_104_; uint8_t v_isShared_105_; uint8_t v_isSharedCheck_129_; 
v_toCold_91_ = lean_ctor_get(v___y_88_, 0);
v_currNamespace_92_ = lean_ctor_get(v_toCold_91_, 4);
v___x_93_ = lean_st_ref_take(v___y_89_);
v_env_94_ = lean_ctor_get(v___x_93_, 0);
v_nextMacroScope_95_ = lean_ctor_get(v___x_93_, 1);
v_ngen_96_ = lean_ctor_get(v___x_93_, 2);
v_auxDeclNGen_97_ = lean_ctor_get(v___x_93_, 3);
v_traceState_98_ = lean_ctor_get(v___x_93_, 4);
v_recordedDeps_99_ = lean_ctor_get(v___x_93_, 6);
v_messages_100_ = lean_ctor_get(v___x_93_, 7);
v_infoState_101_ = lean_ctor_get(v___x_93_, 8);
v_snapshotTasks_102_ = lean_ctor_get(v___x_93_, 9);
v_isSharedCheck_129_ = !lean_is_exclusive(v___x_93_);
if (v_isSharedCheck_129_ == 0)
{
lean_object* v_unused_130_; 
v_unused_130_ = lean_ctor_get(v___x_93_, 5);
lean_dec(v_unused_130_);
v___x_104_ = v___x_93_;
v_isShared_105_ = v_isSharedCheck_129_;
goto v_resetjp_103_;
}
else
{
lean_inc(v_snapshotTasks_102_);
lean_inc(v_infoState_101_);
lean_inc(v_messages_100_);
lean_inc(v_recordedDeps_99_);
lean_inc(v_traceState_98_);
lean_inc(v_auxDeclNGen_97_);
lean_inc(v_ngen_96_);
lean_inc(v_nextMacroScope_95_);
lean_inc(v_env_94_);
lean_dec(v___x_93_);
v___x_104_ = lean_box(0);
v_isShared_105_ = v_isSharedCheck_129_;
goto v_resetjp_103_;
}
v_resetjp_103_:
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_109_; 
lean_inc(v_currNamespace_92_);
v___x_106_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_env_94_, v_ext_84_, v_b_85_, v_kind_86_, v_currNamespace_92_);
v___x_107_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__1);
if (v_isShared_105_ == 0)
{
lean_ctor_set(v___x_104_, 5, v___x_107_);
lean_ctor_set(v___x_104_, 0, v___x_106_);
v___x_109_ = v___x_104_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v___x_106_);
lean_ctor_set(v_reuseFailAlloc_128_, 1, v_nextMacroScope_95_);
lean_ctor_set(v_reuseFailAlloc_128_, 2, v_ngen_96_);
lean_ctor_set(v_reuseFailAlloc_128_, 3, v_auxDeclNGen_97_);
lean_ctor_set(v_reuseFailAlloc_128_, 4, v_traceState_98_);
lean_ctor_set(v_reuseFailAlloc_128_, 5, v___x_107_);
lean_ctor_set(v_reuseFailAlloc_128_, 6, v_recordedDeps_99_);
lean_ctor_set(v_reuseFailAlloc_128_, 7, v_messages_100_);
lean_ctor_set(v_reuseFailAlloc_128_, 8, v_infoState_101_);
lean_ctor_set(v_reuseFailAlloc_128_, 9, v_snapshotTasks_102_);
v___x_109_ = v_reuseFailAlloc_128_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v_mctx_112_; lean_object* v_zetaDeltaFVarIds_113_; lean_object* v_postponed_114_; lean_object* v_diag_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_126_; 
v___x_110_ = lean_st_ref_put(v___y_89_, v___x_109_);
v___x_111_ = lean_st_ref_take(v___y_87_);
v_mctx_112_ = lean_ctor_get(v___x_111_, 0);
v_zetaDeltaFVarIds_113_ = lean_ctor_get(v___x_111_, 2);
v_postponed_114_ = lean_ctor_get(v___x_111_, 3);
v_diag_115_ = lean_ctor_get(v___x_111_, 4);
v_isSharedCheck_126_ = !lean_is_exclusive(v___x_111_);
if (v_isSharedCheck_126_ == 0)
{
lean_object* v_unused_127_; 
v_unused_127_ = lean_ctor_get(v___x_111_, 1);
lean_dec(v_unused_127_);
v___x_117_ = v___x_111_;
v_isShared_118_ = v_isSharedCheck_126_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_diag_115_);
lean_inc(v_postponed_114_);
lean_inc(v_zetaDeltaFVarIds_113_);
lean_inc(v_mctx_112_);
lean_dec(v___x_111_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_126_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_122_; 
v___x_119_ = lean_box(0);
v___x_120_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__5, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__5_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__5);
if (v_isShared_118_ == 0)
{
lean_ctor_set(v___x_117_, 1, v___x_120_);
v___x_122_ = v___x_117_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v_mctx_112_);
lean_ctor_set(v_reuseFailAlloc_125_, 1, v___x_120_);
lean_ctor_set(v_reuseFailAlloc_125_, 2, v_zetaDeltaFVarIds_113_);
lean_ctor_set(v_reuseFailAlloc_125_, 3, v_postponed_114_);
lean_ctor_set(v_reuseFailAlloc_125_, 4, v_diag_115_);
v___x_122_ = v_reuseFailAlloc_125_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_123_ = lean_st_ref_put(v___y_87_, v___x_122_);
v___x_124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_124_, 0, v___x_119_);
return v___x_124_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___boxed(lean_object* v_ext_131_, lean_object* v_b_132_, lean_object* v_kind_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_){
_start:
{
uint8_t v_kind_boxed_138_; lean_object* v_res_139_; 
v_kind_boxed_138_ = lean_unbox(v_kind_133_);
v_res_139_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg(v_ext_131_, v_b_132_, v_kind_boxed_138_, v___y_134_, v___y_135_, v___y_136_);
lean_dec(v___y_136_);
lean_dec_ref(v___y_135_);
lean_dec(v___y_134_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_registerNormTheorems_spec__1(lean_object* v_as_140_, size_t v_sz_141_, size_t v_i_142_, lean_object* v_b_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_){
_start:
{
uint8_t v___x_149_; 
v___x_149_ = lean_usize_dec_lt(v_i_142_, v_sz_141_);
if (v___x_149_ == 0)
{
lean_object* v___x_150_; 
v___x_150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_150_, 0, v_b_143_);
return v___x_150_;
}
else
{
lean_object* v___x_151_; lean_object* v_a_152_; uint8_t v___x_153_; uint8_t v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_151_ = lean_box(0);
v_a_152_ = lean_array_uget_borrowed(v_as_140_, v_i_142_);
v___x_153_ = 0;
v___x_154_ = 0;
v___x_155_ = lean_unsigned_to_nat(1000u);
lean_inc(v_a_152_);
v___x_156_ = l_Lean_Meta_Grind_addNormTheorem(v_a_152_, v___x_149_, v___x_153_, v___x_154_, v___x_155_, v___y_144_, v___y_145_, v___y_146_, v___y_147_);
if (lean_obj_tag(v___x_156_) == 0)
{
size_t v___x_157_; size_t v___x_158_; 
lean_dec_ref_known(v___x_156_, 1);
v___x_157_ = ((size_t)1ULL);
v___x_158_ = lean_usize_add(v_i_142_, v___x_157_);
v_i_142_ = v___x_158_;
v_b_143_ = v___x_151_;
goto _start;
}
else
{
return v___x_156_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_registerNormTheorems_spec__1___boxed(lean_object* v_as_160_, lean_object* v_sz_161_, lean_object* v_i_162_, lean_object* v_b_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_){
_start:
{
size_t v_sz_boxed_169_; size_t v_i_boxed_170_; lean_object* v_res_171_; 
v_sz_boxed_169_ = lean_unbox_usize(v_sz_161_);
lean_dec(v_sz_161_);
v_i_boxed_170_ = lean_unbox_usize(v_i_162_);
lean_dec(v_i_162_);
v_res_171_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_registerNormTheorems_spec__1(v_as_160_, v_sz_boxed_169_, v_i_boxed_170_, v_b_163_, v___y_164_, v___y_165_, v___y_166_, v___y_167_);
lean_dec(v___y_167_);
lean_dec_ref(v___y_166_);
lean_dec(v___y_165_);
lean_dec_ref(v___y_164_);
lean_dec_ref(v_as_160_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_registerNormTheorems_spec__0(lean_object* v_as_172_, size_t v_sz_173_, size_t v_i_174_, lean_object* v_b_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_){
_start:
{
uint8_t v___x_181_; 
v___x_181_ = lean_usize_dec_lt(v_i_174_, v_sz_173_);
if (v___x_181_ == 0)
{
lean_object* v___x_182_; 
v___x_182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_182_, 0, v_b_175_);
return v___x_182_;
}
else
{
lean_object* v___x_183_; lean_object* v_a_184_; uint8_t v___x_185_; uint8_t v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_183_ = lean_box(0);
v_a_184_ = lean_array_uget_borrowed(v_as_172_, v_i_174_);
v___x_185_ = 0;
v___x_186_ = 0;
v___x_187_ = lean_unsigned_to_nat(1000u);
lean_inc(v_a_184_);
v___x_188_ = l_Lean_Meta_Grind_addNormTheorem(v_a_184_, v___x_185_, v___x_185_, v___x_186_, v___x_187_, v___y_176_, v___y_177_, v___y_178_, v___y_179_);
if (lean_obj_tag(v___x_188_) == 0)
{
size_t v___x_189_; size_t v___x_190_; 
lean_dec_ref_known(v___x_188_, 1);
v___x_189_ = ((size_t)1ULL);
v___x_190_ = lean_usize_add(v_i_174_, v___x_189_);
v_i_174_ = v___x_190_;
v_b_175_ = v___x_183_;
goto _start;
}
else
{
return v___x_188_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_registerNormTheorems_spec__0___boxed(lean_object* v_as_192_, lean_object* v_sz_193_, lean_object* v_i_194_, lean_object* v_b_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_){
_start:
{
size_t v_sz_boxed_201_; size_t v_i_boxed_202_; lean_object* v_res_203_; 
v_sz_boxed_201_ = lean_unbox_usize(v_sz_193_);
lean_dec(v_sz_193_);
v_i_boxed_202_ = lean_unbox_usize(v_i_194_);
lean_dec(v_i_194_);
v_res_203_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_registerNormTheorems_spec__0(v_as_192_, v_sz_boxed_201_, v_i_boxed_202_, v_b_195_, v___y_196_, v___y_197_, v___y_198_, v___y_199_);
lean_dec(v___y_199_);
lean_dec_ref(v___y_198_);
lean_dec(v___y_197_);
lean_dec_ref(v___y_196_);
lean_dec_ref(v_as_192_);
return v_res_203_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_registerNormTheorems___closed__19(void){
_start:
{
lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_236_ = ((lean_object*)(l_Lean_Meta_Grind_registerNormTheorems___closed__18));
v___x_237_ = l_Lean_stringToMessageData(v___x_236_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_registerNormTheorems(lean_object* v_preDeclNames_238_, lean_object* v_postDeclNames_239_, lean_object* v_a_240_, lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_){
_start:
{
lean_object* v___y_246_; lean_object* v___y_247_; lean_object* v___y_248_; lean_object* v___y_249_; lean_object* v___x_308_; lean_object* v___x_309_; 
v___x_308_ = l_Lean_Meta_Grind_normExt;
v___x_309_ = l_Lean_Meta_SimpExtension_getTheorems___redArg(v___x_308_, v_a_243_);
if (lean_obj_tag(v___x_309_) == 0)
{
lean_object* v_a_310_; lean_object* v_lemmaNames_311_; uint8_t v___x_312_; 
v_a_310_ = lean_ctor_get(v___x_309_, 0);
lean_inc(v_a_310_);
lean_dec_ref_known(v___x_309_, 1);
v_lemmaNames_311_ = lean_ctor_get(v_a_310_, 2);
lean_inc_ref(v_lemmaNames_311_);
lean_dec(v_a_310_);
v___x_312_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_lemmaNames_311_);
lean_dec_ref(v_lemmaNames_311_);
if (v___x_312_ == 0)
{
lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_313_ = lean_obj_once(&l_Lean_Meta_Grind_registerNormTheorems___closed__19, &l_Lean_Meta_Grind_registerNormTheorems___closed__19_once, _init_l_Lean_Meta_Grind_registerNormTheorems___closed__19);
v___x_314_ = l_Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4___redArg(v___x_313_, v_a_240_, v_a_241_, v_a_242_, v_a_243_);
return v___x_314_;
}
else
{
v___y_246_ = v_a_240_;
v___y_247_ = v_a_241_;
v___y_248_ = v_a_242_;
v___y_249_ = v_a_243_;
goto v___jp_245_;
}
}
else
{
lean_object* v_a_315_; lean_object* v___x_317_; uint8_t v_isShared_318_; uint8_t v_isSharedCheck_322_; 
v_a_315_ = lean_ctor_get(v___x_309_, 0);
v_isSharedCheck_322_ = !lean_is_exclusive(v___x_309_);
if (v_isSharedCheck_322_ == 0)
{
v___x_317_ = v___x_309_;
v_isShared_318_ = v_isSharedCheck_322_;
goto v_resetjp_316_;
}
else
{
lean_inc(v_a_315_);
lean_dec(v___x_309_);
v___x_317_ = lean_box(0);
v_isShared_318_ = v_isSharedCheck_322_;
goto v_resetjp_316_;
}
v_resetjp_316_:
{
lean_object* v___x_320_; 
if (v_isShared_318_ == 0)
{
v___x_320_ = v___x_317_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v_a_315_);
v___x_320_ = v_reuseFailAlloc_321_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
return v___x_320_;
}
}
}
v___jp_245_:
{
lean_object* v___x_250_; size_t v_sz_251_; size_t v___x_252_; lean_object* v___x_253_; 
v___x_250_ = lean_box(0);
v_sz_251_ = lean_array_size(v_preDeclNames_238_);
v___x_252_ = ((size_t)0ULL);
v___x_253_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_registerNormTheorems_spec__0(v_preDeclNames_238_, v_sz_251_, v___x_252_, v___x_250_, v___y_246_, v___y_247_, v___y_248_, v___y_249_);
if (lean_obj_tag(v___x_253_) == 0)
{
size_t v_sz_254_; lean_object* v___x_255_; 
lean_dec_ref_known(v___x_253_, 1);
v_sz_254_ = lean_array_size(v_postDeclNames_239_);
v___x_255_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_registerNormTheorems_spec__1(v_postDeclNames_239_, v_sz_254_, v___x_252_, v___x_250_, v___y_246_, v___y_247_, v___y_248_, v___y_249_);
if (lean_obj_tag(v___x_255_) == 0)
{
lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_306_; 
v_isSharedCheck_306_ = !lean_is_exclusive(v___x_255_);
if (v_isSharedCheck_306_ == 0)
{
lean_object* v_unused_307_; 
v_unused_307_ = lean_ctor_get(v___x_255_, 0);
lean_dec(v_unused_307_);
v___x_257_ = v___x_255_;
v_isShared_258_ = v_isSharedCheck_306_;
goto v_resetjp_256_;
}
else
{
lean_dec(v___x_255_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_306_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v___x_259_; lean_object* v___x_260_; 
v___x_259_ = ((lean_object*)(l_Lean_Meta_Grind_registerNormTheorems___closed__2));
v___x_260_ = l_Lean_Meta_Sym_Simp_mkTheoremFromDecl(v___x_259_, v___y_246_, v___y_247_, v___y_248_, v___y_249_);
if (lean_obj_tag(v___x_260_) == 0)
{
lean_object* v_a_261_; lean_object* v___x_262_; lean_object* v___x_264_; 
v_a_261_ = lean_ctor_get(v___x_260_, 0);
lean_inc(v_a_261_);
lean_dec_ref_known(v___x_260_, 1);
v___x_262_ = l_Lean_Meta_Grind_normSymExt;
if (v_isShared_258_ == 0)
{
lean_ctor_set(v___x_257_, 0, v_a_261_);
v___x_264_ = v___x_257_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v_a_261_);
v___x_264_ = v_reuseFailAlloc_297_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
uint8_t v___x_265_; lean_object* v___x_266_; lean_object* v___x_268_; uint8_t v_isShared_269_; uint8_t v_isSharedCheck_295_; 
v___x_265_ = 0;
v___x_266_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg(v___x_262_, v___x_264_, v___x_265_, v___y_247_, v___y_248_, v___y_249_);
v_isSharedCheck_295_ = !lean_is_exclusive(v___x_266_);
if (v_isSharedCheck_295_ == 0)
{
lean_object* v_unused_296_; 
v_unused_296_ = lean_ctor_get(v___x_266_, 0);
lean_dec(v_unused_296_);
v___x_268_ = v___x_266_;
v_isShared_269_ = v_isSharedCheck_295_;
goto v_resetjp_267_;
}
else
{
lean_dec(v___x_266_);
v___x_268_ = lean_box(0);
v_isShared_269_ = v_isSharedCheck_295_;
goto v_resetjp_267_;
}
v_resetjp_267_:
{
lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_270_ = ((lean_object*)(l_Lean_Meta_Grind_registerNormTheorems___closed__4));
v___x_271_ = l_Lean_Meta_Sym_Simp_mkTheoremFromDecl(v___x_270_, v___y_246_, v___y_247_, v___y_248_, v___y_249_);
if (lean_obj_tag(v___x_271_) == 0)
{
lean_object* v_a_272_; lean_object* v___x_274_; 
v_a_272_ = lean_ctor_get(v___x_271_, 0);
lean_inc(v_a_272_);
lean_dec_ref_known(v___x_271_, 1);
if (v_isShared_269_ == 0)
{
lean_ctor_set(v___x_268_, 0, v_a_272_);
v___x_274_ = v___x_268_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v_a_272_);
v___x_274_ = v_reuseFailAlloc_286_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_275_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg(v___x_262_, v___x_274_, v___x_265_, v___y_247_, v___y_248_, v___y_249_);
lean_dec_ref(v___x_275_);
v___x_276_ = ((lean_object*)(l_Lean_Meta_Grind_registerNormTheorems___closed__7));
v___x_277_ = l_Lean_Meta_Grind_addNormSymDeclToUnfold(v___x_276_, v___x_265_, v___y_246_, v___y_247_, v___y_248_, v___y_249_);
if (lean_obj_tag(v___x_277_) == 0)
{
lean_object* v___x_278_; lean_object* v___x_279_; 
lean_dec_ref_known(v___x_277_, 1);
v___x_278_ = ((lean_object*)(l_Lean_Meta_Grind_registerNormTheorems___closed__10));
v___x_279_ = l_Lean_Meta_Grind_addNormSymDeclToUnfold(v___x_278_, v___x_265_, v___y_246_, v___y_247_, v___y_248_, v___y_249_);
if (lean_obj_tag(v___x_279_) == 0)
{
lean_object* v___x_280_; lean_object* v___x_281_; 
lean_dec_ref_known(v___x_279_, 1);
v___x_280_ = ((lean_object*)(l_Lean_Meta_Grind_registerNormTheorems___closed__12));
v___x_281_ = l_Lean_Meta_Grind_addNormSymDeclToUnfold(v___x_280_, v___x_265_, v___y_246_, v___y_247_, v___y_248_, v___y_249_);
if (lean_obj_tag(v___x_281_) == 0)
{
lean_object* v___x_282_; lean_object* v___x_283_; 
lean_dec_ref_known(v___x_281_, 1);
v___x_282_ = ((lean_object*)(l_Lean_Meta_Grind_registerNormTheorems___closed__15));
v___x_283_ = l_Lean_Meta_Grind_addNormSymDeclToUnfold(v___x_282_, v___x_265_, v___y_246_, v___y_247_, v___y_248_, v___y_249_);
if (lean_obj_tag(v___x_283_) == 0)
{
lean_object* v___x_284_; lean_object* v___x_285_; 
lean_dec_ref_known(v___x_283_, 1);
v___x_284_ = ((lean_object*)(l_Lean_Meta_Grind_registerNormTheorems___closed__17));
v___x_285_ = l_Lean_Meta_Grind_addNormSymDeclToUnfold(v___x_284_, v___x_265_, v___y_246_, v___y_247_, v___y_248_, v___y_249_);
return v___x_285_;
}
else
{
return v___x_283_;
}
}
else
{
return v___x_281_;
}
}
else
{
return v___x_279_;
}
}
else
{
return v___x_277_;
}
}
}
else
{
lean_object* v_a_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_294_; 
lean_del_object(v___x_268_);
v_a_287_ = lean_ctor_get(v___x_271_, 0);
v_isSharedCheck_294_ = !lean_is_exclusive(v___x_271_);
if (v_isSharedCheck_294_ == 0)
{
v___x_289_ = v___x_271_;
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_a_287_);
lean_dec(v___x_271_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_292_; 
if (v_isShared_290_ == 0)
{
v___x_292_ = v___x_289_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_a_287_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
}
}
}
}
else
{
lean_object* v_a_298_; lean_object* v___x_300_; uint8_t v_isShared_301_; uint8_t v_isSharedCheck_305_; 
lean_del_object(v___x_257_);
v_a_298_ = lean_ctor_get(v___x_260_, 0);
v_isSharedCheck_305_ = !lean_is_exclusive(v___x_260_);
if (v_isSharedCheck_305_ == 0)
{
v___x_300_ = v___x_260_;
v_isShared_301_ = v_isSharedCheck_305_;
goto v_resetjp_299_;
}
else
{
lean_inc(v_a_298_);
lean_dec(v___x_260_);
v___x_300_ = lean_box(0);
v_isShared_301_ = v_isSharedCheck_305_;
goto v_resetjp_299_;
}
v_resetjp_299_:
{
lean_object* v___x_303_; 
if (v_isShared_301_ == 0)
{
v___x_303_ = v___x_300_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v_a_298_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
return v___x_303_;
}
}
}
}
}
else
{
return v___x_255_;
}
}
else
{
return v___x_253_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_registerNormTheorems___boxed(lean_object* v_preDeclNames_323_, lean_object* v_postDeclNames_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_){
_start:
{
lean_object* v_res_330_; 
v_res_330_ = l_Lean_Meta_Grind_registerNormTheorems(v_preDeclNames_323_, v_postDeclNames_324_, v_a_325_, v_a_326_, v_a_327_, v_a_328_);
lean_dec(v_a_328_);
lean_dec_ref(v_a_327_);
lean_dec(v_a_326_);
lean_dec_ref(v_a_325_);
lean_dec_ref(v_postDeclNames_324_);
lean_dec_ref(v_preDeclNames_323_);
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2(lean_object* v_00_u03b1_331_, lean_object* v_00_u03b2_332_, lean_object* v_00_u03c3_333_, lean_object* v_ext_334_, lean_object* v_b_335_, uint8_t v_kind_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_){
_start:
{
lean_object* v___x_342_; 
v___x_342_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg(v_ext_334_, v_b_335_, v_kind_336_, v___y_338_, v___y_339_, v___y_340_);
return v___x_342_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___boxed(lean_object* v_00_u03b1_343_, lean_object* v_00_u03b2_344_, lean_object* v_00_u03c3_345_, lean_object* v_ext_346_, lean_object* v_b_347_, lean_object* v_kind_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_){
_start:
{
uint8_t v_kind_boxed_354_; lean_object* v_res_355_; 
v_kind_boxed_354_ = lean_unbox(v_kind_348_);
v_res_355_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2(v_00_u03b1_343_, v_00_u03b2_344_, v_00_u03c3_345_, v_ext_346_, v_b_347_, v_kind_boxed_354_, v___y_349_, v___y_350_, v___y_351_, v___y_352_);
lean_dec(v___y_352_);
lean_dec_ref(v___y_351_);
lean_dec(v___y_350_);
lean_dec_ref(v___y_349_);
return v_res_355_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4(lean_object* v_00_u03b1_356_, lean_object* v_msg_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_){
_start:
{
lean_object* v___x_363_; 
v___x_363_ = l_Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4___redArg(v_msg_357_, v___y_358_, v___y_359_, v___y_360_, v___y_361_);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4___boxed(lean_object* v_00_u03b1_364_, lean_object* v_msg_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_){
_start:
{
lean_object* v_res_371_; 
v_res_371_ = l_Lean_throwError___at___00Lean_Meta_Grind_registerNormTheorems_spec__4(v_00_u03b1_364_, v_msg_365_, v___y_366_, v___y_367_, v___y_368_, v___y_369_);
lean_dec(v___y_369_);
lean_dec_ref(v___y_368_);
lean_dec(v___y_367_);
lean_dec_ref(v___y_366_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2_spec__2_spec__4(lean_object* v_00_u03b2_372_){
_start:
{
lean_object* v___x_373_; 
v___x_373_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__2);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2_spec__2___redArg(){
_start:
{
lean_object* v___x_375_; 
v___x_375_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__2);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2_spec__2___redArg___boxed(lean_object* v___dummy_376_){
_start:
{
lean_object* v_res_377_; 
v_res_377_ = l_Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2_spec__2___redArg();
return v_res_377_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2_spec__2(lean_object* v_00_u03b2_378_){
_start:
{
lean_object* v___x_379_; 
v___x_379_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Grind_registerNormTheorems_spec__2___redArg___closed__2);
return v___x_379_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget(lean_object* v_e_402_){
_start:
{
if (lean_obj_tag(v_e_402_) == 11)
{
lean_object* v_typeName_414_; 
v_typeName_414_ = lean_ctor_get(v_e_402_, 0);
if (lean_obj_tag(v_typeName_414_) == 1)
{
lean_object* v_pre_415_; 
v_pre_415_ = lean_ctor_get(v_typeName_414_, 0);
if (lean_obj_tag(v_pre_415_) == 0)
{
lean_object* v_idx_416_; lean_object* v_str_417_; lean_object* v___x_418_; uint8_t v___x_419_; 
v_idx_416_ = lean_ctor_get(v_e_402_, 1);
v_str_417_ = lean_ctor_get(v_typeName_414_, 1);
v___x_418_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__9));
v___x_419_ = lean_string_dec_eq(v_str_417_, v___x_418_);
if (v___x_419_ == 0)
{
goto v___jp_403_;
}
else
{
lean_object* v___x_420_; uint8_t v___x_421_; 
v___x_420_ = lean_unsigned_to_nat(0u);
v___x_421_ = lean_nat_dec_eq(v_idx_416_, v___x_420_);
if (v___x_421_ == 0)
{
goto v___jp_403_;
}
else
{
return v___x_421_;
}
}
}
else
{
goto v___jp_403_;
}
}
else
{
goto v___jp_403_;
}
}
else
{
goto v___jp_403_;
}
v___jp_403_:
{
lean_object* v___x_404_; uint8_t v___x_405_; 
v___x_404_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__1));
v___x_405_ = l_Lean_Expr_isAppOf(v_e_402_, v___x_404_);
if (v___x_405_ == 0)
{
lean_object* v___x_406_; uint8_t v___x_407_; 
v___x_406_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__3));
v___x_407_ = l_Lean_Expr_isAppOf(v_e_402_, v___x_406_);
if (v___x_407_ == 0)
{
lean_object* v___x_408_; uint8_t v___x_409_; 
v___x_408_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__5));
v___x_409_ = l_Lean_Expr_isAppOf(v_e_402_, v___x_408_);
if (v___x_409_ == 0)
{
lean_object* v___x_410_; uint8_t v___x_411_; 
v___x_410_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__8));
v___x_411_ = l_Lean_Expr_isAppOf(v_e_402_, v___x_410_);
if (v___x_411_ == 0)
{
lean_object* v___x_412_; uint8_t v___x_413_; 
v___x_412_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__11));
v___x_413_ = l_Lean_Expr_isAppOf(v_e_402_, v___x_412_);
return v___x_413_;
}
else
{
return v___x_411_;
}
}
else
{
return v___x_409_;
}
}
else
{
return v___x_407_;
}
}
else
{
return v___x_405_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___boxed(lean_object* v_e_422_){
_start:
{
uint8_t v_res_423_; lean_object* v_r_424_; 
v_res_423_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget(v_e_422_);
lean_dec_ref(v_e_422_);
v_r_424_ = lean_box(v_res_423_);
return v_r_424_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpEq___redArg___closed__5(void){
_start:
{
lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; 
v___x_434_ = lean_box(0);
v___x_435_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__4));
v___x_436_ = l_Lean_mkConst(v___x_435_, v___x_434_);
return v___x_436_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpEq___redArg___closed__10(void){
_start:
{
lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; 
v___x_444_ = lean_box(0);
v___x_445_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__9));
v___x_446_ = l_Lean_mkConst(v___x_445_, v___x_444_);
return v___x_446_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpEq___redArg___closed__13(void){
_start:
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_452_ = lean_box(0);
v___x_453_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__12));
v___x_454_ = l_Lean_mkConst(v___x_453_, v___x_452_);
return v___x_454_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpEq___redArg___closed__19(void){
_start:
{
lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_464_ = lean_box(0);
v___x_465_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__18));
v___x_466_ = l_Lean_mkConst(v___x_465_, v___x_464_);
return v___x_466_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpEq___redArg___closed__22(void){
_start:
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_470_ = lean_box(0);
v___x_471_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__21));
v___x_472_ = l_Lean_mkConst(v___x_471_, v___x_470_);
return v___x_472_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpEq___redArg___closed__25(void){
_start:
{
lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_478_ = lean_box(0);
v___x_479_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__24));
v___x_480_ = l_Lean_mkConst(v___x_479_, v___x_478_);
return v___x_480_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpEq___redArg___closed__28(void){
_start:
{
lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_486_ = lean_box(0);
v___x_487_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__27));
v___x_488_ = l_Lean_mkConst(v___x_487_, v___x_486_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpEq___redArg(lean_object* v_e_492_, lean_object* v_a_493_, lean_object* v_a_494_, lean_object* v_a_495_, lean_object* v_a_496_){
_start:
{
lean_object* v___x_504_; 
v___x_504_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_492_, v_a_494_);
if (lean_obj_tag(v___x_504_) == 0)
{
lean_object* v_a_505_; lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_642_; 
v_a_505_ = lean_ctor_get(v___x_504_, 0);
v_isSharedCheck_642_ = !lean_is_exclusive(v___x_504_);
if (v_isSharedCheck_642_ == 0)
{
v___x_507_ = v___x_504_;
v_isShared_508_ = v_isSharedCheck_642_;
goto v_resetjp_506_;
}
else
{
lean_inc(v_a_505_);
lean_dec(v___x_504_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_642_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
lean_object* v___x_509_; uint8_t v___x_510_; 
v___x_509_ = l_Lean_Expr_cleanupAnnotations(v_a_505_);
lean_dec(v_a_505_);
v___x_510_ = l_Lean_Expr_isApp(v___x_509_);
if (v___x_510_ == 0)
{
lean_dec_ref(v___x_509_);
lean_del_object(v___x_507_);
goto v___jp_498_;
}
else
{
lean_object* v___x_511_; uint8_t v___x_512_; 
v___x_511_ = l_Lean_Expr_appFnCleanup___redArg(v___x_509_);
v___x_512_ = l_Lean_Expr_isApp(v___x_511_);
if (v___x_512_ == 0)
{
lean_dec_ref(v___x_511_);
lean_dec_ref(v___x_509_);
lean_del_object(v___x_507_);
goto v___jp_498_;
}
else
{
lean_object* v___x_513_; uint8_t v___x_514_; 
v___x_513_ = l_Lean_Expr_appFnCleanup___redArg(v___x_511_);
v___x_514_ = l_Lean_Expr_isApp(v___x_513_);
if (v___x_514_ == 0)
{
lean_dec_ref(v___x_513_);
lean_dec_ref(v___x_511_);
lean_dec_ref(v___x_509_);
lean_del_object(v___x_507_);
goto v___jp_498_;
}
else
{
lean_object* v___x_515_; lean_object* v___x_516_; uint8_t v___x_517_; 
v___x_515_ = l_Lean_Expr_appFnCleanup___redArg(v___x_513_);
v___x_516_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__2));
v___x_517_ = l_Lean_Expr_isConstOf(v___x_515_, v___x_516_);
if (v___x_517_ == 0)
{
lean_dec_ref(v___x_515_);
lean_dec_ref(v___x_513_);
lean_dec_ref(v___x_511_);
lean_dec_ref(v___x_509_);
lean_del_object(v___x_507_);
goto v___jp_498_;
}
else
{
lean_object* v_arg_518_; lean_object* v_arg_519_; lean_object* v_arg_520_; lean_object* v___x_521_; 
v_arg_518_ = lean_ctor_get(v___x_509_, 1);
lean_inc_ref(v_arg_518_);
lean_dec_ref(v___x_509_);
v_arg_519_ = lean_ctor_get(v___x_511_, 1);
lean_inc_ref(v_arg_519_);
lean_dec_ref(v___x_511_);
v_arg_520_ = lean_ctor_get(v___x_513_, 1);
lean_inc_ref_n(v_arg_520_, 2);
lean_dec_ref(v___x_513_);
v___x_521_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_520_, v_a_494_);
if (lean_obj_tag(v___x_521_) == 0)
{
lean_object* v_a_522_; lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_633_; 
v_a_522_ = lean_ctor_get(v___x_521_, 0);
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_521_);
if (v_isSharedCheck_633_ == 0)
{
v___x_524_ = v___x_521_;
v_isShared_525_ = v_isSharedCheck_633_;
goto v_resetjp_523_;
}
else
{
lean_inc(v_a_522_);
lean_dec(v___x_521_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_633_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
uint8_t v___y_532_; uint8_t v___y_559_; lean_object* v___x_591_; lean_object* v___x_592_; uint8_t v___x_593_; 
v___x_591_ = l_Lean_Expr_cleanupAnnotations(v_a_522_);
lean_dec(v_a_522_);
v___x_592_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__16));
v___x_593_ = l_Lean_Expr_isConstOf(v___x_591_, v___x_592_);
lean_dec_ref(v___x_591_);
if (v___x_593_ == 0)
{
uint8_t v___x_594_; 
lean_del_object(v___x_524_);
lean_del_object(v___x_507_);
v___x_594_ = lean_expr_eqv(v_arg_519_, v_arg_518_);
if (v___x_594_ == 0)
{
lean_object* v___x_595_; uint8_t v___x_596_; 
lean_dec_ref(v_arg_520_);
lean_dec_ref(v___x_515_);
v___x_595_ = lean_obj_once(&l_Lean_Meta_Grind_simpEq___redArg___closed__19, &l_Lean_Meta_Grind_simpEq___redArg___closed__19_once, _init_l_Lean_Meta_Grind_simpEq___redArg___closed__19);
v___x_596_ = lean_expr_eqv(v_arg_518_, v___x_595_);
if (v___x_596_ == 0)
{
lean_object* v___x_597_; uint8_t v___x_598_; 
v___x_597_ = lean_obj_once(&l_Lean_Meta_Grind_simpEq___redArg___closed__22, &l_Lean_Meta_Grind_simpEq___redArg___closed__22_once, _init_l_Lean_Meta_Grind_simpEq___redArg___closed__22);
v___x_598_ = lean_expr_eqv(v_arg_518_, v___x_597_);
lean_dec_ref(v_arg_518_);
if (v___x_598_ == 0)
{
lean_object* v___x_599_; lean_object* v___x_600_; 
lean_dec_ref(v_arg_519_);
v___x_599_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
v___x_600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_600_, 0, v___x_599_);
return v___x_600_;
}
else
{
lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; 
lean_inc_ref(v_arg_519_);
v___x_601_ = l_Lean_mkNot(v_arg_519_);
v___x_602_ = lean_obj_once(&l_Lean_Meta_Grind_simpEq___redArg___closed__25, &l_Lean_Meta_Grind_simpEq___redArg___closed__25_once, _init_l_Lean_Meta_Grind_simpEq___redArg___closed__25);
v___x_603_ = l_Lean_Expr_app___override(v___x_602_, v_arg_519_);
v___x_604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_604_, 0, v___x_603_);
v___x_605_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_605_, 0, v___x_601_);
lean_ctor_set(v___x_605_, 1, v___x_604_);
lean_ctor_set_uint8(v___x_605_, sizeof(void*)*2, v___x_598_);
v___x_606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_606_, 0, v___x_605_);
v___x_607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_607_, 0, v___x_606_);
return v___x_607_;
}
}
else
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; 
lean_dec_ref(v_arg_518_);
v___x_608_ = lean_obj_once(&l_Lean_Meta_Grind_simpEq___redArg___closed__28, &l_Lean_Meta_Grind_simpEq___redArg___closed__28_once, _init_l_Lean_Meta_Grind_simpEq___redArg___closed__28);
lean_inc_ref(v_arg_519_);
v___x_609_ = l_Lean_Expr_app___override(v___x_608_, v_arg_519_);
v___x_610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_610_, 0, v___x_609_);
v___x_611_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_611_, 0, v_arg_519_);
lean_ctor_set(v___x_611_, 1, v___x_610_);
lean_ctor_set_uint8(v___x_611_, sizeof(void*)*2, v___x_596_);
v___x_612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_612_, 0, v___x_611_);
v___x_613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_613_, 0, v___x_612_);
return v___x_613_;
}
}
else
{
lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; 
lean_dec_ref(v_arg_518_);
v___x_614_ = l_Lean_Expr_constLevels_x21(v___x_515_);
lean_dec_ref(v___x_515_);
v___x_615_ = lean_obj_once(&l_Lean_Meta_Grind_simpEq___redArg___closed__19, &l_Lean_Meta_Grind_simpEq___redArg___closed__19_once, _init_l_Lean_Meta_Grind_simpEq___redArg___closed__19);
v___x_616_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__30));
v___x_617_ = l_Lean_mkConst(v___x_616_, v___x_614_);
v___x_618_ = l_Lean_mkAppB(v___x_617_, v_arg_520_, v_arg_519_);
v___x_619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_619_, 0, v___x_618_);
v___x_620_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_620_, 0, v___x_615_);
lean_ctor_set(v___x_620_, 1, v___x_619_);
lean_ctor_set_uint8(v___x_620_, sizeof(void*)*2, v___x_594_);
v___x_621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_621_, 0, v___x_620_);
v___x_622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_622_, 0, v___x_621_);
return v___x_622_;
}
}
else
{
lean_object* v___x_623_; uint8_t v___x_624_; 
v___x_623_ = l_Lean_Expr_getAppFn(v_arg_518_);
v___x_624_ = l_Lean_Expr_isConst(v___x_623_);
lean_dec_ref(v___x_623_);
if (v___x_624_ == 0)
{
if (lean_obj_tag(v_arg_518_) == 11)
{
lean_object* v_typeName_625_; 
v_typeName_625_ = lean_ctor_get(v_arg_518_, 0);
if (lean_obj_tag(v_typeName_625_) == 1)
{
lean_object* v_pre_626_; 
v_pre_626_ = lean_ctor_get(v_typeName_625_, 0);
if (lean_obj_tag(v_pre_626_) == 0)
{
lean_object* v_idx_627_; lean_object* v_str_628_; lean_object* v___x_629_; uint8_t v___x_630_; 
v_idx_627_ = lean_ctor_get(v_arg_518_, 1);
v_str_628_ = lean_ctor_get(v_typeName_625_, 1);
v___x_629_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__9));
v___x_630_ = lean_string_dec_eq(v_str_628_, v___x_629_);
if (v___x_630_ == 0)
{
lean_dec_ref_known(v_arg_518_, 3);
lean_dec_ref(v_arg_520_);
lean_dec_ref(v_arg_519_);
lean_dec_ref(v___x_515_);
lean_del_object(v___x_507_);
goto v___jp_526_;
}
else
{
lean_object* v___x_631_; uint8_t v___x_632_; 
v___x_631_ = lean_unsigned_to_nat(0u);
v___x_632_ = lean_nat_dec_eq(v_idx_627_, v___x_631_);
if (v___x_632_ == 0)
{
lean_dec_ref_known(v_arg_518_, 3);
lean_dec_ref(v_arg_520_);
lean_dec_ref(v_arg_519_);
lean_dec_ref(v___x_515_);
lean_del_object(v___x_507_);
goto v___jp_526_;
}
else
{
lean_del_object(v___x_524_);
goto v___jp_576_;
}
}
}
else
{
lean_dec_ref_known(v_arg_518_, 3);
lean_dec_ref(v_arg_520_);
lean_dec_ref(v_arg_519_);
lean_dec_ref(v___x_515_);
lean_del_object(v___x_507_);
goto v___jp_526_;
}
}
else
{
lean_dec_ref_known(v_arg_518_, 3);
lean_dec_ref(v_arg_520_);
lean_dec_ref(v_arg_519_);
lean_dec_ref(v___x_515_);
lean_del_object(v___x_507_);
goto v___jp_526_;
}
}
else
{
lean_dec_ref(v_arg_520_);
lean_dec_ref(v_arg_519_);
lean_dec_ref(v_arg_518_);
lean_dec_ref(v___x_515_);
lean_del_object(v___x_507_);
goto v___jp_526_;
}
}
else
{
lean_del_object(v___x_524_);
goto v___jp_576_;
}
}
v___jp_526_:
{
lean_object* v___x_527_; lean_object* v___x_529_; 
v___x_527_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
if (v_isShared_525_ == 0)
{
lean_ctor_set(v___x_524_, 0, v___x_527_);
v___x_529_ = v___x_524_;
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
v___jp_531_:
{
lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_533_ = lean_obj_once(&l_Lean_Meta_Grind_simpEq___redArg___closed__5, &l_Lean_Meta_Grind_simpEq___redArg___closed__5_once, _init_l_Lean_Meta_Grind_simpEq___redArg___closed__5);
lean_inc_ref(v_arg_519_);
lean_inc_ref(v_arg_520_);
lean_inc_ref(v___x_515_);
v___x_534_ = l_Lean_mkApp3(v___x_515_, v_arg_520_, v_arg_519_, v___x_533_);
lean_inc_ref(v_arg_518_);
v___x_535_ = l_Lean_mkApp3(v___x_515_, v_arg_520_, v_arg_518_, v___x_533_);
v___x_536_ = l_Lean_Meta_mkEq(v___x_534_, v___x_535_, v_a_493_, v_a_494_, v_a_495_, v_a_496_);
if (lean_obj_tag(v___x_536_) == 0)
{
lean_object* v_a_537_; lean_object* v___x_539_; uint8_t v_isShared_540_; uint8_t v_isSharedCheck_549_; 
v_a_537_ = lean_ctor_get(v___x_536_, 0);
v_isSharedCheck_549_ = !lean_is_exclusive(v___x_536_);
if (v_isSharedCheck_549_ == 0)
{
v___x_539_ = v___x_536_;
v_isShared_540_ = v_isSharedCheck_549_;
goto v_resetjp_538_;
}
else
{
lean_inc(v_a_537_);
lean_dec(v___x_536_);
v___x_539_ = lean_box(0);
v_isShared_540_ = v_isSharedCheck_549_;
goto v_resetjp_538_;
}
v_resetjp_538_:
{
lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_547_; 
v___x_541_ = lean_obj_once(&l_Lean_Meta_Grind_simpEq___redArg___closed__10, &l_Lean_Meta_Grind_simpEq___redArg___closed__10_once, _init_l_Lean_Meta_Grind_simpEq___redArg___closed__10);
v___x_542_ = l_Lean_mkAppB(v___x_541_, v_arg_519_, v_arg_518_);
v___x_543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_543_, 0, v___x_542_);
v___x_544_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_544_, 0, v_a_537_);
lean_ctor_set(v___x_544_, 1, v___x_543_);
lean_ctor_set_uint8(v___x_544_, sizeof(void*)*2, v___y_532_);
v___x_545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_545_, 0, v___x_544_);
if (v_isShared_540_ == 0)
{
lean_ctor_set(v___x_539_, 0, v___x_545_);
v___x_547_ = v___x_539_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v___x_545_);
v___x_547_ = v_reuseFailAlloc_548_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
return v___x_547_;
}
}
}
else
{
lean_object* v_a_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_557_; 
lean_dec_ref(v_arg_519_);
lean_dec_ref(v_arg_518_);
v_a_550_ = lean_ctor_get(v___x_536_, 0);
v_isSharedCheck_557_ = !lean_is_exclusive(v___x_536_);
if (v_isSharedCheck_557_ == 0)
{
v___x_552_ = v___x_536_;
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_a_550_);
lean_dec(v___x_536_);
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
v___jp_558_:
{
lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_567_; 
lean_inc_ref(v_arg_519_);
lean_inc_ref(v_arg_518_);
v___x_560_ = l_Lean_mkApp3(v___x_515_, v_arg_520_, v_arg_518_, v_arg_519_);
v___x_561_ = lean_obj_once(&l_Lean_Meta_Grind_simpEq___redArg___closed__13, &l_Lean_Meta_Grind_simpEq___redArg___closed__13_once, _init_l_Lean_Meta_Grind_simpEq___redArg___closed__13);
v___x_562_ = l_Lean_mkAppB(v___x_561_, v_arg_519_, v_arg_518_);
v___x_563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_563_, 0, v___x_562_);
v___x_564_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_564_, 0, v___x_560_);
lean_ctor_set(v___x_564_, 1, v___x_563_);
lean_ctor_set_uint8(v___x_564_, sizeof(void*)*2, v___y_559_);
v___x_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_565_, 0, v___x_564_);
if (v_isShared_508_ == 0)
{
lean_ctor_set(v___x_507_, 0, v___x_565_);
v___x_567_ = v___x_507_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v___x_565_);
v___x_567_ = v_reuseFailAlloc_568_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
return v___x_567_;
}
}
v___jp_569_:
{
lean_object* v___x_570_; uint8_t v___x_571_; 
v___x_570_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__4));
v___x_571_ = l_Lean_Expr_isConstOf(v_arg_519_, v___x_570_);
if (v___x_571_ == 0)
{
lean_object* v___x_572_; uint8_t v___x_573_; 
v___x_572_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__15));
v___x_573_ = l_Lean_Expr_isConstOf(v_arg_519_, v___x_572_);
if (v___x_573_ == 0)
{
uint8_t v___x_574_; 
lean_del_object(v___x_507_);
v___x_574_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget(v_arg_519_);
if (v___x_574_ == 0)
{
uint8_t v___x_575_; 
v___x_575_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget(v_arg_518_);
if (v___x_575_ == 0)
{
lean_dec_ref(v_arg_520_);
lean_dec_ref(v_arg_519_);
lean_dec_ref(v_arg_518_);
lean_dec_ref(v___x_515_);
goto v___jp_501_;
}
else
{
v___y_532_ = v___x_575_;
goto v___jp_531_;
}
}
else
{
v___y_532_ = v___x_574_;
goto v___jp_531_;
}
}
else
{
v___y_559_ = v___x_573_;
goto v___jp_558_;
}
}
else
{
v___y_559_ = v___x_571_;
goto v___jp_558_;
}
}
v___jp_576_:
{
lean_object* v___x_577_; uint8_t v___x_578_; 
v___x_577_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__4));
v___x_578_ = l_Lean_Expr_isConstOf(v_arg_518_, v___x_577_);
if (v___x_578_ == 0)
{
lean_object* v___x_579_; uint8_t v___x_580_; 
v___x_579_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__15));
v___x_580_ = l_Lean_Expr_isConstOf(v_arg_518_, v___x_579_);
if (v___x_580_ == 0)
{
lean_object* v___x_581_; uint8_t v___x_582_; 
v___x_581_ = l_Lean_Expr_getAppFn(v_arg_519_);
v___x_582_ = l_Lean_Expr_isConst(v___x_581_);
lean_dec_ref(v___x_581_);
if (v___x_582_ == 0)
{
if (lean_obj_tag(v_arg_519_) == 11)
{
lean_object* v_typeName_583_; 
v_typeName_583_ = lean_ctor_get(v_arg_519_, 0);
if (lean_obj_tag(v_typeName_583_) == 1)
{
lean_object* v_pre_584_; 
v_pre_584_ = lean_ctor_get(v_typeName_583_, 0);
if (lean_obj_tag(v_pre_584_) == 0)
{
lean_object* v_idx_585_; lean_object* v_str_586_; lean_object* v___x_587_; uint8_t v___x_588_; 
v_idx_585_ = lean_ctor_get(v_arg_519_, 1);
v_str_586_ = lean_ctor_get(v_typeName_583_, 1);
v___x_587_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_isBoolEqTarget___closed__9));
v___x_588_ = lean_string_dec_eq(v_str_586_, v___x_587_);
if (v___x_588_ == 0)
{
lean_dec_ref_known(v_arg_519_, 3);
lean_dec_ref(v_arg_520_);
lean_dec_ref(v_arg_518_);
lean_dec_ref(v___x_515_);
lean_del_object(v___x_507_);
goto v___jp_501_;
}
else
{
lean_object* v___x_589_; uint8_t v___x_590_; 
v___x_589_ = lean_unsigned_to_nat(0u);
v___x_590_ = lean_nat_dec_eq(v_idx_585_, v___x_589_);
if (v___x_590_ == 0)
{
lean_dec_ref_known(v_arg_519_, 3);
lean_dec_ref(v_arg_520_);
lean_dec_ref(v_arg_518_);
lean_dec_ref(v___x_515_);
lean_del_object(v___x_507_);
goto v___jp_501_;
}
else
{
goto v___jp_569_;
}
}
}
else
{
lean_dec_ref_known(v_arg_519_, 3);
lean_dec_ref(v_arg_520_);
lean_dec_ref(v_arg_518_);
lean_dec_ref(v___x_515_);
lean_del_object(v___x_507_);
goto v___jp_501_;
}
}
else
{
lean_dec_ref_known(v_arg_519_, 3);
lean_dec_ref(v_arg_520_);
lean_dec_ref(v_arg_518_);
lean_dec_ref(v___x_515_);
lean_del_object(v___x_507_);
goto v___jp_501_;
}
}
else
{
lean_dec_ref(v_arg_520_);
lean_dec_ref(v_arg_519_);
lean_dec_ref(v_arg_518_);
lean_dec_ref(v___x_515_);
lean_del_object(v___x_507_);
goto v___jp_501_;
}
}
else
{
goto v___jp_569_;
}
}
else
{
lean_dec_ref(v_arg_520_);
lean_dec_ref(v_arg_519_);
lean_dec_ref(v_arg_518_);
lean_dec_ref(v___x_515_);
lean_del_object(v___x_507_);
goto v___jp_501_;
}
}
else
{
lean_dec_ref(v_arg_520_);
lean_dec_ref(v_arg_519_);
lean_dec_ref(v_arg_518_);
lean_dec_ref(v___x_515_);
lean_del_object(v___x_507_);
goto v___jp_501_;
}
}
}
}
else
{
lean_object* v_a_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_641_; 
lean_dec_ref(v_arg_520_);
lean_dec_ref(v_arg_519_);
lean_dec_ref(v_arg_518_);
lean_dec_ref(v___x_515_);
lean_del_object(v___x_507_);
v_a_634_ = lean_ctor_get(v___x_521_, 0);
v_isSharedCheck_641_ = !lean_is_exclusive(v___x_521_);
if (v_isSharedCheck_641_ == 0)
{
v___x_636_ = v___x_521_;
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_a_634_);
lean_dec(v___x_521_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v___x_639_; 
if (v_isShared_637_ == 0)
{
v___x_639_ = v___x_636_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v_a_634_);
v___x_639_ = v_reuseFailAlloc_640_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
return v___x_639_;
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
lean_object* v_a_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_650_; 
v_a_643_ = lean_ctor_get(v___x_504_, 0);
v_isSharedCheck_650_ = !lean_is_exclusive(v___x_504_);
if (v_isSharedCheck_650_ == 0)
{
v___x_645_ = v___x_504_;
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_a_643_);
lean_dec(v___x_504_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___x_648_; 
if (v_isShared_646_ == 0)
{
v___x_648_ = v___x_645_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v_a_643_);
v___x_648_ = v_reuseFailAlloc_649_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
return v___x_648_;
}
}
}
v___jp_498_:
{
lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_499_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
v___x_500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_500_, 0, v___x_499_);
return v___x_500_;
}
v___jp_501_:
{
lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_502_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
v___x_503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_503_, 0, v___x_502_);
return v___x_503_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpEq___redArg___boxed(lean_object* v_e_651_, lean_object* v_a_652_, lean_object* v_a_653_, lean_object* v_a_654_, lean_object* v_a_655_, lean_object* v_a_656_){
_start:
{
lean_object* v_res_657_; 
v_res_657_ = l_Lean_Meta_Grind_simpEq___redArg(v_e_651_, v_a_652_, v_a_653_, v_a_654_, v_a_655_);
lean_dec(v_a_655_);
lean_dec_ref(v_a_654_);
lean_dec(v_a_653_);
lean_dec_ref(v_a_652_);
return v_res_657_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpEq(lean_object* v_e_658_, lean_object* v_a_659_, lean_object* v_a_660_, lean_object* v_a_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_){
_start:
{
lean_object* v___x_667_; 
v___x_667_ = l_Lean_Meta_Grind_simpEq___redArg(v_e_658_, v_a_662_, v_a_663_, v_a_664_, v_a_665_);
return v___x_667_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpEq___boxed(lean_object* v_e_668_, lean_object* v_a_669_, lean_object* v_a_670_, lean_object* v_a_671_, lean_object* v_a_672_, lean_object* v_a_673_, lean_object* v_a_674_, lean_object* v_a_675_, lean_object* v_a_676_){
_start:
{
lean_object* v_res_677_; 
v_res_677_ = l_Lean_Meta_Grind_simpEq(v_e_668_, v_a_669_, v_a_670_, v_a_671_, v_a_672_, v_a_673_, v_a_674_, v_a_675_);
lean_dec(v_a_675_);
lean_dec_ref(v_a_674_);
lean_dec(v_a_673_);
lean_dec_ref(v_a_672_);
lean_dec(v_a_671_);
lean_dec_ref(v_a_670_);
lean_dec(v_a_669_);
return v_res_677_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13_(){
_start:
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_697_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13_));
v___x_698_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__4_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13_));
v___x_699_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_simpEq___boxed), 9, 0);
v___x_700_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_697_, v___x_698_, v___x_699_);
return v___x_700_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13____boxed(lean_object* v_a_701_){
_start:
{
lean_object* v_res_702_; 
v_res_702_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13_();
return v_res_702_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpIteToCond___redArg(lean_object* v_e_716_, lean_object* v_a_717_, lean_object* v_a_718_, lean_object* v_a_719_, lean_object* v_a_720_){
_start:
{
lean_object* v___x_725_; 
lean_inc_ref(v_e_716_);
v___x_725_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_716_, v_a_718_);
if (lean_obj_tag(v___x_725_) == 0)
{
lean_object* v_a_726_; lean_object* v___x_727_; uint8_t v___x_728_; 
v_a_726_ = lean_ctor_get(v___x_725_, 0);
lean_inc(v_a_726_);
lean_dec_ref_known(v___x_725_, 1);
v___x_727_ = l_Lean_Expr_cleanupAnnotations(v_a_726_);
lean_dec(v_a_726_);
v___x_728_ = l_Lean_Expr_isApp(v___x_727_);
if (v___x_728_ == 0)
{
lean_dec_ref(v___x_727_);
lean_dec_ref(v_e_716_);
goto v___jp_722_;
}
else
{
lean_object* v___x_729_; uint8_t v___x_730_; 
v___x_729_ = l_Lean_Expr_appFnCleanup___redArg(v___x_727_);
v___x_730_ = l_Lean_Expr_isApp(v___x_729_);
if (v___x_730_ == 0)
{
lean_dec_ref(v___x_729_);
lean_dec_ref(v___x_727_);
lean_dec_ref(v_e_716_);
goto v___jp_722_;
}
else
{
lean_object* v___x_731_; uint8_t v___x_732_; 
v___x_731_ = l_Lean_Expr_appFnCleanup___redArg(v___x_729_);
v___x_732_ = l_Lean_Expr_isApp(v___x_731_);
if (v___x_732_ == 0)
{
lean_dec_ref(v___x_731_);
lean_dec_ref(v___x_729_);
lean_dec_ref(v___x_727_);
lean_dec_ref(v_e_716_);
goto v___jp_722_;
}
else
{
lean_object* v___x_733_; uint8_t v___x_734_; 
v___x_733_ = l_Lean_Expr_appFnCleanup___redArg(v___x_731_);
v___x_734_ = l_Lean_Expr_isApp(v___x_733_);
if (v___x_734_ == 0)
{
lean_dec_ref(v___x_733_);
lean_dec_ref(v___x_731_);
lean_dec_ref(v___x_729_);
lean_dec_ref(v___x_727_);
lean_dec_ref(v_e_716_);
goto v___jp_722_;
}
else
{
lean_object* v___x_735_; uint8_t v___x_736_; 
v___x_735_ = l_Lean_Expr_appFnCleanup___redArg(v___x_733_);
v___x_736_ = l_Lean_Expr_isApp(v___x_735_);
if (v___x_736_ == 0)
{
lean_dec_ref(v___x_735_);
lean_dec_ref(v___x_733_);
lean_dec_ref(v___x_731_);
lean_dec_ref(v___x_729_);
lean_dec_ref(v___x_727_);
lean_dec_ref(v_e_716_);
goto v___jp_722_;
}
else
{
lean_object* v___x_737_; lean_object* v___x_738_; uint8_t v___x_739_; 
v___x_737_ = l_Lean_Expr_appFnCleanup___redArg(v___x_735_);
v___x_738_ = ((lean_object*)(l_Lean_Meta_Grind_simpIteToCond___redArg___closed__1));
v___x_739_ = l_Lean_Expr_isConstOf(v___x_737_, v___x_738_);
if (v___x_739_ == 0)
{
lean_dec_ref(v___x_737_);
lean_dec_ref(v___x_735_);
lean_dec_ref(v___x_733_);
lean_dec_ref(v___x_731_);
lean_dec_ref(v___x_729_);
lean_dec_ref(v___x_727_);
lean_dec_ref(v_e_716_);
goto v___jp_722_;
}
else
{
lean_object* v_arg_740_; lean_object* v_arg_741_; lean_object* v_arg_742_; lean_object* v_arg_743_; lean_object* v_arg_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; 
v_arg_740_ = lean_ctor_get(v___x_727_, 1);
lean_inc_ref_n(v_arg_740_, 2);
lean_dec_ref(v___x_727_);
v_arg_741_ = lean_ctor_get(v___x_729_, 1);
lean_inc_ref_n(v_arg_741_, 2);
lean_dec_ref(v___x_729_);
v_arg_742_ = lean_ctor_get(v___x_731_, 1);
lean_inc_ref_n(v_arg_742_, 2);
lean_dec_ref(v___x_731_);
v_arg_743_ = lean_ctor_get(v___x_733_, 1);
lean_inc_ref(v_arg_743_);
lean_dec_ref(v___x_733_);
v_arg_744_ = lean_ctor_get(v___x_735_, 1);
lean_inc_ref_n(v_arg_744_, 2);
lean_dec_ref(v___x_735_);
v___x_745_ = ((lean_object*)(l_Lean_Meta_Grind_simpIteToCond___redArg___closed__3));
v___x_746_ = l_Lean_Expr_constLevels_x21(v___x_737_);
lean_dec_ref(v___x_737_);
lean_inc(v___x_746_);
v___x_747_ = l_Lean_mkConst(v___x_745_, v___x_746_);
v___x_748_ = ((lean_object*)(l_Lean_Meta_Grind_simpIteToCond___redArg___closed__4));
v___x_749_ = lean_unsigned_to_nat(0u);
v___x_750_ = l_Lean_Expr_proj___override(v___x_748_, v___x_749_, v_arg_742_);
v___x_751_ = l_Lean_mkApp4(v___x_747_, v_arg_744_, v___x_750_, v_arg_741_, v_arg_740_);
v___x_752_ = ((lean_object*)(l_Lean_Meta_Grind_simpIteToCond___redArg___closed__6));
v___x_753_ = l_Lean_Meta_mkDecisionProjectionProof(v___x_752_, v___x_746_, v_a_717_, v_a_718_, v_a_719_, v_a_720_);
if (lean_obj_tag(v___x_753_) == 0)
{
lean_object* v_a_754_; lean_object* v___x_755_; lean_object* v___x_756_; 
v_a_754_ = lean_ctor_get(v___x_753_, 0);
lean_inc(v_a_754_);
lean_dec_ref_known(v___x_753_, 1);
v___x_755_ = l_Lean_mkApp5(v_a_754_, v_arg_744_, v_arg_743_, v_arg_742_, v_arg_741_, v_arg_740_);
lean_inc_ref(v___x_751_);
v___x_756_ = l_Lean_Meta_mkEq(v_e_716_, v___x_751_, v_a_717_, v_a_718_, v_a_719_, v_a_720_);
if (lean_obj_tag(v___x_756_) == 0)
{
lean_object* v_a_757_; lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_768_; 
v_a_757_ = lean_ctor_get(v___x_756_, 0);
v_isSharedCheck_768_ = !lean_is_exclusive(v___x_756_);
if (v_isSharedCheck_768_ == 0)
{
v___x_759_ = v___x_756_;
v_isShared_760_ = v_isSharedCheck_768_;
goto v_resetjp_758_;
}
else
{
lean_inc(v_a_757_);
lean_dec(v___x_756_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_768_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_766_; 
v___x_761_ = l_Lean_Meta_mkExpectedPropHint(v___x_755_, v_a_757_);
v___x_762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_762_, 0, v___x_761_);
v___x_763_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_763_, 0, v___x_751_);
lean_ctor_set(v___x_763_, 1, v___x_762_);
lean_ctor_set_uint8(v___x_763_, sizeof(void*)*2, v___x_739_);
v___x_764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_764_, 0, v___x_763_);
if (v_isShared_760_ == 0)
{
lean_ctor_set(v___x_759_, 0, v___x_764_);
v___x_766_ = v___x_759_;
goto v_reusejp_765_;
}
else
{
lean_object* v_reuseFailAlloc_767_; 
v_reuseFailAlloc_767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_767_, 0, v___x_764_);
v___x_766_ = v_reuseFailAlloc_767_;
goto v_reusejp_765_;
}
v_reusejp_765_:
{
return v___x_766_;
}
}
}
else
{
lean_object* v_a_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_776_; 
lean_dec_ref(v___x_755_);
lean_dec_ref(v___x_751_);
v_a_769_ = lean_ctor_get(v___x_756_, 0);
v_isSharedCheck_776_ = !lean_is_exclusive(v___x_756_);
if (v_isSharedCheck_776_ == 0)
{
v___x_771_ = v___x_756_;
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_a_769_);
lean_dec(v___x_756_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
lean_object* v___x_774_; 
if (v_isShared_772_ == 0)
{
v___x_774_ = v___x_771_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v_a_769_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
return v___x_774_;
}
}
}
}
else
{
lean_object* v_a_777_; lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_784_; 
lean_dec_ref(v___x_751_);
lean_dec_ref(v_arg_744_);
lean_dec_ref(v_arg_743_);
lean_dec_ref(v_arg_742_);
lean_dec_ref(v_arg_741_);
lean_dec_ref(v_arg_740_);
lean_dec_ref(v_e_716_);
v_a_777_ = lean_ctor_get(v___x_753_, 0);
v_isSharedCheck_784_ = !lean_is_exclusive(v___x_753_);
if (v_isSharedCheck_784_ == 0)
{
v___x_779_ = v___x_753_;
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
else
{
lean_inc(v_a_777_);
lean_dec(v___x_753_);
v___x_779_ = lean_box(0);
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
v_resetjp_778_:
{
lean_object* v___x_782_; 
if (v_isShared_780_ == 0)
{
v___x_782_ = v___x_779_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v_a_777_);
v___x_782_ = v_reuseFailAlloc_783_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
return v___x_782_;
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
lean_object* v_a_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_792_; 
lean_dec_ref(v_e_716_);
v_a_785_ = lean_ctor_get(v___x_725_, 0);
v_isSharedCheck_792_ = !lean_is_exclusive(v___x_725_);
if (v_isSharedCheck_792_ == 0)
{
v___x_787_ = v___x_725_;
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
else
{
lean_inc(v_a_785_);
lean_dec(v___x_725_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v___x_790_; 
if (v_isShared_788_ == 0)
{
v___x_790_ = v___x_787_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v_a_785_);
v___x_790_ = v_reuseFailAlloc_791_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
return v___x_790_;
}
}
}
v___jp_722_:
{
lean_object* v___x_723_; lean_object* v___x_724_; 
v___x_723_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
v___x_724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_724_, 0, v___x_723_);
return v___x_724_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpIteToCond___redArg___boxed(lean_object* v_e_793_, lean_object* v_a_794_, lean_object* v_a_795_, lean_object* v_a_796_, lean_object* v_a_797_, lean_object* v_a_798_){
_start:
{
lean_object* v_res_799_; 
v_res_799_ = l_Lean_Meta_Grind_simpIteToCond___redArg(v_e_793_, v_a_794_, v_a_795_, v_a_796_, v_a_797_);
lean_dec(v_a_797_);
lean_dec_ref(v_a_796_);
lean_dec(v_a_795_);
lean_dec_ref(v_a_794_);
return v_res_799_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpIteToCond(lean_object* v_e_800_, lean_object* v_a_801_, lean_object* v_a_802_, lean_object* v_a_803_, lean_object* v_a_804_, lean_object* v_a_805_, lean_object* v_a_806_, lean_object* v_a_807_){
_start:
{
lean_object* v___x_809_; 
v___x_809_ = l_Lean_Meta_Grind_simpIteToCond___redArg(v_e_800_, v_a_804_, v_a_805_, v_a_806_, v_a_807_);
return v___x_809_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpIteToCond___boxed(lean_object* v_e_810_, lean_object* v_a_811_, lean_object* v_a_812_, lean_object* v_a_813_, lean_object* v_a_814_, lean_object* v_a_815_, lean_object* v_a_816_, lean_object* v_a_817_, lean_object* v_a_818_){
_start:
{
lean_object* v_res_819_; 
v_res_819_ = l_Lean_Meta_Grind_simpIteToCond(v_e_810_, v_a_811_, v_a_812_, v_a_813_, v_a_814_, v_a_815_, v_a_816_, v_a_817_);
lean_dec(v_a_817_);
lean_dec_ref(v_a_816_);
lean_dec(v_a_815_);
lean_dec_ref(v_a_814_);
lean_dec(v_a_813_);
lean_dec_ref(v_a_812_);
lean_dec(v_a_811_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpIteToCond_declare__16_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3199362635____hygCtx___hyg_14_(){
_start:
{
lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; 
v___x_840_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpIteToCond_declare__16___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3199362635____hygCtx___hyg_14_));
v___x_841_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpIteToCond_declare__16___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3199362635____hygCtx___hyg_14_));
v___x_842_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_simpIteToCond___boxed), 9, 0);
v___x_843_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_840_, v___x_841_, v___x_842_);
return v___x_843_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpIteToCond_declare__16_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3199362635____hygCtx___hyg_14____boxed(lean_object* v_a_844_){
_start:
{
lean_object* v_res_845_; 
v_res_845_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpIteToCond_declare__16_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3199362635____hygCtx___hyg_14_();
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpProjectedDecisionEq___redArg(lean_object* v_e_846_, lean_object* v_a_847_, lean_object* v_a_848_, lean_object* v_a_849_, lean_object* v_a_850_){
_start:
{
lean_object* v___x_855_; 
lean_inc_ref(v_e_846_);
v___x_855_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_846_, v_a_848_);
if (lean_obj_tag(v___x_855_) == 0)
{
lean_object* v_a_856_; lean_object* v___x_858_; uint8_t v_isShared_859_; uint8_t v_isSharedCheck_923_; 
v_a_856_ = lean_ctor_get(v___x_855_, 0);
v_isSharedCheck_923_ = !lean_is_exclusive(v___x_855_);
if (v_isSharedCheck_923_ == 0)
{
v___x_858_ = v___x_855_;
v_isShared_859_ = v_isSharedCheck_923_;
goto v_resetjp_857_;
}
else
{
lean_inc(v_a_856_);
lean_dec(v___x_855_);
v___x_858_ = lean_box(0);
v_isShared_859_ = v_isSharedCheck_923_;
goto v_resetjp_857_;
}
v_resetjp_857_:
{
lean_object* v___x_860_; uint8_t v___x_861_; 
v___x_860_ = l_Lean_Expr_cleanupAnnotations(v_a_856_);
lean_dec(v_a_856_);
v___x_861_ = l_Lean_Expr_isApp(v___x_860_);
if (v___x_861_ == 0)
{
lean_dec_ref(v___x_860_);
lean_del_object(v___x_858_);
lean_dec_ref(v_e_846_);
goto v___jp_852_;
}
else
{
lean_object* v___x_862_; uint8_t v___x_863_; 
v___x_862_ = l_Lean_Expr_appFnCleanup___redArg(v___x_860_);
v___x_863_ = l_Lean_Expr_isApp(v___x_862_);
if (v___x_863_ == 0)
{
lean_dec_ref(v___x_862_);
lean_dec_ref(v___x_860_);
lean_del_object(v___x_858_);
lean_dec_ref(v_e_846_);
goto v___jp_852_;
}
else
{
lean_object* v___x_864_; uint8_t v___x_865_; 
v___x_864_ = l_Lean_Expr_appFnCleanup___redArg(v___x_862_);
v___x_865_ = l_Lean_Expr_isApp(v___x_864_);
if (v___x_865_ == 0)
{
lean_dec_ref(v___x_864_);
lean_dec_ref(v___x_862_);
lean_dec_ref(v___x_860_);
lean_del_object(v___x_858_);
lean_dec_ref(v_e_846_);
goto v___jp_852_;
}
else
{
lean_object* v___x_866_; lean_object* v___x_867_; uint8_t v___x_868_; 
v___x_866_ = l_Lean_Expr_appFnCleanup___redArg(v___x_864_);
lean_dec_ref(v___x_864_);
v___x_867_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__2));
v___x_868_ = l_Lean_Expr_isConstOf(v___x_866_, v___x_867_);
lean_dec_ref(v___x_866_);
if (v___x_868_ == 0)
{
lean_dec_ref(v___x_862_);
lean_dec_ref(v___x_860_);
lean_del_object(v___x_858_);
lean_dec_ref(v_e_846_);
goto v___jp_852_;
}
else
{
lean_object* v_arg_869_; lean_object* v_arg_870_; lean_object* v___x_915_; uint8_t v___x_916_; 
v_arg_869_ = lean_ctor_get(v___x_860_, 1);
lean_inc_ref(v_arg_869_);
lean_dec_ref(v___x_860_);
v_arg_870_ = lean_ctor_get(v___x_862_, 1);
lean_inc_ref(v_arg_870_);
lean_dec_ref(v___x_862_);
v___x_915_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__4));
v___x_916_ = l_Lean_Expr_isConstOf(v_arg_869_, v___x_915_);
if (v___x_916_ == 0)
{
lean_object* v___x_917_; uint8_t v___x_918_; 
v___x_917_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__15));
v___x_918_ = l_Lean_Expr_isConstOf(v_arg_869_, v___x_917_);
lean_dec_ref(v_arg_869_);
if (v___x_918_ == 0)
{
lean_object* v___x_919_; lean_object* v___x_921_; 
lean_dec_ref(v_arg_870_);
lean_dec_ref(v_e_846_);
v___x_919_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
if (v_isShared_859_ == 0)
{
lean_ctor_set(v___x_858_, 0, v___x_919_);
v___x_921_ = v___x_858_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v___x_919_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
return v___x_921_;
}
}
else
{
lean_del_object(v___x_858_);
goto v___jp_871_;
}
}
else
{
lean_dec_ref(v_arg_869_);
lean_del_object(v___x_858_);
goto v___jp_871_;
}
v___jp_871_:
{
lean_object* v___x_872_; 
v___x_872_ = l_Lean_Meta_getBoolDecision_x3f(v_arg_870_, v_a_847_, v_a_848_, v_a_849_, v_a_850_);
if (lean_obj_tag(v___x_872_) == 0)
{
lean_object* v_a_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_906_; 
v_a_873_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_906_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_906_ == 0)
{
v___x_875_ = v___x_872_;
v_isShared_876_ = v_isSharedCheck_906_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_a_873_);
lean_dec(v___x_872_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_906_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
if (lean_obj_tag(v_a_873_) == 1)
{
lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_900_; 
lean_del_object(v___x_875_);
v_isSharedCheck_900_ = !lean_is_exclusive(v_a_873_);
if (v_isSharedCheck_900_ == 0)
{
lean_object* v_unused_901_; 
v_unused_901_ = lean_ctor_get(v_a_873_, 0);
lean_dec(v_unused_901_);
v___x_878_ = v_a_873_;
v_isShared_879_ = v_isSharedCheck_900_;
goto v_resetjp_877_;
}
else
{
lean_dec(v_a_873_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_900_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
lean_object* v___x_880_; 
v___x_880_ = l_Lean_Meta_Simp_normalizeBoolCondition(v_e_846_, v_a_847_, v_a_848_, v_a_849_, v_a_850_);
if (lean_obj_tag(v___x_880_) == 0)
{
lean_object* v_a_881_; lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_891_; 
v_a_881_ = lean_ctor_get(v___x_880_, 0);
v_isSharedCheck_891_ = !lean_is_exclusive(v___x_880_);
if (v_isSharedCheck_891_ == 0)
{
v___x_883_ = v___x_880_;
v_isShared_884_ = v_isSharedCheck_891_;
goto v_resetjp_882_;
}
else
{
lean_inc(v_a_881_);
lean_dec(v___x_880_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_891_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
lean_object* v___x_886_; 
if (v_isShared_879_ == 0)
{
lean_ctor_set(v___x_878_, 0, v_a_881_);
v___x_886_ = v___x_878_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v_a_881_);
v___x_886_ = v_reuseFailAlloc_890_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
lean_object* v___x_888_; 
if (v_isShared_884_ == 0)
{
lean_ctor_set(v___x_883_, 0, v___x_886_);
v___x_888_ = v___x_883_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v___x_886_);
v___x_888_ = v_reuseFailAlloc_889_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
return v___x_888_;
}
}
}
}
else
{
lean_object* v_a_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_899_; 
lean_del_object(v___x_878_);
v_a_892_ = lean_ctor_get(v___x_880_, 0);
v_isSharedCheck_899_ = !lean_is_exclusive(v___x_880_);
if (v_isSharedCheck_899_ == 0)
{
v___x_894_ = v___x_880_;
v_isShared_895_ = v_isSharedCheck_899_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_a_892_);
lean_dec(v___x_880_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_899_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
lean_object* v___x_897_; 
if (v_isShared_895_ == 0)
{
v___x_897_ = v___x_894_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v_a_892_);
v___x_897_ = v_reuseFailAlloc_898_;
goto v_reusejp_896_;
}
v_reusejp_896_:
{
return v___x_897_;
}
}
}
}
}
else
{
lean_object* v___x_902_; lean_object* v___x_904_; 
lean_dec(v_a_873_);
lean_dec_ref(v_e_846_);
v___x_902_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
if (v_isShared_876_ == 0)
{
lean_ctor_set(v___x_875_, 0, v___x_902_);
v___x_904_ = v___x_875_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v___x_902_);
v___x_904_ = v_reuseFailAlloc_905_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
return v___x_904_;
}
}
}
}
else
{
lean_object* v_a_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_914_; 
lean_dec_ref(v_e_846_);
v_a_907_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_914_ == 0)
{
v___x_909_ = v___x_872_;
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_a_907_);
lean_dec(v___x_872_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v___x_912_; 
if (v_isShared_910_ == 0)
{
v___x_912_ = v___x_909_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v_a_907_);
v___x_912_ = v_reuseFailAlloc_913_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
return v___x_912_;
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
lean_object* v_a_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_931_; 
lean_dec_ref(v_e_846_);
v_a_924_ = lean_ctor_get(v___x_855_, 0);
v_isSharedCheck_931_ = !lean_is_exclusive(v___x_855_);
if (v_isSharedCheck_931_ == 0)
{
v___x_926_ = v___x_855_;
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_a_924_);
lean_dec(v___x_855_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v___x_929_; 
if (v_isShared_927_ == 0)
{
v___x_929_ = v___x_926_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v_a_924_);
v___x_929_ = v_reuseFailAlloc_930_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
return v___x_929_;
}
}
}
v___jp_852_:
{
lean_object* v___x_853_; lean_object* v___x_854_; 
v___x_853_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
v___x_854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_854_, 0, v___x_853_);
return v___x_854_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpProjectedDecisionEq___redArg___boxed(lean_object* v_e_932_, lean_object* v_a_933_, lean_object* v_a_934_, lean_object* v_a_935_, lean_object* v_a_936_, lean_object* v_a_937_){
_start:
{
lean_object* v_res_938_; 
v_res_938_ = l_Lean_Meta_Grind_simpProjectedDecisionEq___redArg(v_e_932_, v_a_933_, v_a_934_, v_a_935_, v_a_936_);
lean_dec(v_a_936_);
lean_dec_ref(v_a_935_);
lean_dec(v_a_934_);
lean_dec_ref(v_a_933_);
return v_res_938_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpProjectedDecisionEq(lean_object* v_e_939_, lean_object* v_a_940_, lean_object* v_a_941_, lean_object* v_a_942_, lean_object* v_a_943_, lean_object* v_a_944_, lean_object* v_a_945_, lean_object* v_a_946_){
_start:
{
lean_object* v___x_948_; 
v___x_948_ = l_Lean_Meta_Grind_simpProjectedDecisionEq___redArg(v_e_939_, v_a_943_, v_a_944_, v_a_945_, v_a_946_);
return v___x_948_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpProjectedDecisionEq___boxed(lean_object* v_e_949_, lean_object* v_a_950_, lean_object* v_a_951_, lean_object* v_a_952_, lean_object* v_a_953_, lean_object* v_a_954_, lean_object* v_a_955_, lean_object* v_a_956_, lean_object* v_a_957_){
_start:
{
lean_object* v_res_958_; 
v_res_958_ = l_Lean_Meta_Grind_simpProjectedDecisionEq(v_e_949_, v_a_950_, v_a_951_, v_a_952_, v_a_953_, v_a_954_, v_a_955_, v_a_956_);
lean_dec(v_a_956_);
lean_dec_ref(v_a_955_);
lean_dec(v_a_954_);
lean_dec_ref(v_a_953_);
lean_dec(v_a_952_);
lean_dec_ref(v_a_951_);
lean_dec(v_a_950_);
return v_res_958_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpProjectedDecisionEq_declare__21_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1166571523____hygCtx___hyg_13_(){
_start:
{
lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; 
v___x_978_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpProjectedDecisionEq_declare__21___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1166571523____hygCtx___hyg_13_));
v___x_979_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpProjectedDecisionEq_declare__21___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1166571523____hygCtx___hyg_13_));
v___x_980_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_simpProjectedDecisionEq___boxed), 9, 0);
v___x_981_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_978_, v___x_979_, v___x_980_);
return v___x_981_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpProjectedDecisionEq_declare__21_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1166571523____hygCtx___hyg_13____boxed(lean_object* v_a_982_){
_start:
{
lean_object* v_res_983_; 
v_res_983_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpProjectedDecisionEq_declare__21_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1166571523____hygCtx___hyg_13_();
return v_res_983_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpDIte___redArg(lean_object* v_e_990_, lean_object* v_a_991_, lean_object* v_a_992_, lean_object* v_a_993_, lean_object* v_a_994_){
_start:
{
lean_object* v___x_1002_; 
lean_inc_ref(v_e_990_);
v___x_1002_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_990_, v_a_992_);
if (lean_obj_tag(v___x_1002_) == 0)
{
lean_object* v_a_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1077_; 
v_a_1003_ = lean_ctor_get(v___x_1002_, 0);
v_isSharedCheck_1077_ = !lean_is_exclusive(v___x_1002_);
if (v_isSharedCheck_1077_ == 0)
{
v___x_1005_ = v___x_1002_;
v_isShared_1006_ = v_isSharedCheck_1077_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_a_1003_);
lean_dec(v___x_1002_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1077_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v___x_1007_; uint8_t v___x_1008_; 
v___x_1007_ = l_Lean_Expr_cleanupAnnotations(v_a_1003_);
lean_dec(v_a_1003_);
v___x_1008_ = l_Lean_Expr_isApp(v___x_1007_);
if (v___x_1008_ == 0)
{
lean_dec_ref(v___x_1007_);
lean_del_object(v___x_1005_);
lean_dec_ref(v_e_990_);
goto v___jp_996_;
}
else
{
lean_object* v___x_1009_; uint8_t v___x_1010_; 
v___x_1009_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1007_);
v___x_1010_ = l_Lean_Expr_isApp(v___x_1009_);
if (v___x_1010_ == 0)
{
lean_dec_ref(v___x_1009_);
lean_dec_ref(v___x_1007_);
lean_del_object(v___x_1005_);
lean_dec_ref(v_e_990_);
goto v___jp_996_;
}
else
{
lean_object* v___x_1011_; uint8_t v___x_1012_; 
v___x_1011_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1009_);
v___x_1012_ = l_Lean_Expr_isApp(v___x_1011_);
if (v___x_1012_ == 0)
{
lean_dec_ref(v___x_1011_);
lean_dec_ref(v___x_1009_);
lean_dec_ref(v___x_1007_);
lean_del_object(v___x_1005_);
lean_dec_ref(v_e_990_);
goto v___jp_996_;
}
else
{
lean_object* v___x_1013_; uint8_t v___x_1014_; 
v___x_1013_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1011_);
v___x_1014_ = l_Lean_Expr_isApp(v___x_1013_);
if (v___x_1014_ == 0)
{
lean_dec_ref(v___x_1013_);
lean_dec_ref(v___x_1011_);
lean_dec_ref(v___x_1009_);
lean_dec_ref(v___x_1007_);
lean_del_object(v___x_1005_);
lean_dec_ref(v_e_990_);
goto v___jp_996_;
}
else
{
lean_object* v___x_1015_; uint8_t v___x_1016_; 
v___x_1015_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1013_);
v___x_1016_ = l_Lean_Expr_isApp(v___x_1015_);
if (v___x_1016_ == 0)
{
lean_dec_ref(v___x_1015_);
lean_dec_ref(v___x_1013_);
lean_dec_ref(v___x_1011_);
lean_dec_ref(v___x_1009_);
lean_dec_ref(v___x_1007_);
lean_del_object(v___x_1005_);
lean_dec_ref(v_e_990_);
goto v___jp_996_;
}
else
{
lean_object* v___x_1017_; lean_object* v___x_1018_; uint8_t v___x_1019_; 
v___x_1017_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1015_);
v___x_1018_ = ((lean_object*)(l_Lean_Meta_Grind_simpDIte___redArg___closed__1));
v___x_1019_ = l_Lean_Expr_isConstOf(v___x_1017_, v___x_1018_);
if (v___x_1019_ == 0)
{
lean_dec_ref(v___x_1017_);
lean_dec_ref(v___x_1015_);
lean_dec_ref(v___x_1013_);
lean_dec_ref(v___x_1011_);
lean_dec_ref(v___x_1009_);
lean_dec_ref(v___x_1007_);
lean_del_object(v___x_1005_);
lean_dec_ref(v_e_990_);
goto v___jp_996_;
}
else
{
lean_object* v_arg_1020_; 
v_arg_1020_ = lean_ctor_get(v___x_1009_, 1);
lean_inc_ref(v_arg_1020_);
lean_dec_ref(v___x_1009_);
if (lean_obj_tag(v_arg_1020_) == 6)
{
lean_object* v_body_1021_; uint8_t v___x_1022_; 
v_body_1021_ = lean_ctor_get(v_arg_1020_, 2);
lean_inc_ref(v_body_1021_);
lean_dec_ref_known(v_arg_1020_, 3);
v___x_1022_ = l_Lean_Expr_hasLooseBVars(v_body_1021_);
if (v___x_1022_ == 0)
{
lean_object* v_arg_1023_; 
v_arg_1023_ = lean_ctor_get(v___x_1007_, 1);
lean_inc_ref(v_arg_1023_);
lean_dec_ref(v___x_1007_);
if (lean_obj_tag(v_arg_1023_) == 6)
{
lean_object* v_body_1024_; uint8_t v___x_1025_; 
lean_del_object(v___x_1005_);
v_body_1024_ = lean_ctor_get(v_arg_1023_, 2);
lean_inc_ref(v_body_1024_);
lean_dec_ref_known(v_arg_1023_, 3);
v___x_1025_ = l_Lean_Expr_hasLooseBVars(v_body_1024_);
if (v___x_1025_ == 0)
{
lean_object* v_arg_1026_; lean_object* v_arg_1027_; lean_object* v_arg_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; 
v_arg_1026_ = lean_ctor_get(v___x_1011_, 1);
lean_inc_ref_n(v_arg_1026_, 2);
lean_dec_ref(v___x_1011_);
v_arg_1027_ = lean_ctor_get(v___x_1013_, 1);
lean_inc_ref(v_arg_1027_);
lean_dec_ref(v___x_1013_);
v_arg_1028_ = lean_ctor_get(v___x_1015_, 1);
lean_inc_ref_n(v_arg_1028_, 2);
lean_dec_ref(v___x_1015_);
v___x_1029_ = l_Lean_Expr_constLevels_x21(v___x_1017_);
lean_dec_ref(v___x_1017_);
v___x_1030_ = ((lean_object*)(l_Lean_Meta_Grind_simpIteToCond___redArg___closed__3));
lean_inc(v___x_1029_);
v___x_1031_ = l_Lean_mkConst(v___x_1030_, v___x_1029_);
v___x_1032_ = ((lean_object*)(l_Lean_Meta_Grind_simpIteToCond___redArg___closed__4));
v___x_1033_ = lean_unsigned_to_nat(0u);
v___x_1034_ = l_Lean_Expr_proj___override(v___x_1032_, v___x_1033_, v_arg_1026_);
lean_inc_ref(v_body_1024_);
lean_inc_ref(v_body_1021_);
v___x_1035_ = l_Lean_mkApp4(v___x_1031_, v_arg_1028_, v___x_1034_, v_body_1021_, v_body_1024_);
v___x_1036_ = ((lean_object*)(l_Lean_Meta_Grind_simpDIte___redArg___closed__3));
v___x_1037_ = l_Lean_Meta_mkDecisionProjectionProof(v___x_1036_, v___x_1029_, v_a_991_, v_a_992_, v_a_993_, v_a_994_);
if (lean_obj_tag(v___x_1037_) == 0)
{
lean_object* v_a_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; 
v_a_1038_ = lean_ctor_get(v___x_1037_, 0);
lean_inc(v_a_1038_);
lean_dec_ref_known(v___x_1037_, 1);
v___x_1039_ = l_Lean_mkApp5(v_a_1038_, v_arg_1027_, v_arg_1028_, v_body_1021_, v_body_1024_, v_arg_1026_);
lean_inc_ref(v___x_1035_);
v___x_1040_ = l_Lean_Meta_mkEq(v_e_990_, v___x_1035_, v_a_991_, v_a_992_, v_a_993_, v_a_994_);
if (lean_obj_tag(v___x_1040_) == 0)
{
lean_object* v_a_1041_; lean_object* v___x_1043_; uint8_t v_isShared_1044_; uint8_t v_isSharedCheck_1052_; 
v_a_1041_ = lean_ctor_get(v___x_1040_, 0);
v_isSharedCheck_1052_ = !lean_is_exclusive(v___x_1040_);
if (v_isSharedCheck_1052_ == 0)
{
v___x_1043_ = v___x_1040_;
v_isShared_1044_ = v_isSharedCheck_1052_;
goto v_resetjp_1042_;
}
else
{
lean_inc(v_a_1041_);
lean_dec(v___x_1040_);
v___x_1043_ = lean_box(0);
v_isShared_1044_ = v_isSharedCheck_1052_;
goto v_resetjp_1042_;
}
v_resetjp_1042_:
{
lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1050_; 
v___x_1045_ = l_Lean_Meta_mkExpectedPropHint(v___x_1039_, v_a_1041_);
v___x_1046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1045_);
v___x_1047_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1047_, 0, v___x_1035_);
lean_ctor_set(v___x_1047_, 1, v___x_1046_);
lean_ctor_set_uint8(v___x_1047_, sizeof(void*)*2, v___x_1019_);
v___x_1048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1048_, 0, v___x_1047_);
if (v_isShared_1044_ == 0)
{
lean_ctor_set(v___x_1043_, 0, v___x_1048_);
v___x_1050_ = v___x_1043_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v___x_1048_);
v___x_1050_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
return v___x_1050_;
}
}
}
else
{
lean_object* v_a_1053_; lean_object* v___x_1055_; uint8_t v_isShared_1056_; uint8_t v_isSharedCheck_1060_; 
lean_dec_ref(v___x_1039_);
lean_dec_ref(v___x_1035_);
v_a_1053_ = lean_ctor_get(v___x_1040_, 0);
v_isSharedCheck_1060_ = !lean_is_exclusive(v___x_1040_);
if (v_isSharedCheck_1060_ == 0)
{
v___x_1055_ = v___x_1040_;
v_isShared_1056_ = v_isSharedCheck_1060_;
goto v_resetjp_1054_;
}
else
{
lean_inc(v_a_1053_);
lean_dec(v___x_1040_);
v___x_1055_ = lean_box(0);
v_isShared_1056_ = v_isSharedCheck_1060_;
goto v_resetjp_1054_;
}
v_resetjp_1054_:
{
lean_object* v___x_1058_; 
if (v_isShared_1056_ == 0)
{
v___x_1058_ = v___x_1055_;
goto v_reusejp_1057_;
}
else
{
lean_object* v_reuseFailAlloc_1059_; 
v_reuseFailAlloc_1059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1059_, 0, v_a_1053_);
v___x_1058_ = v_reuseFailAlloc_1059_;
goto v_reusejp_1057_;
}
v_reusejp_1057_:
{
return v___x_1058_;
}
}
}
}
else
{
lean_object* v_a_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1068_; 
lean_dec_ref(v___x_1035_);
lean_dec_ref(v_arg_1028_);
lean_dec_ref(v_arg_1027_);
lean_dec_ref(v_arg_1026_);
lean_dec_ref(v_body_1024_);
lean_dec_ref(v_body_1021_);
lean_dec_ref(v_e_990_);
v_a_1061_ = lean_ctor_get(v___x_1037_, 0);
v_isSharedCheck_1068_ = !lean_is_exclusive(v___x_1037_);
if (v_isSharedCheck_1068_ == 0)
{
v___x_1063_ = v___x_1037_;
v_isShared_1064_ = v_isSharedCheck_1068_;
goto v_resetjp_1062_;
}
else
{
lean_inc(v_a_1061_);
lean_dec(v___x_1037_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1068_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
lean_object* v___x_1066_; 
if (v_isShared_1064_ == 0)
{
v___x_1066_ = v___x_1063_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1067_; 
v_reuseFailAlloc_1067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1067_, 0, v_a_1061_);
v___x_1066_ = v_reuseFailAlloc_1067_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
return v___x_1066_;
}
}
}
}
else
{
lean_dec_ref(v_body_1024_);
lean_dec_ref(v_body_1021_);
lean_dec_ref(v___x_1017_);
lean_dec_ref(v___x_1015_);
lean_dec_ref(v___x_1013_);
lean_dec_ref(v___x_1011_);
lean_dec_ref(v_e_990_);
goto v___jp_999_;
}
}
else
{
lean_object* v___x_1069_; lean_object* v___x_1071_; 
lean_dec_ref(v_arg_1023_);
lean_dec_ref(v_body_1021_);
lean_dec_ref(v___x_1017_);
lean_dec_ref(v___x_1015_);
lean_dec_ref(v___x_1013_);
lean_dec_ref(v___x_1011_);
lean_dec_ref(v_e_990_);
v___x_1069_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
if (v_isShared_1006_ == 0)
{
lean_ctor_set(v___x_1005_, 0, v___x_1069_);
v___x_1071_ = v___x_1005_;
goto v_reusejp_1070_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v___x_1069_);
v___x_1071_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1070_;
}
v_reusejp_1070_:
{
return v___x_1071_;
}
}
}
else
{
lean_dec_ref(v_body_1021_);
lean_dec_ref(v___x_1017_);
lean_dec_ref(v___x_1015_);
lean_dec_ref(v___x_1013_);
lean_dec_ref(v___x_1011_);
lean_dec_ref(v___x_1007_);
lean_del_object(v___x_1005_);
lean_dec_ref(v_e_990_);
goto v___jp_999_;
}
}
else
{
lean_object* v___x_1073_; lean_object* v___x_1075_; 
lean_dec_ref(v_arg_1020_);
lean_dec_ref(v___x_1017_);
lean_dec_ref(v___x_1015_);
lean_dec_ref(v___x_1013_);
lean_dec_ref(v___x_1011_);
lean_dec_ref(v___x_1007_);
lean_dec_ref(v_e_990_);
v___x_1073_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
if (v_isShared_1006_ == 0)
{
lean_ctor_set(v___x_1005_, 0, v___x_1073_);
v___x_1075_ = v___x_1005_;
goto v_reusejp_1074_;
}
else
{
lean_object* v_reuseFailAlloc_1076_; 
v_reuseFailAlloc_1076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1076_, 0, v___x_1073_);
v___x_1075_ = v_reuseFailAlloc_1076_;
goto v_reusejp_1074_;
}
v_reusejp_1074_:
{
return v___x_1075_;
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
lean_object* v_a_1078_; lean_object* v___x_1080_; uint8_t v_isShared_1081_; uint8_t v_isSharedCheck_1085_; 
lean_dec_ref(v_e_990_);
v_a_1078_ = lean_ctor_get(v___x_1002_, 0);
v_isSharedCheck_1085_ = !lean_is_exclusive(v___x_1002_);
if (v_isSharedCheck_1085_ == 0)
{
v___x_1080_ = v___x_1002_;
v_isShared_1081_ = v_isSharedCheck_1085_;
goto v_resetjp_1079_;
}
else
{
lean_inc(v_a_1078_);
lean_dec(v___x_1002_);
v___x_1080_ = lean_box(0);
v_isShared_1081_ = v_isSharedCheck_1085_;
goto v_resetjp_1079_;
}
v_resetjp_1079_:
{
lean_object* v___x_1083_; 
if (v_isShared_1081_ == 0)
{
v___x_1083_ = v___x_1080_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1084_; 
v_reuseFailAlloc_1084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1084_, 0, v_a_1078_);
v___x_1083_ = v_reuseFailAlloc_1084_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
return v___x_1083_;
}
}
}
v___jp_996_:
{
lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_997_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
v___x_998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_998_, 0, v___x_997_);
return v___x_998_;
}
v___jp_999_:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; 
v___x_1000_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
v___x_1001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1001_, 0, v___x_1000_);
return v___x_1001_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpDIte___redArg___boxed(lean_object* v_e_1086_, lean_object* v_a_1087_, lean_object* v_a_1088_, lean_object* v_a_1089_, lean_object* v_a_1090_, lean_object* v_a_1091_){
_start:
{
lean_object* v_res_1092_; 
v_res_1092_ = l_Lean_Meta_Grind_simpDIte___redArg(v_e_1086_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
lean_dec(v_a_1090_);
lean_dec_ref(v_a_1089_);
lean_dec(v_a_1088_);
lean_dec_ref(v_a_1087_);
return v_res_1092_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpDIte(lean_object* v_e_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_, lean_object* v_a_1096_, lean_object* v_a_1097_, lean_object* v_a_1098_, lean_object* v_a_1099_, lean_object* v_a_1100_){
_start:
{
lean_object* v___x_1102_; 
v___x_1102_ = l_Lean_Meta_Grind_simpDIte___redArg(v_e_1093_, v_a_1097_, v_a_1098_, v_a_1099_, v_a_1100_);
return v___x_1102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpDIte___boxed(lean_object* v_e_1103_, lean_object* v_a_1104_, lean_object* v_a_1105_, lean_object* v_a_1106_, lean_object* v_a_1107_, lean_object* v_a_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_){
_start:
{
lean_object* v_res_1112_; 
v_res_1112_ = l_Lean_Meta_Grind_simpDIte(v_e_1103_, v_a_1104_, v_a_1105_, v_a_1106_, v_a_1107_, v_a_1108_, v_a_1109_, v_a_1110_);
lean_dec(v_a_1110_);
lean_dec_ref(v_a_1109_);
lean_dec(v_a_1108_);
lean_dec_ref(v_a_1107_);
lean_dec(v_a_1106_);
lean_dec_ref(v_a_1105_);
lean_dec(v_a_1104_);
return v_res_1112_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__26_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_423278053____hygCtx___hyg_14_(){
_start:
{
lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; 
v___x_1133_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__26___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_423278053____hygCtx___hyg_14_));
v___x_1134_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__26___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_423278053____hygCtx___hyg_14_));
v___x_1135_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_simpDIte___boxed), 9, 0);
v___x_1136_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_1133_, v___x_1134_, v___x_1135_);
return v___x_1136_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__26_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_423278053____hygCtx___hyg_14____boxed(lean_object* v_a_1137_){
_start:
{
lean_object* v_res_1138_; 
v_res_1138_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__26_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_423278053____hygCtx___hyg_14_();
return v_res_1138_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__8(void){
_start:
{
lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; 
v___x_1155_ = lean_box(0);
v___x_1156_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__7));
v___x_1157_ = l_Lean_mkConst(v___x_1156_, v___x_1155_);
return v___x_1157_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__18(void){
_start:
{
lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; 
v___x_1174_ = lean_box(0);
v___x_1175_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__17));
v___x_1176_ = l_Lean_mkConst(v___x_1175_, v___x_1174_);
return v___x_1176_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__21(void){
_start:
{
lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; 
v___x_1182_ = lean_box(0);
v___x_1183_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__20));
v___x_1184_ = l_Lean_mkConst(v___x_1183_, v___x_1182_);
return v___x_1184_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__24(void){
_start:
{
lean_object* v___x_1189_; lean_object* v___x_1190_; 
v___x_1189_ = lean_unsigned_to_nat(1u);
v___x_1190_ = lean_nat_to_int(v___x_1189_);
return v___x_1190_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__25(void){
_start:
{
lean_object* v___x_1191_; lean_object* v___x_1192_; 
v___x_1191_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__24, &l_Lean_Meta_Grind_pushNot___redArg___closed__24_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__24);
v___x_1192_ = l_Lean_mkIntLit(v___x_1191_);
return v___x_1192_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__26(void){
_start:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; 
v___x_1193_ = lean_box(0);
v___x_1194_ = ((lean_object*)(l_Lean_Meta_Grind_registerNormTheorems___closed__4));
v___x_1195_ = l_Lean_mkConst(v___x_1194_, v___x_1193_);
return v___x_1195_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__27(void){
_start:
{
lean_object* v___x_1196_; lean_object* v___x_1197_; 
v___x_1196_ = lean_unsigned_to_nat(1u);
v___x_1197_ = l_Lean_mkNatLit(v___x_1196_);
return v___x_1197_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__28(void){
_start:
{
lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; 
v___x_1198_ = lean_box(0);
v___x_1199_ = ((lean_object*)(l_Lean_Meta_Grind_registerNormTheorems___closed__2));
v___x_1200_ = l_Lean_mkConst(v___x_1199_, v___x_1198_);
return v___x_1200_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__29(void){
_start:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; 
v___x_1201_ = lean_box(0);
v___x_1202_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__15));
v___x_1203_ = l_Lean_mkConst(v___x_1202_, v___x_1201_);
return v___x_1203_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__32(void){
_start:
{
lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; 
v___x_1208_ = lean_box(0);
v___x_1209_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__31));
v___x_1210_ = l_Lean_mkConst(v___x_1209_, v___x_1208_);
return v___x_1210_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__35(void){
_start:
{
lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; 
v___x_1215_ = lean_box(0);
v___x_1216_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__34));
v___x_1217_ = l_Lean_mkConst(v___x_1216_, v___x_1215_);
return v___x_1217_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__38(void){
_start:
{
lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; 
v___x_1223_ = lean_box(0);
v___x_1224_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__37));
v___x_1225_ = l_Lean_mkConst(v___x_1224_, v___x_1223_);
return v___x_1225_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__39(void){
_start:
{
lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; 
v___x_1226_ = lean_box(0);
v___x_1227_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__10));
v___x_1228_ = l_Lean_mkConst(v___x_1227_, v___x_1226_);
return v___x_1228_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__42(void){
_start:
{
lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; 
v___x_1234_ = lean_box(0);
v___x_1235_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__41));
v___x_1236_ = l_Lean_mkConst(v___x_1235_, v___x_1234_);
return v___x_1236_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__43(void){
_start:
{
lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; 
v___x_1237_ = lean_box(0);
v___x_1238_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__12));
v___x_1239_ = l_Lean_mkConst(v___x_1238_, v___x_1237_);
return v___x_1239_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__46(void){
_start:
{
lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; 
v___x_1245_ = lean_box(0);
v___x_1246_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__45));
v___x_1247_ = l_Lean_mkConst(v___x_1246_, v___x_1245_);
return v___x_1247_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__49(void){
_start:
{
lean_object* v___x_1251_; lean_object* v___x_1252_; 
v___x_1251_ = lean_unsigned_to_nat(0u);
v___x_1252_ = l_Lean_mkBVar(v___x_1251_);
return v___x_1252_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__54(void){
_start:
{
lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; 
v___x_1263_ = lean_box(0);
v___x_1264_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__53));
v___x_1265_ = l_Lean_mkConst(v___x_1264_, v___x_1263_);
return v___x_1265_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__57(void){
_start:
{
lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; 
v___x_1271_ = lean_box(0);
v___x_1272_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__56));
v___x_1273_ = l_Lean_mkConst(v___x_1272_, v___x_1271_);
return v___x_1273_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__58(void){
_start:
{
lean_object* v___x_1274_; lean_object* v___x_1275_; 
v___x_1274_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__57, &l_Lean_Meta_Grind_pushNot___redArg___closed__57_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__57);
v___x_1275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1275_, 0, v___x_1274_);
return v___x_1275_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__61(void){
_start:
{
lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; 
v___x_1281_ = lean_box(0);
v___x_1282_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__60));
v___x_1283_ = l_Lean_mkConst(v___x_1282_, v___x_1281_);
return v___x_1283_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_pushNot___redArg___closed__62(void){
_start:
{
lean_object* v___x_1284_; lean_object* v___x_1285_; 
v___x_1284_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__61, &l_Lean_Meta_Grind_pushNot___redArg___closed__61_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__61);
v___x_1285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1285_, 0, v___x_1284_);
return v___x_1285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNot___redArg(lean_object* v_e_1286_, lean_object* v_a_1287_, lean_object* v_a_1288_, lean_object* v_a_1289_, lean_object* v_a_1290_){
_start:
{
lean_object* v___x_1295_; 
lean_inc_ref(v_e_1286_);
v___x_1295_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_1286_, v_a_1288_);
if (lean_obj_tag(v___x_1295_) == 0)
{
lean_object* v_a_1296_; lean_object* v___x_1298_; uint8_t v_isShared_1299_; uint8_t v_isSharedCheck_1653_; 
v_a_1296_ = lean_ctor_get(v___x_1295_, 0);
v_isSharedCheck_1653_ = !lean_is_exclusive(v___x_1295_);
if (v_isSharedCheck_1653_ == 0)
{
v___x_1298_ = v___x_1295_;
v_isShared_1299_ = v_isSharedCheck_1653_;
goto v_resetjp_1297_;
}
else
{
lean_inc(v_a_1296_);
lean_dec(v___x_1295_);
v___x_1298_ = lean_box(0);
v_isShared_1299_ = v_isSharedCheck_1653_;
goto v_resetjp_1297_;
}
v_resetjp_1297_:
{
lean_object* v___x_1300_; uint8_t v___x_1301_; 
v___x_1300_ = l_Lean_Expr_cleanupAnnotations(v_a_1296_);
lean_dec(v_a_1296_);
v___x_1301_ = l_Lean_Expr_isApp(v___x_1300_);
if (v___x_1301_ == 0)
{
lean_dec_ref(v___x_1300_);
lean_del_object(v___x_1298_);
lean_dec_ref(v_e_1286_);
goto v___jp_1292_;
}
else
{
lean_object* v___x_1302_; lean_object* v___x_1303_; uint8_t v___x_1304_; lean_object* v___y_1306_; lean_object* v___y_1307_; uint8_t v___y_1308_; lean_object* v___y_1309_; lean_object* v___y_1310_; lean_object* v___y_1311_; lean_object* v___y_1312_; lean_object* v___y_1313_; 
v___x_1302_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1300_);
v___x_1303_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__1));
v___x_1304_ = l_Lean_Expr_isConstOf(v___x_1302_, v___x_1303_);
lean_dec_ref(v___x_1302_);
if (v___x_1304_ == 0)
{
lean_dec_ref(v___x_1300_);
lean_del_object(v___x_1298_);
lean_dec_ref(v_e_1286_);
goto v___jp_1292_;
}
else
{
lean_object* v_arg_1345_; lean_object* v___y_1347_; lean_object* v___y_1348_; lean_object* v___y_1349_; lean_object* v___y_1350_; lean_object* v___x_1386_; 
v_arg_1345_ = lean_ctor_get(v___x_1300_, 1);
lean_inc_ref_n(v_arg_1345_, 2);
lean_dec_ref(v___x_1300_);
v___x_1386_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_1345_, v_a_1288_);
if (lean_obj_tag(v___x_1386_) == 0)
{
lean_object* v_a_1387_; lean_object* v___x_1389_; uint8_t v_isShared_1390_; uint8_t v_isSharedCheck_1644_; 
v_a_1387_ = lean_ctor_get(v___x_1386_, 0);
v_isSharedCheck_1644_ = !lean_is_exclusive(v___x_1386_);
if (v_isSharedCheck_1644_ == 0)
{
v___x_1389_ = v___x_1386_;
v_isShared_1390_ = v_isSharedCheck_1644_;
goto v_resetjp_1388_;
}
else
{
lean_inc(v_a_1387_);
lean_dec(v___x_1386_);
v___x_1389_ = lean_box(0);
v_isShared_1390_ = v_isSharedCheck_1644_;
goto v_resetjp_1388_;
}
v_resetjp_1388_:
{
lean_object* v___x_1391_; lean_object* v___x_1392_; uint8_t v___x_1393_; 
v___x_1391_ = l_Lean_Expr_cleanupAnnotations(v_a_1387_);
lean_dec(v_a_1387_);
v___x_1392_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__21));
v___x_1393_ = l_Lean_Expr_isConstOf(v___x_1391_, v___x_1392_);
if (v___x_1393_ == 0)
{
lean_object* v___x_1394_; uint8_t v___x_1395_; 
v___x_1394_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__18));
v___x_1395_ = l_Lean_Expr_isConstOf(v___x_1391_, v___x_1394_);
if (v___x_1395_ == 0)
{
uint8_t v___x_1396_; 
v___x_1396_ = l_Lean_Expr_isApp(v___x_1391_);
if (v___x_1396_ == 0)
{
lean_dec_ref(v___x_1391_);
lean_del_object(v___x_1389_);
lean_dec_ref(v_e_1286_);
v___y_1347_ = v_a_1287_;
v___y_1348_ = v_a_1288_;
v___y_1349_ = v_a_1289_;
v___y_1350_ = v_a_1290_;
goto v___jp_1346_;
}
else
{
lean_object* v_arg_1397_; lean_object* v___x_1398_; uint8_t v___x_1399_; 
v_arg_1397_ = lean_ctor_get(v___x_1391_, 1);
lean_inc_ref(v_arg_1397_);
v___x_1398_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1391_);
lean_dec_ref(v___x_1391_);
v___x_1399_ = l_Lean_Expr_isConstOf(v___x_1398_, v___x_1303_);
if (v___x_1399_ == 0)
{
uint8_t v___x_1400_; 
v___x_1400_ = l_Lean_Expr_isApp(v___x_1398_);
if (v___x_1400_ == 0)
{
lean_dec_ref(v___x_1398_);
lean_dec_ref(v_arg_1397_);
lean_del_object(v___x_1389_);
lean_dec_ref(v_e_1286_);
v___y_1347_ = v_a_1287_;
v___y_1348_ = v_a_1288_;
v___y_1349_ = v_a_1289_;
v___y_1350_ = v_a_1290_;
goto v___jp_1346_;
}
else
{
lean_object* v_arg_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; uint8_t v___x_1404_; 
v_arg_1401_ = lean_ctor_get(v___x_1398_, 1);
lean_inc_ref(v_arg_1401_);
v___x_1402_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1398_);
lean_dec_ref(v___x_1398_);
v___x_1403_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__3));
v___x_1404_ = l_Lean_Expr_isConstOf(v___x_1402_, v___x_1403_);
if (v___x_1404_ == 0)
{
lean_object* v___x_1405_; uint8_t v___x_1406_; 
v___x_1405_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__10));
v___x_1406_ = l_Lean_Expr_isConstOf(v___x_1402_, v___x_1405_);
if (v___x_1406_ == 0)
{
lean_object* v___x_1407_; uint8_t v___x_1408_; 
v___x_1407_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__12));
v___x_1408_ = l_Lean_Expr_isConstOf(v___x_1402_, v___x_1407_);
if (v___x_1408_ == 0)
{
uint8_t v___x_1409_; 
v___x_1409_ = l_Lean_Expr_isApp(v___x_1402_);
if (v___x_1409_ == 0)
{
lean_dec_ref(v___x_1402_);
lean_dec_ref(v_arg_1401_);
lean_dec_ref(v_arg_1397_);
lean_del_object(v___x_1389_);
lean_dec_ref(v_e_1286_);
v___y_1347_ = v_a_1287_;
v___y_1348_ = v_a_1288_;
v___y_1349_ = v_a_1289_;
v___y_1350_ = v_a_1290_;
goto v___jp_1346_;
}
else
{
lean_object* v_arg_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; uint8_t v___x_1413_; 
v_arg_1410_ = lean_ctor_get(v___x_1402_, 1);
lean_inc_ref(v_arg_1410_);
v___x_1411_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1402_);
lean_dec_ref(v___x_1402_);
v___x_1412_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__2));
v___x_1413_ = l_Lean_Expr_isConstOf(v___x_1411_, v___x_1412_);
if (v___x_1413_ == 0)
{
uint8_t v___x_1414_; 
v___x_1414_ = l_Lean_Expr_isApp(v___x_1411_);
if (v___x_1414_ == 0)
{
lean_dec_ref(v___x_1411_);
lean_dec_ref(v_arg_1410_);
lean_dec_ref(v_arg_1401_);
lean_dec_ref(v_arg_1397_);
lean_del_object(v___x_1389_);
lean_dec_ref(v_e_1286_);
v___y_1347_ = v_a_1287_;
v___y_1348_ = v_a_1288_;
v___y_1349_ = v_a_1289_;
v___y_1350_ = v_a_1290_;
goto v___jp_1346_;
}
else
{
lean_object* v_arg_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; uint8_t v___x_1418_; 
v_arg_1415_ = lean_ctor_get(v___x_1411_, 1);
lean_inc_ref(v_arg_1415_);
v___x_1416_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1411_);
lean_dec_ref(v___x_1411_);
v___x_1417_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__15));
v___x_1418_ = l_Lean_Expr_isConstOf(v___x_1416_, v___x_1417_);
if (v___x_1418_ == 0)
{
lean_object* v___x_1419_; uint8_t v___x_1420_; 
v___x_1419_ = ((lean_object*)(l_Lean_Meta_Grind_simpIteToCond___redArg___closed__3));
v___x_1420_ = l_Lean_Expr_isConstOf(v___x_1416_, v___x_1419_);
if (v___x_1420_ == 0)
{
uint8_t v___x_1421_; 
lean_del_object(v___x_1389_);
v___x_1421_ = l_Lean_Expr_isApp(v___x_1416_);
if (v___x_1421_ == 0)
{
lean_dec_ref(v___x_1416_);
lean_dec_ref(v_arg_1415_);
lean_dec_ref(v_arg_1410_);
lean_dec_ref(v_arg_1401_);
lean_dec_ref(v_arg_1397_);
lean_dec_ref(v_e_1286_);
v___y_1347_ = v_a_1287_;
v___y_1348_ = v_a_1288_;
v___y_1349_ = v_a_1289_;
v___y_1350_ = v_a_1290_;
goto v___jp_1346_;
}
else
{
lean_object* v___x_1422_; lean_object* v___x_1423_; uint8_t v___x_1424_; 
v___x_1422_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1416_);
v___x_1423_ = ((lean_object*)(l_Lean_Meta_Grind_simpIteToCond___redArg___closed__1));
v___x_1424_ = l_Lean_Expr_isConstOf(v___x_1422_, v___x_1423_);
if (v___x_1424_ == 0)
{
lean_dec_ref(v___x_1422_);
lean_dec_ref(v___x_1416_);
lean_dec_ref(v_arg_1415_);
lean_dec_ref(v_arg_1410_);
lean_dec_ref(v_arg_1401_);
lean_dec_ref(v_arg_1397_);
lean_dec_ref(v_e_1286_);
v___y_1347_ = v_a_1287_;
v___y_1348_ = v_a_1288_;
v___y_1349_ = v_a_1289_;
v___y_1350_ = v_a_1290_;
goto v___jp_1346_;
}
else
{
lean_object* v_arg_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; 
lean_dec_ref(v_arg_1345_);
lean_del_object(v___x_1298_);
v_arg_1425_ = lean_ctor_get(v___x_1416_, 1);
lean_inc_ref(v_arg_1425_);
lean_dec_ref(v___x_1416_);
v___x_1426_ = l_Lean_Expr_constLevels_x21(v___x_1422_);
lean_dec_ref(v___x_1422_);
v___x_1427_ = l_Lean_mkConst(v___x_1419_, v___x_1426_);
v___x_1428_ = ((lean_object*)(l_Lean_Meta_Grind_simpIteToCond___redArg___closed__4));
v___x_1429_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_arg_1410_);
v___x_1430_ = l_Lean_Expr_proj___override(v___x_1428_, v___x_1429_, v_arg_1410_);
lean_inc_ref(v_arg_1401_);
v___x_1431_ = l_Lean_mkNot(v_arg_1401_);
lean_inc_ref(v_arg_1397_);
v___x_1432_ = l_Lean_mkNot(v_arg_1397_);
v___x_1433_ = l_Lean_mkApp4(v___x_1427_, v_arg_1425_, v___x_1430_, v___x_1431_, v___x_1432_);
v___x_1434_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__18, &l_Lean_Meta_Grind_pushNot___redArg___closed__18_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__18);
v___x_1435_ = l_Lean_mkApp4(v___x_1434_, v_arg_1415_, v_arg_1410_, v_arg_1401_, v_arg_1397_);
lean_inc_ref(v___x_1433_);
v___x_1436_ = l_Lean_Meta_mkEq(v_e_1286_, v___x_1433_, v_a_1287_, v_a_1288_, v_a_1289_, v_a_1290_);
if (lean_obj_tag(v___x_1436_) == 0)
{
lean_object* v_a_1437_; lean_object* v___x_1439_; uint8_t v_isShared_1440_; uint8_t v_isSharedCheck_1448_; 
v_a_1437_ = lean_ctor_get(v___x_1436_, 0);
v_isSharedCheck_1448_ = !lean_is_exclusive(v___x_1436_);
if (v_isSharedCheck_1448_ == 0)
{
v___x_1439_ = v___x_1436_;
v_isShared_1440_ = v_isSharedCheck_1448_;
goto v_resetjp_1438_;
}
else
{
lean_inc(v_a_1437_);
lean_dec(v___x_1436_);
v___x_1439_ = lean_box(0);
v_isShared_1440_ = v_isSharedCheck_1448_;
goto v_resetjp_1438_;
}
v_resetjp_1438_:
{
lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1446_; 
v___x_1441_ = l_Lean_Meta_mkExpectedPropHint(v___x_1435_, v_a_1437_);
v___x_1442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1442_, 0, v___x_1441_);
v___x_1443_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1443_, 0, v___x_1433_);
lean_ctor_set(v___x_1443_, 1, v___x_1442_);
lean_ctor_set_uint8(v___x_1443_, sizeof(void*)*2, v___x_1424_);
v___x_1444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1444_, 0, v___x_1443_);
if (v_isShared_1440_ == 0)
{
lean_ctor_set(v___x_1439_, 0, v___x_1444_);
v___x_1446_ = v___x_1439_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v___x_1444_);
v___x_1446_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
return v___x_1446_;
}
}
}
else
{
lean_object* v_a_1449_; lean_object* v___x_1451_; uint8_t v_isShared_1452_; uint8_t v_isSharedCheck_1456_; 
lean_dec_ref(v___x_1435_);
lean_dec_ref(v___x_1433_);
v_a_1449_ = lean_ctor_get(v___x_1436_, 0);
v_isSharedCheck_1456_ = !lean_is_exclusive(v___x_1436_);
if (v_isSharedCheck_1456_ == 0)
{
v___x_1451_ = v___x_1436_;
v_isShared_1452_ = v_isSharedCheck_1456_;
goto v_resetjp_1450_;
}
else
{
lean_inc(v_a_1449_);
lean_dec(v___x_1436_);
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
}
}
else
{
lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1466_; 
lean_dec_ref(v_arg_1345_);
lean_del_object(v___x_1298_);
lean_dec_ref(v_e_1286_);
lean_inc_ref(v_arg_1401_);
v___x_1457_ = l_Lean_mkNot(v_arg_1401_);
lean_inc_ref(v_arg_1397_);
v___x_1458_ = l_Lean_mkNot(v_arg_1397_);
lean_inc_ref(v_arg_1410_);
v___x_1459_ = l_Lean_mkApp4(v___x_1416_, v_arg_1415_, v_arg_1410_, v___x_1457_, v___x_1458_);
v___x_1460_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__21, &l_Lean_Meta_Grind_pushNot___redArg___closed__21_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__21);
v___x_1461_ = l_Lean_mkApp3(v___x_1460_, v_arg_1410_, v_arg_1401_, v_arg_1397_);
v___x_1462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1462_, 0, v___x_1461_);
v___x_1463_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1463_, 0, v___x_1459_);
lean_ctor_set(v___x_1463_, 1, v___x_1462_);
lean_ctor_set_uint8(v___x_1463_, sizeof(void*)*2, v___x_1420_);
v___x_1464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1464_, 0, v___x_1463_);
if (v_isShared_1390_ == 0)
{
lean_ctor_set(v___x_1389_, 0, v___x_1464_);
v___x_1466_ = v___x_1389_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1467_; 
v_reuseFailAlloc_1467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1467_, 0, v___x_1464_);
v___x_1466_ = v_reuseFailAlloc_1467_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
return v___x_1466_;
}
}
}
else
{
lean_object* v___x_1468_; 
lean_dec_ref(v___x_1416_);
lean_dec_ref(v_arg_1410_);
lean_del_object(v___x_1389_);
lean_dec_ref(v_arg_1345_);
lean_del_object(v___x_1298_);
lean_dec_ref(v_e_1286_);
v___x_1468_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_1415_, v_a_1288_);
if (lean_obj_tag(v___x_1468_) == 0)
{
lean_object* v_a_1469_; lean_object* v___x_1471_; uint8_t v_isShared_1472_; uint8_t v_isSharedCheck_1504_; 
v_a_1469_ = lean_ctor_get(v___x_1468_, 0);
v_isSharedCheck_1504_ = !lean_is_exclusive(v___x_1468_);
if (v_isSharedCheck_1504_ == 0)
{
v___x_1471_ = v___x_1468_;
v_isShared_1472_ = v_isSharedCheck_1504_;
goto v_resetjp_1470_;
}
else
{
lean_inc(v_a_1469_);
lean_dec(v___x_1468_);
v___x_1471_ = lean_box(0);
v_isShared_1472_ = v_isSharedCheck_1504_;
goto v_resetjp_1470_;
}
v_resetjp_1470_:
{
lean_object* v___x_1473_; lean_object* v___x_1474_; uint8_t v___x_1475_; 
v___x_1473_ = l_Lean_Expr_cleanupAnnotations(v_a_1469_);
lean_dec(v_a_1469_);
v___x_1474_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__22));
v___x_1475_ = l_Lean_Expr_isConstOf(v___x_1473_, v___x_1474_);
if (v___x_1475_ == 0)
{
lean_object* v___x_1476_; uint8_t v___x_1477_; 
v___x_1476_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__23));
v___x_1477_ = l_Lean_Expr_isConstOf(v___x_1473_, v___x_1476_);
lean_dec_ref(v___x_1473_);
if (v___x_1477_ == 0)
{
lean_object* v___x_1478_; lean_object* v___x_1480_; 
lean_dec_ref(v_arg_1401_);
lean_dec_ref(v_arg_1397_);
v___x_1478_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
if (v_isShared_1472_ == 0)
{
lean_ctor_set(v___x_1471_, 0, v___x_1478_);
v___x_1480_ = v___x_1471_;
goto v_reusejp_1479_;
}
else
{
lean_object* v_reuseFailAlloc_1481_; 
v_reuseFailAlloc_1481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1481_, 0, v___x_1478_);
v___x_1480_ = v_reuseFailAlloc_1481_;
goto v_reusejp_1479_;
}
v_reusejp_1479_:
{
return v___x_1480_;
}
}
else
{
lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1491_; 
v___x_1482_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__25, &l_Lean_Meta_Grind_pushNot___redArg___closed__25_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__25);
lean_inc_ref(v_arg_1397_);
v___x_1483_ = l_Lean_mkIntAdd(v_arg_1397_, v___x_1482_);
lean_inc_ref(v_arg_1401_);
v___x_1484_ = l_Lean_mkIntLE(v___x_1483_, v_arg_1401_);
v___x_1485_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__26, &l_Lean_Meta_Grind_pushNot___redArg___closed__26_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__26);
v___x_1486_ = l_Lean_mkAppB(v___x_1485_, v_arg_1401_, v_arg_1397_);
v___x_1487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1487_, 0, v___x_1486_);
v___x_1488_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1488_, 0, v___x_1484_);
lean_ctor_set(v___x_1488_, 1, v___x_1487_);
lean_ctor_set_uint8(v___x_1488_, sizeof(void*)*2, v___x_1477_);
v___x_1489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1489_, 0, v___x_1488_);
if (v_isShared_1472_ == 0)
{
lean_ctor_set(v___x_1471_, 0, v___x_1489_);
v___x_1491_ = v___x_1471_;
goto v_reusejp_1490_;
}
else
{
lean_object* v_reuseFailAlloc_1492_; 
v_reuseFailAlloc_1492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1492_, 0, v___x_1489_);
v___x_1491_ = v_reuseFailAlloc_1492_;
goto v_reusejp_1490_;
}
v_reusejp_1490_:
{
return v___x_1491_;
}
}
}
else
{
lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1502_; 
lean_dec_ref(v___x_1473_);
v___x_1493_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__27, &l_Lean_Meta_Grind_pushNot___redArg___closed__27_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__27);
lean_inc_ref(v_arg_1397_);
v___x_1494_ = l_Lean_mkNatAdd(v_arg_1397_, v___x_1493_);
lean_inc_ref(v_arg_1401_);
v___x_1495_ = l_Lean_mkNatLE(v___x_1494_, v_arg_1401_);
v___x_1496_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__28, &l_Lean_Meta_Grind_pushNot___redArg___closed__28_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__28);
v___x_1497_ = l_Lean_mkAppB(v___x_1496_, v_arg_1401_, v_arg_1397_);
v___x_1498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1498_, 0, v___x_1497_);
v___x_1499_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1499_, 0, v___x_1495_);
lean_ctor_set(v___x_1499_, 1, v___x_1498_);
lean_ctor_set_uint8(v___x_1499_, sizeof(void*)*2, v___x_1475_);
v___x_1500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1500_, 0, v___x_1499_);
if (v_isShared_1472_ == 0)
{
lean_ctor_set(v___x_1471_, 0, v___x_1500_);
v___x_1502_ = v___x_1471_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v___x_1500_);
v___x_1502_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
return v___x_1502_;
}
}
}
}
else
{
lean_object* v_a_1505_; lean_object* v___x_1507_; uint8_t v_isShared_1508_; uint8_t v_isSharedCheck_1512_; 
lean_dec_ref(v_arg_1401_);
lean_dec_ref(v_arg_1397_);
v_a_1505_ = lean_ctor_get(v___x_1468_, 0);
v_isSharedCheck_1512_ = !lean_is_exclusive(v___x_1468_);
if (v_isSharedCheck_1512_ == 0)
{
v___x_1507_ = v___x_1468_;
v_isShared_1508_ = v_isSharedCheck_1512_;
goto v_resetjp_1506_;
}
else
{
lean_inc(v_a_1505_);
lean_dec(v___x_1468_);
v___x_1507_ = lean_box(0);
v_isShared_1508_ = v_isSharedCheck_1512_;
goto v_resetjp_1506_;
}
v_resetjp_1506_:
{
lean_object* v___x_1510_; 
if (v_isShared_1508_ == 0)
{
v___x_1510_ = v___x_1507_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v_a_1505_);
v___x_1510_ = v_reuseFailAlloc_1511_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
return v___x_1510_;
}
}
}
}
}
}
else
{
uint8_t v___x_1513_; 
lean_dec_ref(v_arg_1345_);
lean_del_object(v___x_1298_);
lean_dec_ref(v_e_1286_);
v___x_1513_ = l_Lean_Expr_isProp(v_arg_1410_);
if (v___x_1513_ == 0)
{
lean_object* v___x_1514_; 
lean_del_object(v___x_1389_);
v___x_1514_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_1397_, v_a_1288_);
if (lean_obj_tag(v___x_1514_) == 0)
{
lean_object* v_a_1515_; lean_object* v___x_1517_; uint8_t v_isShared_1518_; uint8_t v_isSharedCheck_1548_; 
v_a_1515_ = lean_ctor_get(v___x_1514_, 0);
v_isSharedCheck_1548_ = !lean_is_exclusive(v___x_1514_);
if (v_isSharedCheck_1548_ == 0)
{
v___x_1517_ = v___x_1514_;
v_isShared_1518_ = v_isSharedCheck_1548_;
goto v_resetjp_1516_;
}
else
{
lean_inc(v_a_1515_);
lean_dec(v___x_1514_);
v___x_1517_ = lean_box(0);
v_isShared_1518_ = v_isSharedCheck_1548_;
goto v_resetjp_1516_;
}
v_resetjp_1516_:
{
lean_object* v___x_1519_; lean_object* v___x_1520_; uint8_t v___x_1521_; 
v___x_1519_ = l_Lean_Expr_cleanupAnnotations(v_a_1515_);
lean_dec(v_a_1515_);
v___x_1520_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__15));
v___x_1521_ = l_Lean_Expr_isConstOf(v___x_1519_, v___x_1520_);
if (v___x_1521_ == 0)
{
lean_object* v___x_1522_; uint8_t v___x_1523_; 
v___x_1522_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__4));
v___x_1523_ = l_Lean_Expr_isConstOf(v___x_1519_, v___x_1522_);
lean_dec_ref(v___x_1519_);
if (v___x_1523_ == 0)
{
lean_object* v___x_1524_; lean_object* v___x_1526_; 
lean_dec_ref(v___x_1411_);
lean_dec_ref(v_arg_1410_);
lean_dec_ref(v_arg_1401_);
v___x_1524_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
if (v_isShared_1518_ == 0)
{
lean_ctor_set(v___x_1517_, 0, v___x_1524_);
v___x_1526_ = v___x_1517_;
goto v_reusejp_1525_;
}
else
{
lean_object* v_reuseFailAlloc_1527_; 
v_reuseFailAlloc_1527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1527_, 0, v___x_1524_);
v___x_1526_ = v_reuseFailAlloc_1527_;
goto v_reusejp_1525_;
}
v_reusejp_1525_:
{
return v___x_1526_;
}
}
else
{
lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1536_; 
v___x_1528_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__29, &l_Lean_Meta_Grind_pushNot___redArg___closed__29_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__29);
lean_inc_ref(v_arg_1401_);
v___x_1529_ = l_Lean_mkApp3(v___x_1411_, v_arg_1410_, v_arg_1401_, v___x_1528_);
v___x_1530_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__32, &l_Lean_Meta_Grind_pushNot___redArg___closed__32_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__32);
v___x_1531_ = l_Lean_Expr_app___override(v___x_1530_, v_arg_1401_);
v___x_1532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1532_, 0, v___x_1531_);
v___x_1533_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1533_, 0, v___x_1529_);
lean_ctor_set(v___x_1533_, 1, v___x_1532_);
lean_ctor_set_uint8(v___x_1533_, sizeof(void*)*2, v___x_1523_);
v___x_1534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1534_, 0, v___x_1533_);
if (v_isShared_1518_ == 0)
{
lean_ctor_set(v___x_1517_, 0, v___x_1534_);
v___x_1536_ = v___x_1517_;
goto v_reusejp_1535_;
}
else
{
lean_object* v_reuseFailAlloc_1537_; 
v_reuseFailAlloc_1537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1537_, 0, v___x_1534_);
v___x_1536_ = v_reuseFailAlloc_1537_;
goto v_reusejp_1535_;
}
v_reusejp_1535_:
{
return v___x_1536_;
}
}
}
else
{
lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1546_; 
lean_dec_ref(v___x_1519_);
v___x_1538_ = lean_obj_once(&l_Lean_Meta_Grind_simpEq___redArg___closed__5, &l_Lean_Meta_Grind_simpEq___redArg___closed__5_once, _init_l_Lean_Meta_Grind_simpEq___redArg___closed__5);
lean_inc_ref(v_arg_1401_);
v___x_1539_ = l_Lean_mkApp3(v___x_1411_, v_arg_1410_, v_arg_1401_, v___x_1538_);
v___x_1540_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__35, &l_Lean_Meta_Grind_pushNot___redArg___closed__35_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__35);
v___x_1541_ = l_Lean_Expr_app___override(v___x_1540_, v_arg_1401_);
v___x_1542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1542_, 0, v___x_1541_);
v___x_1543_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1543_, 0, v___x_1539_);
lean_ctor_set(v___x_1543_, 1, v___x_1542_);
lean_ctor_set_uint8(v___x_1543_, sizeof(void*)*2, v___x_1521_);
v___x_1544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1544_, 0, v___x_1543_);
if (v_isShared_1518_ == 0)
{
lean_ctor_set(v___x_1517_, 0, v___x_1544_);
v___x_1546_ = v___x_1517_;
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
lean_dec_ref(v___x_1411_);
lean_dec_ref(v_arg_1410_);
lean_dec_ref(v_arg_1401_);
v_a_1549_ = lean_ctor_get(v___x_1514_, 0);
v_isSharedCheck_1556_ = !lean_is_exclusive(v___x_1514_);
if (v_isSharedCheck_1556_ == 0)
{
v___x_1551_ = v___x_1514_;
v_isShared_1552_ = v_isSharedCheck_1556_;
goto v_resetjp_1550_;
}
else
{
lean_inc(v_a_1549_);
lean_dec(v___x_1514_);
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
lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1565_; 
lean_inc_ref(v_arg_1397_);
v___x_1557_ = l_Lean_mkNot(v_arg_1397_);
lean_inc_ref(v_arg_1401_);
v___x_1558_ = l_Lean_mkApp3(v___x_1411_, v_arg_1410_, v_arg_1401_, v___x_1557_);
v___x_1559_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__38, &l_Lean_Meta_Grind_pushNot___redArg___closed__38_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__38);
v___x_1560_ = l_Lean_mkAppB(v___x_1559_, v_arg_1401_, v_arg_1397_);
v___x_1561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1561_, 0, v___x_1560_);
v___x_1562_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1562_, 0, v___x_1558_);
lean_ctor_set(v___x_1562_, 1, v___x_1561_);
lean_ctor_set_uint8(v___x_1562_, sizeof(void*)*2, v___x_1513_);
v___x_1563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1563_, 0, v___x_1562_);
if (v_isShared_1390_ == 0)
{
lean_ctor_set(v___x_1389_, 0, v___x_1563_);
v___x_1565_ = v___x_1389_;
goto v_reusejp_1564_;
}
else
{
lean_object* v_reuseFailAlloc_1566_; 
v_reuseFailAlloc_1566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1566_, 0, v___x_1563_);
v___x_1565_ = v_reuseFailAlloc_1566_;
goto v_reusejp_1564_;
}
v_reusejp_1564_:
{
return v___x_1565_;
}
}
}
}
}
else
{
lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1577_; 
lean_dec_ref(v___x_1402_);
lean_dec_ref(v_arg_1345_);
lean_del_object(v___x_1298_);
lean_dec_ref(v_e_1286_);
v___x_1567_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__39, &l_Lean_Meta_Grind_pushNot___redArg___closed__39_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__39);
lean_inc_ref(v_arg_1401_);
v___x_1568_ = l_Lean_mkNot(v_arg_1401_);
lean_inc_ref(v_arg_1397_);
v___x_1569_ = l_Lean_mkNot(v_arg_1397_);
v___x_1570_ = l_Lean_mkAppB(v___x_1567_, v___x_1568_, v___x_1569_);
v___x_1571_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__42, &l_Lean_Meta_Grind_pushNot___redArg___closed__42_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__42);
v___x_1572_ = l_Lean_mkAppB(v___x_1571_, v_arg_1401_, v_arg_1397_);
v___x_1573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1573_, 0, v___x_1572_);
v___x_1574_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1574_, 0, v___x_1570_);
lean_ctor_set(v___x_1574_, 1, v___x_1573_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*2, v___x_1408_);
v___x_1575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1575_, 0, v___x_1574_);
if (v_isShared_1390_ == 0)
{
lean_ctor_set(v___x_1389_, 0, v___x_1575_);
v___x_1577_ = v___x_1389_;
goto v_reusejp_1576_;
}
else
{
lean_object* v_reuseFailAlloc_1578_; 
v_reuseFailAlloc_1578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1578_, 0, v___x_1575_);
v___x_1577_ = v_reuseFailAlloc_1578_;
goto v_reusejp_1576_;
}
v_reusejp_1576_:
{
return v___x_1577_;
}
}
}
else
{
lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1589_; 
lean_dec_ref(v___x_1402_);
lean_dec_ref(v_arg_1345_);
lean_del_object(v___x_1298_);
lean_dec_ref(v_e_1286_);
v___x_1579_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__43, &l_Lean_Meta_Grind_pushNot___redArg___closed__43_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__43);
lean_inc_ref(v_arg_1401_);
v___x_1580_ = l_Lean_mkNot(v_arg_1401_);
lean_inc_ref(v_arg_1397_);
v___x_1581_ = l_Lean_mkNot(v_arg_1397_);
v___x_1582_ = l_Lean_mkAppB(v___x_1579_, v___x_1580_, v___x_1581_);
v___x_1583_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__46, &l_Lean_Meta_Grind_pushNot___redArg___closed__46_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__46);
v___x_1584_ = l_Lean_mkAppB(v___x_1583_, v_arg_1401_, v_arg_1397_);
v___x_1585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1585_, 0, v___x_1584_);
v___x_1586_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1586_, 0, v___x_1582_);
lean_ctor_set(v___x_1586_, 1, v___x_1585_);
lean_ctor_set_uint8(v___x_1586_, sizeof(void*)*2, v___x_1406_);
v___x_1587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1587_, 0, v___x_1586_);
if (v_isShared_1390_ == 0)
{
lean_ctor_set(v___x_1389_, 0, v___x_1587_);
v___x_1589_ = v___x_1389_;
goto v_reusejp_1588_;
}
else
{
lean_object* v_reuseFailAlloc_1590_; 
v_reuseFailAlloc_1590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1590_, 0, v___x_1587_);
v___x_1589_ = v_reuseFailAlloc_1590_;
goto v_reusejp_1588_;
}
v_reusejp_1588_:
{
return v___x_1589_;
}
}
}
else
{
lean_object* v___x_1591_; uint8_t v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; 
lean_dec_ref(v___x_1402_);
lean_del_object(v___x_1389_);
lean_dec_ref(v_arg_1345_);
lean_del_object(v___x_1298_);
lean_dec_ref(v_e_1286_);
v___x_1591_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__48));
v___x_1592_ = 0;
v___x_1593_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__49, &l_Lean_Meta_Grind_pushNot___redArg___closed__49_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__49);
lean_inc_ref(v_arg_1397_);
v___x_1594_ = l_Lean_Expr_app___override(v_arg_1397_, v___x_1593_);
v___x_1595_ = l_Lean_mkNot(v___x_1594_);
lean_inc_ref_n(v_arg_1401_, 2);
v___x_1596_ = l_Lean_mkForall(v___x_1591_, v___x_1592_, v_arg_1401_, v___x_1595_);
v___x_1597_ = l_Lean_Meta_getLevel(v_arg_1401_, v_a_1287_, v_a_1288_, v_a_1289_, v_a_1290_);
if (lean_obj_tag(v___x_1597_) == 0)
{
lean_object* v_a_1598_; lean_object* v___x_1600_; uint8_t v_isShared_1601_; uint8_t v_isSharedCheck_1613_; 
v_a_1598_ = lean_ctor_get(v___x_1597_, 0);
v_isSharedCheck_1613_ = !lean_is_exclusive(v___x_1597_);
if (v_isSharedCheck_1613_ == 0)
{
v___x_1600_ = v___x_1597_;
v_isShared_1601_ = v_isSharedCheck_1613_;
goto v_resetjp_1599_;
}
else
{
lean_inc(v_a_1598_);
lean_dec(v___x_1597_);
v___x_1600_ = lean_box(0);
v_isShared_1601_ = v_isSharedCheck_1613_;
goto v_resetjp_1599_;
}
v_resetjp_1599_:
{
lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1611_; 
v___x_1602_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__51));
v___x_1603_ = lean_box(0);
v___x_1604_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1604_, 0, v_a_1598_);
lean_ctor_set(v___x_1604_, 1, v___x_1603_);
v___x_1605_ = l_Lean_mkConst(v___x_1602_, v___x_1604_);
v___x_1606_ = l_Lean_mkAppB(v___x_1605_, v_arg_1401_, v_arg_1397_);
v___x_1607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1607_, 0, v___x_1606_);
v___x_1608_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1608_, 0, v___x_1596_);
lean_ctor_set(v___x_1608_, 1, v___x_1607_);
lean_ctor_set_uint8(v___x_1608_, sizeof(void*)*2, v___x_1404_);
v___x_1609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1609_, 0, v___x_1608_);
if (v_isShared_1601_ == 0)
{
lean_ctor_set(v___x_1600_, 0, v___x_1609_);
v___x_1611_ = v___x_1600_;
goto v_reusejp_1610_;
}
else
{
lean_object* v_reuseFailAlloc_1612_; 
v_reuseFailAlloc_1612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1612_, 0, v___x_1609_);
v___x_1611_ = v_reuseFailAlloc_1612_;
goto v_reusejp_1610_;
}
v_reusejp_1610_:
{
return v___x_1611_;
}
}
}
else
{
lean_object* v_a_1614_; lean_object* v___x_1616_; uint8_t v_isShared_1617_; uint8_t v_isSharedCheck_1621_; 
lean_dec_ref(v___x_1596_);
lean_dec_ref(v_arg_1401_);
lean_dec_ref(v_arg_1397_);
v_a_1614_ = lean_ctor_get(v___x_1597_, 0);
v_isSharedCheck_1621_ = !lean_is_exclusive(v___x_1597_);
if (v_isSharedCheck_1621_ == 0)
{
v___x_1616_ = v___x_1597_;
v_isShared_1617_ = v_isSharedCheck_1621_;
goto v_resetjp_1615_;
}
else
{
lean_inc(v_a_1614_);
lean_dec(v___x_1597_);
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
}
else
{
lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1628_; 
lean_dec_ref(v___x_1398_);
lean_dec_ref(v_arg_1345_);
lean_del_object(v___x_1298_);
lean_dec_ref(v_e_1286_);
v___x_1622_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__54, &l_Lean_Meta_Grind_pushNot___redArg___closed__54_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__54);
lean_inc_ref(v_arg_1397_);
v___x_1623_ = l_Lean_Expr_app___override(v___x_1622_, v_arg_1397_);
v___x_1624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1624_, 0, v___x_1623_);
v___x_1625_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1625_, 0, v_arg_1397_);
lean_ctor_set(v___x_1625_, 1, v___x_1624_);
lean_ctor_set_uint8(v___x_1625_, sizeof(void*)*2, v___x_1399_);
v___x_1626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1626_, 0, v___x_1625_);
if (v_isShared_1390_ == 0)
{
lean_ctor_set(v___x_1389_, 0, v___x_1626_);
v___x_1628_ = v___x_1389_;
goto v_reusejp_1627_;
}
else
{
lean_object* v_reuseFailAlloc_1629_; 
v_reuseFailAlloc_1629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1629_, 0, v___x_1626_);
v___x_1628_ = v_reuseFailAlloc_1629_;
goto v_reusejp_1627_;
}
v_reusejp_1627_:
{
return v___x_1628_;
}
}
}
}
else
{
lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1635_; 
lean_dec_ref(v___x_1391_);
lean_dec_ref(v_arg_1345_);
lean_del_object(v___x_1298_);
lean_dec_ref(v_e_1286_);
v___x_1630_ = lean_obj_once(&l_Lean_Meta_Grind_simpEq___redArg___closed__22, &l_Lean_Meta_Grind_simpEq___redArg___closed__22_once, _init_l_Lean_Meta_Grind_simpEq___redArg___closed__22);
v___x_1631_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__58, &l_Lean_Meta_Grind_pushNot___redArg___closed__58_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__58);
v___x_1632_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1632_, 0, v___x_1630_);
lean_ctor_set(v___x_1632_, 1, v___x_1631_);
lean_ctor_set_uint8(v___x_1632_, sizeof(void*)*2, v___x_1395_);
v___x_1633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1633_, 0, v___x_1632_);
if (v_isShared_1390_ == 0)
{
lean_ctor_set(v___x_1389_, 0, v___x_1633_);
v___x_1635_ = v___x_1389_;
goto v_reusejp_1634_;
}
else
{
lean_object* v_reuseFailAlloc_1636_; 
v_reuseFailAlloc_1636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1636_, 0, v___x_1633_);
v___x_1635_ = v_reuseFailAlloc_1636_;
goto v_reusejp_1634_;
}
v_reusejp_1634_:
{
return v___x_1635_;
}
}
}
else
{
lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1642_; 
lean_dec_ref(v___x_1391_);
lean_dec_ref(v_arg_1345_);
lean_del_object(v___x_1298_);
lean_dec_ref(v_e_1286_);
v___x_1637_ = lean_obj_once(&l_Lean_Meta_Grind_simpEq___redArg___closed__19, &l_Lean_Meta_Grind_simpEq___redArg___closed__19_once, _init_l_Lean_Meta_Grind_simpEq___redArg___closed__19);
v___x_1638_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__62, &l_Lean_Meta_Grind_pushNot___redArg___closed__62_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__62);
v___x_1639_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1639_, 0, v___x_1637_);
lean_ctor_set(v___x_1639_, 1, v___x_1638_);
lean_ctor_set_uint8(v___x_1639_, sizeof(void*)*2, v___x_1393_);
v___x_1640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1640_, 0, v___x_1639_);
if (v_isShared_1390_ == 0)
{
lean_ctor_set(v___x_1389_, 0, v___x_1640_);
v___x_1642_ = v___x_1389_;
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
lean_object* v_a_1645_; lean_object* v___x_1647_; uint8_t v_isShared_1648_; uint8_t v_isSharedCheck_1652_; 
lean_dec_ref(v_arg_1345_);
lean_del_object(v___x_1298_);
lean_dec_ref(v_e_1286_);
v_a_1645_ = lean_ctor_get(v___x_1386_, 0);
v_isSharedCheck_1652_ = !lean_is_exclusive(v___x_1386_);
if (v_isSharedCheck_1652_ == 0)
{
v___x_1647_ = v___x_1386_;
v_isShared_1648_ = v_isSharedCheck_1652_;
goto v_resetjp_1646_;
}
else
{
lean_inc(v_a_1645_);
lean_dec(v___x_1386_);
v___x_1647_ = lean_box(0);
v_isShared_1648_ = v_isSharedCheck_1652_;
goto v_resetjp_1646_;
}
v_resetjp_1646_:
{
lean_object* v___x_1650_; 
if (v_isShared_1648_ == 0)
{
v___x_1650_ = v___x_1647_;
goto v_reusejp_1649_;
}
else
{
lean_object* v_reuseFailAlloc_1651_; 
v_reuseFailAlloc_1651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1651_, 0, v_a_1645_);
v___x_1650_ = v_reuseFailAlloc_1651_;
goto v_reusejp_1649_;
}
v_reusejp_1649_:
{
return v___x_1650_;
}
}
}
v___jp_1346_:
{
if (lean_obj_tag(v_arg_1345_) == 7)
{
lean_object* v_binderName_1351_; lean_object* v_binderType_1352_; lean_object* v_body_1353_; uint8_t v_binderInfo_1354_; lean_object* v___x_1355_; 
lean_del_object(v___x_1298_);
v_binderName_1351_ = lean_ctor_get(v_arg_1345_, 0);
lean_inc(v_binderName_1351_);
v_binderType_1352_ = lean_ctor_get(v_arg_1345_, 1);
lean_inc_ref_n(v_binderType_1352_, 2);
v_body_1353_ = lean_ctor_get(v_arg_1345_, 2);
lean_inc_ref(v_body_1353_);
v_binderInfo_1354_ = lean_ctor_get_uint8(v_arg_1345_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_arg_1345_, 3);
v___x_1355_ = l_Lean_Meta_isProp(v_binderType_1352_, v___y_1347_, v___y_1348_, v___y_1349_, v___y_1350_);
if (lean_obj_tag(v___x_1355_) == 0)
{
lean_object* v_a_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1373_; 
v_a_1356_ = lean_ctor_get(v___x_1355_, 0);
v_isSharedCheck_1373_ = !lean_is_exclusive(v___x_1355_);
if (v_isSharedCheck_1373_ == 0)
{
v___x_1358_ = v___x_1355_;
v_isShared_1359_ = v_isSharedCheck_1373_;
goto v_resetjp_1357_;
}
else
{
lean_inc(v_a_1356_);
lean_dec(v___x_1355_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1373_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
uint8_t v___x_1360_; 
v___x_1360_ = l_Lean_Expr_hasLooseBVars(v_body_1353_);
if (v___x_1360_ == 0)
{
uint8_t v___x_1361_; 
v___x_1361_ = lean_unbox(v_a_1356_);
if (v___x_1361_ == 0)
{
lean_del_object(v___x_1358_);
lean_dec(v_a_1356_);
v___y_1306_ = v_body_1353_;
v___y_1307_ = v___y_1348_;
v___y_1308_ = v_binderInfo_1354_;
v___y_1309_ = v_binderType_1352_;
v___y_1310_ = v_binderName_1351_;
v___y_1311_ = v___y_1349_;
v___y_1312_ = v___y_1347_;
v___y_1313_ = v___y_1350_;
goto v___jp_1305_;
}
else
{
lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; uint8_t v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1371_; 
lean_dec(v_binderName_1351_);
lean_inc_ref(v_body_1353_);
v___x_1362_ = l_Lean_mkNot(v_body_1353_);
lean_inc_ref(v_binderType_1352_);
v___x_1363_ = l_Lean_mkAnd(v_binderType_1352_, v___x_1362_);
v___x_1364_ = lean_obj_once(&l_Lean_Meta_Grind_pushNot___redArg___closed__8, &l_Lean_Meta_Grind_pushNot___redArg___closed__8_once, _init_l_Lean_Meta_Grind_pushNot___redArg___closed__8);
v___x_1365_ = l_Lean_mkAppB(v___x_1364_, v_binderType_1352_, v_body_1353_);
v___x_1366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1366_, 0, v___x_1365_);
v___x_1367_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1367_, 0, v___x_1363_);
lean_ctor_set(v___x_1367_, 1, v___x_1366_);
v___x_1368_ = lean_unbox(v_a_1356_);
lean_dec(v_a_1356_);
lean_ctor_set_uint8(v___x_1367_, sizeof(void*)*2, v___x_1368_);
v___x_1369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1369_, 0, v___x_1367_);
if (v_isShared_1359_ == 0)
{
lean_ctor_set(v___x_1358_, 0, v___x_1369_);
v___x_1371_ = v___x_1358_;
goto v_reusejp_1370_;
}
else
{
lean_object* v_reuseFailAlloc_1372_; 
v_reuseFailAlloc_1372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1372_, 0, v___x_1369_);
v___x_1371_ = v_reuseFailAlloc_1372_;
goto v_reusejp_1370_;
}
v_reusejp_1370_:
{
return v___x_1371_;
}
}
}
else
{
lean_del_object(v___x_1358_);
lean_dec(v_a_1356_);
v___y_1306_ = v_body_1353_;
v___y_1307_ = v___y_1348_;
v___y_1308_ = v_binderInfo_1354_;
v___y_1309_ = v_binderType_1352_;
v___y_1310_ = v_binderName_1351_;
v___y_1311_ = v___y_1349_;
v___y_1312_ = v___y_1347_;
v___y_1313_ = v___y_1350_;
goto v___jp_1305_;
}
}
}
else
{
lean_object* v_a_1374_; lean_object* v___x_1376_; uint8_t v_isShared_1377_; uint8_t v_isSharedCheck_1381_; 
lean_dec_ref(v_body_1353_);
lean_dec_ref(v_binderType_1352_);
lean_dec(v_binderName_1351_);
v_a_1374_ = lean_ctor_get(v___x_1355_, 0);
v_isSharedCheck_1381_ = !lean_is_exclusive(v___x_1355_);
if (v_isSharedCheck_1381_ == 0)
{
v___x_1376_ = v___x_1355_;
v_isShared_1377_ = v_isSharedCheck_1381_;
goto v_resetjp_1375_;
}
else
{
lean_inc(v_a_1374_);
lean_dec(v___x_1355_);
v___x_1376_ = lean_box(0);
v_isShared_1377_ = v_isSharedCheck_1381_;
goto v_resetjp_1375_;
}
v_resetjp_1375_:
{
lean_object* v___x_1379_; 
if (v_isShared_1377_ == 0)
{
v___x_1379_ = v___x_1376_;
goto v_reusejp_1378_;
}
else
{
lean_object* v_reuseFailAlloc_1380_; 
v_reuseFailAlloc_1380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1380_, 0, v_a_1374_);
v___x_1379_ = v_reuseFailAlloc_1380_;
goto v_reusejp_1378_;
}
v_reusejp_1378_:
{
return v___x_1379_;
}
}
}
}
else
{
lean_object* v___x_1382_; lean_object* v___x_1384_; 
lean_dec_ref(v_arg_1345_);
v___x_1382_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
if (v_isShared_1299_ == 0)
{
lean_ctor_set(v___x_1298_, 0, v___x_1382_);
v___x_1384_ = v___x_1298_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v___x_1382_);
v___x_1384_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
return v___x_1384_;
}
}
}
}
v___jp_1305_:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
lean_inc_ref(v___y_1306_);
lean_inc_ref_n(v___y_1309_, 3);
lean_inc(v___y_1310_);
v___x_1314_ = l_Lean_mkLambda(v___y_1310_, v___y_1308_, v___y_1309_, v___y_1306_);
v___x_1315_ = l_Lean_mkNot(v___y_1306_);
v___x_1316_ = l_Lean_mkLambda(v___y_1310_, v___y_1308_, v___y_1309_, v___x_1315_);
v___x_1317_ = l_Lean_Meta_getLevel(v___y_1309_, v___y_1312_, v___y_1307_, v___y_1311_, v___y_1313_);
if (lean_obj_tag(v___x_1317_) == 0)
{
lean_object* v_a_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1336_; 
v_a_1318_ = lean_ctor_get(v___x_1317_, 0);
v_isSharedCheck_1336_ = !lean_is_exclusive(v___x_1317_);
if (v_isSharedCheck_1336_ == 0)
{
v___x_1320_ = v___x_1317_;
v_isShared_1321_ = v_isSharedCheck_1336_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_a_1318_);
lean_dec(v___x_1317_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1336_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1334_; 
v___x_1322_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__3));
v___x_1323_ = lean_box(0);
v___x_1324_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1324_, 0, v_a_1318_);
lean_ctor_set(v___x_1324_, 1, v___x_1323_);
lean_inc_ref(v___x_1324_);
v___x_1325_ = l_Lean_mkConst(v___x_1322_, v___x_1324_);
lean_inc_ref(v___y_1309_);
v___x_1326_ = l_Lean_mkAppB(v___x_1325_, v___y_1309_, v___x_1316_);
v___x_1327_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__5));
v___x_1328_ = l_Lean_mkConst(v___x_1327_, v___x_1324_);
v___x_1329_ = l_Lean_mkAppB(v___x_1328_, v___y_1309_, v___x_1314_);
v___x_1330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1330_, 0, v___x_1329_);
v___x_1331_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1331_, 0, v___x_1326_);
lean_ctor_set(v___x_1331_, 1, v___x_1330_);
lean_ctor_set_uint8(v___x_1331_, sizeof(void*)*2, v___x_1304_);
v___x_1332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1332_, 0, v___x_1331_);
if (v_isShared_1321_ == 0)
{
lean_ctor_set(v___x_1320_, 0, v___x_1332_);
v___x_1334_ = v___x_1320_;
goto v_reusejp_1333_;
}
else
{
lean_object* v_reuseFailAlloc_1335_; 
v_reuseFailAlloc_1335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1335_, 0, v___x_1332_);
v___x_1334_ = v_reuseFailAlloc_1335_;
goto v_reusejp_1333_;
}
v_reusejp_1333_:
{
return v___x_1334_;
}
}
}
else
{
lean_object* v_a_1337_; lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1344_; 
lean_dec_ref(v___x_1316_);
lean_dec_ref(v___x_1314_);
lean_dec_ref(v___y_1309_);
v_a_1337_ = lean_ctor_get(v___x_1317_, 0);
v_isSharedCheck_1344_ = !lean_is_exclusive(v___x_1317_);
if (v_isSharedCheck_1344_ == 0)
{
v___x_1339_ = v___x_1317_;
v_isShared_1340_ = v_isSharedCheck_1344_;
goto v_resetjp_1338_;
}
else
{
lean_inc(v_a_1337_);
lean_dec(v___x_1317_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1344_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
lean_object* v___x_1342_; 
if (v_isShared_1340_ == 0)
{
v___x_1342_ = v___x_1339_;
goto v_reusejp_1341_;
}
else
{
lean_object* v_reuseFailAlloc_1343_; 
v_reuseFailAlloc_1343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1343_, 0, v_a_1337_);
v___x_1342_ = v_reuseFailAlloc_1343_;
goto v_reusejp_1341_;
}
v_reusejp_1341_:
{
return v___x_1342_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1654_; lean_object* v___x_1656_; uint8_t v_isShared_1657_; uint8_t v_isSharedCheck_1661_; 
lean_dec_ref(v_e_1286_);
v_a_1654_ = lean_ctor_get(v___x_1295_, 0);
v_isSharedCheck_1661_ = !lean_is_exclusive(v___x_1295_);
if (v_isSharedCheck_1661_ == 0)
{
v___x_1656_ = v___x_1295_;
v_isShared_1657_ = v_isSharedCheck_1661_;
goto v_resetjp_1655_;
}
else
{
lean_inc(v_a_1654_);
lean_dec(v___x_1295_);
v___x_1656_ = lean_box(0);
v_isShared_1657_ = v_isSharedCheck_1661_;
goto v_resetjp_1655_;
}
v_resetjp_1655_:
{
lean_object* v___x_1659_; 
if (v_isShared_1657_ == 0)
{
v___x_1659_ = v___x_1656_;
goto v_reusejp_1658_;
}
else
{
lean_object* v_reuseFailAlloc_1660_; 
v_reuseFailAlloc_1660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1660_, 0, v_a_1654_);
v___x_1659_ = v_reuseFailAlloc_1660_;
goto v_reusejp_1658_;
}
v_reusejp_1658_:
{
return v___x_1659_;
}
}
}
v___jp_1292_:
{
lean_object* v___x_1293_; lean_object* v___x_1294_; 
v___x_1293_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
v___x_1294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1294_, 0, v___x_1293_);
return v___x_1294_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNot___redArg___boxed(lean_object* v_e_1662_, lean_object* v_a_1663_, lean_object* v_a_1664_, lean_object* v_a_1665_, lean_object* v_a_1666_, lean_object* v_a_1667_){
_start:
{
lean_object* v_res_1668_; 
v_res_1668_ = l_Lean_Meta_Grind_pushNot___redArg(v_e_1662_, v_a_1663_, v_a_1664_, v_a_1665_, v_a_1666_);
lean_dec(v_a_1666_);
lean_dec_ref(v_a_1665_);
lean_dec(v_a_1664_);
lean_dec_ref(v_a_1663_);
return v_res_1668_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNot(lean_object* v_e_1669_, lean_object* v_a_1670_, lean_object* v_a_1671_, lean_object* v_a_1672_, lean_object* v_a_1673_, lean_object* v_a_1674_, lean_object* v_a_1675_, lean_object* v_a_1676_){
_start:
{
lean_object* v___x_1678_; 
v___x_1678_ = l_Lean_Meta_Grind_pushNot___redArg(v_e_1669_, v_a_1673_, v_a_1674_, v_a_1675_, v_a_1676_);
return v___x_1678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_pushNot___boxed(lean_object* v_e_1679_, lean_object* v_a_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_, lean_object* v_a_1683_, lean_object* v_a_1684_, lean_object* v_a_1685_, lean_object* v_a_1686_, lean_object* v_a_1687_){
_start:
{
lean_object* v_res_1688_; 
v_res_1688_ = l_Lean_Meta_Grind_pushNot(v_e_1679_, v_a_1680_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_, v_a_1685_, v_a_1686_);
lean_dec(v_a_1686_);
lean_dec_ref(v_a_1685_);
lean_dec(v_a_1684_);
lean_dec_ref(v_a_1683_);
lean_dec(v_a_1682_);
lean_dec_ref(v_a_1681_);
lean_dec(v_a_1680_);
return v_res_1688_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__31_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2103990232____hygCtx___hyg_11_(){
_start:
{
lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; 
v___x_1705_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__31___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2103990232____hygCtx___hyg_11_));
v___x_1706_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__31___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2103990232____hygCtx___hyg_11_));
v___x_1707_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_pushNot___boxed), 9, 0);
v___x_1708_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_1705_, v___x_1706_, v___x_1707_);
return v___x_1708_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__31_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2103990232____hygCtx___hyg_11____boxed(lean_object* v_a_1709_){
_start:
{
lean_object* v_res_1710_; 
v_res_1710_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__31_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2103990232____hygCtx___hyg_11_();
return v_res_1710_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpOr___redArg___closed__2(void){
_start:
{
lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; 
v___x_1716_ = lean_box(0);
v___x_1717_ = ((lean_object*)(l_Lean_Meta_Grind_simpOr___redArg___closed__1));
v___x_1718_ = l_Lean_mkConst(v___x_1717_, v___x_1716_);
return v___x_1718_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpOr___redArg___closed__5(void){
_start:
{
lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; 
v___x_1724_ = lean_box(0);
v___x_1725_ = ((lean_object*)(l_Lean_Meta_Grind_simpOr___redArg___closed__4));
v___x_1726_ = l_Lean_mkConst(v___x_1725_, v___x_1724_);
return v___x_1726_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpOr___redArg___closed__8(void){
_start:
{
lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; 
v___x_1730_ = lean_box(0);
v___x_1731_ = ((lean_object*)(l_Lean_Meta_Grind_simpOr___redArg___closed__7));
v___x_1732_ = l_Lean_mkConst(v___x_1731_, v___x_1730_);
return v___x_1732_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpOr___redArg___closed__11(void){
_start:
{
lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; 
v___x_1736_ = lean_box(0);
v___x_1737_ = ((lean_object*)(l_Lean_Meta_Grind_simpOr___redArg___closed__10));
v___x_1738_ = l_Lean_mkConst(v___x_1737_, v___x_1736_);
return v___x_1738_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpOr___redArg___closed__14(void){
_start:
{
lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; 
v___x_1744_ = lean_box(0);
v___x_1745_ = ((lean_object*)(l_Lean_Meta_Grind_simpOr___redArg___closed__13));
v___x_1746_ = l_Lean_mkConst(v___x_1745_, v___x_1744_);
return v___x_1746_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpOr___redArg___closed__17(void){
_start:
{
lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; 
v___x_1750_ = lean_box(0);
v___x_1751_ = ((lean_object*)(l_Lean_Meta_Grind_simpOr___redArg___closed__16));
v___x_1752_ = l_Lean_mkConst(v___x_1751_, v___x_1750_);
return v___x_1752_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_simpOr___redArg___closed__20(void){
_start:
{
lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; 
v___x_1756_ = lean_box(0);
v___x_1757_ = ((lean_object*)(l_Lean_Meta_Grind_simpOr___redArg___closed__19));
v___x_1758_ = l_Lean_mkConst(v___x_1757_, v___x_1756_);
return v___x_1758_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpOr___redArg(lean_object* v_e_1759_, lean_object* v_a_1760_){
_start:
{
lean_object* v___x_1771_; 
v___x_1771_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_1759_, v_a_1760_);
if (lean_obj_tag(v___x_1771_) == 0)
{
lean_object* v_a_1772_; lean_object* v___x_1773_; uint8_t v___x_1774_; 
v_a_1772_ = lean_ctor_get(v___x_1771_, 0);
lean_inc(v_a_1772_);
lean_dec_ref_known(v___x_1771_, 1);
v___x_1773_ = l_Lean_Expr_cleanupAnnotations(v_a_1772_);
lean_dec(v_a_1772_);
v___x_1774_ = l_Lean_Expr_isApp(v___x_1773_);
if (v___x_1774_ == 0)
{
lean_dec_ref(v___x_1773_);
goto v___jp_1768_;
}
else
{
lean_object* v___x_1775_; uint8_t v___x_1776_; 
v___x_1775_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1773_);
v___x_1776_ = l_Lean_Expr_isApp(v___x_1775_);
if (v___x_1776_ == 0)
{
lean_dec_ref(v___x_1775_);
lean_dec_ref(v___x_1773_);
goto v___jp_1768_;
}
else
{
lean_object* v___x_1777_; lean_object* v___x_1778_; uint8_t v___x_1779_; 
v___x_1777_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1775_);
v___x_1778_ = ((lean_object*)(l_Lean_Meta_Grind_pushNot___redArg___closed__10));
v___x_1779_ = l_Lean_Expr_isConstOf(v___x_1777_, v___x_1778_);
lean_dec_ref(v___x_1777_);
if (v___x_1779_ == 0)
{
lean_dec_ref(v___x_1775_);
lean_dec_ref(v___x_1773_);
goto v___jp_1768_;
}
else
{
lean_object* v_arg_1780_; lean_object* v_arg_1781_; lean_object* v___y_1783_; lean_object* v___x_1849_; 
v_arg_1780_ = lean_ctor_get(v___x_1773_, 1);
lean_inc_ref(v_arg_1780_);
lean_dec_ref(v___x_1773_);
v_arg_1781_ = lean_ctor_get(v___x_1775_, 1);
lean_inc_ref_n(v_arg_1781_, 2);
lean_dec_ref(v___x_1775_);
v___x_1849_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_1781_, v_a_1760_);
if (lean_obj_tag(v___x_1849_) == 0)
{
lean_object* v_a_1850_; lean_object* v___x_1852_; uint8_t v_isShared_1853_; uint8_t v_isSharedCheck_1892_; 
v_a_1850_ = lean_ctor_get(v___x_1849_, 0);
v_isSharedCheck_1892_ = !lean_is_exclusive(v___x_1849_);
if (v_isSharedCheck_1892_ == 0)
{
v___x_1852_ = v___x_1849_;
v_isShared_1853_ = v_isSharedCheck_1892_;
goto v_resetjp_1851_;
}
else
{
lean_inc(v_a_1850_);
lean_dec(v___x_1849_);
v___x_1852_ = lean_box(0);
v_isShared_1853_ = v_isSharedCheck_1892_;
goto v_resetjp_1851_;
}
v_resetjp_1851_:
{
lean_object* v___x_1854_; lean_object* v___x_1855_; uint8_t v___x_1856_; 
v___x_1854_ = l_Lean_Expr_cleanupAnnotations(v_a_1850_);
lean_dec(v_a_1850_);
v___x_1855_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__21));
v___x_1856_ = l_Lean_Expr_isConstOf(v___x_1854_, v___x_1855_);
if (v___x_1856_ == 0)
{
lean_object* v___x_1857_; uint8_t v___x_1858_; 
v___x_1857_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__18));
v___x_1858_ = l_Lean_Expr_isConstOf(v___x_1854_, v___x_1857_);
if (v___x_1858_ == 0)
{
uint8_t v___x_1859_; 
v___x_1859_ = l_Lean_Expr_isApp(v___x_1854_);
if (v___x_1859_ == 0)
{
lean_dec_ref(v___x_1854_);
lean_del_object(v___x_1852_);
v___y_1783_ = v_a_1760_;
goto v___jp_1782_;
}
else
{
lean_object* v___x_1860_; uint8_t v___x_1861_; 
v___x_1860_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1854_);
v___x_1861_ = l_Lean_Expr_isApp(v___x_1860_);
if (v___x_1861_ == 0)
{
lean_dec_ref(v___x_1860_);
lean_dec_ref(v___x_1854_);
lean_del_object(v___x_1852_);
v___y_1783_ = v_a_1760_;
goto v___jp_1782_;
}
else
{
lean_object* v___x_1862_; uint8_t v___x_1863_; 
v___x_1862_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1860_);
v___x_1863_ = l_Lean_Expr_isConstOf(v___x_1862_, v___x_1778_);
lean_dec_ref(v___x_1862_);
if (v___x_1863_ == 0)
{
lean_dec_ref(v___x_1860_);
lean_dec_ref(v___x_1854_);
lean_del_object(v___x_1852_);
v___y_1783_ = v_a_1760_;
goto v___jp_1782_;
}
else
{
lean_object* v_arg_1864_; lean_object* v_arg_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1874_; 
lean_dec_ref(v_arg_1781_);
v_arg_1864_ = lean_ctor_get(v___x_1854_, 1);
lean_inc_ref_n(v_arg_1864_, 2);
lean_dec_ref(v___x_1854_);
v_arg_1865_ = lean_ctor_get(v___x_1860_, 1);
lean_inc_ref_n(v_arg_1865_, 2);
lean_dec_ref(v___x_1860_);
lean_inc_ref(v_arg_1780_);
v___x_1866_ = l_Lean_mkOr(v_arg_1864_, v_arg_1780_);
v___x_1867_ = l_Lean_mkOr(v_arg_1865_, v___x_1866_);
v___x_1868_ = lean_obj_once(&l_Lean_Meta_Grind_simpOr___redArg___closed__14, &l_Lean_Meta_Grind_simpOr___redArg___closed__14_once, _init_l_Lean_Meta_Grind_simpOr___redArg___closed__14);
v___x_1869_ = l_Lean_mkApp3(v___x_1868_, v_arg_1865_, v_arg_1864_, v_arg_1780_);
v___x_1870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1870_, 0, v___x_1869_);
v___x_1871_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1871_, 0, v___x_1867_);
lean_ctor_set(v___x_1871_, 1, v___x_1870_);
lean_ctor_set_uint8(v___x_1871_, sizeof(void*)*2, v___x_1863_);
v___x_1872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1872_, 0, v___x_1871_);
if (v_isShared_1853_ == 0)
{
lean_ctor_set(v___x_1852_, 0, v___x_1872_);
v___x_1874_ = v___x_1852_;
goto v_reusejp_1873_;
}
else
{
lean_object* v_reuseFailAlloc_1875_; 
v_reuseFailAlloc_1875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1875_, 0, v___x_1872_);
v___x_1874_ = v_reuseFailAlloc_1875_;
goto v_reusejp_1873_;
}
v_reusejp_1873_:
{
return v___x_1874_;
}
}
}
}
}
else
{
lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1882_; 
lean_dec_ref(v___x_1854_);
v___x_1876_ = lean_obj_once(&l_Lean_Meta_Grind_simpOr___redArg___closed__17, &l_Lean_Meta_Grind_simpOr___redArg___closed__17_once, _init_l_Lean_Meta_Grind_simpOr___redArg___closed__17);
v___x_1877_ = l_Lean_Expr_app___override(v___x_1876_, v_arg_1780_);
v___x_1878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1878_, 0, v___x_1877_);
v___x_1879_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1879_, 0, v_arg_1781_);
lean_ctor_set(v___x_1879_, 1, v___x_1878_);
lean_ctor_set_uint8(v___x_1879_, sizeof(void*)*2, v___x_1858_);
v___x_1880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1880_, 0, v___x_1879_);
if (v_isShared_1853_ == 0)
{
lean_ctor_set(v___x_1852_, 0, v___x_1880_);
v___x_1882_ = v___x_1852_;
goto v_reusejp_1881_;
}
else
{
lean_object* v_reuseFailAlloc_1883_; 
v_reuseFailAlloc_1883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1883_, 0, v___x_1880_);
v___x_1882_ = v_reuseFailAlloc_1883_;
goto v_reusejp_1881_;
}
v_reusejp_1881_:
{
return v___x_1882_;
}
}
}
else
{
lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1890_; 
lean_dec_ref(v___x_1854_);
lean_dec_ref(v_arg_1781_);
v___x_1884_ = lean_obj_once(&l_Lean_Meta_Grind_simpOr___redArg___closed__20, &l_Lean_Meta_Grind_simpOr___redArg___closed__20_once, _init_l_Lean_Meta_Grind_simpOr___redArg___closed__20);
lean_inc_ref(v_arg_1780_);
v___x_1885_ = l_Lean_Expr_app___override(v___x_1884_, v_arg_1780_);
v___x_1886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1886_, 0, v___x_1885_);
v___x_1887_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1887_, 0, v_arg_1780_);
lean_ctor_set(v___x_1887_, 1, v___x_1886_);
lean_ctor_set_uint8(v___x_1887_, sizeof(void*)*2, v___x_1856_);
v___x_1888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1888_, 0, v___x_1887_);
if (v_isShared_1853_ == 0)
{
lean_ctor_set(v___x_1852_, 0, v___x_1888_);
v___x_1890_ = v___x_1852_;
goto v_reusejp_1889_;
}
else
{
lean_object* v_reuseFailAlloc_1891_; 
v_reuseFailAlloc_1891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1891_, 0, v___x_1888_);
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
lean_object* v_a_1893_; lean_object* v___x_1895_; uint8_t v_isShared_1896_; uint8_t v_isSharedCheck_1900_; 
lean_dec_ref(v_arg_1781_);
lean_dec_ref(v_arg_1780_);
v_a_1893_ = lean_ctor_get(v___x_1849_, 0);
v_isSharedCheck_1900_ = !lean_is_exclusive(v___x_1849_);
if (v_isSharedCheck_1900_ == 0)
{
v___x_1895_ = v___x_1849_;
v_isShared_1896_ = v_isSharedCheck_1900_;
goto v_resetjp_1894_;
}
else
{
lean_inc(v_a_1893_);
lean_dec(v___x_1849_);
v___x_1895_ = lean_box(0);
v_isShared_1896_ = v_isSharedCheck_1900_;
goto v_resetjp_1894_;
}
v_resetjp_1894_:
{
lean_object* v___x_1898_; 
if (v_isShared_1896_ == 0)
{
v___x_1898_ = v___x_1895_;
goto v_reusejp_1897_;
}
else
{
lean_object* v_reuseFailAlloc_1899_; 
v_reuseFailAlloc_1899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1899_, 0, v_a_1893_);
v___x_1898_ = v_reuseFailAlloc_1899_;
goto v_reusejp_1897_;
}
v_reusejp_1897_:
{
return v___x_1898_;
}
}
}
v___jp_1782_:
{
lean_object* v___x_1784_; 
lean_inc_ref(v_arg_1780_);
v___x_1784_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_1780_, v___y_1783_);
if (lean_obj_tag(v___x_1784_) == 0)
{
lean_object* v_a_1785_; lean_object* v___x_1787_; uint8_t v_isShared_1788_; uint8_t v_isSharedCheck_1840_; 
v_a_1785_ = lean_ctor_get(v___x_1784_, 0);
v_isSharedCheck_1840_ = !lean_is_exclusive(v___x_1784_);
if (v_isSharedCheck_1840_ == 0)
{
v___x_1787_ = v___x_1784_;
v_isShared_1788_ = v_isSharedCheck_1840_;
goto v_resetjp_1786_;
}
else
{
lean_inc(v_a_1785_);
lean_dec(v___x_1784_);
v___x_1787_ = lean_box(0);
v_isShared_1788_ = v_isSharedCheck_1840_;
goto v_resetjp_1786_;
}
v_resetjp_1786_:
{
lean_object* v___x_1789_; lean_object* v___x_1790_; uint8_t v___x_1791_; 
v___x_1789_ = l_Lean_Expr_cleanupAnnotations(v_a_1785_);
lean_dec(v_a_1785_);
v___x_1790_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__21));
v___x_1791_ = l_Lean_Expr_isConstOf(v___x_1789_, v___x_1790_);
if (v___x_1791_ == 0)
{
lean_object* v___x_1792_; uint8_t v___x_1793_; 
v___x_1792_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__18));
v___x_1793_ = l_Lean_Expr_isConstOf(v___x_1789_, v___x_1792_);
if (v___x_1793_ == 0)
{
uint8_t v___x_1794_; 
lean_dec_ref(v_arg_1780_);
v___x_1794_ = l_Lean_Expr_isApp(v___x_1789_);
if (v___x_1794_ == 0)
{
lean_dec_ref(v___x_1789_);
lean_del_object(v___x_1787_);
lean_dec_ref(v_arg_1781_);
goto v___jp_1765_;
}
else
{
lean_object* v___x_1795_; uint8_t v___x_1796_; 
v___x_1795_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1789_);
v___x_1796_ = l_Lean_Expr_isApp(v___x_1795_);
if (v___x_1796_ == 0)
{
lean_dec_ref(v___x_1795_);
lean_dec_ref(v___x_1789_);
lean_del_object(v___x_1787_);
lean_dec_ref(v_arg_1781_);
goto v___jp_1765_;
}
else
{
lean_object* v___x_1797_; uint8_t v___x_1798_; 
v___x_1797_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1795_);
v___x_1798_ = l_Lean_Expr_isConstOf(v___x_1797_, v___x_1778_);
lean_dec_ref(v___x_1797_);
if (v___x_1798_ == 0)
{
lean_dec_ref(v___x_1795_);
lean_dec_ref(v___x_1789_);
lean_del_object(v___x_1787_);
lean_dec_ref(v_arg_1781_);
goto v___jp_1765_;
}
else
{
uint8_t v___x_1799_; 
v___x_1799_ = l_Lean_Expr_isForall(v_arg_1781_);
if (v___x_1799_ == 0)
{
lean_object* v_arg_1800_; lean_object* v_arg_1801_; uint8_t v___x_1802_; 
v_arg_1800_ = lean_ctor_get(v___x_1789_, 1);
lean_inc_ref(v_arg_1800_);
lean_dec_ref(v___x_1789_);
v_arg_1801_ = lean_ctor_get(v___x_1795_, 1);
lean_inc_ref(v_arg_1801_);
lean_dec_ref(v___x_1795_);
v___x_1802_ = l_Lean_Expr_isForall(v_arg_1801_);
if (v___x_1802_ == 0)
{
uint8_t v___x_1803_; 
v___x_1803_ = l_Lean_Expr_isForall(v_arg_1800_);
if (v___x_1803_ == 0)
{
lean_dec_ref(v_arg_1801_);
lean_dec_ref(v_arg_1800_);
lean_del_object(v___x_1787_);
lean_dec_ref(v_arg_1781_);
goto v___jp_1762_;
}
else
{
lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1812_; 
lean_inc_ref(v_arg_1781_);
lean_inc_ref(v_arg_1801_);
v___x_1804_ = l_Lean_mkOr(v_arg_1801_, v_arg_1781_);
lean_inc_ref(v_arg_1800_);
v___x_1805_ = l_Lean_mkOr(v_arg_1800_, v___x_1804_);
v___x_1806_ = lean_obj_once(&l_Lean_Meta_Grind_simpOr___redArg___closed__2, &l_Lean_Meta_Grind_simpOr___redArg___closed__2_once, _init_l_Lean_Meta_Grind_simpOr___redArg___closed__2);
v___x_1807_ = l_Lean_mkApp3(v___x_1806_, v_arg_1781_, v_arg_1801_, v_arg_1800_);
v___x_1808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1808_, 0, v___x_1807_);
v___x_1809_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1809_, 0, v___x_1805_);
lean_ctor_set(v___x_1809_, 1, v___x_1808_);
lean_ctor_set_uint8(v___x_1809_, sizeof(void*)*2, v___x_1803_);
v___x_1810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1810_, 0, v___x_1809_);
if (v_isShared_1788_ == 0)
{
lean_ctor_set(v___x_1787_, 0, v___x_1810_);
v___x_1812_ = v___x_1787_;
goto v_reusejp_1811_;
}
else
{
lean_object* v_reuseFailAlloc_1813_; 
v_reuseFailAlloc_1813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1813_, 0, v___x_1810_);
v___x_1812_ = v_reuseFailAlloc_1813_;
goto v_reusejp_1811_;
}
v_reusejp_1811_:
{
return v___x_1812_;
}
}
}
else
{
lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1822_; 
lean_inc_ref(v_arg_1800_);
lean_inc_ref(v_arg_1781_);
v___x_1814_ = l_Lean_mkOr(v_arg_1781_, v_arg_1800_);
lean_inc_ref(v_arg_1801_);
v___x_1815_ = l_Lean_mkOr(v_arg_1801_, v___x_1814_);
v___x_1816_ = lean_obj_once(&l_Lean_Meta_Grind_simpOr___redArg___closed__5, &l_Lean_Meta_Grind_simpOr___redArg___closed__5_once, _init_l_Lean_Meta_Grind_simpOr___redArg___closed__5);
v___x_1817_ = l_Lean_mkApp3(v___x_1816_, v_arg_1781_, v_arg_1801_, v_arg_1800_);
v___x_1818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1818_, 0, v___x_1817_);
v___x_1819_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1819_, 0, v___x_1815_);
lean_ctor_set(v___x_1819_, 1, v___x_1818_);
lean_ctor_set_uint8(v___x_1819_, sizeof(void*)*2, v___x_1802_);
v___x_1820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1820_, 0, v___x_1819_);
if (v_isShared_1788_ == 0)
{
lean_ctor_set(v___x_1787_, 0, v___x_1820_);
v___x_1822_ = v___x_1787_;
goto v_reusejp_1821_;
}
else
{
lean_object* v_reuseFailAlloc_1823_; 
v_reuseFailAlloc_1823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1823_, 0, v___x_1820_);
v___x_1822_ = v_reuseFailAlloc_1823_;
goto v_reusejp_1821_;
}
v_reusejp_1821_:
{
return v___x_1822_;
}
}
}
else
{
lean_dec_ref(v___x_1795_);
lean_dec_ref(v___x_1789_);
lean_del_object(v___x_1787_);
lean_dec_ref(v_arg_1781_);
goto v___jp_1762_;
}
}
}
}
}
else
{
lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1830_; 
lean_dec_ref(v___x_1789_);
v___x_1824_ = lean_obj_once(&l_Lean_Meta_Grind_simpOr___redArg___closed__8, &l_Lean_Meta_Grind_simpOr___redArg___closed__8_once, _init_l_Lean_Meta_Grind_simpOr___redArg___closed__8);
v___x_1825_ = l_Lean_Expr_app___override(v___x_1824_, v_arg_1781_);
v___x_1826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1826_, 0, v___x_1825_);
v___x_1827_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1827_, 0, v_arg_1780_);
lean_ctor_set(v___x_1827_, 1, v___x_1826_);
lean_ctor_set_uint8(v___x_1827_, sizeof(void*)*2, v___x_1793_);
v___x_1828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1828_, 0, v___x_1827_);
if (v_isShared_1788_ == 0)
{
lean_ctor_set(v___x_1787_, 0, v___x_1828_);
v___x_1830_ = v___x_1787_;
goto v_reusejp_1829_;
}
else
{
lean_object* v_reuseFailAlloc_1831_; 
v_reuseFailAlloc_1831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1831_, 0, v___x_1828_);
v___x_1830_ = v_reuseFailAlloc_1831_;
goto v_reusejp_1829_;
}
v_reusejp_1829_:
{
return v___x_1830_;
}
}
}
else
{
lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1838_; 
lean_dec_ref(v___x_1789_);
lean_dec_ref(v_arg_1780_);
v___x_1832_ = lean_obj_once(&l_Lean_Meta_Grind_simpOr___redArg___closed__11, &l_Lean_Meta_Grind_simpOr___redArg___closed__11_once, _init_l_Lean_Meta_Grind_simpOr___redArg___closed__11);
lean_inc_ref(v_arg_1781_);
v___x_1833_ = l_Lean_Expr_app___override(v___x_1832_, v_arg_1781_);
v___x_1834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1834_, 0, v___x_1833_);
v___x_1835_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1835_, 0, v_arg_1781_);
lean_ctor_set(v___x_1835_, 1, v___x_1834_);
lean_ctor_set_uint8(v___x_1835_, sizeof(void*)*2, v___x_1791_);
v___x_1836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1836_, 0, v___x_1835_);
if (v_isShared_1788_ == 0)
{
lean_ctor_set(v___x_1787_, 0, v___x_1836_);
v___x_1838_ = v___x_1787_;
goto v_reusejp_1837_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v___x_1836_);
v___x_1838_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1837_;
}
v_reusejp_1837_:
{
return v___x_1838_;
}
}
}
}
else
{
lean_object* v_a_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1848_; 
lean_dec_ref(v_arg_1781_);
lean_dec_ref(v_arg_1780_);
v_a_1841_ = lean_ctor_get(v___x_1784_, 0);
v_isSharedCheck_1848_ = !lean_is_exclusive(v___x_1784_);
if (v_isSharedCheck_1848_ == 0)
{
v___x_1843_ = v___x_1784_;
v_isShared_1844_ = v_isSharedCheck_1848_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_a_1841_);
lean_dec(v___x_1784_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1848_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
lean_object* v___x_1846_; 
if (v_isShared_1844_ == 0)
{
v___x_1846_ = v___x_1843_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1847_; 
v_reuseFailAlloc_1847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1847_, 0, v_a_1841_);
v___x_1846_ = v_reuseFailAlloc_1847_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
return v___x_1846_;
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
lean_object* v_a_1901_; lean_object* v___x_1903_; uint8_t v_isShared_1904_; uint8_t v_isSharedCheck_1908_; 
v_a_1901_ = lean_ctor_get(v___x_1771_, 0);
v_isSharedCheck_1908_ = !lean_is_exclusive(v___x_1771_);
if (v_isSharedCheck_1908_ == 0)
{
v___x_1903_ = v___x_1771_;
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
else
{
lean_inc(v_a_1901_);
lean_dec(v___x_1771_);
v___x_1903_ = lean_box(0);
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
v_resetjp_1902_:
{
lean_object* v___x_1906_; 
if (v_isShared_1904_ == 0)
{
v___x_1906_ = v___x_1903_;
goto v_reusejp_1905_;
}
else
{
lean_object* v_reuseFailAlloc_1907_; 
v_reuseFailAlloc_1907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1907_, 0, v_a_1901_);
v___x_1906_ = v_reuseFailAlloc_1907_;
goto v_reusejp_1905_;
}
v_reusejp_1905_:
{
return v___x_1906_;
}
}
}
v___jp_1762_:
{
lean_object* v___x_1763_; lean_object* v___x_1764_; 
v___x_1763_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
v___x_1764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1764_, 0, v___x_1763_);
return v___x_1764_;
}
v___jp_1765_:
{
lean_object* v___x_1766_; lean_object* v___x_1767_; 
v___x_1766_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
v___x_1767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1767_, 0, v___x_1766_);
return v___x_1767_;
}
v___jp_1768_:
{
lean_object* v___x_1769_; lean_object* v___x_1770_; 
v___x_1769_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
v___x_1770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1770_, 0, v___x_1769_);
return v___x_1770_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpOr___redArg___boxed(lean_object* v_e_1909_, lean_object* v_a_1910_, lean_object* v_a_1911_){
_start:
{
lean_object* v_res_1912_; 
v_res_1912_ = l_Lean_Meta_Grind_simpOr___redArg(v_e_1909_, v_a_1910_);
lean_dec(v_a_1910_);
return v_res_1912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpOr(lean_object* v_e_1913_, lean_object* v_a_1914_, lean_object* v_a_1915_, lean_object* v_a_1916_, lean_object* v_a_1917_, lean_object* v_a_1918_, lean_object* v_a_1919_, lean_object* v_a_1920_){
_start:
{
lean_object* v___x_1922_; 
v___x_1922_ = l_Lean_Meta_Grind_simpOr___redArg(v_e_1913_, v_a_1918_);
return v___x_1922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_simpOr___boxed(lean_object* v_e_1923_, lean_object* v_a_1924_, lean_object* v_a_1925_, lean_object* v_a_1926_, lean_object* v_a_1927_, lean_object* v_a_1928_, lean_object* v_a_1929_, lean_object* v_a_1930_, lean_object* v_a_1931_){
_start:
{
lean_object* v_res_1932_; 
v_res_1932_ = l_Lean_Meta_Grind_simpOr(v_e_1923_, v_a_1924_, v_a_1925_, v_a_1926_, v_a_1927_, v_a_1928_, v_a_1929_, v_a_1930_);
lean_dec(v_a_1930_);
lean_dec_ref(v_a_1929_);
lean_dec(v_a_1928_);
lean_dec_ref(v_a_1927_);
lean_dec(v_a_1926_);
lean_dec_ref(v_a_1925_);
lean_dec(v_a_1924_);
return v_res_1932_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__36_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12_(){
_start:
{
lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; 
v___x_1950_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__36___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12_));
v___x_1951_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__36___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12_));
v___x_1952_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_simpOr___boxed), 9, 0);
v___x_1953_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_1950_, v___x_1951_, v___x_1952_);
return v___x_1953_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__36_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12____boxed(lean_object* v_a_1954_){
_start:
{
lean_object* v_res_1955_; 
v_res_1955_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__36_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12_();
return v_res_1955_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_reduceCtorEqCheap___lam__0(uint8_t v___x_1956_, uint8_t v___x_1957_, lean_object* v_h_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_){
_start:
{
lean_object* v___x_1967_; lean_object* v___y_1969_; lean_object* v___x_1989_; 
v___x_1967_ = lean_obj_once(&l_Lean_Meta_Grind_simpEq___redArg___closed__22, &l_Lean_Meta_Grind_simpEq___redArg___closed__22_once, _init_l_Lean_Meta_Grind_simpEq___redArg___closed__22);
lean_inc_ref(v_h_1958_);
v___x_1989_ = l_Lean_Meta_mkNoConfusion(v___x_1967_, v_h_1958_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
if (lean_obj_tag(v___x_1989_) == 0)
{
lean_object* v_a_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; uint8_t v___x_1994_; lean_object* v___x_1995_; 
v_a_1990_ = lean_ctor_get(v___x_1989_, 0);
lean_inc(v_a_1990_);
lean_dec_ref_known(v___x_1989_, 1);
v___x_1991_ = lean_unsigned_to_nat(1u);
v___x_1992_ = lean_mk_empty_array_with_capacity(v___x_1991_);
v___x_1993_ = lean_array_push(v___x_1992_, v_h_1958_);
v___x_1994_ = 1;
v___x_1995_ = l_Lean_Meta_mkLambdaFVars(v___x_1993_, v_a_1990_, v___x_1957_, v___x_1956_, v___x_1957_, v___x_1956_, v___x_1994_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
lean_dec_ref(v___x_1993_);
if (lean_obj_tag(v___x_1995_) == 0)
{
lean_object* v_a_1996_; lean_object* v___x_1997_; uint8_t v_transparency_1998_; uint8_t v___x_1999_; uint8_t v___x_2000_; 
v_a_1996_ = lean_ctor_get(v___x_1995_, 0);
lean_inc(v_a_1996_);
lean_dec_ref_known(v___x_1995_, 1);
v___x_1997_ = l_Lean_Meta_Context_config(v___y_1962_);
v_transparency_1998_ = lean_ctor_get_uint8(v___x_1997_, 9);
lean_dec_ref(v___x_1997_);
v___x_1999_ = 1;
v___x_2000_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1998_, v___x_1999_);
if (v___x_2000_ == 0)
{
lean_object* v_keyedConfig_2001_; uint8_t v_trackZetaDelta_2002_; lean_object* v_zetaDeltaSet_2003_; lean_object* v_lctx_2004_; lean_object* v_localInstances_2005_; lean_object* v_defEqCtx_x3f_2006_; lean_object* v_synthPendingDepth_2007_; lean_object* v_customCanUnfoldPredicate_x3f_2008_; uint8_t v_univApprox_2009_; uint8_t v_inTypeClassResolution_2010_; uint8_t v_cacheInferType_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; 
v_keyedConfig_2001_ = lean_ctor_get(v___y_1962_, 0);
v_trackZetaDelta_2002_ = lean_ctor_get_uint8(v___y_1962_, sizeof(void*)*7);
v_zetaDeltaSet_2003_ = lean_ctor_get(v___y_1962_, 1);
v_lctx_2004_ = lean_ctor_get(v___y_1962_, 2);
v_localInstances_2005_ = lean_ctor_get(v___y_1962_, 3);
v_defEqCtx_x3f_2006_ = lean_ctor_get(v___y_1962_, 4);
v_synthPendingDepth_2007_ = lean_ctor_get(v___y_1962_, 5);
v_customCanUnfoldPredicate_x3f_2008_ = lean_ctor_get(v___y_1962_, 6);
v_univApprox_2009_ = lean_ctor_get_uint8(v___y_1962_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2010_ = lean_ctor_get_uint8(v___y_1962_, sizeof(void*)*7 + 2);
v_cacheInferType_2011_ = lean_ctor_get_uint8(v___y_1962_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2001_);
v___x_2012_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1999_, v_keyedConfig_2001_);
lean_inc(v_customCanUnfoldPredicate_x3f_2008_);
lean_inc(v_synthPendingDepth_2007_);
lean_inc(v_defEqCtx_x3f_2006_);
lean_inc_ref(v_localInstances_2005_);
lean_inc_ref(v_lctx_2004_);
lean_inc(v_zetaDeltaSet_2003_);
v___x_2013_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2013_, 0, v___x_2012_);
lean_ctor_set(v___x_2013_, 1, v_zetaDeltaSet_2003_);
lean_ctor_set(v___x_2013_, 2, v_lctx_2004_);
lean_ctor_set(v___x_2013_, 3, v_localInstances_2005_);
lean_ctor_set(v___x_2013_, 4, v_defEqCtx_x3f_2006_);
lean_ctor_set(v___x_2013_, 5, v_synthPendingDepth_2007_);
lean_ctor_set(v___x_2013_, 6, v_customCanUnfoldPredicate_x3f_2008_);
lean_ctor_set_uint8(v___x_2013_, sizeof(void*)*7, v_trackZetaDelta_2002_);
lean_ctor_set_uint8(v___x_2013_, sizeof(void*)*7 + 1, v_univApprox_2009_);
lean_ctor_set_uint8(v___x_2013_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2010_);
lean_ctor_set_uint8(v___x_2013_, sizeof(void*)*7 + 3, v_cacheInferType_2011_);
v___x_2014_ = l_Lean_Meta_mkEqFalse_x27(v_a_1996_, v___x_2013_, v___y_1963_, v___y_1964_, v___y_1965_);
lean_dec_ref_known(v___x_2013_, 7);
v___y_1969_ = v___x_2014_;
goto v___jp_1968_;
}
else
{
lean_object* v___x_2015_; 
v___x_2015_ = l_Lean_Meta_mkEqFalse_x27(v_a_1996_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
v___y_1969_ = v___x_2015_;
goto v___jp_1968_;
}
}
else
{
lean_object* v_a_2016_; lean_object* v___x_2018_; uint8_t v_isShared_2019_; uint8_t v_isSharedCheck_2023_; 
v_a_2016_ = lean_ctor_get(v___x_1995_, 0);
v_isSharedCheck_2023_ = !lean_is_exclusive(v___x_1995_);
if (v_isSharedCheck_2023_ == 0)
{
v___x_2018_ = v___x_1995_;
v_isShared_2019_ = v_isSharedCheck_2023_;
goto v_resetjp_2017_;
}
else
{
lean_inc(v_a_2016_);
lean_dec(v___x_1995_);
v___x_2018_ = lean_box(0);
v_isShared_2019_ = v_isSharedCheck_2023_;
goto v_resetjp_2017_;
}
v_resetjp_2017_:
{
lean_object* v___x_2021_; 
if (v_isShared_2019_ == 0)
{
v___x_2021_ = v___x_2018_;
goto v_reusejp_2020_;
}
else
{
lean_object* v_reuseFailAlloc_2022_; 
v_reuseFailAlloc_2022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2022_, 0, v_a_2016_);
v___x_2021_ = v_reuseFailAlloc_2022_;
goto v_reusejp_2020_;
}
v_reusejp_2020_:
{
return v___x_2021_;
}
}
}
}
else
{
lean_object* v_a_2024_; lean_object* v___x_2026_; uint8_t v_isShared_2027_; uint8_t v_isSharedCheck_2031_; 
lean_dec_ref(v_h_1958_);
v_a_2024_ = lean_ctor_get(v___x_1989_, 0);
v_isSharedCheck_2031_ = !lean_is_exclusive(v___x_1989_);
if (v_isSharedCheck_2031_ == 0)
{
v___x_2026_ = v___x_1989_;
v_isShared_2027_ = v_isSharedCheck_2031_;
goto v_resetjp_2025_;
}
else
{
lean_inc(v_a_2024_);
lean_dec(v___x_1989_);
v___x_2026_ = lean_box(0);
v_isShared_2027_ = v_isSharedCheck_2031_;
goto v_resetjp_2025_;
}
v_resetjp_2025_:
{
lean_object* v___x_2029_; 
if (v_isShared_2027_ == 0)
{
v___x_2029_ = v___x_2026_;
goto v_reusejp_2028_;
}
else
{
lean_object* v_reuseFailAlloc_2030_; 
v_reuseFailAlloc_2030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2030_, 0, v_a_2024_);
v___x_2029_ = v_reuseFailAlloc_2030_;
goto v_reusejp_2028_;
}
v_reusejp_2028_:
{
return v___x_2029_;
}
}
}
v___jp_1968_:
{
if (lean_obj_tag(v___y_1969_) == 0)
{
lean_object* v_a_1970_; lean_object* v___x_1972_; uint8_t v_isShared_1973_; uint8_t v_isSharedCheck_1980_; 
v_a_1970_ = lean_ctor_get(v___y_1969_, 0);
v_isSharedCheck_1980_ = !lean_is_exclusive(v___y_1969_);
if (v_isSharedCheck_1980_ == 0)
{
v___x_1972_ = v___y_1969_;
v_isShared_1973_ = v_isSharedCheck_1980_;
goto v_resetjp_1971_;
}
else
{
lean_inc(v_a_1970_);
lean_dec(v___y_1969_);
v___x_1972_ = lean_box(0);
v_isShared_1973_ = v_isSharedCheck_1980_;
goto v_resetjp_1971_;
}
v_resetjp_1971_:
{
lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1978_; 
v___x_1974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1974_, 0, v_a_1970_);
v___x_1975_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1975_, 0, v___x_1967_);
lean_ctor_set(v___x_1975_, 1, v___x_1974_);
lean_ctor_set_uint8(v___x_1975_, sizeof(void*)*2, v___x_1956_);
v___x_1976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1976_, 0, v___x_1975_);
if (v_isShared_1973_ == 0)
{
lean_ctor_set(v___x_1972_, 0, v___x_1976_);
v___x_1978_ = v___x_1972_;
goto v_reusejp_1977_;
}
else
{
lean_object* v_reuseFailAlloc_1979_; 
v_reuseFailAlloc_1979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1979_, 0, v___x_1976_);
v___x_1978_ = v_reuseFailAlloc_1979_;
goto v_reusejp_1977_;
}
v_reusejp_1977_:
{
return v___x_1978_;
}
}
}
else
{
lean_object* v_a_1981_; lean_object* v___x_1983_; uint8_t v_isShared_1984_; uint8_t v_isSharedCheck_1988_; 
v_a_1981_ = lean_ctor_get(v___y_1969_, 0);
v_isSharedCheck_1988_ = !lean_is_exclusive(v___y_1969_);
if (v_isSharedCheck_1988_ == 0)
{
v___x_1983_ = v___y_1969_;
v_isShared_1984_ = v_isSharedCheck_1988_;
goto v_resetjp_1982_;
}
else
{
lean_inc(v_a_1981_);
lean_dec(v___y_1969_);
v___x_1983_ = lean_box(0);
v_isShared_1984_ = v_isSharedCheck_1988_;
goto v_resetjp_1982_;
}
v_resetjp_1982_:
{
lean_object* v___x_1986_; 
if (v_isShared_1984_ == 0)
{
v___x_1986_ = v___x_1983_;
goto v_reusejp_1985_;
}
else
{
lean_object* v_reuseFailAlloc_1987_; 
v_reuseFailAlloc_1987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1987_, 0, v_a_1981_);
v___x_1986_ = v_reuseFailAlloc_1987_;
goto v_reusejp_1985_;
}
v_reusejp_1985_:
{
return v___x_1986_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_reduceCtorEqCheap___lam__0___boxed(lean_object* v___x_2032_, lean_object* v___x_2033_, lean_object* v_h_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_){
_start:
{
uint8_t v___x_12794__boxed_2043_; uint8_t v___x_12795__boxed_2044_; lean_object* v_res_2045_; 
v___x_12794__boxed_2043_ = lean_unbox(v___x_2032_);
v___x_12795__boxed_2044_ = lean_unbox(v___x_2033_);
v_res_2045_ = l_Lean_Meta_Grind_reduceCtorEqCheap___lam__0(v___x_12794__boxed_2043_, v___x_12795__boxed_2044_, v_h_2034_, v___y_2035_, v___y_2036_, v___y_2037_, v___y_2038_, v___y_2039_, v___y_2040_, v___y_2041_);
lean_dec(v___y_2041_);
lean_dec_ref(v___y_2040_);
lean_dec(v___y_2039_);
lean_dec_ref(v___y_2038_);
lean_dec(v___y_2037_);
lean_dec_ref(v___y_2036_);
lean_dec(v___y_2035_);
return v_res_2045_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0___redArg___lam__0(lean_object* v_k_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v_b_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_){
_start:
{
lean_object* v___x_2056_; 
lean_inc(v___y_2054_);
lean_inc_ref(v___y_2053_);
lean_inc(v___y_2052_);
lean_inc_ref(v___y_2051_);
lean_inc(v___y_2049_);
lean_inc_ref(v___y_2048_);
lean_inc(v___y_2047_);
v___x_2056_ = lean_apply_9(v_k_2046_, v_b_2050_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2051_, v___y_2052_, v___y_2053_, v___y_2054_, lean_box(0));
return v___x_2056_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v_b_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_){
_start:
{
lean_object* v_res_2067_; 
v_res_2067_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0___redArg___lam__0(v_k_2057_, v___y_2058_, v___y_2059_, v___y_2060_, v_b_2061_, v___y_2062_, v___y_2063_, v___y_2064_, v___y_2065_);
lean_dec(v___y_2065_);
lean_dec_ref(v___y_2064_);
lean_dec(v___y_2063_);
lean_dec_ref(v___y_2062_);
lean_dec(v___y_2060_);
lean_dec_ref(v___y_2059_);
lean_dec(v___y_2058_);
return v_res_2067_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0___redArg(lean_object* v_name_2068_, uint8_t v_bi_2069_, lean_object* v_type_2070_, lean_object* v_k_2071_, uint8_t v_kind_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_){
_start:
{
lean_object* v___f_2081_; lean_object* v___x_2082_; 
lean_inc(v___y_2075_);
lean_inc_ref(v___y_2074_);
lean_inc(v___y_2073_);
v___f_2081_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_2081_, 0, v_k_2071_);
lean_closure_set(v___f_2081_, 1, v___y_2073_);
lean_closure_set(v___f_2081_, 2, v___y_2074_);
lean_closure_set(v___f_2081_, 3, v___y_2075_);
v___x_2082_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_2068_, v_bi_2069_, v_type_2070_, v___f_2081_, v_kind_2072_, v___y_2076_, v___y_2077_, v___y_2078_, v___y_2079_);
if (lean_obj_tag(v___x_2082_) == 0)
{
return v___x_2082_;
}
else
{
lean_object* v_a_2083_; lean_object* v___x_2085_; uint8_t v_isShared_2086_; uint8_t v_isSharedCheck_2090_; 
v_a_2083_ = lean_ctor_get(v___x_2082_, 0);
v_isSharedCheck_2090_ = !lean_is_exclusive(v___x_2082_);
if (v_isSharedCheck_2090_ == 0)
{
v___x_2085_ = v___x_2082_;
v_isShared_2086_ = v_isSharedCheck_2090_;
goto v_resetjp_2084_;
}
else
{
lean_inc(v_a_2083_);
lean_dec(v___x_2082_);
v___x_2085_ = lean_box(0);
v_isShared_2086_ = v_isSharedCheck_2090_;
goto v_resetjp_2084_;
}
v_resetjp_2084_:
{
lean_object* v___x_2088_; 
if (v_isShared_2086_ == 0)
{
v___x_2088_ = v___x_2085_;
goto v_reusejp_2087_;
}
else
{
lean_object* v_reuseFailAlloc_2089_; 
v_reuseFailAlloc_2089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2089_, 0, v_a_2083_);
v___x_2088_ = v_reuseFailAlloc_2089_;
goto v_reusejp_2087_;
}
v_reusejp_2087_:
{
return v___x_2088_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0___redArg___boxed(lean_object* v_name_2091_, lean_object* v_bi_2092_, lean_object* v_type_2093_, lean_object* v_k_2094_, lean_object* v_kind_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_){
_start:
{
uint8_t v_bi_boxed_2104_; uint8_t v_kind_boxed_2105_; lean_object* v_res_2106_; 
v_bi_boxed_2104_ = lean_unbox(v_bi_2092_);
v_kind_boxed_2105_ = lean_unbox(v_kind_2095_);
v_res_2106_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0___redArg(v_name_2091_, v_bi_boxed_2104_, v_type_2093_, v_k_2094_, v_kind_boxed_2105_, v___y_2096_, v___y_2097_, v___y_2098_, v___y_2099_, v___y_2100_, v___y_2101_, v___y_2102_);
lean_dec(v___y_2102_);
lean_dec_ref(v___y_2101_);
lean_dec(v___y_2100_);
lean_dec_ref(v___y_2099_);
lean_dec(v___y_2098_);
lean_dec_ref(v___y_2097_);
lean_dec(v___y_2096_);
return v_res_2106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0___redArg(lean_object* v_name_2107_, lean_object* v_type_2108_, lean_object* v_k_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_){
_start:
{
uint8_t v___x_2118_; uint8_t v___x_2119_; lean_object* v___x_2120_; 
v___x_2118_ = 0;
v___x_2119_ = 0;
v___x_2120_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0___redArg(v_name_2107_, v___x_2118_, v_type_2108_, v_k_2109_, v___x_2119_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_, v___y_2114_, v___y_2115_, v___y_2116_);
return v___x_2120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0___redArg___boxed(lean_object* v_name_2121_, lean_object* v_type_2122_, lean_object* v_k_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_){
_start:
{
lean_object* v_res_2132_; 
v_res_2132_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0___redArg(v_name_2121_, v_type_2122_, v_k_2123_, v___y_2124_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_, v___y_2129_, v___y_2130_);
lean_dec(v___y_2130_);
lean_dec_ref(v___y_2129_);
lean_dec(v___y_2128_);
lean_dec_ref(v___y_2127_);
lean_dec(v___y_2126_);
lean_dec_ref(v___y_2125_);
lean_dec(v___y_2124_);
return v_res_2132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_reduceCtorEqCheap(lean_object* v_e_2136_, lean_object* v_a_2137_, lean_object* v_a_2138_, lean_object* v_a_2139_, lean_object* v_a_2140_, lean_object* v_a_2141_, lean_object* v_a_2142_, lean_object* v_a_2143_){
_start:
{
lean_object* v___x_2148_; 
lean_inc_ref(v_e_2136_);
v___x_2148_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_2136_, v_a_2141_);
if (lean_obj_tag(v___x_2148_) == 0)
{
lean_object* v_a_2149_; lean_object* v___x_2150_; uint8_t v___x_2151_; 
v_a_2149_ = lean_ctor_get(v___x_2148_, 0);
lean_inc(v_a_2149_);
lean_dec_ref_known(v___x_2148_, 1);
v___x_2150_ = l_Lean_Expr_cleanupAnnotations(v_a_2149_);
lean_dec(v_a_2149_);
v___x_2151_ = l_Lean_Expr_isApp(v___x_2150_);
if (v___x_2151_ == 0)
{
lean_dec_ref(v___x_2150_);
lean_dec_ref(v_e_2136_);
goto v___jp_2145_;
}
else
{
lean_object* v___x_2152_; uint8_t v___x_2153_; 
v___x_2152_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2150_);
v___x_2153_ = l_Lean_Expr_isApp(v___x_2152_);
if (v___x_2153_ == 0)
{
lean_dec_ref(v___x_2152_);
lean_dec_ref(v___x_2150_);
lean_dec_ref(v_e_2136_);
goto v___jp_2145_;
}
else
{
lean_object* v___x_2154_; uint8_t v___x_2155_; 
v___x_2154_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2152_);
v___x_2155_ = l_Lean_Expr_isApp(v___x_2154_);
if (v___x_2155_ == 0)
{
lean_dec_ref(v___x_2154_);
lean_dec_ref(v___x_2152_);
lean_dec_ref(v___x_2150_);
lean_dec_ref(v_e_2136_);
goto v___jp_2145_;
}
else
{
lean_object* v___x_2156_; lean_object* v___x_2157_; uint8_t v___x_2158_; 
v___x_2156_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2154_);
lean_dec_ref(v___x_2154_);
v___x_2157_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__2));
v___x_2158_ = l_Lean_Expr_isConstOf(v___x_2156_, v___x_2157_);
lean_dec_ref(v___x_2156_);
if (v___x_2158_ == 0)
{
lean_dec_ref(v___x_2152_);
lean_dec_ref(v___x_2150_);
lean_dec_ref(v_e_2136_);
goto v___jp_2145_;
}
else
{
lean_object* v_arg_2159_; lean_object* v_arg_2160_; lean_object* v___x_2161_; 
v_arg_2159_ = lean_ctor_get(v___x_2150_, 1);
lean_inc_ref(v_arg_2159_);
lean_dec_ref(v___x_2150_);
v_arg_2160_ = lean_ctor_get(v___x_2152_, 1);
lean_inc_ref(v_arg_2160_);
lean_dec_ref(v___x_2152_);
v___x_2161_ = l_Lean_Meta_isConstructorApp_x3f(v_arg_2160_, v_a_2140_, v_a_2141_, v_a_2142_, v_a_2143_);
if (lean_obj_tag(v___x_2161_) == 0)
{
lean_object* v_a_2162_; lean_object* v___x_2164_; uint8_t v_isShared_2165_; uint8_t v_isSharedCheck_2204_; 
v_a_2162_ = lean_ctor_get(v___x_2161_, 0);
v_isSharedCheck_2204_ = !lean_is_exclusive(v___x_2161_);
if (v_isSharedCheck_2204_ == 0)
{
v___x_2164_ = v___x_2161_;
v_isShared_2165_ = v_isSharedCheck_2204_;
goto v_resetjp_2163_;
}
else
{
lean_inc(v_a_2162_);
lean_dec(v___x_2161_);
v___x_2164_ = lean_box(0);
v_isShared_2165_ = v_isSharedCheck_2204_;
goto v_resetjp_2163_;
}
v_resetjp_2163_:
{
if (lean_obj_tag(v_a_2162_) == 1)
{
lean_object* v_val_2166_; lean_object* v___x_2167_; 
lean_del_object(v___x_2164_);
v_val_2166_ = lean_ctor_get(v_a_2162_, 0);
lean_inc(v_val_2166_);
lean_dec_ref_known(v_a_2162_, 1);
v___x_2167_ = l_Lean_Meta_isConstructorApp_x3f(v_arg_2159_, v_a_2140_, v_a_2141_, v_a_2142_, v_a_2143_);
if (lean_obj_tag(v___x_2167_) == 0)
{
lean_object* v_a_2168_; lean_object* v___x_2170_; uint8_t v_isShared_2171_; uint8_t v_isSharedCheck_2191_; 
v_a_2168_ = lean_ctor_get(v___x_2167_, 0);
v_isSharedCheck_2191_ = !lean_is_exclusive(v___x_2167_);
if (v_isSharedCheck_2191_ == 0)
{
v___x_2170_ = v___x_2167_;
v_isShared_2171_ = v_isSharedCheck_2191_;
goto v_resetjp_2169_;
}
else
{
lean_inc(v_a_2168_);
lean_dec(v___x_2167_);
v___x_2170_ = lean_box(0);
v_isShared_2171_ = v_isSharedCheck_2191_;
goto v_resetjp_2169_;
}
v_resetjp_2169_:
{
if (lean_obj_tag(v_a_2168_) == 1)
{
lean_object* v_toConstantVal_2172_; lean_object* v_val_2173_; lean_object* v_toConstantVal_2174_; lean_object* v_name_2175_; lean_object* v_name_2176_; uint8_t v___x_2177_; 
v_toConstantVal_2172_ = lean_ctor_get(v_val_2166_, 0);
lean_inc_ref(v_toConstantVal_2172_);
lean_dec(v_val_2166_);
v_val_2173_ = lean_ctor_get(v_a_2168_, 0);
lean_inc(v_val_2173_);
lean_dec_ref_known(v_a_2168_, 1);
v_toConstantVal_2174_ = lean_ctor_get(v_val_2173_, 0);
lean_inc_ref(v_toConstantVal_2174_);
lean_dec(v_val_2173_);
v_name_2175_ = lean_ctor_get(v_toConstantVal_2172_, 0);
lean_inc(v_name_2175_);
lean_dec_ref(v_toConstantVal_2172_);
v_name_2176_ = lean_ctor_get(v_toConstantVal_2174_, 0);
lean_inc(v_name_2176_);
lean_dec_ref(v_toConstantVal_2174_);
v___x_2177_ = lean_name_eq(v_name_2175_, v_name_2176_);
lean_dec(v_name_2176_);
lean_dec(v_name_2175_);
if (v___x_2177_ == 0)
{
lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___f_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; 
lean_del_object(v___x_2170_);
v___x_2178_ = lean_box(v___x_2158_);
v___x_2179_ = lean_box(v___x_2177_);
v___f_2180_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_reduceCtorEqCheap___lam__0___boxed), 11, 2);
lean_closure_set(v___f_2180_, 0, v___x_2178_);
lean_closure_set(v___f_2180_, 1, v___x_2179_);
v___x_2181_ = ((lean_object*)(l_Lean_Meta_Grind_reduceCtorEqCheap___closed__1));
v___x_2182_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0___redArg(v___x_2181_, v_e_2136_, v___f_2180_, v_a_2137_, v_a_2138_, v_a_2139_, v_a_2140_, v_a_2141_, v_a_2142_, v_a_2143_);
return v___x_2182_;
}
else
{
lean_object* v___x_2183_; lean_object* v___x_2185_; 
lean_dec_ref(v_e_2136_);
v___x_2183_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
if (v_isShared_2171_ == 0)
{
lean_ctor_set(v___x_2170_, 0, v___x_2183_);
v___x_2185_ = v___x_2170_;
goto v_reusejp_2184_;
}
else
{
lean_object* v_reuseFailAlloc_2186_; 
v_reuseFailAlloc_2186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2186_, 0, v___x_2183_);
v___x_2185_ = v_reuseFailAlloc_2186_;
goto v_reusejp_2184_;
}
v_reusejp_2184_:
{
return v___x_2185_;
}
}
}
else
{
lean_object* v___x_2187_; lean_object* v___x_2189_; 
lean_dec(v_a_2168_);
lean_dec(v_val_2166_);
lean_dec_ref(v_e_2136_);
v___x_2187_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
if (v_isShared_2171_ == 0)
{
lean_ctor_set(v___x_2170_, 0, v___x_2187_);
v___x_2189_ = v___x_2170_;
goto v_reusejp_2188_;
}
else
{
lean_object* v_reuseFailAlloc_2190_; 
v_reuseFailAlloc_2190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2190_, 0, v___x_2187_);
v___x_2189_ = v_reuseFailAlloc_2190_;
goto v_reusejp_2188_;
}
v_reusejp_2188_:
{
return v___x_2189_;
}
}
}
}
else
{
lean_object* v_a_2192_; lean_object* v___x_2194_; uint8_t v_isShared_2195_; uint8_t v_isSharedCheck_2199_; 
lean_dec(v_val_2166_);
lean_dec_ref(v_e_2136_);
v_a_2192_ = lean_ctor_get(v___x_2167_, 0);
v_isSharedCheck_2199_ = !lean_is_exclusive(v___x_2167_);
if (v_isSharedCheck_2199_ == 0)
{
v___x_2194_ = v___x_2167_;
v_isShared_2195_ = v_isSharedCheck_2199_;
goto v_resetjp_2193_;
}
else
{
lean_inc(v_a_2192_);
lean_dec(v___x_2167_);
v___x_2194_ = lean_box(0);
v_isShared_2195_ = v_isSharedCheck_2199_;
goto v_resetjp_2193_;
}
v_resetjp_2193_:
{
lean_object* v___x_2197_; 
if (v_isShared_2195_ == 0)
{
v___x_2197_ = v___x_2194_;
goto v_reusejp_2196_;
}
else
{
lean_object* v_reuseFailAlloc_2198_; 
v_reuseFailAlloc_2198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2198_, 0, v_a_2192_);
v___x_2197_ = v_reuseFailAlloc_2198_;
goto v_reusejp_2196_;
}
v_reusejp_2196_:
{
return v___x_2197_;
}
}
}
}
else
{
lean_object* v___x_2200_; lean_object* v___x_2202_; 
lean_dec(v_a_2162_);
lean_dec_ref(v_arg_2159_);
lean_dec_ref(v_e_2136_);
v___x_2200_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
if (v_isShared_2165_ == 0)
{
lean_ctor_set(v___x_2164_, 0, v___x_2200_);
v___x_2202_ = v___x_2164_;
goto v_reusejp_2201_;
}
else
{
lean_object* v_reuseFailAlloc_2203_; 
v_reuseFailAlloc_2203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2203_, 0, v___x_2200_);
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
else
{
lean_object* v_a_2205_; lean_object* v___x_2207_; uint8_t v_isShared_2208_; uint8_t v_isSharedCheck_2212_; 
lean_dec_ref(v_arg_2159_);
lean_dec_ref(v_e_2136_);
v_a_2205_ = lean_ctor_get(v___x_2161_, 0);
v_isSharedCheck_2212_ = !lean_is_exclusive(v___x_2161_);
if (v_isSharedCheck_2212_ == 0)
{
v___x_2207_ = v___x_2161_;
v_isShared_2208_ = v_isSharedCheck_2212_;
goto v_resetjp_2206_;
}
else
{
lean_inc(v_a_2205_);
lean_dec(v___x_2161_);
v___x_2207_ = lean_box(0);
v_isShared_2208_ = v_isSharedCheck_2212_;
goto v_resetjp_2206_;
}
v_resetjp_2206_:
{
lean_object* v___x_2210_; 
if (v_isShared_2208_ == 0)
{
v___x_2210_ = v___x_2207_;
goto v_reusejp_2209_;
}
else
{
lean_object* v_reuseFailAlloc_2211_; 
v_reuseFailAlloc_2211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2211_, 0, v_a_2205_);
v___x_2210_ = v_reuseFailAlloc_2211_;
goto v_reusejp_2209_;
}
v_reusejp_2209_:
{
return v___x_2210_;
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
lean_object* v_a_2213_; lean_object* v___x_2215_; uint8_t v_isShared_2216_; uint8_t v_isSharedCheck_2220_; 
lean_dec_ref(v_e_2136_);
v_a_2213_ = lean_ctor_get(v___x_2148_, 0);
v_isSharedCheck_2220_ = !lean_is_exclusive(v___x_2148_);
if (v_isSharedCheck_2220_ == 0)
{
v___x_2215_ = v___x_2148_;
v_isShared_2216_ = v_isSharedCheck_2220_;
goto v_resetjp_2214_;
}
else
{
lean_inc(v_a_2213_);
lean_dec(v___x_2148_);
v___x_2215_ = lean_box(0);
v_isShared_2216_ = v_isSharedCheck_2220_;
goto v_resetjp_2214_;
}
v_resetjp_2214_:
{
lean_object* v___x_2218_; 
if (v_isShared_2216_ == 0)
{
v___x_2218_ = v___x_2215_;
goto v_reusejp_2217_;
}
else
{
lean_object* v_reuseFailAlloc_2219_; 
v_reuseFailAlloc_2219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2219_, 0, v_a_2213_);
v___x_2218_ = v_reuseFailAlloc_2219_;
goto v_reusejp_2217_;
}
v_reusejp_2217_:
{
return v___x_2218_;
}
}
}
v___jp_2145_:
{
lean_object* v___x_2146_; lean_object* v___x_2147_; 
v___x_2146_ = ((lean_object*)(l_Lean_Meta_Grind_simpEq___redArg___closed__0));
v___x_2147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2147_, 0, v___x_2146_);
return v___x_2147_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_reduceCtorEqCheap___boxed(lean_object* v_e_2221_, lean_object* v_a_2222_, lean_object* v_a_2223_, lean_object* v_a_2224_, lean_object* v_a_2225_, lean_object* v_a_2226_, lean_object* v_a_2227_, lean_object* v_a_2228_, lean_object* v_a_2229_){
_start:
{
lean_object* v_res_2230_; 
v_res_2230_ = l_Lean_Meta_Grind_reduceCtorEqCheap(v_e_2221_, v_a_2222_, v_a_2223_, v_a_2224_, v_a_2225_, v_a_2226_, v_a_2227_, v_a_2228_);
lean_dec(v_a_2228_);
lean_dec_ref(v_a_2227_);
lean_dec(v_a_2226_);
lean_dec_ref(v_a_2225_);
lean_dec(v_a_2224_);
lean_dec_ref(v_a_2223_);
lean_dec(v_a_2222_);
return v_res_2230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0(lean_object* v_00_u03b1_2231_, lean_object* v_name_2232_, uint8_t v_bi_2233_, lean_object* v_type_2234_, lean_object* v_k_2235_, uint8_t v_kind_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_){
_start:
{
lean_object* v___x_2245_; 
v___x_2245_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0___redArg(v_name_2232_, v_bi_2233_, v_type_2234_, v_k_2235_, v_kind_2236_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_);
return v___x_2245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2246_, lean_object* v_name_2247_, lean_object* v_bi_2248_, lean_object* v_type_2249_, lean_object* v_k_2250_, lean_object* v_kind_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_){
_start:
{
uint8_t v_bi_boxed_2260_; uint8_t v_kind_boxed_2261_; lean_object* v_res_2262_; 
v_bi_boxed_2260_ = lean_unbox(v_bi_2248_);
v_kind_boxed_2261_ = lean_unbox(v_kind_2251_);
v_res_2262_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0_spec__0(v_00_u03b1_2246_, v_name_2247_, v_bi_boxed_2260_, v_type_2249_, v_k_2250_, v_kind_boxed_2261_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_);
lean_dec(v___y_2258_);
lean_dec_ref(v___y_2257_);
lean_dec(v___y_2256_);
lean_dec_ref(v___y_2255_);
lean_dec(v___y_2254_);
lean_dec_ref(v___y_2253_);
lean_dec(v___y_2252_);
return v_res_2262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0(lean_object* v_00_u03b1_2263_, lean_object* v_name_2264_, lean_object* v_type_2265_, lean_object* v_k_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_){
_start:
{
lean_object* v___x_2275_; 
v___x_2275_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0___redArg(v_name_2264_, v_type_2265_, v_k_2266_, v___y_2267_, v___y_2268_, v___y_2269_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2273_);
return v___x_2275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0___boxed(lean_object* v_00_u03b1_2276_, lean_object* v_name_2277_, lean_object* v_type_2278_, lean_object* v_k_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_){
_start:
{
lean_object* v_res_2288_; 
v_res_2288_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_reduceCtorEqCheap_spec__0(v_00_u03b1_2276_, v_name_2277_, v_type_2278_, v_k_2279_, v___y_2280_, v___y_2281_, v___y_2282_, v___y_2283_, v___y_2284_, v___y_2285_, v___y_2286_);
lean_dec(v___y_2286_);
lean_dec_ref(v___y_2285_);
lean_dec(v___y_2284_);
lean_dec_ref(v___y_2283_);
lean_dec(v___y_2282_);
lean_dec_ref(v___y_2281_);
lean_dec(v___y_2280_);
return v_res_2288_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__41_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14_(){
_start:
{
lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; 
v___x_2296_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__41___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14_));
v___x_2297_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__4_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13_));
v___x_2298_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_reduceCtorEqCheap___boxed), 9, 0);
v___x_2299_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_2296_, v___x_2297_, v___x_2298_);
return v___x_2299_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__41_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14____boxed(lean_object* v_a_2300_){
_start:
{
lean_object* v_res_2301_; 
v_res_2301_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__41_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14_();
return v_res_2301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_unfoldReducibleSimproc___redArg(lean_object* v_e_2302_, lean_object* v_a_2303_, lean_object* v_a_2304_, lean_object* v_a_2305_, lean_object* v_a_2306_){
_start:
{
lean_object* v___x_2308_; 
v___x_2308_ = l_Lean_Meta_Sym_unfoldReducibleStep(v_e_2302_, v_a_2303_, v_a_2304_, v_a_2305_, v_a_2306_);
return v___x_2308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_unfoldReducibleSimproc___redArg___boxed(lean_object* v_e_2309_, lean_object* v_a_2310_, lean_object* v_a_2311_, lean_object* v_a_2312_, lean_object* v_a_2313_, lean_object* v_a_2314_){
_start:
{
lean_object* v_res_2315_; 
v_res_2315_ = l_Lean_Meta_Grind_unfoldReducibleSimproc___redArg(v_e_2309_, v_a_2310_, v_a_2311_, v_a_2312_, v_a_2313_);
lean_dec(v_a_2313_);
lean_dec_ref(v_a_2312_);
lean_dec(v_a_2311_);
lean_dec_ref(v_a_2310_);
return v_res_2315_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_unfoldReducibleSimproc(lean_object* v_e_2316_, lean_object* v_a_2317_, lean_object* v_a_2318_, lean_object* v_a_2319_, lean_object* v_a_2320_, lean_object* v_a_2321_, lean_object* v_a_2322_, lean_object* v_a_2323_){
_start:
{
lean_object* v___x_2325_; 
v___x_2325_ = l_Lean_Meta_Sym_unfoldReducibleStep(v_e_2316_, v_a_2320_, v_a_2321_, v_a_2322_, v_a_2323_);
return v___x_2325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_unfoldReducibleSimproc___boxed(lean_object* v_e_2326_, lean_object* v_a_2327_, lean_object* v_a_2328_, lean_object* v_a_2329_, lean_object* v_a_2330_, lean_object* v_a_2331_, lean_object* v_a_2332_, lean_object* v_a_2333_, lean_object* v_a_2334_){
_start:
{
lean_object* v_res_2335_; 
v_res_2335_ = l_Lean_Meta_Grind_unfoldReducibleSimproc(v_e_2326_, v_a_2327_, v_a_2328_, v_a_2329_, v_a_2330_, v_a_2331_, v_a_2332_, v_a_2333_);
lean_dec(v_a_2333_);
lean_dec_ref(v_a_2332_);
lean_dec(v_a_2331_);
lean_dec_ref(v_a_2330_);
lean_dec(v_a_2329_);
lean_dec_ref(v_a_2328_);
lean_dec(v_a_2327_);
return v_res_2335_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46___lam__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10_(lean_object* v___y_2336_, lean_object* v___y_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_){
_start:
{
lean_object* v___x_2345_; 
v___x_2345_ = l_Lean_Meta_Sym_unfoldReducibleStep(v___y_2336_, v___y_2340_, v___y_2341_, v___y_2342_, v___y_2343_);
return v___x_2345_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46___lam__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10____boxed(lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_, lean_object* v___y_2350_, lean_object* v___y_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_){
_start:
{
lean_object* v_res_2355_; 
v_res_2355_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46___lam__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10_(v___y_2346_, v___y_2347_, v___y_2348_, v___y_2349_, v___y_2350_, v___y_2351_, v___y_2352_, v___y_2353_);
lean_dec(v___y_2353_);
lean_dec_ref(v___y_2352_);
lean_dec(v___y_2351_);
lean_dec_ref(v___y_2350_);
lean_dec(v___y_2349_);
lean_dec_ref(v___y_2348_);
lean_dec(v___y_2347_);
return v_res_2355_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10_(){
_start:
{
lean_object* v___f_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; 
v___f_2368_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46___closed__0_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10_));
v___x_2369_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10_));
v___x_2370_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46___closed__3_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10_));
v___x_2371_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_2369_, v___x_2370_, v___f_2368_);
return v___x_2371_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10____boxed(lean_object* v_a_2372_){
_start:
{
lean_object* v_res_2373_; 
v_res_2373_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10_();
return v_res_2373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getSimprocs___redArg(lean_object* v_a_2382_, lean_object* v_a_2383_){
_start:
{
lean_object* v___x_2385_; 
v___x_2385_ = l_Lean_Meta_Simp_getSEvalSimprocs___redArg(v_a_2383_);
if (lean_obj_tag(v___x_2385_) == 0)
{
lean_object* v_a_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; uint8_t v___x_2392_; lean_object* v___x_2393_; 
v_a_2386_ = lean_ctor_get(v___x_2385_, 0);
lean_inc(v_a_2386_);
lean_dec_ref_known(v___x_2385_, 1);
v___x_2387_ = ((lean_object*)(l_Lean_Meta_Grind_getSimprocs___redArg___closed__2));
v___x_2388_ = l_Lean_Meta_Simp_Simprocs_erase(v_a_2386_, v___x_2387_);
v___x_2389_ = ((lean_object*)(l_Lean_Meta_Grind_getSimprocs___redArg___closed__4));
v___x_2390_ = l_Lean_Meta_Simp_Simprocs_erase(v___x_2388_, v___x_2389_);
v___x_2391_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__41___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14_));
v___x_2392_ = 1;
v___x_2393_ = l_Lean_Meta_Simp_Simprocs_add(v___x_2390_, v___x_2391_, v___x_2392_, v_a_2382_, v_a_2383_);
if (lean_obj_tag(v___x_2393_) == 0)
{
lean_object* v_a_2394_; lean_object* v___x_2395_; 
v_a_2394_ = lean_ctor_get(v___x_2393_, 0);
lean_inc(v_a_2394_);
lean_dec_ref_known(v___x_2393_, 1);
v___x_2395_ = l_Lean_Meta_Grind_addSimpMatchDiscrsOnly(v_a_2394_, v_a_2382_, v_a_2383_);
if (lean_obj_tag(v___x_2395_) == 0)
{
lean_object* v_a_2396_; lean_object* v___x_2397_; 
v_a_2396_ = lean_ctor_get(v___x_2395_, 0);
lean_inc(v_a_2396_);
lean_dec_ref_known(v___x_2395_, 1);
v___x_2397_ = l_Lean_Meta_Grind_addPreMatchCondSimproc(v_a_2396_, v_a_2382_, v_a_2383_);
if (lean_obj_tag(v___x_2397_) == 0)
{
lean_object* v_a_2398_; lean_object* v___x_2399_; 
v_a_2398_ = lean_ctor_get(v___x_2397_, 0);
lean_inc(v_a_2398_);
lean_dec_ref_known(v___x_2397_, 1);
v___x_2399_ = l_Lean_Meta_Grind_Arith_addSimproc(v_a_2398_, v_a_2382_, v_a_2383_);
if (lean_obj_tag(v___x_2399_) == 0)
{
lean_object* v_a_2400_; lean_object* v___x_2401_; 
v_a_2400_ = lean_ctor_get(v___x_2399_, 0);
lean_inc(v_a_2400_);
lean_dec_ref_known(v___x_2399_, 1);
v___x_2401_ = l_Lean_Meta_Grind_addForallSimproc(v_a_2400_, v_a_2382_, v_a_2383_);
if (lean_obj_tag(v___x_2401_) == 0)
{
lean_object* v_a_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; 
v_a_2402_ = lean_ctor_get(v___x_2401_, 0);
lean_inc(v_a_2402_);
lean_dec_ref_known(v___x_2401_, 1);
v___x_2403_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13_));
v___x_2404_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2402_, v___x_2403_, v___x_2392_, v_a_2382_, v_a_2383_);
if (lean_obj_tag(v___x_2404_) == 0)
{
lean_object* v_a_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; 
v_a_2405_ = lean_ctor_get(v___x_2404_, 0);
lean_inc(v_a_2405_);
lean_dec_ref_known(v___x_2404_, 1);
v___x_2406_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__36___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12_));
v___x_2407_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2405_, v___x_2406_, v___x_2392_, v_a_2382_, v_a_2383_);
if (lean_obj_tag(v___x_2407_) == 0)
{
lean_object* v_a_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; 
v_a_2408_ = lean_ctor_get(v___x_2407_, 0);
lean_inc(v_a_2408_);
lean_dec_ref_known(v___x_2407_, 1);
v___x_2409_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__26___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_423278053____hygCtx___hyg_14_));
v___x_2410_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2408_, v___x_2409_, v___x_2392_, v_a_2382_, v_a_2383_);
if (lean_obj_tag(v___x_2410_) == 0)
{
lean_object* v_a_2411_; lean_object* v___x_2412_; uint8_t v___x_2413_; lean_object* v___x_2414_; 
v_a_2411_ = lean_ctor_get(v___x_2410_, 0);
lean_inc(v_a_2411_);
lean_dec_ref_known(v___x_2410_, 1);
v___x_2412_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpIteToCond_declare__16___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3199362635____hygCtx___hyg_14_));
v___x_2413_ = 0;
v___x_2414_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2411_, v___x_2412_, v___x_2413_, v_a_2382_, v_a_2383_);
if (lean_obj_tag(v___x_2414_) == 0)
{
lean_object* v_a_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; 
v_a_2415_ = lean_ctor_get(v___x_2414_, 0);
lean_inc(v_a_2415_);
lean_dec_ref_known(v___x_2414_, 1);
v___x_2416_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpProjectedDecisionEq_declare__21___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1166571523____hygCtx___hyg_13_));
v___x_2417_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2415_, v___x_2416_, v___x_2413_, v_a_2382_, v_a_2383_);
if (lean_obj_tag(v___x_2417_) == 0)
{
lean_object* v_a_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; 
v_a_2418_ = lean_ctor_get(v___x_2417_, 0);
lean_inc(v_a_2418_);
lean_dec_ref_known(v___x_2417_, 1);
v___x_2419_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__31___closed__1_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2103990232____hygCtx___hyg_11_));
v___x_2420_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2418_, v___x_2419_, v___x_2413_, v_a_2382_, v_a_2383_);
if (lean_obj_tag(v___x_2420_) == 0)
{
lean_object* v_a_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; 
v_a_2421_ = lean_ctor_get(v___x_2420_, 0);
lean_inc(v_a_2421_);
lean_dec_ref_known(v___x_2420_, 1);
v___x_2422_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46___closed__2_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10_));
v___x_2423_ = l_Lean_Meta_Simp_Simprocs_add(v_a_2421_, v___x_2422_, v___x_2413_, v_a_2382_, v_a_2383_);
if (lean_obj_tag(v___x_2423_) == 0)
{
lean_object* v_a_2424_; lean_object* v___x_2426_; uint8_t v_isShared_2427_; uint8_t v_isSharedCheck_2434_; 
v_a_2424_ = lean_ctor_get(v___x_2423_, 0);
v_isSharedCheck_2434_ = !lean_is_exclusive(v___x_2423_);
if (v_isSharedCheck_2434_ == 0)
{
v___x_2426_ = v___x_2423_;
v_isShared_2427_ = v_isSharedCheck_2434_;
goto v_resetjp_2425_;
}
else
{
lean_inc(v_a_2424_);
lean_dec(v___x_2423_);
v___x_2426_ = lean_box(0);
v_isShared_2427_ = v_isSharedCheck_2434_;
goto v_resetjp_2425_;
}
v_resetjp_2425_:
{
lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2432_; 
v___x_2428_ = lean_unsigned_to_nat(1u);
v___x_2429_ = lean_mk_empty_array_with_capacity(v___x_2428_);
v___x_2430_ = lean_array_push(v___x_2429_, v_a_2424_);
if (v_isShared_2427_ == 0)
{
lean_ctor_set(v___x_2426_, 0, v___x_2430_);
v___x_2432_ = v___x_2426_;
goto v_reusejp_2431_;
}
else
{
lean_object* v_reuseFailAlloc_2433_; 
v_reuseFailAlloc_2433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2433_, 0, v___x_2430_);
v___x_2432_ = v_reuseFailAlloc_2433_;
goto v_reusejp_2431_;
}
v_reusejp_2431_:
{
return v___x_2432_;
}
}
}
else
{
lean_object* v_a_2435_; lean_object* v___x_2437_; uint8_t v_isShared_2438_; uint8_t v_isSharedCheck_2442_; 
v_a_2435_ = lean_ctor_get(v___x_2423_, 0);
v_isSharedCheck_2442_ = !lean_is_exclusive(v___x_2423_);
if (v_isSharedCheck_2442_ == 0)
{
v___x_2437_ = v___x_2423_;
v_isShared_2438_ = v_isSharedCheck_2442_;
goto v_resetjp_2436_;
}
else
{
lean_inc(v_a_2435_);
lean_dec(v___x_2423_);
v___x_2437_ = lean_box(0);
v_isShared_2438_ = v_isSharedCheck_2442_;
goto v_resetjp_2436_;
}
v_resetjp_2436_:
{
lean_object* v___x_2440_; 
if (v_isShared_2438_ == 0)
{
v___x_2440_ = v___x_2437_;
goto v_reusejp_2439_;
}
else
{
lean_object* v_reuseFailAlloc_2441_; 
v_reuseFailAlloc_2441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2441_, 0, v_a_2435_);
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
v_a_2443_ = lean_ctor_get(v___x_2420_, 0);
v_isSharedCheck_2450_ = !lean_is_exclusive(v___x_2420_);
if (v_isSharedCheck_2450_ == 0)
{
v___x_2445_ = v___x_2420_;
v_isShared_2446_ = v_isSharedCheck_2450_;
goto v_resetjp_2444_;
}
else
{
lean_inc(v_a_2443_);
lean_dec(v___x_2420_);
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
else
{
lean_object* v_a_2451_; lean_object* v___x_2453_; uint8_t v_isShared_2454_; uint8_t v_isSharedCheck_2458_; 
v_a_2451_ = lean_ctor_get(v___x_2417_, 0);
v_isSharedCheck_2458_ = !lean_is_exclusive(v___x_2417_);
if (v_isSharedCheck_2458_ == 0)
{
v___x_2453_ = v___x_2417_;
v_isShared_2454_ = v_isSharedCheck_2458_;
goto v_resetjp_2452_;
}
else
{
lean_inc(v_a_2451_);
lean_dec(v___x_2417_);
v___x_2453_ = lean_box(0);
v_isShared_2454_ = v_isSharedCheck_2458_;
goto v_resetjp_2452_;
}
v_resetjp_2452_:
{
lean_object* v___x_2456_; 
if (v_isShared_2454_ == 0)
{
v___x_2456_ = v___x_2453_;
goto v_reusejp_2455_;
}
else
{
lean_object* v_reuseFailAlloc_2457_; 
v_reuseFailAlloc_2457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2457_, 0, v_a_2451_);
v___x_2456_ = v_reuseFailAlloc_2457_;
goto v_reusejp_2455_;
}
v_reusejp_2455_:
{
return v___x_2456_;
}
}
}
}
else
{
lean_object* v_a_2459_; lean_object* v___x_2461_; uint8_t v_isShared_2462_; uint8_t v_isSharedCheck_2466_; 
v_a_2459_ = lean_ctor_get(v___x_2414_, 0);
v_isSharedCheck_2466_ = !lean_is_exclusive(v___x_2414_);
if (v_isSharedCheck_2466_ == 0)
{
v___x_2461_ = v___x_2414_;
v_isShared_2462_ = v_isSharedCheck_2466_;
goto v_resetjp_2460_;
}
else
{
lean_inc(v_a_2459_);
lean_dec(v___x_2414_);
v___x_2461_ = lean_box(0);
v_isShared_2462_ = v_isSharedCheck_2466_;
goto v_resetjp_2460_;
}
v_resetjp_2460_:
{
lean_object* v___x_2464_; 
if (v_isShared_2462_ == 0)
{
v___x_2464_ = v___x_2461_;
goto v_reusejp_2463_;
}
else
{
lean_object* v_reuseFailAlloc_2465_; 
v_reuseFailAlloc_2465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2465_, 0, v_a_2459_);
v___x_2464_ = v_reuseFailAlloc_2465_;
goto v_reusejp_2463_;
}
v_reusejp_2463_:
{
return v___x_2464_;
}
}
}
}
else
{
lean_object* v_a_2467_; lean_object* v___x_2469_; uint8_t v_isShared_2470_; uint8_t v_isSharedCheck_2474_; 
v_a_2467_ = lean_ctor_get(v___x_2410_, 0);
v_isSharedCheck_2474_ = !lean_is_exclusive(v___x_2410_);
if (v_isSharedCheck_2474_ == 0)
{
v___x_2469_ = v___x_2410_;
v_isShared_2470_ = v_isSharedCheck_2474_;
goto v_resetjp_2468_;
}
else
{
lean_inc(v_a_2467_);
lean_dec(v___x_2410_);
v___x_2469_ = lean_box(0);
v_isShared_2470_ = v_isSharedCheck_2474_;
goto v_resetjp_2468_;
}
v_resetjp_2468_:
{
lean_object* v___x_2472_; 
if (v_isShared_2470_ == 0)
{
v___x_2472_ = v___x_2469_;
goto v_reusejp_2471_;
}
else
{
lean_object* v_reuseFailAlloc_2473_; 
v_reuseFailAlloc_2473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2473_, 0, v_a_2467_);
v___x_2472_ = v_reuseFailAlloc_2473_;
goto v_reusejp_2471_;
}
v_reusejp_2471_:
{
return v___x_2472_;
}
}
}
}
else
{
lean_object* v_a_2475_; lean_object* v___x_2477_; uint8_t v_isShared_2478_; uint8_t v_isSharedCheck_2482_; 
v_a_2475_ = lean_ctor_get(v___x_2407_, 0);
v_isSharedCheck_2482_ = !lean_is_exclusive(v___x_2407_);
if (v_isSharedCheck_2482_ == 0)
{
v___x_2477_ = v___x_2407_;
v_isShared_2478_ = v_isSharedCheck_2482_;
goto v_resetjp_2476_;
}
else
{
lean_inc(v_a_2475_);
lean_dec(v___x_2407_);
v___x_2477_ = lean_box(0);
v_isShared_2478_ = v_isSharedCheck_2482_;
goto v_resetjp_2476_;
}
v_resetjp_2476_:
{
lean_object* v___x_2480_; 
if (v_isShared_2478_ == 0)
{
v___x_2480_ = v___x_2477_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2481_; 
v_reuseFailAlloc_2481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2481_, 0, v_a_2475_);
v___x_2480_ = v_reuseFailAlloc_2481_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
return v___x_2480_;
}
}
}
}
else
{
lean_object* v_a_2483_; lean_object* v___x_2485_; uint8_t v_isShared_2486_; uint8_t v_isSharedCheck_2490_; 
v_a_2483_ = lean_ctor_get(v___x_2404_, 0);
v_isSharedCheck_2490_ = !lean_is_exclusive(v___x_2404_);
if (v_isSharedCheck_2490_ == 0)
{
v___x_2485_ = v___x_2404_;
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
else
{
lean_inc(v_a_2483_);
lean_dec(v___x_2404_);
v___x_2485_ = lean_box(0);
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
v_resetjp_2484_:
{
lean_object* v___x_2488_; 
if (v_isShared_2486_ == 0)
{
v___x_2488_ = v___x_2485_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2489_; 
v_reuseFailAlloc_2489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2489_, 0, v_a_2483_);
v___x_2488_ = v_reuseFailAlloc_2489_;
goto v_reusejp_2487_;
}
v_reusejp_2487_:
{
return v___x_2488_;
}
}
}
}
else
{
lean_object* v_a_2491_; lean_object* v___x_2493_; uint8_t v_isShared_2494_; uint8_t v_isSharedCheck_2498_; 
v_a_2491_ = lean_ctor_get(v___x_2401_, 0);
v_isSharedCheck_2498_ = !lean_is_exclusive(v___x_2401_);
if (v_isSharedCheck_2498_ == 0)
{
v___x_2493_ = v___x_2401_;
v_isShared_2494_ = v_isSharedCheck_2498_;
goto v_resetjp_2492_;
}
else
{
lean_inc(v_a_2491_);
lean_dec(v___x_2401_);
v___x_2493_ = lean_box(0);
v_isShared_2494_ = v_isSharedCheck_2498_;
goto v_resetjp_2492_;
}
v_resetjp_2492_:
{
lean_object* v___x_2496_; 
if (v_isShared_2494_ == 0)
{
v___x_2496_ = v___x_2493_;
goto v_reusejp_2495_;
}
else
{
lean_object* v_reuseFailAlloc_2497_; 
v_reuseFailAlloc_2497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2497_, 0, v_a_2491_);
v___x_2496_ = v_reuseFailAlloc_2497_;
goto v_reusejp_2495_;
}
v_reusejp_2495_:
{
return v___x_2496_;
}
}
}
}
else
{
lean_object* v_a_2499_; lean_object* v___x_2501_; uint8_t v_isShared_2502_; uint8_t v_isSharedCheck_2506_; 
v_a_2499_ = lean_ctor_get(v___x_2399_, 0);
v_isSharedCheck_2506_ = !lean_is_exclusive(v___x_2399_);
if (v_isSharedCheck_2506_ == 0)
{
v___x_2501_ = v___x_2399_;
v_isShared_2502_ = v_isSharedCheck_2506_;
goto v_resetjp_2500_;
}
else
{
lean_inc(v_a_2499_);
lean_dec(v___x_2399_);
v___x_2501_ = lean_box(0);
v_isShared_2502_ = v_isSharedCheck_2506_;
goto v_resetjp_2500_;
}
v_resetjp_2500_:
{
lean_object* v___x_2504_; 
if (v_isShared_2502_ == 0)
{
v___x_2504_ = v___x_2501_;
goto v_reusejp_2503_;
}
else
{
lean_object* v_reuseFailAlloc_2505_; 
v_reuseFailAlloc_2505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2505_, 0, v_a_2499_);
v___x_2504_ = v_reuseFailAlloc_2505_;
goto v_reusejp_2503_;
}
v_reusejp_2503_:
{
return v___x_2504_;
}
}
}
}
else
{
lean_object* v_a_2507_; lean_object* v___x_2509_; uint8_t v_isShared_2510_; uint8_t v_isSharedCheck_2514_; 
v_a_2507_ = lean_ctor_get(v___x_2397_, 0);
v_isSharedCheck_2514_ = !lean_is_exclusive(v___x_2397_);
if (v_isSharedCheck_2514_ == 0)
{
v___x_2509_ = v___x_2397_;
v_isShared_2510_ = v_isSharedCheck_2514_;
goto v_resetjp_2508_;
}
else
{
lean_inc(v_a_2507_);
lean_dec(v___x_2397_);
v___x_2509_ = lean_box(0);
v_isShared_2510_ = v_isSharedCheck_2514_;
goto v_resetjp_2508_;
}
v_resetjp_2508_:
{
lean_object* v___x_2512_; 
if (v_isShared_2510_ == 0)
{
v___x_2512_ = v___x_2509_;
goto v_reusejp_2511_;
}
else
{
lean_object* v_reuseFailAlloc_2513_; 
v_reuseFailAlloc_2513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2513_, 0, v_a_2507_);
v___x_2512_ = v_reuseFailAlloc_2513_;
goto v_reusejp_2511_;
}
v_reusejp_2511_:
{
return v___x_2512_;
}
}
}
}
else
{
lean_object* v_a_2515_; lean_object* v___x_2517_; uint8_t v_isShared_2518_; uint8_t v_isSharedCheck_2522_; 
v_a_2515_ = lean_ctor_get(v___x_2395_, 0);
v_isSharedCheck_2522_ = !lean_is_exclusive(v___x_2395_);
if (v_isSharedCheck_2522_ == 0)
{
v___x_2517_ = v___x_2395_;
v_isShared_2518_ = v_isSharedCheck_2522_;
goto v_resetjp_2516_;
}
else
{
lean_inc(v_a_2515_);
lean_dec(v___x_2395_);
v___x_2517_ = lean_box(0);
v_isShared_2518_ = v_isSharedCheck_2522_;
goto v_resetjp_2516_;
}
v_resetjp_2516_:
{
lean_object* v___x_2520_; 
if (v_isShared_2518_ == 0)
{
v___x_2520_ = v___x_2517_;
goto v_reusejp_2519_;
}
else
{
lean_object* v_reuseFailAlloc_2521_; 
v_reuseFailAlloc_2521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2521_, 0, v_a_2515_);
v___x_2520_ = v_reuseFailAlloc_2521_;
goto v_reusejp_2519_;
}
v_reusejp_2519_:
{
return v___x_2520_;
}
}
}
}
else
{
lean_object* v_a_2523_; lean_object* v___x_2525_; uint8_t v_isShared_2526_; uint8_t v_isSharedCheck_2530_; 
v_a_2523_ = lean_ctor_get(v___x_2393_, 0);
v_isSharedCheck_2530_ = !lean_is_exclusive(v___x_2393_);
if (v_isSharedCheck_2530_ == 0)
{
v___x_2525_ = v___x_2393_;
v_isShared_2526_ = v_isSharedCheck_2530_;
goto v_resetjp_2524_;
}
else
{
lean_inc(v_a_2523_);
lean_dec(v___x_2393_);
v___x_2525_ = lean_box(0);
v_isShared_2526_ = v_isSharedCheck_2530_;
goto v_resetjp_2524_;
}
v_resetjp_2524_:
{
lean_object* v___x_2528_; 
if (v_isShared_2526_ == 0)
{
v___x_2528_ = v___x_2525_;
goto v_reusejp_2527_;
}
else
{
lean_object* v_reuseFailAlloc_2529_; 
v_reuseFailAlloc_2529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2529_, 0, v_a_2523_);
v___x_2528_ = v_reuseFailAlloc_2529_;
goto v_reusejp_2527_;
}
v_reusejp_2527_:
{
return v___x_2528_;
}
}
}
}
else
{
lean_object* v_a_2531_; lean_object* v___x_2533_; uint8_t v_isShared_2534_; uint8_t v_isSharedCheck_2538_; 
v_a_2531_ = lean_ctor_get(v___x_2385_, 0);
v_isSharedCheck_2538_ = !lean_is_exclusive(v___x_2385_);
if (v_isSharedCheck_2538_ == 0)
{
v___x_2533_ = v___x_2385_;
v_isShared_2534_ = v_isSharedCheck_2538_;
goto v_resetjp_2532_;
}
else
{
lean_inc(v_a_2531_);
lean_dec(v___x_2385_);
v___x_2533_ = lean_box(0);
v_isShared_2534_ = v_isSharedCheck_2538_;
goto v_resetjp_2532_;
}
v_resetjp_2532_:
{
lean_object* v___x_2536_; 
if (v_isShared_2534_ == 0)
{
v___x_2536_ = v___x_2533_;
goto v_reusejp_2535_;
}
else
{
lean_object* v_reuseFailAlloc_2537_; 
v_reuseFailAlloc_2537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2537_, 0, v_a_2531_);
v___x_2536_ = v_reuseFailAlloc_2537_;
goto v_reusejp_2535_;
}
v_reusejp_2535_:
{
return v___x_2536_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getSimprocs___redArg___boxed(lean_object* v_a_2539_, lean_object* v_a_2540_, lean_object* v_a_2541_){
_start:
{
lean_object* v_res_2542_; 
v_res_2542_ = l_Lean_Meta_Grind_getSimprocs___redArg(v_a_2539_, v_a_2540_);
lean_dec(v_a_2540_);
lean_dec_ref(v_a_2539_);
return v_res_2542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getSimprocs(lean_object* v_a_2543_, lean_object* v_a_2544_, lean_object* v_a_2545_, lean_object* v_a_2546_){
_start:
{
lean_object* v___x_2548_; 
v___x_2548_ = l_Lean_Meta_Grind_getSimprocs___redArg(v_a_2545_, v_a_2546_);
return v___x_2548_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getSimprocs___boxed(lean_object* v_a_2549_, lean_object* v_a_2550_, lean_object* v_a_2551_, lean_object* v_a_2552_, lean_object* v_a_2553_){
_start:
{
lean_object* v_res_2554_; 
v_res_2554_ = l_Lean_Meta_Grind_getSimprocs(v_a_2549_, v_a_2550_, v_a_2551_, v_a_2552_);
lean_dec(v_a_2552_);
lean_dec_ref(v_a_2551_);
lean_dec(v_a_2550_);
lean_dec_ref(v_a_2549_);
return v_res_2554_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_addDeclToUnfold(lean_object* v_s_2555_, lean_object* v_declName_2556_, lean_object* v_a_2557_, lean_object* v_a_2558_, lean_object* v_a_2559_, lean_object* v_a_2560_){
_start:
{
lean_object* v___x_2562_; lean_object* v_env_2563_; uint8_t v___x_2564_; uint8_t v___x_2565_; 
v___x_2562_ = lean_st_ref_get(v_a_2560_);
v_env_2563_ = lean_ctor_get(v___x_2562_, 0);
lean_inc_ref(v_env_2563_);
lean_dec(v___x_2562_);
v___x_2564_ = 1;
lean_inc(v_declName_2556_);
v___x_2565_ = l_Lean_Environment_contains(v_env_2563_, v_declName_2556_, v___x_2564_);
if (v___x_2565_ == 0)
{
lean_object* v___x_2566_; 
lean_dec(v_declName_2556_);
v___x_2566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2566_, 0, v_s_2555_);
return v___x_2566_;
}
else
{
lean_object* v___x_2567_; 
v___x_2567_ = l_Lean_Meta_SimpTheorems_addDeclToUnfold(v_s_2555_, v_declName_2556_, v_a_2557_, v_a_2558_, v_a_2559_, v_a_2560_);
return v___x_2567_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_addDeclToUnfold___boxed(lean_object* v_s_2568_, lean_object* v_declName_2569_, lean_object* v_a_2570_, lean_object* v_a_2571_, lean_object* v_a_2572_, lean_object* v_a_2573_, lean_object* v_a_2574_){
_start:
{
lean_object* v_res_2575_; 
v_res_2575_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_addDeclToUnfold(v_s_2568_, v_declName_2569_, v_a_2570_, v_a_2571_, v_a_2572_, v_a_2573_);
lean_dec(v_a_2573_);
lean_dec_ref(v_a_2572_);
lean_dec(v_a_2571_);
lean_dec_ref(v_a_2570_);
return v_res_2575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNormTheorems(lean_object* v_a_2576_, lean_object* v_a_2577_, lean_object* v_a_2578_, lean_object* v_a_2579_){
_start:
{
lean_object* v___x_2581_; lean_object* v___x_2582_; 
v___x_2581_ = l_Lean_Meta_Grind_normExt;
v___x_2582_ = l_Lean_Meta_SimpExtension_getTheorems___redArg(v___x_2581_, v_a_2579_);
if (lean_obj_tag(v___x_2582_) == 0)
{
lean_object* v_a_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; 
v_a_2583_ = lean_ctor_get(v___x_2582_, 0);
lean_inc(v_a_2583_);
lean_dec_ref_known(v___x_2582_, 1);
v___x_2584_ = ((lean_object*)(l_Lean_Meta_Grind_registerNormTheorems___closed__7));
v___x_2585_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_addDeclToUnfold(v_a_2583_, v___x_2584_, v_a_2576_, v_a_2577_, v_a_2578_, v_a_2579_);
if (lean_obj_tag(v___x_2585_) == 0)
{
lean_object* v_a_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; 
v_a_2586_ = lean_ctor_get(v___x_2585_, 0);
lean_inc(v_a_2586_);
lean_dec_ref_known(v___x_2585_, 1);
v___x_2587_ = ((lean_object*)(l_Lean_Meta_Grind_registerNormTheorems___closed__10));
v___x_2588_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_addDeclToUnfold(v_a_2586_, v___x_2587_, v_a_2576_, v_a_2577_, v_a_2578_, v_a_2579_);
if (lean_obj_tag(v___x_2588_) == 0)
{
lean_object* v_a_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; 
v_a_2589_ = lean_ctor_get(v___x_2588_, 0);
lean_inc(v_a_2589_);
lean_dec_ref_known(v___x_2588_, 1);
v___x_2590_ = ((lean_object*)(l_Lean_Meta_Grind_registerNormTheorems___closed__12));
v___x_2591_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_addDeclToUnfold(v_a_2589_, v___x_2590_, v_a_2576_, v_a_2577_, v_a_2578_, v_a_2579_);
if (lean_obj_tag(v___x_2591_) == 0)
{
lean_object* v_a_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; 
v_a_2592_ = lean_ctor_get(v___x_2591_, 0);
lean_inc(v_a_2592_);
lean_dec_ref_known(v___x_2591_, 1);
v___x_2593_ = ((lean_object*)(l_Lean_Meta_Grind_registerNormTheorems___closed__15));
v___x_2594_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_addDeclToUnfold(v_a_2592_, v___x_2593_, v_a_2576_, v_a_2577_, v_a_2578_, v_a_2579_);
if (lean_obj_tag(v___x_2594_) == 0)
{
lean_object* v_a_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; 
v_a_2595_ = lean_ctor_get(v___x_2594_, 0);
lean_inc(v_a_2595_);
lean_dec_ref_known(v___x_2594_, 1);
v___x_2596_ = ((lean_object*)(l_Lean_Meta_Grind_registerNormTheorems___closed__17));
v___x_2597_ = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0__Lean_Meta_Grind_addDeclToUnfold(v_a_2595_, v___x_2596_, v_a_2576_, v_a_2577_, v_a_2578_, v_a_2579_);
return v___x_2597_;
}
else
{
return v___x_2594_;
}
}
else
{
return v___x_2591_;
}
}
else
{
return v___x_2588_;
}
}
else
{
return v___x_2585_;
}
}
else
{
return v___x_2582_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNormTheorems___boxed(lean_object* v_a_2598_, lean_object* v_a_2599_, lean_object* v_a_2600_, lean_object* v_a_2601_, lean_object* v_a_2602_){
_start:
{
lean_object* v_res_2603_; 
v_res_2603_ = l_Lean_Meta_Grind_getNormTheorems(v_a_2598_, v_a_2599_, v_a_2600_, v_a_2601_);
lean_dec(v_a_2601_);
lean_dec_ref(v_a_2600_);
lean_dec(v_a_2599_);
lean_dec_ref(v_a_2598_);
return v_res_2603_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getSimpContext(lean_object* v_config_2604_, lean_object* v_a_2605_, lean_object* v_a_2606_, lean_object* v_a_2607_, lean_object* v_a_2608_){
_start:
{
lean_object* v___x_2610_; 
v___x_2610_ = l_Lean_Meta_Grind_getNormTheorems(v_a_2605_, v_a_2606_, v_a_2607_, v_a_2608_);
if (lean_obj_tag(v___x_2610_) == 0)
{
lean_object* v_a_2611_; lean_object* v___x_2612_; 
v_a_2611_ = lean_ctor_get(v___x_2610_, 0);
lean_inc(v_a_2611_);
lean_dec_ref_known(v___x_2610_, 1);
v___x_2612_ = l_Lean_Meta_getSimpCongrTheorems___redArg(v_a_2608_);
if (lean_obj_tag(v___x_2612_) == 0)
{
lean_object* v_a_2613_; uint8_t v_zetaDelta_2614_; uint8_t v_zeta_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; uint8_t v___x_2618_; uint8_t v___x_2619_; uint8_t v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; 
v_a_2613_ = lean_ctor_get(v___x_2612_, 0);
lean_inc(v_a_2613_);
lean_dec_ref_known(v___x_2612_, 1);
v_zetaDelta_2614_ = lean_ctor_get_uint8(v_config_2604_, sizeof(void*)*18 + 19);
v_zeta_2615_ = lean_ctor_get_uint8(v_config_2604_, sizeof(void*)*18 + 20);
v___x_2616_ = lean_unsigned_to_nat(100000u);
v___x_2617_ = lean_unsigned_to_nat(2u);
v___x_2618_ = 0;
v___x_2619_ = 1;
v___x_2620_ = 0;
v___x_2621_ = lean_box(0);
v___x_2622_ = lean_alloc_ctor(0, 3, 29);
lean_ctor_set(v___x_2622_, 0, v___x_2616_);
lean_ctor_set(v___x_2622_, 1, v___x_2617_);
lean_ctor_set(v___x_2622_, 2, v___x_2621_);
lean_ctor_set_uint8(v___x_2622_, sizeof(void*)*3, v___x_2618_);
lean_ctor_set_uint8(v___x_2622_, sizeof(void*)*3 + 1, v___x_2619_);
lean_ctor_set_uint8(v___x_2622_, sizeof(void*)*3 + 2, v___x_2618_);
lean_ctor_set_uint8(v___x_2622_, sizeof(void*)*3 + 3, v_zeta_2615_);
lean_ctor_set_uint8(v___x_2622_, sizeof(void*)*3 + 4, v___x_2619_);
lean_ctor_set_uint8(v___x_2622_, sizeof(void*)*3 + 5, v___x_2619_);
lean_ctor_set_uint8(v___x_2622_, sizeof(void*)*3 + 6, v___x_2620_);
lean_ctor_set_uint8(v___x_2622_, sizeof(void*)*3 + 7, v___x_2619_);
lean_ctor_set_uint8(v___x_2622_, sizeof(void*)*3 + 8, v___x_2619_);
lean_ctor_set_uint8(v___x_2622_, sizeof(void*)*3 + 9, v___x_2618_);
lean_ctor_set_uint8(v___x_2622_, sizeof(void*)*3 + 10, v___x_2619_);
lean_ctor_set_uint8(v___x_2622_, sizeof(void*)*3 + 11, v___x_2618_);
lean_ctor_set_uint8(v___x_2622_, sizeof(void*)*3 + 12, v___x_2619_);
lean_ctor_set_uint8(v___x_2622_, sizeof(void*)*3 + 13, v___x_2619_);
lean_ctor_set_uint8(v___x_2622_, sizeof(void*)*3 + 14, v___x_2618_);
lean_ctor_set_uint8(v___x_2622_, sizeof(void*)*3 + 15, v___x_2618_);
lean_ctor_set_uint8(v___x_2622_, sizeof(void*)*3 + 16, v_zetaDelta_2614_);
lean_ctor_set_uint8(v___x_2622_, sizeof(void*)*3 + 17, v___x_2619_);
lean_ctor_set_uint8(v___x_2622_, sizeof(void*)*3 + 18, v___x_2618_);
lean_ctor_set_uint8(v___x_2622_, sizeof(void*)*3 + 19, v___x_2619_);
lean_ctor_set_uint8(v___x_2622_, sizeof(void*)*3 + 20, v___x_2618_);
lean_ctor_set_uint8(v___x_2622_, sizeof(void*)*3 + 21, v___x_2619_);
lean_ctor_set_uint8(v___x_2622_, sizeof(void*)*3 + 22, v___x_2619_);
lean_ctor_set_uint8(v___x_2622_, sizeof(void*)*3 + 23, v___x_2619_);
lean_ctor_set_uint8(v___x_2622_, sizeof(void*)*3 + 24, v___x_2618_);
lean_ctor_set_uint8(v___x_2622_, sizeof(void*)*3 + 25, v___x_2618_);
lean_ctor_set_uint8(v___x_2622_, sizeof(void*)*3 + 26, v___x_2618_);
lean_ctor_set_uint8(v___x_2622_, sizeof(void*)*3 + 27, v___x_2618_);
lean_ctor_set_uint8(v___x_2622_, sizeof(void*)*3 + 28, v___x_2618_);
v___x_2623_ = lean_unsigned_to_nat(1u);
v___x_2624_ = lean_mk_empty_array_with_capacity(v___x_2623_);
v___x_2625_ = lean_array_push(v___x_2624_, v_a_2611_);
v___x_2626_ = l_Lean_Options_empty;
v___x_2627_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_2622_, v___x_2625_, v_a_2613_, v___x_2626_, v_a_2605_, v_a_2607_, v_a_2608_);
return v___x_2627_;
}
else
{
lean_object* v_a_2628_; lean_object* v___x_2630_; uint8_t v_isShared_2631_; uint8_t v_isSharedCheck_2635_; 
lean_dec(v_a_2611_);
v_a_2628_ = lean_ctor_get(v___x_2612_, 0);
v_isSharedCheck_2635_ = !lean_is_exclusive(v___x_2612_);
if (v_isSharedCheck_2635_ == 0)
{
v___x_2630_ = v___x_2612_;
v_isShared_2631_ = v_isSharedCheck_2635_;
goto v_resetjp_2629_;
}
else
{
lean_inc(v_a_2628_);
lean_dec(v___x_2612_);
v___x_2630_ = lean_box(0);
v_isShared_2631_ = v_isSharedCheck_2635_;
goto v_resetjp_2629_;
}
v_resetjp_2629_:
{
lean_object* v___x_2633_; 
if (v_isShared_2631_ == 0)
{
v___x_2633_ = v___x_2630_;
goto v_reusejp_2632_;
}
else
{
lean_object* v_reuseFailAlloc_2634_; 
v_reuseFailAlloc_2634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2634_, 0, v_a_2628_);
v___x_2633_ = v_reuseFailAlloc_2634_;
goto v_reusejp_2632_;
}
v_reusejp_2632_:
{
return v___x_2633_;
}
}
}
}
else
{
lean_object* v_a_2636_; lean_object* v___x_2638_; uint8_t v_isShared_2639_; uint8_t v_isSharedCheck_2643_; 
v_a_2636_ = lean_ctor_get(v___x_2610_, 0);
v_isSharedCheck_2643_ = !lean_is_exclusive(v___x_2610_);
if (v_isSharedCheck_2643_ == 0)
{
v___x_2638_ = v___x_2610_;
v_isShared_2639_ = v_isSharedCheck_2643_;
goto v_resetjp_2637_;
}
else
{
lean_inc(v_a_2636_);
lean_dec(v___x_2610_);
v___x_2638_ = lean_box(0);
v_isShared_2639_ = v_isSharedCheck_2643_;
goto v_resetjp_2637_;
}
v_resetjp_2637_:
{
lean_object* v___x_2641_; 
if (v_isShared_2639_ == 0)
{
v___x_2641_ = v___x_2638_;
goto v_reusejp_2640_;
}
else
{
lean_object* v_reuseFailAlloc_2642_; 
v_reuseFailAlloc_2642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2642_, 0, v_a_2636_);
v___x_2641_ = v_reuseFailAlloc_2642_;
goto v_reusejp_2640_;
}
v_reusejp_2640_:
{
return v___x_2641_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getSimpContext___boxed(lean_object* v_config_2644_, lean_object* v_a_2645_, lean_object* v_a_2646_, lean_object* v_a_2647_, lean_object* v_a_2648_, lean_object* v_a_2649_){
_start:
{
lean_object* v_res_2650_; 
v_res_2650_ = l_Lean_Meta_Grind_getSimpContext(v_config_2644_, v_a_2645_, v_a_2646_, v_a_2647_, v_a_2648_);
lean_dec(v_a_2648_);
lean_dec_ref(v_a_2647_);
lean_dec(v_a_2646_);
lean_dec_ref(v_a_2645_);
lean_dec_ref(v_config_2644_);
return v_res_2650_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_MatchDiscrOnly(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_ForallProp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_List(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Decidable(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Util(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Norm(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Config(uint8_t builtin);
lean_object* runtime_initialize_Init_ByCases(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_SimpUtil(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_MatchDiscrOnly(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_ForallProp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_List(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Decidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Norm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_ByCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpEq_declare__11_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1647516665____hygCtx___hyg_13_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpIteToCond_declare__16_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3199362635____hygCtx___hyg_14_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpProjectedDecisionEq_declare__21_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1166571523____hygCtx___hyg_13_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpDIte_declare__26_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_423278053____hygCtx___hyg_14_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_pushNot_declare__31_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_2103990232____hygCtx___hyg_11_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_simpOr_declare__36_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_902628210____hygCtx___hyg_12_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_reduceCtorEqCheap_declare__41_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_3634819044____hygCtx___hyg_14_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_SimpUtil_0____regBuiltin_Lean_Meta_Grind_unfoldReducibleSimproc_declare__46_00___x40_Lean_Meta_Tactic_Grind_SimpUtil_1981575202____hygCtx___hyg_10_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_SimpUtil(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Simp_Simproc(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_MatchDiscrOnly(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_ForallProp(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Simproc(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_List(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Decidable(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Util(uint8_t builtin);
lean_object* initialize_Init_Grind_Norm(uint8_t builtin);
lean_object* initialize_Init_Grind_Config(uint8_t builtin);
lean_object* initialize_Init_ByCases(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_SimpUtil(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_MatchDiscrOnly(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_ForallProp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_List(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_BuiltinSimprocs_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Decidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Norm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_ByCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_SimpUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_SimpUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_SimpUtil(builtin);
}
#ifdef __cplusplus
}
#endif
