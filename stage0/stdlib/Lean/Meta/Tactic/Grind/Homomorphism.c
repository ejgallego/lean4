// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Homomorphism
// Imports: public import Lean.Meta.Tactic.Grind.Types public import Lean.Meta.Tactic.Grind.Homo public import Lean.Meta.Sym.Simp.SimpM import Init.Grind.Homo.Extra import Lean.Meta.NatInstTesters import Lean.Meta.Sym.LitValues import Lean.Meta.Tactic.Grind.Diseq import Lean.Meta.Sym.Simp.Rewrite import Lean.Meta.Sym.Simp.EvalGround
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
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint64_t lean_usize_to_uint64(size_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getConfig___redArg(lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_Meta_Grind_registerSolverExtension___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_SolverExtension_getState___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getHomoTheorems___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_getHomoPredTheorems___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_getHomoSourceTypes___redArg(lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Result_withContextDependent(lean_object*);
lean_object* l___private_Lean_Meta_Sym_Simp_EvalGround_0__Lean_Meta_Sym_Simp_evalGroundCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_dischargeNone___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Theorems_rewrite(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
extern lean_object* l_Lean_Nat_mkType;
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_lxor(lean_object*, lean_object*);
lean_object* lean_nat_log2(lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_shiftl(lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_mkNatDiv(lean_object*, lean_object*);
lean_object* l_Lean_mkNatMod(lean_object*, lean_object*);
lean_object* l_Lean_mkNatMul(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommonInc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Meta_Structural_isInstHAndNat___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getNatValue_x3f(lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Structural_isInstHModNat___redArg(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Lean_mkNatSub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Structural_isInstHMulNat___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_mk_eq_proof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqMPCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_addNewRawFact___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getGeneration___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_updateLastTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_SolverExtension_markTerm___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_preprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Result_getProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_internalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkHomoPredInstances(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_Grind_mkDiseqProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* l_Lean_Meta_Grind_SolverExtension_setMethods___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "hom"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(232, 254, 229, 211, 186, 100, 148, 78)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__6_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__6_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__6_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__7_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__7_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__7_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__8_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__6_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__7_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__8_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__8_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__9_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__9_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__9_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__10_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__8_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__9_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(195, 68, 87, 56, 63, 220, 109, 253)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__10_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__10_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__12_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__10_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(53, 20, 57, 191, 103, 250, 161, 8)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__12_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__12_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__13_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Homomorphism"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__13_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__13_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__14_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__12_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__13_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(44, 40, 35, 7, 90, 245, 98, 206)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__14_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__14_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__15_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__14_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(173, 33, 165, 246, 19, 142, 127, 179)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__15_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__15_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__16_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__15_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(24, 152, 96, 139, 215, 165, 231, 232)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__16_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__16_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__17_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__16_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__7_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 88, 147, 154, 131, 237, 72, 0)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__17_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__17_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__18_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__17_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(142, 150, 207, 215, 57, 47, 128, 71)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__18_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__18_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__19_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Homo"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__19_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__19_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__20_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__18_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__19_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(84, 97, 15, 175, 123, 219, 173, 123)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__20_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__20_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__21_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__21_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__21_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__22_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__20_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__21_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(145, 91, 45, 194, 122, 52, 201, 113)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__22_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__22_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__23_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__23_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__23_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__24_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__22_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__23_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(124, 55, 21, 223, 53, 32, 164, 57)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__24_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__24_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__25_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__24_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(29, 81, 60, 28, 4, 71, 132, 230)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__25_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__25_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__26_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__25_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__7_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(117, 152, 143, 143, 254, 232, 99, 5)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__26_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__26_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__27_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__26_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__9_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(204, 80, 221, 141, 17, 69, 156, 211)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__27_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__27_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__28_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__27_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(198, 244, 64, 195, 64, 183, 126, 22)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__28_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__28_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__29_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__28_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__13_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(59, 30, 194, 254, 212, 12, 37, 229)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__29_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__29_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__30_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__30_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__31_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__31_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__31_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__32_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__32_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__33_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__33_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__33_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__34_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__34_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__35_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__35_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "pred"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(232, 254, 229, 211, 186, 100, 148, 78)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(195, 94, 180, 116, 28, 106, 148, 117)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2____boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___lam__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___lam__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Homo_homExt;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_init___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_init___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_init___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_init(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_init___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getThms___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getThms___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getThms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getThms___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getPreds___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getPreds___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getPreds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getPreds___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getSourceTypes___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getSourceTypes___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getSourceTypes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getSourceTypes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_markSourceTerm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_markSourceTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__1___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__1___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_maskOnesZeros_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_maskOnesZeros_x3f___boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__1_value),LEAN_SCALAR_PTR_LITERAL(72, 6, 107, 181, 0, 125, 21, 187)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl(lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "and_eq_div_mod_mul"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(32, 105, 216, 204, 207, 254, 171, 116)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(172, 213, 253, 107, 196, 179, 180, 67)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "ones_zeros_and_eq_div_mod_mul"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(32, 105, 216, 204, 207, 254, 171, 116)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(200, 71, 30, 242, 231, 136, 113, 27)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "and_eq_mod"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(32, 105, 216, 204, 207, 254, 171, 116)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__7_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(41, 150, 170, 114, 144, 96, 66, 91)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "ones_and_eq_mod"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(32, 105, 216, 204, 207, 254, 171, 116)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__9_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(153, 240, 108, 217, 24, 169, 196, 221)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAnd"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__10_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAnd"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__11_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(222, 205, 8, 181, 48, 134, 168, 175)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__12_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(54, 171, 107, 112, 94, 43, 106, 200)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__12_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__13_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMod"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMod"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(93, 4, 3, 35, 188, 254, 191, 190)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(120, 199, 142, 238, 9, 44, 94, 134)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "mul_mod_eq_sub_mul_mod"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(32, 105, 216, 204, 207, 254, 171, 116)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(52, 43, 118, 105, 221, 177, 248, 80)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "mul_mod_eq_sub_mul_mod'"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__11_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(32, 105, 216, 204, 207, 254, 171, 116)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__6_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(41, 69, 29, 68, 4, 176, 204, 226)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMul"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMul"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(248, 227, 200, 215, 229, 255, 92, 22)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__9_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_dischargeNone___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(255) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(100000) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_isForbidden___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_isForbidden___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_isForbidden___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_isForbidden___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "HEq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_isForbidden___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_isForbidden___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_isForbidden___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_isForbidden___closed__1_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_isForbidden___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_isForbidden___closed__2_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_isForbidden(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_isForbidden___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Homo_internalize___redArg___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Homo_internalize___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Homo_internalize___redArg___closed__0;
static const lean_string_object l_Lean_Meta_Grind_Homo_internalize___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "\n===>\n"};
static const lean_object* l_Lean_Meta_Grind_Homo_internalize___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Homo_internalize___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Grind_Homo_internalize___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Homo_internalize___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Homo_internalize___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Homo_internalize___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Homo_internalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Homo_internalize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Homo_processNewEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Homo_processNewEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Homo_processNewDiseq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* l_Lean_Meta_Grind_Homo_processNewDiseq___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Homo_processNewDiseq___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_Homo_processNewDiseq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Homo_processNewDiseq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* l_Lean_Meta_Grind_Homo_processNewDiseq___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Homo_processNewDiseq___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Grind_Homo_processNewDiseq___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Homo_processNewDiseq___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Homo_processNewDiseq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Homo_processNewDiseq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___lam__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___lam__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___lam__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___lam__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___lam__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2_(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___lam__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___lam__3_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___lam__3_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___lam__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___lam__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2____boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_Homo_internalize___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_Homo_processNewEq___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_Homo_processNewDiseq___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___lam__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2____boxed, .m_arity = 12, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__6_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___lam__3_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2____boxed, .m_arity = 12, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__6_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__6_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__30_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_69_ = lean_unsigned_to_nat(3754153130u);
v___x_70_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__29_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_));
v___x_71_ = l_Lean_Name_num___override(v___x_70_, v___x_69_);
return v___x_71_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__32_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_73_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__31_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_));
v___x_74_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__30_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__30_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__30_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_);
v___x_75_ = l_Lean_Name_str___override(v___x_74_, v___x_73_);
return v___x_75_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__34_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_77_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__33_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_));
v___x_78_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__32_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__32_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__32_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_);
v___x_79_ = l_Lean_Name_str___override(v___x_78_, v___x_77_);
return v___x_79_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__35_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_80_ = lean_unsigned_to_nat(2u);
v___x_81_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__34_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__34_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__34_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_);
v___x_82_ = l_Lean_Name_num___override(v___x_81_, v___x_80_);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_84_; uint8_t v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_84_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_));
v___x_85_ = 0;
v___x_86_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__35_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__35_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__35_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_);
v___x_87_ = l_Lean_registerTraceClass(v___x_84_, v___x_85_, v___x_86_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2____boxed(lean_object* v_a_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_();
return v_res_89_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_95_ = lean_unsigned_to_nat(2531264644u);
v___x_96_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__29_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_));
v___x_97_ = l_Lean_Name_num___override(v___x_96_, v___x_95_);
return v___x_97_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_98_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__31_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_));
v___x_99_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2_);
v___x_100_ = l_Lean_Name_str___override(v___x_99_, v___x_98_);
return v___x_100_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_101_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__33_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_));
v___x_102_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2_);
v___x_103_ = l_Lean_Name_str___override(v___x_102_, v___x_101_);
return v___x_103_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_104_ = lean_unsigned_to_nat(2u);
v___x_105_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2_);
v___x_106_ = l_Lean_Name_num___override(v___x_105_, v___x_104_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_108_; uint8_t v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_108_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2_));
v___x_109_ = 1;
v___x_110_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2_);
v___x_111_ = l_Lean_registerTraceClass(v___x_108_, v___x_109_, v___x_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2____boxed(lean_object* v_a_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2_();
return v_res_113_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_114_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_115_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0___redArg___closed__0);
v___x_116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_116_, 0, v___x_115_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0___redArg(){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0___redArg___closed__1);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v___dummy_119_){
_start:
{
lean_object* v_res_120_; 
v_res_120_ = l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0___redArg();
return v_res_120_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0___closed__0(void){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0___redArg();
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b2_122_){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0___closed__0);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___lam__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2_(lean_object* v___x_124_){
_start:
{
lean_object* v___x_126_; 
v___x_126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_126_, 0, v___x_124_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___lam__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2____boxed(lean_object* v___x_127_, lean_object* v___y_128_){
_start:
{
lean_object* v_res_129_; 
v_res_129_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___lam__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2_(v___x_127_);
return v_res_129_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_130_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0___redArg___closed__0);
v___x_131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_131_, 0, v___x_130_);
return v___x_131_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_132_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2_);
v___x_133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_133_, 0, v___x_132_);
lean_ctor_set(v___x_133_, 1, v___x_132_);
return v___x_133_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; uint8_t v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_134_ = l_Lean_NameSet_empty;
v___x_135_ = lean_box(1);
v___x_136_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2_);
v___x_137_ = 0;
v___x_138_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__spec__0___closed__0);
v___x_139_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2_);
v___x_140_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_140_, 0, v___x_139_);
lean_ctor_set(v___x_140_, 1, v___x_138_);
lean_ctor_set(v___x_140_, 2, v___x_136_);
lean_ctor_set(v___x_140_, 3, v___x_135_);
lean_ctor_set(v___x_140_, 4, v___x_134_);
lean_ctor_set_uint8(v___x_140_, sizeof(void*)*5, v___x_137_);
return v___x_140_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_141_; lean_object* v___f_142_; 
v___x_141_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2_);
v___f_142_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___lam__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_142_, 0, v___x_141_);
return v___f_142_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_144_; lean_object* v___x_145_; 
v___f_144_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2_);
v___x_145_ = l_Lean_Meta_Grind_registerSolverExtension___redArg(v___f_144_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2____boxed(lean_object* v_a_146_){
_start:
{
lean_object* v_res_147_; 
v_res_147_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2_();
return v_res_147_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_init___redArg___lam__0(lean_object* v_a_148_, lean_object* v_a_149_, lean_object* v_a_150_, lean_object* v_s_151_){
_start:
{
lean_object* v_cache_152_; lean_object* v_internalized_153_; lean_object* v___x_155_; uint8_t v_isShared_156_; uint8_t v_isSharedCheck_161_; 
v_cache_152_ = lean_ctor_get(v_s_151_, 0);
v_internalized_153_ = lean_ctor_get(v_s_151_, 1);
v_isSharedCheck_161_ = !lean_is_exclusive(v_s_151_);
if (v_isSharedCheck_161_ == 0)
{
lean_object* v_unused_162_; lean_object* v_unused_163_; lean_object* v_unused_164_; 
v_unused_162_ = lean_ctor_get(v_s_151_, 4);
lean_dec(v_unused_162_);
v_unused_163_ = lean_ctor_get(v_s_151_, 3);
lean_dec(v_unused_163_);
v_unused_164_ = lean_ctor_get(v_s_151_, 2);
lean_dec(v_unused_164_);
v___x_155_ = v_s_151_;
v_isShared_156_ = v_isSharedCheck_161_;
goto v_resetjp_154_;
}
else
{
lean_inc(v_internalized_153_);
lean_inc(v_cache_152_);
lean_dec(v_s_151_);
v___x_155_ = lean_box(0);
v_isShared_156_ = v_isSharedCheck_161_;
goto v_resetjp_154_;
}
v_resetjp_154_:
{
uint8_t v___x_157_; lean_object* v___x_159_; 
v___x_157_ = 1;
if (v_isShared_156_ == 0)
{
lean_ctor_set(v___x_155_, 4, v_a_150_);
lean_ctor_set(v___x_155_, 3, v_a_149_);
lean_ctor_set(v___x_155_, 2, v_a_148_);
v___x_159_ = v___x_155_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v_cache_152_);
lean_ctor_set(v_reuseFailAlloc_160_, 1, v_internalized_153_);
lean_ctor_set(v_reuseFailAlloc_160_, 2, v_a_148_);
lean_ctor_set(v_reuseFailAlloc_160_, 3, v_a_149_);
lean_ctor_set(v_reuseFailAlloc_160_, 4, v_a_150_);
v___x_159_ = v_reuseFailAlloc_160_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
lean_ctor_set_uint8(v___x_159_, sizeof(void*)*5, v___x_157_);
return v___x_159_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_init___redArg(lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_){
_start:
{
lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_169_ = l_Lean_Meta_Grind_Homo_homExt;
v___x_170_ = l_Lean_Meta_Grind_SolverExtension_getState___redArg(v___x_169_, v_a_165_, v_a_166_);
if (lean_obj_tag(v___x_170_) == 0)
{
lean_object* v_a_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_212_; 
v_a_171_ = lean_ctor_get(v___x_170_, 0);
v_isSharedCheck_212_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_212_ == 0)
{
v___x_173_ = v___x_170_;
v_isShared_174_ = v_isSharedCheck_212_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_a_171_);
lean_dec(v___x_170_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_212_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
uint8_t v_initialized_175_; 
v_initialized_175_ = lean_ctor_get_uint8(v_a_171_, sizeof(void*)*5);
lean_dec(v_a_171_);
if (v_initialized_175_ == 0)
{
lean_object* v___x_176_; 
lean_del_object(v___x_173_);
v___x_176_ = l_Lean_Meta_Grind_getHomoTheorems___redArg(v_a_167_);
if (lean_obj_tag(v___x_176_) == 0)
{
lean_object* v_a_177_; lean_object* v___x_178_; 
v_a_177_ = lean_ctor_get(v___x_176_, 0);
lean_inc(v_a_177_);
lean_dec_ref_known(v___x_176_, 1);
v___x_178_ = l_Lean_Meta_Grind_getHomoPredTheorems___redArg(v_a_167_);
if (lean_obj_tag(v___x_178_) == 0)
{
lean_object* v_a_179_; lean_object* v___x_180_; 
v_a_179_ = lean_ctor_get(v___x_178_, 0);
lean_inc(v_a_179_);
lean_dec_ref_known(v___x_178_, 1);
v___x_180_ = l_Lean_Meta_Grind_getHomoSourceTypes___redArg(v_a_167_);
if (lean_obj_tag(v___x_180_) == 0)
{
lean_object* v_a_181_; lean_object* v___f_182_; lean_object* v___x_183_; 
v_a_181_ = lean_ctor_get(v___x_180_, 0);
lean_inc(v_a_181_);
lean_dec_ref_known(v___x_180_, 1);
v___f_182_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_init___redArg___lam__0), 4, 3);
lean_closure_set(v___f_182_, 0, v_a_177_);
lean_closure_set(v___f_182_, 1, v_a_179_);
lean_closure_set(v___f_182_, 2, v_a_181_);
v___x_183_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_169_, v___f_182_, v_a_165_);
return v___x_183_;
}
else
{
lean_object* v_a_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_191_; 
lean_dec(v_a_179_);
lean_dec(v_a_177_);
v_a_184_ = lean_ctor_get(v___x_180_, 0);
v_isSharedCheck_191_ = !lean_is_exclusive(v___x_180_);
if (v_isSharedCheck_191_ == 0)
{
v___x_186_ = v___x_180_;
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_a_184_);
lean_dec(v___x_180_);
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
lean_dec(v_a_177_);
v_a_192_ = lean_ctor_get(v___x_178_, 0);
v_isSharedCheck_199_ = !lean_is_exclusive(v___x_178_);
if (v_isSharedCheck_199_ == 0)
{
v___x_194_ = v___x_178_;
v_isShared_195_ = v_isSharedCheck_199_;
goto v_resetjp_193_;
}
else
{
lean_inc(v_a_192_);
lean_dec(v___x_178_);
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
v_a_200_ = lean_ctor_get(v___x_176_, 0);
v_isSharedCheck_207_ = !lean_is_exclusive(v___x_176_);
if (v_isSharedCheck_207_ == 0)
{
v___x_202_ = v___x_176_;
v_isShared_203_ = v_isSharedCheck_207_;
goto v_resetjp_201_;
}
else
{
lean_inc(v_a_200_);
lean_dec(v___x_176_);
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
else
{
lean_object* v___x_208_; lean_object* v___x_210_; 
v___x_208_ = lean_box(0);
if (v_isShared_174_ == 0)
{
lean_ctor_set(v___x_173_, 0, v___x_208_);
v___x_210_ = v___x_173_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v___x_208_);
v___x_210_ = v_reuseFailAlloc_211_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
return v___x_210_;
}
}
}
}
else
{
lean_object* v_a_213_; lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_220_; 
v_a_213_ = lean_ctor_get(v___x_170_, 0);
v_isSharedCheck_220_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_220_ == 0)
{
v___x_215_ = v___x_170_;
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
else
{
lean_inc(v_a_213_);
lean_dec(v___x_170_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
v_resetjp_214_:
{
lean_object* v___x_218_; 
if (v_isShared_216_ == 0)
{
v___x_218_ = v___x_215_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v_a_213_);
v___x_218_ = v_reuseFailAlloc_219_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
return v___x_218_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_init___redArg___boxed(lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_init___redArg(v_a_221_, v_a_222_, v_a_223_);
lean_dec(v_a_223_);
lean_dec_ref(v_a_222_);
lean_dec(v_a_221_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_init(lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_, lean_object* v_a_229_, lean_object* v_a_230_, lean_object* v_a_231_, lean_object* v_a_232_, lean_object* v_a_233_, lean_object* v_a_234_, lean_object* v_a_235_){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_init___redArg(v_a_226_, v_a_234_, v_a_235_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_init___boxed(lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_, lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_, lean_object* v_a_247_, lean_object* v_a_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_init(v_a_238_, v_a_239_, v_a_240_, v_a_241_, v_a_242_, v_a_243_, v_a_244_, v_a_245_, v_a_246_, v_a_247_);
lean_dec(v_a_247_);
lean_dec_ref(v_a_246_);
lean_dec(v_a_245_);
lean_dec_ref(v_a_244_);
lean_dec(v_a_243_);
lean_dec_ref(v_a_242_);
lean_dec(v_a_241_);
lean_dec_ref(v_a_240_);
lean_dec(v_a_239_);
lean_dec(v_a_238_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getThms___redArg(lean_object* v_a_250_, lean_object* v_a_251_, lean_object* v_a_252_){
_start:
{
lean_object* v___x_254_; 
v___x_254_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_init___redArg(v_a_250_, v_a_251_, v_a_252_);
if (lean_obj_tag(v___x_254_) == 0)
{
lean_object* v___x_255_; lean_object* v___x_256_; 
lean_dec_ref_known(v___x_254_, 1);
v___x_255_ = l_Lean_Meta_Grind_Homo_homExt;
v___x_256_ = l_Lean_Meta_Grind_SolverExtension_getState___redArg(v___x_255_, v_a_250_, v_a_251_);
if (lean_obj_tag(v___x_256_) == 0)
{
lean_object* v_a_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_265_; 
v_a_257_ = lean_ctor_get(v___x_256_, 0);
v_isSharedCheck_265_ = !lean_is_exclusive(v___x_256_);
if (v_isSharedCheck_265_ == 0)
{
v___x_259_ = v___x_256_;
v_isShared_260_ = v_isSharedCheck_265_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_a_257_);
lean_dec(v___x_256_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_265_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
lean_object* v_thms_261_; lean_object* v___x_263_; 
v_thms_261_ = lean_ctor_get(v_a_257_, 2);
lean_inc_ref(v_thms_261_);
lean_dec(v_a_257_);
if (v_isShared_260_ == 0)
{
lean_ctor_set(v___x_259_, 0, v_thms_261_);
v___x_263_ = v___x_259_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v_thms_261_);
v___x_263_ = v_reuseFailAlloc_264_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
return v___x_263_;
}
}
}
else
{
lean_object* v_a_266_; lean_object* v___x_268_; uint8_t v_isShared_269_; uint8_t v_isSharedCheck_273_; 
v_a_266_ = lean_ctor_get(v___x_256_, 0);
v_isSharedCheck_273_ = !lean_is_exclusive(v___x_256_);
if (v_isSharedCheck_273_ == 0)
{
v___x_268_ = v___x_256_;
v_isShared_269_ = v_isSharedCheck_273_;
goto v_resetjp_267_;
}
else
{
lean_inc(v_a_266_);
lean_dec(v___x_256_);
v___x_268_ = lean_box(0);
v_isShared_269_ = v_isSharedCheck_273_;
goto v_resetjp_267_;
}
v_resetjp_267_:
{
lean_object* v___x_271_; 
if (v_isShared_269_ == 0)
{
v___x_271_ = v___x_268_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v_a_266_);
v___x_271_ = v_reuseFailAlloc_272_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
return v___x_271_;
}
}
}
}
else
{
lean_object* v_a_274_; lean_object* v___x_276_; uint8_t v_isShared_277_; uint8_t v_isSharedCheck_281_; 
v_a_274_ = lean_ctor_get(v___x_254_, 0);
v_isSharedCheck_281_ = !lean_is_exclusive(v___x_254_);
if (v_isSharedCheck_281_ == 0)
{
v___x_276_ = v___x_254_;
v_isShared_277_ = v_isSharedCheck_281_;
goto v_resetjp_275_;
}
else
{
lean_inc(v_a_274_);
lean_dec(v___x_254_);
v___x_276_ = lean_box(0);
v_isShared_277_ = v_isSharedCheck_281_;
goto v_resetjp_275_;
}
v_resetjp_275_:
{
lean_object* v___x_279_; 
if (v_isShared_277_ == 0)
{
v___x_279_ = v___x_276_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v_a_274_);
v___x_279_ = v_reuseFailAlloc_280_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
return v___x_279_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getThms___redArg___boxed(lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_a_284_, lean_object* v_a_285_){
_start:
{
lean_object* v_res_286_; 
v_res_286_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getThms___redArg(v_a_282_, v_a_283_, v_a_284_);
lean_dec(v_a_284_);
lean_dec_ref(v_a_283_);
lean_dec(v_a_282_);
return v_res_286_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getThms(lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_, lean_object* v_a_295_, lean_object* v_a_296_){
_start:
{
lean_object* v___x_298_; 
v___x_298_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getThms___redArg(v_a_287_, v_a_295_, v_a_296_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getThms___boxed(lean_object* v_a_299_, lean_object* v_a_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_, lean_object* v_a_307_, lean_object* v_a_308_, lean_object* v_a_309_){
_start:
{
lean_object* v_res_310_; 
v_res_310_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getThms(v_a_299_, v_a_300_, v_a_301_, v_a_302_, v_a_303_, v_a_304_, v_a_305_, v_a_306_, v_a_307_, v_a_308_);
lean_dec(v_a_308_);
lean_dec_ref(v_a_307_);
lean_dec(v_a_306_);
lean_dec_ref(v_a_305_);
lean_dec(v_a_304_);
lean_dec_ref(v_a_303_);
lean_dec(v_a_302_);
lean_dec_ref(v_a_301_);
lean_dec(v_a_300_);
lean_dec(v_a_299_);
return v_res_310_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getPreds___redArg(lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_){
_start:
{
lean_object* v___x_315_; 
v___x_315_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_init___redArg(v_a_311_, v_a_312_, v_a_313_);
if (lean_obj_tag(v___x_315_) == 0)
{
lean_object* v___x_316_; lean_object* v___x_317_; 
lean_dec_ref_known(v___x_315_, 1);
v___x_316_ = l_Lean_Meta_Grind_Homo_homExt;
v___x_317_ = l_Lean_Meta_Grind_SolverExtension_getState___redArg(v___x_316_, v_a_311_, v_a_312_);
if (lean_obj_tag(v___x_317_) == 0)
{
lean_object* v_a_318_; lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_326_; 
v_a_318_ = lean_ctor_get(v___x_317_, 0);
v_isSharedCheck_326_ = !lean_is_exclusive(v___x_317_);
if (v_isSharedCheck_326_ == 0)
{
v___x_320_ = v___x_317_;
v_isShared_321_ = v_isSharedCheck_326_;
goto v_resetjp_319_;
}
else
{
lean_inc(v_a_318_);
lean_dec(v___x_317_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_326_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
lean_object* v_preds_322_; lean_object* v___x_324_; 
v_preds_322_ = lean_ctor_get(v_a_318_, 3);
lean_inc(v_preds_322_);
lean_dec(v_a_318_);
if (v_isShared_321_ == 0)
{
lean_ctor_set(v___x_320_, 0, v_preds_322_);
v___x_324_ = v___x_320_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v_preds_322_);
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
v_a_327_ = lean_ctor_get(v___x_317_, 0);
v_isSharedCheck_334_ = !lean_is_exclusive(v___x_317_);
if (v_isSharedCheck_334_ == 0)
{
v___x_329_ = v___x_317_;
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_a_327_);
lean_dec(v___x_317_);
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
else
{
lean_object* v_a_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_342_; 
v_a_335_ = lean_ctor_get(v___x_315_, 0);
v_isSharedCheck_342_ = !lean_is_exclusive(v___x_315_);
if (v_isSharedCheck_342_ == 0)
{
v___x_337_ = v___x_315_;
v_isShared_338_ = v_isSharedCheck_342_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_a_335_);
lean_dec(v___x_315_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_342_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v___x_340_; 
if (v_isShared_338_ == 0)
{
v___x_340_ = v___x_337_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v_a_335_);
v___x_340_ = v_reuseFailAlloc_341_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
return v___x_340_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getPreds___redArg___boxed(lean_object* v_a_343_, lean_object* v_a_344_, lean_object* v_a_345_, lean_object* v_a_346_){
_start:
{
lean_object* v_res_347_; 
v_res_347_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getPreds___redArg(v_a_343_, v_a_344_, v_a_345_);
lean_dec(v_a_345_);
lean_dec_ref(v_a_344_);
lean_dec(v_a_343_);
return v_res_347_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getPreds(lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_, lean_object* v_a_352_, lean_object* v_a_353_, lean_object* v_a_354_, lean_object* v_a_355_, lean_object* v_a_356_, lean_object* v_a_357_){
_start:
{
lean_object* v___x_359_; 
v___x_359_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getPreds___redArg(v_a_348_, v_a_356_, v_a_357_);
return v___x_359_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getPreds___boxed(lean_object* v_a_360_, lean_object* v_a_361_, lean_object* v_a_362_, lean_object* v_a_363_, lean_object* v_a_364_, lean_object* v_a_365_, lean_object* v_a_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_){
_start:
{
lean_object* v_res_371_; 
v_res_371_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getPreds(v_a_360_, v_a_361_, v_a_362_, v_a_363_, v_a_364_, v_a_365_, v_a_366_, v_a_367_, v_a_368_, v_a_369_);
lean_dec(v_a_369_);
lean_dec_ref(v_a_368_);
lean_dec(v_a_367_);
lean_dec_ref(v_a_366_);
lean_dec(v_a_365_);
lean_dec_ref(v_a_364_);
lean_dec(v_a_363_);
lean_dec_ref(v_a_362_);
lean_dec(v_a_361_);
lean_dec(v_a_360_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getSourceTypes___redArg(lean_object* v_a_372_, lean_object* v_a_373_, lean_object* v_a_374_){
_start:
{
lean_object* v___x_376_; 
v___x_376_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_init___redArg(v_a_372_, v_a_373_, v_a_374_);
if (lean_obj_tag(v___x_376_) == 0)
{
lean_object* v___x_377_; lean_object* v___x_378_; 
lean_dec_ref_known(v___x_376_, 1);
v___x_377_ = l_Lean_Meta_Grind_Homo_homExt;
v___x_378_ = l_Lean_Meta_Grind_SolverExtension_getState___redArg(v___x_377_, v_a_372_, v_a_373_);
if (lean_obj_tag(v___x_378_) == 0)
{
lean_object* v_a_379_; lean_object* v___x_381_; uint8_t v_isShared_382_; uint8_t v_isSharedCheck_387_; 
v_a_379_ = lean_ctor_get(v___x_378_, 0);
v_isSharedCheck_387_ = !lean_is_exclusive(v___x_378_);
if (v_isSharedCheck_387_ == 0)
{
v___x_381_ = v___x_378_;
v_isShared_382_ = v_isSharedCheck_387_;
goto v_resetjp_380_;
}
else
{
lean_inc(v_a_379_);
lean_dec(v___x_378_);
v___x_381_ = lean_box(0);
v_isShared_382_ = v_isSharedCheck_387_;
goto v_resetjp_380_;
}
v_resetjp_380_:
{
lean_object* v_sourceTypes_383_; lean_object* v___x_385_; 
v_sourceTypes_383_ = lean_ctor_get(v_a_379_, 4);
lean_inc(v_sourceTypes_383_);
lean_dec(v_a_379_);
if (v_isShared_382_ == 0)
{
lean_ctor_set(v___x_381_, 0, v_sourceTypes_383_);
v___x_385_ = v___x_381_;
goto v_reusejp_384_;
}
else
{
lean_object* v_reuseFailAlloc_386_; 
v_reuseFailAlloc_386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_386_, 0, v_sourceTypes_383_);
v___x_385_ = v_reuseFailAlloc_386_;
goto v_reusejp_384_;
}
v_reusejp_384_:
{
return v___x_385_;
}
}
}
else
{
lean_object* v_a_388_; lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_395_; 
v_a_388_ = lean_ctor_get(v___x_378_, 0);
v_isSharedCheck_395_ = !lean_is_exclusive(v___x_378_);
if (v_isSharedCheck_395_ == 0)
{
v___x_390_ = v___x_378_;
v_isShared_391_ = v_isSharedCheck_395_;
goto v_resetjp_389_;
}
else
{
lean_inc(v_a_388_);
lean_dec(v___x_378_);
v___x_390_ = lean_box(0);
v_isShared_391_ = v_isSharedCheck_395_;
goto v_resetjp_389_;
}
v_resetjp_389_:
{
lean_object* v___x_393_; 
if (v_isShared_391_ == 0)
{
v___x_393_ = v___x_390_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v_a_388_);
v___x_393_ = v_reuseFailAlloc_394_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
return v___x_393_;
}
}
}
}
else
{
lean_object* v_a_396_; lean_object* v___x_398_; uint8_t v_isShared_399_; uint8_t v_isSharedCheck_403_; 
v_a_396_ = lean_ctor_get(v___x_376_, 0);
v_isSharedCheck_403_ = !lean_is_exclusive(v___x_376_);
if (v_isSharedCheck_403_ == 0)
{
v___x_398_ = v___x_376_;
v_isShared_399_ = v_isSharedCheck_403_;
goto v_resetjp_397_;
}
else
{
lean_inc(v_a_396_);
lean_dec(v___x_376_);
v___x_398_ = lean_box(0);
v_isShared_399_ = v_isSharedCheck_403_;
goto v_resetjp_397_;
}
v_resetjp_397_:
{
lean_object* v___x_401_; 
if (v_isShared_399_ == 0)
{
v___x_401_ = v___x_398_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v_a_396_);
v___x_401_ = v_reuseFailAlloc_402_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
return v___x_401_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getSourceTypes___redArg___boxed(lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_){
_start:
{
lean_object* v_res_408_; 
v_res_408_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getSourceTypes___redArg(v_a_404_, v_a_405_, v_a_406_);
lean_dec(v_a_406_);
lean_dec_ref(v_a_405_);
lean_dec(v_a_404_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getSourceTypes(lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_){
_start:
{
lean_object* v___x_420_; 
v___x_420_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getSourceTypes___redArg(v_a_409_, v_a_417_, v_a_418_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getSourceTypes___boxed(lean_object* v_a_421_, lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_, lean_object* v_a_430_, lean_object* v_a_431_){
_start:
{
lean_object* v_res_432_; 
v_res_432_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getSourceTypes(v_a_421_, v_a_422_, v_a_423_, v_a_424_, v_a_425_, v_a_426_, v_a_427_, v_a_428_, v_a_429_, v_a_430_);
lean_dec(v_a_430_);
lean_dec_ref(v_a_429_);
lean_dec(v_a_428_);
lean_dec_ref(v_a_427_);
lean_dec(v_a_426_);
lean_dec_ref(v_a_425_);
lean_dec(v_a_424_);
lean_dec_ref(v_a_423_);
lean_dec(v_a_422_);
lean_dec(v_a_421_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_markSourceTerm(lean_object* v_e_433_, lean_object* v_a_434_, lean_object* v_a_435_, lean_object* v_a_436_, lean_object* v_a_437_, lean_object* v_a_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_, lean_object* v_a_442_, lean_object* v_a_443_){
_start:
{
lean_object* v___x_448_; 
v___x_448_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getSourceTypes___redArg(v_a_434_, v_a_442_, v_a_443_);
if (lean_obj_tag(v___x_448_) == 0)
{
lean_object* v_a_449_; 
v_a_449_ = lean_ctor_get(v___x_448_, 0);
lean_inc(v_a_449_);
lean_dec_ref_known(v___x_448_, 1);
if (lean_obj_tag(v_a_449_) == 0)
{
lean_object* v___x_450_; 
lean_inc_ref(v_e_433_);
v___x_450_ = l_Lean_Meta_Sym_inferType(v_e_433_, v_a_438_, v_a_439_, v_a_440_, v_a_441_, v_a_442_, v_a_443_);
if (lean_obj_tag(v___x_450_) == 0)
{
lean_object* v_a_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_464_; 
v_a_451_ = lean_ctor_get(v___x_450_, 0);
v_isSharedCheck_464_ = !lean_is_exclusive(v___x_450_);
if (v_isSharedCheck_464_ == 0)
{
v___x_453_ = v___x_450_;
v_isShared_454_ = v_isSharedCheck_464_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_a_451_);
lean_dec(v___x_450_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_464_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
lean_object* v___x_455_; 
v___x_455_ = l_Lean_Expr_getAppFn(v_a_451_);
lean_dec(v_a_451_);
if (lean_obj_tag(v___x_455_) == 4)
{
lean_object* v_declName_456_; uint8_t v___x_457_; 
lean_del_object(v___x_453_);
v_declName_456_ = lean_ctor_get(v___x_455_, 0);
lean_inc(v_declName_456_);
lean_dec_ref_known(v___x_455_, 2);
v___x_457_ = l_Lean_NameSet_contains(v_a_449_, v_declName_456_);
lean_dec(v_declName_456_);
lean_dec_ref_known(v_a_449_, 5);
if (v___x_457_ == 0)
{
lean_dec_ref(v_e_433_);
goto v___jp_445_;
}
else
{
lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_458_ = l_Lean_Meta_Grind_Homo_homExt;
v___x_459_ = l_Lean_Meta_Grind_SolverExtension_markTerm___redArg(v___x_458_, v_e_433_, v_a_434_, v_a_435_, v_a_436_, v_a_437_, v_a_438_, v_a_439_, v_a_440_, v_a_441_, v_a_442_, v_a_443_);
return v___x_459_;
}
}
else
{
lean_object* v___x_460_; lean_object* v___x_462_; 
lean_dec_ref(v___x_455_);
lean_dec_ref_known(v_a_449_, 5);
lean_dec_ref(v_e_433_);
v___x_460_ = lean_box(0);
if (v_isShared_454_ == 0)
{
lean_ctor_set(v___x_453_, 0, v___x_460_);
v___x_462_ = v___x_453_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v___x_460_);
v___x_462_ = v_reuseFailAlloc_463_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
return v___x_462_;
}
}
}
}
else
{
lean_object* v_a_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_472_; 
lean_dec_ref_known(v_a_449_, 5);
lean_dec_ref(v_e_433_);
v_a_465_ = lean_ctor_get(v___x_450_, 0);
v_isSharedCheck_472_ = !lean_is_exclusive(v___x_450_);
if (v_isSharedCheck_472_ == 0)
{
v___x_467_ = v___x_450_;
v_isShared_468_ = v_isSharedCheck_472_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_a_465_);
lean_dec(v___x_450_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_472_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v___x_470_; 
if (v_isShared_468_ == 0)
{
v___x_470_ = v___x_467_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v_a_465_);
v___x_470_ = v_reuseFailAlloc_471_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
return v___x_470_;
}
}
}
}
else
{
lean_dec_ref(v_e_433_);
goto v___jp_445_;
}
}
else
{
lean_object* v_a_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_480_; 
lean_dec_ref(v_e_433_);
v_a_473_ = lean_ctor_get(v___x_448_, 0);
v_isSharedCheck_480_ = !lean_is_exclusive(v___x_448_);
if (v_isSharedCheck_480_ == 0)
{
v___x_475_ = v___x_448_;
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_a_473_);
lean_dec(v___x_448_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_478_; 
if (v_isShared_476_ == 0)
{
v___x_478_ = v___x_475_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v_a_473_);
v___x_478_ = v_reuseFailAlloc_479_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
return v___x_478_;
}
}
}
v___jp_445_:
{
lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_446_ = lean_box(0);
v___x_447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_447_, 0, v___x_446_);
return v___x_447_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_markSourceTerm___boxed(lean_object* v_e_481_, lean_object* v_a_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_, lean_object* v_a_490_, lean_object* v_a_491_, lean_object* v_a_492_){
_start:
{
lean_object* v_res_493_; 
v_res_493_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_markSourceTerm(v_e_481_, v_a_482_, v_a_483_, v_a_484_, v_a_485_, v_a_486_, v_a_487_, v_a_488_, v_a_489_, v_a_490_, v_a_491_);
lean_dec(v_a_491_);
lean_dec_ref(v_a_490_);
lean_dec(v_a_489_);
lean_dec_ref(v_a_488_);
lean_dec(v_a_487_);
lean_dec_ref(v_a_486_);
lean_dec(v_a_485_);
lean_dec_ref(v_a_484_);
lean_dec(v_a_483_);
lean_dec(v_a_482_);
return v_res_493_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0_spec__0(lean_object* v_msgData_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_){
_start:
{
lean_object* v___x_500_; lean_object* v_env_501_; uint8_t v___x_502_; lean_object* v_env_503_; lean_object* v___x_504_; lean_object* v_toCold_505_; lean_object* v_mctx_506_; lean_object* v_lctx_507_; lean_object* v_options_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; 
v___x_500_ = lean_st_ref_get(v___y_498_);
v_env_501_ = lean_ctor_get(v___x_500_, 0);
lean_inc_ref(v_env_501_);
lean_dec(v___x_500_);
v___x_502_ = 0;
v_env_503_ = l_Lean_Environment_setRecordingDeps(v_env_501_, v___x_502_);
v___x_504_ = lean_st_ref_get(v___y_496_);
v_toCold_505_ = lean_ctor_get(v___y_497_, 0);
v_mctx_506_ = lean_ctor_get(v___x_504_, 0);
lean_inc_ref(v_mctx_506_);
lean_dec(v___x_504_);
v_lctx_507_ = lean_ctor_get(v___y_495_, 2);
v_options_508_ = lean_ctor_get(v_toCold_505_, 2);
lean_inc_ref(v_options_508_);
lean_inc_ref(v_lctx_507_);
v___x_509_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_509_, 0, v_env_503_);
lean_ctor_set(v___x_509_, 1, v_mctx_506_);
lean_ctor_set(v___x_509_, 2, v_lctx_507_);
lean_ctor_set(v___x_509_, 3, v_options_508_);
v___x_510_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_510_, 0, v___x_509_);
lean_ctor_set(v___x_510_, 1, v_msgData_494_);
v___x_511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_511_, 0, v___x_510_);
return v___x_511_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0_spec__0___boxed(lean_object* v_msgData_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0_spec__0(v_msgData_512_, v___y_513_, v___y_514_, v___y_515_, v___y_516_);
lean_dec(v___y_516_);
lean_dec_ref(v___y_515_);
lean_dec(v___y_514_);
lean_dec_ref(v___y_513_);
return v_res_518_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_519_; double v___x_520_; 
v___x_519_ = lean_unsigned_to_nat(0u);
v___x_520_ = lean_float_of_nat(v___x_519_);
return v___x_520_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0___redArg(lean_object* v_cls_524_, lean_object* v_msg_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_){
_start:
{
lean_object* v_ref_531_; lean_object* v___x_532_; lean_object* v_a_533_; lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_578_; 
v_ref_531_ = lean_ctor_get(v___y_528_, 2);
v___x_532_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0_spec__0(v_msg_525_, v___y_526_, v___y_527_, v___y_528_, v___y_529_);
v_a_533_ = lean_ctor_get(v___x_532_, 0);
v_isSharedCheck_578_ = !lean_is_exclusive(v___x_532_);
if (v_isSharedCheck_578_ == 0)
{
v___x_535_ = v___x_532_;
v_isShared_536_ = v_isSharedCheck_578_;
goto v_resetjp_534_;
}
else
{
lean_inc(v_a_533_);
lean_dec(v___x_532_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_578_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
lean_object* v___x_537_; lean_object* v_traceState_538_; lean_object* v_env_539_; lean_object* v_nextMacroScope_540_; lean_object* v_ngen_541_; lean_object* v_auxDeclNGen_542_; lean_object* v_cache_543_; lean_object* v_recordedDeps_544_; lean_object* v_messages_545_; lean_object* v_infoState_546_; lean_object* v_snapshotTasks_547_; lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_577_; 
v___x_537_ = lean_st_ref_take(v___y_529_);
v_traceState_538_ = lean_ctor_get(v___x_537_, 4);
v_env_539_ = lean_ctor_get(v___x_537_, 0);
v_nextMacroScope_540_ = lean_ctor_get(v___x_537_, 1);
v_ngen_541_ = lean_ctor_get(v___x_537_, 2);
v_auxDeclNGen_542_ = lean_ctor_get(v___x_537_, 3);
v_cache_543_ = lean_ctor_get(v___x_537_, 5);
v_recordedDeps_544_ = lean_ctor_get(v___x_537_, 6);
v_messages_545_ = lean_ctor_get(v___x_537_, 7);
v_infoState_546_ = lean_ctor_get(v___x_537_, 8);
v_snapshotTasks_547_ = lean_ctor_get(v___x_537_, 9);
v_isSharedCheck_577_ = !lean_is_exclusive(v___x_537_);
if (v_isSharedCheck_577_ == 0)
{
v___x_549_ = v___x_537_;
v_isShared_550_ = v_isSharedCheck_577_;
goto v_resetjp_548_;
}
else
{
lean_inc(v_snapshotTasks_547_);
lean_inc(v_infoState_546_);
lean_inc(v_messages_545_);
lean_inc(v_recordedDeps_544_);
lean_inc(v_cache_543_);
lean_inc(v_traceState_538_);
lean_inc(v_auxDeclNGen_542_);
lean_inc(v_ngen_541_);
lean_inc(v_nextMacroScope_540_);
lean_inc(v_env_539_);
lean_dec(v___x_537_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_577_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
uint64_t v_tid_551_; lean_object* v_traces_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_576_; 
v_tid_551_ = lean_ctor_get_uint64(v_traceState_538_, sizeof(void*)*1);
v_traces_552_ = lean_ctor_get(v_traceState_538_, 0);
v_isSharedCheck_576_ = !lean_is_exclusive(v_traceState_538_);
if (v_isSharedCheck_576_ == 0)
{
v___x_554_ = v_traceState_538_;
v_isShared_555_ = v_isSharedCheck_576_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_traces_552_);
lean_dec(v_traceState_538_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_576_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___x_556_; lean_object* v___x_557_; double v___x_558_; uint8_t v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_567_; 
v___x_556_ = lean_box(0);
v___x_557_ = lean_box(0);
v___x_558_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0___redArg___closed__0);
v___x_559_ = 0;
v___x_560_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0___redArg___closed__1));
v___x_561_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_561_, 0, v_cls_524_);
lean_ctor_set(v___x_561_, 1, v___x_557_);
lean_ctor_set(v___x_561_, 2, v___x_560_);
lean_ctor_set_float(v___x_561_, sizeof(void*)*3, v___x_558_);
lean_ctor_set_float(v___x_561_, sizeof(void*)*3 + 8, v___x_558_);
lean_ctor_set_uint8(v___x_561_, sizeof(void*)*3 + 16, v___x_559_);
v___x_562_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0___redArg___closed__2));
v___x_563_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_563_, 0, v___x_561_);
lean_ctor_set(v___x_563_, 1, v_a_533_);
lean_ctor_set(v___x_563_, 2, v___x_562_);
lean_inc(v_ref_531_);
v___x_564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_564_, 0, v_ref_531_);
lean_ctor_set(v___x_564_, 1, v___x_563_);
v___x_565_ = l_Lean_PersistentArray_push___redArg(v_traces_552_, v___x_564_);
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 0, v___x_565_);
v___x_567_ = v___x_554_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v___x_565_);
lean_ctor_set_uint64(v_reuseFailAlloc_575_, sizeof(void*)*1, v_tid_551_);
v___x_567_ = v_reuseFailAlloc_575_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
lean_object* v___x_569_; 
if (v_isShared_550_ == 0)
{
lean_ctor_set(v___x_549_, 4, v___x_567_);
v___x_569_ = v___x_549_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v_env_539_);
lean_ctor_set(v_reuseFailAlloc_574_, 1, v_nextMacroScope_540_);
lean_ctor_set(v_reuseFailAlloc_574_, 2, v_ngen_541_);
lean_ctor_set(v_reuseFailAlloc_574_, 3, v_auxDeclNGen_542_);
lean_ctor_set(v_reuseFailAlloc_574_, 4, v___x_567_);
lean_ctor_set(v_reuseFailAlloc_574_, 5, v_cache_543_);
lean_ctor_set(v_reuseFailAlloc_574_, 6, v_recordedDeps_544_);
lean_ctor_set(v_reuseFailAlloc_574_, 7, v_messages_545_);
lean_ctor_set(v_reuseFailAlloc_574_, 8, v_infoState_546_);
lean_ctor_set(v_reuseFailAlloc_574_, 9, v_snapshotTasks_547_);
v___x_569_ = v_reuseFailAlloc_574_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
lean_object* v___x_570_; lean_object* v___x_572_; 
v___x_570_ = lean_st_ref_put(v___y_529_, v___x_569_);
if (v_isShared_536_ == 0)
{
lean_ctor_set(v___x_535_, 0, v___x_556_);
v___x_572_ = v___x_535_;
goto v_reusejp_571_;
}
else
{
lean_object* v_reuseFailAlloc_573_; 
v_reuseFailAlloc_573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_573_, 0, v___x_556_);
v___x_572_ = v_reuseFailAlloc_573_;
goto v_reusejp_571_;
}
v_reusejp_571_:
{
return v___x_572_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0___redArg___boxed(lean_object* v_cls_579_, lean_object* v_msg_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_){
_start:
{
lean_object* v_res_586_; 
v_res_586_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0___redArg(v_cls_579_, v_msg_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_);
lean_dec(v___y_584_);
lean_dec_ref(v___y_583_);
lean_dec(v___y_582_);
lean_dec_ref(v___y_581_);
return v_res_586_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__1___closed__2(void){
_start:
{
lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_590_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2_));
v___x_591_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__1___closed__1));
v___x_592_ = l_Lean_Name_append(v___x_591_, v___x_590_);
return v___x_592_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__1(lean_object* v_generation_593_, lean_object* v_as_594_, size_t v_sz_595_, size_t v_i_596_, lean_object* v_b_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_){
_start:
{
uint8_t v___x_609_; 
v___x_609_ = lean_usize_dec_lt(v_i_596_, v_sz_595_);
if (v___x_609_ == 0)
{
lean_object* v___x_610_; 
lean_dec(v_generation_593_);
v___x_610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_610_, 0, v_b_597_);
return v___x_610_;
}
else
{
lean_object* v_a_611_; lean_object* v_toCold_612_; lean_object* v_options_613_; lean_object* v_fst_614_; lean_object* v_snd_615_; lean_object* v_inheritedTraceOptions_616_; uint8_t v_hasTrace_617_; lean_object* v___x_618_; lean_object* v___y_620_; lean_object* v___y_621_; lean_object* v___y_622_; lean_object* v___y_623_; lean_object* v___y_624_; lean_object* v___y_625_; 
v_a_611_ = lean_array_uget_borrowed(v_as_594_, v_i_596_);
v_toCold_612_ = lean_ctor_get(v___y_606_, 0);
v_options_613_ = lean_ctor_get(v_toCold_612_, 2);
v_fst_614_ = lean_ctor_get(v_a_611_, 0);
v_snd_615_ = lean_ctor_get(v_a_611_, 1);
v_inheritedTraceOptions_616_ = lean_ctor_get(v_toCold_612_, 11);
v_hasTrace_617_ = lean_ctor_get_uint8(v_options_613_, sizeof(void*)*1);
v___x_618_ = lean_box(0);
if (v_hasTrace_617_ == 0)
{
v___y_620_ = v___y_598_;
v___y_621_ = v___y_600_;
v___y_622_ = v___y_604_;
v___y_623_ = v___y_605_;
v___y_624_ = v___y_606_;
v___y_625_ = v___y_607_;
goto v___jp_619_;
}
else
{
lean_object* v___x_632_; lean_object* v___x_633_; uint8_t v___x_634_; 
v___x_632_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2_));
v___x_633_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__1___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__1___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__1___closed__2);
v___x_634_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_616_, v_options_613_, v___x_633_);
if (v___x_634_ == 0)
{
v___y_620_ = v___y_598_;
v___y_621_ = v___y_600_;
v___y_622_ = v___y_604_;
v___y_623_ = v___y_605_;
v___y_624_ = v___y_606_;
v___y_625_ = v___y_607_;
goto v___jp_619_;
}
else
{
lean_object* v___x_635_; 
v___x_635_ = l_Lean_Meta_Grind_updateLastTag(v___y_598_, v___y_599_, v___y_600_, v___y_601_, v___y_602_, v___y_603_, v___y_604_, v___y_605_, v___y_606_, v___y_607_);
if (lean_obj_tag(v___x_635_) == 0)
{
lean_object* v___x_636_; lean_object* v___x_637_; 
lean_dec_ref_known(v___x_635_, 1);
lean_inc(v_snd_615_);
v___x_636_ = l_Lean_MessageData_ofExpr(v_snd_615_);
v___x_637_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0___redArg(v___x_632_, v___x_636_, v___y_604_, v___y_605_, v___y_606_, v___y_607_);
if (lean_obj_tag(v___x_637_) == 0)
{
lean_dec_ref_known(v___x_637_, 1);
v___y_620_ = v___y_598_;
v___y_621_ = v___y_600_;
v___y_622_ = v___y_604_;
v___y_623_ = v___y_605_;
v___y_624_ = v___y_606_;
v___y_625_ = v___y_607_;
goto v___jp_619_;
}
else
{
lean_dec(v_generation_593_);
return v___x_637_;
}
}
else
{
lean_dec(v_generation_593_);
return v___x_635_;
}
}
}
v___jp_619_:
{
lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_626_ = lean_box(6);
v___x_627_ = lean_box(1);
lean_inc(v_generation_593_);
lean_inc(v_snd_615_);
lean_inc(v_fst_614_);
v___x_628_ = l_Lean_Meta_Grind_addNewRawFact___redArg(v_fst_614_, v_snd_615_, v_generation_593_, v___x_626_, v___x_627_, v___y_620_, v___y_621_, v___y_622_, v___y_623_, v___y_624_, v___y_625_);
if (lean_obj_tag(v___x_628_) == 0)
{
size_t v___x_629_; size_t v___x_630_; 
lean_dec_ref_known(v___x_628_, 1);
v___x_629_ = ((size_t)1ULL);
v___x_630_ = lean_usize_add(v_i_596_, v___x_629_);
v_i_596_ = v___x_630_;
v_b_597_ = v___x_618_;
goto _start;
}
else
{
lean_dec(v_generation_593_);
return v___x_628_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__1___boxed(lean_object* v_generation_638_, lean_object* v_as_639_, lean_object* v_sz_640_, lean_object* v_i_641_, lean_object* v_b_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_){
_start:
{
size_t v_sz_boxed_654_; size_t v_i_boxed_655_; lean_object* v_res_656_; 
v_sz_boxed_654_ = lean_unbox_usize(v_sz_640_);
lean_dec(v_sz_640_);
v_i_boxed_655_ = lean_unbox_usize(v_i_641_);
lean_dec(v_i_641_);
v_res_656_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__1(v_generation_638_, v_as_639_, v_sz_boxed_654_, v_i_boxed_655_, v_b_642_, v___y_643_, v___y_644_, v___y_645_, v___y_646_, v___y_647_, v___y_648_, v___y_649_, v___y_650_, v___y_651_, v___y_652_);
lean_dec(v___y_652_);
lean_dec_ref(v___y_651_);
lean_dec(v___y_650_);
lean_dec_ref(v___y_649_);
lean_dec(v___y_648_);
lean_dec_ref(v___y_647_);
lean_dec(v___y_646_);
lean_dec_ref(v___y_645_);
lean_dec(v___y_644_);
lean_dec(v___y_643_);
lean_dec_ref(v_as_639_);
return v_res_656_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds(lean_object* v_e_657_, lean_object* v_generation_658_, lean_object* v_a_659_, lean_object* v_a_660_, lean_object* v_a_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_, lean_object* v_a_666_, lean_object* v_a_667_, lean_object* v_a_668_){
_start:
{
lean_object* v___x_670_; 
v___x_670_ = l_Lean_Expr_getAppFn(v_e_657_);
if (lean_obj_tag(v___x_670_) == 4)
{
lean_object* v_declName_671_; lean_object* v___x_672_; 
v_declName_671_ = lean_ctor_get(v___x_670_, 0);
lean_inc(v_declName_671_);
lean_dec_ref_known(v___x_670_, 2);
v___x_672_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getPreds___redArg(v_a_659_, v_a_667_, v_a_668_);
if (lean_obj_tag(v___x_672_) == 0)
{
lean_object* v_a_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_704_; 
v_a_673_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_704_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_704_ == 0)
{
v___x_675_ = v___x_672_;
v_isShared_676_ = v_isSharedCheck_704_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_a_673_);
lean_dec(v___x_672_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_704_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
uint8_t v___x_677_; 
v___x_677_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(v_declName_671_, v_a_673_);
lean_dec(v_a_673_);
lean_dec(v_declName_671_);
if (v___x_677_ == 0)
{
lean_object* v___x_678_; lean_object* v___x_680_; 
lean_dec(v_generation_658_);
lean_dec_ref(v_e_657_);
v___x_678_ = lean_box(0);
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 0, v___x_678_);
v___x_680_ = v___x_675_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v___x_678_);
v___x_680_ = v_reuseFailAlloc_681_;
goto v_reusejp_679_;
}
v_reusejp_679_:
{
return v___x_680_;
}
}
else
{
lean_object* v___x_682_; 
lean_del_object(v___x_675_);
v___x_682_ = l_Lean_Meta_Grind_mkHomoPredInstances(v_e_657_, v_a_665_, v_a_666_, v_a_667_, v_a_668_);
if (lean_obj_tag(v___x_682_) == 0)
{
lean_object* v_a_683_; lean_object* v___x_684_; size_t v_sz_685_; size_t v___x_686_; lean_object* v___x_687_; 
v_a_683_ = lean_ctor_get(v___x_682_, 0);
lean_inc(v_a_683_);
lean_dec_ref_known(v___x_682_, 1);
v___x_684_ = lean_box(0);
v_sz_685_ = lean_array_size(v_a_683_);
v___x_686_ = ((size_t)0ULL);
v___x_687_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__1(v_generation_658_, v_a_683_, v_sz_685_, v___x_686_, v___x_684_, v_a_659_, v_a_660_, v_a_661_, v_a_662_, v_a_663_, v_a_664_, v_a_665_, v_a_666_, v_a_667_, v_a_668_);
lean_dec(v_a_683_);
if (lean_obj_tag(v___x_687_) == 0)
{
lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_694_; 
v_isSharedCheck_694_ = !lean_is_exclusive(v___x_687_);
if (v_isSharedCheck_694_ == 0)
{
lean_object* v_unused_695_; 
v_unused_695_ = lean_ctor_get(v___x_687_, 0);
lean_dec(v_unused_695_);
v___x_689_ = v___x_687_;
v_isShared_690_ = v_isSharedCheck_694_;
goto v_resetjp_688_;
}
else
{
lean_dec(v___x_687_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_694_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
lean_object* v___x_692_; 
if (v_isShared_690_ == 0)
{
lean_ctor_set(v___x_689_, 0, v___x_684_);
v___x_692_ = v___x_689_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v___x_684_);
v___x_692_ = v_reuseFailAlloc_693_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
return v___x_692_;
}
}
}
else
{
return v___x_687_;
}
}
else
{
lean_object* v_a_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_703_; 
lean_dec(v_generation_658_);
v_a_696_ = lean_ctor_get(v___x_682_, 0);
v_isSharedCheck_703_ = !lean_is_exclusive(v___x_682_);
if (v_isSharedCheck_703_ == 0)
{
v___x_698_ = v___x_682_;
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_a_696_);
lean_dec(v___x_682_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v___x_701_; 
if (v_isShared_699_ == 0)
{
v___x_701_ = v___x_698_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v_a_696_);
v___x_701_ = v_reuseFailAlloc_702_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
return v___x_701_;
}
}
}
}
}
}
else
{
lean_object* v_a_705_; lean_object* v___x_707_; uint8_t v_isShared_708_; uint8_t v_isSharedCheck_712_; 
lean_dec(v_declName_671_);
lean_dec(v_generation_658_);
lean_dec_ref(v_e_657_);
v_a_705_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_712_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_712_ == 0)
{
v___x_707_ = v___x_672_;
v_isShared_708_ = v_isSharedCheck_712_;
goto v_resetjp_706_;
}
else
{
lean_inc(v_a_705_);
lean_dec(v___x_672_);
v___x_707_ = lean_box(0);
v_isShared_708_ = v_isSharedCheck_712_;
goto v_resetjp_706_;
}
v_resetjp_706_:
{
lean_object* v___x_710_; 
if (v_isShared_708_ == 0)
{
v___x_710_ = v___x_707_;
goto v_reusejp_709_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v_a_705_);
v___x_710_ = v_reuseFailAlloc_711_;
goto v_reusejp_709_;
}
v_reusejp_709_:
{
return v___x_710_;
}
}
}
}
else
{
lean_object* v___x_713_; lean_object* v___x_714_; 
lean_dec_ref(v___x_670_);
lean_dec(v_generation_658_);
lean_dec_ref(v_e_657_);
v___x_713_ = lean_box(0);
v___x_714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_714_, 0, v___x_713_);
return v___x_714_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds___boxed(lean_object* v_e_715_, lean_object* v_generation_716_, lean_object* v_a_717_, lean_object* v_a_718_, lean_object* v_a_719_, lean_object* v_a_720_, lean_object* v_a_721_, lean_object* v_a_722_, lean_object* v_a_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_){
_start:
{
lean_object* v_res_728_; 
v_res_728_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds(v_e_715_, v_generation_716_, v_a_717_, v_a_718_, v_a_719_, v_a_720_, v_a_721_, v_a_722_, v_a_723_, v_a_724_, v_a_725_, v_a_726_);
lean_dec(v_a_726_);
lean_dec_ref(v_a_725_);
lean_dec(v_a_724_);
lean_dec_ref(v_a_723_);
lean_dec(v_a_722_);
lean_dec_ref(v_a_721_);
lean_dec(v_a_720_);
lean_dec_ref(v_a_719_);
lean_dec(v_a_718_);
lean_dec(v_a_717_);
return v_res_728_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0(lean_object* v_cls_729_, lean_object* v_msg_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_){
_start:
{
lean_object* v___x_742_; 
v___x_742_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0___redArg(v_cls_729_, v_msg_730_, v___y_737_, v___y_738_, v___y_739_, v___y_740_);
return v___x_742_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0___boxed(lean_object* v_cls_743_, lean_object* v_msg_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_){
_start:
{
lean_object* v_res_756_; 
v_res_756_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0(v_cls_743_, v_msg_744_, v___y_745_, v___y_746_, v___y_747_, v___y_748_, v___y_749_, v___y_750_, v___y_751_, v___y_752_, v___y_753_, v___y_754_);
lean_dec(v___y_754_);
lean_dec_ref(v___y_753_);
lean_dec(v___y_752_);
lean_dec_ref(v___y_751_);
lean_dec(v___y_750_);
lean_dec_ref(v___y_749_);
lean_dec(v___y_748_);
lean_dec_ref(v___y_747_);
lean_dec(v___y_746_);
lean_dec(v___y_745_);
return v_res_756_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_maskOnesZeros_x3f(lean_object* v_c_757_){
_start:
{
lean_object* v___x_758_; uint8_t v___x_759_; 
v___x_758_ = lean_unsigned_to_nat(0u);
v___x_759_ = lean_nat_dec_eq(v_c_757_, v___x_758_);
if (v___x_759_ == 0)
{
lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; uint8_t v___x_769_; 
v___x_760_ = lean_unsigned_to_nat(1u);
v___x_761_ = lean_nat_sub(v_c_757_, v___x_760_);
v___x_762_ = lean_nat_lxor(v_c_757_, v___x_761_);
lean_dec(v___x_761_);
v___x_763_ = lean_nat_log2(v___x_762_);
lean_dec(v___x_762_);
v___x_764_ = lean_nat_shiftr(v_c_757_, v___x_763_);
v___x_765_ = lean_nat_log2(v___x_764_);
v___x_766_ = lean_nat_add(v___x_765_, v___x_760_);
lean_dec(v___x_765_);
v___x_767_ = lean_nat_add(v___x_764_, v___x_760_);
lean_dec(v___x_764_);
v___x_768_ = lean_nat_shiftl(v___x_760_, v___x_766_);
v___x_769_ = lean_nat_dec_eq(v___x_767_, v___x_768_);
lean_dec(v___x_768_);
lean_dec(v___x_767_);
if (v___x_769_ == 0)
{
lean_object* v___x_770_; 
lean_dec(v___x_766_);
lean_dec(v___x_763_);
v___x_770_ = lean_box(0);
return v___x_770_;
}
else
{
lean_object* v___x_771_; lean_object* v___x_772_; 
v___x_771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_771_, 0, v___x_766_);
lean_ctor_set(v___x_771_, 1, v___x_763_);
v___x_772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_772_, 0, v___x_771_);
return v___x_772_;
}
}
else
{
lean_object* v___x_773_; 
v___x_773_ = lean_box(0);
return v___x_773_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_maskOnesZeros_x3f___boxed(lean_object* v_c_774_){
_start:
{
lean_object* v_res_775_; 
v_res_775_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_maskOnesZeros_x3f(v_c_774_);
lean_dec(v_c_774_);
return v_res_775_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__3(void){
_start:
{
lean_object* v___x_781_; lean_object* v___x_782_; 
v___x_781_ = lean_unsigned_to_nat(1u);
v___x_782_ = l_Lean_Level_ofNat(v___x_781_);
return v___x_782_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__4(void){
_start:
{
lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; 
v___x_783_ = lean_box(0);
v___x_784_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__3, &l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__3);
v___x_785_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_785_, 0, v___x_784_);
lean_ctor_set(v___x_785_, 1, v___x_783_);
return v___x_785_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__5(void){
_start:
{
lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; 
v___x_786_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__4, &l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__4);
v___x_787_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__2));
v___x_788_ = l_Lean_mkConst(v___x_787_, v___x_786_);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl(lean_object* v_a_789_){
_start:
{
lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_790_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__5, &l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl___closed__5);
v___x_791_ = l_Lean_Nat_mkType;
v___x_792_ = l_Lean_mkAppB(v___x_790_, v___x_791_, v_a_789_);
return v___x_792_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg(lean_object* v_e_827_, lean_object* v_a_828_, lean_object* v_a_829_, lean_object* v_a_830_, lean_object* v_a_831_, lean_object* v_a_832_, lean_object* v_a_833_){
_start:
{
uint8_t v___y_839_; lean_object* v___y_840_; lean_object* v___y_841_; lean_object* v___y_842_; lean_object* v___y_843_; lean_object* v___y_844_; lean_object* v___y_845_; lean_object* v___y_846_; lean_object* v___y_847_; lean_object* v___y_857_; lean_object* v___y_858_; lean_object* v___y_859_; lean_object* v___y_860_; lean_object* v___y_861_; lean_object* v___y_862_; lean_object* v_fst_872_; lean_object* v_fst_873_; lean_object* v_fst_874_; uint8_t v_snd_875_; lean_object* v___y_876_; lean_object* v___y_877_; lean_object* v___y_878_; lean_object* v___y_879_; lean_object* v___y_880_; lean_object* v___y_881_; lean_object* v___x_927_; uint8_t v___x_928_; 
v___x_927_ = l_Lean_Expr_cleanupAnnotations(v_e_827_);
v___x_928_ = l_Lean_Expr_isApp(v___x_927_);
if (v___x_928_ == 0)
{
lean_dec_ref(v___x_927_);
goto v___jp_835_;
}
else
{
lean_object* v___x_929_; uint8_t v___x_930_; 
v___x_929_ = l_Lean_Expr_appFnCleanup___redArg(v___x_927_);
v___x_930_ = l_Lean_Expr_isApp(v___x_929_);
if (v___x_930_ == 0)
{
lean_dec_ref(v___x_929_);
lean_dec_ref(v___x_927_);
goto v___jp_835_;
}
else
{
lean_object* v___x_931_; uint8_t v___x_932_; 
v___x_931_ = l_Lean_Expr_appFnCleanup___redArg(v___x_929_);
v___x_932_ = l_Lean_Expr_isApp(v___x_931_);
if (v___x_932_ == 0)
{
lean_dec_ref(v___x_931_);
lean_dec_ref(v___x_929_);
lean_dec_ref(v___x_927_);
goto v___jp_835_;
}
else
{
lean_object* v___x_933_; uint8_t v___x_934_; 
v___x_933_ = l_Lean_Expr_appFnCleanup___redArg(v___x_931_);
v___x_934_ = l_Lean_Expr_isApp(v___x_933_);
if (v___x_934_ == 0)
{
lean_dec_ref(v___x_933_);
lean_dec_ref(v___x_931_);
lean_dec_ref(v___x_929_);
lean_dec_ref(v___x_927_);
goto v___jp_835_;
}
else
{
lean_object* v___x_935_; uint8_t v___x_936_; 
v___x_935_ = l_Lean_Expr_appFnCleanup___redArg(v___x_933_);
lean_dec_ref(v___x_933_);
v___x_936_ = l_Lean_Expr_isApp(v___x_935_);
if (v___x_936_ == 0)
{
lean_dec_ref(v___x_935_);
lean_dec_ref(v___x_931_);
lean_dec_ref(v___x_929_);
lean_dec_ref(v___x_927_);
goto v___jp_835_;
}
else
{
lean_object* v___x_937_; uint8_t v___x_938_; 
v___x_937_ = l_Lean_Expr_appFnCleanup___redArg(v___x_935_);
lean_dec_ref(v___x_935_);
v___x_938_ = l_Lean_Expr_isApp(v___x_937_);
if (v___x_938_ == 0)
{
lean_dec_ref(v___x_937_);
lean_dec_ref(v___x_931_);
lean_dec_ref(v___x_929_);
lean_dec_ref(v___x_927_);
goto v___jp_835_;
}
else
{
lean_object* v___x_939_; lean_object* v___x_940_; uint8_t v___x_941_; 
v___x_939_ = l_Lean_Expr_appFnCleanup___redArg(v___x_937_);
v___x_940_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__12));
v___x_941_ = l_Lean_Expr_isConstOf(v___x_939_, v___x_940_);
lean_dec_ref(v___x_939_);
if (v___x_941_ == 0)
{
lean_dec_ref(v___x_937_);
lean_dec_ref(v___x_931_);
lean_dec_ref(v___x_929_);
lean_dec_ref(v___x_927_);
goto v___jp_835_;
}
else
{
lean_object* v_arg_942_; lean_object* v___x_943_; uint8_t v___x_944_; 
v_arg_942_ = lean_ctor_get(v___x_937_, 1);
lean_inc_ref(v_arg_942_);
lean_dec_ref(v___x_937_);
v___x_943_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__13));
v___x_944_ = l_Lean_Expr_isConstOf(v_arg_942_, v___x_943_);
lean_dec_ref(v_arg_942_);
if (v___x_944_ == 0)
{
lean_object* v___x_945_; lean_object* v___x_946_; 
lean_dec_ref(v___x_931_);
lean_dec_ref(v___x_929_);
lean_dec_ref(v___x_927_);
v___x_945_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_945_, 0, v___x_944_);
lean_ctor_set_uint8(v___x_945_, 1, v___x_944_);
v___x_946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_946_, 0, v___x_945_);
return v___x_946_;
}
else
{
lean_object* v_arg_947_; lean_object* v_arg_948_; lean_object* v_arg_949_; lean_object* v___x_950_; 
v_arg_947_ = lean_ctor_get(v___x_927_, 1);
lean_inc_ref(v_arg_947_);
lean_dec_ref(v___x_927_);
v_arg_948_ = lean_ctor_get(v___x_929_, 1);
lean_inc_ref(v_arg_948_);
lean_dec_ref(v___x_929_);
v_arg_949_ = lean_ctor_get(v___x_931_, 1);
lean_inc_ref(v_arg_949_);
lean_dec_ref(v___x_931_);
v___x_950_ = l_Lean_Meta_Structural_isInstHAndNat___redArg(v_arg_949_, v_a_831_);
if (lean_obj_tag(v___x_950_) == 0)
{
lean_object* v_a_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_972_; 
v_a_951_ = lean_ctor_get(v___x_950_, 0);
v_isSharedCheck_972_ = !lean_is_exclusive(v___x_950_);
if (v_isSharedCheck_972_ == 0)
{
v___x_953_ = v___x_950_;
v_isShared_954_ = v_isSharedCheck_972_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_a_951_);
lean_dec(v___x_950_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_972_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
uint8_t v___x_955_; 
v___x_955_ = lean_unbox(v_a_951_);
if (v___x_955_ == 0)
{
lean_object* v___x_956_; uint8_t v___x_957_; uint8_t v___x_958_; lean_object* v___x_960_; 
lean_dec_ref(v_arg_948_);
lean_dec_ref(v_arg_947_);
v___x_956_ = lean_alloc_ctor(0, 0, 2);
v___x_957_ = lean_unbox(v_a_951_);
lean_ctor_set_uint8(v___x_956_, 0, v___x_957_);
v___x_958_ = lean_unbox(v_a_951_);
lean_dec(v_a_951_);
lean_ctor_set_uint8(v___x_956_, 1, v___x_958_);
if (v_isShared_954_ == 0)
{
lean_ctor_set(v___x_953_, 0, v___x_956_);
v___x_960_ = v___x_953_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v___x_956_);
v___x_960_ = v_reuseFailAlloc_961_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
return v___x_960_;
}
}
else
{
lean_object* v___x_962_; 
v___x_962_ = l_Lean_Meta_Sym_getNatValue_x3f(v_arg_947_);
if (lean_obj_tag(v___x_962_) == 1)
{
lean_object* v_val_963_; uint8_t v___x_964_; 
lean_del_object(v___x_953_);
lean_dec(v_a_951_);
v_val_963_ = lean_ctor_get(v___x_962_, 0);
lean_inc(v_val_963_);
lean_dec_ref_known(v___x_962_, 1);
v___x_964_ = 0;
v_fst_872_ = v_arg_948_;
v_fst_873_ = v_arg_947_;
v_fst_874_ = v_val_963_;
v_snd_875_ = v___x_964_;
v___y_876_ = v_a_828_;
v___y_877_ = v_a_829_;
v___y_878_ = v_a_830_;
v___y_879_ = v_a_831_;
v___y_880_ = v_a_832_;
v___y_881_ = v_a_833_;
goto v___jp_871_;
}
else
{
lean_object* v___x_965_; 
lean_dec(v___x_962_);
v___x_965_ = l_Lean_Meta_Sym_getNatValue_x3f(v_arg_948_);
if (lean_obj_tag(v___x_965_) == 1)
{
lean_object* v_val_966_; uint8_t v___x_967_; 
lean_del_object(v___x_953_);
v_val_966_ = lean_ctor_get(v___x_965_, 0);
lean_inc(v_val_966_);
lean_dec_ref_known(v___x_965_, 1);
v___x_967_ = lean_unbox(v_a_951_);
lean_dec(v_a_951_);
v_fst_872_ = v_arg_947_;
v_fst_873_ = v_arg_948_;
v_fst_874_ = v_val_966_;
v_snd_875_ = v___x_967_;
v___y_876_ = v_a_828_;
v___y_877_ = v_a_829_;
v___y_878_ = v_a_830_;
v___y_879_ = v_a_831_;
v___y_880_ = v_a_832_;
v___y_881_ = v_a_833_;
goto v___jp_871_;
}
else
{
lean_object* v___x_968_; lean_object* v___x_970_; 
lean_dec(v___x_965_);
lean_dec(v_a_951_);
lean_dec_ref(v_arg_948_);
lean_dec_ref(v_arg_947_);
v___x_968_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__0));
if (v_isShared_954_ == 0)
{
lean_ctor_set(v___x_953_, 0, v___x_968_);
v___x_970_ = v___x_953_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v___x_968_);
v___x_970_ = v_reuseFailAlloc_971_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
return v___x_970_;
}
}
}
}
}
}
else
{
lean_object* v_a_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_980_; 
lean_dec_ref(v_arg_948_);
lean_dec_ref(v_arg_947_);
v_a_973_ = lean_ctor_get(v___x_950_, 0);
v_isSharedCheck_980_ = !lean_is_exclusive(v___x_950_);
if (v_isSharedCheck_980_ == 0)
{
v___x_975_ = v___x_950_;
v_isShared_976_ = v_isSharedCheck_980_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_a_973_);
lean_dec(v___x_950_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_980_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
lean_object* v___x_978_; 
if (v_isShared_976_ == 0)
{
v___x_978_ = v___x_975_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v_a_973_);
v___x_978_ = v_reuseFailAlloc_979_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
return v___x_978_;
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
v___jp_835_:
{
lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_836_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__0));
v___x_837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_837_, 0, v___x_836_);
return v___x_837_;
}
v___jp_838_:
{
lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_848_ = lean_box(0);
lean_inc(v___y_847_);
v___x_849_ = l_Lean_mkConst(v___y_847_, v___x_848_);
lean_inc_ref(v___y_845_);
v___x_850_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl(v___y_845_);
lean_inc_ref(v___y_846_);
v___x_851_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl(v___y_846_);
lean_inc_ref(v___y_844_);
v___x_852_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl(v___y_844_);
v___x_853_ = l_Lean_mkApp9(v___x_849_, v___y_840_, v___y_845_, v___y_846_, v___y_844_, v___y_843_, v___y_842_, v___x_850_, v___x_851_, v___x_852_);
v___x_854_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_854_, 0, v___y_841_);
lean_ctor_set(v___x_854_, 1, v___x_853_);
lean_ctor_set_uint8(v___x_854_, sizeof(void*)*2, v___y_839_);
lean_ctor_set_uint8(v___x_854_, sizeof(void*)*2 + 1, v___y_839_);
v___x_855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_855_, 0, v___x_854_);
return v___x_855_;
}
v___jp_856_:
{
lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; uint8_t v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; 
v___x_863_ = lean_box(0);
lean_inc(v___y_862_);
v___x_864_ = l_Lean_mkConst(v___y_862_, v___x_863_);
lean_inc_ref(v___y_860_);
v___x_865_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl(v___y_860_);
lean_inc_ref(v___y_859_);
v___x_866_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl(v___y_859_);
v___x_867_ = l_Lean_mkApp6(v___x_864_, v___y_857_, v___y_860_, v___y_859_, v___y_858_, v___x_865_, v___x_866_);
v___x_868_ = 0;
v___x_869_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_869_, 0, v___y_861_);
lean_ctor_set(v___x_869_, 1, v___x_867_);
lean_ctor_set_uint8(v___x_869_, sizeof(void*)*2, v___x_868_);
lean_ctor_set_uint8(v___x_869_, sizeof(void*)*2 + 1, v___x_868_);
v___x_870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_870_, 0, v___x_869_);
return v___x_870_;
}
v___jp_871_:
{
lean_object* v___x_882_; 
v___x_882_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_maskOnesZeros_x3f(v_fst_874_);
lean_dec(v_fst_874_);
if (lean_obj_tag(v___x_882_) == 1)
{
lean_object* v_val_883_; lean_object* v_fst_884_; lean_object* v_snd_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; uint8_t v___x_891_; 
v_val_883_ = lean_ctor_get(v___x_882_, 0);
lean_inc(v_val_883_);
lean_dec_ref_known(v___x_882_, 1);
v_fst_884_ = lean_ctor_get(v_val_883_, 0);
lean_inc_n(v_fst_884_, 2);
v_snd_885_ = lean_ctor_get(v_val_883_, 1);
lean_inc(v_snd_885_);
lean_dec(v_val_883_);
v___x_886_ = l_Lean_mkNatLit(v_fst_884_);
v___x_887_ = lean_unsigned_to_nat(1u);
v___x_888_ = lean_nat_shiftl(v___x_887_, v_fst_884_);
lean_dec(v_fst_884_);
v___x_889_ = l_Lean_mkNatLit(v___x_888_);
v___x_890_ = lean_unsigned_to_nat(0u);
v___x_891_ = lean_nat_dec_eq(v_snd_885_, v___x_890_);
if (v___x_891_ == 0)
{
lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; 
lean_inc(v_snd_885_);
v___x_892_ = l_Lean_mkNatLit(v_snd_885_);
v___x_893_ = lean_nat_shiftl(v___x_887_, v_snd_885_);
lean_dec(v_snd_885_);
v___x_894_ = l_Lean_mkNatLit(v___x_893_);
lean_inc_ref_n(v___x_894_, 2);
lean_inc_ref(v_fst_872_);
v___x_895_ = l_Lean_mkNatDiv(v_fst_872_, v___x_894_);
lean_inc_ref(v___x_889_);
v___x_896_ = l_Lean_mkNatMod(v___x_895_, v___x_889_);
v___x_897_ = l_Lean_mkNatMul(v___x_896_, v___x_894_);
v___x_898_ = l_Lean_Meta_Sym_shareCommonInc(v___x_897_, v___y_876_, v___y_877_, v___y_878_, v___y_879_, v___y_880_, v___y_881_);
if (lean_obj_tag(v___x_898_) == 0)
{
if (v_snd_875_ == 0)
{
lean_object* v_a_899_; lean_object* v___x_900_; 
v_a_899_ = lean_ctor_get(v___x_898_, 0);
lean_inc(v_a_899_);
lean_dec_ref_known(v___x_898_, 1);
v___x_900_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__3));
v___y_839_ = v___x_891_;
v___y_840_ = v_fst_872_;
v___y_841_ = v_a_899_;
v___y_842_ = v___x_886_;
v___y_843_ = v___x_892_;
v___y_844_ = v___x_889_;
v___y_845_ = v_fst_873_;
v___y_846_ = v___x_894_;
v___y_847_ = v___x_900_;
goto v___jp_838_;
}
else
{
lean_object* v_a_901_; lean_object* v___x_902_; 
v_a_901_ = lean_ctor_get(v___x_898_, 0);
lean_inc(v_a_901_);
lean_dec_ref_known(v___x_898_, 1);
v___x_902_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__5));
v___y_839_ = v___x_891_;
v___y_840_ = v_fst_872_;
v___y_841_ = v_a_901_;
v___y_842_ = v___x_886_;
v___y_843_ = v___x_892_;
v___y_844_ = v___x_889_;
v___y_845_ = v_fst_873_;
v___y_846_ = v___x_894_;
v___y_847_ = v___x_902_;
goto v___jp_838_;
}
}
else
{
lean_object* v_a_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_910_; 
lean_dec_ref(v___x_894_);
lean_dec_ref(v___x_892_);
lean_dec_ref(v___x_889_);
lean_dec_ref(v___x_886_);
lean_dec_ref(v_fst_873_);
lean_dec_ref(v_fst_872_);
v_a_903_ = lean_ctor_get(v___x_898_, 0);
v_isSharedCheck_910_ = !lean_is_exclusive(v___x_898_);
if (v_isSharedCheck_910_ == 0)
{
v___x_905_ = v___x_898_;
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_a_903_);
lean_dec(v___x_898_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
lean_object* v___x_908_; 
if (v_isShared_906_ == 0)
{
v___x_908_ = v___x_905_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v_a_903_);
v___x_908_ = v_reuseFailAlloc_909_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
return v___x_908_;
}
}
}
}
else
{
lean_object* v___x_911_; lean_object* v___x_912_; 
lean_dec(v_snd_885_);
lean_inc_ref(v___x_889_);
lean_inc_ref(v_fst_872_);
v___x_911_ = l_Lean_mkNatMod(v_fst_872_, v___x_889_);
v___x_912_ = l_Lean_Meta_Sym_shareCommonInc(v___x_911_, v___y_876_, v___y_877_, v___y_878_, v___y_879_, v___y_880_, v___y_881_);
if (lean_obj_tag(v___x_912_) == 0)
{
if (v_snd_875_ == 0)
{
lean_object* v_a_913_; lean_object* v___x_914_; 
v_a_913_ = lean_ctor_get(v___x_912_, 0);
lean_inc(v_a_913_);
lean_dec_ref_known(v___x_912_, 1);
v___x_914_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__7));
v___y_857_ = v_fst_872_;
v___y_858_ = v___x_886_;
v___y_859_ = v___x_889_;
v___y_860_ = v_fst_873_;
v___y_861_ = v_a_913_;
v___y_862_ = v___x_914_;
goto v___jp_856_;
}
else
{
lean_object* v_a_915_; lean_object* v___x_916_; 
v_a_915_ = lean_ctor_get(v___x_912_, 0);
lean_inc(v_a_915_);
lean_dec_ref_known(v___x_912_, 1);
v___x_916_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__9));
v___y_857_ = v_fst_872_;
v___y_858_ = v___x_886_;
v___y_859_ = v___x_889_;
v___y_860_ = v_fst_873_;
v___y_861_ = v_a_915_;
v___y_862_ = v___x_916_;
goto v___jp_856_;
}
}
else
{
lean_object* v_a_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_924_; 
lean_dec_ref(v___x_889_);
lean_dec_ref(v___x_886_);
lean_dec_ref(v_fst_873_);
lean_dec_ref(v_fst_872_);
v_a_917_ = lean_ctor_get(v___x_912_, 0);
v_isSharedCheck_924_ = !lean_is_exclusive(v___x_912_);
if (v_isSharedCheck_924_ == 0)
{
v___x_919_ = v___x_912_;
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_a_917_);
lean_dec(v___x_912_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v___x_922_; 
if (v_isShared_920_ == 0)
{
v___x_922_ = v___x_919_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_923_; 
v_reuseFailAlloc_923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_923_, 0, v_a_917_);
v___x_922_ = v_reuseFailAlloc_923_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
return v___x_922_;
}
}
}
}
}
else
{
lean_object* v___x_925_; lean_object* v___x_926_; 
lean_dec(v___x_882_);
lean_dec_ref(v_fst_873_);
lean_dec_ref(v_fst_872_);
v___x_925_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__0));
v___x_926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_926_, 0, v___x_925_);
return v___x_926_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___boxed(lean_object* v_e_981_, lean_object* v_a_982_, lean_object* v_a_983_, lean_object* v_a_984_, lean_object* v_a_985_, lean_object* v_a_986_, lean_object* v_a_987_, lean_object* v_a_988_){
_start:
{
lean_object* v_res_989_; 
v_res_989_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg(v_e_981_, v_a_982_, v_a_983_, v_a_984_, v_a_985_, v_a_986_, v_a_987_);
lean_dec(v_a_987_);
lean_dec_ref(v_a_986_);
lean_dec(v_a_985_);
lean_dec_ref(v_a_984_);
lean_dec(v_a_983_);
lean_dec_ref(v_a_982_);
lean_dec_ref(v_e_981_);
return v_res_989_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc(lean_object* v_e_990_, lean_object* v_a_991_, lean_object* v_a_992_, lean_object* v_a_993_, lean_object* v_a_994_, lean_object* v_a_995_, lean_object* v_a_996_, lean_object* v_a_997_, lean_object* v_a_998_, lean_object* v_a_999_){
_start:
{
lean_object* v___x_1001_; 
v___x_1001_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg(v_e_990_, v_a_994_, v_a_995_, v_a_996_, v_a_997_, v_a_998_, v_a_999_);
return v___x_1001_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___boxed(lean_object* v_e_1002_, lean_object* v_a_1003_, lean_object* v_a_1004_, lean_object* v_a_1005_, lean_object* v_a_1006_, lean_object* v_a_1007_, lean_object* v_a_1008_, lean_object* v_a_1009_, lean_object* v_a_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_){
_start:
{
lean_object* v_res_1013_; 
v_res_1013_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc(v_e_1002_, v_a_1003_, v_a_1004_, v_a_1005_, v_a_1006_, v_a_1007_, v_a_1008_, v_a_1009_, v_a_1010_, v_a_1011_);
lean_dec(v_a_1011_);
lean_dec_ref(v_a_1010_);
lean_dec(v_a_1009_);
lean_dec_ref(v_a_1008_);
lean_dec(v_a_1007_);
lean_dec_ref(v_a_1006_);
lean_dec(v_a_1005_);
lean_dec_ref(v_a_1004_);
lean_dec(v_a_1003_);
lean_dec_ref(v_e_1002_);
return v_res_1013_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg(lean_object* v_e_1036_, lean_object* v_a_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_, lean_object* v_a_1040_, lean_object* v_a_1041_, lean_object* v_a_1042_){
_start:
{
uint8_t v___y_1051_; lean_object* v___x_1054_; uint8_t v___x_1055_; 
v___x_1054_ = l_Lean_Expr_cleanupAnnotations(v_e_1036_);
v___x_1055_ = l_Lean_Expr_isApp(v___x_1054_);
if (v___x_1055_ == 0)
{
lean_dec_ref(v___x_1054_);
goto v___jp_1044_;
}
else
{
lean_object* v___x_1056_; uint8_t v___x_1057_; 
v___x_1056_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1054_);
v___x_1057_ = l_Lean_Expr_isApp(v___x_1056_);
if (v___x_1057_ == 0)
{
lean_dec_ref(v___x_1056_);
lean_dec_ref(v___x_1054_);
goto v___jp_1044_;
}
else
{
lean_object* v___x_1058_; uint8_t v___x_1059_; 
v___x_1058_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1056_);
v___x_1059_ = l_Lean_Expr_isApp(v___x_1058_);
if (v___x_1059_ == 0)
{
lean_dec_ref(v___x_1058_);
lean_dec_ref(v___x_1056_);
lean_dec_ref(v___x_1054_);
goto v___jp_1044_;
}
else
{
lean_object* v___x_1060_; uint8_t v___x_1061_; 
v___x_1060_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1058_);
v___x_1061_ = l_Lean_Expr_isApp(v___x_1060_);
if (v___x_1061_ == 0)
{
lean_dec_ref(v___x_1060_);
lean_dec_ref(v___x_1058_);
lean_dec_ref(v___x_1056_);
lean_dec_ref(v___x_1054_);
goto v___jp_1044_;
}
else
{
lean_object* v___x_1062_; uint8_t v___x_1063_; 
v___x_1062_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1060_);
lean_dec_ref(v___x_1060_);
v___x_1063_ = l_Lean_Expr_isApp(v___x_1062_);
if (v___x_1063_ == 0)
{
lean_dec_ref(v___x_1062_);
lean_dec_ref(v___x_1058_);
lean_dec_ref(v___x_1056_);
lean_dec_ref(v___x_1054_);
goto v___jp_1044_;
}
else
{
lean_object* v___x_1064_; uint8_t v___x_1065_; 
v___x_1064_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1062_);
lean_dec_ref(v___x_1062_);
v___x_1065_ = l_Lean_Expr_isApp(v___x_1064_);
if (v___x_1065_ == 0)
{
lean_dec_ref(v___x_1064_);
lean_dec_ref(v___x_1058_);
lean_dec_ref(v___x_1056_);
lean_dec_ref(v___x_1054_);
goto v___jp_1044_;
}
else
{
lean_object* v___x_1066_; lean_object* v___x_1067_; uint8_t v___x_1068_; 
v___x_1066_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1064_);
v___x_1067_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__2));
v___x_1068_ = l_Lean_Expr_isConstOf(v___x_1066_, v___x_1067_);
lean_dec_ref(v___x_1066_);
if (v___x_1068_ == 0)
{
lean_dec_ref(v___x_1064_);
lean_dec_ref(v___x_1058_);
lean_dec_ref(v___x_1056_);
lean_dec_ref(v___x_1054_);
goto v___jp_1044_;
}
else
{
lean_object* v_arg_1069_; lean_object* v___x_1070_; uint8_t v___x_1071_; 
v_arg_1069_ = lean_ctor_get(v___x_1064_, 1);
lean_inc_ref(v_arg_1069_);
lean_dec_ref(v___x_1064_);
v___x_1070_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__13));
v___x_1071_ = l_Lean_Expr_isConstOf(v_arg_1069_, v___x_1070_);
lean_dec_ref(v_arg_1069_);
if (v___x_1071_ == 0)
{
lean_object* v___x_1072_; lean_object* v___x_1073_; 
lean_dec_ref(v___x_1058_);
lean_dec_ref(v___x_1056_);
lean_dec_ref(v___x_1054_);
v___x_1072_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_1072_, 0, v___x_1071_);
lean_ctor_set_uint8(v___x_1072_, 1, v___x_1071_);
v___x_1073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1072_);
return v___x_1073_;
}
else
{
lean_object* v_arg_1074_; lean_object* v___y_1076_; lean_object* v___y_1077_; lean_object* v___y_1078_; lean_object* v___y_1079_; lean_object* v___y_1080_; lean_object* v_arg_1088_; lean_object* v_arg_1089_; lean_object* v___x_1090_; 
v_arg_1074_ = lean_ctor_get(v___x_1054_, 1);
lean_inc_ref(v_arg_1074_);
lean_dec_ref(v___x_1054_);
v_arg_1088_ = lean_ctor_get(v___x_1056_, 1);
lean_inc_ref(v_arg_1088_);
lean_dec_ref(v___x_1056_);
v_arg_1089_ = lean_ctor_get(v___x_1058_, 1);
lean_inc_ref(v_arg_1089_);
lean_dec_ref(v___x_1058_);
v___x_1090_ = l_Lean_Meta_Structural_isInstHModNat___redArg(v_arg_1089_, v_a_1040_);
if (lean_obj_tag(v___x_1090_) == 0)
{
lean_object* v_a_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1191_; 
v_a_1091_ = lean_ctor_get(v___x_1090_, 0);
v_isSharedCheck_1191_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1191_ == 0)
{
v___x_1093_ = v___x_1090_;
v_isShared_1094_ = v_isSharedCheck_1191_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_a_1091_);
lean_dec(v___x_1090_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1191_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
uint8_t v___x_1095_; 
v___x_1095_ = lean_unbox(v_a_1091_);
if (v___x_1095_ == 0)
{
lean_object* v___x_1096_; uint8_t v___x_1097_; uint8_t v___x_1098_; lean_object* v___x_1100_; 
lean_dec_ref(v_arg_1088_);
lean_dec_ref(v_arg_1074_);
v___x_1096_ = lean_alloc_ctor(0, 0, 2);
v___x_1097_ = lean_unbox(v_a_1091_);
lean_ctor_set_uint8(v___x_1096_, 0, v___x_1097_);
v___x_1098_ = lean_unbox(v_a_1091_);
lean_dec(v_a_1091_);
lean_ctor_set_uint8(v___x_1096_, 1, v___x_1098_);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 0, v___x_1096_);
v___x_1100_ = v___x_1093_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v___x_1096_);
v___x_1100_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
return v___x_1100_;
}
}
else
{
lean_object* v___x_1102_; 
lean_dec(v_a_1091_);
v___x_1102_ = l_Lean_Meta_Sym_getNatValue_x3f(v_arg_1074_);
if (lean_obj_tag(v___x_1102_) == 1)
{
lean_object* v_val_1103_; lean_object* v_fst_1105_; lean_object* v_fst_1106_; lean_object* v_fst_1107_; uint8_t v_snd_1108_; lean_object* v___y_1109_; lean_object* v___y_1110_; lean_object* v___y_1111_; lean_object* v___y_1112_; lean_object* v___y_1113_; lean_object* v___y_1114_; lean_object* v___x_1138_; uint8_t v___x_1139_; 
lean_del_object(v___x_1093_);
v_val_1103_ = lean_ctor_get(v___x_1102_, 0);
lean_inc(v_val_1103_);
lean_dec_ref_known(v___x_1102_, 1);
v___x_1138_ = l_Lean_Expr_cleanupAnnotations(v_arg_1088_);
lean_dec_ref(v_arg_1088_);
v___x_1139_ = l_Lean_Expr_isApp(v___x_1138_);
if (v___x_1139_ == 0)
{
lean_dec_ref(v___x_1138_);
lean_dec(v_val_1103_);
lean_dec_ref(v_arg_1074_);
goto v___jp_1047_;
}
else
{
lean_object* v___x_1140_; uint8_t v___x_1141_; 
v___x_1140_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1138_);
v___x_1141_ = l_Lean_Expr_isApp(v___x_1140_);
if (v___x_1141_ == 0)
{
lean_dec_ref(v___x_1140_);
lean_dec_ref(v___x_1138_);
lean_dec(v_val_1103_);
lean_dec_ref(v_arg_1074_);
goto v___jp_1047_;
}
else
{
lean_object* v___x_1142_; uint8_t v___x_1143_; 
v___x_1142_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1140_);
v___x_1143_ = l_Lean_Expr_isApp(v___x_1142_);
if (v___x_1143_ == 0)
{
lean_dec_ref(v___x_1142_);
lean_dec_ref(v___x_1140_);
lean_dec_ref(v___x_1138_);
lean_dec(v_val_1103_);
lean_dec_ref(v_arg_1074_);
goto v___jp_1047_;
}
else
{
lean_object* v___x_1144_; uint8_t v___x_1145_; 
v___x_1144_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1142_);
v___x_1145_ = l_Lean_Expr_isApp(v___x_1144_);
if (v___x_1145_ == 0)
{
lean_dec_ref(v___x_1144_);
lean_dec_ref(v___x_1142_);
lean_dec_ref(v___x_1140_);
lean_dec_ref(v___x_1138_);
lean_dec(v_val_1103_);
lean_dec_ref(v_arg_1074_);
goto v___jp_1047_;
}
else
{
lean_object* v___x_1146_; uint8_t v___x_1147_; 
v___x_1146_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1144_);
lean_dec_ref(v___x_1144_);
v___x_1147_ = l_Lean_Expr_isApp(v___x_1146_);
if (v___x_1147_ == 0)
{
lean_dec_ref(v___x_1146_);
lean_dec_ref(v___x_1142_);
lean_dec_ref(v___x_1140_);
lean_dec_ref(v___x_1138_);
lean_dec(v_val_1103_);
lean_dec_ref(v_arg_1074_);
goto v___jp_1047_;
}
else
{
lean_object* v___x_1148_; uint8_t v___x_1149_; 
v___x_1148_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1146_);
lean_dec_ref(v___x_1146_);
v___x_1149_ = l_Lean_Expr_isApp(v___x_1148_);
if (v___x_1149_ == 0)
{
lean_dec_ref(v___x_1148_);
lean_dec_ref(v___x_1142_);
lean_dec_ref(v___x_1140_);
lean_dec_ref(v___x_1138_);
lean_dec(v_val_1103_);
lean_dec_ref(v_arg_1074_);
goto v___jp_1047_;
}
else
{
lean_object* v___x_1150_; lean_object* v___x_1151_; uint8_t v___x_1152_; 
v___x_1150_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1148_);
lean_dec_ref(v___x_1148_);
v___x_1151_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__9));
v___x_1152_ = l_Lean_Expr_isConstOf(v___x_1150_, v___x_1151_);
lean_dec_ref(v___x_1150_);
if (v___x_1152_ == 0)
{
lean_dec_ref(v___x_1142_);
lean_dec_ref(v___x_1140_);
lean_dec_ref(v___x_1138_);
lean_dec(v_val_1103_);
lean_dec_ref(v_arg_1074_);
goto v___jp_1047_;
}
else
{
lean_object* v_arg_1153_; lean_object* v_arg_1154_; lean_object* v_arg_1155_; lean_object* v___x_1156_; 
v_arg_1153_ = lean_ctor_get(v___x_1138_, 1);
lean_inc_ref(v_arg_1153_);
lean_dec_ref(v___x_1138_);
v_arg_1154_ = lean_ctor_get(v___x_1140_, 1);
lean_inc_ref(v_arg_1154_);
lean_dec_ref(v___x_1140_);
v_arg_1155_ = lean_ctor_get(v___x_1142_, 1);
lean_inc_ref(v_arg_1155_);
lean_dec_ref(v___x_1142_);
v___x_1156_ = l_Lean_Meta_Structural_isInstHMulNat___redArg(v_arg_1155_, v_a_1040_);
if (lean_obj_tag(v___x_1156_) == 0)
{
lean_object* v_a_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1178_; 
v_a_1157_ = lean_ctor_get(v___x_1156_, 0);
v_isSharedCheck_1178_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1178_ == 0)
{
v___x_1159_ = v___x_1156_;
v_isShared_1160_ = v_isSharedCheck_1178_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_a_1157_);
lean_dec(v___x_1156_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1178_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
uint8_t v___x_1161_; 
v___x_1161_ = lean_unbox(v_a_1157_);
if (v___x_1161_ == 0)
{
lean_object* v___x_1162_; uint8_t v___x_1163_; uint8_t v___x_1164_; lean_object* v___x_1166_; 
lean_dec_ref(v_arg_1154_);
lean_dec_ref(v_arg_1153_);
lean_dec(v_val_1103_);
lean_dec_ref(v_arg_1074_);
v___x_1162_ = lean_alloc_ctor(0, 0, 2);
v___x_1163_ = lean_unbox(v_a_1157_);
lean_ctor_set_uint8(v___x_1162_, 0, v___x_1163_);
v___x_1164_ = lean_unbox(v_a_1157_);
lean_dec(v_a_1157_);
lean_ctor_set_uint8(v___x_1162_, 1, v___x_1164_);
if (v_isShared_1160_ == 0)
{
lean_ctor_set(v___x_1159_, 0, v___x_1162_);
v___x_1166_ = v___x_1159_;
goto v_reusejp_1165_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v___x_1162_);
v___x_1166_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1165_;
}
v_reusejp_1165_:
{
return v___x_1166_;
}
}
else
{
lean_object* v___x_1168_; 
v___x_1168_ = l_Lean_Meta_Sym_getNatValue_x3f(v_arg_1154_);
if (lean_obj_tag(v___x_1168_) == 1)
{
lean_object* v_val_1169_; uint8_t v___x_1170_; 
lean_del_object(v___x_1159_);
lean_dec(v_a_1157_);
v_val_1169_ = lean_ctor_get(v___x_1168_, 0);
lean_inc(v_val_1169_);
lean_dec_ref_known(v___x_1168_, 1);
v___x_1170_ = 0;
v_fst_1105_ = v_arg_1153_;
v_fst_1106_ = v_arg_1154_;
v_fst_1107_ = v_val_1169_;
v_snd_1108_ = v___x_1170_;
v___y_1109_ = v_a_1037_;
v___y_1110_ = v_a_1038_;
v___y_1111_ = v_a_1039_;
v___y_1112_ = v_a_1040_;
v___y_1113_ = v_a_1041_;
v___y_1114_ = v_a_1042_;
goto v___jp_1104_;
}
else
{
lean_object* v___x_1171_; 
lean_dec(v___x_1168_);
v___x_1171_ = l_Lean_Meta_Sym_getNatValue_x3f(v_arg_1153_);
if (lean_obj_tag(v___x_1171_) == 1)
{
lean_object* v_val_1172_; uint8_t v___x_1173_; 
lean_del_object(v___x_1159_);
v_val_1172_ = lean_ctor_get(v___x_1171_, 0);
lean_inc(v_val_1172_);
lean_dec_ref_known(v___x_1171_, 1);
v___x_1173_ = lean_unbox(v_a_1157_);
lean_dec(v_a_1157_);
v_fst_1105_ = v_arg_1154_;
v_fst_1106_ = v_arg_1153_;
v_fst_1107_ = v_val_1172_;
v_snd_1108_ = v___x_1173_;
v___y_1109_ = v_a_1037_;
v___y_1110_ = v_a_1038_;
v___y_1111_ = v_a_1039_;
v___y_1112_ = v_a_1040_;
v___y_1113_ = v_a_1041_;
v___y_1114_ = v_a_1042_;
goto v___jp_1104_;
}
else
{
lean_object* v___x_1174_; lean_object* v___x_1176_; 
lean_dec(v___x_1171_);
lean_dec(v_a_1157_);
lean_dec_ref(v_arg_1154_);
lean_dec_ref(v_arg_1153_);
lean_dec(v_val_1103_);
lean_dec_ref(v_arg_1074_);
v___x_1174_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__0));
if (v_isShared_1160_ == 0)
{
lean_ctor_set(v___x_1159_, 0, v___x_1174_);
v___x_1176_ = v___x_1159_;
goto v_reusejp_1175_;
}
else
{
lean_object* v_reuseFailAlloc_1177_; 
v_reuseFailAlloc_1177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1177_, 0, v___x_1174_);
v___x_1176_ = v_reuseFailAlloc_1177_;
goto v_reusejp_1175_;
}
v_reusejp_1175_:
{
return v___x_1176_;
}
}
}
}
}
}
else
{
lean_object* v_a_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1186_; 
lean_dec_ref(v_arg_1154_);
lean_dec_ref(v_arg_1153_);
lean_dec(v_val_1103_);
lean_dec_ref(v_arg_1074_);
v_a_1179_ = lean_ctor_get(v___x_1156_, 0);
v_isSharedCheck_1186_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1186_ == 0)
{
v___x_1181_ = v___x_1156_;
v_isShared_1182_ = v_isSharedCheck_1186_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_a_1179_);
lean_dec(v___x_1156_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1186_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v___x_1184_; 
if (v_isShared_1182_ == 0)
{
v___x_1184_ = v___x_1181_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v_a_1179_);
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
}
}
}
}
}
v___jp_1104_:
{
uint8_t v___x_1115_; 
v___x_1115_ = lean_nat_dec_lt(v_fst_1107_, v_val_1103_);
if (v___x_1115_ == 0)
{
lean_dec(v_fst_1107_);
lean_dec_ref(v_fst_1106_);
lean_dec_ref(v_fst_1105_);
lean_dec(v_val_1103_);
lean_dec_ref(v_arg_1074_);
v___y_1051_ = v___x_1115_;
goto v___jp_1050_;
}
else
{
lean_object* v___x_1116_; lean_object* v___x_1117_; uint8_t v___x_1118_; 
v___x_1116_ = lean_unsigned_to_nat(2u);
v___x_1117_ = lean_nat_mul(v___x_1116_, v_fst_1107_);
v___x_1118_ = lean_nat_dec_lt(v_val_1103_, v___x_1117_);
lean_dec(v___x_1117_);
if (v___x_1118_ == 0)
{
lean_dec(v_fst_1107_);
lean_dec_ref(v_fst_1106_);
lean_dec_ref(v_fst_1105_);
lean_dec(v_val_1103_);
lean_dec_ref(v_arg_1074_);
v___y_1051_ = v___x_1118_;
goto v___jp_1050_;
}
else
{
lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; 
v___x_1119_ = lean_nat_sub(v_val_1103_, v_fst_1107_);
lean_dec(v_fst_1107_);
lean_dec(v_val_1103_);
v___x_1120_ = l_Lean_mkNatLit(v___x_1119_);
lean_inc_ref(v_fst_1105_);
lean_inc_ref(v___x_1120_);
v___x_1121_ = l_Lean_mkNatMul(v___x_1120_, v_fst_1105_);
lean_inc_ref_n(v_arg_1074_, 3);
v___x_1122_ = l_Lean_mkNatMod(v___x_1121_, v_arg_1074_);
v___x_1123_ = l_Lean_mkNatSub(v_arg_1074_, v___x_1122_);
v___x_1124_ = l_Lean_mkNatMod(v___x_1123_, v_arg_1074_);
v___x_1125_ = l_Lean_Meta_Sym_shareCommonInc(v___x_1124_, v___y_1109_, v___y_1110_, v___y_1111_, v___y_1112_, v___y_1113_, v___y_1114_);
if (lean_obj_tag(v___x_1125_) == 0)
{
if (v_snd_1108_ == 0)
{
lean_object* v_a_1126_; lean_object* v___x_1127_; 
v_a_1126_ = lean_ctor_get(v___x_1125_, 0);
lean_inc(v_a_1126_);
lean_dec_ref_known(v___x_1125_, 1);
v___x_1127_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__4));
v___y_1076_ = v_fst_1106_;
v___y_1077_ = v___x_1120_;
v___y_1078_ = v_fst_1105_;
v___y_1079_ = v_a_1126_;
v___y_1080_ = v___x_1127_;
goto v___jp_1075_;
}
else
{
lean_object* v_a_1128_; lean_object* v___x_1129_; 
v_a_1128_ = lean_ctor_get(v___x_1125_, 0);
lean_inc(v_a_1128_);
lean_dec_ref_known(v___x_1125_, 1);
v___x_1129_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___closed__6));
v___y_1076_ = v_fst_1106_;
v___y_1077_ = v___x_1120_;
v___y_1078_ = v_fst_1105_;
v___y_1079_ = v_a_1128_;
v___y_1080_ = v___x_1129_;
goto v___jp_1075_;
}
}
else
{
lean_object* v_a_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1137_; 
lean_dec_ref(v___x_1120_);
lean_dec_ref(v_fst_1106_);
lean_dec_ref(v_fst_1105_);
lean_dec_ref(v_arg_1074_);
v_a_1130_ = lean_ctor_get(v___x_1125_, 0);
v_isSharedCheck_1137_ = !lean_is_exclusive(v___x_1125_);
if (v_isSharedCheck_1137_ == 0)
{
v___x_1132_ = v___x_1125_;
v_isShared_1133_ = v_isSharedCheck_1137_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_a_1130_);
lean_dec(v___x_1125_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1137_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
lean_object* v___x_1135_; 
if (v_isShared_1133_ == 0)
{
v___x_1135_ = v___x_1132_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v_a_1130_);
v___x_1135_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
return v___x_1135_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1187_; lean_object* v___x_1189_; 
lean_dec(v___x_1102_);
lean_dec_ref(v_arg_1088_);
lean_dec_ref(v_arg_1074_);
v___x_1187_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__0));
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 0, v___x_1187_);
v___x_1189_ = v___x_1093_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1190_; 
v_reuseFailAlloc_1190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1190_, 0, v___x_1187_);
v___x_1189_ = v_reuseFailAlloc_1190_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
return v___x_1189_;
}
}
}
}
}
else
{
lean_object* v_a_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1199_; 
lean_dec_ref(v_arg_1088_);
lean_dec_ref(v_arg_1074_);
v_a_1192_ = lean_ctor_get(v___x_1090_, 0);
v_isSharedCheck_1199_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1194_ = v___x_1090_;
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_a_1192_);
lean_dec(v___x_1090_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
lean_object* v___x_1197_; 
if (v_isShared_1195_ == 0)
{
v___x_1197_ = v___x_1194_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v_a_1192_);
v___x_1197_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
return v___x_1197_;
}
}
}
v___jp_1075_:
{
lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; uint8_t v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; 
v___x_1081_ = lean_box(0);
lean_inc(v___y_1080_);
v___x_1082_ = l_Lean_mkConst(v___y_1080_, v___x_1081_);
lean_inc_ref(v_arg_1074_);
v___x_1083_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkNatEqRefl(v_arg_1074_);
v___x_1084_ = l_Lean_mkApp5(v___x_1082_, v___y_1078_, v___y_1076_, v___y_1077_, v_arg_1074_, v___x_1083_);
v___x_1085_ = 0;
v___x_1086_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1086_, 0, v___y_1079_);
lean_ctor_set(v___x_1086_, 1, v___x_1084_);
lean_ctor_set_uint8(v___x_1086_, sizeof(void*)*2, v___x_1085_);
lean_ctor_set_uint8(v___x_1086_, sizeof(void*)*2 + 1, v___x_1085_);
v___x_1087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1086_);
return v___x_1087_;
}
}
}
}
}
}
}
}
}
v___jp_1044_:
{
lean_object* v___x_1045_; lean_object* v___x_1046_; 
v___x_1045_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__0));
v___x_1046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1045_);
return v___x_1046_;
}
v___jp_1047_:
{
lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1048_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg___closed__0));
v___x_1049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1049_, 0, v___x_1048_);
return v___x_1049_;
}
v___jp_1050_:
{
lean_object* v___x_1052_; lean_object* v___x_1053_; 
v___x_1052_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_1052_, 0, v___y_1051_);
lean_ctor_set_uint8(v___x_1052_, 1, v___y_1051_);
v___x_1053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1053_, 0, v___x_1052_);
return v___x_1053_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg___boxed(lean_object* v_e_1200_, lean_object* v_a_1201_, lean_object* v_a_1202_, lean_object* v_a_1203_, lean_object* v_a_1204_, lean_object* v_a_1205_, lean_object* v_a_1206_, lean_object* v_a_1207_){
_start:
{
lean_object* v_res_1208_; 
v_res_1208_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg(v_e_1200_, v_a_1201_, v_a_1202_, v_a_1203_, v_a_1204_, v_a_1205_, v_a_1206_);
lean_dec(v_a_1206_);
lean_dec_ref(v_a_1205_);
lean_dec(v_a_1204_);
lean_dec_ref(v_a_1203_);
lean_dec(v_a_1202_);
lean_dec_ref(v_a_1201_);
lean_dec_ref(v_e_1200_);
return v_res_1208_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc(lean_object* v_e_1209_, lean_object* v_a_1210_, lean_object* v_a_1211_, lean_object* v_a_1212_, lean_object* v_a_1213_, lean_object* v_a_1214_, lean_object* v_a_1215_, lean_object* v_a_1216_, lean_object* v_a_1217_, lean_object* v_a_1218_){
_start:
{
lean_object* v___x_1220_; 
v___x_1220_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg(v_e_1209_, v_a_1213_, v_a_1214_, v_a_1215_, v_a_1216_, v_a_1217_, v_a_1218_);
return v___x_1220_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___boxed(lean_object* v_e_1221_, lean_object* v_a_1222_, lean_object* v_a_1223_, lean_object* v_a_1224_, lean_object* v_a_1225_, lean_object* v_a_1226_, lean_object* v_a_1227_, lean_object* v_a_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_, lean_object* v_a_1231_){
_start:
{
lean_object* v_res_1232_; 
v_res_1232_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc(v_e_1221_, v_a_1222_, v_a_1223_, v_a_1224_, v_a_1225_, v_a_1226_, v_a_1227_, v_a_1228_, v_a_1229_, v_a_1230_);
lean_dec(v_a_1230_);
lean_dec_ref(v_a_1229_);
lean_dec(v_a_1228_);
lean_dec_ref(v_a_1227_);
lean_dec(v_a_1226_);
lean_dec_ref(v_a_1225_);
lean_dec(v_a_1224_);
lean_dec_ref(v_a_1223_);
lean_dec(v_a_1222_);
lean_dec_ref(v_e_1221_);
return v_res_1232_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1233_, lean_object* v_i_1234_, lean_object* v_k_1235_){
_start:
{
lean_object* v___x_1236_; uint8_t v___x_1237_; 
v___x_1236_ = lean_array_get_size(v_keys_1233_);
v___x_1237_ = lean_nat_dec_lt(v_i_1234_, v___x_1236_);
if (v___x_1237_ == 0)
{
lean_dec(v_i_1234_);
return v___x_1237_;
}
else
{
lean_object* v_k_x27_1238_; size_t v___x_1239_; size_t v___x_1240_; uint8_t v___x_1241_; 
v_k_x27_1238_ = lean_array_fget_borrowed(v_keys_1233_, v_i_1234_);
v___x_1239_ = lean_ptr_addr(v_k_1235_);
v___x_1240_ = lean_ptr_addr(v_k_x27_1238_);
v___x_1241_ = lean_usize_dec_eq(v___x_1239_, v___x_1240_);
if (v___x_1241_ == 0)
{
lean_object* v___x_1242_; lean_object* v___x_1243_; 
v___x_1242_ = lean_unsigned_to_nat(1u);
v___x_1243_ = lean_nat_add(v_i_1234_, v___x_1242_);
lean_dec(v_i_1234_);
v_i_1234_ = v___x_1243_;
goto _start;
}
else
{
lean_dec(v_i_1234_);
return v___x_1237_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1245_, lean_object* v_i_1246_, lean_object* v_k_1247_){
_start:
{
uint8_t v_res_1248_; lean_object* v_r_1249_; 
v_res_1248_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0_spec__0_spec__1___redArg(v_keys_1245_, v_i_1246_, v_k_1247_);
lean_dec_ref(v_k_1247_);
lean_dec_ref(v_keys_1245_);
v_r_1249_ = lean_box(v_res_1248_);
return v_r_1249_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0_spec__0___redArg(lean_object* v_x_1250_, size_t v_x_1251_, lean_object* v_x_1252_){
_start:
{
if (lean_obj_tag(v_x_1250_) == 0)
{
lean_object* v_es_1253_; lean_object* v___x_1254_; size_t v___x_1255_; size_t v___x_1256_; lean_object* v_j_1257_; lean_object* v___x_1258_; 
v_es_1253_ = lean_ctor_get(v_x_1250_, 0);
v___x_1254_ = lean_box(2);
v___x_1255_ = ((size_t)31ULL);
v___x_1256_ = lean_usize_land(v_x_1251_, v___x_1255_);
v_j_1257_ = lean_usize_to_nat(v___x_1256_);
v___x_1258_ = lean_array_get_borrowed(v___x_1254_, v_es_1253_, v_j_1257_);
lean_dec(v_j_1257_);
switch(lean_obj_tag(v___x_1258_))
{
case 0:
{
lean_object* v_key_1259_; size_t v___x_1260_; size_t v___x_1261_; uint8_t v___x_1262_; 
v_key_1259_ = lean_ctor_get(v___x_1258_, 0);
v___x_1260_ = lean_ptr_addr(v_x_1252_);
v___x_1261_ = lean_ptr_addr(v_key_1259_);
v___x_1262_ = lean_usize_dec_eq(v___x_1260_, v___x_1261_);
return v___x_1262_;
}
case 1:
{
lean_object* v_node_1263_; size_t v___x_1264_; size_t v___x_1265_; 
v_node_1263_ = lean_ctor_get(v___x_1258_, 0);
v___x_1264_ = ((size_t)5ULL);
v___x_1265_ = lean_usize_shift_right(v_x_1251_, v___x_1264_);
v_x_1250_ = v_node_1263_;
v_x_1251_ = v___x_1265_;
goto _start;
}
default: 
{
uint8_t v___x_1267_; 
v___x_1267_ = 0;
return v___x_1267_;
}
}
}
else
{
lean_object* v_ks_1268_; lean_object* v___x_1269_; uint8_t v___x_1270_; 
v_ks_1268_ = lean_ctor_get(v_x_1250_, 0);
v___x_1269_ = lean_unsigned_to_nat(0u);
v___x_1270_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0_spec__0_spec__1___redArg(v_ks_1268_, v___x_1269_, v_x_1252_);
return v___x_1270_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0_spec__0___redArg___boxed(lean_object* v_x_1271_, lean_object* v_x_1272_, lean_object* v_x_1273_){
_start:
{
size_t v_x_10711__boxed_1274_; uint8_t v_res_1275_; lean_object* v_r_1276_; 
v_x_10711__boxed_1274_ = lean_unbox_usize(v_x_1272_);
lean_dec(v_x_1272_);
v_res_1275_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0_spec__0___redArg(v_x_1271_, v_x_10711__boxed_1274_, v_x_1273_);
lean_dec_ref(v_x_1273_);
lean_dec_ref(v_x_1271_);
v_r_1276_ = lean_box(v_res_1275_);
return v_r_1276_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0___redArg(lean_object* v_x_1277_, lean_object* v_x_1278_){
_start:
{
size_t v___x_1279_; size_t v___x_1280_; size_t v___x_1281_; uint64_t v___x_1282_; size_t v___x_1283_; uint8_t v___x_1284_; 
v___x_1279_ = lean_ptr_addr(v_x_1278_);
v___x_1280_ = ((size_t)3ULL);
v___x_1281_ = lean_usize_shift_right(v___x_1279_, v___x_1280_);
v___x_1282_ = lean_usize_to_uint64(v___x_1281_);
v___x_1283_ = lean_uint64_to_usize(v___x_1282_);
v___x_1284_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0_spec__0___redArg(v_x_1277_, v___x_1283_, v_x_1278_);
return v___x_1284_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0___redArg___boxed(lean_object* v_x_1285_, lean_object* v_x_1286_){
_start:
{
uint8_t v_res_1287_; lean_object* v_r_1288_; 
v_res_1287_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0___redArg(v_x_1285_, v_x_1286_);
lean_dec_ref(v_x_1286_);
lean_dec_ref(v_x_1285_);
v_r_1288_ = lean_box(v_res_1287_);
return v_r_1288_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter___redArg___lam__0(lean_object* v_val_1290_, uint8_t v___x_1291_, lean_object* v___x_1292_, lean_object* v_a_1293_, lean_object* v_e_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_){
_start:
{
lean_object* v___y_1306_; lean_object* v_a_1307_; lean_object* v___y_1321_; lean_object* v___y_1322_; uint8_t v___y_1323_; lean_object* v___x_1326_; 
v___x_1326_ = l___private_Lean_Meta_Sym_Simp_EvalGround_0__Lean_Meta_Sym_Simp_evalGroundCore___redArg(v_e_1294_, v___x_1292_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_);
if (lean_obj_tag(v___x_1326_) == 0)
{
lean_object* v_a_1327_; 
v_a_1327_ = lean_ctor_get(v___x_1326_, 0);
if (lean_obj_tag(v_a_1327_) == 0)
{
uint8_t v_done_1328_; uint8_t v_contextDependent_1329_; lean_object* v___y_1331_; lean_object* v_a_1332_; lean_object* v___y_1336_; lean_object* v___y_1337_; uint8_t v___y_1338_; 
v_done_1328_ = lean_ctor_get_uint8(v_a_1327_, 0);
v_contextDependent_1329_ = lean_ctor_get_uint8(v_a_1327_, 1);
if (v_done_1328_ == 0)
{
lean_object* v___x_1341_; lean_object* v___x_1342_; 
lean_dec_ref_known(v___x_1326_, 1);
v___x_1341_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter___redArg___lam__0___closed__0));
lean_inc_ref(v_e_1294_);
v___x_1342_ = l_Lean_Meta_Sym_Simp_Theorems_rewrite(v_a_1293_, v___x_1341_, v_e_1294_, v___y_1295_, v___y_1296_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_);
if (lean_obj_tag(v___x_1342_) == 0)
{
lean_object* v_a_1343_; 
v_a_1343_ = lean_ctor_get(v___x_1342_, 0);
lean_inc(v_a_1343_);
if (lean_obj_tag(v_a_1343_) == 0)
{
uint8_t v_done_1344_; uint8_t v_contextDependent_1345_; lean_object* v___y_1347_; lean_object* v_a_1348_; 
v_done_1344_ = lean_ctor_get_uint8(v_a_1343_, 0);
v_contextDependent_1345_ = lean_ctor_get_uint8(v_a_1343_, 1);
if (v_done_1344_ == 0)
{
lean_object* v___x_1351_; 
lean_dec_ref_known(v_a_1343_, 0);
lean_dec_ref_known(v___x_1342_, 1);
v___x_1351_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_andMaskSimproc___redArg(v_e_1294_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_);
if (lean_obj_tag(v___x_1351_) == 0)
{
lean_object* v_a_1352_; 
v_a_1352_ = lean_ctor_get(v___x_1351_, 0);
lean_inc(v_a_1352_);
if (lean_obj_tag(v_a_1352_) == 0)
{
uint8_t v_done_1353_; 
v_done_1353_ = lean_ctor_get_uint8(v_a_1352_, 0);
if (v_done_1353_ == 0)
{
uint8_t v_contextDependent_1354_; lean_object* v___x_1355_; 
lean_dec_ref_known(v___x_1351_, 1);
v_contextDependent_1354_ = lean_ctor_get_uint8(v_a_1352_, 1);
lean_dec_ref_known(v_a_1352_, 0);
v___x_1355_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mulLargeCoeffSimproc___redArg(v_e_1294_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_);
if (lean_obj_tag(v___x_1355_) == 0)
{
lean_object* v_a_1356_; uint8_t v___y_1358_; 
v_a_1356_ = lean_ctor_get(v___x_1355_, 0);
lean_inc(v_a_1356_);
if (v_contextDependent_1354_ == 0)
{
v___y_1347_ = v___x_1355_;
v_a_1348_ = v_a_1356_;
goto v___jp_1346_;
}
else
{
if (lean_obj_tag(v_a_1356_) == 0)
{
uint8_t v_contextDependent_1368_; 
v_contextDependent_1368_ = lean_ctor_get_uint8(v_a_1356_, 1);
v___y_1358_ = v_contextDependent_1368_;
goto v___jp_1357_;
}
else
{
uint8_t v___x_1369_; 
v___x_1369_ = 0;
v___y_1358_ = v___x_1369_;
goto v___jp_1357_;
}
}
v___jp_1357_:
{
if (v___y_1358_ == 0)
{
lean_object* v___x_1360_; uint8_t v_isShared_1361_; uint8_t v_isSharedCheck_1366_; 
v_isSharedCheck_1366_ = !lean_is_exclusive(v___x_1355_);
if (v_isSharedCheck_1366_ == 0)
{
lean_object* v_unused_1367_; 
v_unused_1367_ = lean_ctor_get(v___x_1355_, 0);
lean_dec(v_unused_1367_);
v___x_1360_ = v___x_1355_;
v_isShared_1361_ = v_isSharedCheck_1366_;
goto v_resetjp_1359_;
}
else
{
lean_dec(v___x_1355_);
v___x_1360_ = lean_box(0);
v_isShared_1361_ = v_isSharedCheck_1366_;
goto v_resetjp_1359_;
}
v_resetjp_1359_:
{
lean_object* v___x_1362_; lean_object* v___x_1364_; 
v___x_1362_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_1356_);
lean_inc_ref(v___x_1362_);
if (v_isShared_1361_ == 0)
{
lean_ctor_set(v___x_1360_, 0, v___x_1362_);
v___x_1364_ = v___x_1360_;
goto v_reusejp_1363_;
}
else
{
lean_object* v_reuseFailAlloc_1365_; 
v_reuseFailAlloc_1365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1365_, 0, v___x_1362_);
v___x_1364_ = v_reuseFailAlloc_1365_;
goto v_reusejp_1363_;
}
v_reusejp_1363_:
{
v___y_1347_ = v___x_1364_;
v_a_1348_ = v___x_1362_;
goto v___jp_1346_;
}
}
}
else
{
v___y_1347_ = v___x_1355_;
v_a_1348_ = v_a_1356_;
goto v___jp_1346_;
}
}
}
else
{
lean_dec_ref(v_e_1294_);
return v___x_1355_;
}
}
else
{
v___y_1347_ = v___x_1351_;
v_a_1348_ = v_a_1352_;
goto v___jp_1346_;
}
}
else
{
v___y_1347_ = v___x_1351_;
v_a_1348_ = v_a_1352_;
goto v___jp_1346_;
}
}
else
{
lean_dec_ref(v_e_1294_);
return v___x_1351_;
}
}
else
{
v___y_1331_ = v___x_1342_;
v_a_1332_ = v_a_1343_;
goto v___jp_1330_;
}
v___jp_1346_:
{
if (v_contextDependent_1345_ == 0)
{
v___y_1331_ = v___y_1347_;
v_a_1332_ = v_a_1348_;
goto v___jp_1330_;
}
else
{
if (lean_obj_tag(v_a_1348_) == 0)
{
uint8_t v_contextDependent_1349_; 
v_contextDependent_1349_ = lean_ctor_get_uint8(v_a_1348_, 1);
v___y_1336_ = v___y_1347_;
v___y_1337_ = v_a_1348_;
v___y_1338_ = v_contextDependent_1349_;
goto v___jp_1335_;
}
else
{
uint8_t v_contextDependent_1350_; 
v_contextDependent_1350_ = lean_ctor_get_uint8(v_a_1348_, sizeof(void*)*2 + 1);
v___y_1336_ = v___y_1347_;
v___y_1337_ = v_a_1348_;
v___y_1338_ = v_contextDependent_1350_;
goto v___jp_1335_;
}
}
}
}
else
{
v___y_1331_ = v___x_1342_;
v_a_1332_ = v_a_1343_;
goto v___jp_1330_;
}
}
else
{
lean_dec_ref(v_e_1294_);
return v___x_1342_;
}
}
else
{
lean_dec_ref(v_e_1294_);
return v___x_1326_;
}
v___jp_1330_:
{
if (v_contextDependent_1329_ == 0)
{
v___y_1306_ = v___y_1331_;
v_a_1307_ = v_a_1332_;
goto v___jp_1305_;
}
else
{
if (lean_obj_tag(v_a_1332_) == 0)
{
uint8_t v_contextDependent_1333_; 
v_contextDependent_1333_ = lean_ctor_get_uint8(v_a_1332_, 1);
v___y_1321_ = v___y_1331_;
v___y_1322_ = v_a_1332_;
v___y_1323_ = v_contextDependent_1333_;
goto v___jp_1320_;
}
else
{
uint8_t v_contextDependent_1334_; 
v_contextDependent_1334_ = lean_ctor_get_uint8(v_a_1332_, sizeof(void*)*2 + 1);
v___y_1321_ = v___y_1331_;
v___y_1322_ = v_a_1332_;
v___y_1323_ = v_contextDependent_1334_;
goto v___jp_1320_;
}
}
}
v___jp_1335_:
{
if (v___y_1338_ == 0)
{
lean_object* v___x_1339_; lean_object* v___x_1340_; 
lean_dec_ref(v___y_1336_);
v___x_1339_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v___y_1337_);
lean_inc_ref(v___x_1339_);
v___x_1340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1340_, 0, v___x_1339_);
v___y_1331_ = v___x_1340_;
v_a_1332_ = v___x_1339_;
goto v___jp_1330_;
}
else
{
v___y_1331_ = v___y_1336_;
v_a_1332_ = v___y_1337_;
goto v___jp_1330_;
}
}
}
else
{
lean_dec_ref(v_e_1294_);
return v___x_1326_;
}
}
else
{
lean_dec_ref(v_e_1294_);
return v___x_1326_;
}
v___jp_1305_:
{
if (lean_obj_tag(v_a_1307_) == 0)
{
uint8_t v_done_1308_; lean_object* v___x_1310_; uint8_t v_isShared_1311_; uint8_t v_isSharedCheck_1319_; 
v_done_1308_ = lean_ctor_get_uint8(v_a_1307_, 0);
v_isSharedCheck_1319_ = !lean_is_exclusive(v_a_1307_);
if (v_isSharedCheck_1319_ == 0)
{
v___x_1310_ = v_a_1307_;
v_isShared_1311_ = v_isSharedCheck_1319_;
goto v_resetjp_1309_;
}
else
{
lean_dec(v_a_1307_);
v___x_1310_ = lean_box(0);
v_isShared_1311_ = v_isSharedCheck_1319_;
goto v_resetjp_1309_;
}
v_resetjp_1309_:
{
if (v_done_1308_ == 0)
{
lean_object* v_toGoalState_1312_; lean_object* v_enodeMap_1313_; uint8_t v___x_1314_; lean_object* v___x_1316_; 
lean_dec_ref(v___y_1306_);
v_toGoalState_1312_ = lean_ctor_get(v_val_1290_, 0);
v_enodeMap_1313_ = lean_ctor_get(v_toGoalState_1312_, 1);
v___x_1314_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0___redArg(v_enodeMap_1313_, v_e_1294_);
lean_dec_ref(v_e_1294_);
if (v_isShared_1311_ == 0)
{
v___x_1316_ = v___x_1310_;
goto v_reusejp_1315_;
}
else
{
lean_object* v_reuseFailAlloc_1318_; 
v_reuseFailAlloc_1318_ = lean_alloc_ctor(0, 0, 2);
v___x_1316_ = v_reuseFailAlloc_1318_;
goto v_reusejp_1315_;
}
v_reusejp_1315_:
{
lean_object* v___x_1317_; 
lean_ctor_set_uint8(v___x_1316_, 0, v___x_1314_);
lean_ctor_set_uint8(v___x_1316_, 1, v___x_1291_);
v___x_1317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1317_, 0, v___x_1316_);
return v___x_1317_;
}
}
else
{
lean_del_object(v___x_1310_);
lean_dec_ref(v_e_1294_);
return v___y_1306_;
}
}
}
else
{
lean_dec_ref(v_a_1307_);
lean_dec_ref(v_e_1294_);
return v___y_1306_;
}
}
v___jp_1320_:
{
if (v___y_1323_ == 0)
{
lean_object* v___x_1324_; lean_object* v___x_1325_; 
lean_dec_ref(v___y_1321_);
v___x_1324_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v___y_1322_);
lean_inc_ref(v___x_1324_);
v___x_1325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1325_, 0, v___x_1324_);
v___y_1306_ = v___x_1325_;
v_a_1307_ = v___x_1324_;
goto v___jp_1305_;
}
else
{
v___y_1306_ = v___y_1321_;
v_a_1307_ = v___y_1322_;
goto v___jp_1305_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter___redArg___lam__0___boxed(lean_object* v_val_1370_, lean_object* v___x_1371_, lean_object* v___x_1372_, lean_object* v_a_1373_, lean_object* v_e_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_){
_start:
{
uint8_t v___x_10778__boxed_1385_; lean_object* v_res_1386_; 
v___x_10778__boxed_1385_ = lean_unbox(v___x_1371_);
v_res_1386_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter___redArg___lam__0(v_val_1370_, v___x_10778__boxed_1385_, v___x_1372_, v_a_1373_, v_e_1374_, v___y_1375_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_, v___y_1383_);
lean_dec(v___y_1383_);
lean_dec_ref(v___y_1382_);
lean_dec(v___y_1381_);
lean_dec_ref(v___y_1380_);
lean_dec(v___y_1379_);
lean_dec_ref(v___y_1378_);
lean_dec(v___y_1377_);
lean_dec_ref(v___y_1376_);
lean_dec(v___y_1375_);
lean_dec_ref(v_a_1373_);
lean_dec_ref(v___x_1372_);
lean_dec_ref(v_val_1370_);
return v_res_1386_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter___redArg(lean_object* v_a_1390_, lean_object* v_a_1391_, lean_object* v_a_1392_){
_start:
{
lean_object* v___x_1394_; lean_object* v___x_1395_; 
v___x_1394_ = lean_st_ref_get(v_a_1390_);
v___x_1395_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_getThms___redArg(v_a_1390_, v_a_1391_, v_a_1392_);
if (lean_obj_tag(v___x_1395_) == 0)
{
lean_object* v_a_1396_; lean_object* v___x_1398_; uint8_t v_isShared_1399_; uint8_t v_isSharedCheck_1407_; 
v_a_1396_ = lean_ctor_get(v___x_1395_, 0);
v_isSharedCheck_1407_ = !lean_is_exclusive(v___x_1395_);
if (v_isSharedCheck_1407_ == 0)
{
v___x_1398_ = v___x_1395_;
v_isShared_1399_ = v_isSharedCheck_1407_;
goto v_resetjp_1397_;
}
else
{
lean_inc(v_a_1396_);
lean_dec(v___x_1395_);
v___x_1398_ = lean_box(0);
v_isShared_1399_ = v_isSharedCheck_1407_;
goto v_resetjp_1397_;
}
v_resetjp_1397_:
{
uint8_t v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___f_1403_; lean_object* v___x_1405_; 
v___x_1400_ = 0;
v___x_1401_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter___redArg___closed__0));
v___x_1402_ = lean_box(v___x_1400_);
v___f_1403_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter___redArg___lam__0___boxed), 15, 4);
lean_closure_set(v___f_1403_, 0, v___x_1394_);
lean_closure_set(v___f_1403_, 1, v___x_1402_);
lean_closure_set(v___f_1403_, 2, v___x_1401_);
lean_closure_set(v___f_1403_, 3, v_a_1396_);
if (v_isShared_1399_ == 0)
{
lean_ctor_set(v___x_1398_, 0, v___f_1403_);
v___x_1405_ = v___x_1398_;
goto v_reusejp_1404_;
}
else
{
lean_object* v_reuseFailAlloc_1406_; 
v_reuseFailAlloc_1406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1406_, 0, v___f_1403_);
v___x_1405_ = v_reuseFailAlloc_1406_;
goto v_reusejp_1404_;
}
v_reusejp_1404_:
{
return v___x_1405_;
}
}
}
else
{
lean_object* v_a_1408_; lean_object* v___x_1410_; uint8_t v_isShared_1411_; uint8_t v_isSharedCheck_1415_; 
lean_dec(v___x_1394_);
v_a_1408_ = lean_ctor_get(v___x_1395_, 0);
v_isSharedCheck_1415_ = !lean_is_exclusive(v___x_1395_);
if (v_isSharedCheck_1415_ == 0)
{
v___x_1410_ = v___x_1395_;
v_isShared_1411_ = v_isSharedCheck_1415_;
goto v_resetjp_1409_;
}
else
{
lean_inc(v_a_1408_);
lean_dec(v___x_1395_);
v___x_1410_ = lean_box(0);
v_isShared_1411_ = v_isSharedCheck_1415_;
goto v_resetjp_1409_;
}
v_resetjp_1409_:
{
lean_object* v___x_1413_; 
if (v_isShared_1411_ == 0)
{
v___x_1413_ = v___x_1410_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v_a_1408_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter___redArg___boxed(lean_object* v_a_1416_, lean_object* v_a_1417_, lean_object* v_a_1418_, lean_object* v_a_1419_){
_start:
{
lean_object* v_res_1420_; 
v_res_1420_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter___redArg(v_a_1416_, v_a_1417_, v_a_1418_);
lean_dec(v_a_1418_);
lean_dec_ref(v_a_1417_);
lean_dec(v_a_1416_);
return v_res_1420_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter(lean_object* v_a_1421_, lean_object* v_a_1422_, lean_object* v_a_1423_, lean_object* v_a_1424_, lean_object* v_a_1425_, lean_object* v_a_1426_, lean_object* v_a_1427_, lean_object* v_a_1428_, lean_object* v_a_1429_, lean_object* v_a_1430_){
_start:
{
lean_object* v___x_1432_; 
v___x_1432_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter___redArg(v_a_1421_, v_a_1429_, v_a_1430_);
return v___x_1432_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter___boxed(lean_object* v_a_1433_, lean_object* v_a_1434_, lean_object* v_a_1435_, lean_object* v_a_1436_, lean_object* v_a_1437_, lean_object* v_a_1438_, lean_object* v_a_1439_, lean_object* v_a_1440_, lean_object* v_a_1441_, lean_object* v_a_1442_, lean_object* v_a_1443_){
_start:
{
lean_object* v_res_1444_; 
v_res_1444_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter(v_a_1433_, v_a_1434_, v_a_1435_, v_a_1436_, v_a_1437_, v_a_1438_, v_a_1439_, v_a_1440_, v_a_1441_, v_a_1442_);
lean_dec(v_a_1442_);
lean_dec_ref(v_a_1441_);
lean_dec(v_a_1440_);
lean_dec_ref(v_a_1439_);
lean_dec(v_a_1438_);
lean_dec_ref(v_a_1437_);
lean_dec(v_a_1436_);
lean_dec_ref(v_a_1435_);
lean_dec(v_a_1434_);
lean_dec(v_a_1433_);
return v_res_1444_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0(lean_object* v_00_u03b2_1445_, lean_object* v_x_1446_, lean_object* v_x_1447_){
_start:
{
uint8_t v___x_1448_; 
v___x_1448_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0___redArg(v_x_1446_, v_x_1447_);
return v___x_1448_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0___boxed(lean_object* v_00_u03b2_1449_, lean_object* v_x_1450_, lean_object* v_x_1451_){
_start:
{
uint8_t v_res_1452_; lean_object* v_r_1453_; 
v_res_1452_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0(v_00_u03b2_1449_, v_x_1450_, v_x_1451_);
lean_dec_ref(v_x_1451_);
lean_dec_ref(v_x_1450_);
v_r_1453_ = lean_box(v_res_1452_);
return v_r_1453_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0_spec__0(lean_object* v_00_u03b2_1454_, lean_object* v_x_1455_, size_t v_x_1456_, lean_object* v_x_1457_){
_start:
{
uint8_t v___x_1458_; 
v___x_1458_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0_spec__0___redArg(v_x_1455_, v_x_1456_, v_x_1457_);
return v___x_1458_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1459_, lean_object* v_x_1460_, lean_object* v_x_1461_, lean_object* v_x_1462_){
_start:
{
size_t v_x_11045__boxed_1463_; uint8_t v_res_1464_; lean_object* v_r_1465_; 
v_x_11045__boxed_1463_ = lean_unbox_usize(v_x_1461_);
lean_dec(v_x_1461_);
v_res_1464_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0_spec__0(v_00_u03b2_1459_, v_x_1460_, v_x_11045__boxed_1463_, v_x_1462_);
lean_dec_ref(v_x_1462_);
lean_dec_ref(v_x_1460_);
v_r_1465_ = lean_box(v_res_1464_);
return v_r_1465_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1466_, lean_object* v_keys_1467_, lean_object* v_vals_1468_, lean_object* v_heq_1469_, lean_object* v_i_1470_, lean_object* v_k_1471_){
_start:
{
uint8_t v___x_1472_; 
v___x_1472_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0_spec__0_spec__1___redArg(v_keys_1467_, v_i_1470_, v_k_1471_);
return v___x_1472_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1473_, lean_object* v_keys_1474_, lean_object* v_vals_1475_, lean_object* v_heq_1476_, lean_object* v_i_1477_, lean_object* v_k_1478_){
_start:
{
uint8_t v_res_1479_; lean_object* v_r_1480_; 
v_res_1479_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0_spec__0_spec__1(v_00_u03b2_1473_, v_keys_1474_, v_vals_1475_, v_heq_1476_, v_i_1477_, v_k_1478_);
lean_dec_ref(v_k_1478_);
lean_dec_ref(v_vals_1475_);
lean_dec_ref(v_keys_1474_);
v_r_1480_ = lean_box(v_res_1479_);
return v_r_1480_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f___redArg___lam__0(lean_object* v_s_1481_){
_start:
{
lean_object* v_internalized_1482_; uint8_t v_initialized_1483_; lean_object* v_thms_1484_; lean_object* v_preds_1485_; lean_object* v_sourceTypes_1486_; lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1494_; 
v_internalized_1482_ = lean_ctor_get(v_s_1481_, 1);
v_initialized_1483_ = lean_ctor_get_uint8(v_s_1481_, sizeof(void*)*5);
v_thms_1484_ = lean_ctor_get(v_s_1481_, 2);
v_preds_1485_ = lean_ctor_get(v_s_1481_, 3);
v_sourceTypes_1486_ = lean_ctor_get(v_s_1481_, 4);
v_isSharedCheck_1494_ = !lean_is_exclusive(v_s_1481_);
if (v_isSharedCheck_1494_ == 0)
{
lean_object* v_unused_1495_; 
v_unused_1495_ = lean_ctor_get(v_s_1481_, 0);
lean_dec(v_unused_1495_);
v___x_1488_ = v_s_1481_;
v_isShared_1489_ = v_isSharedCheck_1494_;
goto v_resetjp_1487_;
}
else
{
lean_inc(v_sourceTypes_1486_);
lean_inc(v_preds_1485_);
lean_inc(v_thms_1484_);
lean_inc(v_internalized_1482_);
lean_dec(v_s_1481_);
v___x_1488_ = lean_box(0);
v_isShared_1489_ = v_isSharedCheck_1494_;
goto v_resetjp_1487_;
}
v_resetjp_1487_:
{
lean_object* v___x_1490_; lean_object* v___x_1492_; 
v___x_1490_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2_);
if (v_isShared_1489_ == 0)
{
lean_ctor_set(v___x_1488_, 0, v___x_1490_);
v___x_1492_ = v___x_1488_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v___x_1490_);
lean_ctor_set(v_reuseFailAlloc_1493_, 1, v_internalized_1482_);
lean_ctor_set(v_reuseFailAlloc_1493_, 2, v_thms_1484_);
lean_ctor_set(v_reuseFailAlloc_1493_, 3, v_preds_1485_);
lean_ctor_set(v_reuseFailAlloc_1493_, 4, v_sourceTypes_1486_);
lean_ctor_set_uint8(v_reuseFailAlloc_1493_, sizeof(void*)*5, v_initialized_1483_);
v___x_1492_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
return v___x_1492_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f___redArg___lam__1(lean_object* v_snd_1496_, lean_object* v_s_1497_){
_start:
{
lean_object* v_persistentCache_1498_; lean_object* v_internalized_1499_; uint8_t v_initialized_1500_; lean_object* v_thms_1501_; lean_object* v_preds_1502_; lean_object* v_sourceTypes_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1510_; 
v_persistentCache_1498_ = lean_ctor_get(v_snd_1496_, 1);
v_internalized_1499_ = lean_ctor_get(v_s_1497_, 1);
v_initialized_1500_ = lean_ctor_get_uint8(v_s_1497_, sizeof(void*)*5);
v_thms_1501_ = lean_ctor_get(v_s_1497_, 2);
v_preds_1502_ = lean_ctor_get(v_s_1497_, 3);
v_sourceTypes_1503_ = lean_ctor_get(v_s_1497_, 4);
v_isSharedCheck_1510_ = !lean_is_exclusive(v_s_1497_);
if (v_isSharedCheck_1510_ == 0)
{
lean_object* v_unused_1511_; 
v_unused_1511_ = lean_ctor_get(v_s_1497_, 0);
lean_dec(v_unused_1511_);
v___x_1505_ = v_s_1497_;
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
else
{
lean_inc(v_sourceTypes_1503_);
lean_inc(v_preds_1502_);
lean_inc(v_thms_1501_);
lean_inc(v_internalized_1499_);
lean_dec(v_s_1497_);
v___x_1505_ = lean_box(0);
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
v_resetjp_1504_:
{
lean_object* v___x_1508_; 
lean_inc_ref(v_persistentCache_1498_);
if (v_isShared_1506_ == 0)
{
lean_ctor_set(v___x_1505_, 0, v_persistentCache_1498_);
v___x_1508_ = v___x_1505_;
goto v_reusejp_1507_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v_persistentCache_1498_);
lean_ctor_set(v_reuseFailAlloc_1509_, 1, v_internalized_1499_);
lean_ctor_set(v_reuseFailAlloc_1509_, 2, v_thms_1501_);
lean_ctor_set(v_reuseFailAlloc_1509_, 3, v_preds_1502_);
lean_ctor_set(v_reuseFailAlloc_1509_, 4, v_sourceTypes_1503_);
lean_ctor_set_uint8(v_reuseFailAlloc_1509_, sizeof(void*)*5, v_initialized_1500_);
v___x_1508_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1507_;
}
v_reusejp_1507_:
{
return v___x_1508_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f___redArg___lam__1___boxed(lean_object* v_snd_1512_, lean_object* v_s_1513_){
_start:
{
lean_object* v_res_1514_; 
v_res_1514_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f___redArg___lam__1(v_snd_1512_, v_s_1513_);
lean_dec_ref(v_snd_1512_);
return v_res_1514_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f___redArg(lean_object* v_e_1519_, lean_object* v_a_1520_, lean_object* v_a_1521_, lean_object* v_a_1522_, lean_object* v_a_1523_, lean_object* v_a_1524_, lean_object* v_a_1525_, lean_object* v_a_1526_){
_start:
{
lean_object* v___f_1528_; lean_object* v___x_1529_; 
v___f_1528_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f___redArg___closed__0));
v___x_1529_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter___redArg(v_a_1520_, v_a_1525_, v_a_1526_);
if (lean_obj_tag(v___x_1529_) == 0)
{
lean_object* v_a_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; 
v_a_1530_ = lean_ctor_get(v___x_1529_, 0);
lean_inc_n(v_a_1530_, 2);
lean_dec_ref_known(v___x_1529_, 1);
v___x_1531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1531_, 0, v_a_1530_);
lean_ctor_set(v___x_1531_, 1, v_a_1530_);
v___x_1532_ = l_Lean_Meta_Grind_Homo_homExt;
v___x_1533_ = l_Lean_Meta_Grind_SolverExtension_getState___redArg(v___x_1532_, v_a_1520_, v_a_1525_);
if (lean_obj_tag(v___x_1533_) == 0)
{
lean_object* v_a_1534_; lean_object* v_cache_1535_; lean_object* v___x_1536_; 
v_a_1534_ = lean_ctor_get(v___x_1533_, 0);
lean_inc(v_a_1534_);
lean_dec_ref_known(v___x_1533_, 1);
v_cache_1535_ = lean_ctor_get(v_a_1534_, 0);
lean_inc_ref(v_cache_1535_);
lean_dec(v_a_1534_);
v___x_1536_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_1532_, v___f_1528_, v_a_1520_);
if (lean_obj_tag(v___x_1536_) == 0)
{
lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; 
lean_dec_ref_known(v___x_1536_, 1);
v___x_1537_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simp___boxed), 11, 1);
lean_closure_set(v___x_1537_, 0, v_e_1519_);
v___x_1538_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f___redArg___closed__1));
v___x_1539_ = lean_unsigned_to_nat(0u);
v___x_1540_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2_);
v___x_1541_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1541_, 0, v___x_1539_);
lean_ctor_set(v___x_1541_, 1, v_cache_1535_);
lean_ctor_set(v___x_1541_, 2, v___x_1540_);
lean_ctor_set(v___x_1541_, 3, v___x_1540_);
v___x_1542_ = l_Lean_Meta_Sym_Simp_SimpM_run___redArg(v___x_1537_, v___x_1531_, v___x_1538_, v___x_1541_, v_a_1521_, v_a_1522_, v_a_1523_, v_a_1524_, v_a_1525_, v_a_1526_);
if (lean_obj_tag(v___x_1542_) == 0)
{
lean_object* v_a_1543_; lean_object* v_fst_1544_; lean_object* v_snd_1545_; lean_object* v___x_1547_; uint8_t v_isShared_1548_; uint8_t v_isSharedCheck_1577_; 
v_a_1543_ = lean_ctor_get(v___x_1542_, 0);
lean_inc(v_a_1543_);
lean_dec_ref_known(v___x_1542_, 1);
v_fst_1544_ = lean_ctor_get(v_a_1543_, 0);
v_snd_1545_ = lean_ctor_get(v_a_1543_, 1);
v_isSharedCheck_1577_ = !lean_is_exclusive(v_a_1543_);
if (v_isSharedCheck_1577_ == 0)
{
v___x_1547_ = v_a_1543_;
v_isShared_1548_ = v_isSharedCheck_1577_;
goto v_resetjp_1546_;
}
else
{
lean_inc(v_snd_1545_);
lean_inc(v_fst_1544_);
lean_dec(v_a_1543_);
v___x_1547_ = lean_box(0);
v_isShared_1548_ = v_isSharedCheck_1577_;
goto v_resetjp_1546_;
}
v_resetjp_1546_:
{
lean_object* v___f_1549_; lean_object* v___x_1550_; 
v___f_1549_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_1549_, 0, v_snd_1545_);
v___x_1550_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_1532_, v___f_1549_, v_a_1520_);
if (lean_obj_tag(v___x_1550_) == 0)
{
lean_object* v___x_1552_; uint8_t v_isShared_1553_; uint8_t v_isSharedCheck_1567_; 
v_isSharedCheck_1567_ = !lean_is_exclusive(v___x_1550_);
if (v_isSharedCheck_1567_ == 0)
{
lean_object* v_unused_1568_; 
v_unused_1568_ = lean_ctor_get(v___x_1550_, 0);
lean_dec(v_unused_1568_);
v___x_1552_ = v___x_1550_;
v_isShared_1553_ = v_isSharedCheck_1567_;
goto v_resetjp_1551_;
}
else
{
lean_dec(v___x_1550_);
v___x_1552_ = lean_box(0);
v_isShared_1553_ = v_isSharedCheck_1567_;
goto v_resetjp_1551_;
}
v_resetjp_1551_:
{
if (lean_obj_tag(v_fst_1544_) == 1)
{
lean_object* v_e_x27_1554_; lean_object* v_proof_1555_; lean_object* v___x_1557_; 
v_e_x27_1554_ = lean_ctor_get(v_fst_1544_, 0);
lean_inc_ref(v_e_x27_1554_);
v_proof_1555_ = lean_ctor_get(v_fst_1544_, 1);
lean_inc_ref(v_proof_1555_);
lean_dec_ref_known(v_fst_1544_, 2);
if (v_isShared_1548_ == 0)
{
lean_ctor_set(v___x_1547_, 1, v_proof_1555_);
lean_ctor_set(v___x_1547_, 0, v_e_x27_1554_);
v___x_1557_ = v___x_1547_;
goto v_reusejp_1556_;
}
else
{
lean_object* v_reuseFailAlloc_1562_; 
v_reuseFailAlloc_1562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1562_, 0, v_e_x27_1554_);
lean_ctor_set(v_reuseFailAlloc_1562_, 1, v_proof_1555_);
v___x_1557_ = v_reuseFailAlloc_1562_;
goto v_reusejp_1556_;
}
v_reusejp_1556_:
{
lean_object* v___x_1558_; lean_object* v___x_1560_; 
v___x_1558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1558_, 0, v___x_1557_);
if (v_isShared_1553_ == 0)
{
lean_ctor_set(v___x_1552_, 0, v___x_1558_);
v___x_1560_ = v___x_1552_;
goto v_reusejp_1559_;
}
else
{
lean_object* v_reuseFailAlloc_1561_; 
v_reuseFailAlloc_1561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1561_, 0, v___x_1558_);
v___x_1560_ = v_reuseFailAlloc_1561_;
goto v_reusejp_1559_;
}
v_reusejp_1559_:
{
return v___x_1560_;
}
}
}
else
{
lean_object* v___x_1563_; lean_object* v___x_1565_; 
lean_del_object(v___x_1547_);
lean_dec(v_fst_1544_);
v___x_1563_ = lean_box(0);
if (v_isShared_1553_ == 0)
{
lean_ctor_set(v___x_1552_, 0, v___x_1563_);
v___x_1565_ = v___x_1552_;
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
else
{
lean_object* v_a_1569_; lean_object* v___x_1571_; uint8_t v_isShared_1572_; uint8_t v_isSharedCheck_1576_; 
lean_del_object(v___x_1547_);
lean_dec(v_fst_1544_);
v_a_1569_ = lean_ctor_get(v___x_1550_, 0);
v_isSharedCheck_1576_ = !lean_is_exclusive(v___x_1550_);
if (v_isSharedCheck_1576_ == 0)
{
v___x_1571_ = v___x_1550_;
v_isShared_1572_ = v_isSharedCheck_1576_;
goto v_resetjp_1570_;
}
else
{
lean_inc(v_a_1569_);
lean_dec(v___x_1550_);
v___x_1571_ = lean_box(0);
v_isShared_1572_ = v_isSharedCheck_1576_;
goto v_resetjp_1570_;
}
v_resetjp_1570_:
{
lean_object* v___x_1574_; 
if (v_isShared_1572_ == 0)
{
v___x_1574_ = v___x_1571_;
goto v_reusejp_1573_;
}
else
{
lean_object* v_reuseFailAlloc_1575_; 
v_reuseFailAlloc_1575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1575_, 0, v_a_1569_);
v___x_1574_ = v_reuseFailAlloc_1575_;
goto v_reusejp_1573_;
}
v_reusejp_1573_:
{
return v___x_1574_;
}
}
}
}
}
else
{
lean_object* v_a_1578_; lean_object* v___x_1580_; uint8_t v_isShared_1581_; uint8_t v_isSharedCheck_1585_; 
v_a_1578_ = lean_ctor_get(v___x_1542_, 0);
v_isSharedCheck_1585_ = !lean_is_exclusive(v___x_1542_);
if (v_isSharedCheck_1585_ == 0)
{
v___x_1580_ = v___x_1542_;
v_isShared_1581_ = v_isSharedCheck_1585_;
goto v_resetjp_1579_;
}
else
{
lean_inc(v_a_1578_);
lean_dec(v___x_1542_);
v___x_1580_ = lean_box(0);
v_isShared_1581_ = v_isSharedCheck_1585_;
goto v_resetjp_1579_;
}
v_resetjp_1579_:
{
lean_object* v___x_1583_; 
if (v_isShared_1581_ == 0)
{
v___x_1583_ = v___x_1580_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v_a_1578_);
v___x_1583_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
return v___x_1583_;
}
}
}
}
else
{
lean_object* v_a_1586_; lean_object* v___x_1588_; uint8_t v_isShared_1589_; uint8_t v_isSharedCheck_1593_; 
lean_dec_ref(v_cache_1535_);
lean_dec_ref_known(v___x_1531_, 2);
lean_dec_ref(v_e_1519_);
v_a_1586_ = lean_ctor_get(v___x_1536_, 0);
v_isSharedCheck_1593_ = !lean_is_exclusive(v___x_1536_);
if (v_isSharedCheck_1593_ == 0)
{
v___x_1588_ = v___x_1536_;
v_isShared_1589_ = v_isSharedCheck_1593_;
goto v_resetjp_1587_;
}
else
{
lean_inc(v_a_1586_);
lean_dec(v___x_1536_);
v___x_1588_ = lean_box(0);
v_isShared_1589_ = v_isSharedCheck_1593_;
goto v_resetjp_1587_;
}
v_resetjp_1587_:
{
lean_object* v___x_1591_; 
if (v_isShared_1589_ == 0)
{
v___x_1591_ = v___x_1588_;
goto v_reusejp_1590_;
}
else
{
lean_object* v_reuseFailAlloc_1592_; 
v_reuseFailAlloc_1592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1592_, 0, v_a_1586_);
v___x_1591_ = v_reuseFailAlloc_1592_;
goto v_reusejp_1590_;
}
v_reusejp_1590_:
{
return v___x_1591_;
}
}
}
}
else
{
lean_object* v_a_1594_; lean_object* v___x_1596_; uint8_t v_isShared_1597_; uint8_t v_isSharedCheck_1601_; 
lean_dec_ref_known(v___x_1531_, 2);
lean_dec_ref(v_e_1519_);
v_a_1594_ = lean_ctor_get(v___x_1533_, 0);
v_isSharedCheck_1601_ = !lean_is_exclusive(v___x_1533_);
if (v_isSharedCheck_1601_ == 0)
{
v___x_1596_ = v___x_1533_;
v_isShared_1597_ = v_isSharedCheck_1601_;
goto v_resetjp_1595_;
}
else
{
lean_inc(v_a_1594_);
lean_dec(v___x_1533_);
v___x_1596_ = lean_box(0);
v_isShared_1597_ = v_isSharedCheck_1601_;
goto v_resetjp_1595_;
}
v_resetjp_1595_:
{
lean_object* v___x_1599_; 
if (v_isShared_1597_ == 0)
{
v___x_1599_ = v___x_1596_;
goto v_reusejp_1598_;
}
else
{
lean_object* v_reuseFailAlloc_1600_; 
v_reuseFailAlloc_1600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1600_, 0, v_a_1594_);
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
lean_dec_ref(v_e_1519_);
v_a_1602_ = lean_ctor_get(v___x_1529_, 0);
v_isSharedCheck_1609_ = !lean_is_exclusive(v___x_1529_);
if (v_isSharedCheck_1609_ == 0)
{
v___x_1604_ = v___x_1529_;
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_a_1602_);
lean_dec(v___x_1529_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f___redArg___boxed(lean_object* v_e_1610_, lean_object* v_a_1611_, lean_object* v_a_1612_, lean_object* v_a_1613_, lean_object* v_a_1614_, lean_object* v_a_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_, lean_object* v_a_1618_){
_start:
{
lean_object* v_res_1619_; 
v_res_1619_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f___redArg(v_e_1610_, v_a_1611_, v_a_1612_, v_a_1613_, v_a_1614_, v_a_1615_, v_a_1616_, v_a_1617_);
lean_dec(v_a_1617_);
lean_dec_ref(v_a_1616_);
lean_dec(v_a_1615_);
lean_dec_ref(v_a_1614_);
lean_dec(v_a_1613_);
lean_dec_ref(v_a_1612_);
lean_dec(v_a_1611_);
return v_res_1619_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f(lean_object* v_e_1620_, lean_object* v_a_1621_, lean_object* v_a_1622_, lean_object* v_a_1623_, lean_object* v_a_1624_, lean_object* v_a_1625_, lean_object* v_a_1626_, lean_object* v_a_1627_, lean_object* v_a_1628_, lean_object* v_a_1629_, lean_object* v_a_1630_){
_start:
{
lean_object* v___x_1632_; 
v___x_1632_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f___redArg(v_e_1620_, v_a_1621_, v_a_1625_, v_a_1626_, v_a_1627_, v_a_1628_, v_a_1629_, v_a_1630_);
return v___x_1632_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f___boxed(lean_object* v_e_1633_, lean_object* v_a_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_, lean_object* v_a_1637_, lean_object* v_a_1638_, lean_object* v_a_1639_, lean_object* v_a_1640_, lean_object* v_a_1641_, lean_object* v_a_1642_, lean_object* v_a_1643_, lean_object* v_a_1644_){
_start:
{
lean_object* v_res_1645_; 
v_res_1645_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f(v_e_1633_, v_a_1634_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_, v_a_1639_, v_a_1640_, v_a_1641_, v_a_1642_, v_a_1643_);
lean_dec(v_a_1643_);
lean_dec_ref(v_a_1642_);
lean_dec(v_a_1641_);
lean_dec_ref(v_a_1640_);
lean_dec(v_a_1639_);
lean_dec_ref(v_a_1638_);
lean_dec(v_a_1637_);
lean_dec_ref(v_a_1636_);
lean_dec(v_a_1635_);
lean_dec(v_a_1634_);
return v_res_1645_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_isForbidden(lean_object* v_e_1651_){
_start:
{
lean_object* v___x_1652_; 
v___x_1652_ = l_Lean_Expr_getAppFn(v_e_1651_);
switch(lean_obj_tag(v___x_1652_))
{
case 4:
{
lean_object* v_declName_1653_; lean_object* v___x_1654_; uint8_t v___x_1655_; 
v_declName_1653_ = lean_ctor_get(v___x_1652_, 0);
lean_inc(v_declName_1653_);
lean_dec_ref_known(v___x_1652_, 2);
v___x_1654_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_isForbidden___closed__0));
v___x_1655_ = lean_name_eq(v_declName_1653_, v___x_1654_);
if (v___x_1655_ == 0)
{
lean_object* v___x_1656_; uint8_t v___x_1657_; 
v___x_1656_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_isForbidden___closed__2));
v___x_1657_ = lean_name_eq(v_declName_1653_, v___x_1656_);
lean_dec(v_declName_1653_);
return v___x_1657_;
}
else
{
lean_dec(v_declName_1653_);
return v___x_1655_;
}
}
case 9:
{
lean_object* v_a_1658_; 
v_a_1658_ = lean_ctor_get(v___x_1652_, 0);
lean_inc_ref(v_a_1658_);
lean_dec_ref_known(v___x_1652_, 1);
if (lean_obj_tag(v_a_1658_) == 0)
{
uint8_t v___x_1659_; 
lean_dec_ref_known(v_a_1658_, 1);
v___x_1659_ = 1;
return v___x_1659_;
}
else
{
uint8_t v___x_1660_; 
lean_dec_ref(v_a_1658_);
v___x_1660_ = 0;
return v___x_1660_;
}
}
default: 
{
uint8_t v___x_1661_; 
lean_dec_ref(v___x_1652_);
v___x_1661_ = 0;
return v___x_1661_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_isForbidden___boxed(lean_object* v_e_1662_){
_start:
{
uint8_t v_res_1663_; lean_object* v_r_1664_; 
v_res_1663_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_isForbidden(v_e_1662_);
lean_dec_ref(v_e_1662_);
v_r_1664_ = lean_box(v_res_1663_);
return v_r_1664_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_1665_, lean_object* v_x_1666_, lean_object* v_x_1667_, lean_object* v_x_1668_){
_start:
{
lean_object* v_ks_1669_; lean_object* v_vs_1670_; lean_object* v___x_1672_; uint8_t v_isShared_1673_; uint8_t v_isSharedCheck_1696_; 
v_ks_1669_ = lean_ctor_get(v_x_1665_, 0);
v_vs_1670_ = lean_ctor_get(v_x_1665_, 1);
v_isSharedCheck_1696_ = !lean_is_exclusive(v_x_1665_);
if (v_isSharedCheck_1696_ == 0)
{
v___x_1672_ = v_x_1665_;
v_isShared_1673_ = v_isSharedCheck_1696_;
goto v_resetjp_1671_;
}
else
{
lean_inc(v_vs_1670_);
lean_inc(v_ks_1669_);
lean_dec(v_x_1665_);
v___x_1672_ = lean_box(0);
v_isShared_1673_ = v_isSharedCheck_1696_;
goto v_resetjp_1671_;
}
v_resetjp_1671_:
{
lean_object* v___x_1674_; uint8_t v___x_1675_; 
v___x_1674_ = lean_array_get_size(v_ks_1669_);
v___x_1675_ = lean_nat_dec_lt(v_x_1666_, v___x_1674_);
if (v___x_1675_ == 0)
{
lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1679_; 
lean_dec(v_x_1666_);
v___x_1676_ = lean_array_push(v_ks_1669_, v_x_1667_);
v___x_1677_ = lean_array_push(v_vs_1670_, v_x_1668_);
if (v_isShared_1673_ == 0)
{
lean_ctor_set(v___x_1672_, 1, v___x_1677_);
lean_ctor_set(v___x_1672_, 0, v___x_1676_);
v___x_1679_ = v___x_1672_;
goto v_reusejp_1678_;
}
else
{
lean_object* v_reuseFailAlloc_1680_; 
v_reuseFailAlloc_1680_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1680_, 0, v___x_1676_);
lean_ctor_set(v_reuseFailAlloc_1680_, 1, v___x_1677_);
v___x_1679_ = v_reuseFailAlloc_1680_;
goto v_reusejp_1678_;
}
v_reusejp_1678_:
{
return v___x_1679_;
}
}
else
{
lean_object* v_k_x27_1681_; size_t v___x_1682_; size_t v___x_1683_; uint8_t v___x_1684_; 
v_k_x27_1681_ = lean_array_fget_borrowed(v_ks_1669_, v_x_1666_);
v___x_1682_ = lean_ptr_addr(v_x_1667_);
v___x_1683_ = lean_ptr_addr(v_k_x27_1681_);
v___x_1684_ = lean_usize_dec_eq(v___x_1682_, v___x_1683_);
if (v___x_1684_ == 0)
{
lean_object* v___x_1686_; 
if (v_isShared_1673_ == 0)
{
v___x_1686_ = v___x_1672_;
goto v_reusejp_1685_;
}
else
{
lean_object* v_reuseFailAlloc_1690_; 
v_reuseFailAlloc_1690_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1690_, 0, v_ks_1669_);
lean_ctor_set(v_reuseFailAlloc_1690_, 1, v_vs_1670_);
v___x_1686_ = v_reuseFailAlloc_1690_;
goto v_reusejp_1685_;
}
v_reusejp_1685_:
{
lean_object* v___x_1687_; lean_object* v___x_1688_; 
v___x_1687_ = lean_unsigned_to_nat(1u);
v___x_1688_ = lean_nat_add(v_x_1666_, v___x_1687_);
lean_dec(v_x_1666_);
v_x_1665_ = v___x_1686_;
v_x_1666_ = v___x_1688_;
goto _start;
}
}
else
{
lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1694_; 
v___x_1691_ = lean_array_fset(v_ks_1669_, v_x_1666_, v_x_1667_);
v___x_1692_ = lean_array_fset(v_vs_1670_, v_x_1666_, v_x_1668_);
lean_dec(v_x_1666_);
if (v_isShared_1673_ == 0)
{
lean_ctor_set(v___x_1672_, 1, v___x_1692_);
lean_ctor_set(v___x_1672_, 0, v___x_1691_);
v___x_1694_ = v___x_1672_;
goto v_reusejp_1693_;
}
else
{
lean_object* v_reuseFailAlloc_1695_; 
v_reuseFailAlloc_1695_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1695_, 0, v___x_1691_);
lean_ctor_set(v_reuseFailAlloc_1695_, 1, v___x_1692_);
v___x_1694_ = v_reuseFailAlloc_1695_;
goto v_reusejp_1693_;
}
v_reusejp_1693_:
{
return v___x_1694_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0_spec__1___redArg(lean_object* v_n_1697_, lean_object* v_k_1698_, lean_object* v_v_1699_){
_start:
{
lean_object* v___x_1700_; lean_object* v___x_1701_; 
v___x_1700_ = lean_unsigned_to_nat(0u);
v___x_1701_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0_spec__1_spec__2___redArg(v_n_1697_, v___x_1700_, v_k_1698_, v_v_1699_);
return v___x_1701_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1702_; 
v___x_1702_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1702_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0___redArg(lean_object* v_x_1703_, size_t v_x_1704_, size_t v_x_1705_, lean_object* v_x_1706_, lean_object* v_x_1707_){
_start:
{
if (lean_obj_tag(v_x_1703_) == 0)
{
lean_object* v_es_1708_; size_t v___x_1709_; size_t v___x_1710_; lean_object* v_j_1711_; lean_object* v___x_1712_; uint8_t v___x_1713_; 
v_es_1708_ = lean_ctor_get(v_x_1703_, 0);
v___x_1709_ = ((size_t)31ULL);
v___x_1710_ = lean_usize_land(v_x_1704_, v___x_1709_);
v_j_1711_ = lean_usize_to_nat(v___x_1710_);
v___x_1712_ = lean_array_get_size(v_es_1708_);
v___x_1713_ = lean_nat_dec_lt(v_j_1711_, v___x_1712_);
if (v___x_1713_ == 0)
{
lean_dec(v_j_1711_);
lean_dec(v_x_1707_);
lean_dec_ref(v_x_1706_);
return v_x_1703_;
}
else
{
lean_object* v___x_1715_; uint8_t v_isShared_1716_; uint8_t v_isSharedCheck_1754_; 
lean_inc_ref(v_es_1708_);
v_isSharedCheck_1754_ = !lean_is_exclusive(v_x_1703_);
if (v_isSharedCheck_1754_ == 0)
{
lean_object* v_unused_1755_; 
v_unused_1755_ = lean_ctor_get(v_x_1703_, 0);
lean_dec(v_unused_1755_);
v___x_1715_ = v_x_1703_;
v_isShared_1716_ = v_isSharedCheck_1754_;
goto v_resetjp_1714_;
}
else
{
lean_dec(v_x_1703_);
v___x_1715_ = lean_box(0);
v_isShared_1716_ = v_isSharedCheck_1754_;
goto v_resetjp_1714_;
}
v_resetjp_1714_:
{
lean_object* v_v_1717_; lean_object* v___x_1718_; lean_object* v_xs_x27_1719_; lean_object* v___y_1721_; 
v_v_1717_ = lean_array_fget(v_es_1708_, v_j_1711_);
v___x_1718_ = lean_box(0);
v_xs_x27_1719_ = lean_array_fset(v_es_1708_, v_j_1711_, v___x_1718_);
switch(lean_obj_tag(v_v_1717_))
{
case 0:
{
lean_object* v_key_1726_; lean_object* v_val_1727_; lean_object* v___x_1729_; uint8_t v_isShared_1730_; uint8_t v_isSharedCheck_1739_; 
v_key_1726_ = lean_ctor_get(v_v_1717_, 0);
v_val_1727_ = lean_ctor_get(v_v_1717_, 1);
v_isSharedCheck_1739_ = !lean_is_exclusive(v_v_1717_);
if (v_isSharedCheck_1739_ == 0)
{
v___x_1729_ = v_v_1717_;
v_isShared_1730_ = v_isSharedCheck_1739_;
goto v_resetjp_1728_;
}
else
{
lean_inc(v_val_1727_);
lean_inc(v_key_1726_);
lean_dec(v_v_1717_);
v___x_1729_ = lean_box(0);
v_isShared_1730_ = v_isSharedCheck_1739_;
goto v_resetjp_1728_;
}
v_resetjp_1728_:
{
size_t v___x_1731_; size_t v___x_1732_; uint8_t v___x_1733_; 
v___x_1731_ = lean_ptr_addr(v_x_1706_);
v___x_1732_ = lean_ptr_addr(v_key_1726_);
v___x_1733_ = lean_usize_dec_eq(v___x_1731_, v___x_1732_);
if (v___x_1733_ == 0)
{
lean_object* v___x_1734_; lean_object* v___x_1735_; 
lean_del_object(v___x_1729_);
v___x_1734_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1726_, v_val_1727_, v_x_1706_, v_x_1707_);
v___x_1735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1735_, 0, v___x_1734_);
v___y_1721_ = v___x_1735_;
goto v___jp_1720_;
}
else
{
lean_object* v___x_1737_; 
lean_dec(v_val_1727_);
lean_dec(v_key_1726_);
if (v_isShared_1730_ == 0)
{
lean_ctor_set(v___x_1729_, 1, v_x_1707_);
lean_ctor_set(v___x_1729_, 0, v_x_1706_);
v___x_1737_ = v___x_1729_;
goto v_reusejp_1736_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v_x_1706_);
lean_ctor_set(v_reuseFailAlloc_1738_, 1, v_x_1707_);
v___x_1737_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1736_;
}
v_reusejp_1736_:
{
v___y_1721_ = v___x_1737_;
goto v___jp_1720_;
}
}
}
}
case 1:
{
lean_object* v_node_1740_; lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1752_; 
v_node_1740_ = lean_ctor_get(v_v_1717_, 0);
v_isSharedCheck_1752_ = !lean_is_exclusive(v_v_1717_);
if (v_isSharedCheck_1752_ == 0)
{
v___x_1742_ = v_v_1717_;
v_isShared_1743_ = v_isSharedCheck_1752_;
goto v_resetjp_1741_;
}
else
{
lean_inc(v_node_1740_);
lean_dec(v_v_1717_);
v___x_1742_ = lean_box(0);
v_isShared_1743_ = v_isSharedCheck_1752_;
goto v_resetjp_1741_;
}
v_resetjp_1741_:
{
size_t v___x_1744_; size_t v___x_1745_; size_t v___x_1746_; size_t v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1750_; 
v___x_1744_ = ((size_t)5ULL);
v___x_1745_ = lean_usize_shift_right(v_x_1704_, v___x_1744_);
v___x_1746_ = ((size_t)1ULL);
v___x_1747_ = lean_usize_add(v_x_1705_, v___x_1746_);
v___x_1748_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0___redArg(v_node_1740_, v___x_1745_, v___x_1747_, v_x_1706_, v_x_1707_);
if (v_isShared_1743_ == 0)
{
lean_ctor_set(v___x_1742_, 0, v___x_1748_);
v___x_1750_ = v___x_1742_;
goto v_reusejp_1749_;
}
else
{
lean_object* v_reuseFailAlloc_1751_; 
v_reuseFailAlloc_1751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1751_, 0, v___x_1748_);
v___x_1750_ = v_reuseFailAlloc_1751_;
goto v_reusejp_1749_;
}
v_reusejp_1749_:
{
v___y_1721_ = v___x_1750_;
goto v___jp_1720_;
}
}
}
default: 
{
lean_object* v___x_1753_; 
v___x_1753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1753_, 0, v_x_1706_);
lean_ctor_set(v___x_1753_, 1, v_x_1707_);
v___y_1721_ = v___x_1753_;
goto v___jp_1720_;
}
}
v___jp_1720_:
{
lean_object* v___x_1722_; lean_object* v___x_1724_; 
v___x_1722_ = lean_array_fset(v_xs_x27_1719_, v_j_1711_, v___y_1721_);
lean_dec(v_j_1711_);
if (v_isShared_1716_ == 0)
{
lean_ctor_set(v___x_1715_, 0, v___x_1722_);
v___x_1724_ = v___x_1715_;
goto v_reusejp_1723_;
}
else
{
lean_object* v_reuseFailAlloc_1725_; 
v_reuseFailAlloc_1725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1725_, 0, v___x_1722_);
v___x_1724_ = v_reuseFailAlloc_1725_;
goto v_reusejp_1723_;
}
v_reusejp_1723_:
{
return v___x_1724_;
}
}
}
}
}
else
{
lean_object* v_ks_1756_; lean_object* v_vs_1757_; lean_object* v___x_1759_; uint8_t v_isShared_1760_; uint8_t v_isSharedCheck_1775_; 
v_ks_1756_ = lean_ctor_get(v_x_1703_, 0);
v_vs_1757_ = lean_ctor_get(v_x_1703_, 1);
v_isSharedCheck_1775_ = !lean_is_exclusive(v_x_1703_);
if (v_isSharedCheck_1775_ == 0)
{
v___x_1759_ = v_x_1703_;
v_isShared_1760_ = v_isSharedCheck_1775_;
goto v_resetjp_1758_;
}
else
{
lean_inc(v_vs_1757_);
lean_inc(v_ks_1756_);
lean_dec(v_x_1703_);
v___x_1759_ = lean_box(0);
v_isShared_1760_ = v_isSharedCheck_1775_;
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
lean_object* v_reuseFailAlloc_1774_; 
v_reuseFailAlloc_1774_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1774_, 0, v_ks_1756_);
lean_ctor_set(v_reuseFailAlloc_1774_, 1, v_vs_1757_);
v___x_1762_ = v_reuseFailAlloc_1774_;
goto v_reusejp_1761_;
}
v_reusejp_1761_:
{
lean_object* v_newNode_1763_; size_t v___x_1764_; uint8_t v___x_1765_; 
v_newNode_1763_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0_spec__1___redArg(v___x_1762_, v_x_1706_, v_x_1707_);
v___x_1764_ = ((size_t)7ULL);
v___x_1765_ = lean_usize_dec_le(v___x_1764_, v_x_1705_);
if (v___x_1765_ == 0)
{
lean_object* v___x_1766_; lean_object* v___x_1767_; uint8_t v___x_1768_; 
v___x_1766_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1763_);
v___x_1767_ = lean_unsigned_to_nat(4u);
v___x_1768_ = lean_nat_dec_lt(v___x_1766_, v___x_1767_);
lean_dec(v___x_1766_);
if (v___x_1768_ == 0)
{
lean_object* v_ks_1769_; lean_object* v_vs_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; 
v_ks_1769_ = lean_ctor_get(v_newNode_1763_, 0);
lean_inc_ref(v_ks_1769_);
v_vs_1770_ = lean_ctor_get(v_newNode_1763_, 1);
lean_inc_ref(v_vs_1770_);
lean_dec_ref(v_newNode_1763_);
v___x_1771_ = lean_unsigned_to_nat(0u);
v___x_1772_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0___redArg___closed__0);
v___x_1773_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0_spec__2___redArg(v_x_1705_, v_ks_1769_, v_vs_1770_, v___x_1771_, v___x_1772_);
lean_dec_ref(v_vs_1770_);
lean_dec_ref(v_ks_1769_);
return v___x_1773_;
}
else
{
return v_newNode_1763_;
}
}
else
{
return v_newNode_1763_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0_spec__2___redArg(size_t v_depth_1776_, lean_object* v_keys_1777_, lean_object* v_vals_1778_, lean_object* v_i_1779_, lean_object* v_entries_1780_){
_start:
{
lean_object* v___x_1781_; uint8_t v___x_1782_; 
v___x_1781_ = lean_array_get_size(v_keys_1777_);
v___x_1782_ = lean_nat_dec_lt(v_i_1779_, v___x_1781_);
if (v___x_1782_ == 0)
{
lean_dec(v_i_1779_);
return v_entries_1780_;
}
else
{
lean_object* v_k_1783_; lean_object* v_v_1784_; size_t v___x_1785_; size_t v___x_1786_; size_t v___x_1787_; uint64_t v___x_1788_; size_t v_h_1789_; size_t v___x_1790_; lean_object* v___x_1791_; size_t v___x_1792_; size_t v___x_1793_; size_t v___x_1794_; size_t v_h_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; 
v_k_1783_ = lean_array_fget_borrowed(v_keys_1777_, v_i_1779_);
v_v_1784_ = lean_array_fget_borrowed(v_vals_1778_, v_i_1779_);
v___x_1785_ = lean_ptr_addr(v_k_1783_);
v___x_1786_ = ((size_t)3ULL);
v___x_1787_ = lean_usize_shift_right(v___x_1785_, v___x_1786_);
v___x_1788_ = lean_usize_to_uint64(v___x_1787_);
v_h_1789_ = lean_uint64_to_usize(v___x_1788_);
v___x_1790_ = ((size_t)5ULL);
v___x_1791_ = lean_unsigned_to_nat(1u);
v___x_1792_ = ((size_t)1ULL);
v___x_1793_ = lean_usize_sub(v_depth_1776_, v___x_1792_);
v___x_1794_ = lean_usize_mul(v___x_1790_, v___x_1793_);
v_h_1795_ = lean_usize_shift_right(v_h_1789_, v___x_1794_);
v___x_1796_ = lean_nat_add(v_i_1779_, v___x_1791_);
lean_dec(v_i_1779_);
lean_inc(v_v_1784_);
lean_inc(v_k_1783_);
v___x_1797_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0___redArg(v_entries_1780_, v_h_1795_, v_depth_1776_, v_k_1783_, v_v_1784_);
v_i_1779_ = v___x_1796_;
v_entries_1780_ = v___x_1797_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_1799_, lean_object* v_keys_1800_, lean_object* v_vals_1801_, lean_object* v_i_1802_, lean_object* v_entries_1803_){
_start:
{
size_t v_depth_boxed_1804_; lean_object* v_res_1805_; 
v_depth_boxed_1804_ = lean_unbox_usize(v_depth_1799_);
lean_dec(v_depth_1799_);
v_res_1805_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0_spec__2___redArg(v_depth_boxed_1804_, v_keys_1800_, v_vals_1801_, v_i_1802_, v_entries_1803_);
lean_dec_ref(v_vals_1801_);
lean_dec_ref(v_keys_1800_);
return v_res_1805_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0___redArg___boxed(lean_object* v_x_1806_, lean_object* v_x_1807_, lean_object* v_x_1808_, lean_object* v_x_1809_, lean_object* v_x_1810_){
_start:
{
size_t v_x_38684__boxed_1811_; size_t v_x_38685__boxed_1812_; lean_object* v_res_1813_; 
v_x_38684__boxed_1811_ = lean_unbox_usize(v_x_1807_);
lean_dec(v_x_1807_);
v_x_38685__boxed_1812_ = lean_unbox_usize(v_x_1808_);
lean_dec(v_x_1808_);
v_res_1813_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0___redArg(v_x_1806_, v_x_38684__boxed_1811_, v_x_38685__boxed_1812_, v_x_1809_, v_x_1810_);
return v_res_1813_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0___redArg(lean_object* v_x_1814_, lean_object* v_x_1815_, lean_object* v_x_1816_){
_start:
{
size_t v___x_1817_; size_t v___x_1818_; size_t v___x_1819_; uint64_t v___x_1820_; size_t v___x_1821_; size_t v___x_1822_; lean_object* v___x_1823_; 
v___x_1817_ = lean_ptr_addr(v_x_1815_);
v___x_1818_ = ((size_t)3ULL);
v___x_1819_ = lean_usize_shift_right(v___x_1817_, v___x_1818_);
v___x_1820_ = lean_usize_to_uint64(v___x_1819_);
v___x_1821_ = lean_uint64_to_usize(v___x_1820_);
v___x_1822_ = ((size_t)1ULL);
v___x_1823_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0___redArg(v_x_1814_, v___x_1821_, v___x_1822_, v_x_1815_, v_x_1816_);
return v___x_1823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Homo_internalize___redArg___lam__0(lean_object* v_e_1824_, lean_object* v_s_1825_){
_start:
{
lean_object* v_cache_1826_; lean_object* v_internalized_1827_; uint8_t v_initialized_1828_; lean_object* v_thms_1829_; lean_object* v_preds_1830_; lean_object* v_sourceTypes_1831_; lean_object* v___x_1833_; uint8_t v_isShared_1834_; uint8_t v_isSharedCheck_1840_; 
v_cache_1826_ = lean_ctor_get(v_s_1825_, 0);
v_internalized_1827_ = lean_ctor_get(v_s_1825_, 1);
v_initialized_1828_ = lean_ctor_get_uint8(v_s_1825_, sizeof(void*)*5);
v_thms_1829_ = lean_ctor_get(v_s_1825_, 2);
v_preds_1830_ = lean_ctor_get(v_s_1825_, 3);
v_sourceTypes_1831_ = lean_ctor_get(v_s_1825_, 4);
v_isSharedCheck_1840_ = !lean_is_exclusive(v_s_1825_);
if (v_isSharedCheck_1840_ == 0)
{
v___x_1833_ = v_s_1825_;
v_isShared_1834_ = v_isSharedCheck_1840_;
goto v_resetjp_1832_;
}
else
{
lean_inc(v_sourceTypes_1831_);
lean_inc(v_preds_1830_);
lean_inc(v_thms_1829_);
lean_inc(v_internalized_1827_);
lean_inc(v_cache_1826_);
lean_dec(v_s_1825_);
v___x_1833_ = lean_box(0);
v_isShared_1834_ = v_isSharedCheck_1840_;
goto v_resetjp_1832_;
}
v_resetjp_1832_:
{
lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1838_; 
v___x_1835_ = lean_box(0);
v___x_1836_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0___redArg(v_internalized_1827_, v_e_1824_, v___x_1835_);
if (v_isShared_1834_ == 0)
{
lean_ctor_set(v___x_1833_, 1, v___x_1836_);
v___x_1838_ = v___x_1833_;
goto v_reusejp_1837_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v_cache_1826_);
lean_ctor_set(v_reuseFailAlloc_1839_, 1, v___x_1836_);
lean_ctor_set(v_reuseFailAlloc_1839_, 2, v_thms_1829_);
lean_ctor_set(v_reuseFailAlloc_1839_, 3, v_preds_1830_);
lean_ctor_set(v_reuseFailAlloc_1839_, 4, v_sourceTypes_1831_);
lean_ctor_set_uint8(v_reuseFailAlloc_1839_, sizeof(void*)*5, v_initialized_1828_);
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
static lean_object* _init_l_Lean_Meta_Grind_Homo_internalize___redArg___closed__0(void){
_start:
{
lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; 
v___x_1841_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_));
v___x_1842_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__1___closed__1));
v___x_1843_ = l_Lean_Name_append(v___x_1842_, v___x_1841_);
return v___x_1843_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Homo_internalize___redArg___closed__2(void){
_start:
{
lean_object* v___x_1845_; lean_object* v___x_1846_; 
v___x_1845_ = ((lean_object*)(l_Lean_Meta_Grind_Homo_internalize___redArg___closed__1));
v___x_1846_ = l_Lean_stringToMessageData(v___x_1845_);
return v___x_1846_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Homo_internalize___redArg(lean_object* v_e_1847_, lean_object* v_a_1848_, lean_object* v_a_1849_, lean_object* v_a_1850_, lean_object* v_a_1851_, lean_object* v_a_1852_, lean_object* v_a_1853_, lean_object* v_a_1854_, lean_object* v_a_1855_, lean_object* v_a_1856_, lean_object* v_a_1857_){
_start:
{
lean_object* v___f_1862_; lean_object* v___x_1863_; 
lean_inc_ref(v_e_1847_);
v___f_1862_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Homo_internalize___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1862_, 0, v_e_1847_);
v___x_1863_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_1850_);
if (lean_obj_tag(v___x_1863_) == 0)
{
lean_object* v_a_1864_; lean_object* v___x_1866_; uint8_t v_isShared_1867_; uint8_t v_isSharedCheck_1985_; 
v_a_1864_ = lean_ctor_get(v___x_1863_, 0);
v_isSharedCheck_1985_ = !lean_is_exclusive(v___x_1863_);
if (v_isSharedCheck_1985_ == 0)
{
v___x_1866_ = v___x_1863_;
v_isShared_1867_ = v_isSharedCheck_1985_;
goto v_resetjp_1865_;
}
else
{
lean_inc(v_a_1864_);
lean_dec(v___x_1863_);
v___x_1866_ = lean_box(0);
v_isShared_1867_ = v_isSharedCheck_1985_;
goto v_resetjp_1865_;
}
v_resetjp_1865_:
{
uint8_t v_hom_1868_; 
v_hom_1868_ = lean_ctor_get_uint8(v_a_1864_, sizeof(void*)*18 + 25);
lean_dec(v_a_1864_);
if (v_hom_1868_ == 0)
{
lean_object* v___x_1869_; lean_object* v___x_1871_; 
lean_dec_ref(v___f_1862_);
lean_dec_ref(v_e_1847_);
v___x_1869_ = lean_box(0);
if (v_isShared_1867_ == 0)
{
lean_ctor_set(v___x_1866_, 0, v___x_1869_);
v___x_1871_ = v___x_1866_;
goto v_reusejp_1870_;
}
else
{
lean_object* v_reuseFailAlloc_1872_; 
v_reuseFailAlloc_1872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1872_, 0, v___x_1869_);
v___x_1871_ = v_reuseFailAlloc_1872_;
goto v_reusejp_1870_;
}
v_reusejp_1870_:
{
return v___x_1871_;
}
}
else
{
uint8_t v___x_1873_; 
lean_del_object(v___x_1866_);
v___x_1873_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_isForbidden(v_e_1847_);
if (v___x_1873_ == 0)
{
lean_object* v___x_1874_; lean_object* v___x_1875_; 
v___x_1874_ = l_Lean_Meta_Grind_Homo_homExt;
v___x_1875_ = l_Lean_Meta_Grind_SolverExtension_getState___redArg(v___x_1874_, v_a_1848_, v_a_1856_);
if (lean_obj_tag(v___x_1875_) == 0)
{
lean_object* v_a_1876_; lean_object* v_internalized_1877_; uint8_t v___x_1878_; 
v_a_1876_ = lean_ctor_get(v___x_1875_, 0);
lean_inc(v_a_1876_);
lean_dec_ref_known(v___x_1875_, 1);
v_internalized_1877_ = lean_ctor_get(v_a_1876_, 1);
lean_inc_ref(v_internalized_1877_);
lean_dec(v_a_1876_);
v___x_1878_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_mkRewriter_spec__0___redArg(v_internalized_1877_, v_e_1847_);
lean_dec_ref(v_internalized_1877_);
if (v___x_1878_ == 0)
{
lean_object* v___x_1879_; 
v___x_1879_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_1874_, v___f_1862_, v_a_1848_);
if (lean_obj_tag(v___x_1879_) == 0)
{
lean_object* v___x_1880_; 
lean_dec_ref_known(v___x_1879_, 1);
lean_inc_ref(v_e_1847_);
v___x_1880_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_markSourceTerm(v_e_1847_, v_a_1848_, v_a_1849_, v_a_1850_, v_a_1851_, v_a_1852_, v_a_1853_, v_a_1854_, v_a_1855_, v_a_1856_, v_a_1857_);
if (lean_obj_tag(v___x_1880_) == 0)
{
lean_object* v___x_1881_; 
lean_dec_ref_known(v___x_1880_, 1);
v___x_1881_ = l_Lean_Meta_Grind_getGeneration___redArg(v_e_1847_, v_a_1848_);
if (lean_obj_tag(v___x_1881_) == 0)
{
lean_object* v_a_1882_; lean_object* v___x_1883_; 
v_a_1882_ = lean_ctor_get(v___x_1881_, 0);
lean_inc(v_a_1882_);
lean_dec_ref_known(v___x_1881_, 1);
lean_inc_ref(v_e_1847_);
v___x_1883_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f___redArg(v_e_1847_, v_a_1848_, v_a_1852_, v_a_1853_, v_a_1854_, v_a_1855_, v_a_1856_, v_a_1857_);
if (lean_obj_tag(v___x_1883_) == 0)
{
lean_object* v_a_1884_; 
v_a_1884_ = lean_ctor_get(v___x_1883_, 0);
lean_inc(v_a_1884_);
lean_dec_ref_known(v___x_1883_, 1);
if (lean_obj_tag(v_a_1884_) == 1)
{
lean_object* v_val_1885_; lean_object* v_fst_1886_; lean_object* v_snd_1887_; lean_object* v___x_1889_; uint8_t v_isShared_1890_; uint8_t v_isSharedCheck_1959_; 
v_val_1885_ = lean_ctor_get(v_a_1884_, 0);
lean_inc(v_val_1885_);
lean_dec_ref_known(v_a_1884_, 1);
v_fst_1886_ = lean_ctor_get(v_val_1885_, 0);
v_snd_1887_ = lean_ctor_get(v_val_1885_, 1);
v_isSharedCheck_1959_ = !lean_is_exclusive(v_val_1885_);
if (v_isSharedCheck_1959_ == 0)
{
v___x_1889_ = v_val_1885_;
v_isShared_1890_ = v_isSharedCheck_1959_;
goto v_resetjp_1888_;
}
else
{
lean_inc(v_snd_1887_);
lean_inc(v_fst_1886_);
lean_dec(v_val_1885_);
v___x_1889_ = lean_box(0);
v_isShared_1890_ = v_isSharedCheck_1959_;
goto v_resetjp_1888_;
}
v_resetjp_1888_:
{
lean_object* v___x_1891_; 
lean_inc(v_a_1857_);
lean_inc_ref(v_a_1856_);
lean_inc(v_a_1855_);
lean_inc_ref(v_a_1854_);
lean_inc(v_a_1853_);
lean_inc_ref(v_a_1852_);
lean_inc(v_a_1851_);
lean_inc_ref(v_a_1850_);
lean_inc(v_a_1849_);
lean_inc(v_a_1848_);
v___x_1891_ = lean_grind_preprocess(v_fst_1886_, v_a_1848_, v_a_1849_, v_a_1850_, v_a_1851_, v_a_1852_, v_a_1853_, v_a_1854_, v_a_1855_, v_a_1856_, v_a_1857_);
if (lean_obj_tag(v___x_1891_) == 0)
{
lean_object* v_a_1892_; lean_object* v___x_1893_; 
v_a_1892_ = lean_ctor_get(v___x_1891_, 0);
lean_inc_n(v_a_1892_, 2);
lean_dec_ref_known(v___x_1891_, 1);
v___x_1893_ = l_Lean_Meta_Simp_Result_getProof(v_a_1892_, v_a_1854_, v_a_1855_, v_a_1856_, v_a_1857_);
if (lean_obj_tag(v___x_1893_) == 0)
{
lean_object* v_a_1894_; lean_object* v___x_1895_; 
v_a_1894_ = lean_ctor_get(v___x_1893_, 0);
lean_inc(v_a_1894_);
lean_dec_ref_known(v___x_1893_, 1);
v___x_1895_ = l_Lean_Meta_mkEqTrans(v_snd_1887_, v_a_1894_, v_a_1854_, v_a_1855_, v_a_1856_, v_a_1857_);
if (lean_obj_tag(v___x_1895_) == 0)
{
lean_object* v_a_1896_; lean_object* v_expr_1897_; lean_object* v___y_1899_; lean_object* v___y_1900_; lean_object* v___y_1901_; lean_object* v___y_1902_; lean_object* v___y_1903_; lean_object* v___y_1904_; lean_object* v___x_1917_; lean_object* v___x_1918_; 
v_a_1896_ = lean_ctor_get(v___x_1895_, 0);
lean_inc(v_a_1896_);
lean_dec_ref_known(v___x_1895_, 1);
v_expr_1897_ = lean_ctor_get(v_a_1892_, 0);
lean_inc_ref_n(v_expr_1897_, 2);
lean_dec(v_a_1892_);
v___x_1917_ = lean_box(0);
lean_inc(v_a_1857_);
lean_inc_ref(v_a_1856_);
lean_inc(v_a_1855_);
lean_inc_ref(v_a_1854_);
lean_inc(v_a_1853_);
lean_inc_ref(v_a_1852_);
lean_inc(v_a_1851_);
lean_inc_ref(v_a_1850_);
lean_inc(v_a_1849_);
lean_inc(v_a_1848_);
v___x_1918_ = lean_grind_internalize(v_expr_1897_, v_a_1882_, v___x_1917_, v_a_1848_, v_a_1849_, v_a_1850_, v_a_1851_, v_a_1852_, v_a_1853_, v_a_1854_, v_a_1855_, v_a_1856_, v_a_1857_);
if (lean_obj_tag(v___x_1918_) == 0)
{
lean_object* v_toCold_1919_; lean_object* v_options_1920_; uint8_t v_hasTrace_1921_; 
lean_dec_ref_known(v___x_1918_, 1);
v_toCold_1919_ = lean_ctor_get(v_a_1856_, 0);
v_options_1920_ = lean_ctor_get(v_toCold_1919_, 2);
v_hasTrace_1921_ = lean_ctor_get_uint8(v_options_1920_, sizeof(void*)*1);
if (v_hasTrace_1921_ == 0)
{
lean_del_object(v___x_1889_);
v___y_1899_ = v_a_1848_;
v___y_1900_ = v_a_1850_;
v___y_1901_ = v_a_1854_;
v___y_1902_ = v_a_1855_;
v___y_1903_ = v_a_1856_;
v___y_1904_ = v_a_1857_;
goto v___jp_1898_;
}
else
{
lean_object* v_inheritedTraceOptions_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; uint8_t v___x_1925_; 
v_inheritedTraceOptions_1922_ = lean_ctor_get(v_toCold_1919_, 11);
v___x_1923_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_));
v___x_1924_ = lean_obj_once(&l_Lean_Meta_Grind_Homo_internalize___redArg___closed__0, &l_Lean_Meta_Grind_Homo_internalize___redArg___closed__0_once, _init_l_Lean_Meta_Grind_Homo_internalize___redArg___closed__0);
v___x_1925_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1922_, v_options_1920_, v___x_1924_);
if (v___x_1925_ == 0)
{
lean_del_object(v___x_1889_);
v___y_1899_ = v_a_1848_;
v___y_1900_ = v_a_1850_;
v___y_1901_ = v_a_1854_;
v___y_1902_ = v_a_1855_;
v___y_1903_ = v_a_1856_;
v___y_1904_ = v_a_1857_;
goto v___jp_1898_;
}
else
{
lean_object* v___x_1926_; 
v___x_1926_ = l_Lean_Meta_Grind_updateLastTag(v_a_1848_, v_a_1849_, v_a_1850_, v_a_1851_, v_a_1852_, v_a_1853_, v_a_1854_, v_a_1855_, v_a_1856_, v_a_1857_);
if (lean_obj_tag(v___x_1926_) == 0)
{
lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1930_; 
lean_dec_ref_known(v___x_1926_, 1);
lean_inc_ref(v_e_1847_);
v___x_1927_ = l_Lean_MessageData_ofExpr(v_e_1847_);
v___x_1928_ = lean_obj_once(&l_Lean_Meta_Grind_Homo_internalize___redArg___closed__2, &l_Lean_Meta_Grind_Homo_internalize___redArg___closed__2_once, _init_l_Lean_Meta_Grind_Homo_internalize___redArg___closed__2);
if (v_isShared_1890_ == 0)
{
lean_ctor_set_tag(v___x_1889_, 7);
lean_ctor_set(v___x_1889_, 1, v___x_1928_);
lean_ctor_set(v___x_1889_, 0, v___x_1927_);
v___x_1930_ = v___x_1889_;
goto v_reusejp_1929_;
}
else
{
lean_object* v_reuseFailAlloc_1934_; 
v_reuseFailAlloc_1934_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1934_, 0, v___x_1927_);
lean_ctor_set(v_reuseFailAlloc_1934_, 1, v___x_1928_);
v___x_1930_ = v_reuseFailAlloc_1934_;
goto v_reusejp_1929_;
}
v_reusejp_1929_:
{
lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; 
lean_inc_ref(v_expr_1897_);
v___x_1931_ = l_Lean_MessageData_ofExpr(v_expr_1897_);
v___x_1932_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1932_, 0, v___x_1930_);
lean_ctor_set(v___x_1932_, 1, v___x_1931_);
v___x_1933_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0___redArg(v___x_1923_, v___x_1932_, v_a_1854_, v_a_1855_, v_a_1856_, v_a_1857_);
if (lean_obj_tag(v___x_1933_) == 0)
{
lean_dec_ref_known(v___x_1933_, 1);
v___y_1899_ = v_a_1848_;
v___y_1900_ = v_a_1850_;
v___y_1901_ = v_a_1854_;
v___y_1902_ = v_a_1855_;
v___y_1903_ = v_a_1856_;
v___y_1904_ = v_a_1857_;
goto v___jp_1898_;
}
else
{
lean_dec_ref(v_expr_1897_);
lean_dec(v_a_1896_);
lean_dec_ref(v_e_1847_);
return v___x_1933_;
}
}
}
else
{
lean_dec_ref(v_expr_1897_);
lean_dec(v_a_1896_);
lean_del_object(v___x_1889_);
lean_dec_ref(v_e_1847_);
return v___x_1926_;
}
}
}
}
else
{
lean_dec_ref(v_expr_1897_);
lean_dec(v_a_1896_);
lean_del_object(v___x_1889_);
lean_dec_ref(v_e_1847_);
return v___x_1918_;
}
v___jp_1898_:
{
lean_object* v___x_1905_; 
lean_inc_ref(v_expr_1897_);
lean_inc_ref(v_e_1847_);
v___x_1905_ = l_Lean_Meta_mkEq(v_e_1847_, v_expr_1897_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_);
if (lean_obj_tag(v___x_1905_) == 0)
{
lean_object* v_a_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; 
v_a_1906_ = lean_ctor_get(v___x_1905_, 0);
lean_inc(v_a_1906_);
lean_dec_ref_known(v___x_1905_, 1);
v___x_1907_ = l_Lean_Meta_mkExpectedPropHint(v_a_1896_, v_a_1906_);
v___x_1908_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_1847_, v_expr_1897_, v___x_1907_, v___x_1878_, v___y_1899_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_);
return v___x_1908_;
}
else
{
lean_object* v_a_1909_; lean_object* v___x_1911_; uint8_t v_isShared_1912_; uint8_t v_isSharedCheck_1916_; 
lean_dec_ref(v_expr_1897_);
lean_dec(v_a_1896_);
lean_dec_ref(v_e_1847_);
v_a_1909_ = lean_ctor_get(v___x_1905_, 0);
v_isSharedCheck_1916_ = !lean_is_exclusive(v___x_1905_);
if (v_isSharedCheck_1916_ == 0)
{
v___x_1911_ = v___x_1905_;
v_isShared_1912_ = v_isSharedCheck_1916_;
goto v_resetjp_1910_;
}
else
{
lean_inc(v_a_1909_);
lean_dec(v___x_1905_);
v___x_1911_ = lean_box(0);
v_isShared_1912_ = v_isSharedCheck_1916_;
goto v_resetjp_1910_;
}
v_resetjp_1910_:
{
lean_object* v___x_1914_; 
if (v_isShared_1912_ == 0)
{
v___x_1914_ = v___x_1911_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1915_; 
v_reuseFailAlloc_1915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1915_, 0, v_a_1909_);
v___x_1914_ = v_reuseFailAlloc_1915_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
return v___x_1914_;
}
}
}
}
}
else
{
lean_object* v_a_1935_; lean_object* v___x_1937_; uint8_t v_isShared_1938_; uint8_t v_isSharedCheck_1942_; 
lean_dec(v_a_1892_);
lean_del_object(v___x_1889_);
lean_dec(v_a_1882_);
lean_dec_ref(v_e_1847_);
v_a_1935_ = lean_ctor_get(v___x_1895_, 0);
v_isSharedCheck_1942_ = !lean_is_exclusive(v___x_1895_);
if (v_isSharedCheck_1942_ == 0)
{
v___x_1937_ = v___x_1895_;
v_isShared_1938_ = v_isSharedCheck_1942_;
goto v_resetjp_1936_;
}
else
{
lean_inc(v_a_1935_);
lean_dec(v___x_1895_);
v___x_1937_ = lean_box(0);
v_isShared_1938_ = v_isSharedCheck_1942_;
goto v_resetjp_1936_;
}
v_resetjp_1936_:
{
lean_object* v___x_1940_; 
if (v_isShared_1938_ == 0)
{
v___x_1940_ = v___x_1937_;
goto v_reusejp_1939_;
}
else
{
lean_object* v_reuseFailAlloc_1941_; 
v_reuseFailAlloc_1941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1941_, 0, v_a_1935_);
v___x_1940_ = v_reuseFailAlloc_1941_;
goto v_reusejp_1939_;
}
v_reusejp_1939_:
{
return v___x_1940_;
}
}
}
}
else
{
lean_object* v_a_1943_; lean_object* v___x_1945_; uint8_t v_isShared_1946_; uint8_t v_isSharedCheck_1950_; 
lean_dec(v_a_1892_);
lean_del_object(v___x_1889_);
lean_dec(v_snd_1887_);
lean_dec(v_a_1882_);
lean_dec_ref(v_e_1847_);
v_a_1943_ = lean_ctor_get(v___x_1893_, 0);
v_isSharedCheck_1950_ = !lean_is_exclusive(v___x_1893_);
if (v_isSharedCheck_1950_ == 0)
{
v___x_1945_ = v___x_1893_;
v_isShared_1946_ = v_isSharedCheck_1950_;
goto v_resetjp_1944_;
}
else
{
lean_inc(v_a_1943_);
lean_dec(v___x_1893_);
v___x_1945_ = lean_box(0);
v_isShared_1946_ = v_isSharedCheck_1950_;
goto v_resetjp_1944_;
}
v_resetjp_1944_:
{
lean_object* v___x_1948_; 
if (v_isShared_1946_ == 0)
{
v___x_1948_ = v___x_1945_;
goto v_reusejp_1947_;
}
else
{
lean_object* v_reuseFailAlloc_1949_; 
v_reuseFailAlloc_1949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1949_, 0, v_a_1943_);
v___x_1948_ = v_reuseFailAlloc_1949_;
goto v_reusejp_1947_;
}
v_reusejp_1947_:
{
return v___x_1948_;
}
}
}
}
else
{
lean_object* v_a_1951_; lean_object* v___x_1953_; uint8_t v_isShared_1954_; uint8_t v_isSharedCheck_1958_; 
lean_del_object(v___x_1889_);
lean_dec(v_snd_1887_);
lean_dec(v_a_1882_);
lean_dec_ref(v_e_1847_);
v_a_1951_ = lean_ctor_get(v___x_1891_, 0);
v_isSharedCheck_1958_ = !lean_is_exclusive(v___x_1891_);
if (v_isSharedCheck_1958_ == 0)
{
v___x_1953_ = v___x_1891_;
v_isShared_1954_ = v_isSharedCheck_1958_;
goto v_resetjp_1952_;
}
else
{
lean_inc(v_a_1951_);
lean_dec(v___x_1891_);
v___x_1953_ = lean_box(0);
v_isShared_1954_ = v_isSharedCheck_1958_;
goto v_resetjp_1952_;
}
v_resetjp_1952_:
{
lean_object* v___x_1956_; 
if (v_isShared_1954_ == 0)
{
v___x_1956_ = v___x_1953_;
goto v_reusejp_1955_;
}
else
{
lean_object* v_reuseFailAlloc_1957_; 
v_reuseFailAlloc_1957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1957_, 0, v_a_1951_);
v___x_1956_ = v_reuseFailAlloc_1957_;
goto v_reusejp_1955_;
}
v_reusejp_1955_:
{
return v___x_1956_;
}
}
}
}
}
else
{
lean_object* v___x_1960_; 
lean_dec(v_a_1884_);
v___x_1960_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds(v_e_1847_, v_a_1882_, v_a_1848_, v_a_1849_, v_a_1850_, v_a_1851_, v_a_1852_, v_a_1853_, v_a_1854_, v_a_1855_, v_a_1856_, v_a_1857_);
return v___x_1960_;
}
}
else
{
lean_object* v_a_1961_; lean_object* v___x_1963_; uint8_t v_isShared_1964_; uint8_t v_isSharedCheck_1968_; 
lean_dec(v_a_1882_);
lean_dec_ref(v_e_1847_);
v_a_1961_ = lean_ctor_get(v___x_1883_, 0);
v_isSharedCheck_1968_ = !lean_is_exclusive(v___x_1883_);
if (v_isSharedCheck_1968_ == 0)
{
v___x_1963_ = v___x_1883_;
v_isShared_1964_ = v_isSharedCheck_1968_;
goto v_resetjp_1962_;
}
else
{
lean_inc(v_a_1961_);
lean_dec(v___x_1883_);
v___x_1963_ = lean_box(0);
v_isShared_1964_ = v_isSharedCheck_1968_;
goto v_resetjp_1962_;
}
v_resetjp_1962_:
{
lean_object* v___x_1966_; 
if (v_isShared_1964_ == 0)
{
v___x_1966_ = v___x_1963_;
goto v_reusejp_1965_;
}
else
{
lean_object* v_reuseFailAlloc_1967_; 
v_reuseFailAlloc_1967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1967_, 0, v_a_1961_);
v___x_1966_ = v_reuseFailAlloc_1967_;
goto v_reusejp_1965_;
}
v_reusejp_1965_:
{
return v___x_1966_;
}
}
}
}
else
{
lean_object* v_a_1969_; lean_object* v___x_1971_; uint8_t v_isShared_1972_; uint8_t v_isSharedCheck_1976_; 
lean_dec_ref(v_e_1847_);
v_a_1969_ = lean_ctor_get(v___x_1881_, 0);
v_isSharedCheck_1976_ = !lean_is_exclusive(v___x_1881_);
if (v_isSharedCheck_1976_ == 0)
{
v___x_1971_ = v___x_1881_;
v_isShared_1972_ = v_isSharedCheck_1976_;
goto v_resetjp_1970_;
}
else
{
lean_inc(v_a_1969_);
lean_dec(v___x_1881_);
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
else
{
lean_dec_ref(v_e_1847_);
return v___x_1880_;
}
}
else
{
lean_dec_ref(v_e_1847_);
return v___x_1879_;
}
}
else
{
lean_dec_ref(v___f_1862_);
lean_dec_ref(v_e_1847_);
goto v___jp_1859_;
}
}
else
{
lean_object* v_a_1977_; lean_object* v___x_1979_; uint8_t v_isShared_1980_; uint8_t v_isSharedCheck_1984_; 
lean_dec_ref(v___f_1862_);
lean_dec_ref(v_e_1847_);
v_a_1977_ = lean_ctor_get(v___x_1875_, 0);
v_isSharedCheck_1984_ = !lean_is_exclusive(v___x_1875_);
if (v_isSharedCheck_1984_ == 0)
{
v___x_1979_ = v___x_1875_;
v_isShared_1980_ = v_isSharedCheck_1984_;
goto v_resetjp_1978_;
}
else
{
lean_inc(v_a_1977_);
lean_dec(v___x_1875_);
v___x_1979_ = lean_box(0);
v_isShared_1980_ = v_isSharedCheck_1984_;
goto v_resetjp_1978_;
}
v_resetjp_1978_:
{
lean_object* v___x_1982_; 
if (v_isShared_1980_ == 0)
{
v___x_1982_ = v___x_1979_;
goto v_reusejp_1981_;
}
else
{
lean_object* v_reuseFailAlloc_1983_; 
v_reuseFailAlloc_1983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1983_, 0, v_a_1977_);
v___x_1982_ = v_reuseFailAlloc_1983_;
goto v_reusejp_1981_;
}
v_reusejp_1981_:
{
return v___x_1982_;
}
}
}
}
else
{
lean_dec_ref(v___f_1862_);
lean_dec_ref(v_e_1847_);
goto v___jp_1859_;
}
}
}
}
else
{
lean_object* v_a_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_1993_; 
lean_dec_ref(v___f_1862_);
lean_dec_ref(v_e_1847_);
v_a_1986_ = lean_ctor_get(v___x_1863_, 0);
v_isSharedCheck_1993_ = !lean_is_exclusive(v___x_1863_);
if (v_isSharedCheck_1993_ == 0)
{
v___x_1988_ = v___x_1863_;
v_isShared_1989_ = v_isSharedCheck_1993_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_a_1986_);
lean_dec(v___x_1863_);
v___x_1988_ = lean_box(0);
v_isShared_1989_ = v_isSharedCheck_1993_;
goto v_resetjp_1987_;
}
v_resetjp_1987_:
{
lean_object* v___x_1991_; 
if (v_isShared_1989_ == 0)
{
v___x_1991_ = v___x_1988_;
goto v_reusejp_1990_;
}
else
{
lean_object* v_reuseFailAlloc_1992_; 
v_reuseFailAlloc_1992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1992_, 0, v_a_1986_);
v___x_1991_ = v_reuseFailAlloc_1992_;
goto v_reusejp_1990_;
}
v_reusejp_1990_:
{
return v___x_1991_;
}
}
}
v___jp_1859_:
{
lean_object* v___x_1860_; lean_object* v___x_1861_; 
v___x_1860_ = lean_box(0);
v___x_1861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1861_, 0, v___x_1860_);
return v___x_1861_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Homo_internalize___redArg___boxed(lean_object* v_e_1994_, lean_object* v_a_1995_, lean_object* v_a_1996_, lean_object* v_a_1997_, lean_object* v_a_1998_, lean_object* v_a_1999_, lean_object* v_a_2000_, lean_object* v_a_2001_, lean_object* v_a_2002_, lean_object* v_a_2003_, lean_object* v_a_2004_, lean_object* v_a_2005_){
_start:
{
lean_object* v_res_2006_; 
v_res_2006_ = l_Lean_Meta_Grind_Homo_internalize___redArg(v_e_1994_, v_a_1995_, v_a_1996_, v_a_1997_, v_a_1998_, v_a_1999_, v_a_2000_, v_a_2001_, v_a_2002_, v_a_2003_, v_a_2004_);
lean_dec(v_a_2004_);
lean_dec_ref(v_a_2003_);
lean_dec(v_a_2002_);
lean_dec_ref(v_a_2001_);
lean_dec(v_a_2000_);
lean_dec_ref(v_a_1999_);
lean_dec(v_a_1998_);
lean_dec_ref(v_a_1997_);
lean_dec(v_a_1996_);
lean_dec(v_a_1995_);
return v_res_2006_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Homo_internalize(lean_object* v_e_2007_, lean_object* v___parent_x3f_2008_, lean_object* v_a_2009_, lean_object* v_a_2010_, lean_object* v_a_2011_, lean_object* v_a_2012_, lean_object* v_a_2013_, lean_object* v_a_2014_, lean_object* v_a_2015_, lean_object* v_a_2016_, lean_object* v_a_2017_, lean_object* v_a_2018_){
_start:
{
lean_object* v___x_2020_; 
v___x_2020_ = l_Lean_Meta_Grind_Homo_internalize___redArg(v_e_2007_, v_a_2009_, v_a_2010_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_, v_a_2015_, v_a_2016_, v_a_2017_, v_a_2018_);
return v___x_2020_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Homo_internalize___boxed(lean_object* v_e_2021_, lean_object* v___parent_x3f_2022_, lean_object* v_a_2023_, lean_object* v_a_2024_, lean_object* v_a_2025_, lean_object* v_a_2026_, lean_object* v_a_2027_, lean_object* v_a_2028_, lean_object* v_a_2029_, lean_object* v_a_2030_, lean_object* v_a_2031_, lean_object* v_a_2032_, lean_object* v_a_2033_){
_start:
{
lean_object* v_res_2034_; 
v_res_2034_ = l_Lean_Meta_Grind_Homo_internalize(v_e_2021_, v___parent_x3f_2022_, v_a_2023_, v_a_2024_, v_a_2025_, v_a_2026_, v_a_2027_, v_a_2028_, v_a_2029_, v_a_2030_, v_a_2031_, v_a_2032_);
lean_dec(v_a_2032_);
lean_dec_ref(v_a_2031_);
lean_dec(v_a_2030_);
lean_dec_ref(v_a_2029_);
lean_dec(v_a_2028_);
lean_dec_ref(v_a_2027_);
lean_dec(v_a_2026_);
lean_dec_ref(v_a_2025_);
lean_dec(v_a_2024_);
lean_dec(v_a_2023_);
lean_dec(v___parent_x3f_2022_);
return v_res_2034_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0(lean_object* v_00_u03b2_2035_, lean_object* v_x_2036_, lean_object* v_x_2037_, lean_object* v_x_2038_){
_start:
{
lean_object* v___x_2039_; 
v___x_2039_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0___redArg(v_x_2036_, v_x_2037_, v_x_2038_);
return v___x_2039_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0(lean_object* v_00_u03b2_2040_, lean_object* v_x_2041_, size_t v_x_2042_, size_t v_x_2043_, lean_object* v_x_2044_, lean_object* v_x_2045_){
_start:
{
lean_object* v___x_2046_; 
v___x_2046_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0___redArg(v_x_2041_, v_x_2042_, v_x_2043_, v_x_2044_, v_x_2045_);
return v___x_2046_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2047_, lean_object* v_x_2048_, lean_object* v_x_2049_, lean_object* v_x_2050_, lean_object* v_x_2051_, lean_object* v_x_2052_){
_start:
{
size_t v_x_39188__boxed_2053_; size_t v_x_39189__boxed_2054_; lean_object* v_res_2055_; 
v_x_39188__boxed_2053_ = lean_unbox_usize(v_x_2049_);
lean_dec(v_x_2049_);
v_x_39189__boxed_2054_ = lean_unbox_usize(v_x_2050_);
lean_dec(v_x_2050_);
v_res_2055_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0(v_00_u03b2_2047_, v_x_2048_, v_x_39188__boxed_2053_, v_x_39189__boxed_2054_, v_x_2051_, v_x_2052_);
return v_res_2055_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2056_, lean_object* v_n_2057_, lean_object* v_k_2058_, lean_object* v_v_2059_){
_start:
{
lean_object* v___x_2060_; 
v___x_2060_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0_spec__1___redArg(v_n_2057_, v_k_2058_, v_v_2059_);
return v___x_2060_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_2061_, size_t v_depth_2062_, lean_object* v_keys_2063_, lean_object* v_vals_2064_, lean_object* v_heq_2065_, lean_object* v_i_2066_, lean_object* v_entries_2067_){
_start:
{
lean_object* v___x_2068_; 
v___x_2068_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0_spec__2___redArg(v_depth_2062_, v_keys_2063_, v_vals_2064_, v_i_2066_, v_entries_2067_);
return v___x_2068_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_2069_, lean_object* v_depth_2070_, lean_object* v_keys_2071_, lean_object* v_vals_2072_, lean_object* v_heq_2073_, lean_object* v_i_2074_, lean_object* v_entries_2075_){
_start:
{
size_t v_depth_boxed_2076_; lean_object* v_res_2077_; 
v_depth_boxed_2076_ = lean_unbox_usize(v_depth_2070_);
lean_dec(v_depth_2070_);
v_res_2077_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0_spec__2(v_00_u03b2_2069_, v_depth_boxed_2076_, v_keys_2071_, v_vals_2072_, v_heq_2073_, v_i_2074_, v_entries_2075_);
lean_dec_ref(v_vals_2072_);
lean_dec_ref(v_keys_2071_);
return v_res_2077_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_2078_, lean_object* v_x_2079_, lean_object* v_x_2080_, lean_object* v_x_2081_, lean_object* v_x_2082_){
_start:
{
lean_object* v___x_2083_; 
v___x_2083_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Homo_internalize_spec__0_spec__0_spec__1_spec__2___redArg(v_x_2079_, v_x_2080_, v_x_2081_, v_x_2082_);
return v___x_2083_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Homo_processNewEq(lean_object* v_a_2084_, lean_object* v_b_2085_, lean_object* v_a_2086_, lean_object* v_a_2087_, lean_object* v_a_2088_, lean_object* v_a_2089_, lean_object* v_a_2090_, lean_object* v_a_2091_, lean_object* v_a_2092_, lean_object* v_a_2093_, lean_object* v_a_2094_, lean_object* v_a_2095_){
_start:
{
lean_object* v___x_2097_; 
v___x_2097_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_2088_);
if (lean_obj_tag(v___x_2097_) == 0)
{
lean_object* v_a_2098_; lean_object* v___x_2100_; uint8_t v_isShared_2101_; uint8_t v_isSharedCheck_2222_; 
v_a_2098_ = lean_ctor_get(v___x_2097_, 0);
v_isSharedCheck_2222_ = !lean_is_exclusive(v___x_2097_);
if (v_isSharedCheck_2222_ == 0)
{
v___x_2100_ = v___x_2097_;
v_isShared_2101_ = v_isSharedCheck_2222_;
goto v_resetjp_2099_;
}
else
{
lean_inc(v_a_2098_);
lean_dec(v___x_2097_);
v___x_2100_ = lean_box(0);
v_isShared_2101_ = v_isSharedCheck_2222_;
goto v_resetjp_2099_;
}
v_resetjp_2099_:
{
uint8_t v_hom_2102_; 
v_hom_2102_ = lean_ctor_get_uint8(v_a_2098_, sizeof(void*)*18 + 25);
lean_dec(v_a_2098_);
if (v_hom_2102_ == 0)
{
lean_object* v___x_2103_; lean_object* v___x_2105_; 
lean_dec_ref(v_b_2085_);
lean_dec_ref(v_a_2084_);
v___x_2103_ = lean_box(0);
if (v_isShared_2101_ == 0)
{
lean_ctor_set(v___x_2100_, 0, v___x_2103_);
v___x_2105_ = v___x_2100_;
goto v_reusejp_2104_;
}
else
{
lean_object* v_reuseFailAlloc_2106_; 
v_reuseFailAlloc_2106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2106_, 0, v___x_2103_);
v___x_2105_ = v_reuseFailAlloc_2106_;
goto v_reusejp_2104_;
}
v_reusejp_2104_:
{
return v___x_2105_;
}
}
else
{
lean_object* v___x_2107_; 
lean_del_object(v___x_2100_);
lean_inc_ref(v_b_2085_);
lean_inc_ref(v_a_2084_);
v___x_2107_ = l_Lean_Meta_mkEq(v_a_2084_, v_b_2085_, v_a_2092_, v_a_2093_, v_a_2094_, v_a_2095_);
if (lean_obj_tag(v___x_2107_) == 0)
{
lean_object* v_a_2108_; lean_object* v___x_2109_; 
v_a_2108_ = lean_ctor_get(v___x_2107_, 0);
lean_inc(v_a_2108_);
lean_dec_ref_known(v___x_2107_, 1);
v___x_2109_ = l_Lean_Meta_Sym_shareCommon(v_a_2108_, v_a_2090_, v_a_2091_, v_a_2092_, v_a_2093_, v_a_2094_, v_a_2095_);
if (lean_obj_tag(v___x_2109_) == 0)
{
lean_object* v_a_2110_; lean_object* v___x_2111_; 
v_a_2110_ = lean_ctor_get(v___x_2109_, 0);
lean_inc_n(v_a_2110_, 2);
lean_dec_ref_known(v___x_2109_, 1);
v___x_2111_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f___redArg(v_a_2110_, v_a_2086_, v_a_2090_, v_a_2091_, v_a_2092_, v_a_2093_, v_a_2094_, v_a_2095_);
if (lean_obj_tag(v___x_2111_) == 0)
{
lean_object* v_a_2112_; lean_object* v___x_2114_; uint8_t v_isShared_2115_; uint8_t v_isSharedCheck_2197_; 
v_a_2112_ = lean_ctor_get(v___x_2111_, 0);
v_isSharedCheck_2197_ = !lean_is_exclusive(v___x_2111_);
if (v_isSharedCheck_2197_ == 0)
{
v___x_2114_ = v___x_2111_;
v_isShared_2115_ = v_isSharedCheck_2197_;
goto v_resetjp_2113_;
}
else
{
lean_inc(v_a_2112_);
lean_dec(v___x_2111_);
v___x_2114_ = lean_box(0);
v_isShared_2115_ = v_isSharedCheck_2197_;
goto v_resetjp_2113_;
}
v_resetjp_2113_:
{
if (lean_obj_tag(v_a_2112_) == 1)
{
lean_object* v_val_2116_; lean_object* v_fst_2117_; lean_object* v_snd_2118_; lean_object* v___x_2120_; uint8_t v_isShared_2121_; uint8_t v_isSharedCheck_2192_; 
lean_del_object(v___x_2114_);
v_val_2116_ = lean_ctor_get(v_a_2112_, 0);
lean_inc(v_val_2116_);
lean_dec_ref_known(v_a_2112_, 1);
v_fst_2117_ = lean_ctor_get(v_val_2116_, 0);
v_snd_2118_ = lean_ctor_get(v_val_2116_, 1);
v_isSharedCheck_2192_ = !lean_is_exclusive(v_val_2116_);
if (v_isSharedCheck_2192_ == 0)
{
v___x_2120_ = v_val_2116_;
v_isShared_2121_ = v_isSharedCheck_2192_;
goto v_resetjp_2119_;
}
else
{
lean_inc(v_snd_2118_);
lean_inc(v_fst_2117_);
lean_dec(v_val_2116_);
v___x_2120_ = lean_box(0);
v_isShared_2121_ = v_isSharedCheck_2192_;
goto v_resetjp_2119_;
}
v_resetjp_2119_:
{
lean_object* v___x_2122_; 
lean_inc(v_a_2095_);
lean_inc_ref(v_a_2094_);
lean_inc(v_a_2093_);
lean_inc_ref(v_a_2092_);
lean_inc(v_a_2091_);
lean_inc_ref(v_a_2090_);
lean_inc(v_a_2089_);
lean_inc_ref(v_a_2088_);
lean_inc(v_a_2087_);
lean_inc(v_a_2086_);
lean_inc_ref(v_b_2085_);
lean_inc_ref(v_a_2084_);
v___x_2122_ = lean_grind_mk_eq_proof(v_a_2084_, v_b_2085_, v_a_2086_, v_a_2087_, v_a_2088_, v_a_2089_, v_a_2090_, v_a_2091_, v_a_2092_, v_a_2093_, v_a_2094_, v_a_2095_);
if (lean_obj_tag(v___x_2122_) == 0)
{
lean_object* v_a_2123_; lean_object* v___x_2124_; 
v_a_2123_ = lean_ctor_get(v___x_2122_, 0);
lean_inc(v_a_2123_);
lean_dec_ref_known(v___x_2122_, 1);
lean_inc(v_fst_2117_);
lean_inc(v_a_2110_);
v___x_2124_ = l_Lean_Meta_mkEqMPCore(v_a_2110_, v_fst_2117_, v_snd_2118_, v_a_2123_, v_a_2092_, v_a_2093_, v_a_2094_, v_a_2095_);
if (lean_obj_tag(v___x_2124_) == 0)
{
lean_object* v_a_2125_; lean_object* v___y_2127_; lean_object* v___y_2128_; lean_object* v___y_2129_; lean_object* v___y_2130_; lean_object* v___y_2131_; lean_object* v___y_2132_; lean_object* v___y_2133_; lean_object* v___x_2137_; 
v_a_2125_ = lean_ctor_get(v___x_2124_, 0);
lean_inc(v_a_2125_);
lean_dec_ref_known(v___x_2124_, 1);
v___x_2137_ = l_Lean_Meta_Grind_getGeneration___redArg(v_a_2084_, v_a_2086_);
lean_dec_ref(v_a_2084_);
if (lean_obj_tag(v___x_2137_) == 0)
{
lean_object* v_a_2138_; lean_object* v___x_2139_; 
v_a_2138_ = lean_ctor_get(v___x_2137_, 0);
lean_inc(v_a_2138_);
lean_dec_ref_known(v___x_2137_, 1);
v___x_2139_ = l_Lean_Meta_Grind_getGeneration___redArg(v_b_2085_, v_a_2086_);
lean_dec_ref(v_b_2085_);
if (lean_obj_tag(v___x_2139_) == 0)
{
lean_object* v_a_2140_; lean_object* v___y_2142_; uint8_t v___x_2159_; 
v_a_2140_ = lean_ctor_get(v___x_2139_, 0);
lean_inc(v_a_2140_);
lean_dec_ref_known(v___x_2139_, 1);
v___x_2159_ = lean_nat_dec_le(v_a_2138_, v_a_2140_);
if (v___x_2159_ == 0)
{
lean_dec(v_a_2140_);
v___y_2142_ = v_a_2138_;
goto v___jp_2141_;
}
else
{
lean_dec(v_a_2138_);
v___y_2142_ = v_a_2140_;
goto v___jp_2141_;
}
v___jp_2141_:
{
lean_object* v_toCold_2143_; lean_object* v_options_2144_; uint8_t v_hasTrace_2145_; 
v_toCold_2143_ = lean_ctor_get(v_a_2094_, 0);
v_options_2144_ = lean_ctor_get(v_toCold_2143_, 2);
v_hasTrace_2145_ = lean_ctor_get_uint8(v_options_2144_, sizeof(void*)*1);
if (v_hasTrace_2145_ == 0)
{
lean_del_object(v___x_2120_);
lean_dec(v_a_2110_);
v___y_2127_ = v___y_2142_;
v___y_2128_ = v_a_2086_;
v___y_2129_ = v_a_2088_;
v___y_2130_ = v_a_2092_;
v___y_2131_ = v_a_2093_;
v___y_2132_ = v_a_2094_;
v___y_2133_ = v_a_2095_;
goto v___jp_2126_;
}
else
{
lean_object* v_inheritedTraceOptions_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; uint8_t v___x_2149_; 
v_inheritedTraceOptions_2146_ = lean_ctor_get(v_toCold_2143_, 11);
v___x_2147_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_));
v___x_2148_ = lean_obj_once(&l_Lean_Meta_Grind_Homo_internalize___redArg___closed__0, &l_Lean_Meta_Grind_Homo_internalize___redArg___closed__0_once, _init_l_Lean_Meta_Grind_Homo_internalize___redArg___closed__0);
v___x_2149_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2146_, v_options_2144_, v___x_2148_);
if (v___x_2149_ == 0)
{
lean_del_object(v___x_2120_);
lean_dec(v_a_2110_);
v___y_2127_ = v___y_2142_;
v___y_2128_ = v_a_2086_;
v___y_2129_ = v_a_2088_;
v___y_2130_ = v_a_2092_;
v___y_2131_ = v_a_2093_;
v___y_2132_ = v_a_2094_;
v___y_2133_ = v_a_2095_;
goto v___jp_2126_;
}
else
{
lean_object* v___x_2150_; 
v___x_2150_ = l_Lean_Meta_Grind_updateLastTag(v_a_2086_, v_a_2087_, v_a_2088_, v_a_2089_, v_a_2090_, v_a_2091_, v_a_2092_, v_a_2093_, v_a_2094_, v_a_2095_);
if (lean_obj_tag(v___x_2150_) == 0)
{
lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2154_; 
lean_dec_ref_known(v___x_2150_, 1);
v___x_2151_ = l_Lean_MessageData_ofExpr(v_a_2110_);
v___x_2152_ = lean_obj_once(&l_Lean_Meta_Grind_Homo_internalize___redArg___closed__2, &l_Lean_Meta_Grind_Homo_internalize___redArg___closed__2_once, _init_l_Lean_Meta_Grind_Homo_internalize___redArg___closed__2);
if (v_isShared_2121_ == 0)
{
lean_ctor_set_tag(v___x_2120_, 7);
lean_ctor_set(v___x_2120_, 1, v___x_2152_);
lean_ctor_set(v___x_2120_, 0, v___x_2151_);
v___x_2154_ = v___x_2120_;
goto v_reusejp_2153_;
}
else
{
lean_object* v_reuseFailAlloc_2158_; 
v_reuseFailAlloc_2158_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2158_, 0, v___x_2151_);
lean_ctor_set(v_reuseFailAlloc_2158_, 1, v___x_2152_);
v___x_2154_ = v_reuseFailAlloc_2158_;
goto v_reusejp_2153_;
}
v_reusejp_2153_:
{
lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; 
lean_inc(v_fst_2117_);
v___x_2155_ = l_Lean_MessageData_ofExpr(v_fst_2117_);
v___x_2156_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2156_, 0, v___x_2154_);
lean_ctor_set(v___x_2156_, 1, v___x_2155_);
v___x_2157_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0___redArg(v___x_2147_, v___x_2156_, v_a_2092_, v_a_2093_, v_a_2094_, v_a_2095_);
if (lean_obj_tag(v___x_2157_) == 0)
{
lean_dec_ref_known(v___x_2157_, 1);
v___y_2127_ = v___y_2142_;
v___y_2128_ = v_a_2086_;
v___y_2129_ = v_a_2088_;
v___y_2130_ = v_a_2092_;
v___y_2131_ = v_a_2093_;
v___y_2132_ = v_a_2094_;
v___y_2133_ = v_a_2095_;
goto v___jp_2126_;
}
else
{
lean_dec(v___y_2142_);
lean_dec(v_a_2125_);
lean_dec(v_fst_2117_);
return v___x_2157_;
}
}
}
else
{
lean_dec(v___y_2142_);
lean_dec(v_a_2125_);
lean_del_object(v___x_2120_);
lean_dec(v_fst_2117_);
lean_dec(v_a_2110_);
return v___x_2150_;
}
}
}
}
}
else
{
lean_object* v_a_2160_; lean_object* v___x_2162_; uint8_t v_isShared_2163_; uint8_t v_isSharedCheck_2167_; 
lean_dec(v_a_2138_);
lean_dec(v_a_2125_);
lean_del_object(v___x_2120_);
lean_dec(v_fst_2117_);
lean_dec(v_a_2110_);
v_a_2160_ = lean_ctor_get(v___x_2139_, 0);
v_isSharedCheck_2167_ = !lean_is_exclusive(v___x_2139_);
if (v_isSharedCheck_2167_ == 0)
{
v___x_2162_ = v___x_2139_;
v_isShared_2163_ = v_isSharedCheck_2167_;
goto v_resetjp_2161_;
}
else
{
lean_inc(v_a_2160_);
lean_dec(v___x_2139_);
v___x_2162_ = lean_box(0);
v_isShared_2163_ = v_isSharedCheck_2167_;
goto v_resetjp_2161_;
}
v_resetjp_2161_:
{
lean_object* v___x_2165_; 
if (v_isShared_2163_ == 0)
{
v___x_2165_ = v___x_2162_;
goto v_reusejp_2164_;
}
else
{
lean_object* v_reuseFailAlloc_2166_; 
v_reuseFailAlloc_2166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2166_, 0, v_a_2160_);
v___x_2165_ = v_reuseFailAlloc_2166_;
goto v_reusejp_2164_;
}
v_reusejp_2164_:
{
return v___x_2165_;
}
}
}
}
else
{
lean_object* v_a_2168_; lean_object* v___x_2170_; uint8_t v_isShared_2171_; uint8_t v_isSharedCheck_2175_; 
lean_dec(v_a_2125_);
lean_del_object(v___x_2120_);
lean_dec(v_fst_2117_);
lean_dec(v_a_2110_);
lean_dec_ref(v_b_2085_);
v_a_2168_ = lean_ctor_get(v___x_2137_, 0);
v_isSharedCheck_2175_ = !lean_is_exclusive(v___x_2137_);
if (v_isSharedCheck_2175_ == 0)
{
v___x_2170_ = v___x_2137_;
v_isShared_2171_ = v_isSharedCheck_2175_;
goto v_resetjp_2169_;
}
else
{
lean_inc(v_a_2168_);
lean_dec(v___x_2137_);
v___x_2170_ = lean_box(0);
v_isShared_2171_ = v_isSharedCheck_2175_;
goto v_resetjp_2169_;
}
v_resetjp_2169_:
{
lean_object* v___x_2173_; 
if (v_isShared_2171_ == 0)
{
v___x_2173_ = v___x_2170_;
goto v_reusejp_2172_;
}
else
{
lean_object* v_reuseFailAlloc_2174_; 
v_reuseFailAlloc_2174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2174_, 0, v_a_2168_);
v___x_2173_ = v_reuseFailAlloc_2174_;
goto v_reusejp_2172_;
}
v_reusejp_2172_:
{
return v___x_2173_;
}
}
}
v___jp_2126_:
{
lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; 
v___x_2134_ = lean_box(6);
v___x_2135_ = lean_box(1);
v___x_2136_ = l_Lean_Meta_Grind_addNewRawFact___redArg(v_a_2125_, v_fst_2117_, v___y_2127_, v___x_2134_, v___x_2135_, v___y_2128_, v___y_2129_, v___y_2130_, v___y_2131_, v___y_2132_, v___y_2133_);
return v___x_2136_;
}
}
else
{
lean_object* v_a_2176_; lean_object* v___x_2178_; uint8_t v_isShared_2179_; uint8_t v_isSharedCheck_2183_; 
lean_del_object(v___x_2120_);
lean_dec(v_fst_2117_);
lean_dec(v_a_2110_);
lean_dec_ref(v_b_2085_);
lean_dec_ref(v_a_2084_);
v_a_2176_ = lean_ctor_get(v___x_2124_, 0);
v_isSharedCheck_2183_ = !lean_is_exclusive(v___x_2124_);
if (v_isSharedCheck_2183_ == 0)
{
v___x_2178_ = v___x_2124_;
v_isShared_2179_ = v_isSharedCheck_2183_;
goto v_resetjp_2177_;
}
else
{
lean_inc(v_a_2176_);
lean_dec(v___x_2124_);
v___x_2178_ = lean_box(0);
v_isShared_2179_ = v_isSharedCheck_2183_;
goto v_resetjp_2177_;
}
v_resetjp_2177_:
{
lean_object* v___x_2181_; 
if (v_isShared_2179_ == 0)
{
v___x_2181_ = v___x_2178_;
goto v_reusejp_2180_;
}
else
{
lean_object* v_reuseFailAlloc_2182_; 
v_reuseFailAlloc_2182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2182_, 0, v_a_2176_);
v___x_2181_ = v_reuseFailAlloc_2182_;
goto v_reusejp_2180_;
}
v_reusejp_2180_:
{
return v___x_2181_;
}
}
}
}
else
{
lean_object* v_a_2184_; lean_object* v___x_2186_; uint8_t v_isShared_2187_; uint8_t v_isSharedCheck_2191_; 
lean_del_object(v___x_2120_);
lean_dec(v_snd_2118_);
lean_dec(v_fst_2117_);
lean_dec(v_a_2110_);
lean_dec_ref(v_b_2085_);
lean_dec_ref(v_a_2084_);
v_a_2184_ = lean_ctor_get(v___x_2122_, 0);
v_isSharedCheck_2191_ = !lean_is_exclusive(v___x_2122_);
if (v_isSharedCheck_2191_ == 0)
{
v___x_2186_ = v___x_2122_;
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
else
{
lean_inc(v_a_2184_);
lean_dec(v___x_2122_);
v___x_2186_ = lean_box(0);
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
v_resetjp_2185_:
{
lean_object* v___x_2189_; 
if (v_isShared_2187_ == 0)
{
v___x_2189_ = v___x_2186_;
goto v_reusejp_2188_;
}
else
{
lean_object* v_reuseFailAlloc_2190_; 
v_reuseFailAlloc_2190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2190_, 0, v_a_2184_);
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
}
else
{
lean_object* v___x_2193_; lean_object* v___x_2195_; 
lean_dec(v_a_2112_);
lean_dec(v_a_2110_);
lean_dec_ref(v_b_2085_);
lean_dec_ref(v_a_2084_);
v___x_2193_ = lean_box(0);
if (v_isShared_2115_ == 0)
{
lean_ctor_set(v___x_2114_, 0, v___x_2193_);
v___x_2195_ = v___x_2114_;
goto v_reusejp_2194_;
}
else
{
lean_object* v_reuseFailAlloc_2196_; 
v_reuseFailAlloc_2196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2196_, 0, v___x_2193_);
v___x_2195_ = v_reuseFailAlloc_2196_;
goto v_reusejp_2194_;
}
v_reusejp_2194_:
{
return v___x_2195_;
}
}
}
}
else
{
lean_object* v_a_2198_; lean_object* v___x_2200_; uint8_t v_isShared_2201_; uint8_t v_isSharedCheck_2205_; 
lean_dec(v_a_2110_);
lean_dec_ref(v_b_2085_);
lean_dec_ref(v_a_2084_);
v_a_2198_ = lean_ctor_get(v___x_2111_, 0);
v_isSharedCheck_2205_ = !lean_is_exclusive(v___x_2111_);
if (v_isSharedCheck_2205_ == 0)
{
v___x_2200_ = v___x_2111_;
v_isShared_2201_ = v_isSharedCheck_2205_;
goto v_resetjp_2199_;
}
else
{
lean_inc(v_a_2198_);
lean_dec(v___x_2111_);
v___x_2200_ = lean_box(0);
v_isShared_2201_ = v_isSharedCheck_2205_;
goto v_resetjp_2199_;
}
v_resetjp_2199_:
{
lean_object* v___x_2203_; 
if (v_isShared_2201_ == 0)
{
v___x_2203_ = v___x_2200_;
goto v_reusejp_2202_;
}
else
{
lean_object* v_reuseFailAlloc_2204_; 
v_reuseFailAlloc_2204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2204_, 0, v_a_2198_);
v___x_2203_ = v_reuseFailAlloc_2204_;
goto v_reusejp_2202_;
}
v_reusejp_2202_:
{
return v___x_2203_;
}
}
}
}
else
{
lean_object* v_a_2206_; lean_object* v___x_2208_; uint8_t v_isShared_2209_; uint8_t v_isSharedCheck_2213_; 
lean_dec_ref(v_b_2085_);
lean_dec_ref(v_a_2084_);
v_a_2206_ = lean_ctor_get(v___x_2109_, 0);
v_isSharedCheck_2213_ = !lean_is_exclusive(v___x_2109_);
if (v_isSharedCheck_2213_ == 0)
{
v___x_2208_ = v___x_2109_;
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
else
{
lean_inc(v_a_2206_);
lean_dec(v___x_2109_);
v___x_2208_ = lean_box(0);
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
v_resetjp_2207_:
{
lean_object* v___x_2211_; 
if (v_isShared_2209_ == 0)
{
v___x_2211_ = v___x_2208_;
goto v_reusejp_2210_;
}
else
{
lean_object* v_reuseFailAlloc_2212_; 
v_reuseFailAlloc_2212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2212_, 0, v_a_2206_);
v___x_2211_ = v_reuseFailAlloc_2212_;
goto v_reusejp_2210_;
}
v_reusejp_2210_:
{
return v___x_2211_;
}
}
}
}
else
{
lean_object* v_a_2214_; lean_object* v___x_2216_; uint8_t v_isShared_2217_; uint8_t v_isSharedCheck_2221_; 
lean_dec_ref(v_b_2085_);
lean_dec_ref(v_a_2084_);
v_a_2214_ = lean_ctor_get(v___x_2107_, 0);
v_isSharedCheck_2221_ = !lean_is_exclusive(v___x_2107_);
if (v_isSharedCheck_2221_ == 0)
{
v___x_2216_ = v___x_2107_;
v_isShared_2217_ = v_isSharedCheck_2221_;
goto v_resetjp_2215_;
}
else
{
lean_inc(v_a_2214_);
lean_dec(v___x_2107_);
v___x_2216_ = lean_box(0);
v_isShared_2217_ = v_isSharedCheck_2221_;
goto v_resetjp_2215_;
}
v_resetjp_2215_:
{
lean_object* v___x_2219_; 
if (v_isShared_2217_ == 0)
{
v___x_2219_ = v___x_2216_;
goto v_reusejp_2218_;
}
else
{
lean_object* v_reuseFailAlloc_2220_; 
v_reuseFailAlloc_2220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2220_, 0, v_a_2214_);
v___x_2219_ = v_reuseFailAlloc_2220_;
goto v_reusejp_2218_;
}
v_reusejp_2218_:
{
return v___x_2219_;
}
}
}
}
}
}
else
{
lean_object* v_a_2223_; lean_object* v___x_2225_; uint8_t v_isShared_2226_; uint8_t v_isSharedCheck_2230_; 
lean_dec_ref(v_b_2085_);
lean_dec_ref(v_a_2084_);
v_a_2223_ = lean_ctor_get(v___x_2097_, 0);
v_isSharedCheck_2230_ = !lean_is_exclusive(v___x_2097_);
if (v_isSharedCheck_2230_ == 0)
{
v___x_2225_ = v___x_2097_;
v_isShared_2226_ = v_isSharedCheck_2230_;
goto v_resetjp_2224_;
}
else
{
lean_inc(v_a_2223_);
lean_dec(v___x_2097_);
v___x_2225_ = lean_box(0);
v_isShared_2226_ = v_isSharedCheck_2230_;
goto v_resetjp_2224_;
}
v_resetjp_2224_:
{
lean_object* v___x_2228_; 
if (v_isShared_2226_ == 0)
{
v___x_2228_ = v___x_2225_;
goto v_reusejp_2227_;
}
else
{
lean_object* v_reuseFailAlloc_2229_; 
v_reuseFailAlloc_2229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2229_, 0, v_a_2223_);
v___x_2228_ = v_reuseFailAlloc_2229_;
goto v_reusejp_2227_;
}
v_reusejp_2227_:
{
return v___x_2228_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Homo_processNewEq___boxed(lean_object* v_a_2231_, lean_object* v_b_2232_, lean_object* v_a_2233_, lean_object* v_a_2234_, lean_object* v_a_2235_, lean_object* v_a_2236_, lean_object* v_a_2237_, lean_object* v_a_2238_, lean_object* v_a_2239_, lean_object* v_a_2240_, lean_object* v_a_2241_, lean_object* v_a_2242_, lean_object* v_a_2243_){
_start:
{
lean_object* v_res_2244_; 
v_res_2244_ = l_Lean_Meta_Grind_Homo_processNewEq(v_a_2231_, v_b_2232_, v_a_2233_, v_a_2234_, v_a_2235_, v_a_2236_, v_a_2237_, v_a_2238_, v_a_2239_, v_a_2240_, v_a_2241_, v_a_2242_);
lean_dec(v_a_2242_);
lean_dec_ref(v_a_2241_);
lean_dec(v_a_2240_);
lean_dec_ref(v_a_2239_);
lean_dec(v_a_2238_);
lean_dec_ref(v_a_2237_);
lean_dec(v_a_2236_);
lean_dec_ref(v_a_2235_);
lean_dec(v_a_2234_);
lean_dec(v_a_2233_);
return v_res_2244_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Homo_processNewDiseq___closed__2(void){
_start:
{
lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; 
v___x_2248_ = lean_box(0);
v___x_2249_ = ((lean_object*)(l_Lean_Meta_Grind_Homo_processNewDiseq___closed__1));
v___x_2250_ = l_Lean_mkConst(v___x_2249_, v___x_2248_);
return v___x_2250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Homo_processNewDiseq(lean_object* v_a_2251_, lean_object* v_b_2252_, lean_object* v_a_2253_, lean_object* v_a_2254_, lean_object* v_a_2255_, lean_object* v_a_2256_, lean_object* v_a_2257_, lean_object* v_a_2258_, lean_object* v_a_2259_, lean_object* v_a_2260_, lean_object* v_a_2261_, lean_object* v_a_2262_){
_start:
{
lean_object* v___x_2264_; 
v___x_2264_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_2255_);
if (lean_obj_tag(v___x_2264_) == 0)
{
lean_object* v_a_2265_; lean_object* v___x_2267_; uint8_t v_isShared_2268_; uint8_t v_isSharedCheck_2402_; 
v_a_2265_ = lean_ctor_get(v___x_2264_, 0);
v_isSharedCheck_2402_ = !lean_is_exclusive(v___x_2264_);
if (v_isSharedCheck_2402_ == 0)
{
v___x_2267_ = v___x_2264_;
v_isShared_2268_ = v_isSharedCheck_2402_;
goto v_resetjp_2266_;
}
else
{
lean_inc(v_a_2265_);
lean_dec(v___x_2264_);
v___x_2267_ = lean_box(0);
v_isShared_2268_ = v_isSharedCheck_2402_;
goto v_resetjp_2266_;
}
v_resetjp_2266_:
{
uint8_t v_hom_2269_; 
v_hom_2269_ = lean_ctor_get_uint8(v_a_2265_, sizeof(void*)*18 + 25);
lean_dec(v_a_2265_);
if (v_hom_2269_ == 0)
{
lean_object* v___x_2270_; lean_object* v___x_2272_; 
lean_dec_ref(v_b_2252_);
lean_dec_ref(v_a_2251_);
v___x_2270_ = lean_box(0);
if (v_isShared_2268_ == 0)
{
lean_ctor_set(v___x_2267_, 0, v___x_2270_);
v___x_2272_ = v___x_2267_;
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
else
{
lean_object* v___x_2274_; 
lean_del_object(v___x_2267_);
lean_inc_ref(v_b_2252_);
lean_inc_ref(v_a_2251_);
v___x_2274_ = l_Lean_Meta_mkEq(v_a_2251_, v_b_2252_, v_a_2259_, v_a_2260_, v_a_2261_, v_a_2262_);
if (lean_obj_tag(v___x_2274_) == 0)
{
lean_object* v_a_2275_; lean_object* v___x_2276_; 
v_a_2275_ = lean_ctor_get(v___x_2274_, 0);
lean_inc(v_a_2275_);
lean_dec_ref_known(v___x_2274_, 1);
v___x_2276_ = l_Lean_Meta_Sym_shareCommon(v_a_2275_, v_a_2257_, v_a_2258_, v_a_2259_, v_a_2260_, v_a_2261_, v_a_2262_);
if (lean_obj_tag(v___x_2276_) == 0)
{
lean_object* v_a_2277_; lean_object* v___x_2278_; 
v_a_2277_ = lean_ctor_get(v___x_2276_, 0);
lean_inc_n(v_a_2277_, 2);
lean_dec_ref_known(v___x_2276_, 1);
v___x_2278_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_applyHomo_x3f___redArg(v_a_2277_, v_a_2253_, v_a_2257_, v_a_2258_, v_a_2259_, v_a_2260_, v_a_2261_, v_a_2262_);
if (lean_obj_tag(v___x_2278_) == 0)
{
lean_object* v_a_2279_; lean_object* v___x_2281_; uint8_t v_isShared_2282_; uint8_t v_isSharedCheck_2377_; 
v_a_2279_ = lean_ctor_get(v___x_2278_, 0);
v_isSharedCheck_2377_ = !lean_is_exclusive(v___x_2278_);
if (v_isSharedCheck_2377_ == 0)
{
v___x_2281_ = v___x_2278_;
v_isShared_2282_ = v_isSharedCheck_2377_;
goto v_resetjp_2280_;
}
else
{
lean_inc(v_a_2279_);
lean_dec(v___x_2278_);
v___x_2281_ = lean_box(0);
v_isShared_2282_ = v_isSharedCheck_2377_;
goto v_resetjp_2280_;
}
v_resetjp_2280_:
{
if (lean_obj_tag(v_a_2279_) == 1)
{
lean_object* v_val_2283_; lean_object* v_fst_2284_; lean_object* v_snd_2285_; lean_object* v___x_2287_; uint8_t v_isShared_2288_; uint8_t v_isSharedCheck_2372_; 
lean_del_object(v___x_2281_);
v_val_2283_ = lean_ctor_get(v_a_2279_, 0);
lean_inc(v_val_2283_);
lean_dec_ref_known(v_a_2279_, 1);
v_fst_2284_ = lean_ctor_get(v_val_2283_, 0);
v_snd_2285_ = lean_ctor_get(v_val_2283_, 1);
v_isSharedCheck_2372_ = !lean_is_exclusive(v_val_2283_);
if (v_isSharedCheck_2372_ == 0)
{
v___x_2287_ = v_val_2283_;
v_isShared_2288_ = v_isSharedCheck_2372_;
goto v_resetjp_2286_;
}
else
{
lean_inc(v_snd_2285_);
lean_inc(v_fst_2284_);
lean_dec(v_val_2283_);
v___x_2287_ = lean_box(0);
v_isShared_2288_ = v_isSharedCheck_2372_;
goto v_resetjp_2286_;
}
v_resetjp_2286_:
{
lean_object* v___x_2289_; 
lean_inc_ref(v_b_2252_);
lean_inc_ref(v_a_2251_);
v___x_2289_ = l_Lean_Meta_Grind_mkDiseqProof(v_a_2251_, v_b_2252_, v_a_2253_, v_a_2254_, v_a_2255_, v_a_2256_, v_a_2257_, v_a_2258_, v_a_2259_, v_a_2260_, v_a_2261_, v_a_2262_);
if (lean_obj_tag(v___x_2289_) == 0)
{
lean_object* v_a_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; 
v_a_2290_ = lean_ctor_get(v___x_2289_, 0);
lean_inc(v_a_2290_);
lean_dec_ref_known(v___x_2289_, 1);
v___x_2291_ = lean_obj_once(&l_Lean_Meta_Grind_Homo_processNewDiseq___closed__2, &l_Lean_Meta_Grind_Homo_processNewDiseq___closed__2_once, _init_l_Lean_Meta_Grind_Homo_processNewDiseq___closed__2);
v___x_2292_ = l_Lean_Meta_mkCongrArg(v___x_2291_, v_snd_2285_, v_a_2259_, v_a_2260_, v_a_2261_, v_a_2262_);
if (lean_obj_tag(v___x_2292_) == 0)
{
lean_object* v_a_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; 
v_a_2293_ = lean_ctor_get(v___x_2292_, 0);
lean_inc(v_a_2293_);
lean_dec_ref_known(v___x_2292_, 1);
v___x_2294_ = l_Lean_mkNot(v_a_2277_);
v___x_2295_ = l_Lean_mkNot(v_fst_2284_);
lean_inc_ref(v___x_2295_);
lean_inc_ref(v___x_2294_);
v___x_2296_ = l_Lean_Meta_mkEqMPCore(v___x_2294_, v___x_2295_, v_a_2293_, v_a_2290_, v_a_2259_, v_a_2260_, v_a_2261_, v_a_2262_);
if (lean_obj_tag(v___x_2296_) == 0)
{
lean_object* v_a_2297_; lean_object* v___y_2299_; lean_object* v___y_2300_; lean_object* v___y_2301_; lean_object* v___y_2302_; lean_object* v___y_2303_; lean_object* v___y_2304_; lean_object* v___y_2305_; lean_object* v___x_2309_; 
v_a_2297_ = lean_ctor_get(v___x_2296_, 0);
lean_inc(v_a_2297_);
lean_dec_ref_known(v___x_2296_, 1);
v___x_2309_ = l_Lean_Meta_Grind_getGeneration___redArg(v_a_2251_, v_a_2253_);
lean_dec_ref(v_a_2251_);
if (lean_obj_tag(v___x_2309_) == 0)
{
lean_object* v_a_2310_; lean_object* v___x_2311_; 
v_a_2310_ = lean_ctor_get(v___x_2309_, 0);
lean_inc(v_a_2310_);
lean_dec_ref_known(v___x_2309_, 1);
v___x_2311_ = l_Lean_Meta_Grind_getGeneration___redArg(v_b_2252_, v_a_2253_);
lean_dec_ref(v_b_2252_);
if (lean_obj_tag(v___x_2311_) == 0)
{
lean_object* v_a_2312_; lean_object* v___y_2314_; uint8_t v___x_2331_; 
v_a_2312_ = lean_ctor_get(v___x_2311_, 0);
lean_inc(v_a_2312_);
lean_dec_ref_known(v___x_2311_, 1);
v___x_2331_ = lean_nat_dec_le(v_a_2310_, v_a_2312_);
if (v___x_2331_ == 0)
{
lean_dec(v_a_2312_);
v___y_2314_ = v_a_2310_;
goto v___jp_2313_;
}
else
{
lean_dec(v_a_2310_);
v___y_2314_ = v_a_2312_;
goto v___jp_2313_;
}
v___jp_2313_:
{
lean_object* v_toCold_2315_; lean_object* v_options_2316_; uint8_t v_hasTrace_2317_; 
v_toCold_2315_ = lean_ctor_get(v_a_2261_, 0);
v_options_2316_ = lean_ctor_get(v_toCold_2315_, 2);
v_hasTrace_2317_ = lean_ctor_get_uint8(v_options_2316_, sizeof(void*)*1);
if (v_hasTrace_2317_ == 0)
{
lean_dec_ref(v___x_2294_);
lean_del_object(v___x_2287_);
v___y_2299_ = v___y_2314_;
v___y_2300_ = v_a_2253_;
v___y_2301_ = v_a_2255_;
v___y_2302_ = v_a_2259_;
v___y_2303_ = v_a_2260_;
v___y_2304_ = v_a_2261_;
v___y_2305_ = v_a_2262_;
goto v___jp_2298_;
}
else
{
lean_object* v_inheritedTraceOptions_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; uint8_t v___x_2321_; 
v_inheritedTraceOptions_2318_ = lean_ctor_get(v_toCold_2315_, 11);
v___x_2319_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_));
v___x_2320_ = lean_obj_once(&l_Lean_Meta_Grind_Homo_internalize___redArg___closed__0, &l_Lean_Meta_Grind_Homo_internalize___redArg___closed__0_once, _init_l_Lean_Meta_Grind_Homo_internalize___redArg___closed__0);
v___x_2321_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2318_, v_options_2316_, v___x_2320_);
if (v___x_2321_ == 0)
{
lean_dec_ref(v___x_2294_);
lean_del_object(v___x_2287_);
v___y_2299_ = v___y_2314_;
v___y_2300_ = v_a_2253_;
v___y_2301_ = v_a_2255_;
v___y_2302_ = v_a_2259_;
v___y_2303_ = v_a_2260_;
v___y_2304_ = v_a_2261_;
v___y_2305_ = v_a_2262_;
goto v___jp_2298_;
}
else
{
lean_object* v___x_2322_; 
v___x_2322_ = l_Lean_Meta_Grind_updateLastTag(v_a_2253_, v_a_2254_, v_a_2255_, v_a_2256_, v_a_2257_, v_a_2258_, v_a_2259_, v_a_2260_, v_a_2261_, v_a_2262_);
if (lean_obj_tag(v___x_2322_) == 0)
{
lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2326_; 
lean_dec_ref_known(v___x_2322_, 1);
v___x_2323_ = l_Lean_MessageData_ofExpr(v___x_2294_);
v___x_2324_ = lean_obj_once(&l_Lean_Meta_Grind_Homo_internalize___redArg___closed__2, &l_Lean_Meta_Grind_Homo_internalize___redArg___closed__2_once, _init_l_Lean_Meta_Grind_Homo_internalize___redArg___closed__2);
if (v_isShared_2288_ == 0)
{
lean_ctor_set_tag(v___x_2287_, 7);
lean_ctor_set(v___x_2287_, 1, v___x_2324_);
lean_ctor_set(v___x_2287_, 0, v___x_2323_);
v___x_2326_ = v___x_2287_;
goto v_reusejp_2325_;
}
else
{
lean_object* v_reuseFailAlloc_2330_; 
v_reuseFailAlloc_2330_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2330_, 0, v___x_2323_);
lean_ctor_set(v_reuseFailAlloc_2330_, 1, v___x_2324_);
v___x_2326_ = v_reuseFailAlloc_2330_;
goto v_reusejp_2325_;
}
v_reusejp_2325_:
{
lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; 
lean_inc_ref(v___x_2295_);
v___x_2327_ = l_Lean_MessageData_ofExpr(v___x_2295_);
v___x_2328_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2328_, 0, v___x_2326_);
lean_ctor_set(v___x_2328_, 1, v___x_2327_);
v___x_2329_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_firePreds_spec__0___redArg(v___x_2319_, v___x_2328_, v_a_2259_, v_a_2260_, v_a_2261_, v_a_2262_);
if (lean_obj_tag(v___x_2329_) == 0)
{
lean_dec_ref_known(v___x_2329_, 1);
v___y_2299_ = v___y_2314_;
v___y_2300_ = v_a_2253_;
v___y_2301_ = v_a_2255_;
v___y_2302_ = v_a_2259_;
v___y_2303_ = v_a_2260_;
v___y_2304_ = v_a_2261_;
v___y_2305_ = v_a_2262_;
goto v___jp_2298_;
}
else
{
lean_dec(v___y_2314_);
lean_dec(v_a_2297_);
lean_dec_ref(v___x_2295_);
return v___x_2329_;
}
}
}
else
{
lean_dec(v___y_2314_);
lean_dec(v_a_2297_);
lean_dec_ref(v___x_2295_);
lean_dec_ref(v___x_2294_);
lean_del_object(v___x_2287_);
return v___x_2322_;
}
}
}
}
}
else
{
lean_object* v_a_2332_; lean_object* v___x_2334_; uint8_t v_isShared_2335_; uint8_t v_isSharedCheck_2339_; 
lean_dec(v_a_2310_);
lean_dec(v_a_2297_);
lean_dec_ref(v___x_2295_);
lean_dec_ref(v___x_2294_);
lean_del_object(v___x_2287_);
v_a_2332_ = lean_ctor_get(v___x_2311_, 0);
v_isSharedCheck_2339_ = !lean_is_exclusive(v___x_2311_);
if (v_isSharedCheck_2339_ == 0)
{
v___x_2334_ = v___x_2311_;
v_isShared_2335_ = v_isSharedCheck_2339_;
goto v_resetjp_2333_;
}
else
{
lean_inc(v_a_2332_);
lean_dec(v___x_2311_);
v___x_2334_ = lean_box(0);
v_isShared_2335_ = v_isSharedCheck_2339_;
goto v_resetjp_2333_;
}
v_resetjp_2333_:
{
lean_object* v___x_2337_; 
if (v_isShared_2335_ == 0)
{
v___x_2337_ = v___x_2334_;
goto v_reusejp_2336_;
}
else
{
lean_object* v_reuseFailAlloc_2338_; 
v_reuseFailAlloc_2338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2338_, 0, v_a_2332_);
v___x_2337_ = v_reuseFailAlloc_2338_;
goto v_reusejp_2336_;
}
v_reusejp_2336_:
{
return v___x_2337_;
}
}
}
}
else
{
lean_object* v_a_2340_; lean_object* v___x_2342_; uint8_t v_isShared_2343_; uint8_t v_isSharedCheck_2347_; 
lean_dec(v_a_2297_);
lean_dec_ref(v___x_2295_);
lean_dec_ref(v___x_2294_);
lean_del_object(v___x_2287_);
lean_dec_ref(v_b_2252_);
v_a_2340_ = lean_ctor_get(v___x_2309_, 0);
v_isSharedCheck_2347_ = !lean_is_exclusive(v___x_2309_);
if (v_isSharedCheck_2347_ == 0)
{
v___x_2342_ = v___x_2309_;
v_isShared_2343_ = v_isSharedCheck_2347_;
goto v_resetjp_2341_;
}
else
{
lean_inc(v_a_2340_);
lean_dec(v___x_2309_);
v___x_2342_ = lean_box(0);
v_isShared_2343_ = v_isSharedCheck_2347_;
goto v_resetjp_2341_;
}
v_resetjp_2341_:
{
lean_object* v___x_2345_; 
if (v_isShared_2343_ == 0)
{
v___x_2345_ = v___x_2342_;
goto v_reusejp_2344_;
}
else
{
lean_object* v_reuseFailAlloc_2346_; 
v_reuseFailAlloc_2346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2346_, 0, v_a_2340_);
v___x_2345_ = v_reuseFailAlloc_2346_;
goto v_reusejp_2344_;
}
v_reusejp_2344_:
{
return v___x_2345_;
}
}
}
v___jp_2298_:
{
lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; 
v___x_2306_ = lean_box(6);
v___x_2307_ = lean_box(1);
v___x_2308_ = l_Lean_Meta_Grind_addNewRawFact___redArg(v_a_2297_, v___x_2295_, v___y_2299_, v___x_2306_, v___x_2307_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_, v___y_2304_, v___y_2305_);
return v___x_2308_;
}
}
else
{
lean_object* v_a_2348_; lean_object* v___x_2350_; uint8_t v_isShared_2351_; uint8_t v_isSharedCheck_2355_; 
lean_dec_ref(v___x_2295_);
lean_dec_ref(v___x_2294_);
lean_del_object(v___x_2287_);
lean_dec_ref(v_b_2252_);
lean_dec_ref(v_a_2251_);
v_a_2348_ = lean_ctor_get(v___x_2296_, 0);
v_isSharedCheck_2355_ = !lean_is_exclusive(v___x_2296_);
if (v_isSharedCheck_2355_ == 0)
{
v___x_2350_ = v___x_2296_;
v_isShared_2351_ = v_isSharedCheck_2355_;
goto v_resetjp_2349_;
}
else
{
lean_inc(v_a_2348_);
lean_dec(v___x_2296_);
v___x_2350_ = lean_box(0);
v_isShared_2351_ = v_isSharedCheck_2355_;
goto v_resetjp_2349_;
}
v_resetjp_2349_:
{
lean_object* v___x_2353_; 
if (v_isShared_2351_ == 0)
{
v___x_2353_ = v___x_2350_;
goto v_reusejp_2352_;
}
else
{
lean_object* v_reuseFailAlloc_2354_; 
v_reuseFailAlloc_2354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2354_, 0, v_a_2348_);
v___x_2353_ = v_reuseFailAlloc_2354_;
goto v_reusejp_2352_;
}
v_reusejp_2352_:
{
return v___x_2353_;
}
}
}
}
else
{
lean_object* v_a_2356_; lean_object* v___x_2358_; uint8_t v_isShared_2359_; uint8_t v_isSharedCheck_2363_; 
lean_dec(v_a_2290_);
lean_del_object(v___x_2287_);
lean_dec(v_fst_2284_);
lean_dec(v_a_2277_);
lean_dec_ref(v_b_2252_);
lean_dec_ref(v_a_2251_);
v_a_2356_ = lean_ctor_get(v___x_2292_, 0);
v_isSharedCheck_2363_ = !lean_is_exclusive(v___x_2292_);
if (v_isSharedCheck_2363_ == 0)
{
v___x_2358_ = v___x_2292_;
v_isShared_2359_ = v_isSharedCheck_2363_;
goto v_resetjp_2357_;
}
else
{
lean_inc(v_a_2356_);
lean_dec(v___x_2292_);
v___x_2358_ = lean_box(0);
v_isShared_2359_ = v_isSharedCheck_2363_;
goto v_resetjp_2357_;
}
v_resetjp_2357_:
{
lean_object* v___x_2361_; 
if (v_isShared_2359_ == 0)
{
v___x_2361_ = v___x_2358_;
goto v_reusejp_2360_;
}
else
{
lean_object* v_reuseFailAlloc_2362_; 
v_reuseFailAlloc_2362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2362_, 0, v_a_2356_);
v___x_2361_ = v_reuseFailAlloc_2362_;
goto v_reusejp_2360_;
}
v_reusejp_2360_:
{
return v___x_2361_;
}
}
}
}
else
{
lean_object* v_a_2364_; lean_object* v___x_2366_; uint8_t v_isShared_2367_; uint8_t v_isSharedCheck_2371_; 
lean_del_object(v___x_2287_);
lean_dec(v_snd_2285_);
lean_dec(v_fst_2284_);
lean_dec(v_a_2277_);
lean_dec_ref(v_b_2252_);
lean_dec_ref(v_a_2251_);
v_a_2364_ = lean_ctor_get(v___x_2289_, 0);
v_isSharedCheck_2371_ = !lean_is_exclusive(v___x_2289_);
if (v_isSharedCheck_2371_ == 0)
{
v___x_2366_ = v___x_2289_;
v_isShared_2367_ = v_isSharedCheck_2371_;
goto v_resetjp_2365_;
}
else
{
lean_inc(v_a_2364_);
lean_dec(v___x_2289_);
v___x_2366_ = lean_box(0);
v_isShared_2367_ = v_isSharedCheck_2371_;
goto v_resetjp_2365_;
}
v_resetjp_2365_:
{
lean_object* v___x_2369_; 
if (v_isShared_2367_ == 0)
{
v___x_2369_ = v___x_2366_;
goto v_reusejp_2368_;
}
else
{
lean_object* v_reuseFailAlloc_2370_; 
v_reuseFailAlloc_2370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2370_, 0, v_a_2364_);
v___x_2369_ = v_reuseFailAlloc_2370_;
goto v_reusejp_2368_;
}
v_reusejp_2368_:
{
return v___x_2369_;
}
}
}
}
}
else
{
lean_object* v___x_2373_; lean_object* v___x_2375_; 
lean_dec(v_a_2279_);
lean_dec(v_a_2277_);
lean_dec_ref(v_b_2252_);
lean_dec_ref(v_a_2251_);
v___x_2373_ = lean_box(0);
if (v_isShared_2282_ == 0)
{
lean_ctor_set(v___x_2281_, 0, v___x_2373_);
v___x_2375_ = v___x_2281_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v___x_2373_);
v___x_2375_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2374_;
}
v_reusejp_2374_:
{
return v___x_2375_;
}
}
}
}
else
{
lean_object* v_a_2378_; lean_object* v___x_2380_; uint8_t v_isShared_2381_; uint8_t v_isSharedCheck_2385_; 
lean_dec(v_a_2277_);
lean_dec_ref(v_b_2252_);
lean_dec_ref(v_a_2251_);
v_a_2378_ = lean_ctor_get(v___x_2278_, 0);
v_isSharedCheck_2385_ = !lean_is_exclusive(v___x_2278_);
if (v_isSharedCheck_2385_ == 0)
{
v___x_2380_ = v___x_2278_;
v_isShared_2381_ = v_isSharedCheck_2385_;
goto v_resetjp_2379_;
}
else
{
lean_inc(v_a_2378_);
lean_dec(v___x_2278_);
v___x_2380_ = lean_box(0);
v_isShared_2381_ = v_isSharedCheck_2385_;
goto v_resetjp_2379_;
}
v_resetjp_2379_:
{
lean_object* v___x_2383_; 
if (v_isShared_2381_ == 0)
{
v___x_2383_ = v___x_2380_;
goto v_reusejp_2382_;
}
else
{
lean_object* v_reuseFailAlloc_2384_; 
v_reuseFailAlloc_2384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2384_, 0, v_a_2378_);
v___x_2383_ = v_reuseFailAlloc_2384_;
goto v_reusejp_2382_;
}
v_reusejp_2382_:
{
return v___x_2383_;
}
}
}
}
else
{
lean_object* v_a_2386_; lean_object* v___x_2388_; uint8_t v_isShared_2389_; uint8_t v_isSharedCheck_2393_; 
lean_dec_ref(v_b_2252_);
lean_dec_ref(v_a_2251_);
v_a_2386_ = lean_ctor_get(v___x_2276_, 0);
v_isSharedCheck_2393_ = !lean_is_exclusive(v___x_2276_);
if (v_isSharedCheck_2393_ == 0)
{
v___x_2388_ = v___x_2276_;
v_isShared_2389_ = v_isSharedCheck_2393_;
goto v_resetjp_2387_;
}
else
{
lean_inc(v_a_2386_);
lean_dec(v___x_2276_);
v___x_2388_ = lean_box(0);
v_isShared_2389_ = v_isSharedCheck_2393_;
goto v_resetjp_2387_;
}
v_resetjp_2387_:
{
lean_object* v___x_2391_; 
if (v_isShared_2389_ == 0)
{
v___x_2391_ = v___x_2388_;
goto v_reusejp_2390_;
}
else
{
lean_object* v_reuseFailAlloc_2392_; 
v_reuseFailAlloc_2392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2392_, 0, v_a_2386_);
v___x_2391_ = v_reuseFailAlloc_2392_;
goto v_reusejp_2390_;
}
v_reusejp_2390_:
{
return v___x_2391_;
}
}
}
}
else
{
lean_object* v_a_2394_; lean_object* v___x_2396_; uint8_t v_isShared_2397_; uint8_t v_isSharedCheck_2401_; 
lean_dec_ref(v_b_2252_);
lean_dec_ref(v_a_2251_);
v_a_2394_ = lean_ctor_get(v___x_2274_, 0);
v_isSharedCheck_2401_ = !lean_is_exclusive(v___x_2274_);
if (v_isSharedCheck_2401_ == 0)
{
v___x_2396_ = v___x_2274_;
v_isShared_2397_ = v_isSharedCheck_2401_;
goto v_resetjp_2395_;
}
else
{
lean_inc(v_a_2394_);
lean_dec(v___x_2274_);
v___x_2396_ = lean_box(0);
v_isShared_2397_ = v_isSharedCheck_2401_;
goto v_resetjp_2395_;
}
v_resetjp_2395_:
{
lean_object* v___x_2399_; 
if (v_isShared_2397_ == 0)
{
v___x_2399_ = v___x_2396_;
goto v_reusejp_2398_;
}
else
{
lean_object* v_reuseFailAlloc_2400_; 
v_reuseFailAlloc_2400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2400_, 0, v_a_2394_);
v___x_2399_ = v_reuseFailAlloc_2400_;
goto v_reusejp_2398_;
}
v_reusejp_2398_:
{
return v___x_2399_;
}
}
}
}
}
}
else
{
lean_object* v_a_2403_; lean_object* v___x_2405_; uint8_t v_isShared_2406_; uint8_t v_isSharedCheck_2410_; 
lean_dec_ref(v_b_2252_);
lean_dec_ref(v_a_2251_);
v_a_2403_ = lean_ctor_get(v___x_2264_, 0);
v_isSharedCheck_2410_ = !lean_is_exclusive(v___x_2264_);
if (v_isSharedCheck_2410_ == 0)
{
v___x_2405_ = v___x_2264_;
v_isShared_2406_ = v_isSharedCheck_2410_;
goto v_resetjp_2404_;
}
else
{
lean_inc(v_a_2403_);
lean_dec(v___x_2264_);
v___x_2405_ = lean_box(0);
v_isShared_2406_ = v_isSharedCheck_2410_;
goto v_resetjp_2404_;
}
v_resetjp_2404_:
{
lean_object* v___x_2408_; 
if (v_isShared_2406_ == 0)
{
v___x_2408_ = v___x_2405_;
goto v_reusejp_2407_;
}
else
{
lean_object* v_reuseFailAlloc_2409_; 
v_reuseFailAlloc_2409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2409_, 0, v_a_2403_);
v___x_2408_ = v_reuseFailAlloc_2409_;
goto v_reusejp_2407_;
}
v_reusejp_2407_:
{
return v___x_2408_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Homo_processNewDiseq___boxed(lean_object* v_a_2411_, lean_object* v_b_2412_, lean_object* v_a_2413_, lean_object* v_a_2414_, lean_object* v_a_2415_, lean_object* v_a_2416_, lean_object* v_a_2417_, lean_object* v_a_2418_, lean_object* v_a_2419_, lean_object* v_a_2420_, lean_object* v_a_2421_, lean_object* v_a_2422_, lean_object* v_a_2423_){
_start:
{
lean_object* v_res_2424_; 
v_res_2424_ = l_Lean_Meta_Grind_Homo_processNewDiseq(v_a_2411_, v_b_2412_, v_a_2413_, v_a_2414_, v_a_2415_, v_a_2416_, v_a_2417_, v_a_2418_, v_a_2419_, v_a_2420_, v_a_2421_, v_a_2422_);
lean_dec(v_a_2422_);
lean_dec_ref(v_a_2421_);
lean_dec(v_a_2420_);
lean_dec_ref(v_a_2419_);
lean_dec(v_a_2418_);
lean_dec_ref(v_a_2417_);
lean_dec(v_a_2416_);
lean_dec_ref(v_a_2415_);
lean_dec(v_a_2414_);
lean_dec(v_a_2413_);
return v_res_2424_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___lam__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2_(lean_object* v_x_2425_){
_start:
{
uint8_t v_hom_2426_; 
v_hom_2426_ = lean_ctor_get_uint8(v_x_2425_, sizeof(void*)*18 + 25);
return v_hom_2426_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___lam__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2____boxed(lean_object* v_x_2427_){
_start:
{
uint8_t v_res_2428_; lean_object* v_r_2429_; 
v_res_2428_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___lam__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2_(v_x_2427_);
lean_dec_ref(v_x_2427_);
v_r_2429_ = lean_box(v_res_2428_);
return v_r_2429_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___lam__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2_(lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_){
_start:
{
lean_object* v___x_2443_; 
v___x_2443_ = lean_apply_11(v___y_2431_, v___y_2430_, v___y_2433_, v___y_2434_, v___y_2435_, v___y_2436_, v___y_2437_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_, lean_box(0));
return v___x_2443_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___lam__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2____boxed(lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_){
_start:
{
lean_object* v_res_2457_; 
v_res_2457_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___lam__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2_(v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_, v___y_2448_, v___y_2449_, v___y_2450_, v___y_2451_, v___y_2452_, v___y_2453_, v___y_2454_, v___y_2455_);
lean_dec_ref(v___y_2446_);
return v_res_2457_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___lam__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2_(uint8_t v___x_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_){
_start:
{
lean_object* v___x_2470_; lean_object* v___x_2471_; 
v___x_2470_ = lean_box(v___x_2458_);
v___x_2471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2471_, 0, v___x_2470_);
return v___x_2471_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___lam__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2____boxed(lean_object* v___x_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_){
_start:
{
uint8_t v___x_1035__boxed_2484_; lean_object* v_res_2485_; 
v___x_1035__boxed_2484_ = lean_unbox(v___x_2472_);
v_res_2485_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___lam__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2_(v___x_1035__boxed_2484_, v___y_2473_, v___y_2474_, v___y_2475_, v___y_2476_, v___y_2477_, v___y_2478_, v___y_2479_, v___y_2480_, v___y_2481_, v___y_2482_);
lean_dec(v___y_2482_);
lean_dec_ref(v___y_2481_);
lean_dec(v___y_2480_);
lean_dec_ref(v___y_2479_);
lean_dec(v___y_2478_);
lean_dec_ref(v___y_2477_);
lean_dec(v___y_2476_);
lean_dec_ref(v___y_2475_);
lean_dec(v___y_2474_);
lean_dec(v___y_2473_);
return v_res_2485_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___lam__3_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2_(lean_object* v___x_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_){
_start:
{
lean_object* v___x_2498_; 
v___x_2498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2498_, 0, v___x_2486_);
return v___x_2498_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___lam__3_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2____boxed(lean_object* v___x_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_){
_start:
{
lean_object* v_res_2511_; 
v_res_2511_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___lam__3_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2_(v___x_2499_, v___y_2500_, v___y_2501_, v___y_2502_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_, v___y_2507_, v___y_2508_, v___y_2509_);
lean_dec(v___y_2509_);
lean_dec_ref(v___y_2508_);
lean_dec(v___y_2507_);
lean_dec_ref(v___y_2506_);
lean_dec(v___y_2505_);
lean_dec_ref(v___y_2504_);
lean_dec(v___y_2503_);
lean_dec_ref(v___y_2502_);
lean_dec(v___y_2501_);
lean_dec(v___y_2500_);
return v_res_2511_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_2523_; lean_object* v___f_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___f_2529_; lean_object* v___f_2530_; lean_object* v___x_2531_; 
v___f_2523_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2_));
v___f_2524_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2_));
v___x_2525_ = l_Lean_Meta_Grind_Homo_homExt;
v___x_2526_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2_));
v___x_2527_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2_));
v___x_2528_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2_));
v___f_2529_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__5_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2_));
v___f_2530_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn___closed__6_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2_));
v___x_2531_ = l_Lean_Meta_Grind_SolverExtension_setMethods___redArg(v___x_2525_, v___f_2523_, v___x_2526_, v___x_2527_, v___x_2528_, v___f_2529_, v___f_2524_, v___f_2529_, v___f_2530_);
return v___x_2531_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2____boxed(lean_object* v_a_2532_){
_start:
{
lean_object* v_res_2533_; 
v_res_2533_ = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2_();
return v_res_2533_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Homo(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Homo_Extra(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_NatInstTesters(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_LitValues(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Diseq(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_EvalGround(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Homomorphism(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Homo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Homo_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_NatInstTesters(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_LitValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Diseq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_EvalGround(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_3754153130____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_2531264644____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_4000635665____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Grind_Homo_homExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Grind_Homo_homExt);
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Homomorphism_0__Lean_Meta_Grind_Homo_initFn_00___x40_Lean_Meta_Tactic_Grind_Homomorphism_862334528____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Homomorphism(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Homo(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* initialize_Init_Grind_Homo_Extra(uint8_t builtin);
lean_object* initialize_Lean_Meta_NatInstTesters(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_LitValues(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Diseq(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_EvalGround(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Homomorphism(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Homo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Homo_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_NatInstTesters(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_LitValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Diseq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_EvalGround(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Homomorphism(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Homomorphism(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Homomorphism(builtin);
}
#ifdef __cplusplus
}
#endif
