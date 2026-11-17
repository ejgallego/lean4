// Lean compiler output
// Module: Lean.Meta.DiscrTree.Main
// Imports: public import Lean.Meta.Basic public import Lean.Meta.DiscrTree.Util import Lean.Meta.WHNF
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_whnfCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldDefinition_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_etaExpandedStrict_x3f(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwIsDefEqStuck___redArg();
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_getReducibilityStatusCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isMatcherAppCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getFirstDiscrPos(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t l_Lean_isRecCore(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_isReadOnlyOrSyntheticOpaque(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isRawNatLit(lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_instInhabitedTrie___redArg();
uint64_t l_Lean_Meta_DiscrTree_Key_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_DiscrTree_instBEqKey_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint8_t l_Lean_Meta_DiscrTree_Key_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Meta_DiscrTree_hasNoindexAnnotation(lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_ParamInfo_isImplicit(lean_object*);
uint8_t l_Lean_Meta_ParamInfo_isStrictImplicit(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
uint8_t l_Lean_isClass(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_mkNoindexAnnotation(lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_instBEqKey_beq___boxed(lean_object*, lean_object*);
uint8_t l_Array_isEqvAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_Key_arity(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_Key_arity___boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpMVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "_discr_tree_tmp"};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpMVarId___closed__0 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpMVarId___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpMVarId___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpMVarId___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 72, 223, 190, 190, 84, 146, 120)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpMVarId___closed__1 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpMVarId___closed__1_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpMVarId = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpMVarId___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpStar___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpStar___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpStar;
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_ignoreArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_ignoreArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_pushArgsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_pushArgsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__0 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__0_value;
static const lean_string_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zero"};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__1 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__1_value),LEAN_SCALAR_PTR_LITERAL(51, 81, 163, 94, 71, 156, 90, 186)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__2 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__2_value;
static const lean_string_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__3 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__3_value;
static const lean_string_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__4 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__3_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__4_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__5 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__5_value;
static const lean_string_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "succ"};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__6 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__6_value),LEAN_SCALAR_PTR_LITERAL(93, 165, 73, 246, 125, 40, 156, 223)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__7 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__7_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_toNatLit_x3f_loop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_toNatLit_x3f_loop___closed__0 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_toNatLit_x3f_loop___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_toNatLit_x3f_loop(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_toNatLit_x3f(lean_object*);
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNatType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNatType___closed__0 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNatType___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNatType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNatType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAdd"};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__0 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__0_value;
static const lean_string_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAdd"};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__1 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__0_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__1_value),LEAN_SCALAR_PTR_LITERAL(134, 172, 115, 219, 189, 252, 56, 148)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__2 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__2_value;
static const lean_string_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Add"};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__3 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__3_value;
static const lean_string_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "add"};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__4 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__3_value),LEAN_SCALAR_PTR_LITERAL(123, 91, 0, 102, 155, 93, 69, 240)}};
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__4_value),LEAN_SCALAR_PTR_LITERAL(50, 34, 112, 179, 66, 45, 192, 92)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__5 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__4_value),LEAN_SCALAR_PTR_LITERAL(210, 189, 86, 121, 130, 22, 242, 236)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__6 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_shouldAddAsStar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_shouldAddAsStar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_reduce(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_reduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isBadKey(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isBadKey___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_reduceUntilBadKey_step(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_reduceUntilBadKey_step___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_reduceUntilBadKey(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_reduceUntilBadKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_reduceDT(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_reduceDT___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_pushWildcards(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_pushArgs(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_pushArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_mkPathAux(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_mkPathAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_initCapacity;
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_mkPath(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_mkPath___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insert___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__2_value;
static const lean_array_object l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)&l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__4;
static const lean_closure_object l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_DiscrTree_instBEqKey_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__5_value;
static const lean_array_object l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__0 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__1 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__2 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchKeyArgs(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchKeyArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnifyKeyArgs(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnifyKeyArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg___closed__0_value),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__1_value;
static const lean_closure_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchRoot___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchRoot___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchRoot(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchRoot___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatch___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_mayMatchPrefix___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_mayMatchPrefix___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_mayMatchPrefix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_mayMatchPrefix___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_DiscrTree_getMatchWithExtra_spec__0___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_DiscrTree_getMatchWithExtra_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchWithExtra___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchWithExtra___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchWithExtra(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchWithExtra___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_DiscrTree_getMatchWithExtra_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_DiscrTree_getMatchWithExtra_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchKeyRootFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchKeyRootFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchLiberal___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchLiberal___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchLiberal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchLiberal___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchLiberal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchLiberal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__1___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify___redArg___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_DiscrTree_getUnify___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_DiscrTree_getUnify___redArg___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_DiscrTree_getUnify___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_DiscrTree_getUnify___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_Key_arity(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 4:
{
lean_object* v_a_2_; 
v_a_2_ = lean_ctor_get(v_x_1_, 1);
lean_inc(v_a_2_);
return v_a_2_;
}
case 3:
{
lean_object* v_a_3_; 
v_a_3_ = lean_ctor_get(v_x_1_, 1);
lean_inc(v_a_3_);
return v_a_3_;
}
case 5:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(1u);
return v___x_4_;
}
case 6:
{
lean_object* v_a_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v_a_5_ = lean_ctor_get(v_x_1_, 2);
v___x_6_ = lean_unsigned_to_nat(1u);
v___x_7_ = lean_nat_add(v___x_6_, v_a_5_);
return v___x_7_;
}
default: 
{
lean_object* v___x_8_; 
v___x_8_ = lean_unsigned_to_nat(0u);
return v___x_8_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_Key_arity___boxed(lean_object* v_x_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lean_Meta_DiscrTree_Key_arity(v_x_9_);
lean_dec(v_x_9_);
return v_res_10_;
}
}
static lean_object* _init_l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpStar___closed__0(void){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_15_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpMVarId));
v___x_16_ = l_Lean_mkMVar(v___x_15_);
return v___x_16_;
}
}
static lean_object* _init_l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpStar(void){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = lean_obj_once(&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpStar___closed__0, &l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpStar___closed__0_once, _init_l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpStar___closed__0);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_ignoreArg(lean_object* v_a_18_, lean_object* v_i_19_, lean_object* v_infos_20_, lean_object* v_a_21_, lean_object* v_a_22_, lean_object* v_a_23_, lean_object* v_a_24_){
_start:
{
lean_object* v___x_26_; uint8_t v___x_27_; 
v___x_26_ = lean_array_get_size(v_infos_20_);
v___x_27_ = lean_nat_dec_lt(v_i_19_, v___x_26_);
if (v___x_27_ == 0)
{
lean_object* v___x_28_; 
v___x_28_ = l_Lean_Meta_isProof(v_a_18_, v_a_21_, v_a_22_, v_a_23_, v_a_24_);
return v___x_28_;
}
else
{
lean_object* v_info_29_; uint8_t v_isInstance_30_; 
v_info_29_ = lean_array_fget_borrowed(v_infos_20_, v_i_19_);
v_isInstance_30_ = lean_ctor_get_uint8(v_info_29_, sizeof(void*)*1 + 4);
if (v_isInstance_30_ == 0)
{
uint8_t v___x_47_; 
v___x_47_ = l_Lean_Meta_ParamInfo_isImplicit(v_info_29_);
if (v___x_47_ == 0)
{
uint8_t v___x_48_; 
v___x_48_ = l_Lean_Meta_ParamInfo_isStrictImplicit(v_info_29_);
if (v___x_48_ == 0)
{
lean_object* v___x_49_; 
v___x_49_ = l_Lean_Meta_isProof(v_a_18_, v_a_21_, v_a_22_, v_a_23_, v_a_24_);
return v___x_49_;
}
else
{
goto v___jp_31_;
}
}
else
{
goto v___jp_31_;
}
}
else
{
lean_object* v___x_50_; lean_object* v___x_51_; 
lean_dec_ref(v_a_18_);
v___x_50_ = lean_box(v___x_27_);
v___x_51_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_51_, 0, v___x_50_);
return v___x_51_;
}
v___jp_31_:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lean_Meta_isType(v_a_18_, v_a_21_, v_a_22_, v_a_23_, v_a_24_);
if (lean_obj_tag(v___x_32_) == 0)
{
lean_object* v_a_33_; lean_object* v___x_35_; uint8_t v_isShared_36_; uint8_t v_isSharedCheck_46_; 
v_a_33_ = lean_ctor_get(v___x_32_, 0);
v_isSharedCheck_46_ = !lean_is_exclusive(v___x_32_);
if (v_isSharedCheck_46_ == 0)
{
v___x_35_ = v___x_32_;
v_isShared_36_ = v_isSharedCheck_46_;
goto v_resetjp_34_;
}
else
{
lean_inc(v_a_33_);
lean_dec(v___x_32_);
v___x_35_ = lean_box(0);
v_isShared_36_ = v_isSharedCheck_46_;
goto v_resetjp_34_;
}
v_resetjp_34_:
{
uint8_t v___x_37_; 
v___x_37_ = lean_unbox(v_a_33_);
lean_dec(v_a_33_);
if (v___x_37_ == 0)
{
lean_object* v___x_38_; lean_object* v___x_40_; 
v___x_38_ = lean_box(v___x_27_);
if (v_isShared_36_ == 0)
{
lean_ctor_set(v___x_35_, 0, v___x_38_);
v___x_40_ = v___x_35_;
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
else
{
lean_object* v___x_42_; lean_object* v___x_44_; 
v___x_42_ = lean_box(v_isInstance_30_);
if (v_isShared_36_ == 0)
{
lean_ctor_set(v___x_35_, 0, v___x_42_);
v___x_44_ = v___x_35_;
goto v_reusejp_43_;
}
else
{
lean_object* v_reuseFailAlloc_45_; 
v_reuseFailAlloc_45_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_45_, 0, v___x_42_);
v___x_44_ = v_reuseFailAlloc_45_;
goto v_reusejp_43_;
}
v_reusejp_43_:
{
return v___x_44_;
}
}
}
}
else
{
return v___x_32_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_ignoreArg___boxed(lean_object* v_a_52_, lean_object* v_i_53_, lean_object* v_infos_54_, lean_object* v_a_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_ignoreArg(v_a_52_, v_i_53_, v_infos_54_, v_a_55_, v_a_56_, v_a_57_, v_a_58_);
lean_dec(v_a_58_);
lean_dec_ref(v_a_57_);
lean_dec(v_a_56_);
lean_dec_ref(v_a_55_);
lean_dec_ref(v_infos_54_);
lean_dec(v_i_53_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_pushArgsAux(lean_object* v_infos_61_, lean_object* v_x_62_, lean_object* v_x_63_, lean_object* v_x_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_){
_start:
{
if (lean_obj_tag(v_x_63_) == 5)
{
lean_object* v_fn_70_; lean_object* v_arg_71_; lean_object* v___x_72_; 
v_fn_70_ = lean_ctor_get(v_x_63_, 0);
lean_inc_ref(v_fn_70_);
v_arg_71_ = lean_ctor_get(v_x_63_, 1);
lean_inc_ref_n(v_arg_71_, 2);
lean_dec_ref_known(v_x_63_, 2);
v___x_72_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_ignoreArg(v_arg_71_, v_x_62_, v_infos_61_, v_a_65_, v_a_66_, v_a_67_, v_a_68_);
if (lean_obj_tag(v___x_72_) == 0)
{
lean_object* v_a_73_; uint8_t v___x_74_; 
v_a_73_ = lean_ctor_get(v___x_72_, 0);
lean_inc(v_a_73_);
lean_dec_ref_known(v___x_72_, 1);
v___x_74_ = lean_unbox(v_a_73_);
lean_dec(v_a_73_);
if (v___x_74_ == 0)
{
lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_75_ = lean_unsigned_to_nat(1u);
v___x_76_ = lean_nat_sub(v_x_62_, v___x_75_);
lean_dec(v_x_62_);
v___x_77_ = lean_array_push(v_x_64_, v_arg_71_);
v_x_62_ = v___x_76_;
v_x_63_ = v_fn_70_;
v_x_64_ = v___x_77_;
goto _start;
}
else
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
lean_dec_ref(v_arg_71_);
v___x_79_ = lean_unsigned_to_nat(1u);
v___x_80_ = lean_nat_sub(v_x_62_, v___x_79_);
lean_dec(v_x_62_);
v___x_81_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpStar;
v___x_82_ = lean_array_push(v_x_64_, v___x_81_);
v_x_62_ = v___x_80_;
v_x_63_ = v_fn_70_;
v_x_64_ = v___x_82_;
goto _start;
}
}
else
{
lean_object* v_a_84_; lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_91_; 
lean_dec_ref(v_arg_71_);
lean_dec_ref(v_fn_70_);
lean_dec_ref(v_x_64_);
lean_dec(v_x_62_);
v_a_84_ = lean_ctor_get(v___x_72_, 0);
v_isSharedCheck_91_ = !lean_is_exclusive(v___x_72_);
if (v_isSharedCheck_91_ == 0)
{
v___x_86_ = v___x_72_;
v_isShared_87_ = v_isSharedCheck_91_;
goto v_resetjp_85_;
}
else
{
lean_inc(v_a_84_);
lean_dec(v___x_72_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_91_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
lean_object* v___x_89_; 
if (v_isShared_87_ == 0)
{
v___x_89_ = v___x_86_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_90_; 
v_reuseFailAlloc_90_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_90_, 0, v_a_84_);
v___x_89_ = v_reuseFailAlloc_90_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
return v___x_89_;
}
}
}
}
else
{
lean_object* v___x_92_; 
lean_dec_ref(v_x_63_);
lean_dec(v_x_62_);
v___x_92_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_92_, 0, v_x_64_);
return v___x_92_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_pushArgsAux___boxed(lean_object* v_infos_93_, lean_object* v_x_94_, lean_object* v_x_95_, lean_object* v_x_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_pushArgsAux(v_infos_93_, v_x_94_, v_x_95_, v_x_96_, v_a_97_, v_a_98_, v_a_99_, v_a_100_);
lean_dec(v_a_100_);
lean_dec_ref(v_a_99_);
lean_dec(v_a_98_);
lean_dec_ref(v_a_97_);
lean_dec_ref(v_infos_93_);
return v_res_102_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral(lean_object* v_e_117_){
_start:
{
uint8_t v___x_118_; 
v___x_118_ = l_Lean_Expr_isRawNatLit(v_e_117_);
if (v___x_118_ == 0)
{
lean_object* v_f_119_; uint8_t v___x_120_; 
v_f_119_ = l_Lean_Expr_getAppFn(v_e_117_);
v___x_120_ = l_Lean_Expr_isConst(v_f_119_);
if (v___x_120_ == 0)
{
lean_dec_ref(v_f_119_);
lean_dec_ref(v_e_117_);
return v___x_118_;
}
else
{
lean_object* v_fName_121_; lean_object* v___x_139_; uint8_t v___x_140_; 
v_fName_121_ = l_Lean_Expr_constName_x21(v_f_119_);
lean_dec_ref(v_f_119_);
v___x_139_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__7));
v___x_140_ = lean_name_eq(v_fName_121_, v___x_139_);
if (v___x_140_ == 0)
{
goto v___jp_128_;
}
else
{
lean_object* v___x_141_; lean_object* v___x_142_; uint8_t v___x_143_; 
v___x_141_ = l_Lean_Expr_getAppNumArgs(v_e_117_);
v___x_142_ = lean_unsigned_to_nat(1u);
v___x_143_ = lean_nat_dec_eq(v___x_141_, v___x_142_);
lean_dec(v___x_141_);
if (v___x_143_ == 0)
{
goto v___jp_128_;
}
else
{
lean_object* v___x_144_; 
lean_dec(v_fName_121_);
v___x_144_ = l_Lean_Expr_appArg_x21(v_e_117_);
lean_dec_ref(v_e_117_);
v_e_117_ = v___x_144_;
goto _start;
}
}
v___jp_122_:
{
lean_object* v___x_123_; uint8_t v___x_124_; 
v___x_123_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__2));
v___x_124_ = lean_name_eq(v_fName_121_, v___x_123_);
lean_dec(v_fName_121_);
if (v___x_124_ == 0)
{
lean_dec_ref(v_e_117_);
return v___x_124_;
}
else
{
lean_object* v___x_125_; lean_object* v___x_126_; uint8_t v___x_127_; 
v___x_125_ = l_Lean_Expr_getAppNumArgs(v_e_117_);
lean_dec_ref(v_e_117_);
v___x_126_ = lean_unsigned_to_nat(0u);
v___x_127_ = lean_nat_dec_eq(v___x_125_, v___x_126_);
lean_dec(v___x_125_);
return v___x_127_;
}
}
v___jp_128_:
{
lean_object* v___x_129_; uint8_t v___x_130_; 
v___x_129_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__5));
v___x_130_ = lean_name_eq(v_fName_121_, v___x_129_);
if (v___x_130_ == 0)
{
goto v___jp_122_;
}
else
{
lean_object* v___x_131_; lean_object* v___x_132_; uint8_t v___x_133_; 
v___x_131_ = l_Lean_Expr_getAppNumArgs(v_e_117_);
v___x_132_ = lean_unsigned_to_nat(3u);
v___x_133_ = lean_nat_dec_eq(v___x_131_, v___x_132_);
if (v___x_133_ == 0)
{
lean_dec(v___x_131_);
goto v___jp_122_;
}
else
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; 
lean_dec(v_fName_121_);
v___x_134_ = lean_unsigned_to_nat(1u);
v___x_135_ = lean_nat_sub(v___x_131_, v___x_134_);
lean_dec(v___x_131_);
v___x_136_ = lean_nat_sub(v___x_135_, v___x_134_);
lean_dec(v___x_135_);
v___x_137_ = l_Lean_Expr_getRevArg_x21(v_e_117_, v___x_136_);
lean_dec_ref(v_e_117_);
v_e_117_ = v___x_137_;
goto _start;
}
}
}
}
}
else
{
lean_dec_ref(v_e_117_);
return v___x_118_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___boxed(lean_object* v_e_146_){
_start:
{
uint8_t v_res_147_; lean_object* v_r_148_; 
v_res_147_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral(v_e_146_);
v_r_148_ = lean_box(v_res_147_);
return v_r_148_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_toNatLit_x3f_loop(lean_object* v_e_151_){
_start:
{
lean_object* v_f_152_; 
v_f_152_ = l_Lean_Expr_getAppFn(v_e_151_);
switch(lean_obj_tag(v_f_152_))
{
case 9:
{
lean_object* v_a_153_; 
lean_dec_ref(v_e_151_);
v_a_153_ = lean_ctor_get(v_f_152_, 0);
lean_inc_ref(v_a_153_);
lean_dec_ref_known(v_f_152_, 1);
if (lean_obj_tag(v_a_153_) == 0)
{
lean_object* v_val_154_; lean_object* v___x_156_; uint8_t v_isShared_157_; uint8_t v_isSharedCheck_161_; 
v_val_154_ = lean_ctor_get(v_a_153_, 0);
v_isSharedCheck_161_ = !lean_is_exclusive(v_a_153_);
if (v_isSharedCheck_161_ == 0)
{
v___x_156_ = v_a_153_;
v_isShared_157_ = v_isSharedCheck_161_;
goto v_resetjp_155_;
}
else
{
lean_inc(v_val_154_);
lean_dec(v_a_153_);
v___x_156_ = lean_box(0);
v_isShared_157_ = v_isSharedCheck_161_;
goto v_resetjp_155_;
}
v_resetjp_155_:
{
lean_object* v___x_159_; 
if (v_isShared_157_ == 0)
{
lean_ctor_set_tag(v___x_156_, 1);
v___x_159_ = v___x_156_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v_val_154_);
v___x_159_ = v_reuseFailAlloc_160_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
return v___x_159_;
}
}
}
else
{
lean_object* v___x_162_; 
lean_dec_ref(v_a_153_);
v___x_162_ = lean_box(0);
return v___x_162_;
}
}
case 4:
{
lean_object* v_declName_163_; lean_object* v___x_184_; uint8_t v___x_185_; 
v_declName_163_ = lean_ctor_get(v_f_152_, 0);
lean_inc(v_declName_163_);
lean_dec_ref_known(v_f_152_, 2);
v___x_184_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__7));
v___x_185_ = lean_name_eq(v_declName_163_, v___x_184_);
if (v___x_185_ == 0)
{
goto v___jp_173_;
}
else
{
lean_object* v___x_186_; lean_object* v___x_187_; uint8_t v___x_188_; 
v___x_186_ = l_Lean_Expr_getAppNumArgs(v_e_151_);
v___x_187_ = lean_unsigned_to_nat(1u);
v___x_188_ = lean_nat_dec_eq(v___x_186_, v___x_187_);
lean_dec(v___x_186_);
if (v___x_188_ == 0)
{
goto v___jp_173_;
}
else
{
lean_object* v___x_189_; lean_object* v___x_190_; 
lean_dec(v_declName_163_);
v___x_189_ = l_Lean_Expr_appArg_x21(v_e_151_);
lean_dec_ref(v_e_151_);
v___x_190_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_toNatLit_x3f_loop(v___x_189_);
if (lean_obj_tag(v___x_190_) == 0)
{
return v___x_190_;
}
else
{
lean_object* v_val_191_; lean_object* v___x_193_; uint8_t v_isShared_194_; uint8_t v_isSharedCheck_199_; 
v_val_191_ = lean_ctor_get(v___x_190_, 0);
v_isSharedCheck_199_ = !lean_is_exclusive(v___x_190_);
if (v_isSharedCheck_199_ == 0)
{
v___x_193_ = v___x_190_;
v_isShared_194_ = v_isSharedCheck_199_;
goto v_resetjp_192_;
}
else
{
lean_inc(v_val_191_);
lean_dec(v___x_190_);
v___x_193_ = lean_box(0);
v_isShared_194_ = v_isSharedCheck_199_;
goto v_resetjp_192_;
}
v_resetjp_192_:
{
lean_object* v___x_195_; lean_object* v___x_197_; 
v___x_195_ = lean_nat_add(v_val_191_, v___x_187_);
lean_dec(v_val_191_);
if (v_isShared_194_ == 0)
{
lean_ctor_set(v___x_193_, 0, v___x_195_);
v___x_197_ = v___x_193_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v___x_195_);
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
}
v___jp_164_:
{
lean_object* v___x_165_; uint8_t v___x_166_; 
v___x_165_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__2));
v___x_166_ = lean_name_eq(v_declName_163_, v___x_165_);
lean_dec(v_declName_163_);
if (v___x_166_ == 0)
{
lean_object* v___x_167_; 
lean_dec_ref(v_e_151_);
v___x_167_ = lean_box(0);
return v___x_167_;
}
else
{
lean_object* v___x_168_; lean_object* v___x_169_; uint8_t v___x_170_; 
v___x_168_ = l_Lean_Expr_getAppNumArgs(v_e_151_);
lean_dec_ref(v_e_151_);
v___x_169_ = lean_unsigned_to_nat(0u);
v___x_170_ = lean_nat_dec_eq(v___x_168_, v___x_169_);
lean_dec(v___x_168_);
if (v___x_170_ == 0)
{
lean_object* v___x_171_; 
v___x_171_ = lean_box(0);
return v___x_171_;
}
else
{
lean_object* v___x_172_; 
v___x_172_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_toNatLit_x3f_loop___closed__0));
return v___x_172_;
}
}
}
v___jp_173_:
{
lean_object* v___x_174_; uint8_t v___x_175_; 
v___x_174_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__5));
v___x_175_ = lean_name_eq(v_declName_163_, v___x_174_);
if (v___x_175_ == 0)
{
goto v___jp_164_;
}
else
{
lean_object* v___x_176_; lean_object* v___x_177_; uint8_t v___x_178_; 
v___x_176_ = l_Lean_Expr_getAppNumArgs(v_e_151_);
v___x_177_ = lean_unsigned_to_nat(3u);
v___x_178_ = lean_nat_dec_eq(v___x_176_, v___x_177_);
if (v___x_178_ == 0)
{
lean_dec(v___x_176_);
goto v___jp_164_;
}
else
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
lean_dec(v_declName_163_);
v___x_179_ = lean_unsigned_to_nat(1u);
v___x_180_ = lean_nat_sub(v___x_176_, v___x_179_);
lean_dec(v___x_176_);
v___x_181_ = lean_nat_sub(v___x_180_, v___x_179_);
lean_dec(v___x_180_);
v___x_182_ = l_Lean_Expr_getRevArg_x21(v_e_151_, v___x_181_);
lean_dec_ref(v_e_151_);
v_e_151_ = v___x_182_;
goto _start;
}
}
}
}
default: 
{
lean_object* v___x_200_; 
lean_dec_ref(v_f_152_);
lean_dec_ref(v_e_151_);
v___x_200_ = lean_box(0);
return v___x_200_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_toNatLit_x3f(lean_object* v_e_201_){
_start:
{
uint8_t v___x_202_; 
lean_inc_ref(v_e_201_);
v___x_202_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral(v_e_201_);
if (v___x_202_ == 0)
{
lean_object* v___x_203_; 
lean_dec_ref(v_e_201_);
v___x_203_ = lean_box(0);
return v___x_203_;
}
else
{
lean_object* v___x_204_; 
v___x_204_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_toNatLit_x3f_loop(v_e_201_);
if (lean_obj_tag(v___x_204_) == 1)
{
lean_object* v_val_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_213_; 
v_val_205_ = lean_ctor_get(v___x_204_, 0);
v_isSharedCheck_213_ = !lean_is_exclusive(v___x_204_);
if (v_isSharedCheck_213_ == 0)
{
v___x_207_ = v___x_204_;
v_isShared_208_ = v_isSharedCheck_213_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_val_205_);
lean_dec(v___x_204_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_213_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
lean_object* v___x_209_; lean_object* v___x_211_; 
v___x_209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_209_, 0, v_val_205_);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 0, v___x_209_);
v___x_211_ = v___x_207_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v___x_209_);
v___x_211_ = v_reuseFailAlloc_212_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
return v___x_211_;
}
}
}
else
{
lean_object* v___x_214_; 
lean_dec(v___x_204_);
v___x_214_ = lean_box(0);
return v___x_214_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNatType(lean_object* v_e_217_, lean_object* v_a_218_, lean_object* v_a_219_, lean_object* v_a_220_, lean_object* v_a_221_){
_start:
{
lean_object* v___x_223_; 
lean_inc(v_a_221_);
lean_inc_ref(v_a_220_);
lean_inc(v_a_219_);
lean_inc_ref(v_a_218_);
v___x_223_ = lean_whnf(v_e_217_, v_a_218_, v_a_219_, v_a_220_, v_a_221_);
if (lean_obj_tag(v___x_223_) == 0)
{
lean_object* v_a_224_; lean_object* v___x_226_; uint8_t v_isShared_227_; uint8_t v_isSharedCheck_234_; 
v_a_224_ = lean_ctor_get(v___x_223_, 0);
v_isSharedCheck_234_ = !lean_is_exclusive(v___x_223_);
if (v_isSharedCheck_234_ == 0)
{
v___x_226_ = v___x_223_;
v_isShared_227_ = v_isSharedCheck_234_;
goto v_resetjp_225_;
}
else
{
lean_inc(v_a_224_);
lean_dec(v___x_223_);
v___x_226_ = lean_box(0);
v_isShared_227_ = v_isSharedCheck_234_;
goto v_resetjp_225_;
}
v_resetjp_225_:
{
lean_object* v___x_228_; uint8_t v___x_229_; lean_object* v___x_230_; lean_object* v___x_232_; 
v___x_228_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNatType___closed__0));
v___x_229_ = l_Lean_Expr_isConstOf(v_a_224_, v___x_228_);
lean_dec(v_a_224_);
v___x_230_ = lean_box(v___x_229_);
if (v_isShared_227_ == 0)
{
lean_ctor_set(v___x_226_, 0, v___x_230_);
v___x_232_ = v___x_226_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_233_; 
v_reuseFailAlloc_233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_233_, 0, v___x_230_);
v___x_232_ = v_reuseFailAlloc_233_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
return v___x_232_;
}
}
}
else
{
lean_object* v_a_235_; lean_object* v___x_237_; uint8_t v_isShared_238_; uint8_t v_isSharedCheck_242_; 
v_a_235_ = lean_ctor_get(v___x_223_, 0);
v_isSharedCheck_242_ = !lean_is_exclusive(v___x_223_);
if (v_isSharedCheck_242_ == 0)
{
v___x_237_ = v___x_223_;
v_isShared_238_ = v_isSharedCheck_242_;
goto v_resetjp_236_;
}
else
{
lean_inc(v_a_235_);
lean_dec(v___x_223_);
v___x_237_ = lean_box(0);
v_isShared_238_ = v_isSharedCheck_242_;
goto v_resetjp_236_;
}
v_resetjp_236_:
{
lean_object* v___x_240_; 
if (v_isShared_238_ == 0)
{
v___x_240_ = v___x_237_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v_a_235_);
v___x_240_ = v_reuseFailAlloc_241_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
return v___x_240_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNatType___boxed(lean_object* v_e_243_, lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_, lean_object* v_a_247_, lean_object* v_a_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNatType(v_e_243_, v_a_244_, v_a_245_, v_a_246_, v_a_247_);
lean_dec(v_a_247_);
lean_dec_ref(v_a_246_);
lean_dec(v_a_245_);
lean_dec_ref(v_a_244_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset(lean_object* v_fName_263_, lean_object* v_e_264_, lean_object* v_a_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_){
_start:
{
lean_object* v___x_310_; uint8_t v___x_311_; 
v___x_310_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__6));
v___x_311_ = lean_name_eq(v_fName_263_, v___x_310_);
if (v___x_311_ == 0)
{
goto v___jp_298_;
}
else
{
lean_object* v___x_312_; lean_object* v___x_313_; uint8_t v___x_314_; 
v___x_312_ = l_Lean_Expr_getAppNumArgs(v_e_264_);
v___x_313_ = lean_unsigned_to_nat(2u);
v___x_314_ = lean_nat_dec_eq(v___x_312_, v___x_313_);
lean_dec(v___x_312_);
if (v___x_314_ == 0)
{
goto v___jp_298_;
}
else
{
goto v___jp_270_;
}
}
v___jp_270_:
{
lean_object* v___x_271_; uint8_t v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_271_ = l_Lean_Expr_appArg_x21(v_e_264_);
v___x_272_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral(v___x_271_);
v___x_273_ = lean_box(v___x_272_);
v___x_274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_274_, 0, v___x_273_);
return v___x_274_;
}
v___jp_275_:
{
lean_object* v___x_276_; uint8_t v___x_277_; 
v___x_276_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__7));
v___x_277_ = lean_name_eq(v_fName_263_, v___x_276_);
if (v___x_277_ == 0)
{
lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_278_ = lean_box(v___x_277_);
v___x_279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_279_, 0, v___x_278_);
return v___x_279_;
}
else
{
lean_object* v___x_280_; lean_object* v___x_281_; uint8_t v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_280_ = l_Lean_Expr_getAppNumArgs(v_e_264_);
v___x_281_ = lean_unsigned_to_nat(1u);
v___x_282_ = lean_nat_dec_eq(v___x_280_, v___x_281_);
lean_dec(v___x_280_);
v___x_283_ = lean_box(v___x_282_);
v___x_284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_284_, 0, v___x_283_);
return v___x_284_;
}
}
v___jp_285_:
{
lean_object* v___x_286_; uint8_t v___x_287_; 
v___x_286_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__2));
v___x_287_ = lean_name_eq(v_fName_263_, v___x_286_);
if (v___x_287_ == 0)
{
goto v___jp_275_;
}
else
{
lean_object* v___x_288_; lean_object* v___x_289_; uint8_t v___x_290_; 
v___x_288_ = l_Lean_Expr_getAppNumArgs(v_e_264_);
v___x_289_ = lean_unsigned_to_nat(6u);
v___x_290_ = lean_nat_dec_eq(v___x_288_, v___x_289_);
if (v___x_290_ == 0)
{
lean_dec(v___x_288_);
goto v___jp_275_;
}
else
{
lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_291_ = lean_unsigned_to_nat(1u);
v___x_292_ = lean_nat_sub(v___x_288_, v___x_291_);
lean_dec(v___x_288_);
v___x_293_ = lean_nat_sub(v___x_292_, v___x_291_);
lean_dec(v___x_292_);
v___x_294_ = l_Lean_Expr_getRevArg_x21(v_e_264_, v___x_293_);
v___x_295_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNatType(v___x_294_, v_a_265_, v_a_266_, v_a_267_, v_a_268_);
if (lean_obj_tag(v___x_295_) == 0)
{
lean_object* v_a_296_; uint8_t v___x_297_; 
v_a_296_ = lean_ctor_get(v___x_295_, 0);
v___x_297_ = lean_unbox(v_a_296_);
if (v___x_297_ == 0)
{
return v___x_295_;
}
else
{
lean_dec_ref_known(v___x_295_, 1);
goto v___jp_270_;
}
}
else
{
return v___x_295_;
}
}
}
}
v___jp_298_:
{
lean_object* v___x_299_; uint8_t v___x_300_; 
v___x_299_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__5));
v___x_300_ = lean_name_eq(v_fName_263_, v___x_299_);
if (v___x_300_ == 0)
{
goto v___jp_285_;
}
else
{
lean_object* v___x_301_; lean_object* v___x_302_; uint8_t v___x_303_; 
v___x_301_ = l_Lean_Expr_getAppNumArgs(v_e_264_);
v___x_302_ = lean_unsigned_to_nat(4u);
v___x_303_ = lean_nat_dec_eq(v___x_301_, v___x_302_);
if (v___x_303_ == 0)
{
lean_dec(v___x_301_);
goto v___jp_285_;
}
else
{
lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_304_ = lean_unsigned_to_nat(1u);
v___x_305_ = lean_nat_sub(v___x_301_, v___x_304_);
lean_dec(v___x_301_);
v___x_306_ = l_Lean_Expr_getRevArg_x21(v_e_264_, v___x_305_);
v___x_307_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNatType(v___x_306_, v_a_265_, v_a_266_, v_a_267_, v_a_268_);
if (lean_obj_tag(v___x_307_) == 0)
{
lean_object* v_a_308_; uint8_t v___x_309_; 
v_a_308_ = lean_ctor_get(v___x_307_, 0);
v___x_309_ = lean_unbox(v_a_308_);
if (v___x_309_ == 0)
{
return v___x_307_;
}
else
{
lean_dec_ref_known(v___x_307_, 1);
goto v___jp_270_;
}
}
else
{
return v___x_307_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___boxed(lean_object* v_fName_315_, lean_object* v_e_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_, lean_object* v_a_320_, lean_object* v_a_321_){
_start:
{
lean_object* v_res_322_; 
v_res_322_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset(v_fName_315_, v_e_316_, v_a_317_, v_a_318_, v_a_319_, v_a_320_);
lean_dec(v_a_320_);
lean_dec_ref(v_a_319_);
lean_dec(v_a_318_);
lean_dec_ref(v_a_317_);
lean_dec_ref(v_e_316_);
lean_dec(v_fName_315_);
return v_res_322_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_shouldAddAsStar(lean_object* v_fName_323_, lean_object* v_e_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_){
_start:
{
lean_object* v___x_330_; 
v___x_330_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset(v_fName_323_, v_e_324_, v_a_325_, v_a_326_, v_a_327_, v_a_328_);
return v___x_330_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_shouldAddAsStar___boxed(lean_object* v_fName_331_, lean_object* v_e_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_, lean_object* v_a_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_shouldAddAsStar(v_fName_331_, v_e_332_, v_a_333_, v_a_334_, v_a_335_, v_a_336_);
lean_dec(v_a_336_);
lean_dec_ref(v_a_335_);
lean_dec(v_a_334_);
lean_dec_ref(v_a_333_);
lean_dec_ref(v_e_332_);
lean_dec(v_fName_331_);
return v_res_338_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_reduce(lean_object* v_e_339_, lean_object* v_a_340_, lean_object* v_a_341_, lean_object* v_a_342_, lean_object* v_a_343_){
_start:
{
lean_object* v___x_345_; 
v___x_345_ = l_Lean_Meta_whnfCore(v_e_339_, v_a_340_, v_a_341_, v_a_342_, v_a_343_);
if (lean_obj_tag(v___x_345_) == 0)
{
lean_object* v_a_346_; uint8_t v___x_347_; lean_object* v___x_348_; 
v_a_346_ = lean_ctor_get(v___x_345_, 0);
lean_inc_n(v_a_346_, 2);
lean_dec_ref_known(v___x_345_, 1);
v___x_347_ = 0;
v___x_348_ = l_Lean_Meta_unfoldDefinition_x3f(v_a_346_, v___x_347_, v_a_340_, v_a_341_, v_a_342_, v_a_343_);
if (lean_obj_tag(v___x_348_) == 0)
{
lean_object* v_a_349_; lean_object* v___x_351_; uint8_t v_isShared_352_; uint8_t v_isSharedCheck_361_; 
v_a_349_ = lean_ctor_get(v___x_348_, 0);
v_isSharedCheck_361_ = !lean_is_exclusive(v___x_348_);
if (v_isSharedCheck_361_ == 0)
{
v___x_351_ = v___x_348_;
v_isShared_352_ = v_isSharedCheck_361_;
goto v_resetjp_350_;
}
else
{
lean_inc(v_a_349_);
lean_dec(v___x_348_);
v___x_351_ = lean_box(0);
v_isShared_352_ = v_isSharedCheck_361_;
goto v_resetjp_350_;
}
v_resetjp_350_:
{
if (lean_obj_tag(v_a_349_) == 0)
{
lean_object* v___x_353_; 
lean_inc(v_a_346_);
v___x_353_ = l_Lean_Expr_etaExpandedStrict_x3f(v_a_346_);
if (lean_obj_tag(v___x_353_) == 0)
{
lean_object* v___x_355_; 
if (v_isShared_352_ == 0)
{
lean_ctor_set(v___x_351_, 0, v_a_346_);
v___x_355_ = v___x_351_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v_a_346_);
v___x_355_ = v_reuseFailAlloc_356_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
return v___x_355_;
}
}
else
{
lean_object* v_val_357_; 
lean_del_object(v___x_351_);
lean_dec(v_a_346_);
v_val_357_ = lean_ctor_get(v___x_353_, 0);
lean_inc(v_val_357_);
lean_dec_ref_known(v___x_353_, 1);
v_e_339_ = v_val_357_;
goto _start;
}
}
else
{
lean_object* v_val_359_; 
lean_del_object(v___x_351_);
lean_dec(v_a_346_);
v_val_359_ = lean_ctor_get(v_a_349_, 0);
lean_inc(v_val_359_);
lean_dec_ref_known(v_a_349_, 1);
v_e_339_ = v_val_359_;
goto _start;
}
}
}
else
{
lean_object* v_a_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_369_; 
lean_dec(v_a_346_);
v_a_362_ = lean_ctor_get(v___x_348_, 0);
v_isSharedCheck_369_ = !lean_is_exclusive(v___x_348_);
if (v_isSharedCheck_369_ == 0)
{
v___x_364_ = v___x_348_;
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_a_362_);
lean_dec(v___x_348_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
lean_object* v___x_367_; 
if (v_isShared_365_ == 0)
{
v___x_367_ = v___x_364_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v_a_362_);
v___x_367_ = v_reuseFailAlloc_368_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
return v___x_367_;
}
}
}
}
else
{
return v___x_345_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_reduce___boxed(lean_object* v_e_370_, lean_object* v_a_371_, lean_object* v_a_372_, lean_object* v_a_373_, lean_object* v_a_374_, lean_object* v_a_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l_Lean_Meta_DiscrTree_reduce(v_e_370_, v_a_371_, v_a_372_, v_a_373_, v_a_374_);
lean_dec(v_a_374_);
lean_dec_ref(v_a_373_);
lean_dec(v_a_372_);
lean_dec_ref(v_a_371_);
return v_res_376_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isBadKey(lean_object* v_fn_377_){
_start:
{
switch(lean_obj_tag(v_fn_377_))
{
case 9:
{
uint8_t v___x_378_; 
v___x_378_ = 0;
return v___x_378_;
}
case 4:
{
uint8_t v___x_379_; 
v___x_379_ = 0;
return v___x_379_;
}
case 1:
{
uint8_t v___x_380_; 
v___x_380_ = 0;
return v___x_380_;
}
case 11:
{
uint8_t v___x_381_; 
v___x_381_ = 0;
return v___x_381_;
}
case 7:
{
uint8_t v___x_382_; 
v___x_382_ = 0;
return v___x_382_;
}
default: 
{
uint8_t v___x_383_; 
v___x_383_ = 1;
return v___x_383_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isBadKey___boxed(lean_object* v_fn_384_){
_start:
{
uint8_t v_res_385_; lean_object* v_r_386_; 
v_res_385_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isBadKey(v_fn_384_);
lean_dec_ref(v_fn_384_);
v_r_386_ = lean_box(v_res_385_);
return v_r_386_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_reduceUntilBadKey_step(lean_object* v_e_387_, lean_object* v_a_388_, lean_object* v_a_389_, lean_object* v_a_390_, lean_object* v_a_391_){
_start:
{
lean_object* v___x_393_; 
v___x_393_ = l_Lean_Meta_whnfCore(v_e_387_, v_a_388_, v_a_389_, v_a_390_, v_a_391_);
if (lean_obj_tag(v___x_393_) == 0)
{
lean_object* v_a_394_; uint8_t v___x_395_; lean_object* v___x_396_; 
v_a_394_ = lean_ctor_get(v___x_393_, 0);
lean_inc_n(v_a_394_, 2);
lean_dec_ref_known(v___x_393_, 1);
v___x_395_ = 0;
v___x_396_ = l_Lean_Meta_unfoldDefinition_x3f(v_a_394_, v___x_395_, v_a_388_, v_a_389_, v_a_390_, v_a_391_);
if (lean_obj_tag(v___x_396_) == 0)
{
lean_object* v_a_397_; lean_object* v___x_399_; uint8_t v_isShared_400_; uint8_t v_isSharedCheck_411_; 
v_a_397_ = lean_ctor_get(v___x_396_, 0);
v_isSharedCheck_411_ = !lean_is_exclusive(v___x_396_);
if (v_isSharedCheck_411_ == 0)
{
v___x_399_ = v___x_396_;
v_isShared_400_ = v_isSharedCheck_411_;
goto v_resetjp_398_;
}
else
{
lean_inc(v_a_397_);
lean_dec(v___x_396_);
v___x_399_ = lean_box(0);
v_isShared_400_ = v_isSharedCheck_411_;
goto v_resetjp_398_;
}
v_resetjp_398_:
{
if (lean_obj_tag(v_a_397_) == 0)
{
lean_object* v___x_402_; 
if (v_isShared_400_ == 0)
{
lean_ctor_set(v___x_399_, 0, v_a_394_);
v___x_402_ = v___x_399_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v_a_394_);
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
lean_object* v_val_404_; lean_object* v___x_405_; uint8_t v___x_406_; 
v_val_404_ = lean_ctor_get(v_a_397_, 0);
lean_inc(v_val_404_);
lean_dec_ref_known(v_a_397_, 1);
v___x_405_ = l_Lean_Expr_getAppFn(v_val_404_);
v___x_406_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isBadKey(v___x_405_);
lean_dec_ref(v___x_405_);
if (v___x_406_ == 0)
{
lean_del_object(v___x_399_);
lean_dec(v_a_394_);
v_e_387_ = v_val_404_;
goto _start;
}
else
{
lean_object* v___x_409_; 
lean_dec(v_val_404_);
if (v_isShared_400_ == 0)
{
lean_ctor_set(v___x_399_, 0, v_a_394_);
v___x_409_ = v___x_399_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v_a_394_);
v___x_409_ = v_reuseFailAlloc_410_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
return v___x_409_;
}
}
}
}
}
else
{
lean_object* v_a_412_; lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_419_; 
lean_dec(v_a_394_);
v_a_412_ = lean_ctor_get(v___x_396_, 0);
v_isSharedCheck_419_ = !lean_is_exclusive(v___x_396_);
if (v_isSharedCheck_419_ == 0)
{
v___x_414_ = v___x_396_;
v_isShared_415_ = v_isSharedCheck_419_;
goto v_resetjp_413_;
}
else
{
lean_inc(v_a_412_);
lean_dec(v___x_396_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_419_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
lean_object* v___x_417_; 
if (v_isShared_415_ == 0)
{
v___x_417_ = v___x_414_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v_a_412_);
v___x_417_ = v_reuseFailAlloc_418_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
return v___x_417_;
}
}
}
}
else
{
return v___x_393_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_reduceUntilBadKey_step___boxed(lean_object* v_e_420_, lean_object* v_a_421_, lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_reduceUntilBadKey_step(v_e_420_, v_a_421_, v_a_422_, v_a_423_, v_a_424_);
lean_dec(v_a_424_);
lean_dec_ref(v_a_423_);
lean_dec(v_a_422_);
lean_dec_ref(v_a_421_);
return v_res_426_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_reduceUntilBadKey(lean_object* v_e_427_, lean_object* v_a_428_, lean_object* v_a_429_, lean_object* v_a_430_, lean_object* v_a_431_){
_start:
{
lean_object* v___x_433_; 
v___x_433_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_reduceUntilBadKey_step(v_e_427_, v_a_428_, v_a_429_, v_a_430_, v_a_431_);
if (lean_obj_tag(v___x_433_) == 0)
{
lean_object* v_a_434_; lean_object* v___x_435_; 
v_a_434_ = lean_ctor_get(v___x_433_, 0);
lean_inc(v_a_434_);
v___x_435_ = l_Lean_Expr_etaExpandedStrict_x3f(v_a_434_);
if (lean_obj_tag(v___x_435_) == 0)
{
return v___x_433_;
}
else
{
lean_object* v_val_436_; 
lean_dec_ref_known(v___x_433_, 1);
v_val_436_ = lean_ctor_get(v___x_435_, 0);
lean_inc(v_val_436_);
lean_dec_ref_known(v___x_435_, 1);
v_e_427_ = v_val_436_;
goto _start;
}
}
else
{
return v___x_433_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_reduceUntilBadKey___boxed(lean_object* v_e_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_, lean_object* v_a_442_, lean_object* v_a_443_){
_start:
{
lean_object* v_res_444_; 
v_res_444_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_reduceUntilBadKey(v_e_438_, v_a_439_, v_a_440_, v_a_441_, v_a_442_);
lean_dec(v_a_442_);
lean_dec_ref(v_a_441_);
lean_dec(v_a_440_);
lean_dec_ref(v_a_439_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_reduceDT(lean_object* v_e_445_, uint8_t v_root_446_, lean_object* v_a_447_, lean_object* v_a_448_, lean_object* v_a_449_, lean_object* v_a_450_){
_start:
{
if (v_root_446_ == 0)
{
lean_object* v___x_452_; 
v___x_452_ = l_Lean_Meta_DiscrTree_reduce(v_e_445_, v_a_447_, v_a_448_, v_a_449_, v_a_450_);
return v___x_452_;
}
else
{
lean_object* v___x_453_; 
v___x_453_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_reduceUntilBadKey(v_e_445_, v_a_447_, v_a_448_, v_a_449_, v_a_450_);
return v___x_453_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_reduceDT___boxed(lean_object* v_e_454_, lean_object* v_root_455_, lean_object* v_a_456_, lean_object* v_a_457_, lean_object* v_a_458_, lean_object* v_a_459_, lean_object* v_a_460_){
_start:
{
uint8_t v_root_boxed_461_; lean_object* v_res_462_; 
v_root_boxed_461_ = lean_unbox(v_root_455_);
v_res_462_ = l_Lean_Meta_DiscrTree_reduceDT(v_e_454_, v_root_boxed_461_, v_a_456_, v_a_457_, v_a_458_, v_a_459_);
lean_dec(v_a_459_);
lean_dec_ref(v_a_458_);
lean_dec(v_a_457_);
lean_dec_ref(v_a_456_);
return v_res_462_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_pushWildcards(lean_object* v_n_463_, lean_object* v_todo_464_){
_start:
{
lean_object* v_zero_465_; uint8_t v_isZero_466_; 
v_zero_465_ = lean_unsigned_to_nat(0u);
v_isZero_466_ = lean_nat_dec_eq(v_n_463_, v_zero_465_);
if (v_isZero_466_ == 1)
{
lean_dec(v_n_463_);
return v_todo_464_;
}
else
{
lean_object* v_one_467_; lean_object* v_n_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
v_one_467_ = lean_unsigned_to_nat(1u);
v_n_468_ = lean_nat_sub(v_n_463_, v_one_467_);
lean_dec(v_n_463_);
v___x_469_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpStar;
v___x_470_ = lean_array_push(v_todo_464_, v___x_469_);
v_n_463_ = v_n_468_;
v_todo_464_ = v___x_470_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_pushArgs(uint8_t v_root_472_, lean_object* v_todo_473_, lean_object* v_e_474_, uint8_t v_noIndexAtArgs_475_, lean_object* v_a_476_, lean_object* v_a_477_, lean_object* v_a_478_, lean_object* v_a_479_){
_start:
{
lean_object* v_v_482_; lean_object* v___y_487_; lean_object* v_todo_488_; uint8_t v___x_495_; 
v___x_495_ = l_Lean_Meta_DiscrTree_hasNoindexAnnotation(v_e_474_);
if (v___x_495_ == 0)
{
lean_object* v___x_496_; 
v___x_496_ = l_Lean_Meta_DiscrTree_reduceDT(v_e_474_, v_root_472_, v_a_476_, v_a_477_, v_a_478_, v_a_479_);
if (lean_obj_tag(v___x_496_) == 0)
{
lean_object* v_a_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_606_; 
v_a_497_ = lean_ctor_get(v___x_496_, 0);
v_isSharedCheck_606_ = !lean_is_exclusive(v___x_496_);
if (v_isSharedCheck_606_ == 0)
{
v___x_499_ = v___x_496_;
v_isShared_500_ = v_isSharedCheck_606_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_a_497_);
lean_dec(v___x_496_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_606_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_501_; lean_object* v_k_503_; lean_object* v_nargs_504_; lean_object* v_todo_505_; lean_object* v___y_506_; lean_object* v___y_507_; lean_object* v___y_508_; lean_object* v___y_509_; 
v___x_501_ = l_Lean_Expr_getAppFn(v_a_497_);
switch(lean_obj_tag(v___x_501_))
{
case 9:
{
lean_object* v_a_534_; 
lean_del_object(v___x_499_);
lean_dec(v_a_497_);
v_a_534_ = lean_ctor_get(v___x_501_, 0);
lean_inc_ref(v_a_534_);
lean_dec_ref_known(v___x_501_, 1);
v_v_482_ = v_a_534_;
goto v___jp_481_;
}
case 4:
{
lean_object* v_declName_535_; lean_object* v___y_537_; lean_object* v___y_538_; lean_object* v___y_539_; lean_object* v___y_540_; 
lean_del_object(v___x_499_);
v_declName_535_ = lean_ctor_get(v___x_501_, 0);
if (v_root_472_ == 0)
{
lean_object* v___x_543_; 
lean_inc(v_a_497_);
v___x_543_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_toNatLit_x3f(v_a_497_);
if (lean_obj_tag(v___x_543_) == 1)
{
lean_object* v_val_544_; 
lean_dec_ref_known(v___x_501_, 2);
lean_dec(v_a_497_);
v_val_544_ = lean_ctor_get(v___x_543_, 0);
lean_inc(v_val_544_);
lean_dec_ref_known(v___x_543_, 1);
v_v_482_ = v_val_544_;
goto v___jp_481_;
}
else
{
lean_object* v___x_545_; 
lean_dec(v___x_543_);
v___x_545_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset(v_declName_535_, v_a_497_, v_a_476_, v_a_477_, v_a_478_, v_a_479_);
if (lean_obj_tag(v___x_545_) == 0)
{
lean_object* v_a_546_; uint8_t v___x_547_; 
v_a_546_ = lean_ctor_get(v___x_545_, 0);
lean_inc(v_a_546_);
lean_dec_ref_known(v___x_545_, 1);
v___x_547_ = lean_unbox(v_a_546_);
lean_dec(v_a_546_);
if (v___x_547_ == 0)
{
v___y_537_ = v_a_476_;
v___y_538_ = v_a_477_;
v___y_539_ = v_a_478_;
v___y_540_ = v_a_479_;
goto v___jp_536_;
}
else
{
lean_dec_ref_known(v___x_501_, 2);
lean_dec(v_a_497_);
goto v___jp_491_;
}
}
else
{
lean_object* v_a_548_; lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_555_; 
lean_dec_ref_known(v___x_501_, 2);
lean_dec(v_a_497_);
lean_dec_ref(v_todo_473_);
v_a_548_ = lean_ctor_get(v___x_545_, 0);
v_isSharedCheck_555_ = !lean_is_exclusive(v___x_545_);
if (v_isSharedCheck_555_ == 0)
{
v___x_550_ = v___x_545_;
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
else
{
lean_inc(v_a_548_);
lean_dec(v___x_545_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
lean_object* v___x_553_; 
if (v_isShared_551_ == 0)
{
v___x_553_ = v___x_550_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v_a_548_);
v___x_553_ = v_reuseFailAlloc_554_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
return v___x_553_;
}
}
}
}
}
else
{
v___y_537_ = v_a_476_;
v___y_538_ = v_a_477_;
v___y_539_ = v_a_478_;
v___y_540_ = v_a_479_;
goto v___jp_536_;
}
v___jp_536_:
{
lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_541_ = l_Lean_Expr_getAppNumArgs(v_a_497_);
lean_inc(v___x_541_);
lean_inc(v_declName_535_);
v___x_542_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_542_, 0, v_declName_535_);
lean_ctor_set(v___x_542_, 1, v___x_541_);
v_k_503_ = v___x_542_;
v_nargs_504_ = v___x_541_;
v_todo_505_ = v_todo_473_;
v___y_506_ = v___y_537_;
v___y_507_ = v___y_538_;
v___y_508_ = v___y_539_;
v___y_509_ = v___y_540_;
goto v___jp_502_;
}
}
case 11:
{
lean_object* v_typeName_556_; lean_object* v_idx_557_; lean_object* v_struct_558_; lean_object* v___x_559_; lean_object* v___y_561_; lean_object* v_env_565_; uint8_t v___x_566_; 
lean_del_object(v___x_499_);
v_typeName_556_ = lean_ctor_get(v___x_501_, 0);
v_idx_557_ = lean_ctor_get(v___x_501_, 1);
v_struct_558_ = lean_ctor_get(v___x_501_, 2);
v___x_559_ = lean_st_ref_get(v_a_479_);
v_env_565_ = lean_ctor_get(v___x_559_, 0);
lean_inc_ref(v_env_565_);
lean_dec(v___x_559_);
v___x_566_ = l_Lean_isClass(v_env_565_, v_typeName_556_);
if (v___x_566_ == 0)
{
lean_inc_ref(v_struct_558_);
v___y_561_ = v_struct_558_;
goto v___jp_560_;
}
else
{
lean_object* v___x_567_; 
lean_inc_ref(v_struct_558_);
v___x_567_ = l_Lean_Meta_DiscrTree_mkNoindexAnnotation(v_struct_558_);
v___y_561_ = v___x_567_;
goto v___jp_560_;
}
v___jp_560_:
{
lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; 
v___x_562_ = l_Lean_Expr_getAppNumArgs(v_a_497_);
lean_inc(v___x_562_);
lean_inc(v_idx_557_);
lean_inc(v_typeName_556_);
v___x_563_ = lean_alloc_ctor(6, 3, 0);
lean_ctor_set(v___x_563_, 0, v_typeName_556_);
lean_ctor_set(v___x_563_, 1, v_idx_557_);
lean_ctor_set(v___x_563_, 2, v___x_562_);
v___x_564_ = lean_array_push(v_todo_473_, v___y_561_);
v_k_503_ = v___x_563_;
v_nargs_504_ = v___x_562_;
v_todo_505_ = v___x_564_;
v___y_506_ = v_a_476_;
v___y_507_ = v_a_477_;
v___y_508_ = v_a_478_;
v___y_509_ = v_a_479_;
goto v___jp_502_;
}
}
case 1:
{
lean_object* v_fvarId_568_; lean_object* v___x_569_; lean_object* v___x_570_; 
lean_del_object(v___x_499_);
v_fvarId_568_ = lean_ctor_get(v___x_501_, 0);
v___x_569_ = l_Lean_Expr_getAppNumArgs(v_a_497_);
lean_inc(v___x_569_);
lean_inc(v_fvarId_568_);
v___x_570_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_570_, 0, v_fvarId_568_);
lean_ctor_set(v___x_570_, 1, v___x_569_);
v_k_503_ = v___x_570_;
v_nargs_504_ = v___x_569_;
v_todo_505_ = v_todo_473_;
v___y_506_ = v_a_476_;
v___y_507_ = v_a_477_;
v___y_508_ = v_a_478_;
v___y_509_ = v_a_479_;
goto v___jp_502_;
}
case 2:
{
lean_object* v_mvarId_571_; lean_object* v___x_572_; uint8_t v___x_573_; 
lean_del_object(v___x_499_);
lean_dec(v_a_497_);
v_mvarId_571_ = lean_ctor_get(v___x_501_, 0);
lean_inc(v_mvarId_571_);
lean_dec_ref_known(v___x_501_, 1);
v___x_572_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpMVarId));
v___x_573_ = l_Lean_instBEqMVarId_beq(v_mvarId_571_, v___x_572_);
if (v___x_573_ == 0)
{
lean_object* v___x_574_; 
v___x_574_ = l_Lean_MVarId_isReadOnlyOrSyntheticOpaque(v_mvarId_571_, v_a_476_, v_a_477_, v_a_478_, v_a_479_);
if (lean_obj_tag(v___x_574_) == 0)
{
lean_object* v_a_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_585_; 
v_a_575_ = lean_ctor_get(v___x_574_, 0);
v_isSharedCheck_585_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_585_ == 0)
{
v___x_577_ = v___x_574_;
v_isShared_578_ = v_isSharedCheck_585_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_a_575_);
lean_dec(v___x_574_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_585_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
uint8_t v___x_579_; 
v___x_579_ = lean_unbox(v_a_575_);
lean_dec(v_a_575_);
if (v___x_579_ == 0)
{
lean_del_object(v___x_577_);
goto v___jp_491_;
}
else
{
lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_583_; 
v___x_580_ = lean_box(1);
v___x_581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_581_, 0, v___x_580_);
lean_ctor_set(v___x_581_, 1, v_todo_473_);
if (v_isShared_578_ == 0)
{
lean_ctor_set(v___x_577_, 0, v___x_581_);
v___x_583_ = v___x_577_;
goto v_reusejp_582_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v___x_581_);
v___x_583_ = v_reuseFailAlloc_584_;
goto v_reusejp_582_;
}
v_reusejp_582_:
{
return v___x_583_;
}
}
}
}
else
{
lean_object* v_a_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_593_; 
lean_dec_ref(v_todo_473_);
v_a_586_ = lean_ctor_get(v___x_574_, 0);
v_isSharedCheck_593_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_593_ == 0)
{
v___x_588_ = v___x_574_;
v_isShared_589_ = v_isSharedCheck_593_;
goto v_resetjp_587_;
}
else
{
lean_inc(v_a_586_);
lean_dec(v___x_574_);
v___x_588_ = lean_box(0);
v_isShared_589_ = v_isSharedCheck_593_;
goto v_resetjp_587_;
}
v_resetjp_587_:
{
lean_object* v___x_591_; 
if (v_isShared_589_ == 0)
{
v___x_591_ = v___x_588_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v_a_586_);
v___x_591_ = v_reuseFailAlloc_592_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
return v___x_591_;
}
}
}
}
else
{
lean_dec(v_mvarId_571_);
goto v___jp_491_;
}
}
case 7:
{
lean_object* v_binderType_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_599_; 
lean_dec(v_a_497_);
v_binderType_594_ = lean_ctor_get(v___x_501_, 1);
lean_inc_ref(v_binderType_594_);
lean_dec_ref_known(v___x_501_, 3);
v___x_595_ = lean_box(5);
v___x_596_ = lean_array_push(v_todo_473_, v_binderType_594_);
v___x_597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_597_, 0, v___x_595_);
lean_ctor_set(v___x_597_, 1, v___x_596_);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 0, v___x_597_);
v___x_599_ = v___x_499_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v___x_597_);
v___x_599_ = v_reuseFailAlloc_600_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
return v___x_599_;
}
}
default: 
{
lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_604_; 
lean_dec_ref(v___x_501_);
lean_dec(v_a_497_);
v___x_601_ = lean_box(1);
v___x_602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_602_, 0, v___x_601_);
lean_ctor_set(v___x_602_, 1, v_todo_473_);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 0, v___x_602_);
v___x_604_ = v___x_499_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v___x_602_);
v___x_604_ = v_reuseFailAlloc_605_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
return v___x_604_;
}
}
}
v___jp_502_:
{
lean_object* v___x_510_; 
lean_inc(v_nargs_504_);
v___x_510_ = l_Lean_Meta_getFunInfoNArgs(v___x_501_, v_nargs_504_, v___y_506_, v___y_507_, v___y_508_, v___y_509_);
if (lean_obj_tag(v___x_510_) == 0)
{
if (v_noIndexAtArgs_475_ == 0)
{
lean_object* v_a_511_; lean_object* v_paramInfo_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
v_a_511_ = lean_ctor_get(v___x_510_, 0);
lean_inc(v_a_511_);
lean_dec_ref_known(v___x_510_, 1);
v_paramInfo_512_ = lean_ctor_get(v_a_511_, 0);
lean_inc_ref(v_paramInfo_512_);
lean_dec(v_a_511_);
v___x_513_ = lean_unsigned_to_nat(1u);
v___x_514_ = lean_nat_sub(v_nargs_504_, v___x_513_);
lean_dec(v_nargs_504_);
v___x_515_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_pushArgsAux(v_paramInfo_512_, v___x_514_, v_a_497_, v_todo_505_, v___y_506_, v___y_507_, v___y_508_, v___y_509_);
lean_dec_ref(v_paramInfo_512_);
if (lean_obj_tag(v___x_515_) == 0)
{
lean_object* v_a_516_; 
v_a_516_ = lean_ctor_get(v___x_515_, 0);
lean_inc(v_a_516_);
lean_dec_ref_known(v___x_515_, 1);
v___y_487_ = v_k_503_;
v_todo_488_ = v_a_516_;
goto v___jp_486_;
}
else
{
lean_object* v_a_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_524_; 
lean_dec(v_k_503_);
v_a_517_ = lean_ctor_get(v___x_515_, 0);
v_isSharedCheck_524_ = !lean_is_exclusive(v___x_515_);
if (v_isSharedCheck_524_ == 0)
{
v___x_519_ = v___x_515_;
v_isShared_520_ = v_isSharedCheck_524_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_a_517_);
lean_dec(v___x_515_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_524_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v___x_522_; 
if (v_isShared_520_ == 0)
{
v___x_522_ = v___x_519_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v_a_517_);
v___x_522_ = v_reuseFailAlloc_523_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
return v___x_522_;
}
}
}
}
else
{
lean_object* v___x_525_; 
lean_dec_ref_known(v___x_510_, 1);
lean_dec(v_a_497_);
v___x_525_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_pushWildcards(v_nargs_504_, v_todo_505_);
v___y_487_ = v_k_503_;
v_todo_488_ = v___x_525_;
goto v___jp_486_;
}
}
else
{
lean_object* v_a_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_533_; 
lean_dec_ref(v_todo_505_);
lean_dec(v_nargs_504_);
lean_dec(v_k_503_);
lean_dec(v_a_497_);
v_a_526_ = lean_ctor_get(v___x_510_, 0);
v_isSharedCheck_533_ = !lean_is_exclusive(v___x_510_);
if (v_isSharedCheck_533_ == 0)
{
v___x_528_ = v___x_510_;
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_a_526_);
lean_dec(v___x_510_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_531_; 
if (v_isShared_529_ == 0)
{
v___x_531_ = v___x_528_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v_a_526_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
return v___x_531_;
}
}
}
}
}
}
else
{
lean_object* v_a_607_; lean_object* v___x_609_; uint8_t v_isShared_610_; uint8_t v_isSharedCheck_614_; 
lean_dec_ref(v_todo_473_);
v_a_607_ = lean_ctor_get(v___x_496_, 0);
v_isSharedCheck_614_ = !lean_is_exclusive(v___x_496_);
if (v_isSharedCheck_614_ == 0)
{
v___x_609_ = v___x_496_;
v_isShared_610_ = v_isSharedCheck_614_;
goto v_resetjp_608_;
}
else
{
lean_inc(v_a_607_);
lean_dec(v___x_496_);
v___x_609_ = lean_box(0);
v_isShared_610_ = v_isSharedCheck_614_;
goto v_resetjp_608_;
}
v_resetjp_608_:
{
lean_object* v___x_612_; 
if (v_isShared_610_ == 0)
{
v___x_612_ = v___x_609_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v_a_607_);
v___x_612_ = v_reuseFailAlloc_613_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
return v___x_612_;
}
}
}
}
else
{
lean_dec_ref(v_e_474_);
goto v___jp_491_;
}
v___jp_481_:
{
lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_483_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_483_, 0, v_v_482_);
v___x_484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_484_, 0, v___x_483_);
lean_ctor_set(v___x_484_, 1, v_todo_473_);
v___x_485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_485_, 0, v___x_484_);
return v___x_485_;
}
v___jp_486_:
{
lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_489_, 0, v___y_487_);
lean_ctor_set(v___x_489_, 1, v_todo_488_);
v___x_490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_490_, 0, v___x_489_);
return v___x_490_;
}
v___jp_491_:
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_492_ = lean_box(0);
v___x_493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_493_, 0, v___x_492_);
lean_ctor_set(v___x_493_, 1, v_todo_473_);
v___x_494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_494_, 0, v___x_493_);
return v___x_494_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_pushArgs___boxed(lean_object* v_root_615_, lean_object* v_todo_616_, lean_object* v_e_617_, lean_object* v_noIndexAtArgs_618_, lean_object* v_a_619_, lean_object* v_a_620_, lean_object* v_a_621_, lean_object* v_a_622_, lean_object* v_a_623_){
_start:
{
uint8_t v_root_boxed_624_; uint8_t v_noIndexAtArgs_boxed_625_; lean_object* v_res_626_; 
v_root_boxed_624_ = lean_unbox(v_root_615_);
v_noIndexAtArgs_boxed_625_ = lean_unbox(v_noIndexAtArgs_618_);
v_res_626_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_pushArgs(v_root_boxed_624_, v_todo_616_, v_e_617_, v_noIndexAtArgs_boxed_625_, v_a_619_, v_a_620_, v_a_621_, v_a_622_);
lean_dec(v_a_622_);
lean_dec_ref(v_a_621_);
lean_dec(v_a_620_);
lean_dec_ref(v_a_619_);
return v_res_626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_mkPathAux(uint8_t v_root_627_, lean_object* v_todo_628_, lean_object* v_keys_629_, uint8_t v_noIndexAtArgs_630_, lean_object* v_a_631_, lean_object* v_a_632_, lean_object* v_a_633_, lean_object* v_a_634_){
_start:
{
lean_object* v___x_636_; lean_object* v___x_637_; uint8_t v___x_638_; 
v___x_636_ = lean_array_get_size(v_todo_628_);
v___x_637_ = lean_unsigned_to_nat(0u);
v___x_638_ = lean_nat_dec_eq(v___x_636_, v___x_637_);
if (v___x_638_ == 0)
{
lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v_e_642_; lean_object* v_todo_643_; lean_object* v___x_644_; 
v___x_639_ = l_Lean_instInhabitedExpr;
v___x_640_ = lean_unsigned_to_nat(1u);
v___x_641_ = lean_nat_sub(v___x_636_, v___x_640_);
v_e_642_ = lean_array_get(v___x_639_, v_todo_628_, v___x_641_);
lean_dec(v___x_641_);
v_todo_643_ = lean_array_pop(v_todo_628_);
v___x_644_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_pushArgs(v_root_627_, v_todo_643_, v_e_642_, v_noIndexAtArgs_630_, v_a_631_, v_a_632_, v_a_633_, v_a_634_);
if (lean_obj_tag(v___x_644_) == 0)
{
lean_object* v_a_645_; lean_object* v_fst_646_; lean_object* v_snd_647_; lean_object* v___x_648_; 
v_a_645_ = lean_ctor_get(v___x_644_, 0);
lean_inc(v_a_645_);
lean_dec_ref_known(v___x_644_, 1);
v_fst_646_ = lean_ctor_get(v_a_645_, 0);
lean_inc(v_fst_646_);
v_snd_647_ = lean_ctor_get(v_a_645_, 1);
lean_inc(v_snd_647_);
lean_dec(v_a_645_);
v___x_648_ = lean_array_push(v_keys_629_, v_fst_646_);
v_root_627_ = v___x_638_;
v_todo_628_ = v_snd_647_;
v_keys_629_ = v___x_648_;
goto _start;
}
else
{
lean_object* v_a_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_657_; 
lean_dec_ref(v_keys_629_);
v_a_650_ = lean_ctor_get(v___x_644_, 0);
v_isSharedCheck_657_ = !lean_is_exclusive(v___x_644_);
if (v_isSharedCheck_657_ == 0)
{
v___x_652_ = v___x_644_;
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_a_650_);
lean_dec(v___x_644_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
lean_object* v___x_655_; 
if (v_isShared_653_ == 0)
{
v___x_655_ = v___x_652_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v_a_650_);
v___x_655_ = v_reuseFailAlloc_656_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
return v___x_655_;
}
}
}
}
else
{
lean_object* v___x_658_; 
lean_dec_ref(v_todo_628_);
v___x_658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_658_, 0, v_keys_629_);
return v___x_658_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_mkPathAux___boxed(lean_object* v_root_659_, lean_object* v_todo_660_, lean_object* v_keys_661_, lean_object* v_noIndexAtArgs_662_, lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_, lean_object* v_a_666_, lean_object* v_a_667_){
_start:
{
uint8_t v_root_boxed_668_; uint8_t v_noIndexAtArgs_boxed_669_; lean_object* v_res_670_; 
v_root_boxed_668_ = lean_unbox(v_root_659_);
v_noIndexAtArgs_boxed_669_ = lean_unbox(v_noIndexAtArgs_662_);
v_res_670_ = l_Lean_Meta_DiscrTree_mkPathAux(v_root_boxed_668_, v_todo_660_, v_keys_661_, v_noIndexAtArgs_boxed_669_, v_a_663_, v_a_664_, v_a_665_, v_a_666_);
lean_dec(v_a_666_);
lean_dec_ref(v_a_665_);
lean_dec(v_a_664_);
lean_dec_ref(v_a_663_);
return v_res_670_;
}
}
static lean_object* _init_l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_initCapacity(void){
_start:
{
lean_object* v___x_671_; 
v___x_671_ = lean_unsigned_to_nat(8u);
return v___x_671_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_mkPath(lean_object* v_e_672_, uint8_t v_noIndexAtArgs_673_, lean_object* v_a_674_, lean_object* v_a_675_, lean_object* v_a_676_, lean_object* v_a_677_){
_start:
{
lean_object* v___y_680_; lean_object* v___x_697_; uint8_t v_transparency_698_; lean_object* v___x_699_; lean_object* v_todo_700_; uint8_t v___x_701_; lean_object* v___x_702_; uint8_t v___x_703_; uint8_t v___x_704_; 
v___x_697_ = l_Lean_Meta_Context_config(v_a_674_);
v_transparency_698_ = lean_ctor_get_uint8(v___x_697_, 9);
lean_dec_ref(v___x_697_);
v___x_699_ = lean_unsigned_to_nat(8u);
v_todo_700_ = lean_mk_empty_array_with_capacity(v___x_699_);
v___x_701_ = 1;
lean_inc_ref(v_todo_700_);
v___x_702_ = lean_array_push(v_todo_700_, v_e_672_);
v___x_703_ = 2;
v___x_704_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_698_, v___x_703_);
if (v___x_704_ == 0)
{
lean_object* v_keyedConfig_705_; uint8_t v_trackZetaDelta_706_; lean_object* v_zetaDeltaSet_707_; lean_object* v_lctx_708_; lean_object* v_localInstances_709_; lean_object* v_defEqCtx_x3f_710_; lean_object* v_synthPendingDepth_711_; lean_object* v_customCanUnfoldPredicate_x3f_712_; uint8_t v_univApprox_713_; uint8_t v_inTypeClassResolution_714_; uint8_t v_cacheInferType_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; 
v_keyedConfig_705_ = lean_ctor_get(v_a_674_, 0);
v_trackZetaDelta_706_ = lean_ctor_get_uint8(v_a_674_, sizeof(void*)*7);
v_zetaDeltaSet_707_ = lean_ctor_get(v_a_674_, 1);
v_lctx_708_ = lean_ctor_get(v_a_674_, 2);
v_localInstances_709_ = lean_ctor_get(v_a_674_, 3);
v_defEqCtx_x3f_710_ = lean_ctor_get(v_a_674_, 4);
v_synthPendingDepth_711_ = lean_ctor_get(v_a_674_, 5);
v_customCanUnfoldPredicate_x3f_712_ = lean_ctor_get(v_a_674_, 6);
v_univApprox_713_ = lean_ctor_get_uint8(v_a_674_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_714_ = lean_ctor_get_uint8(v_a_674_, sizeof(void*)*7 + 2);
v_cacheInferType_715_ = lean_ctor_get_uint8(v_a_674_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_705_);
v___x_716_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_703_, v_keyedConfig_705_);
lean_inc(v_customCanUnfoldPredicate_x3f_712_);
lean_inc(v_synthPendingDepth_711_);
lean_inc(v_defEqCtx_x3f_710_);
lean_inc_ref(v_localInstances_709_);
lean_inc_ref(v_lctx_708_);
lean_inc(v_zetaDeltaSet_707_);
v___x_717_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_717_, 0, v___x_716_);
lean_ctor_set(v___x_717_, 1, v_zetaDeltaSet_707_);
lean_ctor_set(v___x_717_, 2, v_lctx_708_);
lean_ctor_set(v___x_717_, 3, v_localInstances_709_);
lean_ctor_set(v___x_717_, 4, v_defEqCtx_x3f_710_);
lean_ctor_set(v___x_717_, 5, v_synthPendingDepth_711_);
lean_ctor_set(v___x_717_, 6, v_customCanUnfoldPredicate_x3f_712_);
lean_ctor_set_uint8(v___x_717_, sizeof(void*)*7, v_trackZetaDelta_706_);
lean_ctor_set_uint8(v___x_717_, sizeof(void*)*7 + 1, v_univApprox_713_);
lean_ctor_set_uint8(v___x_717_, sizeof(void*)*7 + 2, v_inTypeClassResolution_714_);
lean_ctor_set_uint8(v___x_717_, sizeof(void*)*7 + 3, v_cacheInferType_715_);
v___x_718_ = l_Lean_Meta_DiscrTree_mkPathAux(v___x_701_, v___x_702_, v_todo_700_, v_noIndexAtArgs_673_, v___x_717_, v_a_675_, v_a_676_, v_a_677_);
lean_dec_ref_known(v___x_717_, 7);
v___y_680_ = v___x_718_;
goto v___jp_679_;
}
else
{
lean_object* v___x_719_; 
v___x_719_ = l_Lean_Meta_DiscrTree_mkPathAux(v___x_701_, v___x_702_, v_todo_700_, v_noIndexAtArgs_673_, v_a_674_, v_a_675_, v_a_676_, v_a_677_);
v___y_680_ = v___x_719_;
goto v___jp_679_;
}
v___jp_679_:
{
if (lean_obj_tag(v___y_680_) == 0)
{
lean_object* v_a_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_688_; 
v_a_681_ = lean_ctor_get(v___y_680_, 0);
v_isSharedCheck_688_ = !lean_is_exclusive(v___y_680_);
if (v_isSharedCheck_688_ == 0)
{
v___x_683_ = v___y_680_;
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_a_681_);
lean_dec(v___y_680_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
lean_object* v___x_686_; 
if (v_isShared_684_ == 0)
{
v___x_686_ = v___x_683_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v_a_681_);
v___x_686_ = v_reuseFailAlloc_687_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
return v___x_686_;
}
}
}
else
{
lean_object* v_a_689_; lean_object* v___x_691_; uint8_t v_isShared_692_; uint8_t v_isSharedCheck_696_; 
v_a_689_ = lean_ctor_get(v___y_680_, 0);
v_isSharedCheck_696_ = !lean_is_exclusive(v___y_680_);
if (v_isSharedCheck_696_ == 0)
{
v___x_691_ = v___y_680_;
v_isShared_692_ = v_isSharedCheck_696_;
goto v_resetjp_690_;
}
else
{
lean_inc(v_a_689_);
lean_dec(v___y_680_);
v___x_691_ = lean_box(0);
v_isShared_692_ = v_isSharedCheck_696_;
goto v_resetjp_690_;
}
v_resetjp_690_:
{
lean_object* v___x_694_; 
if (v_isShared_692_ == 0)
{
v___x_694_ = v___x_691_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v_a_689_);
v___x_694_ = v_reuseFailAlloc_695_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
return v___x_694_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_mkPath___boxed(lean_object* v_e_720_, lean_object* v_noIndexAtArgs_721_, lean_object* v_a_722_, lean_object* v_a_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_){
_start:
{
uint8_t v_noIndexAtArgs_boxed_727_; lean_object* v_res_728_; 
v_noIndexAtArgs_boxed_727_ = lean_unbox(v_noIndexAtArgs_721_);
v_res_728_ = l_Lean_Meta_DiscrTree_mkPath(v_e_720_, v_noIndexAtArgs_boxed_727_, v_a_722_, v_a_723_, v_a_724_, v_a_725_);
lean_dec(v_a_725_);
lean_dec_ref(v_a_724_);
lean_dec(v_a_723_);
lean_dec_ref(v_a_722_);
return v_res_728_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insert___redArg(lean_object* v_inst_729_, lean_object* v_d_730_, lean_object* v_e_731_, lean_object* v_v_732_, uint8_t v_noIndexAtArgs_733_, lean_object* v_a_734_, lean_object* v_a_735_, lean_object* v_a_736_, lean_object* v_a_737_){
_start:
{
lean_object* v___x_739_; 
v___x_739_ = l_Lean_Meta_DiscrTree_mkPath(v_e_731_, v_noIndexAtArgs_733_, v_a_734_, v_a_735_, v_a_736_, v_a_737_);
if (lean_obj_tag(v___x_739_) == 0)
{
lean_object* v_a_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_748_; 
v_a_740_ = lean_ctor_get(v___x_739_, 0);
v_isSharedCheck_748_ = !lean_is_exclusive(v___x_739_);
if (v_isSharedCheck_748_ == 0)
{
v___x_742_ = v___x_739_;
v_isShared_743_ = v_isSharedCheck_748_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_a_740_);
lean_dec(v___x_739_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_748_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_744_; lean_object* v___x_746_; 
v___x_744_ = l_Lean_Meta_DiscrTree_insertKeyValue___redArg(v_inst_729_, v_d_730_, v_a_740_, v_v_732_);
if (v_isShared_743_ == 0)
{
lean_ctor_set(v___x_742_, 0, v___x_744_);
v___x_746_ = v___x_742_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v___x_744_);
v___x_746_ = v_reuseFailAlloc_747_;
goto v_reusejp_745_;
}
v_reusejp_745_:
{
return v___x_746_;
}
}
}
else
{
lean_object* v_a_749_; lean_object* v___x_751_; uint8_t v_isShared_752_; uint8_t v_isSharedCheck_756_; 
lean_dec(v_v_732_);
lean_dec_ref(v_d_730_);
lean_dec_ref(v_inst_729_);
v_a_749_ = lean_ctor_get(v___x_739_, 0);
v_isSharedCheck_756_ = !lean_is_exclusive(v___x_739_);
if (v_isSharedCheck_756_ == 0)
{
v___x_751_ = v___x_739_;
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
else
{
lean_inc(v_a_749_);
lean_dec(v___x_739_);
v___x_751_ = lean_box(0);
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
v_resetjp_750_:
{
lean_object* v___x_754_; 
if (v_isShared_752_ == 0)
{
v___x_754_ = v___x_751_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v_a_749_);
v___x_754_ = v_reuseFailAlloc_755_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
return v___x_754_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insert___redArg___boxed(lean_object* v_inst_757_, lean_object* v_d_758_, lean_object* v_e_759_, lean_object* v_v_760_, lean_object* v_noIndexAtArgs_761_, lean_object* v_a_762_, lean_object* v_a_763_, lean_object* v_a_764_, lean_object* v_a_765_, lean_object* v_a_766_){
_start:
{
uint8_t v_noIndexAtArgs_boxed_767_; lean_object* v_res_768_; 
v_noIndexAtArgs_boxed_767_ = lean_unbox(v_noIndexAtArgs_761_);
v_res_768_ = l_Lean_Meta_DiscrTree_insert___redArg(v_inst_757_, v_d_758_, v_e_759_, v_v_760_, v_noIndexAtArgs_boxed_767_, v_a_762_, v_a_763_, v_a_764_, v_a_765_);
lean_dec(v_a_765_);
lean_dec_ref(v_a_764_);
lean_dec(v_a_763_);
lean_dec_ref(v_a_762_);
return v_res_768_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insert(lean_object* v_00_u03b1_769_, lean_object* v_inst_770_, lean_object* v_d_771_, lean_object* v_e_772_, lean_object* v_v_773_, uint8_t v_noIndexAtArgs_774_, lean_object* v_a_775_, lean_object* v_a_776_, lean_object* v_a_777_, lean_object* v_a_778_){
_start:
{
lean_object* v___x_780_; 
v___x_780_ = l_Lean_Meta_DiscrTree_insert___redArg(v_inst_770_, v_d_771_, v_e_772_, v_v_773_, v_noIndexAtArgs_774_, v_a_775_, v_a_776_, v_a_777_, v_a_778_);
return v___x_780_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insert___boxed(lean_object* v_00_u03b1_781_, lean_object* v_inst_782_, lean_object* v_d_783_, lean_object* v_e_784_, lean_object* v_v_785_, lean_object* v_noIndexAtArgs_786_, lean_object* v_a_787_, lean_object* v_a_788_, lean_object* v_a_789_, lean_object* v_a_790_, lean_object* v_a_791_){
_start:
{
uint8_t v_noIndexAtArgs_boxed_792_; lean_object* v_res_793_; 
v_noIndexAtArgs_boxed_792_ = lean_unbox(v_noIndexAtArgs_786_);
v_res_793_ = l_Lean_Meta_DiscrTree_insert(v_00_u03b1_781_, v_inst_782_, v_d_783_, v_e_784_, v_v_785_, v_noIndexAtArgs_boxed_792_, v_a_787_, v_a_788_, v_a_789_, v_a_790_);
lean_dec(v_a_790_);
lean_dec_ref(v_a_789_);
lean_dec(v_a_788_);
lean_dec_ref(v_a_787_);
return v_res_793_;
}
}
static lean_object* _init_l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__4(void){
_start:
{
lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_808_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__3));
v___x_809_ = lean_array_get_size(v___x_808_);
return v___x_809_;
}
}
static lean_object* _init_l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__7(void){
_start:
{
lean_object* v___x_815_; lean_object* v___x_816_; 
v___x_815_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__6));
v___x_816_ = lean_array_get_size(v___x_815_);
return v___x_816_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific___redArg(lean_object* v_inst_817_, lean_object* v_d_818_, lean_object* v_e_819_, lean_object* v_v_820_, uint8_t v_noIndexAtArgs_821_, lean_object* v_a_822_, lean_object* v_a_823_, lean_object* v_a_824_, lean_object* v_a_825_){
_start:
{
lean_object* v___x_827_; 
v___x_827_ = l_Lean_Meta_DiscrTree_mkPath(v_e_819_, v_noIndexAtArgs_821_, v_a_822_, v_a_823_, v_a_824_, v_a_825_);
if (lean_obj_tag(v___x_827_) == 0)
{
lean_object* v_a_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_852_; 
v_a_828_ = lean_ctor_get(v___x_827_, 0);
v_isSharedCheck_852_ = !lean_is_exclusive(v___x_827_);
if (v_isSharedCheck_852_ == 0)
{
v___x_830_ = v___x_827_;
v_isShared_831_ = v_isSharedCheck_852_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_a_828_);
lean_dec(v___x_827_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_852_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; uint8_t v___x_848_; 
v___x_845_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__6));
v___x_846_ = lean_array_get_size(v_a_828_);
v___x_847_ = lean_obj_once(&l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__7, &l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__7_once, _init_l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__7);
v___x_848_ = lean_nat_dec_eq(v___x_846_, v___x_847_);
if (v___x_848_ == 0)
{
goto v___jp_837_;
}
else
{
lean_object* v___x_849_; uint8_t v___x_850_; 
v___x_849_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__5));
v___x_850_ = l_Array_isEqvAux___redArg(v_a_828_, v___x_845_, v___x_849_, v___x_846_);
if (v___x_850_ == 0)
{
goto v___jp_837_;
}
else
{
lean_object* v___x_851_; 
lean_del_object(v___x_830_);
lean_dec(v_a_828_);
lean_dec(v_v_820_);
lean_dec_ref(v_inst_817_);
v___x_851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_851_, 0, v_d_818_);
return v___x_851_;
}
}
v___jp_832_:
{
lean_object* v___x_833_; lean_object* v___x_835_; 
v___x_833_ = l_Lean_Meta_DiscrTree_insertKeyValue___redArg(v_inst_817_, v_d_818_, v_a_828_, v_v_820_);
if (v_isShared_831_ == 0)
{
lean_ctor_set(v___x_830_, 0, v___x_833_);
v___x_835_ = v___x_830_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v___x_833_);
v___x_835_ = v_reuseFailAlloc_836_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
return v___x_835_;
}
}
v___jp_837_:
{
lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; uint8_t v___x_841_; 
v___x_838_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__3));
v___x_839_ = lean_array_get_size(v_a_828_);
v___x_840_ = lean_obj_once(&l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__4, &l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__4_once, _init_l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__4);
v___x_841_ = lean_nat_dec_eq(v___x_839_, v___x_840_);
if (v___x_841_ == 0)
{
goto v___jp_832_;
}
else
{
lean_object* v___x_842_; uint8_t v___x_843_; 
v___x_842_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__5));
v___x_843_ = l_Array_isEqvAux___redArg(v_a_828_, v___x_838_, v___x_842_, v___x_839_);
if (v___x_843_ == 0)
{
goto v___jp_832_;
}
else
{
lean_object* v___x_844_; 
lean_del_object(v___x_830_);
lean_dec(v_a_828_);
lean_dec(v_v_820_);
lean_dec_ref(v_inst_817_);
v___x_844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_844_, 0, v_d_818_);
return v___x_844_;
}
}
}
}
}
else
{
lean_object* v_a_853_; lean_object* v___x_855_; uint8_t v_isShared_856_; uint8_t v_isSharedCheck_860_; 
lean_dec(v_v_820_);
lean_dec_ref(v_d_818_);
lean_dec_ref(v_inst_817_);
v_a_853_ = lean_ctor_get(v___x_827_, 0);
v_isSharedCheck_860_ = !lean_is_exclusive(v___x_827_);
if (v_isSharedCheck_860_ == 0)
{
v___x_855_ = v___x_827_;
v_isShared_856_ = v_isSharedCheck_860_;
goto v_resetjp_854_;
}
else
{
lean_inc(v_a_853_);
lean_dec(v___x_827_);
v___x_855_ = lean_box(0);
v_isShared_856_ = v_isSharedCheck_860_;
goto v_resetjp_854_;
}
v_resetjp_854_:
{
lean_object* v___x_858_; 
if (v_isShared_856_ == 0)
{
v___x_858_ = v___x_855_;
goto v_reusejp_857_;
}
else
{
lean_object* v_reuseFailAlloc_859_; 
v_reuseFailAlloc_859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_859_, 0, v_a_853_);
v___x_858_ = v_reuseFailAlloc_859_;
goto v_reusejp_857_;
}
v_reusejp_857_:
{
return v___x_858_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___boxed(lean_object* v_inst_861_, lean_object* v_d_862_, lean_object* v_e_863_, lean_object* v_v_864_, lean_object* v_noIndexAtArgs_865_, lean_object* v_a_866_, lean_object* v_a_867_, lean_object* v_a_868_, lean_object* v_a_869_, lean_object* v_a_870_){
_start:
{
uint8_t v_noIndexAtArgs_boxed_871_; lean_object* v_res_872_; 
v_noIndexAtArgs_boxed_871_ = lean_unbox(v_noIndexAtArgs_865_);
v_res_872_ = l_Lean_Meta_DiscrTree_insertIfSpecific___redArg(v_inst_861_, v_d_862_, v_e_863_, v_v_864_, v_noIndexAtArgs_boxed_871_, v_a_866_, v_a_867_, v_a_868_, v_a_869_);
lean_dec(v_a_869_);
lean_dec_ref(v_a_868_);
lean_dec(v_a_867_);
lean_dec_ref(v_a_866_);
return v_res_872_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific(lean_object* v_00_u03b1_873_, lean_object* v_inst_874_, lean_object* v_d_875_, lean_object* v_e_876_, lean_object* v_v_877_, uint8_t v_noIndexAtArgs_878_, lean_object* v_a_879_, lean_object* v_a_880_, lean_object* v_a_881_, lean_object* v_a_882_){
_start:
{
lean_object* v___x_884_; 
v___x_884_ = l_Lean_Meta_DiscrTree_insertIfSpecific___redArg(v_inst_874_, v_d_875_, v_e_876_, v_v_877_, v_noIndexAtArgs_878_, v_a_879_, v_a_880_, v_a_881_, v_a_882_);
return v___x_884_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific___boxed(lean_object* v_00_u03b1_885_, lean_object* v_inst_886_, lean_object* v_d_887_, lean_object* v_e_888_, lean_object* v_v_889_, lean_object* v_noIndexAtArgs_890_, lean_object* v_a_891_, lean_object* v_a_892_, lean_object* v_a_893_, lean_object* v_a_894_, lean_object* v_a_895_){
_start:
{
uint8_t v_noIndexAtArgs_boxed_896_; lean_object* v_res_897_; 
v_noIndexAtArgs_boxed_896_ = lean_unbox(v_noIndexAtArgs_890_);
v_res_897_ = l_Lean_Meta_DiscrTree_insertIfSpecific(v_00_u03b1_885_, v_inst_886_, v_d_887_, v_e_888_, v_v_889_, v_noIndexAtArgs_boxed_896_, v_a_891_, v_a_892_, v_a_893_, v_a_894_);
lean_dec(v_a_894_);
lean_dec_ref(v_a_893_);
lean_dec(v_a_892_);
lean_dec_ref(v_a_891_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__2___redArg(lean_object* v_declName_898_, lean_object* v___y_899_){
_start:
{
lean_object* v___x_901_; lean_object* v_env_902_; uint8_t v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; 
v___x_901_ = lean_st_ref_get(v___y_899_);
v_env_902_ = lean_ctor_get(v___x_901_, 0);
lean_inc_ref(v_env_902_);
lean_dec(v___x_901_);
v___x_903_ = l_Lean_isRecCore(v_env_902_, v_declName_898_);
v___x_904_ = lean_box(v___x_903_);
v___x_905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_905_, 0, v___x_904_);
return v___x_905_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__2___redArg___boxed(lean_object* v_declName_906_, lean_object* v___y_907_, lean_object* v___y_908_){
_start:
{
lean_object* v_res_909_; 
v_res_909_ = l_Lean_isRec___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__2___redArg(v_declName_906_, v___y_907_);
lean_dec(v___y_907_);
return v_res_909_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__2(lean_object* v_declName_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_){
_start:
{
lean_object* v___x_916_; 
v___x_916_ = l_Lean_isRec___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__2___redArg(v_declName_910_, v___y_914_);
return v___x_916_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__2___boxed(lean_object* v_declName_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_){
_start:
{
lean_object* v_res_923_; 
v_res_923_ = l_Lean_isRec___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__2(v_declName_917_, v___y_918_, v___y_919_, v___y_920_, v___y_921_);
lean_dec(v___y_921_);
lean_dec_ref(v___y_920_);
lean_dec(v___y_919_);
lean_dec_ref(v___y_918_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__1___redArg(lean_object* v_a_924_, lean_object* v_b_925_){
_start:
{
lean_object* v_array_927_; lean_object* v_start_928_; lean_object* v_stop_929_; lean_object* v___x_931_; uint8_t v_isShared_932_; uint8_t v_isSharedCheck_946_; 
v_array_927_ = lean_ctor_get(v_a_924_, 0);
v_start_928_ = lean_ctor_get(v_a_924_, 1);
v_stop_929_ = lean_ctor_get(v_a_924_, 2);
v_isSharedCheck_946_ = !lean_is_exclusive(v_a_924_);
if (v_isSharedCheck_946_ == 0)
{
v___x_931_ = v_a_924_;
v_isShared_932_ = v_isSharedCheck_946_;
goto v_resetjp_930_;
}
else
{
lean_inc(v_stop_929_);
lean_inc(v_start_928_);
lean_inc(v_array_927_);
lean_dec(v_a_924_);
v___x_931_ = lean_box(0);
v_isShared_932_ = v_isSharedCheck_946_;
goto v_resetjp_930_;
}
v_resetjp_930_:
{
uint8_t v___x_933_; 
v___x_933_ = lean_nat_dec_lt(v_start_928_, v_stop_929_);
if (v___x_933_ == 0)
{
lean_object* v___x_934_; 
lean_del_object(v___x_931_);
lean_dec(v_stop_929_);
lean_dec(v_start_928_);
lean_dec_ref(v_array_927_);
v___x_934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_934_, 0, v_b_925_);
return v___x_934_;
}
else
{
lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_939_; 
v___x_935_ = lean_box(0);
v___x_936_ = lean_unsigned_to_nat(1u);
v___x_937_ = lean_nat_add(v_start_928_, v___x_936_);
lean_inc_ref(v_array_927_);
if (v_isShared_932_ == 0)
{
lean_ctor_set(v___x_931_, 1, v___x_937_);
v___x_939_ = v___x_931_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v_array_927_);
lean_ctor_set(v_reuseFailAlloc_945_, 1, v___x_937_);
lean_ctor_set(v_reuseFailAlloc_945_, 2, v_stop_929_);
v___x_939_ = v_reuseFailAlloc_945_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
lean_object* v___x_940_; uint8_t v___x_941_; 
v___x_940_ = lean_array_fget(v_array_927_, v_start_928_);
lean_dec(v_start_928_);
lean_dec_ref(v_array_927_);
v___x_941_ = l_Lean_Expr_hasExprMVar(v___x_940_);
lean_dec(v___x_940_);
if (v___x_941_ == 0)
{
v_a_924_ = v___x_939_;
v_b_925_ = v___x_935_;
goto _start;
}
else
{
lean_object* v___x_943_; 
v___x_943_ = l_Lean_Meta_throwIsDefEqStuck___redArg();
if (lean_obj_tag(v___x_943_) == 0)
{
lean_dec_ref_known(v___x_943_, 1);
v_a_924_ = v___x_939_;
v_b_925_ = v___x_935_;
goto _start;
}
else
{
lean_dec_ref(v___x_939_);
return v___x_943_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__1___redArg___boxed(lean_object* v_a_947_, lean_object* v_b_948_, lean_object* v___y_949_){
_start:
{
lean_object* v_res_950_; 
v_res_950_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__1___redArg(v_a_947_, v_b_948_);
return v_res_950_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0_spec__0___redArg(lean_object* v_declName_951_, lean_object* v___y_952_){
_start:
{
lean_object* v___x_954_; lean_object* v_env_955_; uint8_t v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_954_ = lean_st_ref_get(v___y_952_);
v_env_955_ = lean_ctor_get(v___x_954_, 0);
lean_inc_ref(v_env_955_);
lean_dec(v___x_954_);
v___x_956_ = l_Lean_getReducibilityStatusCore(v_env_955_, v_declName_951_);
v___x_957_ = lean_box(v___x_956_);
v___x_958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_958_, 0, v___x_957_);
return v___x_958_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0_spec__0___redArg___boxed(lean_object* v_declName_959_, lean_object* v___y_960_, lean_object* v___y_961_){
_start:
{
lean_object* v_res_962_; 
v_res_962_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0_spec__0___redArg(v_declName_959_, v___y_960_);
lean_dec(v___y_960_);
return v_res_962_;
}
}
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0(lean_object* v_declName_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_){
_start:
{
lean_object* v___x_969_; lean_object* v_a_970_; lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_985_; 
v___x_969_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0_spec__0___redArg(v_declName_963_, v___y_967_);
v_a_970_ = lean_ctor_get(v___x_969_, 0);
v_isSharedCheck_985_ = !lean_is_exclusive(v___x_969_);
if (v_isSharedCheck_985_ == 0)
{
v___x_972_ = v___x_969_;
v_isShared_973_ = v_isSharedCheck_985_;
goto v_resetjp_971_;
}
else
{
lean_inc(v_a_970_);
lean_dec(v___x_969_);
v___x_972_ = lean_box(0);
v_isShared_973_ = v_isSharedCheck_985_;
goto v_resetjp_971_;
}
v_resetjp_971_:
{
uint8_t v___x_974_; 
v___x_974_ = lean_unbox(v_a_970_);
lean_dec(v_a_970_);
if (v___x_974_ == 0)
{
uint8_t v___x_975_; lean_object* v___x_976_; lean_object* v___x_978_; 
v___x_975_ = 1;
v___x_976_ = lean_box(v___x_975_);
if (v_isShared_973_ == 0)
{
lean_ctor_set(v___x_972_, 0, v___x_976_);
v___x_978_ = v___x_972_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v___x_976_);
v___x_978_ = v_reuseFailAlloc_979_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
return v___x_978_;
}
}
else
{
uint8_t v___x_980_; lean_object* v___x_981_; lean_object* v___x_983_; 
v___x_980_ = 0;
v___x_981_ = lean_box(v___x_980_);
if (v_isShared_973_ == 0)
{
lean_ctor_set(v___x_972_, 0, v___x_981_);
v___x_983_ = v___x_972_;
goto v_reusejp_982_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v___x_981_);
v___x_983_ = v_reuseFailAlloc_984_;
goto v_reusejp_982_;
}
v_reusejp_982_:
{
return v___x_983_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0___boxed(lean_object* v_declName_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_){
_start:
{
lean_object* v_res_992_; 
v_res_992_ = l_Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0(v_declName_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_);
lean_dec(v___y_990_);
lean_dec_ref(v___y_989_);
lean_dec(v___y_988_);
lean_dec_ref(v___y_987_);
return v_res_992_;
}
}
static lean_object* _init_l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__3(void){
_start:
{
lean_object* v___x_1001_; lean_object* v_dummy_1002_; 
v___x_1001_ = lean_box(0);
v_dummy_1002_ = l_Lean_Expr_sort___override(v___x_1001_);
return v_dummy_1002_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs(lean_object* v_e_1003_, uint8_t v_isMatch_1004_, uint8_t v_root_1005_, lean_object* v_a_1006_, lean_object* v_a_1007_, lean_object* v_a_1008_, lean_object* v_a_1009_){
_start:
{
lean_object* v___x_1017_; 
v___x_1017_ = l_Lean_Meta_DiscrTree_reduceDT(v_e_1003_, v_root_1005_, v_a_1006_, v_a_1007_, v_a_1008_, v_a_1009_);
if (lean_obj_tag(v___x_1017_) == 0)
{
lean_object* v_a_1018_; lean_object* v___x_1020_; uint8_t v_isShared_1021_; uint8_t v_isSharedCheck_1151_; 
v_a_1018_ = lean_ctor_get(v___x_1017_, 0);
v_isSharedCheck_1151_ = !lean_is_exclusive(v___x_1017_);
if (v_isSharedCheck_1151_ == 0)
{
v___x_1020_ = v___x_1017_;
v_isShared_1021_ = v_isSharedCheck_1151_;
goto v_resetjp_1019_;
}
else
{
lean_inc(v_a_1018_);
lean_dec(v___x_1017_);
v___x_1020_ = lean_box(0);
v_isShared_1021_ = v_isSharedCheck_1151_;
goto v_resetjp_1019_;
}
v_resetjp_1019_:
{
lean_object* v___y_1023_; lean_object* v___y_1033_; lean_object* v___y_1044_; lean_object* v___y_1045_; lean_object* v___y_1046_; lean_object* v___y_1047_; 
if (v_root_1005_ == 0)
{
lean_object* v___x_1139_; 
lean_inc(v_a_1018_);
v___x_1139_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_toNatLit_x3f(v_a_1018_);
if (lean_obj_tag(v___x_1139_) == 1)
{
lean_object* v_val_1140_; lean_object* v___x_1142_; uint8_t v_isShared_1143_; uint8_t v_isSharedCheck_1150_; 
lean_del_object(v___x_1020_);
lean_dec(v_a_1018_);
v_val_1140_ = lean_ctor_get(v___x_1139_, 0);
v_isSharedCheck_1150_ = !lean_is_exclusive(v___x_1139_);
if (v_isSharedCheck_1150_ == 0)
{
v___x_1142_ = v___x_1139_;
v_isShared_1143_ = v_isSharedCheck_1150_;
goto v_resetjp_1141_;
}
else
{
lean_inc(v_val_1140_);
lean_dec(v___x_1139_);
v___x_1142_ = lean_box(0);
v_isShared_1143_ = v_isSharedCheck_1150_;
goto v_resetjp_1141_;
}
v_resetjp_1141_:
{
lean_object* v___x_1145_; 
if (v_isShared_1143_ == 0)
{
lean_ctor_set_tag(v___x_1142_, 2);
v___x_1145_ = v___x_1142_;
goto v_reusejp_1144_;
}
else
{
lean_object* v_reuseFailAlloc_1149_; 
v_reuseFailAlloc_1149_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1149_, 0, v_val_1140_);
v___x_1145_ = v_reuseFailAlloc_1149_;
goto v_reusejp_1144_;
}
v_reusejp_1144_:
{
lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; 
v___x_1146_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__0));
v___x_1147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1145_);
lean_ctor_set(v___x_1147_, 1, v___x_1146_);
v___x_1148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1148_, 0, v___x_1147_);
return v___x_1148_;
}
}
}
else
{
lean_dec(v___x_1139_);
v___y_1044_ = v_a_1006_;
v___y_1045_ = v_a_1007_;
v___y_1046_ = v_a_1008_;
v___y_1047_ = v_a_1009_;
goto v___jp_1043_;
}
}
else
{
v___y_1044_ = v_a_1006_;
v___y_1045_ = v_a_1007_;
v___y_1046_ = v_a_1008_;
v___y_1047_ = v_a_1009_;
goto v___jp_1043_;
}
v___jp_1022_:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1030_; 
v___x_1024_ = l_Lean_Expr_getAppNumArgs(v_a_1018_);
lean_inc(v___x_1024_);
v___x_1025_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1025_, 0, v___y_1023_);
lean_ctor_set(v___x_1025_, 1, v___x_1024_);
v___x_1026_ = lean_mk_empty_array_with_capacity(v___x_1024_);
lean_dec(v___x_1024_);
v___x_1027_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_a_1018_, v___x_1026_);
v___x_1028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1028_, 0, v___x_1025_);
lean_ctor_set(v___x_1028_, 1, v___x_1027_);
if (v_isShared_1021_ == 0)
{
lean_ctor_set(v___x_1020_, 0, v___x_1028_);
v___x_1030_ = v___x_1020_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v___x_1028_);
v___x_1030_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
return v___x_1030_;
}
}
v___jp_1032_:
{
lean_object* v___x_1034_; 
v___x_1034_ = l_Lean_Meta_throwIsDefEqStuck___redArg();
if (lean_obj_tag(v___x_1034_) == 0)
{
lean_dec_ref_known(v___x_1034_, 1);
v___y_1023_ = v___y_1033_;
goto v___jp_1022_;
}
else
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1042_; 
lean_dec(v___y_1033_);
lean_del_object(v___x_1020_);
lean_dec(v_a_1018_);
v_a_1035_ = lean_ctor_get(v___x_1034_, 0);
v_isSharedCheck_1042_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_1037_ = v___x_1034_;
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___x_1034_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1040_; 
if (v_isShared_1038_ == 0)
{
v___x_1040_ = v___x_1037_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v_a_1035_);
v___x_1040_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
return v___x_1040_;
}
}
}
}
v___jp_1043_:
{
lean_object* v___x_1048_; 
v___x_1048_ = l_Lean_Expr_getAppFn(v_a_1018_);
switch(lean_obj_tag(v___x_1048_))
{
case 9:
{
lean_object* v_a_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; 
lean_del_object(v___x_1020_);
lean_dec(v_a_1018_);
v_a_1049_ = lean_ctor_get(v___x_1048_, 0);
lean_inc_ref(v_a_1049_);
lean_dec_ref_known(v___x_1048_, 1);
v___x_1050_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1050_, 0, v_a_1049_);
v___x_1051_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__0));
v___x_1052_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1050_);
lean_ctor_set(v___x_1052_, 1, v___x_1051_);
v___x_1053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1053_, 0, v___x_1052_);
return v___x_1053_;
}
case 4:
{
lean_object* v_declName_1054_; lean_object* v___x_1055_; uint8_t v_isDefEqStuckEx_1056_; 
v_declName_1054_ = lean_ctor_get(v___x_1048_, 0);
lean_inc(v_declName_1054_);
lean_dec_ref_known(v___x_1048_, 2);
v___x_1055_ = l_Lean_Meta_Context_config(v___y_1044_);
v_isDefEqStuckEx_1056_ = lean_ctor_get_uint8(v___x_1055_, 4);
lean_dec_ref(v___x_1055_);
if (v_isDefEqStuckEx_1056_ == 0)
{
v___y_1023_ = v_declName_1054_;
goto v___jp_1022_;
}
else
{
uint8_t v___x_1057_; 
v___x_1057_ = l_Lean_Expr_hasExprMVar(v_a_1018_);
if (v___x_1057_ == 0)
{
v___y_1023_ = v_declName_1054_;
goto v___jp_1022_;
}
else
{
lean_object* v___x_1058_; 
lean_inc(v_declName_1054_);
v___x_1058_ = l_Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0(v_declName_1054_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_);
if (lean_obj_tag(v___x_1058_) == 0)
{
lean_object* v_a_1059_; uint8_t v___x_1060_; 
v_a_1059_ = lean_ctor_get(v___x_1058_, 0);
lean_inc(v_a_1059_);
lean_dec_ref_known(v___x_1058_, 1);
v___x_1060_ = lean_unbox(v_a_1059_);
lean_dec(v_a_1059_);
if (v___x_1060_ == 0)
{
lean_object* v___x_1061_; lean_object* v_env_1062_; lean_object* v___x_1063_; 
v___x_1061_ = lean_st_ref_get(v___y_1047_);
v_env_1062_ = lean_ctor_get(v___x_1061_, 0);
lean_inc_ref(v_env_1062_);
lean_dec(v___x_1061_);
v___x_1063_ = l_Lean_Meta_isMatcherAppCore_x3f(v_env_1062_, v_a_1018_);
if (lean_obj_tag(v___x_1063_) == 1)
{
lean_object* v_val_1064_; lean_object* v_numDiscrs_1065_; lean_object* v_nargs_1066_; lean_object* v_dummy_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; 
v_val_1064_ = lean_ctor_get(v___x_1063_, 0);
lean_inc(v_val_1064_);
lean_dec_ref_known(v___x_1063_, 1);
v_numDiscrs_1065_ = lean_ctor_get(v_val_1064_, 1);
lean_inc(v_numDiscrs_1065_);
v_nargs_1066_ = l_Lean_Expr_getAppNumArgs(v_a_1018_);
v_dummy_1067_ = lean_obj_once(&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__3, &l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__3_once, _init_l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__3);
lean_inc(v_nargs_1066_);
v___x_1068_ = lean_mk_array(v_nargs_1066_, v_dummy_1067_);
v___x_1069_ = lean_unsigned_to_nat(1u);
v___x_1070_ = lean_nat_sub(v_nargs_1066_, v___x_1069_);
lean_dec(v_nargs_1066_);
lean_inc(v_a_1018_);
v___x_1071_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1018_, v___x_1068_, v___x_1070_);
v___x_1072_ = l_Lean_Meta_Match_MatcherInfo_getFirstDiscrPos(v_val_1064_);
lean_dec(v_val_1064_);
v___x_1073_ = lean_nat_add(v___x_1072_, v_numDiscrs_1065_);
lean_dec(v_numDiscrs_1065_);
v___x_1074_ = l_Array_toSubarray___redArg(v___x_1071_, v___x_1072_, v___x_1073_);
v___x_1075_ = lean_box(0);
v___x_1076_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__1___redArg(v___x_1074_, v___x_1075_);
if (lean_obj_tag(v___x_1076_) == 0)
{
lean_dec_ref_known(v___x_1076_, 1);
v___y_1023_ = v_declName_1054_;
goto v___jp_1022_;
}
else
{
lean_object* v_a_1077_; lean_object* v___x_1079_; uint8_t v_isShared_1080_; uint8_t v_isSharedCheck_1084_; 
lean_dec(v_declName_1054_);
lean_del_object(v___x_1020_);
lean_dec(v_a_1018_);
v_a_1077_ = lean_ctor_get(v___x_1076_, 0);
v_isSharedCheck_1084_ = !lean_is_exclusive(v___x_1076_);
if (v_isSharedCheck_1084_ == 0)
{
v___x_1079_ = v___x_1076_;
v_isShared_1080_ = v_isSharedCheck_1084_;
goto v_resetjp_1078_;
}
else
{
lean_inc(v_a_1077_);
lean_dec(v___x_1076_);
v___x_1079_ = lean_box(0);
v_isShared_1080_ = v_isSharedCheck_1084_;
goto v_resetjp_1078_;
}
v_resetjp_1078_:
{
lean_object* v___x_1082_; 
if (v_isShared_1080_ == 0)
{
v___x_1082_ = v___x_1079_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v_a_1077_);
v___x_1082_ = v_reuseFailAlloc_1083_;
goto v_reusejp_1081_;
}
v_reusejp_1081_:
{
return v___x_1082_;
}
}
}
}
else
{
lean_object* v___x_1085_; lean_object* v_a_1086_; uint8_t v___x_1087_; 
lean_dec(v___x_1063_);
lean_inc(v_declName_1054_);
v___x_1085_ = l_Lean_isRec___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__2___redArg(v_declName_1054_, v___y_1047_);
v_a_1086_ = lean_ctor_get(v___x_1085_, 0);
lean_inc(v_a_1086_);
lean_dec_ref(v___x_1085_);
v___x_1087_ = lean_unbox(v_a_1086_);
lean_dec(v_a_1086_);
if (v___x_1087_ == 0)
{
v___y_1023_ = v_declName_1054_;
goto v___jp_1022_;
}
else
{
v___y_1033_ = v_declName_1054_;
goto v___jp_1032_;
}
}
}
else
{
v___y_1033_ = v_declName_1054_;
goto v___jp_1032_;
}
}
else
{
lean_object* v_a_1088_; lean_object* v___x_1090_; uint8_t v_isShared_1091_; uint8_t v_isSharedCheck_1095_; 
lean_dec(v_declName_1054_);
lean_del_object(v___x_1020_);
lean_dec(v_a_1018_);
v_a_1088_ = lean_ctor_get(v___x_1058_, 0);
v_isSharedCheck_1095_ = !lean_is_exclusive(v___x_1058_);
if (v_isSharedCheck_1095_ == 0)
{
v___x_1090_ = v___x_1058_;
v_isShared_1091_ = v_isSharedCheck_1095_;
goto v_resetjp_1089_;
}
else
{
lean_inc(v_a_1088_);
lean_dec(v___x_1058_);
v___x_1090_ = lean_box(0);
v_isShared_1091_ = v_isSharedCheck_1095_;
goto v_resetjp_1089_;
}
v_resetjp_1089_:
{
lean_object* v___x_1093_; 
if (v_isShared_1091_ == 0)
{
v___x_1093_ = v___x_1090_;
goto v_reusejp_1092_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v_a_1088_);
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
}
}
case 1:
{
lean_object* v_fvarId_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; 
lean_del_object(v___x_1020_);
v_fvarId_1096_ = lean_ctor_get(v___x_1048_, 0);
lean_inc(v_fvarId_1096_);
lean_dec_ref_known(v___x_1048_, 1);
v___x_1097_ = l_Lean_Expr_getAppNumArgs(v_a_1018_);
lean_inc(v___x_1097_);
v___x_1098_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1098_, 0, v_fvarId_1096_);
lean_ctor_set(v___x_1098_, 1, v___x_1097_);
v___x_1099_ = lean_mk_empty_array_with_capacity(v___x_1097_);
lean_dec(v___x_1097_);
v___x_1100_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_a_1018_, v___x_1099_);
v___x_1101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1098_);
lean_ctor_set(v___x_1101_, 1, v___x_1100_);
v___x_1102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1101_);
return v___x_1102_;
}
case 2:
{
lean_del_object(v___x_1020_);
lean_dec(v_a_1018_);
if (v_isMatch_1004_ == 0)
{
lean_object* v_mvarId_1103_; lean_object* v___x_1104_; uint8_t v_isDefEqStuckEx_1105_; 
v_mvarId_1103_ = lean_ctor_get(v___x_1048_, 0);
lean_inc(v_mvarId_1103_);
lean_dec_ref_known(v___x_1048_, 1);
v___x_1104_ = l_Lean_Meta_Context_config(v___y_1044_);
v_isDefEqStuckEx_1105_ = lean_ctor_get_uint8(v___x_1104_, 4);
lean_dec_ref(v___x_1104_);
if (v_isDefEqStuckEx_1105_ == 0)
{
lean_object* v___x_1106_; 
v___x_1106_ = l_Lean_MVarId_isReadOnlyOrSyntheticOpaque(v_mvarId_1103_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_);
if (lean_obj_tag(v___x_1106_) == 0)
{
lean_object* v_a_1107_; uint8_t v___x_1108_; 
v_a_1107_ = lean_ctor_get(v___x_1106_, 0);
lean_inc(v_a_1107_);
lean_dec_ref_known(v___x_1106_, 1);
v___x_1108_ = lean_unbox(v_a_1107_);
lean_dec(v_a_1107_);
if (v___x_1108_ == 0)
{
goto v___jp_1011_;
}
else
{
goto v___jp_1014_;
}
}
else
{
lean_object* v_a_1109_; lean_object* v___x_1111_; uint8_t v_isShared_1112_; uint8_t v_isSharedCheck_1116_; 
v_a_1109_ = lean_ctor_get(v___x_1106_, 0);
v_isSharedCheck_1116_ = !lean_is_exclusive(v___x_1106_);
if (v_isSharedCheck_1116_ == 0)
{
v___x_1111_ = v___x_1106_;
v_isShared_1112_ = v_isSharedCheck_1116_;
goto v_resetjp_1110_;
}
else
{
lean_inc(v_a_1109_);
lean_dec(v___x_1106_);
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
else
{
lean_dec(v_mvarId_1103_);
goto v___jp_1011_;
}
}
else
{
lean_dec_ref_known(v___x_1048_, 1);
goto v___jp_1014_;
}
}
case 11:
{
lean_object* v_typeName_1117_; lean_object* v_idx_1118_; lean_object* v_struct_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; 
lean_del_object(v___x_1020_);
v_typeName_1117_ = lean_ctor_get(v___x_1048_, 0);
lean_inc(v_typeName_1117_);
v_idx_1118_ = lean_ctor_get(v___x_1048_, 1);
lean_inc(v_idx_1118_);
v_struct_1119_ = lean_ctor_get(v___x_1048_, 2);
lean_inc_ref(v_struct_1119_);
lean_dec_ref_known(v___x_1048_, 3);
v___x_1120_ = l_Lean_Expr_getAppNumArgs(v_a_1018_);
lean_inc(v___x_1120_);
v___x_1121_ = lean_alloc_ctor(6, 3, 0);
lean_ctor_set(v___x_1121_, 0, v_typeName_1117_);
lean_ctor_set(v___x_1121_, 1, v_idx_1118_);
lean_ctor_set(v___x_1121_, 2, v___x_1120_);
v___x_1122_ = lean_unsigned_to_nat(1u);
v___x_1123_ = lean_mk_empty_array_with_capacity(v___x_1122_);
v___x_1124_ = lean_array_push(v___x_1123_, v_struct_1119_);
v___x_1125_ = lean_mk_empty_array_with_capacity(v___x_1120_);
lean_dec(v___x_1120_);
v___x_1126_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_a_1018_, v___x_1125_);
v___x_1127_ = l_Array_append___redArg(v___x_1124_, v___x_1126_);
lean_dec_ref(v___x_1126_);
v___x_1128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1128_, 0, v___x_1121_);
lean_ctor_set(v___x_1128_, 1, v___x_1127_);
v___x_1129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1129_, 0, v___x_1128_);
return v___x_1129_;
}
case 7:
{
lean_object* v_binderType_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; 
lean_del_object(v___x_1020_);
lean_dec(v_a_1018_);
v_binderType_1130_ = lean_ctor_get(v___x_1048_, 1);
lean_inc_ref(v_binderType_1130_);
lean_dec_ref_known(v___x_1048_, 3);
v___x_1131_ = lean_box(5);
v___x_1132_ = lean_unsigned_to_nat(1u);
v___x_1133_ = lean_mk_empty_array_with_capacity(v___x_1132_);
v___x_1134_ = lean_array_push(v___x_1133_, v_binderType_1130_);
v___x_1135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1135_, 0, v___x_1131_);
lean_ctor_set(v___x_1135_, 1, v___x_1134_);
v___x_1136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1136_, 0, v___x_1135_);
return v___x_1136_;
}
default: 
{
lean_object* v___x_1137_; lean_object* v___x_1138_; 
lean_dec_ref(v___x_1048_);
lean_del_object(v___x_1020_);
lean_dec(v_a_1018_);
v___x_1137_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__2));
v___x_1138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1137_);
return v___x_1138_;
}
}
}
}
}
else
{
lean_object* v_a_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1159_; 
v_a_1152_ = lean_ctor_get(v___x_1017_, 0);
v_isSharedCheck_1159_ = !lean_is_exclusive(v___x_1017_);
if (v_isSharedCheck_1159_ == 0)
{
v___x_1154_ = v___x_1017_;
v_isShared_1155_ = v_isSharedCheck_1159_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_a_1152_);
lean_dec(v___x_1017_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1159_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
lean_object* v___x_1157_; 
if (v_isShared_1155_ == 0)
{
v___x_1157_ = v___x_1154_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1158_; 
v_reuseFailAlloc_1158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1158_, 0, v_a_1152_);
v___x_1157_ = v_reuseFailAlloc_1158_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
return v___x_1157_;
}
}
}
v___jp_1011_:
{
lean_object* v___x_1012_; lean_object* v___x_1013_; 
v___x_1012_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__1));
v___x_1013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1013_, 0, v___x_1012_);
return v___x_1013_;
}
v___jp_1014_:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; 
v___x_1015_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__2));
v___x_1016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1015_);
return v___x_1016_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___boxed(lean_object* v_e_1160_, lean_object* v_isMatch_1161_, lean_object* v_root_1162_, lean_object* v_a_1163_, lean_object* v_a_1164_, lean_object* v_a_1165_, lean_object* v_a_1166_, lean_object* v_a_1167_){
_start:
{
uint8_t v_isMatch_boxed_1168_; uint8_t v_root_boxed_1169_; lean_object* v_res_1170_; 
v_isMatch_boxed_1168_ = lean_unbox(v_isMatch_1161_);
v_root_boxed_1169_ = lean_unbox(v_root_1162_);
v_res_1170_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs(v_e_1160_, v_isMatch_boxed_1168_, v_root_boxed_1169_, v_a_1163_, v_a_1164_, v_a_1165_, v_a_1166_);
lean_dec(v_a_1166_);
lean_dec_ref(v_a_1165_);
lean_dec(v_a_1164_);
lean_dec_ref(v_a_1163_);
return v_res_1170_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0_spec__0(lean_object* v_declName_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_){
_start:
{
lean_object* v___x_1177_; 
v___x_1177_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0_spec__0___redArg(v_declName_1171_, v___y_1175_);
return v___x_1177_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0_spec__0___boxed(lean_object* v_declName_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_){
_start:
{
lean_object* v_res_1184_; 
v_res_1184_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0_spec__0(v_declName_1178_, v___y_1179_, v___y_1180_, v___y_1181_, v___y_1182_);
lean_dec(v___y_1182_);
lean_dec_ref(v___y_1181_);
lean_dec(v___y_1180_);
lean_dec_ref(v___y_1179_);
return v_res_1184_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__1(lean_object* v_inst_1185_, lean_object* v_R_1186_, lean_object* v_a_1187_, lean_object* v_b_1188_, lean_object* v_c_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_){
_start:
{
lean_object* v___x_1195_; 
v___x_1195_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__1___redArg(v_a_1187_, v_b_1188_);
return v___x_1195_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__1___boxed(lean_object* v_inst_1196_, lean_object* v_R_1197_, lean_object* v_a_1198_, lean_object* v_b_1199_, lean_object* v_c_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_){
_start:
{
lean_object* v_res_1206_; 
v_res_1206_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__1(v_inst_1196_, v_R_1197_, v_a_1198_, v_b_1199_, v_c_1200_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_);
lean_dec(v___y_1204_);
lean_dec_ref(v___y_1203_);
lean_dec(v___y_1202_);
lean_dec_ref(v___y_1201_);
return v_res_1206_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchKeyArgs(lean_object* v_e_1207_, uint8_t v_root_1208_, lean_object* v_a_1209_, lean_object* v_a_1210_, lean_object* v_a_1211_, lean_object* v_a_1212_){
_start:
{
uint8_t v___x_1214_; lean_object* v___x_1215_; 
v___x_1214_ = 1;
v___x_1215_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs(v_e_1207_, v___x_1214_, v_root_1208_, v_a_1209_, v_a_1210_, v_a_1211_, v_a_1212_);
return v___x_1215_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchKeyArgs___boxed(lean_object* v_e_1216_, lean_object* v_root_1217_, lean_object* v_a_1218_, lean_object* v_a_1219_, lean_object* v_a_1220_, lean_object* v_a_1221_, lean_object* v_a_1222_){
_start:
{
uint8_t v_root_boxed_1223_; lean_object* v_res_1224_; 
v_root_boxed_1223_ = lean_unbox(v_root_1217_);
v_res_1224_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchKeyArgs(v_e_1216_, v_root_boxed_1223_, v_a_1218_, v_a_1219_, v_a_1220_, v_a_1221_);
lean_dec(v_a_1221_);
lean_dec_ref(v_a_1220_);
lean_dec(v_a_1219_);
lean_dec_ref(v_a_1218_);
return v_res_1224_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnifyKeyArgs(lean_object* v_e_1225_, uint8_t v_root_1226_, lean_object* v_a_1227_, lean_object* v_a_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_){
_start:
{
uint8_t v___x_1232_; lean_object* v___x_1233_; 
v___x_1232_ = 0;
v___x_1233_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs(v_e_1225_, v___x_1232_, v_root_1226_, v_a_1227_, v_a_1228_, v_a_1229_, v_a_1230_);
return v___x_1233_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnifyKeyArgs___boxed(lean_object* v_e_1234_, lean_object* v_root_1235_, lean_object* v_a_1236_, lean_object* v_a_1237_, lean_object* v_a_1238_, lean_object* v_a_1239_, lean_object* v_a_1240_){
_start:
{
uint8_t v_root_boxed_1241_; lean_object* v_res_1242_; 
v_root_boxed_1241_ = lean_unbox(v_root_1235_);
v_res_1242_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnifyKeyArgs(v_e_1234_, v_root_boxed_1241_, v_a_1236_, v_a_1237_, v_a_1238_, v_a_1239_);
lean_dec(v_a_1239_);
lean_dec_ref(v_a_1238_);
lean_dec(v_a_1237_);
lean_dec_ref(v_a_1236_);
return v_res_1242_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1243_, lean_object* v_vals_1244_, lean_object* v_i_1245_, lean_object* v_k_1246_){
_start:
{
lean_object* v___x_1247_; uint8_t v___x_1248_; 
v___x_1247_ = lean_array_get_size(v_keys_1243_);
v___x_1248_ = lean_nat_dec_lt(v_i_1245_, v___x_1247_);
if (v___x_1248_ == 0)
{
lean_object* v___x_1249_; 
lean_dec(v_i_1245_);
v___x_1249_ = lean_box(0);
return v___x_1249_;
}
else
{
lean_object* v_k_x27_1250_; uint8_t v___x_1251_; 
v_k_x27_1250_ = lean_array_fget_borrowed(v_keys_1243_, v_i_1245_);
v___x_1251_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_k_1246_, v_k_x27_1250_);
if (v___x_1251_ == 0)
{
lean_object* v___x_1252_; lean_object* v___x_1253_; 
v___x_1252_ = lean_unsigned_to_nat(1u);
v___x_1253_ = lean_nat_add(v_i_1245_, v___x_1252_);
lean_dec(v_i_1245_);
v_i_1245_ = v___x_1253_;
goto _start;
}
else
{
lean_object* v___x_1255_; lean_object* v___x_1256_; 
v___x_1255_ = lean_array_fget_borrowed(v_vals_1244_, v_i_1245_);
lean_dec(v_i_1245_);
lean_inc(v___x_1255_);
v___x_1256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1256_, 0, v___x_1255_);
return v___x_1256_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1257_, lean_object* v_vals_1258_, lean_object* v_i_1259_, lean_object* v_k_1260_){
_start:
{
lean_object* v_res_1261_; 
v_res_1261_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0_spec__1___redArg(v_keys_1257_, v_vals_1258_, v_i_1259_, v_k_1260_);
lean_dec(v_k_1260_);
lean_dec_ref(v_vals_1258_);
lean_dec_ref(v_keys_1257_);
return v_res_1261_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0___redArg(lean_object* v_x_1262_, size_t v_x_1263_, lean_object* v_x_1264_){
_start:
{
if (lean_obj_tag(v_x_1262_) == 0)
{
lean_object* v_es_1265_; lean_object* v___x_1266_; size_t v___x_1267_; size_t v___x_1268_; lean_object* v_j_1269_; lean_object* v___x_1270_; 
v_es_1265_ = lean_ctor_get(v_x_1262_, 0);
v___x_1266_ = lean_box(2);
v___x_1267_ = ((size_t)31ULL);
v___x_1268_ = lean_usize_land(v_x_1263_, v___x_1267_);
v_j_1269_ = lean_usize_to_nat(v___x_1268_);
v___x_1270_ = lean_array_get_borrowed(v___x_1266_, v_es_1265_, v_j_1269_);
lean_dec(v_j_1269_);
switch(lean_obj_tag(v___x_1270_))
{
case 0:
{
lean_object* v_key_1271_; lean_object* v_val_1272_; uint8_t v___x_1273_; 
v_key_1271_ = lean_ctor_get(v___x_1270_, 0);
v_val_1272_ = lean_ctor_get(v___x_1270_, 1);
v___x_1273_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_1264_, v_key_1271_);
if (v___x_1273_ == 0)
{
lean_object* v___x_1274_; 
v___x_1274_ = lean_box(0);
return v___x_1274_;
}
else
{
lean_object* v___x_1275_; 
lean_inc(v_val_1272_);
v___x_1275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1275_, 0, v_val_1272_);
return v___x_1275_;
}
}
case 1:
{
lean_object* v_node_1276_; size_t v___x_1277_; size_t v___x_1278_; 
v_node_1276_ = lean_ctor_get(v___x_1270_, 0);
v___x_1277_ = ((size_t)5ULL);
v___x_1278_ = lean_usize_shift_right(v_x_1263_, v___x_1277_);
v_x_1262_ = v_node_1276_;
v_x_1263_ = v___x_1278_;
goto _start;
}
default: 
{
lean_object* v___x_1280_; 
v___x_1280_ = lean_box(0);
return v___x_1280_;
}
}
}
else
{
lean_object* v_ks_1281_; lean_object* v_vs_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; 
v_ks_1281_ = lean_ctor_get(v_x_1262_, 0);
v_vs_1282_ = lean_ctor_get(v_x_1262_, 1);
v___x_1283_ = lean_unsigned_to_nat(0u);
v___x_1284_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0_spec__1___redArg(v_ks_1281_, v_vs_1282_, v___x_1283_, v_x_1264_);
return v___x_1284_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0___redArg___boxed(lean_object* v_x_1285_, lean_object* v_x_1286_, lean_object* v_x_1287_){
_start:
{
size_t v_x_184__boxed_1288_; lean_object* v_res_1289_; 
v_x_184__boxed_1288_ = lean_unbox_usize(v_x_1286_);
lean_dec(v_x_1286_);
v_res_1289_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0___redArg(v_x_1285_, v_x_184__boxed_1288_, v_x_1287_);
lean_dec(v_x_1287_);
lean_dec_ref(v_x_1285_);
return v_res_1289_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0___redArg(lean_object* v_x_1290_, lean_object* v_x_1291_){
_start:
{
uint64_t v___x_1292_; size_t v___x_1293_; lean_object* v___x_1294_; 
v___x_1292_ = l_Lean_Meta_DiscrTree_Key_hash(v_x_1291_);
v___x_1293_ = lean_uint64_to_usize(v___x_1292_);
v___x_1294_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0___redArg(v_x_1290_, v___x_1293_, v_x_1291_);
return v___x_1294_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0___redArg___boxed(lean_object* v_x_1295_, lean_object* v_x_1296_){
_start:
{
lean_object* v_res_1297_; 
v_res_1297_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0___redArg(v_x_1295_, v_x_1296_);
lean_dec(v_x_1296_);
lean_dec_ref(v_x_1295_);
return v_res_1297_;
}
}
static lean_object* _init_l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg___closed__1(void){
_start:
{
lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v_result_1302_; lean_object* v___x_1303_; 
v___x_1300_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg___closed__0));
v___x_1301_ = lean_unsigned_to_nat(8u);
v_result_1302_ = lean_mk_empty_array_with_capacity(v___x_1301_);
v___x_1303_ = l_Array_append___redArg(v_result_1302_, v___x_1300_);
return v___x_1303_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg(lean_object* v_d_1304_){
_start:
{
lean_object* v___x_1305_; lean_object* v_result_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; 
v___x_1305_ = lean_unsigned_to_nat(8u);
v_result_1306_ = lean_mk_empty_array_with_capacity(v___x_1305_);
v___x_1307_ = lean_box(0);
v___x_1308_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0___redArg(v_d_1304_, v___x_1307_);
if (lean_obj_tag(v___x_1308_) == 0)
{
return v_result_1306_;
}
else
{
lean_object* v_val_1309_; 
v_val_1309_ = lean_ctor_get(v___x_1308_, 0);
lean_inc(v_val_1309_);
lean_dec_ref_known(v___x_1308_, 1);
if (lean_obj_tag(v_val_1309_) == 0)
{
lean_object* v___x_1310_; 
lean_dec_ref_known(v_val_1309_, 2);
lean_dec_ref(v_result_1306_);
v___x_1310_ = lean_obj_once(&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg___closed__1, &l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg___closed__1_once, _init_l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg___closed__1);
return v___x_1310_;
}
else
{
lean_object* v_vs_1311_; lean_object* v___x_1312_; 
v_vs_1311_ = lean_ctor_get(v_val_1309_, 0);
lean_inc_ref(v_vs_1311_);
lean_dec_ref_known(v_val_1309_, 2);
v___x_1312_ = l_Array_append___redArg(v_result_1306_, v_vs_1311_);
lean_dec_ref(v_vs_1311_);
return v___x_1312_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg___boxed(lean_object* v_d_1313_){
_start:
{
lean_object* v_res_1314_; 
v_res_1314_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg(v_d_1313_);
lean_dec_ref(v_d_1313_);
return v_res_1314_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult(lean_object* v_00_u03b1_1315_, lean_object* v_d_1316_){
_start:
{
lean_object* v___x_1317_; 
v___x_1317_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg(v_d_1316_);
return v___x_1317_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___boxed(lean_object* v_00_u03b1_1318_, lean_object* v_d_1319_){
_start:
{
lean_object* v_res_1320_; 
v_res_1320_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult(v_00_u03b1_1318_, v_d_1319_);
lean_dec_ref(v_d_1319_);
return v_res_1320_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0(lean_object* v_00_u03b2_1321_, lean_object* v_x_1322_, lean_object* v_x_1323_){
_start:
{
lean_object* v___x_1324_; 
v___x_1324_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0___redArg(v_x_1322_, v_x_1323_);
return v___x_1324_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0___boxed(lean_object* v_00_u03b2_1325_, lean_object* v_x_1326_, lean_object* v_x_1327_){
_start:
{
lean_object* v_res_1328_; 
v_res_1328_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0(v_00_u03b2_1325_, v_x_1326_, v_x_1327_);
lean_dec(v_x_1327_);
lean_dec_ref(v_x_1326_);
return v_res_1328_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0(lean_object* v_00_u03b2_1329_, lean_object* v_x_1330_, size_t v_x_1331_, lean_object* v_x_1332_){
_start:
{
lean_object* v___x_1333_; 
v___x_1333_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0___redArg(v_x_1330_, v_x_1331_, v_x_1332_);
return v___x_1333_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1334_, lean_object* v_x_1335_, lean_object* v_x_1336_, lean_object* v_x_1337_){
_start:
{
size_t v_x_285__boxed_1338_; lean_object* v_res_1339_; 
v_x_285__boxed_1338_ = lean_unbox_usize(v_x_1336_);
lean_dec(v_x_1336_);
v_res_1339_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0(v_00_u03b2_1334_, v_x_1335_, v_x_285__boxed_1338_, v_x_1337_);
lean_dec(v_x_1337_);
lean_dec_ref(v_x_1335_);
return v_res_1339_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1340_, lean_object* v_keys_1341_, lean_object* v_vals_1342_, lean_object* v_heq_1343_, lean_object* v_i_1344_, lean_object* v_k_1345_){
_start:
{
lean_object* v___x_1346_; 
v___x_1346_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0_spec__1___redArg(v_keys_1341_, v_vals_1342_, v_i_1344_, v_k_1345_);
return v___x_1346_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1347_, lean_object* v_keys_1348_, lean_object* v_vals_1349_, lean_object* v_heq_1350_, lean_object* v_i_1351_, lean_object* v_k_1352_){
_start:
{
lean_object* v_res_1353_; 
v_res_1353_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0_spec__1(v_00_u03b2_1347_, v_keys_1348_, v_vals_1349_, v_heq_1350_, v_i_1351_, v_k_1352_);
lean_dec(v_k_1352_);
lean_dec_ref(v_vals_1349_);
lean_dec_ref(v_keys_1348_);
return v_res_1353_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___lam__0(lean_object* v_a_1354_, lean_object* v_b_1355_){
_start:
{
lean_object* v_fst_1356_; lean_object* v_fst_1357_; uint8_t v___x_1358_; 
v_fst_1356_ = lean_ctor_get(v_a_1354_, 0);
v_fst_1357_ = lean_ctor_get(v_b_1355_, 0);
v___x_1358_ = l_Lean_Meta_DiscrTree_Key_lt(v_fst_1356_, v_fst_1357_);
return v___x_1358_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___lam__0___boxed(lean_object* v_a_1359_, lean_object* v_b_1360_){
_start:
{
uint8_t v_res_1361_; lean_object* v_r_1362_; 
v_res_1361_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___lam__0(v_a_1359_, v_b_1360_);
lean_dec_ref(v_b_1360_);
lean_dec_ref(v_a_1359_);
v_r_1362_ = lean_box(v_res_1361_);
return v_r_1362_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg(lean_object* v_cs_1367_, lean_object* v_k_1368_){
_start:
{
lean_object* v___x_1369_; lean_object* v___x_1370_; uint8_t v___x_1371_; 
v___x_1369_ = lean_unsigned_to_nat(0u);
v___x_1370_ = lean_array_get_size(v_cs_1367_);
v___x_1371_ = lean_nat_dec_lt(v___x_1369_, v___x_1370_);
if (v___x_1371_ == 0)
{
lean_object* v___x_1372_; 
lean_dec(v_k_1368_);
v___x_1372_ = lean_box(0);
return v___x_1372_;
}
else
{
lean_object* v___x_1373_; lean_object* v___x_1374_; uint8_t v___x_1375_; 
v___x_1373_ = lean_unsigned_to_nat(1u);
v___x_1374_ = lean_nat_sub(v___x_1370_, v___x_1373_);
v___x_1375_ = lean_nat_dec_le(v___x_1369_, v___x_1374_);
if (v___x_1375_ == 0)
{
lean_object* v___x_1376_; 
lean_dec(v___x_1374_);
lean_dec(v_k_1368_);
v___x_1376_ = lean_box(0);
return v___x_1376_;
}
else
{
lean_object* v___f_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; 
v___f_1377_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__0));
v___x_1378_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__1));
v___x_1379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1379_, 0, v_k_1368_);
lean_ctor_set(v___x_1379_, 1, v___x_1378_);
v___x_1380_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__2));
v___x_1381_ = l_Array_binSearchAux___redArg(v___f_1377_, v___x_1380_, v_cs_1367_, v___x_1379_, v___x_1369_, v___x_1374_);
return v___x_1381_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___boxed(lean_object* v_cs_1382_, lean_object* v_k_1383_){
_start:
{
lean_object* v_res_1384_; 
v_res_1384_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg(v_cs_1382_, v_k_1383_);
lean_dec_ref(v_cs_1382_);
return v_res_1384_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey(lean_object* v_00_u03b1_1385_, lean_object* v_cs_1386_, lean_object* v_k_1387_){
_start:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; uint8_t v___x_1390_; 
v___x_1388_ = lean_unsigned_to_nat(0u);
v___x_1389_ = lean_array_get_size(v_cs_1386_);
v___x_1390_ = lean_nat_dec_lt(v___x_1388_, v___x_1389_);
if (v___x_1390_ == 0)
{
lean_object* v___x_1391_; 
lean_dec(v_k_1387_);
v___x_1391_ = lean_box(0);
return v___x_1391_;
}
else
{
lean_object* v___x_1392_; lean_object* v___x_1393_; uint8_t v___x_1394_; 
v___x_1392_ = lean_unsigned_to_nat(1u);
v___x_1393_ = lean_nat_sub(v___x_1389_, v___x_1392_);
v___x_1394_ = lean_nat_dec_le(v___x_1388_, v___x_1393_);
if (v___x_1394_ == 0)
{
lean_object* v___x_1395_; 
lean_dec(v___x_1393_);
lean_dec(v_k_1387_);
v___x_1395_ = lean_box(0);
return v___x_1395_;
}
else
{
lean_object* v___f_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; 
v___f_1396_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__0));
v___x_1397_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__1));
v___x_1398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1398_, 0, v_k_1387_);
lean_ctor_set(v___x_1398_, 1, v___x_1397_);
v___x_1399_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__2));
v___x_1400_ = l_Array_binSearchAux___redArg(v___f_1396_, v___x_1399_, v_cs_1386_, v___x_1398_, v___x_1388_, v___x_1393_);
return v___x_1400_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___boxed(lean_object* v_00_u03b1_1401_, lean_object* v_cs_1402_, lean_object* v_k_1403_){
_start:
{
lean_object* v_res_1404_; 
v_res_1404_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey(v_00_u03b1_1401_, v_cs_1402_, v_k_1403_);
lean_dec_ref(v_cs_1402_);
return v_res_1404_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop_spec__0___redArg(lean_object* v_as_1405_, lean_object* v_k_1406_, lean_object* v_x_1407_, lean_object* v_x_1408_){
_start:
{
lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v_m_1411_; lean_object* v_a_1412_; uint8_t v___x_1413_; 
v___x_1409_ = lean_nat_add(v_x_1407_, v_x_1408_);
v___x_1410_ = lean_unsigned_to_nat(1u);
v_m_1411_ = lean_nat_shiftr(v___x_1409_, v___x_1410_);
lean_dec(v___x_1409_);
v_a_1412_ = lean_array_fget_borrowed(v_as_1405_, v_m_1411_);
v___x_1413_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___lam__0(v_a_1412_, v_k_1406_);
if (v___x_1413_ == 0)
{
uint8_t v___x_1414_; 
lean_dec(v_x_1408_);
v___x_1414_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___lam__0(v_k_1406_, v_a_1412_);
if (v___x_1414_ == 0)
{
lean_object* v___x_1415_; 
lean_dec(v_m_1411_);
lean_dec(v_x_1407_);
lean_inc(v_a_1412_);
v___x_1415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1415_, 0, v_a_1412_);
return v___x_1415_;
}
else
{
lean_object* v___x_1416_; uint8_t v___x_1417_; 
v___x_1416_ = lean_unsigned_to_nat(0u);
v___x_1417_ = lean_nat_dec_eq(v_m_1411_, v___x_1416_);
if (v___x_1417_ == 0)
{
lean_object* v___x_1418_; uint8_t v___x_1419_; 
v___x_1418_ = lean_nat_sub(v_m_1411_, v___x_1410_);
lean_dec(v_m_1411_);
v___x_1419_ = lean_nat_dec_lt(v___x_1418_, v_x_1407_);
if (v___x_1419_ == 0)
{
v_x_1408_ = v___x_1418_;
goto _start;
}
else
{
lean_object* v___x_1421_; 
lean_dec(v___x_1418_);
lean_dec(v_x_1407_);
v___x_1421_ = lean_box(0);
return v___x_1421_;
}
}
else
{
lean_object* v___x_1422_; 
lean_dec(v_m_1411_);
lean_dec(v_x_1407_);
v___x_1422_ = lean_box(0);
return v___x_1422_;
}
}
}
else
{
lean_object* v___x_1423_; uint8_t v___x_1424_; 
lean_dec(v_x_1407_);
v___x_1423_ = lean_nat_add(v_m_1411_, v___x_1410_);
lean_dec(v_m_1411_);
v___x_1424_ = lean_nat_dec_le(v___x_1423_, v_x_1408_);
if (v___x_1424_ == 0)
{
lean_object* v___x_1425_; 
lean_dec(v___x_1423_);
lean_dec(v_x_1408_);
v___x_1425_ = lean_box(0);
return v___x_1425_;
}
else
{
v_x_1407_ = v___x_1423_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop_spec__0___redArg___boxed(lean_object* v_as_1427_, lean_object* v_k_1428_, lean_object* v_x_1429_, lean_object* v_x_1430_){
_start:
{
lean_object* v_res_1431_; 
v_res_1431_ = l_Array_binSearchAux___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop_spec__0___redArg(v_as_1427_, v_k_1428_, v_x_1429_, v_x_1430_);
lean_dec_ref(v_k_1428_);
lean_dec_ref(v_as_1427_);
return v_res_1431_;
}
}
static lean_object* _init_l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___closed__0(void){
_start:
{
lean_object* v___x_1432_; 
v___x_1432_ = l_Lean_Meta_DiscrTree_instInhabitedTrie___redArg();
return v___x_1432_;
}
}
static lean_object* _init_l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___closed__1(void){
_start:
{
lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; 
v___x_1433_ = lean_obj_once(&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___closed__0, &l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___closed__0_once, _init_l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___closed__0);
v___x_1434_ = lean_box(0);
v___x_1435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1435_, 0, v___x_1434_);
lean_ctor_set(v___x_1435_, 1, v___x_1433_);
return v___x_1435_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg(lean_object* v_todo_1436_, lean_object* v_c_1437_, lean_object* v_result_1438_, lean_object* v_a_1439_, lean_object* v_a_1440_, lean_object* v_a_1441_, lean_object* v_a_1442_){
_start:
{
lean_object* v___x_1444_; 
v___x_1444_ = l_Lean_instInhabitedExpr;
if (lean_obj_tag(v_c_1437_) == 0)
{
lean_object* v_key_1445_; lean_object* v_child_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; uint8_t v___x_1449_; 
v_key_1445_ = lean_ctor_get(v_c_1437_, 0);
lean_inc(v_key_1445_);
v_child_1446_ = lean_ctor_get(v_c_1437_, 1);
lean_inc_ref(v_child_1446_);
lean_dec_ref_known(v_c_1437_, 2);
v___x_1447_ = lean_array_get_size(v_todo_1436_);
v___x_1448_ = lean_unsigned_to_nat(0u);
v___x_1449_ = lean_nat_dec_eq(v___x_1447_, v___x_1448_);
if (v___x_1449_ == 0)
{
lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v_e_1452_; lean_object* v_todo_1453_; uint8_t v___x_1454_; lean_object* v___x_1455_; 
v___x_1450_ = lean_unsigned_to_nat(1u);
v___x_1451_ = lean_nat_sub(v___x_1447_, v___x_1450_);
v_e_1452_ = lean_array_get(v___x_1444_, v_todo_1436_, v___x_1451_);
lean_dec(v___x_1451_);
v_todo_1453_ = lean_array_pop(v_todo_1436_);
v___x_1454_ = 1;
v___x_1455_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs(v_e_1452_, v___x_1454_, v___x_1449_, v_a_1439_, v_a_1440_, v_a_1441_, v_a_1442_);
if (lean_obj_tag(v___x_1455_) == 0)
{
lean_object* v_a_1456_; lean_object* v___x_1458_; uint8_t v_isShared_1459_; uint8_t v_isSharedCheck_1471_; 
v_a_1456_ = lean_ctor_get(v___x_1455_, 0);
v_isSharedCheck_1471_ = !lean_is_exclusive(v___x_1455_);
if (v_isSharedCheck_1471_ == 0)
{
v___x_1458_ = v___x_1455_;
v_isShared_1459_ = v_isSharedCheck_1471_;
goto v_resetjp_1457_;
}
else
{
lean_inc(v_a_1456_);
lean_dec(v___x_1455_);
v___x_1458_ = lean_box(0);
v_isShared_1459_ = v_isSharedCheck_1471_;
goto v_resetjp_1457_;
}
v_resetjp_1457_:
{
lean_object* v_fst_1460_; lean_object* v_snd_1461_; lean_object* v___x_1462_; uint8_t v___x_1463_; 
v_fst_1460_ = lean_ctor_get(v_a_1456_, 0);
lean_inc(v_fst_1460_);
v_snd_1461_ = lean_ctor_get(v_a_1456_, 1);
lean_inc(v_snd_1461_);
lean_dec(v_a_1456_);
v___x_1462_ = lean_box(0);
v___x_1463_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_key_1445_, v___x_1462_);
if (v___x_1463_ == 0)
{
uint8_t v___x_1464_; 
v___x_1464_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_key_1445_, v_fst_1460_);
lean_dec(v_fst_1460_);
lean_dec(v_key_1445_);
if (v___x_1464_ == 0)
{
lean_object* v___x_1466_; 
lean_dec(v_snd_1461_);
lean_dec_ref(v_todo_1453_);
lean_dec_ref(v_child_1446_);
if (v_isShared_1459_ == 0)
{
lean_ctor_set(v___x_1458_, 0, v_result_1438_);
v___x_1466_ = v___x_1458_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1467_; 
v_reuseFailAlloc_1467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1467_, 0, v_result_1438_);
v___x_1466_ = v_reuseFailAlloc_1467_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
return v___x_1466_;
}
}
else
{
lean_object* v___x_1468_; 
lean_del_object(v___x_1458_);
v___x_1468_ = l_Array_append___redArg(v_todo_1453_, v_snd_1461_);
lean_dec(v_snd_1461_);
v_todo_1436_ = v___x_1468_;
v_c_1437_ = v_child_1446_;
goto _start;
}
}
else
{
lean_dec(v_snd_1461_);
lean_dec(v_fst_1460_);
lean_del_object(v___x_1458_);
lean_dec(v_key_1445_);
v_todo_1436_ = v_todo_1453_;
v_c_1437_ = v_child_1446_;
goto _start;
}
}
}
else
{
lean_object* v_a_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1479_; 
lean_dec_ref(v_todo_1453_);
lean_dec_ref(v_child_1446_);
lean_dec(v_key_1445_);
lean_dec_ref(v_result_1438_);
v_a_1472_ = lean_ctor_get(v___x_1455_, 0);
v_isSharedCheck_1479_ = !lean_is_exclusive(v___x_1455_);
if (v_isSharedCheck_1479_ == 0)
{
v___x_1474_ = v___x_1455_;
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_a_1472_);
lean_dec(v___x_1455_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
lean_object* v___x_1477_; 
if (v_isShared_1475_ == 0)
{
v___x_1477_ = v___x_1474_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v_a_1472_);
v___x_1477_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
return v___x_1477_;
}
}
}
}
else
{
lean_object* v___x_1480_; 
lean_dec_ref(v_child_1446_);
lean_dec(v_key_1445_);
lean_dec_ref(v_todo_1436_);
v___x_1480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1480_, 0, v_result_1438_);
return v___x_1480_;
}
}
else
{
lean_object* v_vs_1481_; lean_object* v_children_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; uint8_t v___x_1485_; 
v_vs_1481_ = lean_ctor_get(v_c_1437_, 0);
lean_inc_ref(v_vs_1481_);
v_children_1482_ = lean_ctor_get(v_c_1437_, 1);
lean_inc_ref(v_children_1482_);
lean_dec_ref_known(v_c_1437_, 2);
v___x_1483_ = lean_array_get_size(v_todo_1436_);
v___x_1484_ = lean_unsigned_to_nat(0u);
v___x_1485_ = lean_nat_dec_eq(v___x_1483_, v___x_1484_);
if (v___x_1485_ == 0)
{
lean_object* v___x_1486_; uint8_t v___x_1487_; 
lean_dec_ref(v_vs_1481_);
v___x_1486_ = lean_array_get_size(v_children_1482_);
v___x_1487_ = lean_nat_dec_eq(v___x_1486_, v___x_1484_);
if (v___x_1487_ == 0)
{
lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v_e_1492_; lean_object* v_todo_1493_; lean_object* v_first_1494_; uint8_t v___x_1495_; lean_object* v___x_1496_; 
v___x_1488_ = lean_box(0);
v___x_1489_ = lean_obj_once(&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___closed__1, &l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___closed__1_once, _init_l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___closed__1);
v___x_1490_ = lean_unsigned_to_nat(1u);
v___x_1491_ = lean_nat_sub(v___x_1483_, v___x_1490_);
v_e_1492_ = lean_array_get(v___x_1444_, v_todo_1436_, v___x_1491_);
lean_dec(v___x_1491_);
v_todo_1493_ = lean_array_pop(v_todo_1436_);
v_first_1494_ = lean_array_get_borrowed(v___x_1489_, v_children_1482_, v___x_1484_);
v___x_1495_ = 1;
v___x_1496_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs(v_e_1492_, v___x_1495_, v___x_1487_, v_a_1439_, v_a_1440_, v_a_1441_, v_a_1442_);
if (lean_obj_tag(v___x_1496_) == 0)
{
lean_object* v_a_1497_; lean_object* v___x_1499_; uint8_t v_isShared_1500_; uint8_t v_isSharedCheck_1530_; 
v_a_1497_ = lean_ctor_get(v___x_1496_, 0);
v_isSharedCheck_1530_ = !lean_is_exclusive(v___x_1496_);
if (v_isSharedCheck_1530_ == 0)
{
v___x_1499_ = v___x_1496_;
v_isShared_1500_ = v_isSharedCheck_1530_;
goto v_resetjp_1498_;
}
else
{
lean_inc(v_a_1497_);
lean_dec(v___x_1496_);
v___x_1499_ = lean_box(0);
v_isShared_1500_ = v_isSharedCheck_1530_;
goto v_resetjp_1498_;
}
v_resetjp_1498_:
{
lean_object* v_fst_1501_; lean_object* v_snd_1502_; lean_object* v___x_1504_; uint8_t v_isShared_1505_; uint8_t v_isSharedCheck_1529_; 
v_fst_1501_ = lean_ctor_get(v_a_1497_, 0);
v_snd_1502_ = lean_ctor_get(v_a_1497_, 1);
v_isSharedCheck_1529_ = !lean_is_exclusive(v_a_1497_);
if (v_isSharedCheck_1529_ == 0)
{
v___x_1504_ = v_a_1497_;
v_isShared_1505_ = v_isSharedCheck_1529_;
goto v_resetjp_1503_;
}
else
{
lean_inc(v_snd_1502_);
lean_inc(v_fst_1501_);
lean_dec(v_a_1497_);
v___x_1504_ = lean_box(0);
v_isShared_1505_ = v_isSharedCheck_1529_;
goto v_resetjp_1503_;
}
v_resetjp_1503_:
{
lean_object* v___y_1507_; lean_object* v_a_1508_; lean_object* v_fst_1521_; lean_object* v_snd_1522_; uint8_t v___x_1523_; 
v_fst_1521_ = lean_ctor_get(v_first_1494_, 0);
v_snd_1522_ = lean_ctor_get(v_first_1494_, 1);
v___x_1523_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_fst_1521_, v___x_1488_);
if (v___x_1523_ == 0)
{
lean_object* v___x_1525_; 
lean_inc_ref(v_result_1438_);
if (v_isShared_1500_ == 0)
{
lean_ctor_set(v___x_1499_, 0, v_result_1438_);
v___x_1525_ = v___x_1499_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v_result_1438_);
v___x_1525_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
v___y_1507_ = v___x_1525_;
v_a_1508_ = v_result_1438_;
goto v___jp_1506_;
}
}
else
{
lean_object* v___x_1527_; 
lean_del_object(v___x_1499_);
lean_inc(v_snd_1522_);
lean_inc_ref(v_todo_1493_);
v___x_1527_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg(v_todo_1493_, v_snd_1522_, v_result_1438_, v_a_1439_, v_a_1440_, v_a_1441_, v_a_1442_);
if (lean_obj_tag(v___x_1527_) == 0)
{
lean_object* v_a_1528_; 
v_a_1528_ = lean_ctor_get(v___x_1527_, 0);
lean_inc(v_a_1528_);
v___y_1507_ = v___x_1527_;
v_a_1508_ = v_a_1528_;
goto v___jp_1506_;
}
else
{
lean_del_object(v___x_1504_);
lean_dec(v_snd_1502_);
lean_dec(v_fst_1501_);
lean_dec_ref(v_todo_1493_);
lean_dec_ref(v_children_1482_);
return v___x_1527_;
}
}
v___jp_1506_:
{
if (lean_obj_tag(v_fst_1501_) == 0)
{
lean_dec_ref(v_a_1508_);
lean_del_object(v___x_1504_);
lean_dec(v_snd_1502_);
lean_dec_ref(v_todo_1493_);
lean_dec_ref(v_children_1482_);
return v___y_1507_;
}
else
{
uint8_t v___x_1509_; 
v___x_1509_ = lean_nat_dec_lt(v___x_1484_, v___x_1486_);
if (v___x_1509_ == 0)
{
lean_dec_ref(v_a_1508_);
lean_del_object(v___x_1504_);
lean_dec(v_snd_1502_);
lean_dec(v_fst_1501_);
lean_dec_ref(v_todo_1493_);
lean_dec_ref(v_children_1482_);
return v___y_1507_;
}
else
{
lean_object* v___x_1510_; uint8_t v___x_1511_; 
v___x_1510_ = lean_nat_sub(v___x_1486_, v___x_1490_);
v___x_1511_ = lean_nat_dec_le(v___x_1484_, v___x_1510_);
if (v___x_1511_ == 0)
{
lean_dec(v___x_1510_);
lean_dec_ref(v_a_1508_);
lean_del_object(v___x_1504_);
lean_dec(v_snd_1502_);
lean_dec(v_fst_1501_);
lean_dec_ref(v_todo_1493_);
lean_dec_ref(v_children_1482_);
return v___y_1507_;
}
else
{
lean_object* v___x_1512_; lean_object* v___x_1514_; 
v___x_1512_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__1));
if (v_isShared_1505_ == 0)
{
lean_ctor_set(v___x_1504_, 1, v___x_1512_);
v___x_1514_ = v___x_1504_;
goto v_reusejp_1513_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v_fst_1501_);
lean_ctor_set(v_reuseFailAlloc_1520_, 1, v___x_1512_);
v___x_1514_ = v_reuseFailAlloc_1520_;
goto v_reusejp_1513_;
}
v_reusejp_1513_:
{
lean_object* v___x_1515_; 
v___x_1515_ = l_Array_binSearchAux___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop_spec__0___redArg(v_children_1482_, v___x_1514_, v___x_1484_, v___x_1510_);
lean_dec_ref(v___x_1514_);
lean_dec_ref(v_children_1482_);
if (lean_obj_tag(v___x_1515_) == 0)
{
lean_dec_ref(v_a_1508_);
lean_dec(v_snd_1502_);
lean_dec_ref(v_todo_1493_);
return v___y_1507_;
}
else
{
lean_object* v_val_1516_; lean_object* v_snd_1517_; lean_object* v___x_1518_; 
lean_dec_ref(v___y_1507_);
v_val_1516_ = lean_ctor_get(v___x_1515_, 0);
lean_inc(v_val_1516_);
lean_dec_ref_known(v___x_1515_, 1);
v_snd_1517_ = lean_ctor_get(v_val_1516_, 1);
lean_inc(v_snd_1517_);
lean_dec(v_val_1516_);
v___x_1518_ = l_Array_append___redArg(v_todo_1493_, v_snd_1502_);
lean_dec(v_snd_1502_);
v_todo_1436_ = v___x_1518_;
v_c_1437_ = v_snd_1517_;
v_result_1438_ = v_a_1508_;
goto _start;
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
lean_object* v_a_1531_; lean_object* v___x_1533_; uint8_t v_isShared_1534_; uint8_t v_isSharedCheck_1538_; 
lean_dec_ref(v_todo_1493_);
lean_dec_ref(v_children_1482_);
lean_dec_ref(v_result_1438_);
v_a_1531_ = lean_ctor_get(v___x_1496_, 0);
v_isSharedCheck_1538_ = !lean_is_exclusive(v___x_1496_);
if (v_isSharedCheck_1538_ == 0)
{
v___x_1533_ = v___x_1496_;
v_isShared_1534_ = v_isSharedCheck_1538_;
goto v_resetjp_1532_;
}
else
{
lean_inc(v_a_1531_);
lean_dec(v___x_1496_);
v___x_1533_ = lean_box(0);
v_isShared_1534_ = v_isSharedCheck_1538_;
goto v_resetjp_1532_;
}
v_resetjp_1532_:
{
lean_object* v___x_1536_; 
if (v_isShared_1534_ == 0)
{
v___x_1536_ = v___x_1533_;
goto v_reusejp_1535_;
}
else
{
lean_object* v_reuseFailAlloc_1537_; 
v_reuseFailAlloc_1537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1537_, 0, v_a_1531_);
v___x_1536_ = v_reuseFailAlloc_1537_;
goto v_reusejp_1535_;
}
v_reusejp_1535_:
{
return v___x_1536_;
}
}
}
}
else
{
lean_object* v___x_1539_; 
lean_dec_ref(v_children_1482_);
lean_dec_ref(v_todo_1436_);
v___x_1539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1539_, 0, v_result_1438_);
return v___x_1539_;
}
}
else
{
lean_object* v___x_1540_; lean_object* v___x_1541_; 
lean_dec_ref(v_children_1482_);
lean_dec_ref(v_todo_1436_);
v___x_1540_ = l_Array_append___redArg(v_result_1438_, v_vs_1481_);
lean_dec_ref(v_vs_1481_);
v___x_1541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1541_, 0, v___x_1540_);
return v___x_1541_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___boxed(lean_object* v_todo_1542_, lean_object* v_c_1543_, lean_object* v_result_1544_, lean_object* v_a_1545_, lean_object* v_a_1546_, lean_object* v_a_1547_, lean_object* v_a_1548_, lean_object* v_a_1549_){
_start:
{
lean_object* v_res_1550_; 
v_res_1550_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg(v_todo_1542_, v_c_1543_, v_result_1544_, v_a_1545_, v_a_1546_, v_a_1547_, v_a_1548_);
lean_dec(v_a_1548_);
lean_dec_ref(v_a_1547_);
lean_dec(v_a_1546_);
lean_dec_ref(v_a_1545_);
return v_res_1550_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop(lean_object* v_00_u03b1_1551_, lean_object* v_todo_1552_, lean_object* v_c_1553_, lean_object* v_result_1554_, lean_object* v_a_1555_, lean_object* v_a_1556_, lean_object* v_a_1557_, lean_object* v_a_1558_){
_start:
{
lean_object* v___x_1560_; 
v___x_1560_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg(v_todo_1552_, v_c_1553_, v_result_1554_, v_a_1555_, v_a_1556_, v_a_1557_, v_a_1558_);
return v___x_1560_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___boxed(lean_object* v_00_u03b1_1561_, lean_object* v_todo_1562_, lean_object* v_c_1563_, lean_object* v_result_1564_, lean_object* v_a_1565_, lean_object* v_a_1566_, lean_object* v_a_1567_, lean_object* v_a_1568_, lean_object* v_a_1569_){
_start:
{
lean_object* v_res_1570_; 
v_res_1570_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop(v_00_u03b1_1561_, v_todo_1562_, v_c_1563_, v_result_1564_, v_a_1565_, v_a_1566_, v_a_1567_, v_a_1568_);
lean_dec(v_a_1568_);
lean_dec_ref(v_a_1567_);
lean_dec(v_a_1566_);
lean_dec_ref(v_a_1565_);
return v_res_1570_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop_spec__0(lean_object* v_00_u03b1_1571_, lean_object* v_as_1572_, lean_object* v_k_1573_, lean_object* v_x_1574_, lean_object* v_x_1575_, lean_object* v_x_1576_){
_start:
{
lean_object* v___x_1577_; 
v___x_1577_ = l_Array_binSearchAux___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop_spec__0___redArg(v_as_1572_, v_k_1573_, v_x_1574_, v_x_1575_);
return v___x_1577_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop_spec__0___boxed(lean_object* v_00_u03b1_1578_, lean_object* v_as_1579_, lean_object* v_k_1580_, lean_object* v_x_1581_, lean_object* v_x_1582_, lean_object* v_x_1583_){
_start:
{
lean_object* v_res_1584_; 
v_res_1584_ = l_Array_binSearchAux___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop_spec__0(v_00_u03b1_1578_, v_as_1579_, v_k_1580_, v_x_1581_, v_x_1582_, v_x_1583_);
lean_dec_ref(v_k_1580_);
lean_dec_ref(v_as_1579_);
return v_res_1584_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchRoot___redArg(lean_object* v_d_1585_, lean_object* v_k_1586_, lean_object* v_args_1587_, lean_object* v_result_1588_, lean_object* v_a_1589_, lean_object* v_a_1590_, lean_object* v_a_1591_, lean_object* v_a_1592_){
_start:
{
lean_object* v___x_1594_; 
v___x_1594_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0___redArg(v_d_1585_, v_k_1586_);
if (lean_obj_tag(v___x_1594_) == 0)
{
lean_object* v___x_1595_; 
lean_dec_ref(v_args_1587_);
v___x_1595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1595_, 0, v_result_1588_);
return v___x_1595_;
}
else
{
lean_object* v_val_1596_; lean_object* v___x_1597_; 
v_val_1596_ = lean_ctor_get(v___x_1594_, 0);
lean_inc(v_val_1596_);
lean_dec_ref_known(v___x_1594_, 1);
v___x_1597_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg(v_args_1587_, v_val_1596_, v_result_1588_, v_a_1589_, v_a_1590_, v_a_1591_, v_a_1592_);
return v___x_1597_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchRoot___redArg___boxed(lean_object* v_d_1598_, lean_object* v_k_1599_, lean_object* v_args_1600_, lean_object* v_result_1601_, lean_object* v_a_1602_, lean_object* v_a_1603_, lean_object* v_a_1604_, lean_object* v_a_1605_, lean_object* v_a_1606_){
_start:
{
lean_object* v_res_1607_; 
v_res_1607_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchRoot___redArg(v_d_1598_, v_k_1599_, v_args_1600_, v_result_1601_, v_a_1602_, v_a_1603_, v_a_1604_, v_a_1605_);
lean_dec(v_a_1605_);
lean_dec_ref(v_a_1604_);
lean_dec(v_a_1603_);
lean_dec_ref(v_a_1602_);
lean_dec(v_k_1599_);
lean_dec_ref(v_d_1598_);
return v_res_1607_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchRoot(lean_object* v_00_u03b1_1608_, lean_object* v_d_1609_, lean_object* v_k_1610_, lean_object* v_args_1611_, lean_object* v_result_1612_, lean_object* v_a_1613_, lean_object* v_a_1614_, lean_object* v_a_1615_, lean_object* v_a_1616_){
_start:
{
lean_object* v___x_1618_; 
v___x_1618_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchRoot___redArg(v_d_1609_, v_k_1610_, v_args_1611_, v_result_1612_, v_a_1613_, v_a_1614_, v_a_1615_, v_a_1616_);
return v___x_1618_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchRoot___boxed(lean_object* v_00_u03b1_1619_, lean_object* v_d_1620_, lean_object* v_k_1621_, lean_object* v_args_1622_, lean_object* v_result_1623_, lean_object* v_a_1624_, lean_object* v_a_1625_, lean_object* v_a_1626_, lean_object* v_a_1627_, lean_object* v_a_1628_){
_start:
{
lean_object* v_res_1629_; 
v_res_1629_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchRoot(v_00_u03b1_1619_, v_d_1620_, v_k_1621_, v_args_1622_, v_result_1623_, v_a_1624_, v_a_1625_, v_a_1626_, v_a_1627_);
lean_dec(v_a_1627_);
lean_dec_ref(v_a_1626_);
lean_dec(v_a_1625_);
lean_dec_ref(v_a_1624_);
lean_dec(v_k_1621_);
lean_dec_ref(v_d_1620_);
return v_res_1629_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg___lam__0(lean_object* v_e_1630_, uint8_t v___x_1631_, lean_object* v_result_1632_, lean_object* v_d_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_){
_start:
{
lean_object* v___x_1639_; 
v___x_1639_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs(v_e_1630_, v___x_1631_, v___x_1631_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_);
if (lean_obj_tag(v___x_1639_) == 0)
{
lean_object* v_a_1640_; lean_object* v___x_1642_; uint8_t v_isShared_1643_; uint8_t v_isSharedCheck_1683_; 
v_a_1640_ = lean_ctor_get(v___x_1639_, 0);
v_isSharedCheck_1683_ = !lean_is_exclusive(v___x_1639_);
if (v_isSharedCheck_1683_ == 0)
{
v___x_1642_ = v___x_1639_;
v_isShared_1643_ = v_isSharedCheck_1683_;
goto v_resetjp_1641_;
}
else
{
lean_inc(v_a_1640_);
lean_dec(v___x_1639_);
v___x_1642_ = lean_box(0);
v_isShared_1643_ = v_isSharedCheck_1683_;
goto v_resetjp_1641_;
}
v_resetjp_1641_:
{
lean_object* v_fst_1644_; 
v_fst_1644_ = lean_ctor_get(v_a_1640_, 0);
lean_inc(v_fst_1644_);
if (lean_obj_tag(v_fst_1644_) == 0)
{
lean_object* v___x_1646_; uint8_t v_isShared_1647_; uint8_t v_isSharedCheck_1654_; 
v_isSharedCheck_1654_ = !lean_is_exclusive(v_a_1640_);
if (v_isSharedCheck_1654_ == 0)
{
lean_object* v_unused_1655_; lean_object* v_unused_1656_; 
v_unused_1655_ = lean_ctor_get(v_a_1640_, 1);
lean_dec(v_unused_1655_);
v_unused_1656_ = lean_ctor_get(v_a_1640_, 0);
lean_dec(v_unused_1656_);
v___x_1646_ = v_a_1640_;
v_isShared_1647_ = v_isSharedCheck_1654_;
goto v_resetjp_1645_;
}
else
{
lean_dec(v_a_1640_);
v___x_1646_ = lean_box(0);
v_isShared_1647_ = v_isSharedCheck_1654_;
goto v_resetjp_1645_;
}
v_resetjp_1645_:
{
lean_object* v___x_1649_; 
if (v_isShared_1647_ == 0)
{
lean_ctor_set(v___x_1646_, 1, v_result_1632_);
v___x_1649_ = v___x_1646_;
goto v_reusejp_1648_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v_fst_1644_);
lean_ctor_set(v_reuseFailAlloc_1653_, 1, v_result_1632_);
v___x_1649_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1648_;
}
v_reusejp_1648_:
{
lean_object* v___x_1651_; 
if (v_isShared_1643_ == 0)
{
lean_ctor_set(v___x_1642_, 0, v___x_1649_);
v___x_1651_ = v___x_1642_;
goto v_reusejp_1650_;
}
else
{
lean_object* v_reuseFailAlloc_1652_; 
v_reuseFailAlloc_1652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1652_, 0, v___x_1649_);
v___x_1651_ = v_reuseFailAlloc_1652_;
goto v_reusejp_1650_;
}
v_reusejp_1650_:
{
return v___x_1651_;
}
}
}
}
else
{
lean_object* v_snd_1657_; lean_object* v___x_1659_; uint8_t v_isShared_1660_; uint8_t v_isSharedCheck_1681_; 
lean_del_object(v___x_1642_);
v_snd_1657_ = lean_ctor_get(v_a_1640_, 1);
v_isSharedCheck_1681_ = !lean_is_exclusive(v_a_1640_);
if (v_isSharedCheck_1681_ == 0)
{
lean_object* v_unused_1682_; 
v_unused_1682_ = lean_ctor_get(v_a_1640_, 0);
lean_dec(v_unused_1682_);
v___x_1659_ = v_a_1640_;
v_isShared_1660_ = v_isSharedCheck_1681_;
goto v_resetjp_1658_;
}
else
{
lean_inc(v_snd_1657_);
lean_dec(v_a_1640_);
v___x_1659_ = lean_box(0);
v_isShared_1660_ = v_isSharedCheck_1681_;
goto v_resetjp_1658_;
}
v_resetjp_1658_:
{
lean_object* v___x_1661_; 
v___x_1661_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchRoot___redArg(v_d_1633_, v_fst_1644_, v_snd_1657_, v_result_1632_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_);
if (lean_obj_tag(v___x_1661_) == 0)
{
lean_object* v_a_1662_; lean_object* v___x_1664_; uint8_t v_isShared_1665_; uint8_t v_isSharedCheck_1672_; 
v_a_1662_ = lean_ctor_get(v___x_1661_, 0);
v_isSharedCheck_1672_ = !lean_is_exclusive(v___x_1661_);
if (v_isSharedCheck_1672_ == 0)
{
v___x_1664_ = v___x_1661_;
v_isShared_1665_ = v_isSharedCheck_1672_;
goto v_resetjp_1663_;
}
else
{
lean_inc(v_a_1662_);
lean_dec(v___x_1661_);
v___x_1664_ = lean_box(0);
v_isShared_1665_ = v_isSharedCheck_1672_;
goto v_resetjp_1663_;
}
v_resetjp_1663_:
{
lean_object* v___x_1667_; 
if (v_isShared_1660_ == 0)
{
lean_ctor_set(v___x_1659_, 1, v_a_1662_);
v___x_1667_ = v___x_1659_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1671_; 
v_reuseFailAlloc_1671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1671_, 0, v_fst_1644_);
lean_ctor_set(v_reuseFailAlloc_1671_, 1, v_a_1662_);
v___x_1667_ = v_reuseFailAlloc_1671_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
lean_object* v___x_1669_; 
if (v_isShared_1665_ == 0)
{
lean_ctor_set(v___x_1664_, 0, v___x_1667_);
v___x_1669_ = v___x_1664_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v___x_1667_);
v___x_1669_ = v_reuseFailAlloc_1670_;
goto v_reusejp_1668_;
}
v_reusejp_1668_:
{
return v___x_1669_;
}
}
}
}
else
{
lean_object* v_a_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1680_; 
lean_del_object(v___x_1659_);
lean_dec(v_fst_1644_);
v_a_1673_ = lean_ctor_get(v___x_1661_, 0);
v_isSharedCheck_1680_ = !lean_is_exclusive(v___x_1661_);
if (v_isSharedCheck_1680_ == 0)
{
v___x_1675_ = v___x_1661_;
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_a_1673_);
lean_dec(v___x_1661_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v___x_1678_; 
if (v_isShared_1676_ == 0)
{
v___x_1678_ = v___x_1675_;
goto v_reusejp_1677_;
}
else
{
lean_object* v_reuseFailAlloc_1679_; 
v_reuseFailAlloc_1679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1679_, 0, v_a_1673_);
v___x_1678_ = v_reuseFailAlloc_1679_;
goto v_reusejp_1677_;
}
v_reusejp_1677_:
{
return v___x_1678_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1684_; lean_object* v___x_1686_; uint8_t v_isShared_1687_; uint8_t v_isSharedCheck_1691_; 
lean_dec_ref(v_result_1632_);
v_a_1684_ = lean_ctor_get(v___x_1639_, 0);
v_isSharedCheck_1691_ = !lean_is_exclusive(v___x_1639_);
if (v_isSharedCheck_1691_ == 0)
{
v___x_1686_ = v___x_1639_;
v_isShared_1687_ = v_isSharedCheck_1691_;
goto v_resetjp_1685_;
}
else
{
lean_inc(v_a_1684_);
lean_dec(v___x_1639_);
v___x_1686_ = lean_box(0);
v_isShared_1687_ = v_isSharedCheck_1691_;
goto v_resetjp_1685_;
}
v_resetjp_1685_:
{
lean_object* v___x_1689_; 
if (v_isShared_1687_ == 0)
{
v___x_1689_ = v___x_1686_;
goto v_reusejp_1688_;
}
else
{
lean_object* v_reuseFailAlloc_1690_; 
v_reuseFailAlloc_1690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1690_, 0, v_a_1684_);
v___x_1689_ = v_reuseFailAlloc_1690_;
goto v_reusejp_1688_;
}
v_reusejp_1688_:
{
return v___x_1689_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg___lam__0___boxed(lean_object* v_e_1692_, lean_object* v___x_1693_, lean_object* v_result_1694_, lean_object* v_d_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_){
_start:
{
uint8_t v___x_802__boxed_1701_; lean_object* v_res_1702_; 
v___x_802__boxed_1701_ = lean_unbox(v___x_1693_);
v_res_1702_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg___lam__0(v_e_1692_, v___x_802__boxed_1701_, v_result_1694_, v_d_1695_, v___y_1696_, v___y_1697_, v___y_1698_, v___y_1699_);
lean_dec(v___y_1699_);
lean_dec_ref(v___y_1698_);
lean_dec(v___y_1697_);
lean_dec_ref(v___y_1696_);
lean_dec_ref(v_d_1695_);
return v_res_1702_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg(lean_object* v_d_1703_, lean_object* v_e_1704_, lean_object* v_a_1705_, lean_object* v_a_1706_, lean_object* v_a_1707_, lean_object* v_a_1708_){
_start:
{
lean_object* v___y_1711_; lean_object* v___x_1728_; uint8_t v_transparency_1729_; lean_object* v_result_1730_; uint8_t v___x_1731_; uint8_t v___x_1732_; uint8_t v___x_1733_; 
v___x_1728_ = l_Lean_Meta_Context_config(v_a_1705_);
v_transparency_1729_ = lean_ctor_get_uint8(v___x_1728_, 9);
lean_dec_ref(v___x_1728_);
v_result_1730_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg(v_d_1703_);
v___x_1731_ = 1;
v___x_1732_ = 2;
v___x_1733_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1729_, v___x_1732_);
if (v___x_1733_ == 0)
{
lean_object* v_keyedConfig_1734_; uint8_t v_trackZetaDelta_1735_; lean_object* v_zetaDeltaSet_1736_; lean_object* v_lctx_1737_; lean_object* v_localInstances_1738_; lean_object* v_defEqCtx_x3f_1739_; lean_object* v_synthPendingDepth_1740_; lean_object* v_customCanUnfoldPredicate_x3f_1741_; uint8_t v_univApprox_1742_; uint8_t v_inTypeClassResolution_1743_; uint8_t v_cacheInferType_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; 
v_keyedConfig_1734_ = lean_ctor_get(v_a_1705_, 0);
v_trackZetaDelta_1735_ = lean_ctor_get_uint8(v_a_1705_, sizeof(void*)*7);
v_zetaDeltaSet_1736_ = lean_ctor_get(v_a_1705_, 1);
v_lctx_1737_ = lean_ctor_get(v_a_1705_, 2);
v_localInstances_1738_ = lean_ctor_get(v_a_1705_, 3);
v_defEqCtx_x3f_1739_ = lean_ctor_get(v_a_1705_, 4);
v_synthPendingDepth_1740_ = lean_ctor_get(v_a_1705_, 5);
v_customCanUnfoldPredicate_x3f_1741_ = lean_ctor_get(v_a_1705_, 6);
v_univApprox_1742_ = lean_ctor_get_uint8(v_a_1705_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1743_ = lean_ctor_get_uint8(v_a_1705_, sizeof(void*)*7 + 2);
v_cacheInferType_1744_ = lean_ctor_get_uint8(v_a_1705_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_1734_);
v___x_1745_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1732_, v_keyedConfig_1734_);
lean_inc(v_customCanUnfoldPredicate_x3f_1741_);
lean_inc(v_synthPendingDepth_1740_);
lean_inc(v_defEqCtx_x3f_1739_);
lean_inc_ref(v_localInstances_1738_);
lean_inc_ref(v_lctx_1737_);
lean_inc(v_zetaDeltaSet_1736_);
v___x_1746_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1746_, 0, v___x_1745_);
lean_ctor_set(v___x_1746_, 1, v_zetaDeltaSet_1736_);
lean_ctor_set(v___x_1746_, 2, v_lctx_1737_);
lean_ctor_set(v___x_1746_, 3, v_localInstances_1738_);
lean_ctor_set(v___x_1746_, 4, v_defEqCtx_x3f_1739_);
lean_ctor_set(v___x_1746_, 5, v_synthPendingDepth_1740_);
lean_ctor_set(v___x_1746_, 6, v_customCanUnfoldPredicate_x3f_1741_);
lean_ctor_set_uint8(v___x_1746_, sizeof(void*)*7, v_trackZetaDelta_1735_);
lean_ctor_set_uint8(v___x_1746_, sizeof(void*)*7 + 1, v_univApprox_1742_);
lean_ctor_set_uint8(v___x_1746_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1743_);
lean_ctor_set_uint8(v___x_1746_, sizeof(void*)*7 + 3, v_cacheInferType_1744_);
v___x_1747_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg___lam__0(v_e_1704_, v___x_1731_, v_result_1730_, v_d_1703_, v___x_1746_, v_a_1706_, v_a_1707_, v_a_1708_);
lean_dec_ref_known(v___x_1746_, 7);
v___y_1711_ = v___x_1747_;
goto v___jp_1710_;
}
else
{
lean_object* v___x_1748_; 
v___x_1748_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg___lam__0(v_e_1704_, v___x_1731_, v_result_1730_, v_d_1703_, v_a_1705_, v_a_1706_, v_a_1707_, v_a_1708_);
v___y_1711_ = v___x_1748_;
goto v___jp_1710_;
}
v___jp_1710_:
{
if (lean_obj_tag(v___y_1711_) == 0)
{
lean_object* v_a_1712_; lean_object* v___x_1714_; uint8_t v_isShared_1715_; uint8_t v_isSharedCheck_1719_; 
v_a_1712_ = lean_ctor_get(v___y_1711_, 0);
v_isSharedCheck_1719_ = !lean_is_exclusive(v___y_1711_);
if (v_isSharedCheck_1719_ == 0)
{
v___x_1714_ = v___y_1711_;
v_isShared_1715_ = v_isSharedCheck_1719_;
goto v_resetjp_1713_;
}
else
{
lean_inc(v_a_1712_);
lean_dec(v___y_1711_);
v___x_1714_ = lean_box(0);
v_isShared_1715_ = v_isSharedCheck_1719_;
goto v_resetjp_1713_;
}
v_resetjp_1713_:
{
lean_object* v___x_1717_; 
if (v_isShared_1715_ == 0)
{
v___x_1717_ = v___x_1714_;
goto v_reusejp_1716_;
}
else
{
lean_object* v_reuseFailAlloc_1718_; 
v_reuseFailAlloc_1718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1718_, 0, v_a_1712_);
v___x_1717_ = v_reuseFailAlloc_1718_;
goto v_reusejp_1716_;
}
v_reusejp_1716_:
{
return v___x_1717_;
}
}
}
else
{
lean_object* v_a_1720_; lean_object* v___x_1722_; uint8_t v_isShared_1723_; uint8_t v_isSharedCheck_1727_; 
v_a_1720_ = lean_ctor_get(v___y_1711_, 0);
v_isSharedCheck_1727_ = !lean_is_exclusive(v___y_1711_);
if (v_isSharedCheck_1727_ == 0)
{
v___x_1722_ = v___y_1711_;
v_isShared_1723_ = v_isSharedCheck_1727_;
goto v_resetjp_1721_;
}
else
{
lean_inc(v_a_1720_);
lean_dec(v___y_1711_);
v___x_1722_ = lean_box(0);
v_isShared_1723_ = v_isSharedCheck_1727_;
goto v_resetjp_1721_;
}
v_resetjp_1721_:
{
lean_object* v___x_1725_; 
if (v_isShared_1723_ == 0)
{
v___x_1725_ = v___x_1722_;
goto v_reusejp_1724_;
}
else
{
lean_object* v_reuseFailAlloc_1726_; 
v_reuseFailAlloc_1726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1726_, 0, v_a_1720_);
v___x_1725_ = v_reuseFailAlloc_1726_;
goto v_reusejp_1724_;
}
v_reusejp_1724_:
{
return v___x_1725_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg___boxed(lean_object* v_d_1749_, lean_object* v_e_1750_, lean_object* v_a_1751_, lean_object* v_a_1752_, lean_object* v_a_1753_, lean_object* v_a_1754_, lean_object* v_a_1755_){
_start:
{
lean_object* v_res_1756_; 
v_res_1756_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg(v_d_1749_, v_e_1750_, v_a_1751_, v_a_1752_, v_a_1753_, v_a_1754_);
lean_dec(v_a_1754_);
lean_dec_ref(v_a_1753_);
lean_dec(v_a_1752_);
lean_dec_ref(v_a_1751_);
lean_dec_ref(v_d_1749_);
return v_res_1756_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore(lean_object* v_00_u03b1_1757_, lean_object* v_d_1758_, lean_object* v_e_1759_, lean_object* v_a_1760_, lean_object* v_a_1761_, lean_object* v_a_1762_, lean_object* v_a_1763_){
_start:
{
lean_object* v___x_1765_; 
v___x_1765_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg(v_d_1758_, v_e_1759_, v_a_1760_, v_a_1761_, v_a_1762_, v_a_1763_);
return v___x_1765_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___boxed(lean_object* v_00_u03b1_1766_, lean_object* v_d_1767_, lean_object* v_e_1768_, lean_object* v_a_1769_, lean_object* v_a_1770_, lean_object* v_a_1771_, lean_object* v_a_1772_, lean_object* v_a_1773_){
_start:
{
lean_object* v_res_1774_; 
v_res_1774_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore(v_00_u03b1_1766_, v_d_1767_, v_e_1768_, v_a_1769_, v_a_1770_, v_a_1771_, v_a_1772_);
lean_dec(v_a_1772_);
lean_dec_ref(v_a_1771_);
lean_dec(v_a_1770_);
lean_dec_ref(v_a_1769_);
lean_dec_ref(v_d_1767_);
return v_res_1774_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatch___redArg(lean_object* v_d_1775_, lean_object* v_e_1776_, lean_object* v_a_1777_, lean_object* v_a_1778_, lean_object* v_a_1779_, lean_object* v_a_1780_){
_start:
{
lean_object* v___x_1782_; 
v___x_1782_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg(v_d_1775_, v_e_1776_, v_a_1777_, v_a_1778_, v_a_1779_, v_a_1780_);
if (lean_obj_tag(v___x_1782_) == 0)
{
lean_object* v_a_1783_; lean_object* v___x_1785_; uint8_t v_isShared_1786_; uint8_t v_isSharedCheck_1791_; 
v_a_1783_ = lean_ctor_get(v___x_1782_, 0);
v_isSharedCheck_1791_ = !lean_is_exclusive(v___x_1782_);
if (v_isSharedCheck_1791_ == 0)
{
v___x_1785_ = v___x_1782_;
v_isShared_1786_ = v_isSharedCheck_1791_;
goto v_resetjp_1784_;
}
else
{
lean_inc(v_a_1783_);
lean_dec(v___x_1782_);
v___x_1785_ = lean_box(0);
v_isShared_1786_ = v_isSharedCheck_1791_;
goto v_resetjp_1784_;
}
v_resetjp_1784_:
{
lean_object* v_snd_1787_; lean_object* v___x_1789_; 
v_snd_1787_ = lean_ctor_get(v_a_1783_, 1);
lean_inc(v_snd_1787_);
lean_dec(v_a_1783_);
if (v_isShared_1786_ == 0)
{
lean_ctor_set(v___x_1785_, 0, v_snd_1787_);
v___x_1789_ = v___x_1785_;
goto v_reusejp_1788_;
}
else
{
lean_object* v_reuseFailAlloc_1790_; 
v_reuseFailAlloc_1790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1790_, 0, v_snd_1787_);
v___x_1789_ = v_reuseFailAlloc_1790_;
goto v_reusejp_1788_;
}
v_reusejp_1788_:
{
return v___x_1789_;
}
}
}
else
{
lean_object* v_a_1792_; lean_object* v___x_1794_; uint8_t v_isShared_1795_; uint8_t v_isSharedCheck_1799_; 
v_a_1792_ = lean_ctor_get(v___x_1782_, 0);
v_isSharedCheck_1799_ = !lean_is_exclusive(v___x_1782_);
if (v_isSharedCheck_1799_ == 0)
{
v___x_1794_ = v___x_1782_;
v_isShared_1795_ = v_isSharedCheck_1799_;
goto v_resetjp_1793_;
}
else
{
lean_inc(v_a_1792_);
lean_dec(v___x_1782_);
v___x_1794_ = lean_box(0);
v_isShared_1795_ = v_isSharedCheck_1799_;
goto v_resetjp_1793_;
}
v_resetjp_1793_:
{
lean_object* v___x_1797_; 
if (v_isShared_1795_ == 0)
{
v___x_1797_ = v___x_1794_;
goto v_reusejp_1796_;
}
else
{
lean_object* v_reuseFailAlloc_1798_; 
v_reuseFailAlloc_1798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1798_, 0, v_a_1792_);
v___x_1797_ = v_reuseFailAlloc_1798_;
goto v_reusejp_1796_;
}
v_reusejp_1796_:
{
return v___x_1797_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatch___redArg___boxed(lean_object* v_d_1800_, lean_object* v_e_1801_, lean_object* v_a_1802_, lean_object* v_a_1803_, lean_object* v_a_1804_, lean_object* v_a_1805_, lean_object* v_a_1806_){
_start:
{
lean_object* v_res_1807_; 
v_res_1807_ = l_Lean_Meta_DiscrTree_getMatch___redArg(v_d_1800_, v_e_1801_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_);
lean_dec(v_a_1805_);
lean_dec_ref(v_a_1804_);
lean_dec(v_a_1803_);
lean_dec_ref(v_a_1802_);
lean_dec_ref(v_d_1800_);
return v_res_1807_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatch(lean_object* v_00_u03b1_1808_, lean_object* v_d_1809_, lean_object* v_e_1810_, lean_object* v_a_1811_, lean_object* v_a_1812_, lean_object* v_a_1813_, lean_object* v_a_1814_){
_start:
{
lean_object* v___x_1816_; 
v___x_1816_ = l_Lean_Meta_DiscrTree_getMatch___redArg(v_d_1809_, v_e_1810_, v_a_1811_, v_a_1812_, v_a_1813_, v_a_1814_);
return v___x_1816_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatch___boxed(lean_object* v_00_u03b1_1817_, lean_object* v_d_1818_, lean_object* v_e_1819_, lean_object* v_a_1820_, lean_object* v_a_1821_, lean_object* v_a_1822_, lean_object* v_a_1823_, lean_object* v_a_1824_){
_start:
{
lean_object* v_res_1825_; 
v_res_1825_ = l_Lean_Meta_DiscrTree_getMatch(v_00_u03b1_1817_, v_d_1818_, v_e_1819_, v_a_1820_, v_a_1821_, v_a_1822_, v_a_1823_);
lean_dec(v_a_1823_);
lean_dec_ref(v_a_1822_);
lean_dec(v_a_1821_);
lean_dec_ref(v_a_1820_);
lean_dec_ref(v_d_1818_);
return v_res_1825_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_mayMatchPrefix___redArg(lean_object* v_d_1826_, lean_object* v_k_1827_, lean_object* v_a_1828_, lean_object* v_a_1829_, lean_object* v_a_1830_, lean_object* v_a_1831_){
_start:
{
lean_object* v_k_1838_; lean_object* v___y_1839_; lean_object* v___y_1840_; lean_object* v___y_1841_; lean_object* v___y_1842_; 
switch(lean_obj_tag(v_k_1827_))
{
case 4:
{
lean_object* v_a_1855_; lean_object* v_a_1856_; lean_object* v___x_1858_; uint8_t v_isShared_1859_; uint8_t v_isSharedCheck_1867_; 
v_a_1855_ = lean_ctor_get(v_k_1827_, 0);
v_a_1856_ = lean_ctor_get(v_k_1827_, 1);
v_isSharedCheck_1867_ = !lean_is_exclusive(v_k_1827_);
if (v_isSharedCheck_1867_ == 0)
{
v___x_1858_ = v_k_1827_;
v_isShared_1859_ = v_isSharedCheck_1867_;
goto v_resetjp_1857_;
}
else
{
lean_inc(v_a_1856_);
lean_inc(v_a_1855_);
lean_dec(v_k_1827_);
v___x_1858_ = lean_box(0);
v_isShared_1859_ = v_isSharedCheck_1867_;
goto v_resetjp_1857_;
}
v_resetjp_1857_:
{
lean_object* v_zero_1860_; uint8_t v_isZero_1861_; 
v_zero_1860_ = lean_unsigned_to_nat(0u);
v_isZero_1861_ = lean_nat_dec_eq(v_a_1856_, v_zero_1860_);
if (v_isZero_1861_ == 0)
{
lean_object* v_one_1862_; lean_object* v_n_1863_; lean_object* v___x_1865_; 
v_one_1862_ = lean_unsigned_to_nat(1u);
v_n_1863_ = lean_nat_sub(v_a_1856_, v_one_1862_);
lean_dec(v_a_1856_);
if (v_isShared_1859_ == 0)
{
lean_ctor_set(v___x_1858_, 1, v_n_1863_);
v___x_1865_ = v___x_1858_;
goto v_reusejp_1864_;
}
else
{
lean_object* v_reuseFailAlloc_1866_; 
v_reuseFailAlloc_1866_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1866_, 0, v_a_1855_);
lean_ctor_set(v_reuseFailAlloc_1866_, 1, v_n_1863_);
v___x_1865_ = v_reuseFailAlloc_1866_;
goto v_reusejp_1864_;
}
v_reusejp_1864_:
{
v_k_1838_ = v___x_1865_;
v___y_1839_ = v_a_1828_;
v___y_1840_ = v_a_1829_;
v___y_1841_ = v_a_1830_;
v___y_1842_ = v_a_1831_;
goto v___jp_1837_;
}
}
else
{
lean_del_object(v___x_1858_);
lean_dec(v_a_1856_);
lean_dec(v_a_1855_);
goto v___jp_1833_;
}
}
}
case 3:
{
lean_object* v_a_1868_; lean_object* v_a_1869_; lean_object* v___x_1871_; uint8_t v_isShared_1872_; uint8_t v_isSharedCheck_1880_; 
v_a_1868_ = lean_ctor_get(v_k_1827_, 0);
v_a_1869_ = lean_ctor_get(v_k_1827_, 1);
v_isSharedCheck_1880_ = !lean_is_exclusive(v_k_1827_);
if (v_isSharedCheck_1880_ == 0)
{
v___x_1871_ = v_k_1827_;
v_isShared_1872_ = v_isSharedCheck_1880_;
goto v_resetjp_1870_;
}
else
{
lean_inc(v_a_1869_);
lean_inc(v_a_1868_);
lean_dec(v_k_1827_);
v___x_1871_ = lean_box(0);
v_isShared_1872_ = v_isSharedCheck_1880_;
goto v_resetjp_1870_;
}
v_resetjp_1870_:
{
lean_object* v_zero_1873_; uint8_t v_isZero_1874_; 
v_zero_1873_ = lean_unsigned_to_nat(0u);
v_isZero_1874_ = lean_nat_dec_eq(v_a_1869_, v_zero_1873_);
if (v_isZero_1874_ == 0)
{
lean_object* v_one_1875_; lean_object* v_n_1876_; lean_object* v___x_1878_; 
v_one_1875_ = lean_unsigned_to_nat(1u);
v_n_1876_ = lean_nat_sub(v_a_1869_, v_one_1875_);
lean_dec(v_a_1869_);
if (v_isShared_1872_ == 0)
{
lean_ctor_set(v___x_1871_, 1, v_n_1876_);
v___x_1878_ = v___x_1871_;
goto v_reusejp_1877_;
}
else
{
lean_object* v_reuseFailAlloc_1879_; 
v_reuseFailAlloc_1879_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1879_, 0, v_a_1868_);
lean_ctor_set(v_reuseFailAlloc_1879_, 1, v_n_1876_);
v___x_1878_ = v_reuseFailAlloc_1879_;
goto v_reusejp_1877_;
}
v_reusejp_1877_:
{
v_k_1838_ = v___x_1878_;
v___y_1839_ = v_a_1828_;
v___y_1840_ = v_a_1829_;
v___y_1841_ = v_a_1830_;
v___y_1842_ = v_a_1831_;
goto v___jp_1837_;
}
}
else
{
lean_del_object(v___x_1871_);
lean_dec(v_a_1869_);
lean_dec(v_a_1868_);
goto v___jp_1833_;
}
}
}
case 6:
{
lean_object* v_a_1881_; lean_object* v_a_1882_; lean_object* v_a_1883_; lean_object* v___x_1885_; uint8_t v_isShared_1886_; uint8_t v_isSharedCheck_1894_; 
v_a_1881_ = lean_ctor_get(v_k_1827_, 0);
v_a_1882_ = lean_ctor_get(v_k_1827_, 1);
v_a_1883_ = lean_ctor_get(v_k_1827_, 2);
v_isSharedCheck_1894_ = !lean_is_exclusive(v_k_1827_);
if (v_isSharedCheck_1894_ == 0)
{
v___x_1885_ = v_k_1827_;
v_isShared_1886_ = v_isSharedCheck_1894_;
goto v_resetjp_1884_;
}
else
{
lean_inc(v_a_1883_);
lean_inc(v_a_1882_);
lean_inc(v_a_1881_);
lean_dec(v_k_1827_);
v___x_1885_ = lean_box(0);
v_isShared_1886_ = v_isSharedCheck_1894_;
goto v_resetjp_1884_;
}
v_resetjp_1884_:
{
lean_object* v_zero_1887_; uint8_t v_isZero_1888_; 
v_zero_1887_ = lean_unsigned_to_nat(0u);
v_isZero_1888_ = lean_nat_dec_eq(v_a_1883_, v_zero_1887_);
if (v_isZero_1888_ == 0)
{
lean_object* v_one_1889_; lean_object* v_n_1890_; lean_object* v___x_1892_; 
v_one_1889_ = lean_unsigned_to_nat(1u);
v_n_1890_ = lean_nat_sub(v_a_1883_, v_one_1889_);
lean_dec(v_a_1883_);
if (v_isShared_1886_ == 0)
{
lean_ctor_set(v___x_1885_, 2, v_n_1890_);
v___x_1892_ = v___x_1885_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1893_; 
v_reuseFailAlloc_1893_ = lean_alloc_ctor(6, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1893_, 0, v_a_1881_);
lean_ctor_set(v_reuseFailAlloc_1893_, 1, v_a_1882_);
lean_ctor_set(v_reuseFailAlloc_1893_, 2, v_n_1890_);
v___x_1892_ = v_reuseFailAlloc_1893_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
v_k_1838_ = v___x_1892_;
v___y_1839_ = v_a_1828_;
v___y_1840_ = v_a_1829_;
v___y_1841_ = v_a_1830_;
v___y_1842_ = v_a_1831_;
goto v___jp_1837_;
}
}
else
{
lean_del_object(v___x_1885_);
lean_dec(v_a_1883_);
lean_dec(v_a_1882_);
lean_dec(v_a_1881_);
goto v___jp_1833_;
}
}
}
default: 
{
lean_dec(v_k_1827_);
goto v___jp_1833_;
}
}
v___jp_1833_:
{
uint8_t v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; 
v___x_1834_ = 0;
v___x_1835_ = lean_box(v___x_1834_);
v___x_1836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1836_, 0, v___x_1835_);
return v___x_1836_;
}
v___jp_1837_:
{
lean_object* v___x_1843_; 
v___x_1843_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0___redArg(v_d_1826_, v_k_1838_);
if (lean_obj_tag(v___x_1843_) == 0)
{
v_k_1827_ = v_k_1838_;
v_a_1828_ = v___y_1839_;
v_a_1829_ = v___y_1840_;
v_a_1830_ = v___y_1841_;
v_a_1831_ = v___y_1842_;
goto _start;
}
else
{
lean_object* v___x_1846_; uint8_t v_isShared_1847_; uint8_t v_isSharedCheck_1853_; 
lean_dec(v_k_1838_);
v_isSharedCheck_1853_ = !lean_is_exclusive(v___x_1843_);
if (v_isSharedCheck_1853_ == 0)
{
lean_object* v_unused_1854_; 
v_unused_1854_ = lean_ctor_get(v___x_1843_, 0);
lean_dec(v_unused_1854_);
v___x_1846_ = v___x_1843_;
v_isShared_1847_ = v_isSharedCheck_1853_;
goto v_resetjp_1845_;
}
else
{
lean_dec(v___x_1843_);
v___x_1846_ = lean_box(0);
v_isShared_1847_ = v_isSharedCheck_1853_;
goto v_resetjp_1845_;
}
v_resetjp_1845_:
{
uint8_t v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1851_; 
v___x_1848_ = 1;
v___x_1849_ = lean_box(v___x_1848_);
if (v_isShared_1847_ == 0)
{
lean_ctor_set_tag(v___x_1846_, 0);
lean_ctor_set(v___x_1846_, 0, v___x_1849_);
v___x_1851_ = v___x_1846_;
goto v_reusejp_1850_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v___x_1849_);
v___x_1851_ = v_reuseFailAlloc_1852_;
goto v_reusejp_1850_;
}
v_reusejp_1850_:
{
return v___x_1851_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_mayMatchPrefix___redArg___boxed(lean_object* v_d_1895_, lean_object* v_k_1896_, lean_object* v_a_1897_, lean_object* v_a_1898_, lean_object* v_a_1899_, lean_object* v_a_1900_, lean_object* v_a_1901_){
_start:
{
lean_object* v_res_1902_; 
v_res_1902_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_mayMatchPrefix___redArg(v_d_1895_, v_k_1896_, v_a_1897_, v_a_1898_, v_a_1899_, v_a_1900_);
lean_dec(v_a_1900_);
lean_dec_ref(v_a_1899_);
lean_dec(v_a_1898_);
lean_dec_ref(v_a_1897_);
lean_dec_ref(v_d_1895_);
return v_res_1902_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_mayMatchPrefix(lean_object* v_00_u03b1_1903_, lean_object* v_d_1904_, lean_object* v_k_1905_, lean_object* v_a_1906_, lean_object* v_a_1907_, lean_object* v_a_1908_, lean_object* v_a_1909_){
_start:
{
lean_object* v___x_1911_; 
v___x_1911_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_mayMatchPrefix___redArg(v_d_1904_, v_k_1905_, v_a_1906_, v_a_1907_, v_a_1908_, v_a_1909_);
return v___x_1911_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_mayMatchPrefix___boxed(lean_object* v_00_u03b1_1912_, lean_object* v_d_1913_, lean_object* v_k_1914_, lean_object* v_a_1915_, lean_object* v_a_1916_, lean_object* v_a_1917_, lean_object* v_a_1918_, lean_object* v_a_1919_){
_start:
{
lean_object* v_res_1920_; 
v_res_1920_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_mayMatchPrefix(v_00_u03b1_1912_, v_d_1913_, v_k_1914_, v_a_1915_, v_a_1916_, v_a_1917_, v_a_1918_);
lean_dec(v_a_1918_);
lean_dec_ref(v_a_1917_);
lean_dec(v_a_1916_);
lean_dec_ref(v_a_1915_);
lean_dec_ref(v_d_1913_);
return v_res_1920_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go_spec__0___redArg(lean_object* v_numExtra_1921_, size_t v_sz_1922_, size_t v_i_1923_, lean_object* v_bs_1924_){
_start:
{
uint8_t v___x_1925_; 
v___x_1925_ = lean_usize_dec_lt(v_i_1923_, v_sz_1922_);
if (v___x_1925_ == 0)
{
lean_dec(v_numExtra_1921_);
return v_bs_1924_;
}
else
{
lean_object* v_v_1926_; lean_object* v___x_1927_; lean_object* v_bs_x27_1928_; lean_object* v___x_1929_; size_t v___x_1930_; size_t v___x_1931_; lean_object* v___x_1932_; 
v_v_1926_ = lean_array_uget(v_bs_1924_, v_i_1923_);
v___x_1927_ = lean_unsigned_to_nat(0u);
v_bs_x27_1928_ = lean_array_uset(v_bs_1924_, v_i_1923_, v___x_1927_);
lean_inc(v_numExtra_1921_);
v___x_1929_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1929_, 0, v_v_1926_);
lean_ctor_set(v___x_1929_, 1, v_numExtra_1921_);
v___x_1930_ = ((size_t)1ULL);
v___x_1931_ = lean_usize_add(v_i_1923_, v___x_1930_);
v___x_1932_ = lean_array_uset(v_bs_x27_1928_, v_i_1923_, v___x_1929_);
v_i_1923_ = v___x_1931_;
v_bs_1924_ = v___x_1932_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go_spec__0___redArg___boxed(lean_object* v_numExtra_1934_, lean_object* v_sz_1935_, lean_object* v_i_1936_, lean_object* v_bs_1937_){
_start:
{
size_t v_sz_boxed_1938_; size_t v_i_boxed_1939_; lean_object* v_res_1940_; 
v_sz_boxed_1938_ = lean_unbox_usize(v_sz_1935_);
lean_dec(v_sz_1935_);
v_i_boxed_1939_ = lean_unbox_usize(v_i_1936_);
lean_dec(v_i_1936_);
v_res_1940_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go_spec__0___redArg(v_numExtra_1934_, v_sz_boxed_1938_, v_i_boxed_1939_, v_bs_1937_);
return v_res_1940_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go___redArg(lean_object* v_d_1941_, lean_object* v_e_1942_, lean_object* v_numExtra_1943_, lean_object* v_result_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_, lean_object* v_a_1947_, lean_object* v_a_1948_){
_start:
{
lean_object* v___x_1950_; 
lean_inc_ref(v_e_1942_);
v___x_1950_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg(v_d_1941_, v_e_1942_, v_a_1945_, v_a_1946_, v_a_1947_, v_a_1948_);
if (lean_obj_tag(v___x_1950_) == 0)
{
lean_object* v_a_1951_; lean_object* v___x_1953_; uint8_t v_isShared_1954_; uint8_t v_isSharedCheck_1968_; 
v_a_1951_ = lean_ctor_get(v___x_1950_, 0);
v_isSharedCheck_1968_ = !lean_is_exclusive(v___x_1950_);
if (v_isSharedCheck_1968_ == 0)
{
v___x_1953_ = v___x_1950_;
v_isShared_1954_ = v_isSharedCheck_1968_;
goto v_resetjp_1952_;
}
else
{
lean_inc(v_a_1951_);
lean_dec(v___x_1950_);
v___x_1953_ = lean_box(0);
v_isShared_1954_ = v_isSharedCheck_1968_;
goto v_resetjp_1952_;
}
v_resetjp_1952_:
{
lean_object* v_snd_1955_; size_t v_sz_1956_; size_t v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; uint8_t v___x_1960_; 
v_snd_1955_ = lean_ctor_get(v_a_1951_, 1);
lean_inc(v_snd_1955_);
lean_dec(v_a_1951_);
v_sz_1956_ = lean_array_size(v_snd_1955_);
v___x_1957_ = ((size_t)0ULL);
lean_inc(v_numExtra_1943_);
v___x_1958_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go_spec__0___redArg(v_numExtra_1943_, v_sz_1956_, v___x_1957_, v_snd_1955_);
v___x_1959_ = l_Array_append___redArg(v_result_1944_, v___x_1958_);
lean_dec_ref(v___x_1958_);
v___x_1960_ = l_Lean_Expr_isApp(v_e_1942_);
if (v___x_1960_ == 0)
{
lean_object* v___x_1962_; 
lean_dec(v_numExtra_1943_);
lean_dec_ref(v_e_1942_);
if (v_isShared_1954_ == 0)
{
lean_ctor_set(v___x_1953_, 0, v___x_1959_);
v___x_1962_ = v___x_1953_;
goto v_reusejp_1961_;
}
else
{
lean_object* v_reuseFailAlloc_1963_; 
v_reuseFailAlloc_1963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1963_, 0, v___x_1959_);
v___x_1962_ = v_reuseFailAlloc_1963_;
goto v_reusejp_1961_;
}
v_reusejp_1961_:
{
return v___x_1962_;
}
}
else
{
lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; 
lean_del_object(v___x_1953_);
v___x_1964_ = l_Lean_Expr_appFn_x21(v_e_1942_);
lean_dec_ref(v_e_1942_);
v___x_1965_ = lean_unsigned_to_nat(1u);
v___x_1966_ = lean_nat_add(v_numExtra_1943_, v___x_1965_);
lean_dec(v_numExtra_1943_);
v_e_1942_ = v___x_1964_;
v_numExtra_1943_ = v___x_1966_;
v_result_1944_ = v___x_1959_;
goto _start;
}
}
}
else
{
lean_object* v_a_1969_; lean_object* v___x_1971_; uint8_t v_isShared_1972_; uint8_t v_isSharedCheck_1976_; 
lean_dec_ref(v_result_1944_);
lean_dec(v_numExtra_1943_);
lean_dec_ref(v_e_1942_);
v_a_1969_ = lean_ctor_get(v___x_1950_, 0);
v_isSharedCheck_1976_ = !lean_is_exclusive(v___x_1950_);
if (v_isSharedCheck_1976_ == 0)
{
v___x_1971_ = v___x_1950_;
v_isShared_1972_ = v_isSharedCheck_1976_;
goto v_resetjp_1970_;
}
else
{
lean_inc(v_a_1969_);
lean_dec(v___x_1950_);
v___x_1971_ = lean_box(0);
v_isShared_1972_ = v_isSharedCheck_1976_;
goto v_resetjp_1970_;
}
v_resetjp_1970_:
{
lean_object* v___x_1974_; 
if (v_isShared_1972_ == 0)
{
v___x_1974_ = v___x_1971_;
goto v_reusejp_1973_;
}
else
{
lean_object* v_reuseFailAlloc_1975_; 
v_reuseFailAlloc_1975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1975_, 0, v_a_1969_);
v___x_1974_ = v_reuseFailAlloc_1975_;
goto v_reusejp_1973_;
}
v_reusejp_1973_:
{
return v___x_1974_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go___redArg___boxed(lean_object* v_d_1977_, lean_object* v_e_1978_, lean_object* v_numExtra_1979_, lean_object* v_result_1980_, lean_object* v_a_1981_, lean_object* v_a_1982_, lean_object* v_a_1983_, lean_object* v_a_1984_, lean_object* v_a_1985_){
_start:
{
lean_object* v_res_1986_; 
v_res_1986_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go___redArg(v_d_1977_, v_e_1978_, v_numExtra_1979_, v_result_1980_, v_a_1981_, v_a_1982_, v_a_1983_, v_a_1984_);
lean_dec(v_a_1984_);
lean_dec_ref(v_a_1983_);
lean_dec(v_a_1982_);
lean_dec_ref(v_a_1981_);
lean_dec_ref(v_d_1977_);
return v_res_1986_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go(lean_object* v_00_u03b1_1987_, lean_object* v_d_1988_, lean_object* v_e_1989_, lean_object* v_numExtra_1990_, lean_object* v_result_1991_, lean_object* v_a_1992_, lean_object* v_a_1993_, lean_object* v_a_1994_, lean_object* v_a_1995_){
_start:
{
lean_object* v___x_1997_; 
v___x_1997_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go___redArg(v_d_1988_, v_e_1989_, v_numExtra_1990_, v_result_1991_, v_a_1992_, v_a_1993_, v_a_1994_, v_a_1995_);
return v___x_1997_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go___boxed(lean_object* v_00_u03b1_1998_, lean_object* v_d_1999_, lean_object* v_e_2000_, lean_object* v_numExtra_2001_, lean_object* v_result_2002_, lean_object* v_a_2003_, lean_object* v_a_2004_, lean_object* v_a_2005_, lean_object* v_a_2006_, lean_object* v_a_2007_){
_start:
{
lean_object* v_res_2008_; 
v_res_2008_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go(v_00_u03b1_1998_, v_d_1999_, v_e_2000_, v_numExtra_2001_, v_result_2002_, v_a_2003_, v_a_2004_, v_a_2005_, v_a_2006_);
lean_dec(v_a_2006_);
lean_dec_ref(v_a_2005_);
lean_dec(v_a_2004_);
lean_dec_ref(v_a_2003_);
lean_dec_ref(v_d_1999_);
return v_res_2008_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go_spec__0(lean_object* v_00_u03b1_2009_, lean_object* v_numExtra_2010_, size_t v_sz_2011_, size_t v_i_2012_, lean_object* v_bs_2013_){
_start:
{
lean_object* v___x_2014_; 
v___x_2014_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go_spec__0___redArg(v_numExtra_2010_, v_sz_2011_, v_i_2012_, v_bs_2013_);
return v___x_2014_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go_spec__0___boxed(lean_object* v_00_u03b1_2015_, lean_object* v_numExtra_2016_, lean_object* v_sz_2017_, lean_object* v_i_2018_, lean_object* v_bs_2019_){
_start:
{
size_t v_sz_boxed_2020_; size_t v_i_boxed_2021_; lean_object* v_res_2022_; 
v_sz_boxed_2020_ = lean_unbox_usize(v_sz_2017_);
lean_dec(v_sz_2017_);
v_i_boxed_2021_ = lean_unbox_usize(v_i_2018_);
lean_dec(v_i_2018_);
v_res_2022_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go_spec__0(v_00_u03b1_2015_, v_numExtra_2016_, v_sz_boxed_2020_, v_i_boxed_2021_, v_bs_2019_);
return v_res_2022_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_DiscrTree_getMatchWithExtra_spec__0___redArg(size_t v_sz_2023_, size_t v_i_2024_, lean_object* v_bs_2025_){
_start:
{
uint8_t v___x_2026_; 
v___x_2026_ = lean_usize_dec_lt(v_i_2024_, v_sz_2023_);
if (v___x_2026_ == 0)
{
return v_bs_2025_;
}
else
{
lean_object* v_v_2027_; lean_object* v___x_2028_; lean_object* v_bs_x27_2029_; lean_object* v___x_2030_; size_t v___x_2031_; size_t v___x_2032_; lean_object* v___x_2033_; 
v_v_2027_ = lean_array_uget(v_bs_2025_, v_i_2024_);
v___x_2028_ = lean_unsigned_to_nat(0u);
v_bs_x27_2029_ = lean_array_uset(v_bs_2025_, v_i_2024_, v___x_2028_);
v___x_2030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2030_, 0, v_v_2027_);
lean_ctor_set(v___x_2030_, 1, v___x_2028_);
v___x_2031_ = ((size_t)1ULL);
v___x_2032_ = lean_usize_add(v_i_2024_, v___x_2031_);
v___x_2033_ = lean_array_uset(v_bs_x27_2029_, v_i_2024_, v___x_2030_);
v_i_2024_ = v___x_2032_;
v_bs_2025_ = v___x_2033_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_DiscrTree_getMatchWithExtra_spec__0___redArg___boxed(lean_object* v_sz_2035_, lean_object* v_i_2036_, lean_object* v_bs_2037_){
_start:
{
size_t v_sz_boxed_2038_; size_t v_i_boxed_2039_; lean_object* v_res_2040_; 
v_sz_boxed_2038_ = lean_unbox_usize(v_sz_2035_);
lean_dec(v_sz_2035_);
v_i_boxed_2039_ = lean_unbox_usize(v_i_2036_);
lean_dec(v_i_2036_);
v_res_2040_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_DiscrTree_getMatchWithExtra_spec__0___redArg(v_sz_boxed_2038_, v_i_boxed_2039_, v_bs_2037_);
return v_res_2040_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchWithExtra___redArg(lean_object* v_d_2041_, lean_object* v_e_2042_, lean_object* v_a_2043_, lean_object* v_a_2044_, lean_object* v_a_2045_, lean_object* v_a_2046_){
_start:
{
lean_object* v___x_2048_; 
lean_inc_ref(v_e_2042_);
v___x_2048_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg(v_d_2041_, v_e_2042_, v_a_2043_, v_a_2044_, v_a_2045_, v_a_2046_);
if (lean_obj_tag(v___x_2048_) == 0)
{
lean_object* v_a_2049_; lean_object* v___x_2051_; uint8_t v_isShared_2052_; uint8_t v_isSharedCheck_2083_; 
v_a_2049_ = lean_ctor_get(v___x_2048_, 0);
v_isSharedCheck_2083_ = !lean_is_exclusive(v___x_2048_);
if (v_isSharedCheck_2083_ == 0)
{
v___x_2051_ = v___x_2048_;
v_isShared_2052_ = v_isSharedCheck_2083_;
goto v_resetjp_2050_;
}
else
{
lean_inc(v_a_2049_);
lean_dec(v___x_2048_);
v___x_2051_ = lean_box(0);
v_isShared_2052_ = v_isSharedCheck_2083_;
goto v_resetjp_2050_;
}
v_resetjp_2050_:
{
lean_object* v_fst_2053_; lean_object* v_snd_2054_; size_t v_sz_2055_; size_t v___x_2056_; lean_object* v___x_2057_; uint8_t v___x_2058_; 
v_fst_2053_ = lean_ctor_get(v_a_2049_, 0);
lean_inc(v_fst_2053_);
v_snd_2054_ = lean_ctor_get(v_a_2049_, 1);
lean_inc(v_snd_2054_);
lean_dec(v_a_2049_);
v_sz_2055_ = lean_array_size(v_snd_2054_);
v___x_2056_ = ((size_t)0ULL);
v___x_2057_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_DiscrTree_getMatchWithExtra_spec__0___redArg(v_sz_2055_, v___x_2056_, v_snd_2054_);
v___x_2058_ = l_Lean_Expr_isApp(v_e_2042_);
if (v___x_2058_ == 0)
{
lean_object* v___x_2060_; 
lean_dec(v_fst_2053_);
lean_dec_ref(v_e_2042_);
if (v_isShared_2052_ == 0)
{
lean_ctor_set(v___x_2051_, 0, v___x_2057_);
v___x_2060_ = v___x_2051_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v___x_2057_);
v___x_2060_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
return v___x_2060_;
}
}
else
{
lean_object* v___x_2062_; 
lean_del_object(v___x_2051_);
v___x_2062_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_mayMatchPrefix___redArg(v_d_2041_, v_fst_2053_, v_a_2043_, v_a_2044_, v_a_2045_, v_a_2046_);
if (lean_obj_tag(v___x_2062_) == 0)
{
lean_object* v_a_2063_; lean_object* v___x_2065_; uint8_t v_isShared_2066_; uint8_t v_isSharedCheck_2074_; 
v_a_2063_ = lean_ctor_get(v___x_2062_, 0);
v_isSharedCheck_2074_ = !lean_is_exclusive(v___x_2062_);
if (v_isSharedCheck_2074_ == 0)
{
v___x_2065_ = v___x_2062_;
v_isShared_2066_ = v_isSharedCheck_2074_;
goto v_resetjp_2064_;
}
else
{
lean_inc(v_a_2063_);
lean_dec(v___x_2062_);
v___x_2065_ = lean_box(0);
v_isShared_2066_ = v_isSharedCheck_2074_;
goto v_resetjp_2064_;
}
v_resetjp_2064_:
{
uint8_t v___x_2067_; 
v___x_2067_ = lean_unbox(v_a_2063_);
lean_dec(v_a_2063_);
if (v___x_2067_ == 0)
{
lean_object* v___x_2069_; 
lean_dec_ref(v_e_2042_);
if (v_isShared_2066_ == 0)
{
lean_ctor_set(v___x_2065_, 0, v___x_2057_);
v___x_2069_ = v___x_2065_;
goto v_reusejp_2068_;
}
else
{
lean_object* v_reuseFailAlloc_2070_; 
v_reuseFailAlloc_2070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2070_, 0, v___x_2057_);
v___x_2069_ = v_reuseFailAlloc_2070_;
goto v_reusejp_2068_;
}
v_reusejp_2068_:
{
return v___x_2069_;
}
}
else
{
lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; 
lean_del_object(v___x_2065_);
v___x_2071_ = l_Lean_Expr_appFn_x21(v_e_2042_);
lean_dec_ref(v_e_2042_);
v___x_2072_ = lean_unsigned_to_nat(1u);
v___x_2073_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go___redArg(v_d_2041_, v___x_2071_, v___x_2072_, v___x_2057_, v_a_2043_, v_a_2044_, v_a_2045_, v_a_2046_);
return v___x_2073_;
}
}
}
else
{
lean_object* v_a_2075_; lean_object* v___x_2077_; uint8_t v_isShared_2078_; uint8_t v_isSharedCheck_2082_; 
lean_dec_ref(v___x_2057_);
lean_dec_ref(v_e_2042_);
v_a_2075_ = lean_ctor_get(v___x_2062_, 0);
v_isSharedCheck_2082_ = !lean_is_exclusive(v___x_2062_);
if (v_isSharedCheck_2082_ == 0)
{
v___x_2077_ = v___x_2062_;
v_isShared_2078_ = v_isSharedCheck_2082_;
goto v_resetjp_2076_;
}
else
{
lean_inc(v_a_2075_);
lean_dec(v___x_2062_);
v___x_2077_ = lean_box(0);
v_isShared_2078_ = v_isSharedCheck_2082_;
goto v_resetjp_2076_;
}
v_resetjp_2076_:
{
lean_object* v___x_2080_; 
if (v_isShared_2078_ == 0)
{
v___x_2080_ = v___x_2077_;
goto v_reusejp_2079_;
}
else
{
lean_object* v_reuseFailAlloc_2081_; 
v_reuseFailAlloc_2081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2081_, 0, v_a_2075_);
v___x_2080_ = v_reuseFailAlloc_2081_;
goto v_reusejp_2079_;
}
v_reusejp_2079_:
{
return v___x_2080_;
}
}
}
}
}
}
else
{
lean_object* v_a_2084_; lean_object* v___x_2086_; uint8_t v_isShared_2087_; uint8_t v_isSharedCheck_2091_; 
lean_dec_ref(v_e_2042_);
v_a_2084_ = lean_ctor_get(v___x_2048_, 0);
v_isSharedCheck_2091_ = !lean_is_exclusive(v___x_2048_);
if (v_isSharedCheck_2091_ == 0)
{
v___x_2086_ = v___x_2048_;
v_isShared_2087_ = v_isSharedCheck_2091_;
goto v_resetjp_2085_;
}
else
{
lean_inc(v_a_2084_);
lean_dec(v___x_2048_);
v___x_2086_ = lean_box(0);
v_isShared_2087_ = v_isSharedCheck_2091_;
goto v_resetjp_2085_;
}
v_resetjp_2085_:
{
lean_object* v___x_2089_; 
if (v_isShared_2087_ == 0)
{
v___x_2089_ = v___x_2086_;
goto v_reusejp_2088_;
}
else
{
lean_object* v_reuseFailAlloc_2090_; 
v_reuseFailAlloc_2090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2090_, 0, v_a_2084_);
v___x_2089_ = v_reuseFailAlloc_2090_;
goto v_reusejp_2088_;
}
v_reusejp_2088_:
{
return v___x_2089_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchWithExtra___redArg___boxed(lean_object* v_d_2092_, lean_object* v_e_2093_, lean_object* v_a_2094_, lean_object* v_a_2095_, lean_object* v_a_2096_, lean_object* v_a_2097_, lean_object* v_a_2098_){
_start:
{
lean_object* v_res_2099_; 
v_res_2099_ = l_Lean_Meta_DiscrTree_getMatchWithExtra___redArg(v_d_2092_, v_e_2093_, v_a_2094_, v_a_2095_, v_a_2096_, v_a_2097_);
lean_dec(v_a_2097_);
lean_dec_ref(v_a_2096_);
lean_dec(v_a_2095_);
lean_dec_ref(v_a_2094_);
lean_dec_ref(v_d_2092_);
return v_res_2099_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchWithExtra(lean_object* v_00_u03b1_2100_, lean_object* v_d_2101_, lean_object* v_e_2102_, lean_object* v_a_2103_, lean_object* v_a_2104_, lean_object* v_a_2105_, lean_object* v_a_2106_){
_start:
{
lean_object* v___x_2108_; 
v___x_2108_ = l_Lean_Meta_DiscrTree_getMatchWithExtra___redArg(v_d_2101_, v_e_2102_, v_a_2103_, v_a_2104_, v_a_2105_, v_a_2106_);
return v___x_2108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchWithExtra___boxed(lean_object* v_00_u03b1_2109_, lean_object* v_d_2110_, lean_object* v_e_2111_, lean_object* v_a_2112_, lean_object* v_a_2113_, lean_object* v_a_2114_, lean_object* v_a_2115_, lean_object* v_a_2116_){
_start:
{
lean_object* v_res_2117_; 
v_res_2117_ = l_Lean_Meta_DiscrTree_getMatchWithExtra(v_00_u03b1_2109_, v_d_2110_, v_e_2111_, v_a_2112_, v_a_2113_, v_a_2114_, v_a_2115_);
lean_dec(v_a_2115_);
lean_dec_ref(v_a_2114_);
lean_dec(v_a_2113_);
lean_dec_ref(v_a_2112_);
lean_dec_ref(v_d_2110_);
return v_res_2117_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_DiscrTree_getMatchWithExtra_spec__0(lean_object* v_00_u03b1_2118_, size_t v_sz_2119_, size_t v_i_2120_, lean_object* v_bs_2121_){
_start:
{
lean_object* v___x_2122_; 
v___x_2122_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_DiscrTree_getMatchWithExtra_spec__0___redArg(v_sz_2119_, v_i_2120_, v_bs_2121_);
return v___x_2122_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_DiscrTree_getMatchWithExtra_spec__0___boxed(lean_object* v_00_u03b1_2123_, lean_object* v_sz_2124_, lean_object* v_i_2125_, lean_object* v_bs_2126_){
_start:
{
size_t v_sz_boxed_2127_; size_t v_i_boxed_2128_; lean_object* v_res_2129_; 
v_sz_boxed_2127_ = lean_unbox_usize(v_sz_2124_);
lean_dec(v_sz_2124_);
v_i_boxed_2128_ = lean_unbox_usize(v_i_2125_);
lean_dec(v_i_2125_);
v_res_2129_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_DiscrTree_getMatchWithExtra_spec__0(v_00_u03b1_2123_, v_sz_boxed_2127_, v_i_boxed_2128_, v_bs_2126_);
return v_res_2129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchKeyRootFor(lean_object* v_e_2130_, lean_object* v_a_2131_, lean_object* v_a_2132_, lean_object* v_a_2133_, lean_object* v_a_2134_){
_start:
{
uint8_t v___x_2136_; lean_object* v___x_2137_; 
v___x_2136_ = 1;
v___x_2137_ = l_Lean_Meta_DiscrTree_reduceDT(v_e_2130_, v___x_2136_, v_a_2131_, v_a_2132_, v_a_2133_, v_a_2134_);
if (lean_obj_tag(v___x_2137_) == 0)
{
lean_object* v_a_2138_; lean_object* v___x_2140_; uint8_t v_isShared_2141_; uint8_t v_isSharedCheck_2161_; 
v_a_2138_ = lean_ctor_get(v___x_2137_, 0);
v_isSharedCheck_2161_ = !lean_is_exclusive(v___x_2137_);
if (v_isSharedCheck_2161_ == 0)
{
v___x_2140_ = v___x_2137_;
v_isShared_2141_ = v_isSharedCheck_2161_;
goto v_resetjp_2139_;
}
else
{
lean_inc(v_a_2138_);
lean_dec(v___x_2137_);
v___x_2140_ = lean_box(0);
v_isShared_2141_ = v_isSharedCheck_2161_;
goto v_resetjp_2139_;
}
v_resetjp_2139_:
{
lean_object* v___x_2142_; lean_object* v___y_2144_; lean_object* v___x_2149_; 
v___x_2142_ = l_Lean_Expr_getAppNumArgs(v_a_2138_);
v___x_2149_ = l_Lean_Expr_getAppFn(v_a_2138_);
lean_dec(v_a_2138_);
switch(lean_obj_tag(v___x_2149_))
{
case 9:
{
lean_object* v_a_2150_; lean_object* v___x_2151_; 
v_a_2150_ = lean_ctor_get(v___x_2149_, 0);
lean_inc_ref(v_a_2150_);
lean_dec_ref_known(v___x_2149_, 1);
v___x_2151_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2151_, 0, v_a_2150_);
v___y_2144_ = v___x_2151_;
goto v___jp_2143_;
}
case 1:
{
lean_object* v_fvarId_2152_; lean_object* v___x_2153_; 
v_fvarId_2152_ = lean_ctor_get(v___x_2149_, 0);
lean_inc(v_fvarId_2152_);
lean_dec_ref_known(v___x_2149_, 1);
lean_inc(v___x_2142_);
v___x_2153_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2153_, 0, v_fvarId_2152_);
lean_ctor_set(v___x_2153_, 1, v___x_2142_);
v___y_2144_ = v___x_2153_;
goto v___jp_2143_;
}
case 11:
{
lean_object* v_typeName_2154_; lean_object* v_idx_2155_; lean_object* v___x_2156_; 
v_typeName_2154_ = lean_ctor_get(v___x_2149_, 0);
lean_inc(v_typeName_2154_);
v_idx_2155_ = lean_ctor_get(v___x_2149_, 1);
lean_inc(v_idx_2155_);
lean_dec_ref_known(v___x_2149_, 3);
lean_inc(v___x_2142_);
v___x_2156_ = lean_alloc_ctor(6, 3, 0);
lean_ctor_set(v___x_2156_, 0, v_typeName_2154_);
lean_ctor_set(v___x_2156_, 1, v_idx_2155_);
lean_ctor_set(v___x_2156_, 2, v___x_2142_);
v___y_2144_ = v___x_2156_;
goto v___jp_2143_;
}
case 7:
{
lean_object* v___x_2157_; 
lean_dec_ref_known(v___x_2149_, 3);
v___x_2157_ = lean_box(5);
v___y_2144_ = v___x_2157_;
goto v___jp_2143_;
}
case 4:
{
lean_object* v_declName_2158_; lean_object* v___x_2159_; 
v_declName_2158_ = lean_ctor_get(v___x_2149_, 0);
lean_inc(v_declName_2158_);
lean_dec_ref_known(v___x_2149_, 2);
lean_inc(v___x_2142_);
v___x_2159_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2159_, 0, v_declName_2158_);
lean_ctor_set(v___x_2159_, 1, v___x_2142_);
v___y_2144_ = v___x_2159_;
goto v___jp_2143_;
}
default: 
{
lean_object* v___x_2160_; 
lean_dec_ref(v___x_2149_);
v___x_2160_ = lean_box(1);
v___y_2144_ = v___x_2160_;
goto v___jp_2143_;
}
}
v___jp_2143_:
{
lean_object* v___x_2145_; lean_object* v___x_2147_; 
v___x_2145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2145_, 0, v___y_2144_);
lean_ctor_set(v___x_2145_, 1, v___x_2142_);
if (v_isShared_2141_ == 0)
{
lean_ctor_set(v___x_2140_, 0, v___x_2145_);
v___x_2147_ = v___x_2140_;
goto v_reusejp_2146_;
}
else
{
lean_object* v_reuseFailAlloc_2148_; 
v_reuseFailAlloc_2148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2148_, 0, v___x_2145_);
v___x_2147_ = v_reuseFailAlloc_2148_;
goto v_reusejp_2146_;
}
v_reusejp_2146_:
{
return v___x_2147_;
}
}
}
}
else
{
lean_object* v_a_2162_; lean_object* v___x_2164_; uint8_t v_isShared_2165_; uint8_t v_isSharedCheck_2169_; 
v_a_2162_ = lean_ctor_get(v___x_2137_, 0);
v_isSharedCheck_2169_ = !lean_is_exclusive(v___x_2137_);
if (v_isSharedCheck_2169_ == 0)
{
v___x_2164_ = v___x_2137_;
v_isShared_2165_ = v_isSharedCheck_2169_;
goto v_resetjp_2163_;
}
else
{
lean_inc(v_a_2162_);
lean_dec(v___x_2137_);
v___x_2164_ = lean_box(0);
v_isShared_2165_ = v_isSharedCheck_2169_;
goto v_resetjp_2163_;
}
v_resetjp_2163_:
{
lean_object* v___x_2167_; 
if (v_isShared_2165_ == 0)
{
v___x_2167_ = v___x_2164_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v_a_2162_);
v___x_2167_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
return v___x_2167_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchKeyRootFor___boxed(lean_object* v_e_2170_, lean_object* v_a_2171_, lean_object* v_a_2172_, lean_object* v_a_2173_, lean_object* v_a_2174_, lean_object* v_a_2175_){
_start:
{
lean_object* v_res_2176_; 
v_res_2176_ = l_Lean_Meta_DiscrTree_getMatchKeyRootFor(v_e_2170_, v_a_2171_, v_a_2172_, v_a_2173_, v_a_2174_);
lean_dec(v_a_2174_);
lean_dec_ref(v_a_2173_);
lean_dec(v_a_2172_);
lean_dec_ref(v_a_2171_);
return v_res_2176_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go_spec__0___redArg(lean_object* v_as_2177_, size_t v_sz_2178_, size_t v_i_2179_, lean_object* v_b_2180_){
_start:
{
uint8_t v___x_2181_; 
v___x_2181_ = lean_usize_dec_lt(v_i_2179_, v_sz_2178_);
if (v___x_2181_ == 0)
{
return v_b_2180_;
}
else
{
lean_object* v_a_2182_; lean_object* v_snd_2183_; lean_object* v___x_2184_; size_t v___x_2185_; size_t v___x_2186_; 
v_a_2182_ = lean_array_uget_borrowed(v_as_2177_, v_i_2179_);
v_snd_2183_ = lean_ctor_get(v_a_2182_, 1);
v___x_2184_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go___redArg(v_snd_2183_, v_b_2180_);
v___x_2185_ = ((size_t)1ULL);
v___x_2186_ = lean_usize_add(v_i_2179_, v___x_2185_);
v_i_2179_ = v___x_2186_;
v_b_2180_ = v___x_2184_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go___redArg(lean_object* v_trie_2188_, lean_object* v_result_2189_){
_start:
{
if (lean_obj_tag(v_trie_2188_) == 0)
{
lean_object* v_child_2190_; 
v_child_2190_ = lean_ctor_get(v_trie_2188_, 1);
v_trie_2188_ = v_child_2190_;
goto _start;
}
else
{
lean_object* v_vs_2192_; lean_object* v_children_2193_; lean_object* v_result_2194_; size_t v_sz_2195_; size_t v___x_2196_; lean_object* v___x_2197_; 
v_vs_2192_ = lean_ctor_get(v_trie_2188_, 0);
v_children_2193_ = lean_ctor_get(v_trie_2188_, 1);
v_result_2194_ = l_Array_append___redArg(v_result_2189_, v_vs_2192_);
v_sz_2195_ = lean_array_size(v_children_2193_);
v___x_2196_ = ((size_t)0ULL);
v___x_2197_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go_spec__0___redArg(v_children_2193_, v_sz_2195_, v___x_2196_, v_result_2194_);
return v___x_2197_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go___redArg___boxed(lean_object* v_trie_2198_, lean_object* v_result_2199_){
_start:
{
lean_object* v_res_2200_; 
v_res_2200_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go___redArg(v_trie_2198_, v_result_2199_);
lean_dec_ref(v_trie_2198_);
return v_res_2200_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go_spec__0___redArg___boxed(lean_object* v_as_2201_, lean_object* v_sz_2202_, lean_object* v_i_2203_, lean_object* v_b_2204_){
_start:
{
size_t v_sz_boxed_2205_; size_t v_i_boxed_2206_; lean_object* v_res_2207_; 
v_sz_boxed_2205_ = lean_unbox_usize(v_sz_2202_);
lean_dec(v_sz_2202_);
v_i_boxed_2206_ = lean_unbox_usize(v_i_2203_);
lean_dec(v_i_2203_);
v_res_2207_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go_spec__0___redArg(v_as_2201_, v_sz_boxed_2205_, v_i_boxed_2206_, v_b_2204_);
lean_dec_ref(v_as_2201_);
return v_res_2207_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go(lean_object* v_00_u03b1_2208_, lean_object* v_trie_2209_, lean_object* v_result_2210_){
_start:
{
lean_object* v___x_2211_; 
v___x_2211_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go___redArg(v_trie_2209_, v_result_2210_);
return v___x_2211_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go___boxed(lean_object* v_00_u03b1_2212_, lean_object* v_trie_2213_, lean_object* v_result_2214_){
_start:
{
lean_object* v_res_2215_; 
v_res_2215_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go(v_00_u03b1_2212_, v_trie_2213_, v_result_2214_);
lean_dec_ref(v_trie_2213_);
return v_res_2215_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go_spec__0(lean_object* v_00_u03b1_2216_, lean_object* v_as_2217_, size_t v_sz_2218_, size_t v_i_2219_, lean_object* v_b_2220_){
_start:
{
lean_object* v___x_2221_; 
v___x_2221_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go_spec__0___redArg(v_as_2217_, v_sz_2218_, v_i_2219_, v_b_2220_);
return v___x_2221_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go_spec__0___boxed(lean_object* v_00_u03b1_2222_, lean_object* v_as_2223_, lean_object* v_sz_2224_, lean_object* v_i_2225_, lean_object* v_b_2226_){
_start:
{
size_t v_sz_boxed_2227_; size_t v_i_boxed_2228_; lean_object* v_res_2229_; 
v_sz_boxed_2227_ = lean_unbox_usize(v_sz_2224_);
lean_dec(v_sz_2224_);
v_i_boxed_2228_ = lean_unbox_usize(v_i_2225_);
lean_dec(v_i_2225_);
v_res_2229_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go_spec__0(v_00_u03b1_2222_, v_as_2223_, v_sz_boxed_2227_, v_i_boxed_2228_, v_b_2226_);
lean_dec_ref(v_as_2223_);
return v_res_2229_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey___redArg(lean_object* v_d_2230_, lean_object* v_k_2231_, lean_object* v_result_2232_){
_start:
{
lean_object* v___x_2233_; 
v___x_2233_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0___redArg(v_d_2230_, v_k_2231_);
if (lean_obj_tag(v___x_2233_) == 0)
{
return v_result_2232_;
}
else
{
lean_object* v_val_2234_; lean_object* v___x_2235_; 
v_val_2234_ = lean_ctor_get(v___x_2233_, 0);
lean_inc(v_val_2234_);
lean_dec_ref_known(v___x_2233_, 1);
v___x_2235_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go___redArg(v_val_2234_, v_result_2232_);
lean_dec(v_val_2234_);
return v___x_2235_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey___redArg___boxed(lean_object* v_d_2236_, lean_object* v_k_2237_, lean_object* v_result_2238_){
_start:
{
lean_object* v_res_2239_; 
v_res_2239_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey___redArg(v_d_2236_, v_k_2237_, v_result_2238_);
lean_dec(v_k_2237_);
lean_dec_ref(v_d_2236_);
return v_res_2239_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey(lean_object* v_00_u03b1_2240_, lean_object* v_d_2241_, lean_object* v_k_2242_, lean_object* v_result_2243_){
_start:
{
lean_object* v___x_2244_; 
v___x_2244_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey___redArg(v_d_2241_, v_k_2242_, v_result_2243_);
return v___x_2244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey___boxed(lean_object* v_00_u03b1_2245_, lean_object* v_d_2246_, lean_object* v_k_2247_, lean_object* v_result_2248_){
_start:
{
lean_object* v_res_2249_; 
v_res_2249_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey(v_00_u03b1_2245_, v_d_2246_, v_k_2247_, v_result_2248_);
lean_dec(v_k_2247_);
lean_dec_ref(v_d_2246_);
return v_res_2249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchLiberal___redArg___lam__0(lean_object* v_e_2250_, lean_object* v_result_2251_, lean_object* v_d_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_){
_start:
{
lean_object* v___x_2258_; 
v___x_2258_ = l_Lean_Meta_DiscrTree_getMatchKeyRootFor(v_e_2250_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_);
if (lean_obj_tag(v___x_2258_) == 0)
{
lean_object* v_a_2259_; lean_object* v___x_2261_; uint8_t v_isShared_2262_; uint8_t v_isSharedCheck_2276_; 
v_a_2259_ = lean_ctor_get(v___x_2258_, 0);
v_isSharedCheck_2276_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2276_ == 0)
{
v___x_2261_ = v___x_2258_;
v_isShared_2262_ = v_isSharedCheck_2276_;
goto v_resetjp_2260_;
}
else
{
lean_inc(v_a_2259_);
lean_dec(v___x_2258_);
v___x_2261_ = lean_box(0);
v_isShared_2262_ = v_isSharedCheck_2276_;
goto v_resetjp_2260_;
}
v_resetjp_2260_:
{
lean_object* v_fst_2263_; lean_object* v_snd_2264_; lean_object* v___x_2266_; uint8_t v_isShared_2267_; uint8_t v_isSharedCheck_2275_; 
v_fst_2263_ = lean_ctor_get(v_a_2259_, 0);
v_snd_2264_ = lean_ctor_get(v_a_2259_, 1);
v_isSharedCheck_2275_ = !lean_is_exclusive(v_a_2259_);
if (v_isSharedCheck_2275_ == 0)
{
v___x_2266_ = v_a_2259_;
v_isShared_2267_ = v_isSharedCheck_2275_;
goto v_resetjp_2265_;
}
else
{
lean_inc(v_snd_2264_);
lean_inc(v_fst_2263_);
lean_dec(v_a_2259_);
v___x_2266_ = lean_box(0);
v_isShared_2267_ = v_isSharedCheck_2275_;
goto v_resetjp_2265_;
}
v_resetjp_2265_:
{
lean_object* v___x_2268_; lean_object* v___x_2270_; 
v___x_2268_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey___redArg(v_d_2252_, v_fst_2263_, v_result_2251_);
lean_dec(v_fst_2263_);
if (v_isShared_2267_ == 0)
{
lean_ctor_set(v___x_2266_, 0, v___x_2268_);
v___x_2270_ = v___x_2266_;
goto v_reusejp_2269_;
}
else
{
lean_object* v_reuseFailAlloc_2274_; 
v_reuseFailAlloc_2274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2274_, 0, v___x_2268_);
lean_ctor_set(v_reuseFailAlloc_2274_, 1, v_snd_2264_);
v___x_2270_ = v_reuseFailAlloc_2274_;
goto v_reusejp_2269_;
}
v_reusejp_2269_:
{
lean_object* v___x_2272_; 
if (v_isShared_2262_ == 0)
{
lean_ctor_set(v___x_2261_, 0, v___x_2270_);
v___x_2272_ = v___x_2261_;
goto v_reusejp_2271_;
}
else
{
lean_object* v_reuseFailAlloc_2273_; 
v_reuseFailAlloc_2273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2273_, 0, v___x_2270_);
v___x_2272_ = v_reuseFailAlloc_2273_;
goto v_reusejp_2271_;
}
v_reusejp_2271_:
{
return v___x_2272_;
}
}
}
}
}
else
{
lean_object* v_a_2277_; lean_object* v___x_2279_; uint8_t v_isShared_2280_; uint8_t v_isSharedCheck_2284_; 
lean_dec_ref(v_result_2251_);
v_a_2277_ = lean_ctor_get(v___x_2258_, 0);
v_isSharedCheck_2284_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2284_ == 0)
{
v___x_2279_ = v___x_2258_;
v_isShared_2280_ = v_isSharedCheck_2284_;
goto v_resetjp_2278_;
}
else
{
lean_inc(v_a_2277_);
lean_dec(v___x_2258_);
v___x_2279_ = lean_box(0);
v_isShared_2280_ = v_isSharedCheck_2284_;
goto v_resetjp_2278_;
}
v_resetjp_2278_:
{
lean_object* v___x_2282_; 
if (v_isShared_2280_ == 0)
{
v___x_2282_ = v___x_2279_;
goto v_reusejp_2281_;
}
else
{
lean_object* v_reuseFailAlloc_2283_; 
v_reuseFailAlloc_2283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2283_, 0, v_a_2277_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchLiberal___redArg___lam__0___boxed(lean_object* v_e_2285_, lean_object* v_result_2286_, lean_object* v_d_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_){
_start:
{
lean_object* v_res_2293_; 
v_res_2293_ = l_Lean_Meta_DiscrTree_getMatchLiberal___redArg___lam__0(v_e_2285_, v_result_2286_, v_d_2287_, v___y_2288_, v___y_2289_, v___y_2290_, v___y_2291_);
lean_dec(v___y_2291_);
lean_dec_ref(v___y_2290_);
lean_dec(v___y_2289_);
lean_dec_ref(v___y_2288_);
lean_dec_ref(v_d_2287_);
return v_res_2293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchLiberal___redArg(lean_object* v_d_2294_, lean_object* v_e_2295_, lean_object* v_a_2296_, lean_object* v_a_2297_, lean_object* v_a_2298_, lean_object* v_a_2299_){
_start:
{
lean_object* v___y_2302_; lean_object* v___x_2319_; uint8_t v_transparency_2320_; lean_object* v_result_2321_; uint8_t v___x_2322_; uint8_t v___x_2323_; 
v___x_2319_ = l_Lean_Meta_Context_config(v_a_2296_);
v_transparency_2320_ = lean_ctor_get_uint8(v___x_2319_, 9);
lean_dec_ref(v___x_2319_);
v_result_2321_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg(v_d_2294_);
v___x_2322_ = 2;
v___x_2323_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2320_, v___x_2322_);
if (v___x_2323_ == 0)
{
lean_object* v_keyedConfig_2324_; uint8_t v_trackZetaDelta_2325_; lean_object* v_zetaDeltaSet_2326_; lean_object* v_lctx_2327_; lean_object* v_localInstances_2328_; lean_object* v_defEqCtx_x3f_2329_; lean_object* v_synthPendingDepth_2330_; lean_object* v_customCanUnfoldPredicate_x3f_2331_; uint8_t v_univApprox_2332_; uint8_t v_inTypeClassResolution_2333_; uint8_t v_cacheInferType_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; 
v_keyedConfig_2324_ = lean_ctor_get(v_a_2296_, 0);
v_trackZetaDelta_2325_ = lean_ctor_get_uint8(v_a_2296_, sizeof(void*)*7);
v_zetaDeltaSet_2326_ = lean_ctor_get(v_a_2296_, 1);
v_lctx_2327_ = lean_ctor_get(v_a_2296_, 2);
v_localInstances_2328_ = lean_ctor_get(v_a_2296_, 3);
v_defEqCtx_x3f_2329_ = lean_ctor_get(v_a_2296_, 4);
v_synthPendingDepth_2330_ = lean_ctor_get(v_a_2296_, 5);
v_customCanUnfoldPredicate_x3f_2331_ = lean_ctor_get(v_a_2296_, 6);
v_univApprox_2332_ = lean_ctor_get_uint8(v_a_2296_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2333_ = lean_ctor_get_uint8(v_a_2296_, sizeof(void*)*7 + 2);
v_cacheInferType_2334_ = lean_ctor_get_uint8(v_a_2296_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2324_);
v___x_2335_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2322_, v_keyedConfig_2324_);
lean_inc(v_customCanUnfoldPredicate_x3f_2331_);
lean_inc(v_synthPendingDepth_2330_);
lean_inc(v_defEqCtx_x3f_2329_);
lean_inc_ref(v_localInstances_2328_);
lean_inc_ref(v_lctx_2327_);
lean_inc(v_zetaDeltaSet_2326_);
v___x_2336_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2336_, 0, v___x_2335_);
lean_ctor_set(v___x_2336_, 1, v_zetaDeltaSet_2326_);
lean_ctor_set(v___x_2336_, 2, v_lctx_2327_);
lean_ctor_set(v___x_2336_, 3, v_localInstances_2328_);
lean_ctor_set(v___x_2336_, 4, v_defEqCtx_x3f_2329_);
lean_ctor_set(v___x_2336_, 5, v_synthPendingDepth_2330_);
lean_ctor_set(v___x_2336_, 6, v_customCanUnfoldPredicate_x3f_2331_);
lean_ctor_set_uint8(v___x_2336_, sizeof(void*)*7, v_trackZetaDelta_2325_);
lean_ctor_set_uint8(v___x_2336_, sizeof(void*)*7 + 1, v_univApprox_2332_);
lean_ctor_set_uint8(v___x_2336_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2333_);
lean_ctor_set_uint8(v___x_2336_, sizeof(void*)*7 + 3, v_cacheInferType_2334_);
v___x_2337_ = l_Lean_Meta_DiscrTree_getMatchLiberal___redArg___lam__0(v_e_2295_, v_result_2321_, v_d_2294_, v___x_2336_, v_a_2297_, v_a_2298_, v_a_2299_);
lean_dec_ref_known(v___x_2336_, 7);
v___y_2302_ = v___x_2337_;
goto v___jp_2301_;
}
else
{
lean_object* v___x_2338_; 
v___x_2338_ = l_Lean_Meta_DiscrTree_getMatchLiberal___redArg___lam__0(v_e_2295_, v_result_2321_, v_d_2294_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_);
v___y_2302_ = v___x_2338_;
goto v___jp_2301_;
}
v___jp_2301_:
{
if (lean_obj_tag(v___y_2302_) == 0)
{
lean_object* v_a_2303_; lean_object* v___x_2305_; uint8_t v_isShared_2306_; uint8_t v_isSharedCheck_2310_; 
v_a_2303_ = lean_ctor_get(v___y_2302_, 0);
v_isSharedCheck_2310_ = !lean_is_exclusive(v___y_2302_);
if (v_isSharedCheck_2310_ == 0)
{
v___x_2305_ = v___y_2302_;
v_isShared_2306_ = v_isSharedCheck_2310_;
goto v_resetjp_2304_;
}
else
{
lean_inc(v_a_2303_);
lean_dec(v___y_2302_);
v___x_2305_ = lean_box(0);
v_isShared_2306_ = v_isSharedCheck_2310_;
goto v_resetjp_2304_;
}
v_resetjp_2304_:
{
lean_object* v___x_2308_; 
if (v_isShared_2306_ == 0)
{
v___x_2308_ = v___x_2305_;
goto v_reusejp_2307_;
}
else
{
lean_object* v_reuseFailAlloc_2309_; 
v_reuseFailAlloc_2309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2309_, 0, v_a_2303_);
v___x_2308_ = v_reuseFailAlloc_2309_;
goto v_reusejp_2307_;
}
v_reusejp_2307_:
{
return v___x_2308_;
}
}
}
else
{
lean_object* v_a_2311_; lean_object* v___x_2313_; uint8_t v_isShared_2314_; uint8_t v_isSharedCheck_2318_; 
v_a_2311_ = lean_ctor_get(v___y_2302_, 0);
v_isSharedCheck_2318_ = !lean_is_exclusive(v___y_2302_);
if (v_isSharedCheck_2318_ == 0)
{
v___x_2313_ = v___y_2302_;
v_isShared_2314_ = v_isSharedCheck_2318_;
goto v_resetjp_2312_;
}
else
{
lean_inc(v_a_2311_);
lean_dec(v___y_2302_);
v___x_2313_ = lean_box(0);
v_isShared_2314_ = v_isSharedCheck_2318_;
goto v_resetjp_2312_;
}
v_resetjp_2312_:
{
lean_object* v___x_2316_; 
if (v_isShared_2314_ == 0)
{
v___x_2316_ = v___x_2313_;
goto v_reusejp_2315_;
}
else
{
lean_object* v_reuseFailAlloc_2317_; 
v_reuseFailAlloc_2317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2317_, 0, v_a_2311_);
v___x_2316_ = v_reuseFailAlloc_2317_;
goto v_reusejp_2315_;
}
v_reusejp_2315_:
{
return v___x_2316_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchLiberal___redArg___boxed(lean_object* v_d_2339_, lean_object* v_e_2340_, lean_object* v_a_2341_, lean_object* v_a_2342_, lean_object* v_a_2343_, lean_object* v_a_2344_, lean_object* v_a_2345_){
_start:
{
lean_object* v_res_2346_; 
v_res_2346_ = l_Lean_Meta_DiscrTree_getMatchLiberal___redArg(v_d_2339_, v_e_2340_, v_a_2341_, v_a_2342_, v_a_2343_, v_a_2344_);
lean_dec(v_a_2344_);
lean_dec_ref(v_a_2343_);
lean_dec(v_a_2342_);
lean_dec_ref(v_a_2341_);
lean_dec_ref(v_d_2339_);
return v_res_2346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchLiberal(lean_object* v_00_u03b1_2347_, lean_object* v_d_2348_, lean_object* v_e_2349_, lean_object* v_a_2350_, lean_object* v_a_2351_, lean_object* v_a_2352_, lean_object* v_a_2353_){
_start:
{
lean_object* v___x_2355_; 
v___x_2355_ = l_Lean_Meta_DiscrTree_getMatchLiberal___redArg(v_d_2348_, v_e_2349_, v_a_2350_, v_a_2351_, v_a_2352_, v_a_2353_);
return v___x_2355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchLiberal___boxed(lean_object* v_00_u03b1_2356_, lean_object* v_d_2357_, lean_object* v_e_2358_, lean_object* v_a_2359_, lean_object* v_a_2360_, lean_object* v_a_2361_, lean_object* v_a_2362_, lean_object* v_a_2363_){
_start:
{
lean_object* v_res_2364_; 
v_res_2364_ = l_Lean_Meta_DiscrTree_getMatchLiberal(v_00_u03b1_2356_, v_d_2357_, v_e_2358_, v_a_2359_, v_a_2360_, v_a_2361_, v_a_2362_);
lean_dec(v_a_2362_);
lean_dec_ref(v_a_2361_);
lean_dec(v_a_2360_);
lean_dec_ref(v_a_2359_);
lean_dec_ref(v_d_2357_);
return v_res_2364_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__1___redArg(lean_object* v_n_2365_, lean_object* v_todo_2366_, lean_object* v_as_2367_, size_t v_i_2368_, size_t v_stop_2369_, lean_object* v_b_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_){
_start:
{
uint8_t v___x_2376_; 
v___x_2376_ = lean_usize_dec_eq(v_i_2368_, v_stop_2369_);
if (v___x_2376_ == 0)
{
lean_object* v___x_2377_; lean_object* v_fst_2378_; lean_object* v_snd_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; 
v___x_2377_ = lean_array_uget_borrowed(v_as_2367_, v_i_2368_);
v_fst_2378_ = lean_ctor_get(v___x_2377_, 0);
v_snd_2379_ = lean_ctor_get(v___x_2377_, 1);
v___x_2380_ = l_Lean_Meta_DiscrTree_Key_arity(v_fst_2378_);
v___x_2381_ = lean_nat_add(v_n_2365_, v___x_2380_);
lean_dec(v___x_2380_);
lean_inc(v_snd_2379_);
lean_inc_ref(v_todo_2366_);
v___x_2382_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process___redArg(v___x_2381_, v_todo_2366_, v_snd_2379_, v_b_2370_, v___y_2371_, v___y_2372_, v___y_2373_, v___y_2374_);
if (lean_obj_tag(v___x_2382_) == 0)
{
lean_object* v_a_2383_; size_t v___x_2384_; size_t v___x_2385_; 
v_a_2383_ = lean_ctor_get(v___x_2382_, 0);
lean_inc(v_a_2383_);
lean_dec_ref_known(v___x_2382_, 1);
v___x_2384_ = ((size_t)1ULL);
v___x_2385_ = lean_usize_add(v_i_2368_, v___x_2384_);
v_i_2368_ = v___x_2385_;
v_b_2370_ = v_a_2383_;
goto _start;
}
else
{
lean_dec_ref(v_todo_2366_);
return v___x_2382_;
}
}
else
{
lean_object* v___x_2387_; 
lean_dec_ref(v_todo_2366_);
v___x_2387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2387_, 0, v_b_2370_);
return v___x_2387_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process___redArg(lean_object* v_skip_2388_, lean_object* v_todo_2389_, lean_object* v_c_2390_, lean_object* v_result_2391_, lean_object* v_a_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_, lean_object* v_a_2395_){
_start:
{
lean_object* v___y_2398_; lean_object* v___y_2399_; lean_object* v___y_2400_; lean_object* v___y_2401_; lean_object* v___y_2402_; lean_object* v___y_2403_; lean_object* v___y_2404_; lean_object* v___y_2405_; lean_object* v_a_2406_; lean_object* v___y_2419_; lean_object* v_zero_2422_; uint8_t v_isZero_2423_; 
v_zero_2422_ = lean_unsigned_to_nat(0u);
v_isZero_2423_ = lean_nat_dec_eq(v_skip_2388_, v_zero_2422_);
if (v_isZero_2423_ == 1)
{
lean_object* v___x_2424_; uint8_t v___x_2425_; 
lean_dec(v_skip_2388_);
v___x_2424_ = lean_array_get_size(v_todo_2389_);
v___x_2425_ = lean_nat_dec_eq(v___x_2424_, v_zero_2422_);
if (v___x_2425_ == 0)
{
lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___y_2430_; 
v___x_2426_ = l_Lean_instInhabitedExpr;
v___x_2427_ = lean_box(0);
v___x_2428_ = lean_obj_once(&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___closed__1, &l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___closed__1_once, _init_l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___closed__1);
if (lean_obj_tag(v_c_2390_) == 0)
{
lean_object* v_key_2470_; lean_object* v_child_2471_; lean_object* v___x_2473_; uint8_t v_isShared_2474_; uint8_t v_isSharedCheck_2481_; 
v_key_2470_ = lean_ctor_get(v_c_2390_, 0);
v_child_2471_ = lean_ctor_get(v_c_2390_, 1);
v_isSharedCheck_2481_ = !lean_is_exclusive(v_c_2390_);
if (v_isSharedCheck_2481_ == 0)
{
v___x_2473_ = v_c_2390_;
v_isShared_2474_ = v_isSharedCheck_2481_;
goto v_resetjp_2472_;
}
else
{
lean_inc(v_child_2471_);
lean_inc(v_key_2470_);
lean_dec(v_c_2390_);
v___x_2473_ = lean_box(0);
v_isShared_2474_ = v_isSharedCheck_2481_;
goto v_resetjp_2472_;
}
v_resetjp_2472_:
{
lean_object* v___x_2476_; 
if (v_isShared_2474_ == 0)
{
v___x_2476_ = v___x_2473_;
goto v_reusejp_2475_;
}
else
{
lean_object* v_reuseFailAlloc_2480_; 
v_reuseFailAlloc_2480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2480_, 0, v_key_2470_);
lean_ctor_set(v_reuseFailAlloc_2480_, 1, v_child_2471_);
v___x_2476_ = v_reuseFailAlloc_2480_;
goto v_reusejp_2475_;
}
v_reusejp_2475_:
{
lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; 
v___x_2477_ = lean_unsigned_to_nat(1u);
v___x_2478_ = lean_mk_empty_array_with_capacity(v___x_2477_);
v___x_2479_ = lean_array_push(v___x_2478_, v___x_2476_);
v___y_2430_ = v___x_2479_;
goto v___jp_2429_;
}
}
}
else
{
lean_object* v_children_2482_; 
v_children_2482_ = lean_ctor_get(v_c_2390_, 1);
lean_inc_ref(v_children_2482_);
lean_dec_ref_known(v_c_2390_, 2);
v___y_2430_ = v_children_2482_;
goto v___jp_2429_;
}
v___jp_2429_:
{
lean_object* v___x_2431_; uint8_t v___x_2432_; 
v___x_2431_ = lean_array_get_size(v___y_2430_);
v___x_2432_ = lean_nat_dec_eq(v___x_2431_, v_zero_2422_);
if (v___x_2432_ == 0)
{
lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v_e_2435_; lean_object* v_todo_2436_; lean_object* v___x_2437_; 
v___x_2433_ = lean_unsigned_to_nat(1u);
v___x_2434_ = lean_nat_sub(v___x_2424_, v___x_2433_);
v_e_2435_ = lean_array_get(v___x_2426_, v_todo_2389_, v___x_2434_);
lean_dec(v___x_2434_);
v_todo_2436_ = lean_array_pop(v_todo_2389_);
v___x_2437_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs(v_e_2435_, v___x_2432_, v___x_2432_, v_a_2392_, v_a_2393_, v_a_2394_, v_a_2395_);
if (lean_obj_tag(v___x_2437_) == 0)
{
lean_object* v_a_2438_; lean_object* v___x_2440_; uint8_t v_isShared_2441_; uint8_t v_isSharedCheck_2460_; 
v_a_2438_ = lean_ctor_get(v___x_2437_, 0);
v_isSharedCheck_2460_ = !lean_is_exclusive(v___x_2437_);
if (v_isSharedCheck_2460_ == 0)
{
v___x_2440_ = v___x_2437_;
v_isShared_2441_ = v_isSharedCheck_2460_;
goto v_resetjp_2439_;
}
else
{
lean_inc(v_a_2438_);
lean_dec(v___x_2437_);
v___x_2440_ = lean_box(0);
v_isShared_2441_ = v_isSharedCheck_2460_;
goto v_resetjp_2439_;
}
v_resetjp_2439_:
{
lean_object* v_fst_2442_; 
v_fst_2442_ = lean_ctor_get(v_a_2438_, 0);
lean_inc(v_fst_2442_);
if (lean_obj_tag(v_fst_2442_) == 0)
{
uint8_t v___x_2443_; 
lean_dec(v_a_2438_);
v___x_2443_ = lean_nat_dec_lt(v_zero_2422_, v___x_2431_);
if (v___x_2443_ == 0)
{
lean_object* v___x_2445_; 
lean_dec_ref(v_todo_2436_);
lean_dec_ref(v___y_2430_);
if (v_isShared_2441_ == 0)
{
lean_ctor_set(v___x_2440_, 0, v_result_2391_);
v___x_2445_ = v___x_2440_;
goto v_reusejp_2444_;
}
else
{
lean_object* v_reuseFailAlloc_2446_; 
v_reuseFailAlloc_2446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2446_, 0, v_result_2391_);
v___x_2445_ = v_reuseFailAlloc_2446_;
goto v_reusejp_2444_;
}
v_reusejp_2444_:
{
return v___x_2445_;
}
}
else
{
size_t v___x_2447_; size_t v___x_2448_; lean_object* v___x_2449_; 
lean_del_object(v___x_2440_);
v___x_2447_ = ((size_t)0ULL);
v___x_2448_ = lean_usize_of_nat(v___x_2431_);
v___x_2449_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__0___redArg(v_todo_2436_, v___y_2430_, v___x_2447_, v___x_2448_, v_result_2391_, v_a_2392_, v_a_2393_, v_a_2394_, v_a_2395_);
lean_dec_ref(v___y_2430_);
return v___x_2449_;
}
}
else
{
lean_object* v_snd_2450_; lean_object* v___x_2451_; lean_object* v_fst_2452_; lean_object* v_snd_2453_; uint8_t v___x_2454_; 
v_snd_2450_ = lean_ctor_get(v_a_2438_, 1);
lean_inc(v_snd_2450_);
lean_dec(v_a_2438_);
v___x_2451_ = lean_array_get_borrowed(v___x_2428_, v___y_2430_, v_zero_2422_);
v_fst_2452_ = lean_ctor_get(v___x_2451_, 0);
v_snd_2453_ = lean_ctor_get(v___x_2451_, 1);
v___x_2454_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_fst_2452_, v___x_2427_);
if (v___x_2454_ == 0)
{
lean_object* v___x_2456_; 
lean_inc_ref(v_result_2391_);
if (v_isShared_2441_ == 0)
{
lean_ctor_set(v___x_2440_, 0, v_result_2391_);
v___x_2456_ = v___x_2440_;
goto v_reusejp_2455_;
}
else
{
lean_object* v_reuseFailAlloc_2457_; 
v_reuseFailAlloc_2457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2457_, 0, v_result_2391_);
v___x_2456_ = v_reuseFailAlloc_2457_;
goto v_reusejp_2455_;
}
v_reusejp_2455_:
{
v___y_2398_ = v_zero_2422_;
v___y_2399_ = v_snd_2450_;
v___y_2400_ = v___x_2433_;
v___y_2401_ = v_todo_2436_;
v___y_2402_ = v___y_2430_;
v___y_2403_ = v___x_2431_;
v___y_2404_ = v_fst_2442_;
v___y_2405_ = v___x_2456_;
v_a_2406_ = v_result_2391_;
goto v___jp_2397_;
}
}
else
{
lean_object* v___x_2458_; 
lean_del_object(v___x_2440_);
lean_inc(v_snd_2453_);
lean_inc_ref(v_todo_2436_);
v___x_2458_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process___redArg(v_zero_2422_, v_todo_2436_, v_snd_2453_, v_result_2391_, v_a_2392_, v_a_2393_, v_a_2394_, v_a_2395_);
if (lean_obj_tag(v___x_2458_) == 0)
{
lean_object* v_a_2459_; 
v_a_2459_ = lean_ctor_get(v___x_2458_, 0);
lean_inc(v_a_2459_);
v___y_2398_ = v_zero_2422_;
v___y_2399_ = v_snd_2450_;
v___y_2400_ = v___x_2433_;
v___y_2401_ = v_todo_2436_;
v___y_2402_ = v___y_2430_;
v___y_2403_ = v___x_2431_;
v___y_2404_ = v_fst_2442_;
v___y_2405_ = v___x_2458_;
v_a_2406_ = v_a_2459_;
goto v___jp_2397_;
}
else
{
lean_dec(v_snd_2450_);
lean_dec(v_fst_2442_);
lean_dec_ref(v_todo_2436_);
lean_dec_ref(v___y_2430_);
return v___x_2458_;
}
}
}
}
}
else
{
lean_object* v_a_2461_; lean_object* v___x_2463_; uint8_t v_isShared_2464_; uint8_t v_isSharedCheck_2468_; 
lean_dec_ref(v_todo_2436_);
lean_dec_ref(v___y_2430_);
lean_dec_ref(v_result_2391_);
v_a_2461_ = lean_ctor_get(v___x_2437_, 0);
v_isSharedCheck_2468_ = !lean_is_exclusive(v___x_2437_);
if (v_isSharedCheck_2468_ == 0)
{
v___x_2463_ = v___x_2437_;
v_isShared_2464_ = v_isSharedCheck_2468_;
goto v_resetjp_2462_;
}
else
{
lean_inc(v_a_2461_);
lean_dec(v___x_2437_);
v___x_2463_ = lean_box(0);
v_isShared_2464_ = v_isSharedCheck_2468_;
goto v_resetjp_2462_;
}
v_resetjp_2462_:
{
lean_object* v___x_2466_; 
if (v_isShared_2464_ == 0)
{
v___x_2466_ = v___x_2463_;
goto v_reusejp_2465_;
}
else
{
lean_object* v_reuseFailAlloc_2467_; 
v_reuseFailAlloc_2467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2467_, 0, v_a_2461_);
v___x_2466_ = v_reuseFailAlloc_2467_;
goto v_reusejp_2465_;
}
v_reusejp_2465_:
{
return v___x_2466_;
}
}
}
}
else
{
lean_object* v___x_2469_; 
lean_dec_ref(v___y_2430_);
lean_dec_ref(v_todo_2389_);
v___x_2469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2469_, 0, v_result_2391_);
return v___x_2469_;
}
}
}
else
{
lean_dec_ref(v_todo_2389_);
if (lean_obj_tag(v_c_2390_) == 0)
{
lean_object* v___x_2483_; 
lean_dec_ref_known(v_c_2390_, 2);
v___x_2483_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg___closed__0));
v___y_2419_ = v___x_2483_;
goto v___jp_2418_;
}
else
{
lean_object* v_vs_2484_; 
v_vs_2484_ = lean_ctor_get(v_c_2390_, 0);
lean_inc_ref(v_vs_2484_);
lean_dec_ref_known(v_c_2390_, 2);
v___y_2419_ = v_vs_2484_;
goto v___jp_2418_;
}
}
}
else
{
lean_object* v_one_2485_; lean_object* v_n_2486_; 
v_one_2485_ = lean_unsigned_to_nat(1u);
v_n_2486_ = lean_nat_sub(v_skip_2388_, v_one_2485_);
lean_dec(v_skip_2388_);
if (lean_obj_tag(v_c_2390_) == 0)
{
lean_object* v_key_2487_; lean_object* v_child_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; 
v_key_2487_ = lean_ctor_get(v_c_2390_, 0);
lean_inc(v_key_2487_);
v_child_2488_ = lean_ctor_get(v_c_2390_, 1);
lean_inc_ref(v_child_2488_);
lean_dec_ref_known(v_c_2390_, 2);
v___x_2489_ = l_Lean_Meta_DiscrTree_Key_arity(v_key_2487_);
lean_dec(v_key_2487_);
v___x_2490_ = lean_nat_add(v_n_2486_, v___x_2489_);
lean_dec(v___x_2489_);
lean_dec(v_n_2486_);
v_skip_2388_ = v___x_2490_;
v_c_2390_ = v_child_2488_;
goto _start;
}
else
{
lean_object* v_children_2492_; lean_object* v___x_2493_; uint8_t v___x_2494_; 
v_children_2492_ = lean_ctor_get(v_c_2390_, 1);
lean_inc_ref(v_children_2492_);
lean_dec_ref_known(v_c_2390_, 2);
v___x_2493_ = lean_array_get_size(v_children_2492_);
v___x_2494_ = lean_nat_dec_eq(v___x_2493_, v_zero_2422_);
if (v___x_2494_ == 0)
{
uint8_t v___x_2495_; 
v___x_2495_ = lean_nat_dec_lt(v_zero_2422_, v___x_2493_);
if (v___x_2495_ == 0)
{
lean_object* v___x_2496_; 
lean_dec_ref(v_children_2492_);
lean_dec(v_n_2486_);
lean_dec_ref(v_todo_2389_);
v___x_2496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2496_, 0, v_result_2391_);
return v___x_2496_;
}
else
{
size_t v___x_2497_; size_t v___x_2498_; lean_object* v___x_2499_; 
v___x_2497_ = ((size_t)0ULL);
v___x_2498_ = lean_usize_of_nat(v___x_2493_);
v___x_2499_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__1___redArg(v_n_2486_, v_todo_2389_, v_children_2492_, v___x_2497_, v___x_2498_, v_result_2391_, v_a_2392_, v_a_2393_, v_a_2394_, v_a_2395_);
lean_dec_ref(v_children_2492_);
lean_dec(v_n_2486_);
return v___x_2499_;
}
}
else
{
lean_object* v___x_2500_; 
lean_dec_ref(v_children_2492_);
lean_dec(v_n_2486_);
lean_dec_ref(v_todo_2389_);
v___x_2500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2500_, 0, v_result_2391_);
return v___x_2500_;
}
}
}
v___jp_2397_:
{
uint8_t v___x_2407_; 
v___x_2407_ = lean_nat_dec_lt(v___y_2398_, v___y_2403_);
if (v___x_2407_ == 0)
{
lean_dec_ref(v_a_2406_);
lean_dec(v___y_2404_);
lean_dec(v___y_2403_);
lean_dec_ref(v___y_2402_);
lean_dec_ref(v___y_2401_);
lean_dec_ref(v___y_2399_);
lean_dec(v___y_2398_);
return v___y_2405_;
}
else
{
lean_object* v___x_2408_; uint8_t v___x_2409_; 
v___x_2408_ = lean_nat_sub(v___y_2403_, v___y_2400_);
lean_dec(v___y_2403_);
v___x_2409_ = lean_nat_dec_le(v___y_2398_, v___x_2408_);
if (v___x_2409_ == 0)
{
lean_dec(v___x_2408_);
lean_dec_ref(v_a_2406_);
lean_dec(v___y_2404_);
lean_dec_ref(v___y_2402_);
lean_dec_ref(v___y_2401_);
lean_dec_ref(v___y_2399_);
lean_dec(v___y_2398_);
return v___y_2405_;
}
else
{
lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; 
v___x_2410_ = lean_mk_empty_array_with_capacity(v___y_2398_);
lean_inc_ref(v___x_2410_);
v___x_2411_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2411_, 0, v___x_2410_);
lean_ctor_set(v___x_2411_, 1, v___x_2410_);
v___x_2412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2412_, 0, v___y_2404_);
lean_ctor_set(v___x_2412_, 1, v___x_2411_);
lean_inc(v___y_2398_);
v___x_2413_ = l_Array_binSearchAux___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop_spec__0___redArg(v___y_2402_, v___x_2412_, v___y_2398_, v___x_2408_);
lean_dec_ref_known(v___x_2412_, 2);
lean_dec_ref(v___y_2402_);
if (lean_obj_tag(v___x_2413_) == 0)
{
lean_dec_ref(v_a_2406_);
lean_dec_ref(v___y_2401_);
lean_dec_ref(v___y_2399_);
lean_dec(v___y_2398_);
return v___y_2405_;
}
else
{
lean_object* v_val_2414_; lean_object* v_snd_2415_; lean_object* v___x_2416_; 
lean_dec_ref(v___y_2405_);
v_val_2414_ = lean_ctor_get(v___x_2413_, 0);
lean_inc(v_val_2414_);
lean_dec_ref_known(v___x_2413_, 1);
v_snd_2415_ = lean_ctor_get(v_val_2414_, 1);
lean_inc(v_snd_2415_);
lean_dec(v_val_2414_);
v___x_2416_ = l_Array_append___redArg(v___y_2401_, v___y_2399_);
lean_dec_ref(v___y_2399_);
v_skip_2388_ = v___y_2398_;
v_todo_2389_ = v___x_2416_;
v_c_2390_ = v_snd_2415_;
v_result_2391_ = v_a_2406_;
goto _start;
}
}
}
}
v___jp_2418_:
{
lean_object* v___x_2420_; lean_object* v___x_2421_; 
v___x_2420_ = l_Array_append___redArg(v_result_2391_, v___y_2419_);
lean_dec_ref(v___y_2419_);
v___x_2421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2421_, 0, v___x_2420_);
return v___x_2421_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__0___redArg(lean_object* v_todo_2501_, lean_object* v_as_2502_, size_t v_i_2503_, size_t v_stop_2504_, lean_object* v_b_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_){
_start:
{
uint8_t v___x_2511_; 
v___x_2511_ = lean_usize_dec_eq(v_i_2503_, v_stop_2504_);
if (v___x_2511_ == 0)
{
lean_object* v___x_2512_; lean_object* v_fst_2513_; lean_object* v_snd_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; 
v___x_2512_ = lean_array_uget_borrowed(v_as_2502_, v_i_2503_);
v_fst_2513_ = lean_ctor_get(v___x_2512_, 0);
v_snd_2514_ = lean_ctor_get(v___x_2512_, 1);
v___x_2515_ = l_Lean_Meta_DiscrTree_Key_arity(v_fst_2513_);
lean_inc(v_snd_2514_);
lean_inc_ref(v_todo_2501_);
v___x_2516_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process___redArg(v___x_2515_, v_todo_2501_, v_snd_2514_, v_b_2505_, v___y_2506_, v___y_2507_, v___y_2508_, v___y_2509_);
if (lean_obj_tag(v___x_2516_) == 0)
{
lean_object* v_a_2517_; size_t v___x_2518_; size_t v___x_2519_; 
v_a_2517_ = lean_ctor_get(v___x_2516_, 0);
lean_inc(v_a_2517_);
lean_dec_ref_known(v___x_2516_, 1);
v___x_2518_ = ((size_t)1ULL);
v___x_2519_ = lean_usize_add(v_i_2503_, v___x_2518_);
v_i_2503_ = v___x_2519_;
v_b_2505_ = v_a_2517_;
goto _start;
}
else
{
lean_dec_ref(v_todo_2501_);
return v___x_2516_;
}
}
else
{
lean_object* v___x_2521_; 
lean_dec_ref(v_todo_2501_);
v___x_2521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2521_, 0, v_b_2505_);
return v___x_2521_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__0___redArg___boxed(lean_object* v_todo_2522_, lean_object* v_as_2523_, lean_object* v_i_2524_, lean_object* v_stop_2525_, lean_object* v_b_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_){
_start:
{
size_t v_i_boxed_2532_; size_t v_stop_boxed_2533_; lean_object* v_res_2534_; 
v_i_boxed_2532_ = lean_unbox_usize(v_i_2524_);
lean_dec(v_i_2524_);
v_stop_boxed_2533_ = lean_unbox_usize(v_stop_2525_);
lean_dec(v_stop_2525_);
v_res_2534_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__0___redArg(v_todo_2522_, v_as_2523_, v_i_boxed_2532_, v_stop_boxed_2533_, v_b_2526_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_);
lean_dec(v___y_2530_);
lean_dec_ref(v___y_2529_);
lean_dec(v___y_2528_);
lean_dec_ref(v___y_2527_);
lean_dec_ref(v_as_2523_);
return v_res_2534_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__1___redArg___boxed(lean_object* v_n_2535_, lean_object* v_todo_2536_, lean_object* v_as_2537_, lean_object* v_i_2538_, lean_object* v_stop_2539_, lean_object* v_b_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_){
_start:
{
size_t v_i_boxed_2546_; size_t v_stop_boxed_2547_; lean_object* v_res_2548_; 
v_i_boxed_2546_ = lean_unbox_usize(v_i_2538_);
lean_dec(v_i_2538_);
v_stop_boxed_2547_ = lean_unbox_usize(v_stop_2539_);
lean_dec(v_stop_2539_);
v_res_2548_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__1___redArg(v_n_2535_, v_todo_2536_, v_as_2537_, v_i_boxed_2546_, v_stop_boxed_2547_, v_b_2540_, v___y_2541_, v___y_2542_, v___y_2543_, v___y_2544_);
lean_dec(v___y_2544_);
lean_dec_ref(v___y_2543_);
lean_dec(v___y_2542_);
lean_dec_ref(v___y_2541_);
lean_dec_ref(v_as_2537_);
lean_dec(v_n_2535_);
return v_res_2548_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process___redArg___boxed(lean_object* v_skip_2549_, lean_object* v_todo_2550_, lean_object* v_c_2551_, lean_object* v_result_2552_, lean_object* v_a_2553_, lean_object* v_a_2554_, lean_object* v_a_2555_, lean_object* v_a_2556_, lean_object* v_a_2557_){
_start:
{
lean_object* v_res_2558_; 
v_res_2558_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process___redArg(v_skip_2549_, v_todo_2550_, v_c_2551_, v_result_2552_, v_a_2553_, v_a_2554_, v_a_2555_, v_a_2556_);
lean_dec(v_a_2556_);
lean_dec_ref(v_a_2555_);
lean_dec(v_a_2554_);
lean_dec_ref(v_a_2553_);
return v_res_2558_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process(lean_object* v_00_u03b1_2559_, lean_object* v_skip_2560_, lean_object* v_todo_2561_, lean_object* v_c_2562_, lean_object* v_result_2563_, lean_object* v_a_2564_, lean_object* v_a_2565_, lean_object* v_a_2566_, lean_object* v_a_2567_){
_start:
{
lean_object* v___x_2569_; 
v___x_2569_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process___redArg(v_skip_2560_, v_todo_2561_, v_c_2562_, v_result_2563_, v_a_2564_, v_a_2565_, v_a_2566_, v_a_2567_);
return v___x_2569_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process___boxed(lean_object* v_00_u03b1_2570_, lean_object* v_skip_2571_, lean_object* v_todo_2572_, lean_object* v_c_2573_, lean_object* v_result_2574_, lean_object* v_a_2575_, lean_object* v_a_2576_, lean_object* v_a_2577_, lean_object* v_a_2578_, lean_object* v_a_2579_){
_start:
{
lean_object* v_res_2580_; 
v_res_2580_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process(v_00_u03b1_2570_, v_skip_2571_, v_todo_2572_, v_c_2573_, v_result_2574_, v_a_2575_, v_a_2576_, v_a_2577_, v_a_2578_);
lean_dec(v_a_2578_);
lean_dec_ref(v_a_2577_);
lean_dec(v_a_2576_);
lean_dec_ref(v_a_2575_);
return v_res_2580_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__0(lean_object* v_00_u03b1_2581_, lean_object* v_todo_2582_, lean_object* v_as_2583_, size_t v_i_2584_, size_t v_stop_2585_, lean_object* v_b_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_){
_start:
{
lean_object* v___x_2592_; 
v___x_2592_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__0___redArg(v_todo_2582_, v_as_2583_, v_i_2584_, v_stop_2585_, v_b_2586_, v___y_2587_, v___y_2588_, v___y_2589_, v___y_2590_);
return v___x_2592_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__0___boxed(lean_object* v_00_u03b1_2593_, lean_object* v_todo_2594_, lean_object* v_as_2595_, lean_object* v_i_2596_, lean_object* v_stop_2597_, lean_object* v_b_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_){
_start:
{
size_t v_i_boxed_2604_; size_t v_stop_boxed_2605_; lean_object* v_res_2606_; 
v_i_boxed_2604_ = lean_unbox_usize(v_i_2596_);
lean_dec(v_i_2596_);
v_stop_boxed_2605_ = lean_unbox_usize(v_stop_2597_);
lean_dec(v_stop_2597_);
v_res_2606_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__0(v_00_u03b1_2593_, v_todo_2594_, v_as_2595_, v_i_boxed_2604_, v_stop_boxed_2605_, v_b_2598_, v___y_2599_, v___y_2600_, v___y_2601_, v___y_2602_);
lean_dec(v___y_2602_);
lean_dec_ref(v___y_2601_);
lean_dec(v___y_2600_);
lean_dec_ref(v___y_2599_);
lean_dec_ref(v_as_2595_);
return v_res_2606_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__1(lean_object* v_00_u03b1_2607_, lean_object* v_n_2608_, lean_object* v_todo_2609_, lean_object* v_as_2610_, size_t v_i_2611_, size_t v_stop_2612_, lean_object* v_b_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_){
_start:
{
lean_object* v___x_2619_; 
v___x_2619_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__1___redArg(v_n_2608_, v_todo_2609_, v_as_2610_, v_i_2611_, v_stop_2612_, v_b_2613_, v___y_2614_, v___y_2615_, v___y_2616_, v___y_2617_);
return v___x_2619_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__1___boxed(lean_object* v_00_u03b1_2620_, lean_object* v_n_2621_, lean_object* v_todo_2622_, lean_object* v_as_2623_, lean_object* v_i_2624_, lean_object* v_stop_2625_, lean_object* v_b_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_){
_start:
{
size_t v_i_boxed_2632_; size_t v_stop_boxed_2633_; lean_object* v_res_2634_; 
v_i_boxed_2632_ = lean_unbox_usize(v_i_2624_);
lean_dec(v_i_2624_);
v_stop_boxed_2633_ = lean_unbox_usize(v_stop_2625_);
lean_dec(v_stop_2625_);
v_res_2634_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__1(v_00_u03b1_2620_, v_n_2621_, v_todo_2622_, v_as_2623_, v_i_boxed_2632_, v_stop_boxed_2633_, v_b_2626_, v___y_2627_, v___y_2628_, v___y_2629_, v___y_2630_);
lean_dec(v___y_2630_);
lean_dec_ref(v___y_2629_);
lean_dec(v___y_2628_);
lean_dec_ref(v___y_2627_);
lean_dec_ref(v_as_2623_);
lean_dec(v_n_2621_);
return v_res_2634_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify___redArg___lam__0(lean_object* v_result_2635_, lean_object* v_k_2636_, lean_object* v_c_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_){
_start:
{
lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; 
v___x_2643_ = l_Lean_Meta_DiscrTree_Key_arity(v_k_2636_);
v___x_2644_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__0));
v___x_2645_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process___redArg(v___x_2643_, v___x_2644_, v_c_2637_, v_result_2635_, v___y_2638_, v___y_2639_, v___y_2640_, v___y_2641_);
return v___x_2645_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify___redArg___lam__0___boxed(lean_object* v_result_2646_, lean_object* v_k_2647_, lean_object* v_c_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_){
_start:
{
lean_object* v_res_2654_; 
v_res_2654_ = l_Lean_Meta_DiscrTree_getUnify___redArg___lam__0(v_result_2646_, v_k_2647_, v_c_2648_, v___y_2649_, v___y_2650_, v___y_2651_, v___y_2652_);
lean_dec(v___y_2652_);
lean_dec_ref(v___y_2651_);
lean_dec(v___y_2650_);
lean_dec_ref(v___y_2649_);
lean_dec(v_k_2647_);
return v_res_2654_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__2___redArg(lean_object* v_f_2655_, lean_object* v_keys_2656_, lean_object* v_vals_2657_, lean_object* v_i_2658_, lean_object* v_acc_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_){
_start:
{
lean_object* v___x_2665_; uint8_t v___x_2666_; 
v___x_2665_ = lean_array_get_size(v_keys_2656_);
v___x_2666_ = lean_nat_dec_lt(v_i_2658_, v___x_2665_);
if (v___x_2666_ == 0)
{
lean_object* v___x_2667_; 
lean_dec(v_i_2658_);
lean_dec_ref(v_f_2655_);
v___x_2667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2667_, 0, v_acc_2659_);
return v___x_2667_;
}
else
{
lean_object* v_k_2668_; lean_object* v_v_2669_; lean_object* v___x_2670_; 
v_k_2668_ = lean_array_fget_borrowed(v_keys_2656_, v_i_2658_);
v_v_2669_ = lean_array_fget_borrowed(v_vals_2657_, v_i_2658_);
lean_inc_ref(v_f_2655_);
lean_inc(v___y_2663_);
lean_inc_ref(v___y_2662_);
lean_inc(v___y_2661_);
lean_inc_ref(v___y_2660_);
lean_inc(v_v_2669_);
lean_inc(v_k_2668_);
v___x_2670_ = lean_apply_8(v_f_2655_, v_acc_2659_, v_k_2668_, v_v_2669_, v___y_2660_, v___y_2661_, v___y_2662_, v___y_2663_, lean_box(0));
if (lean_obj_tag(v___x_2670_) == 0)
{
lean_object* v_a_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; 
v_a_2671_ = lean_ctor_get(v___x_2670_, 0);
lean_inc(v_a_2671_);
lean_dec_ref_known(v___x_2670_, 1);
v___x_2672_ = lean_unsigned_to_nat(1u);
v___x_2673_ = lean_nat_add(v_i_2658_, v___x_2672_);
lean_dec(v_i_2658_);
v_i_2658_ = v___x_2673_;
v_acc_2659_ = v_a_2671_;
goto _start;
}
else
{
lean_dec(v_i_2658_);
lean_dec_ref(v_f_2655_);
return v___x_2670_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_f_2675_, lean_object* v_keys_2676_, lean_object* v_vals_2677_, lean_object* v_i_2678_, lean_object* v_acc_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_){
_start:
{
lean_object* v_res_2685_; 
v_res_2685_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__2___redArg(v_f_2675_, v_keys_2676_, v_vals_2677_, v_i_2678_, v_acc_2679_, v___y_2680_, v___y_2681_, v___y_2682_, v___y_2683_);
lean_dec(v___y_2683_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec_ref(v_vals_2677_);
lean_dec_ref(v_keys_2676_);
return v_res_2685_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__1___redArg(lean_object* v_f_2686_, lean_object* v_as_2687_, size_t v_i_2688_, size_t v_stop_2689_, lean_object* v_b_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_){
_start:
{
lean_object* v_a_2697_; lean_object* v___y_2702_; uint8_t v___x_2704_; 
v___x_2704_ = lean_usize_dec_eq(v_i_2688_, v_stop_2689_);
if (v___x_2704_ == 0)
{
lean_object* v___x_2705_; 
v___x_2705_ = lean_array_uget_borrowed(v_as_2687_, v_i_2688_);
switch(lean_obj_tag(v___x_2705_))
{
case 0:
{
lean_object* v_key_2706_; lean_object* v_val_2707_; lean_object* v___x_2708_; 
v_key_2706_ = lean_ctor_get(v___x_2705_, 0);
v_val_2707_ = lean_ctor_get(v___x_2705_, 1);
lean_inc_ref(v_f_2686_);
lean_inc(v___y_2694_);
lean_inc_ref(v___y_2693_);
lean_inc(v___y_2692_);
lean_inc_ref(v___y_2691_);
lean_inc(v_val_2707_);
lean_inc(v_key_2706_);
v___x_2708_ = lean_apply_8(v_f_2686_, v_b_2690_, v_key_2706_, v_val_2707_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_, lean_box(0));
v___y_2702_ = v___x_2708_;
goto v___jp_2701_;
}
case 1:
{
lean_object* v_node_2709_; lean_object* v___x_2710_; 
v_node_2709_ = lean_ctor_get(v___x_2705_, 0);
lean_inc(v_node_2709_);
lean_inc_ref(v_f_2686_);
v___x_2710_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0___redArg(v_f_2686_, v_node_2709_, v_b_2690_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_);
v___y_2702_ = v___x_2710_;
goto v___jp_2701_;
}
default: 
{
v_a_2697_ = v_b_2690_;
goto v___jp_2696_;
}
}
}
else
{
lean_object* v___x_2711_; 
lean_dec_ref(v_f_2686_);
v___x_2711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2711_, 0, v_b_2690_);
return v___x_2711_;
}
v___jp_2696_:
{
size_t v___x_2698_; size_t v___x_2699_; 
v___x_2698_ = ((size_t)1ULL);
v___x_2699_ = lean_usize_add(v_i_2688_, v___x_2698_);
v_i_2688_ = v___x_2699_;
v_b_2690_ = v_a_2697_;
goto _start;
}
v___jp_2701_:
{
if (lean_obj_tag(v___y_2702_) == 0)
{
lean_object* v_a_2703_; 
v_a_2703_ = lean_ctor_get(v___y_2702_, 0);
lean_inc(v_a_2703_);
lean_dec_ref_known(v___y_2702_, 1);
v_a_2697_ = v_a_2703_;
goto v___jp_2696_;
}
else
{
lean_dec_ref(v_f_2686_);
return v___y_2702_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0___redArg(lean_object* v_f_2712_, lean_object* v_x_2713_, lean_object* v_x_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_){
_start:
{
if (lean_obj_tag(v_x_2713_) == 0)
{
lean_object* v_es_2720_; lean_object* v___x_2722_; uint8_t v_isShared_2723_; uint8_t v_isSharedCheck_2733_; 
v_es_2720_ = lean_ctor_get(v_x_2713_, 0);
v_isSharedCheck_2733_ = !lean_is_exclusive(v_x_2713_);
if (v_isSharedCheck_2733_ == 0)
{
v___x_2722_ = v_x_2713_;
v_isShared_2723_ = v_isSharedCheck_2733_;
goto v_resetjp_2721_;
}
else
{
lean_inc(v_es_2720_);
lean_dec(v_x_2713_);
v___x_2722_ = lean_box(0);
v_isShared_2723_ = v_isSharedCheck_2733_;
goto v_resetjp_2721_;
}
v_resetjp_2721_:
{
lean_object* v___x_2724_; lean_object* v___x_2725_; uint8_t v___x_2726_; 
v___x_2724_ = lean_unsigned_to_nat(0u);
v___x_2725_ = lean_array_get_size(v_es_2720_);
v___x_2726_ = lean_nat_dec_lt(v___x_2724_, v___x_2725_);
if (v___x_2726_ == 0)
{
lean_object* v___x_2728_; 
lean_dec_ref(v_es_2720_);
lean_dec_ref(v_f_2712_);
if (v_isShared_2723_ == 0)
{
lean_ctor_set(v___x_2722_, 0, v_x_2714_);
v___x_2728_ = v___x_2722_;
goto v_reusejp_2727_;
}
else
{
lean_object* v_reuseFailAlloc_2729_; 
v_reuseFailAlloc_2729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2729_, 0, v_x_2714_);
v___x_2728_ = v_reuseFailAlloc_2729_;
goto v_reusejp_2727_;
}
v_reusejp_2727_:
{
return v___x_2728_;
}
}
else
{
size_t v___x_2730_; size_t v___x_2731_; lean_object* v___x_2732_; 
lean_del_object(v___x_2722_);
v___x_2730_ = ((size_t)0ULL);
v___x_2731_ = lean_usize_of_nat(v___x_2725_);
v___x_2732_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__1___redArg(v_f_2712_, v_es_2720_, v___x_2730_, v___x_2731_, v_x_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
lean_dec_ref(v_es_2720_);
return v___x_2732_;
}
}
}
else
{
lean_object* v_ks_2734_; lean_object* v_vs_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; 
v_ks_2734_ = lean_ctor_get(v_x_2713_, 0);
lean_inc_ref(v_ks_2734_);
v_vs_2735_ = lean_ctor_get(v_x_2713_, 1);
lean_inc_ref(v_vs_2735_);
lean_dec_ref_known(v_x_2713_, 2);
v___x_2736_ = lean_unsigned_to_nat(0u);
v___x_2737_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__2___redArg(v_f_2712_, v_ks_2734_, v_vs_2735_, v___x_2736_, v_x_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
lean_dec_ref(v_vs_2735_);
lean_dec_ref(v_ks_2734_);
return v___x_2737_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0___redArg___boxed(lean_object* v_f_2738_, lean_object* v_x_2739_, lean_object* v_x_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_){
_start:
{
lean_object* v_res_2746_; 
v_res_2746_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0___redArg(v_f_2738_, v_x_2739_, v_x_2740_, v___y_2741_, v___y_2742_, v___y_2743_, v___y_2744_);
lean_dec(v___y_2744_);
lean_dec_ref(v___y_2743_);
lean_dec(v___y_2742_);
lean_dec_ref(v___y_2741_);
return v_res_2746_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_f_2747_, lean_object* v_as_2748_, lean_object* v_i_2749_, lean_object* v_stop_2750_, lean_object* v_b_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_){
_start:
{
size_t v_i_boxed_2757_; size_t v_stop_boxed_2758_; lean_object* v_res_2759_; 
v_i_boxed_2757_ = lean_unbox_usize(v_i_2749_);
lean_dec(v_i_2749_);
v_stop_boxed_2758_ = lean_unbox_usize(v_stop_2750_);
lean_dec(v_stop_2750_);
v_res_2759_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__1___redArg(v_f_2747_, v_as_2748_, v_i_boxed_2757_, v_stop_boxed_2758_, v_b_2751_, v___y_2752_, v___y_2753_, v___y_2754_, v___y_2755_);
lean_dec(v___y_2755_);
lean_dec_ref(v___y_2754_);
lean_dec(v___y_2753_);
lean_dec_ref(v___y_2752_);
lean_dec_ref(v_as_2748_);
return v_res_2759_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify___redArg___lam__1(lean_object* v_e_2760_, uint8_t v___x_2761_, lean_object* v___f_2762_, lean_object* v_d_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_){
_start:
{
uint8_t v___x_2769_; lean_object* v___x_2770_; 
v___x_2769_ = 0;
v___x_2770_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs(v_e_2760_, v___x_2769_, v___x_2761_, v___y_2764_, v___y_2765_, v___y_2766_, v___y_2767_);
if (lean_obj_tag(v___x_2770_) == 0)
{
lean_object* v_a_2771_; lean_object* v___x_2773_; uint8_t v_isShared_2774_; uint8_t v_isSharedCheck_2787_; 
v_a_2771_ = lean_ctor_get(v___x_2770_, 0);
v_isSharedCheck_2787_ = !lean_is_exclusive(v___x_2770_);
if (v_isSharedCheck_2787_ == 0)
{
v___x_2773_ = v___x_2770_;
v_isShared_2774_ = v_isSharedCheck_2787_;
goto v_resetjp_2772_;
}
else
{
lean_inc(v_a_2771_);
lean_dec(v___x_2770_);
v___x_2773_ = lean_box(0);
v_isShared_2774_ = v_isSharedCheck_2787_;
goto v_resetjp_2772_;
}
v_resetjp_2772_:
{
lean_object* v_fst_2775_; 
v_fst_2775_ = lean_ctor_get(v_a_2771_, 0);
lean_inc(v_fst_2775_);
if (lean_obj_tag(v_fst_2775_) == 0)
{
lean_object* v___x_2776_; lean_object* v___x_2777_; 
lean_del_object(v___x_2773_);
lean_dec(v_a_2771_);
v___x_2776_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg___closed__0));
v___x_2777_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0___redArg(v___f_2762_, v_d_2763_, v___x_2776_, v___y_2764_, v___y_2765_, v___y_2766_, v___y_2767_);
return v___x_2777_;
}
else
{
lean_object* v_snd_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; 
lean_dec_ref(v___f_2762_);
v_snd_2778_ = lean_ctor_get(v_a_2771_, 1);
lean_inc(v_snd_2778_);
lean_dec(v_a_2771_);
v___x_2779_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg(v_d_2763_);
v___x_2780_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0___redArg(v_d_2763_, v_fst_2775_);
lean_dec(v_fst_2775_);
lean_dec_ref(v_d_2763_);
if (lean_obj_tag(v___x_2780_) == 0)
{
lean_object* v___x_2782_; 
lean_dec(v_snd_2778_);
if (v_isShared_2774_ == 0)
{
lean_ctor_set(v___x_2773_, 0, v___x_2779_);
v___x_2782_ = v___x_2773_;
goto v_reusejp_2781_;
}
else
{
lean_object* v_reuseFailAlloc_2783_; 
v_reuseFailAlloc_2783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2783_, 0, v___x_2779_);
v___x_2782_ = v_reuseFailAlloc_2783_;
goto v_reusejp_2781_;
}
v_reusejp_2781_:
{
return v___x_2782_;
}
}
else
{
lean_object* v_val_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; 
lean_del_object(v___x_2773_);
v_val_2784_ = lean_ctor_get(v___x_2780_, 0);
lean_inc(v_val_2784_);
lean_dec_ref_known(v___x_2780_, 1);
v___x_2785_ = lean_unsigned_to_nat(0u);
v___x_2786_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process___redArg(v___x_2785_, v_snd_2778_, v_val_2784_, v___x_2779_, v___y_2764_, v___y_2765_, v___y_2766_, v___y_2767_);
return v___x_2786_;
}
}
}
}
else
{
lean_object* v_a_2788_; lean_object* v___x_2790_; uint8_t v_isShared_2791_; uint8_t v_isSharedCheck_2795_; 
lean_dec_ref(v_d_2763_);
lean_dec_ref(v___f_2762_);
v_a_2788_ = lean_ctor_get(v___x_2770_, 0);
v_isSharedCheck_2795_ = !lean_is_exclusive(v___x_2770_);
if (v_isSharedCheck_2795_ == 0)
{
v___x_2790_ = v___x_2770_;
v_isShared_2791_ = v_isSharedCheck_2795_;
goto v_resetjp_2789_;
}
else
{
lean_inc(v_a_2788_);
lean_dec(v___x_2770_);
v___x_2790_ = lean_box(0);
v_isShared_2791_ = v_isSharedCheck_2795_;
goto v_resetjp_2789_;
}
v_resetjp_2789_:
{
lean_object* v___x_2793_; 
if (v_isShared_2791_ == 0)
{
v___x_2793_ = v___x_2790_;
goto v_reusejp_2792_;
}
else
{
lean_object* v_reuseFailAlloc_2794_; 
v_reuseFailAlloc_2794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2794_, 0, v_a_2788_);
v___x_2793_ = v_reuseFailAlloc_2794_;
goto v_reusejp_2792_;
}
v_reusejp_2792_:
{
return v___x_2793_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify___redArg___lam__1___boxed(lean_object* v_e_2796_, lean_object* v___x_2797_, lean_object* v___f_2798_, lean_object* v_d_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_, lean_object* v___y_2803_, lean_object* v___y_2804_){
_start:
{
uint8_t v___x_1524__boxed_2805_; lean_object* v_res_2806_; 
v___x_1524__boxed_2805_ = lean_unbox(v___x_2797_);
v_res_2806_ = l_Lean_Meta_DiscrTree_getUnify___redArg___lam__1(v_e_2796_, v___x_1524__boxed_2805_, v___f_2798_, v_d_2799_, v___y_2800_, v___y_2801_, v___y_2802_, v___y_2803_);
lean_dec(v___y_2803_);
lean_dec_ref(v___y_2802_);
lean_dec(v___y_2801_);
lean_dec_ref(v___y_2800_);
return v_res_2806_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify___redArg(lean_object* v_d_2808_, lean_object* v_e_2809_, lean_object* v_a_2810_, lean_object* v_a_2811_, lean_object* v_a_2812_, lean_object* v_a_2813_){
_start:
{
lean_object* v___y_2816_; lean_object* v___x_2833_; uint8_t v_transparency_2834_; lean_object* v___f_2835_; uint8_t v___x_2836_; uint8_t v___x_2837_; uint8_t v___x_2838_; 
v___x_2833_ = l_Lean_Meta_Context_config(v_a_2810_);
v_transparency_2834_ = lean_ctor_get_uint8(v___x_2833_, 9);
lean_dec_ref(v___x_2833_);
v___f_2835_ = ((lean_object*)(l_Lean_Meta_DiscrTree_getUnify___redArg___closed__0));
v___x_2836_ = 1;
v___x_2837_ = 2;
v___x_2838_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2834_, v___x_2837_);
if (v___x_2838_ == 0)
{
lean_object* v_keyedConfig_2839_; uint8_t v_trackZetaDelta_2840_; lean_object* v_zetaDeltaSet_2841_; lean_object* v_lctx_2842_; lean_object* v_localInstances_2843_; lean_object* v_defEqCtx_x3f_2844_; lean_object* v_synthPendingDepth_2845_; lean_object* v_customCanUnfoldPredicate_x3f_2846_; uint8_t v_univApprox_2847_; uint8_t v_inTypeClassResolution_2848_; uint8_t v_cacheInferType_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; 
v_keyedConfig_2839_ = lean_ctor_get(v_a_2810_, 0);
v_trackZetaDelta_2840_ = lean_ctor_get_uint8(v_a_2810_, sizeof(void*)*7);
v_zetaDeltaSet_2841_ = lean_ctor_get(v_a_2810_, 1);
v_lctx_2842_ = lean_ctor_get(v_a_2810_, 2);
v_localInstances_2843_ = lean_ctor_get(v_a_2810_, 3);
v_defEqCtx_x3f_2844_ = lean_ctor_get(v_a_2810_, 4);
v_synthPendingDepth_2845_ = lean_ctor_get(v_a_2810_, 5);
v_customCanUnfoldPredicate_x3f_2846_ = lean_ctor_get(v_a_2810_, 6);
v_univApprox_2847_ = lean_ctor_get_uint8(v_a_2810_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2848_ = lean_ctor_get_uint8(v_a_2810_, sizeof(void*)*7 + 2);
v_cacheInferType_2849_ = lean_ctor_get_uint8(v_a_2810_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2839_);
v___x_2850_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2837_, v_keyedConfig_2839_);
lean_inc(v_customCanUnfoldPredicate_x3f_2846_);
lean_inc(v_synthPendingDepth_2845_);
lean_inc(v_defEqCtx_x3f_2844_);
lean_inc_ref(v_localInstances_2843_);
lean_inc_ref(v_lctx_2842_);
lean_inc(v_zetaDeltaSet_2841_);
v___x_2851_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2851_, 0, v___x_2850_);
lean_ctor_set(v___x_2851_, 1, v_zetaDeltaSet_2841_);
lean_ctor_set(v___x_2851_, 2, v_lctx_2842_);
lean_ctor_set(v___x_2851_, 3, v_localInstances_2843_);
lean_ctor_set(v___x_2851_, 4, v_defEqCtx_x3f_2844_);
lean_ctor_set(v___x_2851_, 5, v_synthPendingDepth_2845_);
lean_ctor_set(v___x_2851_, 6, v_customCanUnfoldPredicate_x3f_2846_);
lean_ctor_set_uint8(v___x_2851_, sizeof(void*)*7, v_trackZetaDelta_2840_);
lean_ctor_set_uint8(v___x_2851_, sizeof(void*)*7 + 1, v_univApprox_2847_);
lean_ctor_set_uint8(v___x_2851_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2848_);
lean_ctor_set_uint8(v___x_2851_, sizeof(void*)*7 + 3, v_cacheInferType_2849_);
v___x_2852_ = l_Lean_Meta_DiscrTree_getUnify___redArg___lam__1(v_e_2809_, v___x_2836_, v___f_2835_, v_d_2808_, v___x_2851_, v_a_2811_, v_a_2812_, v_a_2813_);
lean_dec_ref_known(v___x_2851_, 7);
v___y_2816_ = v___x_2852_;
goto v___jp_2815_;
}
else
{
lean_object* v___x_2853_; 
v___x_2853_ = l_Lean_Meta_DiscrTree_getUnify___redArg___lam__1(v_e_2809_, v___x_2836_, v___f_2835_, v_d_2808_, v_a_2810_, v_a_2811_, v_a_2812_, v_a_2813_);
v___y_2816_ = v___x_2853_;
goto v___jp_2815_;
}
v___jp_2815_:
{
if (lean_obj_tag(v___y_2816_) == 0)
{
lean_object* v_a_2817_; lean_object* v___x_2819_; uint8_t v_isShared_2820_; uint8_t v_isSharedCheck_2824_; 
v_a_2817_ = lean_ctor_get(v___y_2816_, 0);
v_isSharedCheck_2824_ = !lean_is_exclusive(v___y_2816_);
if (v_isSharedCheck_2824_ == 0)
{
v___x_2819_ = v___y_2816_;
v_isShared_2820_ = v_isSharedCheck_2824_;
goto v_resetjp_2818_;
}
else
{
lean_inc(v_a_2817_);
lean_dec(v___y_2816_);
v___x_2819_ = lean_box(0);
v_isShared_2820_ = v_isSharedCheck_2824_;
goto v_resetjp_2818_;
}
v_resetjp_2818_:
{
lean_object* v___x_2822_; 
if (v_isShared_2820_ == 0)
{
v___x_2822_ = v___x_2819_;
goto v_reusejp_2821_;
}
else
{
lean_object* v_reuseFailAlloc_2823_; 
v_reuseFailAlloc_2823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2823_, 0, v_a_2817_);
v___x_2822_ = v_reuseFailAlloc_2823_;
goto v_reusejp_2821_;
}
v_reusejp_2821_:
{
return v___x_2822_;
}
}
}
else
{
lean_object* v_a_2825_; lean_object* v___x_2827_; uint8_t v_isShared_2828_; uint8_t v_isSharedCheck_2832_; 
v_a_2825_ = lean_ctor_get(v___y_2816_, 0);
v_isSharedCheck_2832_ = !lean_is_exclusive(v___y_2816_);
if (v_isSharedCheck_2832_ == 0)
{
v___x_2827_ = v___y_2816_;
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
else
{
lean_inc(v_a_2825_);
lean_dec(v___y_2816_);
v___x_2827_ = lean_box(0);
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
v_resetjp_2826_:
{
lean_object* v___x_2830_; 
if (v_isShared_2828_ == 0)
{
v___x_2830_ = v___x_2827_;
goto v_reusejp_2829_;
}
else
{
lean_object* v_reuseFailAlloc_2831_; 
v_reuseFailAlloc_2831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2831_, 0, v_a_2825_);
v___x_2830_ = v_reuseFailAlloc_2831_;
goto v_reusejp_2829_;
}
v_reusejp_2829_:
{
return v___x_2830_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify___redArg___boxed(lean_object* v_d_2854_, lean_object* v_e_2855_, lean_object* v_a_2856_, lean_object* v_a_2857_, lean_object* v_a_2858_, lean_object* v_a_2859_, lean_object* v_a_2860_){
_start:
{
lean_object* v_res_2861_; 
v_res_2861_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v_d_2854_, v_e_2855_, v_a_2856_, v_a_2857_, v_a_2858_, v_a_2859_);
lean_dec(v_a_2859_);
lean_dec_ref(v_a_2858_);
lean_dec(v_a_2857_);
lean_dec_ref(v_a_2856_);
return v_res_2861_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify(lean_object* v_00_u03b1_2862_, lean_object* v_d_2863_, lean_object* v_e_2864_, lean_object* v_a_2865_, lean_object* v_a_2866_, lean_object* v_a_2867_, lean_object* v_a_2868_){
_start:
{
lean_object* v___x_2870_; 
v___x_2870_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v_d_2863_, v_e_2864_, v_a_2865_, v_a_2866_, v_a_2867_, v_a_2868_);
return v___x_2870_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify___boxed(lean_object* v_00_u03b1_2871_, lean_object* v_d_2872_, lean_object* v_e_2873_, lean_object* v_a_2874_, lean_object* v_a_2875_, lean_object* v_a_2876_, lean_object* v_a_2877_, lean_object* v_a_2878_){
_start:
{
lean_object* v_res_2879_; 
v_res_2879_ = l_Lean_Meta_DiscrTree_getUnify(v_00_u03b1_2871_, v_d_2872_, v_e_2873_, v_a_2874_, v_a_2875_, v_a_2876_, v_a_2877_);
lean_dec(v_a_2877_);
lean_dec_ref(v_a_2876_);
lean_dec(v_a_2875_);
lean_dec_ref(v_a_2874_);
return v_res_2879_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0___redArg(lean_object* v_map_2880_, lean_object* v_f_2881_, lean_object* v_init_2882_, lean_object* v___y_2883_, lean_object* v___y_2884_, lean_object* v___y_2885_, lean_object* v___y_2886_){
_start:
{
lean_object* v___x_2888_; 
v___x_2888_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0___redArg(v_f_2881_, v_map_2880_, v_init_2882_, v___y_2883_, v___y_2884_, v___y_2885_, v___y_2886_);
return v___x_2888_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0___redArg___boxed(lean_object* v_map_2889_, lean_object* v_f_2890_, lean_object* v_init_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_){
_start:
{
lean_object* v_res_2897_; 
v_res_2897_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0___redArg(v_map_2889_, v_f_2890_, v_init_2891_, v___y_2892_, v___y_2893_, v___y_2894_, v___y_2895_);
lean_dec(v___y_2895_);
lean_dec_ref(v___y_2894_);
lean_dec(v___y_2893_);
lean_dec_ref(v___y_2892_);
return v_res_2897_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0(lean_object* v_00_u03c3_2898_, lean_object* v_00_u03b2_2899_, lean_object* v_map_2900_, lean_object* v_f_2901_, lean_object* v_init_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_){
_start:
{
lean_object* v___x_2908_; 
v___x_2908_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0___redArg(v_f_2901_, v_map_2900_, v_init_2902_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_);
return v___x_2908_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0___boxed(lean_object* v_00_u03c3_2909_, lean_object* v_00_u03b2_2910_, lean_object* v_map_2911_, lean_object* v_f_2912_, lean_object* v_init_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_){
_start:
{
lean_object* v_res_2919_; 
v_res_2919_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0(v_00_u03c3_2909_, v_00_u03b2_2910_, v_map_2911_, v_f_2912_, v_init_2913_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_);
lean_dec(v___y_2917_);
lean_dec_ref(v___y_2916_);
lean_dec(v___y_2915_);
lean_dec_ref(v___y_2914_);
return v_res_2919_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0(lean_object* v_00_u03c3_2920_, lean_object* v_00_u03b1_2921_, lean_object* v_00_u03b2_2922_, lean_object* v_f_2923_, lean_object* v_x_2924_, lean_object* v_x_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_, lean_object* v___y_2929_){
_start:
{
lean_object* v___x_2931_; 
v___x_2931_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0___redArg(v_f_2923_, v_x_2924_, v_x_2925_, v___y_2926_, v___y_2927_, v___y_2928_, v___y_2929_);
return v___x_2931_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0___boxed(lean_object* v_00_u03c3_2932_, lean_object* v_00_u03b1_2933_, lean_object* v_00_u03b2_2934_, lean_object* v_f_2935_, lean_object* v_x_2936_, lean_object* v_x_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_){
_start:
{
lean_object* v_res_2943_; 
v_res_2943_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0(v_00_u03c3_2932_, v_00_u03b1_2933_, v_00_u03b2_2934_, v_f_2935_, v_x_2936_, v_x_2937_, v___y_2938_, v___y_2939_, v___y_2940_, v___y_2941_);
lean_dec(v___y_2941_);
lean_dec_ref(v___y_2940_);
lean_dec(v___y_2939_);
lean_dec_ref(v___y_2938_);
return v_res_2943_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_2944_, lean_object* v_00_u03b2_2945_, lean_object* v_00_u03c3_2946_, lean_object* v_f_2947_, lean_object* v_as_2948_, size_t v_i_2949_, size_t v_stop_2950_, lean_object* v_b_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_){
_start:
{
lean_object* v___x_2957_; 
v___x_2957_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__1___redArg(v_f_2947_, v_as_2948_, v_i_2949_, v_stop_2950_, v_b_2951_, v___y_2952_, v___y_2953_, v___y_2954_, v___y_2955_);
return v___x_2957_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2958_, lean_object* v_00_u03b2_2959_, lean_object* v_00_u03c3_2960_, lean_object* v_f_2961_, lean_object* v_as_2962_, lean_object* v_i_2963_, lean_object* v_stop_2964_, lean_object* v_b_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_, lean_object* v___y_2968_, lean_object* v___y_2969_, lean_object* v___y_2970_){
_start:
{
size_t v_i_boxed_2971_; size_t v_stop_boxed_2972_; lean_object* v_res_2973_; 
v_i_boxed_2971_ = lean_unbox_usize(v_i_2963_);
lean_dec(v_i_2963_);
v_stop_boxed_2972_ = lean_unbox_usize(v_stop_2964_);
lean_dec(v_stop_2964_);
v_res_2973_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__1(v_00_u03b1_2958_, v_00_u03b2_2959_, v_00_u03c3_2960_, v_f_2961_, v_as_2962_, v_i_boxed_2971_, v_stop_boxed_2972_, v_b_2965_, v___y_2966_, v___y_2967_, v___y_2968_, v___y_2969_);
lean_dec(v___y_2969_);
lean_dec_ref(v___y_2968_);
lean_dec(v___y_2967_);
lean_dec_ref(v___y_2966_);
lean_dec_ref(v_as_2962_);
return v_res_2973_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__2(lean_object* v_00_u03c3_2974_, lean_object* v_00_u03b1_2975_, lean_object* v_00_u03b2_2976_, lean_object* v_f_2977_, lean_object* v_keys_2978_, lean_object* v_vals_2979_, lean_object* v_heq_2980_, lean_object* v_i_2981_, lean_object* v_acc_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_, lean_object* v___y_2985_, lean_object* v___y_2986_){
_start:
{
lean_object* v___x_2988_; 
v___x_2988_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__2___redArg(v_f_2977_, v_keys_2978_, v_vals_2979_, v_i_2981_, v_acc_2982_, v___y_2983_, v___y_2984_, v___y_2985_, v___y_2986_);
return v___x_2988_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03c3_2989_, lean_object* v_00_u03b1_2990_, lean_object* v_00_u03b2_2991_, lean_object* v_f_2992_, lean_object* v_keys_2993_, lean_object* v_vals_2994_, lean_object* v_heq_2995_, lean_object* v_i_2996_, lean_object* v_acc_2997_, lean_object* v___y_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_){
_start:
{
lean_object* v_res_3003_; 
v_res_3003_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__2(v_00_u03c3_2989_, v_00_u03b1_2990_, v_00_u03b2_2991_, v_f_2992_, v_keys_2993_, v_vals_2994_, v_heq_2995_, v_i_2996_, v_acc_2997_, v___y_2998_, v___y_2999_, v___y_3000_, v___y_3001_);
lean_dec(v___y_3001_);
lean_dec_ref(v___y_3000_);
lean_dec(v___y_2999_);
lean_dec_ref(v___y_2998_);
lean_dec_ref(v_vals_2994_);
lean_dec_ref(v_keys_2993_);
return v_res_3003_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_DiscrTree_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_WHNF(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_DiscrTree_Main(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_DiscrTree_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpStar = _init_l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpStar();
lean_mark_persistent(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpStar);
l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_initCapacity = _init_l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_initCapacity();
lean_mark_persistent(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_initCapacity);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_DiscrTree_Main(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_DiscrTree_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_WHNF(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_DiscrTree_Main(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_DiscrTree_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_DiscrTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_DiscrTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_DiscrTree_Main(builtin);
}
#ifdef __cplusplus
}
#endif
