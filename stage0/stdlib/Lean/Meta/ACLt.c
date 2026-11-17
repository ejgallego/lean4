// Lean compiler output
// Module: Lean.Meta.ACLt
// Imports: public import Lean.Meta.DiscrTree.Main import Init.Data.Range.Polymorphic.Iterators import Lean.Meta.FunInfo
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
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instInhabitedParamInfo_default;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isMData(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_reduce(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Config_toConfigWithKey(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_uint8_dec_lt(uint8_t, uint8_t);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
lean_object* l_Lean_Expr_bvarIdx_x21(lean_object*);
lean_object* l_Lean_FVarId_findDecl_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_LocalDecl_index(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedLocalDecl_default;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
uint8_t l_Lean_Name_lt(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sortLevel_x21(lean_object*);
uint8_t l_Lean_Level_normLt(lean_object*, lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letValue_x21(lean_object*);
lean_object* l_Lean_Expr_letBody_x21(lean_object*);
lean_object* l_Lean_Expr_litValue_x21(lean_object*);
uint8_t l_Lean_Literal_lt(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_projIdx_x21(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_projExpr_x21(lean_object*);
lean_object* l_Lean_Expr_mdataExpr_x21(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_ctorWeight(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_ctorWeight___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduce_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduce_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduce_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduce_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduceSimpleOnly_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduceSimpleOnly_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduceSimpleOnly_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduceSimpleOnly_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_none_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_none_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_none_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_none_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 2, 0, 1, 0, 1, 0, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config___closed__0 = (const lean_object*)&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_reduce(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_reduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo___closed__0 = (const lean_object*)&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__3___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__2(lean_object*);
static const lean_string_object l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lpo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lean.Meta.acLt"};
static const lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lpo___closed__0 = (const lean_object*)&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lpo___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltPair(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__2 = (const lean_object*)&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__2_value;
static const lean_string_object l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__1 = (const lean_object*)&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__1_value;
static const lean_string_object l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__0 = (const lean_object*)&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__3;
static lean_once_cell_t l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__0;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__6 = (const lean_object*)&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__6_value;
static const lean_string_object l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "_private.Lean.Meta.ACLt.0.Lean.Meta.ACLt.main.lexSameCtor"};
static const lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__5 = (const lean_object*)&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__5_value;
static const lean_string_object l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lean.Meta.ACLt"};
static const lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__4 = (const lean_object*)&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lpo(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__11(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_someChildGe(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_someChildGe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltPair___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lpo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_main(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_acLt(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_acLt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_ctorWeight(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
uint8_t v___x_2_; 
v___x_2_ = 0;
return v___x_2_;
}
case 1:
{
uint8_t v___x_3_; 
v___x_3_ = 1;
return v___x_3_;
}
case 2:
{
uint8_t v___x_4_; 
v___x_4_ = 2;
return v___x_4_;
}
case 3:
{
uint8_t v___x_5_; 
v___x_5_ = 3;
return v___x_5_;
}
case 4:
{
uint8_t v___x_6_; 
v___x_6_ = 4;
return v___x_6_;
}
case 5:
{
uint8_t v___x_7_; 
v___x_7_ = 8;
return v___x_7_;
}
case 6:
{
uint8_t v___x_8_; 
v___x_8_ = 9;
return v___x_8_;
}
case 7:
{
uint8_t v___x_9_; 
v___x_9_ = 10;
return v___x_9_;
}
case 8:
{
uint8_t v___x_10_; 
v___x_10_ = 11;
return v___x_10_;
}
case 9:
{
uint8_t v___x_11_; 
v___x_11_ = 5;
return v___x_11_;
}
case 10:
{
uint8_t v___x_12_; 
v___x_12_ = 6;
return v___x_12_;
}
default: 
{
uint8_t v___x_13_; 
v___x_13_ = 7;
return v___x_13_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_ctorWeight___boxed(lean_object* v_x_14_){
_start:
{
uint8_t v_res_15_; lean_object* v_r_16_; 
v_res_15_ = l_Lean_Expr_ctorWeight(v_x_14_);
lean_dec_ref(v_x_14_);
v_r_16_ = lean_box(v_res_15_);
return v_r_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorIdx___impl(uint8_t v_x_17_){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_18_ = lean_box(v_x_17_);
v___x_19_ = lean_obj_tag_nat(v___x_18_);
lean_dec(v___x_18_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorIdx___impl___boxed(lean_object* v_x_20_){
_start:
{
uint8_t v_x_4__boxed_21_; lean_object* v_res_22_; 
v_x_4__boxed_21_ = lean_unbox(v_x_20_);
v_res_22_ = l_Lean_Meta_ACLt_ReduceMode_ctorIdx___impl(v_x_4__boxed_21_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorElim___redArg(lean_object* v_k_23_){
_start:
{
lean_inc(v_k_23_);
return v_k_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorElim___redArg___boxed(lean_object* v_k_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_Meta_ACLt_ReduceMode_ctorElim___redArg(v_k_24_);
lean_dec(v_k_24_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorElim(lean_object* v_motive_26_, lean_object* v_ctorIdx_27_, uint8_t v_t_28_, lean_object* v_h_29_, lean_object* v_k_30_){
_start:
{
lean_inc(v_k_30_);
return v_k_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorElim___boxed(lean_object* v_motive_31_, lean_object* v_ctorIdx_32_, lean_object* v_t_33_, lean_object* v_h_34_, lean_object* v_k_35_){
_start:
{
uint8_t v_t_boxed_36_; lean_object* v_res_37_; 
v_t_boxed_36_ = lean_unbox(v_t_33_);
v_res_37_ = l_Lean_Meta_ACLt_ReduceMode_ctorElim(v_motive_31_, v_ctorIdx_32_, v_t_boxed_36_, v_h_34_, v_k_35_);
lean_dec(v_k_35_);
lean_dec(v_ctorIdx_32_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduce_elim___redArg(lean_object* v_reduce_38_){
_start:
{
lean_inc(v_reduce_38_);
return v_reduce_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduce_elim___redArg___boxed(lean_object* v_reduce_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l_Lean_Meta_ACLt_ReduceMode_reduce_elim___redArg(v_reduce_39_);
lean_dec(v_reduce_39_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduce_elim(lean_object* v_motive_41_, uint8_t v_t_42_, lean_object* v_h_43_, lean_object* v_reduce_44_){
_start:
{
lean_inc(v_reduce_44_);
return v_reduce_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduce_elim___boxed(lean_object* v_motive_45_, lean_object* v_t_46_, lean_object* v_h_47_, lean_object* v_reduce_48_){
_start:
{
uint8_t v_t_boxed_49_; lean_object* v_res_50_; 
v_t_boxed_49_ = lean_unbox(v_t_46_);
v_res_50_ = l_Lean_Meta_ACLt_ReduceMode_reduce_elim(v_motive_45_, v_t_boxed_49_, v_h_47_, v_reduce_48_);
lean_dec(v_reduce_48_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduceSimpleOnly_elim___redArg(lean_object* v_reduceSimpleOnly_51_){
_start:
{
lean_inc(v_reduceSimpleOnly_51_);
return v_reduceSimpleOnly_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduceSimpleOnly_elim___redArg___boxed(lean_object* v_reduceSimpleOnly_52_){
_start:
{
lean_object* v_res_53_; 
v_res_53_ = l_Lean_Meta_ACLt_ReduceMode_reduceSimpleOnly_elim___redArg(v_reduceSimpleOnly_52_);
lean_dec(v_reduceSimpleOnly_52_);
return v_res_53_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduceSimpleOnly_elim(lean_object* v_motive_54_, uint8_t v_t_55_, lean_object* v_h_56_, lean_object* v_reduceSimpleOnly_57_){
_start:
{
lean_inc(v_reduceSimpleOnly_57_);
return v_reduceSimpleOnly_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduceSimpleOnly_elim___boxed(lean_object* v_motive_58_, lean_object* v_t_59_, lean_object* v_h_60_, lean_object* v_reduceSimpleOnly_61_){
_start:
{
uint8_t v_t_boxed_62_; lean_object* v_res_63_; 
v_t_boxed_62_ = lean_unbox(v_t_59_);
v_res_63_ = l_Lean_Meta_ACLt_ReduceMode_reduceSimpleOnly_elim(v_motive_58_, v_t_boxed_62_, v_h_60_, v_reduceSimpleOnly_61_);
lean_dec(v_reduceSimpleOnly_61_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_none_elim___redArg(lean_object* v_none_64_){
_start:
{
lean_inc(v_none_64_);
return v_none_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_none_elim___redArg___boxed(lean_object* v_none_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l_Lean_Meta_ACLt_ReduceMode_none_elim___redArg(v_none_65_);
lean_dec(v_none_65_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_none_elim(lean_object* v_motive_67_, uint8_t v_t_68_, lean_object* v_h_69_, lean_object* v_none_70_){
_start:
{
lean_inc(v_none_70_);
return v_none_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_none_elim___boxed(lean_object* v_motive_71_, lean_object* v_t_72_, lean_object* v_h_73_, lean_object* v_none_74_){
_start:
{
uint8_t v_t_boxed_75_; lean_object* v_res_76_; 
v_t_boxed_75_ = lean_unbox(v_t_72_);
v_res_76_ = l_Lean_Meta_ACLt_ReduceMode_none_elim(v_motive_71_, v_t_boxed_75_, v_h_73_, v_none_74_);
lean_dec(v_none_74_);
return v_res_76_;
}
}
static lean_object* _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config___closed__1(void){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_83_ = ((lean_object*)(l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config___closed__0));
v___x_84_ = l_Lean_Meta_Config_toConfigWithKey(v___x_83_);
return v___x_84_;
}
}
static lean_object* _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config(void){
_start:
{
lean_object* v___x_85_; 
v___x_85_ = lean_obj_once(&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config___closed__1, &l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config___closed__1_once, _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config___closed__1);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_reduce(uint8_t v_mode_86_, lean_object* v_e_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_){
_start:
{
uint8_t v___x_93_; 
v___x_93_ = l_Lean_Expr_hasLooseBVars(v_e_87_);
if (v___x_93_ == 0)
{
switch(v_mode_86_)
{
case 0:
{
lean_object* v___x_94_; 
v___x_94_ = l_Lean_Meta_DiscrTree_reduce(v_e_87_, v_a_88_, v_a_89_, v_a_90_, v_a_91_);
return v___x_94_;
}
case 1:
{
lean_object* v___x_95_; lean_object* v_config_96_; uint8_t v_trackZetaDelta_97_; lean_object* v_zetaDeltaSet_98_; lean_object* v_lctx_99_; lean_object* v_localInstances_100_; lean_object* v_defEqCtx_x3f_101_; lean_object* v_synthPendingDepth_102_; lean_object* v_customCanUnfoldPredicate_x3f_103_; uint8_t v_univApprox_104_; uint8_t v_inTypeClassResolution_105_; uint8_t v_cacheInferType_106_; uint64_t v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_95_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config;
v_config_96_ = lean_ctor_get(v___x_95_, 0);
v_trackZetaDelta_97_ = lean_ctor_get_uint8(v_a_88_, sizeof(void*)*7);
v_zetaDeltaSet_98_ = lean_ctor_get(v_a_88_, 1);
v_lctx_99_ = lean_ctor_get(v_a_88_, 2);
v_localInstances_100_ = lean_ctor_get(v_a_88_, 3);
v_defEqCtx_x3f_101_ = lean_ctor_get(v_a_88_, 4);
v_synthPendingDepth_102_ = lean_ctor_get(v_a_88_, 5);
v_customCanUnfoldPredicate_x3f_103_ = lean_ctor_get(v_a_88_, 6);
v_univApprox_104_ = lean_ctor_get_uint8(v_a_88_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_105_ = lean_ctor_get_uint8(v_a_88_, sizeof(void*)*7 + 2);
v_cacheInferType_106_ = lean_ctor_get_uint8(v_a_88_, sizeof(void*)*7 + 3);
v___x_107_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v_config_96_);
lean_inc_ref(v_config_96_);
v___x_108_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_108_, 0, v_config_96_);
lean_ctor_set_uint64(v___x_108_, sizeof(void*)*1, v___x_107_);
lean_inc(v_customCanUnfoldPredicate_x3f_103_);
lean_inc(v_synthPendingDepth_102_);
lean_inc(v_defEqCtx_x3f_101_);
lean_inc_ref(v_localInstances_100_);
lean_inc_ref(v_lctx_99_);
lean_inc(v_zetaDeltaSet_98_);
v___x_109_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_109_, 0, v___x_108_);
lean_ctor_set(v___x_109_, 1, v_zetaDeltaSet_98_);
lean_ctor_set(v___x_109_, 2, v_lctx_99_);
lean_ctor_set(v___x_109_, 3, v_localInstances_100_);
lean_ctor_set(v___x_109_, 4, v_defEqCtx_x3f_101_);
lean_ctor_set(v___x_109_, 5, v_synthPendingDepth_102_);
lean_ctor_set(v___x_109_, 6, v_customCanUnfoldPredicate_x3f_103_);
lean_ctor_set_uint8(v___x_109_, sizeof(void*)*7, v_trackZetaDelta_97_);
lean_ctor_set_uint8(v___x_109_, sizeof(void*)*7 + 1, v_univApprox_104_);
lean_ctor_set_uint8(v___x_109_, sizeof(void*)*7 + 2, v_inTypeClassResolution_105_);
lean_ctor_set_uint8(v___x_109_, sizeof(void*)*7 + 3, v_cacheInferType_106_);
v___x_110_ = l_Lean_Meta_DiscrTree_reduce(v_e_87_, v___x_109_, v_a_89_, v_a_90_, v_a_91_);
lean_dec_ref_known(v___x_109_, 7);
return v___x_110_;
}
default: 
{
lean_object* v___x_111_; 
v___x_111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_111_, 0, v_e_87_);
return v___x_111_;
}
}
}
else
{
lean_object* v___x_112_; 
v___x_112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_112_, 0, v_e_87_);
return v___x_112_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_reduce___boxed(lean_object* v_mode_113_, lean_object* v_e_114_, lean_object* v_a_115_, lean_object* v_a_116_, lean_object* v_a_117_, lean_object* v_a_118_, lean_object* v_a_119_){
_start:
{
uint8_t v_mode_boxed_120_; lean_object* v_res_121_; 
v_mode_boxed_120_ = lean_unbox(v_mode_113_);
v_res_121_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_reduce(v_mode_boxed_120_, v_e_114_, v_a_115_, v_a_116_, v_a_117_, v_a_118_);
lean_dec(v_a_118_);
lean_dec_ref(v_a_117_);
lean_dec(v_a_116_);
lean_dec_ref(v_a_115_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo(lean_object* v_f_124_, lean_object* v_numArgs_125_, lean_object* v_a_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_){
_start:
{
uint8_t v___x_131_; 
v___x_131_ = l_Lean_Expr_hasLooseBVars(v_f_124_);
if (v___x_131_ == 0)
{
lean_object* v___x_132_; 
v___x_132_ = l_Lean_Meta_getFunInfoNArgs(v_f_124_, v_numArgs_125_, v_a_126_, v_a_127_, v_a_128_, v_a_129_);
if (lean_obj_tag(v___x_132_) == 0)
{
lean_object* v_a_133_; lean_object* v___x_135_; uint8_t v_isShared_136_; uint8_t v_isSharedCheck_141_; 
v_a_133_ = lean_ctor_get(v___x_132_, 0);
v_isSharedCheck_141_ = !lean_is_exclusive(v___x_132_);
if (v_isSharedCheck_141_ == 0)
{
v___x_135_ = v___x_132_;
v_isShared_136_ = v_isSharedCheck_141_;
goto v_resetjp_134_;
}
else
{
lean_inc(v_a_133_);
lean_dec(v___x_132_);
v___x_135_ = lean_box(0);
v_isShared_136_ = v_isSharedCheck_141_;
goto v_resetjp_134_;
}
v_resetjp_134_:
{
lean_object* v_paramInfo_137_; lean_object* v___x_139_; 
v_paramInfo_137_ = lean_ctor_get(v_a_133_, 0);
lean_inc_ref(v_paramInfo_137_);
lean_dec(v_a_133_);
if (v_isShared_136_ == 0)
{
lean_ctor_set(v___x_135_, 0, v_paramInfo_137_);
v___x_139_ = v___x_135_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v_paramInfo_137_);
v___x_139_ = v_reuseFailAlloc_140_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
return v___x_139_;
}
}
}
else
{
lean_object* v_a_142_; lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_149_; 
v_a_142_ = lean_ctor_get(v___x_132_, 0);
v_isSharedCheck_149_ = !lean_is_exclusive(v___x_132_);
if (v_isSharedCheck_149_ == 0)
{
v___x_144_ = v___x_132_;
v_isShared_145_ = v_isSharedCheck_149_;
goto v_resetjp_143_;
}
else
{
lean_inc(v_a_142_);
lean_dec(v___x_132_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_149_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
lean_object* v___x_147_; 
if (v_isShared_145_ == 0)
{
v___x_147_ = v___x_144_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v_a_142_);
v___x_147_ = v_reuseFailAlloc_148_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
return v___x_147_;
}
}
}
}
else
{
lean_object* v___x_150_; lean_object* v___x_151_; 
lean_dec(v_numArgs_125_);
lean_dec_ref(v_f_124_);
v___x_150_ = ((lean_object*)(l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo___closed__0));
v___x_151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
return v___x_151_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo___boxed(lean_object* v_f_152_, lean_object* v_numArgs_153_, lean_object* v_a_154_, lean_object* v_a_155_, lean_object* v_a_156_, lean_object* v_a_157_, lean_object* v_a_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo(v_f_152_, v_numArgs_153_, v_a_154_, v_a_155_, v_a_156_, v_a_157_);
lean_dec(v_a_157_);
lean_dec_ref(v_a_156_);
lean_dec(v_a_155_);
lean_dec_ref(v_a_154_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__3(lean_object* v_msg_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_){
_start:
{
lean_object* v___f_167_; lean_object* v___x_14295__overap_168_; lean_object* v___x_169_; 
v___f_167_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__3___closed__0));
v___x_14295__overap_168_ = lean_panic_fn_borrowed(v___f_167_, v_msg_161_);
lean_inc(v___y_165_);
lean_inc_ref(v___y_164_);
lean_inc(v___y_163_);
lean_inc_ref(v___y_162_);
v___x_169_ = lean_apply_5(v___x_14295__overap_168_, v___y_162_, v___y_163_, v___y_164_, v___y_165_, lean_box(0));
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__3___boxed(lean_object* v_msg_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__3(v_msg_170_, v___y_171_, v___y_172_, v___y_173_, v___y_174_);
lean_dec(v___y_174_);
lean_dec_ref(v___y_173_);
lean_dec(v___y_172_);
lean_dec_ref(v___y_171_);
return v_res_176_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__2(lean_object* v_msg_177_){
_start:
{
lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_178_ = l_Lean_instInhabitedLocalDecl_default;
v___x_179_ = lean_panic_fn_borrowed(v___x_178_, v_msg_177_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltPair(uint8_t v_mode_181_, lean_object* v_a_u2081_182_, lean_object* v_a_u2082_183_, lean_object* v_b_u2081_184_, lean_object* v_b_u2082_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_){
_start:
{
lean_object* v___x_191_; 
lean_inc_ref(v_b_u2081_184_);
lean_inc_ref(v_a_u2081_182_);
v___x_191_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_181_, v_a_u2081_182_, v_b_u2081_184_, v_a_186_, v_a_187_, v_a_188_, v_a_189_);
if (lean_obj_tag(v___x_191_) == 0)
{
lean_object* v_a_192_; uint8_t v___x_193_; 
v_a_192_ = lean_ctor_get(v___x_191_, 0);
v___x_193_ = lean_unbox(v_a_192_);
if (v___x_193_ == 0)
{
lean_object* v___x_194_; 
lean_inc(v_a_192_);
lean_dec_ref_known(v___x_191_, 1);
v___x_194_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_181_, v_b_u2081_184_, v_a_u2081_182_, v_a_186_, v_a_187_, v_a_188_, v_a_189_);
if (lean_obj_tag(v___x_194_) == 0)
{
lean_object* v_a_195_; lean_object* v___x_197_; uint8_t v_isShared_198_; uint8_t v_isSharedCheck_204_; 
v_a_195_ = lean_ctor_get(v___x_194_, 0);
v_isSharedCheck_204_ = !lean_is_exclusive(v___x_194_);
if (v_isSharedCheck_204_ == 0)
{
v___x_197_ = v___x_194_;
v_isShared_198_ = v_isSharedCheck_204_;
goto v_resetjp_196_;
}
else
{
lean_inc(v_a_195_);
lean_dec(v___x_194_);
v___x_197_ = lean_box(0);
v_isShared_198_ = v_isSharedCheck_204_;
goto v_resetjp_196_;
}
v_resetjp_196_:
{
uint8_t v___x_199_; 
v___x_199_ = lean_unbox(v_a_195_);
lean_dec(v_a_195_);
if (v___x_199_ == 0)
{
lean_object* v___x_200_; 
lean_del_object(v___x_197_);
lean_dec(v_a_192_);
v___x_200_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_181_, v_a_u2082_183_, v_b_u2082_185_, v_a_186_, v_a_187_, v_a_188_, v_a_189_);
return v___x_200_;
}
else
{
lean_object* v___x_202_; 
lean_dec_ref(v_b_u2082_185_);
lean_dec_ref(v_a_u2082_183_);
if (v_isShared_198_ == 0)
{
lean_ctor_set(v___x_197_, 0, v_a_192_);
v___x_202_ = v___x_197_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v_a_192_);
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
else
{
lean_dec(v_a_192_);
lean_dec_ref(v_b_u2082_185_);
lean_dec_ref(v_a_u2082_183_);
return v___x_194_;
}
}
else
{
lean_dec_ref(v_b_u2082_185_);
lean_dec_ref(v_b_u2081_184_);
lean_dec_ref(v_a_u2082_183_);
lean_dec_ref(v_a_u2081_182_);
return v___x_191_;
}
}
else
{
lean_dec_ref(v_b_u2082_185_);
lean_dec_ref(v_b_u2081_184_);
lean_dec_ref(v_a_u2082_183_);
lean_dec_ref(v_a_u2081_182_);
return v___x_191_;
}
}
}
static lean_object* _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__3(void){
_start:
{
lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_208_ = ((lean_object*)(l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__2));
v___x_209_ = lean_unsigned_to_nat(14u);
v___x_210_ = lean_unsigned_to_nat(22u);
v___x_211_ = ((lean_object*)(l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__1));
v___x_212_ = ((lean_object*)(l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__0));
v___x_213_ = l_mkPanicMessageWithDecl(v___x_212_, v___x_211_, v___x_210_, v___x_209_, v___x_208_);
return v___x_213_;
}
}
static lean_object* _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__0(void){
_start:
{
lean_object* v___x_214_; lean_object* v_dummy_215_; 
v___x_214_ = lean_box(0);
v_dummy_215_ = l_Lean_Expr_sort___override(v___x_214_);
return v_dummy_215_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7___redArg(lean_object* v_upperBound_219_, lean_object* v_a_220_, lean_object* v___x_221_, lean_object* v___x_222_, uint8_t v_mode_223_, lean_object* v_a_224_, lean_object* v_b_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_){
_start:
{
lean_object* v_a_232_; uint8_t v___x_236_; 
v___x_236_ = lean_nat_dec_lt(v_a_224_, v_upperBound_219_);
if (v___x_236_ == 0)
{
lean_object* v___x_237_; 
lean_dec(v_a_224_);
v___x_237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_237_, 0, v_b_225_);
return v___x_237_;
}
else
{
lean_object* v___x_238_; lean_object* v___x_239_; uint8_t v_isInstance_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
lean_dec_ref(v_b_225_);
v___x_238_ = l_Lean_Meta_instInhabitedParamInfo_default;
v___x_239_ = lean_array_get_borrowed(v___x_238_, v_a_220_, v_a_224_);
v_isInstance_240_ = lean_ctor_get_uint8(v___x_239_, sizeof(void*)*1 + 4);
v___x_241_ = lean_box(0);
v___x_242_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___closed__0));
if (v_isInstance_240_ == 0)
{
lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_243_ = l_Lean_instInhabitedExpr;
v___x_244_ = lean_array_get_borrowed(v___x_243_, v___x_221_, v_a_224_);
v___x_245_ = lean_array_get_borrowed(v___x_243_, v___x_222_, v_a_224_);
lean_inc(v___x_245_);
lean_inc(v___x_244_);
v___x_246_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_223_, v___x_244_, v___x_245_, v___y_226_, v___y_227_, v___y_228_, v___y_229_);
if (lean_obj_tag(v___x_246_) == 0)
{
lean_object* v_a_247_; lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_277_; 
v_a_247_ = lean_ctor_get(v___x_246_, 0);
v_isSharedCheck_277_ = !lean_is_exclusive(v___x_246_);
if (v_isSharedCheck_277_ == 0)
{
v___x_249_ = v___x_246_;
v_isShared_250_ = v_isSharedCheck_277_;
goto v_resetjp_248_;
}
else
{
lean_inc(v_a_247_);
lean_dec(v___x_246_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_277_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
uint8_t v___x_251_; 
v___x_251_ = lean_unbox(v_a_247_);
if (v___x_251_ == 0)
{
lean_object* v___x_252_; 
lean_del_object(v___x_249_);
lean_inc(v___x_244_);
lean_inc(v___x_245_);
v___x_252_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_223_, v___x_245_, v___x_244_, v___y_226_, v___y_227_, v___y_228_, v___y_229_);
if (lean_obj_tag(v___x_252_) == 0)
{
lean_object* v_a_253_; lean_object* v___x_255_; uint8_t v_isShared_256_; uint8_t v_isSharedCheck_263_; 
v_a_253_ = lean_ctor_get(v___x_252_, 0);
v_isSharedCheck_263_ = !lean_is_exclusive(v___x_252_);
if (v_isSharedCheck_263_ == 0)
{
v___x_255_ = v___x_252_;
v_isShared_256_ = v_isSharedCheck_263_;
goto v_resetjp_254_;
}
else
{
lean_inc(v_a_253_);
lean_dec(v___x_252_);
v___x_255_ = lean_box(0);
v_isShared_256_ = v_isSharedCheck_263_;
goto v_resetjp_254_;
}
v_resetjp_254_:
{
uint8_t v___x_257_; 
v___x_257_ = lean_unbox(v_a_253_);
lean_dec(v_a_253_);
if (v___x_257_ == 0)
{
lean_del_object(v___x_255_);
lean_dec(v_a_247_);
v_a_232_ = v___x_242_;
goto v___jp_231_;
}
else
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_261_; 
lean_dec(v_a_224_);
v___x_258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_258_, 0, v_a_247_);
v___x_259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_259_, 0, v___x_258_);
lean_ctor_set(v___x_259_, 1, v___x_241_);
if (v_isShared_256_ == 0)
{
lean_ctor_set(v___x_255_, 0, v___x_259_);
v___x_261_ = v___x_255_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v___x_259_);
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
lean_dec(v_a_247_);
lean_dec(v_a_224_);
v_a_264_ = lean_ctor_get(v___x_252_, 0);
v_isSharedCheck_271_ = !lean_is_exclusive(v___x_252_);
if (v_isSharedCheck_271_ == 0)
{
v___x_266_ = v___x_252_;
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_a_264_);
lean_dec(v___x_252_);
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
else
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_275_; 
lean_dec(v_a_224_);
v___x_272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_272_, 0, v_a_247_);
v___x_273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_273_, 0, v___x_272_);
lean_ctor_set(v___x_273_, 1, v___x_241_);
if (v_isShared_250_ == 0)
{
lean_ctor_set(v___x_249_, 0, v___x_273_);
v___x_275_ = v___x_249_;
goto v_reusejp_274_;
}
else
{
lean_object* v_reuseFailAlloc_276_; 
v_reuseFailAlloc_276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_276_, 0, v___x_273_);
v___x_275_ = v_reuseFailAlloc_276_;
goto v_reusejp_274_;
}
v_reusejp_274_:
{
return v___x_275_;
}
}
}
}
else
{
lean_object* v_a_278_; lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_285_; 
lean_dec(v_a_224_);
v_a_278_ = lean_ctor_get(v___x_246_, 0);
v_isSharedCheck_285_ = !lean_is_exclusive(v___x_246_);
if (v_isSharedCheck_285_ == 0)
{
v___x_280_ = v___x_246_;
v_isShared_281_ = v_isSharedCheck_285_;
goto v_resetjp_279_;
}
else
{
lean_inc(v_a_278_);
lean_dec(v___x_246_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_285_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
lean_object* v___x_283_; 
if (v_isShared_281_ == 0)
{
v___x_283_ = v___x_280_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_284_, 0, v_a_278_);
v___x_283_ = v_reuseFailAlloc_284_;
goto v_reusejp_282_;
}
v_reusejp_282_:
{
return v___x_283_;
}
}
}
}
else
{
v_a_232_ = v___x_242_;
goto v___jp_231_;
}
}
v___jp_231_:
{
lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_233_ = lean_unsigned_to_nat(1u);
v___x_234_ = lean_nat_add(v_a_224_, v___x_233_);
lean_dec(v_a_224_);
lean_inc_ref(v_a_232_);
v_a_224_ = v___x_234_;
v_b_225_ = v_a_232_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6___redArg(lean_object* v_upperBound_286_, lean_object* v___x_287_, lean_object* v___x_288_, uint8_t v_mode_289_, lean_object* v_a_290_, lean_object* v_b_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_){
_start:
{
uint8_t v___x_297_; 
v___x_297_ = lean_nat_dec_lt(v_a_290_, v_upperBound_286_);
if (v___x_297_ == 0)
{
lean_object* v___x_298_; 
lean_dec(v_a_290_);
v___x_298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_298_, 0, v_b_291_);
return v___x_298_;
}
else
{
lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
lean_dec_ref(v_b_291_);
v___x_299_ = l_Lean_instInhabitedExpr;
v___x_300_ = lean_box(0);
v___x_301_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___closed__0));
v___x_302_ = lean_array_get_borrowed(v___x_299_, v___x_287_, v_a_290_);
v___x_303_ = lean_array_get_borrowed(v___x_299_, v___x_288_, v_a_290_);
lean_inc(v___x_303_);
lean_inc(v___x_302_);
v___x_304_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_289_, v___x_302_, v___x_303_, v___y_292_, v___y_293_, v___y_294_, v___y_295_);
if (lean_obj_tag(v___x_304_) == 0)
{
lean_object* v_a_305_; lean_object* v___x_307_; uint8_t v_isShared_308_; uint8_t v_isSharedCheck_338_; 
v_a_305_ = lean_ctor_get(v___x_304_, 0);
v_isSharedCheck_338_ = !lean_is_exclusive(v___x_304_);
if (v_isSharedCheck_338_ == 0)
{
v___x_307_ = v___x_304_;
v_isShared_308_ = v_isSharedCheck_338_;
goto v_resetjp_306_;
}
else
{
lean_inc(v_a_305_);
lean_dec(v___x_304_);
v___x_307_ = lean_box(0);
v_isShared_308_ = v_isSharedCheck_338_;
goto v_resetjp_306_;
}
v_resetjp_306_:
{
uint8_t v___x_309_; 
v___x_309_ = lean_unbox(v_a_305_);
if (v___x_309_ == 0)
{
lean_object* v___x_310_; 
lean_del_object(v___x_307_);
lean_inc(v___x_302_);
lean_inc(v___x_303_);
v___x_310_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_289_, v___x_303_, v___x_302_, v___y_292_, v___y_293_, v___y_294_, v___y_295_);
if (lean_obj_tag(v___x_310_) == 0)
{
lean_object* v_a_311_; lean_object* v___x_313_; uint8_t v_isShared_314_; uint8_t v_isSharedCheck_324_; 
v_a_311_ = lean_ctor_get(v___x_310_, 0);
v_isSharedCheck_324_ = !lean_is_exclusive(v___x_310_);
if (v_isSharedCheck_324_ == 0)
{
v___x_313_ = v___x_310_;
v_isShared_314_ = v_isSharedCheck_324_;
goto v_resetjp_312_;
}
else
{
lean_inc(v_a_311_);
lean_dec(v___x_310_);
v___x_313_ = lean_box(0);
v_isShared_314_ = v_isSharedCheck_324_;
goto v_resetjp_312_;
}
v_resetjp_312_:
{
uint8_t v___x_315_; 
v___x_315_ = lean_unbox(v_a_311_);
lean_dec(v_a_311_);
if (v___x_315_ == 0)
{
lean_object* v___x_316_; lean_object* v___x_317_; 
lean_del_object(v___x_313_);
lean_dec(v_a_305_);
v___x_316_ = lean_unsigned_to_nat(1u);
v___x_317_ = lean_nat_add(v_a_290_, v___x_316_);
lean_dec(v_a_290_);
v_a_290_ = v___x_317_;
v_b_291_ = v___x_301_;
goto _start;
}
else
{
lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_322_; 
lean_dec(v_a_290_);
v___x_319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_319_, 0, v_a_305_);
v___x_320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_320_, 0, v___x_319_);
lean_ctor_set(v___x_320_, 1, v___x_300_);
if (v_isShared_314_ == 0)
{
lean_ctor_set(v___x_313_, 0, v___x_320_);
v___x_322_ = v___x_313_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v___x_320_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
return v___x_322_;
}
}
}
}
else
{
lean_object* v_a_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_332_; 
lean_dec(v_a_305_);
lean_dec(v_a_290_);
v_a_325_ = lean_ctor_get(v___x_310_, 0);
v_isSharedCheck_332_ = !lean_is_exclusive(v___x_310_);
if (v_isSharedCheck_332_ == 0)
{
v___x_327_ = v___x_310_;
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_a_325_);
lean_dec(v___x_310_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___x_330_; 
if (v_isShared_328_ == 0)
{
v___x_330_ = v___x_327_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v_a_325_);
v___x_330_ = v_reuseFailAlloc_331_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
return v___x_330_;
}
}
}
}
else
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_336_; 
lean_dec(v_a_290_);
v___x_333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_333_, 0, v_a_305_);
v___x_334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
lean_ctor_set(v___x_334_, 1, v___x_300_);
if (v_isShared_308_ == 0)
{
lean_ctor_set(v___x_307_, 0, v___x_334_);
v___x_336_ = v___x_307_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v___x_334_);
v___x_336_ = v_reuseFailAlloc_337_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
return v___x_336_;
}
}
}
}
else
{
lean_object* v_a_339_; lean_object* v___x_341_; uint8_t v_isShared_342_; uint8_t v_isSharedCheck_346_; 
lean_dec(v_a_290_);
v_a_339_ = lean_ctor_get(v___x_304_, 0);
v_isSharedCheck_346_ = !lean_is_exclusive(v___x_304_);
if (v_isSharedCheck_346_ == 0)
{
v___x_341_ = v___x_304_;
v_isShared_342_ = v_isSharedCheck_346_;
goto v_resetjp_340_;
}
else
{
lean_inc(v_a_339_);
lean_dec(v___x_304_);
v___x_341_ = lean_box(0);
v_isShared_342_ = v_isSharedCheck_346_;
goto v_resetjp_340_;
}
v_resetjp_340_:
{
lean_object* v___x_344_; 
if (v_isShared_342_ == 0)
{
v___x_344_ = v___x_341_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v_a_339_);
v___x_344_ = v_reuseFailAlloc_345_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
return v___x_344_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp(uint8_t v_mode_347_, lean_object* v_a_348_, lean_object* v_b_349_, lean_object* v_a_350_, lean_object* v_a_351_, lean_object* v_a_352_, lean_object* v_a_353_){
_start:
{
lean_object* v_aFn_359_; lean_object* v_bFn_360_; lean_object* v___x_361_; 
v_aFn_359_ = l_Lean_Expr_getAppFn(v_a_348_);
v_bFn_360_ = l_Lean_Expr_getAppFn(v_b_349_);
lean_inc_ref(v_bFn_360_);
lean_inc_ref(v_aFn_359_);
v___x_361_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_347_, v_aFn_359_, v_bFn_360_, v_a_350_, v_a_351_, v_a_352_, v_a_353_);
if (lean_obj_tag(v___x_361_) == 0)
{
lean_object* v_a_362_; uint8_t v___x_363_; 
v_a_362_ = lean_ctor_get(v___x_361_, 0);
lean_inc(v_a_362_);
lean_dec_ref_known(v___x_361_, 1);
v___x_363_ = lean_unbox(v_a_362_);
if (v___x_363_ == 0)
{
lean_object* v___x_364_; 
lean_inc_ref(v_aFn_359_);
v___x_364_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_347_, v_bFn_360_, v_aFn_359_, v_a_350_, v_a_351_, v_a_352_, v_a_353_);
if (lean_obj_tag(v___x_364_) == 0)
{
lean_object* v_a_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_444_; 
v_a_365_ = lean_ctor_get(v___x_364_, 0);
v_isSharedCheck_444_ = !lean_is_exclusive(v___x_364_);
if (v_isSharedCheck_444_ == 0)
{
v___x_367_ = v___x_364_;
v_isShared_368_ = v_isSharedCheck_444_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_a_365_);
lean_dec(v___x_364_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_444_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
uint8_t v___x_369_; 
v___x_369_ = lean_unbox(v_a_365_);
lean_dec(v_a_365_);
if (v___x_369_ == 0)
{
lean_object* v_dummy_370_; lean_object* v_nargs_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v_nargs_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; uint8_t v___x_382_; 
v_dummy_370_ = lean_obj_once(&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__0, &l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__0_once, _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__0);
v_nargs_371_ = l_Lean_Expr_getAppNumArgs(v_a_348_);
lean_inc(v_nargs_371_);
v___x_372_ = lean_mk_array(v_nargs_371_, v_dummy_370_);
v___x_373_ = lean_unsigned_to_nat(1u);
v___x_374_ = lean_nat_sub(v_nargs_371_, v___x_373_);
lean_dec(v_nargs_371_);
v___x_375_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_348_, v___x_372_, v___x_374_);
v_nargs_376_ = l_Lean_Expr_getAppNumArgs(v_b_349_);
lean_inc(v_nargs_376_);
v___x_377_ = lean_mk_array(v_nargs_376_, v_dummy_370_);
v___x_378_ = lean_nat_sub(v_nargs_376_, v___x_373_);
lean_dec(v_nargs_376_);
v___x_379_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_b_349_, v___x_377_, v___x_378_);
v___x_380_ = lean_array_get_size(v___x_375_);
v___x_381_ = lean_array_get_size(v___x_379_);
v___x_382_ = lean_nat_dec_lt(v___x_380_, v___x_381_);
if (v___x_382_ == 0)
{
uint8_t v___x_383_; 
v___x_383_ = lean_nat_dec_lt(v___x_381_, v___x_380_);
if (v___x_383_ == 0)
{
lean_object* v___x_384_; 
lean_del_object(v___x_367_);
v___x_384_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo(v_aFn_359_, v___x_380_, v_a_350_, v_a_351_, v_a_352_, v_a_353_);
if (lean_obj_tag(v___x_384_) == 0)
{
lean_object* v_a_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
v_a_385_ = lean_ctor_get(v___x_384_, 0);
lean_inc(v_a_385_);
lean_dec_ref_known(v___x_384_, 1);
v___x_386_ = lean_array_get_size(v_a_385_);
v___x_387_ = lean_unsigned_to_nat(0u);
v___x_388_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___closed__0));
v___x_389_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7___redArg(v___x_386_, v_a_385_, v___x_375_, v___x_379_, v_mode_347_, v___x_387_, v___x_388_, v_a_350_, v_a_351_, v_a_352_, v_a_353_);
lean_dec(v_a_385_);
if (lean_obj_tag(v___x_389_) == 0)
{
lean_object* v_a_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_421_; 
v_a_390_ = lean_ctor_get(v___x_389_, 0);
v_isSharedCheck_421_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_421_ == 0)
{
v___x_392_ = v___x_389_;
v_isShared_393_ = v_isSharedCheck_421_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_a_390_);
lean_dec(v___x_389_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_421_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v_fst_394_; 
v_fst_394_ = lean_ctor_get(v_a_390_, 0);
lean_inc(v_fst_394_);
lean_dec(v_a_390_);
if (lean_obj_tag(v_fst_394_) == 0)
{
lean_object* v___x_395_; 
lean_del_object(v___x_392_);
v___x_395_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6___redArg(v___x_380_, v___x_375_, v___x_379_, v_mode_347_, v___x_386_, v___x_388_, v_a_350_, v_a_351_, v_a_352_, v_a_353_);
lean_dec_ref(v___x_379_);
lean_dec_ref(v___x_375_);
if (lean_obj_tag(v___x_395_) == 0)
{
lean_object* v_a_396_; lean_object* v___x_398_; uint8_t v_isShared_399_; uint8_t v_isSharedCheck_408_; 
v_a_396_ = lean_ctor_get(v___x_395_, 0);
v_isSharedCheck_408_ = !lean_is_exclusive(v___x_395_);
if (v_isSharedCheck_408_ == 0)
{
v___x_398_ = v___x_395_;
v_isShared_399_ = v_isSharedCheck_408_;
goto v_resetjp_397_;
}
else
{
lean_inc(v_a_396_);
lean_dec(v___x_395_);
v___x_398_ = lean_box(0);
v_isShared_399_ = v_isSharedCheck_408_;
goto v_resetjp_397_;
}
v_resetjp_397_:
{
lean_object* v_fst_400_; 
v_fst_400_ = lean_ctor_get(v_a_396_, 0);
lean_inc(v_fst_400_);
lean_dec(v_a_396_);
if (lean_obj_tag(v_fst_400_) == 0)
{
lean_object* v___x_402_; 
if (v_isShared_399_ == 0)
{
lean_ctor_set(v___x_398_, 0, v_a_362_);
v___x_402_ = v___x_398_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v_a_362_);
v___x_402_ = v_reuseFailAlloc_403_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
return v___x_402_;
}
}
else
{
lean_object* v_val_404_; lean_object* v___x_406_; 
lean_dec(v_a_362_);
v_val_404_ = lean_ctor_get(v_fst_400_, 0);
lean_inc(v_val_404_);
lean_dec_ref_known(v_fst_400_, 1);
if (v_isShared_399_ == 0)
{
lean_ctor_set(v___x_398_, 0, v_val_404_);
v___x_406_ = v___x_398_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_val_404_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
return v___x_406_;
}
}
}
}
else
{
lean_object* v_a_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_416_; 
lean_dec(v_a_362_);
v_a_409_ = lean_ctor_get(v___x_395_, 0);
v_isSharedCheck_416_ = !lean_is_exclusive(v___x_395_);
if (v_isSharedCheck_416_ == 0)
{
v___x_411_ = v___x_395_;
v_isShared_412_ = v_isSharedCheck_416_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_a_409_);
lean_dec(v___x_395_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_416_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v___x_414_; 
if (v_isShared_412_ == 0)
{
v___x_414_ = v___x_411_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v_a_409_);
v___x_414_ = v_reuseFailAlloc_415_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
return v___x_414_;
}
}
}
}
else
{
lean_object* v_val_417_; lean_object* v___x_419_; 
lean_dec_ref(v___x_379_);
lean_dec_ref(v___x_375_);
lean_dec(v_a_362_);
v_val_417_ = lean_ctor_get(v_fst_394_, 0);
lean_inc(v_val_417_);
lean_dec_ref_known(v_fst_394_, 1);
if (v_isShared_393_ == 0)
{
lean_ctor_set(v___x_392_, 0, v_val_417_);
v___x_419_ = v___x_392_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v_val_417_);
v___x_419_ = v_reuseFailAlloc_420_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
return v___x_419_;
}
}
}
}
else
{
lean_object* v_a_422_; lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_429_; 
lean_dec_ref(v___x_379_);
lean_dec_ref(v___x_375_);
lean_dec(v_a_362_);
v_a_422_ = lean_ctor_get(v___x_389_, 0);
v_isSharedCheck_429_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_429_ == 0)
{
v___x_424_ = v___x_389_;
v_isShared_425_ = v_isSharedCheck_429_;
goto v_resetjp_423_;
}
else
{
lean_inc(v_a_422_);
lean_dec(v___x_389_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_429_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
lean_object* v___x_427_; 
if (v_isShared_425_ == 0)
{
v___x_427_ = v___x_424_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v_a_422_);
v___x_427_ = v_reuseFailAlloc_428_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
return v___x_427_;
}
}
}
}
else
{
lean_object* v_a_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_437_; 
lean_dec_ref(v___x_379_);
lean_dec_ref(v___x_375_);
lean_dec(v_a_362_);
v_a_430_ = lean_ctor_get(v___x_384_, 0);
v_isSharedCheck_437_ = !lean_is_exclusive(v___x_384_);
if (v_isSharedCheck_437_ == 0)
{
v___x_432_ = v___x_384_;
v_isShared_433_ = v_isSharedCheck_437_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_a_430_);
lean_dec(v___x_384_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_437_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_435_; 
if (v_isShared_433_ == 0)
{
v___x_435_ = v___x_432_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v_a_430_);
v___x_435_ = v_reuseFailAlloc_436_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
return v___x_435_;
}
}
}
}
else
{
lean_object* v___x_439_; 
lean_dec_ref(v___x_379_);
lean_dec_ref(v___x_375_);
lean_dec_ref(v_aFn_359_);
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 0, v_a_362_);
v___x_439_ = v___x_367_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v_a_362_);
v___x_439_ = v_reuseFailAlloc_440_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
return v___x_439_;
}
}
}
else
{
lean_dec_ref(v___x_379_);
lean_dec_ref(v___x_375_);
lean_del_object(v___x_367_);
lean_dec(v_a_362_);
lean_dec_ref(v_aFn_359_);
goto v___jp_355_;
}
}
else
{
lean_object* v___x_442_; 
lean_dec_ref(v_aFn_359_);
lean_dec_ref(v_b_349_);
lean_dec_ref(v_a_348_);
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 0, v_a_362_);
v___x_442_ = v___x_367_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v_a_362_);
v___x_442_ = v_reuseFailAlloc_443_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
return v___x_442_;
}
}
}
}
else
{
lean_dec(v_a_362_);
lean_dec_ref(v_aFn_359_);
lean_dec_ref(v_b_349_);
lean_dec_ref(v_a_348_);
return v___x_364_;
}
}
else
{
lean_dec(v_a_362_);
lean_dec_ref(v_bFn_360_);
lean_dec_ref(v_aFn_359_);
lean_dec_ref(v_b_349_);
lean_dec_ref(v_a_348_);
goto v___jp_355_;
}
}
else
{
lean_dec_ref(v_bFn_360_);
lean_dec_ref(v_aFn_359_);
lean_dec_ref(v_b_349_);
lean_dec_ref(v_a_348_);
return v___x_361_;
}
v___jp_355_:
{
uint8_t v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_356_ = 1;
v___x_357_ = lean_box(v___x_356_);
v___x_358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_358_, 0, v___x_357_);
return v___x_358_;
}
}
}
static lean_object* _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__7(void){
_start:
{
lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_448_ = ((lean_object*)(l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__6));
v___x_449_ = lean_unsigned_to_nat(27u);
v___x_450_ = lean_unsigned_to_nat(152u);
v___x_451_ = ((lean_object*)(l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__5));
v___x_452_ = ((lean_object*)(l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__4));
v___x_453_ = l_mkPanicMessageWithDecl(v___x_452_, v___x_451_, v___x_450_, v___x_449_, v___x_448_);
return v___x_453_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor(uint8_t v_mode_454_, lean_object* v_a_455_, lean_object* v_b_456_, lean_object* v_a_457_, lean_object* v_a_458_, lean_object* v_a_459_, lean_object* v_a_460_){
_start:
{
lean_object* v_d_463_; lean_object* v_e_464_; lean_object* v___y_465_; lean_object* v___y_466_; lean_object* v___y_467_; lean_object* v___y_468_; 
switch(lean_obj_tag(v_a_455_))
{
case 0:
{
lean_object* v_deBruijnIndex_472_; lean_object* v___x_473_; uint8_t v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; 
v_deBruijnIndex_472_ = lean_ctor_get(v_a_455_, 0);
lean_inc(v_deBruijnIndex_472_);
lean_dec_ref_known(v_a_455_, 1);
v___x_473_ = l_Lean_Expr_bvarIdx_x21(v_b_456_);
lean_dec_ref(v_b_456_);
v___x_474_ = lean_nat_dec_lt(v_deBruijnIndex_472_, v___x_473_);
lean_dec(v___x_473_);
lean_dec(v_deBruijnIndex_472_);
v___x_475_ = lean_box(v___x_474_);
v___x_476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_476_, 0, v___x_475_);
return v___x_476_;
}
case 1:
{
lean_object* v_fvarId_477_; lean_object* v___x_478_; 
v_fvarId_477_ = lean_ctor_get(v_a_455_, 0);
lean_inc(v_fvarId_477_);
lean_dec_ref_known(v_a_455_, 1);
v___x_478_ = l_Lean_FVarId_findDecl_x3f___redArg(v_fvarId_477_, v_a_457_);
if (lean_obj_tag(v___x_478_) == 0)
{
lean_object* v_a_479_; lean_object* v___x_480_; lean_object* v___x_481_; 
v_a_479_ = lean_ctor_get(v___x_478_, 0);
lean_inc(v_a_479_);
lean_dec_ref_known(v___x_478_, 1);
v___x_480_ = l_Lean_Expr_fvarId_x21(v_b_456_);
lean_dec_ref(v_b_456_);
v___x_481_ = l_Lean_FVarId_findDecl_x3f___redArg(v___x_480_, v_a_457_);
if (lean_obj_tag(v___x_481_) == 0)
{
lean_object* v_a_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_504_; 
v_a_482_ = lean_ctor_get(v___x_481_, 0);
v_isSharedCheck_504_ = !lean_is_exclusive(v___x_481_);
if (v_isSharedCheck_504_ == 0)
{
v___x_484_ = v___x_481_;
v_isShared_485_ = v_isSharedCheck_504_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_a_482_);
lean_dec(v___x_481_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_504_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v___y_487_; lean_object* v___y_488_; lean_object* v___y_496_; 
if (lean_obj_tag(v_a_479_) == 0)
{
lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_501_ = lean_obj_once(&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__3, &l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__3_once, _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__3);
v___x_502_ = l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__2(v___x_501_);
v___y_496_ = v___x_502_;
goto v___jp_495_;
}
else
{
lean_object* v_val_503_; 
v_val_503_ = lean_ctor_get(v_a_479_, 0);
lean_inc(v_val_503_);
lean_dec_ref_known(v_a_479_, 1);
v___y_496_ = v_val_503_;
goto v___jp_495_;
}
v___jp_486_:
{
lean_object* v___x_489_; uint8_t v___x_490_; lean_object* v___x_491_; lean_object* v___x_493_; 
v___x_489_ = l_Lean_LocalDecl_index(v___y_488_);
lean_dec_ref(v___y_488_);
v___x_490_ = lean_nat_dec_lt(v___y_487_, v___x_489_);
lean_dec(v___x_489_);
lean_dec(v___y_487_);
v___x_491_ = lean_box(v___x_490_);
if (v_isShared_485_ == 0)
{
lean_ctor_set(v___x_484_, 0, v___x_491_);
v___x_493_ = v___x_484_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v___x_491_);
v___x_493_ = v_reuseFailAlloc_494_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
return v___x_493_;
}
}
v___jp_495_:
{
lean_object* v___x_497_; 
v___x_497_ = l_Lean_LocalDecl_index(v___y_496_);
lean_dec_ref(v___y_496_);
if (lean_obj_tag(v_a_482_) == 0)
{
lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_498_ = lean_obj_once(&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__3, &l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__3_once, _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__3);
v___x_499_ = l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__2(v___x_498_);
v___y_487_ = v___x_497_;
v___y_488_ = v___x_499_;
goto v___jp_486_;
}
else
{
lean_object* v_val_500_; 
v_val_500_ = lean_ctor_get(v_a_482_, 0);
lean_inc(v_val_500_);
lean_dec_ref_known(v_a_482_, 1);
v___y_487_ = v___x_497_;
v___y_488_ = v_val_500_;
goto v___jp_486_;
}
}
}
}
else
{
lean_object* v_a_505_; lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_512_; 
lean_dec(v_a_479_);
v_a_505_ = lean_ctor_get(v___x_481_, 0);
v_isSharedCheck_512_ = !lean_is_exclusive(v___x_481_);
if (v_isSharedCheck_512_ == 0)
{
v___x_507_ = v___x_481_;
v_isShared_508_ = v_isSharedCheck_512_;
goto v_resetjp_506_;
}
else
{
lean_inc(v_a_505_);
lean_dec(v___x_481_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_512_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
lean_object* v___x_510_; 
if (v_isShared_508_ == 0)
{
v___x_510_ = v___x_507_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v_a_505_);
v___x_510_ = v_reuseFailAlloc_511_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
return v___x_510_;
}
}
}
}
else
{
lean_object* v_a_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_520_; 
lean_dec_ref(v_b_456_);
v_a_513_ = lean_ctor_get(v___x_478_, 0);
v_isSharedCheck_520_ = !lean_is_exclusive(v___x_478_);
if (v_isSharedCheck_520_ == 0)
{
v___x_515_ = v___x_478_;
v_isShared_516_ = v_isSharedCheck_520_;
goto v_resetjp_514_;
}
else
{
lean_inc(v_a_513_);
lean_dec(v___x_478_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_520_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
lean_object* v___x_518_; 
if (v_isShared_516_ == 0)
{
v___x_518_ = v___x_515_;
goto v_reusejp_517_;
}
else
{
lean_object* v_reuseFailAlloc_519_; 
v_reuseFailAlloc_519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_519_, 0, v_a_513_);
v___x_518_ = v_reuseFailAlloc_519_;
goto v_reusejp_517_;
}
v_reusejp_517_:
{
return v___x_518_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_521_; lean_object* v___x_522_; uint8_t v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; 
v_mvarId_521_ = lean_ctor_get(v_a_455_, 0);
lean_inc(v_mvarId_521_);
lean_dec_ref_known(v_a_455_, 1);
v___x_522_ = l_Lean_Expr_mvarId_x21(v_b_456_);
lean_dec_ref(v_b_456_);
v___x_523_ = l_Lean_Name_lt(v_mvarId_521_, v___x_522_);
lean_dec(v___x_522_);
lean_dec(v_mvarId_521_);
v___x_524_ = lean_box(v___x_523_);
v___x_525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_525_, 0, v___x_524_);
return v___x_525_;
}
case 3:
{
lean_object* v_u_526_; lean_object* v___x_527_; uint8_t v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; 
v_u_526_ = lean_ctor_get(v_a_455_, 0);
lean_inc(v_u_526_);
lean_dec_ref_known(v_a_455_, 1);
v___x_527_ = l_Lean_Expr_sortLevel_x21(v_b_456_);
lean_dec_ref(v_b_456_);
v___x_528_ = l_Lean_Level_normLt(v_u_526_, v___x_527_);
lean_dec(v___x_527_);
lean_dec(v_u_526_);
v___x_529_ = lean_box(v___x_528_);
v___x_530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_530_, 0, v___x_529_);
return v___x_530_;
}
case 4:
{
lean_object* v_declName_531_; lean_object* v___x_532_; uint8_t v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; 
v_declName_531_ = lean_ctor_get(v_a_455_, 0);
lean_inc(v_declName_531_);
lean_dec_ref_known(v_a_455_, 2);
v___x_532_ = l_Lean_Expr_constName_x21(v_b_456_);
lean_dec_ref(v_b_456_);
v___x_533_ = l_Lean_Name_lt(v_declName_531_, v___x_532_);
lean_dec(v___x_532_);
lean_dec(v_declName_531_);
v___x_534_ = lean_box(v___x_533_);
v___x_535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_535_, 0, v___x_534_);
return v___x_535_;
}
case 5:
{
lean_object* v___x_536_; 
v___x_536_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp(v_mode_454_, v_a_455_, v_b_456_, v_a_457_, v_a_458_, v_a_459_, v_a_460_);
return v___x_536_;
}
case 8:
{
lean_object* v_value_537_; lean_object* v_body_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; 
v_value_537_ = lean_ctor_get(v_a_455_, 2);
lean_inc_ref(v_value_537_);
v_body_538_ = lean_ctor_get(v_a_455_, 3);
lean_inc_ref(v_body_538_);
lean_dec_ref_known(v_a_455_, 4);
v___x_539_ = l_Lean_Expr_letValue_x21(v_b_456_);
v___x_540_ = l_Lean_Expr_letBody_x21(v_b_456_);
lean_dec_ref(v_b_456_);
v___x_541_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltPair(v_mode_454_, v_value_537_, v_body_538_, v___x_539_, v___x_540_, v_a_457_, v_a_458_, v_a_459_, v_a_460_);
return v___x_541_;
}
case 9:
{
lean_object* v_a_542_; lean_object* v___x_543_; uint8_t v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; 
v_a_542_ = lean_ctor_get(v_a_455_, 0);
lean_inc_ref(v_a_542_);
lean_dec_ref_known(v_a_455_, 1);
v___x_543_ = l_Lean_Expr_litValue_x21(v_b_456_);
lean_dec_ref(v_b_456_);
v___x_544_ = l_Lean_Literal_lt(v_a_542_, v___x_543_);
lean_dec_ref(v___x_543_);
lean_dec_ref(v_a_542_);
v___x_545_ = lean_box(v___x_544_);
v___x_546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_546_, 0, v___x_545_);
return v___x_546_;
}
case 10:
{
lean_object* v___x_547_; lean_object* v___x_548_; 
lean_dec_ref_known(v_a_455_, 2);
lean_dec_ref(v_b_456_);
v___x_547_ = lean_obj_once(&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__7, &l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__7_once, _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__7);
v___x_548_ = l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__3(v___x_547_, v_a_457_, v_a_458_, v_a_459_, v_a_460_);
return v___x_548_;
}
case 11:
{
lean_object* v_idx_549_; lean_object* v_struct_550_; lean_object* v___x_551_; uint8_t v___x_552_; 
v_idx_549_ = lean_ctor_get(v_a_455_, 1);
lean_inc(v_idx_549_);
v_struct_550_ = lean_ctor_get(v_a_455_, 2);
lean_inc_ref(v_struct_550_);
lean_dec_ref_known(v_a_455_, 3);
v___x_551_ = l_Lean_Expr_projIdx_x21(v_b_456_);
v___x_552_ = lean_nat_dec_eq(v_idx_549_, v___x_551_);
if (v___x_552_ == 0)
{
uint8_t v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; 
lean_dec_ref(v_struct_550_);
lean_dec_ref(v_b_456_);
v___x_553_ = lean_nat_dec_lt(v_idx_549_, v___x_551_);
lean_dec(v___x_551_);
lean_dec(v_idx_549_);
v___x_554_ = lean_box(v___x_553_);
v___x_555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_555_, 0, v___x_554_);
return v___x_555_;
}
else
{
lean_object* v___x_556_; lean_object* v___x_557_; 
lean_dec(v___x_551_);
lean_dec(v_idx_549_);
v___x_556_ = l_Lean_Expr_projExpr_x21(v_b_456_);
lean_dec_ref(v_b_456_);
v___x_557_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_454_, v_struct_550_, v___x_556_, v_a_457_, v_a_458_, v_a_459_, v_a_460_);
return v___x_557_;
}
}
default: 
{
lean_object* v_binderType_558_; lean_object* v_body_559_; 
v_binderType_558_ = lean_ctor_get(v_a_455_, 1);
lean_inc_ref(v_binderType_558_);
v_body_559_ = lean_ctor_get(v_a_455_, 2);
lean_inc_ref(v_body_559_);
lean_dec_ref(v_a_455_);
v_d_463_ = v_binderType_558_;
v_e_464_ = v_body_559_;
v___y_465_ = v_a_457_;
v___y_466_ = v_a_458_;
v___y_467_ = v_a_459_;
v___y_468_ = v_a_460_;
goto v___jp_462_;
}
}
v___jp_462_:
{
lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_469_ = l_Lean_Expr_bindingDomain_x21(v_b_456_);
v___x_470_ = l_Lean_Expr_bindingBody_x21(v_b_456_);
lean_dec_ref(v_b_456_);
v___x_471_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltPair(v_mode_454_, v_d_463_, v_e_464_, v___x_469_, v___x_470_, v___y_465_, v___y_466_, v___y_467_, v___y_468_);
return v___x_471_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lpo(uint8_t v_mode_560_, lean_object* v_a_561_, lean_object* v_b_562_, lean_object* v_a_563_, lean_object* v_a_564_, lean_object* v_a_565_, lean_object* v_a_566_){
_start:
{
lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_572_ = ((lean_object*)(l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lpo___closed__0));
v___x_573_ = l_Lean_Core_checkSystem(v___x_572_, v_a_565_, v_a_566_);
if (lean_obj_tag(v___x_573_) == 0)
{
lean_object* v___x_574_; 
lean_dec_ref_known(v___x_573_, 1);
lean_inc_ref(v_a_561_);
lean_inc_ref(v_b_562_);
v___x_574_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_someChildGe(v_mode_560_, v_b_562_, v_a_561_, v_a_563_, v_a_564_, v_a_565_, v_a_566_);
if (lean_obj_tag(v___x_574_) == 0)
{
lean_object* v_a_575_; uint8_t v___x_576_; 
v_a_575_ = lean_ctor_get(v___x_574_, 0);
v___x_576_ = lean_unbox(v_a_575_);
if (v___x_576_ == 0)
{
uint8_t v___x_577_; uint8_t v___x_578_; uint8_t v___x_579_; 
v___x_577_ = l_Lean_Expr_ctorWeight(v_b_562_);
v___x_578_ = l_Lean_Expr_ctorWeight(v_a_561_);
v___x_579_ = lean_uint8_dec_lt(v___x_577_, v___x_578_);
if (v___x_579_ == 0)
{
lean_object* v___x_580_; 
lean_inc(v_a_575_);
lean_dec_ref_known(v___x_574_, 1);
lean_inc_ref(v_b_562_);
lean_inc_ref(v_a_561_);
v___x_580_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt(v_mode_560_, v_a_561_, v_b_562_, v_a_563_, v_a_564_, v_a_565_, v_a_566_);
if (lean_obj_tag(v___x_580_) == 0)
{
lean_object* v_a_581_; lean_object* v___x_583_; uint8_t v_isShared_584_; uint8_t v_isSharedCheck_591_; 
v_a_581_ = lean_ctor_get(v___x_580_, 0);
v_isSharedCheck_591_ = !lean_is_exclusive(v___x_580_);
if (v_isSharedCheck_591_ == 0)
{
v___x_583_ = v___x_580_;
v_isShared_584_ = v_isSharedCheck_591_;
goto v_resetjp_582_;
}
else
{
lean_inc(v_a_581_);
lean_dec(v___x_580_);
v___x_583_ = lean_box(0);
v_isShared_584_ = v_isSharedCheck_591_;
goto v_resetjp_582_;
}
v_resetjp_582_:
{
uint8_t v___x_585_; 
v___x_585_ = lean_unbox(v_a_581_);
lean_dec(v_a_581_);
if (v___x_585_ == 0)
{
lean_object* v___x_587_; 
lean_dec_ref(v_b_562_);
lean_dec_ref(v_a_561_);
if (v_isShared_584_ == 0)
{
lean_ctor_set(v___x_583_, 0, v_a_575_);
v___x_587_ = v___x_583_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v_a_575_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
return v___x_587_;
}
}
else
{
uint8_t v___x_589_; 
lean_del_object(v___x_583_);
lean_dec(v_a_575_);
v___x_589_ = lean_uint8_dec_lt(v___x_578_, v___x_577_);
if (v___x_589_ == 0)
{
lean_object* v___x_590_; 
v___x_590_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor(v_mode_560_, v_a_561_, v_b_562_, v_a_563_, v_a_564_, v_a_565_, v_a_566_);
return v___x_590_;
}
else
{
lean_dec_ref(v_b_562_);
lean_dec_ref(v_a_561_);
goto v___jp_568_;
}
}
}
}
else
{
lean_dec(v_a_575_);
lean_dec_ref(v_b_562_);
lean_dec_ref(v_a_561_);
return v___x_580_;
}
}
else
{
lean_dec_ref(v_b_562_);
lean_dec_ref(v_a_561_);
return v___x_574_;
}
}
else
{
lean_dec_ref_known(v___x_574_, 1);
lean_dec_ref(v_b_562_);
lean_dec_ref(v_a_561_);
goto v___jp_568_;
}
}
else
{
lean_dec_ref(v_b_562_);
lean_dec_ref(v_a_561_);
return v___x_574_;
}
}
else
{
lean_object* v_a_592_; lean_object* v___x_594_; uint8_t v_isShared_595_; uint8_t v_isSharedCheck_599_; 
lean_dec_ref(v_b_562_);
lean_dec_ref(v_a_561_);
v_a_592_ = lean_ctor_get(v___x_573_, 0);
v_isSharedCheck_599_ = !lean_is_exclusive(v___x_573_);
if (v_isSharedCheck_599_ == 0)
{
v___x_594_ = v___x_573_;
v_isShared_595_ = v_isSharedCheck_599_;
goto v_resetjp_593_;
}
else
{
lean_inc(v_a_592_);
lean_dec(v___x_573_);
v___x_594_ = lean_box(0);
v_isShared_595_ = v_isSharedCheck_599_;
goto v_resetjp_593_;
}
v_resetjp_593_:
{
lean_object* v___x_597_; 
if (v_isShared_595_ == 0)
{
v___x_597_ = v___x_594_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v_a_592_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
return v___x_597_;
}
}
}
v___jp_568_:
{
uint8_t v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_569_ = 1;
v___x_570_ = lean_box(v___x_569_);
v___x_571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_571_, 0, v___x_570_);
return v___x_571_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(uint8_t v_mode_600_, lean_object* v_a_601_, lean_object* v_b_602_, lean_object* v_a_603_, lean_object* v_a_604_, lean_object* v_a_605_, lean_object* v_a_606_){
_start:
{
uint8_t v___x_608_; 
v___x_608_ = lean_expr_eqv(v_a_601_, v_b_602_);
if (v___x_608_ == 0)
{
uint8_t v___x_609_; 
v___x_609_ = l_Lean_Expr_isMData(v_a_601_);
if (v___x_609_ == 0)
{
uint8_t v___x_610_; 
v___x_610_ = l_Lean_Expr_isMData(v_b_602_);
if (v___x_610_ == 0)
{
lean_object* v___x_611_; 
v___x_611_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_reduce(v_mode_600_, v_a_601_, v_a_603_, v_a_604_, v_a_605_, v_a_606_);
if (lean_obj_tag(v___x_611_) == 0)
{
lean_object* v_a_612_; lean_object* v___x_613_; 
v_a_612_ = lean_ctor_get(v___x_611_, 0);
lean_inc(v_a_612_);
lean_dec_ref_known(v___x_611_, 1);
v___x_613_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_reduce(v_mode_600_, v_b_602_, v_a_603_, v_a_604_, v_a_605_, v_a_606_);
if (lean_obj_tag(v___x_613_) == 0)
{
lean_object* v_a_614_; lean_object* v___x_615_; 
v_a_614_ = lean_ctor_get(v___x_613_, 0);
lean_inc(v_a_614_);
lean_dec_ref_known(v___x_613_, 1);
v___x_615_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lpo(v_mode_600_, v_a_612_, v_a_614_, v_a_603_, v_a_604_, v_a_605_, v_a_606_);
return v___x_615_;
}
else
{
lean_object* v_a_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_623_; 
lean_dec(v_a_612_);
v_a_616_ = lean_ctor_get(v___x_613_, 0);
v_isSharedCheck_623_ = !lean_is_exclusive(v___x_613_);
if (v_isSharedCheck_623_ == 0)
{
v___x_618_ = v___x_613_;
v_isShared_619_ = v_isSharedCheck_623_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_a_616_);
lean_dec(v___x_613_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_623_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_621_; 
if (v_isShared_619_ == 0)
{
v___x_621_ = v___x_618_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v_a_616_);
v___x_621_ = v_reuseFailAlloc_622_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
return v___x_621_;
}
}
}
}
else
{
lean_object* v_a_624_; lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_631_; 
lean_dec_ref(v_b_602_);
v_a_624_ = lean_ctor_get(v___x_611_, 0);
v_isSharedCheck_631_ = !lean_is_exclusive(v___x_611_);
if (v_isSharedCheck_631_ == 0)
{
v___x_626_ = v___x_611_;
v_isShared_627_ = v_isSharedCheck_631_;
goto v_resetjp_625_;
}
else
{
lean_inc(v_a_624_);
lean_dec(v___x_611_);
v___x_626_ = lean_box(0);
v_isShared_627_ = v_isSharedCheck_631_;
goto v_resetjp_625_;
}
v_resetjp_625_:
{
lean_object* v___x_629_; 
if (v_isShared_627_ == 0)
{
v___x_629_ = v___x_626_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v_a_624_);
v___x_629_ = v_reuseFailAlloc_630_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
return v___x_629_;
}
}
}
}
else
{
lean_object* v___x_632_; 
v___x_632_ = l_Lean_Expr_mdataExpr_x21(v_b_602_);
lean_dec_ref(v_b_602_);
v_b_602_ = v___x_632_;
goto _start;
}
}
else
{
lean_object* v___x_634_; 
v___x_634_ = l_Lean_Expr_mdataExpr_x21(v_a_601_);
lean_dec_ref(v_a_601_);
v_a_601_ = v___x_634_;
goto _start;
}
}
else
{
uint8_t v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
lean_dec_ref(v_b_602_);
lean_dec_ref(v_a_601_);
v___x_636_ = 0;
v___x_637_ = lean_box(v___x_636_);
v___x_638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_638_, 0, v___x_637_);
return v___x_638_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10___redArg(lean_object* v_upperBound_639_, lean_object* v_a_640_, lean_object* v_args_641_, uint8_t v_mode_642_, lean_object* v_b_643_, lean_object* v_a_644_, lean_object* v_b_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_){
_start:
{
lean_object* v_a_652_; uint8_t v___x_656_; 
v___x_656_ = lean_nat_dec_lt(v_a_644_, v_upperBound_639_);
if (v___x_656_ == 0)
{
lean_object* v___x_657_; 
lean_dec(v_a_644_);
lean_dec_ref(v_b_643_);
v___x_657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_657_, 0, v_b_645_);
return v___x_657_;
}
else
{
lean_object* v___x_658_; lean_object* v___x_659_; uint8_t v_isInstance_660_; lean_object* v___x_661_; lean_object* v___x_662_; 
lean_dec_ref(v_b_645_);
v___x_658_ = l_Lean_Meta_instInhabitedParamInfo_default;
v___x_659_ = lean_array_get_borrowed(v___x_658_, v_a_640_, v_a_644_);
v_isInstance_660_ = lean_ctor_get_uint8(v___x_659_, sizeof(void*)*1 + 4);
v___x_661_ = lean_box(0);
v___x_662_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___closed__0));
if (v_isInstance_660_ == 0)
{
lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
v___x_663_ = l_Lean_instInhabitedExpr;
v___x_664_ = lean_array_get_borrowed(v___x_663_, v_args_641_, v_a_644_);
lean_inc_ref(v_b_643_);
lean_inc(v___x_664_);
v___x_665_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_642_, v___x_664_, v_b_643_, v___y_646_, v___y_647_, v___y_648_, v___y_649_);
if (lean_obj_tag(v___x_665_) == 0)
{
lean_object* v_a_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_676_; 
v_a_666_ = lean_ctor_get(v___x_665_, 0);
v_isSharedCheck_676_ = !lean_is_exclusive(v___x_665_);
if (v_isSharedCheck_676_ == 0)
{
v___x_668_ = v___x_665_;
v_isShared_669_ = v_isSharedCheck_676_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_a_666_);
lean_dec(v___x_665_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_676_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
uint8_t v___x_670_; 
v___x_670_ = lean_unbox(v_a_666_);
if (v___x_670_ == 0)
{
lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_674_; 
lean_dec(v_a_644_);
lean_dec_ref(v_b_643_);
v___x_671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_671_, 0, v_a_666_);
v___x_672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_672_, 0, v___x_671_);
lean_ctor_set(v___x_672_, 1, v___x_661_);
if (v_isShared_669_ == 0)
{
lean_ctor_set(v___x_668_, 0, v___x_672_);
v___x_674_ = v___x_668_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v___x_672_);
v___x_674_ = v_reuseFailAlloc_675_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
return v___x_674_;
}
}
else
{
lean_del_object(v___x_668_);
lean_dec(v_a_666_);
v_a_652_ = v___x_662_;
goto v___jp_651_;
}
}
}
else
{
lean_object* v_a_677_; lean_object* v___x_679_; uint8_t v_isShared_680_; uint8_t v_isSharedCheck_684_; 
lean_dec(v_a_644_);
lean_dec_ref(v_b_643_);
v_a_677_ = lean_ctor_get(v___x_665_, 0);
v_isSharedCheck_684_ = !lean_is_exclusive(v___x_665_);
if (v_isSharedCheck_684_ == 0)
{
v___x_679_ = v___x_665_;
v_isShared_680_ = v_isSharedCheck_684_;
goto v_resetjp_678_;
}
else
{
lean_inc(v_a_677_);
lean_dec(v___x_665_);
v___x_679_ = lean_box(0);
v_isShared_680_ = v_isSharedCheck_684_;
goto v_resetjp_678_;
}
v_resetjp_678_:
{
lean_object* v___x_682_; 
if (v_isShared_680_ == 0)
{
v___x_682_ = v___x_679_;
goto v_reusejp_681_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v_a_677_);
v___x_682_ = v_reuseFailAlloc_683_;
goto v_reusejp_681_;
}
v_reusejp_681_:
{
return v___x_682_;
}
}
}
}
else
{
v_a_652_ = v___x_662_;
goto v___jp_651_;
}
}
v___jp_651_:
{
lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_653_ = lean_unsigned_to_nat(1u);
v___x_654_ = lean_nat_add(v_a_644_, v___x_653_);
lean_dec(v_a_644_);
lean_inc_ref(v_a_652_);
v_a_644_ = v___x_654_;
v_b_645_ = v_a_652_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg(lean_object* v_upperBound_685_, lean_object* v_args_686_, uint8_t v_mode_687_, lean_object* v_b_688_, lean_object* v_a_689_, lean_object* v_b_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_){
_start:
{
uint8_t v___x_696_; 
v___x_696_ = lean_nat_dec_lt(v_a_689_, v_upperBound_685_);
if (v___x_696_ == 0)
{
lean_object* v___x_697_; 
lean_dec(v_a_689_);
lean_dec_ref(v_b_688_);
v___x_697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_697_, 0, v_b_690_);
return v___x_697_;
}
else
{
lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; 
lean_dec_ref(v_b_690_);
v___x_698_ = lean_box(0);
v___x_699_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___closed__0));
v___x_700_ = lean_array_fget_borrowed(v_args_686_, v_a_689_);
lean_inc_ref(v_b_688_);
lean_inc(v___x_700_);
v___x_701_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_687_, v___x_700_, v_b_688_, v___y_691_, v___y_692_, v___y_693_, v___y_694_);
if (lean_obj_tag(v___x_701_) == 0)
{
lean_object* v_a_702_; lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_715_; 
v_a_702_ = lean_ctor_get(v___x_701_, 0);
v_isSharedCheck_715_ = !lean_is_exclusive(v___x_701_);
if (v_isSharedCheck_715_ == 0)
{
v___x_704_ = v___x_701_;
v_isShared_705_ = v_isSharedCheck_715_;
goto v_resetjp_703_;
}
else
{
lean_inc(v_a_702_);
lean_dec(v___x_701_);
v___x_704_ = lean_box(0);
v_isShared_705_ = v_isSharedCheck_715_;
goto v_resetjp_703_;
}
v_resetjp_703_:
{
uint8_t v___x_706_; 
v___x_706_ = lean_unbox(v_a_702_);
if (v___x_706_ == 0)
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_710_; 
lean_dec(v_a_689_);
lean_dec_ref(v_b_688_);
v___x_707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_707_, 0, v_a_702_);
v___x_708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_708_, 0, v___x_707_);
lean_ctor_set(v___x_708_, 1, v___x_698_);
if (v_isShared_705_ == 0)
{
lean_ctor_set(v___x_704_, 0, v___x_708_);
v___x_710_ = v___x_704_;
goto v_reusejp_709_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v___x_708_);
v___x_710_ = v_reuseFailAlloc_711_;
goto v_reusejp_709_;
}
v_reusejp_709_:
{
return v___x_710_;
}
}
else
{
lean_object* v___x_712_; lean_object* v___x_713_; 
lean_del_object(v___x_704_);
lean_dec(v_a_702_);
v___x_712_ = lean_unsigned_to_nat(1u);
v___x_713_ = lean_nat_add(v_a_689_, v___x_712_);
lean_dec(v_a_689_);
v_a_689_ = v___x_713_;
v_b_690_ = v___x_699_;
goto _start;
}
}
}
else
{
lean_object* v_a_716_; lean_object* v___x_718_; uint8_t v_isShared_719_; uint8_t v_isSharedCheck_723_; 
lean_dec(v_a_689_);
lean_dec_ref(v_b_688_);
v_a_716_ = lean_ctor_get(v___x_701_, 0);
v_isSharedCheck_723_ = !lean_is_exclusive(v___x_701_);
if (v_isSharedCheck_723_ == 0)
{
v___x_718_ = v___x_701_;
v_isShared_719_ = v_isSharedCheck_723_;
goto v_resetjp_717_;
}
else
{
lean_inc(v_a_716_);
lean_dec(v___x_701_);
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
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__11(uint8_t v_mode_724_, lean_object* v_b_725_, lean_object* v_x_726_, lean_object* v_x_727_, lean_object* v_x_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_){
_start:
{
if (lean_obj_tag(v_x_726_) == 5)
{
lean_object* v_fn_734_; lean_object* v_arg_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; 
v_fn_734_ = lean_ctor_get(v_x_726_, 0);
lean_inc_ref(v_fn_734_);
v_arg_735_ = lean_ctor_get(v_x_726_, 1);
lean_inc_ref(v_arg_735_);
lean_dec_ref_known(v_x_726_, 2);
v___x_736_ = lean_array_set(v_x_727_, v_x_728_, v_arg_735_);
v___x_737_ = lean_unsigned_to_nat(1u);
v___x_738_ = lean_nat_sub(v_x_728_, v___x_737_);
lean_dec(v_x_728_);
v_x_726_ = v_fn_734_;
v_x_727_ = v___x_736_;
v_x_728_ = v___x_738_;
goto _start;
}
else
{
lean_object* v___x_740_; lean_object* v___x_741_; 
lean_dec(v_x_728_);
v___x_740_ = lean_array_get_size(v_x_727_);
v___x_741_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo(v_x_726_, v___x_740_, v___y_729_, v___y_730_, v___y_731_, v___y_732_);
if (lean_obj_tag(v___x_741_) == 0)
{
lean_object* v_a_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; 
v_a_742_ = lean_ctor_get(v___x_741_, 0);
lean_inc(v_a_742_);
lean_dec_ref_known(v___x_741_, 1);
v___x_743_ = lean_array_get_size(v_a_742_);
v___x_744_ = lean_unsigned_to_nat(0u);
v___x_745_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___closed__0));
lean_inc_ref(v_b_725_);
v___x_746_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10___redArg(v___x_743_, v_a_742_, v_x_727_, v_mode_724_, v_b_725_, v___x_744_, v___x_745_, v___y_729_, v___y_730_, v___y_731_, v___y_732_);
lean_dec(v_a_742_);
if (lean_obj_tag(v___x_746_) == 0)
{
lean_object* v_a_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_780_; 
v_a_747_ = lean_ctor_get(v___x_746_, 0);
v_isSharedCheck_780_ = !lean_is_exclusive(v___x_746_);
if (v_isSharedCheck_780_ == 0)
{
v___x_749_ = v___x_746_;
v_isShared_750_ = v_isSharedCheck_780_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_a_747_);
lean_dec(v___x_746_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_780_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
lean_object* v_fst_751_; 
v_fst_751_ = lean_ctor_get(v_a_747_, 0);
lean_inc(v_fst_751_);
lean_dec(v_a_747_);
if (lean_obj_tag(v_fst_751_) == 0)
{
lean_object* v___x_752_; 
lean_del_object(v___x_749_);
v___x_752_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg(v___x_740_, v_x_727_, v_mode_724_, v_b_725_, v___x_743_, v___x_745_, v___y_729_, v___y_730_, v___y_731_, v___y_732_);
lean_dec_ref(v_x_727_);
if (lean_obj_tag(v___x_752_) == 0)
{
lean_object* v_a_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_767_; 
v_a_753_ = lean_ctor_get(v___x_752_, 0);
v_isSharedCheck_767_ = !lean_is_exclusive(v___x_752_);
if (v_isSharedCheck_767_ == 0)
{
v___x_755_ = v___x_752_;
v_isShared_756_ = v_isSharedCheck_767_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_a_753_);
lean_dec(v___x_752_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_767_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v_fst_757_; 
v_fst_757_ = lean_ctor_get(v_a_753_, 0);
lean_inc(v_fst_757_);
lean_dec(v_a_753_);
if (lean_obj_tag(v_fst_757_) == 0)
{
uint8_t v___x_758_; lean_object* v___x_759_; lean_object* v___x_761_; 
v___x_758_ = 1;
v___x_759_ = lean_box(v___x_758_);
if (v_isShared_756_ == 0)
{
lean_ctor_set(v___x_755_, 0, v___x_759_);
v___x_761_ = v___x_755_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v___x_759_);
v___x_761_ = v_reuseFailAlloc_762_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
return v___x_761_;
}
}
else
{
lean_object* v_val_763_; lean_object* v___x_765_; 
v_val_763_ = lean_ctor_get(v_fst_757_, 0);
lean_inc(v_val_763_);
lean_dec_ref_known(v_fst_757_, 1);
if (v_isShared_756_ == 0)
{
lean_ctor_set(v___x_755_, 0, v_val_763_);
v___x_765_ = v___x_755_;
goto v_reusejp_764_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v_val_763_);
v___x_765_ = v_reuseFailAlloc_766_;
goto v_reusejp_764_;
}
v_reusejp_764_:
{
return v___x_765_;
}
}
}
}
else
{
lean_object* v_a_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_775_; 
v_a_768_ = lean_ctor_get(v___x_752_, 0);
v_isSharedCheck_775_ = !lean_is_exclusive(v___x_752_);
if (v_isSharedCheck_775_ == 0)
{
v___x_770_ = v___x_752_;
v_isShared_771_ = v_isSharedCheck_775_;
goto v_resetjp_769_;
}
else
{
lean_inc(v_a_768_);
lean_dec(v___x_752_);
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
lean_object* v_val_776_; lean_object* v___x_778_; 
lean_dec_ref(v_x_727_);
lean_dec_ref(v_b_725_);
v_val_776_ = lean_ctor_get(v_fst_751_, 0);
lean_inc(v_val_776_);
lean_dec_ref_known(v_fst_751_, 1);
if (v_isShared_750_ == 0)
{
lean_ctor_set(v___x_749_, 0, v_val_776_);
v___x_778_ = v___x_749_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v_val_776_);
v___x_778_ = v_reuseFailAlloc_779_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
return v___x_778_;
}
}
}
}
else
{
lean_object* v_a_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_788_; 
lean_dec_ref(v_x_727_);
lean_dec_ref(v_b_725_);
v_a_781_ = lean_ctor_get(v___x_746_, 0);
v_isSharedCheck_788_ = !lean_is_exclusive(v___x_746_);
if (v_isSharedCheck_788_ == 0)
{
v___x_783_ = v___x_746_;
v_isShared_784_ = v_isSharedCheck_788_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_a_781_);
lean_dec(v___x_746_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_788_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___x_786_; 
if (v_isShared_784_ == 0)
{
v___x_786_ = v___x_783_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v_a_781_);
v___x_786_ = v_reuseFailAlloc_787_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
return v___x_786_;
}
}
}
}
else
{
lean_object* v_a_789_; lean_object* v___x_791_; uint8_t v_isShared_792_; uint8_t v_isSharedCheck_796_; 
lean_dec_ref(v_x_727_);
lean_dec_ref(v_b_725_);
v_a_789_ = lean_ctor_get(v___x_741_, 0);
v_isSharedCheck_796_ = !lean_is_exclusive(v___x_741_);
if (v_isSharedCheck_796_ == 0)
{
v___x_791_ = v___x_741_;
v_isShared_792_ = v_isSharedCheck_796_;
goto v_resetjp_790_;
}
else
{
lean_inc(v_a_789_);
lean_dec(v___x_741_);
v___x_791_ = lean_box(0);
v_isShared_792_ = v_isSharedCheck_796_;
goto v_resetjp_790_;
}
v_resetjp_790_:
{
lean_object* v___x_794_; 
if (v_isShared_792_ == 0)
{
v___x_794_ = v___x_791_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v_a_789_);
v___x_794_ = v_reuseFailAlloc_795_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
return v___x_794_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt(uint8_t v_mode_797_, lean_object* v_a_798_, lean_object* v_b_799_, lean_object* v_a_800_, lean_object* v_a_801_, lean_object* v_a_802_, lean_object* v_a_803_){
_start:
{
lean_object* v_d_806_; lean_object* v_e_807_; lean_object* v___y_808_; lean_object* v___y_809_; lean_object* v___y_810_; lean_object* v___y_811_; 
switch(lean_obj_tag(v_a_798_))
{
case 11:
{
lean_object* v_struct_816_; lean_object* v___x_817_; 
v_struct_816_ = lean_ctor_get(v_a_798_, 2);
lean_inc_ref(v_struct_816_);
lean_dec_ref_known(v_a_798_, 3);
v___x_817_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_797_, v_struct_816_, v_b_799_, v_a_800_, v_a_801_, v_a_802_, v_a_803_);
return v___x_817_;
}
case 5:
{
lean_object* v_dummy_818_; lean_object* v_nargs_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; 
v_dummy_818_ = lean_obj_once(&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__0, &l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__0_once, _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__0);
v_nargs_819_ = l_Lean_Expr_getAppNumArgs(v_a_798_);
lean_inc(v_nargs_819_);
v___x_820_ = lean_mk_array(v_nargs_819_, v_dummy_818_);
v___x_821_ = lean_unsigned_to_nat(1u);
v___x_822_ = lean_nat_sub(v_nargs_819_, v___x_821_);
lean_dec(v_nargs_819_);
v___x_823_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__11(v_mode_797_, v_b_799_, v_a_798_, v___x_820_, v___x_822_, v_a_800_, v_a_801_, v_a_802_, v_a_803_);
return v___x_823_;
}
case 6:
{
lean_object* v_binderType_824_; lean_object* v_body_825_; 
v_binderType_824_ = lean_ctor_get(v_a_798_, 1);
lean_inc_ref(v_binderType_824_);
v_body_825_ = lean_ctor_get(v_a_798_, 2);
lean_inc_ref(v_body_825_);
lean_dec_ref_known(v_a_798_, 3);
v_d_806_ = v_binderType_824_;
v_e_807_ = v_body_825_;
v___y_808_ = v_a_800_;
v___y_809_ = v_a_801_;
v___y_810_ = v_a_802_;
v___y_811_ = v_a_803_;
goto v___jp_805_;
}
case 7:
{
lean_object* v_binderType_826_; lean_object* v_body_827_; 
v_binderType_826_ = lean_ctor_get(v_a_798_, 1);
lean_inc_ref(v_binderType_826_);
v_body_827_ = lean_ctor_get(v_a_798_, 2);
lean_inc_ref(v_body_827_);
lean_dec_ref_known(v_a_798_, 3);
v_d_806_ = v_binderType_826_;
v_e_807_ = v_body_827_;
v___y_808_ = v_a_800_;
v___y_809_ = v_a_801_;
v___y_810_ = v_a_802_;
v___y_811_ = v_a_803_;
goto v___jp_805_;
}
case 8:
{
lean_object* v_value_828_; lean_object* v_body_829_; lean_object* v___x_830_; 
v_value_828_ = lean_ctor_get(v_a_798_, 2);
lean_inc_ref(v_value_828_);
v_body_829_ = lean_ctor_get(v_a_798_, 3);
lean_inc_ref(v_body_829_);
lean_dec_ref_known(v_a_798_, 4);
lean_inc_ref(v_b_799_);
v___x_830_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_797_, v_value_828_, v_b_799_, v_a_800_, v_a_801_, v_a_802_, v_a_803_);
if (lean_obj_tag(v___x_830_) == 0)
{
lean_object* v_a_831_; uint8_t v___x_832_; 
v_a_831_ = lean_ctor_get(v___x_830_, 0);
v___x_832_ = lean_unbox(v_a_831_);
if (v___x_832_ == 0)
{
lean_dec_ref(v_body_829_);
lean_dec_ref(v_b_799_);
return v___x_830_;
}
else
{
lean_object* v___x_833_; 
lean_dec_ref_known(v___x_830_, 1);
v___x_833_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_797_, v_body_829_, v_b_799_, v_a_800_, v_a_801_, v_a_802_, v_a_803_);
return v___x_833_;
}
}
else
{
lean_dec_ref(v_body_829_);
lean_dec_ref(v_b_799_);
return v___x_830_;
}
}
default: 
{
uint8_t v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; 
lean_dec_ref(v_b_799_);
lean_dec_ref(v_a_798_);
v___x_834_ = 1;
v___x_835_ = lean_box(v___x_834_);
v___x_836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_836_, 0, v___x_835_);
return v___x_836_;
}
}
v___jp_805_:
{
lean_object* v___x_812_; 
lean_inc_ref(v_b_799_);
v___x_812_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_797_, v_d_806_, v_b_799_, v___y_808_, v___y_809_, v___y_810_, v___y_811_);
if (lean_obj_tag(v___x_812_) == 0)
{
lean_object* v_a_813_; uint8_t v___x_814_; 
v_a_813_ = lean_ctor_get(v___x_812_, 0);
v___x_814_ = lean_unbox(v_a_813_);
if (v___x_814_ == 0)
{
lean_dec_ref(v_e_807_);
lean_dec_ref(v_b_799_);
return v___x_812_;
}
else
{
lean_object* v___x_815_; 
lean_dec_ref_known(v___x_812_, 1);
v___x_815_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_797_, v_e_807_, v_b_799_, v___y_808_, v___y_809_, v___y_810_, v___y_811_);
return v___x_815_;
}
}
else
{
lean_dec_ref(v_e_807_);
lean_dec_ref(v_b_799_);
return v___x_812_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_someChildGe(uint8_t v_mode_837_, lean_object* v_a_838_, lean_object* v_b_839_, lean_object* v_a_840_, lean_object* v_a_841_, lean_object* v_a_842_, lean_object* v_a_843_){
_start:
{
lean_object* v___x_845_; 
v___x_845_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt(v_mode_837_, v_a_838_, v_b_839_, v_a_840_, v_a_841_, v_a_842_, v_a_843_);
if (lean_obj_tag(v___x_845_) == 0)
{
lean_object* v_a_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_861_; 
v_a_846_ = lean_ctor_get(v___x_845_, 0);
v_isSharedCheck_861_ = !lean_is_exclusive(v___x_845_);
if (v_isSharedCheck_861_ == 0)
{
v___x_848_ = v___x_845_;
v_isShared_849_ = v_isSharedCheck_861_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_a_846_);
lean_dec(v___x_845_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_861_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
uint8_t v___x_850_; 
v___x_850_ = lean_unbox(v_a_846_);
lean_dec(v_a_846_);
if (v___x_850_ == 0)
{
uint8_t v___x_851_; lean_object* v___x_852_; lean_object* v___x_854_; 
v___x_851_ = 1;
v___x_852_ = lean_box(v___x_851_);
if (v_isShared_849_ == 0)
{
lean_ctor_set(v___x_848_, 0, v___x_852_);
v___x_854_ = v___x_848_;
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
else
{
uint8_t v___x_856_; lean_object* v___x_857_; lean_object* v___x_859_; 
v___x_856_ = 0;
v___x_857_ = lean_box(v___x_856_);
if (v_isShared_849_ == 0)
{
lean_ctor_set(v___x_848_, 0, v___x_857_);
v___x_859_ = v___x_848_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v___x_857_);
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
else
{
return v___x_845_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_someChildGe___boxed(lean_object* v_mode_862_, lean_object* v_a_863_, lean_object* v_b_864_, lean_object* v_a_865_, lean_object* v_a_866_, lean_object* v_a_867_, lean_object* v_a_868_, lean_object* v_a_869_){
_start:
{
uint8_t v_mode_boxed_870_; lean_object* v_res_871_; 
v_mode_boxed_870_ = lean_unbox(v_mode_862_);
v_res_871_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_someChildGe(v_mode_boxed_870_, v_a_863_, v_b_864_, v_a_865_, v_a_866_, v_a_867_, v_a_868_);
lean_dec(v_a_868_);
lean_dec_ref(v_a_867_);
lean_dec(v_a_866_);
lean_dec_ref(v_a_865_);
return v_res_871_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltPair___boxed(lean_object* v_mode_872_, lean_object* v_a_u2081_873_, lean_object* v_a_u2082_874_, lean_object* v_b_u2081_875_, lean_object* v_b_u2082_876_, lean_object* v_a_877_, lean_object* v_a_878_, lean_object* v_a_879_, lean_object* v_a_880_, lean_object* v_a_881_){
_start:
{
uint8_t v_mode_boxed_882_; lean_object* v_res_883_; 
v_mode_boxed_882_ = lean_unbox(v_mode_872_);
v_res_883_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltPair(v_mode_boxed_882_, v_a_u2081_873_, v_a_u2082_874_, v_b_u2081_875_, v_b_u2082_876_, v_a_877_, v_a_878_, v_a_879_, v_a_880_);
lean_dec(v_a_880_);
lean_dec_ref(v_a_879_);
lean_dec(v_a_878_);
lean_dec_ref(v_a_877_);
return v_res_883_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___boxed(lean_object* v_upperBound_884_, lean_object* v_args_885_, lean_object* v_mode_886_, lean_object* v_b_887_, lean_object* v_a_888_, lean_object* v_b_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_){
_start:
{
uint8_t v_mode_boxed_895_; lean_object* v_res_896_; 
v_mode_boxed_895_ = lean_unbox(v_mode_886_);
v_res_896_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg(v_upperBound_884_, v_args_885_, v_mode_boxed_895_, v_b_887_, v_a_888_, v_b_889_, v___y_890_, v___y_891_, v___y_892_, v___y_893_);
lean_dec(v___y_893_);
lean_dec_ref(v___y_892_);
lean_dec(v___y_891_);
lean_dec_ref(v___y_890_);
lean_dec_ref(v_args_885_);
lean_dec(v_upperBound_884_);
return v_res_896_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt___boxed(lean_object* v_mode_897_, lean_object* v_a_898_, lean_object* v_b_899_, lean_object* v_a_900_, lean_object* v_a_901_, lean_object* v_a_902_, lean_object* v_a_903_, lean_object* v_a_904_){
_start:
{
uint8_t v_mode_boxed_905_; lean_object* v_res_906_; 
v_mode_boxed_905_ = lean_unbox(v_mode_897_);
v_res_906_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_boxed_905_, v_a_898_, v_b_899_, v_a_900_, v_a_901_, v_a_902_, v_a_903_);
lean_dec(v_a_903_);
lean_dec_ref(v_a_902_);
lean_dec(v_a_901_);
lean_dec_ref(v_a_900_);
return v_res_906_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10___redArg___boxed(lean_object* v_upperBound_907_, lean_object* v_a_908_, lean_object* v_args_909_, lean_object* v_mode_910_, lean_object* v_b_911_, lean_object* v_a_912_, lean_object* v_b_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_){
_start:
{
uint8_t v_mode_boxed_919_; lean_object* v_res_920_; 
v_mode_boxed_919_ = lean_unbox(v_mode_910_);
v_res_920_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10___redArg(v_upperBound_907_, v_a_908_, v_args_909_, v_mode_boxed_919_, v_b_911_, v_a_912_, v_b_913_, v___y_914_, v___y_915_, v___y_916_, v___y_917_);
lean_dec(v___y_917_);
lean_dec_ref(v___y_916_);
lean_dec(v___y_915_);
lean_dec_ref(v___y_914_);
lean_dec_ref(v_args_909_);
lean_dec_ref(v_a_908_);
lean_dec(v_upperBound_907_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___boxed(lean_object* v_mode_921_, lean_object* v_a_922_, lean_object* v_b_923_, lean_object* v_a_924_, lean_object* v_a_925_, lean_object* v_a_926_, lean_object* v_a_927_, lean_object* v_a_928_){
_start:
{
uint8_t v_mode_boxed_929_; lean_object* v_res_930_; 
v_mode_boxed_929_ = lean_unbox(v_mode_921_);
v_res_930_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt(v_mode_boxed_929_, v_a_922_, v_b_923_, v_a_924_, v_a_925_, v_a_926_, v_a_927_);
lean_dec(v_a_927_);
lean_dec_ref(v_a_926_);
lean_dec(v_a_925_);
lean_dec_ref(v_a_924_);
return v_res_930_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6___redArg___boxed(lean_object* v_upperBound_931_, lean_object* v___x_932_, lean_object* v___x_933_, lean_object* v_mode_934_, lean_object* v_a_935_, lean_object* v_b_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_){
_start:
{
uint8_t v_mode_boxed_942_; lean_object* v_res_943_; 
v_mode_boxed_942_ = lean_unbox(v_mode_934_);
v_res_943_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6___redArg(v_upperBound_931_, v___x_932_, v___x_933_, v_mode_boxed_942_, v_a_935_, v_b_936_, v___y_937_, v___y_938_, v___y_939_, v___y_940_);
lean_dec(v___y_940_);
lean_dec_ref(v___y_939_);
lean_dec(v___y_938_);
lean_dec_ref(v___y_937_);
lean_dec_ref(v___x_933_);
lean_dec_ref(v___x_932_);
lean_dec(v_upperBound_931_);
return v_res_943_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lpo___boxed(lean_object* v_mode_944_, lean_object* v_a_945_, lean_object* v_b_946_, lean_object* v_a_947_, lean_object* v_a_948_, lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_){
_start:
{
uint8_t v_mode_boxed_952_; lean_object* v_res_953_; 
v_mode_boxed_952_ = lean_unbox(v_mode_944_);
v_res_953_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lpo(v_mode_boxed_952_, v_a_945_, v_b_946_, v_a_947_, v_a_948_, v_a_949_, v_a_950_);
lean_dec(v_a_950_);
lean_dec_ref(v_a_949_);
lean_dec(v_a_948_);
lean_dec_ref(v_a_947_);
return v_res_953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__11___boxed(lean_object* v_mode_954_, lean_object* v_b_955_, lean_object* v_x_956_, lean_object* v_x_957_, lean_object* v_x_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_){
_start:
{
uint8_t v_mode_boxed_964_; lean_object* v_res_965_; 
v_mode_boxed_964_ = lean_unbox(v_mode_954_);
v_res_965_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__11(v_mode_boxed_964_, v_b_955_, v_x_956_, v_x_957_, v_x_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_);
lean_dec(v___y_962_);
lean_dec_ref(v___y_961_);
lean_dec(v___y_960_);
lean_dec_ref(v___y_959_);
return v_res_965_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7___redArg___boxed(lean_object* v_upperBound_966_, lean_object* v_a_967_, lean_object* v___x_968_, lean_object* v___x_969_, lean_object* v_mode_970_, lean_object* v_a_971_, lean_object* v_b_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_){
_start:
{
uint8_t v_mode_boxed_978_; lean_object* v_res_979_; 
v_mode_boxed_978_ = lean_unbox(v_mode_970_);
v_res_979_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7___redArg(v_upperBound_966_, v_a_967_, v___x_968_, v___x_969_, v_mode_boxed_978_, v_a_971_, v_b_972_, v___y_973_, v___y_974_, v___y_975_, v___y_976_);
lean_dec(v___y_976_);
lean_dec_ref(v___y_975_);
lean_dec(v___y_974_);
lean_dec_ref(v___y_973_);
lean_dec_ref(v___x_969_);
lean_dec_ref(v___x_968_);
lean_dec_ref(v_a_967_);
lean_dec(v_upperBound_966_);
return v_res_979_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp___boxed(lean_object* v_mode_980_, lean_object* v_a_981_, lean_object* v_b_982_, lean_object* v_a_983_, lean_object* v_a_984_, lean_object* v_a_985_, lean_object* v_a_986_, lean_object* v_a_987_){
_start:
{
uint8_t v_mode_boxed_988_; lean_object* v_res_989_; 
v_mode_boxed_988_ = lean_unbox(v_mode_980_);
v_res_989_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp(v_mode_boxed_988_, v_a_981_, v_b_982_, v_a_983_, v_a_984_, v_a_985_, v_a_986_);
lean_dec(v_a_986_);
lean_dec_ref(v_a_985_);
lean_dec(v_a_984_);
lean_dec_ref(v_a_983_);
return v_res_989_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___boxed(lean_object* v_mode_990_, lean_object* v_a_991_, lean_object* v_b_992_, lean_object* v_a_993_, lean_object* v_a_994_, lean_object* v_a_995_, lean_object* v_a_996_, lean_object* v_a_997_){
_start:
{
uint8_t v_mode_boxed_998_; lean_object* v_res_999_; 
v_mode_boxed_998_ = lean_unbox(v_mode_990_);
v_res_999_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor(v_mode_boxed_998_, v_a_991_, v_b_992_, v_a_993_, v_a_994_, v_a_995_, v_a_996_);
lean_dec(v_a_996_);
lean_dec_ref(v_a_995_);
lean_dec(v_a_994_);
lean_dec_ref(v_a_993_);
return v_res_999_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6(lean_object* v_upperBound_1000_, lean_object* v___x_1001_, lean_object* v___x_1002_, uint8_t v_mode_1003_, lean_object* v_inst_1004_, lean_object* v_R_1005_, lean_object* v_a_1006_, lean_object* v_b_1007_, lean_object* v_c_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_){
_start:
{
lean_object* v___x_1014_; 
v___x_1014_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6___redArg(v_upperBound_1000_, v___x_1001_, v___x_1002_, v_mode_1003_, v_a_1006_, v_b_1007_, v___y_1009_, v___y_1010_, v___y_1011_, v___y_1012_);
return v___x_1014_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6___boxed(lean_object* v_upperBound_1015_, lean_object* v___x_1016_, lean_object* v___x_1017_, lean_object* v_mode_1018_, lean_object* v_inst_1019_, lean_object* v_R_1020_, lean_object* v_a_1021_, lean_object* v_b_1022_, lean_object* v_c_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_){
_start:
{
uint8_t v_mode_boxed_1029_; lean_object* v_res_1030_; 
v_mode_boxed_1029_ = lean_unbox(v_mode_1018_);
v_res_1030_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6(v_upperBound_1015_, v___x_1016_, v___x_1017_, v_mode_boxed_1029_, v_inst_1019_, v_R_1020_, v_a_1021_, v_b_1022_, v_c_1023_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_);
lean_dec(v___y_1027_);
lean_dec_ref(v___y_1026_);
lean_dec(v___y_1025_);
lean_dec_ref(v___y_1024_);
lean_dec_ref(v___x_1017_);
lean_dec_ref(v___x_1016_);
lean_dec(v_upperBound_1015_);
return v_res_1030_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7(lean_object* v_upperBound_1031_, lean_object* v_a_1032_, lean_object* v___x_1033_, lean_object* v___x_1034_, uint8_t v_mode_1035_, lean_object* v_inst_1036_, lean_object* v_R_1037_, lean_object* v_a_1038_, lean_object* v_b_1039_, lean_object* v_c_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_){
_start:
{
lean_object* v___x_1046_; 
v___x_1046_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7___redArg(v_upperBound_1031_, v_a_1032_, v___x_1033_, v___x_1034_, v_mode_1035_, v_a_1038_, v_b_1039_, v___y_1041_, v___y_1042_, v___y_1043_, v___y_1044_);
return v___x_1046_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7___boxed(lean_object* v_upperBound_1047_, lean_object* v_a_1048_, lean_object* v___x_1049_, lean_object* v___x_1050_, lean_object* v_mode_1051_, lean_object* v_inst_1052_, lean_object* v_R_1053_, lean_object* v_a_1054_, lean_object* v_b_1055_, lean_object* v_c_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_){
_start:
{
uint8_t v_mode_boxed_1062_; lean_object* v_res_1063_; 
v_mode_boxed_1062_ = lean_unbox(v_mode_1051_);
v_res_1063_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7(v_upperBound_1047_, v_a_1048_, v___x_1049_, v___x_1050_, v_mode_boxed_1062_, v_inst_1052_, v_R_1053_, v_a_1054_, v_b_1055_, v_c_1056_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_);
lean_dec(v___y_1060_);
lean_dec_ref(v___y_1059_);
lean_dec(v___y_1058_);
lean_dec_ref(v___y_1057_);
lean_dec_ref(v___x_1050_);
lean_dec_ref(v___x_1049_);
lean_dec_ref(v_a_1048_);
lean_dec(v_upperBound_1047_);
return v_res_1063_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9(lean_object* v_upperBound_1064_, lean_object* v_args_1065_, uint8_t v_mode_1066_, lean_object* v_b_1067_, lean_object* v_inst_1068_, lean_object* v_R_1069_, lean_object* v_a_1070_, lean_object* v_b_1071_, lean_object* v_c_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_){
_start:
{
lean_object* v___x_1078_; 
v___x_1078_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg(v_upperBound_1064_, v_args_1065_, v_mode_1066_, v_b_1067_, v_a_1070_, v_b_1071_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_);
return v___x_1078_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___boxed(lean_object* v_upperBound_1079_, lean_object* v_args_1080_, lean_object* v_mode_1081_, lean_object* v_b_1082_, lean_object* v_inst_1083_, lean_object* v_R_1084_, lean_object* v_a_1085_, lean_object* v_b_1086_, lean_object* v_c_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_){
_start:
{
uint8_t v_mode_boxed_1093_; lean_object* v_res_1094_; 
v_mode_boxed_1093_ = lean_unbox(v_mode_1081_);
v_res_1094_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9(v_upperBound_1079_, v_args_1080_, v_mode_boxed_1093_, v_b_1082_, v_inst_1083_, v_R_1084_, v_a_1085_, v_b_1086_, v_c_1087_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_);
lean_dec(v___y_1091_);
lean_dec_ref(v___y_1090_);
lean_dec(v___y_1089_);
lean_dec_ref(v___y_1088_);
lean_dec_ref(v_args_1080_);
lean_dec(v_upperBound_1079_);
return v_res_1094_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10(lean_object* v_upperBound_1095_, lean_object* v_a_1096_, lean_object* v_args_1097_, uint8_t v_mode_1098_, lean_object* v_b_1099_, lean_object* v_inst_1100_, lean_object* v_R_1101_, lean_object* v_a_1102_, lean_object* v_b_1103_, lean_object* v_c_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_){
_start:
{
lean_object* v___x_1110_; 
v___x_1110_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10___redArg(v_upperBound_1095_, v_a_1096_, v_args_1097_, v_mode_1098_, v_b_1099_, v_a_1102_, v_b_1103_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_);
return v___x_1110_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10___boxed(lean_object* v_upperBound_1111_, lean_object* v_a_1112_, lean_object* v_args_1113_, lean_object* v_mode_1114_, lean_object* v_b_1115_, lean_object* v_inst_1116_, lean_object* v_R_1117_, lean_object* v_a_1118_, lean_object* v_b_1119_, lean_object* v_c_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_){
_start:
{
uint8_t v_mode_boxed_1126_; lean_object* v_res_1127_; 
v_mode_boxed_1126_ = lean_unbox(v_mode_1114_);
v_res_1127_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10(v_upperBound_1111_, v_a_1112_, v_args_1113_, v_mode_boxed_1126_, v_b_1115_, v_inst_1116_, v_R_1117_, v_a_1118_, v_b_1119_, v_c_1120_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_);
lean_dec(v___y_1124_);
lean_dec_ref(v___y_1123_);
lean_dec(v___y_1122_);
lean_dec_ref(v___y_1121_);
lean_dec_ref(v_args_1113_);
lean_dec_ref(v_a_1112_);
lean_dec(v_upperBound_1111_);
return v_res_1127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_main(lean_object* v_a_1128_, lean_object* v_b_1129_, uint8_t v_mode_1130_, lean_object* v_a_1131_, lean_object* v_a_1132_, lean_object* v_a_1133_, lean_object* v_a_1134_){
_start:
{
lean_object* v___x_1136_; 
v___x_1136_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_1130_, v_a_1128_, v_b_1129_, v_a_1131_, v_a_1132_, v_a_1133_, v_a_1134_);
return v___x_1136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_main___boxed(lean_object* v_a_1137_, lean_object* v_b_1138_, lean_object* v_mode_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_, lean_object* v_a_1143_, lean_object* v_a_1144_){
_start:
{
uint8_t v_mode_boxed_1145_; lean_object* v_res_1146_; 
v_mode_boxed_1145_ = lean_unbox(v_mode_1139_);
v_res_1146_ = l_Lean_Meta_ACLt_main(v_a_1137_, v_b_1138_, v_mode_boxed_1145_, v_a_1140_, v_a_1141_, v_a_1142_, v_a_1143_);
lean_dec(v_a_1143_);
lean_dec_ref(v_a_1142_);
lean_dec(v_a_1141_);
lean_dec_ref(v_a_1140_);
return v_res_1146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_acLt(lean_object* v_a_1147_, lean_object* v_b_1148_, uint8_t v_mode_1149_, lean_object* v_a_1150_, lean_object* v_a_1151_, lean_object* v_a_1152_, lean_object* v_a_1153_){
_start:
{
lean_object* v___x_1155_; 
v___x_1155_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_1149_, v_a_1147_, v_b_1148_, v_a_1150_, v_a_1151_, v_a_1152_, v_a_1153_);
return v___x_1155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_acLt___boxed(lean_object* v_a_1156_, lean_object* v_b_1157_, lean_object* v_mode_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_, lean_object* v_a_1161_, lean_object* v_a_1162_, lean_object* v_a_1163_){
_start:
{
uint8_t v_mode_boxed_1164_; lean_object* v_res_1165_; 
v_mode_boxed_1164_ = lean_unbox(v_mode_1158_);
v_res_1165_ = l_Lean_Meta_acLt(v_a_1156_, v_b_1157_, v_mode_boxed_1164_, v_a_1159_, v_a_1160_, v_a_1161_, v_a_1162_);
lean_dec(v_a_1162_);
lean_dec_ref(v_a_1161_);
lean_dec(v_a_1160_);
lean_dec_ref(v_a_1159_);
return v_res_1165_;
}
}
lean_object* runtime_initialize_Lean_Meta_DiscrTree_Main(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_FunInfo(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_ACLt(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_DiscrTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config = _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config();
lean_mark_persistent(l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_ACLt(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_DiscrTree_Main(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* initialize_Lean_Meta_FunInfo(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_ACLt(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_DiscrTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_ACLt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_ACLt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_ACLt(builtin);
}
#ifdef __cplusplus
}
#endif
