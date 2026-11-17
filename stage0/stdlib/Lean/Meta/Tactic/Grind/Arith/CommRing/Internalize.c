// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.CommRing.Internalize
// Imports: public import Lean.Meta.Tactic.Grind.Arith.CommRing.RingId import Lean.Meta.Tactic.Grind.Simp import Lean.Meta.Tactic.Grind.Arith.Util import Lean.Meta.Tactic.Grind.Arith.CommRing.Reify import Lean.Meta.Tactic.Grind.Arith.CommRing.DenoteExpr import Lean.Meta.Tactic.Grind.Arith.Cutsat.Util import Lean.Meta.Sym.Arith.Classify
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
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
extern lean_object* l_Lean_Int_mkType;
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_canon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getGeneration___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushNewFactCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_synthInstance_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_Lean_Meta_getNatValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_neg(lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommRingM_getRing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommRingM_modifyRing___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg();
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
uint64_t l_Lean_Expr_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_getCommRingId_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushNewFact(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRingState___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRingState___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_hasChar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_getCharInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* l_Lean_mkRawNatLit(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_mkIntLit(lean_object*);
extern lean_object* l_Lean_eagerReflBoolTrue;
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_forM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_usize_to_uint64(size_t);
lean_object* l_Lean_Meta_Sym_instBEqExprPtr___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_instHashableExprPtr___lam__0___boxed(lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Sym_isNatValue(lean_object*);
uint8_t l_Lean_PersistentHashMap_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getIntValue_x3f(lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_Arith_CommRing_ringExt;
lean_object* l_Lean_Meta_Grind_SolverExtension_markTerm___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiringState___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifySemiringState___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_updateLastTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommRingId___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommRingM_modifyRingState___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getConfig___redArg(lean_object*);
uint8_t l_Lean_Meta_Grind_Arith_isIntModuleVirtualParent(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNonCommRingId_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommRingM_getRingState___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Arith_homoType_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_reify_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_getCommSemiringId_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_sreify_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_ncreify_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNonCommSemiringId_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_ncsreify_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isCutsatType___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "IntCast"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "intCast"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(63, 186, 193, 83, 149, 255, 18, 69)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(190, 203, 124, 26, 63, 107, 241, 61)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "NatCast"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "natCast"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(65, 128, 63, 191, 243, 154, 52, 80)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__4_value),LEAN_SCALAR_PTR_LITERAL(47, 224, 192, 179, 253, 143, 7, 98)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__6_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__7_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__8_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Neg"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "neg"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__10_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__9_value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__11_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__10_value),LEAN_SCALAR_PTR_LITERAL(105, 26, 70, 221, 245, 238, 127, 238)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__11_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HPow"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__12_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hPow"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__13_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__12_value),LEAN_SCALAR_PTR_LITERAL(155, 188, 136, 200, 106, 253, 76, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__14_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__13_value),LEAN_SCALAR_PTR_LITERAL(32, 63, 208, 57, 56, 184, 164, 144)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__14_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "HSMul"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__15 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__15_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "hSMul"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__16 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__16_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__15_value),LEAN_SCALAR_PTR_LITERAL(226, 107, 25, 48, 80, 144, 236, 217)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__17_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__16_value),LEAN_SCALAR_PTR_LITERAL(23, 127, 6, 115, 121, 139, 223, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__17 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__17_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMul"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__18 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__18_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMul"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__19 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__19_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__18_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__20_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__19_value),LEAN_SCALAR_PTR_LITERAL(248, 227, 200, 215, 229, 255, 92, 22)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__20 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__20_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HSub"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__21 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__21_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hSub"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__22 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__22_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__21_value),LEAN_SCALAR_PTR_LITERAL(121, 130, 45, 212, 110, 237, 236, 233)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__23_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__22_value),LEAN_SCALAR_PTR_LITERAL(231, 253, 204, 163, 168, 77, 27, 58)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__23 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__23_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAdd"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__24 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__24_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAdd"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__25 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__25_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__24_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__26_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__25_value),LEAN_SCALAR_PTR_LITERAL(134, 172, 115, 219, 189, 252, 56, 148)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__26 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__26_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__27 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__27_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__27_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__28 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__28_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__29 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__29_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__29_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__30 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__30_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMod"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMod"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__0_value),LEAN_SCALAR_PTR_LITERAL(93, 4, 3, 35, 188, 254, 191, 190)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__1_value),LEAN_SCALAR_PTR_LITERAL(120, 199, 142, 238, 9, 44, 94, 134)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HDiv"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hDiv"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__3_value),LEAN_SCALAR_PTR_LITERAL(74, 223, 78, 88, 255, 236, 144, 164)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__4_value),LEAN_SCALAR_PTR_LITERAL(26, 183, 188, 240, 156, 118, 170, 84)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__5_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LT"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "lt"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent___closed__0_value),LEAN_SCALAR_PTR_LITERAL(71, 235, 154, 184, 62, 135, 30, 248)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent___closed__1_value),LEAN_SCALAR_PTR_LITERAL(54, 235, 251, 9, 4, 74, 57, 164)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LE"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "le"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent___closed__3_value),LEAN_SCALAR_PTR_LITERAL(216, 149, 183, 186, 191, 145, 216, 115)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent___closed__4_value),LEAN_SCALAR_PTR_LITERAL(109, 14, 90, 172, 72, 170, 136, 101)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent___closed__5_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "failed to find instance"};
static const lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___lam__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Ring"};
static const lean_object* l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__2_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toNeg"};
static const lean_object* l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(196, 225, 111, 69, 82, 38, 249, 149)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__4_value_aux_2),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(100, 233, 103, 154, 53, 22, 86, 139)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__9_value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___lam__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Field"};
static const lean_object* l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__0_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toInv"};
static const lean_object* l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 164, 44, 189, 207, 226, 143, 119)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__2_value_aux_2),((lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(101, 152, 64, 108, 234, 163, 46, 107)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__2_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Inv"};
static const lean_object* l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(142, 68, 231, 210, 96, 163, 154, 19)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__4_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inv"};
static const lean_object* l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(142, 68, 231, 210, 96, 163, 154, 19)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(63, 31, 248, 222, 13, 64, 40, 141)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__6 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__6_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "internal error: type is not a field"};
static const lean_object* l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__7 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushInvFact___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushInvFact___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushInvFact(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushInvFact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__1_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___lam__0(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___at___00Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___at___00Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2_spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___lam__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instHMul"};
static const lean_object* l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(177, 107, 107, 59, 202, 230, 169, 251)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Semiring"};
static const lean_object* l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__2_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toMul"};
static const lean_object* l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(246, 150, 10, 46, 185, 54, 59, 167)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__4_value_aux_2),((lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__3_value),LEAN_SCALAR_PTR_LITERAL(232, 23, 103, 115, 5, 120, 143, 98)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__18_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__6_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_object* l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__1;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(246, 150, 10, 46, 185, 54, 59, 167)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__7_value),LEAN_SCALAR_PTR_LITERAL(103, 49, 23, 61, 125, 46, 165, 129)}};
static const lean_object* l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "CommRing"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "inv_split"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__0_value),LEAN_SCALAR_PTR_LITERAL(205, 3, 54, 198, 92, 149, 38, 227)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__1_value),LEAN_SCALAR_PTR_LITERAL(145, 213, 231, 249, 53, 164, 241, 56)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "inv_int_eqC"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__0_value),LEAN_SCALAR_PTR_LITERAL(205, 3, 54, 198, 92, 149, 38, 227)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__4_value),LEAN_SCALAR_PTR_LITERAL(153, 82, 86, 32, 91, 2, 111, 119)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "inv_zero_eqC"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__0_value),LEAN_SCALAR_PTR_LITERAL(205, 3, 54, 198, 92, 149, 38, 227)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__7_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__6_value),LEAN_SCALAR_PTR_LITERAL(59, 171, 80, 119, 126, 116, 37, 65)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "inv_int_eq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__9_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__0_value),LEAN_SCALAR_PTR_LITERAL(205, 3, 54, 198, 92, 149, 38, 227)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__9_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__8_value),LEAN_SCALAR_PTR_LITERAL(187, 42, 227, 251, 174, 7, 5, 152)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "inv_zero"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__10_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__11_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__11_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 164, 44, 189, 207, 226, 143, 119)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__11_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__10_value),LEAN_SCALAR_PTR_LITERAL(103, 152, 135, 191, 44, 26, 55, 129)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__11_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "PowIdentity"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__0_value;
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "pow_eq"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__2_value_aux_1),((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(169, 166, 196, 137, 32, 118, 33, 172)}};
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__2_value_aux_2),((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(235, 179, 238, 185, 247, 4, 37, 103)}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__2_value;
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__3_value;
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ring"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(17, 56, 209, 254, 185, 203, 153, 57)}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__5 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__5_value;
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__6 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__7 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__7_value;
static lean_once_cell_t l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__8;
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "PowIdentity: pushing x^"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__9 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__9_value;
static lean_once_cell_t l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__10;
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " = x for "};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__11 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__11_value;
static lean_once_cell_t l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__12;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___boxed(lean_object**);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "instNatCastInt"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(116, 224, 75, 57, 255, 108, 159, 197)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "intCast_natCast"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__7_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(196, 225, 111, 69, 82, 38, 249, 149)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__7_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(45, 152, 136, 100, 130, 220, 111, 17)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__9___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__9___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__9(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__9___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__17___boxed(lean_object**);
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_instBEqExprPtr___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_instHashableExprPtr___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__17___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__16_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__16_spec__23(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__16_spec__23___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__16_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__16___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__16___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__16(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__16___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0_spec__1_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___lam__0(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___closed__0_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___closed__0_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(196, 225, 111, 69, 82, 38, 249, 149)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___closed__0_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(1, 189, 244, 99, 68, 50, 19, 202)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(63, 186, 193, 83, 149, 255, 18, 69)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cast"};
static const lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__27_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___closed__2_value),LEAN_SCALAR_PTR_LITERAL(181, 4, 252, 84, 28, 16, 24, 6)}};
static const lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6___lam__0(lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6_spec__13___redArg___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6_spec__13___redArg___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6_spec__13___redArg___closed__0_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6_spec__13___redArg___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6_spec__13___redArg___closed__0_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(246, 150, 10, 46, 185, 54, 59, 167)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6_spec__13___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6_spec__13___redArg___closed__0_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__4_value),LEAN_SCALAR_PTR_LITERAL(84, 97, 73, 37, 143, 22, 233, 204)}};
static const lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6_spec__13___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6_spec__13___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6_spec__13___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(65, 128, 63, 191, 243, 154, 52, 80)}};
static const lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6_spec__13___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6_spec__13___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5_spec__10_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5_spec__11___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__3___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0___lam__4(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__9___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__8_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__8_spec__15(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__8_spec__15___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__8_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__8(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__8___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__9(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__9___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__17(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__17___boxed(lean_object**);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5_spec__11(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5_spec__10_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeInv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeInv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "internalize"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(17, 56, 209, 254, 185, 203, 153, 57)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__0_value),LEAN_SCALAR_PTR_LITERAL(140, 40, 248, 182, 136, 181, 0, 182)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__2;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__4;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "]: "};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__6;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "semiring ["};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__8;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "(non-comm) ring ["};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__9_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__10;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "(non-comm) semiring ["};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__11_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__12;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f(lean_object* v_e_52_){
_start:
{
lean_object* v___x_53_; uint8_t v___x_54_; 
v___x_53_ = l_Lean_Expr_cleanupAnnotations(v_e_52_);
v___x_54_ = l_Lean_Expr_isApp(v___x_53_);
if (v___x_54_ == 0)
{
lean_object* v___x_55_; 
lean_dec_ref(v___x_53_);
v___x_55_ = lean_box(0);
return v___x_55_;
}
else
{
lean_object* v___x_56_; uint8_t v___x_57_; 
v___x_56_ = l_Lean_Expr_appFnCleanup___redArg(v___x_53_);
lean_dec_ref(v___x_53_);
v___x_57_ = l_Lean_Expr_isApp(v___x_56_);
if (v___x_57_ == 0)
{
lean_object* v___x_58_; 
lean_dec_ref(v___x_56_);
v___x_58_ = lean_box(0);
return v___x_58_;
}
else
{
lean_object* v___x_59_; uint8_t v___x_60_; 
v___x_59_ = l_Lean_Expr_appFnCleanup___redArg(v___x_56_);
lean_dec_ref(v___x_56_);
v___x_60_ = l_Lean_Expr_isApp(v___x_59_);
if (v___x_60_ == 0)
{
lean_object* v___x_61_; 
lean_dec_ref(v___x_59_);
v___x_61_ = lean_box(0);
return v___x_61_;
}
else
{
lean_object* v_arg_62_; lean_object* v___x_63_; lean_object* v___x_64_; uint8_t v___x_65_; 
v_arg_62_ = lean_ctor_get(v___x_59_, 1);
lean_inc_ref(v_arg_62_);
v___x_63_ = l_Lean_Expr_appFnCleanup___redArg(v___x_59_);
lean_dec_ref(v___x_59_);
v___x_64_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__2));
v___x_65_ = l_Lean_Expr_isConstOf(v___x_63_, v___x_64_);
if (v___x_65_ == 0)
{
lean_object* v___x_66_; uint8_t v___x_67_; 
v___x_66_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__5));
v___x_67_ = l_Lean_Expr_isConstOf(v___x_63_, v___x_66_);
if (v___x_67_ == 0)
{
lean_object* v___x_68_; uint8_t v___x_69_; 
v___x_68_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__8));
v___x_69_ = l_Lean_Expr_isConstOf(v___x_63_, v___x_68_);
if (v___x_69_ == 0)
{
lean_object* v___x_70_; uint8_t v___x_71_; 
v___x_70_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__11));
v___x_71_ = l_Lean_Expr_isConstOf(v___x_63_, v___x_70_);
if (v___x_71_ == 0)
{
uint8_t v___x_72_; 
lean_dec_ref(v_arg_62_);
v___x_72_ = l_Lean_Expr_isApp(v___x_63_);
if (v___x_72_ == 0)
{
lean_object* v___x_73_; 
lean_dec_ref(v___x_63_);
v___x_73_ = lean_box(0);
return v___x_73_;
}
else
{
lean_object* v___x_74_; uint8_t v___x_75_; 
v___x_74_ = l_Lean_Expr_appFnCleanup___redArg(v___x_63_);
v___x_75_ = l_Lean_Expr_isApp(v___x_74_);
if (v___x_75_ == 0)
{
lean_object* v___x_76_; 
lean_dec_ref(v___x_74_);
lean_dec_ref(v___x_63_);
v___x_76_ = lean_box(0);
return v___x_76_;
}
else
{
lean_object* v___x_77_; uint8_t v___x_78_; 
v___x_77_ = l_Lean_Expr_appFnCleanup___redArg(v___x_74_);
v___x_78_ = l_Lean_Expr_isApp(v___x_77_);
if (v___x_78_ == 0)
{
lean_object* v___x_79_; 
lean_dec_ref(v___x_77_);
lean_dec_ref(v___x_74_);
lean_dec_ref(v___x_63_);
v___x_79_ = lean_box(0);
return v___x_79_;
}
else
{
lean_object* v_arg_80_; lean_object* v_arg_81_; lean_object* v_arg_82_; lean_object* v___x_83_; lean_object* v___x_84_; uint8_t v___x_85_; 
v_arg_80_ = lean_ctor_get(v___x_63_, 1);
lean_inc_ref(v_arg_80_);
lean_dec_ref(v___x_63_);
v_arg_81_ = lean_ctor_get(v___x_74_, 1);
lean_inc_ref(v_arg_81_);
lean_dec_ref(v___x_74_);
v_arg_82_ = lean_ctor_get(v___x_77_, 1);
lean_inc_ref(v_arg_82_);
v___x_83_ = l_Lean_Expr_appFnCleanup___redArg(v___x_77_);
lean_dec_ref(v___x_77_);
v___x_84_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__14));
v___x_85_ = l_Lean_Expr_isConstOf(v___x_83_, v___x_84_);
if (v___x_85_ == 0)
{
lean_object* v___x_86_; uint8_t v___x_87_; 
v___x_86_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__17));
v___x_87_ = l_Lean_Expr_isConstOf(v___x_83_, v___x_86_);
if (v___x_87_ == 0)
{
lean_object* v___x_88_; uint8_t v___x_89_; 
v___x_88_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__20));
v___x_89_ = l_Lean_Expr_isConstOf(v___x_83_, v___x_88_);
if (v___x_89_ == 0)
{
lean_object* v___x_90_; uint8_t v___x_91_; 
v___x_90_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__23));
v___x_91_ = l_Lean_Expr_isConstOf(v___x_83_, v___x_90_);
if (v___x_91_ == 0)
{
lean_object* v___x_92_; uint8_t v___x_93_; 
v___x_92_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__26));
v___x_93_ = l_Lean_Expr_isConstOf(v___x_83_, v___x_92_);
lean_dec_ref(v___x_83_);
if (v___x_93_ == 0)
{
lean_object* v___x_94_; 
lean_dec_ref(v_arg_82_);
lean_dec_ref(v_arg_81_);
lean_dec_ref(v_arg_80_);
v___x_94_ = lean_box(0);
return v___x_94_;
}
else
{
lean_object* v___x_95_; 
v___x_95_ = l_Lean_Meta_Sym_Arith_homoType_x3f(v_arg_82_, v_arg_81_, v_arg_80_);
lean_dec_ref(v_arg_80_);
lean_dec_ref(v_arg_81_);
return v___x_95_;
}
}
else
{
lean_object* v___x_96_; 
lean_dec_ref(v___x_83_);
v___x_96_ = l_Lean_Meta_Sym_Arith_homoType_x3f(v_arg_82_, v_arg_81_, v_arg_80_);
lean_dec_ref(v_arg_80_);
lean_dec_ref(v_arg_81_);
return v___x_96_;
}
}
else
{
lean_object* v___x_97_; 
lean_dec_ref(v___x_83_);
v___x_97_ = l_Lean_Meta_Sym_Arith_homoType_x3f(v_arg_82_, v_arg_81_, v_arg_80_);
lean_dec_ref(v_arg_80_);
lean_dec_ref(v_arg_81_);
return v___x_97_;
}
}
else
{
lean_object* v___x_98_; lean_object* v___x_99_; uint8_t v___x_100_; 
lean_dec_ref(v___x_83_);
v___x_98_ = l_Lean_Expr_cleanupAnnotations(v_arg_82_);
lean_dec_ref(v_arg_82_);
v___x_99_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__28));
v___x_100_ = l_Lean_Expr_isConstOf(v___x_98_, v___x_99_);
if (v___x_100_ == 0)
{
lean_object* v___x_101_; uint8_t v___x_102_; 
v___x_101_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__30));
v___x_102_ = l_Lean_Expr_isConstOf(v___x_98_, v___x_101_);
lean_dec_ref(v___x_98_);
if (v___x_102_ == 0)
{
lean_object* v___x_103_; 
lean_dec_ref(v_arg_81_);
lean_dec_ref(v_arg_80_);
v___x_103_ = lean_box(0);
return v___x_103_;
}
else
{
lean_object* v___x_104_; 
lean_inc_ref(v_arg_81_);
v___x_104_ = l_Lean_Meta_Sym_Arith_homoType_x3f(v_arg_81_, v_arg_81_, v_arg_80_);
lean_dec_ref(v_arg_80_);
lean_dec_ref(v_arg_81_);
return v___x_104_;
}
}
else
{
lean_object* v___x_105_; 
lean_dec_ref(v___x_98_);
lean_inc_ref(v_arg_81_);
v___x_105_ = l_Lean_Meta_Sym_Arith_homoType_x3f(v_arg_81_, v_arg_81_, v_arg_80_);
lean_dec_ref(v_arg_80_);
lean_dec_ref(v_arg_81_);
return v___x_105_;
}
}
}
else
{
lean_object* v___x_106_; lean_object* v___x_107_; uint8_t v___x_108_; 
lean_dec_ref(v___x_83_);
v___x_106_ = l_Lean_Expr_cleanupAnnotations(v_arg_81_);
lean_dec_ref(v_arg_81_);
v___x_107_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__30));
v___x_108_ = l_Lean_Expr_isConstOf(v___x_106_, v___x_107_);
lean_dec_ref(v___x_106_);
if (v___x_108_ == 0)
{
lean_object* v___x_109_; 
lean_dec_ref(v_arg_82_);
lean_dec_ref(v_arg_80_);
v___x_109_ = lean_box(0);
return v___x_109_;
}
else
{
lean_object* v___x_110_; 
lean_inc_ref(v_arg_82_);
v___x_110_ = l_Lean_Meta_Sym_Arith_homoType_x3f(v_arg_82_, v_arg_82_, v_arg_80_);
lean_dec_ref(v_arg_80_);
lean_dec_ref(v_arg_82_);
return v___x_110_;
}
}
}
}
}
}
else
{
lean_object* v___x_111_; 
lean_dec_ref(v___x_63_);
v___x_111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_111_, 0, v_arg_62_);
return v___x_111_;
}
}
else
{
lean_object* v___x_112_; 
lean_dec_ref(v___x_63_);
v___x_112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_112_, 0, v_arg_62_);
return v___x_112_;
}
}
else
{
lean_object* v___x_113_; 
lean_dec_ref(v___x_63_);
v___x_113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_113_, 0, v_arg_62_);
return v___x_113_;
}
}
else
{
lean_object* v___x_114_; 
lean_dec_ref(v___x_63_);
v___x_114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_114_, 0, v_arg_62_);
return v___x_114_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___boxed(lean_object* v_e_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f(v_e_115_);
lean_dec_ref(v_e_115_);
return v_res_116_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent(lean_object* v_parent_x3f_127_){
_start:
{
if (lean_obj_tag(v_parent_x3f_127_) == 1)
{
lean_object* v_val_128_; lean_object* v___x_129_; 
v_val_128_ = lean_ctor_get(v_parent_x3f_127_, 0);
v___x_129_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f(v_val_128_);
if (lean_obj_tag(v___x_129_) == 0)
{
lean_object* v___x_130_; uint8_t v___x_131_; 
v___x_130_ = l_Lean_Expr_cleanupAnnotations(v_val_128_);
v___x_131_ = l_Lean_Expr_isApp(v___x_130_);
if (v___x_131_ == 0)
{
lean_dec_ref(v___x_130_);
return v___x_131_;
}
else
{
lean_object* v___x_132_; uint8_t v___x_133_; 
v___x_132_ = l_Lean_Expr_appFnCleanup___redArg(v___x_130_);
lean_dec_ref(v___x_130_);
v___x_133_ = l_Lean_Expr_isApp(v___x_132_);
if (v___x_133_ == 0)
{
lean_dec_ref(v___x_132_);
return v___x_133_;
}
else
{
lean_object* v___x_134_; uint8_t v___x_135_; 
v___x_134_ = l_Lean_Expr_appFnCleanup___redArg(v___x_132_);
lean_dec_ref(v___x_132_);
v___x_135_ = l_Lean_Expr_isApp(v___x_134_);
if (v___x_135_ == 0)
{
lean_dec_ref(v___x_134_);
return v___x_135_;
}
else
{
lean_object* v___x_136_; uint8_t v___x_137_; 
v___x_136_ = l_Lean_Expr_appFnCleanup___redArg(v___x_134_);
lean_dec_ref(v___x_134_);
v___x_137_ = l_Lean_Expr_isApp(v___x_136_);
if (v___x_137_ == 0)
{
lean_dec_ref(v___x_136_);
return v___x_137_;
}
else
{
lean_object* v___x_138_; uint8_t v___x_139_; 
v___x_138_ = l_Lean_Expr_appFnCleanup___redArg(v___x_136_);
lean_dec_ref(v___x_136_);
v___x_139_ = l_Lean_Expr_isApp(v___x_138_);
if (v___x_139_ == 0)
{
lean_dec_ref(v___x_138_);
return v___x_139_;
}
else
{
lean_object* v___x_140_; uint8_t v___x_141_; 
v___x_140_ = l_Lean_Expr_appFnCleanup___redArg(v___x_138_);
lean_dec_ref(v___x_138_);
v___x_141_ = l_Lean_Expr_isApp(v___x_140_);
if (v___x_141_ == 0)
{
lean_dec_ref(v___x_140_);
return v___x_141_;
}
else
{
lean_object* v___x_142_; lean_object* v___x_143_; uint8_t v___x_144_; 
v___x_142_ = l_Lean_Expr_appFnCleanup___redArg(v___x_140_);
lean_dec_ref(v___x_140_);
v___x_143_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__2));
v___x_144_ = l_Lean_Expr_isConstOf(v___x_142_, v___x_143_);
if (v___x_144_ == 0)
{
lean_object* v___x_145_; uint8_t v___x_146_; 
v___x_145_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__5));
v___x_146_ = l_Lean_Expr_isConstOf(v___x_142_, v___x_145_);
lean_dec_ref(v___x_142_);
if (v___x_146_ == 0)
{
return v___x_146_;
}
else
{
return v___x_141_;
}
}
else
{
lean_dec_ref(v___x_142_);
return v___x_141_;
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
uint8_t v___x_147_; 
lean_dec_ref_known(v___x_129_, 1);
v___x_147_ = 1;
return v___x_147_;
}
}
else
{
uint8_t v___x_148_; 
v___x_148_ = 0;
return v___x_148_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___boxed(lean_object* v_parent_x3f_149_){
_start:
{
uint8_t v_res_150_; lean_object* v_r_151_; 
v_res_150_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent(v_parent_x3f_149_);
lean_dec(v_parent_x3f_149_);
v_r_151_ = lean_box(v_res_150_);
return v_r_151_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent(lean_object* v_parent_x3f_162_){
_start:
{
if (lean_obj_tag(v_parent_x3f_162_) == 1)
{
lean_object* v_val_163_; lean_object* v___x_164_; uint8_t v___x_165_; 
v_val_163_ = lean_ctor_get(v_parent_x3f_162_, 0);
v___x_164_ = l_Lean_Expr_cleanupAnnotations(v_val_163_);
v___x_165_ = l_Lean_Expr_isApp(v___x_164_);
if (v___x_165_ == 0)
{
lean_dec_ref(v___x_164_);
return v___x_165_;
}
else
{
lean_object* v___x_166_; uint8_t v___x_167_; 
v___x_166_ = l_Lean_Expr_appFnCleanup___redArg(v___x_164_);
lean_dec_ref(v___x_164_);
v___x_167_ = l_Lean_Expr_isApp(v___x_166_);
if (v___x_167_ == 0)
{
lean_dec_ref(v___x_166_);
return v___x_167_;
}
else
{
lean_object* v___x_168_; uint8_t v___x_169_; 
v___x_168_ = l_Lean_Expr_appFnCleanup___redArg(v___x_166_);
lean_dec_ref(v___x_166_);
v___x_169_ = l_Lean_Expr_isApp(v___x_168_);
if (v___x_169_ == 0)
{
lean_dec_ref(v___x_168_);
return v___x_169_;
}
else
{
lean_object* v___x_170_; uint8_t v___x_171_; 
v___x_170_ = l_Lean_Expr_appFnCleanup___redArg(v___x_168_);
lean_dec_ref(v___x_168_);
v___x_171_ = l_Lean_Expr_isApp(v___x_170_);
if (v___x_171_ == 0)
{
lean_dec_ref(v___x_170_);
return v___x_171_;
}
else
{
lean_object* v___x_172_; lean_object* v___x_173_; uint8_t v___x_174_; 
v___x_172_ = l_Lean_Expr_appFnCleanup___redArg(v___x_170_);
lean_dec_ref(v___x_170_);
v___x_173_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent___closed__2));
v___x_174_ = l_Lean_Expr_isConstOf(v___x_172_, v___x_173_);
if (v___x_174_ == 0)
{
lean_object* v___x_175_; uint8_t v___x_176_; 
v___x_175_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent___closed__5));
v___x_176_ = l_Lean_Expr_isConstOf(v___x_172_, v___x_175_);
lean_dec_ref(v___x_172_);
if (v___x_176_ == 0)
{
return v___x_176_;
}
else
{
return v___x_171_;
}
}
else
{
lean_dec_ref(v___x_172_);
return v___x_171_;
}
}
}
}
}
}
else
{
uint8_t v___x_177_; 
v___x_177_ = 0;
return v___x_177_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent___boxed(lean_object* v_parent_x3f_178_){
_start:
{
uint8_t v_res_179_; lean_object* v_r_180_; 
v_res_179_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent(v_parent_x3f_178_);
lean_dec(v_parent_x3f_178_);
v_r_180_ = lean_box(v_res_179_);
return v_r_180_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1(lean_object* v_a_181_){
_start:
{
lean_object* v___x_182_; 
v___x_182_ = lean_nat_to_int(v_a_181_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5(lean_object* v_msgData_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_){
_start:
{
lean_object* v___x_189_; lean_object* v_env_190_; uint8_t v___x_191_; lean_object* v_env_192_; lean_object* v___x_193_; lean_object* v_toCold_194_; lean_object* v_mctx_195_; lean_object* v_lctx_196_; lean_object* v_options_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_189_ = lean_st_ref_get(v___y_187_);
v_env_190_ = lean_ctor_get(v___x_189_, 0);
lean_inc_ref(v_env_190_);
lean_dec(v___x_189_);
v___x_191_ = 0;
v_env_192_ = l_Lean_Environment_setRecordingDeps(v_env_190_, v___x_191_);
v___x_193_ = lean_st_ref_get(v___y_185_);
v_toCold_194_ = lean_ctor_get(v___y_186_, 0);
v_mctx_195_ = lean_ctor_get(v___x_193_, 0);
lean_inc_ref(v_mctx_195_);
lean_dec(v___x_193_);
v_lctx_196_ = lean_ctor_get(v___y_184_, 2);
v_options_197_ = lean_ctor_get(v_toCold_194_, 2);
lean_inc_ref(v_options_197_);
lean_inc_ref(v_lctx_196_);
v___x_198_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_198_, 0, v_env_192_);
lean_ctor_set(v___x_198_, 1, v_mctx_195_);
lean_ctor_set(v___x_198_, 2, v_lctx_196_);
lean_ctor_set(v___x_198_, 3, v_options_197_);
v___x_199_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_199_, 0, v___x_198_);
lean_ctor_set(v___x_199_, 1, v_msgData_183_);
v___x_200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_200_, 0, v___x_199_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___boxed(lean_object* v_msgData_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_){
_start:
{
lean_object* v_res_207_; 
v_res_207_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5(v_msgData_201_, v___y_202_, v___y_203_, v___y_204_, v___y_205_);
lean_dec(v___y_205_);
lean_dec_ref(v___y_204_);
lean_dec(v___y_203_);
lean_dec_ref(v___y_202_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3_spec__4___redArg(lean_object* v_msg_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_){
_start:
{
lean_object* v_ref_214_; lean_object* v___x_215_; lean_object* v_a_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_224_; 
v_ref_214_ = lean_ctor_get(v___y_211_, 2);
v___x_215_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5(v_msg_208_, v___y_209_, v___y_210_, v___y_211_, v___y_212_);
v_a_216_ = lean_ctor_get(v___x_215_, 0);
v_isSharedCheck_224_ = !lean_is_exclusive(v___x_215_);
if (v_isSharedCheck_224_ == 0)
{
v___x_218_ = v___x_215_;
v_isShared_219_ = v_isSharedCheck_224_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_a_216_);
lean_dec(v___x_215_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_224_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v___x_220_; lean_object* v___x_222_; 
lean_inc(v_ref_214_);
v___x_220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_220_, 0, v_ref_214_);
lean_ctor_set(v___x_220_, 1, v_a_216_);
if (v_isShared_219_ == 0)
{
lean_ctor_set_tag(v___x_218_, 1);
lean_ctor_set(v___x_218_, 0, v___x_220_);
v___x_222_ = v___x_218_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v___x_220_);
v___x_222_ = v_reuseFailAlloc_223_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
return v___x_222_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_msg_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3_spec__4___redArg(v_msg_225_, v___y_226_, v___y_227_, v___y_228_, v___y_229_);
lean_dec(v___y_229_);
lean_dec_ref(v___y_228_);
lean_dec(v___y_227_);
lean_dec_ref(v___y_226_);
return v_res_231_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3___closed__1(void){
_start:
{
lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_233_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3___closed__0));
v___x_234_ = l_Lean_stringToMessageData(v___x_233_);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3(lean_object* v_type_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_){
_start:
{
lean_object* v___x_248_; 
lean_inc_ref(v_type_235_);
v___x_248_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_type_235_, v___y_242_, v___y_243_, v___y_244_, v___y_245_, v___y_246_);
if (lean_obj_tag(v___x_248_) == 0)
{
lean_object* v_a_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_261_; 
v_a_249_ = lean_ctor_get(v___x_248_, 0);
v_isSharedCheck_261_ = !lean_is_exclusive(v___x_248_);
if (v_isSharedCheck_261_ == 0)
{
v___x_251_ = v___x_248_;
v_isShared_252_ = v_isSharedCheck_261_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_a_249_);
lean_dec(v___x_248_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_261_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
if (lean_obj_tag(v_a_249_) == 1)
{
lean_object* v_val_253_; lean_object* v___x_255_; 
lean_dec_ref(v_type_235_);
v_val_253_ = lean_ctor_get(v_a_249_, 0);
lean_inc(v_val_253_);
lean_dec_ref_known(v_a_249_, 1);
if (v_isShared_252_ == 0)
{
lean_ctor_set(v___x_251_, 0, v_val_253_);
v___x_255_ = v___x_251_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v_val_253_);
v___x_255_ = v_reuseFailAlloc_256_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
return v___x_255_;
}
}
else
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; 
lean_del_object(v___x_251_);
lean_dec(v_a_249_);
v___x_257_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3___closed__1, &l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3___closed__1_once, _init_l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3___closed__1);
v___x_258_ = l_Lean_indentExpr(v_type_235_);
v___x_259_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_259_, 0, v___x_257_);
lean_ctor_set(v___x_259_, 1, v___x_258_);
v___x_260_ = l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3_spec__4___redArg(v___x_259_, v___y_243_, v___y_244_, v___y_245_, v___y_246_);
return v___x_260_;
}
}
}
else
{
lean_object* v_a_262_; lean_object* v___x_264_; uint8_t v_isShared_265_; uint8_t v_isSharedCheck_269_; 
lean_dec_ref(v_type_235_);
v_a_262_ = lean_ctor_get(v___x_248_, 0);
v_isSharedCheck_269_ = !lean_is_exclusive(v___x_248_);
if (v_isSharedCheck_269_ == 0)
{
v___x_264_ = v___x_248_;
v_isShared_265_ = v_isSharedCheck_269_;
goto v_resetjp_263_;
}
else
{
lean_inc(v_a_262_);
lean_dec(v___x_248_);
v___x_264_ = lean_box(0);
v_isShared_265_ = v_isSharedCheck_269_;
goto v_resetjp_263_;
}
v_resetjp_263_:
{
lean_object* v___x_267_; 
if (v_isShared_265_ == 0)
{
v___x_267_ = v___x_264_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v_a_262_);
v___x_267_ = v_reuseFailAlloc_268_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
return v___x_267_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_type_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_){
_start:
{
lean_object* v_res_283_; 
v_res_283_ = l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3(v_type_270_, v___y_271_, v___y_272_, v___y_273_, v___y_274_, v___y_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_, v___y_280_, v___y_281_);
lean_dec(v___y_281_);
lean_dec_ref(v___y_280_);
lean_dec(v___y_279_);
lean_dec_ref(v___y_278_);
lean_dec(v___y_277_);
lean_dec_ref(v___y_276_);
lean_dec(v___y_275_);
lean_dec_ref(v___y_274_);
lean_dec(v___y_273_);
lean_dec(v___y_272_);
lean_dec_ref(v___y_271_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2(lean_object* v_type_284_, lean_object* v_u_285_, lean_object* v_instDeclName_286_, lean_object* v_declName_287_, lean_object* v_expectedInst_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_301_ = lean_box(0);
v___x_302_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_302_, 0, v_u_285_);
lean_ctor_set(v___x_302_, 1, v___x_301_);
lean_inc_ref(v___x_302_);
v___x_303_ = l_Lean_mkConst(v_instDeclName_286_, v___x_302_);
lean_inc_ref(v_type_284_);
v___x_304_ = l_Lean_Expr_app___override(v___x_303_, v_type_284_);
v___x_305_ = l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3(v___x_304_, v___y_289_, v___y_290_, v___y_291_, v___y_292_, v___y_293_, v___y_294_, v___y_295_, v___y_296_, v___y_297_, v___y_298_, v___y_299_);
if (lean_obj_tag(v___x_305_) == 0)
{
lean_object* v_a_306_; lean_object* v___x_307_; 
v_a_306_ = lean_ctor_get(v___x_305_, 0);
lean_inc_n(v_a_306_, 2);
lean_dec_ref_known(v___x_305_, 1);
lean_inc(v_declName_287_);
v___x_307_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst(v_declName_287_, v_a_306_, v_expectedInst_288_, v___y_296_, v___y_297_, v___y_298_, v___y_299_);
if (lean_obj_tag(v___x_307_) == 0)
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
lean_dec_ref_known(v___x_307_, 1);
v___x_308_ = l_Lean_mkConst(v_declName_287_, v___x_302_);
v___x_309_ = l_Lean_mkAppB(v___x_308_, v_type_284_, v_a_306_);
v___x_310_ = l_Lean_Meta_Sym_canon(v___x_309_, v___y_294_, v___y_295_, v___y_296_, v___y_297_, v___y_298_, v___y_299_);
if (lean_obj_tag(v___x_310_) == 0)
{
lean_object* v_a_311_; lean_object* v___x_312_; 
v_a_311_ = lean_ctor_get(v___x_310_, 0);
lean_inc(v_a_311_);
lean_dec_ref_known(v___x_310_, 1);
v___x_312_ = l_Lean_Meta_Sym_shareCommon(v_a_311_, v___y_294_, v___y_295_, v___y_296_, v___y_297_, v___y_298_, v___y_299_);
return v___x_312_;
}
else
{
return v___x_310_;
}
}
else
{
lean_object* v_a_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_320_; 
lean_dec(v_a_306_);
lean_dec_ref_known(v___x_302_, 2);
lean_dec(v_declName_287_);
lean_dec_ref(v_type_284_);
v_a_313_ = lean_ctor_get(v___x_307_, 0);
v_isSharedCheck_320_ = !lean_is_exclusive(v___x_307_);
if (v_isSharedCheck_320_ == 0)
{
v___x_315_ = v___x_307_;
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_a_313_);
lean_dec(v___x_307_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_318_; 
if (v_isShared_316_ == 0)
{
v___x_318_ = v___x_315_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v_a_313_);
v___x_318_ = v_reuseFailAlloc_319_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
return v___x_318_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_302_, 2);
lean_dec_ref(v_expectedInst_288_);
lean_dec(v_declName_287_);
lean_dec_ref(v_type_284_);
return v___x_305_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2___boxed(lean_object** _args){
lean_object* v_type_321_ = _args[0];
lean_object* v_u_322_ = _args[1];
lean_object* v_instDeclName_323_ = _args[2];
lean_object* v_declName_324_ = _args[3];
lean_object* v_expectedInst_325_ = _args[4];
lean_object* v___y_326_ = _args[5];
lean_object* v___y_327_ = _args[6];
lean_object* v___y_328_ = _args[7];
lean_object* v___y_329_ = _args[8];
lean_object* v___y_330_ = _args[9];
lean_object* v___y_331_ = _args[10];
lean_object* v___y_332_ = _args[11];
lean_object* v___y_333_ = _args[12];
lean_object* v___y_334_ = _args[13];
lean_object* v___y_335_ = _args[14];
lean_object* v___y_336_ = _args[15];
lean_object* v___y_337_ = _args[16];
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2(v_type_321_, v_u_322_, v_instDeclName_323_, v_declName_324_, v_expectedInst_325_, v___y_326_, v___y_327_, v___y_328_, v___y_329_, v___y_330_, v___y_331_, v___y_332_, v___y_333_, v___y_334_, v___y_335_, v___y_336_);
lean_dec(v___y_336_);
lean_dec_ref(v___y_335_);
lean_dec(v___y_334_);
lean_dec_ref(v___y_333_);
lean_dec(v___y_332_);
lean_dec_ref(v___y_331_);
lean_dec(v___y_330_);
lean_dec_ref(v___y_329_);
lean_dec(v___y_328_);
lean_dec(v___y_327_);
lean_dec_ref(v___y_326_);
return v_res_338_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___lam__0(lean_object* v_a_339_, lean_object* v_s_340_){
_start:
{
lean_object* v_toRing_341_; lean_object* v_invFn_x3f_342_; lean_object* v_divFn_x3f_343_; lean_object* v_zpowFn_x3f_344_; lean_object* v_semiringId_x3f_345_; lean_object* v_commSemiringInst_346_; lean_object* v_commRingInst_347_; lean_object* v_noZeroDivInst_x3f_348_; lean_object* v_fieldInst_x3f_349_; lean_object* v_powIdentityInst_x3f_350_; lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_382_; 
v_toRing_341_ = lean_ctor_get(v_s_340_, 0);
v_invFn_x3f_342_ = lean_ctor_get(v_s_340_, 1);
v_divFn_x3f_343_ = lean_ctor_get(v_s_340_, 2);
v_zpowFn_x3f_344_ = lean_ctor_get(v_s_340_, 3);
v_semiringId_x3f_345_ = lean_ctor_get(v_s_340_, 4);
v_commSemiringInst_346_ = lean_ctor_get(v_s_340_, 5);
v_commRingInst_347_ = lean_ctor_get(v_s_340_, 6);
v_noZeroDivInst_x3f_348_ = lean_ctor_get(v_s_340_, 7);
v_fieldInst_x3f_349_ = lean_ctor_get(v_s_340_, 8);
v_powIdentityInst_x3f_350_ = lean_ctor_get(v_s_340_, 9);
v_isSharedCheck_382_ = !lean_is_exclusive(v_s_340_);
if (v_isSharedCheck_382_ == 0)
{
v___x_352_ = v_s_340_;
v_isShared_353_ = v_isSharedCheck_382_;
goto v_resetjp_351_;
}
else
{
lean_inc(v_powIdentityInst_x3f_350_);
lean_inc(v_fieldInst_x3f_349_);
lean_inc(v_noZeroDivInst_x3f_348_);
lean_inc(v_commRingInst_347_);
lean_inc(v_commSemiringInst_346_);
lean_inc(v_semiringId_x3f_345_);
lean_inc(v_zpowFn_x3f_344_);
lean_inc(v_divFn_x3f_343_);
lean_inc(v_invFn_x3f_342_);
lean_inc(v_toRing_341_);
lean_dec(v_s_340_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_382_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
lean_object* v_id_354_; lean_object* v_type_355_; lean_object* v_u_356_; lean_object* v_ringInst_357_; lean_object* v_semiringInst_358_; lean_object* v_charInst_x3f_359_; uint8_t v_symbolicChar_360_; lean_object* v_addFn_x3f_361_; lean_object* v_mulFn_x3f_362_; lean_object* v_subFn_x3f_363_; lean_object* v_powFn_x3f_364_; lean_object* v_intCastFn_x3f_365_; lean_object* v_natCastFn_x3f_366_; lean_object* v_natSMulFn_x3f_367_; lean_object* v_intSMulFn_x3f_368_; lean_object* v_one_x3f_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_380_; 
v_id_354_ = lean_ctor_get(v_toRing_341_, 0);
v_type_355_ = lean_ctor_get(v_toRing_341_, 1);
v_u_356_ = lean_ctor_get(v_toRing_341_, 2);
v_ringInst_357_ = lean_ctor_get(v_toRing_341_, 3);
v_semiringInst_358_ = lean_ctor_get(v_toRing_341_, 4);
v_charInst_x3f_359_ = lean_ctor_get(v_toRing_341_, 5);
v_symbolicChar_360_ = lean_ctor_get_uint8(v_toRing_341_, sizeof(void*)*16);
v_addFn_x3f_361_ = lean_ctor_get(v_toRing_341_, 6);
v_mulFn_x3f_362_ = lean_ctor_get(v_toRing_341_, 7);
v_subFn_x3f_363_ = lean_ctor_get(v_toRing_341_, 8);
v_powFn_x3f_364_ = lean_ctor_get(v_toRing_341_, 10);
v_intCastFn_x3f_365_ = lean_ctor_get(v_toRing_341_, 11);
v_natCastFn_x3f_366_ = lean_ctor_get(v_toRing_341_, 12);
v_natSMulFn_x3f_367_ = lean_ctor_get(v_toRing_341_, 13);
v_intSMulFn_x3f_368_ = lean_ctor_get(v_toRing_341_, 14);
v_one_x3f_369_ = lean_ctor_get(v_toRing_341_, 15);
v_isSharedCheck_380_ = !lean_is_exclusive(v_toRing_341_);
if (v_isSharedCheck_380_ == 0)
{
lean_object* v_unused_381_; 
v_unused_381_ = lean_ctor_get(v_toRing_341_, 9);
lean_dec(v_unused_381_);
v___x_371_ = v_toRing_341_;
v_isShared_372_ = v_isSharedCheck_380_;
goto v_resetjp_370_;
}
else
{
lean_inc(v_one_x3f_369_);
lean_inc(v_intSMulFn_x3f_368_);
lean_inc(v_natSMulFn_x3f_367_);
lean_inc(v_natCastFn_x3f_366_);
lean_inc(v_intCastFn_x3f_365_);
lean_inc(v_powFn_x3f_364_);
lean_inc(v_subFn_x3f_363_);
lean_inc(v_mulFn_x3f_362_);
lean_inc(v_addFn_x3f_361_);
lean_inc(v_charInst_x3f_359_);
lean_inc(v_semiringInst_358_);
lean_inc(v_ringInst_357_);
lean_inc(v_u_356_);
lean_inc(v_type_355_);
lean_inc(v_id_354_);
lean_dec(v_toRing_341_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_380_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
lean_object* v___x_373_; lean_object* v___x_375_; 
v___x_373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_373_, 0, v_a_339_);
if (v_isShared_372_ == 0)
{
lean_ctor_set(v___x_371_, 9, v___x_373_);
v___x_375_ = v___x_371_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v_id_354_);
lean_ctor_set(v_reuseFailAlloc_379_, 1, v_type_355_);
lean_ctor_set(v_reuseFailAlloc_379_, 2, v_u_356_);
lean_ctor_set(v_reuseFailAlloc_379_, 3, v_ringInst_357_);
lean_ctor_set(v_reuseFailAlloc_379_, 4, v_semiringInst_358_);
lean_ctor_set(v_reuseFailAlloc_379_, 5, v_charInst_x3f_359_);
lean_ctor_set(v_reuseFailAlloc_379_, 6, v_addFn_x3f_361_);
lean_ctor_set(v_reuseFailAlloc_379_, 7, v_mulFn_x3f_362_);
lean_ctor_set(v_reuseFailAlloc_379_, 8, v_subFn_x3f_363_);
lean_ctor_set(v_reuseFailAlloc_379_, 9, v___x_373_);
lean_ctor_set(v_reuseFailAlloc_379_, 10, v_powFn_x3f_364_);
lean_ctor_set(v_reuseFailAlloc_379_, 11, v_intCastFn_x3f_365_);
lean_ctor_set(v_reuseFailAlloc_379_, 12, v_natCastFn_x3f_366_);
lean_ctor_set(v_reuseFailAlloc_379_, 13, v_natSMulFn_x3f_367_);
lean_ctor_set(v_reuseFailAlloc_379_, 14, v_intSMulFn_x3f_368_);
lean_ctor_set(v_reuseFailAlloc_379_, 15, v_one_x3f_369_);
lean_ctor_set_uint8(v_reuseFailAlloc_379_, sizeof(void*)*16, v_symbolicChar_360_);
v___x_375_ = v_reuseFailAlloc_379_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
lean_object* v___x_377_; 
if (v_isShared_353_ == 0)
{
lean_ctor_set(v___x_352_, 0, v___x_375_);
v___x_377_ = v___x_352_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v___x_375_);
lean_ctor_set(v_reuseFailAlloc_378_, 1, v_invFn_x3f_342_);
lean_ctor_set(v_reuseFailAlloc_378_, 2, v_divFn_x3f_343_);
lean_ctor_set(v_reuseFailAlloc_378_, 3, v_zpowFn_x3f_344_);
lean_ctor_set(v_reuseFailAlloc_378_, 4, v_semiringId_x3f_345_);
lean_ctor_set(v_reuseFailAlloc_378_, 5, v_commSemiringInst_346_);
lean_ctor_set(v_reuseFailAlloc_378_, 6, v_commRingInst_347_);
lean_ctor_set(v_reuseFailAlloc_378_, 7, v_noZeroDivInst_x3f_348_);
lean_ctor_set(v_reuseFailAlloc_378_, 8, v_fieldInst_x3f_349_);
lean_ctor_set(v_reuseFailAlloc_378_, 9, v_powIdentityInst_x3f_350_);
v___x_377_ = v_reuseFailAlloc_378_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
return v___x_377_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0(lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_){
_start:
{
lean_object* v___x_406_; 
v___x_406_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v___y_394_, v___y_395_, v___y_396_, v___y_397_, v___y_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_, v___y_404_);
if (lean_obj_tag(v___x_406_) == 0)
{
lean_object* v_a_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_447_; 
v_a_407_ = lean_ctor_get(v___x_406_, 0);
v_isSharedCheck_447_ = !lean_is_exclusive(v___x_406_);
if (v_isSharedCheck_447_ == 0)
{
v___x_409_ = v___x_406_;
v_isShared_410_ = v_isSharedCheck_447_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_a_407_);
lean_dec(v___x_406_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_447_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v_toRing_411_; lean_object* v_negFn_x3f_412_; 
v_toRing_411_ = lean_ctor_get(v_a_407_, 0);
lean_inc_ref(v_toRing_411_);
lean_dec(v_a_407_);
v_negFn_x3f_412_ = lean_ctor_get(v_toRing_411_, 9);
if (lean_obj_tag(v_negFn_x3f_412_) == 1)
{
lean_object* v_val_413_; lean_object* v___x_415_; 
lean_inc_ref(v_negFn_x3f_412_);
lean_dec_ref(v_toRing_411_);
v_val_413_ = lean_ctor_get(v_negFn_x3f_412_, 0);
lean_inc(v_val_413_);
lean_dec_ref_known(v_negFn_x3f_412_, 1);
if (v_isShared_410_ == 0)
{
lean_ctor_set(v___x_409_, 0, v_val_413_);
v___x_415_ = v___x_409_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v_val_413_);
v___x_415_ = v_reuseFailAlloc_416_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
return v___x_415_;
}
}
else
{
lean_object* v_type_417_; lean_object* v_u_418_; lean_object* v_ringInst_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v_expectedInst_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; 
lean_del_object(v___x_409_);
v_type_417_ = lean_ctor_get(v_toRing_411_, 1);
lean_inc_ref_n(v_type_417_, 2);
v_u_418_ = lean_ctor_get(v_toRing_411_, 2);
lean_inc_n(v_u_418_, 2);
v_ringInst_419_ = lean_ctor_get(v_toRing_411_, 3);
lean_inc_ref(v_ringInst_419_);
lean_dec_ref(v_toRing_411_);
v___x_420_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__4));
v___x_421_ = lean_box(0);
v___x_422_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_422_, 0, v_u_418_);
lean_ctor_set(v___x_422_, 1, v___x_421_);
v___x_423_ = l_Lean_mkConst(v___x_420_, v___x_422_);
v_expectedInst_424_ = l_Lean_mkAppB(v___x_423_, v_type_417_, v_ringInst_419_);
v___x_425_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__5));
v___x_426_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__11));
v___x_427_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2(v_type_417_, v_u_418_, v___x_425_, v___x_426_, v_expectedInst_424_, v___y_394_, v___y_395_, v___y_396_, v___y_397_, v___y_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_, v___y_404_);
if (lean_obj_tag(v___x_427_) == 0)
{
lean_object* v_a_428_; lean_object* v___f_429_; lean_object* v___x_430_; 
v_a_428_ = lean_ctor_get(v___x_427_, 0);
lean_inc_n(v_a_428_, 2);
lean_dec_ref_known(v___x_427_, 1);
v___f_429_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___lam__0), 2, 1);
lean_closure_set(v___f_429_, 0, v_a_428_);
v___x_430_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(v___f_429_, v___y_394_, v___y_400_);
if (lean_obj_tag(v___x_430_) == 0)
{
lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_437_; 
v_isSharedCheck_437_ = !lean_is_exclusive(v___x_430_);
if (v_isSharedCheck_437_ == 0)
{
lean_object* v_unused_438_; 
v_unused_438_ = lean_ctor_get(v___x_430_, 0);
lean_dec(v_unused_438_);
v___x_432_ = v___x_430_;
v_isShared_433_ = v_isSharedCheck_437_;
goto v_resetjp_431_;
}
else
{
lean_dec(v___x_430_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_437_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_435_; 
if (v_isShared_433_ == 0)
{
lean_ctor_set(v___x_432_, 0, v_a_428_);
v___x_435_ = v___x_432_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v_a_428_);
v___x_435_ = v_reuseFailAlloc_436_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
return v___x_435_;
}
}
}
else
{
lean_object* v_a_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_446_; 
lean_dec(v_a_428_);
v_a_439_ = lean_ctor_get(v___x_430_, 0);
v_isSharedCheck_446_ = !lean_is_exclusive(v___x_430_);
if (v_isSharedCheck_446_ == 0)
{
v___x_441_ = v___x_430_;
v_isShared_442_ = v_isSharedCheck_446_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_a_439_);
lean_dec(v___x_430_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_446_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
lean_object* v___x_444_; 
if (v_isShared_442_ == 0)
{
v___x_444_ = v___x_441_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v_a_439_);
v___x_444_ = v_reuseFailAlloc_445_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
return v___x_444_;
}
}
}
}
else
{
return v___x_427_;
}
}
}
}
else
{
lean_object* v_a_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_455_; 
v_a_448_ = lean_ctor_get(v___x_406_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v___x_406_);
if (v_isSharedCheck_455_ == 0)
{
v___x_450_ = v___x_406_;
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_a_448_);
lean_dec(v___x_406_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v___x_453_; 
if (v_isShared_451_ == 0)
{
v___x_453_ = v___x_450_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_a_448_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___boxed(lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_){
_start:
{
lean_object* v_res_468_; 
v_res_468_ = l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0(v___y_456_, v___y_457_, v___y_458_, v___y_459_, v___y_460_, v___y_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_);
lean_dec(v___y_466_);
lean_dec_ref(v___y_465_);
lean_dec(v___y_464_);
lean_dec_ref(v___y_463_);
lean_dec(v___y_462_);
lean_dec_ref(v___y_461_);
lean_dec(v___y_460_);
lean_dec_ref(v___y_459_);
lean_dec(v___y_458_);
lean_dec(v___y_457_);
lean_dec_ref(v___y_456_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0(lean_object* v_inst_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_){
_start:
{
lean_object* v___x_482_; 
v___x_482_ = l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0(v___y_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_, v___y_477_, v___y_478_, v___y_479_, v___y_480_);
if (lean_obj_tag(v___x_482_) == 0)
{
lean_object* v_a_483_; lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_495_; 
v_a_483_ = lean_ctor_get(v___x_482_, 0);
v_isSharedCheck_495_ = !lean_is_exclusive(v___x_482_);
if (v_isSharedCheck_495_ == 0)
{
v___x_485_ = v___x_482_;
v_isShared_486_ = v_isSharedCheck_495_;
goto v_resetjp_484_;
}
else
{
lean_inc(v_a_483_);
lean_dec(v___x_482_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_495_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
lean_object* v___x_487_; size_t v___x_488_; size_t v___x_489_; uint8_t v___x_490_; lean_object* v___x_491_; lean_object* v___x_493_; 
v___x_487_ = l_Lean_Expr_appArg_x21(v_a_483_);
lean_dec(v_a_483_);
v___x_488_ = lean_ptr_addr(v___x_487_);
lean_dec_ref(v___x_487_);
v___x_489_ = lean_ptr_addr(v_inst_469_);
v___x_490_ = lean_usize_dec_eq(v___x_488_, v___x_489_);
v___x_491_ = lean_box(v___x_490_);
if (v_isShared_486_ == 0)
{
lean_ctor_set(v___x_485_, 0, v___x_491_);
v___x_493_ = v___x_485_;
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
}
else
{
lean_object* v_a_496_; lean_object* v___x_498_; uint8_t v_isShared_499_; uint8_t v_isSharedCheck_503_; 
v_a_496_ = lean_ctor_get(v___x_482_, 0);
v_isSharedCheck_503_ = !lean_is_exclusive(v___x_482_);
if (v_isSharedCheck_503_ == 0)
{
v___x_498_ = v___x_482_;
v_isShared_499_ = v_isSharedCheck_503_;
goto v_resetjp_497_;
}
else
{
lean_inc(v_a_496_);
lean_dec(v___x_482_);
v___x_498_ = lean_box(0);
v_isShared_499_ = v_isSharedCheck_503_;
goto v_resetjp_497_;
}
v_resetjp_497_:
{
lean_object* v___x_501_; 
if (v_isShared_499_ == 0)
{
v___x_501_ = v___x_498_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v_a_496_);
v___x_501_ = v_reuseFailAlloc_502_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
return v___x_501_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0___boxed(lean_object* v_inst_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_){
_start:
{
lean_object* v_res_517_; 
v_res_517_ = l_Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0(v_inst_504_, v___y_505_, v___y_506_, v___y_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_);
lean_dec(v___y_515_);
lean_dec_ref(v___y_514_);
lean_dec(v___y_513_);
lean_dec_ref(v___y_512_);
lean_dec(v___y_511_);
lean_dec_ref(v___y_510_);
lean_dec(v___y_509_);
lean_dec_ref(v___y_508_);
lean_dec(v___y_507_);
lean_dec(v___y_506_);
lean_dec_ref(v___y_505_);
lean_dec_ref(v_inst_504_);
return v_res_517_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f(lean_object* v_e_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_, lean_object* v_a_523_, lean_object* v_a_524_, lean_object* v_a_525_, lean_object* v_a_526_, lean_object* v_a_527_, lean_object* v_a_528_, lean_object* v_a_529_){
_start:
{
lean_object* v___x_537_; 
v___x_537_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_518_, v_a_527_);
if (lean_obj_tag(v___x_537_) == 0)
{
lean_object* v_a_538_; lean_object* v___x_539_; uint8_t v___x_540_; 
v_a_538_ = lean_ctor_get(v___x_537_, 0);
lean_inc(v_a_538_);
lean_dec_ref_known(v___x_537_, 1);
v___x_539_ = l_Lean_Expr_cleanupAnnotations(v_a_538_);
lean_dec(v_a_538_);
v___x_540_ = l_Lean_Expr_isApp(v___x_539_);
if (v___x_540_ == 0)
{
lean_dec_ref(v___x_539_);
goto v___jp_531_;
}
else
{
lean_object* v___x_541_; uint8_t v___x_542_; 
v___x_541_ = l_Lean_Expr_appFnCleanup___redArg(v___x_539_);
v___x_542_ = l_Lean_Expr_isApp(v___x_541_);
if (v___x_542_ == 0)
{
lean_dec_ref(v___x_541_);
lean_dec_ref(v___x_539_);
goto v___jp_531_;
}
else
{
lean_object* v___x_543_; uint8_t v___x_544_; 
v___x_543_ = l_Lean_Expr_appFnCleanup___redArg(v___x_541_);
v___x_544_ = l_Lean_Expr_isApp(v___x_543_);
if (v___x_544_ == 0)
{
lean_dec_ref(v___x_543_);
lean_dec_ref(v___x_541_);
lean_dec_ref(v___x_539_);
goto v___jp_531_;
}
else
{
lean_object* v_arg_545_; lean_object* v___x_546_; lean_object* v___x_547_; uint8_t v___x_548_; 
v_arg_545_ = lean_ctor_get(v___x_541_, 1);
lean_inc_ref(v_arg_545_);
lean_dec_ref(v___x_541_);
v___x_546_ = l_Lean_Expr_appFnCleanup___redArg(v___x_543_);
lean_dec_ref(v___x_543_);
v___x_547_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__8));
v___x_548_ = l_Lean_Expr_isConstOf(v___x_546_, v___x_547_);
if (v___x_548_ == 0)
{
lean_object* v___x_549_; uint8_t v___x_550_; 
v___x_549_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__11));
v___x_550_ = l_Lean_Expr_isConstOf(v___x_546_, v___x_549_);
lean_dec_ref(v___x_546_);
if (v___x_550_ == 0)
{
lean_dec_ref(v_arg_545_);
lean_dec_ref(v___x_539_);
goto v___jp_531_;
}
else
{
lean_object* v_arg_551_; lean_object* v___x_552_; 
v_arg_551_ = lean_ctor_get(v___x_539_, 1);
lean_inc_ref(v_arg_551_);
lean_dec_ref(v___x_539_);
v___x_552_ = l_Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0(v_arg_545_, v_a_519_, v_a_520_, v_a_521_, v_a_522_, v_a_523_, v_a_524_, v_a_525_, v_a_526_, v_a_527_, v_a_528_, v_a_529_);
lean_dec_ref(v_arg_545_);
if (lean_obj_tag(v___x_552_) == 0)
{
lean_object* v_a_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_608_; 
v_a_553_ = lean_ctor_get(v___x_552_, 0);
v_isSharedCheck_608_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_608_ == 0)
{
v___x_555_ = v___x_552_;
v_isShared_556_ = v_isSharedCheck_608_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_a_553_);
lean_dec(v___x_552_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_608_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
uint8_t v___x_557_; 
v___x_557_ = lean_unbox(v_a_553_);
lean_dec(v_a_553_);
if (v___x_557_ == 0)
{
lean_object* v___x_558_; lean_object* v___x_560_; 
lean_dec_ref(v_arg_551_);
v___x_558_ = lean_box(0);
if (v_isShared_556_ == 0)
{
lean_ctor_set(v___x_555_, 0, v___x_558_);
v___x_560_ = v___x_555_;
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
lean_object* v___x_562_; uint8_t v___x_563_; 
lean_del_object(v___x_555_);
v___x_562_ = l_Lean_Expr_cleanupAnnotations(v_arg_551_);
lean_dec_ref(v_arg_551_);
v___x_563_ = l_Lean_Expr_isApp(v___x_562_);
if (v___x_563_ == 0)
{
lean_dec_ref(v___x_562_);
goto v___jp_534_;
}
else
{
lean_object* v___x_564_; uint8_t v___x_565_; 
v___x_564_ = l_Lean_Expr_appFnCleanup___redArg(v___x_562_);
lean_dec_ref(v___x_562_);
v___x_565_ = l_Lean_Expr_isApp(v___x_564_);
if (v___x_565_ == 0)
{
lean_dec_ref(v___x_564_);
goto v___jp_534_;
}
else
{
lean_object* v___x_566_; uint8_t v___x_567_; 
v___x_566_ = l_Lean_Expr_appFnCleanup___redArg(v___x_564_);
v___x_567_ = l_Lean_Expr_isApp(v___x_566_);
if (v___x_567_ == 0)
{
lean_dec_ref(v___x_566_);
lean_dec_ref(v___x_564_);
goto v___jp_534_;
}
else
{
lean_object* v___x_568_; uint8_t v___x_569_; 
v___x_568_ = l_Lean_Expr_appFnCleanup___redArg(v___x_566_);
lean_dec_ref(v___x_566_);
v___x_569_ = l_Lean_Expr_isConstOf(v___x_568_, v___x_547_);
lean_dec_ref(v___x_568_);
if (v___x_569_ == 0)
{
lean_dec_ref(v___x_564_);
goto v___jp_534_;
}
else
{
lean_object* v_arg_570_; lean_object* v___x_571_; 
v_arg_570_ = lean_ctor_get(v___x_564_, 1);
lean_inc_ref(v_arg_570_);
lean_dec_ref(v___x_564_);
v___x_571_ = l_Lean_Meta_getNatValue_x3f(v_arg_570_, v_a_526_, v_a_527_, v_a_528_, v_a_529_);
lean_dec_ref(v_arg_570_);
if (lean_obj_tag(v___x_571_) == 0)
{
lean_object* v_a_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_599_; 
v_a_572_ = lean_ctor_get(v___x_571_, 0);
v_isSharedCheck_599_ = !lean_is_exclusive(v___x_571_);
if (v_isSharedCheck_599_ == 0)
{
v___x_574_ = v___x_571_;
v_isShared_575_ = v_isSharedCheck_599_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_a_572_);
lean_dec(v___x_571_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_599_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
if (lean_obj_tag(v_a_572_) == 1)
{
lean_object* v_val_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_594_; 
v_val_576_ = lean_ctor_get(v_a_572_, 0);
v_isSharedCheck_594_ = !lean_is_exclusive(v_a_572_);
if (v_isSharedCheck_594_ == 0)
{
v___x_578_ = v_a_572_;
v_isShared_579_ = v_isSharedCheck_594_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_val_576_);
lean_dec(v_a_572_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_594_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v___x_580_; uint8_t v___x_581_; 
v___x_580_ = lean_unsigned_to_nat(0u);
v___x_581_ = lean_nat_dec_eq(v_val_576_, v___x_580_);
if (v___x_581_ == 0)
{
lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_585_; 
v___x_582_ = lean_nat_to_int(v_val_576_);
v___x_583_ = lean_int_neg(v___x_582_);
lean_dec(v___x_582_);
if (v_isShared_579_ == 0)
{
lean_ctor_set(v___x_578_, 0, v___x_583_);
v___x_585_ = v___x_578_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v___x_583_);
v___x_585_ = v_reuseFailAlloc_589_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
lean_object* v___x_587_; 
if (v_isShared_575_ == 0)
{
lean_ctor_set(v___x_574_, 0, v___x_585_);
v___x_587_ = v___x_574_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v___x_585_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
return v___x_587_;
}
}
}
else
{
lean_object* v___x_590_; lean_object* v___x_592_; 
lean_del_object(v___x_578_);
lean_dec(v_val_576_);
v___x_590_ = lean_box(0);
if (v_isShared_575_ == 0)
{
lean_ctor_set(v___x_574_, 0, v___x_590_);
v___x_592_ = v___x_574_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v___x_590_);
v___x_592_ = v_reuseFailAlloc_593_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
return v___x_592_;
}
}
}
}
else
{
lean_object* v___x_595_; lean_object* v___x_597_; 
lean_dec(v_a_572_);
v___x_595_ = lean_box(0);
if (v_isShared_575_ == 0)
{
lean_ctor_set(v___x_574_, 0, v___x_595_);
v___x_597_ = v___x_574_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_600_; lean_object* v___x_602_; uint8_t v_isShared_603_; uint8_t v_isSharedCheck_607_; 
v_a_600_ = lean_ctor_get(v___x_571_, 0);
v_isSharedCheck_607_ = !lean_is_exclusive(v___x_571_);
if (v_isSharedCheck_607_ == 0)
{
v___x_602_ = v___x_571_;
v_isShared_603_ = v_isSharedCheck_607_;
goto v_resetjp_601_;
}
else
{
lean_inc(v_a_600_);
lean_dec(v___x_571_);
v___x_602_ = lean_box(0);
v_isShared_603_ = v_isSharedCheck_607_;
goto v_resetjp_601_;
}
v_resetjp_601_:
{
lean_object* v___x_605_; 
if (v_isShared_603_ == 0)
{
v___x_605_ = v___x_602_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v_a_600_);
v___x_605_ = v_reuseFailAlloc_606_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
return v___x_605_;
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
lean_object* v_a_609_; lean_object* v___x_611_; uint8_t v_isShared_612_; uint8_t v_isSharedCheck_616_; 
lean_dec_ref(v_arg_551_);
v_a_609_ = lean_ctor_get(v___x_552_, 0);
v_isSharedCheck_616_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_616_ == 0)
{
v___x_611_ = v___x_552_;
v_isShared_612_ = v_isSharedCheck_616_;
goto v_resetjp_610_;
}
else
{
lean_inc(v_a_609_);
lean_dec(v___x_552_);
v___x_611_ = lean_box(0);
v_isShared_612_ = v_isSharedCheck_616_;
goto v_resetjp_610_;
}
v_resetjp_610_:
{
lean_object* v___x_614_; 
if (v_isShared_612_ == 0)
{
v___x_614_ = v___x_611_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v_a_609_);
v___x_614_ = v_reuseFailAlloc_615_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
return v___x_614_;
}
}
}
}
}
else
{
lean_object* v___x_617_; 
lean_dec_ref(v___x_546_);
lean_dec_ref(v___x_539_);
v___x_617_ = l_Lean_Meta_getNatValue_x3f(v_arg_545_, v_a_526_, v_a_527_, v_a_528_, v_a_529_);
lean_dec_ref(v_arg_545_);
if (lean_obj_tag(v___x_617_) == 0)
{
lean_object* v_a_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_638_; 
v_a_618_ = lean_ctor_get(v___x_617_, 0);
v_isSharedCheck_638_ = !lean_is_exclusive(v___x_617_);
if (v_isSharedCheck_638_ == 0)
{
v___x_620_ = v___x_617_;
v_isShared_621_ = v_isSharedCheck_638_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_a_618_);
lean_dec(v___x_617_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_638_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
if (lean_obj_tag(v_a_618_) == 1)
{
lean_object* v_val_622_; lean_object* v___x_624_; uint8_t v_isShared_625_; uint8_t v_isSharedCheck_633_; 
v_val_622_ = lean_ctor_get(v_a_618_, 0);
v_isSharedCheck_633_ = !lean_is_exclusive(v_a_618_);
if (v_isSharedCheck_633_ == 0)
{
v___x_624_ = v_a_618_;
v_isShared_625_ = v_isSharedCheck_633_;
goto v_resetjp_623_;
}
else
{
lean_inc(v_val_622_);
lean_dec(v_a_618_);
v___x_624_ = lean_box(0);
v_isShared_625_ = v_isSharedCheck_633_;
goto v_resetjp_623_;
}
v_resetjp_623_:
{
lean_object* v___x_626_; lean_object* v___x_628_; 
v___x_626_ = lean_nat_to_int(v_val_622_);
if (v_isShared_625_ == 0)
{
lean_ctor_set(v___x_624_, 0, v___x_626_);
v___x_628_ = v___x_624_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v___x_626_);
v___x_628_ = v_reuseFailAlloc_632_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
lean_object* v___x_630_; 
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 0, v___x_628_);
v___x_630_ = v___x_620_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v___x_628_);
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
else
{
lean_object* v___x_634_; lean_object* v___x_636_; 
lean_dec(v_a_618_);
v___x_634_ = lean_box(0);
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 0, v___x_634_);
v___x_636_ = v___x_620_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v___x_634_);
v___x_636_ = v_reuseFailAlloc_637_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
return v___x_636_;
}
}
}
}
else
{
lean_object* v_a_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_646_; 
v_a_639_ = lean_ctor_get(v___x_617_, 0);
v_isSharedCheck_646_ = !lean_is_exclusive(v___x_617_);
if (v_isSharedCheck_646_ == 0)
{
v___x_641_ = v___x_617_;
v_isShared_642_ = v_isSharedCheck_646_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_a_639_);
lean_dec(v___x_617_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_646_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
lean_object* v___x_644_; 
if (v_isShared_642_ == 0)
{
v___x_644_ = v___x_641_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v_a_639_);
v___x_644_ = v_reuseFailAlloc_645_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
return v___x_644_;
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
lean_object* v_a_647_; lean_object* v___x_649_; uint8_t v_isShared_650_; uint8_t v_isSharedCheck_654_; 
v_a_647_ = lean_ctor_get(v___x_537_, 0);
v_isSharedCheck_654_ = !lean_is_exclusive(v___x_537_);
if (v_isSharedCheck_654_ == 0)
{
v___x_649_ = v___x_537_;
v_isShared_650_ = v_isSharedCheck_654_;
goto v_resetjp_648_;
}
else
{
lean_inc(v_a_647_);
lean_dec(v___x_537_);
v___x_649_ = lean_box(0);
v_isShared_650_ = v_isSharedCheck_654_;
goto v_resetjp_648_;
}
v_resetjp_648_:
{
lean_object* v___x_652_; 
if (v_isShared_650_ == 0)
{
v___x_652_ = v___x_649_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v_a_647_);
v___x_652_ = v_reuseFailAlloc_653_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
return v___x_652_;
}
}
}
v___jp_531_:
{
lean_object* v___x_532_; lean_object* v___x_533_; 
v___x_532_ = lean_box(0);
v___x_533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_533_, 0, v___x_532_);
return v___x_533_;
}
v___jp_534_:
{
lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_535_ = lean_box(0);
v___x_536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_536_, 0, v___x_535_);
return v___x_536_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f___boxed(lean_object* v_e_655_, lean_object* v_a_656_, lean_object* v_a_657_, lean_object* v_a_658_, lean_object* v_a_659_, lean_object* v_a_660_, lean_object* v_a_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_, lean_object* v_a_666_, lean_object* v_a_667_){
_start:
{
lean_object* v_res_668_; 
v_res_668_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f(v_e_655_, v_a_656_, v_a_657_, v_a_658_, v_a_659_, v_a_660_, v_a_661_, v_a_662_, v_a_663_, v_a_664_, v_a_665_, v_a_666_);
lean_dec(v_a_666_);
lean_dec_ref(v_a_665_);
lean_dec(v_a_664_);
lean_dec_ref(v_a_663_);
lean_dec(v_a_662_);
lean_dec_ref(v_a_661_);
lean_dec(v_a_660_);
lean_dec_ref(v_a_659_);
lean_dec(v_a_658_);
lean_dec(v_a_657_);
lean_dec_ref(v_a_656_);
return v_res_668_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3_spec__4(lean_object* v_00_u03b1_669_, lean_object* v_msg_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_){
_start:
{
lean_object* v___x_683_; 
v___x_683_ = l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3_spec__4___redArg(v_msg_670_, v___y_678_, v___y_679_, v___y_680_, v___y_681_);
return v___x_683_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3_spec__4___boxed(lean_object* v_00_u03b1_684_, lean_object* v_msg_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_){
_start:
{
lean_object* v_res_698_; 
v_res_698_ = l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3_spec__4(v_00_u03b1_684_, v_msg_685_, v___y_686_, v___y_687_, v___y_688_, v___y_689_, v___y_690_, v___y_691_, v___y_692_, v___y_693_, v___y_694_, v___y_695_, v___y_696_);
lean_dec(v___y_696_);
lean_dec_ref(v___y_695_);
lean_dec(v___y_694_);
lean_dec_ref(v___y_693_);
lean_dec(v___y_692_);
lean_dec_ref(v___y_691_);
lean_dec(v___y_690_);
lean_dec_ref(v___y_689_);
lean_dec(v___y_688_);
lean_dec(v___y_687_);
lean_dec_ref(v___y_686_);
return v_res_698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___lam__0(lean_object* v_a_699_, lean_object* v_s_700_){
_start:
{
lean_object* v_toRing_701_; lean_object* v_divFn_x3f_702_; lean_object* v_zpowFn_x3f_703_; lean_object* v_semiringId_x3f_704_; lean_object* v_commSemiringInst_705_; lean_object* v_commRingInst_706_; lean_object* v_noZeroDivInst_x3f_707_; lean_object* v_fieldInst_x3f_708_; lean_object* v_powIdentityInst_x3f_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_717_; 
v_toRing_701_ = lean_ctor_get(v_s_700_, 0);
v_divFn_x3f_702_ = lean_ctor_get(v_s_700_, 2);
v_zpowFn_x3f_703_ = lean_ctor_get(v_s_700_, 3);
v_semiringId_x3f_704_ = lean_ctor_get(v_s_700_, 4);
v_commSemiringInst_705_ = lean_ctor_get(v_s_700_, 5);
v_commRingInst_706_ = lean_ctor_get(v_s_700_, 6);
v_noZeroDivInst_x3f_707_ = lean_ctor_get(v_s_700_, 7);
v_fieldInst_x3f_708_ = lean_ctor_get(v_s_700_, 8);
v_powIdentityInst_x3f_709_ = lean_ctor_get(v_s_700_, 9);
v_isSharedCheck_717_ = !lean_is_exclusive(v_s_700_);
if (v_isSharedCheck_717_ == 0)
{
lean_object* v_unused_718_; 
v_unused_718_ = lean_ctor_get(v_s_700_, 1);
lean_dec(v_unused_718_);
v___x_711_ = v_s_700_;
v_isShared_712_ = v_isSharedCheck_717_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_powIdentityInst_x3f_709_);
lean_inc(v_fieldInst_x3f_708_);
lean_inc(v_noZeroDivInst_x3f_707_);
lean_inc(v_commRingInst_706_);
lean_inc(v_commSemiringInst_705_);
lean_inc(v_semiringId_x3f_704_);
lean_inc(v_zpowFn_x3f_703_);
lean_inc(v_divFn_x3f_702_);
lean_inc(v_toRing_701_);
lean_dec(v_s_700_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_717_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v___x_713_; lean_object* v___x_715_; 
v___x_713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_713_, 0, v_a_699_);
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 1, v___x_713_);
v___x_715_ = v___x_711_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v_toRing_701_);
lean_ctor_set(v_reuseFailAlloc_716_, 1, v___x_713_);
lean_ctor_set(v_reuseFailAlloc_716_, 2, v_divFn_x3f_702_);
lean_ctor_set(v_reuseFailAlloc_716_, 3, v_zpowFn_x3f_703_);
lean_ctor_set(v_reuseFailAlloc_716_, 4, v_semiringId_x3f_704_);
lean_ctor_set(v_reuseFailAlloc_716_, 5, v_commSemiringInst_705_);
lean_ctor_set(v_reuseFailAlloc_716_, 6, v_commRingInst_706_);
lean_ctor_set(v_reuseFailAlloc_716_, 7, v_noZeroDivInst_x3f_707_);
lean_ctor_set(v_reuseFailAlloc_716_, 8, v_fieldInst_x3f_708_);
lean_ctor_set(v_reuseFailAlloc_716_, 9, v_powIdentityInst_x3f_709_);
v___x_715_ = v_reuseFailAlloc_716_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
return v___x_715_;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__8(void){
_start:
{
lean_object* v___x_734_; lean_object* v___x_735_; 
v___x_734_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__7));
v___x_735_ = l_Lean_stringToMessageData(v___x_734_);
return v___x_735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0(lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_){
_start:
{
lean_object* v___x_748_; 
v___x_748_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v___y_736_, v___y_737_, v___y_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_, v___y_745_, v___y_746_);
if (lean_obj_tag(v___x_748_) == 0)
{
lean_object* v_a_749_; lean_object* v___x_751_; uint8_t v_isShared_752_; uint8_t v_isSharedCheck_796_; 
v_a_749_ = lean_ctor_get(v___x_748_, 0);
v_isSharedCheck_796_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_796_ == 0)
{
v___x_751_ = v___x_748_;
v_isShared_752_ = v_isSharedCheck_796_;
goto v_resetjp_750_;
}
else
{
lean_inc(v_a_749_);
lean_dec(v___x_748_);
v___x_751_ = lean_box(0);
v_isShared_752_ = v_isSharedCheck_796_;
goto v_resetjp_750_;
}
v_resetjp_750_:
{
lean_object* v_fieldInst_x3f_753_; 
v_fieldInst_x3f_753_ = lean_ctor_get(v_a_749_, 8);
if (lean_obj_tag(v_fieldInst_x3f_753_) == 1)
{
lean_object* v_invFn_x3f_754_; 
lean_inc_ref(v_fieldInst_x3f_753_);
v_invFn_x3f_754_ = lean_ctor_get(v_a_749_, 1);
if (lean_obj_tag(v_invFn_x3f_754_) == 1)
{
lean_object* v_val_755_; lean_object* v___x_757_; 
lean_inc_ref(v_invFn_x3f_754_);
lean_dec_ref_known(v_fieldInst_x3f_753_, 1);
lean_dec(v_a_749_);
v_val_755_ = lean_ctor_get(v_invFn_x3f_754_, 0);
lean_inc(v_val_755_);
lean_dec_ref_known(v_invFn_x3f_754_, 1);
if (v_isShared_752_ == 0)
{
lean_ctor_set(v___x_751_, 0, v_val_755_);
v___x_757_ = v___x_751_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v_val_755_);
v___x_757_ = v_reuseFailAlloc_758_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
return v___x_757_;
}
}
else
{
lean_object* v_toRing_759_; lean_object* v_val_760_; lean_object* v_type_761_; lean_object* v_u_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v_expectedInst_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
lean_del_object(v___x_751_);
v_toRing_759_ = lean_ctor_get(v_a_749_, 0);
lean_inc_ref(v_toRing_759_);
lean_dec(v_a_749_);
v_val_760_ = lean_ctor_get(v_fieldInst_x3f_753_, 0);
lean_inc(v_val_760_);
lean_dec_ref_known(v_fieldInst_x3f_753_, 1);
v_type_761_ = lean_ctor_get(v_toRing_759_, 1);
lean_inc_ref_n(v_type_761_, 2);
v_u_762_ = lean_ctor_get(v_toRing_759_, 2);
lean_inc_n(v_u_762_, 2);
lean_dec_ref(v_toRing_759_);
v___x_763_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__2));
v___x_764_ = lean_box(0);
v___x_765_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_765_, 0, v_u_762_);
lean_ctor_set(v___x_765_, 1, v___x_764_);
v___x_766_ = l_Lean_mkConst(v___x_763_, v___x_765_);
v_expectedInst_767_ = l_Lean_mkAppB(v___x_766_, v_type_761_, v_val_760_);
v___x_768_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__4));
v___x_769_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__6));
v___x_770_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2(v_type_761_, v_u_762_, v___x_768_, v___x_769_, v_expectedInst_767_, v___y_736_, v___y_737_, v___y_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_, v___y_745_, v___y_746_);
if (lean_obj_tag(v___x_770_) == 0)
{
lean_object* v_a_771_; lean_object* v___f_772_; lean_object* v___x_773_; 
v_a_771_ = lean_ctor_get(v___x_770_, 0);
lean_inc_n(v_a_771_, 2);
lean_dec_ref_known(v___x_770_, 1);
v___f_772_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___lam__0), 2, 1);
lean_closure_set(v___f_772_, 0, v_a_771_);
v___x_773_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(v___f_772_, v___y_736_, v___y_742_);
if (lean_obj_tag(v___x_773_) == 0)
{
lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_780_; 
v_isSharedCheck_780_ = !lean_is_exclusive(v___x_773_);
if (v_isSharedCheck_780_ == 0)
{
lean_object* v_unused_781_; 
v_unused_781_ = lean_ctor_get(v___x_773_, 0);
lean_dec(v_unused_781_);
v___x_775_ = v___x_773_;
v_isShared_776_ = v_isSharedCheck_780_;
goto v_resetjp_774_;
}
else
{
lean_dec(v___x_773_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_780_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v___x_778_; 
if (v_isShared_776_ == 0)
{
lean_ctor_set(v___x_775_, 0, v_a_771_);
v___x_778_ = v___x_775_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v_a_771_);
v___x_778_ = v_reuseFailAlloc_779_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
return v___x_778_;
}
}
}
else
{
lean_object* v_a_782_; lean_object* v___x_784_; uint8_t v_isShared_785_; uint8_t v_isSharedCheck_789_; 
lean_dec(v_a_771_);
v_a_782_ = lean_ctor_get(v___x_773_, 0);
v_isSharedCheck_789_ = !lean_is_exclusive(v___x_773_);
if (v_isSharedCheck_789_ == 0)
{
v___x_784_ = v___x_773_;
v_isShared_785_ = v_isSharedCheck_789_;
goto v_resetjp_783_;
}
else
{
lean_inc(v_a_782_);
lean_dec(v___x_773_);
v___x_784_ = lean_box(0);
v_isShared_785_ = v_isSharedCheck_789_;
goto v_resetjp_783_;
}
v_resetjp_783_:
{
lean_object* v___x_787_; 
if (v_isShared_785_ == 0)
{
v___x_787_ = v___x_784_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v_a_782_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
return v___x_787_;
}
}
}
}
else
{
return v___x_770_;
}
}
}
else
{
lean_object* v_toRing_790_; lean_object* v_type_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; 
lean_del_object(v___x_751_);
v_toRing_790_ = lean_ctor_get(v_a_749_, 0);
lean_inc_ref(v_toRing_790_);
lean_dec(v_a_749_);
v_type_791_ = lean_ctor_get(v_toRing_790_, 1);
lean_inc_ref(v_type_791_);
lean_dec_ref(v_toRing_790_);
v___x_792_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__8, &l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__8_once, _init_l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__8);
v___x_793_ = l_Lean_indentExpr(v_type_791_);
v___x_794_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_794_, 0, v___x_792_);
lean_ctor_set(v___x_794_, 1, v___x_793_);
v___x_795_ = l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3_spec__4___redArg(v___x_794_, v___y_743_, v___y_744_, v___y_745_, v___y_746_);
return v___x_795_;
}
}
}
else
{
lean_object* v_a_797_; lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_804_; 
v_a_797_ = lean_ctor_get(v___x_748_, 0);
v_isSharedCheck_804_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_804_ == 0)
{
v___x_799_ = v___x_748_;
v_isShared_800_ = v_isSharedCheck_804_;
goto v_resetjp_798_;
}
else
{
lean_inc(v_a_797_);
lean_dec(v___x_748_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_804_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
lean_object* v___x_802_; 
if (v_isShared_800_ == 0)
{
v___x_802_ = v___x_799_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v_a_797_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___boxed(lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_){
_start:
{
lean_object* v_res_817_; 
v_res_817_ = l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0(v___y_805_, v___y_806_, v___y_807_, v___y_808_, v___y_809_, v___y_810_, v___y_811_, v___y_812_, v___y_813_, v___y_814_, v___y_815_);
lean_dec(v___y_815_);
lean_dec_ref(v___y_814_);
lean_dec(v___y_813_);
lean_dec_ref(v___y_812_);
lean_dec(v___y_811_);
lean_dec_ref(v___y_810_);
lean_dec(v___y_809_);
lean_dec_ref(v___y_808_);
lean_dec(v___y_807_);
lean_dec(v___y_806_);
lean_dec_ref(v___y_805_);
return v_res_817_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst(lean_object* v_inst_818_, lean_object* v_a_819_, lean_object* v_a_820_, lean_object* v_a_821_, lean_object* v_a_822_, lean_object* v_a_823_, lean_object* v_a_824_, lean_object* v_a_825_, lean_object* v_a_826_, lean_object* v_a_827_, lean_object* v_a_828_, lean_object* v_a_829_){
_start:
{
lean_object* v___x_831_; 
v___x_831_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v_a_819_, v_a_820_, v_a_821_, v_a_822_, v_a_823_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_);
if (lean_obj_tag(v___x_831_) == 0)
{
lean_object* v_a_832_; lean_object* v___x_834_; uint8_t v_isShared_835_; uint8_t v_isSharedCheck_864_; 
v_a_832_ = lean_ctor_get(v___x_831_, 0);
v_isSharedCheck_864_ = !lean_is_exclusive(v___x_831_);
if (v_isSharedCheck_864_ == 0)
{
v___x_834_ = v___x_831_;
v_isShared_835_ = v_isSharedCheck_864_;
goto v_resetjp_833_;
}
else
{
lean_inc(v_a_832_);
lean_dec(v___x_831_);
v___x_834_ = lean_box(0);
v_isShared_835_ = v_isSharedCheck_864_;
goto v_resetjp_833_;
}
v_resetjp_833_:
{
lean_object* v_fieldInst_x3f_836_; 
v_fieldInst_x3f_836_ = lean_ctor_get(v_a_832_, 8);
lean_inc(v_fieldInst_x3f_836_);
lean_dec(v_a_832_);
if (lean_obj_tag(v_fieldInst_x3f_836_) == 0)
{
uint8_t v___x_837_; lean_object* v___x_838_; lean_object* v___x_840_; 
v___x_837_ = 0;
v___x_838_ = lean_box(v___x_837_);
if (v_isShared_835_ == 0)
{
lean_ctor_set(v___x_834_, 0, v___x_838_);
v___x_840_ = v___x_834_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v___x_838_);
v___x_840_ = v_reuseFailAlloc_841_;
goto v_reusejp_839_;
}
v_reusejp_839_:
{
return v___x_840_;
}
}
else
{
lean_object* v___x_842_; 
lean_dec_ref_known(v_fieldInst_x3f_836_, 1);
lean_del_object(v___x_834_);
v___x_842_ = l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0(v_a_819_, v_a_820_, v_a_821_, v_a_822_, v_a_823_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_);
if (lean_obj_tag(v___x_842_) == 0)
{
lean_object* v_a_843_; lean_object* v___x_845_; uint8_t v_isShared_846_; uint8_t v_isSharedCheck_855_; 
v_a_843_ = lean_ctor_get(v___x_842_, 0);
v_isSharedCheck_855_ = !lean_is_exclusive(v___x_842_);
if (v_isSharedCheck_855_ == 0)
{
v___x_845_ = v___x_842_;
v_isShared_846_ = v_isSharedCheck_855_;
goto v_resetjp_844_;
}
else
{
lean_inc(v_a_843_);
lean_dec(v___x_842_);
v___x_845_ = lean_box(0);
v_isShared_846_ = v_isSharedCheck_855_;
goto v_resetjp_844_;
}
v_resetjp_844_:
{
lean_object* v___x_847_; size_t v___x_848_; size_t v___x_849_; uint8_t v___x_850_; lean_object* v___x_851_; lean_object* v___x_853_; 
v___x_847_ = l_Lean_Expr_appArg_x21(v_a_843_);
lean_dec(v_a_843_);
v___x_848_ = lean_ptr_addr(v___x_847_);
lean_dec_ref(v___x_847_);
v___x_849_ = lean_ptr_addr(v_inst_818_);
v___x_850_ = lean_usize_dec_eq(v___x_848_, v___x_849_);
v___x_851_ = lean_box(v___x_850_);
if (v_isShared_846_ == 0)
{
lean_ctor_set(v___x_845_, 0, v___x_851_);
v___x_853_ = v___x_845_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_854_; 
v_reuseFailAlloc_854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_854_, 0, v___x_851_);
v___x_853_ = v_reuseFailAlloc_854_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
return v___x_853_;
}
}
}
else
{
lean_object* v_a_856_; lean_object* v___x_858_; uint8_t v_isShared_859_; uint8_t v_isSharedCheck_863_; 
v_a_856_ = lean_ctor_get(v___x_842_, 0);
v_isSharedCheck_863_ = !lean_is_exclusive(v___x_842_);
if (v_isSharedCheck_863_ == 0)
{
v___x_858_ = v___x_842_;
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
else
{
lean_inc(v_a_856_);
lean_dec(v___x_842_);
v___x_858_ = lean_box(0);
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
v_resetjp_857_:
{
lean_object* v___x_861_; 
if (v_isShared_859_ == 0)
{
v___x_861_ = v___x_858_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v_a_856_);
v___x_861_ = v_reuseFailAlloc_862_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
return v___x_861_;
}
}
}
}
}
}
else
{
lean_object* v_a_865_; lean_object* v___x_867_; uint8_t v_isShared_868_; uint8_t v_isSharedCheck_872_; 
v_a_865_ = lean_ctor_get(v___x_831_, 0);
v_isSharedCheck_872_ = !lean_is_exclusive(v___x_831_);
if (v_isSharedCheck_872_ == 0)
{
v___x_867_ = v___x_831_;
v_isShared_868_ = v_isSharedCheck_872_;
goto v_resetjp_866_;
}
else
{
lean_inc(v_a_865_);
lean_dec(v___x_831_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst___boxed(lean_object* v_inst_873_, lean_object* v_a_874_, lean_object* v_a_875_, lean_object* v_a_876_, lean_object* v_a_877_, lean_object* v_a_878_, lean_object* v_a_879_, lean_object* v_a_880_, lean_object* v_a_881_, lean_object* v_a_882_, lean_object* v_a_883_, lean_object* v_a_884_, lean_object* v_a_885_){
_start:
{
lean_object* v_res_886_; 
v_res_886_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst(v_inst_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_, v_a_880_, v_a_881_, v_a_882_, v_a_883_, v_a_884_);
lean_dec(v_a_884_);
lean_dec_ref(v_a_883_);
lean_dec(v_a_882_);
lean_dec_ref(v_a_881_);
lean_dec(v_a_880_);
lean_dec_ref(v_a_879_);
lean_dec(v_a_878_);
lean_dec_ref(v_a_877_);
lean_dec(v_a_876_);
lean_dec(v_a_875_);
lean_dec_ref(v_a_874_);
lean_dec_ref(v_inst_873_);
return v_res_886_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushInvFact___redArg(lean_object* v_expected_887_, lean_object* v_proof_888_, lean_object* v_a_889_, lean_object* v_a_890_, lean_object* v_a_891_, lean_object* v_a_892_, lean_object* v_a_893_, lean_object* v_a_894_, lean_object* v_a_895_){
_start:
{
lean_object* v___x_897_; 
v___x_897_ = l_Lean_Meta_Sym_canon(v_expected_887_, v_a_890_, v_a_891_, v_a_892_, v_a_893_, v_a_894_, v_a_895_);
if (lean_obj_tag(v___x_897_) == 0)
{
lean_object* v_a_898_; lean_object* v___x_899_; 
v_a_898_ = lean_ctor_get(v___x_897_, 0);
lean_inc(v_a_898_);
lean_dec_ref_known(v___x_897_, 1);
v___x_899_ = l_Lean_Meta_Sym_shareCommon(v_a_898_, v_a_890_, v_a_891_, v_a_892_, v_a_893_, v_a_894_, v_a_895_);
if (lean_obj_tag(v___x_899_) == 0)
{
lean_object* v_a_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; 
v_a_900_ = lean_ctor_get(v___x_899_, 0);
lean_inc_n(v_a_900_, 2);
lean_dec_ref_known(v___x_899_, 1);
v___x_901_ = l_Lean_Meta_mkExpectedPropHint(v_proof_888_, v_a_900_);
v___x_902_ = lean_unsigned_to_nat(0u);
v___x_903_ = l_Lean_Meta_Grind_pushNewFactCore___redArg(v_a_900_, v___x_901_, v___x_902_, v_a_889_);
return v___x_903_;
}
else
{
lean_object* v_a_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_911_; 
lean_dec_ref(v_proof_888_);
v_a_904_ = lean_ctor_get(v___x_899_, 0);
v_isSharedCheck_911_ = !lean_is_exclusive(v___x_899_);
if (v_isSharedCheck_911_ == 0)
{
v___x_906_ = v___x_899_;
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_a_904_);
lean_dec(v___x_899_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
lean_object* v___x_909_; 
if (v_isShared_907_ == 0)
{
v___x_909_ = v___x_906_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v_a_904_);
v___x_909_ = v_reuseFailAlloc_910_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
return v___x_909_;
}
}
}
}
else
{
lean_object* v_a_912_; lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_919_; 
lean_dec_ref(v_proof_888_);
v_a_912_ = lean_ctor_get(v___x_897_, 0);
v_isSharedCheck_919_ = !lean_is_exclusive(v___x_897_);
if (v_isSharedCheck_919_ == 0)
{
v___x_914_ = v___x_897_;
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
else
{
lean_inc(v_a_912_);
lean_dec(v___x_897_);
v___x_914_ = lean_box(0);
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
v_resetjp_913_:
{
lean_object* v___x_917_; 
if (v_isShared_915_ == 0)
{
v___x_917_ = v___x_914_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v_a_912_);
v___x_917_ = v_reuseFailAlloc_918_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
return v___x_917_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushInvFact___redArg___boxed(lean_object* v_expected_920_, lean_object* v_proof_921_, lean_object* v_a_922_, lean_object* v_a_923_, lean_object* v_a_924_, lean_object* v_a_925_, lean_object* v_a_926_, lean_object* v_a_927_, lean_object* v_a_928_, lean_object* v_a_929_){
_start:
{
lean_object* v_res_930_; 
v_res_930_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushInvFact___redArg(v_expected_920_, v_proof_921_, v_a_922_, v_a_923_, v_a_924_, v_a_925_, v_a_926_, v_a_927_, v_a_928_);
lean_dec(v_a_928_);
lean_dec_ref(v_a_927_);
lean_dec(v_a_926_);
lean_dec_ref(v_a_925_);
lean_dec(v_a_924_);
lean_dec_ref(v_a_923_);
lean_dec(v_a_922_);
return v_res_930_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushInvFact(lean_object* v_expected_931_, lean_object* v_proof_932_, lean_object* v_a_933_, lean_object* v_a_934_, lean_object* v_a_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_, lean_object* v_a_942_, lean_object* v_a_943_){
_start:
{
lean_object* v___x_945_; 
v___x_945_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushInvFact___redArg(v_expected_931_, v_proof_932_, v_a_934_, v_a_938_, v_a_939_, v_a_940_, v_a_941_, v_a_942_, v_a_943_);
return v___x_945_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushInvFact___boxed(lean_object* v_expected_946_, lean_object* v_proof_947_, lean_object* v_a_948_, lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_, lean_object* v_a_952_, lean_object* v_a_953_, lean_object* v_a_954_, lean_object* v_a_955_, lean_object* v_a_956_, lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_){
_start:
{
lean_object* v_res_960_; 
v_res_960_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushInvFact(v_expected_946_, v_proof_947_, v_a_948_, v_a_949_, v_a_950_, v_a_951_, v_a_952_, v_a_953_, v_a_954_, v_a_955_, v_a_956_, v_a_957_, v_a_958_);
lean_dec(v_a_958_);
lean_dec_ref(v_a_957_);
lean_dec(v_a_956_);
lean_dec_ref(v_a_955_);
lean_dec(v_a_954_);
lean_dec_ref(v_a_953_);
lean_dec(v_a_952_);
lean_dec_ref(v_a_951_);
lean_dec(v_a_950_);
lean_dec(v_a_949_);
lean_dec_ref(v_a_948_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__1_spec__5___redArg(lean_object* v_x_961_, lean_object* v_x_962_, lean_object* v_x_963_, lean_object* v_x_964_){
_start:
{
lean_object* v_ks_965_; lean_object* v_vs_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_990_; 
v_ks_965_ = lean_ctor_get(v_x_961_, 0);
v_vs_966_ = lean_ctor_get(v_x_961_, 1);
v_isSharedCheck_990_ = !lean_is_exclusive(v_x_961_);
if (v_isSharedCheck_990_ == 0)
{
v___x_968_ = v_x_961_;
v_isShared_969_ = v_isSharedCheck_990_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_vs_966_);
lean_inc(v_ks_965_);
lean_dec(v_x_961_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_990_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v___x_970_; uint8_t v___x_971_; 
v___x_970_ = lean_array_get_size(v_ks_965_);
v___x_971_ = lean_nat_dec_lt(v_x_962_, v___x_970_);
if (v___x_971_ == 0)
{
lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_975_; 
lean_dec(v_x_962_);
v___x_972_ = lean_array_push(v_ks_965_, v_x_963_);
v___x_973_ = lean_array_push(v_vs_966_, v_x_964_);
if (v_isShared_969_ == 0)
{
lean_ctor_set(v___x_968_, 1, v___x_973_);
lean_ctor_set(v___x_968_, 0, v___x_972_);
v___x_975_ = v___x_968_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v___x_972_);
lean_ctor_set(v_reuseFailAlloc_976_, 1, v___x_973_);
v___x_975_ = v_reuseFailAlloc_976_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
return v___x_975_;
}
}
else
{
lean_object* v_k_x27_977_; uint8_t v___x_978_; 
v_k_x27_977_ = lean_array_fget_borrowed(v_ks_965_, v_x_962_);
v___x_978_ = lean_expr_eqv(v_x_963_, v_k_x27_977_);
if (v___x_978_ == 0)
{
lean_object* v___x_980_; 
if (v_isShared_969_ == 0)
{
v___x_980_ = v___x_968_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v_ks_965_);
lean_ctor_set(v_reuseFailAlloc_984_, 1, v_vs_966_);
v___x_980_ = v_reuseFailAlloc_984_;
goto v_reusejp_979_;
}
v_reusejp_979_:
{
lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_981_ = lean_unsigned_to_nat(1u);
v___x_982_ = lean_nat_add(v_x_962_, v___x_981_);
lean_dec(v_x_962_);
v_x_961_ = v___x_980_;
v_x_962_ = v___x_982_;
goto _start;
}
}
else
{
lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_988_; 
v___x_985_ = lean_array_fset(v_ks_965_, v_x_962_, v_x_963_);
v___x_986_ = lean_array_fset(v_vs_966_, v_x_962_, v_x_964_);
lean_dec(v_x_962_);
if (v_isShared_969_ == 0)
{
lean_ctor_set(v___x_968_, 1, v___x_986_);
lean_ctor_set(v___x_968_, 0, v___x_985_);
v___x_988_ = v___x_968_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v___x_985_);
lean_ctor_set(v_reuseFailAlloc_989_, 1, v___x_986_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__1___redArg(lean_object* v_n_991_, lean_object* v_k_992_, lean_object* v_v_993_){
_start:
{
lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_994_ = lean_unsigned_to_nat(0u);
v___x_995_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__1_spec__5___redArg(v_n_991_, v___x_994_, v_k_992_, v_v_993_);
return v___x_995_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_996_; 
v___x_996_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_996_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg(lean_object* v_x_997_, size_t v_x_998_, size_t v_x_999_, lean_object* v_x_1000_, lean_object* v_x_1001_){
_start:
{
if (lean_obj_tag(v_x_997_) == 0)
{
lean_object* v_es_1002_; size_t v___x_1003_; size_t v___x_1004_; lean_object* v_j_1005_; lean_object* v___x_1006_; uint8_t v___x_1007_; 
v_es_1002_ = lean_ctor_get(v_x_997_, 0);
v___x_1003_ = ((size_t)31ULL);
v___x_1004_ = lean_usize_land(v_x_998_, v___x_1003_);
v_j_1005_ = lean_usize_to_nat(v___x_1004_);
v___x_1006_ = lean_array_get_size(v_es_1002_);
v___x_1007_ = lean_nat_dec_lt(v_j_1005_, v___x_1006_);
if (v___x_1007_ == 0)
{
lean_dec(v_j_1005_);
lean_dec(v_x_1001_);
lean_dec_ref(v_x_1000_);
return v_x_997_;
}
else
{
lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1046_; 
lean_inc_ref(v_es_1002_);
v_isSharedCheck_1046_ = !lean_is_exclusive(v_x_997_);
if (v_isSharedCheck_1046_ == 0)
{
lean_object* v_unused_1047_; 
v_unused_1047_ = lean_ctor_get(v_x_997_, 0);
lean_dec(v_unused_1047_);
v___x_1009_ = v_x_997_;
v_isShared_1010_ = v_isSharedCheck_1046_;
goto v_resetjp_1008_;
}
else
{
lean_dec(v_x_997_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1046_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v_v_1011_; lean_object* v___x_1012_; lean_object* v_xs_x27_1013_; lean_object* v___y_1015_; 
v_v_1011_ = lean_array_fget(v_es_1002_, v_j_1005_);
v___x_1012_ = lean_box(0);
v_xs_x27_1013_ = lean_array_fset(v_es_1002_, v_j_1005_, v___x_1012_);
switch(lean_obj_tag(v_v_1011_))
{
case 0:
{
lean_object* v_key_1020_; lean_object* v_val_1021_; lean_object* v___x_1023_; uint8_t v_isShared_1024_; uint8_t v_isSharedCheck_1031_; 
v_key_1020_ = lean_ctor_get(v_v_1011_, 0);
v_val_1021_ = lean_ctor_get(v_v_1011_, 1);
v_isSharedCheck_1031_ = !lean_is_exclusive(v_v_1011_);
if (v_isSharedCheck_1031_ == 0)
{
v___x_1023_ = v_v_1011_;
v_isShared_1024_ = v_isSharedCheck_1031_;
goto v_resetjp_1022_;
}
else
{
lean_inc(v_val_1021_);
lean_inc(v_key_1020_);
lean_dec(v_v_1011_);
v___x_1023_ = lean_box(0);
v_isShared_1024_ = v_isSharedCheck_1031_;
goto v_resetjp_1022_;
}
v_resetjp_1022_:
{
uint8_t v___x_1025_; 
v___x_1025_ = lean_expr_eqv(v_x_1000_, v_key_1020_);
if (v___x_1025_ == 0)
{
lean_object* v___x_1026_; lean_object* v___x_1027_; 
lean_del_object(v___x_1023_);
v___x_1026_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1020_, v_val_1021_, v_x_1000_, v_x_1001_);
v___x_1027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1027_, 0, v___x_1026_);
v___y_1015_ = v___x_1027_;
goto v___jp_1014_;
}
else
{
lean_object* v___x_1029_; 
lean_dec(v_val_1021_);
lean_dec(v_key_1020_);
if (v_isShared_1024_ == 0)
{
lean_ctor_set(v___x_1023_, 1, v_x_1001_);
lean_ctor_set(v___x_1023_, 0, v_x_1000_);
v___x_1029_ = v___x_1023_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v_x_1000_);
lean_ctor_set(v_reuseFailAlloc_1030_, 1, v_x_1001_);
v___x_1029_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
v___y_1015_ = v___x_1029_;
goto v___jp_1014_;
}
}
}
}
case 1:
{
lean_object* v_node_1032_; lean_object* v___x_1034_; uint8_t v_isShared_1035_; uint8_t v_isSharedCheck_1044_; 
v_node_1032_ = lean_ctor_get(v_v_1011_, 0);
v_isSharedCheck_1044_ = !lean_is_exclusive(v_v_1011_);
if (v_isSharedCheck_1044_ == 0)
{
v___x_1034_ = v_v_1011_;
v_isShared_1035_ = v_isSharedCheck_1044_;
goto v_resetjp_1033_;
}
else
{
lean_inc(v_node_1032_);
lean_dec(v_v_1011_);
v___x_1034_ = lean_box(0);
v_isShared_1035_ = v_isSharedCheck_1044_;
goto v_resetjp_1033_;
}
v_resetjp_1033_:
{
size_t v___x_1036_; size_t v___x_1037_; size_t v___x_1038_; size_t v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1042_; 
v___x_1036_ = ((size_t)5ULL);
v___x_1037_ = lean_usize_shift_right(v_x_998_, v___x_1036_);
v___x_1038_ = ((size_t)1ULL);
v___x_1039_ = lean_usize_add(v_x_999_, v___x_1038_);
v___x_1040_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg(v_node_1032_, v___x_1037_, v___x_1039_, v_x_1000_, v_x_1001_);
if (v_isShared_1035_ == 0)
{
lean_ctor_set(v___x_1034_, 0, v___x_1040_);
v___x_1042_ = v___x_1034_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v___x_1040_);
v___x_1042_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
v___y_1015_ = v___x_1042_;
goto v___jp_1014_;
}
}
}
default: 
{
lean_object* v___x_1045_; 
v___x_1045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1045_, 0, v_x_1000_);
lean_ctor_set(v___x_1045_, 1, v_x_1001_);
v___y_1015_ = v___x_1045_;
goto v___jp_1014_;
}
}
v___jp_1014_:
{
lean_object* v___x_1016_; lean_object* v___x_1018_; 
v___x_1016_ = lean_array_fset(v_xs_x27_1013_, v_j_1005_, v___y_1015_);
lean_dec(v_j_1005_);
if (v_isShared_1010_ == 0)
{
lean_ctor_set(v___x_1009_, 0, v___x_1016_);
v___x_1018_ = v___x_1009_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v___x_1016_);
v___x_1018_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
return v___x_1018_;
}
}
}
}
}
else
{
lean_object* v_ks_1048_; lean_object* v_vs_1049_; lean_object* v___x_1051_; uint8_t v_isShared_1052_; uint8_t v_isSharedCheck_1067_; 
v_ks_1048_ = lean_ctor_get(v_x_997_, 0);
v_vs_1049_ = lean_ctor_get(v_x_997_, 1);
v_isSharedCheck_1067_ = !lean_is_exclusive(v_x_997_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1051_ = v_x_997_;
v_isShared_1052_ = v_isSharedCheck_1067_;
goto v_resetjp_1050_;
}
else
{
lean_inc(v_vs_1049_);
lean_inc(v_ks_1048_);
lean_dec(v_x_997_);
v___x_1051_ = lean_box(0);
v_isShared_1052_ = v_isSharedCheck_1067_;
goto v_resetjp_1050_;
}
v_resetjp_1050_:
{
lean_object* v___x_1054_; 
if (v_isShared_1052_ == 0)
{
v___x_1054_ = v___x_1051_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v_ks_1048_);
lean_ctor_set(v_reuseFailAlloc_1066_, 1, v_vs_1049_);
v___x_1054_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
lean_object* v_newNode_1055_; size_t v___x_1056_; uint8_t v___x_1057_; 
v_newNode_1055_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__1___redArg(v___x_1054_, v_x_1000_, v_x_1001_);
v___x_1056_ = ((size_t)7ULL);
v___x_1057_ = lean_usize_dec_le(v___x_1056_, v_x_999_);
if (v___x_1057_ == 0)
{
lean_object* v___x_1058_; lean_object* v___x_1059_; uint8_t v___x_1060_; 
v___x_1058_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1055_);
v___x_1059_ = lean_unsigned_to_nat(4u);
v___x_1060_ = lean_nat_dec_lt(v___x_1058_, v___x_1059_);
lean_dec(v___x_1058_);
if (v___x_1060_ == 0)
{
lean_object* v_ks_1061_; lean_object* v_vs_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; 
v_ks_1061_ = lean_ctor_get(v_newNode_1055_, 0);
lean_inc_ref(v_ks_1061_);
v_vs_1062_ = lean_ctor_get(v_newNode_1055_, 1);
lean_inc_ref(v_vs_1062_);
lean_dec_ref(v_newNode_1055_);
v___x_1063_ = lean_unsigned_to_nat(0u);
v___x_1064_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___closed__0);
v___x_1065_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__2___redArg(v_x_999_, v_ks_1061_, v_vs_1062_, v___x_1063_, v___x_1064_);
lean_dec_ref(v_vs_1062_);
lean_dec_ref(v_ks_1061_);
return v___x_1065_;
}
else
{
return v_newNode_1055_;
}
}
else
{
return v_newNode_1055_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__2___redArg(size_t v_depth_1068_, lean_object* v_keys_1069_, lean_object* v_vals_1070_, lean_object* v_i_1071_, lean_object* v_entries_1072_){
_start:
{
lean_object* v___x_1073_; uint8_t v___x_1074_; 
v___x_1073_ = lean_array_get_size(v_keys_1069_);
v___x_1074_ = lean_nat_dec_lt(v_i_1071_, v___x_1073_);
if (v___x_1074_ == 0)
{
lean_dec(v_i_1071_);
return v_entries_1072_;
}
else
{
lean_object* v_k_1075_; lean_object* v_v_1076_; uint64_t v___x_1077_; size_t v_h_1078_; size_t v___x_1079_; lean_object* v___x_1080_; size_t v___x_1081_; size_t v___x_1082_; size_t v___x_1083_; size_t v_h_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; 
v_k_1075_ = lean_array_fget_borrowed(v_keys_1069_, v_i_1071_);
v_v_1076_ = lean_array_fget_borrowed(v_vals_1070_, v_i_1071_);
v___x_1077_ = l_Lean_Expr_hash(v_k_1075_);
v_h_1078_ = lean_uint64_to_usize(v___x_1077_);
v___x_1079_ = ((size_t)5ULL);
v___x_1080_ = lean_unsigned_to_nat(1u);
v___x_1081_ = ((size_t)1ULL);
v___x_1082_ = lean_usize_sub(v_depth_1068_, v___x_1081_);
v___x_1083_ = lean_usize_mul(v___x_1079_, v___x_1082_);
v_h_1084_ = lean_usize_shift_right(v_h_1078_, v___x_1083_);
v___x_1085_ = lean_nat_add(v_i_1071_, v___x_1080_);
lean_dec(v_i_1071_);
lean_inc(v_v_1076_);
lean_inc(v_k_1075_);
v___x_1086_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg(v_entries_1072_, v_h_1084_, v_depth_1068_, v_k_1075_, v_v_1076_);
v_i_1071_ = v___x_1085_;
v_entries_1072_ = v___x_1086_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_1088_, lean_object* v_keys_1089_, lean_object* v_vals_1090_, lean_object* v_i_1091_, lean_object* v_entries_1092_){
_start:
{
size_t v_depth_boxed_1093_; lean_object* v_res_1094_; 
v_depth_boxed_1093_ = lean_unbox_usize(v_depth_1088_);
lean_dec(v_depth_1088_);
v_res_1094_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__2___redArg(v_depth_boxed_1093_, v_keys_1089_, v_vals_1090_, v_i_1091_, v_entries_1092_);
lean_dec_ref(v_vals_1090_);
lean_dec_ref(v_keys_1089_);
return v_res_1094_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___boxed(lean_object* v_x_1095_, lean_object* v_x_1096_, lean_object* v_x_1097_, lean_object* v_x_1098_, lean_object* v_x_1099_){
_start:
{
size_t v_x_85412__boxed_1100_; size_t v_x_85413__boxed_1101_; lean_object* v_res_1102_; 
v_x_85412__boxed_1100_ = lean_unbox_usize(v_x_1096_);
lean_dec(v_x_1096_);
v_x_85413__boxed_1101_ = lean_unbox_usize(v_x_1097_);
lean_dec(v_x_1097_);
v_res_1102_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg(v_x_1095_, v_x_85412__boxed_1100_, v_x_85413__boxed_1101_, v_x_1098_, v_x_1099_);
return v_res_1102_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0___redArg(lean_object* v_x_1103_, lean_object* v_x_1104_, lean_object* v_x_1105_){
_start:
{
uint64_t v___x_1106_; size_t v___x_1107_; size_t v___x_1108_; lean_object* v___x_1109_; 
v___x_1106_ = l_Lean_Expr_hash(v_x_1104_);
v___x_1107_ = lean_uint64_to_usize(v___x_1106_);
v___x_1108_ = ((size_t)1ULL);
v___x_1109_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg(v_x_1103_, v___x_1107_, v___x_1108_, v_x_1104_, v_x_1105_);
return v___x_1109_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___lam__0(lean_object* v_a_1110_, lean_object* v_s_1111_){
_start:
{
lean_object* v_toRingState_1112_; lean_object* v_denoteEntries_1113_; lean_object* v_nextId_1114_; lean_object* v_steps_1115_; lean_object* v_queue_1116_; lean_object* v_basis_1117_; lean_object* v_diseqs_1118_; uint8_t v_recheck_1119_; lean_object* v_invSet_1120_; lean_object* v_powIdentityVarCount_1121_; lean_object* v_numEq0_x3f_1122_; uint8_t v_numEq0Updated_1123_; lean_object* v___x_1125_; uint8_t v_isShared_1126_; uint8_t v_isSharedCheck_1132_; 
v_toRingState_1112_ = lean_ctor_get(v_s_1111_, 0);
v_denoteEntries_1113_ = lean_ctor_get(v_s_1111_, 1);
v_nextId_1114_ = lean_ctor_get(v_s_1111_, 2);
v_steps_1115_ = lean_ctor_get(v_s_1111_, 3);
v_queue_1116_ = lean_ctor_get(v_s_1111_, 4);
v_basis_1117_ = lean_ctor_get(v_s_1111_, 5);
v_diseqs_1118_ = lean_ctor_get(v_s_1111_, 6);
v_recheck_1119_ = lean_ctor_get_uint8(v_s_1111_, sizeof(void*)*10);
v_invSet_1120_ = lean_ctor_get(v_s_1111_, 7);
v_powIdentityVarCount_1121_ = lean_ctor_get(v_s_1111_, 8);
v_numEq0_x3f_1122_ = lean_ctor_get(v_s_1111_, 9);
v_numEq0Updated_1123_ = lean_ctor_get_uint8(v_s_1111_, sizeof(void*)*10 + 1);
v_isSharedCheck_1132_ = !lean_is_exclusive(v_s_1111_);
if (v_isSharedCheck_1132_ == 0)
{
v___x_1125_ = v_s_1111_;
v_isShared_1126_ = v_isSharedCheck_1132_;
goto v_resetjp_1124_;
}
else
{
lean_inc(v_numEq0_x3f_1122_);
lean_inc(v_powIdentityVarCount_1121_);
lean_inc(v_invSet_1120_);
lean_inc(v_diseqs_1118_);
lean_inc(v_basis_1117_);
lean_inc(v_queue_1116_);
lean_inc(v_steps_1115_);
lean_inc(v_nextId_1114_);
lean_inc(v_denoteEntries_1113_);
lean_inc(v_toRingState_1112_);
lean_dec(v_s_1111_);
v___x_1125_ = lean_box(0);
v_isShared_1126_ = v_isSharedCheck_1132_;
goto v_resetjp_1124_;
}
v_resetjp_1124_:
{
lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1130_; 
v___x_1127_ = lean_box(0);
v___x_1128_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0___redArg(v_invSet_1120_, v_a_1110_, v___x_1127_);
if (v_isShared_1126_ == 0)
{
lean_ctor_set(v___x_1125_, 7, v___x_1128_);
v___x_1130_ = v___x_1125_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1131_; 
v_reuseFailAlloc_1131_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v_reuseFailAlloc_1131_, 0, v_toRingState_1112_);
lean_ctor_set(v_reuseFailAlloc_1131_, 1, v_denoteEntries_1113_);
lean_ctor_set(v_reuseFailAlloc_1131_, 2, v_nextId_1114_);
lean_ctor_set(v_reuseFailAlloc_1131_, 3, v_steps_1115_);
lean_ctor_set(v_reuseFailAlloc_1131_, 4, v_queue_1116_);
lean_ctor_set(v_reuseFailAlloc_1131_, 5, v_basis_1117_);
lean_ctor_set(v_reuseFailAlloc_1131_, 6, v_diseqs_1118_);
lean_ctor_set(v_reuseFailAlloc_1131_, 7, v___x_1128_);
lean_ctor_set(v_reuseFailAlloc_1131_, 8, v_powIdentityVarCount_1121_);
lean_ctor_set(v_reuseFailAlloc_1131_, 9, v_numEq0_x3f_1122_);
lean_ctor_set_uint8(v_reuseFailAlloc_1131_, sizeof(void*)*10, v_recheck_1119_);
lean_ctor_set_uint8(v_reuseFailAlloc_1131_, sizeof(void*)*10 + 1, v_numEq0Updated_1123_);
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
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2_spec__5___redArg(lean_object* v_keys_1133_, lean_object* v_i_1134_, lean_object* v_k_1135_){
_start:
{
lean_object* v___x_1136_; uint8_t v___x_1137_; 
v___x_1136_ = lean_array_get_size(v_keys_1133_);
v___x_1137_ = lean_nat_dec_lt(v_i_1134_, v___x_1136_);
if (v___x_1137_ == 0)
{
lean_dec(v_i_1134_);
return v___x_1137_;
}
else
{
lean_object* v_k_x27_1138_; uint8_t v___x_1139_; 
v_k_x27_1138_ = lean_array_fget_borrowed(v_keys_1133_, v_i_1134_);
v___x_1139_ = lean_expr_eqv(v_k_1135_, v_k_x27_1138_);
if (v___x_1139_ == 0)
{
lean_object* v___x_1140_; lean_object* v___x_1141_; 
v___x_1140_ = lean_unsigned_to_nat(1u);
v___x_1141_ = lean_nat_add(v_i_1134_, v___x_1140_);
lean_dec(v_i_1134_);
v_i_1134_ = v___x_1141_;
goto _start;
}
else
{
lean_dec(v_i_1134_);
return v___x_1137_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_keys_1143_, lean_object* v_i_1144_, lean_object* v_k_1145_){
_start:
{
uint8_t v_res_1146_; lean_object* v_r_1147_; 
v_res_1146_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2_spec__5___redArg(v_keys_1143_, v_i_1144_, v_k_1145_);
lean_dec_ref(v_k_1145_);
lean_dec_ref(v_keys_1143_);
v_r_1147_ = lean_box(v_res_1146_);
return v_r_1147_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2___redArg(lean_object* v_x_1148_, size_t v_x_1149_, lean_object* v_x_1150_){
_start:
{
if (lean_obj_tag(v_x_1148_) == 0)
{
lean_object* v_es_1151_; lean_object* v___x_1152_; size_t v___x_1153_; size_t v___x_1154_; lean_object* v_j_1155_; lean_object* v___x_1156_; 
v_es_1151_ = lean_ctor_get(v_x_1148_, 0);
v___x_1152_ = lean_box(2);
v___x_1153_ = ((size_t)31ULL);
v___x_1154_ = lean_usize_land(v_x_1149_, v___x_1153_);
v_j_1155_ = lean_usize_to_nat(v___x_1154_);
v___x_1156_ = lean_array_get_borrowed(v___x_1152_, v_es_1151_, v_j_1155_);
lean_dec(v_j_1155_);
switch(lean_obj_tag(v___x_1156_))
{
case 0:
{
lean_object* v_key_1157_; uint8_t v___x_1158_; 
v_key_1157_ = lean_ctor_get(v___x_1156_, 0);
v___x_1158_ = lean_expr_eqv(v_x_1150_, v_key_1157_);
return v___x_1158_;
}
case 1:
{
lean_object* v_node_1159_; size_t v___x_1160_; size_t v___x_1161_; 
v_node_1159_ = lean_ctor_get(v___x_1156_, 0);
v___x_1160_ = ((size_t)5ULL);
v___x_1161_ = lean_usize_shift_right(v_x_1149_, v___x_1160_);
v_x_1148_ = v_node_1159_;
v_x_1149_ = v___x_1161_;
goto _start;
}
default: 
{
uint8_t v___x_1163_; 
v___x_1163_ = 0;
return v___x_1163_;
}
}
}
else
{
lean_object* v_ks_1164_; lean_object* v___x_1165_; uint8_t v___x_1166_; 
v_ks_1164_ = lean_ctor_get(v_x_1148_, 0);
v___x_1165_ = lean_unsigned_to_nat(0u);
v___x_1166_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2_spec__5___redArg(v_ks_1164_, v___x_1165_, v_x_1150_);
return v___x_1166_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2___redArg___boxed(lean_object* v_x_1167_, lean_object* v_x_1168_, lean_object* v_x_1169_){
_start:
{
size_t v_x_85608__boxed_1170_; uint8_t v_res_1171_; lean_object* v_r_1172_; 
v_x_85608__boxed_1170_ = lean_unbox_usize(v_x_1168_);
lean_dec(v_x_1168_);
v_res_1171_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2___redArg(v_x_1167_, v_x_85608__boxed_1170_, v_x_1169_);
lean_dec_ref(v_x_1169_);
lean_dec_ref(v_x_1167_);
v_r_1172_ = lean_box(v_res_1171_);
return v_r_1172_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1___redArg(lean_object* v_x_1173_, lean_object* v_x_1174_){
_start:
{
uint64_t v___x_1175_; size_t v___x_1176_; uint8_t v___x_1177_; 
v___x_1175_ = l_Lean_Expr_hash(v_x_1174_);
v___x_1176_ = lean_uint64_to_usize(v___x_1175_);
v___x_1177_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2___redArg(v_x_1173_, v___x_1176_, v_x_1174_);
return v___x_1177_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1___redArg___boxed(lean_object* v_x_1178_, lean_object* v_x_1179_){
_start:
{
uint8_t v_res_1180_; lean_object* v_r_1181_; 
v_res_1180_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1___redArg(v_x_1178_, v_x_1179_);
lean_dec_ref(v_x_1179_);
lean_dec_ref(v_x_1178_);
v_r_1181_ = lean_box(v_res_1180_);
return v_r_1181_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___at___00Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2_spec__4(lean_object* v_type_1182_, lean_object* v_u_1183_, lean_object* v_instDeclName_1184_, lean_object* v_declName_1185_, lean_object* v_expectedInst_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_){
_start:
{
lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; 
v___x_1199_ = lean_box(0);
lean_inc_n(v_u_1183_, 2);
v___x_1200_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1200_, 0, v_u_1183_);
lean_ctor_set(v___x_1200_, 1, v___x_1199_);
v___x_1201_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1201_, 0, v_u_1183_);
lean_ctor_set(v___x_1201_, 1, v___x_1200_);
v___x_1202_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1202_, 0, v_u_1183_);
lean_ctor_set(v___x_1202_, 1, v___x_1201_);
lean_inc_ref(v___x_1202_);
v___x_1203_ = l_Lean_mkConst(v_instDeclName_1184_, v___x_1202_);
lean_inc_ref_n(v_type_1182_, 3);
v___x_1204_ = l_Lean_mkApp3(v___x_1203_, v_type_1182_, v_type_1182_, v_type_1182_);
v___x_1205_ = l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3(v___x_1204_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_);
if (lean_obj_tag(v___x_1205_) == 0)
{
lean_object* v_a_1206_; lean_object* v___x_1207_; 
v_a_1206_ = lean_ctor_get(v___x_1205_, 0);
lean_inc_n(v_a_1206_, 2);
lean_dec_ref_known(v___x_1205_, 1);
lean_inc(v_declName_1185_);
v___x_1207_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst(v_declName_1185_, v_a_1206_, v_expectedInst_1186_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_);
if (lean_obj_tag(v___x_1207_) == 0)
{
lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; 
lean_dec_ref_known(v___x_1207_, 1);
v___x_1208_ = l_Lean_mkConst(v_declName_1185_, v___x_1202_);
lean_inc_ref_n(v_type_1182_, 2);
v___x_1209_ = l_Lean_mkApp4(v___x_1208_, v_type_1182_, v_type_1182_, v_type_1182_, v_a_1206_);
v___x_1210_ = l_Lean_Meta_Sym_canon(v___x_1209_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_);
if (lean_obj_tag(v___x_1210_) == 0)
{
lean_object* v_a_1211_; lean_object* v___x_1212_; 
v_a_1211_ = lean_ctor_get(v___x_1210_, 0);
lean_inc(v_a_1211_);
lean_dec_ref_known(v___x_1210_, 1);
v___x_1212_ = l_Lean_Meta_Sym_shareCommon(v_a_1211_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_);
return v___x_1212_;
}
else
{
return v___x_1210_;
}
}
else
{
lean_object* v_a_1213_; lean_object* v___x_1215_; uint8_t v_isShared_1216_; uint8_t v_isSharedCheck_1220_; 
lean_dec(v_a_1206_);
lean_dec_ref_known(v___x_1202_, 2);
lean_dec(v_declName_1185_);
lean_dec_ref(v_type_1182_);
v_a_1213_ = lean_ctor_get(v___x_1207_, 0);
v_isSharedCheck_1220_ = !lean_is_exclusive(v___x_1207_);
if (v_isSharedCheck_1220_ == 0)
{
v___x_1215_ = v___x_1207_;
v_isShared_1216_ = v_isSharedCheck_1220_;
goto v_resetjp_1214_;
}
else
{
lean_inc(v_a_1213_);
lean_dec(v___x_1207_);
v___x_1215_ = lean_box(0);
v_isShared_1216_ = v_isSharedCheck_1220_;
goto v_resetjp_1214_;
}
v_resetjp_1214_:
{
lean_object* v___x_1218_; 
if (v_isShared_1216_ == 0)
{
v___x_1218_ = v___x_1215_;
goto v_reusejp_1217_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v_a_1213_);
v___x_1218_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1217_;
}
v_reusejp_1217_:
{
return v___x_1218_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_1202_, 2);
lean_dec_ref(v_expectedInst_1186_);
lean_dec(v_declName_1185_);
lean_dec_ref(v_type_1182_);
return v___x_1205_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___at___00Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2_spec__4___boxed(lean_object** _args){
lean_object* v_type_1221_ = _args[0];
lean_object* v_u_1222_ = _args[1];
lean_object* v_instDeclName_1223_ = _args[2];
lean_object* v_declName_1224_ = _args[3];
lean_object* v_expectedInst_1225_ = _args[4];
lean_object* v___y_1226_ = _args[5];
lean_object* v___y_1227_ = _args[6];
lean_object* v___y_1228_ = _args[7];
lean_object* v___y_1229_ = _args[8];
lean_object* v___y_1230_ = _args[9];
lean_object* v___y_1231_ = _args[10];
lean_object* v___y_1232_ = _args[11];
lean_object* v___y_1233_ = _args[12];
lean_object* v___y_1234_ = _args[13];
lean_object* v___y_1235_ = _args[14];
lean_object* v___y_1236_ = _args[15];
lean_object* v___y_1237_ = _args[16];
_start:
{
lean_object* v_res_1238_; 
v_res_1238_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___at___00Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2_spec__4(v_type_1221_, v_u_1222_, v_instDeclName_1223_, v_declName_1224_, v_expectedInst_1225_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_, v___y_1234_, v___y_1235_, v___y_1236_);
lean_dec(v___y_1236_);
lean_dec_ref(v___y_1235_);
lean_dec(v___y_1234_);
lean_dec_ref(v___y_1233_);
lean_dec(v___y_1232_);
lean_dec_ref(v___y_1231_);
lean_dec(v___y_1230_);
lean_dec_ref(v___y_1229_);
lean_dec(v___y_1228_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1226_);
return v_res_1238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___lam__0(lean_object* v_a_1239_, lean_object* v_s_1240_){
_start:
{
lean_object* v_toRing_1241_; lean_object* v_invFn_x3f_1242_; lean_object* v_divFn_x3f_1243_; lean_object* v_zpowFn_x3f_1244_; lean_object* v_semiringId_x3f_1245_; lean_object* v_commSemiringInst_1246_; lean_object* v_commRingInst_1247_; lean_object* v_noZeroDivInst_x3f_1248_; lean_object* v_fieldInst_x3f_1249_; lean_object* v_powIdentityInst_x3f_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1282_; 
v_toRing_1241_ = lean_ctor_get(v_s_1240_, 0);
v_invFn_x3f_1242_ = lean_ctor_get(v_s_1240_, 1);
v_divFn_x3f_1243_ = lean_ctor_get(v_s_1240_, 2);
v_zpowFn_x3f_1244_ = lean_ctor_get(v_s_1240_, 3);
v_semiringId_x3f_1245_ = lean_ctor_get(v_s_1240_, 4);
v_commSemiringInst_1246_ = lean_ctor_get(v_s_1240_, 5);
v_commRingInst_1247_ = lean_ctor_get(v_s_1240_, 6);
v_noZeroDivInst_x3f_1248_ = lean_ctor_get(v_s_1240_, 7);
v_fieldInst_x3f_1249_ = lean_ctor_get(v_s_1240_, 8);
v_powIdentityInst_x3f_1250_ = lean_ctor_get(v_s_1240_, 9);
v_isSharedCheck_1282_ = !lean_is_exclusive(v_s_1240_);
if (v_isSharedCheck_1282_ == 0)
{
v___x_1252_ = v_s_1240_;
v_isShared_1253_ = v_isSharedCheck_1282_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_powIdentityInst_x3f_1250_);
lean_inc(v_fieldInst_x3f_1249_);
lean_inc(v_noZeroDivInst_x3f_1248_);
lean_inc(v_commRingInst_1247_);
lean_inc(v_commSemiringInst_1246_);
lean_inc(v_semiringId_x3f_1245_);
lean_inc(v_zpowFn_x3f_1244_);
lean_inc(v_divFn_x3f_1243_);
lean_inc(v_invFn_x3f_1242_);
lean_inc(v_toRing_1241_);
lean_dec(v_s_1240_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1282_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v_id_1254_; lean_object* v_type_1255_; lean_object* v_u_1256_; lean_object* v_ringInst_1257_; lean_object* v_semiringInst_1258_; lean_object* v_charInst_x3f_1259_; uint8_t v_symbolicChar_1260_; lean_object* v_addFn_x3f_1261_; lean_object* v_subFn_x3f_1262_; lean_object* v_negFn_x3f_1263_; lean_object* v_powFn_x3f_1264_; lean_object* v_intCastFn_x3f_1265_; lean_object* v_natCastFn_x3f_1266_; lean_object* v_natSMulFn_x3f_1267_; lean_object* v_intSMulFn_x3f_1268_; lean_object* v_one_x3f_1269_; lean_object* v___x_1271_; uint8_t v_isShared_1272_; uint8_t v_isSharedCheck_1280_; 
v_id_1254_ = lean_ctor_get(v_toRing_1241_, 0);
v_type_1255_ = lean_ctor_get(v_toRing_1241_, 1);
v_u_1256_ = lean_ctor_get(v_toRing_1241_, 2);
v_ringInst_1257_ = lean_ctor_get(v_toRing_1241_, 3);
v_semiringInst_1258_ = lean_ctor_get(v_toRing_1241_, 4);
v_charInst_x3f_1259_ = lean_ctor_get(v_toRing_1241_, 5);
v_symbolicChar_1260_ = lean_ctor_get_uint8(v_toRing_1241_, sizeof(void*)*16);
v_addFn_x3f_1261_ = lean_ctor_get(v_toRing_1241_, 6);
v_subFn_x3f_1262_ = lean_ctor_get(v_toRing_1241_, 8);
v_negFn_x3f_1263_ = lean_ctor_get(v_toRing_1241_, 9);
v_powFn_x3f_1264_ = lean_ctor_get(v_toRing_1241_, 10);
v_intCastFn_x3f_1265_ = lean_ctor_get(v_toRing_1241_, 11);
v_natCastFn_x3f_1266_ = lean_ctor_get(v_toRing_1241_, 12);
v_natSMulFn_x3f_1267_ = lean_ctor_get(v_toRing_1241_, 13);
v_intSMulFn_x3f_1268_ = lean_ctor_get(v_toRing_1241_, 14);
v_one_x3f_1269_ = lean_ctor_get(v_toRing_1241_, 15);
v_isSharedCheck_1280_ = !lean_is_exclusive(v_toRing_1241_);
if (v_isSharedCheck_1280_ == 0)
{
lean_object* v_unused_1281_; 
v_unused_1281_ = lean_ctor_get(v_toRing_1241_, 7);
lean_dec(v_unused_1281_);
v___x_1271_ = v_toRing_1241_;
v_isShared_1272_ = v_isSharedCheck_1280_;
goto v_resetjp_1270_;
}
else
{
lean_inc(v_one_x3f_1269_);
lean_inc(v_intSMulFn_x3f_1268_);
lean_inc(v_natSMulFn_x3f_1267_);
lean_inc(v_natCastFn_x3f_1266_);
lean_inc(v_intCastFn_x3f_1265_);
lean_inc(v_powFn_x3f_1264_);
lean_inc(v_negFn_x3f_1263_);
lean_inc(v_subFn_x3f_1262_);
lean_inc(v_addFn_x3f_1261_);
lean_inc(v_charInst_x3f_1259_);
lean_inc(v_semiringInst_1258_);
lean_inc(v_ringInst_1257_);
lean_inc(v_u_1256_);
lean_inc(v_type_1255_);
lean_inc(v_id_1254_);
lean_dec(v_toRing_1241_);
v___x_1271_ = lean_box(0);
v_isShared_1272_ = v_isSharedCheck_1280_;
goto v_resetjp_1270_;
}
v_resetjp_1270_:
{
lean_object* v___x_1273_; lean_object* v___x_1275_; 
v___x_1273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1273_, 0, v_a_1239_);
if (v_isShared_1272_ == 0)
{
lean_ctor_set(v___x_1271_, 7, v___x_1273_);
v___x_1275_ = v___x_1271_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1279_; 
v_reuseFailAlloc_1279_ = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(v_reuseFailAlloc_1279_, 0, v_id_1254_);
lean_ctor_set(v_reuseFailAlloc_1279_, 1, v_type_1255_);
lean_ctor_set(v_reuseFailAlloc_1279_, 2, v_u_1256_);
lean_ctor_set(v_reuseFailAlloc_1279_, 3, v_ringInst_1257_);
lean_ctor_set(v_reuseFailAlloc_1279_, 4, v_semiringInst_1258_);
lean_ctor_set(v_reuseFailAlloc_1279_, 5, v_charInst_x3f_1259_);
lean_ctor_set(v_reuseFailAlloc_1279_, 6, v_addFn_x3f_1261_);
lean_ctor_set(v_reuseFailAlloc_1279_, 7, v___x_1273_);
lean_ctor_set(v_reuseFailAlloc_1279_, 8, v_subFn_x3f_1262_);
lean_ctor_set(v_reuseFailAlloc_1279_, 9, v_negFn_x3f_1263_);
lean_ctor_set(v_reuseFailAlloc_1279_, 10, v_powFn_x3f_1264_);
lean_ctor_set(v_reuseFailAlloc_1279_, 11, v_intCastFn_x3f_1265_);
lean_ctor_set(v_reuseFailAlloc_1279_, 12, v_natCastFn_x3f_1266_);
lean_ctor_set(v_reuseFailAlloc_1279_, 13, v_natSMulFn_x3f_1267_);
lean_ctor_set(v_reuseFailAlloc_1279_, 14, v_intSMulFn_x3f_1268_);
lean_ctor_set(v_reuseFailAlloc_1279_, 15, v_one_x3f_1269_);
lean_ctor_set_uint8(v_reuseFailAlloc_1279_, sizeof(void*)*16, v_symbolicChar_1260_);
v___x_1275_ = v_reuseFailAlloc_1279_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
lean_object* v___x_1277_; 
if (v_isShared_1253_ == 0)
{
lean_ctor_set(v___x_1252_, 0, v___x_1275_);
v___x_1277_ = v___x_1252_;
goto v_reusejp_1276_;
}
else
{
lean_object* v_reuseFailAlloc_1278_; 
v_reuseFailAlloc_1278_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1278_, 0, v___x_1275_);
lean_ctor_set(v_reuseFailAlloc_1278_, 1, v_invFn_x3f_1242_);
lean_ctor_set(v_reuseFailAlloc_1278_, 2, v_divFn_x3f_1243_);
lean_ctor_set(v_reuseFailAlloc_1278_, 3, v_zpowFn_x3f_1244_);
lean_ctor_set(v_reuseFailAlloc_1278_, 4, v_semiringId_x3f_1245_);
lean_ctor_set(v_reuseFailAlloc_1278_, 5, v_commSemiringInst_1246_);
lean_ctor_set(v_reuseFailAlloc_1278_, 6, v_commRingInst_1247_);
lean_ctor_set(v_reuseFailAlloc_1278_, 7, v_noZeroDivInst_x3f_1248_);
lean_ctor_set(v_reuseFailAlloc_1278_, 8, v_fieldInst_x3f_1249_);
lean_ctor_set(v_reuseFailAlloc_1278_, 9, v_powIdentityInst_x3f_1250_);
v___x_1277_ = v_reuseFailAlloc_1278_;
goto v_reusejp_1276_;
}
v_reusejp_1276_:
{
return v___x_1277_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2(lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_){
_start:
{
lean_object* v___x_1307_; 
v___x_1307_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v___y_1295_, v___y_1296_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_);
if (lean_obj_tag(v___x_1307_) == 0)
{
lean_object* v_a_1308_; lean_object* v___x_1310_; uint8_t v_isShared_1311_; uint8_t v_isSharedCheck_1351_; 
v_a_1308_ = lean_ctor_get(v___x_1307_, 0);
v_isSharedCheck_1351_ = !lean_is_exclusive(v___x_1307_);
if (v_isSharedCheck_1351_ == 0)
{
v___x_1310_ = v___x_1307_;
v_isShared_1311_ = v_isSharedCheck_1351_;
goto v_resetjp_1309_;
}
else
{
lean_inc(v_a_1308_);
lean_dec(v___x_1307_);
v___x_1310_ = lean_box(0);
v_isShared_1311_ = v_isSharedCheck_1351_;
goto v_resetjp_1309_;
}
v_resetjp_1309_:
{
lean_object* v_toRing_1312_; lean_object* v_mulFn_x3f_1313_; 
v_toRing_1312_ = lean_ctor_get(v_a_1308_, 0);
lean_inc_ref(v_toRing_1312_);
lean_dec(v_a_1308_);
v_mulFn_x3f_1313_ = lean_ctor_get(v_toRing_1312_, 7);
if (lean_obj_tag(v_mulFn_x3f_1313_) == 1)
{
lean_object* v_val_1314_; lean_object* v___x_1316_; 
lean_inc_ref(v_mulFn_x3f_1313_);
lean_dec_ref(v_toRing_1312_);
v_val_1314_ = lean_ctor_get(v_mulFn_x3f_1313_, 0);
lean_inc(v_val_1314_);
lean_dec_ref_known(v_mulFn_x3f_1313_, 1);
if (v_isShared_1311_ == 0)
{
lean_ctor_set(v___x_1310_, 0, v_val_1314_);
v___x_1316_ = v___x_1310_;
goto v_reusejp_1315_;
}
else
{
lean_object* v_reuseFailAlloc_1317_; 
v_reuseFailAlloc_1317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1317_, 0, v_val_1314_);
v___x_1316_ = v_reuseFailAlloc_1317_;
goto v_reusejp_1315_;
}
v_reusejp_1315_:
{
return v___x_1316_;
}
}
else
{
lean_object* v_type_1318_; lean_object* v_u_1319_; lean_object* v_semiringInst_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v_expectedInst_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; 
lean_del_object(v___x_1310_);
v_type_1318_ = lean_ctor_get(v_toRing_1312_, 1);
lean_inc_ref_n(v_type_1318_, 3);
v_u_1319_ = lean_ctor_get(v_toRing_1312_, 2);
lean_inc_n(v_u_1319_, 2);
v_semiringInst_1320_ = lean_ctor_get(v_toRing_1312_, 4);
lean_inc_ref(v_semiringInst_1320_);
lean_dec_ref(v_toRing_1312_);
v___x_1321_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__1));
v___x_1322_ = lean_box(0);
v___x_1323_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1323_, 0, v_u_1319_);
lean_ctor_set(v___x_1323_, 1, v___x_1322_);
lean_inc_ref(v___x_1323_);
v___x_1324_ = l_Lean_mkConst(v___x_1321_, v___x_1323_);
v___x_1325_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__4));
v___x_1326_ = l_Lean_mkConst(v___x_1325_, v___x_1323_);
v___x_1327_ = l_Lean_mkAppB(v___x_1326_, v_type_1318_, v_semiringInst_1320_);
v_expectedInst_1328_ = l_Lean_mkAppB(v___x_1324_, v_type_1318_, v___x_1327_);
v___x_1329_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___closed__5));
v___x_1330_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__20));
v___x_1331_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkBinHomoFn___at___00Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2_spec__4(v_type_1318_, v_u_1319_, v___x_1329_, v___x_1330_, v_expectedInst_1328_, v___y_1295_, v___y_1296_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_);
if (lean_obj_tag(v___x_1331_) == 0)
{
lean_object* v_a_1332_; lean_object* v___f_1333_; lean_object* v___x_1334_; 
v_a_1332_ = lean_ctor_get(v___x_1331_, 0);
lean_inc_n(v_a_1332_, 2);
lean_dec_ref_known(v___x_1331_, 1);
v___f_1333_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___lam__0), 2, 1);
lean_closure_set(v___f_1333_, 0, v_a_1332_);
v___x_1334_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(v___f_1333_, v___y_1295_, v___y_1301_);
if (lean_obj_tag(v___x_1334_) == 0)
{
lean_object* v___x_1336_; uint8_t v_isShared_1337_; uint8_t v_isSharedCheck_1341_; 
v_isSharedCheck_1341_ = !lean_is_exclusive(v___x_1334_);
if (v_isSharedCheck_1341_ == 0)
{
lean_object* v_unused_1342_; 
v_unused_1342_ = lean_ctor_get(v___x_1334_, 0);
lean_dec(v_unused_1342_);
v___x_1336_ = v___x_1334_;
v_isShared_1337_ = v_isSharedCheck_1341_;
goto v_resetjp_1335_;
}
else
{
lean_dec(v___x_1334_);
v___x_1336_ = lean_box(0);
v_isShared_1337_ = v_isSharedCheck_1341_;
goto v_resetjp_1335_;
}
v_resetjp_1335_:
{
lean_object* v___x_1339_; 
if (v_isShared_1337_ == 0)
{
lean_ctor_set(v___x_1336_, 0, v_a_1332_);
v___x_1339_ = v___x_1336_;
goto v_reusejp_1338_;
}
else
{
lean_object* v_reuseFailAlloc_1340_; 
v_reuseFailAlloc_1340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1340_, 0, v_a_1332_);
v___x_1339_ = v_reuseFailAlloc_1340_;
goto v_reusejp_1338_;
}
v_reusejp_1338_:
{
return v___x_1339_;
}
}
}
else
{
lean_object* v_a_1343_; lean_object* v___x_1345_; uint8_t v_isShared_1346_; uint8_t v_isSharedCheck_1350_; 
lean_dec(v_a_1332_);
v_a_1343_ = lean_ctor_get(v___x_1334_, 0);
v_isSharedCheck_1350_ = !lean_is_exclusive(v___x_1334_);
if (v_isSharedCheck_1350_ == 0)
{
v___x_1345_ = v___x_1334_;
v_isShared_1346_ = v_isSharedCheck_1350_;
goto v_resetjp_1344_;
}
else
{
lean_inc(v_a_1343_);
lean_dec(v___x_1334_);
v___x_1345_ = lean_box(0);
v_isShared_1346_ = v_isSharedCheck_1350_;
goto v_resetjp_1344_;
}
v_resetjp_1344_:
{
lean_object* v___x_1348_; 
if (v_isShared_1346_ == 0)
{
v___x_1348_ = v___x_1345_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v_a_1343_);
v___x_1348_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
return v___x_1348_;
}
}
}
}
else
{
return v___x_1331_;
}
}
}
}
else
{
lean_object* v_a_1352_; lean_object* v___x_1354_; uint8_t v_isShared_1355_; uint8_t v_isSharedCheck_1359_; 
v_a_1352_ = lean_ctor_get(v___x_1307_, 0);
v_isSharedCheck_1359_ = !lean_is_exclusive(v___x_1307_);
if (v_isSharedCheck_1359_ == 0)
{
v___x_1354_ = v___x_1307_;
v_isShared_1355_ = v_isSharedCheck_1359_;
goto v_resetjp_1353_;
}
else
{
lean_inc(v_a_1352_);
lean_dec(v___x_1307_);
v___x_1354_ = lean_box(0);
v_isShared_1355_ = v_isSharedCheck_1359_;
goto v_resetjp_1353_;
}
v_resetjp_1353_:
{
lean_object* v___x_1357_; 
if (v_isShared_1355_ == 0)
{
v___x_1357_ = v___x_1354_;
goto v_reusejp_1356_;
}
else
{
lean_object* v_reuseFailAlloc_1358_; 
v_reuseFailAlloc_1358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1358_, 0, v_a_1352_);
v___x_1357_ = v_reuseFailAlloc_1358_;
goto v_reusejp_1356_;
}
v_reusejp_1356_:
{
return v___x_1357_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2___boxed(lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_){
_start:
{
lean_object* v_res_1372_; 
v_res_1372_ = l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2(v___y_1360_, v___y_1361_, v___y_1362_, v___y_1363_, v___y_1364_, v___y_1365_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_, v___y_1370_);
lean_dec(v___y_1370_);
lean_dec_ref(v___y_1369_);
lean_dec(v___y_1368_);
lean_dec_ref(v___y_1367_);
lean_dec(v___y_1366_);
lean_dec_ref(v___y_1365_);
lean_dec(v___y_1364_);
lean_dec_ref(v___y_1363_);
lean_dec(v___y_1362_);
lean_dec(v___y_1361_);
lean_dec_ref(v___y_1360_);
return v_res_1372_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__1(void){
_start:
{
lean_object* v___x_1375_; lean_object* v___x_1376_; 
v___x_1375_ = lean_unsigned_to_nat(0u);
v___x_1376_ = lean_nat_to_int(v___x_1375_);
return v___x_1376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3(lean_object* v_k_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_){
_start:
{
lean_object* v___x_1395_; 
v___x_1395_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v___y_1383_, v___y_1384_, v___y_1385_, v___y_1386_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_, v___y_1393_);
if (lean_obj_tag(v___x_1395_) == 0)
{
lean_object* v_a_1396_; lean_object* v___x_1398_; uint8_t v_isShared_1399_; uint8_t v_isSharedCheck_1456_; 
v_a_1396_ = lean_ctor_get(v___x_1395_, 0);
v_isSharedCheck_1456_ = !lean_is_exclusive(v___x_1395_);
if (v_isSharedCheck_1456_ == 0)
{
v___x_1398_ = v___x_1395_;
v_isShared_1399_ = v_isSharedCheck_1456_;
goto v_resetjp_1397_;
}
else
{
lean_inc(v_a_1396_);
lean_dec(v___x_1395_);
v___x_1398_ = lean_box(0);
v_isShared_1399_ = v_isSharedCheck_1456_;
goto v_resetjp_1397_;
}
v_resetjp_1397_:
{
lean_object* v_toRing_1400_; lean_object* v_type_1401_; lean_object* v_u_1402_; lean_object* v_semiringInst_1403_; lean_object* v___x_1404_; lean_object* v_n_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v_ofNatInst_1410_; lean_object* v___y_1411_; lean_object* v___y_1412_; lean_object* v___y_1413_; lean_object* v___y_1414_; lean_object* v___y_1415_; lean_object* v___y_1416_; lean_object* v___y_1417_; lean_object* v___y_1418_; lean_object* v___y_1419_; lean_object* v___y_1420_; lean_object* v___y_1421_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; 
v_toRing_1400_ = lean_ctor_get(v_a_1396_, 0);
lean_inc_ref(v_toRing_1400_);
lean_dec(v_a_1396_);
v_type_1401_ = lean_ctor_get(v_toRing_1400_, 1);
lean_inc_ref_n(v_type_1401_, 2);
v_u_1402_ = lean_ctor_get(v_toRing_1400_, 2);
lean_inc(v_u_1402_);
v_semiringInst_1403_ = lean_ctor_get(v_toRing_1400_, 4);
lean_inc_ref(v_semiringInst_1403_);
lean_dec_ref(v_toRing_1400_);
v___x_1404_ = lean_nat_abs(v_k_1382_);
v_n_1405_ = l_Lean_mkRawNatLit(v___x_1404_);
v___x_1406_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__0));
v___x_1407_ = lean_box(0);
v___x_1408_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1408_, 0, v_u_1402_);
lean_ctor_set(v___x_1408_, 1, v___x_1407_);
lean_inc_ref(v___x_1408_);
v___x_1440_ = l_Lean_mkConst(v___x_1406_, v___x_1408_);
lean_inc_ref(v_n_1405_);
v___x_1441_ = l_Lean_mkAppB(v___x_1440_, v_type_1401_, v_n_1405_);
v___x_1442_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v___x_1441_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_, v___y_1393_);
if (lean_obj_tag(v___x_1442_) == 0)
{
lean_object* v_a_1443_; 
v_a_1443_ = lean_ctor_get(v___x_1442_, 0);
lean_inc(v_a_1443_);
lean_dec_ref_known(v___x_1442_, 1);
if (lean_obj_tag(v_a_1443_) == 1)
{
lean_object* v_val_1444_; 
lean_dec_ref(v_semiringInst_1403_);
v_val_1444_ = lean_ctor_get(v_a_1443_, 0);
lean_inc(v_val_1444_);
lean_dec_ref_known(v_a_1443_, 1);
v_ofNatInst_1410_ = v_val_1444_;
v___y_1411_ = v___y_1383_;
v___y_1412_ = v___y_1384_;
v___y_1413_ = v___y_1385_;
v___y_1414_ = v___y_1386_;
v___y_1415_ = v___y_1387_;
v___y_1416_ = v___y_1388_;
v___y_1417_ = v___y_1389_;
v___y_1418_ = v___y_1390_;
v___y_1419_ = v___y_1391_;
v___y_1420_ = v___y_1392_;
v___y_1421_ = v___y_1393_;
goto v___jp_1409_;
}
else
{
lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; 
lean_dec(v_a_1443_);
v___x_1445_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__2));
lean_inc_ref(v___x_1408_);
v___x_1446_ = l_Lean_mkConst(v___x_1445_, v___x_1408_);
lean_inc_ref(v_n_1405_);
lean_inc_ref(v_type_1401_);
v___x_1447_ = l_Lean_mkApp3(v___x_1446_, v_type_1401_, v_semiringInst_1403_, v_n_1405_);
v_ofNatInst_1410_ = v___x_1447_;
v___y_1411_ = v___y_1383_;
v___y_1412_ = v___y_1384_;
v___y_1413_ = v___y_1385_;
v___y_1414_ = v___y_1386_;
v___y_1415_ = v___y_1387_;
v___y_1416_ = v___y_1388_;
v___y_1417_ = v___y_1389_;
v___y_1418_ = v___y_1390_;
v___y_1419_ = v___y_1391_;
v___y_1420_ = v___y_1392_;
v___y_1421_ = v___y_1393_;
goto v___jp_1409_;
}
}
else
{
lean_object* v_a_1448_; lean_object* v___x_1450_; uint8_t v_isShared_1451_; uint8_t v_isSharedCheck_1455_; 
lean_dec_ref_known(v___x_1408_, 2);
lean_dec_ref(v_n_1405_);
lean_dec_ref(v_semiringInst_1403_);
lean_dec_ref(v_type_1401_);
lean_del_object(v___x_1398_);
v_a_1448_ = lean_ctor_get(v___x_1442_, 0);
v_isSharedCheck_1455_ = !lean_is_exclusive(v___x_1442_);
if (v_isSharedCheck_1455_ == 0)
{
v___x_1450_ = v___x_1442_;
v_isShared_1451_ = v_isSharedCheck_1455_;
goto v_resetjp_1449_;
}
else
{
lean_inc(v_a_1448_);
lean_dec(v___x_1442_);
v___x_1450_ = lean_box(0);
v_isShared_1451_ = v_isSharedCheck_1455_;
goto v_resetjp_1449_;
}
v_resetjp_1449_:
{
lean_object* v___x_1453_; 
if (v_isShared_1451_ == 0)
{
v___x_1453_ = v___x_1450_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v_a_1448_);
v___x_1453_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
return v___x_1453_;
}
}
}
v___jp_1409_:
{
lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v_e_1424_; lean_object* v___x_1425_; uint8_t v___x_1426_; 
v___x_1422_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__8));
v___x_1423_ = l_Lean_mkConst(v___x_1422_, v___x_1408_);
v_e_1424_ = l_Lean_mkApp3(v___x_1423_, v_type_1401_, v_n_1405_, v_ofNatInst_1410_);
v___x_1425_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__1, &l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__1_once, _init_l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__1);
v___x_1426_ = lean_int_dec_lt(v_k_1382_, v___x_1425_);
if (v___x_1426_ == 0)
{
lean_object* v___x_1428_; 
if (v_isShared_1399_ == 0)
{
lean_ctor_set(v___x_1398_, 0, v_e_1424_);
v___x_1428_ = v___x_1398_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v_e_1424_);
v___x_1428_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1427_;
}
v_reusejp_1427_:
{
return v___x_1428_;
}
}
else
{
lean_object* v___x_1430_; 
lean_del_object(v___x_1398_);
v___x_1430_ = l_Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0(v___y_1411_, v___y_1412_, v___y_1413_, v___y_1414_, v___y_1415_, v___y_1416_, v___y_1417_, v___y_1418_, v___y_1419_, v___y_1420_, v___y_1421_);
if (lean_obj_tag(v___x_1430_) == 0)
{
lean_object* v_a_1431_; lean_object* v___x_1433_; uint8_t v_isShared_1434_; uint8_t v_isSharedCheck_1439_; 
v_a_1431_ = lean_ctor_get(v___x_1430_, 0);
v_isSharedCheck_1439_ = !lean_is_exclusive(v___x_1430_);
if (v_isSharedCheck_1439_ == 0)
{
v___x_1433_ = v___x_1430_;
v_isShared_1434_ = v_isSharedCheck_1439_;
goto v_resetjp_1432_;
}
else
{
lean_inc(v_a_1431_);
lean_dec(v___x_1430_);
v___x_1433_ = lean_box(0);
v_isShared_1434_ = v_isSharedCheck_1439_;
goto v_resetjp_1432_;
}
v_resetjp_1432_:
{
lean_object* v___x_1435_; lean_object* v___x_1437_; 
v___x_1435_ = l_Lean_Expr_app___override(v_a_1431_, v_e_1424_);
if (v_isShared_1434_ == 0)
{
lean_ctor_set(v___x_1433_, 0, v___x_1435_);
v___x_1437_ = v___x_1433_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v___x_1435_);
v___x_1437_ = v_reuseFailAlloc_1438_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
return v___x_1437_;
}
}
}
else
{
lean_dec_ref(v_e_1424_);
return v___x_1430_;
}
}
}
}
}
else
{
lean_object* v_a_1457_; lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1464_; 
v_a_1457_ = lean_ctor_get(v___x_1395_, 0);
v_isSharedCheck_1464_ = !lean_is_exclusive(v___x_1395_);
if (v_isSharedCheck_1464_ == 0)
{
v___x_1459_ = v___x_1395_;
v_isShared_1460_ = v_isSharedCheck_1464_;
goto v_resetjp_1458_;
}
else
{
lean_inc(v_a_1457_);
lean_dec(v___x_1395_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1464_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
lean_object* v___x_1462_; 
if (v_isShared_1460_ == 0)
{
v___x_1462_ = v___x_1459_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v_a_1457_);
v___x_1462_ = v_reuseFailAlloc_1463_;
goto v_reusejp_1461_;
}
v_reusejp_1461_:
{
return v___x_1462_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___boxed(lean_object* v_k_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_){
_start:
{
lean_object* v_res_1478_; 
v_res_1478_ = l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3(v_k_1465_, v___y_1466_, v___y_1467_, v___y_1468_, v___y_1469_, v___y_1470_, v___y_1471_, v___y_1472_, v___y_1473_, v___y_1474_, v___y_1475_, v___y_1476_);
lean_dec(v___y_1476_);
lean_dec_ref(v___y_1475_);
lean_dec(v___y_1474_);
lean_dec_ref(v___y_1473_);
lean_dec(v___y_1472_);
lean_dec_ref(v___y_1471_);
lean_dec(v___y_1470_);
lean_dec_ref(v___y_1469_);
lean_dec(v___y_1468_);
lean_dec(v___y_1467_);
lean_dec_ref(v___y_1466_);
lean_dec(v_k_1465_);
return v_res_1478_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__3(void){
_start:
{
lean_object* v___x_1486_; lean_object* v___x_1487_; 
v___x_1486_ = lean_unsigned_to_nat(1u);
v___x_1487_ = lean_nat_to_int(v___x_1486_);
return v___x_1487_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv(lean_object* v_e_1512_, lean_object* v_inst_1513_, lean_object* v_a_1514_, lean_object* v_a_1515_, lean_object* v_a_1516_, lean_object* v_a_1517_, lean_object* v_a_1518_, lean_object* v_a_1519_, lean_object* v_a_1520_, lean_object* v_a_1521_, lean_object* v_a_1522_, lean_object* v_a_1523_, lean_object* v_a_1524_, lean_object* v_a_1525_){
_start:
{
lean_object* v___f_1530_; lean_object* v___x_1531_; 
lean_inc_ref(v_a_1514_);
v___f_1530_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___lam__0), 2, 1);
lean_closure_set(v___f_1530_, 0, v_a_1514_);
v___x_1531_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst(v_inst_1513_, v_a_1515_, v_a_1516_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_, v_a_1524_, v_a_1525_);
if (lean_obj_tag(v___x_1531_) == 0)
{
lean_object* v_a_1532_; lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1779_; 
v_a_1532_ = lean_ctor_get(v___x_1531_, 0);
v_isSharedCheck_1779_ = !lean_is_exclusive(v___x_1531_);
if (v_isSharedCheck_1779_ == 0)
{
v___x_1534_ = v___x_1531_;
v_isShared_1535_ = v_isSharedCheck_1779_;
goto v_resetjp_1533_;
}
else
{
lean_inc(v_a_1532_);
lean_dec(v___x_1531_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1779_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
uint8_t v___x_1536_; 
v___x_1536_ = lean_unbox(v_a_1532_);
lean_dec(v_a_1532_);
if (v___x_1536_ == 0)
{
lean_object* v___x_1537_; lean_object* v___x_1539_; 
lean_dec_ref(v___f_1530_);
lean_dec_ref(v_a_1514_);
lean_dec_ref(v_e_1512_);
v___x_1537_ = lean_box(0);
if (v_isShared_1535_ == 0)
{
lean_ctor_set(v___x_1534_, 0, v___x_1537_);
v___x_1539_ = v___x_1534_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v___x_1537_);
v___x_1539_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
return v___x_1539_;
}
}
else
{
lean_object* v___x_1541_; 
lean_del_object(v___x_1534_);
v___x_1541_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v_a_1515_, v_a_1516_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_, v_a_1524_, v_a_1525_);
if (lean_obj_tag(v___x_1541_) == 0)
{
lean_object* v_a_1542_; lean_object* v___x_1544_; uint8_t v_isShared_1545_; uint8_t v_isSharedCheck_1770_; 
v_a_1542_ = lean_ctor_get(v___x_1541_, 0);
v_isSharedCheck_1770_ = !lean_is_exclusive(v___x_1541_);
if (v_isSharedCheck_1770_ == 0)
{
v___x_1544_ = v___x_1541_;
v_isShared_1545_ = v_isSharedCheck_1770_;
goto v_resetjp_1543_;
}
else
{
lean_inc(v_a_1542_);
lean_dec(v___x_1541_);
v___x_1544_ = lean_box(0);
v_isShared_1545_ = v_isSharedCheck_1770_;
goto v_resetjp_1543_;
}
v_resetjp_1543_:
{
lean_object* v_fieldInst_x3f_1546_; 
v_fieldInst_x3f_1546_ = lean_ctor_get(v_a_1542_, 8);
lean_inc(v_fieldInst_x3f_1546_);
if (lean_obj_tag(v_fieldInst_x3f_1546_) == 1)
{
lean_object* v_toRing_1547_; lean_object* v_val_1548_; lean_object* v___y_1550_; lean_object* v___y_1551_; lean_object* v___y_1552_; lean_object* v___y_1553_; lean_object* v___y_1554_; lean_object* v___y_1555_; lean_object* v___y_1556_; lean_object* v___y_1557_; lean_object* v___y_1558_; lean_object* v___y_1559_; lean_object* v___x_1569_; 
lean_del_object(v___x_1544_);
v_toRing_1547_ = lean_ctor_get(v_a_1542_, 0);
lean_inc_ref(v_toRing_1547_);
lean_dec(v_a_1542_);
v_val_1548_ = lean_ctor_get(v_fieldInst_x3f_1546_, 0);
lean_inc(v_val_1548_);
lean_dec_ref_known(v_fieldInst_x3f_1546_, 1);
v___x_1569_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRingState___redArg(v_a_1515_, v_a_1516_, v_a_1524_);
if (lean_obj_tag(v___x_1569_) == 0)
{
lean_object* v_a_1570_; lean_object* v_invSet_1571_; uint8_t v___x_1572_; 
v_a_1570_ = lean_ctor_get(v___x_1569_, 0);
lean_inc(v_a_1570_);
lean_dec_ref_known(v___x_1569_, 1);
v_invSet_1571_ = lean_ctor_get(v_a_1570_, 7);
lean_inc_ref(v_invSet_1571_);
lean_dec(v_a_1570_);
v___x_1572_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1___redArg(v_invSet_1571_, v_a_1514_);
lean_dec_ref(v_invSet_1571_);
if (v___x_1572_ == 0)
{
lean_object* v___x_1573_; 
v___x_1573_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRingState___redArg(v___f_1530_, v_a_1515_, v_a_1516_);
if (lean_obj_tag(v___x_1573_) == 0)
{
lean_object* v___x_1574_; 
lean_dec_ref_known(v___x_1573_, 1);
lean_inc_ref(v_a_1514_);
v___x_1574_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f(v_a_1514_, v_a_1515_, v_a_1516_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_, v_a_1524_, v_a_1525_);
if (lean_obj_tag(v___x_1574_) == 0)
{
lean_object* v_a_1575_; 
v_a_1575_ = lean_ctor_get(v___x_1574_, 0);
lean_inc(v_a_1575_);
lean_dec_ref_known(v___x_1574_, 1);
if (lean_obj_tag(v_a_1575_) == 1)
{
lean_object* v_val_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; uint8_t v___x_1579_; 
v_val_1576_ = lean_ctor_get(v_a_1575_, 0);
lean_inc(v_val_1576_);
lean_dec_ref_known(v_a_1575_, 1);
v___x_1577_ = lean_unsigned_to_nat(0u);
v___x_1578_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__1, &l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__1_once, _init_l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__1);
v___x_1579_ = lean_int_dec_eq(v_val_1576_, v___x_1578_);
if (v___x_1579_ == 0)
{
lean_object* v___x_1580_; 
v___x_1580_ = l_Lean_Meta_Grind_Arith_CommRing_hasChar(v_a_1515_, v_a_1516_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_, v_a_1524_, v_a_1525_);
if (lean_obj_tag(v___x_1580_) == 0)
{
lean_object* v_a_1581_; uint8_t v___x_1582_; 
v_a_1581_ = lean_ctor_get(v___x_1580_, 0);
lean_inc(v_a_1581_);
lean_dec_ref_known(v___x_1580_, 1);
v___x_1582_ = lean_unbox(v_a_1581_);
lean_dec(v_a_1581_);
if (v___x_1582_ == 0)
{
lean_dec(v_val_1576_);
lean_dec_ref(v_e_1512_);
v___y_1550_ = v_a_1516_;
v___y_1551_ = v_a_1517_;
v___y_1552_ = v_a_1518_;
v___y_1553_ = v_a_1519_;
v___y_1554_ = v_a_1520_;
v___y_1555_ = v_a_1521_;
v___y_1556_ = v_a_1522_;
v___y_1557_ = v_a_1523_;
v___y_1558_ = v_a_1524_;
v___y_1559_ = v_a_1525_;
goto v___jp_1549_;
}
else
{
lean_object* v___x_1583_; 
v___x_1583_ = l_Lean_Meta_Grind_Arith_CommRing_getCharInst(v_a_1515_, v_a_1516_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_, v_a_1524_, v_a_1525_);
if (lean_obj_tag(v___x_1583_) == 0)
{
lean_object* v_a_1584_; lean_object* v_fst_1585_; lean_object* v_snd_1586_; lean_object* v___x_1588_; uint8_t v_isShared_1589_; uint8_t v_isSharedCheck_1716_; 
v_a_1584_ = lean_ctor_get(v___x_1583_, 0);
lean_inc(v_a_1584_);
lean_dec_ref_known(v___x_1583_, 1);
v_fst_1585_ = lean_ctor_get(v_a_1584_, 0);
v_snd_1586_ = lean_ctor_get(v_a_1584_, 1);
v_isSharedCheck_1716_ = !lean_is_exclusive(v_a_1584_);
if (v_isSharedCheck_1716_ == 0)
{
v___x_1588_ = v_a_1584_;
v_isShared_1589_ = v_isSharedCheck_1716_;
goto v_resetjp_1587_;
}
else
{
lean_inc(v_snd_1586_);
lean_inc(v_fst_1585_);
lean_dec(v_a_1584_);
v___x_1588_ = lean_box(0);
v_isShared_1589_ = v_isSharedCheck_1716_;
goto v_resetjp_1587_;
}
v_resetjp_1587_:
{
uint8_t v___x_1590_; 
v___x_1590_ = lean_nat_dec_eq(v_snd_1586_, v___x_1577_);
if (v___x_1590_ == 0)
{
lean_object* v___x_1591_; lean_object* v___x_1592_; uint8_t v___x_1593_; 
lean_inc(v_snd_1586_);
v___x_1591_ = lean_nat_to_int(v_snd_1586_);
v___x_1592_ = lean_int_emod(v_val_1576_, v___x_1591_);
lean_dec(v___x_1591_);
v___x_1593_ = lean_int_dec_eq(v___x_1592_, v___x_1578_);
lean_dec(v___x_1592_);
if (v___x_1593_ == 0)
{
lean_object* v___x_1594_; 
v___x_1594_ = l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2(v_a_1515_, v_a_1516_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_, v_a_1524_, v_a_1525_);
if (lean_obj_tag(v___x_1594_) == 0)
{
lean_object* v_a_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; 
v_a_1595_ = lean_ctor_get(v___x_1594_, 0);
lean_inc(v_a_1595_);
lean_dec_ref_known(v___x_1594_, 1);
v___x_1596_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__3, &l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__3);
v___x_1597_ = l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3(v___x_1596_, v_a_1515_, v_a_1516_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_, v_a_1524_, v_a_1525_);
if (lean_obj_tag(v___x_1597_) == 0)
{
lean_object* v_a_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; 
v_a_1598_ = lean_ctor_get(v___x_1597_, 0);
lean_inc(v_a_1598_);
lean_dec_ref_known(v___x_1597_, 1);
v___x_1599_ = l_Lean_mkAppB(v_a_1595_, v_a_1514_, v_e_1512_);
v___x_1600_ = l_Lean_Meta_mkEq(v___x_1599_, v_a_1598_, v_a_1522_, v_a_1523_, v_a_1524_, v_a_1525_);
if (lean_obj_tag(v___x_1600_) == 0)
{
lean_object* v_a_1601_; lean_object* v_type_1602_; lean_object* v_u_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1607_; 
v_a_1601_ = lean_ctor_get(v___x_1600_, 0);
lean_inc(v_a_1601_);
lean_dec_ref_known(v___x_1600_, 1);
v_type_1602_ = lean_ctor_get(v_toRing_1547_, 1);
lean_inc_ref(v_type_1602_);
v_u_1603_ = lean_ctor_get(v_toRing_1547_, 2);
lean_inc(v_u_1603_);
lean_dec_ref(v_toRing_1547_);
v___x_1604_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__5));
v___x_1605_ = lean_box(0);
if (v_isShared_1589_ == 0)
{
lean_ctor_set_tag(v___x_1588_, 1);
lean_ctor_set(v___x_1588_, 1, v___x_1605_);
lean_ctor_set(v___x_1588_, 0, v_u_1603_);
v___x_1607_ = v___x_1588_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1614_, 0, v_u_1603_);
lean_ctor_set(v_reuseFailAlloc_1614_, 1, v___x_1605_);
v___x_1607_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; 
v___x_1608_ = l_Lean_mkConst(v___x_1604_, v___x_1607_);
v___x_1609_ = l_Lean_mkNatLit(v_snd_1586_);
v___x_1610_ = l_Lean_mkIntLit(v_val_1576_);
lean_dec(v_val_1576_);
v___x_1611_ = l_Lean_eagerReflBoolTrue;
v___x_1612_ = l_Lean_mkApp6(v___x_1608_, v_type_1602_, v___x_1609_, v_val_1548_, v_fst_1585_, v___x_1610_, v___x_1611_);
v___x_1613_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushInvFact___redArg(v_a_1601_, v___x_1612_, v_a_1516_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_, v_a_1524_, v_a_1525_);
if (lean_obj_tag(v___x_1613_) == 0)
{
lean_dec_ref_known(v___x_1613_, 1);
goto v___jp_1527_;
}
else
{
return v___x_1613_;
}
}
}
else
{
lean_object* v_a_1615_; lean_object* v___x_1617_; uint8_t v_isShared_1618_; uint8_t v_isSharedCheck_1622_; 
lean_del_object(v___x_1588_);
lean_dec(v_snd_1586_);
lean_dec(v_fst_1585_);
lean_dec(v_val_1576_);
lean_dec(v_val_1548_);
lean_dec_ref(v_toRing_1547_);
v_a_1615_ = lean_ctor_get(v___x_1600_, 0);
v_isSharedCheck_1622_ = !lean_is_exclusive(v___x_1600_);
if (v_isSharedCheck_1622_ == 0)
{
v___x_1617_ = v___x_1600_;
v_isShared_1618_ = v_isSharedCheck_1622_;
goto v_resetjp_1616_;
}
else
{
lean_inc(v_a_1615_);
lean_dec(v___x_1600_);
v___x_1617_ = lean_box(0);
v_isShared_1618_ = v_isSharedCheck_1622_;
goto v_resetjp_1616_;
}
v_resetjp_1616_:
{
lean_object* v___x_1620_; 
if (v_isShared_1618_ == 0)
{
v___x_1620_ = v___x_1617_;
goto v_reusejp_1619_;
}
else
{
lean_object* v_reuseFailAlloc_1621_; 
v_reuseFailAlloc_1621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1621_, 0, v_a_1615_);
v___x_1620_ = v_reuseFailAlloc_1621_;
goto v_reusejp_1619_;
}
v_reusejp_1619_:
{
return v___x_1620_;
}
}
}
}
else
{
lean_object* v_a_1623_; lean_object* v___x_1625_; uint8_t v_isShared_1626_; uint8_t v_isSharedCheck_1630_; 
lean_dec(v_a_1595_);
lean_del_object(v___x_1588_);
lean_dec(v_snd_1586_);
lean_dec(v_fst_1585_);
lean_dec(v_val_1576_);
lean_dec(v_val_1548_);
lean_dec_ref(v_toRing_1547_);
lean_dec_ref(v_a_1514_);
lean_dec_ref(v_e_1512_);
v_a_1623_ = lean_ctor_get(v___x_1597_, 0);
v_isSharedCheck_1630_ = !lean_is_exclusive(v___x_1597_);
if (v_isSharedCheck_1630_ == 0)
{
v___x_1625_ = v___x_1597_;
v_isShared_1626_ = v_isSharedCheck_1630_;
goto v_resetjp_1624_;
}
else
{
lean_inc(v_a_1623_);
lean_dec(v___x_1597_);
v___x_1625_ = lean_box(0);
v_isShared_1626_ = v_isSharedCheck_1630_;
goto v_resetjp_1624_;
}
v_resetjp_1624_:
{
lean_object* v___x_1628_; 
if (v_isShared_1626_ == 0)
{
v___x_1628_ = v___x_1625_;
goto v_reusejp_1627_;
}
else
{
lean_object* v_reuseFailAlloc_1629_; 
v_reuseFailAlloc_1629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1629_, 0, v_a_1623_);
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
lean_object* v_a_1631_; lean_object* v___x_1633_; uint8_t v_isShared_1634_; uint8_t v_isSharedCheck_1638_; 
lean_del_object(v___x_1588_);
lean_dec(v_snd_1586_);
lean_dec(v_fst_1585_);
lean_dec(v_val_1576_);
lean_dec(v_val_1548_);
lean_dec_ref(v_toRing_1547_);
lean_dec_ref(v_a_1514_);
lean_dec_ref(v_e_1512_);
v_a_1631_ = lean_ctor_get(v___x_1594_, 0);
v_isSharedCheck_1638_ = !lean_is_exclusive(v___x_1594_);
if (v_isSharedCheck_1638_ == 0)
{
v___x_1633_ = v___x_1594_;
v_isShared_1634_ = v_isSharedCheck_1638_;
goto v_resetjp_1632_;
}
else
{
lean_inc(v_a_1631_);
lean_dec(v___x_1594_);
v___x_1633_ = lean_box(0);
v_isShared_1634_ = v_isSharedCheck_1638_;
goto v_resetjp_1632_;
}
v_resetjp_1632_:
{
lean_object* v___x_1636_; 
if (v_isShared_1634_ == 0)
{
v___x_1636_ = v___x_1633_;
goto v_reusejp_1635_;
}
else
{
lean_object* v_reuseFailAlloc_1637_; 
v_reuseFailAlloc_1637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1637_, 0, v_a_1631_);
v___x_1636_ = v_reuseFailAlloc_1637_;
goto v_reusejp_1635_;
}
v_reusejp_1635_:
{
return v___x_1636_;
}
}
}
}
else
{
lean_object* v___x_1639_; 
lean_dec_ref(v_a_1514_);
v___x_1639_ = l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3(v___x_1578_, v_a_1515_, v_a_1516_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_, v_a_1524_, v_a_1525_);
if (lean_obj_tag(v___x_1639_) == 0)
{
lean_object* v_a_1640_; lean_object* v___x_1641_; 
v_a_1640_ = lean_ctor_get(v___x_1639_, 0);
lean_inc(v_a_1640_);
lean_dec_ref_known(v___x_1639_, 1);
v___x_1641_ = l_Lean_Meta_mkEq(v_e_1512_, v_a_1640_, v_a_1522_, v_a_1523_, v_a_1524_, v_a_1525_);
if (lean_obj_tag(v___x_1641_) == 0)
{
lean_object* v_a_1642_; lean_object* v_type_1643_; lean_object* v_u_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1648_; 
v_a_1642_ = lean_ctor_get(v___x_1641_, 0);
lean_inc(v_a_1642_);
lean_dec_ref_known(v___x_1641_, 1);
v_type_1643_ = lean_ctor_get(v_toRing_1547_, 1);
lean_inc_ref(v_type_1643_);
v_u_1644_ = lean_ctor_get(v_toRing_1547_, 2);
lean_inc(v_u_1644_);
lean_dec_ref(v_toRing_1547_);
v___x_1645_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__7));
v___x_1646_ = lean_box(0);
if (v_isShared_1589_ == 0)
{
lean_ctor_set_tag(v___x_1588_, 1);
lean_ctor_set(v___x_1588_, 1, v___x_1646_);
lean_ctor_set(v___x_1588_, 0, v_u_1644_);
v___x_1648_ = v___x_1588_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1655_; 
v_reuseFailAlloc_1655_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1655_, 0, v_u_1644_);
lean_ctor_set(v_reuseFailAlloc_1655_, 1, v___x_1646_);
v___x_1648_ = v_reuseFailAlloc_1655_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; 
v___x_1649_ = l_Lean_mkConst(v___x_1645_, v___x_1648_);
v___x_1650_ = l_Lean_mkNatLit(v_snd_1586_);
v___x_1651_ = l_Lean_mkIntLit(v_val_1576_);
lean_dec(v_val_1576_);
v___x_1652_ = l_Lean_eagerReflBoolTrue;
v___x_1653_ = l_Lean_mkApp6(v___x_1649_, v_type_1643_, v___x_1650_, v_val_1548_, v_fst_1585_, v___x_1651_, v___x_1652_);
v___x_1654_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushInvFact___redArg(v_a_1642_, v___x_1653_, v_a_1516_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_, v_a_1524_, v_a_1525_);
if (lean_obj_tag(v___x_1654_) == 0)
{
lean_dec_ref_known(v___x_1654_, 1);
goto v___jp_1527_;
}
else
{
return v___x_1654_;
}
}
}
else
{
lean_object* v_a_1656_; lean_object* v___x_1658_; uint8_t v_isShared_1659_; uint8_t v_isSharedCheck_1663_; 
lean_del_object(v___x_1588_);
lean_dec(v_snd_1586_);
lean_dec(v_fst_1585_);
lean_dec(v_val_1576_);
lean_dec(v_val_1548_);
lean_dec_ref(v_toRing_1547_);
v_a_1656_ = lean_ctor_get(v___x_1641_, 0);
v_isSharedCheck_1663_ = !lean_is_exclusive(v___x_1641_);
if (v_isSharedCheck_1663_ == 0)
{
v___x_1658_ = v___x_1641_;
v_isShared_1659_ = v_isSharedCheck_1663_;
goto v_resetjp_1657_;
}
else
{
lean_inc(v_a_1656_);
lean_dec(v___x_1641_);
v___x_1658_ = lean_box(0);
v_isShared_1659_ = v_isSharedCheck_1663_;
goto v_resetjp_1657_;
}
v_resetjp_1657_:
{
lean_object* v___x_1661_; 
if (v_isShared_1659_ == 0)
{
v___x_1661_ = v___x_1658_;
goto v_reusejp_1660_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v_a_1656_);
v___x_1661_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1660_;
}
v_reusejp_1660_:
{
return v___x_1661_;
}
}
}
}
else
{
lean_object* v_a_1664_; lean_object* v___x_1666_; uint8_t v_isShared_1667_; uint8_t v_isSharedCheck_1671_; 
lean_del_object(v___x_1588_);
lean_dec(v_snd_1586_);
lean_dec(v_fst_1585_);
lean_dec(v_val_1576_);
lean_dec(v_val_1548_);
lean_dec_ref(v_toRing_1547_);
lean_dec_ref(v_e_1512_);
v_a_1664_ = lean_ctor_get(v___x_1639_, 0);
v_isSharedCheck_1671_ = !lean_is_exclusive(v___x_1639_);
if (v_isSharedCheck_1671_ == 0)
{
v___x_1666_ = v___x_1639_;
v_isShared_1667_ = v_isSharedCheck_1671_;
goto v_resetjp_1665_;
}
else
{
lean_inc(v_a_1664_);
lean_dec(v___x_1639_);
v___x_1666_ = lean_box(0);
v_isShared_1667_ = v_isSharedCheck_1671_;
goto v_resetjp_1665_;
}
v_resetjp_1665_:
{
lean_object* v___x_1669_; 
if (v_isShared_1667_ == 0)
{
v___x_1669_ = v___x_1666_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v_a_1664_);
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
}
else
{
lean_object* v___x_1672_; 
lean_dec(v_snd_1586_);
v___x_1672_ = l_Lean_Meta_Sym_Arith_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2(v_a_1515_, v_a_1516_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_, v_a_1524_, v_a_1525_);
if (lean_obj_tag(v___x_1672_) == 0)
{
lean_object* v_a_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; 
v_a_1673_ = lean_ctor_get(v___x_1672_, 0);
lean_inc(v_a_1673_);
lean_dec_ref_known(v___x_1672_, 1);
v___x_1674_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__3, &l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__3);
v___x_1675_ = l_Lean_Meta_Sym_Arith_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3(v___x_1674_, v_a_1515_, v_a_1516_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_, v_a_1524_, v_a_1525_);
if (lean_obj_tag(v___x_1675_) == 0)
{
lean_object* v_a_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; 
v_a_1676_ = lean_ctor_get(v___x_1675_, 0);
lean_inc(v_a_1676_);
lean_dec_ref_known(v___x_1675_, 1);
v___x_1677_ = l_Lean_mkAppB(v_a_1673_, v_a_1514_, v_e_1512_);
v___x_1678_ = l_Lean_Meta_mkEq(v___x_1677_, v_a_1676_, v_a_1522_, v_a_1523_, v_a_1524_, v_a_1525_);
if (lean_obj_tag(v___x_1678_) == 0)
{
lean_object* v_a_1679_; lean_object* v_type_1680_; lean_object* v_u_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1685_; 
v_a_1679_ = lean_ctor_get(v___x_1678_, 0);
lean_inc(v_a_1679_);
lean_dec_ref_known(v___x_1678_, 1);
v_type_1680_ = lean_ctor_get(v_toRing_1547_, 1);
lean_inc_ref(v_type_1680_);
v_u_1681_ = lean_ctor_get(v_toRing_1547_, 2);
lean_inc(v_u_1681_);
lean_dec_ref(v_toRing_1547_);
v___x_1682_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__9));
v___x_1683_ = lean_box(0);
if (v_isShared_1589_ == 0)
{
lean_ctor_set_tag(v___x_1588_, 1);
lean_ctor_set(v___x_1588_, 1, v___x_1683_);
lean_ctor_set(v___x_1588_, 0, v_u_1681_);
v___x_1685_ = v___x_1588_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1691_; 
v_reuseFailAlloc_1691_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1691_, 0, v_u_1681_);
lean_ctor_set(v_reuseFailAlloc_1691_, 1, v___x_1683_);
v___x_1685_ = v_reuseFailAlloc_1691_;
goto v_reusejp_1684_;
}
v_reusejp_1684_:
{
lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; 
v___x_1686_ = l_Lean_mkConst(v___x_1682_, v___x_1685_);
v___x_1687_ = l_Lean_mkIntLit(v_val_1576_);
lean_dec(v_val_1576_);
v___x_1688_ = l_Lean_eagerReflBoolTrue;
v___x_1689_ = l_Lean_mkApp5(v___x_1686_, v_type_1680_, v_val_1548_, v_fst_1585_, v___x_1687_, v___x_1688_);
v___x_1690_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushInvFact___redArg(v_a_1679_, v___x_1689_, v_a_1516_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_, v_a_1524_, v_a_1525_);
if (lean_obj_tag(v___x_1690_) == 0)
{
lean_dec_ref_known(v___x_1690_, 1);
goto v___jp_1527_;
}
else
{
return v___x_1690_;
}
}
}
else
{
lean_object* v_a_1692_; lean_object* v___x_1694_; uint8_t v_isShared_1695_; uint8_t v_isSharedCheck_1699_; 
lean_del_object(v___x_1588_);
lean_dec(v_fst_1585_);
lean_dec(v_val_1576_);
lean_dec(v_val_1548_);
lean_dec_ref(v_toRing_1547_);
v_a_1692_ = lean_ctor_get(v___x_1678_, 0);
v_isSharedCheck_1699_ = !lean_is_exclusive(v___x_1678_);
if (v_isSharedCheck_1699_ == 0)
{
v___x_1694_ = v___x_1678_;
v_isShared_1695_ = v_isSharedCheck_1699_;
goto v_resetjp_1693_;
}
else
{
lean_inc(v_a_1692_);
lean_dec(v___x_1678_);
v___x_1694_ = lean_box(0);
v_isShared_1695_ = v_isSharedCheck_1699_;
goto v_resetjp_1693_;
}
v_resetjp_1693_:
{
lean_object* v___x_1697_; 
if (v_isShared_1695_ == 0)
{
v___x_1697_ = v___x_1694_;
goto v_reusejp_1696_;
}
else
{
lean_object* v_reuseFailAlloc_1698_; 
v_reuseFailAlloc_1698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1698_, 0, v_a_1692_);
v___x_1697_ = v_reuseFailAlloc_1698_;
goto v_reusejp_1696_;
}
v_reusejp_1696_:
{
return v___x_1697_;
}
}
}
}
else
{
lean_object* v_a_1700_; lean_object* v___x_1702_; uint8_t v_isShared_1703_; uint8_t v_isSharedCheck_1707_; 
lean_dec(v_a_1673_);
lean_del_object(v___x_1588_);
lean_dec(v_fst_1585_);
lean_dec(v_val_1576_);
lean_dec(v_val_1548_);
lean_dec_ref(v_toRing_1547_);
lean_dec_ref(v_a_1514_);
lean_dec_ref(v_e_1512_);
v_a_1700_ = lean_ctor_get(v___x_1675_, 0);
v_isSharedCheck_1707_ = !lean_is_exclusive(v___x_1675_);
if (v_isSharedCheck_1707_ == 0)
{
v___x_1702_ = v___x_1675_;
v_isShared_1703_ = v_isSharedCheck_1707_;
goto v_resetjp_1701_;
}
else
{
lean_inc(v_a_1700_);
lean_dec(v___x_1675_);
v___x_1702_ = lean_box(0);
v_isShared_1703_ = v_isSharedCheck_1707_;
goto v_resetjp_1701_;
}
v_resetjp_1701_:
{
lean_object* v___x_1705_; 
if (v_isShared_1703_ == 0)
{
v___x_1705_ = v___x_1702_;
goto v_reusejp_1704_;
}
else
{
lean_object* v_reuseFailAlloc_1706_; 
v_reuseFailAlloc_1706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1706_, 0, v_a_1700_);
v___x_1705_ = v_reuseFailAlloc_1706_;
goto v_reusejp_1704_;
}
v_reusejp_1704_:
{
return v___x_1705_;
}
}
}
}
else
{
lean_object* v_a_1708_; lean_object* v___x_1710_; uint8_t v_isShared_1711_; uint8_t v_isSharedCheck_1715_; 
lean_del_object(v___x_1588_);
lean_dec(v_fst_1585_);
lean_dec(v_val_1576_);
lean_dec(v_val_1548_);
lean_dec_ref(v_toRing_1547_);
lean_dec_ref(v_a_1514_);
lean_dec_ref(v_e_1512_);
v_a_1708_ = lean_ctor_get(v___x_1672_, 0);
v_isSharedCheck_1715_ = !lean_is_exclusive(v___x_1672_);
if (v_isSharedCheck_1715_ == 0)
{
v___x_1710_ = v___x_1672_;
v_isShared_1711_ = v_isSharedCheck_1715_;
goto v_resetjp_1709_;
}
else
{
lean_inc(v_a_1708_);
lean_dec(v___x_1672_);
v___x_1710_ = lean_box(0);
v_isShared_1711_ = v_isSharedCheck_1715_;
goto v_resetjp_1709_;
}
v_resetjp_1709_:
{
lean_object* v___x_1713_; 
if (v_isShared_1711_ == 0)
{
v___x_1713_ = v___x_1710_;
goto v_reusejp_1712_;
}
else
{
lean_object* v_reuseFailAlloc_1714_; 
v_reuseFailAlloc_1714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1714_, 0, v_a_1708_);
v___x_1713_ = v_reuseFailAlloc_1714_;
goto v_reusejp_1712_;
}
v_reusejp_1712_:
{
return v___x_1713_;
}
}
}
}
}
}
else
{
lean_object* v_a_1717_; lean_object* v___x_1719_; uint8_t v_isShared_1720_; uint8_t v_isSharedCheck_1724_; 
lean_dec(v_val_1576_);
lean_dec(v_val_1548_);
lean_dec_ref(v_toRing_1547_);
lean_dec_ref(v_a_1514_);
lean_dec_ref(v_e_1512_);
v_a_1717_ = lean_ctor_get(v___x_1583_, 0);
v_isSharedCheck_1724_ = !lean_is_exclusive(v___x_1583_);
if (v_isSharedCheck_1724_ == 0)
{
v___x_1719_ = v___x_1583_;
v_isShared_1720_ = v_isSharedCheck_1724_;
goto v_resetjp_1718_;
}
else
{
lean_inc(v_a_1717_);
lean_dec(v___x_1583_);
v___x_1719_ = lean_box(0);
v_isShared_1720_ = v_isSharedCheck_1724_;
goto v_resetjp_1718_;
}
v_resetjp_1718_:
{
lean_object* v___x_1722_; 
if (v_isShared_1720_ == 0)
{
v___x_1722_ = v___x_1719_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v_a_1717_);
v___x_1722_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1721_;
}
v_reusejp_1721_:
{
return v___x_1722_;
}
}
}
}
}
else
{
lean_object* v_a_1725_; lean_object* v___x_1727_; uint8_t v_isShared_1728_; uint8_t v_isSharedCheck_1732_; 
lean_dec(v_val_1576_);
lean_dec(v_val_1548_);
lean_dec_ref(v_toRing_1547_);
lean_dec_ref(v_a_1514_);
lean_dec_ref(v_e_1512_);
v_a_1725_ = lean_ctor_get(v___x_1580_, 0);
v_isSharedCheck_1732_ = !lean_is_exclusive(v___x_1580_);
if (v_isSharedCheck_1732_ == 0)
{
v___x_1727_ = v___x_1580_;
v_isShared_1728_ = v_isSharedCheck_1732_;
goto v_resetjp_1726_;
}
else
{
lean_inc(v_a_1725_);
lean_dec(v___x_1580_);
v___x_1727_ = lean_box(0);
v_isShared_1728_ = v_isSharedCheck_1732_;
goto v_resetjp_1726_;
}
v_resetjp_1726_:
{
lean_object* v___x_1730_; 
if (v_isShared_1728_ == 0)
{
v___x_1730_ = v___x_1727_;
goto v_reusejp_1729_;
}
else
{
lean_object* v_reuseFailAlloc_1731_; 
v_reuseFailAlloc_1731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1731_, 0, v_a_1725_);
v___x_1730_ = v_reuseFailAlloc_1731_;
goto v_reusejp_1729_;
}
v_reusejp_1729_:
{
return v___x_1730_;
}
}
}
}
else
{
lean_object* v_type_1733_; lean_object* v_u_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; 
lean_dec(v_val_1576_);
v_type_1733_ = lean_ctor_get(v_toRing_1547_, 1);
lean_inc_ref(v_type_1733_);
v_u_1734_ = lean_ctor_get(v_toRing_1547_, 2);
lean_inc(v_u_1734_);
lean_dec_ref(v_toRing_1547_);
v___x_1735_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__11));
v___x_1736_ = lean_box(0);
v___x_1737_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1737_, 0, v_u_1734_);
lean_ctor_set(v___x_1737_, 1, v___x_1736_);
v___x_1738_ = l_Lean_mkConst(v___x_1735_, v___x_1737_);
v___x_1739_ = l_Lean_mkAppB(v___x_1738_, v_type_1733_, v_val_1548_);
v___x_1740_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_1512_, v_a_1514_, v___x_1739_, v___x_1572_, v_a_1516_, v_a_1518_, v_a_1522_, v_a_1523_, v_a_1524_, v_a_1525_);
if (lean_obj_tag(v___x_1740_) == 0)
{
lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1748_; 
v_isSharedCheck_1748_ = !lean_is_exclusive(v___x_1740_);
if (v_isSharedCheck_1748_ == 0)
{
lean_object* v_unused_1749_; 
v_unused_1749_ = lean_ctor_get(v___x_1740_, 0);
lean_dec(v_unused_1749_);
v___x_1742_ = v___x_1740_;
v_isShared_1743_ = v_isSharedCheck_1748_;
goto v_resetjp_1741_;
}
else
{
lean_dec(v___x_1740_);
v___x_1742_ = lean_box(0);
v_isShared_1743_ = v_isSharedCheck_1748_;
goto v_resetjp_1741_;
}
v_resetjp_1741_:
{
lean_object* v___x_1744_; lean_object* v___x_1746_; 
v___x_1744_ = lean_box(0);
if (v_isShared_1743_ == 0)
{
lean_ctor_set(v___x_1742_, 0, v___x_1744_);
v___x_1746_ = v___x_1742_;
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
else
{
return v___x_1740_;
}
}
}
else
{
lean_dec(v_a_1575_);
lean_dec_ref(v_e_1512_);
v___y_1550_ = v_a_1516_;
v___y_1551_ = v_a_1517_;
v___y_1552_ = v_a_1518_;
v___y_1553_ = v_a_1519_;
v___y_1554_ = v_a_1520_;
v___y_1555_ = v_a_1521_;
v___y_1556_ = v_a_1522_;
v___y_1557_ = v_a_1523_;
v___y_1558_ = v_a_1524_;
v___y_1559_ = v_a_1525_;
goto v___jp_1549_;
}
}
else
{
lean_object* v_a_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1757_; 
lean_dec(v_val_1548_);
lean_dec_ref(v_toRing_1547_);
lean_dec_ref(v_a_1514_);
lean_dec_ref(v_e_1512_);
v_a_1750_ = lean_ctor_get(v___x_1574_, 0);
v_isSharedCheck_1757_ = !lean_is_exclusive(v___x_1574_);
if (v_isSharedCheck_1757_ == 0)
{
v___x_1752_ = v___x_1574_;
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_a_1750_);
lean_dec(v___x_1574_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v___x_1755_; 
if (v_isShared_1753_ == 0)
{
v___x_1755_ = v___x_1752_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1756_; 
v_reuseFailAlloc_1756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1756_, 0, v_a_1750_);
v___x_1755_ = v_reuseFailAlloc_1756_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
return v___x_1755_;
}
}
}
}
else
{
lean_dec(v_val_1548_);
lean_dec_ref(v_toRing_1547_);
lean_dec_ref(v_a_1514_);
lean_dec_ref(v_e_1512_);
return v___x_1573_;
}
}
else
{
lean_dec(v_val_1548_);
lean_dec_ref(v_toRing_1547_);
lean_dec_ref(v___f_1530_);
lean_dec_ref(v_a_1514_);
lean_dec_ref(v_e_1512_);
goto v___jp_1527_;
}
}
else
{
lean_object* v_a_1758_; lean_object* v___x_1760_; uint8_t v_isShared_1761_; uint8_t v_isSharedCheck_1765_; 
lean_dec(v_val_1548_);
lean_dec_ref(v_toRing_1547_);
lean_dec_ref(v___f_1530_);
lean_dec_ref(v_a_1514_);
lean_dec_ref(v_e_1512_);
v_a_1758_ = lean_ctor_get(v___x_1569_, 0);
v_isSharedCheck_1765_ = !lean_is_exclusive(v___x_1569_);
if (v_isSharedCheck_1765_ == 0)
{
v___x_1760_ = v___x_1569_;
v_isShared_1761_ = v_isSharedCheck_1765_;
goto v_resetjp_1759_;
}
else
{
lean_inc(v_a_1758_);
lean_dec(v___x_1569_);
v___x_1760_ = lean_box(0);
v_isShared_1761_ = v_isSharedCheck_1765_;
goto v_resetjp_1759_;
}
v_resetjp_1759_:
{
lean_object* v___x_1763_; 
if (v_isShared_1761_ == 0)
{
v___x_1763_ = v___x_1760_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1764_, 0, v_a_1758_);
v___x_1763_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
return v___x_1763_;
}
}
}
v___jp_1549_:
{
lean_object* v_type_1560_; lean_object* v_u_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; 
v_type_1560_ = lean_ctor_get(v_toRing_1547_, 1);
lean_inc_ref(v_type_1560_);
v_u_1561_ = lean_ctor_get(v_toRing_1547_, 2);
lean_inc(v_u_1561_);
lean_dec_ref(v_toRing_1547_);
v___x_1562_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__2));
v___x_1563_ = lean_box(0);
v___x_1564_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1564_, 0, v_u_1561_);
lean_ctor_set(v___x_1564_, 1, v___x_1563_);
v___x_1565_ = l_Lean_mkConst(v___x_1562_, v___x_1564_);
v___x_1566_ = l_Lean_mkApp3(v___x_1565_, v_type_1560_, v_val_1548_, v_a_1514_);
v___x_1567_ = lean_unsigned_to_nat(0u);
v___x_1568_ = l_Lean_Meta_Grind_pushNewFact(v___x_1566_, v___x_1567_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_, v___y_1557_, v___y_1558_, v___y_1559_);
return v___x_1568_;
}
}
else
{
lean_object* v___x_1766_; lean_object* v___x_1768_; 
lean_dec(v_fieldInst_x3f_1546_);
lean_dec(v_a_1542_);
lean_dec_ref(v___f_1530_);
lean_dec_ref(v_a_1514_);
lean_dec_ref(v_e_1512_);
v___x_1766_ = lean_box(0);
if (v_isShared_1545_ == 0)
{
lean_ctor_set(v___x_1544_, 0, v___x_1766_);
v___x_1768_ = v___x_1544_;
goto v_reusejp_1767_;
}
else
{
lean_object* v_reuseFailAlloc_1769_; 
v_reuseFailAlloc_1769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1769_, 0, v___x_1766_);
v___x_1768_ = v_reuseFailAlloc_1769_;
goto v_reusejp_1767_;
}
v_reusejp_1767_:
{
return v___x_1768_;
}
}
}
}
else
{
lean_object* v_a_1771_; lean_object* v___x_1773_; uint8_t v_isShared_1774_; uint8_t v_isSharedCheck_1778_; 
lean_dec_ref(v___f_1530_);
lean_dec_ref(v_a_1514_);
lean_dec_ref(v_e_1512_);
v_a_1771_ = lean_ctor_get(v___x_1541_, 0);
v_isSharedCheck_1778_ = !lean_is_exclusive(v___x_1541_);
if (v_isSharedCheck_1778_ == 0)
{
v___x_1773_ = v___x_1541_;
v_isShared_1774_ = v_isSharedCheck_1778_;
goto v_resetjp_1772_;
}
else
{
lean_inc(v_a_1771_);
lean_dec(v___x_1541_);
v___x_1773_ = lean_box(0);
v_isShared_1774_ = v_isSharedCheck_1778_;
goto v_resetjp_1772_;
}
v_resetjp_1772_:
{
lean_object* v___x_1776_; 
if (v_isShared_1774_ == 0)
{
v___x_1776_ = v___x_1773_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v_a_1771_);
v___x_1776_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
return v___x_1776_;
}
}
}
}
}
}
else
{
lean_object* v_a_1780_; lean_object* v___x_1782_; uint8_t v_isShared_1783_; uint8_t v_isSharedCheck_1787_; 
lean_dec_ref(v___f_1530_);
lean_dec_ref(v_a_1514_);
lean_dec_ref(v_e_1512_);
v_a_1780_ = lean_ctor_get(v___x_1531_, 0);
v_isSharedCheck_1787_ = !lean_is_exclusive(v___x_1531_);
if (v_isSharedCheck_1787_ == 0)
{
v___x_1782_ = v___x_1531_;
v_isShared_1783_ = v_isSharedCheck_1787_;
goto v_resetjp_1781_;
}
else
{
lean_inc(v_a_1780_);
lean_dec(v___x_1531_);
v___x_1782_ = lean_box(0);
v_isShared_1783_ = v_isSharedCheck_1787_;
goto v_resetjp_1781_;
}
v_resetjp_1781_:
{
lean_object* v___x_1785_; 
if (v_isShared_1783_ == 0)
{
v___x_1785_ = v___x_1782_;
goto v_reusejp_1784_;
}
else
{
lean_object* v_reuseFailAlloc_1786_; 
v_reuseFailAlloc_1786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1786_, 0, v_a_1780_);
v___x_1785_ = v_reuseFailAlloc_1786_;
goto v_reusejp_1784_;
}
v_reusejp_1784_:
{
return v___x_1785_;
}
}
}
v___jp_1527_:
{
lean_object* v___x_1528_; lean_object* v___x_1529_; 
v___x_1528_ = lean_box(0);
v___x_1529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1529_, 0, v___x_1528_);
return v___x_1529_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___boxed(lean_object* v_e_1788_, lean_object* v_inst_1789_, lean_object* v_a_1790_, lean_object* v_a_1791_, lean_object* v_a_1792_, lean_object* v_a_1793_, lean_object* v_a_1794_, lean_object* v_a_1795_, lean_object* v_a_1796_, lean_object* v_a_1797_, lean_object* v_a_1798_, lean_object* v_a_1799_, lean_object* v_a_1800_, lean_object* v_a_1801_, lean_object* v_a_1802_){
_start:
{
lean_object* v_res_1803_; 
v_res_1803_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv(v_e_1788_, v_inst_1789_, v_a_1790_, v_a_1791_, v_a_1792_, v_a_1793_, v_a_1794_, v_a_1795_, v_a_1796_, v_a_1797_, v_a_1798_, v_a_1799_, v_a_1800_, v_a_1801_);
lean_dec(v_a_1801_);
lean_dec_ref(v_a_1800_);
lean_dec(v_a_1799_);
lean_dec_ref(v_a_1798_);
lean_dec(v_a_1797_);
lean_dec_ref(v_a_1796_);
lean_dec(v_a_1795_);
lean_dec_ref(v_a_1794_);
lean_dec(v_a_1793_);
lean_dec(v_a_1792_);
lean_dec_ref(v_a_1791_);
lean_dec_ref(v_inst_1789_);
return v_res_1803_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0(lean_object* v_00_u03b2_1804_, lean_object* v_x_1805_, lean_object* v_x_1806_, lean_object* v_x_1807_){
_start:
{
lean_object* v___x_1808_; 
v___x_1808_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0___redArg(v_x_1805_, v_x_1806_, v_x_1807_);
return v___x_1808_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1(lean_object* v_00_u03b2_1809_, lean_object* v_x_1810_, lean_object* v_x_1811_){
_start:
{
uint8_t v___x_1812_; 
v___x_1812_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1___redArg(v_x_1810_, v_x_1811_);
return v___x_1812_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1___boxed(lean_object* v_00_u03b2_1813_, lean_object* v_x_1814_, lean_object* v_x_1815_){
_start:
{
uint8_t v_res_1816_; lean_object* v_r_1817_; 
v_res_1816_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1(v_00_u03b2_1813_, v_x_1814_, v_x_1815_);
lean_dec_ref(v_x_1815_);
lean_dec_ref(v_x_1814_);
v_r_1817_ = lean_box(v_res_1816_);
return v_r_1817_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0(lean_object* v_00_u03b2_1818_, lean_object* v_x_1819_, size_t v_x_1820_, size_t v_x_1821_, lean_object* v_x_1822_, lean_object* v_x_1823_){
_start:
{
lean_object* v___x_1824_; 
v___x_1824_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg(v_x_1819_, v_x_1820_, v_x_1821_, v_x_1822_, v_x_1823_);
return v___x_1824_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1825_, lean_object* v_x_1826_, lean_object* v_x_1827_, lean_object* v_x_1828_, lean_object* v_x_1829_, lean_object* v_x_1830_){
_start:
{
size_t v_x_86794__boxed_1831_; size_t v_x_86795__boxed_1832_; lean_object* v_res_1833_; 
v_x_86794__boxed_1831_ = lean_unbox_usize(v_x_1827_);
lean_dec(v_x_1827_);
v_x_86795__boxed_1832_ = lean_unbox_usize(v_x_1828_);
lean_dec(v_x_1828_);
v_res_1833_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0(v_00_u03b2_1825_, v_x_1826_, v_x_86794__boxed_1831_, v_x_86795__boxed_1832_, v_x_1829_, v_x_1830_);
return v_res_1833_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2(lean_object* v_00_u03b2_1834_, lean_object* v_x_1835_, size_t v_x_1836_, lean_object* v_x_1837_){
_start:
{
uint8_t v___x_1838_; 
v___x_1838_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2___redArg(v_x_1835_, v_x_1836_, v_x_1837_);
return v___x_1838_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1839_, lean_object* v_x_1840_, lean_object* v_x_1841_, lean_object* v_x_1842_){
_start:
{
size_t v_x_86811__boxed_1843_; uint8_t v_res_1844_; lean_object* v_r_1845_; 
v_x_86811__boxed_1843_ = lean_unbox_usize(v_x_1841_);
lean_dec(v_x_1841_);
v_res_1844_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2(v_00_u03b2_1839_, v_x_1840_, v_x_86811__boxed_1843_, v_x_1842_);
lean_dec_ref(v_x_1842_);
lean_dec_ref(v_x_1840_);
v_r_1845_ = lean_box(v_res_1844_);
return v_r_1845_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1846_, lean_object* v_n_1847_, lean_object* v_k_1848_, lean_object* v_v_1849_){
_start:
{
lean_object* v___x_1850_; 
v___x_1850_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__1___redArg(v_n_1847_, v_k_1848_, v_v_1849_);
return v___x_1850_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1851_, size_t v_depth_1852_, lean_object* v_keys_1853_, lean_object* v_vals_1854_, lean_object* v_heq_1855_, lean_object* v_i_1856_, lean_object* v_entries_1857_){
_start:
{
lean_object* v___x_1858_; 
v___x_1858_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__2___redArg(v_depth_1852_, v_keys_1853_, v_vals_1854_, v_i_1856_, v_entries_1857_);
return v___x_1858_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1859_, lean_object* v_depth_1860_, lean_object* v_keys_1861_, lean_object* v_vals_1862_, lean_object* v_heq_1863_, lean_object* v_i_1864_, lean_object* v_entries_1865_){
_start:
{
size_t v_depth_boxed_1866_; lean_object* v_res_1867_; 
v_depth_boxed_1866_ = lean_unbox_usize(v_depth_1860_);
lean_dec(v_depth_1860_);
v_res_1867_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__2(v_00_u03b2_1859_, v_depth_boxed_1866_, v_keys_1861_, v_vals_1862_, v_heq_1863_, v_i_1864_, v_entries_1865_);
lean_dec_ref(v_vals_1862_);
lean_dec_ref(v_keys_1861_);
return v_res_1867_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_1868_, lean_object* v_keys_1869_, lean_object* v_vals_1870_, lean_object* v_heq_1871_, lean_object* v_i_1872_, lean_object* v_k_1873_){
_start:
{
uint8_t v___x_1874_; 
v___x_1874_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2_spec__5___redArg(v_keys_1869_, v_i_1872_, v_k_1873_);
return v___x_1874_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03b2_1875_, lean_object* v_keys_1876_, lean_object* v_vals_1877_, lean_object* v_heq_1878_, lean_object* v_i_1879_, lean_object* v_k_1880_){
_start:
{
uint8_t v_res_1881_; lean_object* v_r_1882_; 
v_res_1881_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2_spec__5(v_00_u03b2_1875_, v_keys_1876_, v_vals_1877_, v_heq_1878_, v_i_1879_, v_k_1880_);
lean_dec_ref(v_k_1880_);
lean_dec_ref(v_vals_1877_);
lean_dec_ref(v_keys_1876_);
v_r_1882_ = lean_box(v_res_1881_);
return v_r_1882_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__1_spec__5(lean_object* v_00_u03b2_1883_, lean_object* v_x_1884_, lean_object* v_x_1885_, lean_object* v_x_1886_, lean_object* v_x_1887_){
_start:
{
lean_object* v___x_1888_; 
v___x_1888_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__1_spec__5___redArg(v_x_1884_, v_x_1885_, v_x_1886_, v_x_1887_);
return v___x_1888_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars___lam__0(lean_object* v_size_1889_, lean_object* v_s_1890_){
_start:
{
lean_object* v_toRingState_1891_; lean_object* v_denoteEntries_1892_; lean_object* v_nextId_1893_; lean_object* v_steps_1894_; lean_object* v_queue_1895_; lean_object* v_basis_1896_; lean_object* v_diseqs_1897_; uint8_t v_recheck_1898_; lean_object* v_invSet_1899_; lean_object* v_numEq0_x3f_1900_; uint8_t v_numEq0Updated_1901_; lean_object* v___x_1903_; uint8_t v_isShared_1904_; uint8_t v_isSharedCheck_1908_; 
v_toRingState_1891_ = lean_ctor_get(v_s_1890_, 0);
v_denoteEntries_1892_ = lean_ctor_get(v_s_1890_, 1);
v_nextId_1893_ = lean_ctor_get(v_s_1890_, 2);
v_steps_1894_ = lean_ctor_get(v_s_1890_, 3);
v_queue_1895_ = lean_ctor_get(v_s_1890_, 4);
v_basis_1896_ = lean_ctor_get(v_s_1890_, 5);
v_diseqs_1897_ = lean_ctor_get(v_s_1890_, 6);
v_recheck_1898_ = lean_ctor_get_uint8(v_s_1890_, sizeof(void*)*10);
v_invSet_1899_ = lean_ctor_get(v_s_1890_, 7);
v_numEq0_x3f_1900_ = lean_ctor_get(v_s_1890_, 9);
v_numEq0Updated_1901_ = lean_ctor_get_uint8(v_s_1890_, sizeof(void*)*10 + 1);
v_isSharedCheck_1908_ = !lean_is_exclusive(v_s_1890_);
if (v_isSharedCheck_1908_ == 0)
{
lean_object* v_unused_1909_; 
v_unused_1909_ = lean_ctor_get(v_s_1890_, 8);
lean_dec(v_unused_1909_);
v___x_1903_ = v_s_1890_;
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
else
{
lean_inc(v_numEq0_x3f_1900_);
lean_inc(v_invSet_1899_);
lean_inc(v_diseqs_1897_);
lean_inc(v_basis_1896_);
lean_inc(v_queue_1895_);
lean_inc(v_steps_1894_);
lean_inc(v_nextId_1893_);
lean_inc(v_denoteEntries_1892_);
lean_inc(v_toRingState_1891_);
lean_dec(v_s_1890_);
v___x_1903_ = lean_box(0);
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
v_resetjp_1902_:
{
lean_object* v___x_1906_; 
if (v_isShared_1904_ == 0)
{
lean_ctor_set(v___x_1903_, 8, v_size_1889_);
v___x_1906_ = v___x_1903_;
goto v_reusejp_1905_;
}
else
{
lean_object* v_reuseFailAlloc_1907_; 
v_reuseFailAlloc_1907_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v_reuseFailAlloc_1907_, 0, v_toRingState_1891_);
lean_ctor_set(v_reuseFailAlloc_1907_, 1, v_denoteEntries_1892_);
lean_ctor_set(v_reuseFailAlloc_1907_, 2, v_nextId_1893_);
lean_ctor_set(v_reuseFailAlloc_1907_, 3, v_steps_1894_);
lean_ctor_set(v_reuseFailAlloc_1907_, 4, v_queue_1895_);
lean_ctor_set(v_reuseFailAlloc_1907_, 5, v_basis_1896_);
lean_ctor_set(v_reuseFailAlloc_1907_, 6, v_diseqs_1897_);
lean_ctor_set(v_reuseFailAlloc_1907_, 7, v_invSet_1899_);
lean_ctor_set(v_reuseFailAlloc_1907_, 8, v_size_1889_);
lean_ctor_set(v_reuseFailAlloc_1907_, 9, v_numEq0_x3f_1900_);
lean_ctor_set_uint8(v_reuseFailAlloc_1907_, sizeof(void*)*10, v_recheck_1898_);
lean_ctor_set_uint8(v_reuseFailAlloc_1907_, sizeof(void*)*10 + 1, v_numEq0Updated_1901_);
v___x_1906_ = v_reuseFailAlloc_1907_;
goto v_reusejp_1905_;
}
v_reusejp_1905_:
{
return v___x_1906_;
}
}
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1910_; double v___x_1911_; 
v___x_1910_ = lean_unsigned_to_nat(0u);
v___x_1911_ = lean_float_of_nat(v___x_1910_);
return v___x_1911_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg(lean_object* v_cls_1915_, lean_object* v_msg_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_){
_start:
{
lean_object* v_ref_1922_; lean_object* v___x_1923_; lean_object* v_a_1924_; lean_object* v___x_1926_; uint8_t v_isShared_1927_; uint8_t v_isSharedCheck_1969_; 
v_ref_1922_ = lean_ctor_get(v___y_1919_, 2);
v___x_1923_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5(v_msg_1916_, v___y_1917_, v___y_1918_, v___y_1919_, v___y_1920_);
v_a_1924_ = lean_ctor_get(v___x_1923_, 0);
v_isSharedCheck_1969_ = !lean_is_exclusive(v___x_1923_);
if (v_isSharedCheck_1969_ == 0)
{
v___x_1926_ = v___x_1923_;
v_isShared_1927_ = v_isSharedCheck_1969_;
goto v_resetjp_1925_;
}
else
{
lean_inc(v_a_1924_);
lean_dec(v___x_1923_);
v___x_1926_ = lean_box(0);
v_isShared_1927_ = v_isSharedCheck_1969_;
goto v_resetjp_1925_;
}
v_resetjp_1925_:
{
lean_object* v___x_1928_; lean_object* v_traceState_1929_; lean_object* v_env_1930_; lean_object* v_nextMacroScope_1931_; lean_object* v_ngen_1932_; lean_object* v_auxDeclNGen_1933_; lean_object* v_cache_1934_; lean_object* v_recordedDeps_1935_; lean_object* v_messages_1936_; lean_object* v_infoState_1937_; lean_object* v_snapshotTasks_1938_; lean_object* v___x_1940_; uint8_t v_isShared_1941_; uint8_t v_isSharedCheck_1968_; 
v___x_1928_ = lean_st_ref_take(v___y_1920_);
v_traceState_1929_ = lean_ctor_get(v___x_1928_, 4);
v_env_1930_ = lean_ctor_get(v___x_1928_, 0);
v_nextMacroScope_1931_ = lean_ctor_get(v___x_1928_, 1);
v_ngen_1932_ = lean_ctor_get(v___x_1928_, 2);
v_auxDeclNGen_1933_ = lean_ctor_get(v___x_1928_, 3);
v_cache_1934_ = lean_ctor_get(v___x_1928_, 5);
v_recordedDeps_1935_ = lean_ctor_get(v___x_1928_, 6);
v_messages_1936_ = lean_ctor_get(v___x_1928_, 7);
v_infoState_1937_ = lean_ctor_get(v___x_1928_, 8);
v_snapshotTasks_1938_ = lean_ctor_get(v___x_1928_, 9);
v_isSharedCheck_1968_ = !lean_is_exclusive(v___x_1928_);
if (v_isSharedCheck_1968_ == 0)
{
v___x_1940_ = v___x_1928_;
v_isShared_1941_ = v_isSharedCheck_1968_;
goto v_resetjp_1939_;
}
else
{
lean_inc(v_snapshotTasks_1938_);
lean_inc(v_infoState_1937_);
lean_inc(v_messages_1936_);
lean_inc(v_recordedDeps_1935_);
lean_inc(v_cache_1934_);
lean_inc(v_traceState_1929_);
lean_inc(v_auxDeclNGen_1933_);
lean_inc(v_ngen_1932_);
lean_inc(v_nextMacroScope_1931_);
lean_inc(v_env_1930_);
lean_dec(v___x_1928_);
v___x_1940_ = lean_box(0);
v_isShared_1941_ = v_isSharedCheck_1968_;
goto v_resetjp_1939_;
}
v_resetjp_1939_:
{
uint64_t v_tid_1942_; lean_object* v_traces_1943_; lean_object* v___x_1945_; uint8_t v_isShared_1946_; uint8_t v_isSharedCheck_1967_; 
v_tid_1942_ = lean_ctor_get_uint64(v_traceState_1929_, sizeof(void*)*1);
v_traces_1943_ = lean_ctor_get(v_traceState_1929_, 0);
v_isSharedCheck_1967_ = !lean_is_exclusive(v_traceState_1929_);
if (v_isSharedCheck_1967_ == 0)
{
v___x_1945_ = v_traceState_1929_;
v_isShared_1946_ = v_isSharedCheck_1967_;
goto v_resetjp_1944_;
}
else
{
lean_inc(v_traces_1943_);
lean_dec(v_traceState_1929_);
v___x_1945_ = lean_box(0);
v_isShared_1946_ = v_isSharedCheck_1967_;
goto v_resetjp_1944_;
}
v_resetjp_1944_:
{
lean_object* v___x_1947_; lean_object* v___x_1948_; double v___x_1949_; uint8_t v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1958_; 
v___x_1947_ = lean_box(0);
v___x_1948_ = lean_box(0);
v___x_1949_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__0);
v___x_1950_ = 0;
v___x_1951_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__1));
v___x_1952_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1952_, 0, v_cls_1915_);
lean_ctor_set(v___x_1952_, 1, v___x_1948_);
lean_ctor_set(v___x_1952_, 2, v___x_1951_);
lean_ctor_set_float(v___x_1952_, sizeof(void*)*3, v___x_1949_);
lean_ctor_set_float(v___x_1952_, sizeof(void*)*3 + 8, v___x_1949_);
lean_ctor_set_uint8(v___x_1952_, sizeof(void*)*3 + 16, v___x_1950_);
v___x_1953_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__2));
v___x_1954_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1954_, 0, v___x_1952_);
lean_ctor_set(v___x_1954_, 1, v_a_1924_);
lean_ctor_set(v___x_1954_, 2, v___x_1953_);
lean_inc(v_ref_1922_);
v___x_1955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1955_, 0, v_ref_1922_);
lean_ctor_set(v___x_1955_, 1, v___x_1954_);
v___x_1956_ = l_Lean_PersistentArray_push___redArg(v_traces_1943_, v___x_1955_);
if (v_isShared_1946_ == 0)
{
lean_ctor_set(v___x_1945_, 0, v___x_1956_);
v___x_1958_ = v___x_1945_;
goto v_reusejp_1957_;
}
else
{
lean_object* v_reuseFailAlloc_1966_; 
v_reuseFailAlloc_1966_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1966_, 0, v___x_1956_);
lean_ctor_set_uint64(v_reuseFailAlloc_1966_, sizeof(void*)*1, v_tid_1942_);
v___x_1958_ = v_reuseFailAlloc_1966_;
goto v_reusejp_1957_;
}
v_reusejp_1957_:
{
lean_object* v___x_1960_; 
if (v_isShared_1941_ == 0)
{
lean_ctor_set(v___x_1940_, 4, v___x_1958_);
v___x_1960_ = v___x_1940_;
goto v_reusejp_1959_;
}
else
{
lean_object* v_reuseFailAlloc_1965_; 
v_reuseFailAlloc_1965_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1965_, 0, v_env_1930_);
lean_ctor_set(v_reuseFailAlloc_1965_, 1, v_nextMacroScope_1931_);
lean_ctor_set(v_reuseFailAlloc_1965_, 2, v_ngen_1932_);
lean_ctor_set(v_reuseFailAlloc_1965_, 3, v_auxDeclNGen_1933_);
lean_ctor_set(v_reuseFailAlloc_1965_, 4, v___x_1958_);
lean_ctor_set(v_reuseFailAlloc_1965_, 5, v_cache_1934_);
lean_ctor_set(v_reuseFailAlloc_1965_, 6, v_recordedDeps_1935_);
lean_ctor_set(v_reuseFailAlloc_1965_, 7, v_messages_1936_);
lean_ctor_set(v_reuseFailAlloc_1965_, 8, v_infoState_1937_);
lean_ctor_set(v_reuseFailAlloc_1965_, 9, v_snapshotTasks_1938_);
v___x_1960_ = v_reuseFailAlloc_1965_;
goto v_reusejp_1959_;
}
v_reusejp_1959_:
{
lean_object* v___x_1961_; lean_object* v___x_1963_; 
v___x_1961_ = lean_st_ref_put(v___y_1920_, v___x_1960_);
if (v_isShared_1927_ == 0)
{
lean_ctor_set(v___x_1926_, 0, v___x_1947_);
v___x_1963_ = v___x_1926_;
goto v_reusejp_1962_;
}
else
{
lean_object* v_reuseFailAlloc_1964_; 
v_reuseFailAlloc_1964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1964_, 0, v___x_1947_);
v___x_1963_ = v_reuseFailAlloc_1964_;
goto v_reusejp_1962_;
}
v_reusejp_1962_:
{
return v___x_1963_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___boxed(lean_object* v_cls_1970_, lean_object* v_msg_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_){
_start:
{
lean_object* v_res_1977_; 
v_res_1977_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg(v_cls_1970_, v_msg_1971_, v___y_1972_, v___y_1973_, v___y_1974_, v___y_1975_);
lean_dec(v___y_1975_);
lean_dec_ref(v___y_1974_);
lean_dec(v___y_1973_);
lean_dec_ref(v___y_1972_);
return v_res_1977_;
}
}
static lean_object* _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__8(void){
_start:
{
lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; 
v___x_1993_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__5));
v___x_1994_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__7));
v___x_1995_ = l_Lean_Name_append(v___x_1994_, v___x_1993_);
return v___x_1995_;
}
}
static lean_object* _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__10(void){
_start:
{
lean_object* v___x_1997_; lean_object* v___x_1998_; 
v___x_1997_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__9));
v___x_1998_ = l_Lean_stringToMessageData(v___x_1997_);
return v___x_1998_;
}
}
static lean_object* _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__12(void){
_start:
{
lean_object* v___x_2000_; lean_object* v___x_2001_; 
v___x_2000_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__11));
v___x_2001_ = l_Lean_stringToMessageData(v___x_2000_);
return v___x_2001_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg(lean_object* v_a_2002_, lean_object* v_snd_2003_, lean_object* v_fst_2004_, lean_object* v_fst_2005_, lean_object* v___x_2006_, lean_object* v_range_2007_, lean_object* v_b_2008_, lean_object* v_i_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_){
_start:
{
lean_object* v_stop_2022_; lean_object* v_step_2023_; uint8_t v___x_2024_; 
v_stop_2022_ = lean_ctor_get(v_range_2007_, 1);
v_step_2023_ = lean_ctor_get(v_range_2007_, 2);
v___x_2024_ = lean_nat_dec_lt(v_i_2009_, v_stop_2022_);
if (v___x_2024_ == 0)
{
lean_object* v___x_2025_; 
lean_dec(v_i_2009_);
lean_dec_ref(v_fst_2005_);
lean_dec_ref(v_fst_2004_);
lean_dec(v_snd_2003_);
lean_dec_ref(v_a_2002_);
v___x_2025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2025_, 0, v_b_2008_);
return v___x_2025_;
}
else
{
lean_object* v_size_2026_; lean_object* v___x_2027_; lean_object* v___y_2029_; lean_object* v___y_2030_; lean_object* v___y_2031_; lean_object* v___y_2032_; lean_object* v___y_2033_; lean_object* v___y_2034_; lean_object* v___y_2035_; lean_object* v___y_2036_; lean_object* v___y_2037_; lean_object* v___y_2038_; lean_object* v___y_2039_; lean_object* v___y_2054_; lean_object* v___x_2080_; uint8_t v___x_2081_; 
v_size_2026_ = lean_ctor_get(v___x_2006_, 2);
v___x_2027_ = lean_box(0);
v___x_2080_ = l_Lean_instInhabitedExpr;
v___x_2081_ = lean_nat_dec_lt(v_i_2009_, v_size_2026_);
if (v___x_2081_ == 0)
{
lean_object* v___x_2082_; 
v___x_2082_ = l_outOfBounds___redArg(v___x_2080_);
v___y_2054_ = v___x_2082_;
goto v___jp_2053_;
}
else
{
lean_object* v___x_2083_; 
v___x_2083_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2080_, v___x_2006_, v_i_2009_);
v___y_2054_ = v___x_2083_;
goto v___jp_2053_;
}
v___jp_2028_:
{
lean_object* v_toRing_2040_; lean_object* v_type_2041_; lean_object* v_u_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; 
v_toRing_2040_ = lean_ctor_get(v_a_2002_, 0);
v_type_2041_ = lean_ctor_get(v_toRing_2040_, 1);
v_u_2042_ = lean_ctor_get(v_toRing_2040_, 2);
v___x_2043_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__2));
v___x_2044_ = lean_box(0);
lean_inc(v_u_2042_);
v___x_2045_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2045_, 0, v_u_2042_);
lean_ctor_set(v___x_2045_, 1, v___x_2044_);
v___x_2046_ = l_Lean_mkConst(v___x_2043_, v___x_2045_);
lean_inc(v_snd_2003_);
v___x_2047_ = l_Lean_mkNatLit(v_snd_2003_);
lean_inc_ref(v_fst_2005_);
lean_inc_ref(v_fst_2004_);
lean_inc_ref(v_type_2041_);
v___x_2048_ = l_Lean_mkApp5(v___x_2046_, v_type_2041_, v_fst_2004_, v___x_2047_, v_fst_2005_, v___y_2029_);
v___x_2049_ = lean_unsigned_to_nat(0u);
v___x_2050_ = l_Lean_Meta_Grind_pushNewFact(v___x_2048_, v___x_2049_, v___y_2030_, v___y_2031_, v___y_2032_, v___y_2033_, v___y_2034_, v___y_2035_, v___y_2036_, v___y_2037_, v___y_2038_, v___y_2039_);
if (lean_obj_tag(v___x_2050_) == 0)
{
lean_object* v___x_2051_; 
lean_dec_ref_known(v___x_2050_, 1);
v___x_2051_ = lean_nat_add(v_i_2009_, v_step_2023_);
lean_dec(v_i_2009_);
v_b_2008_ = v___x_2027_;
v_i_2009_ = v___x_2051_;
goto _start;
}
else
{
lean_dec(v_i_2009_);
lean_dec_ref(v_fst_2005_);
lean_dec_ref(v_fst_2004_);
lean_dec(v_snd_2003_);
lean_dec_ref(v_a_2002_);
return v___x_2050_;
}
}
v___jp_2053_:
{
lean_object* v_toCold_2055_; lean_object* v_options_2056_; uint8_t v_hasTrace_2057_; 
v_toCold_2055_ = lean_ctor_get(v___y_2019_, 0);
v_options_2056_ = lean_ctor_get(v_toCold_2055_, 2);
v_hasTrace_2057_ = lean_ctor_get_uint8(v_options_2056_, sizeof(void*)*1);
if (v_hasTrace_2057_ == 0)
{
v___y_2029_ = v___y_2054_;
v___y_2030_ = v___y_2011_;
v___y_2031_ = v___y_2012_;
v___y_2032_ = v___y_2013_;
v___y_2033_ = v___y_2014_;
v___y_2034_ = v___y_2015_;
v___y_2035_ = v___y_2016_;
v___y_2036_ = v___y_2017_;
v___y_2037_ = v___y_2018_;
v___y_2038_ = v___y_2019_;
v___y_2039_ = v___y_2020_;
goto v___jp_2028_;
}
else
{
lean_object* v_inheritedTraceOptions_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; uint8_t v___x_2061_; 
v_inheritedTraceOptions_2058_ = lean_ctor_get(v_toCold_2055_, 11);
v___x_2059_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__5));
v___x_2060_ = lean_obj_once(&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__8, &l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__8_once, _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__8);
v___x_2061_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2058_, v_options_2056_, v___x_2060_);
if (v___x_2061_ == 0)
{
v___y_2029_ = v___y_2054_;
v___y_2030_ = v___y_2011_;
v___y_2031_ = v___y_2012_;
v___y_2032_ = v___y_2013_;
v___y_2033_ = v___y_2014_;
v___y_2034_ = v___y_2015_;
v___y_2035_ = v___y_2016_;
v___y_2036_ = v___y_2017_;
v___y_2037_ = v___y_2018_;
v___y_2038_ = v___y_2019_;
v___y_2039_ = v___y_2020_;
goto v___jp_2028_;
}
else
{
lean_object* v___x_2062_; 
v___x_2062_ = l_Lean_Meta_Grind_updateLastTag(v___y_2011_, v___y_2012_, v___y_2013_, v___y_2014_, v___y_2015_, v___y_2016_, v___y_2017_, v___y_2018_, v___y_2019_, v___y_2020_);
if (lean_obj_tag(v___x_2062_) == 0)
{
lean_object* v___x_2064_; uint8_t v_isShared_2065_; uint8_t v_isSharedCheck_2078_; 
v_isSharedCheck_2078_ = !lean_is_exclusive(v___x_2062_);
if (v_isSharedCheck_2078_ == 0)
{
lean_object* v_unused_2079_; 
v_unused_2079_ = lean_ctor_get(v___x_2062_, 0);
lean_dec(v_unused_2079_);
v___x_2064_ = v___x_2062_;
v_isShared_2065_ = v_isSharedCheck_2078_;
goto v_resetjp_2063_;
}
else
{
lean_dec(v___x_2062_);
v___x_2064_ = lean_box(0);
v_isShared_2065_ = v_isSharedCheck_2078_;
goto v_resetjp_2063_;
}
v_resetjp_2063_:
{
lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2069_; 
v___x_2066_ = lean_obj_once(&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__10, &l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__10_once, _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__10);
lean_inc(v_snd_2003_);
v___x_2067_ = l_Nat_reprFast(v_snd_2003_);
if (v_isShared_2065_ == 0)
{
lean_ctor_set_tag(v___x_2064_, 3);
lean_ctor_set(v___x_2064_, 0, v___x_2067_);
v___x_2069_ = v___x_2064_;
goto v_reusejp_2068_;
}
else
{
lean_object* v_reuseFailAlloc_2077_; 
v_reuseFailAlloc_2077_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2077_, 0, v___x_2067_);
v___x_2069_ = v_reuseFailAlloc_2077_;
goto v_reusejp_2068_;
}
v_reusejp_2068_:
{
lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; 
v___x_2070_ = l_Lean_MessageData_ofFormat(v___x_2069_);
v___x_2071_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2071_, 0, v___x_2066_);
lean_ctor_set(v___x_2071_, 1, v___x_2070_);
v___x_2072_ = lean_obj_once(&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__12, &l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__12_once, _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__12);
v___x_2073_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2073_, 0, v___x_2071_);
lean_ctor_set(v___x_2073_, 1, v___x_2072_);
lean_inc_ref(v___y_2054_);
v___x_2074_ = l_Lean_MessageData_ofExpr(v___y_2054_);
v___x_2075_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2075_, 0, v___x_2073_);
lean_ctor_set(v___x_2075_, 1, v___x_2074_);
v___x_2076_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg(v___x_2059_, v___x_2075_, v___y_2017_, v___y_2018_, v___y_2019_, v___y_2020_);
if (lean_obj_tag(v___x_2076_) == 0)
{
lean_dec_ref_known(v___x_2076_, 1);
v___y_2029_ = v___y_2054_;
v___y_2030_ = v___y_2011_;
v___y_2031_ = v___y_2012_;
v___y_2032_ = v___y_2013_;
v___y_2033_ = v___y_2014_;
v___y_2034_ = v___y_2015_;
v___y_2035_ = v___y_2016_;
v___y_2036_ = v___y_2017_;
v___y_2037_ = v___y_2018_;
v___y_2038_ = v___y_2019_;
v___y_2039_ = v___y_2020_;
goto v___jp_2028_;
}
else
{
lean_dec_ref(v___y_2054_);
lean_dec(v_i_2009_);
lean_dec_ref(v_fst_2005_);
lean_dec_ref(v_fst_2004_);
lean_dec(v_snd_2003_);
lean_dec_ref(v_a_2002_);
return v___x_2076_;
}
}
}
}
else
{
lean_dec_ref(v___y_2054_);
lean_dec(v_i_2009_);
lean_dec_ref(v_fst_2005_);
lean_dec_ref(v_fst_2004_);
lean_dec(v_snd_2003_);
lean_dec_ref(v_a_2002_);
return v___x_2062_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___boxed(lean_object** _args){
lean_object* v_a_2084_ = _args[0];
lean_object* v_snd_2085_ = _args[1];
lean_object* v_fst_2086_ = _args[2];
lean_object* v_fst_2087_ = _args[3];
lean_object* v___x_2088_ = _args[4];
lean_object* v_range_2089_ = _args[5];
lean_object* v_b_2090_ = _args[6];
lean_object* v_i_2091_ = _args[7];
lean_object* v___y_2092_ = _args[8];
lean_object* v___y_2093_ = _args[9];
lean_object* v___y_2094_ = _args[10];
lean_object* v___y_2095_ = _args[11];
lean_object* v___y_2096_ = _args[12];
lean_object* v___y_2097_ = _args[13];
lean_object* v___y_2098_ = _args[14];
lean_object* v___y_2099_ = _args[15];
lean_object* v___y_2100_ = _args[16];
lean_object* v___y_2101_ = _args[17];
lean_object* v___y_2102_ = _args[18];
lean_object* v___y_2103_ = _args[19];
_start:
{
lean_object* v_res_2104_; 
v_res_2104_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg(v_a_2084_, v_snd_2085_, v_fst_2086_, v_fst_2087_, v___x_2088_, v_range_2089_, v_b_2090_, v_i_2091_, v___y_2092_, v___y_2093_, v___y_2094_, v___y_2095_, v___y_2096_, v___y_2097_, v___y_2098_, v___y_2099_, v___y_2100_, v___y_2101_, v___y_2102_);
lean_dec(v___y_2102_);
lean_dec_ref(v___y_2101_);
lean_dec(v___y_2100_);
lean_dec_ref(v___y_2099_);
lean_dec(v___y_2098_);
lean_dec_ref(v___y_2097_);
lean_dec(v___y_2096_);
lean_dec_ref(v___y_2095_);
lean_dec(v___y_2094_);
lean_dec(v___y_2093_);
lean_dec_ref(v___y_2092_);
lean_dec_ref(v_range_2089_);
lean_dec_ref(v___x_2088_);
return v_res_2104_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars(lean_object* v_a_2105_, lean_object* v_a_2106_, lean_object* v_a_2107_, lean_object* v_a_2108_, lean_object* v_a_2109_, lean_object* v_a_2110_, lean_object* v_a_2111_, lean_object* v_a_2112_, lean_object* v_a_2113_, lean_object* v_a_2114_, lean_object* v_a_2115_){
_start:
{
lean_object* v___x_2117_; 
v___x_2117_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v_a_2105_, v_a_2106_, v_a_2107_, v_a_2108_, v_a_2109_, v_a_2110_, v_a_2111_, v_a_2112_, v_a_2113_, v_a_2114_, v_a_2115_);
if (lean_obj_tag(v___x_2117_) == 0)
{
lean_object* v_a_2118_; lean_object* v___x_2120_; uint8_t v_isShared_2121_; uint8_t v_isSharedCheck_2171_; 
v_a_2118_ = lean_ctor_get(v___x_2117_, 0);
v_isSharedCheck_2171_ = !lean_is_exclusive(v___x_2117_);
if (v_isSharedCheck_2171_ == 0)
{
v___x_2120_ = v___x_2117_;
v_isShared_2121_ = v_isSharedCheck_2171_;
goto v_resetjp_2119_;
}
else
{
lean_inc(v_a_2118_);
lean_dec(v___x_2117_);
v___x_2120_ = lean_box(0);
v_isShared_2121_ = v_isSharedCheck_2171_;
goto v_resetjp_2119_;
}
v_resetjp_2119_:
{
lean_object* v_powIdentityInst_x3f_2122_; 
v_powIdentityInst_x3f_2122_ = lean_ctor_get(v_a_2118_, 9);
if (lean_obj_tag(v_powIdentityInst_x3f_2122_) == 1)
{
lean_object* v_val_2123_; lean_object* v_snd_2124_; lean_object* v_fst_2125_; lean_object* v_fst_2126_; lean_object* v_snd_2127_; lean_object* v___x_2128_; 
lean_del_object(v___x_2120_);
v_val_2123_ = lean_ctor_get(v_powIdentityInst_x3f_2122_, 0);
v_snd_2124_ = lean_ctor_get(v_val_2123_, 1);
v_fst_2125_ = lean_ctor_get(v_val_2123_, 0);
lean_inc(v_fst_2125_);
v_fst_2126_ = lean_ctor_get(v_snd_2124_, 0);
lean_inc(v_fst_2126_);
v_snd_2127_ = lean_ctor_get(v_snd_2124_, 1);
lean_inc(v_snd_2127_);
v___x_2128_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRingState___redArg(v_a_2105_, v_a_2106_, v_a_2114_);
if (lean_obj_tag(v___x_2128_) == 0)
{
lean_object* v_a_2129_; lean_object* v_powIdentityVarCount_2130_; lean_object* v___x_2131_; 
v_a_2129_ = lean_ctor_get(v___x_2128_, 0);
lean_inc(v_a_2129_);
lean_dec_ref_known(v___x_2128_, 1);
v_powIdentityVarCount_2130_ = lean_ctor_get(v_a_2129_, 8);
lean_inc(v_powIdentityVarCount_2130_);
lean_dec(v_a_2129_);
v___x_2131_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRingState___redArg(v_a_2105_, v_a_2106_, v_a_2114_);
if (lean_obj_tag(v___x_2131_) == 0)
{
lean_object* v_a_2132_; lean_object* v___x_2134_; uint8_t v_isShared_2135_; uint8_t v_isSharedCheck_2150_; 
v_a_2132_ = lean_ctor_get(v___x_2131_, 0);
v_isSharedCheck_2150_ = !lean_is_exclusive(v___x_2131_);
if (v_isSharedCheck_2150_ == 0)
{
v___x_2134_ = v___x_2131_;
v_isShared_2135_ = v_isSharedCheck_2150_;
goto v_resetjp_2133_;
}
else
{
lean_inc(v_a_2132_);
lean_dec(v___x_2131_);
v___x_2134_ = lean_box(0);
v_isShared_2135_ = v_isSharedCheck_2150_;
goto v_resetjp_2133_;
}
v_resetjp_2133_:
{
lean_object* v_toRingState_2136_; lean_object* v_vars_2137_; lean_object* v_size_2138_; uint8_t v___x_2139_; 
v_toRingState_2136_ = lean_ctor_get(v_a_2132_, 0);
lean_inc_ref(v_toRingState_2136_);
lean_dec(v_a_2132_);
v_vars_2137_ = lean_ctor_get(v_toRingState_2136_, 0);
lean_inc_ref(v_vars_2137_);
lean_dec_ref(v_toRingState_2136_);
v_size_2138_ = lean_ctor_get(v_vars_2137_, 2);
v___x_2139_ = lean_nat_dec_le(v_size_2138_, v_powIdentityVarCount_2130_);
if (v___x_2139_ == 0)
{
lean_object* v___f_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; 
lean_del_object(v___x_2134_);
lean_inc_n(v_size_2138_, 2);
v___f_2140_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars___lam__0), 2, 1);
lean_closure_set(v___f_2140_, 0, v_size_2138_);
v___x_2141_ = lean_unsigned_to_nat(1u);
lean_inc(v_powIdentityVarCount_2130_);
v___x_2142_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2142_, 0, v_powIdentityVarCount_2130_);
lean_ctor_set(v___x_2142_, 1, v_size_2138_);
lean_ctor_set(v___x_2142_, 2, v___x_2141_);
v___x_2143_ = lean_box(0);
v___x_2144_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg(v_a_2118_, v_snd_2127_, v_fst_2126_, v_fst_2125_, v_vars_2137_, v___x_2142_, v___x_2143_, v_powIdentityVarCount_2130_, v_a_2105_, v_a_2106_, v_a_2107_, v_a_2108_, v_a_2109_, v_a_2110_, v_a_2111_, v_a_2112_, v_a_2113_, v_a_2114_, v_a_2115_);
lean_dec_ref_known(v___x_2142_, 3);
lean_dec_ref(v_vars_2137_);
if (lean_obj_tag(v___x_2144_) == 0)
{
lean_object* v___x_2145_; 
lean_dec_ref_known(v___x_2144_, 1);
v___x_2145_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRingState___redArg(v___f_2140_, v_a_2105_, v_a_2106_);
return v___x_2145_;
}
else
{
lean_dec_ref(v___f_2140_);
return v___x_2144_;
}
}
else
{
lean_object* v___x_2146_; lean_object* v___x_2148_; 
lean_dec_ref(v_vars_2137_);
lean_dec(v_powIdentityVarCount_2130_);
lean_dec(v_snd_2127_);
lean_dec(v_fst_2126_);
lean_dec(v_fst_2125_);
lean_dec(v_a_2118_);
v___x_2146_ = lean_box(0);
if (v_isShared_2135_ == 0)
{
lean_ctor_set(v___x_2134_, 0, v___x_2146_);
v___x_2148_ = v___x_2134_;
goto v_reusejp_2147_;
}
else
{
lean_object* v_reuseFailAlloc_2149_; 
v_reuseFailAlloc_2149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2149_, 0, v___x_2146_);
v___x_2148_ = v_reuseFailAlloc_2149_;
goto v_reusejp_2147_;
}
v_reusejp_2147_:
{
return v___x_2148_;
}
}
}
}
else
{
lean_object* v_a_2151_; lean_object* v___x_2153_; uint8_t v_isShared_2154_; uint8_t v_isSharedCheck_2158_; 
lean_dec(v_powIdentityVarCount_2130_);
lean_dec(v_snd_2127_);
lean_dec(v_fst_2126_);
lean_dec(v_fst_2125_);
lean_dec(v_a_2118_);
v_a_2151_ = lean_ctor_get(v___x_2131_, 0);
v_isSharedCheck_2158_ = !lean_is_exclusive(v___x_2131_);
if (v_isSharedCheck_2158_ == 0)
{
v___x_2153_ = v___x_2131_;
v_isShared_2154_ = v_isSharedCheck_2158_;
goto v_resetjp_2152_;
}
else
{
lean_inc(v_a_2151_);
lean_dec(v___x_2131_);
v___x_2153_ = lean_box(0);
v_isShared_2154_ = v_isSharedCheck_2158_;
goto v_resetjp_2152_;
}
v_resetjp_2152_:
{
lean_object* v___x_2156_; 
if (v_isShared_2154_ == 0)
{
v___x_2156_ = v___x_2153_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2157_; 
v_reuseFailAlloc_2157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2157_, 0, v_a_2151_);
v___x_2156_ = v_reuseFailAlloc_2157_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
return v___x_2156_;
}
}
}
}
else
{
lean_object* v_a_2159_; lean_object* v___x_2161_; uint8_t v_isShared_2162_; uint8_t v_isSharedCheck_2166_; 
lean_dec(v_snd_2127_);
lean_dec(v_fst_2126_);
lean_dec(v_fst_2125_);
lean_dec(v_a_2118_);
v_a_2159_ = lean_ctor_get(v___x_2128_, 0);
v_isSharedCheck_2166_ = !lean_is_exclusive(v___x_2128_);
if (v_isSharedCheck_2166_ == 0)
{
v___x_2161_ = v___x_2128_;
v_isShared_2162_ = v_isSharedCheck_2166_;
goto v_resetjp_2160_;
}
else
{
lean_inc(v_a_2159_);
lean_dec(v___x_2128_);
v___x_2161_ = lean_box(0);
v_isShared_2162_ = v_isSharedCheck_2166_;
goto v_resetjp_2160_;
}
v_resetjp_2160_:
{
lean_object* v___x_2164_; 
if (v_isShared_2162_ == 0)
{
v___x_2164_ = v___x_2161_;
goto v_reusejp_2163_;
}
else
{
lean_object* v_reuseFailAlloc_2165_; 
v_reuseFailAlloc_2165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2165_, 0, v_a_2159_);
v___x_2164_ = v_reuseFailAlloc_2165_;
goto v_reusejp_2163_;
}
v_reusejp_2163_:
{
return v___x_2164_;
}
}
}
}
else
{
lean_object* v___x_2167_; lean_object* v___x_2169_; 
lean_dec(v_a_2118_);
v___x_2167_ = lean_box(0);
if (v_isShared_2121_ == 0)
{
lean_ctor_set(v___x_2120_, 0, v___x_2167_);
v___x_2169_ = v___x_2120_;
goto v_reusejp_2168_;
}
else
{
lean_object* v_reuseFailAlloc_2170_; 
v_reuseFailAlloc_2170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2170_, 0, v___x_2167_);
v___x_2169_ = v_reuseFailAlloc_2170_;
goto v_reusejp_2168_;
}
v_reusejp_2168_:
{
return v___x_2169_;
}
}
}
}
else
{
lean_object* v_a_2172_; lean_object* v___x_2174_; uint8_t v_isShared_2175_; uint8_t v_isSharedCheck_2179_; 
v_a_2172_ = lean_ctor_get(v___x_2117_, 0);
v_isSharedCheck_2179_ = !lean_is_exclusive(v___x_2117_);
if (v_isSharedCheck_2179_ == 0)
{
v___x_2174_ = v___x_2117_;
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
else
{
lean_inc(v_a_2172_);
lean_dec(v___x_2117_);
v___x_2174_ = lean_box(0);
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
v_resetjp_2173_:
{
lean_object* v___x_2177_; 
if (v_isShared_2175_ == 0)
{
v___x_2177_ = v___x_2174_;
goto v_reusejp_2176_;
}
else
{
lean_object* v_reuseFailAlloc_2178_; 
v_reuseFailAlloc_2178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2178_, 0, v_a_2172_);
v___x_2177_ = v_reuseFailAlloc_2178_;
goto v_reusejp_2176_;
}
v_reusejp_2176_:
{
return v___x_2177_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars___boxed(lean_object* v_a_2180_, lean_object* v_a_2181_, lean_object* v_a_2182_, lean_object* v_a_2183_, lean_object* v_a_2184_, lean_object* v_a_2185_, lean_object* v_a_2186_, lean_object* v_a_2187_, lean_object* v_a_2188_, lean_object* v_a_2189_, lean_object* v_a_2190_, lean_object* v_a_2191_){
_start:
{
lean_object* v_res_2192_; 
v_res_2192_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars(v_a_2180_, v_a_2181_, v_a_2182_, v_a_2183_, v_a_2184_, v_a_2185_, v_a_2186_, v_a_2187_, v_a_2188_, v_a_2189_, v_a_2190_);
lean_dec(v_a_2190_);
lean_dec_ref(v_a_2189_);
lean_dec(v_a_2188_);
lean_dec_ref(v_a_2187_);
lean_dec(v_a_2186_);
lean_dec_ref(v_a_2185_);
lean_dec(v_a_2184_);
lean_dec_ref(v_a_2183_);
lean_dec(v_a_2182_);
lean_dec(v_a_2181_);
lean_dec_ref(v_a_2180_);
return v_res_2192_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0(lean_object* v_cls_2193_, lean_object* v_msg_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_){
_start:
{
lean_object* v___x_2207_; 
v___x_2207_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg(v_cls_2193_, v_msg_2194_, v___y_2202_, v___y_2203_, v___y_2204_, v___y_2205_);
return v___x_2207_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___boxed(lean_object* v_cls_2208_, lean_object* v_msg_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_){
_start:
{
lean_object* v_res_2222_; 
v_res_2222_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0(v_cls_2208_, v_msg_2209_, v___y_2210_, v___y_2211_, v___y_2212_, v___y_2213_, v___y_2214_, v___y_2215_, v___y_2216_, v___y_2217_, v___y_2218_, v___y_2219_, v___y_2220_);
lean_dec(v___y_2220_);
lean_dec_ref(v___y_2219_);
lean_dec(v___y_2218_);
lean_dec_ref(v___y_2217_);
lean_dec(v___y_2216_);
lean_dec_ref(v___y_2215_);
lean_dec(v___y_2214_);
lean_dec_ref(v___y_2213_);
lean_dec(v___y_2212_);
lean_dec(v___y_2211_);
lean_dec_ref(v___y_2210_);
return v_res_2222_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1(lean_object* v_a_2223_, lean_object* v_snd_2224_, lean_object* v_fst_2225_, lean_object* v_fst_2226_, lean_object* v___x_2227_, lean_object* v_range_2228_, lean_object* v_b_2229_, lean_object* v_i_2230_, lean_object* v_hs_2231_, lean_object* v_hl_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_){
_start:
{
lean_object* v___x_2245_; 
v___x_2245_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg(v_a_2223_, v_snd_2224_, v_fst_2225_, v_fst_2226_, v___x_2227_, v_range_2228_, v_b_2229_, v_i_2230_, v___y_2233_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_);
return v___x_2245_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___boxed(lean_object** _args){
lean_object* v_a_2246_ = _args[0];
lean_object* v_snd_2247_ = _args[1];
lean_object* v_fst_2248_ = _args[2];
lean_object* v_fst_2249_ = _args[3];
lean_object* v___x_2250_ = _args[4];
lean_object* v_range_2251_ = _args[5];
lean_object* v_b_2252_ = _args[6];
lean_object* v_i_2253_ = _args[7];
lean_object* v_hs_2254_ = _args[8];
lean_object* v_hl_2255_ = _args[9];
lean_object* v___y_2256_ = _args[10];
lean_object* v___y_2257_ = _args[11];
lean_object* v___y_2258_ = _args[12];
lean_object* v___y_2259_ = _args[13];
lean_object* v___y_2260_ = _args[14];
lean_object* v___y_2261_ = _args[15];
lean_object* v___y_2262_ = _args[16];
lean_object* v___y_2263_ = _args[17];
lean_object* v___y_2264_ = _args[18];
lean_object* v___y_2265_ = _args[19];
lean_object* v___y_2266_ = _args[20];
lean_object* v___y_2267_ = _args[21];
_start:
{
lean_object* v_res_2268_; 
v_res_2268_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1(v_a_2246_, v_snd_2247_, v_fst_2248_, v_fst_2249_, v___x_2250_, v_range_2251_, v_b_2252_, v_i_2253_, v_hs_2254_, v_hl_2255_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_, v___y_2261_, v___y_2262_, v___y_2263_, v___y_2264_, v___y_2265_, v___y_2266_);
lean_dec(v___y_2266_);
lean_dec_ref(v___y_2265_);
lean_dec(v___y_2264_);
lean_dec_ref(v___y_2263_);
lean_dec(v___y_2262_);
lean_dec_ref(v___y_2261_);
lean_dec(v___y_2260_);
lean_dec_ref(v___y_2259_);
lean_dec(v___y_2258_);
lean_dec(v___y_2257_);
lean_dec_ref(v___y_2256_);
lean_dec_ref(v_range_2251_);
lean_dec_ref(v___x_2250_);
return v_res_2268_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__0(void){
_start:
{
lean_object* v___x_2269_; lean_object* v___x_2270_; 
v___x_2269_ = lean_unsigned_to_nat(0u);
v___x_2270_ = l_Lean_Level_ofNat(v___x_2269_);
return v___x_2270_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__1(void){
_start:
{
lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; 
v___x_2271_ = lean_box(0);
v___x_2272_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__0);
v___x_2273_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2273_, 0, v___x_2272_);
lean_ctor_set(v___x_2273_, 1, v___x_2271_);
return v___x_2273_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__2(void){
_start:
{
lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; 
v___x_2274_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__1);
v___x_2275_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__5));
v___x_2276_ = l_Lean_mkConst(v___x_2275_, v___x_2274_);
return v___x_2276_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__5(void){
_start:
{
lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; 
v___x_2280_ = lean_box(0);
v___x_2281_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__4));
v___x_2282_ = l_Lean_mkConst(v___x_2281_, v___x_2280_);
return v___x_2282_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg(lean_object* v_ring_2289_, lean_object* v_intCastFn_2290_, lean_object* v_e_2291_, lean_object* v_a_2292_, lean_object* v_a_2293_, lean_object* v_a_2294_, lean_object* v_a_2295_, lean_object* v_a_2296_, lean_object* v_a_2297_, lean_object* v_a_2298_){
_start:
{
lean_object* v___x_2303_; uint8_t v___x_2304_; 
v___x_2303_ = l_Lean_Expr_cleanupAnnotations(v_e_2291_);
v___x_2304_ = l_Lean_Expr_isApp(v___x_2303_);
if (v___x_2304_ == 0)
{
lean_dec_ref(v___x_2303_);
lean_dec_ref(v_e_2291_);
lean_dec_ref(v_intCastFn_2290_);
lean_dec_ref(v_ring_2289_);
goto v___jp_2300_;
}
else
{
lean_object* v___x_2305_; uint8_t v___x_2306_; 
v___x_2305_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2303_);
v___x_2306_ = l_Lean_Expr_isApp(v___x_2305_);
if (v___x_2306_ == 0)
{
lean_dec_ref(v___x_2305_);
lean_dec_ref(v___x_2303_);
lean_dec_ref(v_e_2291_);
lean_dec_ref(v_intCastFn_2290_);
lean_dec_ref(v_ring_2289_);
goto v___jp_2300_;
}
else
{
lean_object* v___x_2307_; uint8_t v___x_2308_; 
v___x_2307_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2305_);
lean_dec_ref(v___x_2305_);
v___x_2308_ = l_Lean_Expr_isApp(v___x_2307_);
if (v___x_2308_ == 0)
{
lean_dec_ref(v___x_2307_);
lean_dec_ref(v___x_2303_);
lean_dec_ref(v_e_2291_);
lean_dec_ref(v_intCastFn_2290_);
lean_dec_ref(v_ring_2289_);
goto v___jp_2300_;
}
else
{
lean_object* v___x_2309_; lean_object* v___x_2310_; uint8_t v___x_2311_; 
v___x_2309_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2307_);
lean_dec_ref(v___x_2307_);
v___x_2310_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__5));
v___x_2311_ = l_Lean_Expr_isConstOf(v___x_2309_, v___x_2310_);
lean_dec_ref(v___x_2309_);
if (v___x_2311_ == 0)
{
lean_dec_ref(v___x_2303_);
lean_dec_ref(v_e_2291_);
lean_dec_ref(v_intCastFn_2290_);
lean_dec_ref(v_ring_2289_);
goto v___jp_2300_;
}
else
{
lean_object* v_arg_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v_natCastInt_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; 
v_arg_2312_ = lean_ctor_get(v___x_2303_, 1);
lean_inc_ref_n(v_arg_2312_, 2);
lean_dec_ref(v___x_2303_);
v___x_2313_ = lean_box(0);
v___x_2314_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__2);
v___x_2315_ = l_Lean_Int_mkType;
v___x_2316_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__5, &l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__5);
v_natCastInt_2317_ = l_Lean_mkApp3(v___x_2314_, v___x_2315_, v___x_2316_, v_arg_2312_);
v___x_2318_ = l_Lean_Expr_app___override(v_intCastFn_2290_, v_natCastInt_2317_);
lean_inc_ref(v_e_2291_);
v___x_2319_ = l_Lean_Meta_mkEq(v___x_2318_, v_e_2291_, v_a_2295_, v_a_2296_, v_a_2297_, v_a_2298_);
if (lean_obj_tag(v___x_2319_) == 0)
{
lean_object* v_a_2320_; lean_object* v___x_2321_; 
v_a_2320_ = lean_ctor_get(v___x_2319_, 0);
lean_inc(v_a_2320_);
lean_dec_ref_known(v___x_2319_, 1);
v___x_2321_ = l_Lean_Meta_Sym_canon(v_a_2320_, v_a_2293_, v_a_2294_, v_a_2295_, v_a_2296_, v_a_2297_, v_a_2298_);
if (lean_obj_tag(v___x_2321_) == 0)
{
lean_object* v_a_2322_; lean_object* v___x_2323_; 
v_a_2322_ = lean_ctor_get(v___x_2321_, 0);
lean_inc(v_a_2322_);
lean_dec_ref_known(v___x_2321_, 1);
v___x_2323_ = l_Lean_Meta_Sym_shareCommon(v_a_2322_, v_a_2293_, v_a_2294_, v_a_2295_, v_a_2296_, v_a_2297_, v_a_2298_);
if (lean_obj_tag(v___x_2323_) == 0)
{
lean_object* v_a_2324_; lean_object* v_type_2325_; lean_object* v_u_2326_; lean_object* v_ringInst_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; 
v_a_2324_ = lean_ctor_get(v___x_2323_, 0);
lean_inc(v_a_2324_);
lean_dec_ref_known(v___x_2323_, 1);
v_type_2325_ = lean_ctor_get(v_ring_2289_, 1);
lean_inc_ref(v_type_2325_);
v_u_2326_ = lean_ctor_get(v_ring_2289_, 2);
lean_inc(v_u_2326_);
v_ringInst_2327_ = lean_ctor_get(v_ring_2289_, 3);
lean_inc_ref(v_ringInst_2327_);
lean_dec_ref(v_ring_2289_);
v___x_2328_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___closed__7));
v___x_2329_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2329_, 0, v_u_2326_);
lean_ctor_set(v___x_2329_, 1, v___x_2313_);
v___x_2330_ = l_Lean_mkConst(v___x_2328_, v___x_2329_);
v___x_2331_ = l_Lean_mkApp3(v___x_2330_, v_type_2325_, v_ringInst_2327_, v_arg_2312_);
v___x_2332_ = l_Lean_Meta_Grind_getGeneration___redArg(v_e_2291_, v_a_2292_);
lean_dec_ref(v_e_2291_);
if (lean_obj_tag(v___x_2332_) == 0)
{
lean_object* v_a_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; 
v_a_2333_ = lean_ctor_get(v___x_2332_, 0);
lean_inc(v_a_2333_);
lean_dec_ref_known(v___x_2332_, 1);
lean_inc(v_a_2324_);
v___x_2334_ = l_Lean_Meta_mkExpectedPropHint(v___x_2331_, v_a_2324_);
v___x_2335_ = l_Lean_Meta_Grind_pushNewFactCore___redArg(v_a_2324_, v___x_2334_, v_a_2333_, v_a_2292_);
return v___x_2335_;
}
else
{
lean_object* v_a_2336_; lean_object* v___x_2338_; uint8_t v_isShared_2339_; uint8_t v_isSharedCheck_2343_; 
lean_dec_ref(v___x_2331_);
lean_dec(v_a_2324_);
v_a_2336_ = lean_ctor_get(v___x_2332_, 0);
v_isSharedCheck_2343_ = !lean_is_exclusive(v___x_2332_);
if (v_isSharedCheck_2343_ == 0)
{
v___x_2338_ = v___x_2332_;
v_isShared_2339_ = v_isSharedCheck_2343_;
goto v_resetjp_2337_;
}
else
{
lean_inc(v_a_2336_);
lean_dec(v___x_2332_);
v___x_2338_ = lean_box(0);
v_isShared_2339_ = v_isSharedCheck_2343_;
goto v_resetjp_2337_;
}
v_resetjp_2337_:
{
lean_object* v___x_2341_; 
if (v_isShared_2339_ == 0)
{
v___x_2341_ = v___x_2338_;
goto v_reusejp_2340_;
}
else
{
lean_object* v_reuseFailAlloc_2342_; 
v_reuseFailAlloc_2342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2342_, 0, v_a_2336_);
v___x_2341_ = v_reuseFailAlloc_2342_;
goto v_reusejp_2340_;
}
v_reusejp_2340_:
{
return v___x_2341_;
}
}
}
}
else
{
lean_object* v_a_2344_; lean_object* v___x_2346_; uint8_t v_isShared_2347_; uint8_t v_isSharedCheck_2351_; 
lean_dec_ref(v_arg_2312_);
lean_dec_ref(v_e_2291_);
lean_dec_ref(v_ring_2289_);
v_a_2344_ = lean_ctor_get(v___x_2323_, 0);
v_isSharedCheck_2351_ = !lean_is_exclusive(v___x_2323_);
if (v_isSharedCheck_2351_ == 0)
{
v___x_2346_ = v___x_2323_;
v_isShared_2347_ = v_isSharedCheck_2351_;
goto v_resetjp_2345_;
}
else
{
lean_inc(v_a_2344_);
lean_dec(v___x_2323_);
v___x_2346_ = lean_box(0);
v_isShared_2347_ = v_isSharedCheck_2351_;
goto v_resetjp_2345_;
}
v_resetjp_2345_:
{
lean_object* v___x_2349_; 
if (v_isShared_2347_ == 0)
{
v___x_2349_ = v___x_2346_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2350_; 
v_reuseFailAlloc_2350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2350_, 0, v_a_2344_);
v___x_2349_ = v_reuseFailAlloc_2350_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
return v___x_2349_;
}
}
}
}
else
{
lean_object* v_a_2352_; lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2359_; 
lean_dec_ref(v_arg_2312_);
lean_dec_ref(v_e_2291_);
lean_dec_ref(v_ring_2289_);
v_a_2352_ = lean_ctor_get(v___x_2321_, 0);
v_isSharedCheck_2359_ = !lean_is_exclusive(v___x_2321_);
if (v_isSharedCheck_2359_ == 0)
{
v___x_2354_ = v___x_2321_;
v_isShared_2355_ = v_isSharedCheck_2359_;
goto v_resetjp_2353_;
}
else
{
lean_inc(v_a_2352_);
lean_dec(v___x_2321_);
v___x_2354_ = lean_box(0);
v_isShared_2355_ = v_isSharedCheck_2359_;
goto v_resetjp_2353_;
}
v_resetjp_2353_:
{
lean_object* v___x_2357_; 
if (v_isShared_2355_ == 0)
{
v___x_2357_ = v___x_2354_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v_a_2352_);
v___x_2357_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
return v___x_2357_;
}
}
}
}
else
{
lean_object* v_a_2360_; lean_object* v___x_2362_; uint8_t v_isShared_2363_; uint8_t v_isSharedCheck_2367_; 
lean_dec_ref(v_arg_2312_);
lean_dec_ref(v_e_2291_);
lean_dec_ref(v_ring_2289_);
v_a_2360_ = lean_ctor_get(v___x_2319_, 0);
v_isSharedCheck_2367_ = !lean_is_exclusive(v___x_2319_);
if (v_isSharedCheck_2367_ == 0)
{
v___x_2362_ = v___x_2319_;
v_isShared_2363_ = v_isSharedCheck_2367_;
goto v_resetjp_2361_;
}
else
{
lean_inc(v_a_2360_);
lean_dec(v___x_2319_);
v___x_2362_ = lean_box(0);
v_isShared_2363_ = v_isSharedCheck_2367_;
goto v_resetjp_2361_;
}
v_resetjp_2361_:
{
lean_object* v___x_2365_; 
if (v_isShared_2363_ == 0)
{
v___x_2365_ = v___x_2362_;
goto v_reusejp_2364_;
}
else
{
lean_object* v_reuseFailAlloc_2366_; 
v_reuseFailAlloc_2366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2366_, 0, v_a_2360_);
v___x_2365_ = v_reuseFailAlloc_2366_;
goto v_reusejp_2364_;
}
v_reusejp_2364_:
{
return v___x_2365_;
}
}
}
}
}
}
}
v___jp_2300_:
{
lean_object* v___x_2301_; lean_object* v___x_2302_; 
v___x_2301_ = lean_box(0);
v___x_2302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2302_, 0, v___x_2301_);
return v___x_2302_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg___boxed(lean_object* v_ring_2368_, lean_object* v_intCastFn_2369_, lean_object* v_e_2370_, lean_object* v_a_2371_, lean_object* v_a_2372_, lean_object* v_a_2373_, lean_object* v_a_2374_, lean_object* v_a_2375_, lean_object* v_a_2376_, lean_object* v_a_2377_, lean_object* v_a_2378_){
_start:
{
lean_object* v_res_2379_; 
v_res_2379_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg(v_ring_2368_, v_intCastFn_2369_, v_e_2370_, v_a_2371_, v_a_2372_, v_a_2373_, v_a_2374_, v_a_2375_, v_a_2376_, v_a_2377_);
lean_dec(v_a_2377_);
lean_dec_ref(v_a_2376_);
lean_dec(v_a_2375_);
lean_dec_ref(v_a_2374_);
lean_dec(v_a_2373_);
lean_dec_ref(v_a_2372_);
lean_dec(v_a_2371_);
return v_res_2379_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact(lean_object* v_ring_2380_, lean_object* v_intCastFn_2381_, lean_object* v_e_2382_, lean_object* v_a_2383_, lean_object* v_a_2384_, lean_object* v_a_2385_, lean_object* v_a_2386_, lean_object* v_a_2387_, lean_object* v_a_2388_, lean_object* v_a_2389_, lean_object* v_a_2390_, lean_object* v_a_2391_, lean_object* v_a_2392_){
_start:
{
lean_object* v___x_2394_; 
v___x_2394_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg(v_ring_2380_, v_intCastFn_2381_, v_e_2382_, v_a_2383_, v_a_2387_, v_a_2388_, v_a_2389_, v_a_2390_, v_a_2391_, v_a_2392_);
return v___x_2394_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___boxed(lean_object* v_ring_2395_, lean_object* v_intCastFn_2396_, lean_object* v_e_2397_, lean_object* v_a_2398_, lean_object* v_a_2399_, lean_object* v_a_2400_, lean_object* v_a_2401_, lean_object* v_a_2402_, lean_object* v_a_2403_, lean_object* v_a_2404_, lean_object* v_a_2405_, lean_object* v_a_2406_, lean_object* v_a_2407_, lean_object* v_a_2408_){
_start:
{
lean_object* v_res_2409_; 
v_res_2409_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact(v_ring_2395_, v_intCastFn_2396_, v_e_2397_, v_a_2398_, v_a_2399_, v_a_2400_, v_a_2401_, v_a_2402_, v_a_2403_, v_a_2404_, v_a_2405_, v_a_2406_, v_a_2407_);
lean_dec(v_a_2407_);
lean_dec_ref(v_a_2406_);
lean_dec(v_a_2405_);
lean_dec_ref(v_a_2404_);
lean_dec(v_a_2403_);
lean_dec_ref(v_a_2402_);
lean_dec(v_a_2401_);
lean_dec_ref(v_a_2400_);
lean_dec(v_a_2399_);
lean_dec(v_a_2398_);
return v_res_2409_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__0(lean_object* v_e_2410_, lean_object* v_s_2411_){
_start:
{
lean_object* v_vars_2412_; lean_object* v_varMap_2413_; lean_object* v_denote_2414_; lean_object* v_natCastSet_2415_; lean_object* v_natCasts_2416_; uint8_t v_hasIntCast_2417_; lean_object* v___x_2419_; uint8_t v_isShared_2420_; uint8_t v_isSharedCheck_2425_; 
v_vars_2412_ = lean_ctor_get(v_s_2411_, 0);
v_varMap_2413_ = lean_ctor_get(v_s_2411_, 1);
v_denote_2414_ = lean_ctor_get(v_s_2411_, 2);
v_natCastSet_2415_ = lean_ctor_get(v_s_2411_, 3);
v_natCasts_2416_ = lean_ctor_get(v_s_2411_, 4);
v_hasIntCast_2417_ = lean_ctor_get_uint8(v_s_2411_, sizeof(void*)*5);
v_isSharedCheck_2425_ = !lean_is_exclusive(v_s_2411_);
if (v_isSharedCheck_2425_ == 0)
{
v___x_2419_ = v_s_2411_;
v_isShared_2420_ = v_isSharedCheck_2425_;
goto v_resetjp_2418_;
}
else
{
lean_inc(v_natCasts_2416_);
lean_inc(v_natCastSet_2415_);
lean_inc(v_denote_2414_);
lean_inc(v_varMap_2413_);
lean_inc(v_vars_2412_);
lean_dec(v_s_2411_);
v___x_2419_ = lean_box(0);
v_isShared_2420_ = v_isSharedCheck_2425_;
goto v_resetjp_2418_;
}
v_resetjp_2418_:
{
lean_object* v___x_2421_; lean_object* v___x_2423_; 
v___x_2421_ = l_Lean_PersistentArray_push___redArg(v_natCasts_2416_, v_e_2410_);
if (v_isShared_2420_ == 0)
{
lean_ctor_set(v___x_2419_, 4, v___x_2421_);
v___x_2423_ = v___x_2419_;
goto v_reusejp_2422_;
}
else
{
lean_object* v_reuseFailAlloc_2424_; 
v_reuseFailAlloc_2424_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_2424_, 0, v_vars_2412_);
lean_ctor_set(v_reuseFailAlloc_2424_, 1, v_varMap_2413_);
lean_ctor_set(v_reuseFailAlloc_2424_, 2, v_denote_2414_);
lean_ctor_set(v_reuseFailAlloc_2424_, 3, v_natCastSet_2415_);
lean_ctor_set(v_reuseFailAlloc_2424_, 4, v___x_2421_);
lean_ctor_set_uint8(v_reuseFailAlloc_2424_, sizeof(void*)*5, v_hasIntCast_2417_);
v___x_2423_ = v_reuseFailAlloc_2424_;
goto v_reusejp_2422_;
}
v_reusejp_2422_:
{
return v___x_2423_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__1(lean_object* v___f_2426_, lean_object* v___f_2427_, lean_object* v_e_2428_, lean_object* v_s_2429_){
_start:
{
lean_object* v_vars_2430_; lean_object* v_varMap_2431_; lean_object* v_denote_2432_; lean_object* v_natCastSet_2433_; lean_object* v_natCasts_2434_; uint8_t v_hasIntCast_2435_; lean_object* v___x_2437_; uint8_t v_isShared_2438_; uint8_t v_isSharedCheck_2444_; 
v_vars_2430_ = lean_ctor_get(v_s_2429_, 0);
v_varMap_2431_ = lean_ctor_get(v_s_2429_, 1);
v_denote_2432_ = lean_ctor_get(v_s_2429_, 2);
v_natCastSet_2433_ = lean_ctor_get(v_s_2429_, 3);
v_natCasts_2434_ = lean_ctor_get(v_s_2429_, 4);
v_hasIntCast_2435_ = lean_ctor_get_uint8(v_s_2429_, sizeof(void*)*5);
v_isSharedCheck_2444_ = !lean_is_exclusive(v_s_2429_);
if (v_isSharedCheck_2444_ == 0)
{
v___x_2437_ = v_s_2429_;
v_isShared_2438_ = v_isSharedCheck_2444_;
goto v_resetjp_2436_;
}
else
{
lean_inc(v_natCasts_2434_);
lean_inc(v_natCastSet_2433_);
lean_inc(v_denote_2432_);
lean_inc(v_varMap_2431_);
lean_inc(v_vars_2430_);
lean_dec(v_s_2429_);
v___x_2437_ = lean_box(0);
v_isShared_2438_ = v_isSharedCheck_2444_;
goto v_resetjp_2436_;
}
v_resetjp_2436_:
{
lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2442_; 
v___x_2439_ = lean_box(0);
v___x_2440_ = l_Lean_PersistentHashMap_insert___redArg(v___f_2426_, v___f_2427_, v_natCastSet_2433_, v_e_2428_, v___x_2439_);
if (v_isShared_2438_ == 0)
{
lean_ctor_set(v___x_2437_, 3, v___x_2440_);
v___x_2442_ = v___x_2437_;
goto v_reusejp_2441_;
}
else
{
lean_object* v_reuseFailAlloc_2443_; 
v_reuseFailAlloc_2443_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_2443_, 0, v_vars_2430_);
lean_ctor_set(v_reuseFailAlloc_2443_, 1, v_varMap_2431_);
lean_ctor_set(v_reuseFailAlloc_2443_, 2, v_denote_2432_);
lean_ctor_set(v_reuseFailAlloc_2443_, 3, v___x_2440_);
lean_ctor_set(v_reuseFailAlloc_2443_, 4, v_natCasts_2434_);
lean_ctor_set_uint8(v_reuseFailAlloc_2443_, sizeof(void*)*5, v_hasIntCast_2435_);
v___x_2442_ = v_reuseFailAlloc_2443_;
goto v_reusejp_2441_;
}
v_reusejp_2441_:
{
return v___x_2442_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__2(lean_object* v_____do__lift_2445_, lean_object* v_e_2446_, lean_object* v_inst_2447_, lean_object* v_____do__lift_2448_){
_start:
{
lean_object* v___x_2449_; lean_object* v___x_2450_; 
v___x_2449_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___boxed), 14, 3);
lean_closure_set(v___x_2449_, 0, v_____do__lift_2445_);
lean_closure_set(v___x_2449_, 1, v_____do__lift_2448_);
lean_closure_set(v___x_2449_, 2, v_e_2446_);
v___x_2450_ = lean_apply_2(v_inst_2447_, lean_box(0), v___x_2449_);
return v___x_2450_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__3(lean_object* v_e_2451_, lean_object* v_inst_2452_, lean_object* v_inst_2453_, lean_object* v_inst_2454_, lean_object* v_inst_2455_, lean_object* v_inst_2456_, lean_object* v_toBind_2457_, lean_object* v_____do__lift_2458_){
_start:
{
lean_object* v___f_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; 
v___f_2459_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__2), 4, 3);
lean_closure_set(v___f_2459_, 0, v_____do__lift_2458_);
lean_closure_set(v___f_2459_, 1, v_e_2451_);
lean_closure_set(v___f_2459_, 2, v_inst_2452_);
v___x_2460_ = l_Lean_Meta_Sym_Arith_getIntCastFn___redArg(v_inst_2453_, v_inst_2454_, v_inst_2455_, v_inst_2456_);
v___x_2461_ = lean_apply_4(v_toBind_2457_, lean_box(0), lean_box(0), v___x_2460_, v___f_2459_);
return v___x_2461_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__4(lean_object* v_toPure_2462_, lean_object* v_00___2463_){
_start:
{
lean_object* v___x_2464_; lean_object* v___x_2465_; 
v___x_2464_ = lean_box(0);
v___x_2465_ = lean_apply_2(v_toPure_2462_, lean_box(0), v___x_2464_);
return v___x_2465_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__6(lean_object* v_modifyRingState_2466_, lean_object* v___f_2467_, lean_object* v_inst_2468_, lean_object* v_toBind_2469_, lean_object* v___f_2470_, lean_object* v_____do__lift_2471_){
_start:
{
uint8_t v_hasIntCast_2472_; 
v_hasIntCast_2472_ = lean_ctor_get_uint8(v_____do__lift_2471_, sizeof(void*)*5);
if (v_hasIntCast_2472_ == 0)
{
lean_object* v___x_2473_; 
lean_dec(v___f_2470_);
lean_dec(v_toBind_2469_);
lean_dec_ref(v_inst_2468_);
v___x_2473_ = lean_apply_1(v_modifyRingState_2466_, v___f_2467_);
return v___x_2473_;
}
else
{
lean_object* v_getRing_2474_; lean_object* v___x_2475_; 
lean_dec_ref(v___f_2467_);
lean_dec(v_modifyRingState_2466_);
v_getRing_2474_ = lean_ctor_get(v_inst_2468_, 0);
lean_inc(v_getRing_2474_);
lean_dec_ref(v_inst_2468_);
v___x_2475_ = lean_apply_4(v_toBind_2469_, lean_box(0), lean_box(0), v_getRing_2474_, v___f_2470_);
return v___x_2475_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__6___boxed(lean_object* v_modifyRingState_2476_, lean_object* v___f_2477_, lean_object* v_inst_2478_, lean_object* v_toBind_2479_, lean_object* v___f_2480_, lean_object* v_____do__lift_2481_){
_start:
{
lean_object* v_res_2482_; 
v_res_2482_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__6(v_modifyRingState_2476_, v___f_2477_, v_inst_2478_, v_toBind_2479_, v___f_2480_, v_____do__lift_2481_);
lean_dec_ref(v_____do__lift_2481_);
return v_res_2482_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__5(lean_object* v_toBind_2483_, lean_object* v_getRingState_2484_, lean_object* v___f_2485_, lean_object* v_____r_2486_){
_start:
{
lean_object* v___x_2487_; 
v___x_2487_ = lean_apply_4(v_toBind_2483_, lean_box(0), lean_box(0), v_getRingState_2484_, v___f_2485_);
return v___x_2487_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__7(lean_object* v_arg_2488_, lean_object* v___f_2489_, lean_object* v_modifyRingState_2490_, lean_object* v___f_2491_, lean_object* v_toBind_2492_, lean_object* v___f_2493_, lean_object* v_____do__lift_2494_){
_start:
{
lean_object* v___x_2495_; size_t v___x_2496_; size_t v___x_2497_; uint8_t v___x_2498_; 
v___x_2495_ = l_Lean_Expr_appArg_x21(v_____do__lift_2494_);
v___x_2496_ = lean_ptr_addr(v___x_2495_);
lean_dec_ref(v___x_2495_);
v___x_2497_ = lean_ptr_addr(v_arg_2488_);
v___x_2498_ = lean_usize_dec_eq(v___x_2496_, v___x_2497_);
if (v___x_2498_ == 0)
{
lean_object* v___x_2499_; lean_object* v___x_2500_; 
lean_dec(v___f_2493_);
lean_dec(v_toBind_2492_);
lean_dec_ref(v___f_2491_);
lean_dec(v_modifyRingState_2490_);
v___x_2499_ = lean_box(0);
v___x_2500_ = lean_apply_1(v___f_2489_, v___x_2499_);
return v___x_2500_;
}
else
{
lean_object* v___x_2501_; lean_object* v___x_2502_; 
lean_dec(v___f_2489_);
v___x_2501_ = lean_apply_1(v_modifyRingState_2490_, v___f_2491_);
v___x_2502_ = lean_apply_4(v_toBind_2492_, lean_box(0), lean_box(0), v___x_2501_, v___f_2493_);
return v___x_2502_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__7___boxed(lean_object* v_arg_2503_, lean_object* v___f_2504_, lean_object* v_modifyRingState_2505_, lean_object* v___f_2506_, lean_object* v_toBind_2507_, lean_object* v___f_2508_, lean_object* v_____do__lift_2509_){
_start:
{
lean_object* v_res_2510_; 
v_res_2510_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__7(v_arg_2503_, v___f_2504_, v_modifyRingState_2505_, v___f_2506_, v_toBind_2507_, v___f_2508_, v_____do__lift_2509_);
lean_dec_ref(v_____do__lift_2509_);
lean_dec_ref(v_arg_2503_);
return v_res_2510_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__8(lean_object* v___f_2511_, lean_object* v___f_2512_, lean_object* v_e_2513_, lean_object* v_inst_2514_, lean_object* v_inst_2515_, lean_object* v_inst_2516_, lean_object* v_inst_2517_, lean_object* v_toBind_2518_, lean_object* v___f_2519_, lean_object* v___f_2520_, lean_object* v_____do__lift_2521_){
_start:
{
lean_object* v_natCastSet_2522_; uint8_t v___x_2523_; 
v_natCastSet_2522_ = lean_ctor_get(v_____do__lift_2521_, 3);
lean_inc_ref(v_natCastSet_2522_);
lean_dec_ref(v_____do__lift_2521_);
v___x_2523_ = l_Lean_PersistentHashMap_contains___redArg(v___f_2511_, v___f_2512_, v_natCastSet_2522_, v_e_2513_);
if (v___x_2523_ == 0)
{
lean_object* v___x_2524_; lean_object* v___x_2525_; 
lean_dec(v___f_2520_);
v___x_2524_ = l_Lean_Meta_Sym_Arith_getNatCastFn___redArg(v_inst_2514_, v_inst_2515_, v_inst_2516_, v_inst_2517_);
v___x_2525_ = lean_apply_4(v_toBind_2518_, lean_box(0), lean_box(0), v___x_2524_, v___f_2519_);
return v___x_2525_;
}
else
{
lean_object* v___x_2526_; lean_object* v___x_2527_; 
lean_dec(v___f_2519_);
lean_dec(v_toBind_2518_);
lean_dec_ref(v_inst_2517_);
lean_dec_ref(v_inst_2516_);
lean_dec_ref(v_inst_2515_);
lean_dec(v_inst_2514_);
v___x_2526_ = lean_box(0);
v___x_2527_ = lean_apply_1(v___f_2520_, v___x_2526_);
return v___x_2527_;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__9___closed__0(void){
_start:
{
lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; 
v___x_2528_ = lean_unsigned_to_nat(32u);
v___x_2529_ = lean_mk_empty_array_with_capacity(v___x_2528_);
v___x_2530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2530_, 0, v___x_2529_);
return v___x_2530_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__9___closed__1(void){
_start:
{
size_t v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; 
v___x_2531_ = ((size_t)5ULL);
v___x_2532_ = lean_unsigned_to_nat(0u);
v___x_2533_ = lean_unsigned_to_nat(32u);
v___x_2534_ = lean_mk_empty_array_with_capacity(v___x_2533_);
v___x_2535_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__9___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__9___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__9___closed__0);
v___x_2536_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2536_, 0, v___x_2535_);
lean_ctor_set(v___x_2536_, 1, v___x_2534_);
lean_ctor_set(v___x_2536_, 2, v___x_2532_);
lean_ctor_set(v___x_2536_, 3, v___x_2532_);
lean_ctor_set_usize(v___x_2536_, 4, v___x_2531_);
return v___x_2536_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__9(uint8_t v___x_2537_, lean_object* v_s_2538_){
_start:
{
lean_object* v_vars_2539_; lean_object* v_varMap_2540_; lean_object* v_denote_2541_; lean_object* v_natCastSet_2542_; lean_object* v___x_2544_; uint8_t v_isShared_2545_; uint8_t v_isSharedCheck_2550_; 
v_vars_2539_ = lean_ctor_get(v_s_2538_, 0);
v_varMap_2540_ = lean_ctor_get(v_s_2538_, 1);
v_denote_2541_ = lean_ctor_get(v_s_2538_, 2);
v_natCastSet_2542_ = lean_ctor_get(v_s_2538_, 3);
v_isSharedCheck_2550_ = !lean_is_exclusive(v_s_2538_);
if (v_isSharedCheck_2550_ == 0)
{
lean_object* v_unused_2551_; 
v_unused_2551_ = lean_ctor_get(v_s_2538_, 4);
lean_dec(v_unused_2551_);
v___x_2544_ = v_s_2538_;
v_isShared_2545_ = v_isSharedCheck_2550_;
goto v_resetjp_2543_;
}
else
{
lean_inc(v_natCastSet_2542_);
lean_inc(v_denote_2541_);
lean_inc(v_varMap_2540_);
lean_inc(v_vars_2539_);
lean_dec(v_s_2538_);
v___x_2544_ = lean_box(0);
v_isShared_2545_ = v_isSharedCheck_2550_;
goto v_resetjp_2543_;
}
v_resetjp_2543_:
{
lean_object* v___x_2546_; lean_object* v___x_2548_; 
v___x_2546_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__9___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__9___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__9___closed__1);
if (v_isShared_2545_ == 0)
{
lean_ctor_set(v___x_2544_, 4, v___x_2546_);
v___x_2548_ = v___x_2544_;
goto v_reusejp_2547_;
}
else
{
lean_object* v_reuseFailAlloc_2549_; 
v_reuseFailAlloc_2549_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_2549_, 0, v_vars_2539_);
lean_ctor_set(v_reuseFailAlloc_2549_, 1, v_varMap_2540_);
lean_ctor_set(v_reuseFailAlloc_2549_, 2, v_denote_2541_);
lean_ctor_set(v_reuseFailAlloc_2549_, 3, v_natCastSet_2542_);
lean_ctor_set(v_reuseFailAlloc_2549_, 4, v___x_2546_);
v___x_2548_ = v_reuseFailAlloc_2549_;
goto v_reusejp_2547_;
}
v_reusejp_2547_:
{
lean_ctor_set_uint8(v___x_2548_, sizeof(void*)*5, v___x_2537_);
return v___x_2548_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__9___boxed(lean_object* v___x_2552_, lean_object* v_s_2553_){
_start:
{
uint8_t v___x_1498__boxed_2554_; lean_object* v_res_2555_; 
v___x_1498__boxed_2554_ = lean_unbox(v___x_2552_);
v_res_2555_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__9(v___x_1498__boxed_2554_, v_s_2553_);
return v_res_2555_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__10(lean_object* v_ring_2556_, lean_object* v_intCastFn_2557_, lean_object* v_inst_2558_, lean_object* v_e_2559_){
_start:
{
lean_object* v___x_2560_; lean_object* v___x_2561_; 
v___x_2560_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___boxed), 14, 3);
lean_closure_set(v___x_2560_, 0, v_ring_2556_);
lean_closure_set(v___x_2560_, 1, v_intCastFn_2557_);
lean_closure_set(v___x_2560_, 2, v_e_2559_);
v___x_2561_ = lean_apply_2(v_inst_2558_, lean_box(0), v___x_2560_);
return v___x_2561_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__11(lean_object* v_ring_2562_, lean_object* v_inst_2563_, lean_object* v_inst_2564_, lean_object* v_natCasts_2565_, lean_object* v_intCastFn_2566_){
_start:
{
lean_object* v___f_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; 
v___f_2567_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__10), 4, 3);
lean_closure_set(v___f_2567_, 0, v_ring_2562_);
lean_closure_set(v___f_2567_, 1, v_intCastFn_2566_);
lean_closure_set(v___f_2567_, 2, v_inst_2563_);
v___x_2568_ = lean_unsigned_to_nat(0u);
v___x_2569_ = l_Lean_PersistentArray_forM___redArg(v_inst_2564_, v_natCasts_2565_, v___f_2567_, v___x_2568_);
return v___x_2569_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__12(lean_object* v_inst_2570_, lean_object* v_inst_2571_, lean_object* v_natCasts_2572_, lean_object* v_toBind_2573_, lean_object* v___x_2574_, lean_object* v_ring_2575_){
_start:
{
lean_object* v___f_2576_; lean_object* v___x_2577_; 
v___f_2576_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__11), 5, 4);
lean_closure_set(v___f_2576_, 0, v_ring_2575_);
lean_closure_set(v___f_2576_, 1, v_inst_2570_);
lean_closure_set(v___f_2576_, 2, v_inst_2571_);
lean_closure_set(v___f_2576_, 3, v_natCasts_2572_);
v___x_2577_ = lean_apply_4(v_toBind_2573_, lean_box(0), lean_box(0), v___x_2574_, v___f_2576_);
return v___x_2577_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__13(lean_object* v_inst_2578_, lean_object* v_toBind_2579_, lean_object* v___f_2580_, lean_object* v_____r_2581_){
_start:
{
lean_object* v_getRing_2582_; lean_object* v___x_2583_; 
v_getRing_2582_ = lean_ctor_get(v_inst_2578_, 0);
lean_inc(v_getRing_2582_);
lean_dec_ref(v_inst_2578_);
v___x_2583_ = lean_apply_4(v_toBind_2579_, lean_box(0), lean_box(0), v_getRing_2582_, v___f_2580_);
return v___x_2583_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__14(lean_object* v_inst_2584_, lean_object* v_inst_2585_, lean_object* v_toBind_2586_, lean_object* v___x_2587_, lean_object* v_inst_2588_, lean_object* v_modifyRingState_2589_, lean_object* v___f_2590_, lean_object* v_____do__lift_2591_){
_start:
{
lean_object* v_natCasts_2592_; lean_object* v___f_2593_; lean_object* v___f_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; 
v_natCasts_2592_ = lean_ctor_get(v_____do__lift_2591_, 4);
lean_inc_ref(v_natCasts_2592_);
lean_dec_ref(v_____do__lift_2591_);
lean_inc_n(v_toBind_2586_, 2);
v___f_2593_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__12), 6, 5);
lean_closure_set(v___f_2593_, 0, v_inst_2584_);
lean_closure_set(v___f_2593_, 1, v_inst_2585_);
lean_closure_set(v___f_2593_, 2, v_natCasts_2592_);
lean_closure_set(v___f_2593_, 3, v_toBind_2586_);
lean_closure_set(v___f_2593_, 4, v___x_2587_);
v___f_2594_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__13), 4, 3);
lean_closure_set(v___f_2594_, 0, v_inst_2588_);
lean_closure_set(v___f_2594_, 1, v_toBind_2586_);
lean_closure_set(v___f_2594_, 2, v___f_2593_);
v___x_2595_ = lean_apply_1(v_modifyRingState_2589_, v___f_2590_);
v___x_2596_ = lean_apply_4(v_toBind_2586_, lean_box(0), lean_box(0), v___x_2595_, v___f_2594_);
return v___x_2596_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__15(lean_object* v_arg_2597_, lean_object* v___f_2598_, lean_object* v_inst_2599_, lean_object* v_inst_2600_, lean_object* v_toBind_2601_, lean_object* v___x_2602_, lean_object* v_inst_2603_, lean_object* v_modifyRingState_2604_, lean_object* v_getRingState_2605_, lean_object* v_____do__lift_2606_){
_start:
{
lean_object* v___x_2607_; size_t v___x_2608_; size_t v___x_2609_; uint8_t v___x_2610_; 
v___x_2607_ = l_Lean_Expr_appArg_x21(v_____do__lift_2606_);
v___x_2608_ = lean_ptr_addr(v___x_2607_);
lean_dec_ref(v___x_2607_);
v___x_2609_ = lean_ptr_addr(v_arg_2597_);
v___x_2610_ = lean_usize_dec_eq(v___x_2608_, v___x_2609_);
if (v___x_2610_ == 0)
{
lean_object* v___x_2611_; lean_object* v___x_2612_; 
lean_dec(v_getRingState_2605_);
lean_dec(v_modifyRingState_2604_);
lean_dec_ref(v_inst_2603_);
lean_dec(v___x_2602_);
lean_dec(v_toBind_2601_);
lean_dec_ref(v_inst_2600_);
lean_dec(v_inst_2599_);
v___x_2611_ = lean_box(0);
v___x_2612_ = lean_apply_1(v___f_2598_, v___x_2611_);
return v___x_2612_;
}
else
{
lean_object* v___x_2613_; lean_object* v___f_2614_; lean_object* v___f_2615_; lean_object* v___x_2616_; 
lean_dec(v___f_2598_);
v___x_2613_ = lean_box(v___x_2610_);
v___f_2614_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__9___boxed), 2, 1);
lean_closure_set(v___f_2614_, 0, v___x_2613_);
lean_inc(v_toBind_2601_);
v___f_2615_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__14), 8, 7);
lean_closure_set(v___f_2615_, 0, v_inst_2599_);
lean_closure_set(v___f_2615_, 1, v_inst_2600_);
lean_closure_set(v___f_2615_, 2, v_toBind_2601_);
lean_closure_set(v___f_2615_, 3, v___x_2602_);
lean_closure_set(v___f_2615_, 4, v_inst_2603_);
lean_closure_set(v___f_2615_, 5, v_modifyRingState_2604_);
lean_closure_set(v___f_2615_, 6, v___f_2614_);
v___x_2616_ = lean_apply_4(v_toBind_2601_, lean_box(0), lean_box(0), v_getRingState_2605_, v___f_2615_);
return v___x_2616_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__15___boxed(lean_object* v_arg_2617_, lean_object* v___f_2618_, lean_object* v_inst_2619_, lean_object* v_inst_2620_, lean_object* v_toBind_2621_, lean_object* v___x_2622_, lean_object* v_inst_2623_, lean_object* v_modifyRingState_2624_, lean_object* v_getRingState_2625_, lean_object* v_____do__lift_2626_){
_start:
{
lean_object* v_res_2627_; 
v_res_2627_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__15(v_arg_2617_, v___f_2618_, v_inst_2619_, v_inst_2620_, v_toBind_2621_, v___x_2622_, v_inst_2623_, v_modifyRingState_2624_, v_getRingState_2625_, v_____do__lift_2626_);
lean_dec_ref(v_____do__lift_2626_);
lean_dec_ref(v_arg_2617_);
return v_res_2627_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__16(lean_object* v_arg_2628_, lean_object* v_inst_2629_, lean_object* v_inst_2630_, lean_object* v_inst_2631_, lean_object* v_inst_2632_, lean_object* v_arg_2633_, lean_object* v___f_2634_, lean_object* v_inst_2635_, lean_object* v_toBind_2636_, lean_object* v_modifyRingState_2637_, lean_object* v_getRingState_2638_, lean_object* v_____do__lift_2639_){
_start:
{
uint8_t v_hasIntCast_2640_; 
v_hasIntCast_2640_ = lean_ctor_get_uint8(v_____do__lift_2639_, sizeof(void*)*5);
if (v_hasIntCast_2640_ == 0)
{
lean_object* v___x_2641_; 
v___x_2641_ = l_Lean_Meta_Sym_getIntValue_x3f(v_arg_2628_);
if (lean_obj_tag(v___x_2641_) == 0)
{
lean_object* v___x_2642_; lean_object* v___f_2643_; lean_object* v___x_2644_; 
lean_inc_ref(v_inst_2632_);
lean_inc_ref(v_inst_2630_);
v___x_2642_ = l_Lean_Meta_Sym_Arith_getIntCastFn___redArg(v_inst_2629_, v_inst_2630_, v_inst_2631_, v_inst_2632_);
lean_inc(v___x_2642_);
lean_inc(v_toBind_2636_);
v___f_2643_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__15___boxed), 10, 9);
lean_closure_set(v___f_2643_, 0, v_arg_2633_);
lean_closure_set(v___f_2643_, 1, v___f_2634_);
lean_closure_set(v___f_2643_, 2, v_inst_2635_);
lean_closure_set(v___f_2643_, 3, v_inst_2630_);
lean_closure_set(v___f_2643_, 4, v_toBind_2636_);
lean_closure_set(v___f_2643_, 5, v___x_2642_);
lean_closure_set(v___f_2643_, 6, v_inst_2632_);
lean_closure_set(v___f_2643_, 7, v_modifyRingState_2637_);
lean_closure_set(v___f_2643_, 8, v_getRingState_2638_);
v___x_2644_ = lean_apply_4(v_toBind_2636_, lean_box(0), lean_box(0), v___x_2642_, v___f_2643_);
return v___x_2644_;
}
else
{
lean_object* v___x_2645_; lean_object* v___x_2646_; 
lean_dec_ref_known(v___x_2641_, 1);
lean_dec(v_getRingState_2638_);
lean_dec(v_modifyRingState_2637_);
lean_dec(v_toBind_2636_);
lean_dec(v_inst_2635_);
lean_dec_ref(v_arg_2633_);
lean_dec_ref(v_inst_2632_);
lean_dec_ref(v_inst_2631_);
lean_dec_ref(v_inst_2630_);
lean_dec(v_inst_2629_);
v___x_2645_ = lean_box(0);
v___x_2646_ = lean_apply_1(v___f_2634_, v___x_2645_);
return v___x_2646_;
}
}
else
{
lean_object* v___x_2647_; lean_object* v___x_2648_; 
lean_dec(v_getRingState_2638_);
lean_dec(v_modifyRingState_2637_);
lean_dec(v_toBind_2636_);
lean_dec(v_inst_2635_);
lean_dec_ref(v_arg_2633_);
lean_dec_ref(v_inst_2632_);
lean_dec_ref(v_inst_2631_);
lean_dec_ref(v_inst_2630_);
lean_dec(v_inst_2629_);
v___x_2647_ = lean_box(0);
v___x_2648_ = lean_apply_1(v___f_2634_, v___x_2647_);
return v___x_2648_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__16___boxed(lean_object* v_arg_2649_, lean_object* v_inst_2650_, lean_object* v_inst_2651_, lean_object* v_inst_2652_, lean_object* v_inst_2653_, lean_object* v_arg_2654_, lean_object* v___f_2655_, lean_object* v_inst_2656_, lean_object* v_toBind_2657_, lean_object* v_modifyRingState_2658_, lean_object* v_getRingState_2659_, lean_object* v_____do__lift_2660_){
_start:
{
lean_object* v_res_2661_; 
v_res_2661_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__16(v_arg_2649_, v_inst_2650_, v_inst_2651_, v_inst_2652_, v_inst_2653_, v_arg_2654_, v___f_2655_, v_inst_2656_, v_toBind_2657_, v_modifyRingState_2658_, v_getRingState_2659_, v_____do__lift_2660_);
lean_dec_ref(v_____do__lift_2660_);
lean_dec_ref(v_arg_2649_);
return v_res_2661_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__17(lean_object* v_toPure_2662_, lean_object* v_inst_2663_, lean_object* v___f_2664_, lean_object* v_inst_2665_, lean_object* v_toBind_2666_, lean_object* v___f_2667_, lean_object* v___f_2668_, lean_object* v___f_2669_, lean_object* v___f_2670_, lean_object* v___f_2671_, lean_object* v_e_2672_, lean_object* v_inst_2673_, lean_object* v_inst_2674_, lean_object* v_inst_2675_, lean_object* v___f_2676_, lean_object* v_inst_2677_, lean_object* v_____x_2678_){
_start:
{
lean_object* v___x_2682_; uint8_t v___x_2683_; 
v___x_2682_ = l_Lean_Expr_cleanupAnnotations(v_____x_2678_);
v___x_2683_ = l_Lean_Expr_isApp(v___x_2682_);
if (v___x_2683_ == 0)
{
lean_dec_ref(v___x_2682_);
lean_dec(v_inst_2677_);
lean_dec(v___f_2676_);
lean_dec_ref(v_inst_2675_);
lean_dec_ref(v_inst_2674_);
lean_dec(v_inst_2673_);
lean_dec_ref(v_e_2672_);
lean_dec_ref(v___f_2671_);
lean_dec_ref(v___f_2670_);
lean_dec_ref(v___f_2669_);
lean_dec(v___f_2668_);
lean_dec(v___f_2667_);
lean_dec(v_toBind_2666_);
lean_dec_ref(v_inst_2665_);
lean_dec_ref(v___f_2664_);
lean_dec_ref(v_inst_2663_);
goto v___jp_2679_;
}
else
{
lean_object* v___x_2684_; uint8_t v___x_2685_; 
v___x_2684_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2682_);
v___x_2685_ = l_Lean_Expr_isApp(v___x_2684_);
if (v___x_2685_ == 0)
{
lean_dec_ref(v___x_2684_);
lean_dec_ref(v___x_2682_);
lean_dec(v_inst_2677_);
lean_dec(v___f_2676_);
lean_dec_ref(v_inst_2675_);
lean_dec_ref(v_inst_2674_);
lean_dec(v_inst_2673_);
lean_dec_ref(v_e_2672_);
lean_dec_ref(v___f_2671_);
lean_dec_ref(v___f_2670_);
lean_dec_ref(v___f_2669_);
lean_dec(v___f_2668_);
lean_dec(v___f_2667_);
lean_dec(v_toBind_2666_);
lean_dec_ref(v_inst_2665_);
lean_dec_ref(v___f_2664_);
lean_dec_ref(v_inst_2663_);
goto v___jp_2679_;
}
else
{
lean_object* v___x_2686_; uint8_t v___x_2687_; 
v___x_2686_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2684_);
v___x_2687_ = l_Lean_Expr_isApp(v___x_2686_);
if (v___x_2687_ == 0)
{
lean_dec_ref(v___x_2686_);
lean_dec_ref(v___x_2684_);
lean_dec_ref(v___x_2682_);
lean_dec(v_inst_2677_);
lean_dec(v___f_2676_);
lean_dec_ref(v_inst_2675_);
lean_dec_ref(v_inst_2674_);
lean_dec(v_inst_2673_);
lean_dec_ref(v_e_2672_);
lean_dec_ref(v___f_2671_);
lean_dec_ref(v___f_2670_);
lean_dec_ref(v___f_2669_);
lean_dec(v___f_2668_);
lean_dec(v___f_2667_);
lean_dec(v_toBind_2666_);
lean_dec_ref(v_inst_2665_);
lean_dec_ref(v___f_2664_);
lean_dec_ref(v_inst_2663_);
goto v___jp_2679_;
}
else
{
lean_object* v_arg_2688_; lean_object* v_arg_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; uint8_t v___x_2692_; 
v_arg_2688_ = lean_ctor_get(v___x_2682_, 1);
lean_inc_ref(v_arg_2688_);
lean_dec_ref(v___x_2682_);
v_arg_2689_ = lean_ctor_get(v___x_2684_, 1);
lean_inc_ref(v_arg_2689_);
lean_dec_ref(v___x_2684_);
v___x_2690_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2686_);
lean_dec_ref(v___x_2686_);
v___x_2691_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__2));
v___x_2692_ = l_Lean_Expr_isConstOf(v___x_2690_, v___x_2691_);
if (v___x_2692_ == 0)
{
lean_object* v___x_2693_; uint8_t v___x_2694_; 
lean_dec(v_inst_2677_);
lean_dec(v___f_2676_);
v___x_2693_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__5));
v___x_2694_ = l_Lean_Expr_isConstOf(v___x_2690_, v___x_2693_);
lean_dec_ref(v___x_2690_);
if (v___x_2694_ == 0)
{
lean_dec_ref(v_arg_2689_);
lean_dec_ref(v_arg_2688_);
lean_dec_ref(v_inst_2675_);
lean_dec_ref(v_inst_2674_);
lean_dec(v_inst_2673_);
lean_dec_ref(v_e_2672_);
lean_dec_ref(v___f_2671_);
lean_dec_ref(v___f_2670_);
lean_dec_ref(v___f_2669_);
lean_dec(v___f_2668_);
lean_dec(v___f_2667_);
lean_dec(v_toBind_2666_);
lean_dec_ref(v_inst_2665_);
lean_dec_ref(v___f_2664_);
lean_dec_ref(v_inst_2663_);
goto v___jp_2679_;
}
else
{
uint8_t v___x_2695_; 
lean_dec(v_toPure_2662_);
v___x_2695_ = l_Lean_Meta_Sym_isNatValue(v_arg_2688_);
lean_dec_ref(v_arg_2688_);
if (v___x_2695_ == 0)
{
lean_object* v_getRingState_2696_; lean_object* v_modifyRingState_2697_; lean_object* v___f_2698_; lean_object* v___f_2699_; lean_object* v___f_2700_; lean_object* v___f_2701_; lean_object* v___x_2702_; 
v_getRingState_2696_ = lean_ctor_get(v_inst_2663_, 0);
lean_inc_n(v_getRingState_2696_, 2);
v_modifyRingState_2697_ = lean_ctor_get(v_inst_2663_, 1);
lean_inc_n(v_modifyRingState_2697_, 2);
lean_dec_ref(v_inst_2663_);
lean_inc_n(v_toBind_2666_, 4);
lean_inc_ref(v_inst_2665_);
v___f_2698_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__6___boxed), 6, 5);
lean_closure_set(v___f_2698_, 0, v_modifyRingState_2697_);
lean_closure_set(v___f_2698_, 1, v___f_2664_);
lean_closure_set(v___f_2698_, 2, v_inst_2665_);
lean_closure_set(v___f_2698_, 3, v_toBind_2666_);
lean_closure_set(v___f_2698_, 4, v___f_2667_);
v___f_2699_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__5), 4, 3);
lean_closure_set(v___f_2699_, 0, v_toBind_2666_);
lean_closure_set(v___f_2699_, 1, v_getRingState_2696_);
lean_closure_set(v___f_2699_, 2, v___f_2698_);
lean_inc(v___f_2668_);
v___f_2700_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__7___boxed), 7, 6);
lean_closure_set(v___f_2700_, 0, v_arg_2689_);
lean_closure_set(v___f_2700_, 1, v___f_2668_);
lean_closure_set(v___f_2700_, 2, v_modifyRingState_2697_);
lean_closure_set(v___f_2700_, 3, v___f_2669_);
lean_closure_set(v___f_2700_, 4, v_toBind_2666_);
lean_closure_set(v___f_2700_, 5, v___f_2699_);
v___f_2701_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__8), 11, 10);
lean_closure_set(v___f_2701_, 0, v___f_2670_);
lean_closure_set(v___f_2701_, 1, v___f_2671_);
lean_closure_set(v___f_2701_, 2, v_e_2672_);
lean_closure_set(v___f_2701_, 3, v_inst_2673_);
lean_closure_set(v___f_2701_, 4, v_inst_2674_);
lean_closure_set(v___f_2701_, 5, v_inst_2675_);
lean_closure_set(v___f_2701_, 6, v_inst_2665_);
lean_closure_set(v___f_2701_, 7, v_toBind_2666_);
lean_closure_set(v___f_2701_, 8, v___f_2700_);
lean_closure_set(v___f_2701_, 9, v___f_2668_);
v___x_2702_ = lean_apply_4(v_toBind_2666_, lean_box(0), lean_box(0), v_getRingState_2696_, v___f_2701_);
return v___x_2702_;
}
else
{
lean_object* v___x_2703_; lean_object* v___x_2704_; 
lean_dec_ref(v_arg_2689_);
lean_dec_ref(v_inst_2675_);
lean_dec_ref(v_inst_2674_);
lean_dec(v_inst_2673_);
lean_dec_ref(v_e_2672_);
lean_dec_ref(v___f_2671_);
lean_dec_ref(v___f_2670_);
lean_dec_ref(v___f_2669_);
lean_dec(v___f_2667_);
lean_dec(v_toBind_2666_);
lean_dec_ref(v_inst_2665_);
lean_dec_ref(v___f_2664_);
lean_dec_ref(v_inst_2663_);
v___x_2703_ = lean_box(0);
v___x_2704_ = lean_apply_1(v___f_2668_, v___x_2703_);
return v___x_2704_;
}
}
}
else
{
lean_object* v_getRingState_2705_; lean_object* v_modifyRingState_2706_; lean_object* v___f_2707_; lean_object* v___x_2708_; 
lean_dec_ref(v___x_2690_);
lean_dec_ref(v_e_2672_);
lean_dec_ref(v___f_2671_);
lean_dec_ref(v___f_2670_);
lean_dec_ref(v___f_2669_);
lean_dec(v___f_2668_);
lean_dec(v___f_2667_);
lean_dec_ref(v___f_2664_);
lean_dec(v_toPure_2662_);
v_getRingState_2705_ = lean_ctor_get(v_inst_2663_, 0);
lean_inc_n(v_getRingState_2705_, 2);
v_modifyRingState_2706_ = lean_ctor_get(v_inst_2663_, 1);
lean_inc(v_modifyRingState_2706_);
lean_dec_ref(v_inst_2663_);
lean_inc(v_toBind_2666_);
v___f_2707_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__16___boxed), 12, 11);
lean_closure_set(v___f_2707_, 0, v_arg_2688_);
lean_closure_set(v___f_2707_, 1, v_inst_2673_);
lean_closure_set(v___f_2707_, 2, v_inst_2674_);
lean_closure_set(v___f_2707_, 3, v_inst_2675_);
lean_closure_set(v___f_2707_, 4, v_inst_2665_);
lean_closure_set(v___f_2707_, 5, v_arg_2689_);
lean_closure_set(v___f_2707_, 6, v___f_2676_);
lean_closure_set(v___f_2707_, 7, v_inst_2677_);
lean_closure_set(v___f_2707_, 8, v_toBind_2666_);
lean_closure_set(v___f_2707_, 9, v_modifyRingState_2706_);
lean_closure_set(v___f_2707_, 10, v_getRingState_2705_);
v___x_2708_ = lean_apply_4(v_toBind_2666_, lean_box(0), lean_box(0), v_getRingState_2705_, v___f_2707_);
return v___x_2708_;
}
}
}
}
v___jp_2679_:
{
lean_object* v___x_2680_; lean_object* v___x_2681_; 
v___x_2680_ = lean_box(0);
v___x_2681_ = lean_apply_2(v_toPure_2662_, lean_box(0), v___x_2680_);
return v___x_2681_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__17___boxed(lean_object** _args){
lean_object* v_toPure_2709_ = _args[0];
lean_object* v_inst_2710_ = _args[1];
lean_object* v___f_2711_ = _args[2];
lean_object* v_inst_2712_ = _args[3];
lean_object* v_toBind_2713_ = _args[4];
lean_object* v___f_2714_ = _args[5];
lean_object* v___f_2715_ = _args[6];
lean_object* v___f_2716_ = _args[7];
lean_object* v___f_2717_ = _args[8];
lean_object* v___f_2718_ = _args[9];
lean_object* v_e_2719_ = _args[10];
lean_object* v_inst_2720_ = _args[11];
lean_object* v_inst_2721_ = _args[12];
lean_object* v_inst_2722_ = _args[13];
lean_object* v___f_2723_ = _args[14];
lean_object* v_inst_2724_ = _args[15];
lean_object* v_____x_2725_ = _args[16];
_start:
{
lean_object* v_res_2726_; 
v_res_2726_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__17(v_toPure_2709_, v_inst_2710_, v___f_2711_, v_inst_2712_, v_toBind_2713_, v___f_2714_, v___f_2715_, v___f_2716_, v___f_2717_, v___f_2718_, v_e_2719_, v_inst_2720_, v_inst_2721_, v_inst_2722_, v___f_2723_, v_inst_2724_, v_____x_2725_);
lean_dec_ref(v_____x_2725_);
return v_res_2726_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg(lean_object* v_inst_2729_, lean_object* v_inst_2730_, lean_object* v_inst_2731_, lean_object* v_inst_2732_, lean_object* v_inst_2733_, lean_object* v_inst_2734_, lean_object* v_e_2735_){
_start:
{
lean_object* v_toApplicative_2736_; lean_object* v_toBind_2737_; lean_object* v_toPure_2738_; lean_object* v___f_2739_; lean_object* v___f_2740_; lean_object* v___f_2741_; lean_object* v___f_2742_; lean_object* v___f_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___f_2746_; lean_object* v___f_2747_; lean_object* v___x_2748_; 
v_toApplicative_2736_ = lean_ctor_get(v_inst_2731_, 0);
v_toBind_2737_ = lean_ctor_get(v_inst_2731_, 1);
lean_inc_n(v_toBind_2737_, 3);
v_toPure_2738_ = lean_ctor_get(v_toApplicative_2736_, 1);
lean_inc_n(v_toPure_2738_, 2);
lean_inc_ref_n(v_e_2735_, 4);
v___f_2739_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2739_, 0, v_e_2735_);
v___f_2740_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___closed__0));
v___f_2741_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___closed__1));
v___f_2742_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__1), 4, 3);
lean_closure_set(v___f_2742_, 0, v___f_2740_);
lean_closure_set(v___f_2742_, 1, v___f_2741_);
lean_closure_set(v___f_2742_, 2, v_e_2735_);
lean_inc_ref(v_inst_2733_);
lean_inc_ref(v_inst_2732_);
lean_inc_ref(v_inst_2731_);
lean_inc_n(v_inst_2730_, 2);
lean_inc(v_inst_2729_);
v___f_2743_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__3), 8, 7);
lean_closure_set(v___f_2743_, 0, v_e_2735_);
lean_closure_set(v___f_2743_, 1, v_inst_2729_);
lean_closure_set(v___f_2743_, 2, v_inst_2730_);
lean_closure_set(v___f_2743_, 3, v_inst_2731_);
lean_closure_set(v___f_2743_, 4, v_inst_2732_);
lean_closure_set(v___f_2743_, 5, v_inst_2733_);
lean_closure_set(v___f_2743_, 6, v_toBind_2737_);
v___x_2744_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateMVarsIfMVarApp___boxed), 6, 1);
lean_closure_set(v___x_2744_, 0, v_e_2735_);
v___x_2745_ = lean_apply_2(v_inst_2730_, lean_box(0), v___x_2744_);
v___f_2746_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__4), 2, 1);
lean_closure_set(v___f_2746_, 0, v_toPure_2738_);
lean_inc_ref(v___f_2746_);
v___f_2747_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__17___boxed), 17, 16);
lean_closure_set(v___f_2747_, 0, v_toPure_2738_);
lean_closure_set(v___f_2747_, 1, v_inst_2734_);
lean_closure_set(v___f_2747_, 2, v___f_2739_);
lean_closure_set(v___f_2747_, 3, v_inst_2733_);
lean_closure_set(v___f_2747_, 4, v_toBind_2737_);
lean_closure_set(v___f_2747_, 5, v___f_2743_);
lean_closure_set(v___f_2747_, 6, v___f_2746_);
lean_closure_set(v___f_2747_, 7, v___f_2742_);
lean_closure_set(v___f_2747_, 8, v___f_2740_);
lean_closure_set(v___f_2747_, 9, v___f_2741_);
lean_closure_set(v___f_2747_, 10, v_e_2735_);
lean_closure_set(v___f_2747_, 11, v_inst_2730_);
lean_closure_set(v___f_2747_, 12, v_inst_2731_);
lean_closure_set(v___f_2747_, 13, v_inst_2732_);
lean_closure_set(v___f_2747_, 14, v___f_2746_);
lean_closure_set(v___f_2747_, 15, v_inst_2729_);
v___x_2748_ = lean_apply_4(v_toBind_2737_, lean_box(0), lean_box(0), v___x_2745_, v___f_2747_);
return v___x_2748_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast(lean_object* v_m_2749_, lean_object* v_inst_2750_, lean_object* v_inst_2751_, lean_object* v_inst_2752_, lean_object* v_inst_2753_, lean_object* v_inst_2754_, lean_object* v_inst_2755_, lean_object* v_inst_2756_, lean_object* v_e_2757_){
_start:
{
lean_object* v___x_2758_; 
v___x_2758_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg(v_inst_2750_, v_inst_2751_, v_inst_2753_, v_inst_2754_, v_inst_2755_, v_inst_2756_, v_e_2757_);
return v___x_2758_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___boxed(lean_object* v_m_2759_, lean_object* v_inst_2760_, lean_object* v_inst_2761_, lean_object* v_inst_2762_, lean_object* v_inst_2763_, lean_object* v_inst_2764_, lean_object* v_inst_2765_, lean_object* v_inst_2766_, lean_object* v_e_2767_){
_start:
{
lean_object* v_res_2768_; 
v_res_2768_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast(v_m_2759_, v_inst_2760_, v_inst_2761_, v_inst_2762_, v_inst_2763_, v_inst_2764_, v_inst_2765_, v_inst_2766_, v_e_2767_);
lean_dec_ref(v_inst_2762_);
return v_res_2768_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__17___redArg(lean_object* v_a_2769_, lean_object* v_a_2770_, lean_object* v_as_2771_, size_t v_i_2772_, size_t v_stop_2773_, lean_object* v_b_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_){
_start:
{
uint8_t v___x_2783_; 
v___x_2783_ = lean_usize_dec_eq(v_i_2772_, v_stop_2773_);
if (v___x_2783_ == 0)
{
lean_object* v___x_2784_; lean_object* v___x_2785_; 
v___x_2784_ = lean_array_uget_borrowed(v_as_2771_, v_i_2772_);
lean_inc(v___x_2784_);
lean_inc_ref(v_a_2770_);
lean_inc_ref(v_a_2769_);
v___x_2785_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg(v_a_2769_, v_a_2770_, v___x_2784_, v___y_2775_, v___y_2776_, v___y_2777_, v___y_2778_, v___y_2779_, v___y_2780_, v___y_2781_);
if (lean_obj_tag(v___x_2785_) == 0)
{
lean_object* v_a_2786_; size_t v___x_2787_; size_t v___x_2788_; 
v_a_2786_ = lean_ctor_get(v___x_2785_, 0);
lean_inc(v_a_2786_);
lean_dec_ref_known(v___x_2785_, 1);
v___x_2787_ = ((size_t)1ULL);
v___x_2788_ = lean_usize_add(v_i_2772_, v___x_2787_);
v_i_2772_ = v___x_2788_;
v_b_2774_ = v_a_2786_;
goto _start;
}
else
{
lean_dec_ref(v_a_2770_);
lean_dec_ref(v_a_2769_);
return v___x_2785_;
}
}
else
{
lean_object* v___x_2790_; 
lean_dec_ref(v_a_2770_);
lean_dec_ref(v_a_2769_);
v___x_2790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2790_, 0, v_b_2774_);
return v___x_2790_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__17___redArg___boxed(lean_object* v_a_2791_, lean_object* v_a_2792_, lean_object* v_as_2793_, lean_object* v_i_2794_, lean_object* v_stop_2795_, lean_object* v_b_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_, lean_object* v___y_2803_, lean_object* v___y_2804_){
_start:
{
size_t v_i_boxed_2805_; size_t v_stop_boxed_2806_; lean_object* v_res_2807_; 
v_i_boxed_2805_ = lean_unbox_usize(v_i_2794_);
lean_dec(v_i_2794_);
v_stop_boxed_2806_ = lean_unbox_usize(v_stop_2795_);
lean_dec(v_stop_2795_);
v_res_2807_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__17___redArg(v_a_2791_, v_a_2792_, v_as_2793_, v_i_boxed_2805_, v_stop_boxed_2806_, v_b_2796_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_, v___y_2803_);
lean_dec(v___y_2803_);
lean_dec_ref(v___y_2802_);
lean_dec(v___y_2801_);
lean_dec_ref(v___y_2800_);
lean_dec(v___y_2799_);
lean_dec_ref(v___y_2798_);
lean_dec(v___y_2797_);
lean_dec_ref(v_as_2793_);
return v_res_2807_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__16_spec__22(lean_object* v_a_2808_, lean_object* v_a_2809_, lean_object* v_x_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_, lean_object* v___y_2816_, lean_object* v___y_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_){
_start:
{
if (lean_obj_tag(v_x_2810_) == 0)
{
lean_object* v_cs_2823_; lean_object* v___x_2825_; uint8_t v_isShared_2826_; uint8_t v_isSharedCheck_2837_; 
v_cs_2823_ = lean_ctor_get(v_x_2810_, 0);
v_isSharedCheck_2837_ = !lean_is_exclusive(v_x_2810_);
if (v_isSharedCheck_2837_ == 0)
{
v___x_2825_ = v_x_2810_;
v_isShared_2826_ = v_isSharedCheck_2837_;
goto v_resetjp_2824_;
}
else
{
lean_inc(v_cs_2823_);
lean_dec(v_x_2810_);
v___x_2825_ = lean_box(0);
v_isShared_2826_ = v_isSharedCheck_2837_;
goto v_resetjp_2824_;
}
v_resetjp_2824_:
{
lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; uint8_t v___x_2830_; 
v___x_2827_ = lean_unsigned_to_nat(0u);
v___x_2828_ = lean_array_get_size(v_cs_2823_);
v___x_2829_ = lean_box(0);
v___x_2830_ = lean_nat_dec_lt(v___x_2827_, v___x_2828_);
if (v___x_2830_ == 0)
{
lean_object* v___x_2832_; 
lean_dec_ref(v_cs_2823_);
lean_dec_ref(v_a_2809_);
lean_dec_ref(v_a_2808_);
if (v_isShared_2826_ == 0)
{
lean_ctor_set(v___x_2825_, 0, v___x_2829_);
v___x_2832_ = v___x_2825_;
goto v_reusejp_2831_;
}
else
{
lean_object* v_reuseFailAlloc_2833_; 
v_reuseFailAlloc_2833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2833_, 0, v___x_2829_);
v___x_2832_ = v_reuseFailAlloc_2833_;
goto v_reusejp_2831_;
}
v_reusejp_2831_:
{
return v___x_2832_;
}
}
else
{
size_t v___x_2834_; size_t v___x_2835_; lean_object* v___x_2836_; 
lean_del_object(v___x_2825_);
v___x_2834_ = ((size_t)0ULL);
v___x_2835_ = lean_usize_of_nat(v___x_2828_);
v___x_2836_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__16_spec__23(v_a_2808_, v_a_2809_, v_cs_2823_, v___x_2834_, v___x_2835_, v___x_2829_, v___y_2811_, v___y_2812_, v___y_2813_, v___y_2814_, v___y_2815_, v___y_2816_, v___y_2817_, v___y_2818_, v___y_2819_, v___y_2820_, v___y_2821_);
lean_dec_ref(v_cs_2823_);
return v___x_2836_;
}
}
}
else
{
lean_object* v_vs_2838_; lean_object* v___x_2840_; uint8_t v_isShared_2841_; uint8_t v_isSharedCheck_2852_; 
v_vs_2838_ = lean_ctor_get(v_x_2810_, 0);
v_isSharedCheck_2852_ = !lean_is_exclusive(v_x_2810_);
if (v_isSharedCheck_2852_ == 0)
{
v___x_2840_ = v_x_2810_;
v_isShared_2841_ = v_isSharedCheck_2852_;
goto v_resetjp_2839_;
}
else
{
lean_inc(v_vs_2838_);
lean_dec(v_x_2810_);
v___x_2840_ = lean_box(0);
v_isShared_2841_ = v_isSharedCheck_2852_;
goto v_resetjp_2839_;
}
v_resetjp_2839_:
{
lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; uint8_t v___x_2845_; 
v___x_2842_ = lean_unsigned_to_nat(0u);
v___x_2843_ = lean_array_get_size(v_vs_2838_);
v___x_2844_ = lean_box(0);
v___x_2845_ = lean_nat_dec_lt(v___x_2842_, v___x_2843_);
if (v___x_2845_ == 0)
{
lean_object* v___x_2847_; 
lean_dec_ref(v_vs_2838_);
lean_dec_ref(v_a_2809_);
lean_dec_ref(v_a_2808_);
if (v_isShared_2841_ == 0)
{
lean_ctor_set_tag(v___x_2840_, 0);
lean_ctor_set(v___x_2840_, 0, v___x_2844_);
v___x_2847_ = v___x_2840_;
goto v_reusejp_2846_;
}
else
{
lean_object* v_reuseFailAlloc_2848_; 
v_reuseFailAlloc_2848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2848_, 0, v___x_2844_);
v___x_2847_ = v_reuseFailAlloc_2848_;
goto v_reusejp_2846_;
}
v_reusejp_2846_:
{
return v___x_2847_;
}
}
else
{
size_t v___x_2849_; size_t v___x_2850_; lean_object* v___x_2851_; 
lean_del_object(v___x_2840_);
v___x_2849_ = ((size_t)0ULL);
v___x_2850_ = lean_usize_of_nat(v___x_2843_);
v___x_2851_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__17___redArg(v_a_2808_, v_a_2809_, v_vs_2838_, v___x_2849_, v___x_2850_, v___x_2844_, v___y_2812_, v___y_2816_, v___y_2817_, v___y_2818_, v___y_2819_, v___y_2820_, v___y_2821_);
lean_dec_ref(v_vs_2838_);
return v___x_2851_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__16_spec__23(lean_object* v_a_2853_, lean_object* v_a_2854_, lean_object* v_as_2855_, size_t v_i_2856_, size_t v_stop_2857_, lean_object* v_b_2858_, lean_object* v___y_2859_, lean_object* v___y_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_){
_start:
{
uint8_t v___x_2871_; 
v___x_2871_ = lean_usize_dec_eq(v_i_2856_, v_stop_2857_);
if (v___x_2871_ == 0)
{
lean_object* v___x_2872_; lean_object* v___x_2873_; 
v___x_2872_ = lean_array_uget_borrowed(v_as_2855_, v_i_2856_);
lean_inc(v___x_2872_);
lean_inc_ref(v_a_2854_);
lean_inc_ref(v_a_2853_);
v___x_2873_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__16_spec__22(v_a_2853_, v_a_2854_, v___x_2872_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_, v___y_2865_, v___y_2866_, v___y_2867_, v___y_2868_, v___y_2869_);
if (lean_obj_tag(v___x_2873_) == 0)
{
lean_object* v_a_2874_; size_t v___x_2875_; size_t v___x_2876_; 
v_a_2874_ = lean_ctor_get(v___x_2873_, 0);
lean_inc(v_a_2874_);
lean_dec_ref_known(v___x_2873_, 1);
v___x_2875_ = ((size_t)1ULL);
v___x_2876_ = lean_usize_add(v_i_2856_, v___x_2875_);
v_i_2856_ = v___x_2876_;
v_b_2858_ = v_a_2874_;
goto _start;
}
else
{
lean_dec_ref(v_a_2854_);
lean_dec_ref(v_a_2853_);
return v___x_2873_;
}
}
else
{
lean_object* v___x_2878_; 
lean_dec_ref(v_a_2854_);
lean_dec_ref(v_a_2853_);
v___x_2878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2878_, 0, v_b_2858_);
return v___x_2878_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__16_spec__23___boxed(lean_object** _args){
lean_object* v_a_2879_ = _args[0];
lean_object* v_a_2880_ = _args[1];
lean_object* v_as_2881_ = _args[2];
lean_object* v_i_2882_ = _args[3];
lean_object* v_stop_2883_ = _args[4];
lean_object* v_b_2884_ = _args[5];
lean_object* v___y_2885_ = _args[6];
lean_object* v___y_2886_ = _args[7];
lean_object* v___y_2887_ = _args[8];
lean_object* v___y_2888_ = _args[9];
lean_object* v___y_2889_ = _args[10];
lean_object* v___y_2890_ = _args[11];
lean_object* v___y_2891_ = _args[12];
lean_object* v___y_2892_ = _args[13];
lean_object* v___y_2893_ = _args[14];
lean_object* v___y_2894_ = _args[15];
lean_object* v___y_2895_ = _args[16];
lean_object* v___y_2896_ = _args[17];
_start:
{
size_t v_i_boxed_2897_; size_t v_stop_boxed_2898_; lean_object* v_res_2899_; 
v_i_boxed_2897_ = lean_unbox_usize(v_i_2882_);
lean_dec(v_i_2882_);
v_stop_boxed_2898_ = lean_unbox_usize(v_stop_2883_);
lean_dec(v_stop_2883_);
v_res_2899_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__16_spec__23(v_a_2879_, v_a_2880_, v_as_2881_, v_i_boxed_2897_, v_stop_boxed_2898_, v_b_2884_, v___y_2885_, v___y_2886_, v___y_2887_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_, v___y_2892_, v___y_2893_, v___y_2894_, v___y_2895_);
lean_dec(v___y_2895_);
lean_dec_ref(v___y_2894_);
lean_dec(v___y_2893_);
lean_dec_ref(v___y_2892_);
lean_dec(v___y_2891_);
lean_dec_ref(v___y_2890_);
lean_dec(v___y_2889_);
lean_dec_ref(v___y_2888_);
lean_dec(v___y_2887_);
lean_dec(v___y_2886_);
lean_dec(v___y_2885_);
lean_dec_ref(v_as_2881_);
return v_res_2899_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__16_spec__22___boxed(lean_object* v_a_2900_, lean_object* v_a_2901_, lean_object* v_x_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_){
_start:
{
lean_object* v_res_2915_; 
v_res_2915_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__16_spec__22(v_a_2900_, v_a_2901_, v_x_2902_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_, v___y_2911_, v___y_2912_, v___y_2913_);
lean_dec(v___y_2913_);
lean_dec_ref(v___y_2912_);
lean_dec(v___y_2911_);
lean_dec_ref(v___y_2910_);
lean_dec(v___y_2909_);
lean_dec_ref(v___y_2908_);
lean_dec(v___y_2907_);
lean_dec_ref(v___y_2906_);
lean_dec(v___y_2905_);
lean_dec(v___y_2904_);
lean_dec(v___y_2903_);
return v_res_2915_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__16___closed__0(void){
_start:
{
lean_object* v___x_2916_; 
v___x_2916_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_2916_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__16(lean_object* v_a_2917_, lean_object* v_a_2918_, lean_object* v_x_2919_, size_t v_x_2920_, size_t v_x_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_, lean_object* v___y_2929_, lean_object* v___y_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_){
_start:
{
if (lean_obj_tag(v_x_2919_) == 0)
{
lean_object* v_cs_2934_; lean_object* v___x_2935_; size_t v___x_2936_; lean_object* v_j_2937_; lean_object* v___x_2938_; size_t v___x_2939_; size_t v___x_2940_; size_t v___x_2941_; size_t v___x_2942_; size_t v___x_2943_; size_t v___x_2944_; lean_object* v___x_2945_; 
v_cs_2934_ = lean_ctor_get(v_x_2919_, 0);
lean_inc_ref(v_cs_2934_);
lean_dec_ref_known(v_x_2919_, 1);
v___x_2935_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__16___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__16___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__16___closed__0);
v___x_2936_ = lean_usize_shift_right(v_x_2920_, v_x_2921_);
v_j_2937_ = lean_usize_to_nat(v___x_2936_);
v___x_2938_ = lean_array_get_borrowed(v___x_2935_, v_cs_2934_, v_j_2937_);
v___x_2939_ = ((size_t)1ULL);
v___x_2940_ = lean_usize_shift_left(v___x_2939_, v_x_2921_);
v___x_2941_ = lean_usize_sub(v___x_2940_, v___x_2939_);
v___x_2942_ = lean_usize_land(v_x_2920_, v___x_2941_);
v___x_2943_ = ((size_t)5ULL);
v___x_2944_ = lean_usize_sub(v_x_2921_, v___x_2943_);
lean_inc(v___x_2938_);
lean_inc_ref(v_a_2918_);
lean_inc_ref(v_a_2917_);
v___x_2945_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__16(v_a_2917_, v_a_2918_, v___x_2938_, v___x_2942_, v___x_2944_, v___y_2922_, v___y_2923_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_, v___y_2928_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_);
if (lean_obj_tag(v___x_2945_) == 0)
{
lean_object* v___x_2947_; uint8_t v_isShared_2948_; uint8_t v_isSharedCheck_2960_; 
v_isSharedCheck_2960_ = !lean_is_exclusive(v___x_2945_);
if (v_isSharedCheck_2960_ == 0)
{
lean_object* v_unused_2961_; 
v_unused_2961_ = lean_ctor_get(v___x_2945_, 0);
lean_dec(v_unused_2961_);
v___x_2947_ = v___x_2945_;
v_isShared_2948_ = v_isSharedCheck_2960_;
goto v_resetjp_2946_;
}
else
{
lean_dec(v___x_2945_);
v___x_2947_ = lean_box(0);
v_isShared_2948_ = v_isSharedCheck_2960_;
goto v_resetjp_2946_;
}
v_resetjp_2946_:
{
lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; uint8_t v___x_2953_; 
v___x_2949_ = lean_unsigned_to_nat(1u);
v___x_2950_ = lean_nat_add(v_j_2937_, v___x_2949_);
lean_dec(v_j_2937_);
v___x_2951_ = lean_array_get_size(v_cs_2934_);
v___x_2952_ = lean_box(0);
v___x_2953_ = lean_nat_dec_lt(v___x_2950_, v___x_2951_);
if (v___x_2953_ == 0)
{
lean_object* v___x_2955_; 
lean_dec(v___x_2950_);
lean_dec_ref(v_cs_2934_);
lean_dec_ref(v_a_2918_);
lean_dec_ref(v_a_2917_);
if (v_isShared_2948_ == 0)
{
lean_ctor_set(v___x_2947_, 0, v___x_2952_);
v___x_2955_ = v___x_2947_;
goto v_reusejp_2954_;
}
else
{
lean_object* v_reuseFailAlloc_2956_; 
v_reuseFailAlloc_2956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2956_, 0, v___x_2952_);
v___x_2955_ = v_reuseFailAlloc_2956_;
goto v_reusejp_2954_;
}
v_reusejp_2954_:
{
return v___x_2955_;
}
}
else
{
size_t v___x_2957_; size_t v___x_2958_; lean_object* v___x_2959_; 
lean_del_object(v___x_2947_);
v___x_2957_ = lean_usize_of_nat(v___x_2950_);
lean_dec(v___x_2950_);
v___x_2958_ = lean_usize_of_nat(v___x_2951_);
v___x_2959_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__16_spec__23(v_a_2917_, v_a_2918_, v_cs_2934_, v___x_2957_, v___x_2958_, v___x_2952_, v___y_2922_, v___y_2923_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_, v___y_2928_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_);
lean_dec_ref(v_cs_2934_);
return v___x_2959_;
}
}
}
else
{
lean_dec(v_j_2937_);
lean_dec_ref(v_cs_2934_);
lean_dec_ref(v_a_2918_);
lean_dec_ref(v_a_2917_);
return v___x_2945_;
}
}
else
{
lean_object* v_vs_2962_; lean_object* v___x_2964_; uint8_t v_isShared_2965_; uint8_t v_isSharedCheck_2976_; 
v_vs_2962_ = lean_ctor_get(v_x_2919_, 0);
v_isSharedCheck_2976_ = !lean_is_exclusive(v_x_2919_);
if (v_isSharedCheck_2976_ == 0)
{
v___x_2964_ = v_x_2919_;
v_isShared_2965_ = v_isSharedCheck_2976_;
goto v_resetjp_2963_;
}
else
{
lean_inc(v_vs_2962_);
lean_dec(v_x_2919_);
v___x_2964_ = lean_box(0);
v_isShared_2965_ = v_isSharedCheck_2976_;
goto v_resetjp_2963_;
}
v_resetjp_2963_:
{
lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; uint8_t v___x_2969_; 
v___x_2966_ = lean_usize_to_nat(v_x_2920_);
v___x_2967_ = lean_array_get_size(v_vs_2962_);
v___x_2968_ = lean_box(0);
v___x_2969_ = lean_nat_dec_lt(v___x_2966_, v___x_2967_);
if (v___x_2969_ == 0)
{
lean_object* v___x_2971_; 
lean_dec(v___x_2966_);
lean_dec_ref(v_vs_2962_);
lean_dec_ref(v_a_2918_);
lean_dec_ref(v_a_2917_);
if (v_isShared_2965_ == 0)
{
lean_ctor_set_tag(v___x_2964_, 0);
lean_ctor_set(v___x_2964_, 0, v___x_2968_);
v___x_2971_ = v___x_2964_;
goto v_reusejp_2970_;
}
else
{
lean_object* v_reuseFailAlloc_2972_; 
v_reuseFailAlloc_2972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2972_, 0, v___x_2968_);
v___x_2971_ = v_reuseFailAlloc_2972_;
goto v_reusejp_2970_;
}
v_reusejp_2970_:
{
return v___x_2971_;
}
}
else
{
size_t v___x_2973_; size_t v___x_2974_; lean_object* v___x_2975_; 
lean_del_object(v___x_2964_);
v___x_2973_ = lean_usize_of_nat(v___x_2966_);
lean_dec(v___x_2966_);
v___x_2974_ = lean_usize_of_nat(v___x_2967_);
v___x_2975_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__17___redArg(v_a_2917_, v_a_2918_, v_vs_2962_, v___x_2973_, v___x_2974_, v___x_2968_, v___y_2923_, v___y_2927_, v___y_2928_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_);
lean_dec_ref(v_vs_2962_);
return v___x_2975_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__16___boxed(lean_object** _args){
lean_object* v_a_2977_ = _args[0];
lean_object* v_a_2978_ = _args[1];
lean_object* v_x_2979_ = _args[2];
lean_object* v_x_2980_ = _args[3];
lean_object* v_x_2981_ = _args[4];
lean_object* v___y_2982_ = _args[5];
lean_object* v___y_2983_ = _args[6];
lean_object* v___y_2984_ = _args[7];
lean_object* v___y_2985_ = _args[8];
lean_object* v___y_2986_ = _args[9];
lean_object* v___y_2987_ = _args[10];
lean_object* v___y_2988_ = _args[11];
lean_object* v___y_2989_ = _args[12];
lean_object* v___y_2990_ = _args[13];
lean_object* v___y_2991_ = _args[14];
lean_object* v___y_2992_ = _args[15];
lean_object* v___y_2993_ = _args[16];
_start:
{
size_t v_x_128915__boxed_2994_; size_t v_x_128916__boxed_2995_; lean_object* v_res_2996_; 
v_x_128915__boxed_2994_ = lean_unbox_usize(v_x_2980_);
lean_dec(v_x_2980_);
v_x_128916__boxed_2995_ = lean_unbox_usize(v_x_2981_);
lean_dec(v_x_2981_);
v_res_2996_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__16(v_a_2977_, v_a_2978_, v_x_2979_, v_x_128915__boxed_2994_, v_x_128916__boxed_2995_, v___y_2982_, v___y_2983_, v___y_2984_, v___y_2985_, v___y_2986_, v___y_2987_, v___y_2988_, v___y_2989_, v___y_2990_, v___y_2991_, v___y_2992_);
lean_dec(v___y_2992_);
lean_dec_ref(v___y_2991_);
lean_dec(v___y_2990_);
lean_dec_ref(v___y_2989_);
lean_dec(v___y_2988_);
lean_dec_ref(v___y_2987_);
lean_dec(v___y_2986_);
lean_dec_ref(v___y_2985_);
lean_dec(v___y_2984_);
lean_dec(v___y_2983_);
lean_dec(v___y_2982_);
return v_res_2996_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__18(lean_object* v_a_2997_, lean_object* v_a_2998_, lean_object* v_t_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_, lean_object* v___y_3006_, lean_object* v___y_3007_, lean_object* v___y_3008_, lean_object* v___y_3009_, lean_object* v___y_3010_){
_start:
{
lean_object* v_root_3012_; lean_object* v_tail_3013_; lean_object* v___x_3014_; 
v_root_3012_ = lean_ctor_get(v_t_2999_, 0);
lean_inc_ref(v_root_3012_);
v_tail_3013_ = lean_ctor_get(v_t_2999_, 1);
lean_inc_ref(v_tail_3013_);
lean_dec_ref(v_t_2999_);
lean_inc_ref(v_a_2998_);
lean_inc_ref(v_a_2997_);
v___x_3014_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__16_spec__22(v_a_2997_, v_a_2998_, v_root_3012_, v___y_3000_, v___y_3001_, v___y_3002_, v___y_3003_, v___y_3004_, v___y_3005_, v___y_3006_, v___y_3007_, v___y_3008_, v___y_3009_, v___y_3010_);
if (lean_obj_tag(v___x_3014_) == 0)
{
lean_object* v___x_3016_; uint8_t v_isShared_3017_; uint8_t v_isSharedCheck_3028_; 
v_isSharedCheck_3028_ = !lean_is_exclusive(v___x_3014_);
if (v_isSharedCheck_3028_ == 0)
{
lean_object* v_unused_3029_; 
v_unused_3029_ = lean_ctor_get(v___x_3014_, 0);
lean_dec(v_unused_3029_);
v___x_3016_ = v___x_3014_;
v_isShared_3017_ = v_isSharedCheck_3028_;
goto v_resetjp_3015_;
}
else
{
lean_dec(v___x_3014_);
v___x_3016_ = lean_box(0);
v_isShared_3017_ = v_isSharedCheck_3028_;
goto v_resetjp_3015_;
}
v_resetjp_3015_:
{
lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; uint8_t v___x_3021_; 
v___x_3018_ = lean_unsigned_to_nat(0u);
v___x_3019_ = lean_array_get_size(v_tail_3013_);
v___x_3020_ = lean_box(0);
v___x_3021_ = lean_nat_dec_lt(v___x_3018_, v___x_3019_);
if (v___x_3021_ == 0)
{
lean_object* v___x_3023_; 
lean_dec_ref(v_tail_3013_);
lean_dec_ref(v_a_2998_);
lean_dec_ref(v_a_2997_);
if (v_isShared_3017_ == 0)
{
lean_ctor_set(v___x_3016_, 0, v___x_3020_);
v___x_3023_ = v___x_3016_;
goto v_reusejp_3022_;
}
else
{
lean_object* v_reuseFailAlloc_3024_; 
v_reuseFailAlloc_3024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3024_, 0, v___x_3020_);
v___x_3023_ = v_reuseFailAlloc_3024_;
goto v_reusejp_3022_;
}
v_reusejp_3022_:
{
return v___x_3023_;
}
}
else
{
size_t v___x_3025_; size_t v___x_3026_; lean_object* v___x_3027_; 
lean_del_object(v___x_3016_);
v___x_3025_ = ((size_t)0ULL);
v___x_3026_ = lean_usize_of_nat(v___x_3019_);
v___x_3027_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__17___redArg(v_a_2997_, v_a_2998_, v_tail_3013_, v___x_3025_, v___x_3026_, v___x_3020_, v___y_3001_, v___y_3005_, v___y_3006_, v___y_3007_, v___y_3008_, v___y_3009_, v___y_3010_);
lean_dec_ref(v_tail_3013_);
return v___x_3027_;
}
}
}
else
{
lean_dec_ref(v_tail_3013_);
lean_dec_ref(v_a_2998_);
lean_dec_ref(v_a_2997_);
return v___x_3014_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__18___boxed(lean_object* v_a_3030_, lean_object* v_a_3031_, lean_object* v_t_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_, lean_object* v___y_3038_, lean_object* v___y_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_){
_start:
{
lean_object* v_res_3045_; 
v_res_3045_ = l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__18(v_a_3030_, v_a_3031_, v_t_3032_, v___y_3033_, v___y_3034_, v___y_3035_, v___y_3036_, v___y_3037_, v___y_3038_, v___y_3039_, v___y_3040_, v___y_3041_, v___y_3042_, v___y_3043_);
lean_dec(v___y_3043_);
lean_dec_ref(v___y_3042_);
lean_dec(v___y_3041_);
lean_dec_ref(v___y_3040_);
lean_dec(v___y_3039_);
lean_dec_ref(v___y_3038_);
lean_dec(v___y_3037_);
lean_dec_ref(v___y_3036_);
lean_dec(v___y_3035_);
lean_dec(v___y_3034_);
lean_dec(v___y_3033_);
return v_res_3045_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8(lean_object* v_a_3046_, lean_object* v_a_3047_, lean_object* v_t_3048_, lean_object* v_start_3049_, lean_object* v___y_3050_, lean_object* v___y_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_){
_start:
{
lean_object* v___x_3062_; uint8_t v___x_3063_; 
v___x_3062_ = lean_unsigned_to_nat(0u);
v___x_3063_ = lean_nat_dec_eq(v_start_3049_, v___x_3062_);
if (v___x_3063_ == 0)
{
lean_object* v_root_3064_; lean_object* v_tail_3065_; size_t v_shift_3066_; lean_object* v_tailOff_3067_; uint8_t v___x_3068_; 
v_root_3064_ = lean_ctor_get(v_t_3048_, 0);
lean_inc_ref(v_root_3064_);
v_tail_3065_ = lean_ctor_get(v_t_3048_, 1);
lean_inc_ref(v_tail_3065_);
v_shift_3066_ = lean_ctor_get_usize(v_t_3048_, 4);
v_tailOff_3067_ = lean_ctor_get(v_t_3048_, 3);
lean_inc(v_tailOff_3067_);
lean_dec_ref(v_t_3048_);
v___x_3068_ = lean_nat_dec_le(v_tailOff_3067_, v_start_3049_);
if (v___x_3068_ == 0)
{
size_t v___x_3069_; lean_object* v___x_3070_; 
lean_dec(v_tailOff_3067_);
v___x_3069_ = lean_usize_of_nat(v_start_3049_);
lean_inc_ref(v_a_3047_);
lean_inc_ref(v_a_3046_);
v___x_3070_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__16(v_a_3046_, v_a_3047_, v_root_3064_, v___x_3069_, v_shift_3066_, v___y_3050_, v___y_3051_, v___y_3052_, v___y_3053_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_, v___y_3059_, v___y_3060_);
if (lean_obj_tag(v___x_3070_) == 0)
{
lean_object* v___x_3072_; uint8_t v_isShared_3073_; uint8_t v_isSharedCheck_3083_; 
v_isSharedCheck_3083_ = !lean_is_exclusive(v___x_3070_);
if (v_isSharedCheck_3083_ == 0)
{
lean_object* v_unused_3084_; 
v_unused_3084_ = lean_ctor_get(v___x_3070_, 0);
lean_dec(v_unused_3084_);
v___x_3072_ = v___x_3070_;
v_isShared_3073_ = v_isSharedCheck_3083_;
goto v_resetjp_3071_;
}
else
{
lean_dec(v___x_3070_);
v___x_3072_ = lean_box(0);
v_isShared_3073_ = v_isSharedCheck_3083_;
goto v_resetjp_3071_;
}
v_resetjp_3071_:
{
lean_object* v___x_3074_; lean_object* v___x_3075_; uint8_t v___x_3076_; 
v___x_3074_ = lean_array_get_size(v_tail_3065_);
v___x_3075_ = lean_box(0);
v___x_3076_ = lean_nat_dec_lt(v___x_3062_, v___x_3074_);
if (v___x_3076_ == 0)
{
lean_object* v___x_3078_; 
lean_dec_ref(v_tail_3065_);
lean_dec_ref(v_a_3047_);
lean_dec_ref(v_a_3046_);
if (v_isShared_3073_ == 0)
{
lean_ctor_set(v___x_3072_, 0, v___x_3075_);
v___x_3078_ = v___x_3072_;
goto v_reusejp_3077_;
}
else
{
lean_object* v_reuseFailAlloc_3079_; 
v_reuseFailAlloc_3079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3079_, 0, v___x_3075_);
v___x_3078_ = v_reuseFailAlloc_3079_;
goto v_reusejp_3077_;
}
v_reusejp_3077_:
{
return v___x_3078_;
}
}
else
{
size_t v___x_3080_; size_t v___x_3081_; lean_object* v___x_3082_; 
lean_del_object(v___x_3072_);
v___x_3080_ = ((size_t)0ULL);
v___x_3081_ = lean_usize_of_nat(v___x_3074_);
v___x_3082_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__17___redArg(v_a_3046_, v_a_3047_, v_tail_3065_, v___x_3080_, v___x_3081_, v___x_3075_, v___y_3051_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_, v___y_3059_, v___y_3060_);
lean_dec_ref(v_tail_3065_);
return v___x_3082_;
}
}
}
else
{
lean_dec_ref(v_tail_3065_);
lean_dec_ref(v_a_3047_);
lean_dec_ref(v_a_3046_);
return v___x_3070_;
}
}
else
{
lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; uint8_t v___x_3088_; 
lean_dec_ref(v_root_3064_);
v___x_3085_ = lean_nat_sub(v_start_3049_, v_tailOff_3067_);
lean_dec(v_tailOff_3067_);
v___x_3086_ = lean_array_get_size(v_tail_3065_);
v___x_3087_ = lean_box(0);
v___x_3088_ = lean_nat_dec_lt(v___x_3085_, v___x_3086_);
if (v___x_3088_ == 0)
{
lean_object* v___x_3089_; 
lean_dec(v___x_3085_);
lean_dec_ref(v_tail_3065_);
lean_dec_ref(v_a_3047_);
lean_dec_ref(v_a_3046_);
v___x_3089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3089_, 0, v___x_3087_);
return v___x_3089_;
}
else
{
size_t v___x_3090_; size_t v___x_3091_; lean_object* v___x_3092_; 
v___x_3090_ = lean_usize_of_nat(v___x_3085_);
lean_dec(v___x_3085_);
v___x_3091_ = lean_usize_of_nat(v___x_3086_);
v___x_3092_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__17___redArg(v_a_3046_, v_a_3047_, v_tail_3065_, v___x_3090_, v___x_3091_, v___x_3087_, v___y_3051_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_, v___y_3059_, v___y_3060_);
lean_dec_ref(v_tail_3065_);
return v___x_3092_;
}
}
}
else
{
lean_object* v___x_3093_; 
v___x_3093_ = l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__18(v_a_3046_, v_a_3047_, v_t_3048_, v___y_3050_, v___y_3051_, v___y_3052_, v___y_3053_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_, v___y_3059_, v___y_3060_);
return v___x_3093_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8___boxed(lean_object* v_a_3094_, lean_object* v_a_3095_, lean_object* v_t_3096_, lean_object* v_start_3097_, lean_object* v___y_3098_, lean_object* v___y_3099_, lean_object* v___y_3100_, lean_object* v___y_3101_, lean_object* v___y_3102_, lean_object* v___y_3103_, lean_object* v___y_3104_, lean_object* v___y_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_){
_start:
{
lean_object* v_res_3110_; 
v_res_3110_ = l_Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8(v_a_3094_, v_a_3095_, v_t_3096_, v_start_3097_, v___y_3098_, v___y_3099_, v___y_3100_, v___y_3101_, v___y_3102_, v___y_3103_, v___y_3104_, v___y_3105_, v___y_3106_, v___y_3107_, v___y_3108_);
lean_dec(v___y_3108_);
lean_dec_ref(v___y_3107_);
lean_dec(v___y_3106_);
lean_dec_ref(v___y_3105_);
lean_dec(v___y_3104_);
lean_dec_ref(v___y_3103_);
lean_dec(v___y_3102_);
lean_dec_ref(v___y_3101_);
lean_dec(v___y_3100_);
lean_dec(v___y_3099_);
lean_dec(v___y_3098_);
lean_dec(v_start_3097_);
return v_res_3110_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0_spec__1_spec__5___redArg(lean_object* v_keys_3111_, lean_object* v_i_3112_, lean_object* v_k_3113_){
_start:
{
lean_object* v___x_3114_; uint8_t v___x_3115_; 
v___x_3114_ = lean_array_get_size(v_keys_3111_);
v___x_3115_ = lean_nat_dec_lt(v_i_3112_, v___x_3114_);
if (v___x_3115_ == 0)
{
lean_dec(v_i_3112_);
return v___x_3115_;
}
else
{
lean_object* v_k_x27_3116_; size_t v___x_3117_; size_t v___x_3118_; uint8_t v___x_3119_; 
v_k_x27_3116_ = lean_array_fget_borrowed(v_keys_3111_, v_i_3112_);
v___x_3117_ = lean_ptr_addr(v_k_3113_);
v___x_3118_ = lean_ptr_addr(v_k_x27_3116_);
v___x_3119_ = lean_usize_dec_eq(v___x_3117_, v___x_3118_);
if (v___x_3119_ == 0)
{
lean_object* v___x_3120_; lean_object* v___x_3121_; 
v___x_3120_ = lean_unsigned_to_nat(1u);
v___x_3121_ = lean_nat_add(v_i_3112_, v___x_3120_);
lean_dec(v_i_3112_);
v_i_3112_ = v___x_3121_;
goto _start;
}
else
{
lean_dec(v_i_3112_);
return v___x_3115_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0_spec__1_spec__5___redArg___boxed(lean_object* v_keys_3123_, lean_object* v_i_3124_, lean_object* v_k_3125_){
_start:
{
uint8_t v_res_3126_; lean_object* v_r_3127_; 
v_res_3126_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0_spec__1_spec__5___redArg(v_keys_3123_, v_i_3124_, v_k_3125_);
lean_dec_ref(v_k_3125_);
lean_dec_ref(v_keys_3123_);
v_r_3127_ = lean_box(v_res_3126_);
return v_r_3127_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0_spec__1___redArg(lean_object* v_x_3128_, size_t v_x_3129_, lean_object* v_x_3130_){
_start:
{
if (lean_obj_tag(v_x_3128_) == 0)
{
lean_object* v_es_3131_; lean_object* v___x_3132_; size_t v___x_3133_; size_t v___x_3134_; lean_object* v_j_3135_; lean_object* v___x_3136_; 
v_es_3131_ = lean_ctor_get(v_x_3128_, 0);
v___x_3132_ = lean_box(2);
v___x_3133_ = ((size_t)31ULL);
v___x_3134_ = lean_usize_land(v_x_3129_, v___x_3133_);
v_j_3135_ = lean_usize_to_nat(v___x_3134_);
v___x_3136_ = lean_array_get_borrowed(v___x_3132_, v_es_3131_, v_j_3135_);
lean_dec(v_j_3135_);
switch(lean_obj_tag(v___x_3136_))
{
case 0:
{
lean_object* v_key_3137_; size_t v___x_3138_; size_t v___x_3139_; uint8_t v___x_3140_; 
v_key_3137_ = lean_ctor_get(v___x_3136_, 0);
v___x_3138_ = lean_ptr_addr(v_x_3130_);
v___x_3139_ = lean_ptr_addr(v_key_3137_);
v___x_3140_ = lean_usize_dec_eq(v___x_3138_, v___x_3139_);
return v___x_3140_;
}
case 1:
{
lean_object* v_node_3141_; size_t v___x_3142_; size_t v___x_3143_; 
v_node_3141_ = lean_ctor_get(v___x_3136_, 0);
v___x_3142_ = ((size_t)5ULL);
v___x_3143_ = lean_usize_shift_right(v_x_3129_, v___x_3142_);
v_x_3128_ = v_node_3141_;
v_x_3129_ = v___x_3143_;
goto _start;
}
default: 
{
uint8_t v___x_3145_; 
v___x_3145_ = 0;
return v___x_3145_;
}
}
}
else
{
lean_object* v_ks_3146_; lean_object* v___x_3147_; uint8_t v___x_3148_; 
v_ks_3146_ = lean_ctor_get(v_x_3128_, 0);
v___x_3147_ = lean_unsigned_to_nat(0u);
v___x_3148_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0_spec__1_spec__5___redArg(v_ks_3146_, v___x_3147_, v_x_3130_);
return v___x_3148_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_3149_, lean_object* v_x_3150_, lean_object* v_x_3151_){
_start:
{
size_t v_x_129243__boxed_3152_; uint8_t v_res_3153_; lean_object* v_r_3154_; 
v_x_129243__boxed_3152_ = lean_unbox_usize(v_x_3150_);
lean_dec(v_x_3150_);
v_res_3153_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0_spec__1___redArg(v_x_3149_, v_x_129243__boxed_3152_, v_x_3151_);
lean_dec_ref(v_x_3151_);
lean_dec_ref(v_x_3149_);
v_r_3154_ = lean_box(v_res_3153_);
return v_r_3154_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0___redArg(lean_object* v_x_3155_, lean_object* v_x_3156_){
_start:
{
size_t v___x_3157_; size_t v___x_3158_; size_t v___x_3159_; uint64_t v___x_3160_; size_t v___x_3161_; uint8_t v___x_3162_; 
v___x_3157_ = lean_ptr_addr(v_x_3156_);
v___x_3158_ = ((size_t)3ULL);
v___x_3159_ = lean_usize_shift_right(v___x_3157_, v___x_3158_);
v___x_3160_ = lean_usize_to_uint64(v___x_3159_);
v___x_3161_ = lean_uint64_to_usize(v___x_3160_);
v___x_3162_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0_spec__1___redArg(v_x_3155_, v___x_3161_, v_x_3156_);
return v___x_3162_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0___redArg___boxed(lean_object* v_x_3163_, lean_object* v_x_3164_){
_start:
{
uint8_t v_res_3165_; lean_object* v_r_3166_; 
v_res_3165_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0___redArg(v_x_3163_, v_x_3164_);
lean_dec_ref(v_x_3164_);
lean_dec_ref(v_x_3163_);
v_r_3166_ = lean_box(v_res_3165_);
return v_r_3166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___lam__0(lean_object* v_a_3167_, lean_object* v_s_3168_){
_start:
{
lean_object* v_id_3169_; lean_object* v_type_3170_; lean_object* v_u_3171_; lean_object* v_ringInst_3172_; lean_object* v_semiringInst_3173_; lean_object* v_charInst_x3f_3174_; uint8_t v_symbolicChar_3175_; lean_object* v_addFn_x3f_3176_; lean_object* v_mulFn_x3f_3177_; lean_object* v_subFn_x3f_3178_; lean_object* v_negFn_x3f_3179_; lean_object* v_powFn_x3f_3180_; lean_object* v_natCastFn_x3f_3181_; lean_object* v_natSMulFn_x3f_3182_; lean_object* v_intSMulFn_x3f_3183_; lean_object* v_one_x3f_3184_; lean_object* v___x_3186_; uint8_t v_isShared_3187_; uint8_t v_isSharedCheck_3192_; 
v_id_3169_ = lean_ctor_get(v_s_3168_, 0);
v_type_3170_ = lean_ctor_get(v_s_3168_, 1);
v_u_3171_ = lean_ctor_get(v_s_3168_, 2);
v_ringInst_3172_ = lean_ctor_get(v_s_3168_, 3);
v_semiringInst_3173_ = lean_ctor_get(v_s_3168_, 4);
v_charInst_x3f_3174_ = lean_ctor_get(v_s_3168_, 5);
v_symbolicChar_3175_ = lean_ctor_get_uint8(v_s_3168_, sizeof(void*)*16);
v_addFn_x3f_3176_ = lean_ctor_get(v_s_3168_, 6);
v_mulFn_x3f_3177_ = lean_ctor_get(v_s_3168_, 7);
v_subFn_x3f_3178_ = lean_ctor_get(v_s_3168_, 8);
v_negFn_x3f_3179_ = lean_ctor_get(v_s_3168_, 9);
v_powFn_x3f_3180_ = lean_ctor_get(v_s_3168_, 10);
v_natCastFn_x3f_3181_ = lean_ctor_get(v_s_3168_, 12);
v_natSMulFn_x3f_3182_ = lean_ctor_get(v_s_3168_, 13);
v_intSMulFn_x3f_3183_ = lean_ctor_get(v_s_3168_, 14);
v_one_x3f_3184_ = lean_ctor_get(v_s_3168_, 15);
v_isSharedCheck_3192_ = !lean_is_exclusive(v_s_3168_);
if (v_isSharedCheck_3192_ == 0)
{
lean_object* v_unused_3193_; 
v_unused_3193_ = lean_ctor_get(v_s_3168_, 11);
lean_dec(v_unused_3193_);
v___x_3186_ = v_s_3168_;
v_isShared_3187_ = v_isSharedCheck_3192_;
goto v_resetjp_3185_;
}
else
{
lean_inc(v_one_x3f_3184_);
lean_inc(v_intSMulFn_x3f_3183_);
lean_inc(v_natSMulFn_x3f_3182_);
lean_inc(v_natCastFn_x3f_3181_);
lean_inc(v_powFn_x3f_3180_);
lean_inc(v_negFn_x3f_3179_);
lean_inc(v_subFn_x3f_3178_);
lean_inc(v_mulFn_x3f_3177_);
lean_inc(v_addFn_x3f_3176_);
lean_inc(v_charInst_x3f_3174_);
lean_inc(v_semiringInst_3173_);
lean_inc(v_ringInst_3172_);
lean_inc(v_u_3171_);
lean_inc(v_type_3170_);
lean_inc(v_id_3169_);
lean_dec(v_s_3168_);
v___x_3186_ = lean_box(0);
v_isShared_3187_ = v_isSharedCheck_3192_;
goto v_resetjp_3185_;
}
v_resetjp_3185_:
{
lean_object* v___x_3188_; lean_object* v___x_3190_; 
v___x_3188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3188_, 0, v_a_3167_);
if (v_isShared_3187_ == 0)
{
lean_ctor_set(v___x_3186_, 11, v___x_3188_);
v___x_3190_ = v___x_3186_;
goto v_reusejp_3189_;
}
else
{
lean_object* v_reuseFailAlloc_3191_; 
v_reuseFailAlloc_3191_ = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(v_reuseFailAlloc_3191_, 0, v_id_3169_);
lean_ctor_set(v_reuseFailAlloc_3191_, 1, v_type_3170_);
lean_ctor_set(v_reuseFailAlloc_3191_, 2, v_u_3171_);
lean_ctor_set(v_reuseFailAlloc_3191_, 3, v_ringInst_3172_);
lean_ctor_set(v_reuseFailAlloc_3191_, 4, v_semiringInst_3173_);
lean_ctor_set(v_reuseFailAlloc_3191_, 5, v_charInst_x3f_3174_);
lean_ctor_set(v_reuseFailAlloc_3191_, 6, v_addFn_x3f_3176_);
lean_ctor_set(v_reuseFailAlloc_3191_, 7, v_mulFn_x3f_3177_);
lean_ctor_set(v_reuseFailAlloc_3191_, 8, v_subFn_x3f_3178_);
lean_ctor_set(v_reuseFailAlloc_3191_, 9, v_negFn_x3f_3179_);
lean_ctor_set(v_reuseFailAlloc_3191_, 10, v_powFn_x3f_3180_);
lean_ctor_set(v_reuseFailAlloc_3191_, 11, v___x_3188_);
lean_ctor_set(v_reuseFailAlloc_3191_, 12, v_natCastFn_x3f_3181_);
lean_ctor_set(v_reuseFailAlloc_3191_, 13, v_natSMulFn_x3f_3182_);
lean_ctor_set(v_reuseFailAlloc_3191_, 14, v_intSMulFn_x3f_3183_);
lean_ctor_set(v_reuseFailAlloc_3191_, 15, v_one_x3f_3184_);
lean_ctor_set_uint8(v_reuseFailAlloc_3191_, sizeof(void*)*16, v_symbolicChar_3175_);
v___x_3190_ = v_reuseFailAlloc_3191_;
goto v_reusejp_3189_;
}
v_reusejp_3189_:
{
return v___x_3190_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7(lean_object* v___y_3205_, lean_object* v___y_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_){
_start:
{
lean_object* v___x_3217_; 
v___x_3217_ = l_Lean_Meta_Grind_Arith_CommRing_NonCommRingM_getRing(v___y_3205_, v___y_3206_, v___y_3207_, v___y_3208_, v___y_3209_, v___y_3210_, v___y_3211_, v___y_3212_, v___y_3213_, v___y_3214_, v___y_3215_);
if (lean_obj_tag(v___x_3217_) == 0)
{
lean_object* v_a_3218_; lean_object* v___x_3220_; uint8_t v_isShared_3221_; uint8_t v_isSharedCheck_3293_; 
v_a_3218_ = lean_ctor_get(v___x_3217_, 0);
v_isSharedCheck_3293_ = !lean_is_exclusive(v___x_3217_);
if (v_isSharedCheck_3293_ == 0)
{
v___x_3220_ = v___x_3217_;
v_isShared_3221_ = v_isSharedCheck_3293_;
goto v_resetjp_3219_;
}
else
{
lean_inc(v_a_3218_);
lean_dec(v___x_3217_);
v___x_3220_ = lean_box(0);
v_isShared_3221_ = v_isSharedCheck_3293_;
goto v_resetjp_3219_;
}
v_resetjp_3219_:
{
lean_object* v_intCastFn_x3f_3222_; 
v_intCastFn_x3f_3222_ = lean_ctor_get(v_a_3218_, 11);
if (lean_obj_tag(v_intCastFn_x3f_3222_) == 1)
{
lean_object* v_val_3223_; lean_object* v___x_3225_; 
lean_inc_ref(v_intCastFn_x3f_3222_);
lean_dec(v_a_3218_);
v_val_3223_ = lean_ctor_get(v_intCastFn_x3f_3222_, 0);
lean_inc(v_val_3223_);
lean_dec_ref_known(v_intCastFn_x3f_3222_, 1);
if (v_isShared_3221_ == 0)
{
lean_ctor_set(v___x_3220_, 0, v_val_3223_);
v___x_3225_ = v___x_3220_;
goto v_reusejp_3224_;
}
else
{
lean_object* v_reuseFailAlloc_3226_; 
v_reuseFailAlloc_3226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3226_, 0, v_val_3223_);
v___x_3225_ = v_reuseFailAlloc_3226_;
goto v_reusejp_3224_;
}
v_reusejp_3224_:
{
return v___x_3225_;
}
}
else
{
lean_object* v_type_3227_; lean_object* v_u_3228_; lean_object* v_ringInst_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v_inst_x27_3234_; lean_object* v_inst_3236_; lean_object* v___y_3237_; lean_object* v___y_3238_; lean_object* v___y_3239_; lean_object* v___y_3240_; lean_object* v___y_3241_; lean_object* v___y_3242_; lean_object* v___y_3243_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v_instType_3271_; lean_object* v___x_3272_; 
lean_del_object(v___x_3220_);
v_type_3227_ = lean_ctor_get(v_a_3218_, 1);
lean_inc_ref_n(v_type_3227_, 3);
v_u_3228_ = lean_ctor_get(v_a_3218_, 2);
lean_inc(v_u_3228_);
v_ringInst_3229_ = lean_ctor_get(v_a_3218_, 3);
lean_inc_ref(v_ringInst_3229_);
lean_dec(v_a_3218_);
v___x_3230_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___closed__0));
v___x_3231_ = lean_box(0);
v___x_3232_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3232_, 0, v_u_3228_);
lean_ctor_set(v___x_3232_, 1, v___x_3231_);
lean_inc_ref_n(v___x_3232_, 2);
v___x_3233_ = l_Lean_mkConst(v___x_3230_, v___x_3232_);
v_inst_x27_3234_ = l_Lean_mkAppB(v___x_3233_, v_type_3227_, v_ringInst_3229_);
v___x_3269_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___closed__1));
v___x_3270_ = l_Lean_mkConst(v___x_3269_, v___x_3232_);
v_instType_3271_ = l_Lean_Expr_app___override(v___x_3270_, v_type_3227_);
v___x_3272_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_instType_3271_, v___y_3211_, v___y_3212_, v___y_3213_, v___y_3214_, v___y_3215_);
if (lean_obj_tag(v___x_3272_) == 0)
{
lean_object* v_a_3273_; 
v_a_3273_ = lean_ctor_get(v___x_3272_, 0);
lean_inc(v_a_3273_);
lean_dec_ref_known(v___x_3272_, 1);
if (lean_obj_tag(v_a_3273_) == 0)
{
v_inst_3236_ = v_inst_x27_3234_;
v___y_3237_ = v___y_3205_;
v___y_3238_ = v___y_3210_;
v___y_3239_ = v___y_3211_;
v___y_3240_ = v___y_3212_;
v___y_3241_ = v___y_3213_;
v___y_3242_ = v___y_3214_;
v___y_3243_ = v___y_3215_;
goto v___jp_3235_;
}
else
{
lean_object* v_val_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; 
v_val_3274_ = lean_ctor_get(v_a_3273_, 0);
lean_inc_n(v_val_3274_, 2);
lean_dec_ref_known(v_a_3273_, 1);
v___x_3275_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___closed__3));
v___x_3276_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst(v___x_3275_, v_val_3274_, v_inst_x27_3234_, v___y_3212_, v___y_3213_, v___y_3214_, v___y_3215_);
if (lean_obj_tag(v___x_3276_) == 0)
{
lean_dec_ref_known(v___x_3276_, 1);
v_inst_3236_ = v_val_3274_;
v___y_3237_ = v___y_3205_;
v___y_3238_ = v___y_3210_;
v___y_3239_ = v___y_3211_;
v___y_3240_ = v___y_3212_;
v___y_3241_ = v___y_3213_;
v___y_3242_ = v___y_3214_;
v___y_3243_ = v___y_3215_;
goto v___jp_3235_;
}
else
{
lean_object* v_a_3277_; lean_object* v___x_3279_; uint8_t v_isShared_3280_; uint8_t v_isSharedCheck_3284_; 
lean_dec(v_val_3274_);
lean_dec_ref_known(v___x_3232_, 2);
lean_dec_ref(v_type_3227_);
v_a_3277_ = lean_ctor_get(v___x_3276_, 0);
v_isSharedCheck_3284_ = !lean_is_exclusive(v___x_3276_);
if (v_isSharedCheck_3284_ == 0)
{
v___x_3279_ = v___x_3276_;
v_isShared_3280_ = v_isSharedCheck_3284_;
goto v_resetjp_3278_;
}
else
{
lean_inc(v_a_3277_);
lean_dec(v___x_3276_);
v___x_3279_ = lean_box(0);
v_isShared_3280_ = v_isSharedCheck_3284_;
goto v_resetjp_3278_;
}
v_resetjp_3278_:
{
lean_object* v___x_3282_; 
if (v_isShared_3280_ == 0)
{
v___x_3282_ = v___x_3279_;
goto v_reusejp_3281_;
}
else
{
lean_object* v_reuseFailAlloc_3283_; 
v_reuseFailAlloc_3283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3283_, 0, v_a_3277_);
v___x_3282_ = v_reuseFailAlloc_3283_;
goto v_reusejp_3281_;
}
v_reusejp_3281_:
{
return v___x_3282_;
}
}
}
}
}
else
{
lean_object* v_a_3285_; lean_object* v___x_3287_; uint8_t v_isShared_3288_; uint8_t v_isSharedCheck_3292_; 
lean_dec_ref(v_inst_x27_3234_);
lean_dec_ref_known(v___x_3232_, 2);
lean_dec_ref(v_type_3227_);
v_a_3285_ = lean_ctor_get(v___x_3272_, 0);
v_isSharedCheck_3292_ = !lean_is_exclusive(v___x_3272_);
if (v_isSharedCheck_3292_ == 0)
{
v___x_3287_ = v___x_3272_;
v_isShared_3288_ = v_isSharedCheck_3292_;
goto v_resetjp_3286_;
}
else
{
lean_inc(v_a_3285_);
lean_dec(v___x_3272_);
v___x_3287_ = lean_box(0);
v_isShared_3288_ = v_isSharedCheck_3292_;
goto v_resetjp_3286_;
}
v_resetjp_3286_:
{
lean_object* v___x_3290_; 
if (v_isShared_3288_ == 0)
{
v___x_3290_ = v___x_3287_;
goto v_reusejp_3289_;
}
else
{
lean_object* v_reuseFailAlloc_3291_; 
v_reuseFailAlloc_3291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3291_, 0, v_a_3285_);
v___x_3290_ = v_reuseFailAlloc_3291_;
goto v_reusejp_3289_;
}
v_reusejp_3289_:
{
return v___x_3290_;
}
}
}
v___jp_3235_:
{
lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; 
v___x_3244_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__2));
v___x_3245_ = l_Lean_mkConst(v___x_3244_, v___x_3232_);
v___x_3246_ = l_Lean_mkAppB(v___x_3245_, v_type_3227_, v_inst_3236_);
v___x_3247_ = l_Lean_Meta_Sym_canon(v___x_3246_, v___y_3238_, v___y_3239_, v___y_3240_, v___y_3241_, v___y_3242_, v___y_3243_);
if (lean_obj_tag(v___x_3247_) == 0)
{
lean_object* v_a_3248_; lean_object* v___x_3249_; 
v_a_3248_ = lean_ctor_get(v___x_3247_, 0);
lean_inc(v_a_3248_);
lean_dec_ref_known(v___x_3247_, 1);
v___x_3249_ = l_Lean_Meta_Sym_shareCommon(v_a_3248_, v___y_3238_, v___y_3239_, v___y_3240_, v___y_3241_, v___y_3242_, v___y_3243_);
if (lean_obj_tag(v___x_3249_) == 0)
{
lean_object* v_a_3250_; lean_object* v___f_3251_; lean_object* v___x_3252_; 
v_a_3250_ = lean_ctor_get(v___x_3249_, 0);
lean_inc_n(v_a_3250_, 2);
lean_dec_ref_known(v___x_3249_, 1);
v___f_3251_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___lam__0), 2, 1);
lean_closure_set(v___f_3251_, 0, v_a_3250_);
v___x_3252_ = l_Lean_Meta_Grind_Arith_CommRing_NonCommRingM_modifyRing___redArg(v___f_3251_, v___y_3237_, v___y_3239_);
if (lean_obj_tag(v___x_3252_) == 0)
{
lean_object* v___x_3254_; uint8_t v_isShared_3255_; uint8_t v_isSharedCheck_3259_; 
v_isSharedCheck_3259_ = !lean_is_exclusive(v___x_3252_);
if (v_isSharedCheck_3259_ == 0)
{
lean_object* v_unused_3260_; 
v_unused_3260_ = lean_ctor_get(v___x_3252_, 0);
lean_dec(v_unused_3260_);
v___x_3254_ = v___x_3252_;
v_isShared_3255_ = v_isSharedCheck_3259_;
goto v_resetjp_3253_;
}
else
{
lean_dec(v___x_3252_);
v___x_3254_ = lean_box(0);
v_isShared_3255_ = v_isSharedCheck_3259_;
goto v_resetjp_3253_;
}
v_resetjp_3253_:
{
lean_object* v___x_3257_; 
if (v_isShared_3255_ == 0)
{
lean_ctor_set(v___x_3254_, 0, v_a_3250_);
v___x_3257_ = v___x_3254_;
goto v_reusejp_3256_;
}
else
{
lean_object* v_reuseFailAlloc_3258_; 
v_reuseFailAlloc_3258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3258_, 0, v_a_3250_);
v___x_3257_ = v_reuseFailAlloc_3258_;
goto v_reusejp_3256_;
}
v_reusejp_3256_:
{
return v___x_3257_;
}
}
}
else
{
lean_object* v_a_3261_; lean_object* v___x_3263_; uint8_t v_isShared_3264_; uint8_t v_isSharedCheck_3268_; 
lean_dec(v_a_3250_);
v_a_3261_ = lean_ctor_get(v___x_3252_, 0);
v_isSharedCheck_3268_ = !lean_is_exclusive(v___x_3252_);
if (v_isSharedCheck_3268_ == 0)
{
v___x_3263_ = v___x_3252_;
v_isShared_3264_ = v_isSharedCheck_3268_;
goto v_resetjp_3262_;
}
else
{
lean_inc(v_a_3261_);
lean_dec(v___x_3252_);
v___x_3263_ = lean_box(0);
v_isShared_3264_ = v_isSharedCheck_3268_;
goto v_resetjp_3262_;
}
v_resetjp_3262_:
{
lean_object* v___x_3266_; 
if (v_isShared_3264_ == 0)
{
v___x_3266_ = v___x_3263_;
goto v_reusejp_3265_;
}
else
{
lean_object* v_reuseFailAlloc_3267_; 
v_reuseFailAlloc_3267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3267_, 0, v_a_3261_);
v___x_3266_ = v_reuseFailAlloc_3267_;
goto v_reusejp_3265_;
}
v_reusejp_3265_:
{
return v___x_3266_;
}
}
}
}
else
{
return v___x_3249_;
}
}
else
{
return v___x_3247_;
}
}
}
}
}
else
{
lean_object* v_a_3294_; lean_object* v___x_3296_; uint8_t v_isShared_3297_; uint8_t v_isSharedCheck_3301_; 
v_a_3294_ = lean_ctor_get(v___x_3217_, 0);
v_isSharedCheck_3301_ = !lean_is_exclusive(v___x_3217_);
if (v_isSharedCheck_3301_ == 0)
{
v___x_3296_ = v___x_3217_;
v_isShared_3297_ = v_isSharedCheck_3301_;
goto v_resetjp_3295_;
}
else
{
lean_inc(v_a_3294_);
lean_dec(v___x_3217_);
v___x_3296_ = lean_box(0);
v_isShared_3297_ = v_isSharedCheck_3301_;
goto v_resetjp_3295_;
}
v_resetjp_3295_:
{
lean_object* v___x_3299_; 
if (v_isShared_3297_ == 0)
{
v___x_3299_ = v___x_3296_;
goto v_reusejp_3298_;
}
else
{
lean_object* v_reuseFailAlloc_3300_; 
v_reuseFailAlloc_3300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3300_, 0, v_a_3294_);
v___x_3299_ = v_reuseFailAlloc_3300_;
goto v_reusejp_3298_;
}
v_reusejp_3298_:
{
return v___x_3299_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___boxed(lean_object* v___y_3302_, lean_object* v___y_3303_, lean_object* v___y_3304_, lean_object* v___y_3305_, lean_object* v___y_3306_, lean_object* v___y_3307_, lean_object* v___y_3308_, lean_object* v___y_3309_, lean_object* v___y_3310_, lean_object* v___y_3311_, lean_object* v___y_3312_, lean_object* v___y_3313_){
_start:
{
lean_object* v_res_3314_; 
v_res_3314_ = l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7(v___y_3302_, v___y_3303_, v___y_3304_, v___y_3305_, v___y_3306_, v___y_3307_, v___y_3308_, v___y_3309_, v___y_3310_, v___y_3311_, v___y_3312_);
lean_dec(v___y_3312_);
lean_dec_ref(v___y_3311_);
lean_dec(v___y_3310_);
lean_dec_ref(v___y_3309_);
lean_dec(v___y_3308_);
lean_dec_ref(v___y_3307_);
lean_dec(v___y_3306_);
lean_dec_ref(v___y_3305_);
lean_dec(v___y_3304_);
lean_dec(v___y_3303_);
lean_dec(v___y_3302_);
return v_res_3314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6___lam__0(lean_object* v_a_3315_, lean_object* v_s_3316_){
_start:
{
lean_object* v_id_3317_; lean_object* v_type_3318_; lean_object* v_u_3319_; lean_object* v_ringInst_3320_; lean_object* v_semiringInst_3321_; lean_object* v_charInst_x3f_3322_; uint8_t v_symbolicChar_3323_; lean_object* v_addFn_x3f_3324_; lean_object* v_mulFn_x3f_3325_; lean_object* v_subFn_x3f_3326_; lean_object* v_negFn_x3f_3327_; lean_object* v_powFn_x3f_3328_; lean_object* v_intCastFn_x3f_3329_; lean_object* v_natSMulFn_x3f_3330_; lean_object* v_intSMulFn_x3f_3331_; lean_object* v_one_x3f_3332_; lean_object* v___x_3334_; uint8_t v_isShared_3335_; uint8_t v_isSharedCheck_3340_; 
v_id_3317_ = lean_ctor_get(v_s_3316_, 0);
v_type_3318_ = lean_ctor_get(v_s_3316_, 1);
v_u_3319_ = lean_ctor_get(v_s_3316_, 2);
v_ringInst_3320_ = lean_ctor_get(v_s_3316_, 3);
v_semiringInst_3321_ = lean_ctor_get(v_s_3316_, 4);
v_charInst_x3f_3322_ = lean_ctor_get(v_s_3316_, 5);
v_symbolicChar_3323_ = lean_ctor_get_uint8(v_s_3316_, sizeof(void*)*16);
v_addFn_x3f_3324_ = lean_ctor_get(v_s_3316_, 6);
v_mulFn_x3f_3325_ = lean_ctor_get(v_s_3316_, 7);
v_subFn_x3f_3326_ = lean_ctor_get(v_s_3316_, 8);
v_negFn_x3f_3327_ = lean_ctor_get(v_s_3316_, 9);
v_powFn_x3f_3328_ = lean_ctor_get(v_s_3316_, 10);
v_intCastFn_x3f_3329_ = lean_ctor_get(v_s_3316_, 11);
v_natSMulFn_x3f_3330_ = lean_ctor_get(v_s_3316_, 13);
v_intSMulFn_x3f_3331_ = lean_ctor_get(v_s_3316_, 14);
v_one_x3f_3332_ = lean_ctor_get(v_s_3316_, 15);
v_isSharedCheck_3340_ = !lean_is_exclusive(v_s_3316_);
if (v_isSharedCheck_3340_ == 0)
{
lean_object* v_unused_3341_; 
v_unused_3341_ = lean_ctor_get(v_s_3316_, 12);
lean_dec(v_unused_3341_);
v___x_3334_ = v_s_3316_;
v_isShared_3335_ = v_isSharedCheck_3340_;
goto v_resetjp_3333_;
}
else
{
lean_inc(v_one_x3f_3332_);
lean_inc(v_intSMulFn_x3f_3331_);
lean_inc(v_natSMulFn_x3f_3330_);
lean_inc(v_intCastFn_x3f_3329_);
lean_inc(v_powFn_x3f_3328_);
lean_inc(v_negFn_x3f_3327_);
lean_inc(v_subFn_x3f_3326_);
lean_inc(v_mulFn_x3f_3325_);
lean_inc(v_addFn_x3f_3324_);
lean_inc(v_charInst_x3f_3322_);
lean_inc(v_semiringInst_3321_);
lean_inc(v_ringInst_3320_);
lean_inc(v_u_3319_);
lean_inc(v_type_3318_);
lean_inc(v_id_3317_);
lean_dec(v_s_3316_);
v___x_3334_ = lean_box(0);
v_isShared_3335_ = v_isSharedCheck_3340_;
goto v_resetjp_3333_;
}
v_resetjp_3333_:
{
lean_object* v___x_3336_; lean_object* v___x_3338_; 
v___x_3336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3336_, 0, v_a_3315_);
if (v_isShared_3335_ == 0)
{
lean_ctor_set(v___x_3334_, 12, v___x_3336_);
v___x_3338_ = v___x_3334_;
goto v_reusejp_3337_;
}
else
{
lean_object* v_reuseFailAlloc_3339_; 
v_reuseFailAlloc_3339_ = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(v_reuseFailAlloc_3339_, 0, v_id_3317_);
lean_ctor_set(v_reuseFailAlloc_3339_, 1, v_type_3318_);
lean_ctor_set(v_reuseFailAlloc_3339_, 2, v_u_3319_);
lean_ctor_set(v_reuseFailAlloc_3339_, 3, v_ringInst_3320_);
lean_ctor_set(v_reuseFailAlloc_3339_, 4, v_semiringInst_3321_);
lean_ctor_set(v_reuseFailAlloc_3339_, 5, v_charInst_x3f_3322_);
lean_ctor_set(v_reuseFailAlloc_3339_, 6, v_addFn_x3f_3324_);
lean_ctor_set(v_reuseFailAlloc_3339_, 7, v_mulFn_x3f_3325_);
lean_ctor_set(v_reuseFailAlloc_3339_, 8, v_subFn_x3f_3326_);
lean_ctor_set(v_reuseFailAlloc_3339_, 9, v_negFn_x3f_3327_);
lean_ctor_set(v_reuseFailAlloc_3339_, 10, v_powFn_x3f_3328_);
lean_ctor_set(v_reuseFailAlloc_3339_, 11, v_intCastFn_x3f_3329_);
lean_ctor_set(v_reuseFailAlloc_3339_, 12, v___x_3336_);
lean_ctor_set(v_reuseFailAlloc_3339_, 13, v_natSMulFn_x3f_3330_);
lean_ctor_set(v_reuseFailAlloc_3339_, 14, v_intSMulFn_x3f_3331_);
lean_ctor_set(v_reuseFailAlloc_3339_, 15, v_one_x3f_3332_);
lean_ctor_set_uint8(v_reuseFailAlloc_3339_, sizeof(void*)*16, v_symbolicChar_3323_);
v___x_3338_ = v_reuseFailAlloc_3339_;
goto v_reusejp_3337_;
}
v_reusejp_3337_:
{
return v___x_3338_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6_spec__13___redArg(lean_object* v_u_3349_, lean_object* v_type_3350_, lean_object* v_semiringInst_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_, lean_object* v___y_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_){
_start:
{
lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v_inst_x27_3363_; lean_object* v_inst_3365_; lean_object* v___y_3366_; lean_object* v___y_3367_; lean_object* v___y_3368_; lean_object* v___y_3369_; lean_object* v___y_3370_; lean_object* v___y_3371_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v_instType_3380_; lean_object* v___x_3381_; 
v___x_3359_ = ((lean_object*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6_spec__13___redArg___closed__0));
v___x_3360_ = lean_box(0);
v___x_3361_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3361_, 0, v_u_3349_);
lean_ctor_set(v___x_3361_, 1, v___x_3360_);
lean_inc_ref_n(v___x_3361_, 2);
v___x_3362_ = l_Lean_mkConst(v___x_3359_, v___x_3361_);
lean_inc_ref_n(v_type_3350_, 2);
v_inst_x27_3363_ = l_Lean_mkAppB(v___x_3362_, v_type_3350_, v_semiringInst_3351_);
v___x_3378_ = ((lean_object*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6_spec__13___redArg___closed__1));
v___x_3379_ = l_Lean_mkConst(v___x_3378_, v___x_3361_);
v_instType_3380_ = l_Lean_Expr_app___override(v___x_3379_, v_type_3350_);
v___x_3381_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_instType_3380_, v___y_3353_, v___y_3354_, v___y_3355_, v___y_3356_, v___y_3357_);
if (lean_obj_tag(v___x_3381_) == 0)
{
lean_object* v_a_3382_; 
v_a_3382_ = lean_ctor_get(v___x_3381_, 0);
lean_inc(v_a_3382_);
lean_dec_ref_known(v___x_3381_, 1);
if (lean_obj_tag(v_a_3382_) == 0)
{
v_inst_3365_ = v_inst_x27_3363_;
v___y_3366_ = v___y_3352_;
v___y_3367_ = v___y_3353_;
v___y_3368_ = v___y_3354_;
v___y_3369_ = v___y_3355_;
v___y_3370_ = v___y_3356_;
v___y_3371_ = v___y_3357_;
goto v___jp_3364_;
}
else
{
lean_object* v_val_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; 
v_val_3383_ = lean_ctor_get(v_a_3382_, 0);
lean_inc_n(v_val_3383_, 2);
lean_dec_ref_known(v_a_3382_, 1);
v___x_3384_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__5));
v___x_3385_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst(v___x_3384_, v_val_3383_, v_inst_x27_3363_, v___y_3354_, v___y_3355_, v___y_3356_, v___y_3357_);
if (lean_obj_tag(v___x_3385_) == 0)
{
lean_dec_ref_known(v___x_3385_, 1);
v_inst_3365_ = v_val_3383_;
v___y_3366_ = v___y_3352_;
v___y_3367_ = v___y_3353_;
v___y_3368_ = v___y_3354_;
v___y_3369_ = v___y_3355_;
v___y_3370_ = v___y_3356_;
v___y_3371_ = v___y_3357_;
goto v___jp_3364_;
}
else
{
lean_object* v_a_3386_; lean_object* v___x_3388_; uint8_t v_isShared_3389_; uint8_t v_isSharedCheck_3393_; 
lean_dec(v_val_3383_);
lean_dec_ref_known(v___x_3361_, 2);
lean_dec_ref(v_type_3350_);
v_a_3386_ = lean_ctor_get(v___x_3385_, 0);
v_isSharedCheck_3393_ = !lean_is_exclusive(v___x_3385_);
if (v_isSharedCheck_3393_ == 0)
{
v___x_3388_ = v___x_3385_;
v_isShared_3389_ = v_isSharedCheck_3393_;
goto v_resetjp_3387_;
}
else
{
lean_inc(v_a_3386_);
lean_dec(v___x_3385_);
v___x_3388_ = lean_box(0);
v_isShared_3389_ = v_isSharedCheck_3393_;
goto v_resetjp_3387_;
}
v_resetjp_3387_:
{
lean_object* v___x_3391_; 
if (v_isShared_3389_ == 0)
{
v___x_3391_ = v___x_3388_;
goto v_reusejp_3390_;
}
else
{
lean_object* v_reuseFailAlloc_3392_; 
v_reuseFailAlloc_3392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3392_, 0, v_a_3386_);
v___x_3391_ = v_reuseFailAlloc_3392_;
goto v_reusejp_3390_;
}
v_reusejp_3390_:
{
return v___x_3391_;
}
}
}
}
}
else
{
lean_object* v_a_3394_; lean_object* v___x_3396_; uint8_t v_isShared_3397_; uint8_t v_isSharedCheck_3401_; 
lean_dec_ref(v_inst_x27_3363_);
lean_dec_ref_known(v___x_3361_, 2);
lean_dec_ref(v_type_3350_);
v_a_3394_ = lean_ctor_get(v___x_3381_, 0);
v_isSharedCheck_3401_ = !lean_is_exclusive(v___x_3381_);
if (v_isSharedCheck_3401_ == 0)
{
v___x_3396_ = v___x_3381_;
v_isShared_3397_ = v_isSharedCheck_3401_;
goto v_resetjp_3395_;
}
else
{
lean_inc(v_a_3394_);
lean_dec(v___x_3381_);
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
v___jp_3364_:
{
lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; 
v___x_3372_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__5));
v___x_3373_ = l_Lean_mkConst(v___x_3372_, v___x_3361_);
v___x_3374_ = l_Lean_mkAppB(v___x_3373_, v_type_3350_, v_inst_3365_);
v___x_3375_ = l_Lean_Meta_Sym_canon(v___x_3374_, v___y_3366_, v___y_3367_, v___y_3368_, v___y_3369_, v___y_3370_, v___y_3371_);
if (lean_obj_tag(v___x_3375_) == 0)
{
lean_object* v_a_3376_; lean_object* v___x_3377_; 
v_a_3376_ = lean_ctor_get(v___x_3375_, 0);
lean_inc(v_a_3376_);
lean_dec_ref_known(v___x_3375_, 1);
v___x_3377_ = l_Lean_Meta_Sym_shareCommon(v_a_3376_, v___y_3366_, v___y_3367_, v___y_3368_, v___y_3369_, v___y_3370_, v___y_3371_);
return v___x_3377_;
}
else
{
return v___x_3375_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6_spec__13___redArg___boxed(lean_object* v_u_3402_, lean_object* v_type_3403_, lean_object* v_semiringInst_3404_, lean_object* v___y_3405_, lean_object* v___y_3406_, lean_object* v___y_3407_, lean_object* v___y_3408_, lean_object* v___y_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_){
_start:
{
lean_object* v_res_3412_; 
v_res_3412_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6_spec__13___redArg(v_u_3402_, v_type_3403_, v_semiringInst_3404_, v___y_3405_, v___y_3406_, v___y_3407_, v___y_3408_, v___y_3409_, v___y_3410_);
lean_dec(v___y_3410_);
lean_dec_ref(v___y_3409_);
lean_dec(v___y_3408_);
lean_dec_ref(v___y_3407_);
lean_dec(v___y_3406_);
lean_dec_ref(v___y_3405_);
return v_res_3412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6(lean_object* v___y_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_, lean_object* v___y_3419_, lean_object* v___y_3420_, lean_object* v___y_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_){
_start:
{
lean_object* v___x_3425_; 
v___x_3425_ = l_Lean_Meta_Grind_Arith_CommRing_NonCommRingM_getRing(v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_, v___y_3417_, v___y_3418_, v___y_3419_, v___y_3420_, v___y_3421_, v___y_3422_, v___y_3423_);
if (lean_obj_tag(v___x_3425_) == 0)
{
lean_object* v_a_3426_; lean_object* v___x_3428_; uint8_t v_isShared_3429_; uint8_t v_isSharedCheck_3458_; 
v_a_3426_ = lean_ctor_get(v___x_3425_, 0);
v_isSharedCheck_3458_ = !lean_is_exclusive(v___x_3425_);
if (v_isSharedCheck_3458_ == 0)
{
v___x_3428_ = v___x_3425_;
v_isShared_3429_ = v_isSharedCheck_3458_;
goto v_resetjp_3427_;
}
else
{
lean_inc(v_a_3426_);
lean_dec(v___x_3425_);
v___x_3428_ = lean_box(0);
v_isShared_3429_ = v_isSharedCheck_3458_;
goto v_resetjp_3427_;
}
v_resetjp_3427_:
{
lean_object* v_natCastFn_x3f_3430_; 
v_natCastFn_x3f_3430_ = lean_ctor_get(v_a_3426_, 12);
if (lean_obj_tag(v_natCastFn_x3f_3430_) == 1)
{
lean_object* v_val_3431_; lean_object* v___x_3433_; 
lean_inc_ref(v_natCastFn_x3f_3430_);
lean_dec(v_a_3426_);
v_val_3431_ = lean_ctor_get(v_natCastFn_x3f_3430_, 0);
lean_inc(v_val_3431_);
lean_dec_ref_known(v_natCastFn_x3f_3430_, 1);
if (v_isShared_3429_ == 0)
{
lean_ctor_set(v___x_3428_, 0, v_val_3431_);
v___x_3433_ = v___x_3428_;
goto v_reusejp_3432_;
}
else
{
lean_object* v_reuseFailAlloc_3434_; 
v_reuseFailAlloc_3434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3434_, 0, v_val_3431_);
v___x_3433_ = v_reuseFailAlloc_3434_;
goto v_reusejp_3432_;
}
v_reusejp_3432_:
{
return v___x_3433_;
}
}
else
{
lean_object* v_type_3435_; lean_object* v_u_3436_; lean_object* v_semiringInst_3437_; lean_object* v___x_3438_; 
lean_del_object(v___x_3428_);
v_type_3435_ = lean_ctor_get(v_a_3426_, 1);
lean_inc_ref(v_type_3435_);
v_u_3436_ = lean_ctor_get(v_a_3426_, 2);
lean_inc(v_u_3436_);
v_semiringInst_3437_ = lean_ctor_get(v_a_3426_, 4);
lean_inc_ref(v_semiringInst_3437_);
lean_dec(v_a_3426_);
v___x_3438_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6_spec__13___redArg(v_u_3436_, v_type_3435_, v_semiringInst_3437_, v___y_3418_, v___y_3419_, v___y_3420_, v___y_3421_, v___y_3422_, v___y_3423_);
if (lean_obj_tag(v___x_3438_) == 0)
{
lean_object* v_a_3439_; lean_object* v___f_3440_; lean_object* v___x_3441_; 
v_a_3439_ = lean_ctor_get(v___x_3438_, 0);
lean_inc_n(v_a_3439_, 2);
lean_dec_ref_known(v___x_3438_, 1);
v___f_3440_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6___lam__0), 2, 1);
lean_closure_set(v___f_3440_, 0, v_a_3439_);
v___x_3441_ = l_Lean_Meta_Grind_Arith_CommRing_NonCommRingM_modifyRing___redArg(v___f_3440_, v___y_3413_, v___y_3419_);
if (lean_obj_tag(v___x_3441_) == 0)
{
lean_object* v___x_3443_; uint8_t v_isShared_3444_; uint8_t v_isSharedCheck_3448_; 
v_isSharedCheck_3448_ = !lean_is_exclusive(v___x_3441_);
if (v_isSharedCheck_3448_ == 0)
{
lean_object* v_unused_3449_; 
v_unused_3449_ = lean_ctor_get(v___x_3441_, 0);
lean_dec(v_unused_3449_);
v___x_3443_ = v___x_3441_;
v_isShared_3444_ = v_isSharedCheck_3448_;
goto v_resetjp_3442_;
}
else
{
lean_dec(v___x_3441_);
v___x_3443_ = lean_box(0);
v_isShared_3444_ = v_isSharedCheck_3448_;
goto v_resetjp_3442_;
}
v_resetjp_3442_:
{
lean_object* v___x_3446_; 
if (v_isShared_3444_ == 0)
{
lean_ctor_set(v___x_3443_, 0, v_a_3439_);
v___x_3446_ = v___x_3443_;
goto v_reusejp_3445_;
}
else
{
lean_object* v_reuseFailAlloc_3447_; 
v_reuseFailAlloc_3447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3447_, 0, v_a_3439_);
v___x_3446_ = v_reuseFailAlloc_3447_;
goto v_reusejp_3445_;
}
v_reusejp_3445_:
{
return v___x_3446_;
}
}
}
else
{
lean_object* v_a_3450_; lean_object* v___x_3452_; uint8_t v_isShared_3453_; uint8_t v_isSharedCheck_3457_; 
lean_dec(v_a_3439_);
v_a_3450_ = lean_ctor_get(v___x_3441_, 0);
v_isSharedCheck_3457_ = !lean_is_exclusive(v___x_3441_);
if (v_isSharedCheck_3457_ == 0)
{
v___x_3452_ = v___x_3441_;
v_isShared_3453_ = v_isSharedCheck_3457_;
goto v_resetjp_3451_;
}
else
{
lean_inc(v_a_3450_);
lean_dec(v___x_3441_);
v___x_3452_ = lean_box(0);
v_isShared_3453_ = v_isSharedCheck_3457_;
goto v_resetjp_3451_;
}
v_resetjp_3451_:
{
lean_object* v___x_3455_; 
if (v_isShared_3453_ == 0)
{
v___x_3455_ = v___x_3452_;
goto v_reusejp_3454_;
}
else
{
lean_object* v_reuseFailAlloc_3456_; 
v_reuseFailAlloc_3456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3456_, 0, v_a_3450_);
v___x_3455_ = v_reuseFailAlloc_3456_;
goto v_reusejp_3454_;
}
v_reusejp_3454_:
{
return v___x_3455_;
}
}
}
}
else
{
return v___x_3438_;
}
}
}
}
else
{
lean_object* v_a_3459_; lean_object* v___x_3461_; uint8_t v_isShared_3462_; uint8_t v_isSharedCheck_3466_; 
v_a_3459_ = lean_ctor_get(v___x_3425_, 0);
v_isSharedCheck_3466_ = !lean_is_exclusive(v___x_3425_);
if (v_isSharedCheck_3466_ == 0)
{
v___x_3461_ = v___x_3425_;
v_isShared_3462_ = v_isSharedCheck_3466_;
goto v_resetjp_3460_;
}
else
{
lean_inc(v_a_3459_);
lean_dec(v___x_3425_);
v___x_3461_ = lean_box(0);
v_isShared_3462_ = v_isSharedCheck_3466_;
goto v_resetjp_3460_;
}
v_resetjp_3460_:
{
lean_object* v___x_3464_; 
if (v_isShared_3462_ == 0)
{
v___x_3464_ = v___x_3461_;
goto v_reusejp_3463_;
}
else
{
lean_object* v_reuseFailAlloc_3465_; 
v_reuseFailAlloc_3465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3465_, 0, v_a_3459_);
v___x_3464_ = v_reuseFailAlloc_3465_;
goto v_reusejp_3463_;
}
v_reusejp_3463_:
{
return v___x_3464_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6___boxed(lean_object* v___y_3467_, lean_object* v___y_3468_, lean_object* v___y_3469_, lean_object* v___y_3470_, lean_object* v___y_3471_, lean_object* v___y_3472_, lean_object* v___y_3473_, lean_object* v___y_3474_, lean_object* v___y_3475_, lean_object* v___y_3476_, lean_object* v___y_3477_, lean_object* v___y_3478_){
_start:
{
lean_object* v_res_3479_; 
v_res_3479_ = l_Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6(v___y_3467_, v___y_3468_, v___y_3469_, v___y_3470_, v___y_3471_, v___y_3472_, v___y_3473_, v___y_3474_, v___y_3475_, v___y_3476_, v___y_3477_);
lean_dec(v___y_3477_);
lean_dec_ref(v___y_3476_);
lean_dec(v___y_3475_);
lean_dec_ref(v___y_3474_);
lean_dec(v___y_3473_);
lean_dec_ref(v___y_3472_);
lean_dec(v___y_3471_);
lean_dec_ref(v___y_3470_);
lean_dec(v___y_3469_);
lean_dec(v___y_3468_);
lean_dec(v___y_3467_);
return v_res_3479_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5_spec__10_spec__15___redArg(lean_object* v_x_3480_, lean_object* v_x_3481_, lean_object* v_x_3482_, lean_object* v_x_3483_){
_start:
{
lean_object* v_ks_3484_; lean_object* v_vs_3485_; lean_object* v___x_3487_; uint8_t v_isShared_3488_; uint8_t v_isSharedCheck_3511_; 
v_ks_3484_ = lean_ctor_get(v_x_3480_, 0);
v_vs_3485_ = lean_ctor_get(v_x_3480_, 1);
v_isSharedCheck_3511_ = !lean_is_exclusive(v_x_3480_);
if (v_isSharedCheck_3511_ == 0)
{
v___x_3487_ = v_x_3480_;
v_isShared_3488_ = v_isSharedCheck_3511_;
goto v_resetjp_3486_;
}
else
{
lean_inc(v_vs_3485_);
lean_inc(v_ks_3484_);
lean_dec(v_x_3480_);
v___x_3487_ = lean_box(0);
v_isShared_3488_ = v_isSharedCheck_3511_;
goto v_resetjp_3486_;
}
v_resetjp_3486_:
{
lean_object* v___x_3489_; uint8_t v___x_3490_; 
v___x_3489_ = lean_array_get_size(v_ks_3484_);
v___x_3490_ = lean_nat_dec_lt(v_x_3481_, v___x_3489_);
if (v___x_3490_ == 0)
{
lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3494_; 
lean_dec(v_x_3481_);
v___x_3491_ = lean_array_push(v_ks_3484_, v_x_3482_);
v___x_3492_ = lean_array_push(v_vs_3485_, v_x_3483_);
if (v_isShared_3488_ == 0)
{
lean_ctor_set(v___x_3487_, 1, v___x_3492_);
lean_ctor_set(v___x_3487_, 0, v___x_3491_);
v___x_3494_ = v___x_3487_;
goto v_reusejp_3493_;
}
else
{
lean_object* v_reuseFailAlloc_3495_; 
v_reuseFailAlloc_3495_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3495_, 0, v___x_3491_);
lean_ctor_set(v_reuseFailAlloc_3495_, 1, v___x_3492_);
v___x_3494_ = v_reuseFailAlloc_3495_;
goto v_reusejp_3493_;
}
v_reusejp_3493_:
{
return v___x_3494_;
}
}
else
{
lean_object* v_k_x27_3496_; size_t v___x_3497_; size_t v___x_3498_; uint8_t v___x_3499_; 
v_k_x27_3496_ = lean_array_fget_borrowed(v_ks_3484_, v_x_3481_);
v___x_3497_ = lean_ptr_addr(v_x_3482_);
v___x_3498_ = lean_ptr_addr(v_k_x27_3496_);
v___x_3499_ = lean_usize_dec_eq(v___x_3497_, v___x_3498_);
if (v___x_3499_ == 0)
{
lean_object* v___x_3501_; 
if (v_isShared_3488_ == 0)
{
v___x_3501_ = v___x_3487_;
goto v_reusejp_3500_;
}
else
{
lean_object* v_reuseFailAlloc_3505_; 
v_reuseFailAlloc_3505_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3505_, 0, v_ks_3484_);
lean_ctor_set(v_reuseFailAlloc_3505_, 1, v_vs_3485_);
v___x_3501_ = v_reuseFailAlloc_3505_;
goto v_reusejp_3500_;
}
v_reusejp_3500_:
{
lean_object* v___x_3502_; lean_object* v___x_3503_; 
v___x_3502_ = lean_unsigned_to_nat(1u);
v___x_3503_ = lean_nat_add(v_x_3481_, v___x_3502_);
lean_dec(v_x_3481_);
v_x_3480_ = v___x_3501_;
v_x_3481_ = v___x_3503_;
goto _start;
}
}
else
{
lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3509_; 
v___x_3506_ = lean_array_fset(v_ks_3484_, v_x_3481_, v_x_3482_);
v___x_3507_ = lean_array_fset(v_vs_3485_, v_x_3481_, v_x_3483_);
lean_dec(v_x_3481_);
if (v_isShared_3488_ == 0)
{
lean_ctor_set(v___x_3487_, 1, v___x_3507_);
lean_ctor_set(v___x_3487_, 0, v___x_3506_);
v___x_3509_ = v___x_3487_;
goto v_reusejp_3508_;
}
else
{
lean_object* v_reuseFailAlloc_3510_; 
v_reuseFailAlloc_3510_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3510_, 0, v___x_3506_);
lean_ctor_set(v_reuseFailAlloc_3510_, 1, v___x_3507_);
v___x_3509_ = v_reuseFailAlloc_3510_;
goto v_reusejp_3508_;
}
v_reusejp_3508_:
{
return v___x_3509_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5_spec__10___redArg(lean_object* v_n_3512_, lean_object* v_k_3513_, lean_object* v_v_3514_){
_start:
{
lean_object* v___x_3515_; lean_object* v___x_3516_; 
v___x_3515_ = lean_unsigned_to_nat(0u);
v___x_3516_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5_spec__10_spec__15___redArg(v_n_3512_, v___x_3515_, v_k_3513_, v_v_3514_);
return v___x_3516_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5___redArg(lean_object* v_x_3517_, size_t v_x_3518_, size_t v_x_3519_, lean_object* v_x_3520_, lean_object* v_x_3521_){
_start:
{
if (lean_obj_tag(v_x_3517_) == 0)
{
lean_object* v_es_3522_; size_t v___x_3523_; size_t v___x_3524_; lean_object* v_j_3525_; lean_object* v___x_3526_; uint8_t v___x_3527_; 
v_es_3522_ = lean_ctor_get(v_x_3517_, 0);
v___x_3523_ = ((size_t)31ULL);
v___x_3524_ = lean_usize_land(v_x_3518_, v___x_3523_);
v_j_3525_ = lean_usize_to_nat(v___x_3524_);
v___x_3526_ = lean_array_get_size(v_es_3522_);
v___x_3527_ = lean_nat_dec_lt(v_j_3525_, v___x_3526_);
if (v___x_3527_ == 0)
{
lean_dec(v_j_3525_);
lean_dec(v_x_3521_);
lean_dec_ref(v_x_3520_);
return v_x_3517_;
}
else
{
lean_object* v___x_3529_; uint8_t v_isShared_3530_; uint8_t v_isSharedCheck_3568_; 
lean_inc_ref(v_es_3522_);
v_isSharedCheck_3568_ = !lean_is_exclusive(v_x_3517_);
if (v_isSharedCheck_3568_ == 0)
{
lean_object* v_unused_3569_; 
v_unused_3569_ = lean_ctor_get(v_x_3517_, 0);
lean_dec(v_unused_3569_);
v___x_3529_ = v_x_3517_;
v_isShared_3530_ = v_isSharedCheck_3568_;
goto v_resetjp_3528_;
}
else
{
lean_dec(v_x_3517_);
v___x_3529_ = lean_box(0);
v_isShared_3530_ = v_isSharedCheck_3568_;
goto v_resetjp_3528_;
}
v_resetjp_3528_:
{
lean_object* v_v_3531_; lean_object* v___x_3532_; lean_object* v_xs_x27_3533_; lean_object* v___y_3535_; 
v_v_3531_ = lean_array_fget(v_es_3522_, v_j_3525_);
v___x_3532_ = lean_box(0);
v_xs_x27_3533_ = lean_array_fset(v_es_3522_, v_j_3525_, v___x_3532_);
switch(lean_obj_tag(v_v_3531_))
{
case 0:
{
lean_object* v_key_3540_; lean_object* v_val_3541_; lean_object* v___x_3543_; uint8_t v_isShared_3544_; uint8_t v_isSharedCheck_3553_; 
v_key_3540_ = lean_ctor_get(v_v_3531_, 0);
v_val_3541_ = lean_ctor_get(v_v_3531_, 1);
v_isSharedCheck_3553_ = !lean_is_exclusive(v_v_3531_);
if (v_isSharedCheck_3553_ == 0)
{
v___x_3543_ = v_v_3531_;
v_isShared_3544_ = v_isSharedCheck_3553_;
goto v_resetjp_3542_;
}
else
{
lean_inc(v_val_3541_);
lean_inc(v_key_3540_);
lean_dec(v_v_3531_);
v___x_3543_ = lean_box(0);
v_isShared_3544_ = v_isSharedCheck_3553_;
goto v_resetjp_3542_;
}
v_resetjp_3542_:
{
size_t v___x_3545_; size_t v___x_3546_; uint8_t v___x_3547_; 
v___x_3545_ = lean_ptr_addr(v_x_3520_);
v___x_3546_ = lean_ptr_addr(v_key_3540_);
v___x_3547_ = lean_usize_dec_eq(v___x_3545_, v___x_3546_);
if (v___x_3547_ == 0)
{
lean_object* v___x_3548_; lean_object* v___x_3549_; 
lean_del_object(v___x_3543_);
v___x_3548_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_3540_, v_val_3541_, v_x_3520_, v_x_3521_);
v___x_3549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3549_, 0, v___x_3548_);
v___y_3535_ = v___x_3549_;
goto v___jp_3534_;
}
else
{
lean_object* v___x_3551_; 
lean_dec(v_val_3541_);
lean_dec(v_key_3540_);
if (v_isShared_3544_ == 0)
{
lean_ctor_set(v___x_3543_, 1, v_x_3521_);
lean_ctor_set(v___x_3543_, 0, v_x_3520_);
v___x_3551_ = v___x_3543_;
goto v_reusejp_3550_;
}
else
{
lean_object* v_reuseFailAlloc_3552_; 
v_reuseFailAlloc_3552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3552_, 0, v_x_3520_);
lean_ctor_set(v_reuseFailAlloc_3552_, 1, v_x_3521_);
v___x_3551_ = v_reuseFailAlloc_3552_;
goto v_reusejp_3550_;
}
v_reusejp_3550_:
{
v___y_3535_ = v___x_3551_;
goto v___jp_3534_;
}
}
}
}
case 1:
{
lean_object* v_node_3554_; lean_object* v___x_3556_; uint8_t v_isShared_3557_; uint8_t v_isSharedCheck_3566_; 
v_node_3554_ = lean_ctor_get(v_v_3531_, 0);
v_isSharedCheck_3566_ = !lean_is_exclusive(v_v_3531_);
if (v_isSharedCheck_3566_ == 0)
{
v___x_3556_ = v_v_3531_;
v_isShared_3557_ = v_isSharedCheck_3566_;
goto v_resetjp_3555_;
}
else
{
lean_inc(v_node_3554_);
lean_dec(v_v_3531_);
v___x_3556_ = lean_box(0);
v_isShared_3557_ = v_isSharedCheck_3566_;
goto v_resetjp_3555_;
}
v_resetjp_3555_:
{
size_t v___x_3558_; size_t v___x_3559_; size_t v___x_3560_; size_t v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3564_; 
v___x_3558_ = ((size_t)5ULL);
v___x_3559_ = lean_usize_shift_right(v_x_3518_, v___x_3558_);
v___x_3560_ = ((size_t)1ULL);
v___x_3561_ = lean_usize_add(v_x_3519_, v___x_3560_);
v___x_3562_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5___redArg(v_node_3554_, v___x_3559_, v___x_3561_, v_x_3520_, v_x_3521_);
if (v_isShared_3557_ == 0)
{
lean_ctor_set(v___x_3556_, 0, v___x_3562_);
v___x_3564_ = v___x_3556_;
goto v_reusejp_3563_;
}
else
{
lean_object* v_reuseFailAlloc_3565_; 
v_reuseFailAlloc_3565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3565_, 0, v___x_3562_);
v___x_3564_ = v_reuseFailAlloc_3565_;
goto v_reusejp_3563_;
}
v_reusejp_3563_:
{
v___y_3535_ = v___x_3564_;
goto v___jp_3534_;
}
}
}
default: 
{
lean_object* v___x_3567_; 
v___x_3567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3567_, 0, v_x_3520_);
lean_ctor_set(v___x_3567_, 1, v_x_3521_);
v___y_3535_ = v___x_3567_;
goto v___jp_3534_;
}
}
v___jp_3534_:
{
lean_object* v___x_3536_; lean_object* v___x_3538_; 
v___x_3536_ = lean_array_fset(v_xs_x27_3533_, v_j_3525_, v___y_3535_);
lean_dec(v_j_3525_);
if (v_isShared_3530_ == 0)
{
lean_ctor_set(v___x_3529_, 0, v___x_3536_);
v___x_3538_ = v___x_3529_;
goto v_reusejp_3537_;
}
else
{
lean_object* v_reuseFailAlloc_3539_; 
v_reuseFailAlloc_3539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3539_, 0, v___x_3536_);
v___x_3538_ = v_reuseFailAlloc_3539_;
goto v_reusejp_3537_;
}
v_reusejp_3537_:
{
return v___x_3538_;
}
}
}
}
}
else
{
lean_object* v_ks_3570_; lean_object* v_vs_3571_; lean_object* v___x_3573_; uint8_t v_isShared_3574_; uint8_t v_isSharedCheck_3589_; 
v_ks_3570_ = lean_ctor_get(v_x_3517_, 0);
v_vs_3571_ = lean_ctor_get(v_x_3517_, 1);
v_isSharedCheck_3589_ = !lean_is_exclusive(v_x_3517_);
if (v_isSharedCheck_3589_ == 0)
{
v___x_3573_ = v_x_3517_;
v_isShared_3574_ = v_isSharedCheck_3589_;
goto v_resetjp_3572_;
}
else
{
lean_inc(v_vs_3571_);
lean_inc(v_ks_3570_);
lean_dec(v_x_3517_);
v___x_3573_ = lean_box(0);
v_isShared_3574_ = v_isSharedCheck_3589_;
goto v_resetjp_3572_;
}
v_resetjp_3572_:
{
lean_object* v___x_3576_; 
if (v_isShared_3574_ == 0)
{
v___x_3576_ = v___x_3573_;
goto v_reusejp_3575_;
}
else
{
lean_object* v_reuseFailAlloc_3588_; 
v_reuseFailAlloc_3588_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3588_, 0, v_ks_3570_);
lean_ctor_set(v_reuseFailAlloc_3588_, 1, v_vs_3571_);
v___x_3576_ = v_reuseFailAlloc_3588_;
goto v_reusejp_3575_;
}
v_reusejp_3575_:
{
lean_object* v_newNode_3577_; size_t v___x_3578_; uint8_t v___x_3579_; 
v_newNode_3577_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5_spec__10___redArg(v___x_3576_, v_x_3520_, v_x_3521_);
v___x_3578_ = ((size_t)7ULL);
v___x_3579_ = lean_usize_dec_le(v___x_3578_, v_x_3519_);
if (v___x_3579_ == 0)
{
lean_object* v___x_3580_; lean_object* v___x_3581_; uint8_t v___x_3582_; 
v___x_3580_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_3577_);
v___x_3581_ = lean_unsigned_to_nat(4u);
v___x_3582_ = lean_nat_dec_lt(v___x_3580_, v___x_3581_);
lean_dec(v___x_3580_);
if (v___x_3582_ == 0)
{
lean_object* v_ks_3583_; lean_object* v_vs_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; 
v_ks_3583_ = lean_ctor_get(v_newNode_3577_, 0);
lean_inc_ref(v_ks_3583_);
v_vs_3584_ = lean_ctor_get(v_newNode_3577_, 1);
lean_inc_ref(v_vs_3584_);
lean_dec_ref(v_newNode_3577_);
v___x_3585_ = lean_unsigned_to_nat(0u);
v___x_3586_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___closed__0);
v___x_3587_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5_spec__11___redArg(v_x_3519_, v_ks_3583_, v_vs_3584_, v___x_3585_, v___x_3586_);
lean_dec_ref(v_vs_3584_);
lean_dec_ref(v_ks_3583_);
return v___x_3587_;
}
else
{
return v_newNode_3577_;
}
}
else
{
return v_newNode_3577_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5_spec__11___redArg(size_t v_depth_3590_, lean_object* v_keys_3591_, lean_object* v_vals_3592_, lean_object* v_i_3593_, lean_object* v_entries_3594_){
_start:
{
lean_object* v___x_3595_; uint8_t v___x_3596_; 
v___x_3595_ = lean_array_get_size(v_keys_3591_);
v___x_3596_ = lean_nat_dec_lt(v_i_3593_, v___x_3595_);
if (v___x_3596_ == 0)
{
lean_dec(v_i_3593_);
return v_entries_3594_;
}
else
{
lean_object* v_k_3597_; lean_object* v_v_3598_; size_t v___x_3599_; size_t v___x_3600_; size_t v___x_3601_; uint64_t v___x_3602_; size_t v_h_3603_; size_t v___x_3604_; lean_object* v___x_3605_; size_t v___x_3606_; size_t v___x_3607_; size_t v___x_3608_; size_t v_h_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; 
v_k_3597_ = lean_array_fget_borrowed(v_keys_3591_, v_i_3593_);
v_v_3598_ = lean_array_fget_borrowed(v_vals_3592_, v_i_3593_);
v___x_3599_ = lean_ptr_addr(v_k_3597_);
v___x_3600_ = ((size_t)3ULL);
v___x_3601_ = lean_usize_shift_right(v___x_3599_, v___x_3600_);
v___x_3602_ = lean_usize_to_uint64(v___x_3601_);
v_h_3603_ = lean_uint64_to_usize(v___x_3602_);
v___x_3604_ = ((size_t)5ULL);
v___x_3605_ = lean_unsigned_to_nat(1u);
v___x_3606_ = ((size_t)1ULL);
v___x_3607_ = lean_usize_sub(v_depth_3590_, v___x_3606_);
v___x_3608_ = lean_usize_mul(v___x_3604_, v___x_3607_);
v_h_3609_ = lean_usize_shift_right(v_h_3603_, v___x_3608_);
v___x_3610_ = lean_nat_add(v_i_3593_, v___x_3605_);
lean_dec(v_i_3593_);
lean_inc(v_v_3598_);
lean_inc(v_k_3597_);
v___x_3611_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5___redArg(v_entries_3594_, v_h_3609_, v_depth_3590_, v_k_3597_, v_v_3598_);
v_i_3593_ = v___x_3610_;
v_entries_3594_ = v___x_3611_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5_spec__11___redArg___boxed(lean_object* v_depth_3613_, lean_object* v_keys_3614_, lean_object* v_vals_3615_, lean_object* v_i_3616_, lean_object* v_entries_3617_){
_start:
{
size_t v_depth_boxed_3618_; lean_object* v_res_3619_; 
v_depth_boxed_3618_ = lean_unbox_usize(v_depth_3613_);
lean_dec(v_depth_3613_);
v_res_3619_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5_spec__11___redArg(v_depth_boxed_3618_, v_keys_3614_, v_vals_3615_, v_i_3616_, v_entries_3617_);
lean_dec_ref(v_vals_3615_);
lean_dec_ref(v_keys_3614_);
return v_res_3619_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_x_3620_, lean_object* v_x_3621_, lean_object* v_x_3622_, lean_object* v_x_3623_, lean_object* v_x_3624_){
_start:
{
size_t v_x_129915__boxed_3625_; size_t v_x_129916__boxed_3626_; lean_object* v_res_3627_; 
v_x_129915__boxed_3625_ = lean_unbox_usize(v_x_3621_);
lean_dec(v_x_3621_);
v_x_129916__boxed_3626_ = lean_unbox_usize(v_x_3622_);
lean_dec(v_x_3622_);
v_res_3627_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5___redArg(v_x_3620_, v_x_129915__boxed_3625_, v_x_129916__boxed_3626_, v_x_3623_, v_x_3624_);
return v_res_3627_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2___redArg(lean_object* v_x_3628_, lean_object* v_x_3629_, lean_object* v_x_3630_){
_start:
{
size_t v___x_3631_; size_t v___x_3632_; size_t v___x_3633_; uint64_t v___x_3634_; size_t v___x_3635_; size_t v___x_3636_; lean_object* v___x_3637_; 
v___x_3631_ = lean_ptr_addr(v_x_3629_);
v___x_3632_ = ((size_t)3ULL);
v___x_3633_ = lean_usize_shift_right(v___x_3631_, v___x_3632_);
v___x_3634_ = lean_usize_to_uint64(v___x_3633_);
v___x_3635_ = lean_uint64_to_usize(v___x_3634_);
v___x_3636_ = ((size_t)1ULL);
v___x_3637_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5___redArg(v_x_3628_, v___x_3635_, v___x_3636_, v_x_3629_, v_x_3630_);
return v___x_3637_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1___lam__1(lean_object* v_e_3638_, lean_object* v_s_3639_){
_start:
{
lean_object* v_vars_3640_; lean_object* v_varMap_3641_; lean_object* v_denote_3642_; lean_object* v_natCastSet_3643_; lean_object* v_natCasts_3644_; uint8_t v_hasIntCast_3645_; lean_object* v___x_3647_; uint8_t v_isShared_3648_; uint8_t v_isSharedCheck_3654_; 
v_vars_3640_ = lean_ctor_get(v_s_3639_, 0);
v_varMap_3641_ = lean_ctor_get(v_s_3639_, 1);
v_denote_3642_ = lean_ctor_get(v_s_3639_, 2);
v_natCastSet_3643_ = lean_ctor_get(v_s_3639_, 3);
v_natCasts_3644_ = lean_ctor_get(v_s_3639_, 4);
v_hasIntCast_3645_ = lean_ctor_get_uint8(v_s_3639_, sizeof(void*)*5);
v_isSharedCheck_3654_ = !lean_is_exclusive(v_s_3639_);
if (v_isSharedCheck_3654_ == 0)
{
v___x_3647_ = v_s_3639_;
v_isShared_3648_ = v_isSharedCheck_3654_;
goto v_resetjp_3646_;
}
else
{
lean_inc(v_natCasts_3644_);
lean_inc(v_natCastSet_3643_);
lean_inc(v_denote_3642_);
lean_inc(v_varMap_3641_);
lean_inc(v_vars_3640_);
lean_dec(v_s_3639_);
v___x_3647_ = lean_box(0);
v_isShared_3648_ = v_isSharedCheck_3654_;
goto v_resetjp_3646_;
}
v_resetjp_3646_:
{
lean_object* v___x_3649_; lean_object* v___x_3650_; lean_object* v___x_3652_; 
v___x_3649_ = lean_box(0);
v___x_3650_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2___redArg(v_natCastSet_3643_, v_e_3638_, v___x_3649_);
if (v_isShared_3648_ == 0)
{
lean_ctor_set(v___x_3647_, 3, v___x_3650_);
v___x_3652_ = v___x_3647_;
goto v_reusejp_3651_;
}
else
{
lean_object* v_reuseFailAlloc_3653_; 
v_reuseFailAlloc_3653_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_3653_, 0, v_vars_3640_);
lean_ctor_set(v_reuseFailAlloc_3653_, 1, v_varMap_3641_);
lean_ctor_set(v_reuseFailAlloc_3653_, 2, v_denote_3642_);
lean_ctor_set(v_reuseFailAlloc_3653_, 3, v___x_3650_);
lean_ctor_set(v_reuseFailAlloc_3653_, 4, v_natCasts_3644_);
lean_ctor_set_uint8(v_reuseFailAlloc_3653_, sizeof(void*)*5, v_hasIntCast_3645_);
v___x_3652_ = v_reuseFailAlloc_3653_;
goto v_reusejp_3651_;
}
v_reusejp_3651_:
{
return v___x_3652_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1(lean_object* v_e_3655_, lean_object* v___y_3656_, lean_object* v___y_3657_, lean_object* v___y_3658_, lean_object* v___y_3659_, lean_object* v___y_3660_, lean_object* v___y_3661_, lean_object* v___y_3662_, lean_object* v___y_3663_, lean_object* v___y_3664_, lean_object* v___y_3665_, lean_object* v___y_3666_){
_start:
{
lean_object* v___f_3674_; lean_object* v___f_3675_; lean_object* v___x_3676_; 
lean_inc_ref_n(v_e_3655_, 3);
v___f_3674_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3674_, 0, v_e_3655_);
v___f_3675_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1___lam__1), 2, 1);
lean_closure_set(v___f_3675_, 0, v_e_3655_);
v___x_3676_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_3655_, v___y_3664_);
if (lean_obj_tag(v___x_3676_) == 0)
{
lean_object* v_a_3677_; lean_object* v___x_3679_; uint8_t v_isShared_3680_; uint8_t v_isSharedCheck_3822_; 
v_a_3677_ = lean_ctor_get(v___x_3676_, 0);
v_isSharedCheck_3822_ = !lean_is_exclusive(v___x_3676_);
if (v_isSharedCheck_3822_ == 0)
{
v___x_3679_ = v___x_3676_;
v_isShared_3680_ = v_isSharedCheck_3822_;
goto v_resetjp_3678_;
}
else
{
lean_inc(v_a_3677_);
lean_dec(v___x_3676_);
v___x_3679_ = lean_box(0);
v_isShared_3680_ = v_isSharedCheck_3822_;
goto v_resetjp_3678_;
}
v_resetjp_3678_:
{
lean_object* v___x_3686_; uint8_t v___x_3687_; 
v___x_3686_ = l_Lean_Expr_cleanupAnnotations(v_a_3677_);
lean_dec(v_a_3677_);
v___x_3687_ = l_Lean_Expr_isApp(v___x_3686_);
if (v___x_3687_ == 0)
{
lean_dec_ref(v___x_3686_);
lean_dec_ref(v___f_3675_);
lean_dec_ref(v___f_3674_);
lean_dec_ref(v_e_3655_);
goto v___jp_3681_;
}
else
{
lean_object* v___x_3688_; uint8_t v___x_3689_; 
v___x_3688_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3686_);
v___x_3689_ = l_Lean_Expr_isApp(v___x_3688_);
if (v___x_3689_ == 0)
{
lean_dec_ref(v___x_3688_);
lean_dec_ref(v___x_3686_);
lean_dec_ref(v___f_3675_);
lean_dec_ref(v___f_3674_);
lean_dec_ref(v_e_3655_);
goto v___jp_3681_;
}
else
{
lean_object* v___x_3690_; uint8_t v___x_3691_; 
v___x_3690_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3688_);
v___x_3691_ = l_Lean_Expr_isApp(v___x_3690_);
if (v___x_3691_ == 0)
{
lean_dec_ref(v___x_3690_);
lean_dec_ref(v___x_3688_);
lean_dec_ref(v___x_3686_);
lean_dec_ref(v___f_3675_);
lean_dec_ref(v___f_3674_);
lean_dec_ref(v_e_3655_);
goto v___jp_3681_;
}
else
{
lean_object* v_arg_3692_; lean_object* v_arg_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; uint8_t v___x_3696_; 
v_arg_3692_ = lean_ctor_get(v___x_3686_, 1);
lean_inc_ref(v_arg_3692_);
lean_dec_ref(v___x_3686_);
v_arg_3693_ = lean_ctor_get(v___x_3688_, 1);
lean_inc_ref(v_arg_3693_);
lean_dec_ref(v___x_3688_);
v___x_3694_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3690_);
lean_dec_ref(v___x_3690_);
v___x_3695_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__2));
v___x_3696_ = l_Lean_Expr_isConstOf(v___x_3694_, v___x_3695_);
if (v___x_3696_ == 0)
{
lean_object* v___x_3697_; uint8_t v___x_3698_; 
v___x_3697_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__5));
v___x_3698_ = l_Lean_Expr_isConstOf(v___x_3694_, v___x_3697_);
lean_dec_ref(v___x_3694_);
if (v___x_3698_ == 0)
{
lean_dec_ref(v_arg_3693_);
lean_dec_ref(v_arg_3692_);
lean_dec_ref(v___f_3675_);
lean_dec_ref(v___f_3674_);
lean_dec_ref(v_e_3655_);
goto v___jp_3681_;
}
else
{
uint8_t v___x_3699_; 
lean_del_object(v___x_3679_);
v___x_3699_ = l_Lean_Meta_Sym_isNatValue(v_arg_3692_);
lean_dec_ref(v_arg_3692_);
if (v___x_3699_ == 0)
{
lean_object* v___x_3700_; 
v___x_3700_ = l_Lean_Meta_Grind_Arith_CommRing_NonCommRingM_getRingState___redArg(v___y_3656_, v___y_3657_, v___y_3665_);
if (lean_obj_tag(v___x_3700_) == 0)
{
lean_object* v_a_3701_; lean_object* v_natCastSet_3702_; uint8_t v___x_3703_; 
v_a_3701_ = lean_ctor_get(v___x_3700_, 0);
lean_inc(v_a_3701_);
lean_dec_ref_known(v___x_3700_, 1);
v_natCastSet_3702_ = lean_ctor_get(v_a_3701_, 3);
lean_inc_ref(v_natCastSet_3702_);
lean_dec(v_a_3701_);
v___x_3703_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0___redArg(v_natCastSet_3702_, v_e_3655_);
lean_dec_ref(v_natCastSet_3702_);
if (v___x_3703_ == 0)
{
lean_object* v___x_3704_; 
v___x_3704_ = l_Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6(v___y_3656_, v___y_3657_, v___y_3658_, v___y_3659_, v___y_3660_, v___y_3661_, v___y_3662_, v___y_3663_, v___y_3664_, v___y_3665_, v___y_3666_);
if (lean_obj_tag(v___x_3704_) == 0)
{
lean_object* v_a_3705_; lean_object* v___x_3706_; size_t v___x_3707_; size_t v___x_3708_; uint8_t v___x_3709_; 
v_a_3705_ = lean_ctor_get(v___x_3704_, 0);
lean_inc(v_a_3705_);
lean_dec_ref_known(v___x_3704_, 1);
v___x_3706_ = l_Lean_Expr_appArg_x21(v_a_3705_);
lean_dec(v_a_3705_);
v___x_3707_ = lean_ptr_addr(v___x_3706_);
lean_dec_ref(v___x_3706_);
v___x_3708_ = lean_ptr_addr(v_arg_3693_);
lean_dec_ref(v_arg_3693_);
v___x_3709_ = lean_usize_dec_eq(v___x_3707_, v___x_3708_);
if (v___x_3709_ == 0)
{
lean_dec_ref(v___f_3675_);
lean_dec_ref(v___f_3674_);
lean_dec_ref(v_e_3655_);
goto v___jp_3671_;
}
else
{
lean_object* v___x_3710_; 
v___x_3710_ = l_Lean_Meta_Grind_Arith_CommRing_NonCommRingM_modifyRingState___redArg(v___f_3675_, v___y_3656_, v___y_3657_);
if (lean_obj_tag(v___x_3710_) == 0)
{
lean_object* v___x_3711_; 
lean_dec_ref_known(v___x_3710_, 1);
v___x_3711_ = l_Lean_Meta_Grind_Arith_CommRing_NonCommRingM_getRingState___redArg(v___y_3656_, v___y_3657_, v___y_3665_);
if (lean_obj_tag(v___x_3711_) == 0)
{
lean_object* v_a_3712_; uint8_t v_hasIntCast_3713_; 
v_a_3712_ = lean_ctor_get(v___x_3711_, 0);
lean_inc(v_a_3712_);
lean_dec_ref_known(v___x_3711_, 1);
v_hasIntCast_3713_ = lean_ctor_get_uint8(v_a_3712_, sizeof(void*)*5);
lean_dec(v_a_3712_);
if (v_hasIntCast_3713_ == 0)
{
lean_object* v___x_3714_; 
lean_dec_ref(v_e_3655_);
v___x_3714_ = l_Lean_Meta_Grind_Arith_CommRing_NonCommRingM_modifyRingState___redArg(v___f_3674_, v___y_3656_, v___y_3657_);
return v___x_3714_;
}
else
{
lean_object* v___x_3715_; 
lean_dec_ref(v___f_3674_);
v___x_3715_ = l_Lean_Meta_Grind_Arith_CommRing_NonCommRingM_getRing(v___y_3656_, v___y_3657_, v___y_3658_, v___y_3659_, v___y_3660_, v___y_3661_, v___y_3662_, v___y_3663_, v___y_3664_, v___y_3665_, v___y_3666_);
if (lean_obj_tag(v___x_3715_) == 0)
{
lean_object* v_a_3716_; lean_object* v___x_3717_; 
v_a_3716_ = lean_ctor_get(v___x_3715_, 0);
lean_inc(v_a_3716_);
lean_dec_ref_known(v___x_3715_, 1);
v___x_3717_ = l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7(v___y_3656_, v___y_3657_, v___y_3658_, v___y_3659_, v___y_3660_, v___y_3661_, v___y_3662_, v___y_3663_, v___y_3664_, v___y_3665_, v___y_3666_);
if (lean_obj_tag(v___x_3717_) == 0)
{
lean_object* v_a_3718_; lean_object* v___x_3719_; 
v_a_3718_ = lean_ctor_get(v___x_3717_, 0);
lean_inc(v_a_3718_);
lean_dec_ref_known(v___x_3717_, 1);
v___x_3719_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg(v_a_3716_, v_a_3718_, v_e_3655_, v___y_3657_, v___y_3661_, v___y_3662_, v___y_3663_, v___y_3664_, v___y_3665_, v___y_3666_);
return v___x_3719_;
}
else
{
lean_object* v_a_3720_; lean_object* v___x_3722_; uint8_t v_isShared_3723_; uint8_t v_isSharedCheck_3727_; 
lean_dec(v_a_3716_);
lean_dec_ref(v_e_3655_);
v_a_3720_ = lean_ctor_get(v___x_3717_, 0);
v_isSharedCheck_3727_ = !lean_is_exclusive(v___x_3717_);
if (v_isSharedCheck_3727_ == 0)
{
v___x_3722_ = v___x_3717_;
v_isShared_3723_ = v_isSharedCheck_3727_;
goto v_resetjp_3721_;
}
else
{
lean_inc(v_a_3720_);
lean_dec(v___x_3717_);
v___x_3722_ = lean_box(0);
v_isShared_3723_ = v_isSharedCheck_3727_;
goto v_resetjp_3721_;
}
v_resetjp_3721_:
{
lean_object* v___x_3725_; 
if (v_isShared_3723_ == 0)
{
v___x_3725_ = v___x_3722_;
goto v_reusejp_3724_;
}
else
{
lean_object* v_reuseFailAlloc_3726_; 
v_reuseFailAlloc_3726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3726_, 0, v_a_3720_);
v___x_3725_ = v_reuseFailAlloc_3726_;
goto v_reusejp_3724_;
}
v_reusejp_3724_:
{
return v___x_3725_;
}
}
}
}
else
{
lean_object* v_a_3728_; lean_object* v___x_3730_; uint8_t v_isShared_3731_; uint8_t v_isSharedCheck_3735_; 
lean_dec_ref(v_e_3655_);
v_a_3728_ = lean_ctor_get(v___x_3715_, 0);
v_isSharedCheck_3735_ = !lean_is_exclusive(v___x_3715_);
if (v_isSharedCheck_3735_ == 0)
{
v___x_3730_ = v___x_3715_;
v_isShared_3731_ = v_isSharedCheck_3735_;
goto v_resetjp_3729_;
}
else
{
lean_inc(v_a_3728_);
lean_dec(v___x_3715_);
v___x_3730_ = lean_box(0);
v_isShared_3731_ = v_isSharedCheck_3735_;
goto v_resetjp_3729_;
}
v_resetjp_3729_:
{
lean_object* v___x_3733_; 
if (v_isShared_3731_ == 0)
{
v___x_3733_ = v___x_3730_;
goto v_reusejp_3732_;
}
else
{
lean_object* v_reuseFailAlloc_3734_; 
v_reuseFailAlloc_3734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3734_, 0, v_a_3728_);
v___x_3733_ = v_reuseFailAlloc_3734_;
goto v_reusejp_3732_;
}
v_reusejp_3732_:
{
return v___x_3733_;
}
}
}
}
}
else
{
lean_object* v_a_3736_; lean_object* v___x_3738_; uint8_t v_isShared_3739_; uint8_t v_isSharedCheck_3743_; 
lean_dec_ref(v___f_3674_);
lean_dec_ref(v_e_3655_);
v_a_3736_ = lean_ctor_get(v___x_3711_, 0);
v_isSharedCheck_3743_ = !lean_is_exclusive(v___x_3711_);
if (v_isSharedCheck_3743_ == 0)
{
v___x_3738_ = v___x_3711_;
v_isShared_3739_ = v_isSharedCheck_3743_;
goto v_resetjp_3737_;
}
else
{
lean_inc(v_a_3736_);
lean_dec(v___x_3711_);
v___x_3738_ = lean_box(0);
v_isShared_3739_ = v_isSharedCheck_3743_;
goto v_resetjp_3737_;
}
v_resetjp_3737_:
{
lean_object* v___x_3741_; 
if (v_isShared_3739_ == 0)
{
v___x_3741_ = v___x_3738_;
goto v_reusejp_3740_;
}
else
{
lean_object* v_reuseFailAlloc_3742_; 
v_reuseFailAlloc_3742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3742_, 0, v_a_3736_);
v___x_3741_ = v_reuseFailAlloc_3742_;
goto v_reusejp_3740_;
}
v_reusejp_3740_:
{
return v___x_3741_;
}
}
}
}
else
{
lean_dec_ref(v___f_3674_);
lean_dec_ref(v_e_3655_);
return v___x_3710_;
}
}
}
else
{
lean_object* v_a_3744_; lean_object* v___x_3746_; uint8_t v_isShared_3747_; uint8_t v_isSharedCheck_3751_; 
lean_dec_ref(v_arg_3693_);
lean_dec_ref(v___f_3675_);
lean_dec_ref(v___f_3674_);
lean_dec_ref(v_e_3655_);
v_a_3744_ = lean_ctor_get(v___x_3704_, 0);
v_isSharedCheck_3751_ = !lean_is_exclusive(v___x_3704_);
if (v_isSharedCheck_3751_ == 0)
{
v___x_3746_ = v___x_3704_;
v_isShared_3747_ = v_isSharedCheck_3751_;
goto v_resetjp_3745_;
}
else
{
lean_inc(v_a_3744_);
lean_dec(v___x_3704_);
v___x_3746_ = lean_box(0);
v_isShared_3747_ = v_isSharedCheck_3751_;
goto v_resetjp_3745_;
}
v_resetjp_3745_:
{
lean_object* v___x_3749_; 
if (v_isShared_3747_ == 0)
{
v___x_3749_ = v___x_3746_;
goto v_reusejp_3748_;
}
else
{
lean_object* v_reuseFailAlloc_3750_; 
v_reuseFailAlloc_3750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3750_, 0, v_a_3744_);
v___x_3749_ = v_reuseFailAlloc_3750_;
goto v_reusejp_3748_;
}
v_reusejp_3748_:
{
return v___x_3749_;
}
}
}
}
else
{
lean_dec_ref(v_arg_3693_);
lean_dec_ref(v___f_3675_);
lean_dec_ref(v___f_3674_);
lean_dec_ref(v_e_3655_);
goto v___jp_3671_;
}
}
else
{
lean_object* v_a_3752_; lean_object* v___x_3754_; uint8_t v_isShared_3755_; uint8_t v_isSharedCheck_3759_; 
lean_dec_ref(v_arg_3693_);
lean_dec_ref(v___f_3675_);
lean_dec_ref(v___f_3674_);
lean_dec_ref(v_e_3655_);
v_a_3752_ = lean_ctor_get(v___x_3700_, 0);
v_isSharedCheck_3759_ = !lean_is_exclusive(v___x_3700_);
if (v_isSharedCheck_3759_ == 0)
{
v___x_3754_ = v___x_3700_;
v_isShared_3755_ = v_isSharedCheck_3759_;
goto v_resetjp_3753_;
}
else
{
lean_inc(v_a_3752_);
lean_dec(v___x_3700_);
v___x_3754_ = lean_box(0);
v_isShared_3755_ = v_isSharedCheck_3759_;
goto v_resetjp_3753_;
}
v_resetjp_3753_:
{
lean_object* v___x_3757_; 
if (v_isShared_3755_ == 0)
{
v___x_3757_ = v___x_3754_;
goto v_reusejp_3756_;
}
else
{
lean_object* v_reuseFailAlloc_3758_; 
v_reuseFailAlloc_3758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3758_, 0, v_a_3752_);
v___x_3757_ = v_reuseFailAlloc_3758_;
goto v_reusejp_3756_;
}
v_reusejp_3756_:
{
return v___x_3757_;
}
}
}
}
else
{
lean_dec_ref(v_arg_3693_);
lean_dec_ref(v___f_3675_);
lean_dec_ref(v___f_3674_);
lean_dec_ref(v_e_3655_);
goto v___jp_3671_;
}
}
}
else
{
lean_object* v___x_3760_; 
lean_dec_ref(v___x_3694_);
lean_del_object(v___x_3679_);
lean_dec_ref(v___f_3675_);
lean_dec_ref(v___f_3674_);
lean_dec_ref(v_e_3655_);
v___x_3760_ = l_Lean_Meta_Grind_Arith_CommRing_NonCommRingM_getRingState___redArg(v___y_3656_, v___y_3657_, v___y_3665_);
if (lean_obj_tag(v___x_3760_) == 0)
{
lean_object* v_a_3761_; uint8_t v_hasIntCast_3762_; 
v_a_3761_ = lean_ctor_get(v___x_3760_, 0);
lean_inc(v_a_3761_);
lean_dec_ref_known(v___x_3760_, 1);
v_hasIntCast_3762_ = lean_ctor_get_uint8(v_a_3761_, sizeof(void*)*5);
lean_dec(v_a_3761_);
if (v_hasIntCast_3762_ == 0)
{
lean_object* v___x_3763_; 
v___x_3763_ = l_Lean_Meta_Sym_getIntValue_x3f(v_arg_3692_);
lean_dec_ref(v_arg_3692_);
if (lean_obj_tag(v___x_3763_) == 0)
{
lean_object* v___x_3764_; 
v___x_3764_ = l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7(v___y_3656_, v___y_3657_, v___y_3658_, v___y_3659_, v___y_3660_, v___y_3661_, v___y_3662_, v___y_3663_, v___y_3664_, v___y_3665_, v___y_3666_);
if (lean_obj_tag(v___x_3764_) == 0)
{
lean_object* v_a_3765_; lean_object* v___x_3766_; size_t v___x_3767_; size_t v___x_3768_; uint8_t v___x_3769_; 
v_a_3765_ = lean_ctor_get(v___x_3764_, 0);
lean_inc(v_a_3765_);
lean_dec_ref_known(v___x_3764_, 1);
v___x_3766_ = l_Lean_Expr_appArg_x21(v_a_3765_);
lean_dec(v_a_3765_);
v___x_3767_ = lean_ptr_addr(v___x_3766_);
lean_dec_ref(v___x_3766_);
v___x_3768_ = lean_ptr_addr(v_arg_3693_);
lean_dec_ref(v_arg_3693_);
v___x_3769_ = lean_usize_dec_eq(v___x_3767_, v___x_3768_);
if (v___x_3769_ == 0)
{
goto v___jp_3668_;
}
else
{
lean_object* v___x_3770_; lean_object* v___f_3771_; lean_object* v___x_3772_; 
v___x_3770_ = lean_box(v___x_3769_);
v___f_3771_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__9___boxed), 2, 1);
lean_closure_set(v___f_3771_, 0, v___x_3770_);
v___x_3772_ = l_Lean_Meta_Grind_Arith_CommRing_NonCommRingM_getRingState___redArg(v___y_3656_, v___y_3657_, v___y_3665_);
if (lean_obj_tag(v___x_3772_) == 0)
{
lean_object* v_a_3773_; lean_object* v_natCasts_3774_; lean_object* v___x_3775_; 
v_a_3773_ = lean_ctor_get(v___x_3772_, 0);
lean_inc(v_a_3773_);
lean_dec_ref_known(v___x_3772_, 1);
v_natCasts_3774_ = lean_ctor_get(v_a_3773_, 4);
lean_inc_ref(v_natCasts_3774_);
lean_dec(v_a_3773_);
v___x_3775_ = l_Lean_Meta_Grind_Arith_CommRing_NonCommRingM_modifyRingState___redArg(v___f_3771_, v___y_3656_, v___y_3657_);
if (lean_obj_tag(v___x_3775_) == 0)
{
lean_object* v___x_3776_; 
lean_dec_ref_known(v___x_3775_, 1);
v___x_3776_ = l_Lean_Meta_Grind_Arith_CommRing_NonCommRingM_getRing(v___y_3656_, v___y_3657_, v___y_3658_, v___y_3659_, v___y_3660_, v___y_3661_, v___y_3662_, v___y_3663_, v___y_3664_, v___y_3665_, v___y_3666_);
if (lean_obj_tag(v___x_3776_) == 0)
{
lean_object* v_a_3777_; lean_object* v___x_3778_; 
v_a_3777_ = lean_ctor_get(v___x_3776_, 0);
lean_inc(v_a_3777_);
lean_dec_ref_known(v___x_3776_, 1);
v___x_3778_ = l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7(v___y_3656_, v___y_3657_, v___y_3658_, v___y_3659_, v___y_3660_, v___y_3661_, v___y_3662_, v___y_3663_, v___y_3664_, v___y_3665_, v___y_3666_);
if (lean_obj_tag(v___x_3778_) == 0)
{
lean_object* v_a_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; 
v_a_3779_ = lean_ctor_get(v___x_3778_, 0);
lean_inc(v_a_3779_);
lean_dec_ref_known(v___x_3778_, 1);
v___x_3780_ = lean_unsigned_to_nat(0u);
v___x_3781_ = l_Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8(v_a_3777_, v_a_3779_, v_natCasts_3774_, v___x_3780_, v___y_3656_, v___y_3657_, v___y_3658_, v___y_3659_, v___y_3660_, v___y_3661_, v___y_3662_, v___y_3663_, v___y_3664_, v___y_3665_, v___y_3666_);
return v___x_3781_;
}
else
{
lean_object* v_a_3782_; lean_object* v___x_3784_; uint8_t v_isShared_3785_; uint8_t v_isSharedCheck_3789_; 
lean_dec(v_a_3777_);
lean_dec_ref(v_natCasts_3774_);
v_a_3782_ = lean_ctor_get(v___x_3778_, 0);
v_isSharedCheck_3789_ = !lean_is_exclusive(v___x_3778_);
if (v_isSharedCheck_3789_ == 0)
{
v___x_3784_ = v___x_3778_;
v_isShared_3785_ = v_isSharedCheck_3789_;
goto v_resetjp_3783_;
}
else
{
lean_inc(v_a_3782_);
lean_dec(v___x_3778_);
v___x_3784_ = lean_box(0);
v_isShared_3785_ = v_isSharedCheck_3789_;
goto v_resetjp_3783_;
}
v_resetjp_3783_:
{
lean_object* v___x_3787_; 
if (v_isShared_3785_ == 0)
{
v___x_3787_ = v___x_3784_;
goto v_reusejp_3786_;
}
else
{
lean_object* v_reuseFailAlloc_3788_; 
v_reuseFailAlloc_3788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3788_, 0, v_a_3782_);
v___x_3787_ = v_reuseFailAlloc_3788_;
goto v_reusejp_3786_;
}
v_reusejp_3786_:
{
return v___x_3787_;
}
}
}
}
else
{
lean_object* v_a_3790_; lean_object* v___x_3792_; uint8_t v_isShared_3793_; uint8_t v_isSharedCheck_3797_; 
lean_dec_ref(v_natCasts_3774_);
v_a_3790_ = lean_ctor_get(v___x_3776_, 0);
v_isSharedCheck_3797_ = !lean_is_exclusive(v___x_3776_);
if (v_isSharedCheck_3797_ == 0)
{
v___x_3792_ = v___x_3776_;
v_isShared_3793_ = v_isSharedCheck_3797_;
goto v_resetjp_3791_;
}
else
{
lean_inc(v_a_3790_);
lean_dec(v___x_3776_);
v___x_3792_ = lean_box(0);
v_isShared_3793_ = v_isSharedCheck_3797_;
goto v_resetjp_3791_;
}
v_resetjp_3791_:
{
lean_object* v___x_3795_; 
if (v_isShared_3793_ == 0)
{
v___x_3795_ = v___x_3792_;
goto v_reusejp_3794_;
}
else
{
lean_object* v_reuseFailAlloc_3796_; 
v_reuseFailAlloc_3796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3796_, 0, v_a_3790_);
v___x_3795_ = v_reuseFailAlloc_3796_;
goto v_reusejp_3794_;
}
v_reusejp_3794_:
{
return v___x_3795_;
}
}
}
}
else
{
lean_dec_ref(v_natCasts_3774_);
return v___x_3775_;
}
}
else
{
lean_object* v_a_3798_; lean_object* v___x_3800_; uint8_t v_isShared_3801_; uint8_t v_isSharedCheck_3805_; 
lean_dec_ref(v___f_3771_);
v_a_3798_ = lean_ctor_get(v___x_3772_, 0);
v_isSharedCheck_3805_ = !lean_is_exclusive(v___x_3772_);
if (v_isSharedCheck_3805_ == 0)
{
v___x_3800_ = v___x_3772_;
v_isShared_3801_ = v_isSharedCheck_3805_;
goto v_resetjp_3799_;
}
else
{
lean_inc(v_a_3798_);
lean_dec(v___x_3772_);
v___x_3800_ = lean_box(0);
v_isShared_3801_ = v_isSharedCheck_3805_;
goto v_resetjp_3799_;
}
v_resetjp_3799_:
{
lean_object* v___x_3803_; 
if (v_isShared_3801_ == 0)
{
v___x_3803_ = v___x_3800_;
goto v_reusejp_3802_;
}
else
{
lean_object* v_reuseFailAlloc_3804_; 
v_reuseFailAlloc_3804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3804_, 0, v_a_3798_);
v___x_3803_ = v_reuseFailAlloc_3804_;
goto v_reusejp_3802_;
}
v_reusejp_3802_:
{
return v___x_3803_;
}
}
}
}
}
else
{
lean_object* v_a_3806_; lean_object* v___x_3808_; uint8_t v_isShared_3809_; uint8_t v_isSharedCheck_3813_; 
lean_dec_ref(v_arg_3693_);
v_a_3806_ = lean_ctor_get(v___x_3764_, 0);
v_isSharedCheck_3813_ = !lean_is_exclusive(v___x_3764_);
if (v_isSharedCheck_3813_ == 0)
{
v___x_3808_ = v___x_3764_;
v_isShared_3809_ = v_isSharedCheck_3813_;
goto v_resetjp_3807_;
}
else
{
lean_inc(v_a_3806_);
lean_dec(v___x_3764_);
v___x_3808_ = lean_box(0);
v_isShared_3809_ = v_isSharedCheck_3813_;
goto v_resetjp_3807_;
}
v_resetjp_3807_:
{
lean_object* v___x_3811_; 
if (v_isShared_3809_ == 0)
{
v___x_3811_ = v___x_3808_;
goto v_reusejp_3810_;
}
else
{
lean_object* v_reuseFailAlloc_3812_; 
v_reuseFailAlloc_3812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3812_, 0, v_a_3806_);
v___x_3811_ = v_reuseFailAlloc_3812_;
goto v_reusejp_3810_;
}
v_reusejp_3810_:
{
return v___x_3811_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_3763_, 1);
lean_dec_ref(v_arg_3693_);
goto v___jp_3668_;
}
}
else
{
lean_dec_ref(v_arg_3693_);
lean_dec_ref(v_arg_3692_);
goto v___jp_3668_;
}
}
else
{
lean_object* v_a_3814_; lean_object* v___x_3816_; uint8_t v_isShared_3817_; uint8_t v_isSharedCheck_3821_; 
lean_dec_ref(v_arg_3693_);
lean_dec_ref(v_arg_3692_);
v_a_3814_ = lean_ctor_get(v___x_3760_, 0);
v_isSharedCheck_3821_ = !lean_is_exclusive(v___x_3760_);
if (v_isSharedCheck_3821_ == 0)
{
v___x_3816_ = v___x_3760_;
v_isShared_3817_ = v_isSharedCheck_3821_;
goto v_resetjp_3815_;
}
else
{
lean_inc(v_a_3814_);
lean_dec(v___x_3760_);
v___x_3816_ = lean_box(0);
v_isShared_3817_ = v_isSharedCheck_3821_;
goto v_resetjp_3815_;
}
v_resetjp_3815_:
{
lean_object* v___x_3819_; 
if (v_isShared_3817_ == 0)
{
v___x_3819_ = v___x_3816_;
goto v_reusejp_3818_;
}
else
{
lean_object* v_reuseFailAlloc_3820_; 
v_reuseFailAlloc_3820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3820_, 0, v_a_3814_);
v___x_3819_ = v_reuseFailAlloc_3820_;
goto v_reusejp_3818_;
}
v_reusejp_3818_:
{
return v___x_3819_;
}
}
}
}
}
}
}
v___jp_3681_:
{
lean_object* v___x_3682_; lean_object* v___x_3684_; 
v___x_3682_ = lean_box(0);
if (v_isShared_3680_ == 0)
{
lean_ctor_set(v___x_3679_, 0, v___x_3682_);
v___x_3684_ = v___x_3679_;
goto v_reusejp_3683_;
}
else
{
lean_object* v_reuseFailAlloc_3685_; 
v_reuseFailAlloc_3685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3685_, 0, v___x_3682_);
v___x_3684_ = v_reuseFailAlloc_3685_;
goto v_reusejp_3683_;
}
v_reusejp_3683_:
{
return v___x_3684_;
}
}
}
}
else
{
lean_object* v_a_3823_; lean_object* v___x_3825_; uint8_t v_isShared_3826_; uint8_t v_isSharedCheck_3830_; 
lean_dec_ref(v___f_3675_);
lean_dec_ref(v___f_3674_);
lean_dec_ref(v_e_3655_);
v_a_3823_ = lean_ctor_get(v___x_3676_, 0);
v_isSharedCheck_3830_ = !lean_is_exclusive(v___x_3676_);
if (v_isSharedCheck_3830_ == 0)
{
v___x_3825_ = v___x_3676_;
v_isShared_3826_ = v_isSharedCheck_3830_;
goto v_resetjp_3824_;
}
else
{
lean_inc(v_a_3823_);
lean_dec(v___x_3676_);
v___x_3825_ = lean_box(0);
v_isShared_3826_ = v_isSharedCheck_3830_;
goto v_resetjp_3824_;
}
v_resetjp_3824_:
{
lean_object* v___x_3828_; 
if (v_isShared_3826_ == 0)
{
v___x_3828_ = v___x_3825_;
goto v_reusejp_3827_;
}
else
{
lean_object* v_reuseFailAlloc_3829_; 
v_reuseFailAlloc_3829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3829_, 0, v_a_3823_);
v___x_3828_ = v_reuseFailAlloc_3829_;
goto v_reusejp_3827_;
}
v_reusejp_3827_:
{
return v___x_3828_;
}
}
}
v___jp_3668_:
{
lean_object* v___x_3669_; lean_object* v___x_3670_; 
v___x_3669_ = lean_box(0);
v___x_3670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3670_, 0, v___x_3669_);
return v___x_3670_;
}
v___jp_3671_:
{
lean_object* v___x_3672_; lean_object* v___x_3673_; 
v___x_3672_ = lean_box(0);
v___x_3673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3673_, 0, v___x_3672_);
return v___x_3673_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1___boxed(lean_object* v_e_3831_, lean_object* v___y_3832_, lean_object* v___y_3833_, lean_object* v___y_3834_, lean_object* v___y_3835_, lean_object* v___y_3836_, lean_object* v___y_3837_, lean_object* v___y_3838_, lean_object* v___y_3839_, lean_object* v___y_3840_, lean_object* v___y_3841_, lean_object* v___y_3842_, lean_object* v___y_3843_){
_start:
{
lean_object* v_res_3844_; 
v_res_3844_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1(v_e_3831_, v___y_3832_, v___y_3833_, v___y_3834_, v___y_3835_, v___y_3836_, v___y_3837_, v___y_3838_, v___y_3839_, v___y_3840_, v___y_3841_, v___y_3842_);
lean_dec(v___y_3842_);
lean_dec_ref(v___y_3841_);
lean_dec(v___y_3840_);
lean_dec_ref(v___y_3839_);
lean_dec(v___y_3838_);
lean_dec_ref(v___y_3837_);
lean_dec(v___y_3836_);
lean_dec_ref(v___y_3835_);
lean_dec(v___y_3834_);
lean_dec(v___y_3833_);
lean_dec(v___y_3832_);
return v_res_3844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__3___lam__0(lean_object* v_a_3845_, lean_object* v_s_3846_){
_start:
{
lean_object* v_toRing_3847_; lean_object* v_invFn_x3f_3848_; lean_object* v_divFn_x3f_3849_; lean_object* v_zpowFn_x3f_3850_; lean_object* v_semiringId_x3f_3851_; lean_object* v_commSemiringInst_3852_; lean_object* v_commRingInst_3853_; lean_object* v_noZeroDivInst_x3f_3854_; lean_object* v_fieldInst_x3f_3855_; lean_object* v_powIdentityInst_x3f_3856_; lean_object* v___x_3858_; uint8_t v_isShared_3859_; uint8_t v_isSharedCheck_3888_; 
v_toRing_3847_ = lean_ctor_get(v_s_3846_, 0);
v_invFn_x3f_3848_ = lean_ctor_get(v_s_3846_, 1);
v_divFn_x3f_3849_ = lean_ctor_get(v_s_3846_, 2);
v_zpowFn_x3f_3850_ = lean_ctor_get(v_s_3846_, 3);
v_semiringId_x3f_3851_ = lean_ctor_get(v_s_3846_, 4);
v_commSemiringInst_3852_ = lean_ctor_get(v_s_3846_, 5);
v_commRingInst_3853_ = lean_ctor_get(v_s_3846_, 6);
v_noZeroDivInst_x3f_3854_ = lean_ctor_get(v_s_3846_, 7);
v_fieldInst_x3f_3855_ = lean_ctor_get(v_s_3846_, 8);
v_powIdentityInst_x3f_3856_ = lean_ctor_get(v_s_3846_, 9);
v_isSharedCheck_3888_ = !lean_is_exclusive(v_s_3846_);
if (v_isSharedCheck_3888_ == 0)
{
v___x_3858_ = v_s_3846_;
v_isShared_3859_ = v_isSharedCheck_3888_;
goto v_resetjp_3857_;
}
else
{
lean_inc(v_powIdentityInst_x3f_3856_);
lean_inc(v_fieldInst_x3f_3855_);
lean_inc(v_noZeroDivInst_x3f_3854_);
lean_inc(v_commRingInst_3853_);
lean_inc(v_commSemiringInst_3852_);
lean_inc(v_semiringId_x3f_3851_);
lean_inc(v_zpowFn_x3f_3850_);
lean_inc(v_divFn_x3f_3849_);
lean_inc(v_invFn_x3f_3848_);
lean_inc(v_toRing_3847_);
lean_dec(v_s_3846_);
v___x_3858_ = lean_box(0);
v_isShared_3859_ = v_isSharedCheck_3888_;
goto v_resetjp_3857_;
}
v_resetjp_3857_:
{
lean_object* v_id_3860_; lean_object* v_type_3861_; lean_object* v_u_3862_; lean_object* v_ringInst_3863_; lean_object* v_semiringInst_3864_; lean_object* v_charInst_x3f_3865_; uint8_t v_symbolicChar_3866_; lean_object* v_addFn_x3f_3867_; lean_object* v_mulFn_x3f_3868_; lean_object* v_subFn_x3f_3869_; lean_object* v_negFn_x3f_3870_; lean_object* v_powFn_x3f_3871_; lean_object* v_natCastFn_x3f_3872_; lean_object* v_natSMulFn_x3f_3873_; lean_object* v_intSMulFn_x3f_3874_; lean_object* v_one_x3f_3875_; lean_object* v___x_3877_; uint8_t v_isShared_3878_; uint8_t v_isSharedCheck_3886_; 
v_id_3860_ = lean_ctor_get(v_toRing_3847_, 0);
v_type_3861_ = lean_ctor_get(v_toRing_3847_, 1);
v_u_3862_ = lean_ctor_get(v_toRing_3847_, 2);
v_ringInst_3863_ = lean_ctor_get(v_toRing_3847_, 3);
v_semiringInst_3864_ = lean_ctor_get(v_toRing_3847_, 4);
v_charInst_x3f_3865_ = lean_ctor_get(v_toRing_3847_, 5);
v_symbolicChar_3866_ = lean_ctor_get_uint8(v_toRing_3847_, sizeof(void*)*16);
v_addFn_x3f_3867_ = lean_ctor_get(v_toRing_3847_, 6);
v_mulFn_x3f_3868_ = lean_ctor_get(v_toRing_3847_, 7);
v_subFn_x3f_3869_ = lean_ctor_get(v_toRing_3847_, 8);
v_negFn_x3f_3870_ = lean_ctor_get(v_toRing_3847_, 9);
v_powFn_x3f_3871_ = lean_ctor_get(v_toRing_3847_, 10);
v_natCastFn_x3f_3872_ = lean_ctor_get(v_toRing_3847_, 12);
v_natSMulFn_x3f_3873_ = lean_ctor_get(v_toRing_3847_, 13);
v_intSMulFn_x3f_3874_ = lean_ctor_get(v_toRing_3847_, 14);
v_one_x3f_3875_ = lean_ctor_get(v_toRing_3847_, 15);
v_isSharedCheck_3886_ = !lean_is_exclusive(v_toRing_3847_);
if (v_isSharedCheck_3886_ == 0)
{
lean_object* v_unused_3887_; 
v_unused_3887_ = lean_ctor_get(v_toRing_3847_, 11);
lean_dec(v_unused_3887_);
v___x_3877_ = v_toRing_3847_;
v_isShared_3878_ = v_isSharedCheck_3886_;
goto v_resetjp_3876_;
}
else
{
lean_inc(v_one_x3f_3875_);
lean_inc(v_intSMulFn_x3f_3874_);
lean_inc(v_natSMulFn_x3f_3873_);
lean_inc(v_natCastFn_x3f_3872_);
lean_inc(v_powFn_x3f_3871_);
lean_inc(v_negFn_x3f_3870_);
lean_inc(v_subFn_x3f_3869_);
lean_inc(v_mulFn_x3f_3868_);
lean_inc(v_addFn_x3f_3867_);
lean_inc(v_charInst_x3f_3865_);
lean_inc(v_semiringInst_3864_);
lean_inc(v_ringInst_3863_);
lean_inc(v_u_3862_);
lean_inc(v_type_3861_);
lean_inc(v_id_3860_);
lean_dec(v_toRing_3847_);
v___x_3877_ = lean_box(0);
v_isShared_3878_ = v_isSharedCheck_3886_;
goto v_resetjp_3876_;
}
v_resetjp_3876_:
{
lean_object* v___x_3879_; lean_object* v___x_3881_; 
v___x_3879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3879_, 0, v_a_3845_);
if (v_isShared_3878_ == 0)
{
lean_ctor_set(v___x_3877_, 11, v___x_3879_);
v___x_3881_ = v___x_3877_;
goto v_reusejp_3880_;
}
else
{
lean_object* v_reuseFailAlloc_3885_; 
v_reuseFailAlloc_3885_ = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(v_reuseFailAlloc_3885_, 0, v_id_3860_);
lean_ctor_set(v_reuseFailAlloc_3885_, 1, v_type_3861_);
lean_ctor_set(v_reuseFailAlloc_3885_, 2, v_u_3862_);
lean_ctor_set(v_reuseFailAlloc_3885_, 3, v_ringInst_3863_);
lean_ctor_set(v_reuseFailAlloc_3885_, 4, v_semiringInst_3864_);
lean_ctor_set(v_reuseFailAlloc_3885_, 5, v_charInst_x3f_3865_);
lean_ctor_set(v_reuseFailAlloc_3885_, 6, v_addFn_x3f_3867_);
lean_ctor_set(v_reuseFailAlloc_3885_, 7, v_mulFn_x3f_3868_);
lean_ctor_set(v_reuseFailAlloc_3885_, 8, v_subFn_x3f_3869_);
lean_ctor_set(v_reuseFailAlloc_3885_, 9, v_negFn_x3f_3870_);
lean_ctor_set(v_reuseFailAlloc_3885_, 10, v_powFn_x3f_3871_);
lean_ctor_set(v_reuseFailAlloc_3885_, 11, v___x_3879_);
lean_ctor_set(v_reuseFailAlloc_3885_, 12, v_natCastFn_x3f_3872_);
lean_ctor_set(v_reuseFailAlloc_3885_, 13, v_natSMulFn_x3f_3873_);
lean_ctor_set(v_reuseFailAlloc_3885_, 14, v_intSMulFn_x3f_3874_);
lean_ctor_set(v_reuseFailAlloc_3885_, 15, v_one_x3f_3875_);
lean_ctor_set_uint8(v_reuseFailAlloc_3885_, sizeof(void*)*16, v_symbolicChar_3866_);
v___x_3881_ = v_reuseFailAlloc_3885_;
goto v_reusejp_3880_;
}
v_reusejp_3880_:
{
lean_object* v___x_3883_; 
if (v_isShared_3859_ == 0)
{
lean_ctor_set(v___x_3858_, 0, v___x_3881_);
v___x_3883_ = v___x_3858_;
goto v_reusejp_3882_;
}
else
{
lean_object* v_reuseFailAlloc_3884_; 
v_reuseFailAlloc_3884_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3884_, 0, v___x_3881_);
lean_ctor_set(v_reuseFailAlloc_3884_, 1, v_invFn_x3f_3848_);
lean_ctor_set(v_reuseFailAlloc_3884_, 2, v_divFn_x3f_3849_);
lean_ctor_set(v_reuseFailAlloc_3884_, 3, v_zpowFn_x3f_3850_);
lean_ctor_set(v_reuseFailAlloc_3884_, 4, v_semiringId_x3f_3851_);
lean_ctor_set(v_reuseFailAlloc_3884_, 5, v_commSemiringInst_3852_);
lean_ctor_set(v_reuseFailAlloc_3884_, 6, v_commRingInst_3853_);
lean_ctor_set(v_reuseFailAlloc_3884_, 7, v_noZeroDivInst_x3f_3854_);
lean_ctor_set(v_reuseFailAlloc_3884_, 8, v_fieldInst_x3f_3855_);
lean_ctor_set(v_reuseFailAlloc_3884_, 9, v_powIdentityInst_x3f_3856_);
v___x_3883_ = v_reuseFailAlloc_3884_;
goto v_reusejp_3882_;
}
v_reusejp_3882_:
{
return v___x_3883_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__3(lean_object* v___y_3889_, lean_object* v___y_3890_, lean_object* v___y_3891_, lean_object* v___y_3892_, lean_object* v___y_3893_, lean_object* v___y_3894_, lean_object* v___y_3895_, lean_object* v___y_3896_, lean_object* v___y_3897_, lean_object* v___y_3898_, lean_object* v___y_3899_){
_start:
{
lean_object* v___x_3901_; 
v___x_3901_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v___y_3889_, v___y_3890_, v___y_3891_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_, v___y_3896_, v___y_3897_, v___y_3898_, v___y_3899_);
if (lean_obj_tag(v___x_3901_) == 0)
{
lean_object* v_a_3902_; lean_object* v___x_3904_; uint8_t v_isShared_3905_; uint8_t v_isSharedCheck_3978_; 
v_a_3902_ = lean_ctor_get(v___x_3901_, 0);
v_isSharedCheck_3978_ = !lean_is_exclusive(v___x_3901_);
if (v_isSharedCheck_3978_ == 0)
{
v___x_3904_ = v___x_3901_;
v_isShared_3905_ = v_isSharedCheck_3978_;
goto v_resetjp_3903_;
}
else
{
lean_inc(v_a_3902_);
lean_dec(v___x_3901_);
v___x_3904_ = lean_box(0);
v_isShared_3905_ = v_isSharedCheck_3978_;
goto v_resetjp_3903_;
}
v_resetjp_3903_:
{
lean_object* v_toRing_3906_; lean_object* v_intCastFn_x3f_3907_; 
v_toRing_3906_ = lean_ctor_get(v_a_3902_, 0);
lean_inc_ref(v_toRing_3906_);
lean_dec(v_a_3902_);
v_intCastFn_x3f_3907_ = lean_ctor_get(v_toRing_3906_, 11);
if (lean_obj_tag(v_intCastFn_x3f_3907_) == 1)
{
lean_object* v_val_3908_; lean_object* v___x_3910_; 
lean_inc_ref(v_intCastFn_x3f_3907_);
lean_dec_ref(v_toRing_3906_);
v_val_3908_ = lean_ctor_get(v_intCastFn_x3f_3907_, 0);
lean_inc(v_val_3908_);
lean_dec_ref_known(v_intCastFn_x3f_3907_, 1);
if (v_isShared_3905_ == 0)
{
lean_ctor_set(v___x_3904_, 0, v_val_3908_);
v___x_3910_ = v___x_3904_;
goto v_reusejp_3909_;
}
else
{
lean_object* v_reuseFailAlloc_3911_; 
v_reuseFailAlloc_3911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3911_, 0, v_val_3908_);
v___x_3910_ = v_reuseFailAlloc_3911_;
goto v_reusejp_3909_;
}
v_reusejp_3909_:
{
return v___x_3910_;
}
}
else
{
lean_object* v_type_3912_; lean_object* v_u_3913_; lean_object* v_ringInst_3914_; lean_object* v___x_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; lean_object* v___x_3918_; lean_object* v_inst_x27_3919_; lean_object* v_inst_3921_; lean_object* v___y_3922_; lean_object* v___y_3923_; lean_object* v___y_3924_; lean_object* v___y_3925_; lean_object* v___y_3926_; lean_object* v___y_3927_; lean_object* v___y_3928_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v_instType_3956_; lean_object* v___x_3957_; 
lean_del_object(v___x_3904_);
v_type_3912_ = lean_ctor_get(v_toRing_3906_, 1);
lean_inc_ref_n(v_type_3912_, 3);
v_u_3913_ = lean_ctor_get(v_toRing_3906_, 2);
lean_inc(v_u_3913_);
v_ringInst_3914_ = lean_ctor_get(v_toRing_3906_, 3);
lean_inc_ref(v_ringInst_3914_);
lean_dec_ref(v_toRing_3906_);
v___x_3915_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___closed__0));
v___x_3916_ = lean_box(0);
v___x_3917_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3917_, 0, v_u_3913_);
lean_ctor_set(v___x_3917_, 1, v___x_3916_);
lean_inc_ref_n(v___x_3917_, 2);
v___x_3918_ = l_Lean_mkConst(v___x_3915_, v___x_3917_);
v_inst_x27_3919_ = l_Lean_mkAppB(v___x_3918_, v_type_3912_, v_ringInst_3914_);
v___x_3954_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___closed__1));
v___x_3955_ = l_Lean_mkConst(v___x_3954_, v___x_3917_);
v_instType_3956_ = l_Lean_Expr_app___override(v___x_3955_, v_type_3912_);
v___x_3957_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_instType_3956_, v___y_3895_, v___y_3896_, v___y_3897_, v___y_3898_, v___y_3899_);
if (lean_obj_tag(v___x_3957_) == 0)
{
lean_object* v_a_3958_; 
v_a_3958_ = lean_ctor_get(v___x_3957_, 0);
lean_inc(v_a_3958_);
lean_dec_ref_known(v___x_3957_, 1);
if (lean_obj_tag(v_a_3958_) == 0)
{
v_inst_3921_ = v_inst_x27_3919_;
v___y_3922_ = v___y_3889_;
v___y_3923_ = v___y_3894_;
v___y_3924_ = v___y_3895_;
v___y_3925_ = v___y_3896_;
v___y_3926_ = v___y_3897_;
v___y_3927_ = v___y_3898_;
v___y_3928_ = v___y_3899_;
goto v___jp_3920_;
}
else
{
lean_object* v_val_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; 
v_val_3959_ = lean_ctor_get(v_a_3958_, 0);
lean_inc_n(v_val_3959_, 2);
lean_dec_ref_known(v_a_3958_, 1);
v___x_3960_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__7___closed__3));
v___x_3961_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst(v___x_3960_, v_val_3959_, v_inst_x27_3919_, v___y_3896_, v___y_3897_, v___y_3898_, v___y_3899_);
if (lean_obj_tag(v___x_3961_) == 0)
{
lean_dec_ref_known(v___x_3961_, 1);
v_inst_3921_ = v_val_3959_;
v___y_3922_ = v___y_3889_;
v___y_3923_ = v___y_3894_;
v___y_3924_ = v___y_3895_;
v___y_3925_ = v___y_3896_;
v___y_3926_ = v___y_3897_;
v___y_3927_ = v___y_3898_;
v___y_3928_ = v___y_3899_;
goto v___jp_3920_;
}
else
{
lean_object* v_a_3962_; lean_object* v___x_3964_; uint8_t v_isShared_3965_; uint8_t v_isSharedCheck_3969_; 
lean_dec(v_val_3959_);
lean_dec_ref_known(v___x_3917_, 2);
lean_dec_ref(v_type_3912_);
v_a_3962_ = lean_ctor_get(v___x_3961_, 0);
v_isSharedCheck_3969_ = !lean_is_exclusive(v___x_3961_);
if (v_isSharedCheck_3969_ == 0)
{
v___x_3964_ = v___x_3961_;
v_isShared_3965_ = v_isSharedCheck_3969_;
goto v_resetjp_3963_;
}
else
{
lean_inc(v_a_3962_);
lean_dec(v___x_3961_);
v___x_3964_ = lean_box(0);
v_isShared_3965_ = v_isSharedCheck_3969_;
goto v_resetjp_3963_;
}
v_resetjp_3963_:
{
lean_object* v___x_3967_; 
if (v_isShared_3965_ == 0)
{
v___x_3967_ = v___x_3964_;
goto v_reusejp_3966_;
}
else
{
lean_object* v_reuseFailAlloc_3968_; 
v_reuseFailAlloc_3968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3968_, 0, v_a_3962_);
v___x_3967_ = v_reuseFailAlloc_3968_;
goto v_reusejp_3966_;
}
v_reusejp_3966_:
{
return v___x_3967_;
}
}
}
}
}
else
{
lean_object* v_a_3970_; lean_object* v___x_3972_; uint8_t v_isShared_3973_; uint8_t v_isSharedCheck_3977_; 
lean_dec_ref(v_inst_x27_3919_);
lean_dec_ref_known(v___x_3917_, 2);
lean_dec_ref(v_type_3912_);
v_a_3970_ = lean_ctor_get(v___x_3957_, 0);
v_isSharedCheck_3977_ = !lean_is_exclusive(v___x_3957_);
if (v_isSharedCheck_3977_ == 0)
{
v___x_3972_ = v___x_3957_;
v_isShared_3973_ = v_isSharedCheck_3977_;
goto v_resetjp_3971_;
}
else
{
lean_inc(v_a_3970_);
lean_dec(v___x_3957_);
v___x_3972_ = lean_box(0);
v_isShared_3973_ = v_isSharedCheck_3977_;
goto v_resetjp_3971_;
}
v_resetjp_3971_:
{
lean_object* v___x_3975_; 
if (v_isShared_3973_ == 0)
{
v___x_3975_ = v___x_3972_;
goto v_reusejp_3974_;
}
else
{
lean_object* v_reuseFailAlloc_3976_; 
v_reuseFailAlloc_3976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3976_, 0, v_a_3970_);
v___x_3975_ = v_reuseFailAlloc_3976_;
goto v_reusejp_3974_;
}
v_reusejp_3974_:
{
return v___x_3975_;
}
}
}
v___jp_3920_:
{
lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; 
v___x_3929_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__2));
v___x_3930_ = l_Lean_mkConst(v___x_3929_, v___x_3917_);
v___x_3931_ = l_Lean_mkAppB(v___x_3930_, v_type_3912_, v_inst_3921_);
v___x_3932_ = l_Lean_Meta_Sym_canon(v___x_3931_, v___y_3923_, v___y_3924_, v___y_3925_, v___y_3926_, v___y_3927_, v___y_3928_);
if (lean_obj_tag(v___x_3932_) == 0)
{
lean_object* v_a_3933_; lean_object* v___x_3934_; 
v_a_3933_ = lean_ctor_get(v___x_3932_, 0);
lean_inc(v_a_3933_);
lean_dec_ref_known(v___x_3932_, 1);
v___x_3934_ = l_Lean_Meta_Sym_shareCommon(v_a_3933_, v___y_3923_, v___y_3924_, v___y_3925_, v___y_3926_, v___y_3927_, v___y_3928_);
if (lean_obj_tag(v___x_3934_) == 0)
{
lean_object* v_a_3935_; lean_object* v___f_3936_; lean_object* v___x_3937_; 
v_a_3935_ = lean_ctor_get(v___x_3934_, 0);
lean_inc_n(v_a_3935_, 2);
lean_dec_ref_known(v___x_3934_, 1);
v___f_3936_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__3___lam__0), 2, 1);
lean_closure_set(v___f_3936_, 0, v_a_3935_);
v___x_3937_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(v___f_3936_, v___y_3922_, v___y_3924_);
if (lean_obj_tag(v___x_3937_) == 0)
{
lean_object* v___x_3939_; uint8_t v_isShared_3940_; uint8_t v_isSharedCheck_3944_; 
v_isSharedCheck_3944_ = !lean_is_exclusive(v___x_3937_);
if (v_isSharedCheck_3944_ == 0)
{
lean_object* v_unused_3945_; 
v_unused_3945_ = lean_ctor_get(v___x_3937_, 0);
lean_dec(v_unused_3945_);
v___x_3939_ = v___x_3937_;
v_isShared_3940_ = v_isSharedCheck_3944_;
goto v_resetjp_3938_;
}
else
{
lean_dec(v___x_3937_);
v___x_3939_ = lean_box(0);
v_isShared_3940_ = v_isSharedCheck_3944_;
goto v_resetjp_3938_;
}
v_resetjp_3938_:
{
lean_object* v___x_3942_; 
if (v_isShared_3940_ == 0)
{
lean_ctor_set(v___x_3939_, 0, v_a_3935_);
v___x_3942_ = v___x_3939_;
goto v_reusejp_3941_;
}
else
{
lean_object* v_reuseFailAlloc_3943_; 
v_reuseFailAlloc_3943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3943_, 0, v_a_3935_);
v___x_3942_ = v_reuseFailAlloc_3943_;
goto v_reusejp_3941_;
}
v_reusejp_3941_:
{
return v___x_3942_;
}
}
}
else
{
lean_object* v_a_3946_; lean_object* v___x_3948_; uint8_t v_isShared_3949_; uint8_t v_isSharedCheck_3953_; 
lean_dec(v_a_3935_);
v_a_3946_ = lean_ctor_get(v___x_3937_, 0);
v_isSharedCheck_3953_ = !lean_is_exclusive(v___x_3937_);
if (v_isSharedCheck_3953_ == 0)
{
v___x_3948_ = v___x_3937_;
v_isShared_3949_ = v_isSharedCheck_3953_;
goto v_resetjp_3947_;
}
else
{
lean_inc(v_a_3946_);
lean_dec(v___x_3937_);
v___x_3948_ = lean_box(0);
v_isShared_3949_ = v_isSharedCheck_3953_;
goto v_resetjp_3947_;
}
v_resetjp_3947_:
{
lean_object* v___x_3951_; 
if (v_isShared_3949_ == 0)
{
v___x_3951_ = v___x_3948_;
goto v_reusejp_3950_;
}
else
{
lean_object* v_reuseFailAlloc_3952_; 
v_reuseFailAlloc_3952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3952_, 0, v_a_3946_);
v___x_3951_ = v_reuseFailAlloc_3952_;
goto v_reusejp_3950_;
}
v_reusejp_3950_:
{
return v___x_3951_;
}
}
}
}
else
{
return v___x_3934_;
}
}
else
{
return v___x_3932_;
}
}
}
}
}
else
{
lean_object* v_a_3979_; lean_object* v___x_3981_; uint8_t v_isShared_3982_; uint8_t v_isSharedCheck_3986_; 
v_a_3979_ = lean_ctor_get(v___x_3901_, 0);
v_isSharedCheck_3986_ = !lean_is_exclusive(v___x_3901_);
if (v_isSharedCheck_3986_ == 0)
{
v___x_3981_ = v___x_3901_;
v_isShared_3982_ = v_isSharedCheck_3986_;
goto v_resetjp_3980_;
}
else
{
lean_inc(v_a_3979_);
lean_dec(v___x_3901_);
v___x_3981_ = lean_box(0);
v_isShared_3982_ = v_isSharedCheck_3986_;
goto v_resetjp_3980_;
}
v_resetjp_3980_:
{
lean_object* v___x_3984_; 
if (v_isShared_3982_ == 0)
{
v___x_3984_ = v___x_3981_;
goto v_reusejp_3983_;
}
else
{
lean_object* v_reuseFailAlloc_3985_; 
v_reuseFailAlloc_3985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3985_, 0, v_a_3979_);
v___x_3984_ = v_reuseFailAlloc_3985_;
goto v_reusejp_3983_;
}
v_reusejp_3983_:
{
return v___x_3984_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__3___boxed(lean_object* v___y_3987_, lean_object* v___y_3988_, lean_object* v___y_3989_, lean_object* v___y_3990_, lean_object* v___y_3991_, lean_object* v___y_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_){
_start:
{
lean_object* v_res_3999_; 
v_res_3999_ = l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__3(v___y_3987_, v___y_3988_, v___y_3989_, v___y_3990_, v___y_3991_, v___y_3992_, v___y_3993_, v___y_3994_, v___y_3995_, v___y_3996_, v___y_3997_);
lean_dec(v___y_3997_);
lean_dec_ref(v___y_3996_);
lean_dec(v___y_3995_);
lean_dec_ref(v___y_3994_);
lean_dec(v___y_3993_);
lean_dec_ref(v___y_3992_);
lean_dec(v___y_3991_);
lean_dec_ref(v___y_3990_);
lean_dec(v___y_3989_);
lean_dec(v___y_3988_);
lean_dec_ref(v___y_3987_);
return v_res_3999_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0___lam__4(uint8_t v___x_4000_, lean_object* v_s_4001_){
_start:
{
lean_object* v_toRingState_4002_; lean_object* v_denoteEntries_4003_; lean_object* v_nextId_4004_; lean_object* v_steps_4005_; lean_object* v_queue_4006_; lean_object* v_basis_4007_; lean_object* v_diseqs_4008_; uint8_t v_recheck_4009_; lean_object* v_invSet_4010_; lean_object* v_powIdentityVarCount_4011_; lean_object* v_numEq0_x3f_4012_; uint8_t v_numEq0Updated_4013_; lean_object* v___x_4015_; uint8_t v_isShared_4016_; uint8_t v_isSharedCheck_4035_; 
v_toRingState_4002_ = lean_ctor_get(v_s_4001_, 0);
v_denoteEntries_4003_ = lean_ctor_get(v_s_4001_, 1);
v_nextId_4004_ = lean_ctor_get(v_s_4001_, 2);
v_steps_4005_ = lean_ctor_get(v_s_4001_, 3);
v_queue_4006_ = lean_ctor_get(v_s_4001_, 4);
v_basis_4007_ = lean_ctor_get(v_s_4001_, 5);
v_diseqs_4008_ = lean_ctor_get(v_s_4001_, 6);
v_recheck_4009_ = lean_ctor_get_uint8(v_s_4001_, sizeof(void*)*10);
v_invSet_4010_ = lean_ctor_get(v_s_4001_, 7);
v_powIdentityVarCount_4011_ = lean_ctor_get(v_s_4001_, 8);
v_numEq0_x3f_4012_ = lean_ctor_get(v_s_4001_, 9);
v_numEq0Updated_4013_ = lean_ctor_get_uint8(v_s_4001_, sizeof(void*)*10 + 1);
v_isSharedCheck_4035_ = !lean_is_exclusive(v_s_4001_);
if (v_isSharedCheck_4035_ == 0)
{
v___x_4015_ = v_s_4001_;
v_isShared_4016_ = v_isSharedCheck_4035_;
goto v_resetjp_4014_;
}
else
{
lean_inc(v_numEq0_x3f_4012_);
lean_inc(v_powIdentityVarCount_4011_);
lean_inc(v_invSet_4010_);
lean_inc(v_diseqs_4008_);
lean_inc(v_basis_4007_);
lean_inc(v_queue_4006_);
lean_inc(v_steps_4005_);
lean_inc(v_nextId_4004_);
lean_inc(v_denoteEntries_4003_);
lean_inc(v_toRingState_4002_);
lean_dec(v_s_4001_);
v___x_4015_ = lean_box(0);
v_isShared_4016_ = v_isSharedCheck_4035_;
goto v_resetjp_4014_;
}
v_resetjp_4014_:
{
lean_object* v_vars_4017_; lean_object* v_varMap_4018_; lean_object* v_denote_4019_; lean_object* v_natCastSet_4020_; lean_object* v___x_4022_; uint8_t v_isShared_4023_; uint8_t v_isSharedCheck_4033_; 
v_vars_4017_ = lean_ctor_get(v_toRingState_4002_, 0);
v_varMap_4018_ = lean_ctor_get(v_toRingState_4002_, 1);
v_denote_4019_ = lean_ctor_get(v_toRingState_4002_, 2);
v_natCastSet_4020_ = lean_ctor_get(v_toRingState_4002_, 3);
v_isSharedCheck_4033_ = !lean_is_exclusive(v_toRingState_4002_);
if (v_isSharedCheck_4033_ == 0)
{
lean_object* v_unused_4034_; 
v_unused_4034_ = lean_ctor_get(v_toRingState_4002_, 4);
lean_dec(v_unused_4034_);
v___x_4022_ = v_toRingState_4002_;
v_isShared_4023_ = v_isSharedCheck_4033_;
goto v_resetjp_4021_;
}
else
{
lean_inc(v_natCastSet_4020_);
lean_inc(v_denote_4019_);
lean_inc(v_varMap_4018_);
lean_inc(v_vars_4017_);
lean_dec(v_toRingState_4002_);
v___x_4022_ = lean_box(0);
v_isShared_4023_ = v_isSharedCheck_4033_;
goto v_resetjp_4021_;
}
v_resetjp_4021_:
{
lean_object* v___x_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; lean_object* v___x_4028_; 
v___x_4024_ = lean_unsigned_to_nat(32u);
v___x_4025_ = lean_mk_empty_array_with_capacity(v___x_4024_);
lean_dec_ref(v___x_4025_);
v___x_4026_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__9___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__9___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___redArg___lam__9___closed__1);
if (v_isShared_4023_ == 0)
{
lean_ctor_set(v___x_4022_, 4, v___x_4026_);
v___x_4028_ = v___x_4022_;
goto v_reusejp_4027_;
}
else
{
lean_object* v_reuseFailAlloc_4032_; 
v_reuseFailAlloc_4032_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_4032_, 0, v_vars_4017_);
lean_ctor_set(v_reuseFailAlloc_4032_, 1, v_varMap_4018_);
lean_ctor_set(v_reuseFailAlloc_4032_, 2, v_denote_4019_);
lean_ctor_set(v_reuseFailAlloc_4032_, 3, v_natCastSet_4020_);
lean_ctor_set(v_reuseFailAlloc_4032_, 4, v___x_4026_);
v___x_4028_ = v_reuseFailAlloc_4032_;
goto v_reusejp_4027_;
}
v_reusejp_4027_:
{
lean_object* v___x_4030_; 
lean_ctor_set_uint8(v___x_4028_, sizeof(void*)*5, v___x_4000_);
if (v_isShared_4016_ == 0)
{
lean_ctor_set(v___x_4015_, 0, v___x_4028_);
v___x_4030_ = v___x_4015_;
goto v_reusejp_4029_;
}
else
{
lean_object* v_reuseFailAlloc_4031_; 
v_reuseFailAlloc_4031_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v_reuseFailAlloc_4031_, 0, v___x_4028_);
lean_ctor_set(v_reuseFailAlloc_4031_, 1, v_denoteEntries_4003_);
lean_ctor_set(v_reuseFailAlloc_4031_, 2, v_nextId_4004_);
lean_ctor_set(v_reuseFailAlloc_4031_, 3, v_steps_4005_);
lean_ctor_set(v_reuseFailAlloc_4031_, 4, v_queue_4006_);
lean_ctor_set(v_reuseFailAlloc_4031_, 5, v_basis_4007_);
lean_ctor_set(v_reuseFailAlloc_4031_, 6, v_diseqs_4008_);
lean_ctor_set(v_reuseFailAlloc_4031_, 7, v_invSet_4010_);
lean_ctor_set(v_reuseFailAlloc_4031_, 8, v_powIdentityVarCount_4011_);
lean_ctor_set(v_reuseFailAlloc_4031_, 9, v_numEq0_x3f_4012_);
lean_ctor_set_uint8(v_reuseFailAlloc_4031_, sizeof(void*)*10, v_recheck_4009_);
lean_ctor_set_uint8(v_reuseFailAlloc_4031_, sizeof(void*)*10 + 1, v_numEq0Updated_4013_);
v___x_4030_ = v_reuseFailAlloc_4031_;
goto v_reusejp_4029_;
}
v_reusejp_4029_:
{
return v___x_4030_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0___lam__4___boxed(lean_object* v___x_4036_, lean_object* v_s_4037_){
_start:
{
uint8_t v___x_130751__boxed_4038_; lean_object* v_res_4039_; 
v___x_130751__boxed_4038_ = lean_unbox(v___x_4036_);
v_res_4039_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0___lam__4(v___x_130751__boxed_4038_, v_s_4037_);
return v_res_4039_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__1_spec__3___redArg(lean_object* v_u_4040_, lean_object* v_type_4041_, lean_object* v_semiringInst_4042_, lean_object* v___y_4043_, lean_object* v___y_4044_, lean_object* v___y_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_){
_start:
{
lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; lean_object* v_inst_x27_4054_; lean_object* v_inst_4056_; lean_object* v___y_4057_; lean_object* v___y_4058_; lean_object* v___y_4059_; lean_object* v___y_4060_; lean_object* v___y_4061_; lean_object* v___y_4062_; lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v_instType_4071_; lean_object* v___x_4072_; 
v___x_4050_ = ((lean_object*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6_spec__13___redArg___closed__0));
v___x_4051_ = lean_box(0);
v___x_4052_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4052_, 0, v_u_4040_);
lean_ctor_set(v___x_4052_, 1, v___x_4051_);
lean_inc_ref_n(v___x_4052_, 2);
v___x_4053_ = l_Lean_mkConst(v___x_4050_, v___x_4052_);
lean_inc_ref_n(v_type_4041_, 2);
v_inst_x27_4054_ = l_Lean_mkAppB(v___x_4053_, v_type_4041_, v_semiringInst_4042_);
v___x_4069_ = ((lean_object*)(l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6_spec__13___redArg___closed__1));
v___x_4070_ = l_Lean_mkConst(v___x_4069_, v___x_4052_);
v_instType_4071_ = l_Lean_Expr_app___override(v___x_4070_, v_type_4041_);
v___x_4072_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_instType_4071_, v___y_4044_, v___y_4045_, v___y_4046_, v___y_4047_, v___y_4048_);
if (lean_obj_tag(v___x_4072_) == 0)
{
lean_object* v_a_4073_; 
v_a_4073_ = lean_ctor_get(v___x_4072_, 0);
lean_inc(v_a_4073_);
lean_dec_ref_known(v___x_4072_, 1);
if (lean_obj_tag(v_a_4073_) == 0)
{
v_inst_4056_ = v_inst_x27_4054_;
v___y_4057_ = v___y_4043_;
v___y_4058_ = v___y_4044_;
v___y_4059_ = v___y_4045_;
v___y_4060_ = v___y_4046_;
v___y_4061_ = v___y_4047_;
v___y_4062_ = v___y_4048_;
goto v___jp_4055_;
}
else
{
lean_object* v_val_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; 
v_val_4074_ = lean_ctor_get(v_a_4073_, 0);
lean_inc_n(v_val_4074_, 2);
lean_dec_ref_known(v_a_4073_, 1);
v___x_4075_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__5));
v___x_4076_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_checkInst(v___x_4075_, v_val_4074_, v_inst_x27_4054_, v___y_4045_, v___y_4046_, v___y_4047_, v___y_4048_);
if (lean_obj_tag(v___x_4076_) == 0)
{
lean_dec_ref_known(v___x_4076_, 1);
v_inst_4056_ = v_val_4074_;
v___y_4057_ = v___y_4043_;
v___y_4058_ = v___y_4044_;
v___y_4059_ = v___y_4045_;
v___y_4060_ = v___y_4046_;
v___y_4061_ = v___y_4047_;
v___y_4062_ = v___y_4048_;
goto v___jp_4055_;
}
else
{
lean_object* v_a_4077_; lean_object* v___x_4079_; uint8_t v_isShared_4080_; uint8_t v_isSharedCheck_4084_; 
lean_dec(v_val_4074_);
lean_dec_ref_known(v___x_4052_, 2);
lean_dec_ref(v_type_4041_);
v_a_4077_ = lean_ctor_get(v___x_4076_, 0);
v_isSharedCheck_4084_ = !lean_is_exclusive(v___x_4076_);
if (v_isSharedCheck_4084_ == 0)
{
v___x_4079_ = v___x_4076_;
v_isShared_4080_ = v_isSharedCheck_4084_;
goto v_resetjp_4078_;
}
else
{
lean_inc(v_a_4077_);
lean_dec(v___x_4076_);
v___x_4079_ = lean_box(0);
v_isShared_4080_ = v_isSharedCheck_4084_;
goto v_resetjp_4078_;
}
v_resetjp_4078_:
{
lean_object* v___x_4082_; 
if (v_isShared_4080_ == 0)
{
v___x_4082_ = v___x_4079_;
goto v_reusejp_4081_;
}
else
{
lean_object* v_reuseFailAlloc_4083_; 
v_reuseFailAlloc_4083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4083_, 0, v_a_4077_);
v___x_4082_ = v_reuseFailAlloc_4083_;
goto v_reusejp_4081_;
}
v_reusejp_4081_:
{
return v___x_4082_;
}
}
}
}
}
else
{
lean_object* v_a_4085_; lean_object* v___x_4087_; uint8_t v_isShared_4088_; uint8_t v_isSharedCheck_4092_; 
lean_dec_ref(v_inst_x27_4054_);
lean_dec_ref_known(v___x_4052_, 2);
lean_dec_ref(v_type_4041_);
v_a_4085_ = lean_ctor_get(v___x_4072_, 0);
v_isSharedCheck_4092_ = !lean_is_exclusive(v___x_4072_);
if (v_isSharedCheck_4092_ == 0)
{
v___x_4087_ = v___x_4072_;
v_isShared_4088_ = v_isSharedCheck_4092_;
goto v_resetjp_4086_;
}
else
{
lean_inc(v_a_4085_);
lean_dec(v___x_4072_);
v___x_4087_ = lean_box(0);
v_isShared_4088_ = v_isSharedCheck_4092_;
goto v_resetjp_4086_;
}
v_resetjp_4086_:
{
lean_object* v___x_4090_; 
if (v_isShared_4088_ == 0)
{
v___x_4090_ = v___x_4087_;
goto v_reusejp_4089_;
}
else
{
lean_object* v_reuseFailAlloc_4091_; 
v_reuseFailAlloc_4091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4091_, 0, v_a_4085_);
v___x_4090_ = v_reuseFailAlloc_4091_;
goto v_reusejp_4089_;
}
v_reusejp_4089_:
{
return v___x_4090_;
}
}
}
v___jp_4055_:
{
lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v___x_4066_; 
v___x_4063_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__5));
v___x_4064_ = l_Lean_mkConst(v___x_4063_, v___x_4052_);
v___x_4065_ = l_Lean_mkAppB(v___x_4064_, v_type_4041_, v_inst_4056_);
v___x_4066_ = l_Lean_Meta_Sym_canon(v___x_4065_, v___y_4057_, v___y_4058_, v___y_4059_, v___y_4060_, v___y_4061_, v___y_4062_);
if (lean_obj_tag(v___x_4066_) == 0)
{
lean_object* v_a_4067_; lean_object* v___x_4068_; 
v_a_4067_ = lean_ctor_get(v___x_4066_, 0);
lean_inc(v_a_4067_);
lean_dec_ref_known(v___x_4066_, 1);
v___x_4068_ = l_Lean_Meta_Sym_shareCommon(v_a_4067_, v___y_4057_, v___y_4058_, v___y_4059_, v___y_4060_, v___y_4061_, v___y_4062_);
return v___x_4068_;
}
else
{
return v___x_4066_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_u_4093_, lean_object* v_type_4094_, lean_object* v_semiringInst_4095_, lean_object* v___y_4096_, lean_object* v___y_4097_, lean_object* v___y_4098_, lean_object* v___y_4099_, lean_object* v___y_4100_, lean_object* v___y_4101_, lean_object* v___y_4102_){
_start:
{
lean_object* v_res_4103_; 
v_res_4103_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__1_spec__3___redArg(v_u_4093_, v_type_4094_, v_semiringInst_4095_, v___y_4096_, v___y_4097_, v___y_4098_, v___y_4099_, v___y_4100_, v___y_4101_);
lean_dec(v___y_4101_);
lean_dec_ref(v___y_4100_);
lean_dec(v___y_4099_);
lean_dec_ref(v___y_4098_);
lean_dec(v___y_4097_);
lean_dec_ref(v___y_4096_);
return v_res_4103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__1___lam__0(lean_object* v_a_4104_, lean_object* v_s_4105_){
_start:
{
lean_object* v_toRing_4106_; lean_object* v_invFn_x3f_4107_; lean_object* v_divFn_x3f_4108_; lean_object* v_zpowFn_x3f_4109_; lean_object* v_semiringId_x3f_4110_; lean_object* v_commSemiringInst_4111_; lean_object* v_commRingInst_4112_; lean_object* v_noZeroDivInst_x3f_4113_; lean_object* v_fieldInst_x3f_4114_; lean_object* v_powIdentityInst_x3f_4115_; lean_object* v___x_4117_; uint8_t v_isShared_4118_; uint8_t v_isSharedCheck_4147_; 
v_toRing_4106_ = lean_ctor_get(v_s_4105_, 0);
v_invFn_x3f_4107_ = lean_ctor_get(v_s_4105_, 1);
v_divFn_x3f_4108_ = lean_ctor_get(v_s_4105_, 2);
v_zpowFn_x3f_4109_ = lean_ctor_get(v_s_4105_, 3);
v_semiringId_x3f_4110_ = lean_ctor_get(v_s_4105_, 4);
v_commSemiringInst_4111_ = lean_ctor_get(v_s_4105_, 5);
v_commRingInst_4112_ = lean_ctor_get(v_s_4105_, 6);
v_noZeroDivInst_x3f_4113_ = lean_ctor_get(v_s_4105_, 7);
v_fieldInst_x3f_4114_ = lean_ctor_get(v_s_4105_, 8);
v_powIdentityInst_x3f_4115_ = lean_ctor_get(v_s_4105_, 9);
v_isSharedCheck_4147_ = !lean_is_exclusive(v_s_4105_);
if (v_isSharedCheck_4147_ == 0)
{
v___x_4117_ = v_s_4105_;
v_isShared_4118_ = v_isSharedCheck_4147_;
goto v_resetjp_4116_;
}
else
{
lean_inc(v_powIdentityInst_x3f_4115_);
lean_inc(v_fieldInst_x3f_4114_);
lean_inc(v_noZeroDivInst_x3f_4113_);
lean_inc(v_commRingInst_4112_);
lean_inc(v_commSemiringInst_4111_);
lean_inc(v_semiringId_x3f_4110_);
lean_inc(v_zpowFn_x3f_4109_);
lean_inc(v_divFn_x3f_4108_);
lean_inc(v_invFn_x3f_4107_);
lean_inc(v_toRing_4106_);
lean_dec(v_s_4105_);
v___x_4117_ = lean_box(0);
v_isShared_4118_ = v_isSharedCheck_4147_;
goto v_resetjp_4116_;
}
v_resetjp_4116_:
{
lean_object* v_id_4119_; lean_object* v_type_4120_; lean_object* v_u_4121_; lean_object* v_ringInst_4122_; lean_object* v_semiringInst_4123_; lean_object* v_charInst_x3f_4124_; uint8_t v_symbolicChar_4125_; lean_object* v_addFn_x3f_4126_; lean_object* v_mulFn_x3f_4127_; lean_object* v_subFn_x3f_4128_; lean_object* v_negFn_x3f_4129_; lean_object* v_powFn_x3f_4130_; lean_object* v_intCastFn_x3f_4131_; lean_object* v_natSMulFn_x3f_4132_; lean_object* v_intSMulFn_x3f_4133_; lean_object* v_one_x3f_4134_; lean_object* v___x_4136_; uint8_t v_isShared_4137_; uint8_t v_isSharedCheck_4145_; 
v_id_4119_ = lean_ctor_get(v_toRing_4106_, 0);
v_type_4120_ = lean_ctor_get(v_toRing_4106_, 1);
v_u_4121_ = lean_ctor_get(v_toRing_4106_, 2);
v_ringInst_4122_ = lean_ctor_get(v_toRing_4106_, 3);
v_semiringInst_4123_ = lean_ctor_get(v_toRing_4106_, 4);
v_charInst_x3f_4124_ = lean_ctor_get(v_toRing_4106_, 5);
v_symbolicChar_4125_ = lean_ctor_get_uint8(v_toRing_4106_, sizeof(void*)*16);
v_addFn_x3f_4126_ = lean_ctor_get(v_toRing_4106_, 6);
v_mulFn_x3f_4127_ = lean_ctor_get(v_toRing_4106_, 7);
v_subFn_x3f_4128_ = lean_ctor_get(v_toRing_4106_, 8);
v_negFn_x3f_4129_ = lean_ctor_get(v_toRing_4106_, 9);
v_powFn_x3f_4130_ = lean_ctor_get(v_toRing_4106_, 10);
v_intCastFn_x3f_4131_ = lean_ctor_get(v_toRing_4106_, 11);
v_natSMulFn_x3f_4132_ = lean_ctor_get(v_toRing_4106_, 13);
v_intSMulFn_x3f_4133_ = lean_ctor_get(v_toRing_4106_, 14);
v_one_x3f_4134_ = lean_ctor_get(v_toRing_4106_, 15);
v_isSharedCheck_4145_ = !lean_is_exclusive(v_toRing_4106_);
if (v_isSharedCheck_4145_ == 0)
{
lean_object* v_unused_4146_; 
v_unused_4146_ = lean_ctor_get(v_toRing_4106_, 12);
lean_dec(v_unused_4146_);
v___x_4136_ = v_toRing_4106_;
v_isShared_4137_ = v_isSharedCheck_4145_;
goto v_resetjp_4135_;
}
else
{
lean_inc(v_one_x3f_4134_);
lean_inc(v_intSMulFn_x3f_4133_);
lean_inc(v_natSMulFn_x3f_4132_);
lean_inc(v_intCastFn_x3f_4131_);
lean_inc(v_powFn_x3f_4130_);
lean_inc(v_negFn_x3f_4129_);
lean_inc(v_subFn_x3f_4128_);
lean_inc(v_mulFn_x3f_4127_);
lean_inc(v_addFn_x3f_4126_);
lean_inc(v_charInst_x3f_4124_);
lean_inc(v_semiringInst_4123_);
lean_inc(v_ringInst_4122_);
lean_inc(v_u_4121_);
lean_inc(v_type_4120_);
lean_inc(v_id_4119_);
lean_dec(v_toRing_4106_);
v___x_4136_ = lean_box(0);
v_isShared_4137_ = v_isSharedCheck_4145_;
goto v_resetjp_4135_;
}
v_resetjp_4135_:
{
lean_object* v___x_4138_; lean_object* v___x_4140_; 
v___x_4138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4138_, 0, v_a_4104_);
if (v_isShared_4137_ == 0)
{
lean_ctor_set(v___x_4136_, 12, v___x_4138_);
v___x_4140_ = v___x_4136_;
goto v_reusejp_4139_;
}
else
{
lean_object* v_reuseFailAlloc_4144_; 
v_reuseFailAlloc_4144_ = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(v_reuseFailAlloc_4144_, 0, v_id_4119_);
lean_ctor_set(v_reuseFailAlloc_4144_, 1, v_type_4120_);
lean_ctor_set(v_reuseFailAlloc_4144_, 2, v_u_4121_);
lean_ctor_set(v_reuseFailAlloc_4144_, 3, v_ringInst_4122_);
lean_ctor_set(v_reuseFailAlloc_4144_, 4, v_semiringInst_4123_);
lean_ctor_set(v_reuseFailAlloc_4144_, 5, v_charInst_x3f_4124_);
lean_ctor_set(v_reuseFailAlloc_4144_, 6, v_addFn_x3f_4126_);
lean_ctor_set(v_reuseFailAlloc_4144_, 7, v_mulFn_x3f_4127_);
lean_ctor_set(v_reuseFailAlloc_4144_, 8, v_subFn_x3f_4128_);
lean_ctor_set(v_reuseFailAlloc_4144_, 9, v_negFn_x3f_4129_);
lean_ctor_set(v_reuseFailAlloc_4144_, 10, v_powFn_x3f_4130_);
lean_ctor_set(v_reuseFailAlloc_4144_, 11, v_intCastFn_x3f_4131_);
lean_ctor_set(v_reuseFailAlloc_4144_, 12, v___x_4138_);
lean_ctor_set(v_reuseFailAlloc_4144_, 13, v_natSMulFn_x3f_4132_);
lean_ctor_set(v_reuseFailAlloc_4144_, 14, v_intSMulFn_x3f_4133_);
lean_ctor_set(v_reuseFailAlloc_4144_, 15, v_one_x3f_4134_);
lean_ctor_set_uint8(v_reuseFailAlloc_4144_, sizeof(void*)*16, v_symbolicChar_4125_);
v___x_4140_ = v_reuseFailAlloc_4144_;
goto v_reusejp_4139_;
}
v_reusejp_4139_:
{
lean_object* v___x_4142_; 
if (v_isShared_4118_ == 0)
{
lean_ctor_set(v___x_4117_, 0, v___x_4140_);
v___x_4142_ = v___x_4117_;
goto v_reusejp_4141_;
}
else
{
lean_object* v_reuseFailAlloc_4143_; 
v_reuseFailAlloc_4143_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4143_, 0, v___x_4140_);
lean_ctor_set(v_reuseFailAlloc_4143_, 1, v_invFn_x3f_4107_);
lean_ctor_set(v_reuseFailAlloc_4143_, 2, v_divFn_x3f_4108_);
lean_ctor_set(v_reuseFailAlloc_4143_, 3, v_zpowFn_x3f_4109_);
lean_ctor_set(v_reuseFailAlloc_4143_, 4, v_semiringId_x3f_4110_);
lean_ctor_set(v_reuseFailAlloc_4143_, 5, v_commSemiringInst_4111_);
lean_ctor_set(v_reuseFailAlloc_4143_, 6, v_commRingInst_4112_);
lean_ctor_set(v_reuseFailAlloc_4143_, 7, v_noZeroDivInst_x3f_4113_);
lean_ctor_set(v_reuseFailAlloc_4143_, 8, v_fieldInst_x3f_4114_);
lean_ctor_set(v_reuseFailAlloc_4143_, 9, v_powIdentityInst_x3f_4115_);
v___x_4142_ = v_reuseFailAlloc_4143_;
goto v_reusejp_4141_;
}
v_reusejp_4141_:
{
return v___x_4142_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__1(lean_object* v___y_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_, lean_object* v___y_4151_, lean_object* v___y_4152_, lean_object* v___y_4153_, lean_object* v___y_4154_, lean_object* v___y_4155_, lean_object* v___y_4156_, lean_object* v___y_4157_, lean_object* v___y_4158_){
_start:
{
lean_object* v___x_4160_; 
v___x_4160_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v___y_4148_, v___y_4149_, v___y_4150_, v___y_4151_, v___y_4152_, v___y_4153_, v___y_4154_, v___y_4155_, v___y_4156_, v___y_4157_, v___y_4158_);
if (lean_obj_tag(v___x_4160_) == 0)
{
lean_object* v_a_4161_; lean_object* v___x_4163_; uint8_t v_isShared_4164_; uint8_t v_isSharedCheck_4194_; 
v_a_4161_ = lean_ctor_get(v___x_4160_, 0);
v_isSharedCheck_4194_ = !lean_is_exclusive(v___x_4160_);
if (v_isSharedCheck_4194_ == 0)
{
v___x_4163_ = v___x_4160_;
v_isShared_4164_ = v_isSharedCheck_4194_;
goto v_resetjp_4162_;
}
else
{
lean_inc(v_a_4161_);
lean_dec(v___x_4160_);
v___x_4163_ = lean_box(0);
v_isShared_4164_ = v_isSharedCheck_4194_;
goto v_resetjp_4162_;
}
v_resetjp_4162_:
{
lean_object* v_toRing_4165_; lean_object* v_natCastFn_x3f_4166_; 
v_toRing_4165_ = lean_ctor_get(v_a_4161_, 0);
lean_inc_ref(v_toRing_4165_);
lean_dec(v_a_4161_);
v_natCastFn_x3f_4166_ = lean_ctor_get(v_toRing_4165_, 12);
if (lean_obj_tag(v_natCastFn_x3f_4166_) == 1)
{
lean_object* v_val_4167_; lean_object* v___x_4169_; 
lean_inc_ref(v_natCastFn_x3f_4166_);
lean_dec_ref(v_toRing_4165_);
v_val_4167_ = lean_ctor_get(v_natCastFn_x3f_4166_, 0);
lean_inc(v_val_4167_);
lean_dec_ref_known(v_natCastFn_x3f_4166_, 1);
if (v_isShared_4164_ == 0)
{
lean_ctor_set(v___x_4163_, 0, v_val_4167_);
v___x_4169_ = v___x_4163_;
goto v_reusejp_4168_;
}
else
{
lean_object* v_reuseFailAlloc_4170_; 
v_reuseFailAlloc_4170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4170_, 0, v_val_4167_);
v___x_4169_ = v_reuseFailAlloc_4170_;
goto v_reusejp_4168_;
}
v_reusejp_4168_:
{
return v___x_4169_;
}
}
else
{
lean_object* v_type_4171_; lean_object* v_u_4172_; lean_object* v_semiringInst_4173_; lean_object* v___x_4174_; 
lean_del_object(v___x_4163_);
v_type_4171_ = lean_ctor_get(v_toRing_4165_, 1);
lean_inc_ref(v_type_4171_);
v_u_4172_ = lean_ctor_get(v_toRing_4165_, 2);
lean_inc(v_u_4172_);
v_semiringInst_4173_ = lean_ctor_get(v_toRing_4165_, 4);
lean_inc_ref(v_semiringInst_4173_);
lean_dec_ref(v_toRing_4165_);
v___x_4174_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__1_spec__3___redArg(v_u_4172_, v_type_4171_, v_semiringInst_4173_, v___y_4153_, v___y_4154_, v___y_4155_, v___y_4156_, v___y_4157_, v___y_4158_);
if (lean_obj_tag(v___x_4174_) == 0)
{
lean_object* v_a_4175_; lean_object* v___f_4176_; lean_object* v___x_4177_; 
v_a_4175_ = lean_ctor_get(v___x_4174_, 0);
lean_inc_n(v_a_4175_, 2);
lean_dec_ref_known(v___x_4174_, 1);
v___f_4176_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__1___lam__0), 2, 1);
lean_closure_set(v___f_4176_, 0, v_a_4175_);
v___x_4177_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(v___f_4176_, v___y_4148_, v___y_4154_);
if (lean_obj_tag(v___x_4177_) == 0)
{
lean_object* v___x_4179_; uint8_t v_isShared_4180_; uint8_t v_isSharedCheck_4184_; 
v_isSharedCheck_4184_ = !lean_is_exclusive(v___x_4177_);
if (v_isSharedCheck_4184_ == 0)
{
lean_object* v_unused_4185_; 
v_unused_4185_ = lean_ctor_get(v___x_4177_, 0);
lean_dec(v_unused_4185_);
v___x_4179_ = v___x_4177_;
v_isShared_4180_ = v_isSharedCheck_4184_;
goto v_resetjp_4178_;
}
else
{
lean_dec(v___x_4177_);
v___x_4179_ = lean_box(0);
v_isShared_4180_ = v_isSharedCheck_4184_;
goto v_resetjp_4178_;
}
v_resetjp_4178_:
{
lean_object* v___x_4182_; 
if (v_isShared_4180_ == 0)
{
lean_ctor_set(v___x_4179_, 0, v_a_4175_);
v___x_4182_ = v___x_4179_;
goto v_reusejp_4181_;
}
else
{
lean_object* v_reuseFailAlloc_4183_; 
v_reuseFailAlloc_4183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4183_, 0, v_a_4175_);
v___x_4182_ = v_reuseFailAlloc_4183_;
goto v_reusejp_4181_;
}
v_reusejp_4181_:
{
return v___x_4182_;
}
}
}
else
{
lean_object* v_a_4186_; lean_object* v___x_4188_; uint8_t v_isShared_4189_; uint8_t v_isSharedCheck_4193_; 
lean_dec(v_a_4175_);
v_a_4186_ = lean_ctor_get(v___x_4177_, 0);
v_isSharedCheck_4193_ = !lean_is_exclusive(v___x_4177_);
if (v_isSharedCheck_4193_ == 0)
{
v___x_4188_ = v___x_4177_;
v_isShared_4189_ = v_isSharedCheck_4193_;
goto v_resetjp_4187_;
}
else
{
lean_inc(v_a_4186_);
lean_dec(v___x_4177_);
v___x_4188_ = lean_box(0);
v_isShared_4189_ = v_isSharedCheck_4193_;
goto v_resetjp_4187_;
}
v_resetjp_4187_:
{
lean_object* v___x_4191_; 
if (v_isShared_4189_ == 0)
{
v___x_4191_ = v___x_4188_;
goto v_reusejp_4190_;
}
else
{
lean_object* v_reuseFailAlloc_4192_; 
v_reuseFailAlloc_4192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4192_, 0, v_a_4186_);
v___x_4191_ = v_reuseFailAlloc_4192_;
goto v_reusejp_4190_;
}
v_reusejp_4190_:
{
return v___x_4191_;
}
}
}
}
else
{
return v___x_4174_;
}
}
}
}
else
{
lean_object* v_a_4195_; lean_object* v___x_4197_; uint8_t v_isShared_4198_; uint8_t v_isSharedCheck_4202_; 
v_a_4195_ = lean_ctor_get(v___x_4160_, 0);
v_isSharedCheck_4202_ = !lean_is_exclusive(v___x_4160_);
if (v_isSharedCheck_4202_ == 0)
{
v___x_4197_ = v___x_4160_;
v_isShared_4198_ = v_isSharedCheck_4202_;
goto v_resetjp_4196_;
}
else
{
lean_inc(v_a_4195_);
lean_dec(v___x_4160_);
v___x_4197_ = lean_box(0);
v_isShared_4198_ = v_isSharedCheck_4202_;
goto v_resetjp_4196_;
}
v_resetjp_4196_:
{
lean_object* v___x_4200_; 
if (v_isShared_4198_ == 0)
{
v___x_4200_ = v___x_4197_;
goto v_reusejp_4199_;
}
else
{
lean_object* v_reuseFailAlloc_4201_; 
v_reuseFailAlloc_4201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4201_, 0, v_a_4195_);
v___x_4200_ = v_reuseFailAlloc_4201_;
goto v_reusejp_4199_;
}
v_reusejp_4199_:
{
return v___x_4200_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__1___boxed(lean_object* v___y_4203_, lean_object* v___y_4204_, lean_object* v___y_4205_, lean_object* v___y_4206_, lean_object* v___y_4207_, lean_object* v___y_4208_, lean_object* v___y_4209_, lean_object* v___y_4210_, lean_object* v___y_4211_, lean_object* v___y_4212_, lean_object* v___y_4213_, lean_object* v___y_4214_){
_start:
{
lean_object* v_res_4215_; 
v_res_4215_ = l_Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__1(v___y_4203_, v___y_4204_, v___y_4205_, v___y_4206_, v___y_4207_, v___y_4208_, v___y_4209_, v___y_4210_, v___y_4211_, v___y_4212_, v___y_4213_);
lean_dec(v___y_4213_);
lean_dec_ref(v___y_4212_);
lean_dec(v___y_4211_);
lean_dec_ref(v___y_4210_);
lean_dec(v___y_4209_);
lean_dec_ref(v___y_4208_);
lean_dec(v___y_4207_);
lean_dec_ref(v___y_4206_);
lean_dec(v___y_4205_);
lean_dec(v___y_4204_);
lean_dec_ref(v___y_4203_);
return v_res_4215_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0___lam__2(lean_object* v_e_4216_, lean_object* v_s_4217_){
_start:
{
lean_object* v_toRingState_4218_; lean_object* v_denoteEntries_4219_; lean_object* v_nextId_4220_; lean_object* v_steps_4221_; lean_object* v_queue_4222_; lean_object* v_basis_4223_; lean_object* v_diseqs_4224_; uint8_t v_recheck_4225_; lean_object* v_invSet_4226_; lean_object* v_powIdentityVarCount_4227_; lean_object* v_numEq0_x3f_4228_; uint8_t v_numEq0Updated_4229_; lean_object* v___x_4231_; uint8_t v_isShared_4232_; uint8_t v_isSharedCheck_4250_; 
v_toRingState_4218_ = lean_ctor_get(v_s_4217_, 0);
v_denoteEntries_4219_ = lean_ctor_get(v_s_4217_, 1);
v_nextId_4220_ = lean_ctor_get(v_s_4217_, 2);
v_steps_4221_ = lean_ctor_get(v_s_4217_, 3);
v_queue_4222_ = lean_ctor_get(v_s_4217_, 4);
v_basis_4223_ = lean_ctor_get(v_s_4217_, 5);
v_diseqs_4224_ = lean_ctor_get(v_s_4217_, 6);
v_recheck_4225_ = lean_ctor_get_uint8(v_s_4217_, sizeof(void*)*10);
v_invSet_4226_ = lean_ctor_get(v_s_4217_, 7);
v_powIdentityVarCount_4227_ = lean_ctor_get(v_s_4217_, 8);
v_numEq0_x3f_4228_ = lean_ctor_get(v_s_4217_, 9);
v_numEq0Updated_4229_ = lean_ctor_get_uint8(v_s_4217_, sizeof(void*)*10 + 1);
v_isSharedCheck_4250_ = !lean_is_exclusive(v_s_4217_);
if (v_isSharedCheck_4250_ == 0)
{
v___x_4231_ = v_s_4217_;
v_isShared_4232_ = v_isSharedCheck_4250_;
goto v_resetjp_4230_;
}
else
{
lean_inc(v_numEq0_x3f_4228_);
lean_inc(v_powIdentityVarCount_4227_);
lean_inc(v_invSet_4226_);
lean_inc(v_diseqs_4224_);
lean_inc(v_basis_4223_);
lean_inc(v_queue_4222_);
lean_inc(v_steps_4221_);
lean_inc(v_nextId_4220_);
lean_inc(v_denoteEntries_4219_);
lean_inc(v_toRingState_4218_);
lean_dec(v_s_4217_);
v___x_4231_ = lean_box(0);
v_isShared_4232_ = v_isSharedCheck_4250_;
goto v_resetjp_4230_;
}
v_resetjp_4230_:
{
lean_object* v_vars_4233_; lean_object* v_varMap_4234_; lean_object* v_denote_4235_; lean_object* v_natCastSet_4236_; lean_object* v_natCasts_4237_; uint8_t v_hasIntCast_4238_; lean_object* v___x_4240_; uint8_t v_isShared_4241_; uint8_t v_isSharedCheck_4249_; 
v_vars_4233_ = lean_ctor_get(v_toRingState_4218_, 0);
v_varMap_4234_ = lean_ctor_get(v_toRingState_4218_, 1);
v_denote_4235_ = lean_ctor_get(v_toRingState_4218_, 2);
v_natCastSet_4236_ = lean_ctor_get(v_toRingState_4218_, 3);
v_natCasts_4237_ = lean_ctor_get(v_toRingState_4218_, 4);
v_hasIntCast_4238_ = lean_ctor_get_uint8(v_toRingState_4218_, sizeof(void*)*5);
v_isSharedCheck_4249_ = !lean_is_exclusive(v_toRingState_4218_);
if (v_isSharedCheck_4249_ == 0)
{
v___x_4240_ = v_toRingState_4218_;
v_isShared_4241_ = v_isSharedCheck_4249_;
goto v_resetjp_4239_;
}
else
{
lean_inc(v_natCasts_4237_);
lean_inc(v_natCastSet_4236_);
lean_inc(v_denote_4235_);
lean_inc(v_varMap_4234_);
lean_inc(v_vars_4233_);
lean_dec(v_toRingState_4218_);
v___x_4240_ = lean_box(0);
v_isShared_4241_ = v_isSharedCheck_4249_;
goto v_resetjp_4239_;
}
v_resetjp_4239_:
{
lean_object* v___x_4242_; lean_object* v___x_4244_; 
v___x_4242_ = l_Lean_PersistentArray_push___redArg(v_natCasts_4237_, v_e_4216_);
if (v_isShared_4241_ == 0)
{
lean_ctor_set(v___x_4240_, 4, v___x_4242_);
v___x_4244_ = v___x_4240_;
goto v_reusejp_4243_;
}
else
{
lean_object* v_reuseFailAlloc_4248_; 
v_reuseFailAlloc_4248_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_4248_, 0, v_vars_4233_);
lean_ctor_set(v_reuseFailAlloc_4248_, 1, v_varMap_4234_);
lean_ctor_set(v_reuseFailAlloc_4248_, 2, v_denote_4235_);
lean_ctor_set(v_reuseFailAlloc_4248_, 3, v_natCastSet_4236_);
lean_ctor_set(v_reuseFailAlloc_4248_, 4, v___x_4242_);
lean_ctor_set_uint8(v_reuseFailAlloc_4248_, sizeof(void*)*5, v_hasIntCast_4238_);
v___x_4244_ = v_reuseFailAlloc_4248_;
goto v_reusejp_4243_;
}
v_reusejp_4243_:
{
lean_object* v___x_4246_; 
if (v_isShared_4232_ == 0)
{
lean_ctor_set(v___x_4231_, 0, v___x_4244_);
v___x_4246_ = v___x_4231_;
goto v_reusejp_4245_;
}
else
{
lean_object* v_reuseFailAlloc_4247_; 
v_reuseFailAlloc_4247_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v_reuseFailAlloc_4247_, 0, v___x_4244_);
lean_ctor_set(v_reuseFailAlloc_4247_, 1, v_denoteEntries_4219_);
lean_ctor_set(v_reuseFailAlloc_4247_, 2, v_nextId_4220_);
lean_ctor_set(v_reuseFailAlloc_4247_, 3, v_steps_4221_);
lean_ctor_set(v_reuseFailAlloc_4247_, 4, v_queue_4222_);
lean_ctor_set(v_reuseFailAlloc_4247_, 5, v_basis_4223_);
lean_ctor_set(v_reuseFailAlloc_4247_, 6, v_diseqs_4224_);
lean_ctor_set(v_reuseFailAlloc_4247_, 7, v_invSet_4226_);
lean_ctor_set(v_reuseFailAlloc_4247_, 8, v_powIdentityVarCount_4227_);
lean_ctor_set(v_reuseFailAlloc_4247_, 9, v_numEq0_x3f_4228_);
lean_ctor_set_uint8(v_reuseFailAlloc_4247_, sizeof(void*)*10, v_recheck_4225_);
lean_ctor_set_uint8(v_reuseFailAlloc_4247_, sizeof(void*)*10 + 1, v_numEq0Updated_4229_);
v___x_4246_ = v_reuseFailAlloc_4247_;
goto v_reusejp_4245_;
}
v_reusejp_4245_:
{
return v___x_4246_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0___lam__0(lean_object* v_____do__lift_4251_, lean_object* v___y_4252_, lean_object* v___y_4253_, lean_object* v___y_4254_, lean_object* v___y_4255_, lean_object* v___y_4256_, lean_object* v___y_4257_, lean_object* v___y_4258_, lean_object* v___y_4259_, lean_object* v___y_4260_, lean_object* v___y_4261_, lean_object* v___y_4262_){
_start:
{
lean_object* v_toRingState_4264_; lean_object* v___x_4265_; 
v_toRingState_4264_ = lean_ctor_get(v_____do__lift_4251_, 0);
lean_inc_ref(v_toRingState_4264_);
v___x_4265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4265_, 0, v_toRingState_4264_);
return v___x_4265_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0___lam__0___boxed(lean_object* v_____do__lift_4266_, lean_object* v___y_4267_, lean_object* v___y_4268_, lean_object* v___y_4269_, lean_object* v___y_4270_, lean_object* v___y_4271_, lean_object* v___y_4272_, lean_object* v___y_4273_, lean_object* v___y_4274_, lean_object* v___y_4275_, lean_object* v___y_4276_, lean_object* v___y_4277_, lean_object* v___y_4278_){
_start:
{
lean_object* v_res_4279_; 
v_res_4279_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0___lam__0(v_____do__lift_4266_, v___y_4267_, v___y_4268_, v___y_4269_, v___y_4270_, v___y_4271_, v___y_4272_, v___y_4273_, v___y_4274_, v___y_4275_, v___y_4276_, v___y_4277_);
lean_dec(v___y_4277_);
lean_dec_ref(v___y_4276_);
lean_dec(v___y_4275_);
lean_dec_ref(v___y_4274_);
lean_dec(v___y_4273_);
lean_dec_ref(v___y_4272_);
lean_dec(v___y_4271_);
lean_dec_ref(v___y_4270_);
lean_dec(v___y_4269_);
lean_dec(v___y_4268_);
lean_dec_ref(v___y_4267_);
lean_dec_ref(v_____do__lift_4266_);
return v_res_4279_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__9___redArg(lean_object* v___x_4280_, lean_object* v_a_4281_, lean_object* v_as_4282_, size_t v_i_4283_, size_t v_stop_4284_, lean_object* v_b_4285_, lean_object* v___y_4286_, lean_object* v___y_4287_, lean_object* v___y_4288_, lean_object* v___y_4289_, lean_object* v___y_4290_, lean_object* v___y_4291_, lean_object* v___y_4292_){
_start:
{
uint8_t v___x_4294_; 
v___x_4294_ = lean_usize_dec_eq(v_i_4283_, v_stop_4284_);
if (v___x_4294_ == 0)
{
lean_object* v___x_4295_; lean_object* v___x_4296_; 
v___x_4295_ = lean_array_uget_borrowed(v_as_4282_, v_i_4283_);
lean_inc(v___x_4295_);
lean_inc_ref(v_a_4281_);
lean_inc_ref(v___x_4280_);
v___x_4296_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg(v___x_4280_, v_a_4281_, v___x_4295_, v___y_4286_, v___y_4287_, v___y_4288_, v___y_4289_, v___y_4290_, v___y_4291_, v___y_4292_);
if (lean_obj_tag(v___x_4296_) == 0)
{
lean_object* v_a_4297_; size_t v___x_4298_; size_t v___x_4299_; 
v_a_4297_ = lean_ctor_get(v___x_4296_, 0);
lean_inc(v_a_4297_);
lean_dec_ref_known(v___x_4296_, 1);
v___x_4298_ = ((size_t)1ULL);
v___x_4299_ = lean_usize_add(v_i_4283_, v___x_4298_);
v_i_4283_ = v___x_4299_;
v_b_4285_ = v_a_4297_;
goto _start;
}
else
{
lean_dec_ref(v_a_4281_);
lean_dec_ref(v___x_4280_);
return v___x_4296_;
}
}
else
{
lean_object* v___x_4301_; 
lean_dec_ref(v_a_4281_);
lean_dec_ref(v___x_4280_);
v___x_4301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4301_, 0, v_b_4285_);
return v___x_4301_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__9___redArg___boxed(lean_object* v___x_4302_, lean_object* v_a_4303_, lean_object* v_as_4304_, lean_object* v_i_4305_, lean_object* v_stop_4306_, lean_object* v_b_4307_, lean_object* v___y_4308_, lean_object* v___y_4309_, lean_object* v___y_4310_, lean_object* v___y_4311_, lean_object* v___y_4312_, lean_object* v___y_4313_, lean_object* v___y_4314_, lean_object* v___y_4315_){
_start:
{
size_t v_i_boxed_4316_; size_t v_stop_boxed_4317_; lean_object* v_res_4318_; 
v_i_boxed_4316_ = lean_unbox_usize(v_i_4305_);
lean_dec(v_i_4305_);
v_stop_boxed_4317_ = lean_unbox_usize(v_stop_4306_);
lean_dec(v_stop_4306_);
v_res_4318_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__9___redArg(v___x_4302_, v_a_4303_, v_as_4304_, v_i_boxed_4316_, v_stop_boxed_4317_, v_b_4307_, v___y_4308_, v___y_4309_, v___y_4310_, v___y_4311_, v___y_4312_, v___y_4313_, v___y_4314_);
lean_dec(v___y_4314_);
lean_dec_ref(v___y_4313_);
lean_dec(v___y_4312_);
lean_dec_ref(v___y_4311_);
lean_dec(v___y_4310_);
lean_dec_ref(v___y_4309_);
lean_dec(v___y_4308_);
lean_dec_ref(v_as_4304_);
return v_res_4318_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__8_spec__14(lean_object* v___x_4319_, lean_object* v_a_4320_, lean_object* v_x_4321_, lean_object* v___y_4322_, lean_object* v___y_4323_, lean_object* v___y_4324_, lean_object* v___y_4325_, lean_object* v___y_4326_, lean_object* v___y_4327_, lean_object* v___y_4328_, lean_object* v___y_4329_, lean_object* v___y_4330_, lean_object* v___y_4331_, lean_object* v___y_4332_){
_start:
{
if (lean_obj_tag(v_x_4321_) == 0)
{
lean_object* v_cs_4334_; lean_object* v___x_4336_; uint8_t v_isShared_4337_; uint8_t v_isSharedCheck_4348_; 
v_cs_4334_ = lean_ctor_get(v_x_4321_, 0);
v_isSharedCheck_4348_ = !lean_is_exclusive(v_x_4321_);
if (v_isSharedCheck_4348_ == 0)
{
v___x_4336_ = v_x_4321_;
v_isShared_4337_ = v_isSharedCheck_4348_;
goto v_resetjp_4335_;
}
else
{
lean_inc(v_cs_4334_);
lean_dec(v_x_4321_);
v___x_4336_ = lean_box(0);
v_isShared_4337_ = v_isSharedCheck_4348_;
goto v_resetjp_4335_;
}
v_resetjp_4335_:
{
lean_object* v___x_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; uint8_t v___x_4341_; 
v___x_4338_ = lean_unsigned_to_nat(0u);
v___x_4339_ = lean_array_get_size(v_cs_4334_);
v___x_4340_ = lean_box(0);
v___x_4341_ = lean_nat_dec_lt(v___x_4338_, v___x_4339_);
if (v___x_4341_ == 0)
{
lean_object* v___x_4343_; 
lean_dec_ref(v_cs_4334_);
lean_dec_ref(v_a_4320_);
lean_dec_ref(v___x_4319_);
if (v_isShared_4337_ == 0)
{
lean_ctor_set(v___x_4336_, 0, v___x_4340_);
v___x_4343_ = v___x_4336_;
goto v_reusejp_4342_;
}
else
{
lean_object* v_reuseFailAlloc_4344_; 
v_reuseFailAlloc_4344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4344_, 0, v___x_4340_);
v___x_4343_ = v_reuseFailAlloc_4344_;
goto v_reusejp_4342_;
}
v_reusejp_4342_:
{
return v___x_4343_;
}
}
else
{
size_t v___x_4345_; size_t v___x_4346_; lean_object* v___x_4347_; 
lean_del_object(v___x_4336_);
v___x_4345_ = ((size_t)0ULL);
v___x_4346_ = lean_usize_of_nat(v___x_4339_);
v___x_4347_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__8_spec__15(v___x_4319_, v_a_4320_, v_cs_4334_, v___x_4345_, v___x_4346_, v___x_4340_, v___y_4322_, v___y_4323_, v___y_4324_, v___y_4325_, v___y_4326_, v___y_4327_, v___y_4328_, v___y_4329_, v___y_4330_, v___y_4331_, v___y_4332_);
lean_dec_ref(v_cs_4334_);
return v___x_4347_;
}
}
}
else
{
lean_object* v_vs_4349_; lean_object* v___x_4351_; uint8_t v_isShared_4352_; uint8_t v_isSharedCheck_4363_; 
v_vs_4349_ = lean_ctor_get(v_x_4321_, 0);
v_isSharedCheck_4363_ = !lean_is_exclusive(v_x_4321_);
if (v_isSharedCheck_4363_ == 0)
{
v___x_4351_ = v_x_4321_;
v_isShared_4352_ = v_isSharedCheck_4363_;
goto v_resetjp_4350_;
}
else
{
lean_inc(v_vs_4349_);
lean_dec(v_x_4321_);
v___x_4351_ = lean_box(0);
v_isShared_4352_ = v_isSharedCheck_4363_;
goto v_resetjp_4350_;
}
v_resetjp_4350_:
{
lean_object* v___x_4353_; lean_object* v___x_4354_; lean_object* v___x_4355_; uint8_t v___x_4356_; 
v___x_4353_ = lean_unsigned_to_nat(0u);
v___x_4354_ = lean_array_get_size(v_vs_4349_);
v___x_4355_ = lean_box(0);
v___x_4356_ = lean_nat_dec_lt(v___x_4353_, v___x_4354_);
if (v___x_4356_ == 0)
{
lean_object* v___x_4358_; 
lean_dec_ref(v_vs_4349_);
lean_dec_ref(v_a_4320_);
lean_dec_ref(v___x_4319_);
if (v_isShared_4352_ == 0)
{
lean_ctor_set_tag(v___x_4351_, 0);
lean_ctor_set(v___x_4351_, 0, v___x_4355_);
v___x_4358_ = v___x_4351_;
goto v_reusejp_4357_;
}
else
{
lean_object* v_reuseFailAlloc_4359_; 
v_reuseFailAlloc_4359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4359_, 0, v___x_4355_);
v___x_4358_ = v_reuseFailAlloc_4359_;
goto v_reusejp_4357_;
}
v_reusejp_4357_:
{
return v___x_4358_;
}
}
else
{
size_t v___x_4360_; size_t v___x_4361_; lean_object* v___x_4362_; 
lean_del_object(v___x_4351_);
v___x_4360_ = ((size_t)0ULL);
v___x_4361_ = lean_usize_of_nat(v___x_4354_);
v___x_4362_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__9___redArg(v___x_4319_, v_a_4320_, v_vs_4349_, v___x_4360_, v___x_4361_, v___x_4355_, v___y_4323_, v___y_4327_, v___y_4328_, v___y_4329_, v___y_4330_, v___y_4331_, v___y_4332_);
lean_dec_ref(v_vs_4349_);
return v___x_4362_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__8_spec__15(lean_object* v___x_4364_, lean_object* v_a_4365_, lean_object* v_as_4366_, size_t v_i_4367_, size_t v_stop_4368_, lean_object* v_b_4369_, lean_object* v___y_4370_, lean_object* v___y_4371_, lean_object* v___y_4372_, lean_object* v___y_4373_, lean_object* v___y_4374_, lean_object* v___y_4375_, lean_object* v___y_4376_, lean_object* v___y_4377_, lean_object* v___y_4378_, lean_object* v___y_4379_, lean_object* v___y_4380_){
_start:
{
uint8_t v___x_4382_; 
v___x_4382_ = lean_usize_dec_eq(v_i_4367_, v_stop_4368_);
if (v___x_4382_ == 0)
{
lean_object* v___x_4383_; lean_object* v___x_4384_; 
v___x_4383_ = lean_array_uget_borrowed(v_as_4366_, v_i_4367_);
lean_inc(v___x_4383_);
lean_inc_ref(v_a_4365_);
lean_inc_ref(v___x_4364_);
v___x_4384_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__8_spec__14(v___x_4364_, v_a_4365_, v___x_4383_, v___y_4370_, v___y_4371_, v___y_4372_, v___y_4373_, v___y_4374_, v___y_4375_, v___y_4376_, v___y_4377_, v___y_4378_, v___y_4379_, v___y_4380_);
if (lean_obj_tag(v___x_4384_) == 0)
{
lean_object* v_a_4385_; size_t v___x_4386_; size_t v___x_4387_; 
v_a_4385_ = lean_ctor_get(v___x_4384_, 0);
lean_inc(v_a_4385_);
lean_dec_ref_known(v___x_4384_, 1);
v___x_4386_ = ((size_t)1ULL);
v___x_4387_ = lean_usize_add(v_i_4367_, v___x_4386_);
v_i_4367_ = v___x_4387_;
v_b_4369_ = v_a_4385_;
goto _start;
}
else
{
lean_dec_ref(v_a_4365_);
lean_dec_ref(v___x_4364_);
return v___x_4384_;
}
}
else
{
lean_object* v___x_4389_; 
lean_dec_ref(v_a_4365_);
lean_dec_ref(v___x_4364_);
v___x_4389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4389_, 0, v_b_4369_);
return v___x_4389_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__8_spec__15___boxed(lean_object** _args){
lean_object* v___x_4390_ = _args[0];
lean_object* v_a_4391_ = _args[1];
lean_object* v_as_4392_ = _args[2];
lean_object* v_i_4393_ = _args[3];
lean_object* v_stop_4394_ = _args[4];
lean_object* v_b_4395_ = _args[5];
lean_object* v___y_4396_ = _args[6];
lean_object* v___y_4397_ = _args[7];
lean_object* v___y_4398_ = _args[8];
lean_object* v___y_4399_ = _args[9];
lean_object* v___y_4400_ = _args[10];
lean_object* v___y_4401_ = _args[11];
lean_object* v___y_4402_ = _args[12];
lean_object* v___y_4403_ = _args[13];
lean_object* v___y_4404_ = _args[14];
lean_object* v___y_4405_ = _args[15];
lean_object* v___y_4406_ = _args[16];
lean_object* v___y_4407_ = _args[17];
_start:
{
size_t v_i_boxed_4408_; size_t v_stop_boxed_4409_; lean_object* v_res_4410_; 
v_i_boxed_4408_ = lean_unbox_usize(v_i_4393_);
lean_dec(v_i_4393_);
v_stop_boxed_4409_ = lean_unbox_usize(v_stop_4394_);
lean_dec(v_stop_4394_);
v_res_4410_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__8_spec__15(v___x_4390_, v_a_4391_, v_as_4392_, v_i_boxed_4408_, v_stop_boxed_4409_, v_b_4395_, v___y_4396_, v___y_4397_, v___y_4398_, v___y_4399_, v___y_4400_, v___y_4401_, v___y_4402_, v___y_4403_, v___y_4404_, v___y_4405_, v___y_4406_);
lean_dec(v___y_4406_);
lean_dec_ref(v___y_4405_);
lean_dec(v___y_4404_);
lean_dec_ref(v___y_4403_);
lean_dec(v___y_4402_);
lean_dec_ref(v___y_4401_);
lean_dec(v___y_4400_);
lean_dec_ref(v___y_4399_);
lean_dec(v___y_4398_);
lean_dec(v___y_4397_);
lean_dec_ref(v___y_4396_);
lean_dec_ref(v_as_4392_);
return v_res_4410_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__8_spec__14___boxed(lean_object* v___x_4411_, lean_object* v_a_4412_, lean_object* v_x_4413_, lean_object* v___y_4414_, lean_object* v___y_4415_, lean_object* v___y_4416_, lean_object* v___y_4417_, lean_object* v___y_4418_, lean_object* v___y_4419_, lean_object* v___y_4420_, lean_object* v___y_4421_, lean_object* v___y_4422_, lean_object* v___y_4423_, lean_object* v___y_4424_, lean_object* v___y_4425_){
_start:
{
lean_object* v_res_4426_; 
v_res_4426_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__8_spec__14(v___x_4411_, v_a_4412_, v_x_4413_, v___y_4414_, v___y_4415_, v___y_4416_, v___y_4417_, v___y_4418_, v___y_4419_, v___y_4420_, v___y_4421_, v___y_4422_, v___y_4423_, v___y_4424_);
lean_dec(v___y_4424_);
lean_dec_ref(v___y_4423_);
lean_dec(v___y_4422_);
lean_dec_ref(v___y_4421_);
lean_dec(v___y_4420_);
lean_dec_ref(v___y_4419_);
lean_dec(v___y_4418_);
lean_dec_ref(v___y_4417_);
lean_dec(v___y_4416_);
lean_dec(v___y_4415_);
lean_dec_ref(v___y_4414_);
return v_res_4426_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__8(lean_object* v___x_4427_, lean_object* v_a_4428_, lean_object* v_x_4429_, size_t v_x_4430_, size_t v_x_4431_, lean_object* v___y_4432_, lean_object* v___y_4433_, lean_object* v___y_4434_, lean_object* v___y_4435_, lean_object* v___y_4436_, lean_object* v___y_4437_, lean_object* v___y_4438_, lean_object* v___y_4439_, lean_object* v___y_4440_, lean_object* v___y_4441_, lean_object* v___y_4442_){
_start:
{
if (lean_obj_tag(v_x_4429_) == 0)
{
lean_object* v_cs_4444_; lean_object* v___x_4445_; size_t v___x_4446_; lean_object* v_j_4447_; lean_object* v___x_4448_; size_t v___x_4449_; size_t v___x_4450_; size_t v___x_4451_; size_t v___x_4452_; size_t v___x_4453_; size_t v___x_4454_; lean_object* v___x_4455_; 
v_cs_4444_ = lean_ctor_get(v_x_4429_, 0);
lean_inc_ref(v_cs_4444_);
lean_dec_ref_known(v_x_4429_, 1);
v___x_4445_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__16___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__16___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__16___closed__0);
v___x_4446_ = lean_usize_shift_right(v_x_4430_, v_x_4431_);
v_j_4447_ = lean_usize_to_nat(v___x_4446_);
v___x_4448_ = lean_array_get_borrowed(v___x_4445_, v_cs_4444_, v_j_4447_);
v___x_4449_ = ((size_t)1ULL);
v___x_4450_ = lean_usize_shift_left(v___x_4449_, v_x_4431_);
v___x_4451_ = lean_usize_sub(v___x_4450_, v___x_4449_);
v___x_4452_ = lean_usize_land(v_x_4430_, v___x_4451_);
v___x_4453_ = ((size_t)5ULL);
v___x_4454_ = lean_usize_sub(v_x_4431_, v___x_4453_);
lean_inc(v___x_4448_);
lean_inc_ref(v_a_4428_);
lean_inc_ref(v___x_4427_);
v___x_4455_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__8(v___x_4427_, v_a_4428_, v___x_4448_, v___x_4452_, v___x_4454_, v___y_4432_, v___y_4433_, v___y_4434_, v___y_4435_, v___y_4436_, v___y_4437_, v___y_4438_, v___y_4439_, v___y_4440_, v___y_4441_, v___y_4442_);
if (lean_obj_tag(v___x_4455_) == 0)
{
lean_object* v___x_4457_; uint8_t v_isShared_4458_; uint8_t v_isSharedCheck_4470_; 
v_isSharedCheck_4470_ = !lean_is_exclusive(v___x_4455_);
if (v_isSharedCheck_4470_ == 0)
{
lean_object* v_unused_4471_; 
v_unused_4471_ = lean_ctor_get(v___x_4455_, 0);
lean_dec(v_unused_4471_);
v___x_4457_ = v___x_4455_;
v_isShared_4458_ = v_isSharedCheck_4470_;
goto v_resetjp_4456_;
}
else
{
lean_dec(v___x_4455_);
v___x_4457_ = lean_box(0);
v_isShared_4458_ = v_isSharedCheck_4470_;
goto v_resetjp_4456_;
}
v_resetjp_4456_:
{
lean_object* v___x_4459_; lean_object* v___x_4460_; lean_object* v___x_4461_; lean_object* v___x_4462_; uint8_t v___x_4463_; 
v___x_4459_ = lean_unsigned_to_nat(1u);
v___x_4460_ = lean_nat_add(v_j_4447_, v___x_4459_);
lean_dec(v_j_4447_);
v___x_4461_ = lean_array_get_size(v_cs_4444_);
v___x_4462_ = lean_box(0);
v___x_4463_ = lean_nat_dec_lt(v___x_4460_, v___x_4461_);
if (v___x_4463_ == 0)
{
lean_object* v___x_4465_; 
lean_dec(v___x_4460_);
lean_dec_ref(v_cs_4444_);
lean_dec_ref(v_a_4428_);
lean_dec_ref(v___x_4427_);
if (v_isShared_4458_ == 0)
{
lean_ctor_set(v___x_4457_, 0, v___x_4462_);
v___x_4465_ = v___x_4457_;
goto v_reusejp_4464_;
}
else
{
lean_object* v_reuseFailAlloc_4466_; 
v_reuseFailAlloc_4466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4466_, 0, v___x_4462_);
v___x_4465_ = v_reuseFailAlloc_4466_;
goto v_reusejp_4464_;
}
v_reusejp_4464_:
{
return v___x_4465_;
}
}
else
{
size_t v___x_4467_; size_t v___x_4468_; lean_object* v___x_4469_; 
lean_del_object(v___x_4457_);
v___x_4467_ = lean_usize_of_nat(v___x_4460_);
lean_dec(v___x_4460_);
v___x_4468_ = lean_usize_of_nat(v___x_4461_);
v___x_4469_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__8_spec__15(v___x_4427_, v_a_4428_, v_cs_4444_, v___x_4467_, v___x_4468_, v___x_4462_, v___y_4432_, v___y_4433_, v___y_4434_, v___y_4435_, v___y_4436_, v___y_4437_, v___y_4438_, v___y_4439_, v___y_4440_, v___y_4441_, v___y_4442_);
lean_dec_ref(v_cs_4444_);
return v___x_4469_;
}
}
}
else
{
lean_dec(v_j_4447_);
lean_dec_ref(v_cs_4444_);
lean_dec_ref(v_a_4428_);
lean_dec_ref(v___x_4427_);
return v___x_4455_;
}
}
else
{
lean_object* v_vs_4472_; lean_object* v___x_4474_; uint8_t v_isShared_4475_; uint8_t v_isSharedCheck_4486_; 
v_vs_4472_ = lean_ctor_get(v_x_4429_, 0);
v_isSharedCheck_4486_ = !lean_is_exclusive(v_x_4429_);
if (v_isSharedCheck_4486_ == 0)
{
v___x_4474_ = v_x_4429_;
v_isShared_4475_ = v_isSharedCheck_4486_;
goto v_resetjp_4473_;
}
else
{
lean_inc(v_vs_4472_);
lean_dec(v_x_4429_);
v___x_4474_ = lean_box(0);
v_isShared_4475_ = v_isSharedCheck_4486_;
goto v_resetjp_4473_;
}
v_resetjp_4473_:
{
lean_object* v___x_4476_; lean_object* v___x_4477_; lean_object* v___x_4478_; uint8_t v___x_4479_; 
v___x_4476_ = lean_usize_to_nat(v_x_4430_);
v___x_4477_ = lean_array_get_size(v_vs_4472_);
v___x_4478_ = lean_box(0);
v___x_4479_ = lean_nat_dec_lt(v___x_4476_, v___x_4477_);
if (v___x_4479_ == 0)
{
lean_object* v___x_4481_; 
lean_dec(v___x_4476_);
lean_dec_ref(v_vs_4472_);
lean_dec_ref(v_a_4428_);
lean_dec_ref(v___x_4427_);
if (v_isShared_4475_ == 0)
{
lean_ctor_set_tag(v___x_4474_, 0);
lean_ctor_set(v___x_4474_, 0, v___x_4478_);
v___x_4481_ = v___x_4474_;
goto v_reusejp_4480_;
}
else
{
lean_object* v_reuseFailAlloc_4482_; 
v_reuseFailAlloc_4482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4482_, 0, v___x_4478_);
v___x_4481_ = v_reuseFailAlloc_4482_;
goto v_reusejp_4480_;
}
v_reusejp_4480_:
{
return v___x_4481_;
}
}
else
{
size_t v___x_4483_; size_t v___x_4484_; lean_object* v___x_4485_; 
lean_del_object(v___x_4474_);
v___x_4483_ = lean_usize_of_nat(v___x_4476_);
lean_dec(v___x_4476_);
v___x_4484_ = lean_usize_of_nat(v___x_4477_);
v___x_4485_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__9___redArg(v___x_4427_, v_a_4428_, v_vs_4472_, v___x_4483_, v___x_4484_, v___x_4478_, v___y_4433_, v___y_4437_, v___y_4438_, v___y_4439_, v___y_4440_, v___y_4441_, v___y_4442_);
lean_dec_ref(v_vs_4472_);
return v___x_4485_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__8___boxed(lean_object** _args){
lean_object* v___x_4487_ = _args[0];
lean_object* v_a_4488_ = _args[1];
lean_object* v_x_4489_ = _args[2];
lean_object* v_x_4490_ = _args[3];
lean_object* v_x_4491_ = _args[4];
lean_object* v___y_4492_ = _args[5];
lean_object* v___y_4493_ = _args[6];
lean_object* v___y_4494_ = _args[7];
lean_object* v___y_4495_ = _args[8];
lean_object* v___y_4496_ = _args[9];
lean_object* v___y_4497_ = _args[10];
lean_object* v___y_4498_ = _args[11];
lean_object* v___y_4499_ = _args[12];
lean_object* v___y_4500_ = _args[13];
lean_object* v___y_4501_ = _args[14];
lean_object* v___y_4502_ = _args[15];
lean_object* v___y_4503_ = _args[16];
_start:
{
size_t v_x_131353__boxed_4504_; size_t v_x_131354__boxed_4505_; lean_object* v_res_4506_; 
v_x_131353__boxed_4504_ = lean_unbox_usize(v_x_4490_);
lean_dec(v_x_4490_);
v_x_131354__boxed_4505_ = lean_unbox_usize(v_x_4491_);
lean_dec(v_x_4491_);
v_res_4506_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__8(v___x_4487_, v_a_4488_, v_x_4489_, v_x_131353__boxed_4504_, v_x_131354__boxed_4505_, v___y_4492_, v___y_4493_, v___y_4494_, v___y_4495_, v___y_4496_, v___y_4497_, v___y_4498_, v___y_4499_, v___y_4500_, v___y_4501_, v___y_4502_);
lean_dec(v___y_4502_);
lean_dec_ref(v___y_4501_);
lean_dec(v___y_4500_);
lean_dec_ref(v___y_4499_);
lean_dec(v___y_4498_);
lean_dec_ref(v___y_4497_);
lean_dec(v___y_4496_);
lean_dec_ref(v___y_4495_);
lean_dec(v___y_4494_);
lean_dec(v___y_4493_);
lean_dec_ref(v___y_4492_);
return v_res_4506_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__10(lean_object* v___x_4507_, lean_object* v_a_4508_, lean_object* v_t_4509_, lean_object* v___y_4510_, lean_object* v___y_4511_, lean_object* v___y_4512_, lean_object* v___y_4513_, lean_object* v___y_4514_, lean_object* v___y_4515_, lean_object* v___y_4516_, lean_object* v___y_4517_, lean_object* v___y_4518_, lean_object* v___y_4519_, lean_object* v___y_4520_){
_start:
{
lean_object* v_root_4522_; lean_object* v_tail_4523_; lean_object* v___x_4524_; 
v_root_4522_ = lean_ctor_get(v_t_4509_, 0);
lean_inc_ref(v_root_4522_);
v_tail_4523_ = lean_ctor_get(v_t_4509_, 1);
lean_inc_ref(v_tail_4523_);
lean_dec_ref(v_t_4509_);
lean_inc_ref(v_a_4508_);
lean_inc_ref(v___x_4507_);
v___x_4524_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__8_spec__14(v___x_4507_, v_a_4508_, v_root_4522_, v___y_4510_, v___y_4511_, v___y_4512_, v___y_4513_, v___y_4514_, v___y_4515_, v___y_4516_, v___y_4517_, v___y_4518_, v___y_4519_, v___y_4520_);
if (lean_obj_tag(v___x_4524_) == 0)
{
lean_object* v___x_4526_; uint8_t v_isShared_4527_; uint8_t v_isSharedCheck_4538_; 
v_isSharedCheck_4538_ = !lean_is_exclusive(v___x_4524_);
if (v_isSharedCheck_4538_ == 0)
{
lean_object* v_unused_4539_; 
v_unused_4539_ = lean_ctor_get(v___x_4524_, 0);
lean_dec(v_unused_4539_);
v___x_4526_ = v___x_4524_;
v_isShared_4527_ = v_isSharedCheck_4538_;
goto v_resetjp_4525_;
}
else
{
lean_dec(v___x_4524_);
v___x_4526_ = lean_box(0);
v_isShared_4527_ = v_isSharedCheck_4538_;
goto v_resetjp_4525_;
}
v_resetjp_4525_:
{
lean_object* v___x_4528_; lean_object* v___x_4529_; lean_object* v___x_4530_; uint8_t v___x_4531_; 
v___x_4528_ = lean_unsigned_to_nat(0u);
v___x_4529_ = lean_array_get_size(v_tail_4523_);
v___x_4530_ = lean_box(0);
v___x_4531_ = lean_nat_dec_lt(v___x_4528_, v___x_4529_);
if (v___x_4531_ == 0)
{
lean_object* v___x_4533_; 
lean_dec_ref(v_tail_4523_);
lean_dec_ref(v_a_4508_);
lean_dec_ref(v___x_4507_);
if (v_isShared_4527_ == 0)
{
lean_ctor_set(v___x_4526_, 0, v___x_4530_);
v___x_4533_ = v___x_4526_;
goto v_reusejp_4532_;
}
else
{
lean_object* v_reuseFailAlloc_4534_; 
v_reuseFailAlloc_4534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4534_, 0, v___x_4530_);
v___x_4533_ = v_reuseFailAlloc_4534_;
goto v_reusejp_4532_;
}
v_reusejp_4532_:
{
return v___x_4533_;
}
}
else
{
size_t v___x_4535_; size_t v___x_4536_; lean_object* v___x_4537_; 
lean_del_object(v___x_4526_);
v___x_4535_ = ((size_t)0ULL);
v___x_4536_ = lean_usize_of_nat(v___x_4529_);
v___x_4537_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__9___redArg(v___x_4507_, v_a_4508_, v_tail_4523_, v___x_4535_, v___x_4536_, v___x_4530_, v___y_4511_, v___y_4515_, v___y_4516_, v___y_4517_, v___y_4518_, v___y_4519_, v___y_4520_);
lean_dec_ref(v_tail_4523_);
return v___x_4537_;
}
}
}
else
{
lean_dec_ref(v_tail_4523_);
lean_dec_ref(v_a_4508_);
lean_dec_ref(v___x_4507_);
return v___x_4524_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__10___boxed(lean_object* v___x_4540_, lean_object* v_a_4541_, lean_object* v_t_4542_, lean_object* v___y_4543_, lean_object* v___y_4544_, lean_object* v___y_4545_, lean_object* v___y_4546_, lean_object* v___y_4547_, lean_object* v___y_4548_, lean_object* v___y_4549_, lean_object* v___y_4550_, lean_object* v___y_4551_, lean_object* v___y_4552_, lean_object* v___y_4553_, lean_object* v___y_4554_){
_start:
{
lean_object* v_res_4555_; 
v_res_4555_ = l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__10(v___x_4540_, v_a_4541_, v_t_4542_, v___y_4543_, v___y_4544_, v___y_4545_, v___y_4546_, v___y_4547_, v___y_4548_, v___y_4549_, v___y_4550_, v___y_4551_, v___y_4552_, v___y_4553_);
lean_dec(v___y_4553_);
lean_dec_ref(v___y_4552_);
lean_dec(v___y_4551_);
lean_dec_ref(v___y_4550_);
lean_dec(v___y_4549_);
lean_dec_ref(v___y_4548_);
lean_dec(v___y_4547_);
lean_dec_ref(v___y_4546_);
lean_dec(v___y_4545_);
lean_dec(v___y_4544_);
lean_dec_ref(v___y_4543_);
return v_res_4555_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4(lean_object* v___x_4556_, lean_object* v_a_4557_, lean_object* v_t_4558_, lean_object* v_start_4559_, lean_object* v___y_4560_, lean_object* v___y_4561_, lean_object* v___y_4562_, lean_object* v___y_4563_, lean_object* v___y_4564_, lean_object* v___y_4565_, lean_object* v___y_4566_, lean_object* v___y_4567_, lean_object* v___y_4568_, lean_object* v___y_4569_, lean_object* v___y_4570_){
_start:
{
lean_object* v___x_4572_; uint8_t v___x_4573_; 
v___x_4572_ = lean_unsigned_to_nat(0u);
v___x_4573_ = lean_nat_dec_eq(v_start_4559_, v___x_4572_);
if (v___x_4573_ == 0)
{
lean_object* v_root_4574_; lean_object* v_tail_4575_; size_t v_shift_4576_; lean_object* v_tailOff_4577_; uint8_t v___x_4578_; 
v_root_4574_ = lean_ctor_get(v_t_4558_, 0);
lean_inc_ref(v_root_4574_);
v_tail_4575_ = lean_ctor_get(v_t_4558_, 1);
lean_inc_ref(v_tail_4575_);
v_shift_4576_ = lean_ctor_get_usize(v_t_4558_, 4);
v_tailOff_4577_ = lean_ctor_get(v_t_4558_, 3);
lean_inc(v_tailOff_4577_);
lean_dec_ref(v_t_4558_);
v___x_4578_ = lean_nat_dec_le(v_tailOff_4577_, v_start_4559_);
if (v___x_4578_ == 0)
{
size_t v___x_4579_; lean_object* v___x_4580_; 
lean_dec(v_tailOff_4577_);
v___x_4579_ = lean_usize_of_nat(v_start_4559_);
lean_inc_ref(v_a_4557_);
lean_inc_ref(v___x_4556_);
v___x_4580_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__8(v___x_4556_, v_a_4557_, v_root_4574_, v___x_4579_, v_shift_4576_, v___y_4560_, v___y_4561_, v___y_4562_, v___y_4563_, v___y_4564_, v___y_4565_, v___y_4566_, v___y_4567_, v___y_4568_, v___y_4569_, v___y_4570_);
if (lean_obj_tag(v___x_4580_) == 0)
{
lean_object* v___x_4582_; uint8_t v_isShared_4583_; uint8_t v_isSharedCheck_4593_; 
v_isSharedCheck_4593_ = !lean_is_exclusive(v___x_4580_);
if (v_isSharedCheck_4593_ == 0)
{
lean_object* v_unused_4594_; 
v_unused_4594_ = lean_ctor_get(v___x_4580_, 0);
lean_dec(v_unused_4594_);
v___x_4582_ = v___x_4580_;
v_isShared_4583_ = v_isSharedCheck_4593_;
goto v_resetjp_4581_;
}
else
{
lean_dec(v___x_4580_);
v___x_4582_ = lean_box(0);
v_isShared_4583_ = v_isSharedCheck_4593_;
goto v_resetjp_4581_;
}
v_resetjp_4581_:
{
lean_object* v___x_4584_; lean_object* v___x_4585_; uint8_t v___x_4586_; 
v___x_4584_ = lean_array_get_size(v_tail_4575_);
v___x_4585_ = lean_box(0);
v___x_4586_ = lean_nat_dec_lt(v___x_4572_, v___x_4584_);
if (v___x_4586_ == 0)
{
lean_object* v___x_4588_; 
lean_dec_ref(v_tail_4575_);
lean_dec_ref(v_a_4557_);
lean_dec_ref(v___x_4556_);
if (v_isShared_4583_ == 0)
{
lean_ctor_set(v___x_4582_, 0, v___x_4585_);
v___x_4588_ = v___x_4582_;
goto v_reusejp_4587_;
}
else
{
lean_object* v_reuseFailAlloc_4589_; 
v_reuseFailAlloc_4589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4589_, 0, v___x_4585_);
v___x_4588_ = v_reuseFailAlloc_4589_;
goto v_reusejp_4587_;
}
v_reusejp_4587_:
{
return v___x_4588_;
}
}
else
{
size_t v___x_4590_; size_t v___x_4591_; lean_object* v___x_4592_; 
lean_del_object(v___x_4582_);
v___x_4590_ = ((size_t)0ULL);
v___x_4591_ = lean_usize_of_nat(v___x_4584_);
v___x_4592_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__9___redArg(v___x_4556_, v_a_4557_, v_tail_4575_, v___x_4590_, v___x_4591_, v___x_4585_, v___y_4561_, v___y_4565_, v___y_4566_, v___y_4567_, v___y_4568_, v___y_4569_, v___y_4570_);
lean_dec_ref(v_tail_4575_);
return v___x_4592_;
}
}
}
else
{
lean_dec_ref(v_tail_4575_);
lean_dec_ref(v_a_4557_);
lean_dec_ref(v___x_4556_);
return v___x_4580_;
}
}
else
{
lean_object* v___x_4595_; lean_object* v___x_4596_; lean_object* v___x_4597_; uint8_t v___x_4598_; 
lean_dec_ref(v_root_4574_);
v___x_4595_ = lean_nat_sub(v_start_4559_, v_tailOff_4577_);
lean_dec(v_tailOff_4577_);
v___x_4596_ = lean_array_get_size(v_tail_4575_);
v___x_4597_ = lean_box(0);
v___x_4598_ = lean_nat_dec_lt(v___x_4595_, v___x_4596_);
if (v___x_4598_ == 0)
{
lean_object* v___x_4599_; 
lean_dec(v___x_4595_);
lean_dec_ref(v_tail_4575_);
lean_dec_ref(v_a_4557_);
lean_dec_ref(v___x_4556_);
v___x_4599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4599_, 0, v___x_4597_);
return v___x_4599_;
}
else
{
size_t v___x_4600_; size_t v___x_4601_; lean_object* v___x_4602_; 
v___x_4600_ = lean_usize_of_nat(v___x_4595_);
lean_dec(v___x_4595_);
v___x_4601_ = lean_usize_of_nat(v___x_4596_);
v___x_4602_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__9___redArg(v___x_4556_, v_a_4557_, v_tail_4575_, v___x_4600_, v___x_4601_, v___x_4597_, v___y_4561_, v___y_4565_, v___y_4566_, v___y_4567_, v___y_4568_, v___y_4569_, v___y_4570_);
lean_dec_ref(v_tail_4575_);
return v___x_4602_;
}
}
}
else
{
lean_object* v___x_4603_; 
v___x_4603_ = l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__10(v___x_4556_, v_a_4557_, v_t_4558_, v___y_4560_, v___y_4561_, v___y_4562_, v___y_4563_, v___y_4564_, v___y_4565_, v___y_4566_, v___y_4567_, v___y_4568_, v___y_4569_, v___y_4570_);
return v___x_4603_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4___boxed(lean_object* v___x_4604_, lean_object* v_a_4605_, lean_object* v_t_4606_, lean_object* v_start_4607_, lean_object* v___y_4608_, lean_object* v___y_4609_, lean_object* v___y_4610_, lean_object* v___y_4611_, lean_object* v___y_4612_, lean_object* v___y_4613_, lean_object* v___y_4614_, lean_object* v___y_4615_, lean_object* v___y_4616_, lean_object* v___y_4617_, lean_object* v___y_4618_, lean_object* v___y_4619_){
_start:
{
lean_object* v_res_4620_; 
v_res_4620_ = l_Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4(v___x_4604_, v_a_4605_, v_t_4606_, v_start_4607_, v___y_4608_, v___y_4609_, v___y_4610_, v___y_4611_, v___y_4612_, v___y_4613_, v___y_4614_, v___y_4615_, v___y_4616_, v___y_4617_, v___y_4618_);
lean_dec(v___y_4618_);
lean_dec_ref(v___y_4617_);
lean_dec(v___y_4616_);
lean_dec_ref(v___y_4615_);
lean_dec(v___y_4614_);
lean_dec_ref(v___y_4613_);
lean_dec(v___y_4612_);
lean_dec_ref(v___y_4611_);
lean_dec(v___y_4610_);
lean_dec(v___y_4609_);
lean_dec_ref(v___y_4608_);
lean_dec(v_start_4607_);
return v_res_4620_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0___lam__1(lean_object* v_e_4621_, lean_object* v_s_4622_){
_start:
{
lean_object* v_toRingState_4623_; lean_object* v_denoteEntries_4624_; lean_object* v_nextId_4625_; lean_object* v_steps_4626_; lean_object* v_queue_4627_; lean_object* v_basis_4628_; lean_object* v_diseqs_4629_; uint8_t v_recheck_4630_; lean_object* v_invSet_4631_; lean_object* v_powIdentityVarCount_4632_; lean_object* v_numEq0_x3f_4633_; uint8_t v_numEq0Updated_4634_; lean_object* v___x_4636_; uint8_t v_isShared_4637_; uint8_t v_isSharedCheck_4656_; 
v_toRingState_4623_ = lean_ctor_get(v_s_4622_, 0);
v_denoteEntries_4624_ = lean_ctor_get(v_s_4622_, 1);
v_nextId_4625_ = lean_ctor_get(v_s_4622_, 2);
v_steps_4626_ = lean_ctor_get(v_s_4622_, 3);
v_queue_4627_ = lean_ctor_get(v_s_4622_, 4);
v_basis_4628_ = lean_ctor_get(v_s_4622_, 5);
v_diseqs_4629_ = lean_ctor_get(v_s_4622_, 6);
v_recheck_4630_ = lean_ctor_get_uint8(v_s_4622_, sizeof(void*)*10);
v_invSet_4631_ = lean_ctor_get(v_s_4622_, 7);
v_powIdentityVarCount_4632_ = lean_ctor_get(v_s_4622_, 8);
v_numEq0_x3f_4633_ = lean_ctor_get(v_s_4622_, 9);
v_numEq0Updated_4634_ = lean_ctor_get_uint8(v_s_4622_, sizeof(void*)*10 + 1);
v_isSharedCheck_4656_ = !lean_is_exclusive(v_s_4622_);
if (v_isSharedCheck_4656_ == 0)
{
v___x_4636_ = v_s_4622_;
v_isShared_4637_ = v_isSharedCheck_4656_;
goto v_resetjp_4635_;
}
else
{
lean_inc(v_numEq0_x3f_4633_);
lean_inc(v_powIdentityVarCount_4632_);
lean_inc(v_invSet_4631_);
lean_inc(v_diseqs_4629_);
lean_inc(v_basis_4628_);
lean_inc(v_queue_4627_);
lean_inc(v_steps_4626_);
lean_inc(v_nextId_4625_);
lean_inc(v_denoteEntries_4624_);
lean_inc(v_toRingState_4623_);
lean_dec(v_s_4622_);
v___x_4636_ = lean_box(0);
v_isShared_4637_ = v_isSharedCheck_4656_;
goto v_resetjp_4635_;
}
v_resetjp_4635_:
{
lean_object* v_vars_4638_; lean_object* v_varMap_4639_; lean_object* v_denote_4640_; lean_object* v_natCastSet_4641_; lean_object* v_natCasts_4642_; uint8_t v_hasIntCast_4643_; lean_object* v___x_4645_; uint8_t v_isShared_4646_; uint8_t v_isSharedCheck_4655_; 
v_vars_4638_ = lean_ctor_get(v_toRingState_4623_, 0);
v_varMap_4639_ = lean_ctor_get(v_toRingState_4623_, 1);
v_denote_4640_ = lean_ctor_get(v_toRingState_4623_, 2);
v_natCastSet_4641_ = lean_ctor_get(v_toRingState_4623_, 3);
v_natCasts_4642_ = lean_ctor_get(v_toRingState_4623_, 4);
v_hasIntCast_4643_ = lean_ctor_get_uint8(v_toRingState_4623_, sizeof(void*)*5);
v_isSharedCheck_4655_ = !lean_is_exclusive(v_toRingState_4623_);
if (v_isSharedCheck_4655_ == 0)
{
v___x_4645_ = v_toRingState_4623_;
v_isShared_4646_ = v_isSharedCheck_4655_;
goto v_resetjp_4644_;
}
else
{
lean_inc(v_natCasts_4642_);
lean_inc(v_natCastSet_4641_);
lean_inc(v_denote_4640_);
lean_inc(v_varMap_4639_);
lean_inc(v_vars_4638_);
lean_dec(v_toRingState_4623_);
v___x_4645_ = lean_box(0);
v_isShared_4646_ = v_isSharedCheck_4655_;
goto v_resetjp_4644_;
}
v_resetjp_4644_:
{
lean_object* v___x_4647_; lean_object* v___x_4648_; lean_object* v___x_4650_; 
v___x_4647_ = lean_box(0);
v___x_4648_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2___redArg(v_natCastSet_4641_, v_e_4621_, v___x_4647_);
if (v_isShared_4646_ == 0)
{
lean_ctor_set(v___x_4645_, 3, v___x_4648_);
v___x_4650_ = v___x_4645_;
goto v_reusejp_4649_;
}
else
{
lean_object* v_reuseFailAlloc_4654_; 
v_reuseFailAlloc_4654_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_4654_, 0, v_vars_4638_);
lean_ctor_set(v_reuseFailAlloc_4654_, 1, v_varMap_4639_);
lean_ctor_set(v_reuseFailAlloc_4654_, 2, v_denote_4640_);
lean_ctor_set(v_reuseFailAlloc_4654_, 3, v___x_4648_);
lean_ctor_set(v_reuseFailAlloc_4654_, 4, v_natCasts_4642_);
lean_ctor_set_uint8(v_reuseFailAlloc_4654_, sizeof(void*)*5, v_hasIntCast_4643_);
v___x_4650_ = v_reuseFailAlloc_4654_;
goto v_reusejp_4649_;
}
v_reusejp_4649_:
{
lean_object* v___x_4652_; 
if (v_isShared_4637_ == 0)
{
lean_ctor_set(v___x_4636_, 0, v___x_4650_);
v___x_4652_ = v___x_4636_;
goto v_reusejp_4651_;
}
else
{
lean_object* v_reuseFailAlloc_4653_; 
v_reuseFailAlloc_4653_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v_reuseFailAlloc_4653_, 0, v___x_4650_);
lean_ctor_set(v_reuseFailAlloc_4653_, 1, v_denoteEntries_4624_);
lean_ctor_set(v_reuseFailAlloc_4653_, 2, v_nextId_4625_);
lean_ctor_set(v_reuseFailAlloc_4653_, 3, v_steps_4626_);
lean_ctor_set(v_reuseFailAlloc_4653_, 4, v_queue_4627_);
lean_ctor_set(v_reuseFailAlloc_4653_, 5, v_basis_4628_);
lean_ctor_set(v_reuseFailAlloc_4653_, 6, v_diseqs_4629_);
lean_ctor_set(v_reuseFailAlloc_4653_, 7, v_invSet_4631_);
lean_ctor_set(v_reuseFailAlloc_4653_, 8, v_powIdentityVarCount_4632_);
lean_ctor_set(v_reuseFailAlloc_4653_, 9, v_numEq0_x3f_4633_);
lean_ctor_set_uint8(v_reuseFailAlloc_4653_, sizeof(void*)*10, v_recheck_4630_);
lean_ctor_set_uint8(v_reuseFailAlloc_4653_, sizeof(void*)*10 + 1, v_numEq0Updated_4634_);
v___x_4652_ = v_reuseFailAlloc_4653_;
goto v_reusejp_4651_;
}
v_reusejp_4651_:
{
return v___x_4652_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0(lean_object* v_e_4657_, lean_object* v___y_4658_, lean_object* v___y_4659_, lean_object* v___y_4660_, lean_object* v___y_4661_, lean_object* v___y_4662_, lean_object* v___y_4663_, lean_object* v___y_4664_, lean_object* v___y_4665_, lean_object* v___y_4666_, lean_object* v___y_4667_, lean_object* v___y_4668_){
_start:
{
lean_object* v___f_4676_; lean_object* v___f_4677_; lean_object* v___x_4678_; 
lean_inc_ref_n(v_e_4657_, 3);
v___f_4676_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0___lam__1), 2, 1);
lean_closure_set(v___f_4676_, 0, v_e_4657_);
v___f_4677_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0___lam__2), 2, 1);
lean_closure_set(v___f_4677_, 0, v_e_4657_);
v___x_4678_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_4657_, v___y_4666_);
if (lean_obj_tag(v___x_4678_) == 0)
{
lean_object* v_a_4679_; lean_object* v___x_4681_; uint8_t v_isShared_4682_; uint8_t v_isSharedCheck_4834_; 
v_a_4679_ = lean_ctor_get(v___x_4678_, 0);
v_isSharedCheck_4834_ = !lean_is_exclusive(v___x_4678_);
if (v_isSharedCheck_4834_ == 0)
{
v___x_4681_ = v___x_4678_;
v_isShared_4682_ = v_isSharedCheck_4834_;
goto v_resetjp_4680_;
}
else
{
lean_inc(v_a_4679_);
lean_dec(v___x_4678_);
v___x_4681_ = lean_box(0);
v_isShared_4682_ = v_isSharedCheck_4834_;
goto v_resetjp_4680_;
}
v_resetjp_4680_:
{
lean_object* v___x_4688_; uint8_t v___x_4689_; 
v___x_4688_ = l_Lean_Expr_cleanupAnnotations(v_a_4679_);
lean_dec(v_a_4679_);
v___x_4689_ = l_Lean_Expr_isApp(v___x_4688_);
if (v___x_4689_ == 0)
{
lean_dec_ref(v___x_4688_);
lean_dec_ref(v___f_4677_);
lean_dec_ref(v___f_4676_);
lean_dec_ref(v_e_4657_);
goto v___jp_4683_;
}
else
{
lean_object* v___x_4690_; uint8_t v___x_4691_; 
v___x_4690_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4688_);
v___x_4691_ = l_Lean_Expr_isApp(v___x_4690_);
if (v___x_4691_ == 0)
{
lean_dec_ref(v___x_4690_);
lean_dec_ref(v___x_4688_);
lean_dec_ref(v___f_4677_);
lean_dec_ref(v___f_4676_);
lean_dec_ref(v_e_4657_);
goto v___jp_4683_;
}
else
{
lean_object* v___x_4692_; uint8_t v___x_4693_; 
v___x_4692_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4690_);
v___x_4693_ = l_Lean_Expr_isApp(v___x_4692_);
if (v___x_4693_ == 0)
{
lean_dec_ref(v___x_4692_);
lean_dec_ref(v___x_4690_);
lean_dec_ref(v___x_4688_);
lean_dec_ref(v___f_4677_);
lean_dec_ref(v___f_4676_);
lean_dec_ref(v_e_4657_);
goto v___jp_4683_;
}
else
{
lean_object* v_arg_4694_; lean_object* v_arg_4695_; lean_object* v___x_4696_; lean_object* v___x_4697_; uint8_t v___x_4698_; 
v_arg_4694_ = lean_ctor_get(v___x_4688_, 1);
lean_inc_ref(v_arg_4694_);
lean_dec_ref(v___x_4688_);
v_arg_4695_ = lean_ctor_get(v___x_4690_, 1);
lean_inc_ref(v_arg_4695_);
lean_dec_ref(v___x_4690_);
v___x_4696_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4692_);
lean_dec_ref(v___x_4692_);
v___x_4697_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__2));
v___x_4698_ = l_Lean_Expr_isConstOf(v___x_4696_, v___x_4697_);
if (v___x_4698_ == 0)
{
lean_object* v___x_4699_; uint8_t v___x_4700_; 
v___x_4699_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__5));
v___x_4700_ = l_Lean_Expr_isConstOf(v___x_4696_, v___x_4699_);
lean_dec_ref(v___x_4696_);
if (v___x_4700_ == 0)
{
lean_dec_ref(v_arg_4695_);
lean_dec_ref(v_arg_4694_);
lean_dec_ref(v___f_4677_);
lean_dec_ref(v___f_4676_);
lean_dec_ref(v_e_4657_);
goto v___jp_4683_;
}
else
{
uint8_t v___x_4701_; 
lean_del_object(v___x_4681_);
v___x_4701_ = l_Lean_Meta_Sym_isNatValue(v_arg_4694_);
lean_dec_ref(v_arg_4694_);
if (v___x_4701_ == 0)
{
lean_object* v___x_4702_; 
v___x_4702_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRingState___redArg(v___y_4658_, v___y_4659_, v___y_4667_);
if (lean_obj_tag(v___x_4702_) == 0)
{
lean_object* v_a_4703_; lean_object* v___x_4704_; lean_object* v_a_4705_; lean_object* v_natCastSet_4706_; uint8_t v___x_4707_; 
v_a_4703_ = lean_ctor_get(v___x_4702_, 0);
lean_inc(v_a_4703_);
lean_dec_ref_known(v___x_4702_, 1);
v___x_4704_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0___lam__0(v_a_4703_, v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_, v___y_4662_, v___y_4663_, v___y_4664_, v___y_4665_, v___y_4666_, v___y_4667_, v___y_4668_);
lean_dec(v_a_4703_);
v_a_4705_ = lean_ctor_get(v___x_4704_, 0);
lean_inc(v_a_4705_);
lean_dec_ref(v___x_4704_);
v_natCastSet_4706_ = lean_ctor_get(v_a_4705_, 3);
lean_inc_ref(v_natCastSet_4706_);
lean_dec(v_a_4705_);
v___x_4707_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0___redArg(v_natCastSet_4706_, v_e_4657_);
lean_dec_ref(v_natCastSet_4706_);
if (v___x_4707_ == 0)
{
lean_object* v___x_4708_; 
v___x_4708_ = l_Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__1(v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_, v___y_4662_, v___y_4663_, v___y_4664_, v___y_4665_, v___y_4666_, v___y_4667_, v___y_4668_);
if (lean_obj_tag(v___x_4708_) == 0)
{
lean_object* v_a_4709_; lean_object* v___x_4710_; size_t v___x_4711_; size_t v___x_4712_; uint8_t v___x_4713_; 
v_a_4709_ = lean_ctor_get(v___x_4708_, 0);
lean_inc(v_a_4709_);
lean_dec_ref_known(v___x_4708_, 1);
v___x_4710_ = l_Lean_Expr_appArg_x21(v_a_4709_);
lean_dec(v_a_4709_);
v___x_4711_ = lean_ptr_addr(v___x_4710_);
lean_dec_ref(v___x_4710_);
v___x_4712_ = lean_ptr_addr(v_arg_4695_);
lean_dec_ref(v_arg_4695_);
v___x_4713_ = lean_usize_dec_eq(v___x_4711_, v___x_4712_);
if (v___x_4713_ == 0)
{
lean_dec_ref(v___f_4677_);
lean_dec_ref(v___f_4676_);
lean_dec_ref(v_e_4657_);
goto v___jp_4673_;
}
else
{
lean_object* v___x_4714_; 
v___x_4714_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRingState___redArg(v___f_4676_, v___y_4658_, v___y_4659_);
if (lean_obj_tag(v___x_4714_) == 0)
{
lean_object* v___x_4715_; 
lean_dec_ref_known(v___x_4714_, 1);
v___x_4715_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRingState___redArg(v___y_4658_, v___y_4659_, v___y_4667_);
if (lean_obj_tag(v___x_4715_) == 0)
{
lean_object* v_a_4716_; lean_object* v___x_4717_; lean_object* v_a_4718_; uint8_t v_hasIntCast_4719_; 
v_a_4716_ = lean_ctor_get(v___x_4715_, 0);
lean_inc(v_a_4716_);
lean_dec_ref_known(v___x_4715_, 1);
v___x_4717_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0___lam__0(v_a_4716_, v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_, v___y_4662_, v___y_4663_, v___y_4664_, v___y_4665_, v___y_4666_, v___y_4667_, v___y_4668_);
lean_dec(v_a_4716_);
v_a_4718_ = lean_ctor_get(v___x_4717_, 0);
lean_inc(v_a_4718_);
lean_dec_ref(v___x_4717_);
v_hasIntCast_4719_ = lean_ctor_get_uint8(v_a_4718_, sizeof(void*)*5);
lean_dec(v_a_4718_);
if (v_hasIntCast_4719_ == 0)
{
lean_object* v___x_4720_; 
lean_dec_ref(v_e_4657_);
v___x_4720_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRingState___redArg(v___f_4677_, v___y_4658_, v___y_4659_);
return v___x_4720_;
}
else
{
lean_object* v___x_4721_; 
lean_dec_ref(v___f_4677_);
v___x_4721_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_, v___y_4662_, v___y_4663_, v___y_4664_, v___y_4665_, v___y_4666_, v___y_4667_, v___y_4668_);
if (lean_obj_tag(v___x_4721_) == 0)
{
lean_object* v_a_4722_; lean_object* v_toRing_4723_; lean_object* v___x_4724_; 
v_a_4722_ = lean_ctor_get(v___x_4721_, 0);
lean_inc(v_a_4722_);
lean_dec_ref_known(v___x_4721_, 1);
v_toRing_4723_ = lean_ctor_get(v_a_4722_, 0);
lean_inc_ref(v_toRing_4723_);
lean_dec(v_a_4722_);
v___x_4724_ = l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__3(v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_, v___y_4662_, v___y_4663_, v___y_4664_, v___y_4665_, v___y_4666_, v___y_4667_, v___y_4668_);
if (lean_obj_tag(v___x_4724_) == 0)
{
lean_object* v_a_4725_; lean_object* v___x_4726_; 
v_a_4725_ = lean_ctor_get(v___x_4724_, 0);
lean_inc(v_a_4725_);
lean_dec_ref_known(v___x_4724_, 1);
v___x_4726_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_pushNatCastFact___redArg(v_toRing_4723_, v_a_4725_, v_e_4657_, v___y_4659_, v___y_4663_, v___y_4664_, v___y_4665_, v___y_4666_, v___y_4667_, v___y_4668_);
return v___x_4726_;
}
else
{
lean_object* v_a_4727_; lean_object* v___x_4729_; uint8_t v_isShared_4730_; uint8_t v_isSharedCheck_4734_; 
lean_dec_ref(v_toRing_4723_);
lean_dec_ref(v_e_4657_);
v_a_4727_ = lean_ctor_get(v___x_4724_, 0);
v_isSharedCheck_4734_ = !lean_is_exclusive(v___x_4724_);
if (v_isSharedCheck_4734_ == 0)
{
v___x_4729_ = v___x_4724_;
v_isShared_4730_ = v_isSharedCheck_4734_;
goto v_resetjp_4728_;
}
else
{
lean_inc(v_a_4727_);
lean_dec(v___x_4724_);
v___x_4729_ = lean_box(0);
v_isShared_4730_ = v_isSharedCheck_4734_;
goto v_resetjp_4728_;
}
v_resetjp_4728_:
{
lean_object* v___x_4732_; 
if (v_isShared_4730_ == 0)
{
v___x_4732_ = v___x_4729_;
goto v_reusejp_4731_;
}
else
{
lean_object* v_reuseFailAlloc_4733_; 
v_reuseFailAlloc_4733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4733_, 0, v_a_4727_);
v___x_4732_ = v_reuseFailAlloc_4733_;
goto v_reusejp_4731_;
}
v_reusejp_4731_:
{
return v___x_4732_;
}
}
}
}
else
{
lean_object* v_a_4735_; lean_object* v___x_4737_; uint8_t v_isShared_4738_; uint8_t v_isSharedCheck_4742_; 
lean_dec_ref(v_e_4657_);
v_a_4735_ = lean_ctor_get(v___x_4721_, 0);
v_isSharedCheck_4742_ = !lean_is_exclusive(v___x_4721_);
if (v_isSharedCheck_4742_ == 0)
{
v___x_4737_ = v___x_4721_;
v_isShared_4738_ = v_isSharedCheck_4742_;
goto v_resetjp_4736_;
}
else
{
lean_inc(v_a_4735_);
lean_dec(v___x_4721_);
v___x_4737_ = lean_box(0);
v_isShared_4738_ = v_isSharedCheck_4742_;
goto v_resetjp_4736_;
}
v_resetjp_4736_:
{
lean_object* v___x_4740_; 
if (v_isShared_4738_ == 0)
{
v___x_4740_ = v___x_4737_;
goto v_reusejp_4739_;
}
else
{
lean_object* v_reuseFailAlloc_4741_; 
v_reuseFailAlloc_4741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4741_, 0, v_a_4735_);
v___x_4740_ = v_reuseFailAlloc_4741_;
goto v_reusejp_4739_;
}
v_reusejp_4739_:
{
return v___x_4740_;
}
}
}
}
}
else
{
lean_object* v_a_4743_; lean_object* v___x_4745_; uint8_t v_isShared_4746_; uint8_t v_isSharedCheck_4750_; 
lean_dec_ref(v___f_4677_);
lean_dec_ref(v_e_4657_);
v_a_4743_ = lean_ctor_get(v___x_4715_, 0);
v_isSharedCheck_4750_ = !lean_is_exclusive(v___x_4715_);
if (v_isSharedCheck_4750_ == 0)
{
v___x_4745_ = v___x_4715_;
v_isShared_4746_ = v_isSharedCheck_4750_;
goto v_resetjp_4744_;
}
else
{
lean_inc(v_a_4743_);
lean_dec(v___x_4715_);
v___x_4745_ = lean_box(0);
v_isShared_4746_ = v_isSharedCheck_4750_;
goto v_resetjp_4744_;
}
v_resetjp_4744_:
{
lean_object* v___x_4748_; 
if (v_isShared_4746_ == 0)
{
v___x_4748_ = v___x_4745_;
goto v_reusejp_4747_;
}
else
{
lean_object* v_reuseFailAlloc_4749_; 
v_reuseFailAlloc_4749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4749_, 0, v_a_4743_);
v___x_4748_ = v_reuseFailAlloc_4749_;
goto v_reusejp_4747_;
}
v_reusejp_4747_:
{
return v___x_4748_;
}
}
}
}
else
{
lean_dec_ref(v___f_4677_);
lean_dec_ref(v_e_4657_);
return v___x_4714_;
}
}
}
else
{
lean_object* v_a_4751_; lean_object* v___x_4753_; uint8_t v_isShared_4754_; uint8_t v_isSharedCheck_4758_; 
lean_dec_ref(v_arg_4695_);
lean_dec_ref(v___f_4677_);
lean_dec_ref(v___f_4676_);
lean_dec_ref(v_e_4657_);
v_a_4751_ = lean_ctor_get(v___x_4708_, 0);
v_isSharedCheck_4758_ = !lean_is_exclusive(v___x_4708_);
if (v_isSharedCheck_4758_ == 0)
{
v___x_4753_ = v___x_4708_;
v_isShared_4754_ = v_isSharedCheck_4758_;
goto v_resetjp_4752_;
}
else
{
lean_inc(v_a_4751_);
lean_dec(v___x_4708_);
v___x_4753_ = lean_box(0);
v_isShared_4754_ = v_isSharedCheck_4758_;
goto v_resetjp_4752_;
}
v_resetjp_4752_:
{
lean_object* v___x_4756_; 
if (v_isShared_4754_ == 0)
{
v___x_4756_ = v___x_4753_;
goto v_reusejp_4755_;
}
else
{
lean_object* v_reuseFailAlloc_4757_; 
v_reuseFailAlloc_4757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4757_, 0, v_a_4751_);
v___x_4756_ = v_reuseFailAlloc_4757_;
goto v_reusejp_4755_;
}
v_reusejp_4755_:
{
return v___x_4756_;
}
}
}
}
else
{
lean_dec_ref(v_arg_4695_);
lean_dec_ref(v___f_4677_);
lean_dec_ref(v___f_4676_);
lean_dec_ref(v_e_4657_);
goto v___jp_4673_;
}
}
else
{
lean_object* v_a_4759_; lean_object* v___x_4761_; uint8_t v_isShared_4762_; uint8_t v_isSharedCheck_4766_; 
lean_dec_ref(v_arg_4695_);
lean_dec_ref(v___f_4677_);
lean_dec_ref(v___f_4676_);
lean_dec_ref(v_e_4657_);
v_a_4759_ = lean_ctor_get(v___x_4702_, 0);
v_isSharedCheck_4766_ = !lean_is_exclusive(v___x_4702_);
if (v_isSharedCheck_4766_ == 0)
{
v___x_4761_ = v___x_4702_;
v_isShared_4762_ = v_isSharedCheck_4766_;
goto v_resetjp_4760_;
}
else
{
lean_inc(v_a_4759_);
lean_dec(v___x_4702_);
v___x_4761_ = lean_box(0);
v_isShared_4762_ = v_isSharedCheck_4766_;
goto v_resetjp_4760_;
}
v_resetjp_4760_:
{
lean_object* v___x_4764_; 
if (v_isShared_4762_ == 0)
{
v___x_4764_ = v___x_4761_;
goto v_reusejp_4763_;
}
else
{
lean_object* v_reuseFailAlloc_4765_; 
v_reuseFailAlloc_4765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4765_, 0, v_a_4759_);
v___x_4764_ = v_reuseFailAlloc_4765_;
goto v_reusejp_4763_;
}
v_reusejp_4763_:
{
return v___x_4764_;
}
}
}
}
else
{
lean_dec_ref(v_arg_4695_);
lean_dec_ref(v___f_4677_);
lean_dec_ref(v___f_4676_);
lean_dec_ref(v_e_4657_);
goto v___jp_4673_;
}
}
}
else
{
lean_object* v___x_4767_; 
lean_dec_ref(v___x_4696_);
lean_del_object(v___x_4681_);
lean_dec_ref(v___f_4677_);
lean_dec_ref(v___f_4676_);
lean_dec_ref(v_e_4657_);
v___x_4767_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRingState___redArg(v___y_4658_, v___y_4659_, v___y_4667_);
if (lean_obj_tag(v___x_4767_) == 0)
{
lean_object* v_a_4768_; lean_object* v___x_4769_; lean_object* v_a_4770_; uint8_t v_hasIntCast_4771_; 
v_a_4768_ = lean_ctor_get(v___x_4767_, 0);
lean_inc(v_a_4768_);
lean_dec_ref_known(v___x_4767_, 1);
v___x_4769_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0___lam__0(v_a_4768_, v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_, v___y_4662_, v___y_4663_, v___y_4664_, v___y_4665_, v___y_4666_, v___y_4667_, v___y_4668_);
lean_dec(v_a_4768_);
v_a_4770_ = lean_ctor_get(v___x_4769_, 0);
lean_inc(v_a_4770_);
lean_dec_ref(v___x_4769_);
v_hasIntCast_4771_ = lean_ctor_get_uint8(v_a_4770_, sizeof(void*)*5);
lean_dec(v_a_4770_);
if (v_hasIntCast_4771_ == 0)
{
lean_object* v___x_4772_; 
v___x_4772_ = l_Lean_Meta_Sym_getIntValue_x3f(v_arg_4694_);
lean_dec_ref(v_arg_4694_);
if (lean_obj_tag(v___x_4772_) == 0)
{
lean_object* v___x_4773_; 
v___x_4773_ = l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__3(v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_, v___y_4662_, v___y_4663_, v___y_4664_, v___y_4665_, v___y_4666_, v___y_4667_, v___y_4668_);
if (lean_obj_tag(v___x_4773_) == 0)
{
lean_object* v_a_4774_; lean_object* v___x_4775_; size_t v___x_4776_; size_t v___x_4777_; uint8_t v___x_4778_; 
v_a_4774_ = lean_ctor_get(v___x_4773_, 0);
lean_inc(v_a_4774_);
lean_dec_ref_known(v___x_4773_, 1);
v___x_4775_ = l_Lean_Expr_appArg_x21(v_a_4774_);
lean_dec(v_a_4774_);
v___x_4776_ = lean_ptr_addr(v___x_4775_);
lean_dec_ref(v___x_4775_);
v___x_4777_ = lean_ptr_addr(v_arg_4695_);
lean_dec_ref(v_arg_4695_);
v___x_4778_ = lean_usize_dec_eq(v___x_4776_, v___x_4777_);
if (v___x_4778_ == 0)
{
goto v___jp_4670_;
}
else
{
lean_object* v___x_4779_; lean_object* v___f_4780_; lean_object* v___x_4781_; 
v___x_4779_ = lean_box(v___x_4778_);
v___f_4780_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0___lam__4___boxed), 2, 1);
lean_closure_set(v___f_4780_, 0, v___x_4779_);
v___x_4781_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRingState___redArg(v___y_4658_, v___y_4659_, v___y_4667_);
if (lean_obj_tag(v___x_4781_) == 0)
{
lean_object* v_a_4782_; lean_object* v___x_4783_; lean_object* v_a_4784_; lean_object* v_natCasts_4785_; lean_object* v___x_4786_; 
v_a_4782_ = lean_ctor_get(v___x_4781_, 0);
lean_inc(v_a_4782_);
lean_dec_ref_known(v___x_4781_, 1);
v___x_4783_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0___lam__0(v_a_4782_, v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_, v___y_4662_, v___y_4663_, v___y_4664_, v___y_4665_, v___y_4666_, v___y_4667_, v___y_4668_);
lean_dec(v_a_4782_);
v_a_4784_ = lean_ctor_get(v___x_4783_, 0);
lean_inc(v_a_4784_);
lean_dec_ref(v___x_4783_);
v_natCasts_4785_ = lean_ctor_get(v_a_4784_, 4);
lean_inc_ref(v_natCasts_4785_);
lean_dec(v_a_4784_);
v___x_4786_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRingState___redArg(v___f_4780_, v___y_4658_, v___y_4659_);
if (lean_obj_tag(v___x_4786_) == 0)
{
lean_object* v___x_4787_; 
lean_dec_ref_known(v___x_4786_, 1);
v___x_4787_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_, v___y_4662_, v___y_4663_, v___y_4664_, v___y_4665_, v___y_4666_, v___y_4667_, v___y_4668_);
if (lean_obj_tag(v___x_4787_) == 0)
{
lean_object* v_a_4788_; lean_object* v_toRing_4789_; lean_object* v___x_4790_; 
v_a_4788_ = lean_ctor_get(v___x_4787_, 0);
lean_inc(v_a_4788_);
lean_dec_ref_known(v___x_4787_, 1);
v_toRing_4789_ = lean_ctor_get(v_a_4788_, 0);
lean_inc_ref(v_toRing_4789_);
lean_dec(v_a_4788_);
v___x_4790_ = l_Lean_Meta_Sym_Arith_getIntCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__3(v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_, v___y_4662_, v___y_4663_, v___y_4664_, v___y_4665_, v___y_4666_, v___y_4667_, v___y_4668_);
if (lean_obj_tag(v___x_4790_) == 0)
{
lean_object* v_a_4791_; lean_object* v___x_4792_; lean_object* v___x_4793_; 
v_a_4791_ = lean_ctor_get(v___x_4790_, 0);
lean_inc(v_a_4791_);
lean_dec_ref_known(v___x_4790_, 1);
v___x_4792_ = lean_unsigned_to_nat(0u);
v___x_4793_ = l_Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4(v_toRing_4789_, v_a_4791_, v_natCasts_4785_, v___x_4792_, v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_, v___y_4662_, v___y_4663_, v___y_4664_, v___y_4665_, v___y_4666_, v___y_4667_, v___y_4668_);
return v___x_4793_;
}
else
{
lean_object* v_a_4794_; lean_object* v___x_4796_; uint8_t v_isShared_4797_; uint8_t v_isSharedCheck_4801_; 
lean_dec_ref(v_toRing_4789_);
lean_dec_ref(v_natCasts_4785_);
v_a_4794_ = lean_ctor_get(v___x_4790_, 0);
v_isSharedCheck_4801_ = !lean_is_exclusive(v___x_4790_);
if (v_isSharedCheck_4801_ == 0)
{
v___x_4796_ = v___x_4790_;
v_isShared_4797_ = v_isSharedCheck_4801_;
goto v_resetjp_4795_;
}
else
{
lean_inc(v_a_4794_);
lean_dec(v___x_4790_);
v___x_4796_ = lean_box(0);
v_isShared_4797_ = v_isSharedCheck_4801_;
goto v_resetjp_4795_;
}
v_resetjp_4795_:
{
lean_object* v___x_4799_; 
if (v_isShared_4797_ == 0)
{
v___x_4799_ = v___x_4796_;
goto v_reusejp_4798_;
}
else
{
lean_object* v_reuseFailAlloc_4800_; 
v_reuseFailAlloc_4800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4800_, 0, v_a_4794_);
v___x_4799_ = v_reuseFailAlloc_4800_;
goto v_reusejp_4798_;
}
v_reusejp_4798_:
{
return v___x_4799_;
}
}
}
}
else
{
lean_object* v_a_4802_; lean_object* v___x_4804_; uint8_t v_isShared_4805_; uint8_t v_isSharedCheck_4809_; 
lean_dec_ref(v_natCasts_4785_);
v_a_4802_ = lean_ctor_get(v___x_4787_, 0);
v_isSharedCheck_4809_ = !lean_is_exclusive(v___x_4787_);
if (v_isSharedCheck_4809_ == 0)
{
v___x_4804_ = v___x_4787_;
v_isShared_4805_ = v_isSharedCheck_4809_;
goto v_resetjp_4803_;
}
else
{
lean_inc(v_a_4802_);
lean_dec(v___x_4787_);
v___x_4804_ = lean_box(0);
v_isShared_4805_ = v_isSharedCheck_4809_;
goto v_resetjp_4803_;
}
v_resetjp_4803_:
{
lean_object* v___x_4807_; 
if (v_isShared_4805_ == 0)
{
v___x_4807_ = v___x_4804_;
goto v_reusejp_4806_;
}
else
{
lean_object* v_reuseFailAlloc_4808_; 
v_reuseFailAlloc_4808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4808_, 0, v_a_4802_);
v___x_4807_ = v_reuseFailAlloc_4808_;
goto v_reusejp_4806_;
}
v_reusejp_4806_:
{
return v___x_4807_;
}
}
}
}
else
{
lean_dec_ref(v_natCasts_4785_);
return v___x_4786_;
}
}
else
{
lean_object* v_a_4810_; lean_object* v___x_4812_; uint8_t v_isShared_4813_; uint8_t v_isSharedCheck_4817_; 
lean_dec_ref(v___f_4780_);
v_a_4810_ = lean_ctor_get(v___x_4781_, 0);
v_isSharedCheck_4817_ = !lean_is_exclusive(v___x_4781_);
if (v_isSharedCheck_4817_ == 0)
{
v___x_4812_ = v___x_4781_;
v_isShared_4813_ = v_isSharedCheck_4817_;
goto v_resetjp_4811_;
}
else
{
lean_inc(v_a_4810_);
lean_dec(v___x_4781_);
v___x_4812_ = lean_box(0);
v_isShared_4813_ = v_isSharedCheck_4817_;
goto v_resetjp_4811_;
}
v_resetjp_4811_:
{
lean_object* v___x_4815_; 
if (v_isShared_4813_ == 0)
{
v___x_4815_ = v___x_4812_;
goto v_reusejp_4814_;
}
else
{
lean_object* v_reuseFailAlloc_4816_; 
v_reuseFailAlloc_4816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4816_, 0, v_a_4810_);
v___x_4815_ = v_reuseFailAlloc_4816_;
goto v_reusejp_4814_;
}
v_reusejp_4814_:
{
return v___x_4815_;
}
}
}
}
}
else
{
lean_object* v_a_4818_; lean_object* v___x_4820_; uint8_t v_isShared_4821_; uint8_t v_isSharedCheck_4825_; 
lean_dec_ref(v_arg_4695_);
v_a_4818_ = lean_ctor_get(v___x_4773_, 0);
v_isSharedCheck_4825_ = !lean_is_exclusive(v___x_4773_);
if (v_isSharedCheck_4825_ == 0)
{
v___x_4820_ = v___x_4773_;
v_isShared_4821_ = v_isSharedCheck_4825_;
goto v_resetjp_4819_;
}
else
{
lean_inc(v_a_4818_);
lean_dec(v___x_4773_);
v___x_4820_ = lean_box(0);
v_isShared_4821_ = v_isSharedCheck_4825_;
goto v_resetjp_4819_;
}
v_resetjp_4819_:
{
lean_object* v___x_4823_; 
if (v_isShared_4821_ == 0)
{
v___x_4823_ = v___x_4820_;
goto v_reusejp_4822_;
}
else
{
lean_object* v_reuseFailAlloc_4824_; 
v_reuseFailAlloc_4824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4824_, 0, v_a_4818_);
v___x_4823_ = v_reuseFailAlloc_4824_;
goto v_reusejp_4822_;
}
v_reusejp_4822_:
{
return v___x_4823_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_4772_, 1);
lean_dec_ref(v_arg_4695_);
goto v___jp_4670_;
}
}
else
{
lean_dec_ref(v_arg_4695_);
lean_dec_ref(v_arg_4694_);
goto v___jp_4670_;
}
}
else
{
lean_object* v_a_4826_; lean_object* v___x_4828_; uint8_t v_isShared_4829_; uint8_t v_isSharedCheck_4833_; 
lean_dec_ref(v_arg_4695_);
lean_dec_ref(v_arg_4694_);
v_a_4826_ = lean_ctor_get(v___x_4767_, 0);
v_isSharedCheck_4833_ = !lean_is_exclusive(v___x_4767_);
if (v_isSharedCheck_4833_ == 0)
{
v___x_4828_ = v___x_4767_;
v_isShared_4829_ = v_isSharedCheck_4833_;
goto v_resetjp_4827_;
}
else
{
lean_inc(v_a_4826_);
lean_dec(v___x_4767_);
v___x_4828_ = lean_box(0);
v_isShared_4829_ = v_isSharedCheck_4833_;
goto v_resetjp_4827_;
}
v_resetjp_4827_:
{
lean_object* v___x_4831_; 
if (v_isShared_4829_ == 0)
{
v___x_4831_ = v___x_4828_;
goto v_reusejp_4830_;
}
else
{
lean_object* v_reuseFailAlloc_4832_; 
v_reuseFailAlloc_4832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4832_, 0, v_a_4826_);
v___x_4831_ = v_reuseFailAlloc_4832_;
goto v_reusejp_4830_;
}
v_reusejp_4830_:
{
return v___x_4831_;
}
}
}
}
}
}
}
v___jp_4683_:
{
lean_object* v___x_4684_; lean_object* v___x_4686_; 
v___x_4684_ = lean_box(0);
if (v_isShared_4682_ == 0)
{
lean_ctor_set(v___x_4681_, 0, v___x_4684_);
v___x_4686_ = v___x_4681_;
goto v_reusejp_4685_;
}
else
{
lean_object* v_reuseFailAlloc_4687_; 
v_reuseFailAlloc_4687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4687_, 0, v___x_4684_);
v___x_4686_ = v_reuseFailAlloc_4687_;
goto v_reusejp_4685_;
}
v_reusejp_4685_:
{
return v___x_4686_;
}
}
}
}
else
{
lean_object* v_a_4835_; lean_object* v___x_4837_; uint8_t v_isShared_4838_; uint8_t v_isSharedCheck_4842_; 
lean_dec_ref(v___f_4677_);
lean_dec_ref(v___f_4676_);
lean_dec_ref(v_e_4657_);
v_a_4835_ = lean_ctor_get(v___x_4678_, 0);
v_isSharedCheck_4842_ = !lean_is_exclusive(v___x_4678_);
if (v_isSharedCheck_4842_ == 0)
{
v___x_4837_ = v___x_4678_;
v_isShared_4838_ = v_isSharedCheck_4842_;
goto v_resetjp_4836_;
}
else
{
lean_inc(v_a_4835_);
lean_dec(v___x_4678_);
v___x_4837_ = lean_box(0);
v_isShared_4838_ = v_isSharedCheck_4842_;
goto v_resetjp_4836_;
}
v_resetjp_4836_:
{
lean_object* v___x_4840_; 
if (v_isShared_4838_ == 0)
{
v___x_4840_ = v___x_4837_;
goto v_reusejp_4839_;
}
else
{
lean_object* v_reuseFailAlloc_4841_; 
v_reuseFailAlloc_4841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4841_, 0, v_a_4835_);
v___x_4840_ = v_reuseFailAlloc_4841_;
goto v_reusejp_4839_;
}
v_reusejp_4839_:
{
return v___x_4840_;
}
}
}
v___jp_4670_:
{
lean_object* v___x_4671_; lean_object* v___x_4672_; 
v___x_4671_ = lean_box(0);
v___x_4672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4672_, 0, v___x_4671_);
return v___x_4672_;
}
v___jp_4673_:
{
lean_object* v___x_4674_; lean_object* v___x_4675_; 
v___x_4674_ = lean_box(0);
v___x_4675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4675_, 0, v___x_4674_);
return v___x_4675_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0___boxed(lean_object* v_e_4843_, lean_object* v___y_4844_, lean_object* v___y_4845_, lean_object* v___y_4846_, lean_object* v___y_4847_, lean_object* v___y_4848_, lean_object* v___y_4849_, lean_object* v___y_4850_, lean_object* v___y_4851_, lean_object* v___y_4852_, lean_object* v___y_4853_, lean_object* v___y_4854_, lean_object* v___y_4855_){
_start:
{
lean_object* v_res_4856_; 
v_res_4856_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0(v_e_4843_, v___y_4844_, v___y_4845_, v___y_4846_, v___y_4847_, v___y_4848_, v___y_4849_, v___y_4850_, v___y_4851_, v___y_4852_, v___y_4853_, v___y_4854_);
lean_dec(v___y_4854_);
lean_dec_ref(v___y_4853_);
lean_dec(v___y_4852_);
lean_dec_ref(v___y_4851_);
lean_dec(v___y_4850_);
lean_dec_ref(v___y_4849_);
lean_dec(v___y_4848_);
lean_dec_ref(v___y_4847_);
lean_dec(v___y_4846_);
lean_dec(v___y_4845_);
lean_dec_ref(v___y_4844_);
return v_res_4856_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast(lean_object* v_e_4857_, lean_object* v_a_4858_, lean_object* v_a_4859_, lean_object* v_a_4860_, lean_object* v_a_4861_, lean_object* v_a_4862_, lean_object* v_a_4863_, lean_object* v_a_4864_, lean_object* v_a_4865_, lean_object* v_a_4866_, lean_object* v_a_4867_){
_start:
{
lean_object* v_00_u03b1_4873_; lean_object* v___y_4874_; lean_object* v___y_4875_; lean_object* v___y_4876_; lean_object* v___y_4877_; lean_object* v___y_4878_; lean_object* v___y_4879_; lean_object* v___y_4880_; lean_object* v___y_4881_; lean_object* v___y_4882_; lean_object* v___y_4883_; lean_object* v___x_4921_; 
lean_inc_ref(v_e_4857_);
v___x_4921_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_4857_, v_a_4865_);
if (lean_obj_tag(v___x_4921_) == 0)
{
lean_object* v_a_4922_; lean_object* v___x_4923_; uint8_t v___x_4924_; 
v_a_4922_ = lean_ctor_get(v___x_4921_, 0);
lean_inc(v_a_4922_);
lean_dec_ref_known(v___x_4921_, 1);
v___x_4923_ = l_Lean_Expr_cleanupAnnotations(v_a_4922_);
lean_dec(v_a_4922_);
v___x_4924_ = l_Lean_Expr_isApp(v___x_4923_);
if (v___x_4924_ == 0)
{
lean_dec_ref(v___x_4923_);
lean_dec_ref(v_e_4857_);
goto v___jp_4869_;
}
else
{
lean_object* v___x_4925_; uint8_t v___x_4926_; 
v___x_4925_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4923_);
lean_dec_ref(v___x_4923_);
v___x_4926_ = l_Lean_Expr_isApp(v___x_4925_);
if (v___x_4926_ == 0)
{
lean_dec_ref(v___x_4925_);
lean_dec_ref(v_e_4857_);
goto v___jp_4869_;
}
else
{
lean_object* v___x_4927_; uint8_t v___x_4928_; 
v___x_4927_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4925_);
lean_dec_ref(v___x_4925_);
v___x_4928_ = l_Lean_Expr_isApp(v___x_4927_);
if (v___x_4928_ == 0)
{
lean_dec_ref(v___x_4927_);
lean_dec_ref(v_e_4857_);
goto v___jp_4869_;
}
else
{
lean_object* v_arg_4929_; lean_object* v___x_4930_; lean_object* v___x_4931_; uint8_t v___x_4932_; 
v_arg_4929_ = lean_ctor_get(v___x_4927_, 1);
lean_inc_ref(v_arg_4929_);
v___x_4930_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4927_);
lean_dec_ref(v___x_4927_);
v___x_4931_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__2));
v___x_4932_ = l_Lean_Expr_isConstOf(v___x_4930_, v___x_4931_);
if (v___x_4932_ == 0)
{
lean_object* v___x_4933_; uint8_t v___x_4934_; 
v___x_4933_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__5));
v___x_4934_ = l_Lean_Expr_isConstOf(v___x_4930_, v___x_4933_);
lean_dec_ref(v___x_4930_);
if (v___x_4934_ == 0)
{
lean_dec_ref(v_arg_4929_);
lean_dec_ref(v_e_4857_);
goto v___jp_4869_;
}
else
{
v_00_u03b1_4873_ = v_arg_4929_;
v___y_4874_ = v_a_4858_;
v___y_4875_ = v_a_4859_;
v___y_4876_ = v_a_4860_;
v___y_4877_ = v_a_4861_;
v___y_4878_ = v_a_4862_;
v___y_4879_ = v_a_4863_;
v___y_4880_ = v_a_4864_;
v___y_4881_ = v_a_4865_;
v___y_4882_ = v_a_4866_;
v___y_4883_ = v_a_4867_;
goto v___jp_4872_;
}
}
else
{
lean_dec_ref(v___x_4930_);
v_00_u03b1_4873_ = v_arg_4929_;
v___y_4874_ = v_a_4858_;
v___y_4875_ = v_a_4859_;
v___y_4876_ = v_a_4860_;
v___y_4877_ = v_a_4861_;
v___y_4878_ = v_a_4862_;
v___y_4879_ = v_a_4863_;
v___y_4880_ = v_a_4864_;
v___y_4881_ = v_a_4865_;
v___y_4882_ = v_a_4866_;
v___y_4883_ = v_a_4867_;
goto v___jp_4872_;
}
}
}
}
}
else
{
lean_object* v_a_4935_; lean_object* v___x_4937_; uint8_t v_isShared_4938_; uint8_t v_isSharedCheck_4942_; 
lean_dec_ref(v_e_4857_);
v_a_4935_ = lean_ctor_get(v___x_4921_, 0);
v_isSharedCheck_4942_ = !lean_is_exclusive(v___x_4921_);
if (v_isSharedCheck_4942_ == 0)
{
v___x_4937_ = v___x_4921_;
v_isShared_4938_ = v_isSharedCheck_4942_;
goto v_resetjp_4936_;
}
else
{
lean_inc(v_a_4935_);
lean_dec(v___x_4921_);
v___x_4937_ = lean_box(0);
v_isShared_4938_ = v_isSharedCheck_4942_;
goto v_resetjp_4936_;
}
v_resetjp_4936_:
{
lean_object* v___x_4940_; 
if (v_isShared_4938_ == 0)
{
v___x_4940_ = v___x_4937_;
goto v_reusejp_4939_;
}
else
{
lean_object* v_reuseFailAlloc_4941_; 
v_reuseFailAlloc_4941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4941_, 0, v_a_4935_);
v___x_4940_ = v_reuseFailAlloc_4941_;
goto v_reusejp_4939_;
}
v_reusejp_4939_:
{
return v___x_4940_;
}
}
}
v___jp_4869_:
{
lean_object* v___x_4870_; lean_object* v___x_4871_; 
v___x_4870_ = lean_box(0);
v___x_4871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4871_, 0, v___x_4870_);
return v___x_4871_;
}
v___jp_4872_:
{
lean_object* v___x_4884_; uint8_t v___x_4885_; 
v___x_4884_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__28));
v___x_4885_ = l_Lean_Expr_isConstOf(v_00_u03b1_4873_, v___x_4884_);
if (v___x_4885_ == 0)
{
lean_object* v___x_4886_; 
lean_inc_ref(v_00_u03b1_4873_);
v___x_4886_ = l_Lean_Meta_Grind_Arith_CommRing_getCommRingId_x3f___redArg(v_00_u03b1_4873_, v___y_4878_, v___y_4879_, v___y_4880_, v___y_4881_, v___y_4882_, v___y_4883_);
if (lean_obj_tag(v___x_4886_) == 0)
{
lean_object* v_a_4887_; 
v_a_4887_ = lean_ctor_get(v___x_4886_, 0);
lean_inc(v_a_4887_);
lean_dec_ref_known(v___x_4886_, 1);
if (lean_obj_tag(v_a_4887_) == 1)
{
lean_object* v_val_4888_; lean_object* v___x_4889_; lean_object* v___x_4890_; 
lean_dec_ref(v_00_u03b1_4873_);
v_val_4888_ = lean_ctor_get(v_a_4887_, 0);
lean_inc(v_val_4888_);
lean_dec_ref_known(v_a_4887_, 1);
v___x_4889_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4889_, 0, v_val_4888_);
lean_ctor_set_uint8(v___x_4889_, sizeof(void*)*1, v___x_4885_);
v___x_4890_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0(v_e_4857_, v___x_4889_, v___y_4874_, v___y_4875_, v___y_4876_, v___y_4877_, v___y_4878_, v___y_4879_, v___y_4880_, v___y_4881_, v___y_4882_, v___y_4883_);
lean_dec_ref_known(v___x_4889_, 1);
return v___x_4890_;
}
else
{
lean_object* v___x_4891_; 
lean_dec(v_a_4887_);
v___x_4891_ = l_Lean_Meta_Grind_Arith_CommRing_getNonCommRingId_x3f___redArg(v_00_u03b1_4873_, v___y_4878_, v___y_4879_, v___y_4880_, v___y_4881_, v___y_4882_, v___y_4883_);
if (lean_obj_tag(v___x_4891_) == 0)
{
lean_object* v_a_4892_; lean_object* v___x_4894_; uint8_t v_isShared_4895_; uint8_t v_isSharedCheck_4902_; 
v_a_4892_ = lean_ctor_get(v___x_4891_, 0);
v_isSharedCheck_4902_ = !lean_is_exclusive(v___x_4891_);
if (v_isSharedCheck_4902_ == 0)
{
v___x_4894_ = v___x_4891_;
v_isShared_4895_ = v_isSharedCheck_4902_;
goto v_resetjp_4893_;
}
else
{
lean_inc(v_a_4892_);
lean_dec(v___x_4891_);
v___x_4894_ = lean_box(0);
v_isShared_4895_ = v_isSharedCheck_4902_;
goto v_resetjp_4893_;
}
v_resetjp_4893_:
{
if (lean_obj_tag(v_a_4892_) == 1)
{
lean_object* v_val_4896_; lean_object* v___x_4897_; 
lean_del_object(v___x_4894_);
v_val_4896_ = lean_ctor_get(v_a_4892_, 0);
lean_inc(v_val_4896_);
lean_dec_ref_known(v_a_4892_, 1);
v___x_4897_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1(v_e_4857_, v_val_4896_, v___y_4874_, v___y_4875_, v___y_4876_, v___y_4877_, v___y_4878_, v___y_4879_, v___y_4880_, v___y_4881_, v___y_4882_, v___y_4883_);
lean_dec(v_val_4896_);
return v___x_4897_;
}
else
{
lean_object* v___x_4898_; lean_object* v___x_4900_; 
lean_dec(v_a_4892_);
lean_dec_ref(v_e_4857_);
v___x_4898_ = lean_box(0);
if (v_isShared_4895_ == 0)
{
lean_ctor_set(v___x_4894_, 0, v___x_4898_);
v___x_4900_ = v___x_4894_;
goto v_reusejp_4899_;
}
else
{
lean_object* v_reuseFailAlloc_4901_; 
v_reuseFailAlloc_4901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4901_, 0, v___x_4898_);
v___x_4900_ = v_reuseFailAlloc_4901_;
goto v_reusejp_4899_;
}
v_reusejp_4899_:
{
return v___x_4900_;
}
}
}
}
else
{
lean_object* v_a_4903_; lean_object* v___x_4905_; uint8_t v_isShared_4906_; uint8_t v_isSharedCheck_4910_; 
lean_dec_ref(v_e_4857_);
v_a_4903_ = lean_ctor_get(v___x_4891_, 0);
v_isSharedCheck_4910_ = !lean_is_exclusive(v___x_4891_);
if (v_isSharedCheck_4910_ == 0)
{
v___x_4905_ = v___x_4891_;
v_isShared_4906_ = v_isSharedCheck_4910_;
goto v_resetjp_4904_;
}
else
{
lean_inc(v_a_4903_);
lean_dec(v___x_4891_);
v___x_4905_ = lean_box(0);
v_isShared_4906_ = v_isSharedCheck_4910_;
goto v_resetjp_4904_;
}
v_resetjp_4904_:
{
lean_object* v___x_4908_; 
if (v_isShared_4906_ == 0)
{
v___x_4908_ = v___x_4905_;
goto v_reusejp_4907_;
}
else
{
lean_object* v_reuseFailAlloc_4909_; 
v_reuseFailAlloc_4909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4909_, 0, v_a_4903_);
v___x_4908_ = v_reuseFailAlloc_4909_;
goto v_reusejp_4907_;
}
v_reusejp_4907_:
{
return v___x_4908_;
}
}
}
}
}
else
{
lean_object* v_a_4911_; lean_object* v___x_4913_; uint8_t v_isShared_4914_; uint8_t v_isSharedCheck_4918_; 
lean_dec_ref(v_00_u03b1_4873_);
lean_dec_ref(v_e_4857_);
v_a_4911_ = lean_ctor_get(v___x_4886_, 0);
v_isSharedCheck_4918_ = !lean_is_exclusive(v___x_4886_);
if (v_isSharedCheck_4918_ == 0)
{
v___x_4913_ = v___x_4886_;
v_isShared_4914_ = v_isSharedCheck_4918_;
goto v_resetjp_4912_;
}
else
{
lean_inc(v_a_4911_);
lean_dec(v___x_4886_);
v___x_4913_ = lean_box(0);
v_isShared_4914_ = v_isSharedCheck_4918_;
goto v_resetjp_4912_;
}
v_resetjp_4912_:
{
lean_object* v___x_4916_; 
if (v_isShared_4914_ == 0)
{
v___x_4916_ = v___x_4913_;
goto v_reusejp_4915_;
}
else
{
lean_object* v_reuseFailAlloc_4917_; 
v_reuseFailAlloc_4917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4917_, 0, v_a_4911_);
v___x_4916_ = v_reuseFailAlloc_4917_;
goto v_reusejp_4915_;
}
v_reusejp_4915_:
{
return v___x_4916_;
}
}
}
}
else
{
lean_object* v___x_4919_; lean_object* v___x_4920_; 
lean_dec_ref(v_00_u03b1_4873_);
lean_dec_ref(v_e_4857_);
v___x_4919_ = lean_box(0);
v___x_4920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4920_, 0, v___x_4919_);
return v___x_4920_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast___boxed(lean_object* v_e_4943_, lean_object* v_a_4944_, lean_object* v_a_4945_, lean_object* v_a_4946_, lean_object* v_a_4947_, lean_object* v_a_4948_, lean_object* v_a_4949_, lean_object* v_a_4950_, lean_object* v_a_4951_, lean_object* v_a_4952_, lean_object* v_a_4953_, lean_object* v_a_4954_){
_start:
{
lean_object* v_res_4955_; 
v_res_4955_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast(v_e_4943_, v_a_4944_, v_a_4945_, v_a_4946_, v_a_4947_, v_a_4948_, v_a_4949_, v_a_4950_, v_a_4951_, v_a_4952_, v_a_4953_);
lean_dec(v_a_4953_);
lean_dec_ref(v_a_4952_);
lean_dec(v_a_4951_);
lean_dec_ref(v_a_4950_);
lean_dec(v_a_4949_);
lean_dec_ref(v_a_4948_);
lean_dec(v_a_4947_);
lean_dec_ref(v_a_4946_);
lean_dec(v_a_4945_);
lean_dec(v_a_4944_);
return v_res_4955_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0(lean_object* v_00_u03b2_4956_, lean_object* v_x_4957_, lean_object* v_x_4958_){
_start:
{
uint8_t v___x_4959_; 
v___x_4959_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0___redArg(v_x_4957_, v_x_4958_);
return v___x_4959_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0___boxed(lean_object* v_00_u03b2_4960_, lean_object* v_x_4961_, lean_object* v_x_4962_){
_start:
{
uint8_t v_res_4963_; lean_object* v_r_4964_; 
v_res_4963_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0(v_00_u03b2_4960_, v_x_4961_, v_x_4962_);
lean_dec_ref(v_x_4962_);
lean_dec_ref(v_x_4961_);
v_r_4964_ = lean_box(v_res_4963_);
return v_r_4964_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__1_spec__3(lean_object* v_u_4965_, lean_object* v_type_4966_, lean_object* v_semiringInst_4967_, lean_object* v___y_4968_, lean_object* v___y_4969_, lean_object* v___y_4970_, lean_object* v___y_4971_, lean_object* v___y_4972_, lean_object* v___y_4973_, lean_object* v___y_4974_, lean_object* v___y_4975_, lean_object* v___y_4976_, lean_object* v___y_4977_, lean_object* v___y_4978_){
_start:
{
lean_object* v___x_4980_; 
v___x_4980_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__1_spec__3___redArg(v_u_4965_, v_type_4966_, v_semiringInst_4967_, v___y_4973_, v___y_4974_, v___y_4975_, v___y_4976_, v___y_4977_, v___y_4978_);
return v___x_4980_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__1_spec__3___boxed(lean_object* v_u_4981_, lean_object* v_type_4982_, lean_object* v_semiringInst_4983_, lean_object* v___y_4984_, lean_object* v___y_4985_, lean_object* v___y_4986_, lean_object* v___y_4987_, lean_object* v___y_4988_, lean_object* v___y_4989_, lean_object* v___y_4990_, lean_object* v___y_4991_, lean_object* v___y_4992_, lean_object* v___y_4993_, lean_object* v___y_4994_, lean_object* v___y_4995_){
_start:
{
lean_object* v_res_4996_; 
v_res_4996_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__1_spec__3(v_u_4981_, v_type_4982_, v_semiringInst_4983_, v___y_4984_, v___y_4985_, v___y_4986_, v___y_4987_, v___y_4988_, v___y_4989_, v___y_4990_, v___y_4991_, v___y_4992_, v___y_4993_, v___y_4994_);
lean_dec(v___y_4994_);
lean_dec_ref(v___y_4993_);
lean_dec(v___y_4992_);
lean_dec_ref(v___y_4991_);
lean_dec(v___y_4990_);
lean_dec_ref(v___y_4989_);
lean_dec(v___y_4988_);
lean_dec_ref(v___y_4987_);
lean_dec(v___y_4986_);
lean_dec(v___y_4985_);
lean_dec_ref(v___y_4984_);
return v_res_4996_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2(lean_object* v_00_u03b2_4997_, lean_object* v_x_4998_, lean_object* v_x_4999_, lean_object* v_x_5000_){
_start:
{
lean_object* v___x_5001_; 
v___x_5001_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2___redArg(v_x_4998_, v_x_4999_, v_x_5000_);
return v___x_5001_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6_spec__13(lean_object* v_u_5002_, lean_object* v_type_5003_, lean_object* v_semiringInst_5004_, lean_object* v___y_5005_, lean_object* v___y_5006_, lean_object* v___y_5007_, lean_object* v___y_5008_, lean_object* v___y_5009_, lean_object* v___y_5010_, lean_object* v___y_5011_, lean_object* v___y_5012_, lean_object* v___y_5013_, lean_object* v___y_5014_, lean_object* v___y_5015_){
_start:
{
lean_object* v___x_5017_; 
v___x_5017_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6_spec__13___redArg(v_u_5002_, v_type_5003_, v_semiringInst_5004_, v___y_5010_, v___y_5011_, v___y_5012_, v___y_5013_, v___y_5014_, v___y_5015_);
return v___x_5017_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6_spec__13___boxed(lean_object* v_u_5018_, lean_object* v_type_5019_, lean_object* v_semiringInst_5020_, lean_object* v___y_5021_, lean_object* v___y_5022_, lean_object* v___y_5023_, lean_object* v___y_5024_, lean_object* v___y_5025_, lean_object* v___y_5026_, lean_object* v___y_5027_, lean_object* v___y_5028_, lean_object* v___y_5029_, lean_object* v___y_5030_, lean_object* v___y_5031_, lean_object* v___y_5032_){
_start:
{
lean_object* v_res_5033_; 
v_res_5033_ = l___private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkNatCastFn___at___00Lean_Meta_Sym_Arith_getNatCastFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__6_spec__13(v_u_5018_, v_type_5019_, v_semiringInst_5020_, v___y_5021_, v___y_5022_, v___y_5023_, v___y_5024_, v___y_5025_, v___y_5026_, v___y_5027_, v___y_5028_, v___y_5029_, v___y_5030_, v___y_5031_);
lean_dec(v___y_5031_);
lean_dec_ref(v___y_5030_);
lean_dec(v___y_5029_);
lean_dec_ref(v___y_5028_);
lean_dec(v___y_5027_);
lean_dec_ref(v___y_5026_);
lean_dec(v___y_5025_);
lean_dec_ref(v___y_5024_);
lean_dec(v___y_5023_);
lean_dec(v___y_5022_);
lean_dec(v___y_5021_);
return v_res_5033_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_5034_, lean_object* v_x_5035_, size_t v_x_5036_, lean_object* v_x_5037_){
_start:
{
uint8_t v___x_5038_; 
v___x_5038_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0_spec__1___redArg(v_x_5035_, v_x_5036_, v_x_5037_);
return v___x_5038_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_5039_, lean_object* v_x_5040_, lean_object* v_x_5041_, lean_object* v_x_5042_){
_start:
{
size_t v_x_132350__boxed_5043_; uint8_t v_res_5044_; lean_object* v_r_5045_; 
v_x_132350__boxed_5043_ = lean_unbox_usize(v_x_5041_);
lean_dec(v_x_5041_);
v_res_5044_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0_spec__1(v_00_u03b2_5039_, v_x_5040_, v_x_132350__boxed_5043_, v_x_5042_);
lean_dec_ref(v_x_5042_);
lean_dec_ref(v_x_5040_);
v_r_5045_ = lean_box(v_res_5044_);
return v_r_5045_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_5046_, lean_object* v_x_5047_, size_t v_x_5048_, size_t v_x_5049_, lean_object* v_x_5050_, lean_object* v_x_5051_){
_start:
{
lean_object* v___x_5052_; 
v___x_5052_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5___redArg(v_x_5047_, v_x_5048_, v_x_5049_, v_x_5050_, v_x_5051_);
return v___x_5052_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5___boxed(lean_object* v_00_u03b2_5053_, lean_object* v_x_5054_, lean_object* v_x_5055_, lean_object* v_x_5056_, lean_object* v_x_5057_, lean_object* v_x_5058_){
_start:
{
size_t v_x_132361__boxed_5059_; size_t v_x_132362__boxed_5060_; lean_object* v_res_5061_; 
v_x_132361__boxed_5059_ = lean_unbox_usize(v_x_5055_);
lean_dec(v_x_5055_);
v_x_132362__boxed_5060_ = lean_unbox_usize(v_x_5056_);
lean_dec(v_x_5056_);
v_res_5061_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5(v_00_u03b2_5053_, v_x_5054_, v_x_132361__boxed_5059_, v_x_132362__boxed_5060_, v_x_5057_, v_x_5058_);
return v_res_5061_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__9(lean_object* v___x_5062_, lean_object* v_a_5063_, lean_object* v_as_5064_, size_t v_i_5065_, size_t v_stop_5066_, lean_object* v_b_5067_, lean_object* v___y_5068_, lean_object* v___y_5069_, lean_object* v___y_5070_, lean_object* v___y_5071_, lean_object* v___y_5072_, lean_object* v___y_5073_, lean_object* v___y_5074_, lean_object* v___y_5075_, lean_object* v___y_5076_, lean_object* v___y_5077_, lean_object* v___y_5078_){
_start:
{
lean_object* v___x_5080_; 
v___x_5080_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__9___redArg(v___x_5062_, v_a_5063_, v_as_5064_, v_i_5065_, v_stop_5066_, v_b_5067_, v___y_5069_, v___y_5073_, v___y_5074_, v___y_5075_, v___y_5076_, v___y_5077_, v___y_5078_);
return v___x_5080_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__9___boxed(lean_object** _args){
lean_object* v___x_5081_ = _args[0];
lean_object* v_a_5082_ = _args[1];
lean_object* v_as_5083_ = _args[2];
lean_object* v_i_5084_ = _args[3];
lean_object* v_stop_5085_ = _args[4];
lean_object* v_b_5086_ = _args[5];
lean_object* v___y_5087_ = _args[6];
lean_object* v___y_5088_ = _args[7];
lean_object* v___y_5089_ = _args[8];
lean_object* v___y_5090_ = _args[9];
lean_object* v___y_5091_ = _args[10];
lean_object* v___y_5092_ = _args[11];
lean_object* v___y_5093_ = _args[12];
lean_object* v___y_5094_ = _args[13];
lean_object* v___y_5095_ = _args[14];
lean_object* v___y_5096_ = _args[15];
lean_object* v___y_5097_ = _args[16];
lean_object* v___y_5098_ = _args[17];
_start:
{
size_t v_i_boxed_5099_; size_t v_stop_boxed_5100_; lean_object* v_res_5101_; 
v_i_boxed_5099_ = lean_unbox_usize(v_i_5084_);
lean_dec(v_i_5084_);
v_stop_boxed_5100_ = lean_unbox_usize(v_stop_5085_);
lean_dec(v_stop_5085_);
v_res_5101_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__4_spec__9(v___x_5081_, v_a_5082_, v_as_5083_, v_i_boxed_5099_, v_stop_boxed_5100_, v_b_5086_, v___y_5087_, v___y_5088_, v___y_5089_, v___y_5090_, v___y_5091_, v___y_5092_, v___y_5093_, v___y_5094_, v___y_5095_, v___y_5096_, v___y_5097_);
lean_dec(v___y_5097_);
lean_dec_ref(v___y_5096_);
lean_dec(v___y_5095_);
lean_dec_ref(v___y_5094_);
lean_dec(v___y_5093_);
lean_dec_ref(v___y_5092_);
lean_dec(v___y_5091_);
lean_dec_ref(v___y_5090_);
lean_dec(v___y_5089_);
lean_dec(v___y_5088_);
lean_dec_ref(v___y_5087_);
lean_dec_ref(v_as_5083_);
return v_res_5101_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__17(lean_object* v_a_5102_, lean_object* v_a_5103_, lean_object* v_as_5104_, size_t v_i_5105_, size_t v_stop_5106_, lean_object* v_b_5107_, lean_object* v___y_5108_, lean_object* v___y_5109_, lean_object* v___y_5110_, lean_object* v___y_5111_, lean_object* v___y_5112_, lean_object* v___y_5113_, lean_object* v___y_5114_, lean_object* v___y_5115_, lean_object* v___y_5116_, lean_object* v___y_5117_, lean_object* v___y_5118_){
_start:
{
lean_object* v___x_5120_; 
v___x_5120_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__17___redArg(v_a_5102_, v_a_5103_, v_as_5104_, v_i_5105_, v_stop_5106_, v_b_5107_, v___y_5109_, v___y_5113_, v___y_5114_, v___y_5115_, v___y_5116_, v___y_5117_, v___y_5118_);
return v___x_5120_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__17___boxed(lean_object** _args){
lean_object* v_a_5121_ = _args[0];
lean_object* v_a_5122_ = _args[1];
lean_object* v_as_5123_ = _args[2];
lean_object* v_i_5124_ = _args[3];
lean_object* v_stop_5125_ = _args[4];
lean_object* v_b_5126_ = _args[5];
lean_object* v___y_5127_ = _args[6];
lean_object* v___y_5128_ = _args[7];
lean_object* v___y_5129_ = _args[8];
lean_object* v___y_5130_ = _args[9];
lean_object* v___y_5131_ = _args[10];
lean_object* v___y_5132_ = _args[11];
lean_object* v___y_5133_ = _args[12];
lean_object* v___y_5134_ = _args[13];
lean_object* v___y_5135_ = _args[14];
lean_object* v___y_5136_ = _args[15];
lean_object* v___y_5137_ = _args[16];
lean_object* v___y_5138_ = _args[17];
_start:
{
size_t v_i_boxed_5139_; size_t v_stop_boxed_5140_; lean_object* v_res_5141_; 
v_i_boxed_5139_ = lean_unbox_usize(v_i_5124_);
lean_dec(v_i_5124_);
v_stop_boxed_5140_ = lean_unbox_usize(v_stop_5125_);
lean_dec(v_stop_5125_);
v_res_5141_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__1_spec__8_spec__17(v_a_5121_, v_a_5122_, v_as_5123_, v_i_boxed_5139_, v_stop_boxed_5140_, v_b_5126_, v___y_5127_, v___y_5128_, v___y_5129_, v___y_5130_, v___y_5131_, v___y_5132_, v___y_5133_, v___y_5134_, v___y_5135_, v___y_5136_, v___y_5137_);
lean_dec(v___y_5137_);
lean_dec_ref(v___y_5136_);
lean_dec(v___y_5135_);
lean_dec_ref(v___y_5134_);
lean_dec(v___y_5133_);
lean_dec_ref(v___y_5132_);
lean_dec(v___y_5131_);
lean_dec_ref(v___y_5130_);
lean_dec(v___y_5129_);
lean_dec(v___y_5128_);
lean_dec(v___y_5127_);
lean_dec_ref(v_as_5123_);
return v_res_5141_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0_spec__1_spec__5(lean_object* v_00_u03b2_5142_, lean_object* v_keys_5143_, lean_object* v_vals_5144_, lean_object* v_heq_5145_, lean_object* v_i_5146_, lean_object* v_k_5147_){
_start:
{
uint8_t v___x_5148_; 
v___x_5148_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0_spec__1_spec__5___redArg(v_keys_5143_, v_i_5146_, v_k_5147_);
return v___x_5148_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0_spec__1_spec__5___boxed(lean_object* v_00_u03b2_5149_, lean_object* v_keys_5150_, lean_object* v_vals_5151_, lean_object* v_heq_5152_, lean_object* v_i_5153_, lean_object* v_k_5154_){
_start:
{
uint8_t v_res_5155_; lean_object* v_r_5156_; 
v_res_5155_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__0_spec__1_spec__5(v_00_u03b2_5149_, v_keys_5150_, v_vals_5151_, v_heq_5152_, v_i_5153_, v_k_5154_);
lean_dec_ref(v_k_5154_);
lean_dec_ref(v_vals_5151_);
lean_dec_ref(v_keys_5150_);
v_r_5156_ = lean_box(v_res_5155_);
return v_r_5156_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5_spec__10(lean_object* v_00_u03b2_5157_, lean_object* v_n_5158_, lean_object* v_k_5159_, lean_object* v_v_5160_){
_start:
{
lean_object* v___x_5161_; 
v___x_5161_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5_spec__10___redArg(v_n_5158_, v_k_5159_, v_v_5160_);
return v___x_5161_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5_spec__11(lean_object* v_00_u03b2_5162_, size_t v_depth_5163_, lean_object* v_keys_5164_, lean_object* v_vals_5165_, lean_object* v_heq_5166_, lean_object* v_i_5167_, lean_object* v_entries_5168_){
_start:
{
lean_object* v___x_5169_; 
v___x_5169_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5_spec__11___redArg(v_depth_5163_, v_keys_5164_, v_vals_5165_, v_i_5167_, v_entries_5168_);
return v___x_5169_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5_spec__11___boxed(lean_object* v_00_u03b2_5170_, lean_object* v_depth_5171_, lean_object* v_keys_5172_, lean_object* v_vals_5173_, lean_object* v_heq_5174_, lean_object* v_i_5175_, lean_object* v_entries_5176_){
_start:
{
size_t v_depth_boxed_5177_; lean_object* v_res_5178_; 
v_depth_boxed_5177_ = lean_unbox_usize(v_depth_5171_);
lean_dec(v_depth_5171_);
v_res_5178_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5_spec__11(v_00_u03b2_5170_, v_depth_boxed_5177_, v_keys_5172_, v_vals_5173_, v_heq_5174_, v_i_5175_, v_entries_5176_);
lean_dec_ref(v_vals_5173_);
lean_dec_ref(v_keys_5172_);
return v_res_5178_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5_spec__10_spec__15(lean_object* v_00_u03b2_5179_, lean_object* v_x_5180_, lean_object* v_x_5181_, lean_object* v_x_5182_, lean_object* v_x_5183_){
_start:
{
lean_object* v___x_5184_; 
v___x_5184_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2_spec__5_spec__10_spec__15___redArg(v_x_5180_, v_x_5181_, v_x_5182_, v_x_5183_);
return v___x_5184_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeInv(lean_object* v_e_5185_, lean_object* v_a_5186_, lean_object* v_a_5187_, lean_object* v_a_5188_, lean_object* v_a_5189_, lean_object* v_a_5190_, lean_object* v_a_5191_, lean_object* v_a_5192_, lean_object* v_a_5193_, lean_object* v_a_5194_, lean_object* v_a_5195_){
_start:
{
lean_object* v___x_5201_; 
lean_inc_ref(v_e_5185_);
v___x_5201_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_5185_, v_a_5193_);
if (lean_obj_tag(v___x_5201_) == 0)
{
lean_object* v_a_5202_; lean_object* v___x_5203_; uint8_t v___x_5204_; 
v_a_5202_ = lean_ctor_get(v___x_5201_, 0);
lean_inc(v_a_5202_);
lean_dec_ref_known(v___x_5201_, 1);
v___x_5203_ = l_Lean_Expr_cleanupAnnotations(v_a_5202_);
lean_dec(v_a_5202_);
v___x_5204_ = l_Lean_Expr_isApp(v___x_5203_);
if (v___x_5204_ == 0)
{
lean_dec_ref(v___x_5203_);
lean_dec_ref(v_e_5185_);
goto v___jp_5197_;
}
else
{
lean_object* v___x_5205_; uint8_t v___x_5206_; 
v___x_5205_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5203_);
v___x_5206_ = l_Lean_Expr_isApp(v___x_5205_);
if (v___x_5206_ == 0)
{
lean_dec_ref(v___x_5205_);
lean_dec_ref(v___x_5203_);
lean_dec_ref(v_e_5185_);
goto v___jp_5197_;
}
else
{
lean_object* v___x_5207_; uint8_t v___x_5208_; 
v___x_5207_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5205_);
v___x_5208_ = l_Lean_Expr_isApp(v___x_5207_);
if (v___x_5208_ == 0)
{
lean_dec_ref(v___x_5207_);
lean_dec_ref(v___x_5205_);
lean_dec_ref(v___x_5203_);
lean_dec_ref(v_e_5185_);
goto v___jp_5197_;
}
else
{
lean_object* v___x_5209_; lean_object* v___x_5210_; uint8_t v___x_5211_; 
v___x_5209_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5207_);
v___x_5210_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__6));
v___x_5211_ = l_Lean_Expr_isConstOf(v___x_5209_, v___x_5210_);
lean_dec_ref(v___x_5209_);
if (v___x_5211_ == 0)
{
lean_dec_ref(v___x_5207_);
lean_dec_ref(v___x_5205_);
lean_dec_ref(v___x_5203_);
lean_dec_ref(v_e_5185_);
goto v___jp_5197_;
}
else
{
lean_object* v_arg_5212_; lean_object* v_arg_5213_; lean_object* v_arg_5214_; lean_object* v___x_5215_; 
v_arg_5212_ = lean_ctor_get(v___x_5203_, 1);
lean_inc_ref(v_arg_5212_);
lean_dec_ref(v___x_5203_);
v_arg_5213_ = lean_ctor_get(v___x_5205_, 1);
lean_inc_ref(v_arg_5213_);
lean_dec_ref(v___x_5205_);
v_arg_5214_ = lean_ctor_get(v___x_5207_, 1);
lean_inc_ref(v_arg_5214_);
lean_dec_ref(v___x_5207_);
v___x_5215_ = l_Lean_Meta_Grind_Arith_CommRing_getCommRingId_x3f___redArg(v_arg_5214_, v_a_5190_, v_a_5191_, v_a_5192_, v_a_5193_, v_a_5194_, v_a_5195_);
if (lean_obj_tag(v___x_5215_) == 0)
{
lean_object* v_a_5216_; lean_object* v___x_5218_; uint8_t v_isShared_5219_; uint8_t v_isSharedCheck_5245_; 
v_a_5216_ = lean_ctor_get(v___x_5215_, 0);
v_isSharedCheck_5245_ = !lean_is_exclusive(v___x_5215_);
if (v_isSharedCheck_5245_ == 0)
{
v___x_5218_ = v___x_5215_;
v_isShared_5219_ = v_isSharedCheck_5245_;
goto v_resetjp_5217_;
}
else
{
lean_inc(v_a_5216_);
lean_dec(v___x_5215_);
v___x_5218_ = lean_box(0);
v_isShared_5219_ = v_isSharedCheck_5245_;
goto v_resetjp_5217_;
}
v_resetjp_5217_:
{
if (lean_obj_tag(v_a_5216_) == 1)
{
lean_object* v_val_5220_; uint8_t v___x_5221_; lean_object* v___x_5222_; lean_object* v___x_5223_; 
lean_del_object(v___x_5218_);
v_val_5220_ = lean_ctor_get(v_a_5216_, 0);
lean_inc(v_val_5220_);
lean_dec_ref_known(v_a_5216_, 1);
v___x_5221_ = 0;
v___x_5222_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5222_, 0, v_val_5220_);
lean_ctor_set_uint8(v___x_5222_, sizeof(void*)*1, v___x_5221_);
v___x_5223_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv(v_e_5185_, v_arg_5213_, v_arg_5212_, v___x_5222_, v_a_5186_, v_a_5187_, v_a_5188_, v_a_5189_, v_a_5190_, v_a_5191_, v_a_5192_, v_a_5193_, v_a_5194_, v_a_5195_);
lean_dec_ref_known(v___x_5222_, 1);
lean_dec_ref(v_arg_5213_);
if (lean_obj_tag(v___x_5223_) == 0)
{
lean_object* v___x_5225_; uint8_t v_isShared_5226_; uint8_t v_isSharedCheck_5231_; 
v_isSharedCheck_5231_ = !lean_is_exclusive(v___x_5223_);
if (v_isSharedCheck_5231_ == 0)
{
lean_object* v_unused_5232_; 
v_unused_5232_ = lean_ctor_get(v___x_5223_, 0);
lean_dec(v_unused_5232_);
v___x_5225_ = v___x_5223_;
v_isShared_5226_ = v_isSharedCheck_5231_;
goto v_resetjp_5224_;
}
else
{
lean_dec(v___x_5223_);
v___x_5225_ = lean_box(0);
v_isShared_5226_ = v_isSharedCheck_5231_;
goto v_resetjp_5224_;
}
v_resetjp_5224_:
{
lean_object* v___x_5227_; lean_object* v___x_5229_; 
v___x_5227_ = lean_box(v___x_5211_);
if (v_isShared_5226_ == 0)
{
lean_ctor_set(v___x_5225_, 0, v___x_5227_);
v___x_5229_ = v___x_5225_;
goto v_reusejp_5228_;
}
else
{
lean_object* v_reuseFailAlloc_5230_; 
v_reuseFailAlloc_5230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5230_, 0, v___x_5227_);
v___x_5229_ = v_reuseFailAlloc_5230_;
goto v_reusejp_5228_;
}
v_reusejp_5228_:
{
return v___x_5229_;
}
}
}
else
{
lean_object* v_a_5233_; lean_object* v___x_5235_; uint8_t v_isShared_5236_; uint8_t v_isSharedCheck_5240_; 
v_a_5233_ = lean_ctor_get(v___x_5223_, 0);
v_isSharedCheck_5240_ = !lean_is_exclusive(v___x_5223_);
if (v_isSharedCheck_5240_ == 0)
{
v___x_5235_ = v___x_5223_;
v_isShared_5236_ = v_isSharedCheck_5240_;
goto v_resetjp_5234_;
}
else
{
lean_inc(v_a_5233_);
lean_dec(v___x_5223_);
v___x_5235_ = lean_box(0);
v_isShared_5236_ = v_isSharedCheck_5240_;
goto v_resetjp_5234_;
}
v_resetjp_5234_:
{
lean_object* v___x_5238_; 
if (v_isShared_5236_ == 0)
{
v___x_5238_ = v___x_5235_;
goto v_reusejp_5237_;
}
else
{
lean_object* v_reuseFailAlloc_5239_; 
v_reuseFailAlloc_5239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5239_, 0, v_a_5233_);
v___x_5238_ = v_reuseFailAlloc_5239_;
goto v_reusejp_5237_;
}
v_reusejp_5237_:
{
return v___x_5238_;
}
}
}
}
else
{
lean_object* v___x_5241_; lean_object* v___x_5243_; 
lean_dec(v_a_5216_);
lean_dec_ref(v_arg_5213_);
lean_dec_ref(v_arg_5212_);
lean_dec_ref(v_e_5185_);
v___x_5241_ = lean_box(v___x_5211_);
if (v_isShared_5219_ == 0)
{
lean_ctor_set(v___x_5218_, 0, v___x_5241_);
v___x_5243_ = v___x_5218_;
goto v_reusejp_5242_;
}
else
{
lean_object* v_reuseFailAlloc_5244_; 
v_reuseFailAlloc_5244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5244_, 0, v___x_5241_);
v___x_5243_ = v_reuseFailAlloc_5244_;
goto v_reusejp_5242_;
}
v_reusejp_5242_:
{
return v___x_5243_;
}
}
}
}
else
{
lean_object* v_a_5246_; lean_object* v___x_5248_; uint8_t v_isShared_5249_; uint8_t v_isSharedCheck_5253_; 
lean_dec_ref(v_arg_5213_);
lean_dec_ref(v_arg_5212_);
lean_dec_ref(v_e_5185_);
v_a_5246_ = lean_ctor_get(v___x_5215_, 0);
v_isSharedCheck_5253_ = !lean_is_exclusive(v___x_5215_);
if (v_isSharedCheck_5253_ == 0)
{
v___x_5248_ = v___x_5215_;
v_isShared_5249_ = v_isSharedCheck_5253_;
goto v_resetjp_5247_;
}
else
{
lean_inc(v_a_5246_);
lean_dec(v___x_5215_);
v___x_5248_ = lean_box(0);
v_isShared_5249_ = v_isSharedCheck_5253_;
goto v_resetjp_5247_;
}
v_resetjp_5247_:
{
lean_object* v___x_5251_; 
if (v_isShared_5249_ == 0)
{
v___x_5251_ = v___x_5248_;
goto v_reusejp_5250_;
}
else
{
lean_object* v_reuseFailAlloc_5252_; 
v_reuseFailAlloc_5252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5252_, 0, v_a_5246_);
v___x_5251_ = v_reuseFailAlloc_5252_;
goto v_reusejp_5250_;
}
v_reusejp_5250_:
{
return v___x_5251_;
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
lean_object* v_a_5254_; lean_object* v___x_5256_; uint8_t v_isShared_5257_; uint8_t v_isSharedCheck_5261_; 
lean_dec_ref(v_e_5185_);
v_a_5254_ = lean_ctor_get(v___x_5201_, 0);
v_isSharedCheck_5261_ = !lean_is_exclusive(v___x_5201_);
if (v_isSharedCheck_5261_ == 0)
{
v___x_5256_ = v___x_5201_;
v_isShared_5257_ = v_isSharedCheck_5261_;
goto v_resetjp_5255_;
}
else
{
lean_inc(v_a_5254_);
lean_dec(v___x_5201_);
v___x_5256_ = lean_box(0);
v_isShared_5257_ = v_isSharedCheck_5261_;
goto v_resetjp_5255_;
}
v_resetjp_5255_:
{
lean_object* v___x_5259_; 
if (v_isShared_5257_ == 0)
{
v___x_5259_ = v___x_5256_;
goto v_reusejp_5258_;
}
else
{
lean_object* v_reuseFailAlloc_5260_; 
v_reuseFailAlloc_5260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5260_, 0, v_a_5254_);
v___x_5259_ = v_reuseFailAlloc_5260_;
goto v_reusejp_5258_;
}
v_reusejp_5258_:
{
return v___x_5259_;
}
}
}
v___jp_5197_:
{
uint8_t v___x_5198_; lean_object* v___x_5199_; lean_object* v___x_5200_; 
v___x_5198_ = 0;
v___x_5199_ = lean_box(v___x_5198_);
v___x_5200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5200_, 0, v___x_5199_);
return v___x_5200_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeInv___boxed(lean_object* v_e_5262_, lean_object* v_a_5263_, lean_object* v_a_5264_, lean_object* v_a_5265_, lean_object* v_a_5266_, lean_object* v_a_5267_, lean_object* v_a_5268_, lean_object* v_a_5269_, lean_object* v_a_5270_, lean_object* v_a_5271_, lean_object* v_a_5272_, lean_object* v_a_5273_){
_start:
{
lean_object* v_res_5274_; 
v_res_5274_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeInv(v_e_5262_, v_a_5263_, v_a_5264_, v_a_5265_, v_a_5266_, v_a_5267_, v_a_5268_, v_a_5269_, v_a_5270_, v_a_5271_, v_a_5272_);
lean_dec(v_a_5272_);
lean_dec_ref(v_a_5271_);
lean_dec(v_a_5270_);
lean_dec_ref(v_a_5269_);
lean_dec(v_a_5268_);
lean_dec_ref(v_a_5267_);
lean_dec(v_a_5266_);
lean_dec_ref(v_a_5265_);
lean_dec(v_a_5264_);
lean_dec(v_a_5263_);
return v_res_5274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___lam__0(lean_object* v_e_5275_, lean_object* v_val_5276_, lean_object* v_s_5277_){
_start:
{
lean_object* v_toRingState_5278_; lean_object* v_denoteEntries_5279_; lean_object* v_nextId_5280_; lean_object* v_steps_5281_; lean_object* v_queue_5282_; lean_object* v_basis_5283_; lean_object* v_diseqs_5284_; uint8_t v_recheck_5285_; lean_object* v_invSet_5286_; lean_object* v_powIdentityVarCount_5287_; lean_object* v_numEq0_x3f_5288_; uint8_t v_numEq0Updated_5289_; lean_object* v___x_5291_; uint8_t v_isShared_5292_; uint8_t v_isSharedCheck_5312_; 
v_toRingState_5278_ = lean_ctor_get(v_s_5277_, 0);
v_denoteEntries_5279_ = lean_ctor_get(v_s_5277_, 1);
v_nextId_5280_ = lean_ctor_get(v_s_5277_, 2);
v_steps_5281_ = lean_ctor_get(v_s_5277_, 3);
v_queue_5282_ = lean_ctor_get(v_s_5277_, 4);
v_basis_5283_ = lean_ctor_get(v_s_5277_, 5);
v_diseqs_5284_ = lean_ctor_get(v_s_5277_, 6);
v_recheck_5285_ = lean_ctor_get_uint8(v_s_5277_, sizeof(void*)*10);
v_invSet_5286_ = lean_ctor_get(v_s_5277_, 7);
v_powIdentityVarCount_5287_ = lean_ctor_get(v_s_5277_, 8);
v_numEq0_x3f_5288_ = lean_ctor_get(v_s_5277_, 9);
v_numEq0Updated_5289_ = lean_ctor_get_uint8(v_s_5277_, sizeof(void*)*10 + 1);
v_isSharedCheck_5312_ = !lean_is_exclusive(v_s_5277_);
if (v_isSharedCheck_5312_ == 0)
{
v___x_5291_ = v_s_5277_;
v_isShared_5292_ = v_isSharedCheck_5312_;
goto v_resetjp_5290_;
}
else
{
lean_inc(v_numEq0_x3f_5288_);
lean_inc(v_powIdentityVarCount_5287_);
lean_inc(v_invSet_5286_);
lean_inc(v_diseqs_5284_);
lean_inc(v_basis_5283_);
lean_inc(v_queue_5282_);
lean_inc(v_steps_5281_);
lean_inc(v_nextId_5280_);
lean_inc(v_denoteEntries_5279_);
lean_inc(v_toRingState_5278_);
lean_dec(v_s_5277_);
v___x_5291_ = lean_box(0);
v_isShared_5292_ = v_isSharedCheck_5312_;
goto v_resetjp_5290_;
}
v_resetjp_5290_:
{
lean_object* v_vars_5293_; lean_object* v_varMap_5294_; lean_object* v_denote_5295_; lean_object* v_natCastSet_5296_; lean_object* v_natCasts_5297_; uint8_t v_hasIntCast_5298_; lean_object* v___x_5300_; uint8_t v_isShared_5301_; uint8_t v_isSharedCheck_5311_; 
v_vars_5293_ = lean_ctor_get(v_toRingState_5278_, 0);
v_varMap_5294_ = lean_ctor_get(v_toRingState_5278_, 1);
v_denote_5295_ = lean_ctor_get(v_toRingState_5278_, 2);
v_natCastSet_5296_ = lean_ctor_get(v_toRingState_5278_, 3);
v_natCasts_5297_ = lean_ctor_get(v_toRingState_5278_, 4);
v_hasIntCast_5298_ = lean_ctor_get_uint8(v_toRingState_5278_, sizeof(void*)*5);
v_isSharedCheck_5311_ = !lean_is_exclusive(v_toRingState_5278_);
if (v_isSharedCheck_5311_ == 0)
{
v___x_5300_ = v_toRingState_5278_;
v_isShared_5301_ = v_isSharedCheck_5311_;
goto v_resetjp_5299_;
}
else
{
lean_inc(v_natCasts_5297_);
lean_inc(v_natCastSet_5296_);
lean_inc(v_denote_5295_);
lean_inc(v_varMap_5294_);
lean_inc(v_vars_5293_);
lean_dec(v_toRingState_5278_);
v___x_5300_ = lean_box(0);
v_isShared_5301_ = v_isSharedCheck_5311_;
goto v_resetjp_5299_;
}
v_resetjp_5299_:
{
lean_object* v___x_5302_; lean_object* v___x_5304_; 
lean_inc_ref(v_val_5276_);
lean_inc_ref(v_e_5275_);
v___x_5302_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2___redArg(v_denote_5295_, v_e_5275_, v_val_5276_);
if (v_isShared_5301_ == 0)
{
lean_ctor_set(v___x_5300_, 2, v___x_5302_);
v___x_5304_ = v___x_5300_;
goto v_reusejp_5303_;
}
else
{
lean_object* v_reuseFailAlloc_5310_; 
v_reuseFailAlloc_5310_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_5310_, 0, v_vars_5293_);
lean_ctor_set(v_reuseFailAlloc_5310_, 1, v_varMap_5294_);
lean_ctor_set(v_reuseFailAlloc_5310_, 2, v___x_5302_);
lean_ctor_set(v_reuseFailAlloc_5310_, 3, v_natCastSet_5296_);
lean_ctor_set(v_reuseFailAlloc_5310_, 4, v_natCasts_5297_);
lean_ctor_set_uint8(v_reuseFailAlloc_5310_, sizeof(void*)*5, v_hasIntCast_5298_);
v___x_5304_ = v_reuseFailAlloc_5310_;
goto v_reusejp_5303_;
}
v_reusejp_5303_:
{
lean_object* v___x_5305_; lean_object* v___x_5306_; lean_object* v___x_5308_; 
v___x_5305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5305_, 0, v_e_5275_);
lean_ctor_set(v___x_5305_, 1, v_val_5276_);
v___x_5306_ = l_Lean_PersistentArray_push___redArg(v_denoteEntries_5279_, v___x_5305_);
if (v_isShared_5292_ == 0)
{
lean_ctor_set(v___x_5291_, 1, v___x_5306_);
lean_ctor_set(v___x_5291_, 0, v___x_5304_);
v___x_5308_ = v___x_5291_;
goto v_reusejp_5307_;
}
else
{
lean_object* v_reuseFailAlloc_5309_; 
v_reuseFailAlloc_5309_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v_reuseFailAlloc_5309_, 0, v___x_5304_);
lean_ctor_set(v_reuseFailAlloc_5309_, 1, v___x_5306_);
lean_ctor_set(v_reuseFailAlloc_5309_, 2, v_nextId_5280_);
lean_ctor_set(v_reuseFailAlloc_5309_, 3, v_steps_5281_);
lean_ctor_set(v_reuseFailAlloc_5309_, 4, v_queue_5282_);
lean_ctor_set(v_reuseFailAlloc_5309_, 5, v_basis_5283_);
lean_ctor_set(v_reuseFailAlloc_5309_, 6, v_diseqs_5284_);
lean_ctor_set(v_reuseFailAlloc_5309_, 7, v_invSet_5286_);
lean_ctor_set(v_reuseFailAlloc_5309_, 8, v_powIdentityVarCount_5287_);
lean_ctor_set(v_reuseFailAlloc_5309_, 9, v_numEq0_x3f_5288_);
lean_ctor_set_uint8(v_reuseFailAlloc_5309_, sizeof(void*)*10, v_recheck_5285_);
lean_ctor_set_uint8(v_reuseFailAlloc_5309_, sizeof(void*)*10 + 1, v_numEq0Updated_5289_);
v___x_5308_ = v_reuseFailAlloc_5309_;
goto v_reusejp_5307_;
}
v_reusejp_5307_:
{
return v___x_5308_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___lam__1(lean_object* v_e_5313_, lean_object* v_val_5314_, lean_object* v_s_5315_){
_start:
{
lean_object* v_denote_5316_; lean_object* v_vars_5317_; lean_object* v_varMap_5318_; lean_object* v___x_5320_; uint8_t v_isShared_5321_; uint8_t v_isSharedCheck_5326_; 
v_denote_5316_ = lean_ctor_get(v_s_5315_, 0);
v_vars_5317_ = lean_ctor_get(v_s_5315_, 1);
v_varMap_5318_ = lean_ctor_get(v_s_5315_, 2);
v_isSharedCheck_5326_ = !lean_is_exclusive(v_s_5315_);
if (v_isSharedCheck_5326_ == 0)
{
v___x_5320_ = v_s_5315_;
v_isShared_5321_ = v_isSharedCheck_5326_;
goto v_resetjp_5319_;
}
else
{
lean_inc(v_varMap_5318_);
lean_inc(v_vars_5317_);
lean_inc(v_denote_5316_);
lean_dec(v_s_5315_);
v___x_5320_ = lean_box(0);
v_isShared_5321_ = v_isSharedCheck_5326_;
goto v_resetjp_5319_;
}
v_resetjp_5319_:
{
lean_object* v___x_5322_; lean_object* v___x_5324_; 
v___x_5322_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2___redArg(v_denote_5316_, v_e_5313_, v_val_5314_);
if (v_isShared_5321_ == 0)
{
lean_ctor_set(v___x_5320_, 0, v___x_5322_);
v___x_5324_ = v___x_5320_;
goto v_reusejp_5323_;
}
else
{
lean_object* v_reuseFailAlloc_5325_; 
v_reuseFailAlloc_5325_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5325_, 0, v___x_5322_);
lean_ctor_set(v_reuseFailAlloc_5325_, 1, v_vars_5317_);
lean_ctor_set(v_reuseFailAlloc_5325_, 2, v_varMap_5318_);
v___x_5324_ = v_reuseFailAlloc_5325_;
goto v_reusejp_5323_;
}
v_reusejp_5323_:
{
return v___x_5324_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___lam__2(lean_object* v_e_5327_, lean_object* v_val_5328_, lean_object* v_s_5329_){
_start:
{
lean_object* v_vars_5330_; lean_object* v_varMap_5331_; lean_object* v_denote_5332_; lean_object* v_natCastSet_5333_; lean_object* v_natCasts_5334_; uint8_t v_hasIntCast_5335_; lean_object* v___x_5337_; uint8_t v_isShared_5338_; uint8_t v_isSharedCheck_5343_; 
v_vars_5330_ = lean_ctor_get(v_s_5329_, 0);
v_varMap_5331_ = lean_ctor_get(v_s_5329_, 1);
v_denote_5332_ = lean_ctor_get(v_s_5329_, 2);
v_natCastSet_5333_ = lean_ctor_get(v_s_5329_, 3);
v_natCasts_5334_ = lean_ctor_get(v_s_5329_, 4);
v_hasIntCast_5335_ = lean_ctor_get_uint8(v_s_5329_, sizeof(void*)*5);
v_isSharedCheck_5343_ = !lean_is_exclusive(v_s_5329_);
if (v_isSharedCheck_5343_ == 0)
{
v___x_5337_ = v_s_5329_;
v_isShared_5338_ = v_isSharedCheck_5343_;
goto v_resetjp_5336_;
}
else
{
lean_inc(v_natCasts_5334_);
lean_inc(v_natCastSet_5333_);
lean_inc(v_denote_5332_);
lean_inc(v_varMap_5331_);
lean_inc(v_vars_5330_);
lean_dec(v_s_5329_);
v___x_5337_ = lean_box(0);
v_isShared_5338_ = v_isSharedCheck_5343_;
goto v_resetjp_5336_;
}
v_resetjp_5336_:
{
lean_object* v___x_5339_; lean_object* v___x_5341_; 
v___x_5339_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processCast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast_spec__0_spec__2___redArg(v_denote_5332_, v_e_5327_, v_val_5328_);
if (v_isShared_5338_ == 0)
{
lean_ctor_set(v___x_5337_, 2, v___x_5339_);
v___x_5341_ = v___x_5337_;
goto v_reusejp_5340_;
}
else
{
lean_object* v_reuseFailAlloc_5342_; 
v_reuseFailAlloc_5342_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_5342_, 0, v_vars_5330_);
lean_ctor_set(v_reuseFailAlloc_5342_, 1, v_varMap_5331_);
lean_ctor_set(v_reuseFailAlloc_5342_, 2, v___x_5339_);
lean_ctor_set(v_reuseFailAlloc_5342_, 3, v_natCastSet_5333_);
lean_ctor_set(v_reuseFailAlloc_5342_, 4, v_natCasts_5334_);
lean_ctor_set_uint8(v_reuseFailAlloc_5342_, sizeof(void*)*5, v_hasIntCast_5335_);
v___x_5341_ = v_reuseFailAlloc_5342_;
goto v_reusejp_5340_;
}
v_reusejp_5340_:
{
return v___x_5341_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0___redArg(lean_object* v_cls_5344_, lean_object* v_msg_5345_, lean_object* v___y_5346_, lean_object* v___y_5347_, lean_object* v___y_5348_, lean_object* v___y_5349_){
_start:
{
lean_object* v_ref_5351_; lean_object* v___x_5352_; lean_object* v_a_5353_; lean_object* v___x_5355_; uint8_t v_isShared_5356_; uint8_t v_isSharedCheck_5398_; 
v_ref_5351_ = lean_ctor_get(v___y_5348_, 2);
v___x_5352_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5(v_msg_5345_, v___y_5346_, v___y_5347_, v___y_5348_, v___y_5349_);
v_a_5353_ = lean_ctor_get(v___x_5352_, 0);
v_isSharedCheck_5398_ = !lean_is_exclusive(v___x_5352_);
if (v_isSharedCheck_5398_ == 0)
{
v___x_5355_ = v___x_5352_;
v_isShared_5356_ = v_isSharedCheck_5398_;
goto v_resetjp_5354_;
}
else
{
lean_inc(v_a_5353_);
lean_dec(v___x_5352_);
v___x_5355_ = lean_box(0);
v_isShared_5356_ = v_isSharedCheck_5398_;
goto v_resetjp_5354_;
}
v_resetjp_5354_:
{
lean_object* v___x_5357_; lean_object* v_traceState_5358_; lean_object* v_env_5359_; lean_object* v_nextMacroScope_5360_; lean_object* v_ngen_5361_; lean_object* v_auxDeclNGen_5362_; lean_object* v_cache_5363_; lean_object* v_recordedDeps_5364_; lean_object* v_messages_5365_; lean_object* v_infoState_5366_; lean_object* v_snapshotTasks_5367_; lean_object* v___x_5369_; uint8_t v_isShared_5370_; uint8_t v_isSharedCheck_5397_; 
v___x_5357_ = lean_st_ref_take(v___y_5349_);
v_traceState_5358_ = lean_ctor_get(v___x_5357_, 4);
v_env_5359_ = lean_ctor_get(v___x_5357_, 0);
v_nextMacroScope_5360_ = lean_ctor_get(v___x_5357_, 1);
v_ngen_5361_ = lean_ctor_get(v___x_5357_, 2);
v_auxDeclNGen_5362_ = lean_ctor_get(v___x_5357_, 3);
v_cache_5363_ = lean_ctor_get(v___x_5357_, 5);
v_recordedDeps_5364_ = lean_ctor_get(v___x_5357_, 6);
v_messages_5365_ = lean_ctor_get(v___x_5357_, 7);
v_infoState_5366_ = lean_ctor_get(v___x_5357_, 8);
v_snapshotTasks_5367_ = lean_ctor_get(v___x_5357_, 9);
v_isSharedCheck_5397_ = !lean_is_exclusive(v___x_5357_);
if (v_isSharedCheck_5397_ == 0)
{
v___x_5369_ = v___x_5357_;
v_isShared_5370_ = v_isSharedCheck_5397_;
goto v_resetjp_5368_;
}
else
{
lean_inc(v_snapshotTasks_5367_);
lean_inc(v_infoState_5366_);
lean_inc(v_messages_5365_);
lean_inc(v_recordedDeps_5364_);
lean_inc(v_cache_5363_);
lean_inc(v_traceState_5358_);
lean_inc(v_auxDeclNGen_5362_);
lean_inc(v_ngen_5361_);
lean_inc(v_nextMacroScope_5360_);
lean_inc(v_env_5359_);
lean_dec(v___x_5357_);
v___x_5369_ = lean_box(0);
v_isShared_5370_ = v_isSharedCheck_5397_;
goto v_resetjp_5368_;
}
v_resetjp_5368_:
{
uint64_t v_tid_5371_; lean_object* v_traces_5372_; lean_object* v___x_5374_; uint8_t v_isShared_5375_; uint8_t v_isSharedCheck_5396_; 
v_tid_5371_ = lean_ctor_get_uint64(v_traceState_5358_, sizeof(void*)*1);
v_traces_5372_ = lean_ctor_get(v_traceState_5358_, 0);
v_isSharedCheck_5396_ = !lean_is_exclusive(v_traceState_5358_);
if (v_isSharedCheck_5396_ == 0)
{
v___x_5374_ = v_traceState_5358_;
v_isShared_5375_ = v_isSharedCheck_5396_;
goto v_resetjp_5373_;
}
else
{
lean_inc(v_traces_5372_);
lean_dec(v_traceState_5358_);
v___x_5374_ = lean_box(0);
v_isShared_5375_ = v_isSharedCheck_5396_;
goto v_resetjp_5373_;
}
v_resetjp_5373_:
{
lean_object* v___x_5376_; lean_object* v___x_5377_; double v___x_5378_; uint8_t v___x_5379_; lean_object* v___x_5380_; lean_object* v___x_5381_; lean_object* v___x_5382_; lean_object* v___x_5383_; lean_object* v___x_5384_; lean_object* v___x_5385_; lean_object* v___x_5387_; 
v___x_5376_ = lean_box(0);
v___x_5377_ = lean_box(0);
v___x_5378_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__0);
v___x_5379_ = 0;
v___x_5380_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__1));
v___x_5381_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_5381_, 0, v_cls_5344_);
lean_ctor_set(v___x_5381_, 1, v___x_5377_);
lean_ctor_set(v___x_5381_, 2, v___x_5380_);
lean_ctor_set_float(v___x_5381_, sizeof(void*)*3, v___x_5378_);
lean_ctor_set_float(v___x_5381_, sizeof(void*)*3 + 8, v___x_5378_);
lean_ctor_set_uint8(v___x_5381_, sizeof(void*)*3 + 16, v___x_5379_);
v___x_5382_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__2));
v___x_5383_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_5383_, 0, v___x_5381_);
lean_ctor_set(v___x_5383_, 1, v_a_5353_);
lean_ctor_set(v___x_5383_, 2, v___x_5382_);
lean_inc(v_ref_5351_);
v___x_5384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5384_, 0, v_ref_5351_);
lean_ctor_set(v___x_5384_, 1, v___x_5383_);
v___x_5385_ = l_Lean_PersistentArray_push___redArg(v_traces_5372_, v___x_5384_);
if (v_isShared_5375_ == 0)
{
lean_ctor_set(v___x_5374_, 0, v___x_5385_);
v___x_5387_ = v___x_5374_;
goto v_reusejp_5386_;
}
else
{
lean_object* v_reuseFailAlloc_5395_; 
v_reuseFailAlloc_5395_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_5395_, 0, v___x_5385_);
lean_ctor_set_uint64(v_reuseFailAlloc_5395_, sizeof(void*)*1, v_tid_5371_);
v___x_5387_ = v_reuseFailAlloc_5395_;
goto v_reusejp_5386_;
}
v_reusejp_5386_:
{
lean_object* v___x_5389_; 
if (v_isShared_5370_ == 0)
{
lean_ctor_set(v___x_5369_, 4, v___x_5387_);
v___x_5389_ = v___x_5369_;
goto v_reusejp_5388_;
}
else
{
lean_object* v_reuseFailAlloc_5394_; 
v_reuseFailAlloc_5394_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_5394_, 0, v_env_5359_);
lean_ctor_set(v_reuseFailAlloc_5394_, 1, v_nextMacroScope_5360_);
lean_ctor_set(v_reuseFailAlloc_5394_, 2, v_ngen_5361_);
lean_ctor_set(v_reuseFailAlloc_5394_, 3, v_auxDeclNGen_5362_);
lean_ctor_set(v_reuseFailAlloc_5394_, 4, v___x_5387_);
lean_ctor_set(v_reuseFailAlloc_5394_, 5, v_cache_5363_);
lean_ctor_set(v_reuseFailAlloc_5394_, 6, v_recordedDeps_5364_);
lean_ctor_set(v_reuseFailAlloc_5394_, 7, v_messages_5365_);
lean_ctor_set(v_reuseFailAlloc_5394_, 8, v_infoState_5366_);
lean_ctor_set(v_reuseFailAlloc_5394_, 9, v_snapshotTasks_5367_);
v___x_5389_ = v_reuseFailAlloc_5394_;
goto v_reusejp_5388_;
}
v_reusejp_5388_:
{
lean_object* v___x_5390_; lean_object* v___x_5392_; 
v___x_5390_ = lean_st_ref_put(v___y_5349_, v___x_5389_);
if (v_isShared_5356_ == 0)
{
lean_ctor_set(v___x_5355_, 0, v___x_5376_);
v___x_5392_ = v___x_5355_;
goto v_reusejp_5391_;
}
else
{
lean_object* v_reuseFailAlloc_5393_; 
v_reuseFailAlloc_5393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5393_, 0, v___x_5376_);
v___x_5392_ = v_reuseFailAlloc_5393_;
goto v_reusejp_5391_;
}
v_reusejp_5391_:
{
return v___x_5392_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0___redArg___boxed(lean_object* v_cls_5399_, lean_object* v_msg_5400_, lean_object* v___y_5401_, lean_object* v___y_5402_, lean_object* v___y_5403_, lean_object* v___y_5404_, lean_object* v___y_5405_){
_start:
{
lean_object* v_res_5406_; 
v_res_5406_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0___redArg(v_cls_5399_, v_msg_5400_, v___y_5401_, v___y_5402_, v___y_5403_, v___y_5404_);
lean_dec(v___y_5404_);
lean_dec_ref(v___y_5403_);
lean_dec(v___y_5402_);
lean_dec_ref(v___y_5401_);
return v_res_5406_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__1___redArg(lean_object* v_cls_5407_, lean_object* v_msg_5408_, lean_object* v___y_5409_, lean_object* v___y_5410_, lean_object* v___y_5411_, lean_object* v___y_5412_){
_start:
{
lean_object* v_ref_5414_; lean_object* v___x_5415_; lean_object* v_a_5416_; lean_object* v___x_5418_; uint8_t v_isShared_5419_; uint8_t v_isSharedCheck_5461_; 
v_ref_5414_ = lean_ctor_get(v___y_5411_, 2);
v___x_5415_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5(v_msg_5408_, v___y_5409_, v___y_5410_, v___y_5411_, v___y_5412_);
v_a_5416_ = lean_ctor_get(v___x_5415_, 0);
v_isSharedCheck_5461_ = !lean_is_exclusive(v___x_5415_);
if (v_isSharedCheck_5461_ == 0)
{
v___x_5418_ = v___x_5415_;
v_isShared_5419_ = v_isSharedCheck_5461_;
goto v_resetjp_5417_;
}
else
{
lean_inc(v_a_5416_);
lean_dec(v___x_5415_);
v___x_5418_ = lean_box(0);
v_isShared_5419_ = v_isSharedCheck_5461_;
goto v_resetjp_5417_;
}
v_resetjp_5417_:
{
lean_object* v___x_5420_; lean_object* v_traceState_5421_; lean_object* v_env_5422_; lean_object* v_nextMacroScope_5423_; lean_object* v_ngen_5424_; lean_object* v_auxDeclNGen_5425_; lean_object* v_cache_5426_; lean_object* v_recordedDeps_5427_; lean_object* v_messages_5428_; lean_object* v_infoState_5429_; lean_object* v_snapshotTasks_5430_; lean_object* v___x_5432_; uint8_t v_isShared_5433_; uint8_t v_isSharedCheck_5460_; 
v___x_5420_ = lean_st_ref_take(v___y_5412_);
v_traceState_5421_ = lean_ctor_get(v___x_5420_, 4);
v_env_5422_ = lean_ctor_get(v___x_5420_, 0);
v_nextMacroScope_5423_ = lean_ctor_get(v___x_5420_, 1);
v_ngen_5424_ = lean_ctor_get(v___x_5420_, 2);
v_auxDeclNGen_5425_ = lean_ctor_get(v___x_5420_, 3);
v_cache_5426_ = lean_ctor_get(v___x_5420_, 5);
v_recordedDeps_5427_ = lean_ctor_get(v___x_5420_, 6);
v_messages_5428_ = lean_ctor_get(v___x_5420_, 7);
v_infoState_5429_ = lean_ctor_get(v___x_5420_, 8);
v_snapshotTasks_5430_ = lean_ctor_get(v___x_5420_, 9);
v_isSharedCheck_5460_ = !lean_is_exclusive(v___x_5420_);
if (v_isSharedCheck_5460_ == 0)
{
v___x_5432_ = v___x_5420_;
v_isShared_5433_ = v_isSharedCheck_5460_;
goto v_resetjp_5431_;
}
else
{
lean_inc(v_snapshotTasks_5430_);
lean_inc(v_infoState_5429_);
lean_inc(v_messages_5428_);
lean_inc(v_recordedDeps_5427_);
lean_inc(v_cache_5426_);
lean_inc(v_traceState_5421_);
lean_inc(v_auxDeclNGen_5425_);
lean_inc(v_ngen_5424_);
lean_inc(v_nextMacroScope_5423_);
lean_inc(v_env_5422_);
lean_dec(v___x_5420_);
v___x_5432_ = lean_box(0);
v_isShared_5433_ = v_isSharedCheck_5460_;
goto v_resetjp_5431_;
}
v_resetjp_5431_:
{
uint64_t v_tid_5434_; lean_object* v_traces_5435_; lean_object* v___x_5437_; uint8_t v_isShared_5438_; uint8_t v_isSharedCheck_5459_; 
v_tid_5434_ = lean_ctor_get_uint64(v_traceState_5421_, sizeof(void*)*1);
v_traces_5435_ = lean_ctor_get(v_traceState_5421_, 0);
v_isSharedCheck_5459_ = !lean_is_exclusive(v_traceState_5421_);
if (v_isSharedCheck_5459_ == 0)
{
v___x_5437_ = v_traceState_5421_;
v_isShared_5438_ = v_isSharedCheck_5459_;
goto v_resetjp_5436_;
}
else
{
lean_inc(v_traces_5435_);
lean_dec(v_traceState_5421_);
v___x_5437_ = lean_box(0);
v_isShared_5438_ = v_isSharedCheck_5459_;
goto v_resetjp_5436_;
}
v_resetjp_5436_:
{
lean_object* v___x_5439_; lean_object* v___x_5440_; double v___x_5441_; uint8_t v___x_5442_; lean_object* v___x_5443_; lean_object* v___x_5444_; lean_object* v___x_5445_; lean_object* v___x_5446_; lean_object* v___x_5447_; lean_object* v___x_5448_; lean_object* v___x_5450_; 
v___x_5439_ = lean_box(0);
v___x_5440_ = lean_box(0);
v___x_5441_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__0);
v___x_5442_ = 0;
v___x_5443_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__1));
v___x_5444_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_5444_, 0, v_cls_5407_);
lean_ctor_set(v___x_5444_, 1, v___x_5440_);
lean_ctor_set(v___x_5444_, 2, v___x_5443_);
lean_ctor_set_float(v___x_5444_, sizeof(void*)*3, v___x_5441_);
lean_ctor_set_float(v___x_5444_, sizeof(void*)*3 + 8, v___x_5441_);
lean_ctor_set_uint8(v___x_5444_, sizeof(void*)*3 + 16, v___x_5442_);
v___x_5445_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__2));
v___x_5446_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_5446_, 0, v___x_5444_);
lean_ctor_set(v___x_5446_, 1, v_a_5416_);
lean_ctor_set(v___x_5446_, 2, v___x_5445_);
lean_inc(v_ref_5414_);
v___x_5447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5447_, 0, v_ref_5414_);
lean_ctor_set(v___x_5447_, 1, v___x_5446_);
v___x_5448_ = l_Lean_PersistentArray_push___redArg(v_traces_5435_, v___x_5447_);
if (v_isShared_5438_ == 0)
{
lean_ctor_set(v___x_5437_, 0, v___x_5448_);
v___x_5450_ = v___x_5437_;
goto v_reusejp_5449_;
}
else
{
lean_object* v_reuseFailAlloc_5458_; 
v_reuseFailAlloc_5458_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_5458_, 0, v___x_5448_);
lean_ctor_set_uint64(v_reuseFailAlloc_5458_, sizeof(void*)*1, v_tid_5434_);
v___x_5450_ = v_reuseFailAlloc_5458_;
goto v_reusejp_5449_;
}
v_reusejp_5449_:
{
lean_object* v___x_5452_; 
if (v_isShared_5433_ == 0)
{
lean_ctor_set(v___x_5432_, 4, v___x_5450_);
v___x_5452_ = v___x_5432_;
goto v_reusejp_5451_;
}
else
{
lean_object* v_reuseFailAlloc_5457_; 
v_reuseFailAlloc_5457_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_5457_, 0, v_env_5422_);
lean_ctor_set(v_reuseFailAlloc_5457_, 1, v_nextMacroScope_5423_);
lean_ctor_set(v_reuseFailAlloc_5457_, 2, v_ngen_5424_);
lean_ctor_set(v_reuseFailAlloc_5457_, 3, v_auxDeclNGen_5425_);
lean_ctor_set(v_reuseFailAlloc_5457_, 4, v___x_5450_);
lean_ctor_set(v_reuseFailAlloc_5457_, 5, v_cache_5426_);
lean_ctor_set(v_reuseFailAlloc_5457_, 6, v_recordedDeps_5427_);
lean_ctor_set(v_reuseFailAlloc_5457_, 7, v_messages_5428_);
lean_ctor_set(v_reuseFailAlloc_5457_, 8, v_infoState_5429_);
lean_ctor_set(v_reuseFailAlloc_5457_, 9, v_snapshotTasks_5430_);
v___x_5452_ = v_reuseFailAlloc_5457_;
goto v_reusejp_5451_;
}
v_reusejp_5451_:
{
lean_object* v___x_5453_; lean_object* v___x_5455_; 
v___x_5453_ = lean_st_ref_put(v___y_5412_, v___x_5452_);
if (v_isShared_5419_ == 0)
{
lean_ctor_set(v___x_5418_, 0, v___x_5439_);
v___x_5455_ = v___x_5418_;
goto v_reusejp_5454_;
}
else
{
lean_object* v_reuseFailAlloc_5456_; 
v_reuseFailAlloc_5456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5456_, 0, v___x_5439_);
v___x_5455_ = v_reuseFailAlloc_5456_;
goto v_reusejp_5454_;
}
v_reusejp_5454_:
{
return v___x_5455_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__1___redArg___boxed(lean_object* v_cls_5462_, lean_object* v_msg_5463_, lean_object* v___y_5464_, lean_object* v___y_5465_, lean_object* v___y_5466_, lean_object* v___y_5467_, lean_object* v___y_5468_){
_start:
{
lean_object* v_res_5469_; 
v_res_5469_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__1___redArg(v_cls_5462_, v_msg_5463_, v___y_5464_, v___y_5465_, v___y_5466_, v___y_5467_);
lean_dec(v___y_5467_);
lean_dec_ref(v___y_5466_);
lean_dec(v___y_5465_);
lean_dec_ref(v___y_5464_);
return v_res_5469_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__2___redArg(lean_object* v_cls_5470_, lean_object* v_msg_5471_, lean_object* v___y_5472_, lean_object* v___y_5473_, lean_object* v___y_5474_, lean_object* v___y_5475_){
_start:
{
lean_object* v_ref_5477_; lean_object* v___x_5478_; lean_object* v_a_5479_; lean_object* v___x_5481_; uint8_t v_isShared_5482_; uint8_t v_isSharedCheck_5524_; 
v_ref_5477_ = lean_ctor_get(v___y_5474_, 2);
v___x_5478_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00__private_Lean_Meta_Sym_Arith_Functions_0__Lean_Meta_Sym_Arith_mkUnaryFn___at___00Lean_Meta_Sym_Arith_getNegFn___at___00Lean_Meta_Sym_Arith_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5(v_msg_5471_, v___y_5472_, v___y_5473_, v___y_5474_, v___y_5475_);
v_a_5479_ = lean_ctor_get(v___x_5478_, 0);
v_isSharedCheck_5524_ = !lean_is_exclusive(v___x_5478_);
if (v_isSharedCheck_5524_ == 0)
{
v___x_5481_ = v___x_5478_;
v_isShared_5482_ = v_isSharedCheck_5524_;
goto v_resetjp_5480_;
}
else
{
lean_inc(v_a_5479_);
lean_dec(v___x_5478_);
v___x_5481_ = lean_box(0);
v_isShared_5482_ = v_isSharedCheck_5524_;
goto v_resetjp_5480_;
}
v_resetjp_5480_:
{
lean_object* v___x_5483_; lean_object* v_traceState_5484_; lean_object* v_env_5485_; lean_object* v_nextMacroScope_5486_; lean_object* v_ngen_5487_; lean_object* v_auxDeclNGen_5488_; lean_object* v_cache_5489_; lean_object* v_recordedDeps_5490_; lean_object* v_messages_5491_; lean_object* v_infoState_5492_; lean_object* v_snapshotTasks_5493_; lean_object* v___x_5495_; uint8_t v_isShared_5496_; uint8_t v_isSharedCheck_5523_; 
v___x_5483_ = lean_st_ref_take(v___y_5475_);
v_traceState_5484_ = lean_ctor_get(v___x_5483_, 4);
v_env_5485_ = lean_ctor_get(v___x_5483_, 0);
v_nextMacroScope_5486_ = lean_ctor_get(v___x_5483_, 1);
v_ngen_5487_ = lean_ctor_get(v___x_5483_, 2);
v_auxDeclNGen_5488_ = lean_ctor_get(v___x_5483_, 3);
v_cache_5489_ = lean_ctor_get(v___x_5483_, 5);
v_recordedDeps_5490_ = lean_ctor_get(v___x_5483_, 6);
v_messages_5491_ = lean_ctor_get(v___x_5483_, 7);
v_infoState_5492_ = lean_ctor_get(v___x_5483_, 8);
v_snapshotTasks_5493_ = lean_ctor_get(v___x_5483_, 9);
v_isSharedCheck_5523_ = !lean_is_exclusive(v___x_5483_);
if (v_isSharedCheck_5523_ == 0)
{
v___x_5495_ = v___x_5483_;
v_isShared_5496_ = v_isSharedCheck_5523_;
goto v_resetjp_5494_;
}
else
{
lean_inc(v_snapshotTasks_5493_);
lean_inc(v_infoState_5492_);
lean_inc(v_messages_5491_);
lean_inc(v_recordedDeps_5490_);
lean_inc(v_cache_5489_);
lean_inc(v_traceState_5484_);
lean_inc(v_auxDeclNGen_5488_);
lean_inc(v_ngen_5487_);
lean_inc(v_nextMacroScope_5486_);
lean_inc(v_env_5485_);
lean_dec(v___x_5483_);
v___x_5495_ = lean_box(0);
v_isShared_5496_ = v_isSharedCheck_5523_;
goto v_resetjp_5494_;
}
v_resetjp_5494_:
{
uint64_t v_tid_5497_; lean_object* v_traces_5498_; lean_object* v___x_5500_; uint8_t v_isShared_5501_; uint8_t v_isSharedCheck_5522_; 
v_tid_5497_ = lean_ctor_get_uint64(v_traceState_5484_, sizeof(void*)*1);
v_traces_5498_ = lean_ctor_get(v_traceState_5484_, 0);
v_isSharedCheck_5522_ = !lean_is_exclusive(v_traceState_5484_);
if (v_isSharedCheck_5522_ == 0)
{
v___x_5500_ = v_traceState_5484_;
v_isShared_5501_ = v_isSharedCheck_5522_;
goto v_resetjp_5499_;
}
else
{
lean_inc(v_traces_5498_);
lean_dec(v_traceState_5484_);
v___x_5500_ = lean_box(0);
v_isShared_5501_ = v_isSharedCheck_5522_;
goto v_resetjp_5499_;
}
v_resetjp_5499_:
{
lean_object* v___x_5502_; lean_object* v___x_5503_; double v___x_5504_; uint8_t v___x_5505_; lean_object* v___x_5506_; lean_object* v___x_5507_; lean_object* v___x_5508_; lean_object* v___x_5509_; lean_object* v___x_5510_; lean_object* v___x_5511_; lean_object* v___x_5513_; 
v___x_5502_ = lean_box(0);
v___x_5503_ = lean_box(0);
v___x_5504_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__0);
v___x_5505_ = 0;
v___x_5506_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__1));
v___x_5507_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_5507_, 0, v_cls_5470_);
lean_ctor_set(v___x_5507_, 1, v___x_5503_);
lean_ctor_set(v___x_5507_, 2, v___x_5506_);
lean_ctor_set_float(v___x_5507_, sizeof(void*)*3, v___x_5504_);
lean_ctor_set_float(v___x_5507_, sizeof(void*)*3 + 8, v___x_5504_);
lean_ctor_set_uint8(v___x_5507_, sizeof(void*)*3 + 16, v___x_5505_);
v___x_5508_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__2));
v___x_5509_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_5509_, 0, v___x_5507_);
lean_ctor_set(v___x_5509_, 1, v_a_5479_);
lean_ctor_set(v___x_5509_, 2, v___x_5508_);
lean_inc(v_ref_5477_);
v___x_5510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5510_, 0, v_ref_5477_);
lean_ctor_set(v___x_5510_, 1, v___x_5509_);
v___x_5511_ = l_Lean_PersistentArray_push___redArg(v_traces_5498_, v___x_5510_);
if (v_isShared_5501_ == 0)
{
lean_ctor_set(v___x_5500_, 0, v___x_5511_);
v___x_5513_ = v___x_5500_;
goto v_reusejp_5512_;
}
else
{
lean_object* v_reuseFailAlloc_5521_; 
v_reuseFailAlloc_5521_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_5521_, 0, v___x_5511_);
lean_ctor_set_uint64(v_reuseFailAlloc_5521_, sizeof(void*)*1, v_tid_5497_);
v___x_5513_ = v_reuseFailAlloc_5521_;
goto v_reusejp_5512_;
}
v_reusejp_5512_:
{
lean_object* v___x_5515_; 
if (v_isShared_5496_ == 0)
{
lean_ctor_set(v___x_5495_, 4, v___x_5513_);
v___x_5515_ = v___x_5495_;
goto v_reusejp_5514_;
}
else
{
lean_object* v_reuseFailAlloc_5520_; 
v_reuseFailAlloc_5520_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_5520_, 0, v_env_5485_);
lean_ctor_set(v_reuseFailAlloc_5520_, 1, v_nextMacroScope_5486_);
lean_ctor_set(v_reuseFailAlloc_5520_, 2, v_ngen_5487_);
lean_ctor_set(v_reuseFailAlloc_5520_, 3, v_auxDeclNGen_5488_);
lean_ctor_set(v_reuseFailAlloc_5520_, 4, v___x_5513_);
lean_ctor_set(v_reuseFailAlloc_5520_, 5, v_cache_5489_);
lean_ctor_set(v_reuseFailAlloc_5520_, 6, v_recordedDeps_5490_);
lean_ctor_set(v_reuseFailAlloc_5520_, 7, v_messages_5491_);
lean_ctor_set(v_reuseFailAlloc_5520_, 8, v_infoState_5492_);
lean_ctor_set(v_reuseFailAlloc_5520_, 9, v_snapshotTasks_5493_);
v___x_5515_ = v_reuseFailAlloc_5520_;
goto v_reusejp_5514_;
}
v_reusejp_5514_:
{
lean_object* v___x_5516_; lean_object* v___x_5518_; 
v___x_5516_ = lean_st_ref_put(v___y_5475_, v___x_5515_);
if (v_isShared_5482_ == 0)
{
lean_ctor_set(v___x_5481_, 0, v___x_5502_);
v___x_5518_ = v___x_5481_;
goto v_reusejp_5517_;
}
else
{
lean_object* v_reuseFailAlloc_5519_; 
v_reuseFailAlloc_5519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5519_, 0, v___x_5502_);
v___x_5518_ = v_reuseFailAlloc_5519_;
goto v_reusejp_5517_;
}
v_reusejp_5517_:
{
return v___x_5518_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__2___redArg___boxed(lean_object* v_cls_5525_, lean_object* v_msg_5526_, lean_object* v___y_5527_, lean_object* v___y_5528_, lean_object* v___y_5529_, lean_object* v___y_5530_, lean_object* v___y_5531_){
_start:
{
lean_object* v_res_5532_; 
v_res_5532_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__2___redArg(v_cls_5525_, v_msg_5526_, v___y_5527_, v___y_5528_, v___y_5529_, v___y_5530_);
lean_dec(v___y_5530_);
lean_dec_ref(v___y_5529_);
lean_dec(v___y_5528_);
lean_dec_ref(v___y_5527_);
return v_res_5532_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__2(void){
_start:
{
lean_object* v___x_5538_; lean_object* v___x_5539_; lean_object* v___x_5540_; 
v___x_5538_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__1));
v___x_5539_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__7));
v___x_5540_ = l_Lean_Name_append(v___x_5539_, v___x_5538_);
return v___x_5540_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__4(void){
_start:
{
lean_object* v___x_5542_; lean_object* v___x_5543_; 
v___x_5542_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__3));
v___x_5543_ = l_Lean_stringToMessageData(v___x_5542_);
return v___x_5543_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__6(void){
_start:
{
lean_object* v___x_5545_; lean_object* v___x_5546_; 
v___x_5545_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__5));
v___x_5546_ = l_Lean_stringToMessageData(v___x_5545_);
return v___x_5546_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__8(void){
_start:
{
lean_object* v___x_5548_; lean_object* v___x_5549_; 
v___x_5548_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__7));
v___x_5549_ = l_Lean_stringToMessageData(v___x_5548_);
return v___x_5549_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__10(void){
_start:
{
lean_object* v___x_5551_; lean_object* v___x_5552_; 
v___x_5551_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__9));
v___x_5552_ = l_Lean_stringToMessageData(v___x_5551_);
return v___x_5552_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__12(void){
_start:
{
lean_object* v___x_5554_; lean_object* v___x_5555_; 
v___x_5554_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__11));
v___x_5555_ = l_Lean_stringToMessageData(v___x_5554_);
return v___x_5555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize(lean_object* v_e_5556_, lean_object* v_parent_x3f_5557_, lean_object* v_a_5558_, lean_object* v_a_5559_, lean_object* v_a_5560_, lean_object* v_a_5561_, lean_object* v_a_5562_, lean_object* v_a_5563_, lean_object* v_a_5564_, lean_object* v_a_5565_, lean_object* v_a_5566_, lean_object* v_a_5567_){
_start:
{
lean_object* v___y_5573_; lean_object* v___y_5574_; lean_object* v___y_5575_; lean_object* v___y_5576_; lean_object* v___y_5577_; lean_object* v___y_5578_; lean_object* v___y_5579_; lean_object* v___y_5580_; lean_object* v___y_5581_; lean_object* v___y_5582_; lean_object* v___y_5583_; lean_object* v___y_5584_; lean_object* v___y_5590_; lean_object* v___y_5591_; lean_object* v___y_5592_; lean_object* v___y_5593_; lean_object* v___y_5594_; lean_object* v___y_5595_; lean_object* v___y_5596_; lean_object* v___y_5597_; lean_object* v___y_5598_; lean_object* v___y_5599_; lean_object* v___y_5600_; lean_object* v___y_5601_; lean_object* v___y_5607_; lean_object* v___y_5608_; lean_object* v___y_5609_; lean_object* v___y_5610_; lean_object* v___y_5611_; lean_object* v___y_5612_; lean_object* v___y_5613_; lean_object* v___y_5614_; lean_object* v___y_5615_; lean_object* v___y_5616_; lean_object* v___y_5617_; lean_object* v___y_5618_; lean_object* v___y_5625_; lean_object* v___y_5626_; lean_object* v___y_5627_; lean_object* v___y_5628_; lean_object* v___y_5629_; lean_object* v___y_5630_; lean_object* v___y_5631_; lean_object* v___y_5632_; lean_object* v___y_5633_; lean_object* v___y_5634_; lean_object* v___y_5635_; lean_object* v___y_5636_; lean_object* v___x_5641_; 
v___x_5641_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_5560_);
if (lean_obj_tag(v___x_5641_) == 0)
{
lean_object* v_a_5642_; uint8_t v_ring_5643_; 
v_a_5642_ = lean_ctor_get(v___x_5641_, 0);
lean_inc(v_a_5642_);
lean_dec_ref_known(v___x_5641_, 1);
v_ring_5643_ = lean_ctor_get_uint8(v_a_5642_, sizeof(void*)*18 + 22);
lean_dec(v_a_5642_);
if (v_ring_5643_ == 0)
{
lean_dec_ref(v_e_5556_);
goto v___jp_5569_;
}
else
{
uint8_t v___x_5644_; 
v___x_5644_ = l_Lean_Meta_Grind_Arith_isIntModuleVirtualParent(v_parent_x3f_5557_);
if (v___x_5644_ == 0)
{
lean_object* v___x_5645_; 
lean_inc_ref(v_e_5556_);
v___x_5645_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeInv(v_e_5556_, v_a_5558_, v_a_5559_, v_a_5560_, v_a_5561_, v_a_5562_, v_a_5563_, v_a_5564_, v_a_5565_, v_a_5566_, v_a_5567_);
if (lean_obj_tag(v___x_5645_) == 0)
{
lean_object* v_a_5646_; uint8_t v___x_5647_; 
v_a_5646_ = lean_ctor_get(v___x_5645_, 0);
lean_inc(v_a_5646_);
lean_dec_ref_known(v___x_5645_, 1);
v___x_5647_ = lean_unbox(v_a_5646_);
lean_dec(v_a_5646_);
if (v___x_5647_ == 0)
{
lean_object* v___x_5648_; 
lean_inc_ref(v_e_5556_);
v___x_5648_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeCast(v_e_5556_, v_a_5558_, v_a_5559_, v_a_5560_, v_a_5561_, v_a_5562_, v_a_5563_, v_a_5564_, v_a_5565_, v_a_5566_, v_a_5567_);
if (lean_obj_tag(v___x_5648_) == 0)
{
lean_object* v___x_5650_; uint8_t v_isShared_5651_; uint8_t v_isSharedCheck_5907_; 
v_isSharedCheck_5907_ = !lean_is_exclusive(v___x_5648_);
if (v_isSharedCheck_5907_ == 0)
{
lean_object* v_unused_5908_; 
v_unused_5908_ = lean_ctor_get(v___x_5648_, 0);
lean_dec(v_unused_5908_);
v___x_5650_ = v___x_5648_;
v_isShared_5651_ = v_isSharedCheck_5907_;
goto v_resetjp_5649_;
}
else
{
lean_dec(v___x_5648_);
v___x_5650_ = lean_box(0);
v_isShared_5651_ = v_isSharedCheck_5907_;
goto v_resetjp_5649_;
}
v_resetjp_5649_:
{
lean_object* v___x_5652_; 
v___x_5652_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f(v_e_5556_);
if (lean_obj_tag(v___x_5652_) == 1)
{
lean_object* v_val_5653_; uint8_t v_a_5655_; uint8_t v___x_5889_; 
lean_del_object(v___x_5650_);
v_val_5653_ = lean_ctor_get(v___x_5652_, 0);
lean_inc(v_val_5653_);
lean_dec_ref_known(v___x_5652_, 1);
v___x_5889_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent(v_parent_x3f_5557_);
if (v___x_5889_ == 0)
{
uint8_t v___x_5890_; 
v___x_5890_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isIneqParent(v_parent_x3f_5557_);
if (v___x_5890_ == 0)
{
v_a_5655_ = v___x_5890_;
goto v___jp_5654_;
}
else
{
lean_object* v___x_5891_; 
lean_inc(v_val_5653_);
v___x_5891_ = l_Lean_Meta_Grind_Arith_Cutsat_isCutsatType___redArg(v_val_5653_, v_a_5560_, v_a_5565_);
if (lean_obj_tag(v___x_5891_) == 0)
{
lean_object* v_a_5892_; uint8_t v___x_5893_; 
v_a_5892_ = lean_ctor_get(v___x_5891_, 0);
lean_inc(v_a_5892_);
lean_dec_ref_known(v___x_5891_, 1);
v___x_5893_ = lean_unbox(v_a_5892_);
if (v___x_5893_ == 0)
{
uint8_t v___x_5894_; 
v___x_5894_ = lean_unbox(v_a_5892_);
lean_dec(v_a_5892_);
v_a_5655_ = v___x_5894_;
goto v___jp_5654_;
}
else
{
lean_dec(v_a_5892_);
lean_dec(v_val_5653_);
lean_dec_ref(v_e_5556_);
goto v___jp_5569_;
}
}
else
{
lean_object* v_a_5895_; lean_object* v___x_5897_; uint8_t v_isShared_5898_; uint8_t v_isSharedCheck_5902_; 
lean_dec(v_val_5653_);
lean_dec_ref(v_e_5556_);
v_a_5895_ = lean_ctor_get(v___x_5891_, 0);
v_isSharedCheck_5902_ = !lean_is_exclusive(v___x_5891_);
if (v_isSharedCheck_5902_ == 0)
{
v___x_5897_ = v___x_5891_;
v_isShared_5898_ = v_isSharedCheck_5902_;
goto v_resetjp_5896_;
}
else
{
lean_inc(v_a_5895_);
lean_dec(v___x_5891_);
v___x_5897_ = lean_box(0);
v_isShared_5898_ = v_isSharedCheck_5902_;
goto v_resetjp_5896_;
}
v_resetjp_5896_:
{
lean_object* v___x_5900_; 
if (v_isShared_5898_ == 0)
{
v___x_5900_ = v___x_5897_;
goto v_reusejp_5899_;
}
else
{
lean_object* v_reuseFailAlloc_5901_; 
v_reuseFailAlloc_5901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5901_, 0, v_a_5895_);
v___x_5900_ = v_reuseFailAlloc_5901_;
goto v_reusejp_5899_;
}
v_reusejp_5899_:
{
return v___x_5900_;
}
}
}
}
}
else
{
lean_dec(v_val_5653_);
lean_dec_ref(v_e_5556_);
goto v___jp_5569_;
}
v___jp_5654_:
{
lean_object* v___x_5656_; 
lean_inc(v_val_5653_);
v___x_5656_ = l_Lean_Meta_Grind_Arith_CommRing_getCommRingId_x3f___redArg(v_val_5653_, v_a_5562_, v_a_5563_, v_a_5564_, v_a_5565_, v_a_5566_, v_a_5567_);
if (lean_obj_tag(v___x_5656_) == 0)
{
lean_object* v_a_5657_; 
v_a_5657_ = lean_ctor_get(v___x_5656_, 0);
lean_inc(v_a_5657_);
lean_dec_ref_known(v___x_5656_, 1);
if (lean_obj_tag(v_a_5657_) == 1)
{
lean_object* v_val_5658_; lean_object* v___x_5659_; lean_object* v___x_5660_; 
lean_dec(v_val_5653_);
v_val_5658_ = lean_ctor_get(v_a_5657_, 0);
lean_inc_n(v_val_5658_, 2);
lean_dec_ref_known(v_a_5657_, 1);
v___x_5659_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5659_, 0, v_val_5658_);
lean_ctor_set_uint8(v___x_5659_, sizeof(void*)*1, v_a_5655_);
lean_inc_ref(v_e_5556_);
v___x_5660_ = l_Lean_Meta_Grind_Arith_CommRing_reify_x3f(v_e_5556_, v_ring_5643_, v___x_5659_, v_a_5558_, v_a_5559_, v_a_5560_, v_a_5561_, v_a_5562_, v_a_5563_, v_a_5564_, v_a_5565_, v_a_5566_, v_a_5567_);
if (lean_obj_tag(v___x_5660_) == 0)
{
lean_object* v_a_5661_; lean_object* v___x_5663_; uint8_t v_isShared_5664_; uint8_t v_isSharedCheck_5696_; 
v_a_5661_ = lean_ctor_get(v___x_5660_, 0);
v_isSharedCheck_5696_ = !lean_is_exclusive(v___x_5660_);
if (v_isSharedCheck_5696_ == 0)
{
v___x_5663_ = v___x_5660_;
v_isShared_5664_ = v_isSharedCheck_5696_;
goto v_resetjp_5662_;
}
else
{
lean_inc(v_a_5661_);
lean_dec(v___x_5660_);
v___x_5663_ = lean_box(0);
v_isShared_5664_ = v_isSharedCheck_5696_;
goto v_resetjp_5662_;
}
v_resetjp_5662_:
{
if (lean_obj_tag(v_a_5661_) == 1)
{
lean_object* v_toCold_5665_; lean_object* v_options_5666_; lean_object* v_val_5667_; lean_object* v_inheritedTraceOptions_5668_; uint8_t v_hasTrace_5669_; lean_object* v___f_5670_; 
lean_del_object(v___x_5663_);
v_toCold_5665_ = lean_ctor_get(v_a_5566_, 0);
v_options_5666_ = lean_ctor_get(v_toCold_5665_, 2);
v_val_5667_ = lean_ctor_get(v_a_5661_, 0);
lean_inc(v_val_5667_);
lean_dec_ref_known(v_a_5661_, 1);
v_inheritedTraceOptions_5668_ = lean_ctor_get(v_toCold_5665_, 11);
v_hasTrace_5669_ = lean_ctor_get_uint8(v_options_5666_, sizeof(void*)*1);
lean_inc_ref(v_e_5556_);
v___f_5670_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_internalize___lam__0), 3, 2);
lean_closure_set(v___f_5670_, 0, v_e_5556_);
lean_closure_set(v___f_5670_, 1, v_val_5667_);
if (v_hasTrace_5669_ == 0)
{
lean_dec(v_val_5658_);
v___y_5607_ = v___f_5670_;
v___y_5608_ = v___x_5659_;
v___y_5609_ = v_a_5558_;
v___y_5610_ = v_a_5559_;
v___y_5611_ = v_a_5560_;
v___y_5612_ = v_a_5561_;
v___y_5613_ = v_a_5562_;
v___y_5614_ = v_a_5563_;
v___y_5615_ = v_a_5564_;
v___y_5616_ = v_a_5565_;
v___y_5617_ = v_a_5566_;
v___y_5618_ = v_a_5567_;
goto v___jp_5606_;
}
else
{
lean_object* v___x_5671_; lean_object* v___x_5672_; uint8_t v___x_5673_; 
v___x_5671_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__1));
v___x_5672_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__2, &l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__2_once, _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__2);
v___x_5673_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5668_, v_options_5666_, v___x_5672_);
if (v___x_5673_ == 0)
{
lean_dec(v_val_5658_);
v___y_5607_ = v___f_5670_;
v___y_5608_ = v___x_5659_;
v___y_5609_ = v_a_5558_;
v___y_5610_ = v_a_5559_;
v___y_5611_ = v_a_5560_;
v___y_5612_ = v_a_5561_;
v___y_5613_ = v_a_5562_;
v___y_5614_ = v_a_5563_;
v___y_5615_ = v_a_5564_;
v___y_5616_ = v_a_5565_;
v___y_5617_ = v_a_5566_;
v___y_5618_ = v_a_5567_;
goto v___jp_5606_;
}
else
{
lean_object* v___x_5674_; 
v___x_5674_ = l_Lean_Meta_Grind_updateLastTag(v_a_5558_, v_a_5559_, v_a_5560_, v_a_5561_, v_a_5562_, v_a_5563_, v_a_5564_, v_a_5565_, v_a_5566_, v_a_5567_);
if (lean_obj_tag(v___x_5674_) == 0)
{
lean_object* v___x_5676_; uint8_t v_isShared_5677_; uint8_t v_isSharedCheck_5690_; 
v_isSharedCheck_5690_ = !lean_is_exclusive(v___x_5674_);
if (v_isSharedCheck_5690_ == 0)
{
lean_object* v_unused_5691_; 
v_unused_5691_ = lean_ctor_get(v___x_5674_, 0);
lean_dec(v_unused_5691_);
v___x_5676_ = v___x_5674_;
v_isShared_5677_ = v_isSharedCheck_5690_;
goto v_resetjp_5675_;
}
else
{
lean_dec(v___x_5674_);
v___x_5676_ = lean_box(0);
v_isShared_5677_ = v_isSharedCheck_5690_;
goto v_resetjp_5675_;
}
v_resetjp_5675_:
{
lean_object* v___x_5678_; lean_object* v___x_5679_; lean_object* v___x_5681_; 
v___x_5678_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__4, &l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__4_once, _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__4);
v___x_5679_ = l_Nat_reprFast(v_val_5658_);
if (v_isShared_5677_ == 0)
{
lean_ctor_set_tag(v___x_5676_, 3);
lean_ctor_set(v___x_5676_, 0, v___x_5679_);
v___x_5681_ = v___x_5676_;
goto v_reusejp_5680_;
}
else
{
lean_object* v_reuseFailAlloc_5689_; 
v_reuseFailAlloc_5689_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5689_, 0, v___x_5679_);
v___x_5681_ = v_reuseFailAlloc_5689_;
goto v_reusejp_5680_;
}
v_reusejp_5680_:
{
lean_object* v___x_5682_; lean_object* v___x_5683_; lean_object* v___x_5684_; lean_object* v___x_5685_; lean_object* v___x_5686_; lean_object* v___x_5687_; lean_object* v___x_5688_; 
v___x_5682_ = l_Lean_MessageData_ofFormat(v___x_5681_);
v___x_5683_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5683_, 0, v___x_5678_);
lean_ctor_set(v___x_5683_, 1, v___x_5682_);
v___x_5684_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__6, &l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__6_once, _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__6);
v___x_5685_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5685_, 0, v___x_5683_);
lean_ctor_set(v___x_5685_, 1, v___x_5684_);
lean_inc_ref(v_e_5556_);
v___x_5686_ = l_Lean_MessageData_ofExpr(v_e_5556_);
v___x_5687_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5687_, 0, v___x_5685_);
lean_ctor_set(v___x_5687_, 1, v___x_5686_);
v___x_5688_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg(v___x_5671_, v___x_5687_, v_a_5564_, v_a_5565_, v_a_5566_, v_a_5567_);
if (lean_obj_tag(v___x_5688_) == 0)
{
lean_dec_ref_known(v___x_5688_, 1);
v___y_5607_ = v___f_5670_;
v___y_5608_ = v___x_5659_;
v___y_5609_ = v_a_5558_;
v___y_5610_ = v_a_5559_;
v___y_5611_ = v_a_5560_;
v___y_5612_ = v_a_5561_;
v___y_5613_ = v_a_5562_;
v___y_5614_ = v_a_5563_;
v___y_5615_ = v_a_5564_;
v___y_5616_ = v_a_5565_;
v___y_5617_ = v_a_5566_;
v___y_5618_ = v_a_5567_;
goto v___jp_5606_;
}
else
{
lean_dec_ref(v___f_5670_);
lean_dec_ref_known(v___x_5659_, 1);
lean_dec_ref(v_e_5556_);
return v___x_5688_;
}
}
}
}
else
{
lean_dec_ref(v___f_5670_);
lean_dec_ref_known(v___x_5659_, 1);
lean_dec(v_val_5658_);
lean_dec_ref(v_e_5556_);
return v___x_5674_;
}
}
}
}
else
{
lean_object* v___x_5692_; lean_object* v___x_5694_; 
lean_dec(v_a_5661_);
lean_dec_ref_known(v___x_5659_, 1);
lean_dec(v_val_5658_);
lean_dec_ref(v_e_5556_);
v___x_5692_ = lean_box(0);
if (v_isShared_5664_ == 0)
{
lean_ctor_set(v___x_5663_, 0, v___x_5692_);
v___x_5694_ = v___x_5663_;
goto v_reusejp_5693_;
}
else
{
lean_object* v_reuseFailAlloc_5695_; 
v_reuseFailAlloc_5695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5695_, 0, v___x_5692_);
v___x_5694_ = v_reuseFailAlloc_5695_;
goto v_reusejp_5693_;
}
v_reusejp_5693_:
{
return v___x_5694_;
}
}
}
}
else
{
lean_object* v_a_5697_; lean_object* v___x_5699_; uint8_t v_isShared_5700_; uint8_t v_isSharedCheck_5704_; 
lean_dec_ref_known(v___x_5659_, 1);
lean_dec(v_val_5658_);
lean_dec_ref(v_e_5556_);
v_a_5697_ = lean_ctor_get(v___x_5660_, 0);
v_isSharedCheck_5704_ = !lean_is_exclusive(v___x_5660_);
if (v_isSharedCheck_5704_ == 0)
{
v___x_5699_ = v___x_5660_;
v_isShared_5700_ = v_isSharedCheck_5704_;
goto v_resetjp_5698_;
}
else
{
lean_inc(v_a_5697_);
lean_dec(v___x_5660_);
v___x_5699_ = lean_box(0);
v_isShared_5700_ = v_isSharedCheck_5704_;
goto v_resetjp_5698_;
}
v_resetjp_5698_:
{
lean_object* v___x_5702_; 
if (v_isShared_5700_ == 0)
{
v___x_5702_ = v___x_5699_;
goto v_reusejp_5701_;
}
else
{
lean_object* v_reuseFailAlloc_5703_; 
v_reuseFailAlloc_5703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5703_, 0, v_a_5697_);
v___x_5702_ = v_reuseFailAlloc_5703_;
goto v_reusejp_5701_;
}
v_reusejp_5701_:
{
return v___x_5702_;
}
}
}
}
else
{
lean_object* v___x_5705_; 
lean_dec(v_a_5657_);
lean_inc(v_val_5653_);
v___x_5705_ = l_Lean_Meta_Grind_Arith_CommRing_getCommSemiringId_x3f___redArg(v_val_5653_, v_a_5562_, v_a_5563_, v_a_5564_, v_a_5565_, v_a_5566_, v_a_5567_);
if (lean_obj_tag(v___x_5705_) == 0)
{
lean_object* v_a_5706_; 
v_a_5706_ = lean_ctor_get(v___x_5705_, 0);
lean_inc(v_a_5706_);
lean_dec_ref_known(v___x_5705_, 1);
if (lean_obj_tag(v_a_5706_) == 1)
{
lean_object* v_val_5707_; lean_object* v___x_5708_; 
lean_dec(v_val_5653_);
v_val_5707_ = lean_ctor_get(v_a_5706_, 0);
lean_inc(v_val_5707_);
lean_dec_ref_known(v_a_5706_, 1);
lean_inc_ref(v_e_5556_);
v___x_5708_ = l_Lean_Meta_Grind_Arith_CommRing_sreify_x3f(v_e_5556_, v_val_5707_, v_a_5558_, v_a_5559_, v_a_5560_, v_a_5561_, v_a_5562_, v_a_5563_, v_a_5564_, v_a_5565_, v_a_5566_, v_a_5567_);
if (lean_obj_tag(v___x_5708_) == 0)
{
lean_object* v_a_5709_; lean_object* v___x_5711_; uint8_t v_isShared_5712_; uint8_t v_isSharedCheck_5744_; 
v_a_5709_ = lean_ctor_get(v___x_5708_, 0);
v_isSharedCheck_5744_ = !lean_is_exclusive(v___x_5708_);
if (v_isSharedCheck_5744_ == 0)
{
v___x_5711_ = v___x_5708_;
v_isShared_5712_ = v_isSharedCheck_5744_;
goto v_resetjp_5710_;
}
else
{
lean_inc(v_a_5709_);
lean_dec(v___x_5708_);
v___x_5711_ = lean_box(0);
v_isShared_5712_ = v_isSharedCheck_5744_;
goto v_resetjp_5710_;
}
v_resetjp_5710_:
{
if (lean_obj_tag(v_a_5709_) == 1)
{
lean_object* v_toCold_5713_; lean_object* v_options_5714_; lean_object* v_val_5715_; lean_object* v_inheritedTraceOptions_5716_; uint8_t v_hasTrace_5717_; lean_object* v___f_5718_; 
lean_del_object(v___x_5711_);
v_toCold_5713_ = lean_ctor_get(v_a_5566_, 0);
v_options_5714_ = lean_ctor_get(v_toCold_5713_, 2);
v_val_5715_ = lean_ctor_get(v_a_5709_, 0);
lean_inc(v_val_5715_);
lean_dec_ref_known(v_a_5709_, 1);
v_inheritedTraceOptions_5716_ = lean_ctor_get(v_toCold_5713_, 11);
v_hasTrace_5717_ = lean_ctor_get_uint8(v_options_5714_, sizeof(void*)*1);
lean_inc_ref(v_e_5556_);
v___f_5718_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_internalize___lam__1), 3, 2);
lean_closure_set(v___f_5718_, 0, v_e_5556_);
lean_closure_set(v___f_5718_, 1, v_val_5715_);
if (v_hasTrace_5717_ == 0)
{
v___y_5590_ = v___f_5718_;
v___y_5591_ = v_val_5707_;
v___y_5592_ = v_a_5558_;
v___y_5593_ = v_a_5559_;
v___y_5594_ = v_a_5560_;
v___y_5595_ = v_a_5561_;
v___y_5596_ = v_a_5562_;
v___y_5597_ = v_a_5563_;
v___y_5598_ = v_a_5564_;
v___y_5599_ = v_a_5565_;
v___y_5600_ = v_a_5566_;
v___y_5601_ = v_a_5567_;
goto v___jp_5589_;
}
else
{
lean_object* v___x_5719_; lean_object* v___x_5720_; uint8_t v___x_5721_; 
v___x_5719_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__1));
v___x_5720_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__2, &l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__2_once, _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__2);
v___x_5721_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5716_, v_options_5714_, v___x_5720_);
if (v___x_5721_ == 0)
{
v___y_5590_ = v___f_5718_;
v___y_5591_ = v_val_5707_;
v___y_5592_ = v_a_5558_;
v___y_5593_ = v_a_5559_;
v___y_5594_ = v_a_5560_;
v___y_5595_ = v_a_5561_;
v___y_5596_ = v_a_5562_;
v___y_5597_ = v_a_5563_;
v___y_5598_ = v_a_5564_;
v___y_5599_ = v_a_5565_;
v___y_5600_ = v_a_5566_;
v___y_5601_ = v_a_5567_;
goto v___jp_5589_;
}
else
{
lean_object* v___x_5722_; 
v___x_5722_ = l_Lean_Meta_Grind_updateLastTag(v_a_5558_, v_a_5559_, v_a_5560_, v_a_5561_, v_a_5562_, v_a_5563_, v_a_5564_, v_a_5565_, v_a_5566_, v_a_5567_);
if (lean_obj_tag(v___x_5722_) == 0)
{
lean_object* v___x_5724_; uint8_t v_isShared_5725_; uint8_t v_isSharedCheck_5738_; 
v_isSharedCheck_5738_ = !lean_is_exclusive(v___x_5722_);
if (v_isSharedCheck_5738_ == 0)
{
lean_object* v_unused_5739_; 
v_unused_5739_ = lean_ctor_get(v___x_5722_, 0);
lean_dec(v_unused_5739_);
v___x_5724_ = v___x_5722_;
v_isShared_5725_ = v_isSharedCheck_5738_;
goto v_resetjp_5723_;
}
else
{
lean_dec(v___x_5722_);
v___x_5724_ = lean_box(0);
v_isShared_5725_ = v_isSharedCheck_5738_;
goto v_resetjp_5723_;
}
v_resetjp_5723_:
{
lean_object* v___x_5726_; lean_object* v___x_5727_; lean_object* v___x_5729_; 
v___x_5726_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__8, &l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__8_once, _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__8);
lean_inc(v_val_5707_);
v___x_5727_ = l_Nat_reprFast(v_val_5707_);
if (v_isShared_5725_ == 0)
{
lean_ctor_set_tag(v___x_5724_, 3);
lean_ctor_set(v___x_5724_, 0, v___x_5727_);
v___x_5729_ = v___x_5724_;
goto v_reusejp_5728_;
}
else
{
lean_object* v_reuseFailAlloc_5737_; 
v_reuseFailAlloc_5737_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5737_, 0, v___x_5727_);
v___x_5729_ = v_reuseFailAlloc_5737_;
goto v_reusejp_5728_;
}
v_reusejp_5728_:
{
lean_object* v___x_5730_; lean_object* v___x_5731_; lean_object* v___x_5732_; lean_object* v___x_5733_; lean_object* v___x_5734_; lean_object* v___x_5735_; lean_object* v___x_5736_; 
v___x_5730_ = l_Lean_MessageData_ofFormat(v___x_5729_);
v___x_5731_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5731_, 0, v___x_5726_);
lean_ctor_set(v___x_5731_, 1, v___x_5730_);
v___x_5732_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__6, &l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__6_once, _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__6);
v___x_5733_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5733_, 0, v___x_5731_);
lean_ctor_set(v___x_5733_, 1, v___x_5732_);
lean_inc_ref(v_e_5556_);
v___x_5734_ = l_Lean_MessageData_ofExpr(v_e_5556_);
v___x_5735_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5735_, 0, v___x_5733_);
lean_ctor_set(v___x_5735_, 1, v___x_5734_);
v___x_5736_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0___redArg(v___x_5719_, v___x_5735_, v_a_5564_, v_a_5565_, v_a_5566_, v_a_5567_);
if (lean_obj_tag(v___x_5736_) == 0)
{
lean_dec_ref_known(v___x_5736_, 1);
v___y_5590_ = v___f_5718_;
v___y_5591_ = v_val_5707_;
v___y_5592_ = v_a_5558_;
v___y_5593_ = v_a_5559_;
v___y_5594_ = v_a_5560_;
v___y_5595_ = v_a_5561_;
v___y_5596_ = v_a_5562_;
v___y_5597_ = v_a_5563_;
v___y_5598_ = v_a_5564_;
v___y_5599_ = v_a_5565_;
v___y_5600_ = v_a_5566_;
v___y_5601_ = v_a_5567_;
goto v___jp_5589_;
}
else
{
lean_dec_ref(v___f_5718_);
lean_dec(v_val_5707_);
lean_dec_ref(v_e_5556_);
return v___x_5736_;
}
}
}
}
else
{
lean_dec_ref(v___f_5718_);
lean_dec(v_val_5707_);
lean_dec_ref(v_e_5556_);
return v___x_5722_;
}
}
}
}
else
{
lean_object* v___x_5740_; lean_object* v___x_5742_; 
lean_dec(v_a_5709_);
lean_dec(v_val_5707_);
lean_dec_ref(v_e_5556_);
v___x_5740_ = lean_box(0);
if (v_isShared_5712_ == 0)
{
lean_ctor_set(v___x_5711_, 0, v___x_5740_);
v___x_5742_ = v___x_5711_;
goto v_reusejp_5741_;
}
else
{
lean_object* v_reuseFailAlloc_5743_; 
v_reuseFailAlloc_5743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5743_, 0, v___x_5740_);
v___x_5742_ = v_reuseFailAlloc_5743_;
goto v_reusejp_5741_;
}
v_reusejp_5741_:
{
return v___x_5742_;
}
}
}
}
else
{
lean_object* v_a_5745_; lean_object* v___x_5747_; uint8_t v_isShared_5748_; uint8_t v_isSharedCheck_5752_; 
lean_dec(v_val_5707_);
lean_dec_ref(v_e_5556_);
v_a_5745_ = lean_ctor_get(v___x_5708_, 0);
v_isSharedCheck_5752_ = !lean_is_exclusive(v___x_5708_);
if (v_isSharedCheck_5752_ == 0)
{
v___x_5747_ = v___x_5708_;
v_isShared_5748_ = v_isSharedCheck_5752_;
goto v_resetjp_5746_;
}
else
{
lean_inc(v_a_5745_);
lean_dec(v___x_5708_);
v___x_5747_ = lean_box(0);
v_isShared_5748_ = v_isSharedCheck_5752_;
goto v_resetjp_5746_;
}
v_resetjp_5746_:
{
lean_object* v___x_5750_; 
if (v_isShared_5748_ == 0)
{
v___x_5750_ = v___x_5747_;
goto v_reusejp_5749_;
}
else
{
lean_object* v_reuseFailAlloc_5751_; 
v_reuseFailAlloc_5751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5751_, 0, v_a_5745_);
v___x_5750_ = v_reuseFailAlloc_5751_;
goto v_reusejp_5749_;
}
v_reusejp_5749_:
{
return v___x_5750_;
}
}
}
}
else
{
lean_object* v___x_5753_; 
lean_dec(v_a_5706_);
lean_inc(v_val_5653_);
v___x_5753_ = l_Lean_Meta_Grind_Arith_CommRing_getNonCommRingId_x3f___redArg(v_val_5653_, v_a_5562_, v_a_5563_, v_a_5564_, v_a_5565_, v_a_5566_, v_a_5567_);
if (lean_obj_tag(v___x_5753_) == 0)
{
lean_object* v_a_5754_; 
v_a_5754_ = lean_ctor_get(v___x_5753_, 0);
lean_inc(v_a_5754_);
lean_dec_ref_known(v___x_5753_, 1);
if (lean_obj_tag(v_a_5754_) == 1)
{
lean_object* v_val_5755_; lean_object* v___x_5756_; 
lean_dec(v_val_5653_);
v_val_5755_ = lean_ctor_get(v_a_5754_, 0);
lean_inc(v_val_5755_);
lean_dec_ref_known(v_a_5754_, 1);
lean_inc_ref(v_e_5556_);
v___x_5756_ = l_Lean_Meta_Grind_Arith_CommRing_ncreify_x3f(v_e_5556_, v_ring_5643_, v_val_5755_, v_a_5558_, v_a_5559_, v_a_5560_, v_a_5561_, v_a_5562_, v_a_5563_, v_a_5564_, v_a_5565_, v_a_5566_, v_a_5567_);
if (lean_obj_tag(v___x_5756_) == 0)
{
lean_object* v_a_5757_; lean_object* v___x_5759_; uint8_t v_isShared_5760_; uint8_t v_isSharedCheck_5792_; 
v_a_5757_ = lean_ctor_get(v___x_5756_, 0);
v_isSharedCheck_5792_ = !lean_is_exclusive(v___x_5756_);
if (v_isSharedCheck_5792_ == 0)
{
v___x_5759_ = v___x_5756_;
v_isShared_5760_ = v_isSharedCheck_5792_;
goto v_resetjp_5758_;
}
else
{
lean_inc(v_a_5757_);
lean_dec(v___x_5756_);
v___x_5759_ = lean_box(0);
v_isShared_5760_ = v_isSharedCheck_5792_;
goto v_resetjp_5758_;
}
v_resetjp_5758_:
{
if (lean_obj_tag(v_a_5757_) == 1)
{
lean_object* v_toCold_5761_; lean_object* v_options_5762_; lean_object* v_val_5763_; lean_object* v_inheritedTraceOptions_5764_; uint8_t v_hasTrace_5765_; lean_object* v___f_5766_; 
lean_del_object(v___x_5759_);
v_toCold_5761_ = lean_ctor_get(v_a_5566_, 0);
v_options_5762_ = lean_ctor_get(v_toCold_5761_, 2);
v_val_5763_ = lean_ctor_get(v_a_5757_, 0);
lean_inc(v_val_5763_);
lean_dec_ref_known(v_a_5757_, 1);
v_inheritedTraceOptions_5764_ = lean_ctor_get(v_toCold_5761_, 11);
v_hasTrace_5765_ = lean_ctor_get_uint8(v_options_5762_, sizeof(void*)*1);
lean_inc_ref(v_e_5556_);
v___f_5766_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_internalize___lam__2), 3, 2);
lean_closure_set(v___f_5766_, 0, v_e_5556_);
lean_closure_set(v___f_5766_, 1, v_val_5763_);
if (v_hasTrace_5765_ == 0)
{
v___y_5625_ = v___f_5766_;
v___y_5626_ = v_val_5755_;
v___y_5627_ = v_a_5558_;
v___y_5628_ = v_a_5559_;
v___y_5629_ = v_a_5560_;
v___y_5630_ = v_a_5561_;
v___y_5631_ = v_a_5562_;
v___y_5632_ = v_a_5563_;
v___y_5633_ = v_a_5564_;
v___y_5634_ = v_a_5565_;
v___y_5635_ = v_a_5566_;
v___y_5636_ = v_a_5567_;
goto v___jp_5624_;
}
else
{
lean_object* v___x_5767_; lean_object* v___x_5768_; uint8_t v___x_5769_; 
v___x_5767_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__1));
v___x_5768_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__2, &l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__2_once, _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__2);
v___x_5769_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5764_, v_options_5762_, v___x_5768_);
if (v___x_5769_ == 0)
{
v___y_5625_ = v___f_5766_;
v___y_5626_ = v_val_5755_;
v___y_5627_ = v_a_5558_;
v___y_5628_ = v_a_5559_;
v___y_5629_ = v_a_5560_;
v___y_5630_ = v_a_5561_;
v___y_5631_ = v_a_5562_;
v___y_5632_ = v_a_5563_;
v___y_5633_ = v_a_5564_;
v___y_5634_ = v_a_5565_;
v___y_5635_ = v_a_5566_;
v___y_5636_ = v_a_5567_;
goto v___jp_5624_;
}
else
{
lean_object* v___x_5770_; 
v___x_5770_ = l_Lean_Meta_Grind_updateLastTag(v_a_5558_, v_a_5559_, v_a_5560_, v_a_5561_, v_a_5562_, v_a_5563_, v_a_5564_, v_a_5565_, v_a_5566_, v_a_5567_);
if (lean_obj_tag(v___x_5770_) == 0)
{
lean_object* v___x_5772_; uint8_t v_isShared_5773_; uint8_t v_isSharedCheck_5786_; 
v_isSharedCheck_5786_ = !lean_is_exclusive(v___x_5770_);
if (v_isSharedCheck_5786_ == 0)
{
lean_object* v_unused_5787_; 
v_unused_5787_ = lean_ctor_get(v___x_5770_, 0);
lean_dec(v_unused_5787_);
v___x_5772_ = v___x_5770_;
v_isShared_5773_ = v_isSharedCheck_5786_;
goto v_resetjp_5771_;
}
else
{
lean_dec(v___x_5770_);
v___x_5772_ = lean_box(0);
v_isShared_5773_ = v_isSharedCheck_5786_;
goto v_resetjp_5771_;
}
v_resetjp_5771_:
{
lean_object* v___x_5774_; lean_object* v___x_5775_; lean_object* v___x_5777_; 
v___x_5774_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__10, &l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__10_once, _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__10);
lean_inc(v_val_5755_);
v___x_5775_ = l_Nat_reprFast(v_val_5755_);
if (v_isShared_5773_ == 0)
{
lean_ctor_set_tag(v___x_5772_, 3);
lean_ctor_set(v___x_5772_, 0, v___x_5775_);
v___x_5777_ = v___x_5772_;
goto v_reusejp_5776_;
}
else
{
lean_object* v_reuseFailAlloc_5785_; 
v_reuseFailAlloc_5785_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5785_, 0, v___x_5775_);
v___x_5777_ = v_reuseFailAlloc_5785_;
goto v_reusejp_5776_;
}
v_reusejp_5776_:
{
lean_object* v___x_5778_; lean_object* v___x_5779_; lean_object* v___x_5780_; lean_object* v___x_5781_; lean_object* v___x_5782_; lean_object* v___x_5783_; lean_object* v___x_5784_; 
v___x_5778_ = l_Lean_MessageData_ofFormat(v___x_5777_);
v___x_5779_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5779_, 0, v___x_5774_);
lean_ctor_set(v___x_5779_, 1, v___x_5778_);
v___x_5780_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__6, &l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__6_once, _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__6);
v___x_5781_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5781_, 0, v___x_5779_);
lean_ctor_set(v___x_5781_, 1, v___x_5780_);
lean_inc_ref(v_e_5556_);
v___x_5782_ = l_Lean_MessageData_ofExpr(v_e_5556_);
v___x_5783_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5783_, 0, v___x_5781_);
lean_ctor_set(v___x_5783_, 1, v___x_5782_);
v___x_5784_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__1___redArg(v___x_5767_, v___x_5783_, v_a_5564_, v_a_5565_, v_a_5566_, v_a_5567_);
if (lean_obj_tag(v___x_5784_) == 0)
{
lean_dec_ref_known(v___x_5784_, 1);
v___y_5625_ = v___f_5766_;
v___y_5626_ = v_val_5755_;
v___y_5627_ = v_a_5558_;
v___y_5628_ = v_a_5559_;
v___y_5629_ = v_a_5560_;
v___y_5630_ = v_a_5561_;
v___y_5631_ = v_a_5562_;
v___y_5632_ = v_a_5563_;
v___y_5633_ = v_a_5564_;
v___y_5634_ = v_a_5565_;
v___y_5635_ = v_a_5566_;
v___y_5636_ = v_a_5567_;
goto v___jp_5624_;
}
else
{
lean_dec_ref(v___f_5766_);
lean_dec(v_val_5755_);
lean_dec_ref(v_e_5556_);
return v___x_5784_;
}
}
}
}
else
{
lean_dec_ref(v___f_5766_);
lean_dec(v_val_5755_);
lean_dec_ref(v_e_5556_);
return v___x_5770_;
}
}
}
}
else
{
lean_object* v___x_5788_; lean_object* v___x_5790_; 
lean_dec(v_a_5757_);
lean_dec(v_val_5755_);
lean_dec_ref(v_e_5556_);
v___x_5788_ = lean_box(0);
if (v_isShared_5760_ == 0)
{
lean_ctor_set(v___x_5759_, 0, v___x_5788_);
v___x_5790_ = v___x_5759_;
goto v_reusejp_5789_;
}
else
{
lean_object* v_reuseFailAlloc_5791_; 
v_reuseFailAlloc_5791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5791_, 0, v___x_5788_);
v___x_5790_ = v_reuseFailAlloc_5791_;
goto v_reusejp_5789_;
}
v_reusejp_5789_:
{
return v___x_5790_;
}
}
}
}
else
{
lean_object* v_a_5793_; lean_object* v___x_5795_; uint8_t v_isShared_5796_; uint8_t v_isSharedCheck_5800_; 
lean_dec(v_val_5755_);
lean_dec_ref(v_e_5556_);
v_a_5793_ = lean_ctor_get(v___x_5756_, 0);
v_isSharedCheck_5800_ = !lean_is_exclusive(v___x_5756_);
if (v_isSharedCheck_5800_ == 0)
{
v___x_5795_ = v___x_5756_;
v_isShared_5796_ = v_isSharedCheck_5800_;
goto v_resetjp_5794_;
}
else
{
lean_inc(v_a_5793_);
lean_dec(v___x_5756_);
v___x_5795_ = lean_box(0);
v_isShared_5796_ = v_isSharedCheck_5800_;
goto v_resetjp_5794_;
}
v_resetjp_5794_:
{
lean_object* v___x_5798_; 
if (v_isShared_5796_ == 0)
{
v___x_5798_ = v___x_5795_;
goto v_reusejp_5797_;
}
else
{
lean_object* v_reuseFailAlloc_5799_; 
v_reuseFailAlloc_5799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5799_, 0, v_a_5793_);
v___x_5798_ = v_reuseFailAlloc_5799_;
goto v_reusejp_5797_;
}
v_reusejp_5797_:
{
return v___x_5798_;
}
}
}
}
else
{
lean_object* v___x_5801_; 
lean_dec(v_a_5754_);
v___x_5801_ = l_Lean_Meta_Grind_Arith_CommRing_getNonCommSemiringId_x3f___redArg(v_val_5653_, v_a_5562_, v_a_5563_, v_a_5564_, v_a_5565_, v_a_5566_, v_a_5567_);
if (lean_obj_tag(v___x_5801_) == 0)
{
lean_object* v_a_5802_; lean_object* v___x_5804_; uint8_t v_isShared_5805_; uint8_t v_isSharedCheck_5856_; 
v_a_5802_ = lean_ctor_get(v___x_5801_, 0);
v_isSharedCheck_5856_ = !lean_is_exclusive(v___x_5801_);
if (v_isSharedCheck_5856_ == 0)
{
v___x_5804_ = v___x_5801_;
v_isShared_5805_ = v_isSharedCheck_5856_;
goto v_resetjp_5803_;
}
else
{
lean_inc(v_a_5802_);
lean_dec(v___x_5801_);
v___x_5804_ = lean_box(0);
v_isShared_5805_ = v_isSharedCheck_5856_;
goto v_resetjp_5803_;
}
v_resetjp_5803_:
{
if (lean_obj_tag(v_a_5802_) == 1)
{
lean_object* v_val_5806_; lean_object* v___x_5807_; 
lean_del_object(v___x_5804_);
v_val_5806_ = lean_ctor_get(v_a_5802_, 0);
lean_inc(v_val_5806_);
lean_dec_ref_known(v_a_5802_, 1);
lean_inc_ref(v_e_5556_);
v___x_5807_ = l_Lean_Meta_Grind_Arith_CommRing_ncsreify_x3f(v_e_5556_, v_val_5806_, v_a_5558_, v_a_5559_, v_a_5560_, v_a_5561_, v_a_5562_, v_a_5563_, v_a_5564_, v_a_5565_, v_a_5566_, v_a_5567_);
if (lean_obj_tag(v___x_5807_) == 0)
{
lean_object* v_a_5808_; lean_object* v___x_5810_; uint8_t v_isShared_5811_; uint8_t v_isSharedCheck_5843_; 
v_a_5808_ = lean_ctor_get(v___x_5807_, 0);
v_isSharedCheck_5843_ = !lean_is_exclusive(v___x_5807_);
if (v_isSharedCheck_5843_ == 0)
{
v___x_5810_ = v___x_5807_;
v_isShared_5811_ = v_isSharedCheck_5843_;
goto v_resetjp_5809_;
}
else
{
lean_inc(v_a_5808_);
lean_dec(v___x_5807_);
v___x_5810_ = lean_box(0);
v_isShared_5811_ = v_isSharedCheck_5843_;
goto v_resetjp_5809_;
}
v_resetjp_5809_:
{
if (lean_obj_tag(v_a_5808_) == 1)
{
lean_object* v_toCold_5812_; lean_object* v_options_5813_; lean_object* v_val_5814_; lean_object* v_inheritedTraceOptions_5815_; uint8_t v_hasTrace_5816_; lean_object* v___f_5817_; 
lean_del_object(v___x_5810_);
v_toCold_5812_ = lean_ctor_get(v_a_5566_, 0);
v_options_5813_ = lean_ctor_get(v_toCold_5812_, 2);
v_val_5814_ = lean_ctor_get(v_a_5808_, 0);
lean_inc(v_val_5814_);
lean_dec_ref_known(v_a_5808_, 1);
v_inheritedTraceOptions_5815_ = lean_ctor_get(v_toCold_5812_, 11);
v_hasTrace_5816_ = lean_ctor_get_uint8(v_options_5813_, sizeof(void*)*1);
lean_inc_ref(v_e_5556_);
v___f_5817_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_internalize___lam__1), 3, 2);
lean_closure_set(v___f_5817_, 0, v_e_5556_);
lean_closure_set(v___f_5817_, 1, v_val_5814_);
if (v_hasTrace_5816_ == 0)
{
v___y_5573_ = v___f_5817_;
v___y_5574_ = v_val_5806_;
v___y_5575_ = v_a_5558_;
v___y_5576_ = v_a_5559_;
v___y_5577_ = v_a_5560_;
v___y_5578_ = v_a_5561_;
v___y_5579_ = v_a_5562_;
v___y_5580_ = v_a_5563_;
v___y_5581_ = v_a_5564_;
v___y_5582_ = v_a_5565_;
v___y_5583_ = v_a_5566_;
v___y_5584_ = v_a_5567_;
goto v___jp_5572_;
}
else
{
lean_object* v___x_5818_; lean_object* v___x_5819_; uint8_t v___x_5820_; 
v___x_5818_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__1));
v___x_5819_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__2, &l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__2_once, _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__2);
v___x_5820_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5815_, v_options_5813_, v___x_5819_);
if (v___x_5820_ == 0)
{
v___y_5573_ = v___f_5817_;
v___y_5574_ = v_val_5806_;
v___y_5575_ = v_a_5558_;
v___y_5576_ = v_a_5559_;
v___y_5577_ = v_a_5560_;
v___y_5578_ = v_a_5561_;
v___y_5579_ = v_a_5562_;
v___y_5580_ = v_a_5563_;
v___y_5581_ = v_a_5564_;
v___y_5582_ = v_a_5565_;
v___y_5583_ = v_a_5566_;
v___y_5584_ = v_a_5567_;
goto v___jp_5572_;
}
else
{
lean_object* v___x_5821_; 
v___x_5821_ = l_Lean_Meta_Grind_updateLastTag(v_a_5558_, v_a_5559_, v_a_5560_, v_a_5561_, v_a_5562_, v_a_5563_, v_a_5564_, v_a_5565_, v_a_5566_, v_a_5567_);
if (lean_obj_tag(v___x_5821_) == 0)
{
lean_object* v___x_5823_; uint8_t v_isShared_5824_; uint8_t v_isSharedCheck_5837_; 
v_isSharedCheck_5837_ = !lean_is_exclusive(v___x_5821_);
if (v_isSharedCheck_5837_ == 0)
{
lean_object* v_unused_5838_; 
v_unused_5838_ = lean_ctor_get(v___x_5821_, 0);
lean_dec(v_unused_5838_);
v___x_5823_ = v___x_5821_;
v_isShared_5824_ = v_isSharedCheck_5837_;
goto v_resetjp_5822_;
}
else
{
lean_dec(v___x_5821_);
v___x_5823_ = lean_box(0);
v_isShared_5824_ = v_isSharedCheck_5837_;
goto v_resetjp_5822_;
}
v_resetjp_5822_:
{
lean_object* v___x_5825_; lean_object* v___x_5826_; lean_object* v___x_5828_; 
v___x_5825_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__12, &l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__12_once, _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__12);
lean_inc(v_val_5806_);
v___x_5826_ = l_Nat_reprFast(v_val_5806_);
if (v_isShared_5824_ == 0)
{
lean_ctor_set_tag(v___x_5823_, 3);
lean_ctor_set(v___x_5823_, 0, v___x_5826_);
v___x_5828_ = v___x_5823_;
goto v_reusejp_5827_;
}
else
{
lean_object* v_reuseFailAlloc_5836_; 
v_reuseFailAlloc_5836_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5836_, 0, v___x_5826_);
v___x_5828_ = v_reuseFailAlloc_5836_;
goto v_reusejp_5827_;
}
v_reusejp_5827_:
{
lean_object* v___x_5829_; lean_object* v___x_5830_; lean_object* v___x_5831_; lean_object* v___x_5832_; lean_object* v___x_5833_; lean_object* v___x_5834_; lean_object* v___x_5835_; 
v___x_5829_ = l_Lean_MessageData_ofFormat(v___x_5828_);
v___x_5830_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5830_, 0, v___x_5825_);
lean_ctor_set(v___x_5830_, 1, v___x_5829_);
v___x_5831_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__6, &l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__6_once, _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__6);
v___x_5832_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5832_, 0, v___x_5830_);
lean_ctor_set(v___x_5832_, 1, v___x_5831_);
lean_inc_ref(v_e_5556_);
v___x_5833_ = l_Lean_MessageData_ofExpr(v_e_5556_);
v___x_5834_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5834_, 0, v___x_5832_);
lean_ctor_set(v___x_5834_, 1, v___x_5833_);
v___x_5835_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__2___redArg(v___x_5818_, v___x_5834_, v_a_5564_, v_a_5565_, v_a_5566_, v_a_5567_);
if (lean_obj_tag(v___x_5835_) == 0)
{
lean_dec_ref_known(v___x_5835_, 1);
v___y_5573_ = v___f_5817_;
v___y_5574_ = v_val_5806_;
v___y_5575_ = v_a_5558_;
v___y_5576_ = v_a_5559_;
v___y_5577_ = v_a_5560_;
v___y_5578_ = v_a_5561_;
v___y_5579_ = v_a_5562_;
v___y_5580_ = v_a_5563_;
v___y_5581_ = v_a_5564_;
v___y_5582_ = v_a_5565_;
v___y_5583_ = v_a_5566_;
v___y_5584_ = v_a_5567_;
goto v___jp_5572_;
}
else
{
lean_dec_ref(v___f_5817_);
lean_dec(v_val_5806_);
lean_dec_ref(v_e_5556_);
return v___x_5835_;
}
}
}
}
else
{
lean_dec_ref(v___f_5817_);
lean_dec(v_val_5806_);
lean_dec_ref(v_e_5556_);
return v___x_5821_;
}
}
}
}
else
{
lean_object* v___x_5839_; lean_object* v___x_5841_; 
lean_dec(v_a_5808_);
lean_dec(v_val_5806_);
lean_dec_ref(v_e_5556_);
v___x_5839_ = lean_box(0);
if (v_isShared_5811_ == 0)
{
lean_ctor_set(v___x_5810_, 0, v___x_5839_);
v___x_5841_ = v___x_5810_;
goto v_reusejp_5840_;
}
else
{
lean_object* v_reuseFailAlloc_5842_; 
v_reuseFailAlloc_5842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5842_, 0, v___x_5839_);
v___x_5841_ = v_reuseFailAlloc_5842_;
goto v_reusejp_5840_;
}
v_reusejp_5840_:
{
return v___x_5841_;
}
}
}
}
else
{
lean_object* v_a_5844_; lean_object* v___x_5846_; uint8_t v_isShared_5847_; uint8_t v_isSharedCheck_5851_; 
lean_dec(v_val_5806_);
lean_dec_ref(v_e_5556_);
v_a_5844_ = lean_ctor_get(v___x_5807_, 0);
v_isSharedCheck_5851_ = !lean_is_exclusive(v___x_5807_);
if (v_isSharedCheck_5851_ == 0)
{
v___x_5846_ = v___x_5807_;
v_isShared_5847_ = v_isSharedCheck_5851_;
goto v_resetjp_5845_;
}
else
{
lean_inc(v_a_5844_);
lean_dec(v___x_5807_);
v___x_5846_ = lean_box(0);
v_isShared_5847_ = v_isSharedCheck_5851_;
goto v_resetjp_5845_;
}
v_resetjp_5845_:
{
lean_object* v___x_5849_; 
if (v_isShared_5847_ == 0)
{
v___x_5849_ = v___x_5846_;
goto v_reusejp_5848_;
}
else
{
lean_object* v_reuseFailAlloc_5850_; 
v_reuseFailAlloc_5850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5850_, 0, v_a_5844_);
v___x_5849_ = v_reuseFailAlloc_5850_;
goto v_reusejp_5848_;
}
v_reusejp_5848_:
{
return v___x_5849_;
}
}
}
}
else
{
lean_object* v___x_5852_; lean_object* v___x_5854_; 
lean_dec(v_a_5802_);
lean_dec_ref(v_e_5556_);
v___x_5852_ = lean_box(0);
if (v_isShared_5805_ == 0)
{
lean_ctor_set(v___x_5804_, 0, v___x_5852_);
v___x_5854_ = v___x_5804_;
goto v_reusejp_5853_;
}
else
{
lean_object* v_reuseFailAlloc_5855_; 
v_reuseFailAlloc_5855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5855_, 0, v___x_5852_);
v___x_5854_ = v_reuseFailAlloc_5855_;
goto v_reusejp_5853_;
}
v_reusejp_5853_:
{
return v___x_5854_;
}
}
}
}
else
{
lean_object* v_a_5857_; lean_object* v___x_5859_; uint8_t v_isShared_5860_; uint8_t v_isSharedCheck_5864_; 
lean_dec_ref(v_e_5556_);
v_a_5857_ = lean_ctor_get(v___x_5801_, 0);
v_isSharedCheck_5864_ = !lean_is_exclusive(v___x_5801_);
if (v_isSharedCheck_5864_ == 0)
{
v___x_5859_ = v___x_5801_;
v_isShared_5860_ = v_isSharedCheck_5864_;
goto v_resetjp_5858_;
}
else
{
lean_inc(v_a_5857_);
lean_dec(v___x_5801_);
v___x_5859_ = lean_box(0);
v_isShared_5860_ = v_isSharedCheck_5864_;
goto v_resetjp_5858_;
}
v_resetjp_5858_:
{
lean_object* v___x_5862_; 
if (v_isShared_5860_ == 0)
{
v___x_5862_ = v___x_5859_;
goto v_reusejp_5861_;
}
else
{
lean_object* v_reuseFailAlloc_5863_; 
v_reuseFailAlloc_5863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5863_, 0, v_a_5857_);
v___x_5862_ = v_reuseFailAlloc_5863_;
goto v_reusejp_5861_;
}
v_reusejp_5861_:
{
return v___x_5862_;
}
}
}
}
}
else
{
lean_object* v_a_5865_; lean_object* v___x_5867_; uint8_t v_isShared_5868_; uint8_t v_isSharedCheck_5872_; 
lean_dec(v_val_5653_);
lean_dec_ref(v_e_5556_);
v_a_5865_ = lean_ctor_get(v___x_5753_, 0);
v_isSharedCheck_5872_ = !lean_is_exclusive(v___x_5753_);
if (v_isSharedCheck_5872_ == 0)
{
v___x_5867_ = v___x_5753_;
v_isShared_5868_ = v_isSharedCheck_5872_;
goto v_resetjp_5866_;
}
else
{
lean_inc(v_a_5865_);
lean_dec(v___x_5753_);
v___x_5867_ = lean_box(0);
v_isShared_5868_ = v_isSharedCheck_5872_;
goto v_resetjp_5866_;
}
v_resetjp_5866_:
{
lean_object* v___x_5870_; 
if (v_isShared_5868_ == 0)
{
v___x_5870_ = v___x_5867_;
goto v_reusejp_5869_;
}
else
{
lean_object* v_reuseFailAlloc_5871_; 
v_reuseFailAlloc_5871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5871_, 0, v_a_5865_);
v___x_5870_ = v_reuseFailAlloc_5871_;
goto v_reusejp_5869_;
}
v_reusejp_5869_:
{
return v___x_5870_;
}
}
}
}
}
else
{
lean_object* v_a_5873_; lean_object* v___x_5875_; uint8_t v_isShared_5876_; uint8_t v_isSharedCheck_5880_; 
lean_dec(v_val_5653_);
lean_dec_ref(v_e_5556_);
v_a_5873_ = lean_ctor_get(v___x_5705_, 0);
v_isSharedCheck_5880_ = !lean_is_exclusive(v___x_5705_);
if (v_isSharedCheck_5880_ == 0)
{
v___x_5875_ = v___x_5705_;
v_isShared_5876_ = v_isSharedCheck_5880_;
goto v_resetjp_5874_;
}
else
{
lean_inc(v_a_5873_);
lean_dec(v___x_5705_);
v___x_5875_ = lean_box(0);
v_isShared_5876_ = v_isSharedCheck_5880_;
goto v_resetjp_5874_;
}
v_resetjp_5874_:
{
lean_object* v___x_5878_; 
if (v_isShared_5876_ == 0)
{
v___x_5878_ = v___x_5875_;
goto v_reusejp_5877_;
}
else
{
lean_object* v_reuseFailAlloc_5879_; 
v_reuseFailAlloc_5879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5879_, 0, v_a_5873_);
v___x_5878_ = v_reuseFailAlloc_5879_;
goto v_reusejp_5877_;
}
v_reusejp_5877_:
{
return v___x_5878_;
}
}
}
}
}
else
{
lean_object* v_a_5881_; lean_object* v___x_5883_; uint8_t v_isShared_5884_; uint8_t v_isSharedCheck_5888_; 
lean_dec(v_val_5653_);
lean_dec_ref(v_e_5556_);
v_a_5881_ = lean_ctor_get(v___x_5656_, 0);
v_isSharedCheck_5888_ = !lean_is_exclusive(v___x_5656_);
if (v_isSharedCheck_5888_ == 0)
{
v___x_5883_ = v___x_5656_;
v_isShared_5884_ = v_isSharedCheck_5888_;
goto v_resetjp_5882_;
}
else
{
lean_inc(v_a_5881_);
lean_dec(v___x_5656_);
v___x_5883_ = lean_box(0);
v_isShared_5884_ = v_isSharedCheck_5888_;
goto v_resetjp_5882_;
}
v_resetjp_5882_:
{
lean_object* v___x_5886_; 
if (v_isShared_5884_ == 0)
{
v___x_5886_ = v___x_5883_;
goto v_reusejp_5885_;
}
else
{
lean_object* v_reuseFailAlloc_5887_; 
v_reuseFailAlloc_5887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5887_, 0, v_a_5881_);
v___x_5886_ = v_reuseFailAlloc_5887_;
goto v_reusejp_5885_;
}
v_reusejp_5885_:
{
return v___x_5886_;
}
}
}
}
}
else
{
lean_object* v___x_5903_; lean_object* v___x_5905_; 
lean_dec(v___x_5652_);
lean_dec_ref(v_e_5556_);
v___x_5903_ = lean_box(0);
if (v_isShared_5651_ == 0)
{
lean_ctor_set(v___x_5650_, 0, v___x_5903_);
v___x_5905_ = v___x_5650_;
goto v_reusejp_5904_;
}
else
{
lean_object* v_reuseFailAlloc_5906_; 
v_reuseFailAlloc_5906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5906_, 0, v___x_5903_);
v___x_5905_ = v_reuseFailAlloc_5906_;
goto v_reusejp_5904_;
}
v_reusejp_5904_:
{
return v___x_5905_;
}
}
}
}
else
{
lean_dec_ref(v_e_5556_);
return v___x_5648_;
}
}
else
{
lean_dec_ref(v_e_5556_);
goto v___jp_5569_;
}
}
else
{
lean_object* v_a_5909_; lean_object* v___x_5911_; uint8_t v_isShared_5912_; uint8_t v_isSharedCheck_5916_; 
lean_dec_ref(v_e_5556_);
v_a_5909_ = lean_ctor_get(v___x_5645_, 0);
v_isSharedCheck_5916_ = !lean_is_exclusive(v___x_5645_);
if (v_isSharedCheck_5916_ == 0)
{
v___x_5911_ = v___x_5645_;
v_isShared_5912_ = v_isSharedCheck_5916_;
goto v_resetjp_5910_;
}
else
{
lean_inc(v_a_5909_);
lean_dec(v___x_5645_);
v___x_5911_ = lean_box(0);
v_isShared_5912_ = v_isSharedCheck_5916_;
goto v_resetjp_5910_;
}
v_resetjp_5910_:
{
lean_object* v___x_5914_; 
if (v_isShared_5912_ == 0)
{
v___x_5914_ = v___x_5911_;
goto v_reusejp_5913_;
}
else
{
lean_object* v_reuseFailAlloc_5915_; 
v_reuseFailAlloc_5915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5915_, 0, v_a_5909_);
v___x_5914_ = v_reuseFailAlloc_5915_;
goto v_reusejp_5913_;
}
v_reusejp_5913_:
{
return v___x_5914_;
}
}
}
}
else
{
lean_dec_ref(v_e_5556_);
goto v___jp_5569_;
}
}
}
else
{
lean_object* v_a_5917_; lean_object* v___x_5919_; uint8_t v_isShared_5920_; uint8_t v_isSharedCheck_5924_; 
lean_dec_ref(v_e_5556_);
v_a_5917_ = lean_ctor_get(v___x_5641_, 0);
v_isSharedCheck_5924_ = !lean_is_exclusive(v___x_5641_);
if (v_isSharedCheck_5924_ == 0)
{
v___x_5919_ = v___x_5641_;
v_isShared_5920_ = v_isSharedCheck_5924_;
goto v_resetjp_5918_;
}
else
{
lean_inc(v_a_5917_);
lean_dec(v___x_5641_);
v___x_5919_ = lean_box(0);
v_isShared_5920_ = v_isSharedCheck_5924_;
goto v_resetjp_5918_;
}
v_resetjp_5918_:
{
lean_object* v___x_5922_; 
if (v_isShared_5920_ == 0)
{
v___x_5922_ = v___x_5919_;
goto v_reusejp_5921_;
}
else
{
lean_object* v_reuseFailAlloc_5923_; 
v_reuseFailAlloc_5923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5923_, 0, v_a_5917_);
v___x_5922_ = v_reuseFailAlloc_5923_;
goto v_reusejp_5921_;
}
v_reusejp_5921_:
{
return v___x_5922_;
}
}
}
v___jp_5569_:
{
lean_object* v___x_5570_; lean_object* v___x_5571_; 
v___x_5570_ = lean_box(0);
v___x_5571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5571_, 0, v___x_5570_);
return v___x_5571_;
}
v___jp_5572_:
{
lean_object* v___x_5585_; 
lean_inc_ref(v_e_5556_);
v___x_5585_ = l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId___redArg(v_e_5556_, v___y_5574_, v___y_5575_, v___y_5579_, v___y_5580_, v___y_5581_, v___y_5582_, v___y_5583_, v___y_5584_);
if (lean_obj_tag(v___x_5585_) == 0)
{
lean_object* v___x_5586_; lean_object* v___x_5587_; 
lean_dec_ref_known(v___x_5585_, 1);
v___x_5586_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_5587_ = l_Lean_Meta_Grind_SolverExtension_markTerm___redArg(v___x_5586_, v_e_5556_, v___y_5575_, v___y_5576_, v___y_5577_, v___y_5578_, v___y_5579_, v___y_5580_, v___y_5581_, v___y_5582_, v___y_5583_, v___y_5584_);
if (lean_obj_tag(v___x_5587_) == 0)
{
lean_object* v___x_5588_; 
lean_dec_ref_known(v___x_5587_, 1);
v___x_5588_ = l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiringState___redArg(v___y_5573_, v___y_5574_, v___y_5575_);
lean_dec(v___y_5574_);
return v___x_5588_;
}
else
{
lean_dec(v___y_5574_);
lean_dec_ref(v___y_5573_);
return v___x_5587_;
}
}
else
{
lean_dec(v___y_5574_);
lean_dec_ref(v___y_5573_);
lean_dec_ref(v_e_5556_);
return v___x_5585_;
}
}
v___jp_5589_:
{
lean_object* v___x_5602_; 
lean_inc_ref(v_e_5556_);
v___x_5602_ = l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg(v_e_5556_, v___y_5591_, v___y_5592_, v___y_5596_, v___y_5597_, v___y_5598_, v___y_5599_, v___y_5600_, v___y_5601_);
if (lean_obj_tag(v___x_5602_) == 0)
{
lean_object* v___x_5603_; lean_object* v___x_5604_; 
lean_dec_ref_known(v___x_5602_, 1);
v___x_5603_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_5604_ = l_Lean_Meta_Grind_SolverExtension_markTerm___redArg(v___x_5603_, v_e_5556_, v___y_5592_, v___y_5593_, v___y_5594_, v___y_5595_, v___y_5596_, v___y_5597_, v___y_5598_, v___y_5599_, v___y_5600_, v___y_5601_);
if (lean_obj_tag(v___x_5604_) == 0)
{
lean_object* v___x_5605_; 
lean_dec_ref_known(v___x_5604_, 1);
v___x_5605_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifySemiringState___redArg(v___y_5590_, v___y_5591_, v___y_5592_);
lean_dec(v___y_5591_);
return v___x_5605_;
}
else
{
lean_dec(v___y_5591_);
lean_dec_ref(v___y_5590_);
return v___x_5604_;
}
}
else
{
lean_dec(v___y_5591_);
lean_dec_ref(v___y_5590_);
lean_dec_ref(v_e_5556_);
return v___x_5602_;
}
}
v___jp_5606_:
{
lean_object* v___x_5619_; 
lean_inc_ref(v_e_5556_);
v___x_5619_ = l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg(v_e_5556_, v___y_5608_, v___y_5609_, v___y_5613_, v___y_5614_, v___y_5615_, v___y_5616_, v___y_5617_, v___y_5618_);
if (lean_obj_tag(v___x_5619_) == 0)
{
lean_object* v___x_5620_; lean_object* v___x_5621_; 
lean_dec_ref_known(v___x_5619_, 1);
v___x_5620_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_5621_ = l_Lean_Meta_Grind_SolverExtension_markTerm___redArg(v___x_5620_, v_e_5556_, v___y_5609_, v___y_5610_, v___y_5611_, v___y_5612_, v___y_5613_, v___y_5614_, v___y_5615_, v___y_5616_, v___y_5617_, v___y_5618_);
if (lean_obj_tag(v___x_5621_) == 0)
{
lean_object* v___x_5622_; 
lean_dec_ref_known(v___x_5621_, 1);
v___x_5622_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRingState___redArg(v___y_5607_, v___y_5608_, v___y_5609_);
if (lean_obj_tag(v___x_5622_) == 0)
{
lean_object* v___x_5623_; 
lean_dec_ref_known(v___x_5622_, 1);
v___x_5623_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars(v___y_5608_, v___y_5609_, v___y_5610_, v___y_5611_, v___y_5612_, v___y_5613_, v___y_5614_, v___y_5615_, v___y_5616_, v___y_5617_, v___y_5618_);
lean_dec_ref(v___y_5608_);
return v___x_5623_;
}
else
{
lean_dec_ref(v___y_5608_);
return v___x_5622_;
}
}
else
{
lean_dec_ref(v___y_5608_);
lean_dec_ref(v___y_5607_);
return v___x_5621_;
}
}
else
{
lean_dec_ref(v___y_5608_);
lean_dec_ref(v___y_5607_);
lean_dec_ref(v_e_5556_);
return v___x_5619_;
}
}
v___jp_5624_:
{
lean_object* v___x_5637_; 
lean_inc_ref(v_e_5556_);
v___x_5637_ = l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommRingId___redArg(v_e_5556_, v___y_5626_, v___y_5627_, v___y_5631_, v___y_5632_, v___y_5633_, v___y_5634_, v___y_5635_, v___y_5636_);
if (lean_obj_tag(v___x_5637_) == 0)
{
lean_object* v___x_5638_; lean_object* v___x_5639_; 
lean_dec_ref_known(v___x_5637_, 1);
v___x_5638_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_5639_ = l_Lean_Meta_Grind_SolverExtension_markTerm___redArg(v___x_5638_, v_e_5556_, v___y_5627_, v___y_5628_, v___y_5629_, v___y_5630_, v___y_5631_, v___y_5632_, v___y_5633_, v___y_5634_, v___y_5635_, v___y_5636_);
if (lean_obj_tag(v___x_5639_) == 0)
{
lean_object* v___x_5640_; 
lean_dec_ref_known(v___x_5639_, 1);
v___x_5640_ = l_Lean_Meta_Grind_Arith_CommRing_NonCommRingM_modifyRingState___redArg(v___y_5625_, v___y_5626_, v___y_5627_);
lean_dec(v___y_5626_);
return v___x_5640_;
}
else
{
lean_dec(v___y_5626_);
lean_dec_ref(v___y_5625_);
return v___x_5639_;
}
}
else
{
lean_dec(v___y_5626_);
lean_dec_ref(v___y_5625_);
lean_dec_ref(v_e_5556_);
return v___x_5637_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___boxed(lean_object* v_e_5925_, lean_object* v_parent_x3f_5926_, lean_object* v_a_5927_, lean_object* v_a_5928_, lean_object* v_a_5929_, lean_object* v_a_5930_, lean_object* v_a_5931_, lean_object* v_a_5932_, lean_object* v_a_5933_, lean_object* v_a_5934_, lean_object* v_a_5935_, lean_object* v_a_5936_, lean_object* v_a_5937_){
_start:
{
lean_object* v_res_5938_; 
v_res_5938_ = l_Lean_Meta_Grind_Arith_CommRing_internalize(v_e_5925_, v_parent_x3f_5926_, v_a_5927_, v_a_5928_, v_a_5929_, v_a_5930_, v_a_5931_, v_a_5932_, v_a_5933_, v_a_5934_, v_a_5935_, v_a_5936_);
lean_dec(v_a_5936_);
lean_dec_ref(v_a_5935_);
lean_dec(v_a_5934_);
lean_dec_ref(v_a_5933_);
lean_dec(v_a_5932_);
lean_dec_ref(v_a_5931_);
lean_dec(v_a_5930_);
lean_dec_ref(v_a_5929_);
lean_dec(v_a_5928_);
lean_dec(v_a_5927_);
lean_dec(v_parent_x3f_5926_);
return v_res_5938_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0(lean_object* v_cls_5939_, lean_object* v_msg_5940_, lean_object* v___y_5941_, lean_object* v___y_5942_, lean_object* v___y_5943_, lean_object* v___y_5944_, lean_object* v___y_5945_, lean_object* v___y_5946_, lean_object* v___y_5947_, lean_object* v___y_5948_, lean_object* v___y_5949_, lean_object* v___y_5950_, lean_object* v___y_5951_){
_start:
{
lean_object* v___x_5953_; 
v___x_5953_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0___redArg(v_cls_5939_, v_msg_5940_, v___y_5948_, v___y_5949_, v___y_5950_, v___y_5951_);
return v___x_5953_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0___boxed(lean_object* v_cls_5954_, lean_object* v_msg_5955_, lean_object* v___y_5956_, lean_object* v___y_5957_, lean_object* v___y_5958_, lean_object* v___y_5959_, lean_object* v___y_5960_, lean_object* v___y_5961_, lean_object* v___y_5962_, lean_object* v___y_5963_, lean_object* v___y_5964_, lean_object* v___y_5965_, lean_object* v___y_5966_, lean_object* v___y_5967_){
_start:
{
lean_object* v_res_5968_; 
v_res_5968_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0(v_cls_5954_, v_msg_5955_, v___y_5956_, v___y_5957_, v___y_5958_, v___y_5959_, v___y_5960_, v___y_5961_, v___y_5962_, v___y_5963_, v___y_5964_, v___y_5965_, v___y_5966_);
lean_dec(v___y_5966_);
lean_dec_ref(v___y_5965_);
lean_dec(v___y_5964_);
lean_dec_ref(v___y_5963_);
lean_dec(v___y_5962_);
lean_dec_ref(v___y_5961_);
lean_dec(v___y_5960_);
lean_dec_ref(v___y_5959_);
lean_dec(v___y_5958_);
lean_dec(v___y_5957_);
lean_dec(v___y_5956_);
return v_res_5968_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__1(lean_object* v_cls_5969_, lean_object* v_msg_5970_, lean_object* v___y_5971_, lean_object* v___y_5972_, lean_object* v___y_5973_, lean_object* v___y_5974_, lean_object* v___y_5975_, lean_object* v___y_5976_, lean_object* v___y_5977_, lean_object* v___y_5978_, lean_object* v___y_5979_, lean_object* v___y_5980_, lean_object* v___y_5981_){
_start:
{
lean_object* v___x_5983_; 
v___x_5983_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__1___redArg(v_cls_5969_, v_msg_5970_, v___y_5978_, v___y_5979_, v___y_5980_, v___y_5981_);
return v___x_5983_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__1___boxed(lean_object* v_cls_5984_, lean_object* v_msg_5985_, lean_object* v___y_5986_, lean_object* v___y_5987_, lean_object* v___y_5988_, lean_object* v___y_5989_, lean_object* v___y_5990_, lean_object* v___y_5991_, lean_object* v___y_5992_, lean_object* v___y_5993_, lean_object* v___y_5994_, lean_object* v___y_5995_, lean_object* v___y_5996_, lean_object* v___y_5997_){
_start:
{
lean_object* v_res_5998_; 
v_res_5998_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__1(v_cls_5984_, v_msg_5985_, v___y_5986_, v___y_5987_, v___y_5988_, v___y_5989_, v___y_5990_, v___y_5991_, v___y_5992_, v___y_5993_, v___y_5994_, v___y_5995_, v___y_5996_);
lean_dec(v___y_5996_);
lean_dec_ref(v___y_5995_);
lean_dec(v___y_5994_);
lean_dec_ref(v___y_5993_);
lean_dec(v___y_5992_);
lean_dec_ref(v___y_5991_);
lean_dec(v___y_5990_);
lean_dec_ref(v___y_5989_);
lean_dec(v___y_5988_);
lean_dec(v___y_5987_);
lean_dec(v___y_5986_);
return v_res_5998_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__2(lean_object* v_cls_5999_, lean_object* v_msg_6000_, lean_object* v___y_6001_, lean_object* v___y_6002_, lean_object* v___y_6003_, lean_object* v___y_6004_, lean_object* v___y_6005_, lean_object* v___y_6006_, lean_object* v___y_6007_, lean_object* v___y_6008_, lean_object* v___y_6009_, lean_object* v___y_6010_, lean_object* v___y_6011_){
_start:
{
lean_object* v___x_6013_; 
v___x_6013_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__2___redArg(v_cls_5999_, v_msg_6000_, v___y_6008_, v___y_6009_, v___y_6010_, v___y_6011_);
return v___x_6013_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__2___boxed(lean_object* v_cls_6014_, lean_object* v_msg_6015_, lean_object* v___y_6016_, lean_object* v___y_6017_, lean_object* v___y_6018_, lean_object* v___y_6019_, lean_object* v___y_6020_, lean_object* v___y_6021_, lean_object* v___y_6022_, lean_object* v___y_6023_, lean_object* v___y_6024_, lean_object* v___y_6025_, lean_object* v___y_6026_, lean_object* v___y_6027_){
_start:
{
lean_object* v_res_6028_; 
v_res_6028_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__2(v_cls_6014_, v_msg_6015_, v___y_6016_, v___y_6017_, v___y_6018_, v___y_6019_, v___y_6020_, v___y_6021_, v___y_6022_, v___y_6023_, v___y_6024_, v___y_6025_, v___y_6026_);
lean_dec(v___y_6026_);
lean_dec_ref(v___y_6025_);
lean_dec(v___y_6024_);
lean_dec_ref(v___y_6023_);
lean_dec(v___y_6022_);
lean_dec_ref(v___y_6021_);
lean_dec(v___y_6020_);
lean_dec_ref(v___y_6019_);
lean_dec(v___y_6018_);
lean_dec(v___y_6017_);
lean_dec(v___y_6016_);
return v_res_6028_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingId(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Reify(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_DenoteExpr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Arith_Classify(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingId(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Reify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_DenoteExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Arith_Classify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingId(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Reify(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_DenoteExpr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Arith_Classify(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingId(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Reify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_DenoteExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Arith_Classify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize(builtin);
}
#ifdef __cplusplus
}
#endif
