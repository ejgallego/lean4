// Lean compiler output
// Module: Lean.Meta.Sym.Canon
// Imports: public import Lean.Meta.Sym.SymM import Lean.Meta.Sym.ExprPtr import Lean.Meta.SynthInstance import Lean.Meta.Sym.SynthInstance import Lean.Meta.Sym.Arith.EvalNum import Lean.Meta.IntInstTesters import Lean.Meta.NatInstTesters import Lean.Meta.LitValues import Lean.Meta.AppBuilder import Lean.Meta.Sym.Eta import Lean.Meta.WHNF import Init.Grind.Util
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
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_etaReduce(lean_object*);
uint8_t l_Lean_Meta_isMatcherCore(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_Sym_getConfig___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_reportIssue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_synthInstance_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_isDefEqI___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Environment_getProjectionFnInfo_x3f(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeFormer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_ParamInfo_isImplicit(lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Structural_isInstOfNatInt___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Int_mkType;
lean_object* l_Lean_Meta_Structural_isInstOfNatNat___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Nat_mkType;
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
lean_object* l_Lean_mkRawNatLit(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getBitVecValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_Meta_mkNumeral(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getNatValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLitValueModulus_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isCharLit(lean_object*);
uint32_t l_Char_ofNat(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldDefinition_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceProj_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Arith_evalNat_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_SymM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Arith_isOffset_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNatAdd(lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceMatcher_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isLambda(lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
uint8_t l_Lean_Expr_isBoolTrue(lean_object*);
uint8_t l_Lean_Expr_isBoolFalse(lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_projExpr_x21(lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Lean_Expr_eqv___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_profileitIOUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_hash___boxed(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__0_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sym"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__0_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__0_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__1_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__1_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__1_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__2_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "canon"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__2_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__2_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__3_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__0_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(230, 3, 132, 38, 134, 149, 222, 229)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__3_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__3_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__1_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(249, 1, 190, 45, 30, 82, 81, 176)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__3_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__3_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__2_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(134, 97, 144, 214, 78, 119, 236, 177)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__3_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__3_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__4_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__4_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__4_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__5_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__4_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__5_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__5_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__6_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__6_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__6_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__7_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__5_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__6_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__7_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__7_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__8_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__8_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__8_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__9_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__7_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__8_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__9_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__9_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__10_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Sym"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__10_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__10_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__11_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__9_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__10_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(215, 84, 158, 71, 120, 158, 242, 63)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__11_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__11_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__12_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Canon"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__12_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__12_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__13_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__11_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__12_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(39, 83, 125, 6, 218, 3, 48, 223)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__13_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__13_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__14_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__13_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(154, 171, 198, 108, 141, 151, 61, 31)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__14_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__14_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__15_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__14_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__6_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(59, 129, 34, 172, 72, 50, 70, 116)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__15_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__15_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__16_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__15_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__8_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(83, 207, 82, 133, 112, 147, 195, 77)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__16_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__16_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__17_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__16_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__10_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(46, 103, 41, 34, 191, 138, 48, 228)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__17_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__17_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__18_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__17_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__12_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(26, 52, 130, 106, 6, 185, 228, 149)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__18_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__18_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__19_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__19_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__19_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__20_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__18_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__19_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(255, 111, 38, 159, 202, 81, 240, 140)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__20_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__20_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__21_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__21_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__21_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__22_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__20_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__21_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(138, 83, 198, 225, 249, 91, 57, 132)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__22_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__22_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__23_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__22_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__6_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(139, 226, 138, 193, 30, 68, 227, 228)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__23_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__23_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__24_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__23_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__8_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(195, 70, 161, 93, 218, 182, 14, 120)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__24_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__24_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__25_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__24_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__10_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(94, 112, 163, 177, 100, 91, 121, 218)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__25_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__25_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__26_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__25_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__12_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(106, 6, 28, 240, 79, 58, 119, 82)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__26_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__26_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__27_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__26_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1925315962) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(161, 32, 45, 47, 13, 228, 196, 13)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__27_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__27_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__28_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__28_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__28_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__29_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__27_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__28_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(34, 31, 210, 182, 50, 29, 226, 12)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__29_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__29_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__30_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__30_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__30_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__31_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__29_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__30_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(174, 160, 218, 47, 172, 76, 255, 193)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__31_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__31_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__32_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__31_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(63, 7, 146, 163, 93, 52, 225, 8)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__32_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__32_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f(lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "BitVec"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Char"};
static const lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(18, 67, 155, 167, 151, 71, 146, 196)}};
static const lean_ctor_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(27, 51, 10, 169, 25, 67, 44, 251)}};
static const lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(101, 105, 192, 171, 214, 131, 43, 105)}};
static const lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__2_value;
static const lean_string_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Fin"};
static const lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(62, 91, 162, 2, 110, 238, 123, 219)}};
static const lean_ctor_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(127, 21, 77, 8, 216, 186, 116, 67)}};
static const lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__4_value;
static const lean_string_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ofNatLT"};
static const lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 44, 243, 4, 118, 78, 150, 28)}};
static const lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__6 = (const lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(62, 91, 162, 2, 110, 238, 123, 219)}};
static const lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__7 = (const lean_object*)&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__8;
static lean_once_cell_t l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_eqv___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__2_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__3_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond___closed__1_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonType_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonType_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonType_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonType_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonInst_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonInst_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonInst_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonInst_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonImplicit_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonImplicit_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonImplicit_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonImplicit_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_visit_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_visit_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_visit_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_visit_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_Canon_instInhabitedShouldCanonResult_default;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instInhabitedShouldCanonResult;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "canonType"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "canonInst"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__2_value)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "canonImplicit"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__4_value)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "visit"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__6_value)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_shouldCanon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_shouldCanon___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_mkOffset(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNat(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNat___boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zero"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(51, 81, 163, 94, 71, 156, 90, 186)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "succ"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(93, 165, 73, 246, 125, 40, 156, 223)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMod"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__4 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMod"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__5 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__4_value),LEAN_SCALAR_PTR_LITERAL(93, 4, 3, 35, 188, 254, 191, 190)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__5_value),LEAN_SCALAR_PTR_LITERAL(120, 199, 142, 238, 9, 44, 94, 134)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__6 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HDiv"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__7 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hDiv"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__8 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__7_value),LEAN_SCALAR_PTR_LITERAL(74, 223, 78, 88, 255, 236, 144, 164)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__8_value),LEAN_SCALAR_PTR_LITERAL(26, 183, 188, 240, 156, 118, 170, 84)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__9 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HSub"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__10 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__10_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hSub"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__11 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__11_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__10_value),LEAN_SCALAR_PTR_LITERAL(121, 130, 45, 212, 110, 237, 236, 233)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__12_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__11_value),LEAN_SCALAR_PTR_LITERAL(231, 253, 204, 163, 168, 77, 27, 58)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__12 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__12_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMul"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__13 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__13_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMul"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__14 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__14_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__13_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__15_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__14_value),LEAN_SCALAR_PTR_LITERAL(248, 227, 200, 215, 229, 255, 92, 22)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__15 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__15_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAdd"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__16 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__16_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAdd"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__17 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__17_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__16_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__18_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__17_value),LEAN_SCALAR_PTR_LITERAL(134, 172, 115, 219, 189, 252, 56, 148)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__18 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__18_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "failed to canonicalize instance"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__1;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "\nsynthesized instance is not definitionally equal"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__15___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__13___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__13___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14_spec__31_spec__36___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14_spec__31___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__27___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__27___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__30___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__30___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11_spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__11___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj_spec__4(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonOfNatInst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonOfNatInst___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonOfNatInst___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "\nfailed to synthesize"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonOfNatInst(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType_x27(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst_x27(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "nestedProof"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__0_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__6_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___closed__1_value_aux_1),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___closed__0_value),LEAN_SCALAR_PTR_LITERAL(182, 140, 29, 19, 223, 104, 218, 25)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___closed__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "nestedDecidable"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__6_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(65, 76, 105, 85, 179, 183, 200, 153)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstProp(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__1_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__2;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__3_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__4;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "]: "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__5_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__6;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__7 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__7_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__8;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppAndPost(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonMatch(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(130, 140, 200, 235, 144, 197, 118, 1)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__2_value),LEAN_SCALAR_PTR_LITERAL(15, 2, 151, 246, 61, 29, 192, 254)}};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonCond(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "proj expected"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "_private.Lean.Expr.0.Lean.Expr.updateProj!Impl"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Lean.Expr"};
static const lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppAndPost___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonOfNatInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonCond___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstProp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__30(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14_spec__31(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14_spec__31_spec__36(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Canon_isSupport(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Canon_isSupport___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_canon___lam__0(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_canon___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_canon___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "sym canon"};
static const lean_object* l_Lean_Meta_Sym_canon___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_canon___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_canon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_canon___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_78_; uint8_t v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_78_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__3_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_));
v___x_79_ = 0;
v___x_80_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__32_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_));
v___x_81_ = l_Lean_registerTraceClass(v___x_78_, v___x_79_, v___x_80_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2____boxed(lean_object* v_a_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_();
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f(lean_object* v_e_89_){
_start:
{
lean_object* v_e_91_; lean_object* v___x_107_; 
v___x_107_ = l_Lean_Expr_consumeMData(v_e_89_);
lean_dec_ref(v_e_89_);
if (lean_obj_tag(v___x_107_) == 9)
{
lean_object* v_a_108_; 
v_a_108_ = lean_ctor_get(v___x_107_, 0);
lean_inc_ref(v_a_108_);
if (lean_obj_tag(v_a_108_) == 0)
{
lean_object* v_val_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_116_; 
lean_dec_ref_known(v___x_107_, 1);
v_val_109_ = lean_ctor_get(v_a_108_, 0);
v_isSharedCheck_116_ = !lean_is_exclusive(v_a_108_);
if (v_isSharedCheck_116_ == 0)
{
v___x_111_ = v_a_108_;
v_isShared_112_ = v_isSharedCheck_116_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_val_109_);
lean_dec(v_a_108_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_116_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v___x_114_; 
if (v_isShared_112_ == 0)
{
lean_ctor_set_tag(v___x_111_, 1);
v___x_114_ = v___x_111_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_115_; 
v_reuseFailAlloc_115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_115_, 0, v_val_109_);
v___x_114_ = v_reuseFailAlloc_115_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
return v___x_114_;
}
}
}
else
{
lean_dec_ref(v_a_108_);
v_e_91_ = v___x_107_;
goto v___jp_90_;
}
}
else
{
v_e_91_ = v___x_107_;
goto v___jp_90_;
}
v___jp_90_:
{
lean_object* v___x_92_; uint8_t v___x_93_; 
v___x_92_ = l_Lean_Expr_cleanupAnnotations(v_e_91_);
lean_dec_ref(v_e_91_);
v___x_93_ = l_Lean_Expr_isApp(v___x_92_);
if (v___x_93_ == 0)
{
lean_object* v___x_94_; 
lean_dec_ref(v___x_92_);
v___x_94_ = lean_box(0);
return v___x_94_;
}
else
{
lean_object* v___x_95_; uint8_t v___x_96_; 
v___x_95_ = l_Lean_Expr_appFnCleanup___redArg(v___x_92_);
lean_dec_ref(v___x_92_);
v___x_96_ = l_Lean_Expr_isApp(v___x_95_);
if (v___x_96_ == 0)
{
lean_object* v___x_97_; 
lean_dec_ref(v___x_95_);
v___x_97_ = lean_box(0);
return v___x_97_;
}
else
{
lean_object* v___x_98_; uint8_t v___x_99_; 
v___x_98_ = l_Lean_Expr_appFnCleanup___redArg(v___x_95_);
v___x_99_ = l_Lean_Expr_isApp(v___x_98_);
if (v___x_99_ == 0)
{
lean_object* v___x_100_; 
lean_dec_ref(v___x_98_);
lean_dec_ref(v___x_95_);
v___x_100_ = lean_box(0);
return v___x_100_;
}
else
{
lean_object* v___x_101_; lean_object* v___x_102_; uint8_t v___x_103_; 
v___x_101_ = l_Lean_Expr_appFnCleanup___redArg(v___x_98_);
lean_dec_ref(v___x_98_);
v___x_102_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__2));
v___x_103_ = l_Lean_Expr_isConstOf(v___x_101_, v___x_102_);
lean_dec_ref(v___x_101_);
if (v___x_103_ == 0)
{
lean_object* v___x_104_; 
lean_dec_ref(v___x_95_);
v___x_104_ = lean_box(0);
return v___x_104_;
}
else
{
lean_object* v_arg_105_; 
v_arg_105_ = lean_ctor_get(v___x_95_, 1);
lean_inc_ref(v_arg_105_);
lean_dec_ref(v___x_95_);
v_e_89_ = v_arg_105_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg(lean_object* v_args_123_, lean_object* v_a_124_){
_start:
{
lean_object* v___y_130_; uint8_t v___y_131_; lean_object* v___y_135_; lean_object* v___y_136_; uint8_t v___y_137_; lean_object* v___y_138_; lean_object* v_args_165_; uint8_t v_modified_166_; lean_object* v___y_167_; lean_object* v___x_195_; lean_object* v___x_196_; uint8_t v_modified_197_; 
v___x_195_ = lean_array_get_size(v_args_123_);
v___x_196_ = lean_unsigned_to_nat(3u);
v_modified_197_ = lean_nat_dec_eq(v___x_195_, v___x_196_);
if (v_modified_197_ == 0)
{
lean_dec_ref(v_args_123_);
goto v___jp_126_;
}
else
{
uint8_t v_modified_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; uint8_t v___x_202_; 
v_modified_198_ = 0;
v___x_199_ = lean_unsigned_to_nat(1u);
v___x_200_ = lean_array_fget_borrowed(v_args_123_, v___x_199_);
v___x_201_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__2));
v___x_202_ = l_Lean_Expr_isAppOf(v___x_200_, v___x_201_);
if (v___x_202_ == 0)
{
v_args_165_ = v_args_123_;
v_modified_166_ = v_modified_198_;
v___y_167_ = v_a_124_;
goto v___jp_164_;
}
else
{
lean_object* v___x_203_; 
lean_inc(v___x_200_);
v___x_203_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f(v___x_200_);
if (lean_obj_tag(v___x_203_) == 1)
{
lean_object* v_val_204_; lean_object* v___x_205_; lean_object* v_args_206_; 
v_val_204_ = lean_ctor_get(v___x_203_, 0);
lean_inc(v_val_204_);
lean_dec_ref_known(v___x_203_, 1);
v___x_205_ = l_Lean_mkRawNatLit(v_val_204_);
v_args_206_ = lean_array_fset(v_args_123_, v___x_199_, v___x_205_);
v_args_165_ = v_args_206_;
v_modified_166_ = v_modified_197_;
v___y_167_ = v_a_124_;
goto v___jp_164_;
}
else
{
lean_dec(v___x_203_);
v_args_165_ = v_args_123_;
v_modified_166_ = v_modified_198_;
v___y_167_ = v_a_124_;
goto v___jp_164_;
}
}
}
v___jp_126_:
{
lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_127_ = lean_box(0);
v___x_128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_128_, 0, v___x_127_);
return v___x_128_;
}
v___jp_129_:
{
if (v___y_131_ == 0)
{
lean_dec_ref(v___y_130_);
goto v___jp_126_;
}
else
{
lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_132_, 0, v___y_130_);
v___x_133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_133_, 0, v___x_132_);
return v___x_133_;
}
}
v___jp_134_:
{
lean_object* v___x_139_; 
v___x_139_ = l_Lean_Meta_Structural_isInstOfNatInt___redArg(v___y_135_, v___y_138_);
if (lean_obj_tag(v___x_139_) == 0)
{
lean_object* v_a_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_155_; 
v_a_140_ = lean_ctor_get(v___x_139_, 0);
v_isSharedCheck_155_ = !lean_is_exclusive(v___x_139_);
if (v_isSharedCheck_155_ == 0)
{
v___x_142_ = v___x_139_;
v_isShared_143_ = v_isSharedCheck_155_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_a_140_);
lean_dec(v___x_139_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_155_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
uint8_t v___x_144_; 
v___x_144_ = lean_unbox(v_a_140_);
lean_dec(v_a_140_);
if (v___x_144_ == 0)
{
lean_del_object(v___x_142_);
v___y_130_ = v___y_136_;
v___y_131_ = v___y_137_;
goto v___jp_129_;
}
else
{
lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; uint8_t v___x_148_; 
v___x_145_ = lean_unsigned_to_nat(0u);
v___x_146_ = lean_array_fget_borrowed(v___y_136_, v___x_145_);
v___x_147_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__1));
v___x_148_ = l_Lean_Expr_isConstOf(v___x_146_, v___x_147_);
if (v___x_148_ == 0)
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_153_; 
v___x_149_ = l_Lean_Int_mkType;
v___x_150_ = lean_array_fset(v___y_136_, v___x_145_, v___x_149_);
v___x_151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
if (v_isShared_143_ == 0)
{
lean_ctor_set(v___x_142_, 0, v___x_151_);
v___x_153_ = v___x_142_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v___x_151_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
else
{
lean_del_object(v___x_142_);
v___y_130_ = v___y_136_;
v___y_131_ = v___y_137_;
goto v___jp_129_;
}
}
}
}
else
{
lean_object* v_a_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_163_; 
lean_dec_ref(v___y_136_);
v_a_156_ = lean_ctor_get(v___x_139_, 0);
v_isSharedCheck_163_ = !lean_is_exclusive(v___x_139_);
if (v_isSharedCheck_163_ == 0)
{
v___x_158_ = v___x_139_;
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_a_156_);
lean_dec(v___x_139_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_161_; 
if (v_isShared_159_ == 0)
{
v___x_161_ = v___x_158_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v_a_156_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
}
}
v___jp_164_:
{
lean_object* v___x_168_; lean_object* v_inst_169_; lean_object* v___x_170_; 
v___x_168_ = lean_unsigned_to_nat(2u);
v_inst_169_ = lean_array_fget_borrowed(v_args_165_, v___x_168_);
lean_inc(v_inst_169_);
v___x_170_ = l_Lean_Meta_Structural_isInstOfNatNat___redArg(v_inst_169_, v___y_167_);
if (lean_obj_tag(v___x_170_) == 0)
{
lean_object* v_a_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_186_; 
v_a_171_ = lean_ctor_get(v___x_170_, 0);
v_isSharedCheck_186_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_186_ == 0)
{
v___x_173_ = v___x_170_;
v_isShared_174_ = v_isSharedCheck_186_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_a_171_);
lean_dec(v___x_170_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_186_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
uint8_t v___x_175_; 
v___x_175_ = lean_unbox(v_a_171_);
lean_dec(v_a_171_);
if (v___x_175_ == 0)
{
lean_inc(v_inst_169_);
lean_del_object(v___x_173_);
v___y_135_ = v_inst_169_;
v___y_136_ = v_args_165_;
v___y_137_ = v_modified_166_;
v___y_138_ = v___y_167_;
goto v___jp_134_;
}
else
{
lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; uint8_t v___x_179_; 
v___x_176_ = lean_unsigned_to_nat(0u);
v___x_177_ = lean_array_fget_borrowed(v_args_165_, v___x_176_);
v___x_178_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__3));
v___x_179_ = l_Lean_Expr_isConstOf(v___x_177_, v___x_178_);
if (v___x_179_ == 0)
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_184_; 
v___x_180_ = l_Lean_Nat_mkType;
v___x_181_ = lean_array_fset(v_args_165_, v___x_176_, v___x_180_);
v___x_182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_182_, 0, v___x_181_);
if (v_isShared_174_ == 0)
{
lean_ctor_set(v___x_173_, 0, v___x_182_);
v___x_184_ = v___x_173_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v___x_182_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
return v___x_184_;
}
}
else
{
lean_inc(v_inst_169_);
lean_del_object(v___x_173_);
v___y_135_ = v_inst_169_;
v___y_136_ = v_args_165_;
v___y_137_ = v_modified_166_;
v___y_138_ = v___y_167_;
goto v___jp_134_;
}
}
}
}
else
{
lean_object* v_a_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_194_; 
lean_dec_ref(v_args_165_);
v_a_187_ = lean_ctor_get(v___x_170_, 0);
v_isSharedCheck_194_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_194_ == 0)
{
v___x_189_ = v___x_170_;
v_isShared_190_ = v_isSharedCheck_194_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_a_187_);
lean_dec(v___x_170_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_194_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v___x_192_; 
if (v_isShared_190_ == 0)
{
v___x_192_ = v___x_189_;
goto v_reusejp_191_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v_a_187_);
v___x_192_ = v_reuseFailAlloc_193_;
goto v_reusejp_191_;
}
v_reusejp_191_:
{
return v___x_192_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___boxed(lean_object* v_args_207_, lean_object* v_a_208_, lean_object* v_a_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg(v_args_207_, v_a_208_);
lean_dec(v_a_208_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f(lean_object* v_args_211_, lean_object* v_a_212_, lean_object* v_a_213_, lean_object* v_a_214_, lean_object* v_a_215_){
_start:
{
lean_object* v___x_217_; 
v___x_217_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg(v_args_211_, v_a_213_);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___boxed(lean_object* v_args_218_, lean_object* v_a_219_, lean_object* v_a_220_, lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v_a_223_){
_start:
{
lean_object* v_res_224_; 
v_res_224_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f(v_args_218_, v_a_219_, v_a_220_, v_a_221_, v_a_222_);
lean_dec(v_a_222_);
lean_dec_ref(v_a_221_);
lean_dec(v_a_220_);
lean_dec_ref(v_a_219_);
return v_res_224_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__2(void){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_228_ = lean_box(0);
v___x_229_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__1));
v___x_230_ = l_Lean_mkConst(v___x_229_, v___x_228_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm(lean_object* v_e_231_, lean_object* v_a_232_, lean_object* v_a_233_, lean_object* v_a_234_, lean_object* v_a_235_){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = l_Lean_Meta_getBitVecValue_x3f(v_e_231_, v_a_232_, v_a_233_, v_a_234_, v_a_235_);
if (lean_obj_tag(v___x_237_) == 0)
{
lean_object* v_a_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_276_; 
v_a_238_ = lean_ctor_get(v___x_237_, 0);
v_isSharedCheck_276_ = !lean_is_exclusive(v___x_237_);
if (v_isSharedCheck_276_ == 0)
{
v___x_240_ = v___x_237_;
v_isShared_241_ = v_isSharedCheck_276_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_a_238_);
lean_dec(v___x_237_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_276_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
if (lean_obj_tag(v_a_238_) == 1)
{
lean_object* v_val_242_; lean_object* v___x_244_; uint8_t v_isShared_245_; uint8_t v_isSharedCheck_271_; 
lean_del_object(v___x_240_);
v_val_242_ = lean_ctor_get(v_a_238_, 0);
v_isSharedCheck_271_ = !lean_is_exclusive(v_a_238_);
if (v_isSharedCheck_271_ == 0)
{
v___x_244_ = v_a_238_;
v_isShared_245_ = v_isSharedCheck_271_;
goto v_resetjp_243_;
}
else
{
lean_inc(v_val_242_);
lean_dec(v_a_238_);
v___x_244_ = lean_box(0);
v_isShared_245_ = v_isSharedCheck_271_;
goto v_resetjp_243_;
}
v_resetjp_243_:
{
lean_object* v_fst_246_; lean_object* v_snd_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v_fst_246_ = lean_ctor_get(v_val_242_, 0);
lean_inc(v_fst_246_);
v_snd_247_ = lean_ctor_get(v_val_242_, 1);
lean_inc(v_snd_247_);
lean_dec(v_val_242_);
v___x_248_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__2, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__2_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__2);
v___x_249_ = l_Lean_mkNatLit(v_fst_246_);
v___x_250_ = l_Lean_Expr_app___override(v___x_248_, v___x_249_);
v___x_251_ = l_Lean_Meta_mkNumeral(v___x_250_, v_snd_247_, v_a_232_, v_a_233_, v_a_234_, v_a_235_);
if (lean_obj_tag(v___x_251_) == 0)
{
lean_object* v_a_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_262_; 
v_a_252_ = lean_ctor_get(v___x_251_, 0);
v_isSharedCheck_262_ = !lean_is_exclusive(v___x_251_);
if (v_isSharedCheck_262_ == 0)
{
v___x_254_ = v___x_251_;
v_isShared_255_ = v_isSharedCheck_262_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_a_252_);
lean_dec(v___x_251_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_262_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v___x_257_; 
if (v_isShared_245_ == 0)
{
lean_ctor_set(v___x_244_, 0, v_a_252_);
v___x_257_ = v___x_244_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v_a_252_);
v___x_257_ = v_reuseFailAlloc_261_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
lean_object* v___x_259_; 
if (v_isShared_255_ == 0)
{
lean_ctor_set(v___x_254_, 0, v___x_257_);
v___x_259_ = v___x_254_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v___x_257_);
v___x_259_ = v_reuseFailAlloc_260_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
return v___x_259_;
}
}
}
}
else
{
lean_object* v_a_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_270_; 
lean_del_object(v___x_244_);
v_a_263_ = lean_ctor_get(v___x_251_, 0);
v_isSharedCheck_270_ = !lean_is_exclusive(v___x_251_);
if (v_isSharedCheck_270_ == 0)
{
v___x_265_ = v___x_251_;
v_isShared_266_ = v_isSharedCheck_270_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_a_263_);
lean_dec(v___x_251_);
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
v_reuseFailAlloc_269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v_a_263_);
v___x_268_ = v_reuseFailAlloc_269_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
return v___x_268_;
}
}
}
}
}
else
{
lean_object* v___x_272_; lean_object* v___x_274_; 
lean_dec(v_a_238_);
v___x_272_ = lean_box(0);
if (v_isShared_241_ == 0)
{
lean_ctor_set(v___x_240_, 0, v___x_272_);
v___x_274_ = v___x_240_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v___x_272_);
v___x_274_ = v_reuseFailAlloc_275_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
return v___x_274_;
}
}
}
}
else
{
lean_object* v_a_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_284_; 
v_a_277_ = lean_ctor_get(v___x_237_, 0);
v_isSharedCheck_284_ = !lean_is_exclusive(v___x_237_);
if (v_isSharedCheck_284_ == 0)
{
v___x_279_ = v___x_237_;
v_isShared_280_ = v_isSharedCheck_284_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_a_277_);
lean_dec(v___x_237_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_284_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___x_282_; 
if (v_isShared_280_ == 0)
{
v___x_282_ = v___x_279_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v_a_277_);
v___x_282_ = v_reuseFailAlloc_283_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
return v___x_282_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___boxed(lean_object* v_e_285_, lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm(v_e_285_, v_a_286_, v_a_287_, v_a_288_, v_a_289_);
lean_dec(v_a_289_);
lean_dec_ref(v_a_288_);
lean_dec(v_a_287_);
lean_dec_ref(v_a_286_);
return v_res_291_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__8(void){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_309_ = lean_box(0);
v___x_310_ = ((lean_object*)(l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__7));
v___x_311_ = l_Lean_mkConst(v___x_310_, v___x_309_);
return v___x_311_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__9(void){
_start:
{
lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_312_ = lean_box(0);
v___x_313_ = ((lean_object*)(l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__1));
v___x_314_ = l_Lean_mkConst(v___x_313_, v___x_312_);
return v___x_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f(lean_object* v_e_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_){
_start:
{
lean_object* v___x_324_; 
lean_inc_ref(v_e_315_);
v___x_324_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_315_, v_a_317_);
if (lean_obj_tag(v___x_324_) == 0)
{
lean_object* v_a_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_579_; 
v_a_325_ = lean_ctor_get(v___x_324_, 0);
v_isSharedCheck_579_ = !lean_is_exclusive(v___x_324_);
if (v_isSharedCheck_579_ == 0)
{
v___x_327_ = v___x_324_;
v_isShared_328_ = v_isSharedCheck_579_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_a_325_);
lean_dec(v___x_324_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_579_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___x_329_; uint8_t v___x_330_; 
v___x_329_ = l_Lean_Expr_cleanupAnnotations(v_a_325_);
lean_dec(v_a_325_);
v___x_330_ = l_Lean_Expr_isApp(v___x_329_);
if (v___x_330_ == 0)
{
lean_dec_ref(v___x_329_);
lean_del_object(v___x_327_);
lean_dec_ref(v_e_315_);
goto v___jp_321_;
}
else
{
lean_object* v_arg_331_; lean_object* v___x_332_; lean_object* v___x_333_; uint8_t v___x_334_; 
v_arg_331_ = lean_ctor_get(v___x_329_, 1);
lean_inc_ref(v_arg_331_);
v___x_332_ = l_Lean_Expr_appFnCleanup___redArg(v___x_329_);
lean_dec_ref(v___x_329_);
v___x_333_ = ((lean_object*)(l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__1));
v___x_334_ = l_Lean_Expr_isConstOf(v___x_332_, v___x_333_);
if (v___x_334_ == 0)
{
uint8_t v___x_335_; 
lean_del_object(v___x_327_);
v___x_335_ = l_Lean_Expr_isApp(v___x_332_);
if (v___x_335_ == 0)
{
lean_dec_ref(v___x_332_);
lean_dec_ref(v_arg_331_);
lean_dec_ref(v_e_315_);
goto v___jp_321_;
}
else
{
lean_object* v_arg_336_; lean_object* v___x_337_; lean_object* v___x_338_; uint8_t v___x_339_; 
v_arg_336_ = lean_ctor_get(v___x_332_, 1);
lean_inc_ref(v_arg_336_);
v___x_337_ = l_Lean_Expr_appFnCleanup___redArg(v___x_332_);
lean_dec_ref(v___x_332_);
v___x_338_ = ((lean_object*)(l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__2));
v___x_339_ = l_Lean_Expr_isConstOf(v___x_337_, v___x_338_);
if (v___x_339_ == 0)
{
uint8_t v___x_340_; 
v___x_340_ = l_Lean_Expr_isApp(v___x_337_);
if (v___x_340_ == 0)
{
lean_dec_ref(v___x_337_);
lean_dec_ref(v_arg_336_);
lean_dec_ref(v_arg_331_);
lean_dec_ref(v_e_315_);
goto v___jp_321_;
}
else
{
lean_object* v_arg_341_; lean_object* v___x_342_; lean_object* v___x_343_; uint8_t v___x_344_; 
v_arg_341_ = lean_ctor_get(v___x_337_, 1);
lean_inc_ref(v_arg_341_);
v___x_342_ = l_Lean_Expr_appFnCleanup___redArg(v___x_337_);
lean_dec_ref(v___x_337_);
v___x_343_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__2));
v___x_344_ = l_Lean_Expr_isConstOf(v___x_342_, v___x_343_);
if (v___x_344_ == 0)
{
lean_object* v___x_345_; uint8_t v___x_346_; 
lean_dec_ref(v_arg_336_);
v___x_345_ = ((lean_object*)(l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__4));
v___x_346_ = l_Lean_Expr_isConstOf(v___x_342_, v___x_345_);
if (v___x_346_ == 0)
{
lean_object* v___x_347_; uint8_t v___x_348_; 
lean_dec_ref(v_arg_341_);
lean_dec_ref(v_arg_331_);
v___x_347_ = ((lean_object*)(l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__6));
v___x_348_ = l_Lean_Expr_isConstOf(v___x_342_, v___x_347_);
lean_dec_ref(v___x_342_);
if (v___x_348_ == 0)
{
lean_dec_ref(v_e_315_);
goto v___jp_321_;
}
else
{
lean_object* v___x_349_; 
v___x_349_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm(v_e_315_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
return v___x_349_;
}
}
else
{
lean_object* v___x_350_; 
lean_dec_ref(v___x_342_);
lean_dec_ref(v_e_315_);
v___x_350_ = l_Lean_Meta_getNatValue_x3f(v_arg_341_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
lean_dec_ref(v_arg_341_);
if (lean_obj_tag(v___x_350_) == 0)
{
lean_object* v_a_351_; lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_413_; 
v_a_351_ = lean_ctor_get(v___x_350_, 0);
v_isSharedCheck_413_ = !lean_is_exclusive(v___x_350_);
if (v_isSharedCheck_413_ == 0)
{
v___x_353_ = v___x_350_;
v_isShared_354_ = v_isSharedCheck_413_;
goto v_resetjp_352_;
}
else
{
lean_inc(v_a_351_);
lean_dec(v___x_350_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_413_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
if (lean_obj_tag(v_a_351_) == 1)
{
lean_object* v_val_355_; lean_object* v___x_356_; 
lean_del_object(v___x_353_);
v_val_355_ = lean_ctor_get(v_a_351_, 0);
lean_inc(v_val_355_);
lean_dec_ref_known(v_a_351_, 1);
v___x_356_ = l_Lean_Meta_getNatValue_x3f(v_arg_331_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
lean_dec_ref(v_arg_331_);
if (lean_obj_tag(v___x_356_) == 0)
{
lean_object* v_a_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_400_; 
v_a_357_ = lean_ctor_get(v___x_356_, 0);
v_isSharedCheck_400_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_400_ == 0)
{
v___x_359_ = v___x_356_;
v_isShared_360_ = v_isSharedCheck_400_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_a_357_);
lean_dec(v___x_356_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_400_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
if (lean_obj_tag(v_a_357_) == 1)
{
lean_object* v_val_361_; lean_object* v___x_363_; uint8_t v_isShared_364_; uint8_t v_isSharedCheck_395_; 
v_val_361_ = lean_ctor_get(v_a_357_, 0);
v_isSharedCheck_395_ = !lean_is_exclusive(v_a_357_);
if (v_isSharedCheck_395_ == 0)
{
v___x_363_ = v_a_357_;
v_isShared_364_ = v_isSharedCheck_395_;
goto v_resetjp_362_;
}
else
{
lean_inc(v_val_361_);
lean_dec(v_a_357_);
v___x_363_ = lean_box(0);
v_isShared_364_ = v_isSharedCheck_395_;
goto v_resetjp_362_;
}
v_resetjp_362_:
{
lean_object* v___x_365_; uint8_t v___x_366_; 
v___x_365_ = lean_unsigned_to_nat(0u);
v___x_366_ = lean_nat_dec_eq(v_val_355_, v___x_365_);
if (v___x_366_ == 0)
{
lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
lean_del_object(v___x_359_);
v___x_367_ = lean_obj_once(&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__8, &l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__8_once, _init_l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__8);
lean_inc(v_val_355_);
v___x_368_ = l_Lean_mkNatLit(v_val_355_);
v___x_369_ = l_Lean_Expr_app___override(v___x_367_, v___x_368_);
v___x_370_ = lean_nat_mod(v_val_361_, v_val_355_);
lean_dec(v_val_355_);
lean_dec(v_val_361_);
v___x_371_ = l_Lean_Meta_mkNumeral(v___x_369_, v___x_370_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
if (lean_obj_tag(v___x_371_) == 0)
{
lean_object* v_a_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_382_; 
v_a_372_ = lean_ctor_get(v___x_371_, 0);
v_isSharedCheck_382_ = !lean_is_exclusive(v___x_371_);
if (v_isSharedCheck_382_ == 0)
{
v___x_374_ = v___x_371_;
v_isShared_375_ = v_isSharedCheck_382_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_a_372_);
lean_dec(v___x_371_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_382_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v___x_377_; 
if (v_isShared_364_ == 0)
{
lean_ctor_set(v___x_363_, 0, v_a_372_);
v___x_377_ = v___x_363_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v_a_372_);
v___x_377_ = v_reuseFailAlloc_381_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
lean_object* v___x_379_; 
if (v_isShared_375_ == 0)
{
lean_ctor_set(v___x_374_, 0, v___x_377_);
v___x_379_ = v___x_374_;
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
lean_object* v_a_383_; lean_object* v___x_385_; uint8_t v_isShared_386_; uint8_t v_isSharedCheck_390_; 
lean_del_object(v___x_363_);
v_a_383_ = lean_ctor_get(v___x_371_, 0);
v_isSharedCheck_390_ = !lean_is_exclusive(v___x_371_);
if (v_isSharedCheck_390_ == 0)
{
v___x_385_ = v___x_371_;
v_isShared_386_ = v_isSharedCheck_390_;
goto v_resetjp_384_;
}
else
{
lean_inc(v_a_383_);
lean_dec(v___x_371_);
v___x_385_ = lean_box(0);
v_isShared_386_ = v_isSharedCheck_390_;
goto v_resetjp_384_;
}
v_resetjp_384_:
{
lean_object* v___x_388_; 
if (v_isShared_386_ == 0)
{
v___x_388_ = v___x_385_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v_a_383_);
v___x_388_ = v_reuseFailAlloc_389_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
return v___x_388_;
}
}
}
}
else
{
lean_object* v___x_391_; lean_object* v___x_393_; 
lean_del_object(v___x_363_);
lean_dec(v_val_361_);
lean_dec(v_val_355_);
v___x_391_ = lean_box(0);
if (v_isShared_360_ == 0)
{
lean_ctor_set(v___x_359_, 0, v___x_391_);
v___x_393_ = v___x_359_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v___x_391_);
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
lean_object* v___x_396_; lean_object* v___x_398_; 
lean_dec(v_a_357_);
lean_dec(v_val_355_);
v___x_396_ = lean_box(0);
if (v_isShared_360_ == 0)
{
lean_ctor_set(v___x_359_, 0, v___x_396_);
v___x_398_ = v___x_359_;
goto v_reusejp_397_;
}
else
{
lean_object* v_reuseFailAlloc_399_; 
v_reuseFailAlloc_399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_399_, 0, v___x_396_);
v___x_398_ = v_reuseFailAlloc_399_;
goto v_reusejp_397_;
}
v_reusejp_397_:
{
return v___x_398_;
}
}
}
}
else
{
lean_object* v_a_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_408_; 
lean_dec(v_val_355_);
v_a_401_ = lean_ctor_get(v___x_356_, 0);
v_isSharedCheck_408_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_408_ == 0)
{
v___x_403_ = v___x_356_;
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_a_401_);
lean_dec(v___x_356_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v___x_406_; 
if (v_isShared_404_ == 0)
{
v___x_406_ = v___x_403_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_a_401_);
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
lean_object* v___x_409_; lean_object* v___x_411_; 
lean_dec(v_a_351_);
lean_dec_ref(v_arg_331_);
v___x_409_ = lean_box(0);
if (v_isShared_354_ == 0)
{
lean_ctor_set(v___x_353_, 0, v___x_409_);
v___x_411_ = v___x_353_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v___x_409_);
v___x_411_ = v_reuseFailAlloc_412_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
return v___x_411_;
}
}
}
}
else
{
lean_object* v_a_414_; lean_object* v___x_416_; uint8_t v_isShared_417_; uint8_t v_isSharedCheck_421_; 
lean_dec_ref(v_arg_331_);
v_a_414_ = lean_ctor_get(v___x_350_, 0);
v_isSharedCheck_421_ = !lean_is_exclusive(v___x_350_);
if (v_isSharedCheck_421_ == 0)
{
v___x_416_ = v___x_350_;
v_isShared_417_ = v_isSharedCheck_421_;
goto v_resetjp_415_;
}
else
{
lean_inc(v_a_414_);
lean_dec(v___x_350_);
v___x_416_ = lean_box(0);
v_isShared_417_ = v_isSharedCheck_421_;
goto v_resetjp_415_;
}
v_resetjp_415_:
{
lean_object* v___x_419_; 
if (v_isShared_417_ == 0)
{
v___x_419_ = v___x_416_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v_a_414_);
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
}
else
{
lean_object* v___x_422_; 
lean_dec_ref(v___x_342_);
lean_dec_ref(v_arg_331_);
lean_dec_ref(v_e_315_);
lean_inc_ref(v_arg_341_);
v___x_422_ = l_Lean_Meta_getLitValueModulus_x3f(v_arg_341_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
if (lean_obj_tag(v___x_422_) == 0)
{
lean_object* v_a_423_; lean_object* v___x_425_; uint8_t v_isShared_426_; uint8_t v_isSharedCheck_484_; 
v_a_423_ = lean_ctor_get(v___x_422_, 0);
v_isSharedCheck_484_ = !lean_is_exclusive(v___x_422_);
if (v_isSharedCheck_484_ == 0)
{
v___x_425_ = v___x_422_;
v_isShared_426_ = v_isSharedCheck_484_;
goto v_resetjp_424_;
}
else
{
lean_inc(v_a_423_);
lean_dec(v___x_422_);
v___x_425_ = lean_box(0);
v_isShared_426_ = v_isSharedCheck_484_;
goto v_resetjp_424_;
}
v_resetjp_424_:
{
if (lean_obj_tag(v_a_423_) == 1)
{
lean_object* v_val_427_; lean_object* v___x_428_; 
v_val_427_ = lean_ctor_get(v_a_423_, 0);
lean_inc(v_val_427_);
lean_dec_ref_known(v_a_423_, 1);
v___x_428_ = l_Lean_Meta_getNatValue_x3f(v_arg_336_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
lean_dec_ref(v_arg_336_);
if (lean_obj_tag(v___x_428_) == 0)
{
lean_object* v_a_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_471_; 
v_a_429_ = lean_ctor_get(v___x_428_, 0);
v_isSharedCheck_471_ = !lean_is_exclusive(v___x_428_);
if (v_isSharedCheck_471_ == 0)
{
v___x_431_ = v___x_428_;
v_isShared_432_ = v_isSharedCheck_471_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_a_429_);
lean_dec(v___x_428_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_471_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
if (lean_obj_tag(v_a_429_) == 1)
{
lean_object* v_val_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_466_; 
lean_del_object(v___x_425_);
v_val_438_ = lean_ctor_get(v_a_429_, 0);
v_isSharedCheck_466_ = !lean_is_exclusive(v_a_429_);
if (v_isSharedCheck_466_ == 0)
{
v___x_440_ = v_a_429_;
v_isShared_441_ = v_isSharedCheck_466_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_val_438_);
lean_dec(v_a_429_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_466_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_442_; uint8_t v___x_443_; 
v___x_442_ = lean_unsigned_to_nat(0u);
v___x_443_ = lean_nat_dec_eq(v_val_427_, v___x_442_);
if (v___x_443_ == 0)
{
uint8_t v___x_444_; 
v___x_444_ = lean_nat_dec_lt(v_val_438_, v_val_427_);
if (v___x_444_ == 0)
{
lean_object* v___x_445_; lean_object* v___x_446_; 
lean_del_object(v___x_431_);
v___x_445_ = lean_nat_mod(v_val_438_, v_val_427_);
lean_dec(v_val_427_);
lean_dec(v_val_438_);
v___x_446_ = l_Lean_Meta_mkNumeral(v_arg_341_, v___x_445_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
if (lean_obj_tag(v___x_446_) == 0)
{
lean_object* v_a_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_457_; 
v_a_447_ = lean_ctor_get(v___x_446_, 0);
v_isSharedCheck_457_ = !lean_is_exclusive(v___x_446_);
if (v_isSharedCheck_457_ == 0)
{
v___x_449_ = v___x_446_;
v_isShared_450_ = v_isSharedCheck_457_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_a_447_);
lean_dec(v___x_446_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_457_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_452_; 
if (v_isShared_441_ == 0)
{
lean_ctor_set(v___x_440_, 0, v_a_447_);
v___x_452_ = v___x_440_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v_a_447_);
v___x_452_ = v_reuseFailAlloc_456_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
lean_object* v___x_454_; 
if (v_isShared_450_ == 0)
{
lean_ctor_set(v___x_449_, 0, v___x_452_);
v___x_454_ = v___x_449_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v___x_452_);
v___x_454_ = v_reuseFailAlloc_455_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
return v___x_454_;
}
}
}
}
else
{
lean_object* v_a_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_465_; 
lean_del_object(v___x_440_);
v_a_458_ = lean_ctor_get(v___x_446_, 0);
v_isSharedCheck_465_ = !lean_is_exclusive(v___x_446_);
if (v_isSharedCheck_465_ == 0)
{
v___x_460_ = v___x_446_;
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_a_458_);
lean_dec(v___x_446_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_463_; 
if (v_isShared_461_ == 0)
{
v___x_463_ = v___x_460_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v_a_458_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
return v___x_463_;
}
}
}
}
else
{
lean_del_object(v___x_440_);
lean_dec(v_val_438_);
lean_dec(v_val_427_);
lean_dec_ref(v_arg_341_);
goto v___jp_433_;
}
}
else
{
lean_del_object(v___x_440_);
lean_dec(v_val_438_);
lean_dec(v_val_427_);
lean_dec_ref(v_arg_341_);
goto v___jp_433_;
}
}
}
else
{
lean_object* v___x_467_; lean_object* v___x_469_; 
lean_del_object(v___x_431_);
lean_dec(v_a_429_);
lean_dec(v_val_427_);
lean_dec_ref(v_arg_341_);
v___x_467_ = lean_box(0);
if (v_isShared_426_ == 0)
{
lean_ctor_set(v___x_425_, 0, v___x_467_);
v___x_469_ = v___x_425_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v___x_467_);
v___x_469_ = v_reuseFailAlloc_470_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
return v___x_469_;
}
}
v___jp_433_:
{
lean_object* v___x_434_; lean_object* v___x_436_; 
v___x_434_ = lean_box(0);
if (v_isShared_432_ == 0)
{
lean_ctor_set(v___x_431_, 0, v___x_434_);
v___x_436_ = v___x_431_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v___x_434_);
v___x_436_ = v_reuseFailAlloc_437_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
return v___x_436_;
}
}
}
}
else
{
lean_object* v_a_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_479_; 
lean_dec(v_val_427_);
lean_del_object(v___x_425_);
lean_dec_ref(v_arg_341_);
v_a_472_ = lean_ctor_get(v___x_428_, 0);
v_isSharedCheck_479_ = !lean_is_exclusive(v___x_428_);
if (v_isSharedCheck_479_ == 0)
{
v___x_474_ = v___x_428_;
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_a_472_);
lean_dec(v___x_428_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_477_; 
if (v_isShared_475_ == 0)
{
v___x_477_ = v___x_474_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_a_472_);
v___x_477_ = v_reuseFailAlloc_478_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
return v___x_477_;
}
}
}
}
else
{
lean_object* v___x_480_; lean_object* v___x_482_; 
lean_dec(v_a_423_);
lean_dec_ref(v_arg_341_);
lean_dec_ref(v_arg_336_);
v___x_480_ = lean_box(0);
if (v_isShared_426_ == 0)
{
lean_ctor_set(v___x_425_, 0, v___x_480_);
v___x_482_ = v___x_425_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v___x_480_);
v___x_482_ = v_reuseFailAlloc_483_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
return v___x_482_;
}
}
}
}
else
{
lean_object* v_a_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_492_; 
lean_dec_ref(v_arg_341_);
lean_dec_ref(v_arg_336_);
v_a_485_ = lean_ctor_get(v___x_422_, 0);
v_isSharedCheck_492_ = !lean_is_exclusive(v___x_422_);
if (v_isSharedCheck_492_ == 0)
{
v___x_487_ = v___x_422_;
v_isShared_488_ = v_isSharedCheck_492_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_a_485_);
lean_dec(v___x_422_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_492_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v___x_490_; 
if (v_isShared_488_ == 0)
{
v___x_490_ = v___x_487_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v_a_485_);
v___x_490_ = v_reuseFailAlloc_491_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
return v___x_490_;
}
}
}
}
}
}
else
{
lean_object* v___x_493_; 
lean_dec_ref(v___x_337_);
v___x_493_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm(v_e_315_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
if (lean_obj_tag(v___x_493_) == 0)
{
lean_object* v_a_494_; 
v_a_494_ = lean_ctor_get(v___x_493_, 0);
if (lean_obj_tag(v_a_494_) == 1)
{
lean_dec_ref(v_arg_336_);
lean_dec_ref(v_arg_331_);
return v___x_493_;
}
else
{
lean_object* v___x_495_; 
lean_dec_ref_known(v___x_493_, 1);
v___x_495_ = l_Lean_Meta_getNatValue_x3f(v_arg_331_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
lean_dec_ref(v_arg_331_);
if (lean_obj_tag(v___x_495_) == 0)
{
lean_object* v_a_496_; lean_object* v___x_498_; uint8_t v_isShared_499_; uint8_t v_isSharedCheck_531_; 
v_a_496_ = lean_ctor_get(v___x_495_, 0);
v_isSharedCheck_531_ = !lean_is_exclusive(v___x_495_);
if (v_isSharedCheck_531_ == 0)
{
v___x_498_ = v___x_495_;
v_isShared_499_ = v_isSharedCheck_531_;
goto v_resetjp_497_;
}
else
{
lean_inc(v_a_496_);
lean_dec(v___x_495_);
v___x_498_ = lean_box(0);
v_isShared_499_ = v_isSharedCheck_531_;
goto v_resetjp_497_;
}
v_resetjp_497_:
{
if (lean_obj_tag(v_a_496_) == 1)
{
lean_object* v_val_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_526_; 
lean_del_object(v___x_498_);
v_val_500_ = lean_ctor_get(v_a_496_, 0);
v_isSharedCheck_526_ = !lean_is_exclusive(v_a_496_);
if (v_isSharedCheck_526_ == 0)
{
v___x_502_ = v_a_496_;
v_isShared_503_ = v_isSharedCheck_526_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_val_500_);
lean_dec(v_a_496_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_526_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_504_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__2, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__2_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normNumLit_x3f_bitVecOfNatForm___closed__2);
v___x_505_ = l_Lean_Expr_app___override(v___x_504_, v_arg_336_);
v___x_506_ = l_Lean_Meta_mkNumeral(v___x_505_, v_val_500_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
if (lean_obj_tag(v___x_506_) == 0)
{
lean_object* v_a_507_; lean_object* v___x_509_; uint8_t v_isShared_510_; uint8_t v_isSharedCheck_517_; 
v_a_507_ = lean_ctor_get(v___x_506_, 0);
v_isSharedCheck_517_ = !lean_is_exclusive(v___x_506_);
if (v_isSharedCheck_517_ == 0)
{
v___x_509_ = v___x_506_;
v_isShared_510_ = v_isSharedCheck_517_;
goto v_resetjp_508_;
}
else
{
lean_inc(v_a_507_);
lean_dec(v___x_506_);
v___x_509_ = lean_box(0);
v_isShared_510_ = v_isSharedCheck_517_;
goto v_resetjp_508_;
}
v_resetjp_508_:
{
lean_object* v___x_512_; 
if (v_isShared_503_ == 0)
{
lean_ctor_set(v___x_502_, 0, v_a_507_);
v___x_512_ = v___x_502_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v_a_507_);
v___x_512_ = v_reuseFailAlloc_516_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
lean_object* v___x_514_; 
if (v_isShared_510_ == 0)
{
lean_ctor_set(v___x_509_, 0, v___x_512_);
v___x_514_ = v___x_509_;
goto v_reusejp_513_;
}
else
{
lean_object* v_reuseFailAlloc_515_; 
v_reuseFailAlloc_515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_515_, 0, v___x_512_);
v___x_514_ = v_reuseFailAlloc_515_;
goto v_reusejp_513_;
}
v_reusejp_513_:
{
return v___x_514_;
}
}
}
}
else
{
lean_object* v_a_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_525_; 
lean_del_object(v___x_502_);
v_a_518_ = lean_ctor_get(v___x_506_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_506_);
if (v_isSharedCheck_525_ == 0)
{
v___x_520_ = v___x_506_;
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_a_518_);
lean_dec(v___x_506_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v___x_523_; 
if (v_isShared_521_ == 0)
{
v___x_523_ = v___x_520_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v_a_518_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
}
}
}
else
{
lean_object* v___x_527_; lean_object* v___x_529_; 
lean_dec(v_a_496_);
lean_dec_ref(v_arg_336_);
v___x_527_ = lean_box(0);
if (v_isShared_499_ == 0)
{
lean_ctor_set(v___x_498_, 0, v___x_527_);
v___x_529_ = v___x_498_;
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
lean_object* v_a_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_539_; 
lean_dec_ref(v_arg_336_);
v_a_532_ = lean_ctor_get(v___x_495_, 0);
v_isSharedCheck_539_ = !lean_is_exclusive(v___x_495_);
if (v_isSharedCheck_539_ == 0)
{
v___x_534_ = v___x_495_;
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_a_532_);
lean_dec(v___x_495_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_537_; 
if (v_isShared_535_ == 0)
{
v___x_537_ = v___x_534_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v_a_532_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
return v___x_537_;
}
}
}
}
}
else
{
lean_dec_ref(v_arg_336_);
lean_dec_ref(v_arg_331_);
return v___x_493_;
}
}
}
}
else
{
uint8_t v___x_540_; 
lean_dec_ref(v___x_332_);
v___x_540_ = l_Lean_Expr_isCharLit(v_e_315_);
lean_dec_ref(v_e_315_);
if (v___x_540_ == 0)
{
lean_object* v___x_541_; 
lean_del_object(v___x_327_);
v___x_541_ = l_Lean_Meta_getNatValue_x3f(v_arg_331_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
lean_dec_ref(v_arg_331_);
if (lean_obj_tag(v___x_541_) == 0)
{
lean_object* v_a_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_566_; 
v_a_542_ = lean_ctor_get(v___x_541_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v___x_541_);
if (v_isSharedCheck_566_ == 0)
{
v___x_544_ = v___x_541_;
v_isShared_545_ = v_isSharedCheck_566_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_a_542_);
lean_dec(v___x_541_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_566_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
if (lean_obj_tag(v_a_542_) == 1)
{
lean_object* v_val_546_; lean_object* v___x_548_; uint8_t v_isShared_549_; uint8_t v_isSharedCheck_561_; 
v_val_546_ = lean_ctor_get(v_a_542_, 0);
v_isSharedCheck_561_ = !lean_is_exclusive(v_a_542_);
if (v_isSharedCheck_561_ == 0)
{
v___x_548_ = v_a_542_;
v_isShared_549_ = v_isSharedCheck_561_;
goto v_resetjp_547_;
}
else
{
lean_inc(v_val_546_);
lean_dec(v_a_542_);
v___x_548_ = lean_box(0);
v_isShared_549_ = v_isSharedCheck_561_;
goto v_resetjp_547_;
}
v_resetjp_547_:
{
uint32_t v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_556_; 
v___x_550_ = l_Char_ofNat(v_val_546_);
lean_dec(v_val_546_);
v___x_551_ = lean_obj_once(&l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__9, &l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__9_once, _init_l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__9);
v___x_552_ = lean_uint32_to_nat(v___x_550_);
v___x_553_ = l_Lean_mkRawNatLit(v___x_552_);
v___x_554_ = l_Lean_Expr_app___override(v___x_551_, v___x_553_);
if (v_isShared_549_ == 0)
{
lean_ctor_set(v___x_548_, 0, v___x_554_);
v___x_556_ = v___x_548_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v___x_554_);
v___x_556_ = v_reuseFailAlloc_560_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
lean_object* v___x_558_; 
if (v_isShared_545_ == 0)
{
lean_ctor_set(v___x_544_, 0, v___x_556_);
v___x_558_ = v___x_544_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v___x_556_);
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
else
{
lean_object* v___x_562_; lean_object* v___x_564_; 
lean_dec(v_a_542_);
v___x_562_ = lean_box(0);
if (v_isShared_545_ == 0)
{
lean_ctor_set(v___x_544_, 0, v___x_562_);
v___x_564_ = v___x_544_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v___x_562_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
}
}
else
{
lean_object* v_a_567_; lean_object* v___x_569_; uint8_t v_isShared_570_; uint8_t v_isSharedCheck_574_; 
v_a_567_ = lean_ctor_get(v___x_541_, 0);
v_isSharedCheck_574_ = !lean_is_exclusive(v___x_541_);
if (v_isSharedCheck_574_ == 0)
{
v___x_569_ = v___x_541_;
v_isShared_570_ = v_isSharedCheck_574_;
goto v_resetjp_568_;
}
else
{
lean_inc(v_a_567_);
lean_dec(v___x_541_);
v___x_569_ = lean_box(0);
v_isShared_570_ = v_isSharedCheck_574_;
goto v_resetjp_568_;
}
v_resetjp_568_:
{
lean_object* v___x_572_; 
if (v_isShared_570_ == 0)
{
v___x_572_ = v___x_569_;
goto v_reusejp_571_;
}
else
{
lean_object* v_reuseFailAlloc_573_; 
v_reuseFailAlloc_573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_573_, 0, v_a_567_);
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
else
{
lean_object* v___x_575_; lean_object* v___x_577_; 
lean_dec_ref(v_arg_331_);
v___x_575_ = lean_box(0);
if (v_isShared_328_ == 0)
{
lean_ctor_set(v___x_327_, 0, v___x_575_);
v___x_577_ = v___x_327_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v___x_575_);
v___x_577_ = v_reuseFailAlloc_578_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
return v___x_577_;
}
}
}
}
}
}
else
{
lean_object* v_a_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_587_; 
lean_dec_ref(v_e_315_);
v_a_580_ = lean_ctor_get(v___x_324_, 0);
v_isSharedCheck_587_ = !lean_is_exclusive(v___x_324_);
if (v_isSharedCheck_587_ == 0)
{
v___x_582_ = v___x_324_;
v_isShared_583_ = v_isSharedCheck_587_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_a_580_);
lean_dec(v___x_324_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_587_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
lean_object* v___x_585_; 
if (v_isShared_583_ == 0)
{
v___x_585_ = v___x_582_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_586_; 
v_reuseFailAlloc_586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_586_, 0, v_a_580_);
v___x_585_ = v_reuseFailAlloc_586_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
return v___x_585_;
}
}
}
v___jp_321_:
{
lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_322_ = lean_box(0);
v___x_323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_323_, 0, v___x_322_);
return v___x_323_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f___boxed(lean_object* v_e_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_){
_start:
{
lean_object* v_res_594_; 
v_res_594_ = l_Lean_Meta_Sym_Canon_normNumLit_x3f(v_e_588_, v_a_589_, v_a_590_, v_a_591_, v_a_592_);
lean_dec(v_a_592_);
lean_dec_ref(v_a_591_);
lean_dec(v_a_590_);
lean_dec_ref(v_a_589_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching(lean_object* v_e_597_, lean_object* v_k_598_, uint8_t v_a_599_, lean_object* v_a_600_, lean_object* v_a_601_, lean_object* v_a_602_, lean_object* v_a_603_, lean_object* v_a_604_, lean_object* v_a_605_){
_start:
{
lean_object* v___x_607_; lean_object* v___x_608_; 
v___x_607_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching___closed__0));
v___x_608_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching___closed__1));
if (v_a_599_ == 0)
{
lean_object* v___x_609_; lean_object* v_canon_610_; lean_object* v_cache_611_; lean_object* v___x_612_; 
v___x_609_ = lean_st_ref_get(v_a_601_);
v_canon_610_ = lean_ctor_get(v___x_609_, 11);
lean_inc_ref(v_canon_610_);
lean_dec(v___x_609_);
v_cache_611_ = lean_ctor_get(v_canon_610_, 0);
lean_inc_ref(v_cache_611_);
lean_dec_ref(v_canon_610_);
lean_inc_ref(v_e_597_);
v___x_612_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___x_607_, v___x_608_, v_cache_611_, v_e_597_);
lean_dec_ref(v_cache_611_);
if (lean_obj_tag(v___x_612_) == 1)
{
lean_object* v_val_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_620_; 
lean_dec_ref(v_k_598_);
lean_dec_ref(v_e_597_);
v_val_613_ = lean_ctor_get(v___x_612_, 0);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_612_);
if (v_isSharedCheck_620_ == 0)
{
v___x_615_ = v___x_612_;
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_val_613_);
lean_dec(v___x_612_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_618_; 
if (v_isShared_616_ == 0)
{
lean_ctor_set_tag(v___x_615_, 0);
v___x_618_ = v___x_615_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_val_613_);
v___x_618_ = v_reuseFailAlloc_619_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
return v___x_618_;
}
}
}
else
{
lean_object* v___x_621_; lean_object* v___x_622_; 
lean_dec(v___x_612_);
v___x_621_ = lean_box(v_a_599_);
lean_inc(v_a_605_);
lean_inc_ref(v_a_604_);
lean_inc(v_a_603_);
lean_inc_ref(v_a_602_);
lean_inc(v_a_601_);
lean_inc_ref(v_a_600_);
v___x_622_ = lean_apply_8(v_k_598_, v___x_621_, v_a_600_, v_a_601_, v_a_602_, v_a_603_, v_a_604_, v_a_605_, lean_box(0));
if (lean_obj_tag(v___x_622_) == 0)
{
lean_object* v_a_623_; lean_object* v___x_625_; uint8_t v_isShared_626_; uint8_t v_isSharedCheck_663_; 
v_a_623_ = lean_ctor_get(v___x_622_, 0);
v_isSharedCheck_663_ = !lean_is_exclusive(v___x_622_);
if (v_isSharedCheck_663_ == 0)
{
v___x_625_ = v___x_622_;
v_isShared_626_ = v_isSharedCheck_663_;
goto v_resetjp_624_;
}
else
{
lean_inc(v_a_623_);
lean_dec(v___x_622_);
v___x_625_ = lean_box(0);
v_isShared_626_ = v_isSharedCheck_663_;
goto v_resetjp_624_;
}
v_resetjp_624_:
{
lean_object* v___x_627_; lean_object* v_canon_628_; lean_object* v_share_629_; lean_object* v_maxFVar_630_; lean_object* v_proofInstInfo_631_; lean_object* v_proofInstInfoFVar_632_; lean_object* v_letValue_633_; lean_object* v_inferType_634_; lean_object* v_getLevel_635_; lean_object* v_congrInfo_636_; lean_object* v_defEqI_637_; lean_object* v_extensions_638_; lean_object* v_issues_639_; lean_object* v_instanceOverrides_640_; uint8_t v_debug_641_; lean_object* v___x_643_; uint8_t v_isShared_644_; uint8_t v_isSharedCheck_662_; 
v___x_627_ = lean_st_ref_take(v_a_601_);
v_canon_628_ = lean_ctor_get(v___x_627_, 11);
v_share_629_ = lean_ctor_get(v___x_627_, 0);
v_maxFVar_630_ = lean_ctor_get(v___x_627_, 1);
v_proofInstInfo_631_ = lean_ctor_get(v___x_627_, 2);
v_proofInstInfoFVar_632_ = lean_ctor_get(v___x_627_, 3);
v_letValue_633_ = lean_ctor_get(v___x_627_, 4);
v_inferType_634_ = lean_ctor_get(v___x_627_, 5);
v_getLevel_635_ = lean_ctor_get(v___x_627_, 6);
v_congrInfo_636_ = lean_ctor_get(v___x_627_, 7);
v_defEqI_637_ = lean_ctor_get(v___x_627_, 8);
v_extensions_638_ = lean_ctor_get(v___x_627_, 9);
v_issues_639_ = lean_ctor_get(v___x_627_, 10);
v_instanceOverrides_640_ = lean_ctor_get(v___x_627_, 12);
v_debug_641_ = lean_ctor_get_uint8(v___x_627_, sizeof(void*)*13);
v_isSharedCheck_662_ = !lean_is_exclusive(v___x_627_);
if (v_isSharedCheck_662_ == 0)
{
v___x_643_ = v___x_627_;
v_isShared_644_ = v_isSharedCheck_662_;
goto v_resetjp_642_;
}
else
{
lean_inc(v_instanceOverrides_640_);
lean_inc(v_canon_628_);
lean_inc(v_issues_639_);
lean_inc(v_extensions_638_);
lean_inc(v_defEqI_637_);
lean_inc(v_congrInfo_636_);
lean_inc(v_getLevel_635_);
lean_inc(v_inferType_634_);
lean_inc(v_letValue_633_);
lean_inc(v_proofInstInfoFVar_632_);
lean_inc(v_proofInstInfo_631_);
lean_inc(v_maxFVar_630_);
lean_inc(v_share_629_);
lean_dec(v___x_627_);
v___x_643_ = lean_box(0);
v_isShared_644_ = v_isSharedCheck_662_;
goto v_resetjp_642_;
}
v_resetjp_642_:
{
lean_object* v_cache_645_; lean_object* v_cacheInType_646_; lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_661_; 
v_cache_645_ = lean_ctor_get(v_canon_628_, 0);
v_cacheInType_646_ = lean_ctor_get(v_canon_628_, 1);
v_isSharedCheck_661_ = !lean_is_exclusive(v_canon_628_);
if (v_isSharedCheck_661_ == 0)
{
v___x_648_ = v_canon_628_;
v_isShared_649_ = v_isSharedCheck_661_;
goto v_resetjp_647_;
}
else
{
lean_inc(v_cacheInType_646_);
lean_inc(v_cache_645_);
lean_dec(v_canon_628_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_661_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
lean_object* v___x_650_; lean_object* v___x_652_; 
lean_inc(v_a_623_);
v___x_650_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_607_, v___x_608_, v_cache_645_, v_e_597_, v_a_623_);
if (v_isShared_649_ == 0)
{
lean_ctor_set(v___x_648_, 0, v___x_650_);
v___x_652_ = v___x_648_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v___x_650_);
lean_ctor_set(v_reuseFailAlloc_660_, 1, v_cacheInType_646_);
v___x_652_ = v_reuseFailAlloc_660_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
lean_object* v___x_654_; 
if (v_isShared_644_ == 0)
{
lean_ctor_set(v___x_643_, 11, v___x_652_);
v___x_654_ = v___x_643_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v_share_629_);
lean_ctor_set(v_reuseFailAlloc_659_, 1, v_maxFVar_630_);
lean_ctor_set(v_reuseFailAlloc_659_, 2, v_proofInstInfo_631_);
lean_ctor_set(v_reuseFailAlloc_659_, 3, v_proofInstInfoFVar_632_);
lean_ctor_set(v_reuseFailAlloc_659_, 4, v_letValue_633_);
lean_ctor_set(v_reuseFailAlloc_659_, 5, v_inferType_634_);
lean_ctor_set(v_reuseFailAlloc_659_, 6, v_getLevel_635_);
lean_ctor_set(v_reuseFailAlloc_659_, 7, v_congrInfo_636_);
lean_ctor_set(v_reuseFailAlloc_659_, 8, v_defEqI_637_);
lean_ctor_set(v_reuseFailAlloc_659_, 9, v_extensions_638_);
lean_ctor_set(v_reuseFailAlloc_659_, 10, v_issues_639_);
lean_ctor_set(v_reuseFailAlloc_659_, 11, v___x_652_);
lean_ctor_set(v_reuseFailAlloc_659_, 12, v_instanceOverrides_640_);
lean_ctor_set_uint8(v_reuseFailAlloc_659_, sizeof(void*)*13, v_debug_641_);
v___x_654_ = v_reuseFailAlloc_659_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
lean_object* v___x_655_; lean_object* v___x_657_; 
v___x_655_ = lean_st_ref_put(v_a_601_, v___x_654_);
if (v_isShared_626_ == 0)
{
v___x_657_ = v___x_625_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v_a_623_);
v___x_657_ = v_reuseFailAlloc_658_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
return v___x_657_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_e_597_);
return v___x_622_;
}
}
}
else
{
lean_object* v___x_664_; lean_object* v_canon_665_; lean_object* v_cacheInType_666_; lean_object* v___x_667_; 
v___x_664_ = lean_st_ref_get(v_a_601_);
v_canon_665_ = lean_ctor_get(v___x_664_, 11);
lean_inc_ref(v_canon_665_);
lean_dec(v___x_664_);
v_cacheInType_666_ = lean_ctor_get(v_canon_665_, 1);
lean_inc_ref(v_cacheInType_666_);
lean_dec_ref(v_canon_665_);
lean_inc_ref(v_e_597_);
v___x_667_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___x_607_, v___x_608_, v_cacheInType_666_, v_e_597_);
lean_dec_ref(v_cacheInType_666_);
if (lean_obj_tag(v___x_667_) == 1)
{
lean_object* v_val_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_675_; 
lean_dec_ref(v_k_598_);
lean_dec_ref(v_e_597_);
v_val_668_ = lean_ctor_get(v___x_667_, 0);
v_isSharedCheck_675_ = !lean_is_exclusive(v___x_667_);
if (v_isSharedCheck_675_ == 0)
{
v___x_670_ = v___x_667_;
v_isShared_671_ = v_isSharedCheck_675_;
goto v_resetjp_669_;
}
else
{
lean_inc(v_val_668_);
lean_dec(v___x_667_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_675_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v___x_673_; 
if (v_isShared_671_ == 0)
{
lean_ctor_set_tag(v___x_670_, 0);
v___x_673_ = v___x_670_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v_val_668_);
v___x_673_ = v_reuseFailAlloc_674_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
return v___x_673_;
}
}
}
else
{
lean_object* v___x_676_; lean_object* v___x_677_; 
lean_dec(v___x_667_);
v___x_676_ = lean_box(v_a_599_);
lean_inc(v_a_605_);
lean_inc_ref(v_a_604_);
lean_inc(v_a_603_);
lean_inc_ref(v_a_602_);
lean_inc(v_a_601_);
lean_inc_ref(v_a_600_);
v___x_677_ = lean_apply_8(v_k_598_, v___x_676_, v_a_600_, v_a_601_, v_a_602_, v_a_603_, v_a_604_, v_a_605_, lean_box(0));
if (lean_obj_tag(v___x_677_) == 0)
{
lean_object* v_a_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_718_; 
v_a_678_ = lean_ctor_get(v___x_677_, 0);
v_isSharedCheck_718_ = !lean_is_exclusive(v___x_677_);
if (v_isSharedCheck_718_ == 0)
{
v___x_680_ = v___x_677_;
v_isShared_681_ = v_isSharedCheck_718_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_a_678_);
lean_dec(v___x_677_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_718_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_682_; lean_object* v_canon_683_; lean_object* v_share_684_; lean_object* v_maxFVar_685_; lean_object* v_proofInstInfo_686_; lean_object* v_proofInstInfoFVar_687_; lean_object* v_letValue_688_; lean_object* v_inferType_689_; lean_object* v_getLevel_690_; lean_object* v_congrInfo_691_; lean_object* v_defEqI_692_; lean_object* v_extensions_693_; lean_object* v_issues_694_; lean_object* v_instanceOverrides_695_; uint8_t v_debug_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_717_; 
v___x_682_ = lean_st_ref_take(v_a_601_);
v_canon_683_ = lean_ctor_get(v___x_682_, 11);
v_share_684_ = lean_ctor_get(v___x_682_, 0);
v_maxFVar_685_ = lean_ctor_get(v___x_682_, 1);
v_proofInstInfo_686_ = lean_ctor_get(v___x_682_, 2);
v_proofInstInfoFVar_687_ = lean_ctor_get(v___x_682_, 3);
v_letValue_688_ = lean_ctor_get(v___x_682_, 4);
v_inferType_689_ = lean_ctor_get(v___x_682_, 5);
v_getLevel_690_ = lean_ctor_get(v___x_682_, 6);
v_congrInfo_691_ = lean_ctor_get(v___x_682_, 7);
v_defEqI_692_ = lean_ctor_get(v___x_682_, 8);
v_extensions_693_ = lean_ctor_get(v___x_682_, 9);
v_issues_694_ = lean_ctor_get(v___x_682_, 10);
v_instanceOverrides_695_ = lean_ctor_get(v___x_682_, 12);
v_debug_696_ = lean_ctor_get_uint8(v___x_682_, sizeof(void*)*13);
v_isSharedCheck_717_ = !lean_is_exclusive(v___x_682_);
if (v_isSharedCheck_717_ == 0)
{
v___x_698_ = v___x_682_;
v_isShared_699_ = v_isSharedCheck_717_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_instanceOverrides_695_);
lean_inc(v_canon_683_);
lean_inc(v_issues_694_);
lean_inc(v_extensions_693_);
lean_inc(v_defEqI_692_);
lean_inc(v_congrInfo_691_);
lean_inc(v_getLevel_690_);
lean_inc(v_inferType_689_);
lean_inc(v_letValue_688_);
lean_inc(v_proofInstInfoFVar_687_);
lean_inc(v_proofInstInfo_686_);
lean_inc(v_maxFVar_685_);
lean_inc(v_share_684_);
lean_dec(v___x_682_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_717_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v_cache_700_; lean_object* v_cacheInType_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_716_; 
v_cache_700_ = lean_ctor_get(v_canon_683_, 0);
v_cacheInType_701_ = lean_ctor_get(v_canon_683_, 1);
v_isSharedCheck_716_ = !lean_is_exclusive(v_canon_683_);
if (v_isSharedCheck_716_ == 0)
{
v___x_703_ = v_canon_683_;
v_isShared_704_ = v_isSharedCheck_716_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_cacheInType_701_);
lean_inc(v_cache_700_);
lean_dec(v_canon_683_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_716_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v___x_705_; lean_object* v___x_707_; 
lean_inc(v_a_678_);
v___x_705_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_607_, v___x_608_, v_cacheInType_701_, v_e_597_, v_a_678_);
if (v_isShared_704_ == 0)
{
lean_ctor_set(v___x_703_, 1, v___x_705_);
v___x_707_ = v___x_703_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v_cache_700_);
lean_ctor_set(v_reuseFailAlloc_715_, 1, v___x_705_);
v___x_707_ = v_reuseFailAlloc_715_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
lean_object* v___x_709_; 
if (v_isShared_699_ == 0)
{
lean_ctor_set(v___x_698_, 11, v___x_707_);
v___x_709_ = v___x_698_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v_share_684_);
lean_ctor_set(v_reuseFailAlloc_714_, 1, v_maxFVar_685_);
lean_ctor_set(v_reuseFailAlloc_714_, 2, v_proofInstInfo_686_);
lean_ctor_set(v_reuseFailAlloc_714_, 3, v_proofInstInfoFVar_687_);
lean_ctor_set(v_reuseFailAlloc_714_, 4, v_letValue_688_);
lean_ctor_set(v_reuseFailAlloc_714_, 5, v_inferType_689_);
lean_ctor_set(v_reuseFailAlloc_714_, 6, v_getLevel_690_);
lean_ctor_set(v_reuseFailAlloc_714_, 7, v_congrInfo_691_);
lean_ctor_set(v_reuseFailAlloc_714_, 8, v_defEqI_692_);
lean_ctor_set(v_reuseFailAlloc_714_, 9, v_extensions_693_);
lean_ctor_set(v_reuseFailAlloc_714_, 10, v_issues_694_);
lean_ctor_set(v_reuseFailAlloc_714_, 11, v___x_707_);
lean_ctor_set(v_reuseFailAlloc_714_, 12, v_instanceOverrides_695_);
lean_ctor_set_uint8(v_reuseFailAlloc_714_, sizeof(void*)*13, v_debug_696_);
v___x_709_ = v_reuseFailAlloc_714_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
lean_object* v___x_710_; lean_object* v___x_712_; 
v___x_710_ = lean_st_ref_put(v_a_601_, v___x_709_);
if (v_isShared_681_ == 0)
{
v___x_712_ = v___x_680_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v_a_678_);
v___x_712_ = v_reuseFailAlloc_713_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
return v___x_712_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_e_597_);
return v___x_677_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching___boxed(lean_object* v_e_719_, lean_object* v_k_720_, lean_object* v_a_721_, lean_object* v_a_722_, lean_object* v_a_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_){
_start:
{
uint8_t v_a_boxed_729_; lean_object* v_res_730_; 
v_a_boxed_729_ = lean_unbox(v_a_721_);
v_res_730_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_withCaching(v_e_719_, v_k_720_, v_a_boxed_729_, v_a_722_, v_a_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_);
lean_dec(v_a_727_);
lean_dec_ref(v_a_726_);
lean_dec(v_a_725_);
lean_dec_ref(v_a_724_);
lean_dec(v_a_723_);
lean_dec_ref(v_a_722_);
return v_res_730_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond(lean_object* v_e_737_){
_start:
{
lean_object* v___x_738_; lean_object* v___x_739_; uint8_t v___x_740_; 
v___x_738_ = l_Lean_Expr_cleanupAnnotations(v_e_737_);
v___x_739_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__1));
v___x_740_ = l_Lean_Expr_isConstOf(v___x_738_, v___x_739_);
if (v___x_740_ == 0)
{
uint8_t v___x_741_; 
v___x_741_ = l_Lean_Expr_isApp(v___x_738_);
if (v___x_741_ == 0)
{
lean_dec_ref(v___x_738_);
return v___x_741_;
}
else
{
lean_object* v___x_742_; uint8_t v___x_743_; 
v___x_742_ = l_Lean_Expr_appFnCleanup___redArg(v___x_738_);
v___x_743_ = l_Lean_Expr_isApp(v___x_742_);
if (v___x_743_ == 0)
{
lean_dec_ref(v___x_742_);
lean_dec_ref(v___x_738_);
return v___x_743_;
}
else
{
lean_object* v___x_744_; uint8_t v___x_745_; 
v___x_744_ = l_Lean_Expr_appFnCleanup___redArg(v___x_742_);
v___x_745_ = l_Lean_Expr_isApp(v___x_744_);
if (v___x_745_ == 0)
{
lean_dec_ref(v___x_744_);
lean_dec_ref(v___x_742_);
lean_dec_ref(v___x_738_);
return v___x_745_;
}
else
{
lean_object* v___x_746_; lean_object* v___x_747_; uint8_t v___x_748_; 
v___x_746_ = l_Lean_Expr_appFnCleanup___redArg(v___x_744_);
lean_dec_ref(v___x_744_);
v___x_747_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__3));
v___x_748_ = l_Lean_Expr_isConstOf(v___x_746_, v___x_747_);
lean_dec_ref(v___x_746_);
if (v___x_748_ == 0)
{
lean_dec_ref(v___x_742_);
lean_dec_ref(v___x_738_);
return v___x_748_;
}
else
{
lean_object* v_arg_749_; uint8_t v___x_750_; 
v_arg_749_ = lean_ctor_get(v___x_742_, 1);
lean_inc_ref(v_arg_749_);
lean_dec_ref(v___x_742_);
v___x_750_ = l_Lean_Expr_isBoolTrue(v_arg_749_);
lean_dec_ref(v_arg_749_);
if (v___x_750_ == 0)
{
lean_dec_ref(v___x_738_);
return v___x_750_;
}
else
{
lean_object* v_arg_751_; uint8_t v___x_752_; 
v_arg_751_ = lean_ctor_get(v___x_738_, 1);
lean_inc_ref(v_arg_751_);
lean_dec_ref(v___x_738_);
v___x_752_ = l_Lean_Expr_isBoolTrue(v_arg_751_);
lean_dec_ref(v_arg_751_);
return v___x_752_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_738_);
return v___x_740_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___boxed(lean_object* v_e_753_){
_start:
{
uint8_t v_res_754_; lean_object* v_r_755_; 
v_res_754_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond(v_e_753_);
lean_dec_ref(v_e_753_);
v_r_755_ = lean_box(v_res_754_);
return v_r_755_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond(lean_object* v_e_759_){
_start:
{
lean_object* v___x_760_; lean_object* v___x_761_; uint8_t v___x_762_; 
v___x_760_ = l_Lean_Expr_cleanupAnnotations(v_e_759_);
v___x_761_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond___closed__1));
v___x_762_ = l_Lean_Expr_isConstOf(v___x_760_, v___x_761_);
if (v___x_762_ == 0)
{
uint8_t v___x_763_; 
v___x_763_ = l_Lean_Expr_isApp(v___x_760_);
if (v___x_763_ == 0)
{
lean_dec_ref(v___x_760_);
return v___x_763_;
}
else
{
lean_object* v___x_764_; uint8_t v___x_765_; 
v___x_764_ = l_Lean_Expr_appFnCleanup___redArg(v___x_760_);
v___x_765_ = l_Lean_Expr_isApp(v___x_764_);
if (v___x_765_ == 0)
{
lean_dec_ref(v___x_764_);
lean_dec_ref(v___x_760_);
return v___x_765_;
}
else
{
lean_object* v___x_766_; uint8_t v___x_767_; 
v___x_766_ = l_Lean_Expr_appFnCleanup___redArg(v___x_764_);
v___x_767_ = l_Lean_Expr_isApp(v___x_766_);
if (v___x_767_ == 0)
{
lean_dec_ref(v___x_766_);
lean_dec_ref(v___x_764_);
lean_dec_ref(v___x_760_);
return v___x_767_;
}
else
{
lean_object* v___x_768_; lean_object* v___x_769_; uint8_t v___x_770_; 
v___x_768_ = l_Lean_Expr_appFnCleanup___redArg(v___x_766_);
lean_dec_ref(v___x_766_);
v___x_769_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond___closed__3));
v___x_770_ = l_Lean_Expr_isConstOf(v___x_768_, v___x_769_);
lean_dec_ref(v___x_768_);
if (v___x_770_ == 0)
{
lean_dec_ref(v___x_764_);
lean_dec_ref(v___x_760_);
return v___x_770_;
}
else
{
lean_object* v_arg_771_; uint8_t v___x_772_; 
v_arg_771_ = lean_ctor_get(v___x_764_, 1);
lean_inc_ref(v_arg_771_);
lean_dec_ref(v___x_764_);
v___x_772_ = l_Lean_Expr_isBoolFalse(v_arg_771_);
lean_dec_ref(v_arg_771_);
if (v___x_772_ == 0)
{
lean_dec_ref(v___x_760_);
return v___x_772_;
}
else
{
lean_object* v_arg_773_; uint8_t v___x_774_; 
v_arg_773_ = lean_ctor_get(v___x_760_, 1);
lean_inc_ref(v_arg_773_);
lean_dec_ref(v___x_760_);
v___x_774_ = l_Lean_Expr_isBoolTrue(v_arg_773_);
lean_dec_ref(v_arg_773_);
return v___x_774_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_760_);
return v___x_762_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond___boxed(lean_object* v_e_775_){
_start:
{
uint8_t v_res_776_; lean_object* v_r_777_; 
v_res_776_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond(v_e_775_);
lean_dec_ref(v_e_775_);
v_r_777_ = lean_box(v_res_776_);
return v_r_777_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorIdx___impl(uint8_t v_x_778_){
_start:
{
lean_object* v___x_779_; lean_object* v___x_780_; 
v___x_779_ = lean_box(v_x_778_);
v___x_780_ = lean_obj_tag_nat(v___x_779_);
lean_dec(v___x_779_);
return v___x_780_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorIdx___impl___boxed(lean_object* v_x_781_){
_start:
{
uint8_t v_x_4__boxed_782_; lean_object* v_res_783_; 
v_x_4__boxed_782_ = lean_unbox(v_x_781_);
v_res_783_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorIdx___impl(v_x_4__boxed_782_);
return v_res_783_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorElim___redArg(lean_object* v_k_784_){
_start:
{
lean_inc(v_k_784_);
return v_k_784_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorElim___redArg___boxed(lean_object* v_k_785_){
_start:
{
lean_object* v_res_786_; 
v_res_786_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorElim___redArg(v_k_785_);
lean_dec(v_k_785_);
return v_res_786_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorElim(lean_object* v_motive_787_, lean_object* v_ctorIdx_788_, uint8_t v_t_789_, lean_object* v_h_790_, lean_object* v_k_791_){
_start:
{
lean_inc(v_k_791_);
return v_k_791_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorElim___boxed(lean_object* v_motive_792_, lean_object* v_ctorIdx_793_, lean_object* v_t_794_, lean_object* v_h_795_, lean_object* v_k_796_){
_start:
{
uint8_t v_t_boxed_797_; lean_object* v_res_798_; 
v_t_boxed_797_ = lean_unbox(v_t_794_);
v_res_798_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_ctorElim(v_motive_792_, v_ctorIdx_793_, v_t_boxed_797_, v_h_795_, v_k_796_);
lean_dec(v_k_796_);
lean_dec(v_ctorIdx_793_);
return v_res_798_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonType_elim___redArg(lean_object* v_canonType_799_){
_start:
{
lean_inc(v_canonType_799_);
return v_canonType_799_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonType_elim___redArg___boxed(lean_object* v_canonType_800_){
_start:
{
lean_object* v_res_801_; 
v_res_801_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonType_elim___redArg(v_canonType_800_);
lean_dec(v_canonType_800_);
return v_res_801_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonType_elim(lean_object* v_motive_802_, uint8_t v_t_803_, lean_object* v_h_804_, lean_object* v_canonType_805_){
_start:
{
lean_inc(v_canonType_805_);
return v_canonType_805_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonType_elim___boxed(lean_object* v_motive_806_, lean_object* v_t_807_, lean_object* v_h_808_, lean_object* v_canonType_809_){
_start:
{
uint8_t v_t_boxed_810_; lean_object* v_res_811_; 
v_t_boxed_810_ = lean_unbox(v_t_807_);
v_res_811_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonType_elim(v_motive_806_, v_t_boxed_810_, v_h_808_, v_canonType_809_);
lean_dec(v_canonType_809_);
return v_res_811_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonInst_elim___redArg(lean_object* v_canonInst_812_){
_start:
{
lean_inc(v_canonInst_812_);
return v_canonInst_812_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonInst_elim___redArg___boxed(lean_object* v_canonInst_813_){
_start:
{
lean_object* v_res_814_; 
v_res_814_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonInst_elim___redArg(v_canonInst_813_);
lean_dec(v_canonInst_813_);
return v_res_814_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonInst_elim(lean_object* v_motive_815_, uint8_t v_t_816_, lean_object* v_h_817_, lean_object* v_canonInst_818_){
_start:
{
lean_inc(v_canonInst_818_);
return v_canonInst_818_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonInst_elim___boxed(lean_object* v_motive_819_, lean_object* v_t_820_, lean_object* v_h_821_, lean_object* v_canonInst_822_){
_start:
{
uint8_t v_t_boxed_823_; lean_object* v_res_824_; 
v_t_boxed_823_ = lean_unbox(v_t_820_);
v_res_824_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonInst_elim(v_motive_819_, v_t_boxed_823_, v_h_821_, v_canonInst_822_);
lean_dec(v_canonInst_822_);
return v_res_824_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonImplicit_elim___redArg(lean_object* v_canonImplicit_825_){
_start:
{
lean_inc(v_canonImplicit_825_);
return v_canonImplicit_825_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonImplicit_elim___redArg___boxed(lean_object* v_canonImplicit_826_){
_start:
{
lean_object* v_res_827_; 
v_res_827_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonImplicit_elim___redArg(v_canonImplicit_826_);
lean_dec(v_canonImplicit_826_);
return v_res_827_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonImplicit_elim(lean_object* v_motive_828_, uint8_t v_t_829_, lean_object* v_h_830_, lean_object* v_canonImplicit_831_){
_start:
{
lean_inc(v_canonImplicit_831_);
return v_canonImplicit_831_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonImplicit_elim___boxed(lean_object* v_motive_832_, lean_object* v_t_833_, lean_object* v_h_834_, lean_object* v_canonImplicit_835_){
_start:
{
uint8_t v_t_boxed_836_; lean_object* v_res_837_; 
v_t_boxed_836_ = lean_unbox(v_t_833_);
v_res_837_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_canonImplicit_elim(v_motive_832_, v_t_boxed_836_, v_h_834_, v_canonImplicit_835_);
lean_dec(v_canonImplicit_835_);
return v_res_837_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_visit_elim___redArg(lean_object* v_visit_838_){
_start:
{
lean_inc(v_visit_838_);
return v_visit_838_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_visit_elim___redArg___boxed(lean_object* v_visit_839_){
_start:
{
lean_object* v_res_840_; 
v_res_840_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_visit_elim___redArg(v_visit_839_);
lean_dec(v_visit_839_);
return v_res_840_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_visit_elim(lean_object* v_motive_841_, uint8_t v_t_842_, lean_object* v_h_843_, lean_object* v_visit_844_){
_start:
{
lean_inc(v_visit_844_);
return v_visit_844_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_visit_elim___boxed(lean_object* v_motive_845_, lean_object* v_t_846_, lean_object* v_h_847_, lean_object* v_visit_848_){
_start:
{
uint8_t v_t_boxed_849_; lean_object* v_res_850_; 
v_t_boxed_849_ = lean_unbox(v_t_846_);
v_res_850_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_ShouldCanonResult_visit_elim(v_motive_845_, v_t_boxed_849_, v_h_847_, v_visit_848_);
lean_dec(v_visit_848_);
return v_res_850_;
}
}
static uint8_t _init_l_Lean_Meta_Sym_Canon_instInhabitedShouldCanonResult_default(void){
_start:
{
uint8_t v___x_851_; 
v___x_851_ = 0;
return v___x_851_;
}
}
static uint8_t _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instInhabitedShouldCanonResult(void){
_start:
{
uint8_t v___x_852_; 
v___x_852_ = 0;
return v___x_852_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0(uint8_t v_r_865_, lean_object* v_x_866_){
_start:
{
switch(v_r_865_)
{
case 0:
{
lean_object* v___x_867_; 
v___x_867_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__1));
return v___x_867_;
}
case 1:
{
lean_object* v___x_868_; 
v___x_868_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__3));
return v___x_868_;
}
case 2:
{
lean_object* v___x_869_; 
v___x_869_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__5));
return v___x_869_;
}
default: 
{
lean_object* v___x_870_; 
v___x_870_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__7));
return v___x_870_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___boxed(lean_object* v_r_871_, lean_object* v_x_872_){
_start:
{
uint8_t v_r_boxed_873_; lean_object* v_res_874_; 
v_r_boxed_873_ = lean_unbox(v_r_871_);
v_res_874_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0(v_r_boxed_873_, v_x_872_);
lean_dec(v_x_872_);
return v_res_874_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_shouldCanon(lean_object* v_pinfos_877_, lean_object* v_i_878_, lean_object* v_arg_879_, lean_object* v_a_880_, lean_object* v_a_881_, lean_object* v_a_882_, lean_object* v_a_883_){
_start:
{
lean_object* v___y_890_; lean_object* v___y_891_; lean_object* v___y_892_; lean_object* v___y_893_; lean_object* v___x_925_; uint8_t v___x_926_; 
v___x_925_ = lean_array_get_size(v_pinfos_877_);
v___x_926_ = lean_nat_dec_lt(v_i_878_, v___x_925_);
if (v___x_926_ == 0)
{
v___y_890_ = v_a_880_;
v___y_891_ = v_a_881_;
v___y_892_ = v_a_882_;
v___y_893_ = v_a_883_;
goto v___jp_889_;
}
else
{
lean_object* v_pinfo_927_; uint8_t v_isInstance_928_; 
v_pinfo_927_ = lean_array_fget_borrowed(v_pinfos_877_, v_i_878_);
v_isInstance_928_ = lean_ctor_get_uint8(v_pinfo_927_, sizeof(void*)*1 + 4);
if (v_isInstance_928_ == 0)
{
uint8_t v_isProp_929_; 
v_isProp_929_ = lean_ctor_get_uint8(v_pinfo_927_, sizeof(void*)*1 + 2);
if (v_isProp_929_ == 0)
{
uint8_t v___x_930_; 
v___x_930_ = l_Lean_Meta_ParamInfo_isImplicit(v_pinfo_927_);
if (v___x_930_ == 0)
{
v___y_890_ = v_a_880_;
v___y_891_ = v_a_881_;
v___y_892_ = v_a_882_;
v___y_893_ = v_a_883_;
goto v___jp_889_;
}
else
{
lean_object* v___x_931_; 
v___x_931_ = l_Lean_Meta_isTypeFormer(v_arg_879_, v_a_880_, v_a_881_, v_a_882_, v_a_883_);
if (lean_obj_tag(v___x_931_) == 0)
{
lean_object* v_a_932_; lean_object* v___x_934_; uint8_t v_isShared_935_; uint8_t v_isSharedCheck_947_; 
v_a_932_ = lean_ctor_get(v___x_931_, 0);
v_isSharedCheck_947_ = !lean_is_exclusive(v___x_931_);
if (v_isSharedCheck_947_ == 0)
{
v___x_934_ = v___x_931_;
v_isShared_935_ = v_isSharedCheck_947_;
goto v_resetjp_933_;
}
else
{
lean_inc(v_a_932_);
lean_dec(v___x_931_);
v___x_934_ = lean_box(0);
v_isShared_935_ = v_isSharedCheck_947_;
goto v_resetjp_933_;
}
v_resetjp_933_:
{
uint8_t v___x_936_; 
v___x_936_ = lean_unbox(v_a_932_);
lean_dec(v_a_932_);
if (v___x_936_ == 0)
{
uint8_t v___x_937_; lean_object* v___x_938_; lean_object* v___x_940_; 
v___x_937_ = 2;
v___x_938_ = lean_box(v___x_937_);
if (v_isShared_935_ == 0)
{
lean_ctor_set(v___x_934_, 0, v___x_938_);
v___x_940_ = v___x_934_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_941_; 
v_reuseFailAlloc_941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_941_, 0, v___x_938_);
v___x_940_ = v_reuseFailAlloc_941_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
return v___x_940_;
}
}
else
{
uint8_t v___x_942_; lean_object* v___x_943_; lean_object* v___x_945_; 
v___x_942_ = 0;
v___x_943_ = lean_box(v___x_942_);
if (v_isShared_935_ == 0)
{
lean_ctor_set(v___x_934_, 0, v___x_943_);
v___x_945_ = v___x_934_;
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
v_a_948_ = lean_ctor_get(v___x_931_, 0);
v_isSharedCheck_955_ = !lean_is_exclusive(v___x_931_);
if (v_isSharedCheck_955_ == 0)
{
v___x_950_ = v___x_931_;
v_isShared_951_ = v_isSharedCheck_955_;
goto v_resetjp_949_;
}
else
{
lean_inc(v_a_948_);
lean_dec(v___x_931_);
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
else
{
uint8_t v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; 
lean_dec_ref(v_arg_879_);
v___x_956_ = 3;
v___x_957_ = lean_box(v___x_956_);
v___x_958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_958_, 0, v___x_957_);
return v___x_958_;
}
}
else
{
uint8_t v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; 
lean_dec_ref(v_arg_879_);
v___x_959_ = 1;
v___x_960_ = lean_box(v___x_959_);
v___x_961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_961_, 0, v___x_960_);
return v___x_961_;
}
}
v___jp_885_:
{
uint8_t v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_886_ = 3;
v___x_887_ = lean_box(v___x_886_);
v___x_888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_888_, 0, v___x_887_);
return v___x_888_;
}
v___jp_889_:
{
lean_object* v___x_894_; 
lean_inc_ref(v_arg_879_);
v___x_894_ = l_Lean_Meta_isProp(v_arg_879_, v___y_890_, v___y_891_, v___y_892_, v___y_893_);
if (lean_obj_tag(v___x_894_) == 0)
{
lean_object* v_a_895_; uint8_t v___x_896_; 
v_a_895_ = lean_ctor_get(v___x_894_, 0);
lean_inc(v_a_895_);
lean_dec_ref_known(v___x_894_, 1);
v___x_896_ = lean_unbox(v_a_895_);
lean_dec(v_a_895_);
if (v___x_896_ == 0)
{
lean_object* v___x_897_; 
v___x_897_ = l_Lean_Meta_isTypeFormer(v_arg_879_, v___y_890_, v___y_891_, v___y_892_, v___y_893_);
if (lean_obj_tag(v___x_897_) == 0)
{
lean_object* v_a_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_908_; 
v_a_898_ = lean_ctor_get(v___x_897_, 0);
v_isSharedCheck_908_ = !lean_is_exclusive(v___x_897_);
if (v_isSharedCheck_908_ == 0)
{
v___x_900_ = v___x_897_;
v_isShared_901_ = v_isSharedCheck_908_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_a_898_);
lean_dec(v___x_897_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_908_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
uint8_t v___x_902_; 
v___x_902_ = lean_unbox(v_a_898_);
lean_dec(v_a_898_);
if (v___x_902_ == 0)
{
lean_del_object(v___x_900_);
goto v___jp_885_;
}
else
{
uint8_t v___x_903_; lean_object* v___x_904_; lean_object* v___x_906_; 
v___x_903_ = 0;
v___x_904_ = lean_box(v___x_903_);
if (v_isShared_901_ == 0)
{
lean_ctor_set(v___x_900_, 0, v___x_904_);
v___x_906_ = v___x_900_;
goto v_reusejp_905_;
}
else
{
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v___x_904_);
v___x_906_ = v_reuseFailAlloc_907_;
goto v_reusejp_905_;
}
v_reusejp_905_:
{
return v___x_906_;
}
}
}
}
else
{
lean_object* v_a_909_; lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_916_; 
v_a_909_ = lean_ctor_get(v___x_897_, 0);
v_isSharedCheck_916_ = !lean_is_exclusive(v___x_897_);
if (v_isSharedCheck_916_ == 0)
{
v___x_911_ = v___x_897_;
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
else
{
lean_inc(v_a_909_);
lean_dec(v___x_897_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
lean_object* v___x_914_; 
if (v_isShared_912_ == 0)
{
v___x_914_ = v___x_911_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v_a_909_);
v___x_914_ = v_reuseFailAlloc_915_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
return v___x_914_;
}
}
}
}
else
{
lean_dec_ref(v_arg_879_);
goto v___jp_885_;
}
}
else
{
lean_object* v_a_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_924_; 
lean_dec_ref(v_arg_879_);
v_a_917_ = lean_ctor_get(v___x_894_, 0);
v_isSharedCheck_924_ = !lean_is_exclusive(v___x_894_);
if (v_isSharedCheck_924_ == 0)
{
v___x_919_ = v___x_894_;
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_a_917_);
lean_dec(v___x_894_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_shouldCanon___boxed(lean_object* v_pinfos_962_, lean_object* v_i_963_, lean_object* v_arg_964_, lean_object* v_a_965_, lean_object* v_a_966_, lean_object* v_a_967_, lean_object* v_a_968_, lean_object* v_a_969_){
_start:
{
lean_object* v_res_970_; 
v_res_970_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_shouldCanon(v_pinfos_962_, v_i_963_, v_arg_964_, v_a_965_, v_a_966_, v_a_967_, v_a_968_);
lean_dec(v_a_968_);
lean_dec_ref(v_a_967_);
lean_dec(v_a_966_);
lean_dec_ref(v_a_965_);
lean_dec(v_i_963_);
lean_dec_ref(v_pinfos_962_);
return v_res_970_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_mkOffset(lean_object* v_e_971_, lean_object* v_offset_972_){
_start:
{
lean_object* v___x_973_; uint8_t v___x_974_; 
v___x_973_ = lean_unsigned_to_nat(0u);
v___x_974_ = lean_nat_dec_eq(v_offset_972_, v___x_973_);
if (v___x_974_ == 0)
{
lean_object* v___x_975_; lean_object* v___x_976_; 
v___x_975_ = l_Lean_mkNatLit(v_offset_972_);
v___x_976_ = l_Lean_mkNatAdd(v_e_971_, v___x_975_);
return v___x_976_;
}
else
{
lean_dec(v_offset_972_);
return v_e_971_;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__0(void){
_start:
{
lean_object* v___x_977_; lean_object* v_dummy_978_; 
v___x_977_ = lean_box(0);
v_dummy_978_ = l_Lean_Expr_sort___override(v___x_977_);
return v_dummy_978_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg(lean_object* v_info_979_, lean_object* v_e_980_, lean_object* v_a_981_, lean_object* v_a_982_, lean_object* v_a_983_, lean_object* v_a_984_){
_start:
{
uint8_t v_fromClass_989_; 
v_fromClass_989_ = lean_ctor_get_uint8(v_info_979_, sizeof(void*)*3);
if (v_fromClass_989_ == 0)
{
lean_object* v___x_990_; 
v___x_990_ = l_Lean_Meta_unfoldDefinition_x3f(v_e_980_, v_fromClass_989_, v_a_981_, v_a_982_, v_a_983_, v_a_984_);
if (lean_obj_tag(v___x_990_) == 0)
{
lean_object* v_a_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_1025_; 
v_a_991_ = lean_ctor_get(v___x_990_, 0);
v_isSharedCheck_1025_ = !lean_is_exclusive(v___x_990_);
if (v_isSharedCheck_1025_ == 0)
{
v___x_993_ = v___x_990_;
v_isShared_994_ = v_isSharedCheck_1025_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_a_991_);
lean_dec(v___x_990_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_1025_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
if (lean_obj_tag(v_a_991_) == 1)
{
lean_object* v_val_995_; lean_object* v___x_996_; lean_object* v___x_997_; 
lean_del_object(v___x_993_);
v_val_995_ = lean_ctor_get(v_a_991_, 0);
lean_inc(v_val_995_);
lean_dec_ref_known(v_a_991_, 1);
v___x_996_ = l_Lean_Expr_getAppFn(v_val_995_);
v___x_997_ = l_Lean_Meta_reduceProj_x3f(v___x_996_, v_a_981_, v_a_982_, v_a_983_, v_a_984_);
if (lean_obj_tag(v___x_997_) == 0)
{
lean_object* v_a_998_; lean_object* v___x_1000_; uint8_t v_isShared_1001_; uint8_t v_isSharedCheck_1020_; 
v_a_998_ = lean_ctor_get(v___x_997_, 0);
v_isSharedCheck_1020_ = !lean_is_exclusive(v___x_997_);
if (v_isSharedCheck_1020_ == 0)
{
v___x_1000_ = v___x_997_;
v_isShared_1001_ = v_isSharedCheck_1020_;
goto v_resetjp_999_;
}
else
{
lean_inc(v_a_998_);
lean_dec(v___x_997_);
v___x_1000_ = lean_box(0);
v_isShared_1001_ = v_isSharedCheck_1020_;
goto v_resetjp_999_;
}
v_resetjp_999_:
{
if (lean_obj_tag(v_a_998_) == 0)
{
lean_del_object(v___x_1000_);
lean_dec(v_val_995_);
goto v___jp_986_;
}
else
{
lean_object* v_val_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1019_; 
v_val_1002_ = lean_ctor_get(v_a_998_, 0);
v_isSharedCheck_1019_ = !lean_is_exclusive(v_a_998_);
if (v_isSharedCheck_1019_ == 0)
{
v___x_1004_ = v_a_998_;
v_isShared_1005_ = v_isSharedCheck_1019_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_val_1002_);
lean_dec(v_a_998_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1019_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
lean_object* v_dummy_1006_; lean_object* v_nargs_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1014_; 
v_dummy_1006_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__0, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__0);
v_nargs_1007_ = l_Lean_Expr_getAppNumArgs(v_val_995_);
lean_inc(v_nargs_1007_);
v___x_1008_ = lean_mk_array(v_nargs_1007_, v_dummy_1006_);
v___x_1009_ = lean_unsigned_to_nat(1u);
v___x_1010_ = lean_nat_sub(v_nargs_1007_, v___x_1009_);
lean_dec(v_nargs_1007_);
v___x_1011_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_val_995_, v___x_1008_, v___x_1010_);
v___x_1012_ = l_Lean_mkAppN(v_val_1002_, v___x_1011_);
lean_dec_ref(v___x_1011_);
if (v_isShared_1005_ == 0)
{
lean_ctor_set(v___x_1004_, 0, v___x_1012_);
v___x_1014_ = v___x_1004_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1018_; 
v_reuseFailAlloc_1018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1018_, 0, v___x_1012_);
v___x_1014_ = v_reuseFailAlloc_1018_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
lean_object* v___x_1016_; 
if (v_isShared_1001_ == 0)
{
lean_ctor_set(v___x_1000_, 0, v___x_1014_);
v___x_1016_ = v___x_1000_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1017_; 
v_reuseFailAlloc_1017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1017_, 0, v___x_1014_);
v___x_1016_ = v_reuseFailAlloc_1017_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
return v___x_1016_;
}
}
}
}
}
}
else
{
lean_dec(v_val_995_);
return v___x_997_;
}
}
else
{
lean_object* v___x_1021_; lean_object* v___x_1023_; 
lean_dec(v_a_991_);
v___x_1021_ = lean_box(0);
if (v_isShared_994_ == 0)
{
lean_ctor_set(v___x_993_, 0, v___x_1021_);
v___x_1023_ = v___x_993_;
goto v_reusejp_1022_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v___x_1021_);
v___x_1023_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1022_;
}
v_reusejp_1022_:
{
return v___x_1023_;
}
}
}
}
else
{
return v___x_990_;
}
}
else
{
lean_dec_ref(v_e_980_);
goto v___jp_986_;
}
v___jp_986_:
{
lean_object* v___x_987_; lean_object* v___x_988_; 
v___x_987_ = lean_box(0);
v___x_988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_988_, 0, v___x_987_);
return v___x_988_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___boxed(lean_object* v_info_1026_, lean_object* v_e_1027_, lean_object* v_a_1028_, lean_object* v_a_1029_, lean_object* v_a_1030_, lean_object* v_a_1031_, lean_object* v_a_1032_){
_start:
{
lean_object* v_res_1033_; 
v_res_1033_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg(v_info_1026_, v_e_1027_, v_a_1028_, v_a_1029_, v_a_1030_, v_a_1031_);
lean_dec(v_a_1031_);
lean_dec_ref(v_a_1030_);
lean_dec(v_a_1029_);
lean_dec_ref(v_a_1028_);
lean_dec_ref(v_info_1026_);
return v_res_1033_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f(lean_object* v_info_1034_, lean_object* v_e_1035_, lean_object* v_a_1036_, lean_object* v_a_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_, lean_object* v_a_1040_, lean_object* v_a_1041_){
_start:
{
lean_object* v___x_1043_; 
v___x_1043_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg(v_info_1034_, v_e_1035_, v_a_1038_, v_a_1039_, v_a_1040_, v_a_1041_);
return v___x_1043_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___boxed(lean_object* v_info_1044_, lean_object* v_e_1045_, lean_object* v_a_1046_, lean_object* v_a_1047_, lean_object* v_a_1048_, lean_object* v_a_1049_, lean_object* v_a_1050_, lean_object* v_a_1051_, lean_object* v_a_1052_){
_start:
{
lean_object* v_res_1053_; 
v_res_1053_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f(v_info_1044_, v_e_1045_, v_a_1046_, v_a_1047_, v_a_1048_, v_a_1049_, v_a_1050_, v_a_1051_);
lean_dec(v_a_1051_);
lean_dec_ref(v_a_1050_);
lean_dec(v_a_1049_);
lean_dec_ref(v_a_1048_);
lean_dec(v_a_1047_);
lean_dec_ref(v_a_1046_);
lean_dec_ref(v_info_1044_);
return v_res_1053_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNat(lean_object* v_e_1054_){
_start:
{
lean_object* v___x_1055_; uint8_t v___x_1056_; 
v___x_1055_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg___closed__3));
v___x_1056_ = l_Lean_Expr_isConstOf(v_e_1054_, v___x_1055_);
return v___x_1056_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNat___boxed(lean_object* v_e_1057_){
_start:
{
uint8_t v_res_1058_; lean_object* v_r_1059_; 
v_res_1058_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNat(v_e_1057_);
lean_dec_ref(v_e_1057_);
v_r_1059_ = lean_box(v_res_1058_);
return v_r_1059_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp(lean_object* v_e_1093_){
_start:
{
lean_object* v___x_1094_; lean_object* v___x_1095_; uint8_t v___x_1096_; 
v___x_1094_ = l_Lean_Expr_cleanupAnnotations(v_e_1093_);
v___x_1095_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__1));
v___x_1096_ = l_Lean_Expr_isConstOf(v___x_1094_, v___x_1095_);
if (v___x_1096_ == 0)
{
uint8_t v___x_1097_; 
v___x_1097_ = l_Lean_Expr_isApp(v___x_1094_);
if (v___x_1097_ == 0)
{
lean_dec_ref(v___x_1094_);
return v___x_1097_;
}
else
{
lean_object* v___x_1098_; lean_object* v___x_1099_; uint8_t v___x_1100_; 
v___x_1098_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1094_);
lean_dec_ref(v___x_1094_);
v___x_1099_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__3));
v___x_1100_ = l_Lean_Expr_isConstOf(v___x_1098_, v___x_1099_);
if (v___x_1100_ == 0)
{
uint8_t v___x_1101_; 
v___x_1101_ = l_Lean_Expr_isApp(v___x_1098_);
if (v___x_1101_ == 0)
{
lean_dec_ref(v___x_1098_);
return v___x_1101_;
}
else
{
lean_object* v___x_1102_; uint8_t v___x_1103_; 
v___x_1102_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1098_);
lean_dec_ref(v___x_1098_);
v___x_1103_ = l_Lean_Expr_isApp(v___x_1102_);
if (v___x_1103_ == 0)
{
lean_dec_ref(v___x_1102_);
return v___x_1103_;
}
else
{
lean_object* v___x_1104_; uint8_t v___x_1105_; 
v___x_1104_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1102_);
lean_dec_ref(v___x_1102_);
v___x_1105_ = l_Lean_Expr_isApp(v___x_1104_);
if (v___x_1105_ == 0)
{
lean_dec_ref(v___x_1104_);
return v___x_1105_;
}
else
{
lean_object* v___x_1106_; uint8_t v___x_1107_; 
v___x_1106_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1104_);
lean_dec_ref(v___x_1104_);
v___x_1107_ = l_Lean_Expr_isApp(v___x_1106_);
if (v___x_1107_ == 0)
{
lean_dec_ref(v___x_1106_);
return v___x_1107_;
}
else
{
lean_object* v___x_1108_; uint8_t v___x_1109_; 
v___x_1108_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1106_);
lean_dec_ref(v___x_1106_);
v___x_1109_ = l_Lean_Expr_isApp(v___x_1108_);
if (v___x_1109_ == 0)
{
lean_dec_ref(v___x_1108_);
return v___x_1109_;
}
else
{
lean_object* v_arg_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; uint8_t v___x_1113_; 
v_arg_1110_ = lean_ctor_get(v___x_1108_, 1);
lean_inc_ref(v_arg_1110_);
v___x_1111_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1108_);
lean_dec_ref(v___x_1108_);
v___x_1112_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__6));
v___x_1113_ = l_Lean_Expr_isConstOf(v___x_1111_, v___x_1112_);
if (v___x_1113_ == 0)
{
lean_object* v___x_1114_; uint8_t v___x_1115_; 
v___x_1114_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__9));
v___x_1115_ = l_Lean_Expr_isConstOf(v___x_1111_, v___x_1114_);
if (v___x_1115_ == 0)
{
lean_object* v___x_1116_; uint8_t v___x_1117_; 
v___x_1116_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__12));
v___x_1117_ = l_Lean_Expr_isConstOf(v___x_1111_, v___x_1116_);
if (v___x_1117_ == 0)
{
lean_object* v___x_1118_; uint8_t v___x_1119_; 
v___x_1118_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__15));
v___x_1119_ = l_Lean_Expr_isConstOf(v___x_1111_, v___x_1118_);
if (v___x_1119_ == 0)
{
lean_object* v___x_1120_; uint8_t v___x_1121_; 
v___x_1120_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___closed__18));
v___x_1121_ = l_Lean_Expr_isConstOf(v___x_1111_, v___x_1120_);
lean_dec_ref(v___x_1111_);
if (v___x_1121_ == 0)
{
lean_dec_ref(v_arg_1110_);
return v___x_1121_;
}
else
{
uint8_t v___x_1122_; 
v___x_1122_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNat(v_arg_1110_);
lean_dec_ref(v_arg_1110_);
return v___x_1122_;
}
}
else
{
uint8_t v___x_1123_; 
lean_dec_ref(v___x_1111_);
v___x_1123_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNat(v_arg_1110_);
lean_dec_ref(v_arg_1110_);
return v___x_1123_;
}
}
else
{
uint8_t v___x_1124_; 
lean_dec_ref(v___x_1111_);
v___x_1124_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNat(v_arg_1110_);
lean_dec_ref(v_arg_1110_);
return v___x_1124_;
}
}
else
{
uint8_t v___x_1125_; 
lean_dec_ref(v___x_1111_);
v___x_1125_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNat(v_arg_1110_);
lean_dec_ref(v_arg_1110_);
return v___x_1125_;
}
}
else
{
uint8_t v___x_1126_; 
lean_dec_ref(v___x_1111_);
v___x_1126_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNat(v_arg_1110_);
lean_dec_ref(v_arg_1110_);
return v___x_1126_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_1098_);
return v___x_1097_;
}
}
}
else
{
lean_dec_ref(v___x_1094_);
return v___x_1096_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp___boxed(lean_object* v_e_1127_){
_start:
{
uint8_t v_res_1128_; lean_object* v_r_1129_; 
v_res_1128_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp(v_e_1127_);
lean_dec_ref(v_e_1127_);
v_r_1129_ = lean_box(v_res_1128_);
return v_r_1129_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__1(void){
_start:
{
lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1131_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__0));
v___x_1132_ = l_Lean_stringToMessageData(v___x_1131_);
return v___x_1132_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__3(void){
_start:
{
lean_object* v___x_1134_; lean_object* v___x_1135_; 
v___x_1134_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__2));
v___x_1135_ = l_Lean_stringToMessageData(v___x_1134_);
return v___x_1135_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst(lean_object* v_e_1136_, lean_object* v_inst_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_, lean_object* v_a_1143_){
_start:
{
lean_object* v___x_1145_; 
lean_inc_ref(v_inst_1137_);
lean_inc_ref(v_e_1136_);
v___x_1145_ = l_Lean_Meta_Sym_isDefEqI___redArg(v_e_1136_, v_inst_1137_, v_a_1139_, v_a_1140_, v_a_1141_, v_a_1142_, v_a_1143_);
if (lean_obj_tag(v___x_1145_) == 0)
{
lean_object* v_a_1146_; lean_object* v___x_1148_; uint8_t v_isShared_1149_; uint8_t v_isSharedCheck_1196_; 
v_a_1146_ = lean_ctor_get(v___x_1145_, 0);
v_isSharedCheck_1196_ = !lean_is_exclusive(v___x_1145_);
if (v_isSharedCheck_1196_ == 0)
{
v___x_1148_ = v___x_1145_;
v_isShared_1149_ = v_isSharedCheck_1196_;
goto v_resetjp_1147_;
}
else
{
lean_inc(v_a_1146_);
lean_dec(v___x_1145_);
v___x_1148_ = lean_box(0);
v_isShared_1149_ = v_isSharedCheck_1196_;
goto v_resetjp_1147_;
}
v_resetjp_1147_:
{
uint8_t v___x_1150_; 
v___x_1150_ = lean_unbox(v_a_1146_);
lean_dec(v_a_1146_);
if (v___x_1150_ == 0)
{
lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; 
lean_del_object(v___x_1148_);
v___x_1151_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__1, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__1_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__1);
lean_inc_ref(v_e_1136_);
v___x_1152_ = l_Lean_indentExpr(v_e_1136_);
v___x_1153_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1153_, 0, v___x_1151_);
lean_ctor_set(v___x_1153_, 1, v___x_1152_);
v___x_1154_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__3, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__3_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__3);
v___x_1155_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1155_, 0, v___x_1153_);
lean_ctor_set(v___x_1155_, 1, v___x_1154_);
v___x_1156_ = l_Lean_indentExpr(v_inst_1137_);
v___x_1157_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1157_, 0, v___x_1155_);
lean_ctor_set(v___x_1157_, 1, v___x_1156_);
v___x_1158_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_1138_);
if (lean_obj_tag(v___x_1158_) == 0)
{
lean_object* v_a_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1184_; 
v_a_1159_ = lean_ctor_get(v___x_1158_, 0);
v_isSharedCheck_1184_ = !lean_is_exclusive(v___x_1158_);
if (v_isSharedCheck_1184_ == 0)
{
v___x_1161_ = v___x_1158_;
v_isShared_1162_ = v_isSharedCheck_1184_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_a_1159_);
lean_dec(v___x_1158_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1184_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
uint8_t v_verbose_1163_; 
v_verbose_1163_ = lean_ctor_get_uint8(v_a_1159_, 0);
lean_dec(v_a_1159_);
if (v_verbose_1163_ == 0)
{
lean_object* v___x_1165_; 
lean_dec_ref_known(v___x_1157_, 2);
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 0, v_e_1136_);
v___x_1165_ = v___x_1161_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v_e_1136_);
v___x_1165_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
return v___x_1165_;
}
}
else
{
lean_object* v___x_1167_; 
lean_del_object(v___x_1161_);
v___x_1167_ = l_Lean_Meta_Sym_reportIssue(v___x_1157_, v_a_1138_, v_a_1139_, v_a_1140_, v_a_1141_, v_a_1142_, v_a_1143_);
if (lean_obj_tag(v___x_1167_) == 0)
{
lean_object* v___x_1169_; uint8_t v_isShared_1170_; uint8_t v_isSharedCheck_1174_; 
v_isSharedCheck_1174_ = !lean_is_exclusive(v___x_1167_);
if (v_isSharedCheck_1174_ == 0)
{
lean_object* v_unused_1175_; 
v_unused_1175_ = lean_ctor_get(v___x_1167_, 0);
lean_dec(v_unused_1175_);
v___x_1169_ = v___x_1167_;
v_isShared_1170_ = v_isSharedCheck_1174_;
goto v_resetjp_1168_;
}
else
{
lean_dec(v___x_1167_);
v___x_1169_ = lean_box(0);
v_isShared_1170_ = v_isSharedCheck_1174_;
goto v_resetjp_1168_;
}
v_resetjp_1168_:
{
lean_object* v___x_1172_; 
if (v_isShared_1170_ == 0)
{
lean_ctor_set(v___x_1169_, 0, v_e_1136_);
v___x_1172_ = v___x_1169_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1173_; 
v_reuseFailAlloc_1173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1173_, 0, v_e_1136_);
v___x_1172_ = v_reuseFailAlloc_1173_;
goto v_reusejp_1171_;
}
v_reusejp_1171_:
{
return v___x_1172_;
}
}
}
else
{
lean_object* v_a_1176_; lean_object* v___x_1178_; uint8_t v_isShared_1179_; uint8_t v_isSharedCheck_1183_; 
lean_dec_ref(v_e_1136_);
v_a_1176_ = lean_ctor_get(v___x_1167_, 0);
v_isSharedCheck_1183_ = !lean_is_exclusive(v___x_1167_);
if (v_isSharedCheck_1183_ == 0)
{
v___x_1178_ = v___x_1167_;
v_isShared_1179_ = v_isSharedCheck_1183_;
goto v_resetjp_1177_;
}
else
{
lean_inc(v_a_1176_);
lean_dec(v___x_1167_);
v___x_1178_ = lean_box(0);
v_isShared_1179_ = v_isSharedCheck_1183_;
goto v_resetjp_1177_;
}
v_resetjp_1177_:
{
lean_object* v___x_1181_; 
if (v_isShared_1179_ == 0)
{
v___x_1181_ = v___x_1178_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1182_; 
v_reuseFailAlloc_1182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1182_, 0, v_a_1176_);
v___x_1181_ = v_reuseFailAlloc_1182_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
return v___x_1181_;
}
}
}
}
}
}
else
{
lean_object* v_a_1185_; lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1192_; 
lean_dec_ref_known(v___x_1157_, 2);
lean_dec_ref(v_e_1136_);
v_a_1185_ = lean_ctor_get(v___x_1158_, 0);
v_isSharedCheck_1192_ = !lean_is_exclusive(v___x_1158_);
if (v_isSharedCheck_1192_ == 0)
{
v___x_1187_ = v___x_1158_;
v_isShared_1188_ = v_isSharedCheck_1192_;
goto v_resetjp_1186_;
}
else
{
lean_inc(v_a_1185_);
lean_dec(v___x_1158_);
v___x_1187_ = lean_box(0);
v_isShared_1188_ = v_isSharedCheck_1192_;
goto v_resetjp_1186_;
}
v_resetjp_1186_:
{
lean_object* v___x_1190_; 
if (v_isShared_1188_ == 0)
{
v___x_1190_ = v___x_1187_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v_a_1185_);
v___x_1190_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
return v___x_1190_;
}
}
}
}
else
{
lean_object* v___x_1194_; 
lean_dec_ref(v_e_1136_);
if (v_isShared_1149_ == 0)
{
lean_ctor_set(v___x_1148_, 0, v_inst_1137_);
v___x_1194_ = v___x_1148_;
goto v_reusejp_1193_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v_inst_1137_);
v___x_1194_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1193_;
}
v_reusejp_1193_:
{
return v___x_1194_;
}
}
}
}
else
{
lean_object* v_a_1197_; lean_object* v___x_1199_; uint8_t v_isShared_1200_; uint8_t v_isSharedCheck_1204_; 
lean_dec_ref(v_inst_1137_);
lean_dec_ref(v_e_1136_);
v_a_1197_ = lean_ctor_get(v___x_1145_, 0);
v_isSharedCheck_1204_ = !lean_is_exclusive(v___x_1145_);
if (v_isSharedCheck_1204_ == 0)
{
v___x_1199_ = v___x_1145_;
v_isShared_1200_ = v_isSharedCheck_1204_;
goto v_resetjp_1198_;
}
else
{
lean_inc(v_a_1197_);
lean_dec(v___x_1145_);
v___x_1199_ = lean_box(0);
v_isShared_1200_ = v_isSharedCheck_1204_;
goto v_resetjp_1198_;
}
v_resetjp_1198_:
{
lean_object* v___x_1202_; 
if (v_isShared_1200_ == 0)
{
v___x_1202_ = v___x_1199_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1203_; 
v_reuseFailAlloc_1203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1203_, 0, v_a_1197_);
v___x_1202_ = v_reuseFailAlloc_1203_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
return v___x_1202_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___boxed(lean_object* v_e_1205_, lean_object* v_inst_1206_, lean_object* v_a_1207_, lean_object* v_a_1208_, lean_object* v_a_1209_, lean_object* v_a_1210_, lean_object* v_a_1211_, lean_object* v_a_1212_, lean_object* v_a_1213_){
_start:
{
lean_object* v_res_1214_; 
v_res_1214_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst(v_e_1205_, v_inst_1206_, v_a_1207_, v_a_1208_, v_a_1209_, v_a_1210_, v_a_1211_, v_a_1212_);
lean_dec(v_a_1212_);
lean_dec_ref(v_a_1211_);
lean_dec(v_a_1210_);
lean_dec_ref(v_a_1209_);
lean_dec(v_a_1208_);
lean_dec_ref(v_a_1207_);
return v_res_1214_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__15___redArg(lean_object* v_a_1215_, lean_object* v_b_1216_, lean_object* v_x_1217_){
_start:
{
if (lean_obj_tag(v_x_1217_) == 0)
{
lean_dec(v_b_1216_);
lean_dec_ref(v_a_1215_);
return v_x_1217_;
}
else
{
lean_object* v_key_1218_; lean_object* v_value_1219_; lean_object* v_tail_1220_; lean_object* v___x_1222_; uint8_t v_isShared_1223_; uint8_t v_isSharedCheck_1232_; 
v_key_1218_ = lean_ctor_get(v_x_1217_, 0);
v_value_1219_ = lean_ctor_get(v_x_1217_, 1);
v_tail_1220_ = lean_ctor_get(v_x_1217_, 2);
v_isSharedCheck_1232_ = !lean_is_exclusive(v_x_1217_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1222_ = v_x_1217_;
v_isShared_1223_ = v_isSharedCheck_1232_;
goto v_resetjp_1221_;
}
else
{
lean_inc(v_tail_1220_);
lean_inc(v_value_1219_);
lean_inc(v_key_1218_);
lean_dec(v_x_1217_);
v___x_1222_ = lean_box(0);
v_isShared_1223_ = v_isSharedCheck_1232_;
goto v_resetjp_1221_;
}
v_resetjp_1221_:
{
uint8_t v___x_1224_; 
v___x_1224_ = lean_expr_eqv(v_key_1218_, v_a_1215_);
if (v___x_1224_ == 0)
{
lean_object* v___x_1225_; lean_object* v___x_1227_; 
v___x_1225_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__15___redArg(v_a_1215_, v_b_1216_, v_tail_1220_);
if (v_isShared_1223_ == 0)
{
lean_ctor_set(v___x_1222_, 2, v___x_1225_);
v___x_1227_ = v___x_1222_;
goto v_reusejp_1226_;
}
else
{
lean_object* v_reuseFailAlloc_1228_; 
v_reuseFailAlloc_1228_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1228_, 0, v_key_1218_);
lean_ctor_set(v_reuseFailAlloc_1228_, 1, v_value_1219_);
lean_ctor_set(v_reuseFailAlloc_1228_, 2, v___x_1225_);
v___x_1227_ = v_reuseFailAlloc_1228_;
goto v_reusejp_1226_;
}
v_reusejp_1226_:
{
return v___x_1227_;
}
}
else
{
lean_object* v___x_1230_; 
lean_dec(v_value_1219_);
lean_dec(v_key_1218_);
if (v_isShared_1223_ == 0)
{
lean_ctor_set(v___x_1222_, 1, v_b_1216_);
lean_ctor_set(v___x_1222_, 0, v_a_1215_);
v___x_1230_ = v___x_1222_;
goto v_reusejp_1229_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v_a_1215_);
lean_ctor_set(v_reuseFailAlloc_1231_, 1, v_b_1216_);
lean_ctor_set(v_reuseFailAlloc_1231_, 2, v_tail_1220_);
v___x_1230_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1229_;
}
v_reusejp_1229_:
{
return v___x_1230_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__13___redArg(lean_object* v_a_1233_, lean_object* v_x_1234_){
_start:
{
if (lean_obj_tag(v_x_1234_) == 0)
{
uint8_t v___x_1235_; 
v___x_1235_ = 0;
return v___x_1235_;
}
else
{
lean_object* v_key_1236_; lean_object* v_tail_1237_; uint8_t v___x_1238_; 
v_key_1236_ = lean_ctor_get(v_x_1234_, 0);
v_tail_1237_ = lean_ctor_get(v_x_1234_, 2);
v___x_1238_ = lean_expr_eqv(v_key_1236_, v_a_1233_);
if (v___x_1238_ == 0)
{
v_x_1234_ = v_tail_1237_;
goto _start;
}
else
{
return v___x_1238_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__13___redArg___boxed(lean_object* v_a_1240_, lean_object* v_x_1241_){
_start:
{
uint8_t v_res_1242_; lean_object* v_r_1243_; 
v_res_1242_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__13___redArg(v_a_1240_, v_x_1241_);
lean_dec(v_x_1241_);
lean_dec_ref(v_a_1240_);
v_r_1243_ = lean_box(v_res_1242_);
return v_r_1243_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14_spec__31_spec__36___redArg(lean_object* v_x_1244_, lean_object* v_x_1245_){
_start:
{
if (lean_obj_tag(v_x_1245_) == 0)
{
return v_x_1244_;
}
else
{
lean_object* v_key_1246_; lean_object* v_value_1247_; lean_object* v_tail_1248_; lean_object* v___x_1250_; uint8_t v_isShared_1251_; uint8_t v_isSharedCheck_1271_; 
v_key_1246_ = lean_ctor_get(v_x_1245_, 0);
v_value_1247_ = lean_ctor_get(v_x_1245_, 1);
v_tail_1248_ = lean_ctor_get(v_x_1245_, 2);
v_isSharedCheck_1271_ = !lean_is_exclusive(v_x_1245_);
if (v_isSharedCheck_1271_ == 0)
{
v___x_1250_ = v_x_1245_;
v_isShared_1251_ = v_isSharedCheck_1271_;
goto v_resetjp_1249_;
}
else
{
lean_inc(v_tail_1248_);
lean_inc(v_value_1247_);
lean_inc(v_key_1246_);
lean_dec(v_x_1245_);
v___x_1250_ = lean_box(0);
v_isShared_1251_ = v_isSharedCheck_1271_;
goto v_resetjp_1249_;
}
v_resetjp_1249_:
{
lean_object* v___x_1252_; uint64_t v___x_1253_; uint64_t v___x_1254_; uint64_t v___x_1255_; uint64_t v_fold_1256_; uint64_t v___x_1257_; uint64_t v___x_1258_; uint64_t v___x_1259_; size_t v___x_1260_; size_t v___x_1261_; size_t v___x_1262_; size_t v___x_1263_; size_t v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1267_; 
v___x_1252_ = lean_array_get_size(v_x_1244_);
v___x_1253_ = l_Lean_Expr_hash(v_key_1246_);
v___x_1254_ = 32ULL;
v___x_1255_ = lean_uint64_shift_right(v___x_1253_, v___x_1254_);
v_fold_1256_ = lean_uint64_xor(v___x_1253_, v___x_1255_);
v___x_1257_ = 16ULL;
v___x_1258_ = lean_uint64_shift_right(v_fold_1256_, v___x_1257_);
v___x_1259_ = lean_uint64_xor(v_fold_1256_, v___x_1258_);
v___x_1260_ = lean_uint64_to_usize(v___x_1259_);
v___x_1261_ = lean_usize_of_nat(v___x_1252_);
v___x_1262_ = ((size_t)1ULL);
v___x_1263_ = lean_usize_sub(v___x_1261_, v___x_1262_);
v___x_1264_ = lean_usize_land(v___x_1260_, v___x_1263_);
v___x_1265_ = lean_array_uget_borrowed(v_x_1244_, v___x_1264_);
lean_inc(v___x_1265_);
if (v_isShared_1251_ == 0)
{
lean_ctor_set(v___x_1250_, 2, v___x_1265_);
v___x_1267_ = v___x_1250_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v_key_1246_);
lean_ctor_set(v_reuseFailAlloc_1270_, 1, v_value_1247_);
lean_ctor_set(v_reuseFailAlloc_1270_, 2, v___x_1265_);
v___x_1267_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
lean_object* v___x_1268_; 
v___x_1268_ = lean_array_uset(v_x_1244_, v___x_1264_, v___x_1267_);
v_x_1244_ = v___x_1268_;
v_x_1245_ = v_tail_1248_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14_spec__31___redArg(lean_object* v_i_1272_, lean_object* v_source_1273_, lean_object* v_target_1274_){
_start:
{
lean_object* v___x_1275_; uint8_t v___x_1276_; 
v___x_1275_ = lean_array_get_size(v_source_1273_);
v___x_1276_ = lean_nat_dec_lt(v_i_1272_, v___x_1275_);
if (v___x_1276_ == 0)
{
lean_dec_ref(v_source_1273_);
lean_dec(v_i_1272_);
return v_target_1274_;
}
else
{
lean_object* v_es_1277_; lean_object* v___x_1278_; lean_object* v_source_1279_; lean_object* v_target_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; 
v_es_1277_ = lean_array_fget(v_source_1273_, v_i_1272_);
v___x_1278_ = lean_box(0);
v_source_1279_ = lean_array_fset(v_source_1273_, v_i_1272_, v___x_1278_);
v_target_1280_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14_spec__31_spec__36___redArg(v_target_1274_, v_es_1277_);
v___x_1281_ = lean_unsigned_to_nat(1u);
v___x_1282_ = lean_nat_add(v_i_1272_, v___x_1281_);
lean_dec(v_i_1272_);
v_i_1272_ = v___x_1282_;
v_source_1273_ = v_source_1279_;
v_target_1274_ = v_target_1280_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14___redArg(lean_object* v_data_1284_){
_start:
{
lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v_nbuckets_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; 
v___x_1285_ = lean_array_get_size(v_data_1284_);
v___x_1286_ = lean_unsigned_to_nat(2u);
v_nbuckets_1287_ = lean_nat_mul(v___x_1285_, v___x_1286_);
v___x_1288_ = lean_unsigned_to_nat(0u);
v___x_1289_ = lean_box(0);
v___x_1290_ = lean_mk_array(v_nbuckets_1287_, v___x_1289_);
v___x_1291_ = lean_array_propagate_mark(v_data_1284_, v___x_1290_);
v___x_1292_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14_spec__31___redArg(v___x_1288_, v_data_1284_, v___x_1291_);
return v___x_1292_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(lean_object* v_m_1293_, lean_object* v_a_1294_, lean_object* v_b_1295_){
_start:
{
lean_object* v_size_1296_; lean_object* v_buckets_1297_; lean_object* v___x_1299_; uint8_t v_isShared_1300_; uint8_t v_isSharedCheck_1340_; 
v_size_1296_ = lean_ctor_get(v_m_1293_, 0);
v_buckets_1297_ = lean_ctor_get(v_m_1293_, 1);
v_isSharedCheck_1340_ = !lean_is_exclusive(v_m_1293_);
if (v_isSharedCheck_1340_ == 0)
{
v___x_1299_ = v_m_1293_;
v_isShared_1300_ = v_isSharedCheck_1340_;
goto v_resetjp_1298_;
}
else
{
lean_inc(v_buckets_1297_);
lean_inc(v_size_1296_);
lean_dec(v_m_1293_);
v___x_1299_ = lean_box(0);
v_isShared_1300_ = v_isSharedCheck_1340_;
goto v_resetjp_1298_;
}
v_resetjp_1298_:
{
lean_object* v___x_1301_; uint64_t v___x_1302_; uint64_t v___x_1303_; uint64_t v___x_1304_; uint64_t v_fold_1305_; uint64_t v___x_1306_; uint64_t v___x_1307_; uint64_t v___x_1308_; size_t v___x_1309_; size_t v___x_1310_; size_t v___x_1311_; size_t v___x_1312_; size_t v___x_1313_; lean_object* v_bkt_1314_; uint8_t v___x_1315_; 
v___x_1301_ = lean_array_get_size(v_buckets_1297_);
v___x_1302_ = l_Lean_Expr_hash(v_a_1294_);
v___x_1303_ = 32ULL;
v___x_1304_ = lean_uint64_shift_right(v___x_1302_, v___x_1303_);
v_fold_1305_ = lean_uint64_xor(v___x_1302_, v___x_1304_);
v___x_1306_ = 16ULL;
v___x_1307_ = lean_uint64_shift_right(v_fold_1305_, v___x_1306_);
v___x_1308_ = lean_uint64_xor(v_fold_1305_, v___x_1307_);
v___x_1309_ = lean_uint64_to_usize(v___x_1308_);
v___x_1310_ = lean_usize_of_nat(v___x_1301_);
v___x_1311_ = ((size_t)1ULL);
v___x_1312_ = lean_usize_sub(v___x_1310_, v___x_1311_);
v___x_1313_ = lean_usize_land(v___x_1309_, v___x_1312_);
v_bkt_1314_ = lean_array_uget_borrowed(v_buckets_1297_, v___x_1313_);
v___x_1315_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__13___redArg(v_a_1294_, v_bkt_1314_);
if (v___x_1315_ == 0)
{
lean_object* v___x_1316_; lean_object* v_size_x27_1317_; lean_object* v___x_1318_; lean_object* v_buckets_x27_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; uint8_t v___x_1325_; 
v___x_1316_ = lean_unsigned_to_nat(1u);
v_size_x27_1317_ = lean_nat_add(v_size_1296_, v___x_1316_);
lean_dec(v_size_1296_);
lean_inc(v_bkt_1314_);
v___x_1318_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1318_, 0, v_a_1294_);
lean_ctor_set(v___x_1318_, 1, v_b_1295_);
lean_ctor_set(v___x_1318_, 2, v_bkt_1314_);
v_buckets_x27_1319_ = lean_array_uset(v_buckets_1297_, v___x_1313_, v___x_1318_);
v___x_1320_ = lean_unsigned_to_nat(4u);
v___x_1321_ = lean_nat_mul(v_size_x27_1317_, v___x_1320_);
v___x_1322_ = lean_unsigned_to_nat(3u);
v___x_1323_ = lean_nat_div(v___x_1321_, v___x_1322_);
lean_dec(v___x_1321_);
v___x_1324_ = lean_array_get_size(v_buckets_x27_1319_);
v___x_1325_ = lean_nat_dec_le(v___x_1323_, v___x_1324_);
lean_dec(v___x_1323_);
if (v___x_1325_ == 0)
{
lean_object* v_val_1326_; lean_object* v___x_1328_; 
v_val_1326_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14___redArg(v_buckets_x27_1319_);
if (v_isShared_1300_ == 0)
{
lean_ctor_set(v___x_1299_, 1, v_val_1326_);
lean_ctor_set(v___x_1299_, 0, v_size_x27_1317_);
v___x_1328_ = v___x_1299_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v_size_x27_1317_);
lean_ctor_set(v_reuseFailAlloc_1329_, 1, v_val_1326_);
v___x_1328_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
return v___x_1328_;
}
}
else
{
lean_object* v___x_1331_; 
if (v_isShared_1300_ == 0)
{
lean_ctor_set(v___x_1299_, 1, v_buckets_x27_1319_);
lean_ctor_set(v___x_1299_, 0, v_size_x27_1317_);
v___x_1331_ = v___x_1299_;
goto v_reusejp_1330_;
}
else
{
lean_object* v_reuseFailAlloc_1332_; 
v_reuseFailAlloc_1332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1332_, 0, v_size_x27_1317_);
lean_ctor_set(v_reuseFailAlloc_1332_, 1, v_buckets_x27_1319_);
v___x_1331_ = v_reuseFailAlloc_1332_;
goto v_reusejp_1330_;
}
v_reusejp_1330_:
{
return v___x_1331_;
}
}
}
else
{
lean_object* v___x_1333_; lean_object* v_buckets_x27_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1338_; 
lean_inc(v_bkt_1314_);
v___x_1333_ = lean_box(0);
v_buckets_x27_1334_ = lean_array_uset(v_buckets_1297_, v___x_1313_, v___x_1333_);
v___x_1335_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__15___redArg(v_a_1294_, v_b_1295_, v_bkt_1314_);
v___x_1336_ = lean_array_uset(v_buckets_x27_1334_, v___x_1313_, v___x_1335_);
if (v_isShared_1300_ == 0)
{
lean_ctor_set(v___x_1299_, 1, v___x_1336_);
v___x_1338_ = v___x_1299_;
goto v_reusejp_1337_;
}
else
{
lean_object* v_reuseFailAlloc_1339_; 
v_reuseFailAlloc_1339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1339_, 0, v_size_1296_);
lean_ctor_set(v_reuseFailAlloc_1339_, 1, v___x_1336_);
v___x_1338_ = v_reuseFailAlloc_1339_;
goto v_reusejp_1337_;
}
v_reusejp_1337_:
{
return v___x_1338_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__27___redArg___lam__0(lean_object* v_k_1341_, uint8_t v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v_b_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_){
_start:
{
lean_object* v___x_1351_; lean_object* v___x_1352_; 
v___x_1351_ = lean_box(v___y_1342_);
lean_inc(v___y_1349_);
lean_inc_ref(v___y_1348_);
lean_inc(v___y_1347_);
lean_inc_ref(v___y_1346_);
lean_inc(v___y_1344_);
lean_inc_ref(v___y_1343_);
v___x_1352_ = lean_apply_9(v_k_1341_, v_b_1345_, v___x_1351_, v___y_1343_, v___y_1344_, v___y_1346_, v___y_1347_, v___y_1348_, v___y_1349_, lean_box(0));
return v___x_1352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__27___redArg___lam__0___boxed(lean_object* v_k_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v_b_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_){
_start:
{
uint8_t v___y_72319__boxed_1363_; lean_object* v_res_1364_; 
v___y_72319__boxed_1363_ = lean_unbox(v___y_1354_);
v_res_1364_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__27___redArg___lam__0(v_k_1353_, v___y_72319__boxed_1363_, v___y_1355_, v___y_1356_, v_b_1357_, v___y_1358_, v___y_1359_, v___y_1360_, v___y_1361_);
lean_dec(v___y_1361_);
lean_dec_ref(v___y_1360_);
lean_dec(v___y_1359_);
lean_dec_ref(v___y_1358_);
lean_dec(v___y_1356_);
lean_dec_ref(v___y_1355_);
return v_res_1364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__30___redArg(lean_object* v_name_1365_, uint8_t v_bi_1366_, lean_object* v_type_1367_, lean_object* v_k_1368_, uint8_t v_kind_1369_, uint8_t v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_){
_start:
{
lean_object* v___x_1378_; lean_object* v___f_1379_; lean_object* v___x_1380_; 
v___x_1378_ = lean_box(v___y_1370_);
lean_inc(v___y_1372_);
lean_inc_ref(v___y_1371_);
v___f_1379_ = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__27___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1379_, 0, v_k_1368_);
lean_closure_set(v___f_1379_, 1, v___x_1378_);
lean_closure_set(v___f_1379_, 2, v___y_1371_);
lean_closure_set(v___f_1379_, 3, v___y_1372_);
v___x_1380_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1365_, v_bi_1366_, v_type_1367_, v___f_1379_, v_kind_1369_, v___y_1373_, v___y_1374_, v___y_1375_, v___y_1376_);
if (lean_obj_tag(v___x_1380_) == 0)
{
return v___x_1380_;
}
else
{
lean_object* v_a_1381_; lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1388_; 
v_a_1381_ = lean_ctor_get(v___x_1380_, 0);
v_isSharedCheck_1388_ = !lean_is_exclusive(v___x_1380_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1383_ = v___x_1380_;
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
else
{
lean_inc(v_a_1381_);
lean_dec(v___x_1380_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__30___redArg___boxed(lean_object* v_name_1389_, lean_object* v_bi_1390_, lean_object* v_type_1391_, lean_object* v_k_1392_, lean_object* v_kind_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_){
_start:
{
uint8_t v_bi_boxed_1402_; uint8_t v_kind_boxed_1403_; uint8_t v___y_72347__boxed_1404_; lean_object* v_res_1405_; 
v_bi_boxed_1402_ = lean_unbox(v_bi_1390_);
v_kind_boxed_1403_ = lean_unbox(v_kind_1393_);
v___y_72347__boxed_1404_ = lean_unbox(v___y_1394_);
v_res_1405_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__30___redArg(v_name_1389_, v_bi_boxed_1402_, v_type_1391_, v_k_1392_, v_kind_boxed_1403_, v___y_72347__boxed_1404_, v___y_1395_, v___y_1396_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_);
lean_dec(v___y_1400_);
lean_dec_ref(v___y_1399_);
lean_dec(v___y_1398_);
lean_dec_ref(v___y_1397_);
lean_dec(v___y_1396_);
lean_dec_ref(v___y_1395_);
return v_res_1405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6___redArg(lean_object* v_declName_1406_, lean_object* v___y_1407_){
_start:
{
lean_object* v___x_1409_; lean_object* v_env_1410_; uint8_t v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; 
v___x_1409_ = lean_st_ref_get(v___y_1407_);
v_env_1410_ = lean_ctor_get(v___x_1409_, 0);
lean_inc_ref(v_env_1410_);
lean_dec(v___x_1409_);
v___x_1411_ = l_Lean_Meta_isMatcherCore(v_env_1410_, v_declName_1406_);
v___x_1412_ = lean_box(v___x_1411_);
v___x_1413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1413_, 0, v___x_1412_);
return v___x_1413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6___redArg___boxed(lean_object* v_declName_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_){
_start:
{
lean_object* v_res_1417_; 
v_res_1417_ = l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6___redArg(v_declName_1414_, v___y_1415_);
lean_dec(v___y_1415_);
return v_res_1417_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9___redArg(lean_object* v_declName_1418_, lean_object* v___y_1419_){
_start:
{
lean_object* v___x_1421_; lean_object* v_env_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; 
v___x_1421_ = lean_st_ref_get(v___y_1419_);
v_env_1422_ = lean_ctor_get(v___x_1421_, 0);
lean_inc_ref(v_env_1422_);
lean_dec(v___x_1421_);
v___x_1423_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_env_1422_, v_declName_1418_);
v___x_1424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1424_, 0, v___x_1423_);
return v___x_1424_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9___redArg___boxed(lean_object* v_declName_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_){
_start:
{
lean_object* v_res_1428_; 
v_res_1428_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9___redArg(v_declName_1425_, v___y_1426_);
lean_dec(v___y_1426_);
return v_res_1428_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11_spec__24(lean_object* v_msgData_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_){
_start:
{
lean_object* v___x_1435_; lean_object* v_env_1436_; uint8_t v___x_1437_; lean_object* v_env_1438_; lean_object* v___x_1439_; lean_object* v_toCold_1440_; lean_object* v_mctx_1441_; lean_object* v_lctx_1442_; lean_object* v_options_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; 
v___x_1435_ = lean_st_ref_get(v___y_1433_);
v_env_1436_ = lean_ctor_get(v___x_1435_, 0);
lean_inc_ref(v_env_1436_);
lean_dec(v___x_1435_);
v___x_1437_ = 0;
v_env_1438_ = l_Lean_Environment_setRecordingDeps(v_env_1436_, v___x_1437_);
v___x_1439_ = lean_st_ref_get(v___y_1431_);
v_toCold_1440_ = lean_ctor_get(v___y_1432_, 0);
v_mctx_1441_ = lean_ctor_get(v___x_1439_, 0);
lean_inc_ref(v_mctx_1441_);
lean_dec(v___x_1439_);
v_lctx_1442_ = lean_ctor_get(v___y_1430_, 2);
v_options_1443_ = lean_ctor_get(v_toCold_1440_, 2);
lean_inc_ref(v_options_1443_);
lean_inc_ref(v_lctx_1442_);
v___x_1444_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1444_, 0, v_env_1438_);
lean_ctor_set(v___x_1444_, 1, v_mctx_1441_);
lean_ctor_set(v___x_1444_, 2, v_lctx_1442_);
lean_ctor_set(v___x_1444_, 3, v_options_1443_);
v___x_1445_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1445_, 0, v___x_1444_);
lean_ctor_set(v___x_1445_, 1, v_msgData_1429_);
v___x_1446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1446_, 0, v___x_1445_);
return v___x_1446_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11_spec__24___boxed(lean_object* v_msgData_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_){
_start:
{
lean_object* v_res_1453_; 
v_res_1453_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11_spec__24(v_msgData_1447_, v___y_1448_, v___y_1449_, v___y_1450_, v___y_1451_);
lean_dec(v___y_1451_);
lean_dec_ref(v___y_1450_);
lean_dec(v___y_1449_);
lean_dec_ref(v___y_1448_);
return v_res_1453_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__0(void){
_start:
{
lean_object* v___x_1454_; double v___x_1455_; 
v___x_1454_ = lean_unsigned_to_nat(0u);
v___x_1455_ = lean_float_of_nat(v___x_1454_);
return v___x_1455_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg(lean_object* v_cls_1459_, lean_object* v_msg_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_){
_start:
{
lean_object* v_ref_1466_; lean_object* v___x_1467_; lean_object* v_a_1468_; lean_object* v___x_1470_; uint8_t v_isShared_1471_; uint8_t v_isSharedCheck_1513_; 
v_ref_1466_ = lean_ctor_get(v___y_1463_, 2);
v___x_1467_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11_spec__24(v_msg_1460_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_);
v_a_1468_ = lean_ctor_get(v___x_1467_, 0);
v_isSharedCheck_1513_ = !lean_is_exclusive(v___x_1467_);
if (v_isSharedCheck_1513_ == 0)
{
v___x_1470_ = v___x_1467_;
v_isShared_1471_ = v_isSharedCheck_1513_;
goto v_resetjp_1469_;
}
else
{
lean_inc(v_a_1468_);
lean_dec(v___x_1467_);
v___x_1470_ = lean_box(0);
v_isShared_1471_ = v_isSharedCheck_1513_;
goto v_resetjp_1469_;
}
v_resetjp_1469_:
{
lean_object* v___x_1472_; lean_object* v_traceState_1473_; lean_object* v_env_1474_; lean_object* v_nextMacroScope_1475_; lean_object* v_ngen_1476_; lean_object* v_auxDeclNGen_1477_; lean_object* v_cache_1478_; lean_object* v_recordedDeps_1479_; lean_object* v_messages_1480_; lean_object* v_infoState_1481_; lean_object* v_snapshotTasks_1482_; lean_object* v___x_1484_; uint8_t v_isShared_1485_; uint8_t v_isSharedCheck_1512_; 
v___x_1472_ = lean_st_ref_take(v___y_1464_);
v_traceState_1473_ = lean_ctor_get(v___x_1472_, 4);
v_env_1474_ = lean_ctor_get(v___x_1472_, 0);
v_nextMacroScope_1475_ = lean_ctor_get(v___x_1472_, 1);
v_ngen_1476_ = lean_ctor_get(v___x_1472_, 2);
v_auxDeclNGen_1477_ = lean_ctor_get(v___x_1472_, 3);
v_cache_1478_ = lean_ctor_get(v___x_1472_, 5);
v_recordedDeps_1479_ = lean_ctor_get(v___x_1472_, 6);
v_messages_1480_ = lean_ctor_get(v___x_1472_, 7);
v_infoState_1481_ = lean_ctor_get(v___x_1472_, 8);
v_snapshotTasks_1482_ = lean_ctor_get(v___x_1472_, 9);
v_isSharedCheck_1512_ = !lean_is_exclusive(v___x_1472_);
if (v_isSharedCheck_1512_ == 0)
{
v___x_1484_ = v___x_1472_;
v_isShared_1485_ = v_isSharedCheck_1512_;
goto v_resetjp_1483_;
}
else
{
lean_inc(v_snapshotTasks_1482_);
lean_inc(v_infoState_1481_);
lean_inc(v_messages_1480_);
lean_inc(v_recordedDeps_1479_);
lean_inc(v_cache_1478_);
lean_inc(v_traceState_1473_);
lean_inc(v_auxDeclNGen_1477_);
lean_inc(v_ngen_1476_);
lean_inc(v_nextMacroScope_1475_);
lean_inc(v_env_1474_);
lean_dec(v___x_1472_);
v___x_1484_ = lean_box(0);
v_isShared_1485_ = v_isSharedCheck_1512_;
goto v_resetjp_1483_;
}
v_resetjp_1483_:
{
uint64_t v_tid_1486_; lean_object* v_traces_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1511_; 
v_tid_1486_ = lean_ctor_get_uint64(v_traceState_1473_, sizeof(void*)*1);
v_traces_1487_ = lean_ctor_get(v_traceState_1473_, 0);
v_isSharedCheck_1511_ = !lean_is_exclusive(v_traceState_1473_);
if (v_isSharedCheck_1511_ == 0)
{
v___x_1489_ = v_traceState_1473_;
v_isShared_1490_ = v_isSharedCheck_1511_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_traces_1487_);
lean_dec(v_traceState_1473_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1511_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
lean_object* v___x_1491_; lean_object* v___x_1492_; double v___x_1493_; uint8_t v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1502_; 
v___x_1491_ = lean_box(0);
v___x_1492_ = lean_box(0);
v___x_1493_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__0);
v___x_1494_ = 0;
v___x_1495_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__1));
v___x_1496_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1496_, 0, v_cls_1459_);
lean_ctor_set(v___x_1496_, 1, v___x_1492_);
lean_ctor_set(v___x_1496_, 2, v___x_1495_);
lean_ctor_set_float(v___x_1496_, sizeof(void*)*3, v___x_1493_);
lean_ctor_set_float(v___x_1496_, sizeof(void*)*3 + 8, v___x_1493_);
lean_ctor_set_uint8(v___x_1496_, sizeof(void*)*3 + 16, v___x_1494_);
v___x_1497_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___closed__2));
v___x_1498_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1498_, 0, v___x_1496_);
lean_ctor_set(v___x_1498_, 1, v_a_1468_);
lean_ctor_set(v___x_1498_, 2, v___x_1497_);
lean_inc(v_ref_1466_);
v___x_1499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1499_, 0, v_ref_1466_);
lean_ctor_set(v___x_1499_, 1, v___x_1498_);
v___x_1500_ = l_Lean_PersistentArray_push___redArg(v_traces_1487_, v___x_1499_);
if (v_isShared_1490_ == 0)
{
lean_ctor_set(v___x_1489_, 0, v___x_1500_);
v___x_1502_ = v___x_1489_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1510_; 
v_reuseFailAlloc_1510_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1510_, 0, v___x_1500_);
lean_ctor_set_uint64(v_reuseFailAlloc_1510_, sizeof(void*)*1, v_tid_1486_);
v___x_1502_ = v_reuseFailAlloc_1510_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
lean_object* v___x_1504_; 
if (v_isShared_1485_ == 0)
{
lean_ctor_set(v___x_1484_, 4, v___x_1502_);
v___x_1504_ = v___x_1484_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v_env_1474_);
lean_ctor_set(v_reuseFailAlloc_1509_, 1, v_nextMacroScope_1475_);
lean_ctor_set(v_reuseFailAlloc_1509_, 2, v_ngen_1476_);
lean_ctor_set(v_reuseFailAlloc_1509_, 3, v_auxDeclNGen_1477_);
lean_ctor_set(v_reuseFailAlloc_1509_, 4, v___x_1502_);
lean_ctor_set(v_reuseFailAlloc_1509_, 5, v_cache_1478_);
lean_ctor_set(v_reuseFailAlloc_1509_, 6, v_recordedDeps_1479_);
lean_ctor_set(v_reuseFailAlloc_1509_, 7, v_messages_1480_);
lean_ctor_set(v_reuseFailAlloc_1509_, 8, v_infoState_1481_);
lean_ctor_set(v_reuseFailAlloc_1509_, 9, v_snapshotTasks_1482_);
v___x_1504_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1503_;
}
v_reusejp_1503_:
{
lean_object* v___x_1505_; lean_object* v___x_1507_; 
v___x_1505_ = lean_st_ref_put(v___y_1464_, v___x_1504_);
if (v_isShared_1471_ == 0)
{
lean_ctor_set(v___x_1470_, 0, v___x_1491_);
v___x_1507_ = v___x_1470_;
goto v_reusejp_1506_;
}
else
{
lean_object* v_reuseFailAlloc_1508_; 
v_reuseFailAlloc_1508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1508_, 0, v___x_1491_);
v___x_1507_ = v_reuseFailAlloc_1508_;
goto v_reusejp_1506_;
}
v_reusejp_1506_:
{
return v___x_1507_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg___boxed(lean_object* v_cls_1514_, lean_object* v_msg_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_){
_start:
{
lean_object* v_res_1521_; 
v_res_1521_ = l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg(v_cls_1514_, v_msg_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_);
lean_dec(v___y_1519_);
lean_dec_ref(v___y_1518_);
lean_dec(v___y_1517_);
lean_dec_ref(v___y_1516_);
return v_res_1521_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__11___redArg(lean_object* v_a_1522_, lean_object* v_x_1523_){
_start:
{
if (lean_obj_tag(v_x_1523_) == 0)
{
lean_object* v___x_1524_; 
v___x_1524_ = lean_box(0);
return v___x_1524_;
}
else
{
lean_object* v_key_1525_; lean_object* v_value_1526_; lean_object* v_tail_1527_; uint8_t v___x_1528_; 
v_key_1525_ = lean_ctor_get(v_x_1523_, 0);
v_value_1526_ = lean_ctor_get(v_x_1523_, 1);
v_tail_1527_ = lean_ctor_get(v_x_1523_, 2);
v___x_1528_ = lean_expr_eqv(v_key_1525_, v_a_1522_);
if (v___x_1528_ == 0)
{
v_x_1523_ = v_tail_1527_;
goto _start;
}
else
{
lean_object* v___x_1530_; 
lean_inc(v_value_1526_);
v___x_1530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1530_, 0, v_value_1526_);
return v___x_1530_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__11___redArg___boxed(lean_object* v_a_1531_, lean_object* v_x_1532_){
_start:
{
lean_object* v_res_1533_; 
v_res_1533_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__11___redArg(v_a_1531_, v_x_1532_);
lean_dec(v_x_1532_);
lean_dec_ref(v_a_1531_);
return v_res_1533_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(lean_object* v_m_1534_, lean_object* v_a_1535_){
_start:
{
lean_object* v_buckets_1536_; lean_object* v___x_1537_; uint64_t v___x_1538_; uint64_t v___x_1539_; uint64_t v___x_1540_; uint64_t v_fold_1541_; uint64_t v___x_1542_; uint64_t v___x_1543_; uint64_t v___x_1544_; size_t v___x_1545_; size_t v___x_1546_; size_t v___x_1547_; size_t v___x_1548_; size_t v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; 
v_buckets_1536_ = lean_ctor_get(v_m_1534_, 1);
v___x_1537_ = lean_array_get_size(v_buckets_1536_);
v___x_1538_ = l_Lean_Expr_hash(v_a_1535_);
v___x_1539_ = 32ULL;
v___x_1540_ = lean_uint64_shift_right(v___x_1538_, v___x_1539_);
v_fold_1541_ = lean_uint64_xor(v___x_1538_, v___x_1540_);
v___x_1542_ = 16ULL;
v___x_1543_ = lean_uint64_shift_right(v_fold_1541_, v___x_1542_);
v___x_1544_ = lean_uint64_xor(v_fold_1541_, v___x_1543_);
v___x_1545_ = lean_uint64_to_usize(v___x_1544_);
v___x_1546_ = lean_usize_of_nat(v___x_1537_);
v___x_1547_ = ((size_t)1ULL);
v___x_1548_ = lean_usize_sub(v___x_1546_, v___x_1547_);
v___x_1549_ = lean_usize_land(v___x_1545_, v___x_1548_);
v___x_1550_ = lean_array_uget_borrowed(v_buckets_1536_, v___x_1549_);
v___x_1551_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__11___redArg(v_a_1535_, v___x_1550_);
return v___x_1551_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg___boxed(lean_object* v_m_1552_, lean_object* v_a_1553_){
_start:
{
lean_object* v_res_1554_; 
v_res_1554_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_m_1552_, v_a_1553_);
lean_dec_ref(v_a_1553_);
lean_dec_ref(v_m_1552_);
return v_res_1554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__27___redArg(lean_object* v_name_1555_, lean_object* v_type_1556_, lean_object* v_val_1557_, lean_object* v_k_1558_, uint8_t v_nondep_1559_, uint8_t v_kind_1560_, uint8_t v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_){
_start:
{
lean_object* v___x_1569_; lean_object* v___f_1570_; lean_object* v___x_1571_; 
v___x_1569_ = lean_box(v___y_1561_);
lean_inc(v___y_1563_);
lean_inc_ref(v___y_1562_);
v___f_1570_ = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__27___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1570_, 0, v_k_1558_);
lean_closure_set(v___f_1570_, 1, v___x_1569_);
lean_closure_set(v___f_1570_, 2, v___y_1562_);
lean_closure_set(v___f_1570_, 3, v___y_1563_);
v___x_1571_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1555_, v_type_1556_, v_val_1557_, v___f_1570_, v_nondep_1559_, v_kind_1560_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_);
if (lean_obj_tag(v___x_1571_) == 0)
{
return v___x_1571_;
}
else
{
lean_object* v_a_1572_; lean_object* v___x_1574_; uint8_t v_isShared_1575_; uint8_t v_isSharedCheck_1579_; 
v_a_1572_ = lean_ctor_get(v___x_1571_, 0);
v_isSharedCheck_1579_ = !lean_is_exclusive(v___x_1571_);
if (v_isSharedCheck_1579_ == 0)
{
v___x_1574_ = v___x_1571_;
v_isShared_1575_ = v_isSharedCheck_1579_;
goto v_resetjp_1573_;
}
else
{
lean_inc(v_a_1572_);
lean_dec(v___x_1571_);
v___x_1574_ = lean_box(0);
v_isShared_1575_ = v_isSharedCheck_1579_;
goto v_resetjp_1573_;
}
v_resetjp_1573_:
{
lean_object* v___x_1577_; 
if (v_isShared_1575_ == 0)
{
v___x_1577_ = v___x_1574_;
goto v_reusejp_1576_;
}
else
{
lean_object* v_reuseFailAlloc_1578_; 
v_reuseFailAlloc_1578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1578_, 0, v_a_1572_);
v___x_1577_ = v_reuseFailAlloc_1578_;
goto v_reusejp_1576_;
}
v_reusejp_1576_:
{
return v___x_1577_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__27___redArg___boxed(lean_object* v_name_1580_, lean_object* v_type_1581_, lean_object* v_val_1582_, lean_object* v_k_1583_, lean_object* v_nondep_1584_, lean_object* v_kind_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_){
_start:
{
uint8_t v_nondep_boxed_1594_; uint8_t v_kind_boxed_1595_; uint8_t v___y_72596__boxed_1596_; lean_object* v_res_1597_; 
v_nondep_boxed_1594_ = lean_unbox(v_nondep_1584_);
v_kind_boxed_1595_ = lean_unbox(v_kind_1585_);
v___y_72596__boxed_1596_ = lean_unbox(v___y_1586_);
v_res_1597_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__27___redArg(v_name_1580_, v_type_1581_, v_val_1582_, v_k_1583_, v_nondep_boxed_1594_, v_kind_boxed_1595_, v___y_72596__boxed_1596_, v___y_1587_, v___y_1588_, v___y_1589_, v___y_1590_, v___y_1591_, v___y_1592_);
lean_dec(v___y_1592_);
lean_dec_ref(v___y_1591_);
lean_dec(v___y_1590_);
lean_dec_ref(v___y_1589_);
lean_dec(v___y_1588_);
lean_dec_ref(v___y_1587_);
return v_res_1597_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj_spec__4(lean_object* v_msg_1598_){
_start:
{
lean_object* v___x_1599_; lean_object* v___x_1600_; 
v___x_1599_ = l_Lean_instInhabitedExpr;
v___x_1600_ = lean_panic_fn_borrowed(v___x_1599_, v_msg_1598_);
return v___x_1600_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall___lam__0___boxed(lean_object* v_fvars_1601_, lean_object* v_body_1602_, lean_object* v_x_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_){
_start:
{
uint8_t v___y_72783__boxed_1612_; lean_object* v_res_1613_; 
v___y_72783__boxed_1612_ = lean_unbox(v___y_1604_);
v_res_1613_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall___lam__0(v_fvars_1601_, v_body_1602_, v_x_1603_, v___y_72783__boxed_1612_, v___y_1605_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_);
lean_dec(v___y_1610_);
lean_dec_ref(v___y_1609_);
lean_dec(v___y_1608_);
lean_dec_ref(v___y_1607_);
lean_dec(v___y_1606_);
lean_dec_ref(v___y_1605_);
return v_res_1613_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop___lam__0(lean_object* v_fvars_1616_, lean_object* v_body_1617_, lean_object* v_x_1618_, uint8_t v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_){
_start:
{
lean_object* v___x_1627_; lean_object* v___x_1628_; 
v___x_1627_ = lean_array_push(v_fvars_1616_, v_x_1618_);
v___x_1628_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop(v___x_1627_, v_body_1617_, v___y_1619_, v___y_1620_, v___y_1621_, v___y_1622_, v___y_1623_, v___y_1624_, v___y_1625_);
return v___x_1628_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop___lam__0___boxed(lean_object* v_fvars_1629_, lean_object* v_body_1630_, lean_object* v_x_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_){
_start:
{
uint8_t v___y_72794__boxed_1640_; lean_object* v_res_1641_; 
v___y_72794__boxed_1640_ = lean_unbox(v___y_1632_);
v_res_1641_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop___lam__0(v_fvars_1629_, v_body_1630_, v_x_1631_, v___y_72794__boxed_1640_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_);
lean_dec(v___y_1638_);
lean_dec_ref(v___y_1637_);
lean_dec(v___y_1636_);
lean_dec_ref(v___y_1635_);
lean_dec(v___y_1634_);
lean_dec_ref(v___y_1633_);
return v_res_1641_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop(lean_object* v_fvars_1642_, lean_object* v_e_1643_, uint8_t v_a_1644_, lean_object* v_a_1645_, lean_object* v_a_1646_, lean_object* v_a_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_){
_start:
{
if (lean_obj_tag(v_e_1643_) == 6)
{
lean_object* v_binderName_1652_; lean_object* v_binderType_1653_; lean_object* v_body_1654_; uint8_t v_binderInfo_1655_; lean_object* v___f_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; 
v_binderName_1652_ = lean_ctor_get(v_e_1643_, 0);
lean_inc(v_binderName_1652_);
v_binderType_1653_ = lean_ctor_get(v_e_1643_, 1);
lean_inc_ref(v_binderType_1653_);
v_body_1654_ = lean_ctor_get(v_e_1643_, 2);
lean_inc_ref(v_body_1654_);
v_binderInfo_1655_ = lean_ctor_get_uint8(v_e_1643_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_1643_, 3);
lean_inc_ref(v_fvars_1642_);
v___f_1656_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop___lam__0___boxed), 11, 2);
lean_closure_set(v___f_1656_, 0, v_fvars_1642_);
lean_closure_set(v___f_1656_, 1, v_body_1654_);
v___x_1657_ = lean_expr_instantiate_rev(v_binderType_1653_, v_fvars_1642_);
lean_dec_ref(v_fvars_1642_);
lean_dec_ref(v_binderType_1653_);
v___x_1658_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType(v___x_1657_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_, v_a_1649_, v_a_1650_);
if (lean_obj_tag(v___x_1658_) == 0)
{
lean_object* v_a_1659_; uint8_t v___x_1660_; lean_object* v___x_1661_; 
v_a_1659_ = lean_ctor_get(v___x_1658_, 0);
lean_inc(v_a_1659_);
lean_dec_ref_known(v___x_1658_, 1);
v___x_1660_ = 0;
v___x_1661_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__30___redArg(v_binderName_1652_, v_binderInfo_1655_, v_a_1659_, v___f_1656_, v___x_1660_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_, v_a_1649_, v_a_1650_);
return v___x_1661_;
}
else
{
lean_dec_ref(v___f_1656_);
lean_dec(v_binderName_1652_);
return v___x_1658_;
}
}
else
{
lean_object* v___x_1662_; lean_object* v___x_1663_; 
v___x_1662_ = lean_expr_instantiate_rev(v_e_1643_, v_fvars_1642_);
lean_dec_ref(v_e_1643_);
v___x_1663_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v___x_1662_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_, v_a_1649_, v_a_1650_);
if (lean_obj_tag(v___x_1663_) == 0)
{
lean_object* v_a_1664_; uint8_t v___x_1665_; uint8_t v___x_1666_; uint8_t v___x_1667_; lean_object* v___x_1668_; 
v_a_1664_ = lean_ctor_get(v___x_1663_, 0);
lean_inc(v_a_1664_);
lean_dec_ref_known(v___x_1663_, 1);
v___x_1665_ = 0;
v___x_1666_ = 1;
v___x_1667_ = 1;
v___x_1668_ = l_Lean_Meta_mkLambdaFVars(v_fvars_1642_, v_a_1664_, v___x_1665_, v___x_1666_, v___x_1665_, v___x_1666_, v___x_1667_, v_a_1647_, v_a_1648_, v_a_1649_, v_a_1650_);
lean_dec_ref(v_fvars_1642_);
return v___x_1668_;
}
else
{
lean_dec_ref(v_fvars_1642_);
return v___x_1663_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda(lean_object* v_e_1669_, uint8_t v_a_1670_, lean_object* v_a_1671_, lean_object* v_a_1672_, lean_object* v_a_1673_, lean_object* v_a_1674_, lean_object* v_a_1675_, lean_object* v_a_1676_){
_start:
{
if (v_a_1670_ == 0)
{
lean_object* v___x_1678_; lean_object* v___x_1679_; 
v___x_1678_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda___closed__0));
v___x_1679_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop(v___x_1678_, v_e_1669_, v_a_1670_, v_a_1671_, v_a_1672_, v_a_1673_, v_a_1674_, v_a_1675_, v_a_1676_);
return v___x_1679_;
}
else
{
lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; 
v___x_1680_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda___closed__0));
v___x_1681_ = l_Lean_Meta_Sym_etaReduce(v_e_1669_);
lean_dec_ref(v_e_1669_);
v___x_1682_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop(v___x_1680_, v___x_1681_, v_a_1670_, v_a_1671_, v_a_1672_, v_a_1673_, v_a_1674_, v_a_1675_, v_a_1676_);
return v___x_1682_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet___lam__0(lean_object* v_fvars_1683_, lean_object* v_body_1684_, lean_object* v_x_1685_, uint8_t v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_){
_start:
{
lean_object* v___x_1694_; lean_object* v___x_1695_; 
v___x_1694_ = lean_array_push(v_fvars_1683_, v_x_1685_);
v___x_1695_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet(v___x_1694_, v_body_1684_, v___y_1686_, v___y_1687_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_, v___y_1692_);
return v___x_1695_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet___lam__0___boxed(lean_object* v_fvars_1696_, lean_object* v_body_1697_, lean_object* v_x_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_){
_start:
{
uint8_t v___y_72805__boxed_1707_; lean_object* v_res_1708_; 
v___y_72805__boxed_1707_ = lean_unbox(v___y_1699_);
v_res_1708_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet___lam__0(v_fvars_1696_, v_body_1697_, v_x_1698_, v___y_72805__boxed_1707_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_, v___y_1705_);
lean_dec(v___y_1705_);
lean_dec_ref(v___y_1704_);
lean_dec(v___y_1703_);
lean_dec_ref(v___y_1702_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
return v_res_1708_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet(lean_object* v_fvars_1709_, lean_object* v_e_1710_, uint8_t v_a_1711_, lean_object* v_a_1712_, lean_object* v_a_1713_, lean_object* v_a_1714_, lean_object* v_a_1715_, lean_object* v_a_1716_, lean_object* v_a_1717_){
_start:
{
if (lean_obj_tag(v_e_1710_) == 8)
{
lean_object* v_declName_1719_; lean_object* v_type_1720_; lean_object* v_value_1721_; lean_object* v_body_1722_; uint8_t v_nondep_1723_; lean_object* v___f_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; 
v_declName_1719_ = lean_ctor_get(v_e_1710_, 0);
lean_inc(v_declName_1719_);
v_type_1720_ = lean_ctor_get(v_e_1710_, 1);
lean_inc_ref(v_type_1720_);
v_value_1721_ = lean_ctor_get(v_e_1710_, 2);
lean_inc_ref(v_value_1721_);
v_body_1722_ = lean_ctor_get(v_e_1710_, 3);
lean_inc_ref(v_body_1722_);
v_nondep_1723_ = lean_ctor_get_uint8(v_e_1710_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_1710_, 4);
lean_inc_ref(v_fvars_1709_);
v___f_1724_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet___lam__0___boxed), 11, 2);
lean_closure_set(v___f_1724_, 0, v_fvars_1709_);
lean_closure_set(v___f_1724_, 1, v_body_1722_);
v___x_1725_ = lean_expr_instantiate_rev(v_type_1720_, v_fvars_1709_);
lean_dec_ref(v_type_1720_);
v___x_1726_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType(v___x_1725_, v_a_1711_, v_a_1712_, v_a_1713_, v_a_1714_, v_a_1715_, v_a_1716_, v_a_1717_);
if (lean_obj_tag(v___x_1726_) == 0)
{
lean_object* v_a_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; 
v_a_1727_ = lean_ctor_get(v___x_1726_, 0);
lean_inc(v_a_1727_);
lean_dec_ref_known(v___x_1726_, 1);
v___x_1728_ = lean_expr_instantiate_rev(v_value_1721_, v_fvars_1709_);
lean_dec_ref(v_fvars_1709_);
lean_dec_ref(v_value_1721_);
v___x_1729_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v___x_1728_, v_a_1711_, v_a_1712_, v_a_1713_, v_a_1714_, v_a_1715_, v_a_1716_, v_a_1717_);
if (lean_obj_tag(v___x_1729_) == 0)
{
lean_object* v_a_1730_; uint8_t v___x_1731_; lean_object* v___x_1732_; 
v_a_1730_ = lean_ctor_get(v___x_1729_, 0);
lean_inc(v_a_1730_);
lean_dec_ref_known(v___x_1729_, 1);
v___x_1731_ = 0;
v___x_1732_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__27___redArg(v_declName_1719_, v_a_1727_, v_a_1730_, v___f_1724_, v_nondep_1723_, v___x_1731_, v_a_1711_, v_a_1712_, v_a_1713_, v_a_1714_, v_a_1715_, v_a_1716_, v_a_1717_);
return v___x_1732_;
}
else
{
lean_dec(v_a_1727_);
lean_dec_ref(v___f_1724_);
lean_dec(v_declName_1719_);
return v___x_1729_;
}
}
else
{
lean_dec_ref(v___f_1724_);
lean_dec_ref(v_value_1721_);
lean_dec(v_declName_1719_);
lean_dec_ref(v_fvars_1709_);
return v___x_1726_;
}
}
else
{
lean_object* v___x_1733_; lean_object* v___x_1734_; 
v___x_1733_ = lean_expr_instantiate_rev(v_e_1710_, v_fvars_1709_);
lean_dec_ref(v_e_1710_);
v___x_1734_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v___x_1733_, v_a_1711_, v_a_1712_, v_a_1713_, v_a_1714_, v_a_1715_, v_a_1716_, v_a_1717_);
if (lean_obj_tag(v___x_1734_) == 0)
{
lean_object* v_a_1735_; uint8_t v___x_1736_; uint8_t v___x_1737_; uint8_t v___x_1738_; lean_object* v___x_1739_; 
v_a_1735_ = lean_ctor_get(v___x_1734_, 0);
lean_inc(v_a_1735_);
lean_dec_ref_known(v___x_1734_, 1);
v___x_1736_ = 1;
v___x_1737_ = 0;
v___x_1738_ = 1;
v___x_1739_ = l_Lean_Meta_mkLetFVars(v_fvars_1709_, v_a_1735_, v___x_1736_, v___x_1737_, v___x_1738_, v_a_1714_, v_a_1715_, v_a_1716_, v_a_1717_);
lean_dec_ref(v_fvars_1709_);
return v___x_1739_;
}
else
{
lean_dec_ref(v_fvars_1709_);
return v___x_1734_;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___closed__1(void){
_start:
{
lean_object* v___x_1743_; lean_object* v___x_1744_; 
v___x_1743_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___closed__0));
v___x_1744_ = l_Lean_stringToMessageData(v___x_1743_);
return v___x_1744_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore(lean_object* v_e_1745_, lean_object* v_type_1746_, uint8_t v_report_1747_, uint8_t v_a_1748_, lean_object* v_a_1749_, lean_object* v_a_1750_, lean_object* v_a_1751_, lean_object* v_a_1752_, lean_object* v_a_1753_, lean_object* v_a_1754_){
_start:
{
lean_object* v___y_1757_; lean_object* v___y_1758_; lean_object* v___y_1759_; lean_object* v___y_1760_; lean_object* v___y_1761_; lean_object* v___y_1762_; lean_object* v___x_1806_; 
lean_inc_ref(v_type_1746_);
v___x_1806_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_type_1746_, v_a_1750_, v_a_1751_, v_a_1752_, v_a_1753_, v_a_1754_);
if (lean_obj_tag(v___x_1806_) == 0)
{
lean_object* v_a_1807_; 
v_a_1807_ = lean_ctor_get(v___x_1806_, 0);
lean_inc(v_a_1807_);
lean_dec_ref_known(v___x_1806_, 1);
if (lean_obj_tag(v_a_1807_) == 1)
{
lean_object* v_val_1808_; lean_object* v___x_1809_; 
lean_dec_ref(v_type_1746_);
v_val_1808_ = lean_ctor_get(v_a_1807_, 0);
lean_inc(v_val_1808_);
lean_dec_ref_known(v_a_1807_, 1);
v___x_1809_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst(v_e_1745_, v_val_1808_, v_a_1749_, v_a_1750_, v_a_1751_, v_a_1752_, v_a_1753_, v_a_1754_);
return v___x_1809_;
}
else
{
lean_object* v___x_1810_; 
lean_dec(v_a_1807_);
v___x_1810_ = l_Lean_Expr_getAppFn(v_e_1745_);
if (lean_obj_tag(v___x_1810_) == 4)
{
lean_object* v_declName_1811_; lean_object* v___x_1812_; 
v_declName_1811_ = lean_ctor_get(v___x_1810_, 0);
lean_inc(v_declName_1811_);
lean_dec_ref_known(v___x_1810_, 2);
v___x_1812_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9___redArg(v_declName_1811_, v_a_1754_);
if (lean_obj_tag(v___x_1812_) == 0)
{
lean_object* v_a_1813_; 
v_a_1813_ = lean_ctor_get(v___x_1812_, 0);
lean_inc(v_a_1813_);
lean_dec_ref_known(v___x_1812_, 1);
if (lean_obj_tag(v_a_1813_) == 1)
{
lean_object* v_val_1814_; uint8_t v___x_1815_; 
v_val_1814_ = lean_ctor_get(v_a_1813_, 0);
lean_inc(v_val_1814_);
lean_dec_ref_known(v_a_1813_, 1);
v___x_1815_ = l_Lean_Expr_isApp(v_e_1745_);
if (v___x_1815_ == 0)
{
lean_dec(v_val_1814_);
v___y_1757_ = v_a_1749_;
v___y_1758_ = v_a_1750_;
v___y_1759_ = v_a_1751_;
v___y_1760_ = v_a_1752_;
v___y_1761_ = v_a_1753_;
v___y_1762_ = v_a_1754_;
goto v___jp_1756_;
}
else
{
uint8_t v_fromClass_1816_; 
v_fromClass_1816_ = lean_ctor_get_uint8(v_val_1814_, sizeof(void*)*3);
lean_dec(v_val_1814_);
if (v_fromClass_1816_ == 0)
{
v___y_1757_ = v_a_1749_;
v___y_1758_ = v_a_1750_;
v___y_1759_ = v_a_1751_;
v___y_1760_ = v_a_1752_;
v___y_1761_ = v_a_1753_;
v___y_1762_ = v_a_1754_;
goto v___jp_1756_;
}
else
{
lean_object* v___x_1817_; 
lean_dec_ref(v_type_1746_);
v___x_1817_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault(v_e_1745_, v_a_1748_, v_a_1749_, v_a_1750_, v_a_1751_, v_a_1752_, v_a_1753_, v_a_1754_);
return v___x_1817_;
}
}
}
else
{
lean_dec(v_a_1813_);
v___y_1757_ = v_a_1749_;
v___y_1758_ = v_a_1750_;
v___y_1759_ = v_a_1751_;
v___y_1760_ = v_a_1752_;
v___y_1761_ = v_a_1753_;
v___y_1762_ = v_a_1754_;
goto v___jp_1756_;
}
}
else
{
lean_object* v_a_1818_; lean_object* v___x_1820_; uint8_t v_isShared_1821_; uint8_t v_isSharedCheck_1825_; 
lean_dec_ref(v_type_1746_);
lean_dec_ref(v_e_1745_);
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
else
{
lean_dec_ref(v___x_1810_);
v___y_1757_ = v_a_1749_;
v___y_1758_ = v_a_1750_;
v___y_1759_ = v_a_1751_;
v___y_1760_ = v_a_1752_;
v___y_1761_ = v_a_1753_;
v___y_1762_ = v_a_1754_;
goto v___jp_1756_;
}
}
}
else
{
lean_object* v_a_1826_; lean_object* v___x_1828_; uint8_t v_isShared_1829_; uint8_t v_isSharedCheck_1833_; 
lean_dec_ref(v_type_1746_);
lean_dec_ref(v_e_1745_);
v_a_1826_ = lean_ctor_get(v___x_1806_, 0);
v_isSharedCheck_1833_ = !lean_is_exclusive(v___x_1806_);
if (v_isSharedCheck_1833_ == 0)
{
v___x_1828_ = v___x_1806_;
v_isShared_1829_ = v_isSharedCheck_1833_;
goto v_resetjp_1827_;
}
else
{
lean_inc(v_a_1826_);
lean_dec(v___x_1806_);
v___x_1828_ = lean_box(0);
v_isShared_1829_ = v_isSharedCheck_1833_;
goto v_resetjp_1827_;
}
v_resetjp_1827_:
{
lean_object* v___x_1831_; 
if (v_isShared_1829_ == 0)
{
v___x_1831_ = v___x_1828_;
goto v_reusejp_1830_;
}
else
{
lean_object* v_reuseFailAlloc_1832_; 
v_reuseFailAlloc_1832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1832_, 0, v_a_1826_);
v___x_1831_ = v_reuseFailAlloc_1832_;
goto v_reusejp_1830_;
}
v_reusejp_1830_:
{
return v___x_1831_;
}
}
}
v___jp_1756_:
{
if (v_report_1747_ == 0)
{
lean_object* v___x_1763_; 
lean_dec_ref(v_type_1746_);
v___x_1763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1763_, 0, v_e_1745_);
return v___x_1763_;
}
else
{
lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; 
v___x_1764_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__1, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__1_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst___closed__1);
lean_inc_ref(v_e_1745_);
v___x_1765_ = l_Lean_indentExpr(v_e_1745_);
v___x_1766_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1766_, 0, v___x_1764_);
lean_ctor_set(v___x_1766_, 1, v___x_1765_);
v___x_1767_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___closed__1, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___closed__1_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___closed__1);
v___x_1768_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1768_, 0, v___x_1766_);
lean_ctor_set(v___x_1768_, 1, v___x_1767_);
v___x_1769_ = l_Lean_indentExpr(v_type_1746_);
v___x_1770_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1770_, 0, v___x_1768_);
lean_ctor_set(v___x_1770_, 1, v___x_1769_);
v___x_1771_ = l_Lean_Meta_Sym_getConfig___redArg(v___y_1757_);
if (lean_obj_tag(v___x_1771_) == 0)
{
lean_object* v_a_1772_; lean_object* v___x_1774_; uint8_t v_isShared_1775_; uint8_t v_isSharedCheck_1797_; 
v_a_1772_ = lean_ctor_get(v___x_1771_, 0);
v_isSharedCheck_1797_ = !lean_is_exclusive(v___x_1771_);
if (v_isSharedCheck_1797_ == 0)
{
v___x_1774_ = v___x_1771_;
v_isShared_1775_ = v_isSharedCheck_1797_;
goto v_resetjp_1773_;
}
else
{
lean_inc(v_a_1772_);
lean_dec(v___x_1771_);
v___x_1774_ = lean_box(0);
v_isShared_1775_ = v_isSharedCheck_1797_;
goto v_resetjp_1773_;
}
v_resetjp_1773_:
{
uint8_t v_verbose_1776_; 
v_verbose_1776_ = lean_ctor_get_uint8(v_a_1772_, 0);
lean_dec(v_a_1772_);
if (v_verbose_1776_ == 0)
{
lean_object* v___x_1778_; 
lean_dec_ref_known(v___x_1770_, 2);
if (v_isShared_1775_ == 0)
{
lean_ctor_set(v___x_1774_, 0, v_e_1745_);
v___x_1778_ = v___x_1774_;
goto v_reusejp_1777_;
}
else
{
lean_object* v_reuseFailAlloc_1779_; 
v_reuseFailAlloc_1779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1779_, 0, v_e_1745_);
v___x_1778_ = v_reuseFailAlloc_1779_;
goto v_reusejp_1777_;
}
v_reusejp_1777_:
{
return v___x_1778_;
}
}
else
{
lean_object* v___x_1780_; 
lean_del_object(v___x_1774_);
v___x_1780_ = l_Lean_Meta_Sym_reportIssue(v___x_1770_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_, v___y_1761_, v___y_1762_);
if (lean_obj_tag(v___x_1780_) == 0)
{
lean_object* v___x_1782_; uint8_t v_isShared_1783_; uint8_t v_isSharedCheck_1787_; 
v_isSharedCheck_1787_ = !lean_is_exclusive(v___x_1780_);
if (v_isSharedCheck_1787_ == 0)
{
lean_object* v_unused_1788_; 
v_unused_1788_ = lean_ctor_get(v___x_1780_, 0);
lean_dec(v_unused_1788_);
v___x_1782_ = v___x_1780_;
v_isShared_1783_ = v_isSharedCheck_1787_;
goto v_resetjp_1781_;
}
else
{
lean_dec(v___x_1780_);
v___x_1782_ = lean_box(0);
v_isShared_1783_ = v_isSharedCheck_1787_;
goto v_resetjp_1781_;
}
v_resetjp_1781_:
{
lean_object* v___x_1785_; 
if (v_isShared_1783_ == 0)
{
lean_ctor_set(v___x_1782_, 0, v_e_1745_);
v___x_1785_ = v___x_1782_;
goto v_reusejp_1784_;
}
else
{
lean_object* v_reuseFailAlloc_1786_; 
v_reuseFailAlloc_1786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1786_, 0, v_e_1745_);
v___x_1785_ = v_reuseFailAlloc_1786_;
goto v_reusejp_1784_;
}
v_reusejp_1784_:
{
return v___x_1785_;
}
}
}
else
{
lean_object* v_a_1789_; lean_object* v___x_1791_; uint8_t v_isShared_1792_; uint8_t v_isSharedCheck_1796_; 
lean_dec_ref(v_e_1745_);
v_a_1789_ = lean_ctor_get(v___x_1780_, 0);
v_isSharedCheck_1796_ = !lean_is_exclusive(v___x_1780_);
if (v_isSharedCheck_1796_ == 0)
{
v___x_1791_ = v___x_1780_;
v_isShared_1792_ = v_isSharedCheck_1796_;
goto v_resetjp_1790_;
}
else
{
lean_inc(v_a_1789_);
lean_dec(v___x_1780_);
v___x_1791_ = lean_box(0);
v_isShared_1792_ = v_isSharedCheck_1796_;
goto v_resetjp_1790_;
}
v_resetjp_1790_:
{
lean_object* v___x_1794_; 
if (v_isShared_1792_ == 0)
{
v___x_1794_ = v___x_1791_;
goto v_reusejp_1793_;
}
else
{
lean_object* v_reuseFailAlloc_1795_; 
v_reuseFailAlloc_1795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1795_, 0, v_a_1789_);
v___x_1794_ = v_reuseFailAlloc_1795_;
goto v_reusejp_1793_;
}
v_reusejp_1793_:
{
return v___x_1794_;
}
}
}
}
}
}
else
{
lean_object* v_a_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1805_; 
lean_dec_ref_known(v___x_1770_, 2);
lean_dec_ref(v_e_1745_);
v_a_1798_ = lean_ctor_get(v___x_1771_, 0);
v_isSharedCheck_1805_ = !lean_is_exclusive(v___x_1771_);
if (v_isSharedCheck_1805_ == 0)
{
v___x_1800_ = v___x_1771_;
v_isShared_1801_ = v_isSharedCheck_1805_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_a_1798_);
lean_dec(v___x_1771_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1805_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
lean_object* v___x_1803_; 
if (v_isShared_1801_ == 0)
{
v___x_1803_ = v___x_1800_;
goto v_reusejp_1802_;
}
else
{
lean_object* v_reuseFailAlloc_1804_; 
v_reuseFailAlloc_1804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1804_, 0, v_a_1798_);
v___x_1803_ = v_reuseFailAlloc_1804_;
goto v_reusejp_1802_;
}
v_reusejp_1802_:
{
return v___x_1803_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonOfNatInst(lean_object* v_ofNat_1834_, lean_object* v_00_u03b1_1835_, lean_object* v_n_1836_, lean_object* v_inst_1837_, uint8_t v_a_1838_, lean_object* v_a_1839_, lean_object* v_a_1840_, lean_object* v_a_1841_, lean_object* v_a_1842_, lean_object* v_a_1843_, lean_object* v_a_1844_){
_start:
{
lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; uint8_t v___x_1850_; lean_object* v___x_1851_; 
v___x_1846_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonOfNatInst___closed__0));
v___x_1847_ = l_Lean_Expr_constLevels_x21(v_ofNat_1834_);
v___x_1848_ = l_Lean_mkConst(v___x_1846_, v___x_1847_);
v___x_1849_ = l_Lean_mkAppB(v___x_1848_, v_00_u03b1_1835_, v_n_1836_);
v___x_1850_ = 1;
v___x_1851_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore(v_inst_1837_, v___x_1849_, v___x_1850_, v_a_1838_, v_a_1839_, v_a_1840_, v_a_1841_, v_a_1842_, v_a_1843_, v_a_1844_);
return v___x_1851_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType_x27(lean_object* v_e_1852_, uint8_t v_a_1853_, lean_object* v_a_1854_, lean_object* v_a_1855_, lean_object* v_a_1856_, lean_object* v_a_1857_, lean_object* v_a_1858_, lean_object* v_a_1859_){
_start:
{
if (v_a_1853_ == 0)
{
uint8_t v___x_1861_; lean_object* v___x_1862_; 
v___x_1861_ = 1;
v___x_1862_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_e_1852_, v___x_1861_, v_a_1854_, v_a_1855_, v_a_1856_, v_a_1857_, v_a_1858_, v_a_1859_);
return v___x_1862_;
}
else
{
lean_object* v___x_1863_; 
v___x_1863_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_e_1852_, v_a_1853_, v_a_1854_, v_a_1855_, v_a_1856_, v_a_1857_, v_a_1858_, v_a_1859_);
return v___x_1863_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst_x27(lean_object* v_e_1864_, uint8_t v_report_1865_, uint8_t v_a_1866_, lean_object* v_a_1867_, lean_object* v_a_1868_, lean_object* v_a_1869_, lean_object* v_a_1870_, lean_object* v_a_1871_, lean_object* v_a_1872_){
_start:
{
lean_object* v___x_1874_; 
lean_inc(v_a_1872_);
lean_inc_ref(v_a_1871_);
lean_inc(v_a_1870_);
lean_inc_ref(v_a_1869_);
lean_inc_ref(v_e_1864_);
v___x_1874_ = lean_infer_type(v_e_1864_, v_a_1869_, v_a_1870_, v_a_1871_, v_a_1872_);
if (lean_obj_tag(v___x_1874_) == 0)
{
lean_object* v_a_1875_; lean_object* v___x_1876_; 
v_a_1875_ = lean_ctor_get(v___x_1874_, 0);
lean_inc_n(v_a_1875_, 2);
lean_dec_ref_known(v___x_1874_, 1);
v___x_1876_ = l_Lean_Meta_isProp(v_a_1875_, v_a_1869_, v_a_1870_, v_a_1871_, v_a_1872_);
if (lean_obj_tag(v___x_1876_) == 0)
{
lean_object* v_a_1877_; lean_object* v___x_1879_; uint8_t v_isShared_1880_; uint8_t v_isSharedCheck_1889_; 
v_a_1877_ = lean_ctor_get(v___x_1876_, 0);
v_isSharedCheck_1889_ = !lean_is_exclusive(v___x_1876_);
if (v_isSharedCheck_1889_ == 0)
{
v___x_1879_ = v___x_1876_;
v_isShared_1880_ = v_isSharedCheck_1889_;
goto v_resetjp_1878_;
}
else
{
lean_inc(v_a_1877_);
lean_dec(v___x_1876_);
v___x_1879_ = lean_box(0);
v_isShared_1880_ = v_isSharedCheck_1889_;
goto v_resetjp_1878_;
}
v_resetjp_1878_:
{
if (v_a_1866_ == 0)
{
uint8_t v___x_1885_; 
v___x_1885_ = lean_unbox(v_a_1877_);
lean_dec(v_a_1877_);
if (v___x_1885_ == 0)
{
lean_del_object(v___x_1879_);
goto v___jp_1881_;
}
else
{
lean_object* v___x_1887_; 
lean_dec(v_a_1875_);
if (v_isShared_1880_ == 0)
{
lean_ctor_set(v___x_1879_, 0, v_e_1864_);
v___x_1887_ = v___x_1879_;
goto v_reusejp_1886_;
}
else
{
lean_object* v_reuseFailAlloc_1888_; 
v_reuseFailAlloc_1888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1888_, 0, v_e_1864_);
v___x_1887_ = v_reuseFailAlloc_1888_;
goto v_reusejp_1886_;
}
v_reusejp_1886_:
{
return v___x_1887_;
}
}
}
else
{
lean_del_object(v___x_1879_);
lean_dec(v_a_1877_);
goto v___jp_1881_;
}
v___jp_1881_:
{
lean_object* v___x_1882_; 
v___x_1882_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType_x27(v_a_1875_, v_a_1866_, v_a_1867_, v_a_1868_, v_a_1869_, v_a_1870_, v_a_1871_, v_a_1872_);
if (lean_obj_tag(v___x_1882_) == 0)
{
lean_object* v_a_1883_; lean_object* v___x_1884_; 
v_a_1883_ = lean_ctor_get(v___x_1882_, 0);
lean_inc(v_a_1883_);
lean_dec_ref_known(v___x_1882_, 1);
v___x_1884_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore(v_e_1864_, v_a_1883_, v_report_1865_, v_a_1866_, v_a_1867_, v_a_1868_, v_a_1869_, v_a_1870_, v_a_1871_, v_a_1872_);
return v___x_1884_;
}
else
{
lean_dec_ref(v_e_1864_);
return v___x_1882_;
}
}
}
}
else
{
lean_object* v_a_1890_; lean_object* v___x_1892_; uint8_t v_isShared_1893_; uint8_t v_isSharedCheck_1897_; 
lean_dec(v_a_1875_);
lean_dec_ref(v_e_1864_);
v_a_1890_ = lean_ctor_get(v___x_1876_, 0);
v_isSharedCheck_1897_ = !lean_is_exclusive(v___x_1876_);
if (v_isSharedCheck_1897_ == 0)
{
v___x_1892_ = v___x_1876_;
v_isShared_1893_ = v_isSharedCheck_1897_;
goto v_resetjp_1891_;
}
else
{
lean_inc(v_a_1890_);
lean_dec(v___x_1876_);
v___x_1892_ = lean_box(0);
v_isShared_1893_ = v_isSharedCheck_1897_;
goto v_resetjp_1891_;
}
v_resetjp_1891_:
{
lean_object* v___x_1895_; 
if (v_isShared_1893_ == 0)
{
v___x_1895_ = v___x_1892_;
goto v_reusejp_1894_;
}
else
{
lean_object* v_reuseFailAlloc_1896_; 
v_reuseFailAlloc_1896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1896_, 0, v_a_1890_);
v___x_1895_ = v_reuseFailAlloc_1896_;
goto v_reusejp_1894_;
}
v_reusejp_1894_:
{
return v___x_1895_;
}
}
}
}
else
{
lean_dec_ref(v_e_1864_);
return v___x_1874_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst(lean_object* v_e_1898_, uint8_t v_report_1899_, uint8_t v_a_1900_, lean_object* v_a_1901_, lean_object* v_a_1902_, lean_object* v_a_1903_, lean_object* v_a_1904_, lean_object* v_a_1905_, lean_object* v_a_1906_){
_start:
{
if (v_a_1900_ == 0)
{
lean_object* v___x_1908_; lean_object* v_canon_1909_; lean_object* v_cache_1910_; lean_object* v___x_1911_; 
v___x_1908_ = lean_st_ref_get(v_a_1902_);
v_canon_1909_ = lean_ctor_get(v___x_1908_, 11);
lean_inc_ref(v_canon_1909_);
lean_dec(v___x_1908_);
v_cache_1910_ = lean_ctor_get(v_canon_1909_, 0);
lean_inc_ref(v_cache_1910_);
lean_dec_ref(v_canon_1909_);
v___x_1911_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cache_1910_, v_e_1898_);
lean_dec_ref(v_cache_1910_);
if (lean_obj_tag(v___x_1911_) == 1)
{
lean_object* v_val_1912_; lean_object* v___x_1914_; uint8_t v_isShared_1915_; uint8_t v_isSharedCheck_1919_; 
lean_dec_ref(v_e_1898_);
v_val_1912_ = lean_ctor_get(v___x_1911_, 0);
v_isSharedCheck_1919_ = !lean_is_exclusive(v___x_1911_);
if (v_isSharedCheck_1919_ == 0)
{
v___x_1914_ = v___x_1911_;
v_isShared_1915_ = v_isSharedCheck_1919_;
goto v_resetjp_1913_;
}
else
{
lean_inc(v_val_1912_);
lean_dec(v___x_1911_);
v___x_1914_ = lean_box(0);
v_isShared_1915_ = v_isSharedCheck_1919_;
goto v_resetjp_1913_;
}
v_resetjp_1913_:
{
lean_object* v___x_1917_; 
if (v_isShared_1915_ == 0)
{
lean_ctor_set_tag(v___x_1914_, 0);
v___x_1917_ = v___x_1914_;
goto v_reusejp_1916_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v_val_1912_);
v___x_1917_ = v_reuseFailAlloc_1918_;
goto v_reusejp_1916_;
}
v_reusejp_1916_:
{
return v___x_1917_;
}
}
}
else
{
lean_object* v___x_1920_; 
lean_dec(v___x_1911_);
lean_inc_ref(v_e_1898_);
v___x_1920_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst_x27(v_e_1898_, v_report_1899_, v_a_1900_, v_a_1901_, v_a_1902_, v_a_1903_, v_a_1904_, v_a_1905_, v_a_1906_);
if (lean_obj_tag(v___x_1920_) == 0)
{
lean_object* v_a_1921_; lean_object* v___x_1923_; uint8_t v_isShared_1924_; uint8_t v_isSharedCheck_1961_; 
v_a_1921_ = lean_ctor_get(v___x_1920_, 0);
v_isSharedCheck_1961_ = !lean_is_exclusive(v___x_1920_);
if (v_isSharedCheck_1961_ == 0)
{
v___x_1923_ = v___x_1920_;
v_isShared_1924_ = v_isSharedCheck_1961_;
goto v_resetjp_1922_;
}
else
{
lean_inc(v_a_1921_);
lean_dec(v___x_1920_);
v___x_1923_ = lean_box(0);
v_isShared_1924_ = v_isSharedCheck_1961_;
goto v_resetjp_1922_;
}
v_resetjp_1922_:
{
lean_object* v___x_1925_; lean_object* v_canon_1926_; lean_object* v_share_1927_; lean_object* v_maxFVar_1928_; lean_object* v_proofInstInfo_1929_; lean_object* v_proofInstInfoFVar_1930_; lean_object* v_letValue_1931_; lean_object* v_inferType_1932_; lean_object* v_getLevel_1933_; lean_object* v_congrInfo_1934_; lean_object* v_defEqI_1935_; lean_object* v_extensions_1936_; lean_object* v_issues_1937_; lean_object* v_instanceOverrides_1938_; uint8_t v_debug_1939_; lean_object* v___x_1941_; uint8_t v_isShared_1942_; uint8_t v_isSharedCheck_1960_; 
v___x_1925_ = lean_st_ref_take(v_a_1902_);
v_canon_1926_ = lean_ctor_get(v___x_1925_, 11);
v_share_1927_ = lean_ctor_get(v___x_1925_, 0);
v_maxFVar_1928_ = lean_ctor_get(v___x_1925_, 1);
v_proofInstInfo_1929_ = lean_ctor_get(v___x_1925_, 2);
v_proofInstInfoFVar_1930_ = lean_ctor_get(v___x_1925_, 3);
v_letValue_1931_ = lean_ctor_get(v___x_1925_, 4);
v_inferType_1932_ = lean_ctor_get(v___x_1925_, 5);
v_getLevel_1933_ = lean_ctor_get(v___x_1925_, 6);
v_congrInfo_1934_ = lean_ctor_get(v___x_1925_, 7);
v_defEqI_1935_ = lean_ctor_get(v___x_1925_, 8);
v_extensions_1936_ = lean_ctor_get(v___x_1925_, 9);
v_issues_1937_ = lean_ctor_get(v___x_1925_, 10);
v_instanceOverrides_1938_ = lean_ctor_get(v___x_1925_, 12);
v_debug_1939_ = lean_ctor_get_uint8(v___x_1925_, sizeof(void*)*13);
v_isSharedCheck_1960_ = !lean_is_exclusive(v___x_1925_);
if (v_isSharedCheck_1960_ == 0)
{
v___x_1941_ = v___x_1925_;
v_isShared_1942_ = v_isSharedCheck_1960_;
goto v_resetjp_1940_;
}
else
{
lean_inc(v_instanceOverrides_1938_);
lean_inc(v_canon_1926_);
lean_inc(v_issues_1937_);
lean_inc(v_extensions_1936_);
lean_inc(v_defEqI_1935_);
lean_inc(v_congrInfo_1934_);
lean_inc(v_getLevel_1933_);
lean_inc(v_inferType_1932_);
lean_inc(v_letValue_1931_);
lean_inc(v_proofInstInfoFVar_1930_);
lean_inc(v_proofInstInfo_1929_);
lean_inc(v_maxFVar_1928_);
lean_inc(v_share_1927_);
lean_dec(v___x_1925_);
v___x_1941_ = lean_box(0);
v_isShared_1942_ = v_isSharedCheck_1960_;
goto v_resetjp_1940_;
}
v_resetjp_1940_:
{
lean_object* v_cache_1943_; lean_object* v_cacheInType_1944_; lean_object* v___x_1946_; uint8_t v_isShared_1947_; uint8_t v_isSharedCheck_1959_; 
v_cache_1943_ = lean_ctor_get(v_canon_1926_, 0);
v_cacheInType_1944_ = lean_ctor_get(v_canon_1926_, 1);
v_isSharedCheck_1959_ = !lean_is_exclusive(v_canon_1926_);
if (v_isSharedCheck_1959_ == 0)
{
v___x_1946_ = v_canon_1926_;
v_isShared_1947_ = v_isSharedCheck_1959_;
goto v_resetjp_1945_;
}
else
{
lean_inc(v_cacheInType_1944_);
lean_inc(v_cache_1943_);
lean_dec(v_canon_1926_);
v___x_1946_ = lean_box(0);
v_isShared_1947_ = v_isSharedCheck_1959_;
goto v_resetjp_1945_;
}
v_resetjp_1945_:
{
lean_object* v___x_1948_; lean_object* v___x_1950_; 
lean_inc(v_a_1921_);
v___x_1948_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cache_1943_, v_e_1898_, v_a_1921_);
if (v_isShared_1947_ == 0)
{
lean_ctor_set(v___x_1946_, 0, v___x_1948_);
v___x_1950_ = v___x_1946_;
goto v_reusejp_1949_;
}
else
{
lean_object* v_reuseFailAlloc_1958_; 
v_reuseFailAlloc_1958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1958_, 0, v___x_1948_);
lean_ctor_set(v_reuseFailAlloc_1958_, 1, v_cacheInType_1944_);
v___x_1950_ = v_reuseFailAlloc_1958_;
goto v_reusejp_1949_;
}
v_reusejp_1949_:
{
lean_object* v___x_1952_; 
if (v_isShared_1942_ == 0)
{
lean_ctor_set(v___x_1941_, 11, v___x_1950_);
v___x_1952_ = v___x_1941_;
goto v_reusejp_1951_;
}
else
{
lean_object* v_reuseFailAlloc_1957_; 
v_reuseFailAlloc_1957_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_1957_, 0, v_share_1927_);
lean_ctor_set(v_reuseFailAlloc_1957_, 1, v_maxFVar_1928_);
lean_ctor_set(v_reuseFailAlloc_1957_, 2, v_proofInstInfo_1929_);
lean_ctor_set(v_reuseFailAlloc_1957_, 3, v_proofInstInfoFVar_1930_);
lean_ctor_set(v_reuseFailAlloc_1957_, 4, v_letValue_1931_);
lean_ctor_set(v_reuseFailAlloc_1957_, 5, v_inferType_1932_);
lean_ctor_set(v_reuseFailAlloc_1957_, 6, v_getLevel_1933_);
lean_ctor_set(v_reuseFailAlloc_1957_, 7, v_congrInfo_1934_);
lean_ctor_set(v_reuseFailAlloc_1957_, 8, v_defEqI_1935_);
lean_ctor_set(v_reuseFailAlloc_1957_, 9, v_extensions_1936_);
lean_ctor_set(v_reuseFailAlloc_1957_, 10, v_issues_1937_);
lean_ctor_set(v_reuseFailAlloc_1957_, 11, v___x_1950_);
lean_ctor_set(v_reuseFailAlloc_1957_, 12, v_instanceOverrides_1938_);
lean_ctor_set_uint8(v_reuseFailAlloc_1957_, sizeof(void*)*13, v_debug_1939_);
v___x_1952_ = v_reuseFailAlloc_1957_;
goto v_reusejp_1951_;
}
v_reusejp_1951_:
{
lean_object* v___x_1953_; lean_object* v___x_1955_; 
v___x_1953_ = lean_st_ref_put(v_a_1902_, v___x_1952_);
if (v_isShared_1924_ == 0)
{
v___x_1955_ = v___x_1923_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v_a_1921_);
v___x_1955_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
return v___x_1955_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_e_1898_);
return v___x_1920_;
}
}
}
else
{
lean_object* v___x_1962_; lean_object* v_canon_1963_; lean_object* v_cacheInType_1964_; lean_object* v___x_1965_; 
v___x_1962_ = lean_st_ref_get(v_a_1902_);
v_canon_1963_ = lean_ctor_get(v___x_1962_, 11);
lean_inc_ref(v_canon_1963_);
lean_dec(v___x_1962_);
v_cacheInType_1964_ = lean_ctor_get(v_canon_1963_, 1);
lean_inc_ref(v_cacheInType_1964_);
lean_dec_ref(v_canon_1963_);
v___x_1965_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cacheInType_1964_, v_e_1898_);
lean_dec_ref(v_cacheInType_1964_);
if (lean_obj_tag(v___x_1965_) == 1)
{
lean_object* v_val_1966_; lean_object* v___x_1968_; uint8_t v_isShared_1969_; uint8_t v_isSharedCheck_1973_; 
lean_dec_ref(v_e_1898_);
v_val_1966_ = lean_ctor_get(v___x_1965_, 0);
v_isSharedCheck_1973_ = !lean_is_exclusive(v___x_1965_);
if (v_isSharedCheck_1973_ == 0)
{
v___x_1968_ = v___x_1965_;
v_isShared_1969_ = v_isSharedCheck_1973_;
goto v_resetjp_1967_;
}
else
{
lean_inc(v_val_1966_);
lean_dec(v___x_1965_);
v___x_1968_ = lean_box(0);
v_isShared_1969_ = v_isSharedCheck_1973_;
goto v_resetjp_1967_;
}
v_resetjp_1967_:
{
lean_object* v___x_1971_; 
if (v_isShared_1969_ == 0)
{
lean_ctor_set_tag(v___x_1968_, 0);
v___x_1971_ = v___x_1968_;
goto v_reusejp_1970_;
}
else
{
lean_object* v_reuseFailAlloc_1972_; 
v_reuseFailAlloc_1972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1972_, 0, v_val_1966_);
v___x_1971_ = v_reuseFailAlloc_1972_;
goto v_reusejp_1970_;
}
v_reusejp_1970_:
{
return v___x_1971_;
}
}
}
else
{
lean_object* v___x_1974_; 
lean_dec(v___x_1965_);
lean_inc_ref(v_e_1898_);
v___x_1974_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst_x27(v_e_1898_, v_report_1899_, v_a_1900_, v_a_1901_, v_a_1902_, v_a_1903_, v_a_1904_, v_a_1905_, v_a_1906_);
if (lean_obj_tag(v___x_1974_) == 0)
{
lean_object* v_a_1975_; lean_object* v___x_1977_; uint8_t v_isShared_1978_; uint8_t v_isSharedCheck_2015_; 
v_a_1975_ = lean_ctor_get(v___x_1974_, 0);
v_isSharedCheck_2015_ = !lean_is_exclusive(v___x_1974_);
if (v_isSharedCheck_2015_ == 0)
{
v___x_1977_ = v___x_1974_;
v_isShared_1978_ = v_isSharedCheck_2015_;
goto v_resetjp_1976_;
}
else
{
lean_inc(v_a_1975_);
lean_dec(v___x_1974_);
v___x_1977_ = lean_box(0);
v_isShared_1978_ = v_isSharedCheck_2015_;
goto v_resetjp_1976_;
}
v_resetjp_1976_:
{
lean_object* v___x_1979_; lean_object* v_canon_1980_; lean_object* v_share_1981_; lean_object* v_maxFVar_1982_; lean_object* v_proofInstInfo_1983_; lean_object* v_proofInstInfoFVar_1984_; lean_object* v_letValue_1985_; lean_object* v_inferType_1986_; lean_object* v_getLevel_1987_; lean_object* v_congrInfo_1988_; lean_object* v_defEqI_1989_; lean_object* v_extensions_1990_; lean_object* v_issues_1991_; lean_object* v_instanceOverrides_1992_; uint8_t v_debug_1993_; lean_object* v___x_1995_; uint8_t v_isShared_1996_; uint8_t v_isSharedCheck_2014_; 
v___x_1979_ = lean_st_ref_take(v_a_1902_);
v_canon_1980_ = lean_ctor_get(v___x_1979_, 11);
v_share_1981_ = lean_ctor_get(v___x_1979_, 0);
v_maxFVar_1982_ = lean_ctor_get(v___x_1979_, 1);
v_proofInstInfo_1983_ = lean_ctor_get(v___x_1979_, 2);
v_proofInstInfoFVar_1984_ = lean_ctor_get(v___x_1979_, 3);
v_letValue_1985_ = lean_ctor_get(v___x_1979_, 4);
v_inferType_1986_ = lean_ctor_get(v___x_1979_, 5);
v_getLevel_1987_ = lean_ctor_get(v___x_1979_, 6);
v_congrInfo_1988_ = lean_ctor_get(v___x_1979_, 7);
v_defEqI_1989_ = lean_ctor_get(v___x_1979_, 8);
v_extensions_1990_ = lean_ctor_get(v___x_1979_, 9);
v_issues_1991_ = lean_ctor_get(v___x_1979_, 10);
v_instanceOverrides_1992_ = lean_ctor_get(v___x_1979_, 12);
v_debug_1993_ = lean_ctor_get_uint8(v___x_1979_, sizeof(void*)*13);
v_isSharedCheck_2014_ = !lean_is_exclusive(v___x_1979_);
if (v_isSharedCheck_2014_ == 0)
{
v___x_1995_ = v___x_1979_;
v_isShared_1996_ = v_isSharedCheck_2014_;
goto v_resetjp_1994_;
}
else
{
lean_inc(v_instanceOverrides_1992_);
lean_inc(v_canon_1980_);
lean_inc(v_issues_1991_);
lean_inc(v_extensions_1990_);
lean_inc(v_defEqI_1989_);
lean_inc(v_congrInfo_1988_);
lean_inc(v_getLevel_1987_);
lean_inc(v_inferType_1986_);
lean_inc(v_letValue_1985_);
lean_inc(v_proofInstInfoFVar_1984_);
lean_inc(v_proofInstInfo_1983_);
lean_inc(v_maxFVar_1982_);
lean_inc(v_share_1981_);
lean_dec(v___x_1979_);
v___x_1995_ = lean_box(0);
v_isShared_1996_ = v_isSharedCheck_2014_;
goto v_resetjp_1994_;
}
v_resetjp_1994_:
{
lean_object* v_cache_1997_; lean_object* v_cacheInType_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2013_; 
v_cache_1997_ = lean_ctor_get(v_canon_1980_, 0);
v_cacheInType_1998_ = lean_ctor_get(v_canon_1980_, 1);
v_isSharedCheck_2013_ = !lean_is_exclusive(v_canon_1980_);
if (v_isSharedCheck_2013_ == 0)
{
v___x_2000_ = v_canon_1980_;
v_isShared_2001_ = v_isSharedCheck_2013_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_cacheInType_1998_);
lean_inc(v_cache_1997_);
lean_dec(v_canon_1980_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2013_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v___x_2002_; lean_object* v___x_2004_; 
lean_inc(v_a_1975_);
v___x_2002_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cacheInType_1998_, v_e_1898_, v_a_1975_);
if (v_isShared_2001_ == 0)
{
lean_ctor_set(v___x_2000_, 1, v___x_2002_);
v___x_2004_ = v___x_2000_;
goto v_reusejp_2003_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v_cache_1997_);
lean_ctor_set(v_reuseFailAlloc_2012_, 1, v___x_2002_);
v___x_2004_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2003_;
}
v_reusejp_2003_:
{
lean_object* v___x_2006_; 
if (v_isShared_1996_ == 0)
{
lean_ctor_set(v___x_1995_, 11, v___x_2004_);
v___x_2006_ = v___x_1995_;
goto v_reusejp_2005_;
}
else
{
lean_object* v_reuseFailAlloc_2011_; 
v_reuseFailAlloc_2011_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_2011_, 0, v_share_1981_);
lean_ctor_set(v_reuseFailAlloc_2011_, 1, v_maxFVar_1982_);
lean_ctor_set(v_reuseFailAlloc_2011_, 2, v_proofInstInfo_1983_);
lean_ctor_set(v_reuseFailAlloc_2011_, 3, v_proofInstInfoFVar_1984_);
lean_ctor_set(v_reuseFailAlloc_2011_, 4, v_letValue_1985_);
lean_ctor_set(v_reuseFailAlloc_2011_, 5, v_inferType_1986_);
lean_ctor_set(v_reuseFailAlloc_2011_, 6, v_getLevel_1987_);
lean_ctor_set(v_reuseFailAlloc_2011_, 7, v_congrInfo_1988_);
lean_ctor_set(v_reuseFailAlloc_2011_, 8, v_defEqI_1989_);
lean_ctor_set(v_reuseFailAlloc_2011_, 9, v_extensions_1990_);
lean_ctor_set(v_reuseFailAlloc_2011_, 10, v_issues_1991_);
lean_ctor_set(v_reuseFailAlloc_2011_, 11, v___x_2004_);
lean_ctor_set(v_reuseFailAlloc_2011_, 12, v_instanceOverrides_1992_);
lean_ctor_set_uint8(v_reuseFailAlloc_2011_, sizeof(void*)*13, v_debug_1993_);
v___x_2006_ = v_reuseFailAlloc_2011_;
goto v_reusejp_2005_;
}
v_reusejp_2005_:
{
lean_object* v___x_2007_; lean_object* v___x_2009_; 
v___x_2007_ = lean_st_ref_put(v_a_1902_, v___x_2006_);
if (v_isShared_1978_ == 0)
{
v___x_2009_ = v___x_1977_;
goto v_reusejp_2008_;
}
else
{
lean_object* v_reuseFailAlloc_2010_; 
v_reuseFailAlloc_2010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2010_, 0, v_a_1975_);
v___x_2009_ = v_reuseFailAlloc_2010_;
goto v_reusejp_2008_;
}
v_reusejp_2008_:
{
return v___x_2009_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_e_1898_);
return v___x_1974_;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__2(void){
_start:
{
lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; 
v___x_2030_ = lean_box(0);
v___x_2031_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__1));
v___x_2032_ = l_Lean_mkConst(v___x_2031_, v___x_2030_);
return v___x_2032_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27(lean_object* v_g_2033_, lean_object* v_prop_2034_, lean_object* v_inst_2035_, lean_object* v_e_2036_, uint8_t v_a_2037_, lean_object* v_a_2038_, lean_object* v_a_2039_, lean_object* v_a_2040_, lean_object* v_a_2041_, lean_object* v_a_2042_, lean_object* v_a_2043_){
_start:
{
lean_object* v___x_2045_; 
lean_inc_ref(v_prop_2034_);
v___x_2045_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_prop_2034_, v_a_2037_, v_a_2038_, v_a_2039_, v_a_2040_, v_a_2041_, v_a_2042_, v_a_2043_);
if (lean_obj_tag(v___x_2045_) == 0)
{
lean_object* v_a_2046_; lean_object* v___x_2048_; uint8_t v_isShared_2049_; uint8_t v_isSharedCheck_2088_; 
v_a_2046_ = lean_ctor_get(v___x_2045_, 0);
v_isSharedCheck_2088_ = !lean_is_exclusive(v___x_2045_);
if (v_isSharedCheck_2088_ == 0)
{
v___x_2048_ = v___x_2045_;
v_isShared_2049_ = v_isSharedCheck_2088_;
goto v_resetjp_2047_;
}
else
{
lean_inc(v_a_2046_);
lean_dec(v___x_2045_);
v___x_2048_ = lean_box(0);
v_isShared_2049_ = v_isSharedCheck_2088_;
goto v_resetjp_2047_;
}
v_resetjp_2047_:
{
lean_object* v___y_2051_; lean_object* v___x_2056_; lean_object* v___x_2057_; 
v___x_2056_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__2, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__2_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___closed__2);
lean_inc(v_a_2046_);
v___x_2057_ = l_Lean_Expr_app___override(v___x_2056_, v_a_2046_);
if (v_a_2037_ == 0)
{
lean_object* v___x_2058_; 
v___x_2058_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v___x_2057_, v_a_2039_, v_a_2040_, v_a_2041_, v_a_2042_, v_a_2043_);
if (lean_obj_tag(v___x_2058_) == 0)
{
lean_object* v_a_2059_; lean_object* v___y_2061_; 
v_a_2059_ = lean_ctor_get(v___x_2058_, 0);
lean_inc(v_a_2059_);
lean_dec_ref_known(v___x_2058_, 1);
if (lean_obj_tag(v_a_2059_) == 0)
{
lean_inc_ref(v_inst_2035_);
v___y_2061_ = v_inst_2035_;
goto v___jp_2060_;
}
else
{
lean_object* v_val_2077_; 
v_val_2077_ = lean_ctor_get(v_a_2059_, 0);
lean_inc(v_val_2077_);
lean_dec_ref_known(v_a_2059_, 1);
v___y_2061_ = v_val_2077_;
goto v___jp_2060_;
}
v___jp_2060_:
{
lean_object* v___x_2062_; 
lean_inc_ref(v_inst_2035_);
v___x_2062_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_checkDefEqInst(v_inst_2035_, v___y_2061_, v_a_2038_, v_a_2039_, v_a_2040_, v_a_2041_, v_a_2042_, v_a_2043_);
if (lean_obj_tag(v___x_2062_) == 0)
{
lean_object* v_a_2063_; lean_object* v___x_2065_; uint8_t v_isShared_2066_; uint8_t v_isSharedCheck_2076_; 
v_a_2063_ = lean_ctor_get(v___x_2062_, 0);
v_isSharedCheck_2076_ = !lean_is_exclusive(v___x_2062_);
if (v_isSharedCheck_2076_ == 0)
{
v___x_2065_ = v___x_2062_;
v_isShared_2066_ = v_isSharedCheck_2076_;
goto v_resetjp_2064_;
}
else
{
lean_inc(v_a_2063_);
lean_dec(v___x_2062_);
v___x_2065_ = lean_box(0);
v_isShared_2066_ = v_isSharedCheck_2076_;
goto v_resetjp_2064_;
}
v_resetjp_2064_:
{
size_t v___x_2067_; size_t v___x_2068_; uint8_t v___x_2069_; 
v___x_2067_ = lean_ptr_addr(v_prop_2034_);
lean_dec_ref(v_prop_2034_);
v___x_2068_ = lean_ptr_addr(v_a_2046_);
v___x_2069_ = lean_usize_dec_eq(v___x_2067_, v___x_2068_);
if (v___x_2069_ == 0)
{
lean_del_object(v___x_2065_);
lean_dec_ref(v_e_2036_);
lean_dec_ref(v_inst_2035_);
v___y_2051_ = v_a_2063_;
goto v___jp_2050_;
}
else
{
size_t v___x_2070_; size_t v___x_2071_; uint8_t v___x_2072_; 
v___x_2070_ = lean_ptr_addr(v_inst_2035_);
lean_dec_ref(v_inst_2035_);
v___x_2071_ = lean_ptr_addr(v_a_2063_);
v___x_2072_ = lean_usize_dec_eq(v___x_2070_, v___x_2071_);
if (v___x_2072_ == 0)
{
lean_del_object(v___x_2065_);
lean_dec_ref(v_e_2036_);
v___y_2051_ = v_a_2063_;
goto v___jp_2050_;
}
else
{
lean_object* v___x_2074_; 
lean_dec(v_a_2063_);
lean_del_object(v___x_2048_);
lean_dec(v_a_2046_);
lean_dec_ref(v_g_2033_);
if (v_isShared_2066_ == 0)
{
lean_ctor_set(v___x_2065_, 0, v_e_2036_);
v___x_2074_ = v___x_2065_;
goto v_reusejp_2073_;
}
else
{
lean_object* v_reuseFailAlloc_2075_; 
v_reuseFailAlloc_2075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2075_, 0, v_e_2036_);
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
}
else
{
lean_del_object(v___x_2048_);
lean_dec(v_a_2046_);
lean_dec_ref(v_e_2036_);
lean_dec_ref(v_inst_2035_);
lean_dec_ref(v_prop_2034_);
lean_dec_ref(v_g_2033_);
return v___x_2062_;
}
}
}
else
{
lean_object* v_a_2078_; lean_object* v___x_2080_; uint8_t v_isShared_2081_; uint8_t v_isSharedCheck_2085_; 
lean_del_object(v___x_2048_);
lean_dec(v_a_2046_);
lean_dec_ref(v_e_2036_);
lean_dec_ref(v_inst_2035_);
lean_dec_ref(v_prop_2034_);
lean_dec_ref(v_g_2033_);
v_a_2078_ = lean_ctor_get(v___x_2058_, 0);
v_isSharedCheck_2085_ = !lean_is_exclusive(v___x_2058_);
if (v_isSharedCheck_2085_ == 0)
{
v___x_2080_ = v___x_2058_;
v_isShared_2081_ = v_isSharedCheck_2085_;
goto v_resetjp_2079_;
}
else
{
lean_inc(v_a_2078_);
lean_dec(v___x_2058_);
v___x_2080_ = lean_box(0);
v_isShared_2081_ = v_isSharedCheck_2085_;
goto v_resetjp_2079_;
}
v_resetjp_2079_:
{
lean_object* v___x_2083_; 
if (v_isShared_2081_ == 0)
{
v___x_2083_ = v___x_2080_;
goto v_reusejp_2082_;
}
else
{
lean_object* v_reuseFailAlloc_2084_; 
v_reuseFailAlloc_2084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2084_, 0, v_a_2078_);
v___x_2083_ = v_reuseFailAlloc_2084_;
goto v_reusejp_2082_;
}
v_reusejp_2082_:
{
return v___x_2083_;
}
}
}
}
else
{
uint8_t v___x_2086_; lean_object* v___x_2087_; 
lean_del_object(v___x_2048_);
lean_dec(v_a_2046_);
lean_dec_ref(v_e_2036_);
lean_dec_ref(v_prop_2034_);
lean_dec_ref(v_g_2033_);
v___x_2086_ = 0;
v___x_2087_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore(v_inst_2035_, v___x_2057_, v___x_2086_, v_a_2037_, v_a_2038_, v_a_2039_, v_a_2040_, v_a_2041_, v_a_2042_, v_a_2043_);
return v___x_2087_;
}
v___jp_2050_:
{
lean_object* v___x_2052_; lean_object* v___x_2054_; 
v___x_2052_ = l_Lean_mkAppB(v_g_2033_, v_a_2046_, v___y_2051_);
if (v_isShared_2049_ == 0)
{
lean_ctor_set(v___x_2048_, 0, v___x_2052_);
v___x_2054_ = v___x_2048_;
goto v_reusejp_2053_;
}
else
{
lean_object* v_reuseFailAlloc_2055_; 
v_reuseFailAlloc_2055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2055_, 0, v___x_2052_);
v___x_2054_ = v_reuseFailAlloc_2055_;
goto v_reusejp_2053_;
}
v_reusejp_2053_:
{
return v___x_2054_;
}
}
}
}
else
{
lean_dec_ref(v_e_2036_);
lean_dec_ref(v_inst_2035_);
lean_dec_ref(v_prop_2034_);
lean_dec_ref(v_g_2033_);
return v___x_2045_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec(lean_object* v_g_2089_, lean_object* v_prop_2090_, lean_object* v_h_2091_, lean_object* v_e_2092_, uint8_t v_a_2093_, lean_object* v_a_2094_, lean_object* v_a_2095_, lean_object* v_a_2096_, lean_object* v_a_2097_, lean_object* v_a_2098_, lean_object* v_a_2099_){
_start:
{
if (v_a_2093_ == 0)
{
lean_object* v___x_2101_; lean_object* v_canon_2102_; lean_object* v_cache_2103_; lean_object* v___x_2104_; 
v___x_2101_ = lean_st_ref_get(v_a_2095_);
v_canon_2102_ = lean_ctor_get(v___x_2101_, 11);
lean_inc_ref(v_canon_2102_);
lean_dec(v___x_2101_);
v_cache_2103_ = lean_ctor_get(v_canon_2102_, 0);
lean_inc_ref(v_cache_2103_);
lean_dec_ref(v_canon_2102_);
v___x_2104_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cache_2103_, v_e_2092_);
lean_dec_ref(v_cache_2103_);
if (lean_obj_tag(v___x_2104_) == 1)
{
lean_object* v_val_2105_; lean_object* v___x_2107_; uint8_t v_isShared_2108_; uint8_t v_isSharedCheck_2112_; 
lean_dec_ref(v_e_2092_);
lean_dec_ref(v_h_2091_);
lean_dec_ref(v_prop_2090_);
lean_dec_ref(v_g_2089_);
v_val_2105_ = lean_ctor_get(v___x_2104_, 0);
v_isSharedCheck_2112_ = !lean_is_exclusive(v___x_2104_);
if (v_isSharedCheck_2112_ == 0)
{
v___x_2107_ = v___x_2104_;
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
else
{
lean_inc(v_val_2105_);
lean_dec(v___x_2104_);
v___x_2107_ = lean_box(0);
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
v_resetjp_2106_:
{
lean_object* v___x_2110_; 
if (v_isShared_2108_ == 0)
{
lean_ctor_set_tag(v___x_2107_, 0);
v___x_2110_ = v___x_2107_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2111_; 
v_reuseFailAlloc_2111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2111_, 0, v_val_2105_);
v___x_2110_ = v_reuseFailAlloc_2111_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
return v___x_2110_;
}
}
}
else
{
lean_object* v___x_2113_; 
lean_dec(v___x_2104_);
lean_inc_ref(v_e_2092_);
v___x_2113_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27(v_g_2089_, v_prop_2090_, v_h_2091_, v_e_2092_, v_a_2093_, v_a_2094_, v_a_2095_, v_a_2096_, v_a_2097_, v_a_2098_, v_a_2099_);
if (lean_obj_tag(v___x_2113_) == 0)
{
lean_object* v_a_2114_; lean_object* v___x_2116_; uint8_t v_isShared_2117_; uint8_t v_isSharedCheck_2154_; 
v_a_2114_ = lean_ctor_get(v___x_2113_, 0);
v_isSharedCheck_2154_ = !lean_is_exclusive(v___x_2113_);
if (v_isSharedCheck_2154_ == 0)
{
v___x_2116_ = v___x_2113_;
v_isShared_2117_ = v_isSharedCheck_2154_;
goto v_resetjp_2115_;
}
else
{
lean_inc(v_a_2114_);
lean_dec(v___x_2113_);
v___x_2116_ = lean_box(0);
v_isShared_2117_ = v_isSharedCheck_2154_;
goto v_resetjp_2115_;
}
v_resetjp_2115_:
{
lean_object* v___x_2118_; lean_object* v_canon_2119_; lean_object* v_share_2120_; lean_object* v_maxFVar_2121_; lean_object* v_proofInstInfo_2122_; lean_object* v_proofInstInfoFVar_2123_; lean_object* v_letValue_2124_; lean_object* v_inferType_2125_; lean_object* v_getLevel_2126_; lean_object* v_congrInfo_2127_; lean_object* v_defEqI_2128_; lean_object* v_extensions_2129_; lean_object* v_issues_2130_; lean_object* v_instanceOverrides_2131_; uint8_t v_debug_2132_; lean_object* v___x_2134_; uint8_t v_isShared_2135_; uint8_t v_isSharedCheck_2153_; 
v___x_2118_ = lean_st_ref_take(v_a_2095_);
v_canon_2119_ = lean_ctor_get(v___x_2118_, 11);
v_share_2120_ = lean_ctor_get(v___x_2118_, 0);
v_maxFVar_2121_ = lean_ctor_get(v___x_2118_, 1);
v_proofInstInfo_2122_ = lean_ctor_get(v___x_2118_, 2);
v_proofInstInfoFVar_2123_ = lean_ctor_get(v___x_2118_, 3);
v_letValue_2124_ = lean_ctor_get(v___x_2118_, 4);
v_inferType_2125_ = lean_ctor_get(v___x_2118_, 5);
v_getLevel_2126_ = lean_ctor_get(v___x_2118_, 6);
v_congrInfo_2127_ = lean_ctor_get(v___x_2118_, 7);
v_defEqI_2128_ = lean_ctor_get(v___x_2118_, 8);
v_extensions_2129_ = lean_ctor_get(v___x_2118_, 9);
v_issues_2130_ = lean_ctor_get(v___x_2118_, 10);
v_instanceOverrides_2131_ = lean_ctor_get(v___x_2118_, 12);
v_debug_2132_ = lean_ctor_get_uint8(v___x_2118_, sizeof(void*)*13);
v_isSharedCheck_2153_ = !lean_is_exclusive(v___x_2118_);
if (v_isSharedCheck_2153_ == 0)
{
v___x_2134_ = v___x_2118_;
v_isShared_2135_ = v_isSharedCheck_2153_;
goto v_resetjp_2133_;
}
else
{
lean_inc(v_instanceOverrides_2131_);
lean_inc(v_canon_2119_);
lean_inc(v_issues_2130_);
lean_inc(v_extensions_2129_);
lean_inc(v_defEqI_2128_);
lean_inc(v_congrInfo_2127_);
lean_inc(v_getLevel_2126_);
lean_inc(v_inferType_2125_);
lean_inc(v_letValue_2124_);
lean_inc(v_proofInstInfoFVar_2123_);
lean_inc(v_proofInstInfo_2122_);
lean_inc(v_maxFVar_2121_);
lean_inc(v_share_2120_);
lean_dec(v___x_2118_);
v___x_2134_ = lean_box(0);
v_isShared_2135_ = v_isSharedCheck_2153_;
goto v_resetjp_2133_;
}
v_resetjp_2133_:
{
lean_object* v_cache_2136_; lean_object* v_cacheInType_2137_; lean_object* v___x_2139_; uint8_t v_isShared_2140_; uint8_t v_isSharedCheck_2152_; 
v_cache_2136_ = lean_ctor_get(v_canon_2119_, 0);
v_cacheInType_2137_ = lean_ctor_get(v_canon_2119_, 1);
v_isSharedCheck_2152_ = !lean_is_exclusive(v_canon_2119_);
if (v_isSharedCheck_2152_ == 0)
{
v___x_2139_ = v_canon_2119_;
v_isShared_2140_ = v_isSharedCheck_2152_;
goto v_resetjp_2138_;
}
else
{
lean_inc(v_cacheInType_2137_);
lean_inc(v_cache_2136_);
lean_dec(v_canon_2119_);
v___x_2139_ = lean_box(0);
v_isShared_2140_ = v_isSharedCheck_2152_;
goto v_resetjp_2138_;
}
v_resetjp_2138_:
{
lean_object* v___x_2141_; lean_object* v___x_2143_; 
lean_inc(v_a_2114_);
v___x_2141_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cache_2136_, v_e_2092_, v_a_2114_);
if (v_isShared_2140_ == 0)
{
lean_ctor_set(v___x_2139_, 0, v___x_2141_);
v___x_2143_ = v___x_2139_;
goto v_reusejp_2142_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v___x_2141_);
lean_ctor_set(v_reuseFailAlloc_2151_, 1, v_cacheInType_2137_);
v___x_2143_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2142_;
}
v_reusejp_2142_:
{
lean_object* v___x_2145_; 
if (v_isShared_2135_ == 0)
{
lean_ctor_set(v___x_2134_, 11, v___x_2143_);
v___x_2145_ = v___x_2134_;
goto v_reusejp_2144_;
}
else
{
lean_object* v_reuseFailAlloc_2150_; 
v_reuseFailAlloc_2150_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_2150_, 0, v_share_2120_);
lean_ctor_set(v_reuseFailAlloc_2150_, 1, v_maxFVar_2121_);
lean_ctor_set(v_reuseFailAlloc_2150_, 2, v_proofInstInfo_2122_);
lean_ctor_set(v_reuseFailAlloc_2150_, 3, v_proofInstInfoFVar_2123_);
lean_ctor_set(v_reuseFailAlloc_2150_, 4, v_letValue_2124_);
lean_ctor_set(v_reuseFailAlloc_2150_, 5, v_inferType_2125_);
lean_ctor_set(v_reuseFailAlloc_2150_, 6, v_getLevel_2126_);
lean_ctor_set(v_reuseFailAlloc_2150_, 7, v_congrInfo_2127_);
lean_ctor_set(v_reuseFailAlloc_2150_, 8, v_defEqI_2128_);
lean_ctor_set(v_reuseFailAlloc_2150_, 9, v_extensions_2129_);
lean_ctor_set(v_reuseFailAlloc_2150_, 10, v_issues_2130_);
lean_ctor_set(v_reuseFailAlloc_2150_, 11, v___x_2143_);
lean_ctor_set(v_reuseFailAlloc_2150_, 12, v_instanceOverrides_2131_);
lean_ctor_set_uint8(v_reuseFailAlloc_2150_, sizeof(void*)*13, v_debug_2132_);
v___x_2145_ = v_reuseFailAlloc_2150_;
goto v_reusejp_2144_;
}
v_reusejp_2144_:
{
lean_object* v___x_2146_; lean_object* v___x_2148_; 
v___x_2146_ = lean_st_ref_put(v_a_2095_, v___x_2145_);
if (v_isShared_2117_ == 0)
{
v___x_2148_ = v___x_2116_;
goto v_reusejp_2147_;
}
else
{
lean_object* v_reuseFailAlloc_2149_; 
v_reuseFailAlloc_2149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2149_, 0, v_a_2114_);
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
}
}
}
else
{
lean_dec_ref(v_e_2092_);
return v___x_2113_;
}
}
}
else
{
lean_object* v___x_2155_; lean_object* v_canon_2156_; lean_object* v_cacheInType_2157_; lean_object* v___x_2158_; 
v___x_2155_ = lean_st_ref_get(v_a_2095_);
v_canon_2156_ = lean_ctor_get(v___x_2155_, 11);
lean_inc_ref(v_canon_2156_);
lean_dec(v___x_2155_);
v_cacheInType_2157_ = lean_ctor_get(v_canon_2156_, 1);
lean_inc_ref(v_cacheInType_2157_);
lean_dec_ref(v_canon_2156_);
v___x_2158_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cacheInType_2157_, v_e_2092_);
lean_dec_ref(v_cacheInType_2157_);
if (lean_obj_tag(v___x_2158_) == 1)
{
lean_object* v_val_2159_; lean_object* v___x_2161_; uint8_t v_isShared_2162_; uint8_t v_isSharedCheck_2166_; 
lean_dec_ref(v_e_2092_);
lean_dec_ref(v_h_2091_);
lean_dec_ref(v_prop_2090_);
lean_dec_ref(v_g_2089_);
v_val_2159_ = lean_ctor_get(v___x_2158_, 0);
v_isSharedCheck_2166_ = !lean_is_exclusive(v___x_2158_);
if (v_isSharedCheck_2166_ == 0)
{
v___x_2161_ = v___x_2158_;
v_isShared_2162_ = v_isSharedCheck_2166_;
goto v_resetjp_2160_;
}
else
{
lean_inc(v_val_2159_);
lean_dec(v___x_2158_);
v___x_2161_ = lean_box(0);
v_isShared_2162_ = v_isSharedCheck_2166_;
goto v_resetjp_2160_;
}
v_resetjp_2160_:
{
lean_object* v___x_2164_; 
if (v_isShared_2162_ == 0)
{
lean_ctor_set_tag(v___x_2161_, 0);
v___x_2164_ = v___x_2161_;
goto v_reusejp_2163_;
}
else
{
lean_object* v_reuseFailAlloc_2165_; 
v_reuseFailAlloc_2165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2165_, 0, v_val_2159_);
v___x_2164_ = v_reuseFailAlloc_2165_;
goto v_reusejp_2163_;
}
v_reusejp_2163_:
{
return v___x_2164_;
}
}
}
else
{
lean_object* v___x_2167_; 
lean_dec(v___x_2158_);
lean_inc_ref(v_e_2092_);
v___x_2167_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27(v_g_2089_, v_prop_2090_, v_h_2091_, v_e_2092_, v_a_2093_, v_a_2094_, v_a_2095_, v_a_2096_, v_a_2097_, v_a_2098_, v_a_2099_);
if (lean_obj_tag(v___x_2167_) == 0)
{
lean_object* v_a_2168_; lean_object* v___x_2170_; uint8_t v_isShared_2171_; uint8_t v_isSharedCheck_2208_; 
v_a_2168_ = lean_ctor_get(v___x_2167_, 0);
v_isSharedCheck_2208_ = !lean_is_exclusive(v___x_2167_);
if (v_isSharedCheck_2208_ == 0)
{
v___x_2170_ = v___x_2167_;
v_isShared_2171_ = v_isSharedCheck_2208_;
goto v_resetjp_2169_;
}
else
{
lean_inc(v_a_2168_);
lean_dec(v___x_2167_);
v___x_2170_ = lean_box(0);
v_isShared_2171_ = v_isSharedCheck_2208_;
goto v_resetjp_2169_;
}
v_resetjp_2169_:
{
lean_object* v___x_2172_; lean_object* v_canon_2173_; lean_object* v_share_2174_; lean_object* v_maxFVar_2175_; lean_object* v_proofInstInfo_2176_; lean_object* v_proofInstInfoFVar_2177_; lean_object* v_letValue_2178_; lean_object* v_inferType_2179_; lean_object* v_getLevel_2180_; lean_object* v_congrInfo_2181_; lean_object* v_defEqI_2182_; lean_object* v_extensions_2183_; lean_object* v_issues_2184_; lean_object* v_instanceOverrides_2185_; uint8_t v_debug_2186_; lean_object* v___x_2188_; uint8_t v_isShared_2189_; uint8_t v_isSharedCheck_2207_; 
v___x_2172_ = lean_st_ref_take(v_a_2095_);
v_canon_2173_ = lean_ctor_get(v___x_2172_, 11);
v_share_2174_ = lean_ctor_get(v___x_2172_, 0);
v_maxFVar_2175_ = lean_ctor_get(v___x_2172_, 1);
v_proofInstInfo_2176_ = lean_ctor_get(v___x_2172_, 2);
v_proofInstInfoFVar_2177_ = lean_ctor_get(v___x_2172_, 3);
v_letValue_2178_ = lean_ctor_get(v___x_2172_, 4);
v_inferType_2179_ = lean_ctor_get(v___x_2172_, 5);
v_getLevel_2180_ = lean_ctor_get(v___x_2172_, 6);
v_congrInfo_2181_ = lean_ctor_get(v___x_2172_, 7);
v_defEqI_2182_ = lean_ctor_get(v___x_2172_, 8);
v_extensions_2183_ = lean_ctor_get(v___x_2172_, 9);
v_issues_2184_ = lean_ctor_get(v___x_2172_, 10);
v_instanceOverrides_2185_ = lean_ctor_get(v___x_2172_, 12);
v_debug_2186_ = lean_ctor_get_uint8(v___x_2172_, sizeof(void*)*13);
v_isSharedCheck_2207_ = !lean_is_exclusive(v___x_2172_);
if (v_isSharedCheck_2207_ == 0)
{
v___x_2188_ = v___x_2172_;
v_isShared_2189_ = v_isSharedCheck_2207_;
goto v_resetjp_2187_;
}
else
{
lean_inc(v_instanceOverrides_2185_);
lean_inc(v_canon_2173_);
lean_inc(v_issues_2184_);
lean_inc(v_extensions_2183_);
lean_inc(v_defEqI_2182_);
lean_inc(v_congrInfo_2181_);
lean_inc(v_getLevel_2180_);
lean_inc(v_inferType_2179_);
lean_inc(v_letValue_2178_);
lean_inc(v_proofInstInfoFVar_2177_);
lean_inc(v_proofInstInfo_2176_);
lean_inc(v_maxFVar_2175_);
lean_inc(v_share_2174_);
lean_dec(v___x_2172_);
v___x_2188_ = lean_box(0);
v_isShared_2189_ = v_isSharedCheck_2207_;
goto v_resetjp_2187_;
}
v_resetjp_2187_:
{
lean_object* v_cache_2190_; lean_object* v_cacheInType_2191_; lean_object* v___x_2193_; uint8_t v_isShared_2194_; uint8_t v_isSharedCheck_2206_; 
v_cache_2190_ = lean_ctor_get(v_canon_2173_, 0);
v_cacheInType_2191_ = lean_ctor_get(v_canon_2173_, 1);
v_isSharedCheck_2206_ = !lean_is_exclusive(v_canon_2173_);
if (v_isSharedCheck_2206_ == 0)
{
v___x_2193_ = v_canon_2173_;
v_isShared_2194_ = v_isSharedCheck_2206_;
goto v_resetjp_2192_;
}
else
{
lean_inc(v_cacheInType_2191_);
lean_inc(v_cache_2190_);
lean_dec(v_canon_2173_);
v___x_2193_ = lean_box(0);
v_isShared_2194_ = v_isSharedCheck_2206_;
goto v_resetjp_2192_;
}
v_resetjp_2192_:
{
lean_object* v___x_2195_; lean_object* v___x_2197_; 
lean_inc(v_a_2168_);
v___x_2195_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cacheInType_2191_, v_e_2092_, v_a_2168_);
if (v_isShared_2194_ == 0)
{
lean_ctor_set(v___x_2193_, 1, v___x_2195_);
v___x_2197_ = v___x_2193_;
goto v_reusejp_2196_;
}
else
{
lean_object* v_reuseFailAlloc_2205_; 
v_reuseFailAlloc_2205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2205_, 0, v_cache_2190_);
lean_ctor_set(v_reuseFailAlloc_2205_, 1, v___x_2195_);
v___x_2197_ = v_reuseFailAlloc_2205_;
goto v_reusejp_2196_;
}
v_reusejp_2196_:
{
lean_object* v___x_2199_; 
if (v_isShared_2189_ == 0)
{
lean_ctor_set(v___x_2188_, 11, v___x_2197_);
v___x_2199_ = v___x_2188_;
goto v_reusejp_2198_;
}
else
{
lean_object* v_reuseFailAlloc_2204_; 
v_reuseFailAlloc_2204_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_2204_, 0, v_share_2174_);
lean_ctor_set(v_reuseFailAlloc_2204_, 1, v_maxFVar_2175_);
lean_ctor_set(v_reuseFailAlloc_2204_, 2, v_proofInstInfo_2176_);
lean_ctor_set(v_reuseFailAlloc_2204_, 3, v_proofInstInfoFVar_2177_);
lean_ctor_set(v_reuseFailAlloc_2204_, 4, v_letValue_2178_);
lean_ctor_set(v_reuseFailAlloc_2204_, 5, v_inferType_2179_);
lean_ctor_set(v_reuseFailAlloc_2204_, 6, v_getLevel_2180_);
lean_ctor_set(v_reuseFailAlloc_2204_, 7, v_congrInfo_2181_);
lean_ctor_set(v_reuseFailAlloc_2204_, 8, v_defEqI_2182_);
lean_ctor_set(v_reuseFailAlloc_2204_, 9, v_extensions_2183_);
lean_ctor_set(v_reuseFailAlloc_2204_, 10, v_issues_2184_);
lean_ctor_set(v_reuseFailAlloc_2204_, 11, v___x_2197_);
lean_ctor_set(v_reuseFailAlloc_2204_, 12, v_instanceOverrides_2185_);
lean_ctor_set_uint8(v_reuseFailAlloc_2204_, sizeof(void*)*13, v_debug_2186_);
v___x_2199_ = v_reuseFailAlloc_2204_;
goto v_reusejp_2198_;
}
v_reusejp_2198_:
{
lean_object* v___x_2200_; lean_object* v___x_2202_; 
v___x_2200_ = lean_st_ref_put(v_a_2095_, v___x_2199_);
if (v_isShared_2171_ == 0)
{
v___x_2202_ = v___x_2170_;
goto v_reusejp_2201_;
}
else
{
lean_object* v_reuseFailAlloc_2203_; 
v_reuseFailAlloc_2203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2203_, 0, v_a_2168_);
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
}
}
}
else
{
lean_dec_ref(v_e_2092_);
return v___x_2167_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstProp(lean_object* v_g_2209_, lean_object* v_prop_2210_, lean_object* v_h_2211_, lean_object* v_e_2212_, uint8_t v_a_2213_, lean_object* v_a_2214_, lean_object* v_a_2215_, lean_object* v_a_2216_, lean_object* v_a_2217_, lean_object* v_a_2218_, lean_object* v_a_2219_){
_start:
{
lean_object* v_a_2222_; 
if (v_a_2213_ == 0)
{
lean_object* v___x_2257_; lean_object* v_canon_2258_; lean_object* v_cache_2259_; lean_object* v___x_2260_; 
v___x_2257_ = lean_st_ref_get(v_a_2215_);
v_canon_2258_ = lean_ctor_get(v___x_2257_, 11);
lean_inc_ref(v_canon_2258_);
lean_dec(v___x_2257_);
v_cache_2259_ = lean_ctor_get(v_canon_2258_, 0);
lean_inc_ref(v_cache_2259_);
lean_dec_ref(v_canon_2258_);
v___x_2260_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cache_2259_, v_e_2212_);
lean_dec_ref(v_cache_2259_);
if (lean_obj_tag(v___x_2260_) == 1)
{
lean_object* v_val_2261_; lean_object* v___x_2263_; uint8_t v_isShared_2264_; uint8_t v_isSharedCheck_2268_; 
lean_dec_ref(v_e_2212_);
lean_dec_ref(v_h_2211_);
lean_dec_ref(v_prop_2210_);
lean_dec_ref(v_g_2209_);
v_val_2261_ = lean_ctor_get(v___x_2260_, 0);
v_isSharedCheck_2268_ = !lean_is_exclusive(v___x_2260_);
if (v_isSharedCheck_2268_ == 0)
{
v___x_2263_ = v___x_2260_;
v_isShared_2264_ = v_isSharedCheck_2268_;
goto v_resetjp_2262_;
}
else
{
lean_inc(v_val_2261_);
lean_dec(v___x_2260_);
v___x_2263_ = lean_box(0);
v_isShared_2264_ = v_isSharedCheck_2268_;
goto v_resetjp_2262_;
}
v_resetjp_2262_:
{
lean_object* v___x_2266_; 
if (v_isShared_2264_ == 0)
{
lean_ctor_set_tag(v___x_2263_, 0);
v___x_2266_ = v___x_2263_;
goto v_reusejp_2265_;
}
else
{
lean_object* v_reuseFailAlloc_2267_; 
v_reuseFailAlloc_2267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2267_, 0, v_val_2261_);
v___x_2266_ = v_reuseFailAlloc_2267_;
goto v_reusejp_2265_;
}
v_reusejp_2265_:
{
return v___x_2266_;
}
}
}
else
{
lean_object* v___x_2269_; 
lean_dec(v___x_2260_);
lean_inc_ref(v_prop_2210_);
v___x_2269_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_prop_2210_, v_a_2213_, v_a_2214_, v_a_2215_, v_a_2216_, v_a_2217_, v_a_2218_, v_a_2219_);
if (lean_obj_tag(v___x_2269_) == 0)
{
lean_object* v_a_2270_; lean_object* v___x_2271_; 
v_a_2270_ = lean_ctor_get(v___x_2269_, 0);
lean_inc_n(v_a_2270_, 2);
lean_dec_ref_known(v___x_2269_, 1);
v___x_2271_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_a_2270_, v_a_2215_, v_a_2216_, v_a_2217_, v_a_2218_, v_a_2219_);
if (lean_obj_tag(v___x_2271_) == 0)
{
lean_object* v_a_2272_; lean_object* v___y_2274_; lean_object* v___y_2277_; 
v_a_2272_ = lean_ctor_get(v___x_2271_, 0);
lean_inc(v_a_2272_);
lean_dec_ref_known(v___x_2271_, 1);
if (lean_obj_tag(v_a_2272_) == 0)
{
lean_inc_ref(v_h_2211_);
v___y_2277_ = v_h_2211_;
goto v___jp_2276_;
}
else
{
lean_object* v_val_2284_; 
v_val_2284_ = lean_ctor_get(v_a_2272_, 0);
lean_inc(v_val_2284_);
lean_dec_ref_known(v_a_2272_, 1);
v___y_2277_ = v_val_2284_;
goto v___jp_2276_;
}
v___jp_2273_:
{
lean_object* v___x_2275_; 
v___x_2275_ = l_Lean_mkAppB(v_g_2209_, v_a_2270_, v___y_2274_);
v_a_2222_ = v___x_2275_;
goto v___jp_2221_;
}
v___jp_2276_:
{
size_t v___x_2278_; size_t v___x_2279_; uint8_t v___x_2280_; 
v___x_2278_ = lean_ptr_addr(v_prop_2210_);
lean_dec_ref(v_prop_2210_);
v___x_2279_ = lean_ptr_addr(v_a_2270_);
v___x_2280_ = lean_usize_dec_eq(v___x_2278_, v___x_2279_);
if (v___x_2280_ == 0)
{
lean_dec_ref(v_h_2211_);
v___y_2274_ = v___y_2277_;
goto v___jp_2273_;
}
else
{
size_t v___x_2281_; size_t v___x_2282_; uint8_t v___x_2283_; 
v___x_2281_ = lean_ptr_addr(v_h_2211_);
lean_dec_ref(v_h_2211_);
v___x_2282_ = lean_ptr_addr(v___y_2277_);
v___x_2283_ = lean_usize_dec_eq(v___x_2281_, v___x_2282_);
if (v___x_2283_ == 0)
{
v___y_2274_ = v___y_2277_;
goto v___jp_2273_;
}
else
{
lean_dec_ref(v___y_2277_);
lean_dec(v_a_2270_);
lean_dec_ref(v_g_2209_);
lean_inc_ref(v_e_2212_);
v_a_2222_ = v_e_2212_;
goto v___jp_2221_;
}
}
}
}
else
{
lean_object* v_a_2285_; lean_object* v___x_2287_; uint8_t v_isShared_2288_; uint8_t v_isSharedCheck_2292_; 
lean_dec(v_a_2270_);
lean_dec_ref(v_e_2212_);
lean_dec_ref(v_h_2211_);
lean_dec_ref(v_prop_2210_);
lean_dec_ref(v_g_2209_);
v_a_2285_ = lean_ctor_get(v___x_2271_, 0);
v_isSharedCheck_2292_ = !lean_is_exclusive(v___x_2271_);
if (v_isSharedCheck_2292_ == 0)
{
v___x_2287_ = v___x_2271_;
v_isShared_2288_ = v_isSharedCheck_2292_;
goto v_resetjp_2286_;
}
else
{
lean_inc(v_a_2285_);
lean_dec(v___x_2271_);
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
else
{
lean_dec_ref(v_e_2212_);
lean_dec_ref(v_h_2211_);
lean_dec_ref(v_prop_2210_);
lean_dec_ref(v_g_2209_);
return v___x_2269_;
}
}
}
else
{
lean_object* v___x_2293_; lean_object* v_canon_2294_; lean_object* v_cacheInType_2295_; lean_object* v___x_2296_; 
lean_dec_ref(v_g_2209_);
v___x_2293_ = lean_st_ref_get(v_a_2215_);
v_canon_2294_ = lean_ctor_get(v___x_2293_, 11);
lean_inc_ref(v_canon_2294_);
lean_dec(v___x_2293_);
v_cacheInType_2295_ = lean_ctor_get(v_canon_2294_, 1);
lean_inc_ref(v_cacheInType_2295_);
lean_dec_ref(v_canon_2294_);
v___x_2296_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cacheInType_2295_, v_e_2212_);
lean_dec_ref(v_cacheInType_2295_);
if (lean_obj_tag(v___x_2296_) == 1)
{
lean_object* v_val_2297_; lean_object* v___x_2299_; uint8_t v_isShared_2300_; uint8_t v_isSharedCheck_2304_; 
lean_dec_ref(v_e_2212_);
lean_dec_ref(v_h_2211_);
lean_dec_ref(v_prop_2210_);
v_val_2297_ = lean_ctor_get(v___x_2296_, 0);
v_isSharedCheck_2304_ = !lean_is_exclusive(v___x_2296_);
if (v_isSharedCheck_2304_ == 0)
{
v___x_2299_ = v___x_2296_;
v_isShared_2300_ = v_isSharedCheck_2304_;
goto v_resetjp_2298_;
}
else
{
lean_inc(v_val_2297_);
lean_dec(v___x_2296_);
v___x_2299_ = lean_box(0);
v_isShared_2300_ = v_isSharedCheck_2304_;
goto v_resetjp_2298_;
}
v_resetjp_2298_:
{
lean_object* v___x_2302_; 
if (v_isShared_2300_ == 0)
{
lean_ctor_set_tag(v___x_2299_, 0);
v___x_2302_ = v___x_2299_;
goto v_reusejp_2301_;
}
else
{
lean_object* v_reuseFailAlloc_2303_; 
v_reuseFailAlloc_2303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2303_, 0, v_val_2297_);
v___x_2302_ = v_reuseFailAlloc_2303_;
goto v_reusejp_2301_;
}
v_reusejp_2301_:
{
return v___x_2302_;
}
}
}
else
{
lean_object* v___x_2305_; 
lean_dec(v___x_2296_);
v___x_2305_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_prop_2210_, v_a_2213_, v_a_2214_, v_a_2215_, v_a_2216_, v_a_2217_, v_a_2218_, v_a_2219_);
if (lean_obj_tag(v___x_2305_) == 0)
{
lean_object* v_a_2306_; uint8_t v___x_2307_; lean_object* v___x_2308_; 
v_a_2306_ = lean_ctor_get(v___x_2305_, 0);
lean_inc(v_a_2306_);
lean_dec_ref_known(v___x_2305_, 1);
v___x_2307_ = 0;
v___x_2308_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore(v_h_2211_, v_a_2306_, v___x_2307_, v_a_2213_, v_a_2214_, v_a_2215_, v_a_2216_, v_a_2217_, v_a_2218_, v_a_2219_);
if (lean_obj_tag(v___x_2308_) == 0)
{
lean_object* v_a_2309_; lean_object* v___x_2311_; uint8_t v_isShared_2312_; uint8_t v_isSharedCheck_2349_; 
v_a_2309_ = lean_ctor_get(v___x_2308_, 0);
v_isSharedCheck_2349_ = !lean_is_exclusive(v___x_2308_);
if (v_isSharedCheck_2349_ == 0)
{
v___x_2311_ = v___x_2308_;
v_isShared_2312_ = v_isSharedCheck_2349_;
goto v_resetjp_2310_;
}
else
{
lean_inc(v_a_2309_);
lean_dec(v___x_2308_);
v___x_2311_ = lean_box(0);
v_isShared_2312_ = v_isSharedCheck_2349_;
goto v_resetjp_2310_;
}
v_resetjp_2310_:
{
lean_object* v___x_2313_; lean_object* v_canon_2314_; lean_object* v_share_2315_; lean_object* v_maxFVar_2316_; lean_object* v_proofInstInfo_2317_; lean_object* v_proofInstInfoFVar_2318_; lean_object* v_letValue_2319_; lean_object* v_inferType_2320_; lean_object* v_getLevel_2321_; lean_object* v_congrInfo_2322_; lean_object* v_defEqI_2323_; lean_object* v_extensions_2324_; lean_object* v_issues_2325_; lean_object* v_instanceOverrides_2326_; uint8_t v_debug_2327_; lean_object* v___x_2329_; uint8_t v_isShared_2330_; uint8_t v_isSharedCheck_2348_; 
v___x_2313_ = lean_st_ref_take(v_a_2215_);
v_canon_2314_ = lean_ctor_get(v___x_2313_, 11);
v_share_2315_ = lean_ctor_get(v___x_2313_, 0);
v_maxFVar_2316_ = lean_ctor_get(v___x_2313_, 1);
v_proofInstInfo_2317_ = lean_ctor_get(v___x_2313_, 2);
v_proofInstInfoFVar_2318_ = lean_ctor_get(v___x_2313_, 3);
v_letValue_2319_ = lean_ctor_get(v___x_2313_, 4);
v_inferType_2320_ = lean_ctor_get(v___x_2313_, 5);
v_getLevel_2321_ = lean_ctor_get(v___x_2313_, 6);
v_congrInfo_2322_ = lean_ctor_get(v___x_2313_, 7);
v_defEqI_2323_ = lean_ctor_get(v___x_2313_, 8);
v_extensions_2324_ = lean_ctor_get(v___x_2313_, 9);
v_issues_2325_ = lean_ctor_get(v___x_2313_, 10);
v_instanceOverrides_2326_ = lean_ctor_get(v___x_2313_, 12);
v_debug_2327_ = lean_ctor_get_uint8(v___x_2313_, sizeof(void*)*13);
v_isSharedCheck_2348_ = !lean_is_exclusive(v___x_2313_);
if (v_isSharedCheck_2348_ == 0)
{
v___x_2329_ = v___x_2313_;
v_isShared_2330_ = v_isSharedCheck_2348_;
goto v_resetjp_2328_;
}
else
{
lean_inc(v_instanceOverrides_2326_);
lean_inc(v_canon_2314_);
lean_inc(v_issues_2325_);
lean_inc(v_extensions_2324_);
lean_inc(v_defEqI_2323_);
lean_inc(v_congrInfo_2322_);
lean_inc(v_getLevel_2321_);
lean_inc(v_inferType_2320_);
lean_inc(v_letValue_2319_);
lean_inc(v_proofInstInfoFVar_2318_);
lean_inc(v_proofInstInfo_2317_);
lean_inc(v_maxFVar_2316_);
lean_inc(v_share_2315_);
lean_dec(v___x_2313_);
v___x_2329_ = lean_box(0);
v_isShared_2330_ = v_isSharedCheck_2348_;
goto v_resetjp_2328_;
}
v_resetjp_2328_:
{
lean_object* v_cache_2331_; lean_object* v_cacheInType_2332_; lean_object* v___x_2334_; uint8_t v_isShared_2335_; uint8_t v_isSharedCheck_2347_; 
v_cache_2331_ = lean_ctor_get(v_canon_2314_, 0);
v_cacheInType_2332_ = lean_ctor_get(v_canon_2314_, 1);
v_isSharedCheck_2347_ = !lean_is_exclusive(v_canon_2314_);
if (v_isSharedCheck_2347_ == 0)
{
v___x_2334_ = v_canon_2314_;
v_isShared_2335_ = v_isSharedCheck_2347_;
goto v_resetjp_2333_;
}
else
{
lean_inc(v_cacheInType_2332_);
lean_inc(v_cache_2331_);
lean_dec(v_canon_2314_);
v___x_2334_ = lean_box(0);
v_isShared_2335_ = v_isSharedCheck_2347_;
goto v_resetjp_2333_;
}
v_resetjp_2333_:
{
lean_object* v___x_2336_; lean_object* v___x_2338_; 
lean_inc(v_a_2309_);
v___x_2336_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cacheInType_2332_, v_e_2212_, v_a_2309_);
if (v_isShared_2335_ == 0)
{
lean_ctor_set(v___x_2334_, 1, v___x_2336_);
v___x_2338_ = v___x_2334_;
goto v_reusejp_2337_;
}
else
{
lean_object* v_reuseFailAlloc_2346_; 
v_reuseFailAlloc_2346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2346_, 0, v_cache_2331_);
lean_ctor_set(v_reuseFailAlloc_2346_, 1, v___x_2336_);
v___x_2338_ = v_reuseFailAlloc_2346_;
goto v_reusejp_2337_;
}
v_reusejp_2337_:
{
lean_object* v___x_2340_; 
if (v_isShared_2330_ == 0)
{
lean_ctor_set(v___x_2329_, 11, v___x_2338_);
v___x_2340_ = v___x_2329_;
goto v_reusejp_2339_;
}
else
{
lean_object* v_reuseFailAlloc_2345_; 
v_reuseFailAlloc_2345_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_2345_, 0, v_share_2315_);
lean_ctor_set(v_reuseFailAlloc_2345_, 1, v_maxFVar_2316_);
lean_ctor_set(v_reuseFailAlloc_2345_, 2, v_proofInstInfo_2317_);
lean_ctor_set(v_reuseFailAlloc_2345_, 3, v_proofInstInfoFVar_2318_);
lean_ctor_set(v_reuseFailAlloc_2345_, 4, v_letValue_2319_);
lean_ctor_set(v_reuseFailAlloc_2345_, 5, v_inferType_2320_);
lean_ctor_set(v_reuseFailAlloc_2345_, 6, v_getLevel_2321_);
lean_ctor_set(v_reuseFailAlloc_2345_, 7, v_congrInfo_2322_);
lean_ctor_set(v_reuseFailAlloc_2345_, 8, v_defEqI_2323_);
lean_ctor_set(v_reuseFailAlloc_2345_, 9, v_extensions_2324_);
lean_ctor_set(v_reuseFailAlloc_2345_, 10, v_issues_2325_);
lean_ctor_set(v_reuseFailAlloc_2345_, 11, v___x_2338_);
lean_ctor_set(v_reuseFailAlloc_2345_, 12, v_instanceOverrides_2326_);
lean_ctor_set_uint8(v_reuseFailAlloc_2345_, sizeof(void*)*13, v_debug_2327_);
v___x_2340_ = v_reuseFailAlloc_2345_;
goto v_reusejp_2339_;
}
v_reusejp_2339_:
{
lean_object* v___x_2341_; lean_object* v___x_2343_; 
v___x_2341_ = lean_st_ref_put(v_a_2215_, v___x_2340_);
if (v_isShared_2312_ == 0)
{
v___x_2343_ = v___x_2311_;
goto v_reusejp_2342_;
}
else
{
lean_object* v_reuseFailAlloc_2344_; 
v_reuseFailAlloc_2344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2344_, 0, v_a_2309_);
v___x_2343_ = v_reuseFailAlloc_2344_;
goto v_reusejp_2342_;
}
v_reusejp_2342_:
{
return v___x_2343_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_e_2212_);
return v___x_2308_;
}
}
else
{
lean_dec_ref(v_e_2212_);
lean_dec_ref(v_h_2211_);
return v___x_2305_;
}
}
}
v___jp_2221_:
{
lean_object* v___x_2223_; lean_object* v_canon_2224_; lean_object* v_share_2225_; lean_object* v_maxFVar_2226_; lean_object* v_proofInstInfo_2227_; lean_object* v_proofInstInfoFVar_2228_; lean_object* v_letValue_2229_; lean_object* v_inferType_2230_; lean_object* v_getLevel_2231_; lean_object* v_congrInfo_2232_; lean_object* v_defEqI_2233_; lean_object* v_extensions_2234_; lean_object* v_issues_2235_; lean_object* v_instanceOverrides_2236_; uint8_t v_debug_2237_; lean_object* v___x_2239_; uint8_t v_isShared_2240_; uint8_t v_isSharedCheck_2256_; 
v___x_2223_ = lean_st_ref_take(v_a_2215_);
v_canon_2224_ = lean_ctor_get(v___x_2223_, 11);
v_share_2225_ = lean_ctor_get(v___x_2223_, 0);
v_maxFVar_2226_ = lean_ctor_get(v___x_2223_, 1);
v_proofInstInfo_2227_ = lean_ctor_get(v___x_2223_, 2);
v_proofInstInfoFVar_2228_ = lean_ctor_get(v___x_2223_, 3);
v_letValue_2229_ = lean_ctor_get(v___x_2223_, 4);
v_inferType_2230_ = lean_ctor_get(v___x_2223_, 5);
v_getLevel_2231_ = lean_ctor_get(v___x_2223_, 6);
v_congrInfo_2232_ = lean_ctor_get(v___x_2223_, 7);
v_defEqI_2233_ = lean_ctor_get(v___x_2223_, 8);
v_extensions_2234_ = lean_ctor_get(v___x_2223_, 9);
v_issues_2235_ = lean_ctor_get(v___x_2223_, 10);
v_instanceOverrides_2236_ = lean_ctor_get(v___x_2223_, 12);
v_debug_2237_ = lean_ctor_get_uint8(v___x_2223_, sizeof(void*)*13);
v_isSharedCheck_2256_ = !lean_is_exclusive(v___x_2223_);
if (v_isSharedCheck_2256_ == 0)
{
v___x_2239_ = v___x_2223_;
v_isShared_2240_ = v_isSharedCheck_2256_;
goto v_resetjp_2238_;
}
else
{
lean_inc(v_instanceOverrides_2236_);
lean_inc(v_canon_2224_);
lean_inc(v_issues_2235_);
lean_inc(v_extensions_2234_);
lean_inc(v_defEqI_2233_);
lean_inc(v_congrInfo_2232_);
lean_inc(v_getLevel_2231_);
lean_inc(v_inferType_2230_);
lean_inc(v_letValue_2229_);
lean_inc(v_proofInstInfoFVar_2228_);
lean_inc(v_proofInstInfo_2227_);
lean_inc(v_maxFVar_2226_);
lean_inc(v_share_2225_);
lean_dec(v___x_2223_);
v___x_2239_ = lean_box(0);
v_isShared_2240_ = v_isSharedCheck_2256_;
goto v_resetjp_2238_;
}
v_resetjp_2238_:
{
lean_object* v_cache_2241_; lean_object* v_cacheInType_2242_; lean_object* v___x_2244_; uint8_t v_isShared_2245_; uint8_t v_isSharedCheck_2255_; 
v_cache_2241_ = lean_ctor_get(v_canon_2224_, 0);
v_cacheInType_2242_ = lean_ctor_get(v_canon_2224_, 1);
v_isSharedCheck_2255_ = !lean_is_exclusive(v_canon_2224_);
if (v_isSharedCheck_2255_ == 0)
{
v___x_2244_ = v_canon_2224_;
v_isShared_2245_ = v_isSharedCheck_2255_;
goto v_resetjp_2243_;
}
else
{
lean_inc(v_cacheInType_2242_);
lean_inc(v_cache_2241_);
lean_dec(v_canon_2224_);
v___x_2244_ = lean_box(0);
v_isShared_2245_ = v_isSharedCheck_2255_;
goto v_resetjp_2243_;
}
v_resetjp_2243_:
{
lean_object* v___x_2246_; lean_object* v___x_2248_; 
lean_inc_ref(v_a_2222_);
v___x_2246_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cache_2241_, v_e_2212_, v_a_2222_);
if (v_isShared_2245_ == 0)
{
lean_ctor_set(v___x_2244_, 0, v___x_2246_);
v___x_2248_ = v___x_2244_;
goto v_reusejp_2247_;
}
else
{
lean_object* v_reuseFailAlloc_2254_; 
v_reuseFailAlloc_2254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2254_, 0, v___x_2246_);
lean_ctor_set(v_reuseFailAlloc_2254_, 1, v_cacheInType_2242_);
v___x_2248_ = v_reuseFailAlloc_2254_;
goto v_reusejp_2247_;
}
v_reusejp_2247_:
{
lean_object* v___x_2250_; 
if (v_isShared_2240_ == 0)
{
lean_ctor_set(v___x_2239_, 11, v___x_2248_);
v___x_2250_ = v___x_2239_;
goto v_reusejp_2249_;
}
else
{
lean_object* v_reuseFailAlloc_2253_; 
v_reuseFailAlloc_2253_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_2253_, 0, v_share_2225_);
lean_ctor_set(v_reuseFailAlloc_2253_, 1, v_maxFVar_2226_);
lean_ctor_set(v_reuseFailAlloc_2253_, 2, v_proofInstInfo_2227_);
lean_ctor_set(v_reuseFailAlloc_2253_, 3, v_proofInstInfoFVar_2228_);
lean_ctor_set(v_reuseFailAlloc_2253_, 4, v_letValue_2229_);
lean_ctor_set(v_reuseFailAlloc_2253_, 5, v_inferType_2230_);
lean_ctor_set(v_reuseFailAlloc_2253_, 6, v_getLevel_2231_);
lean_ctor_set(v_reuseFailAlloc_2253_, 7, v_congrInfo_2232_);
lean_ctor_set(v_reuseFailAlloc_2253_, 8, v_defEqI_2233_);
lean_ctor_set(v_reuseFailAlloc_2253_, 9, v_extensions_2234_);
lean_ctor_set(v_reuseFailAlloc_2253_, 10, v_issues_2235_);
lean_ctor_set(v_reuseFailAlloc_2253_, 11, v___x_2248_);
lean_ctor_set(v_reuseFailAlloc_2253_, 12, v_instanceOverrides_2236_);
lean_ctor_set_uint8(v_reuseFailAlloc_2253_, sizeof(void*)*13, v_debug_2237_);
v___x_2250_ = v_reuseFailAlloc_2253_;
goto v_reusejp_2249_;
}
v_reusejp_2249_:
{
lean_object* v___x_2251_; lean_object* v___x_2252_; 
v___x_2251_ = lean_st_ref_put(v_a_2215_, v___x_2250_);
v___x_2252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2252_, 0, v_a_2222_);
return v___x_2252_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0(lean_object* v___x_2350_, lean_object* v_snd_2351_, lean_object* v_a_2352_, uint8_t v___x_2353_, lean_object* v_fst_2354_, lean_object* v_f_2355_, lean_object* v___x_2356_, lean_object* v___x_2357_, lean_object* v___x_2358_, lean_object* v_____r_2359_, uint8_t v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_){
_start:
{
lean_object* v_arg_x27_2369_; lean_object* v___y_2393_; uint8_t v___y_2394_; lean_object* v___y_2395_; lean_object* v___y_2396_; lean_object* v___y_2397_; lean_object* v___y_2398_; lean_object* v___y_2399_; lean_object* v___y_2400_; lean_object* v___y_2401_; lean_object* v___y_2413_; uint8_t v___y_2414_; lean_object* v___y_2415_; lean_object* v___y_2416_; lean_object* v___y_2417_; lean_object* v___y_2418_; lean_object* v___y_2419_; lean_object* v___y_2420_; lean_object* v___y_2426_; uint8_t v___y_2427_; lean_object* v___y_2428_; lean_object* v___y_2429_; lean_object* v___y_2430_; lean_object* v___y_2431_; lean_object* v___y_2432_; lean_object* v___x_2452_; 
lean_inc_ref(v___x_2350_);
v___x_2452_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_shouldCanon(v___x_2358_, v_a_2352_, v___x_2350_, v___y_2363_, v___y_2364_, v___y_2365_, v___y_2366_);
if (lean_obj_tag(v___x_2452_) == 0)
{
lean_object* v_a_2453_; uint8_t v___x_2454_; 
v_a_2453_ = lean_ctor_get(v___x_2452_, 0);
lean_inc(v_a_2453_);
lean_dec_ref_known(v___x_2452_, 1);
v___x_2454_ = lean_unbox(v_a_2453_);
lean_dec(v_a_2453_);
switch(v___x_2454_)
{
case 0:
{
lean_object* v___x_2455_; 
lean_inc_ref(v___x_2350_);
v___x_2455_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType_x27(v___x_2350_, v___y_2360_, v___y_2361_, v___y_2362_, v___y_2363_, v___y_2364_, v___y_2365_, v___y_2366_);
if (lean_obj_tag(v___x_2455_) == 0)
{
lean_object* v_a_2456_; 
v_a_2456_ = lean_ctor_get(v___x_2455_, 0);
lean_inc(v_a_2456_);
lean_dec_ref_known(v___x_2455_, 1);
v_arg_x27_2369_ = v_a_2456_;
goto v___jp_2368_;
}
else
{
lean_object* v_a_2457_; lean_object* v___x_2459_; uint8_t v_isShared_2460_; uint8_t v_isSharedCheck_2464_; 
lean_dec(v_fst_2354_);
lean_dec(v_snd_2351_);
lean_dec_ref(v___x_2350_);
v_a_2457_ = lean_ctor_get(v___x_2455_, 0);
v_isSharedCheck_2464_ = !lean_is_exclusive(v___x_2455_);
if (v_isSharedCheck_2464_ == 0)
{
v___x_2459_ = v___x_2455_;
v_isShared_2460_ = v_isSharedCheck_2464_;
goto v_resetjp_2458_;
}
else
{
lean_inc(v_a_2457_);
lean_dec(v___x_2455_);
v___x_2459_ = lean_box(0);
v_isShared_2460_ = v_isSharedCheck_2464_;
goto v_resetjp_2458_;
}
v_resetjp_2458_:
{
lean_object* v___x_2462_; 
if (v_isShared_2460_ == 0)
{
v___x_2462_ = v___x_2459_;
goto v_reusejp_2461_;
}
else
{
lean_object* v_reuseFailAlloc_2463_; 
v_reuseFailAlloc_2463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2463_, 0, v_a_2457_);
v___x_2462_ = v_reuseFailAlloc_2463_;
goto v_reusejp_2461_;
}
v_reusejp_2461_:
{
return v___x_2462_;
}
}
}
}
case 1:
{
lean_object* v___x_2465_; 
lean_inc_ref(v___x_2350_);
v___x_2465_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v___x_2350_, v___y_2364_);
if (lean_obj_tag(v___x_2465_) == 0)
{
lean_object* v_a_2466_; lean_object* v___x_2467_; uint8_t v___x_2468_; 
v_a_2466_ = lean_ctor_get(v___x_2465_, 0);
lean_inc(v_a_2466_);
lean_dec_ref_known(v___x_2465_, 1);
v___x_2467_ = l_Lean_Expr_cleanupAnnotations(v_a_2466_);
lean_dec(v_a_2466_);
v___x_2468_ = l_Lean_Expr_isApp(v___x_2467_);
if (v___x_2468_ == 0)
{
lean_dec_ref(v___x_2467_);
goto v___jp_2443_;
}
else
{
lean_object* v___x_2469_; uint8_t v___x_2470_; 
v___x_2469_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2467_);
v___x_2470_ = l_Lean_Expr_isApp(v___x_2469_);
if (v___x_2470_ == 0)
{
lean_dec_ref(v___x_2469_);
lean_dec_ref(v___x_2467_);
goto v___jp_2443_;
}
else
{
lean_object* v_arg_2471_; lean_object* v_arg_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; uint8_t v___x_2475_; 
v_arg_2471_ = lean_ctor_get(v___x_2467_, 1);
lean_inc_ref(v_arg_2471_);
lean_dec_ref(v___x_2467_);
v_arg_2472_ = lean_ctor_get(v___x_2469_, 1);
lean_inc_ref(v_arg_2472_);
v___x_2473_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2469_);
lean_dec_ref(v___x_2469_);
v___x_2474_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___closed__1));
v___x_2475_ = l_Lean_Expr_isConstOf(v___x_2473_, v___x_2474_);
if (v___x_2475_ == 0)
{
lean_object* v___x_2476_; uint8_t v___x_2477_; 
v___x_2476_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__2));
v___x_2477_ = l_Lean_Expr_isConstOf(v___x_2473_, v___x_2476_);
if (v___x_2477_ == 0)
{
lean_dec_ref(v___x_2473_);
lean_dec_ref(v_arg_2472_);
lean_dec_ref(v_arg_2471_);
goto v___jp_2443_;
}
else
{
lean_object* v___x_2478_; 
lean_inc_ref(v___x_2350_);
v___x_2478_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec(v___x_2473_, v_arg_2472_, v_arg_2471_, v___x_2350_, v___y_2360_, v___y_2361_, v___y_2362_, v___y_2363_, v___y_2364_, v___y_2365_, v___y_2366_);
if (lean_obj_tag(v___x_2478_) == 0)
{
lean_object* v_a_2479_; 
v_a_2479_ = lean_ctor_get(v___x_2478_, 0);
lean_inc(v_a_2479_);
lean_dec_ref_known(v___x_2478_, 1);
v_arg_x27_2369_ = v_a_2479_;
goto v___jp_2368_;
}
else
{
lean_object* v_a_2480_; lean_object* v___x_2482_; uint8_t v_isShared_2483_; uint8_t v_isSharedCheck_2487_; 
lean_dec(v_fst_2354_);
lean_dec(v_snd_2351_);
lean_dec_ref(v___x_2350_);
v_a_2480_ = lean_ctor_get(v___x_2478_, 0);
v_isSharedCheck_2487_ = !lean_is_exclusive(v___x_2478_);
if (v_isSharedCheck_2487_ == 0)
{
v___x_2482_ = v___x_2478_;
v_isShared_2483_ = v_isSharedCheck_2487_;
goto v_resetjp_2481_;
}
else
{
lean_inc(v_a_2480_);
lean_dec(v___x_2478_);
v___x_2482_ = lean_box(0);
v_isShared_2483_ = v_isSharedCheck_2487_;
goto v_resetjp_2481_;
}
v_resetjp_2481_:
{
lean_object* v___x_2485_; 
if (v_isShared_2483_ == 0)
{
v___x_2485_ = v___x_2482_;
goto v_reusejp_2484_;
}
else
{
lean_object* v_reuseFailAlloc_2486_; 
v_reuseFailAlloc_2486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2486_, 0, v_a_2480_);
v___x_2485_ = v_reuseFailAlloc_2486_;
goto v_reusejp_2484_;
}
v_reusejp_2484_:
{
return v___x_2485_;
}
}
}
}
}
else
{
lean_object* v___x_2488_; 
lean_inc_ref(v___x_2350_);
v___x_2488_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstProp(v___x_2473_, v_arg_2472_, v_arg_2471_, v___x_2350_, v___y_2360_, v___y_2361_, v___y_2362_, v___y_2363_, v___y_2364_, v___y_2365_, v___y_2366_);
if (lean_obj_tag(v___x_2488_) == 0)
{
lean_object* v_a_2489_; 
v_a_2489_ = lean_ctor_get(v___x_2488_, 0);
lean_inc(v_a_2489_);
lean_dec_ref_known(v___x_2488_, 1);
v_arg_x27_2369_ = v_a_2489_;
goto v___jp_2368_;
}
else
{
lean_object* v_a_2490_; lean_object* v___x_2492_; uint8_t v_isShared_2493_; uint8_t v_isSharedCheck_2497_; 
lean_dec(v_fst_2354_);
lean_dec(v_snd_2351_);
lean_dec_ref(v___x_2350_);
v_a_2490_ = lean_ctor_get(v___x_2488_, 0);
v_isSharedCheck_2497_ = !lean_is_exclusive(v___x_2488_);
if (v_isSharedCheck_2497_ == 0)
{
v___x_2492_ = v___x_2488_;
v_isShared_2493_ = v_isSharedCheck_2497_;
goto v_resetjp_2491_;
}
else
{
lean_inc(v_a_2490_);
lean_dec(v___x_2488_);
v___x_2492_ = lean_box(0);
v_isShared_2493_ = v_isSharedCheck_2497_;
goto v_resetjp_2491_;
}
v_resetjp_2491_:
{
lean_object* v___x_2495_; 
if (v_isShared_2493_ == 0)
{
v___x_2495_ = v___x_2492_;
goto v_reusejp_2494_;
}
else
{
lean_object* v_reuseFailAlloc_2496_; 
v_reuseFailAlloc_2496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2496_, 0, v_a_2490_);
v___x_2495_ = v_reuseFailAlloc_2496_;
goto v_reusejp_2494_;
}
v_reusejp_2494_:
{
return v___x_2495_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2498_; lean_object* v___x_2500_; uint8_t v_isShared_2501_; uint8_t v_isSharedCheck_2505_; 
lean_dec(v_fst_2354_);
lean_dec(v_snd_2351_);
lean_dec_ref(v___x_2350_);
v_a_2498_ = lean_ctor_get(v___x_2465_, 0);
v_isSharedCheck_2505_ = !lean_is_exclusive(v___x_2465_);
if (v_isSharedCheck_2505_ == 0)
{
v___x_2500_ = v___x_2465_;
v_isShared_2501_ = v_isSharedCheck_2505_;
goto v_resetjp_2499_;
}
else
{
lean_inc(v_a_2498_);
lean_dec(v___x_2465_);
v___x_2500_ = lean_box(0);
v_isShared_2501_ = v_isSharedCheck_2505_;
goto v_resetjp_2499_;
}
v_resetjp_2499_:
{
lean_object* v___x_2503_; 
if (v_isShared_2501_ == 0)
{
v___x_2503_ = v___x_2500_;
goto v_reusejp_2502_;
}
else
{
lean_object* v_reuseFailAlloc_2504_; 
v_reuseFailAlloc_2504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2504_, 0, v_a_2498_);
v___x_2503_ = v_reuseFailAlloc_2504_;
goto v_reusejp_2502_;
}
v_reusejp_2502_:
{
return v___x_2503_;
}
}
}
}
default: 
{
goto v___jp_2381_;
}
}
}
else
{
lean_object* v_a_2506_; lean_object* v___x_2508_; uint8_t v_isShared_2509_; uint8_t v_isSharedCheck_2513_; 
lean_dec(v_fst_2354_);
lean_dec(v_snd_2351_);
lean_dec_ref(v___x_2350_);
v_a_2506_ = lean_ctor_get(v___x_2452_, 0);
v_isSharedCheck_2513_ = !lean_is_exclusive(v___x_2452_);
if (v_isSharedCheck_2513_ == 0)
{
v___x_2508_ = v___x_2452_;
v_isShared_2509_ = v_isSharedCheck_2513_;
goto v_resetjp_2507_;
}
else
{
lean_inc(v_a_2506_);
lean_dec(v___x_2452_);
v___x_2508_ = lean_box(0);
v_isShared_2509_ = v_isSharedCheck_2513_;
goto v_resetjp_2507_;
}
v_resetjp_2507_:
{
lean_object* v___x_2511_; 
if (v_isShared_2509_ == 0)
{
v___x_2511_ = v___x_2508_;
goto v_reusejp_2510_;
}
else
{
lean_object* v_reuseFailAlloc_2512_; 
v_reuseFailAlloc_2512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2512_, 0, v_a_2506_);
v___x_2511_ = v_reuseFailAlloc_2512_;
goto v_reusejp_2510_;
}
v_reusejp_2510_:
{
return v___x_2511_;
}
}
}
v___jp_2368_:
{
size_t v___x_2370_; size_t v___x_2371_; uint8_t v___x_2372_; 
v___x_2370_ = lean_ptr_addr(v___x_2350_);
lean_dec_ref(v___x_2350_);
v___x_2371_ = lean_ptr_addr(v_arg_x27_2369_);
v___x_2372_ = lean_usize_dec_eq(v___x_2370_, v___x_2371_);
if (v___x_2372_ == 0)
{
lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; 
lean_dec(v_fst_2354_);
v___x_2373_ = lean_array_fset(v_snd_2351_, v_a_2352_, v_arg_x27_2369_);
v___x_2374_ = lean_box(v___x_2353_);
v___x_2375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2375_, 0, v___x_2374_);
lean_ctor_set(v___x_2375_, 1, v___x_2373_);
v___x_2376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2376_, 0, v___x_2375_);
v___x_2377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2377_, 0, v___x_2376_);
return v___x_2377_;
}
else
{
lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; 
lean_dec_ref(v_arg_x27_2369_);
v___x_2378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2378_, 0, v_fst_2354_);
lean_ctor_set(v___x_2378_, 1, v_snd_2351_);
v___x_2379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2379_, 0, v___x_2378_);
v___x_2380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2380_, 0, v___x_2379_);
return v___x_2380_;
}
}
v___jp_2381_:
{
lean_object* v___x_2382_; 
lean_inc_ref(v___x_2350_);
v___x_2382_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v___x_2350_, v___y_2360_, v___y_2361_, v___y_2362_, v___y_2363_, v___y_2364_, v___y_2365_, v___y_2366_);
if (lean_obj_tag(v___x_2382_) == 0)
{
lean_object* v_a_2383_; 
v_a_2383_ = lean_ctor_get(v___x_2382_, 0);
lean_inc(v_a_2383_);
lean_dec_ref_known(v___x_2382_, 1);
v_arg_x27_2369_ = v_a_2383_;
goto v___jp_2368_;
}
else
{
lean_object* v_a_2384_; lean_object* v___x_2386_; uint8_t v_isShared_2387_; uint8_t v_isSharedCheck_2391_; 
lean_dec(v_fst_2354_);
lean_dec(v_snd_2351_);
lean_dec_ref(v___x_2350_);
v_a_2384_ = lean_ctor_get(v___x_2382_, 0);
v_isSharedCheck_2391_ = !lean_is_exclusive(v___x_2382_);
if (v_isSharedCheck_2391_ == 0)
{
v___x_2386_ = v___x_2382_;
v_isShared_2387_ = v_isSharedCheck_2391_;
goto v_resetjp_2385_;
}
else
{
lean_inc(v_a_2384_);
lean_dec(v___x_2382_);
v___x_2386_ = lean_box(0);
v_isShared_2387_ = v_isSharedCheck_2391_;
goto v_resetjp_2385_;
}
v_resetjp_2385_:
{
lean_object* v___x_2389_; 
if (v_isShared_2387_ == 0)
{
v___x_2389_ = v___x_2386_;
goto v_reusejp_2388_;
}
else
{
lean_object* v_reuseFailAlloc_2390_; 
v_reuseFailAlloc_2390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2390_, 0, v_a_2384_);
v___x_2389_ = v_reuseFailAlloc_2390_;
goto v_reusejp_2388_;
}
v_reusejp_2388_:
{
return v___x_2389_;
}
}
}
}
v___jp_2392_:
{
lean_object* v___x_2402_; 
lean_inc_ref(v___x_2350_);
v___x_2402_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonOfNatInst(v_f_2355_, v___y_2400_, v___y_2401_, v___x_2350_, v___y_2394_, v___y_2398_, v___y_2396_, v___y_2395_, v___y_2397_, v___y_2393_, v___y_2399_);
if (lean_obj_tag(v___x_2402_) == 0)
{
lean_object* v_a_2403_; 
v_a_2403_ = lean_ctor_get(v___x_2402_, 0);
lean_inc(v_a_2403_);
lean_dec_ref_known(v___x_2402_, 1);
v_arg_x27_2369_ = v_a_2403_;
goto v___jp_2368_;
}
else
{
lean_object* v_a_2404_; lean_object* v___x_2406_; uint8_t v_isShared_2407_; uint8_t v_isSharedCheck_2411_; 
lean_dec(v_fst_2354_);
lean_dec(v_snd_2351_);
lean_dec_ref(v___x_2350_);
v_a_2404_ = lean_ctor_get(v___x_2402_, 0);
v_isSharedCheck_2411_ = !lean_is_exclusive(v___x_2402_);
if (v_isSharedCheck_2411_ == 0)
{
v___x_2406_ = v___x_2402_;
v_isShared_2407_ = v_isSharedCheck_2411_;
goto v_resetjp_2405_;
}
else
{
lean_inc(v_a_2404_);
lean_dec(v___x_2402_);
v___x_2406_ = lean_box(0);
v_isShared_2407_ = v_isSharedCheck_2411_;
goto v_resetjp_2405_;
}
v_resetjp_2405_:
{
lean_object* v___x_2409_; 
if (v_isShared_2407_ == 0)
{
v___x_2409_ = v___x_2406_;
goto v_reusejp_2408_;
}
else
{
lean_object* v_reuseFailAlloc_2410_; 
v_reuseFailAlloc_2410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2410_, 0, v_a_2404_);
v___x_2409_ = v_reuseFailAlloc_2410_;
goto v_reusejp_2408_;
}
v_reusejp_2408_:
{
return v___x_2409_;
}
}
}
}
v___jp_2412_:
{
lean_object* v___x_2421_; uint8_t v___x_2422_; 
v___x_2421_ = lean_unsigned_to_nat(1u);
v___x_2422_ = lean_nat_dec_lt(v___x_2421_, v___x_2356_);
if (v___x_2422_ == 0)
{
lean_object* v___x_2423_; 
v___x_2423_ = l_outOfBounds___redArg(v___x_2357_);
v___y_2393_ = v___y_2413_;
v___y_2394_ = v___y_2414_;
v___y_2395_ = v___y_2416_;
v___y_2396_ = v___y_2415_;
v___y_2397_ = v___y_2418_;
v___y_2398_ = v___y_2417_;
v___y_2399_ = v___y_2419_;
v___y_2400_ = v___y_2420_;
v___y_2401_ = v___x_2423_;
goto v___jp_2392_;
}
else
{
lean_object* v___x_2424_; 
v___x_2424_ = lean_array_fget_borrowed(v_snd_2351_, v___x_2421_);
lean_inc(v___x_2424_);
v___y_2393_ = v___y_2413_;
v___y_2394_ = v___y_2414_;
v___y_2395_ = v___y_2416_;
v___y_2396_ = v___y_2415_;
v___y_2397_ = v___y_2418_;
v___y_2398_ = v___y_2417_;
v___y_2399_ = v___y_2419_;
v___y_2400_ = v___y_2420_;
v___y_2401_ = v___x_2424_;
goto v___jp_2392_;
}
}
v___jp_2425_:
{
lean_object* v___x_2433_; 
lean_inc_ref(v___x_2350_);
v___x_2433_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst(v___x_2350_, v___x_2353_, v___y_2427_, v___y_2431_, v___y_2429_, v___y_2428_, v___y_2430_, v___y_2426_, v___y_2432_);
if (lean_obj_tag(v___x_2433_) == 0)
{
lean_object* v_a_2434_; 
v_a_2434_ = lean_ctor_get(v___x_2433_, 0);
lean_inc(v_a_2434_);
lean_dec_ref_known(v___x_2433_, 1);
v_arg_x27_2369_ = v_a_2434_;
goto v___jp_2368_;
}
else
{
lean_object* v_a_2435_; lean_object* v___x_2437_; uint8_t v_isShared_2438_; uint8_t v_isSharedCheck_2442_; 
lean_dec(v_fst_2354_);
lean_dec(v_snd_2351_);
lean_dec_ref(v___x_2350_);
v_a_2435_ = lean_ctor_get(v___x_2433_, 0);
v_isSharedCheck_2442_ = !lean_is_exclusive(v___x_2433_);
if (v_isSharedCheck_2442_ == 0)
{
v___x_2437_ = v___x_2433_;
v_isShared_2438_ = v_isSharedCheck_2442_;
goto v_resetjp_2436_;
}
else
{
lean_inc(v_a_2435_);
lean_dec(v___x_2433_);
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
v___jp_2443_:
{
lean_object* v___x_2444_; uint8_t v___x_2445_; 
v___x_2444_ = lean_unsigned_to_nat(2u);
v___x_2445_ = lean_nat_dec_eq(v_a_2352_, v___x_2444_);
if (v___x_2445_ == 0)
{
v___y_2426_ = v___y_2365_;
v___y_2427_ = v___y_2360_;
v___y_2428_ = v___y_2363_;
v___y_2429_ = v___y_2362_;
v___y_2430_ = v___y_2364_;
v___y_2431_ = v___y_2361_;
v___y_2432_ = v___y_2366_;
goto v___jp_2425_;
}
else
{
lean_object* v___x_2446_; uint8_t v___x_2447_; 
v___x_2446_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__2));
v___x_2447_ = l_Lean_Expr_isConstOf(v_f_2355_, v___x_2446_);
if (v___x_2447_ == 0)
{
v___y_2426_ = v___y_2365_;
v___y_2427_ = v___y_2360_;
v___y_2428_ = v___y_2363_;
v___y_2429_ = v___y_2362_;
v___y_2430_ = v___y_2364_;
v___y_2431_ = v___y_2361_;
v___y_2432_ = v___y_2366_;
goto v___jp_2425_;
}
else
{
lean_object* v___x_2448_; uint8_t v___x_2449_; 
v___x_2448_ = lean_unsigned_to_nat(0u);
v___x_2449_ = lean_nat_dec_lt(v___x_2448_, v___x_2356_);
if (v___x_2449_ == 0)
{
lean_object* v___x_2450_; 
v___x_2450_ = l_outOfBounds___redArg(v___x_2357_);
v___y_2413_ = v___y_2365_;
v___y_2414_ = v___y_2360_;
v___y_2415_ = v___y_2362_;
v___y_2416_ = v___y_2363_;
v___y_2417_ = v___y_2361_;
v___y_2418_ = v___y_2364_;
v___y_2419_ = v___y_2366_;
v___y_2420_ = v___x_2450_;
goto v___jp_2412_;
}
else
{
lean_object* v___x_2451_; 
v___x_2451_ = lean_array_fget_borrowed(v_snd_2351_, v___x_2448_);
lean_inc(v___x_2451_);
v___y_2413_ = v___y_2365_;
v___y_2414_ = v___y_2360_;
v___y_2415_ = v___y_2362_;
v___y_2416_ = v___y_2363_;
v___y_2417_ = v___y_2361_;
v___y_2418_ = v___y_2364_;
v___y_2419_ = v___y_2366_;
v___y_2420_ = v___x_2451_;
goto v___jp_2412_;
}
}
}
}
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__2(void){
_start:
{
lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; 
v___x_2517_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__3_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_));
v___x_2518_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__1));
v___x_2519_ = l_Lean_Name_append(v___x_2518_, v___x_2517_);
return v___x_2519_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__4(void){
_start:
{
lean_object* v___x_2521_; lean_object* v___x_2522_; 
v___x_2521_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__3));
v___x_2522_ = l_Lean_stringToMessageData(v___x_2521_);
return v___x_2522_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__6(void){
_start:
{
lean_object* v___x_2524_; lean_object* v___x_2525_; 
v___x_2524_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__5));
v___x_2525_ = l_Lean_stringToMessageData(v___x_2524_);
return v___x_2525_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__8(void){
_start:
{
lean_object* v___x_2527_; lean_object* v___x_2528_; 
v___x_2527_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__7));
v___x_2528_ = l_Lean_stringToMessageData(v___x_2527_);
return v___x_2528_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg(lean_object* v_upperBound_2529_, lean_object* v___x_2530_, lean_object* v_f_2531_, lean_object* v___x_2532_, lean_object* v_a_2533_, lean_object* v_b_2534_, uint8_t v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_){
_start:
{
lean_object* v___y_2544_; uint8_t v___x_2566_; 
v___x_2566_ = lean_nat_dec_lt(v_a_2533_, v_upperBound_2529_);
if (v___x_2566_ == 0)
{
lean_object* v___x_2567_; 
lean_dec(v_a_2533_);
v___x_2567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2567_, 0, v_b_2534_);
return v___x_2567_;
}
else
{
lean_object* v_toCold_2568_; lean_object* v_options_2569_; lean_object* v_fst_2570_; lean_object* v_snd_2571_; lean_object* v___x_2573_; uint8_t v_isShared_2574_; uint8_t v_isSharedCheck_2636_; 
v_toCold_2568_ = lean_ctor_get(v___y_2540_, 0);
v_options_2569_ = lean_ctor_get(v_toCold_2568_, 2);
v_fst_2570_ = lean_ctor_get(v_b_2534_, 0);
v_snd_2571_ = lean_ctor_get(v_b_2534_, 1);
v_isSharedCheck_2636_ = !lean_is_exclusive(v_b_2534_);
if (v_isSharedCheck_2636_ == 0)
{
v___x_2573_ = v_b_2534_;
v_isShared_2574_ = v_isSharedCheck_2636_;
goto v_resetjp_2572_;
}
else
{
lean_inc(v_snd_2571_);
lean_inc(v_fst_2570_);
lean_dec(v_b_2534_);
v___x_2573_ = lean_box(0);
v_isShared_2574_ = v_isSharedCheck_2636_;
goto v_resetjp_2572_;
}
v_resetjp_2572_:
{
lean_object* v_inheritedTraceOptions_2575_; uint8_t v_hasTrace_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; 
v_inheritedTraceOptions_2575_ = lean_ctor_get(v_toCold_2568_, 11);
v_hasTrace_2576_ = lean_ctor_get_uint8(v_options_2569_, sizeof(void*)*1);
v___x_2577_ = l_Lean_instInhabitedExpr;
v___x_2578_ = lean_array_fget(v_snd_2571_, v_a_2533_);
if (v_hasTrace_2576_ == 0)
{
lean_del_object(v___x_2573_);
goto v___jp_2579_;
}
else
{
lean_object* v___x_2582_; lean_object* v___x_2583_; uint8_t v___x_2584_; 
v___x_2582_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn___closed__3_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_));
v___x_2583_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__2, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__2);
v___x_2584_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2575_, v_options_2569_, v___x_2583_);
if (v___x_2584_ == 0)
{
lean_del_object(v___x_2573_);
goto v___jp_2579_;
}
else
{
lean_object* v___x_2585_; 
lean_inc(v___x_2578_);
v___x_2585_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_shouldCanon(v___x_2532_, v_a_2533_, v___x_2578_, v___y_2538_, v___y_2539_, v___y_2540_, v___y_2541_);
if (lean_obj_tag(v___x_2585_) == 0)
{
lean_object* v_a_2586_; lean_object* v___x_2587_; 
v_a_2586_ = lean_ctor_get(v___x_2585_, 0);
lean_inc(v_a_2586_);
lean_dec_ref_known(v___x_2585_, 1);
lean_inc(v___y_2541_);
lean_inc_ref(v___y_2540_);
lean_inc(v___y_2539_);
lean_inc_ref(v___y_2538_);
lean_inc(v___x_2578_);
v___x_2587_ = lean_infer_type(v___x_2578_, v___y_2538_, v___y_2539_, v___y_2540_, v___y_2541_);
if (lean_obj_tag(v___x_2587_) == 0)
{
lean_object* v_a_2588_; lean_object* v___x_2589_; lean_object* v___y_2591_; uint8_t v___x_2615_; 
v_a_2588_ = lean_ctor_get(v___x_2587_, 0);
lean_inc(v_a_2588_);
lean_dec_ref_known(v___x_2587_, 1);
v___x_2589_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__4, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__4_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__4);
v___x_2615_ = lean_unbox(v_a_2586_);
lean_dec(v_a_2586_);
switch(v___x_2615_)
{
case 0:
{
lean_object* v___x_2616_; 
v___x_2616_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__1));
v___y_2591_ = v___x_2616_;
goto v___jp_2590_;
}
case 1:
{
lean_object* v___x_2617_; 
v___x_2617_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__3));
v___y_2591_ = v___x_2617_;
goto v___jp_2590_;
}
case 2:
{
lean_object* v___x_2618_; 
v___x_2618_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__5));
v___y_2591_ = v___x_2618_;
goto v___jp_2590_;
}
default: 
{
lean_object* v___x_2619_; 
v___x_2619_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instReprShouldCanonResult___lam__0___closed__7));
v___y_2591_ = v___x_2619_;
goto v___jp_2590_;
}
}
v___jp_2590_:
{
lean_object* v___x_2592_; lean_object* v___x_2594_; 
lean_inc(v___y_2591_);
v___x_2592_ = l_Lean_MessageData_ofFormat(v___y_2591_);
if (v_isShared_2574_ == 0)
{
lean_ctor_set_tag(v___x_2573_, 7);
lean_ctor_set(v___x_2573_, 1, v___x_2592_);
lean_ctor_set(v___x_2573_, 0, v___x_2589_);
v___x_2594_ = v___x_2573_;
goto v_reusejp_2593_;
}
else
{
lean_object* v_reuseFailAlloc_2614_; 
v_reuseFailAlloc_2614_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2614_, 0, v___x_2589_);
lean_ctor_set(v_reuseFailAlloc_2614_, 1, v___x_2592_);
v___x_2594_ = v_reuseFailAlloc_2614_;
goto v_reusejp_2593_;
}
v_reusejp_2593_:
{
lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; 
v___x_2595_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__6);
v___x_2596_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2596_, 0, v___x_2594_);
lean_ctor_set(v___x_2596_, 1, v___x_2595_);
lean_inc(v___x_2578_);
v___x_2597_ = l_Lean_MessageData_ofExpr(v___x_2578_);
v___x_2598_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2598_, 0, v___x_2596_);
lean_ctor_set(v___x_2598_, 1, v___x_2597_);
v___x_2599_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__8, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__8_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___closed__8);
v___x_2600_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2600_, 0, v___x_2598_);
lean_ctor_set(v___x_2600_, 1, v___x_2599_);
v___x_2601_ = l_Lean_MessageData_ofExpr(v_a_2588_);
v___x_2602_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2602_, 0, v___x_2600_);
lean_ctor_set(v___x_2602_, 1, v___x_2601_);
v___x_2603_ = l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg(v___x_2582_, v___x_2602_, v___y_2538_, v___y_2539_, v___y_2540_, v___y_2541_);
if (lean_obj_tag(v___x_2603_) == 0)
{
lean_object* v_a_2604_; lean_object* v___x_2605_; 
v_a_2604_ = lean_ctor_get(v___x_2603_, 0);
lean_inc(v_a_2604_);
lean_dec_ref_known(v___x_2603_, 1);
v___x_2605_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0(v___x_2578_, v_snd_2571_, v_a_2533_, v___x_2566_, v_fst_2570_, v_f_2531_, v___x_2530_, v___x_2577_, v___x_2532_, v_a_2604_, v___y_2535_, v___y_2536_, v___y_2537_, v___y_2538_, v___y_2539_, v___y_2540_, v___y_2541_);
v___y_2544_ = v___x_2605_;
goto v___jp_2543_;
}
else
{
lean_object* v_a_2606_; lean_object* v___x_2608_; uint8_t v_isShared_2609_; uint8_t v_isSharedCheck_2613_; 
lean_dec(v___x_2578_);
lean_dec(v_snd_2571_);
lean_dec(v_fst_2570_);
lean_dec(v_a_2533_);
v_a_2606_ = lean_ctor_get(v___x_2603_, 0);
v_isSharedCheck_2613_ = !lean_is_exclusive(v___x_2603_);
if (v_isSharedCheck_2613_ == 0)
{
v___x_2608_ = v___x_2603_;
v_isShared_2609_ = v_isSharedCheck_2613_;
goto v_resetjp_2607_;
}
else
{
lean_inc(v_a_2606_);
lean_dec(v___x_2603_);
v___x_2608_ = lean_box(0);
v_isShared_2609_ = v_isSharedCheck_2613_;
goto v_resetjp_2607_;
}
v_resetjp_2607_:
{
lean_object* v___x_2611_; 
if (v_isShared_2609_ == 0)
{
v___x_2611_ = v___x_2608_;
goto v_reusejp_2610_;
}
else
{
lean_object* v_reuseFailAlloc_2612_; 
v_reuseFailAlloc_2612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2612_, 0, v_a_2606_);
v___x_2611_ = v_reuseFailAlloc_2612_;
goto v_reusejp_2610_;
}
v_reusejp_2610_:
{
return v___x_2611_;
}
}
}
}
}
}
else
{
lean_object* v_a_2620_; lean_object* v___x_2622_; uint8_t v_isShared_2623_; uint8_t v_isSharedCheck_2627_; 
lean_dec(v_a_2586_);
lean_dec(v___x_2578_);
lean_del_object(v___x_2573_);
lean_dec(v_snd_2571_);
lean_dec(v_fst_2570_);
lean_dec(v_a_2533_);
v_a_2620_ = lean_ctor_get(v___x_2587_, 0);
v_isSharedCheck_2627_ = !lean_is_exclusive(v___x_2587_);
if (v_isSharedCheck_2627_ == 0)
{
v___x_2622_ = v___x_2587_;
v_isShared_2623_ = v_isSharedCheck_2627_;
goto v_resetjp_2621_;
}
else
{
lean_inc(v_a_2620_);
lean_dec(v___x_2587_);
v___x_2622_ = lean_box(0);
v_isShared_2623_ = v_isSharedCheck_2627_;
goto v_resetjp_2621_;
}
v_resetjp_2621_:
{
lean_object* v___x_2625_; 
if (v_isShared_2623_ == 0)
{
v___x_2625_ = v___x_2622_;
goto v_reusejp_2624_;
}
else
{
lean_object* v_reuseFailAlloc_2626_; 
v_reuseFailAlloc_2626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2626_, 0, v_a_2620_);
v___x_2625_ = v_reuseFailAlloc_2626_;
goto v_reusejp_2624_;
}
v_reusejp_2624_:
{
return v___x_2625_;
}
}
}
}
else
{
lean_object* v_a_2628_; lean_object* v___x_2630_; uint8_t v_isShared_2631_; uint8_t v_isSharedCheck_2635_; 
lean_dec(v___x_2578_);
lean_del_object(v___x_2573_);
lean_dec(v_snd_2571_);
lean_dec(v_fst_2570_);
lean_dec(v_a_2533_);
v_a_2628_ = lean_ctor_get(v___x_2585_, 0);
v_isSharedCheck_2635_ = !lean_is_exclusive(v___x_2585_);
if (v_isSharedCheck_2635_ == 0)
{
v___x_2630_ = v___x_2585_;
v_isShared_2631_ = v_isSharedCheck_2635_;
goto v_resetjp_2629_;
}
else
{
lean_inc(v_a_2628_);
lean_dec(v___x_2585_);
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
}
v___jp_2579_:
{
lean_object* v___x_2580_; lean_object* v___x_2581_; 
v___x_2580_ = lean_box(0);
v___x_2581_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0(v___x_2578_, v_snd_2571_, v_a_2533_, v___x_2566_, v_fst_2570_, v_f_2531_, v___x_2530_, v___x_2577_, v___x_2532_, v___x_2580_, v___y_2535_, v___y_2536_, v___y_2537_, v___y_2538_, v___y_2539_, v___y_2540_, v___y_2541_);
v___y_2544_ = v___x_2581_;
goto v___jp_2543_;
}
}
}
v___jp_2543_:
{
if (lean_obj_tag(v___y_2544_) == 0)
{
lean_object* v_a_2545_; lean_object* v___x_2547_; uint8_t v_isShared_2548_; uint8_t v_isSharedCheck_2557_; 
v_a_2545_ = lean_ctor_get(v___y_2544_, 0);
v_isSharedCheck_2557_ = !lean_is_exclusive(v___y_2544_);
if (v_isSharedCheck_2557_ == 0)
{
v___x_2547_ = v___y_2544_;
v_isShared_2548_ = v_isSharedCheck_2557_;
goto v_resetjp_2546_;
}
else
{
lean_inc(v_a_2545_);
lean_dec(v___y_2544_);
v___x_2547_ = lean_box(0);
v_isShared_2548_ = v_isSharedCheck_2557_;
goto v_resetjp_2546_;
}
v_resetjp_2546_:
{
if (lean_obj_tag(v_a_2545_) == 0)
{
lean_object* v_a_2549_; lean_object* v___x_2551_; 
lean_dec(v_a_2533_);
v_a_2549_ = lean_ctor_get(v_a_2545_, 0);
lean_inc(v_a_2549_);
lean_dec_ref_known(v_a_2545_, 1);
if (v_isShared_2548_ == 0)
{
lean_ctor_set(v___x_2547_, 0, v_a_2549_);
v___x_2551_ = v___x_2547_;
goto v_reusejp_2550_;
}
else
{
lean_object* v_reuseFailAlloc_2552_; 
v_reuseFailAlloc_2552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2552_, 0, v_a_2549_);
v___x_2551_ = v_reuseFailAlloc_2552_;
goto v_reusejp_2550_;
}
v_reusejp_2550_:
{
return v___x_2551_;
}
}
else
{
lean_object* v_a_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; 
lean_del_object(v___x_2547_);
v_a_2553_ = lean_ctor_get(v_a_2545_, 0);
lean_inc(v_a_2553_);
lean_dec_ref_known(v_a_2545_, 1);
v___x_2554_ = lean_unsigned_to_nat(1u);
v___x_2555_ = lean_nat_add(v_a_2533_, v___x_2554_);
lean_dec(v_a_2533_);
v_a_2533_ = v___x_2555_;
v_b_2534_ = v_a_2553_;
goto _start;
}
}
}
else
{
lean_object* v_a_2558_; lean_object* v___x_2560_; uint8_t v_isShared_2561_; uint8_t v_isSharedCheck_2565_; 
lean_dec(v_a_2533_);
v_a_2558_ = lean_ctor_get(v___y_2544_, 0);
v_isSharedCheck_2565_ = !lean_is_exclusive(v___y_2544_);
if (v_isSharedCheck_2565_ == 0)
{
v___x_2560_ = v___y_2544_;
v_isShared_2561_ = v_isSharedCheck_2565_;
goto v_resetjp_2559_;
}
else
{
lean_inc(v_a_2558_);
lean_dec(v___y_2544_);
v___x_2560_ = lean_box(0);
v_isShared_2561_ = v_isSharedCheck_2565_;
goto v_resetjp_2559_;
}
v_resetjp_2559_:
{
lean_object* v___x_2563_; 
if (v_isShared_2561_ == 0)
{
v___x_2563_ = v___x_2560_;
goto v_reusejp_2562_;
}
else
{
lean_object* v_reuseFailAlloc_2564_; 
v_reuseFailAlloc_2564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2564_, 0, v_a_2558_);
v___x_2563_ = v_reuseFailAlloc_2564_;
goto v_reusejp_2562_;
}
v_reusejp_2562_:
{
return v___x_2563_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13(lean_object* v_e_2637_, lean_object* v_x_2638_, lean_object* v_x_2639_, lean_object* v_x_2640_, uint8_t v___y_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_){
_start:
{
lean_object* v___y_2650_; uint8_t v_modified_2651_; lean_object* v_f_2652_; uint8_t v___y_2653_; lean_object* v___y_2654_; lean_object* v___y_2655_; lean_object* v___y_2656_; lean_object* v___y_2657_; lean_object* v___y_2658_; lean_object* v___y_2659_; lean_object* v_args_2708_; uint8_t v_modified_2709_; uint8_t v___y_2710_; lean_object* v___y_2711_; lean_object* v___y_2712_; lean_object* v___y_2713_; lean_object* v___y_2714_; lean_object* v___y_2715_; lean_object* v___y_2716_; uint8_t v___y_2724_; lean_object* v___y_2725_; lean_object* v___y_2726_; lean_object* v___y_2727_; lean_object* v___y_2728_; lean_object* v___y_2729_; lean_object* v___y_2730_; 
if (lean_obj_tag(v_x_2638_) == 5)
{
lean_object* v_fn_2745_; lean_object* v_arg_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; 
v_fn_2745_ = lean_ctor_get(v_x_2638_, 0);
lean_inc_ref(v_fn_2745_);
v_arg_2746_ = lean_ctor_get(v_x_2638_, 1);
lean_inc_ref(v_arg_2746_);
lean_dec_ref_known(v_x_2638_, 2);
v___x_2747_ = lean_array_set(v_x_2639_, v_x_2640_, v_arg_2746_);
v___x_2748_ = lean_unsigned_to_nat(1u);
v___x_2749_ = lean_nat_sub(v_x_2640_, v___x_2748_);
lean_dec(v_x_2640_);
v_x_2638_ = v_fn_2745_;
v_x_2639_ = v___x_2747_;
v_x_2640_ = v___x_2749_;
goto _start;
}
else
{
lean_object* v___x_2751_; lean_object* v___x_2752_; uint8_t v___x_2753_; 
lean_dec(v_x_2640_);
v___x_2751_ = lean_array_get_size(v_x_2639_);
v___x_2752_ = lean_unsigned_to_nat(2u);
v___x_2753_ = lean_nat_dec_eq(v___x_2751_, v___x_2752_);
if (v___x_2753_ == 0)
{
v___y_2724_ = v___y_2641_;
v___y_2725_ = v___y_2642_;
v___y_2726_ = v___y_2643_;
v___y_2727_ = v___y_2644_;
v___y_2728_ = v___y_2645_;
v___y_2729_ = v___y_2646_;
v___y_2730_ = v___y_2647_;
goto v___jp_2723_;
}
else
{
lean_object* v___x_2754_; lean_object* v___x_2755_; uint8_t v___x_2756_; 
v___x_2754_ = l_Lean_instInhabitedExpr;
v___x_2755_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___closed__1));
v___x_2756_ = l_Lean_Expr_isConstOf(v_x_2638_, v___x_2755_);
if (v___x_2756_ == 0)
{
lean_object* v___x_2757_; uint8_t v___x_2758_; 
v___x_2757_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__2));
v___x_2758_ = l_Lean_Expr_isConstOf(v_x_2638_, v___x_2757_);
if (v___x_2758_ == 0)
{
v___y_2724_ = v___y_2641_;
v___y_2725_ = v___y_2642_;
v___y_2726_ = v___y_2643_;
v___y_2727_ = v___y_2644_;
v___y_2728_ = v___y_2645_;
v___y_2729_ = v___y_2646_;
v___y_2730_ = v___y_2647_;
goto v___jp_2723_;
}
else
{
lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; 
v___x_2759_ = lean_unsigned_to_nat(0u);
v___x_2760_ = lean_array_get(v___x_2754_, v_x_2639_, v___x_2759_);
v___x_2761_ = lean_unsigned_to_nat(1u);
v___x_2762_ = lean_array_get(v___x_2754_, v_x_2639_, v___x_2761_);
lean_dec_ref(v_x_2639_);
v___x_2763_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27(v_x_2638_, v___x_2760_, v___x_2762_, v_e_2637_, v___y_2641_, v___y_2642_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_);
return v___x_2763_;
}
}
else
{
lean_object* v___x_2764_; lean_object* v_prop_2765_; lean_object* v___x_2766_; 
v___x_2764_ = lean_unsigned_to_nat(0u);
v_prop_2765_ = lean_array_get_borrowed(v___x_2754_, v_x_2639_, v___x_2764_);
lean_inc(v_prop_2765_);
v___x_2766_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_prop_2765_, v___y_2641_, v___y_2642_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_);
if (lean_obj_tag(v___x_2766_) == 0)
{
lean_object* v_a_2767_; lean_object* v___x_2769_; uint8_t v_isShared_2770_; uint8_t v_isSharedCheck_2783_; 
v_a_2767_ = lean_ctor_get(v___x_2766_, 0);
v_isSharedCheck_2783_ = !lean_is_exclusive(v___x_2766_);
if (v_isSharedCheck_2783_ == 0)
{
v___x_2769_ = v___x_2766_;
v_isShared_2770_ = v_isSharedCheck_2783_;
goto v_resetjp_2768_;
}
else
{
lean_inc(v_a_2767_);
lean_dec(v___x_2766_);
v___x_2769_ = lean_box(0);
v_isShared_2770_ = v_isSharedCheck_2783_;
goto v_resetjp_2768_;
}
v_resetjp_2768_:
{
size_t v___x_2771_; size_t v___x_2772_; uint8_t v___x_2773_; 
v___x_2771_ = lean_ptr_addr(v_prop_2765_);
v___x_2772_ = lean_ptr_addr(v_a_2767_);
v___x_2773_ = lean_usize_dec_eq(v___x_2771_, v___x_2772_);
if (v___x_2773_ == 0)
{
lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2778_; 
lean_dec_ref(v_e_2637_);
v___x_2774_ = lean_unsigned_to_nat(1u);
v___x_2775_ = lean_array_get(v___x_2754_, v_x_2639_, v___x_2774_);
lean_dec_ref(v_x_2639_);
v___x_2776_ = l_Lean_mkAppB(v_x_2638_, v_a_2767_, v___x_2775_);
if (v_isShared_2770_ == 0)
{
lean_ctor_set(v___x_2769_, 0, v___x_2776_);
v___x_2778_ = v___x_2769_;
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
else
{
lean_object* v___x_2781_; 
lean_dec(v_a_2767_);
lean_dec_ref(v_x_2639_);
lean_dec_ref(v_x_2638_);
if (v_isShared_2770_ == 0)
{
lean_ctor_set(v___x_2769_, 0, v_e_2637_);
v___x_2781_ = v___x_2769_;
goto v_reusejp_2780_;
}
else
{
lean_object* v_reuseFailAlloc_2782_; 
v_reuseFailAlloc_2782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2782_, 0, v_e_2637_);
v___x_2781_ = v_reuseFailAlloc_2782_;
goto v_reusejp_2780_;
}
v_reusejp_2780_:
{
return v___x_2781_;
}
}
}
}
else
{
lean_dec_ref(v_x_2639_);
lean_dec_ref(v_x_2638_);
lean_dec_ref(v_e_2637_);
return v___x_2766_;
}
}
}
}
v___jp_2649_:
{
lean_object* v___x_2660_; lean_object* v___x_2661_; 
v___x_2660_ = lean_box(0);
lean_inc_ref(v_f_2652_);
v___x_2661_ = l_Lean_Meta_getFunInfo(v_f_2652_, v___x_2660_, v___y_2656_, v___y_2657_, v___y_2658_, v___y_2659_);
if (lean_obj_tag(v___x_2661_) == 0)
{
lean_object* v_a_2662_; lean_object* v_paramInfo_2663_; lean_object* v___x_2665_; uint8_t v_isShared_2666_; uint8_t v_isSharedCheck_2697_; 
v_a_2662_ = lean_ctor_get(v___x_2661_, 0);
lean_inc(v_a_2662_);
lean_dec_ref_known(v___x_2661_, 1);
v_paramInfo_2663_ = lean_ctor_get(v_a_2662_, 0);
v_isSharedCheck_2697_ = !lean_is_exclusive(v_a_2662_);
if (v_isSharedCheck_2697_ == 0)
{
lean_object* v_unused_2698_; 
v_unused_2698_ = lean_ctor_get(v_a_2662_, 1);
lean_dec(v_unused_2698_);
v___x_2665_ = v_a_2662_;
v_isShared_2666_ = v_isSharedCheck_2697_;
goto v_resetjp_2664_;
}
else
{
lean_inc(v_paramInfo_2663_);
lean_dec(v_a_2662_);
v___x_2665_ = lean_box(0);
v_isShared_2666_ = v_isSharedCheck_2697_;
goto v_resetjp_2664_;
}
v_resetjp_2664_:
{
lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2671_; 
v___x_2667_ = lean_array_get_size(v___y_2650_);
v___x_2668_ = lean_unsigned_to_nat(0u);
v___x_2669_ = lean_box(v_modified_2651_);
if (v_isShared_2666_ == 0)
{
lean_ctor_set(v___x_2665_, 1, v___y_2650_);
lean_ctor_set(v___x_2665_, 0, v___x_2669_);
v___x_2671_ = v___x_2665_;
goto v_reusejp_2670_;
}
else
{
lean_object* v_reuseFailAlloc_2696_; 
v_reuseFailAlloc_2696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2696_, 0, v___x_2669_);
lean_ctor_set(v_reuseFailAlloc_2696_, 1, v___y_2650_);
v___x_2671_ = v_reuseFailAlloc_2696_;
goto v_reusejp_2670_;
}
v_reusejp_2670_:
{
lean_object* v___x_2672_; 
v___x_2672_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg(v___x_2667_, v___x_2667_, v_f_2652_, v_paramInfo_2663_, v___x_2668_, v___x_2671_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_, v___y_2657_, v___y_2658_, v___y_2659_);
lean_dec_ref(v_paramInfo_2663_);
if (lean_obj_tag(v___x_2672_) == 0)
{
lean_object* v_a_2673_; lean_object* v___x_2675_; uint8_t v_isShared_2676_; uint8_t v_isSharedCheck_2687_; 
v_a_2673_ = lean_ctor_get(v___x_2672_, 0);
v_isSharedCheck_2687_ = !lean_is_exclusive(v___x_2672_);
if (v_isSharedCheck_2687_ == 0)
{
v___x_2675_ = v___x_2672_;
v_isShared_2676_ = v_isSharedCheck_2687_;
goto v_resetjp_2674_;
}
else
{
lean_inc(v_a_2673_);
lean_dec(v___x_2672_);
v___x_2675_ = lean_box(0);
v_isShared_2676_ = v_isSharedCheck_2687_;
goto v_resetjp_2674_;
}
v_resetjp_2674_:
{
lean_object* v_fst_2677_; uint8_t v___x_2678_; 
v_fst_2677_ = lean_ctor_get(v_a_2673_, 0);
v___x_2678_ = lean_unbox(v_fst_2677_);
if (v___x_2678_ == 0)
{
lean_object* v___x_2680_; 
lean_dec(v_a_2673_);
lean_dec_ref(v_f_2652_);
if (v_isShared_2676_ == 0)
{
lean_ctor_set(v___x_2675_, 0, v_e_2637_);
v___x_2680_ = v___x_2675_;
goto v_reusejp_2679_;
}
else
{
lean_object* v_reuseFailAlloc_2681_; 
v_reuseFailAlloc_2681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2681_, 0, v_e_2637_);
v___x_2680_ = v_reuseFailAlloc_2681_;
goto v_reusejp_2679_;
}
v_reusejp_2679_:
{
return v___x_2680_;
}
}
else
{
lean_object* v_snd_2682_; lean_object* v___x_2683_; lean_object* v___x_2685_; 
lean_dec_ref(v_e_2637_);
v_snd_2682_ = lean_ctor_get(v_a_2673_, 1);
lean_inc(v_snd_2682_);
lean_dec(v_a_2673_);
v___x_2683_ = l_Lean_mkAppN(v_f_2652_, v_snd_2682_);
lean_dec(v_snd_2682_);
if (v_isShared_2676_ == 0)
{
lean_ctor_set(v___x_2675_, 0, v___x_2683_);
v___x_2685_ = v___x_2675_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2686_; 
v_reuseFailAlloc_2686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2686_, 0, v___x_2683_);
v___x_2685_ = v_reuseFailAlloc_2686_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
return v___x_2685_;
}
}
}
}
else
{
lean_object* v_a_2688_; lean_object* v___x_2690_; uint8_t v_isShared_2691_; uint8_t v_isSharedCheck_2695_; 
lean_dec_ref(v_f_2652_);
lean_dec_ref(v_e_2637_);
v_a_2688_ = lean_ctor_get(v___x_2672_, 0);
v_isSharedCheck_2695_ = !lean_is_exclusive(v___x_2672_);
if (v_isSharedCheck_2695_ == 0)
{
v___x_2690_ = v___x_2672_;
v_isShared_2691_ = v_isSharedCheck_2695_;
goto v_resetjp_2689_;
}
else
{
lean_inc(v_a_2688_);
lean_dec(v___x_2672_);
v___x_2690_ = lean_box(0);
v_isShared_2691_ = v_isSharedCheck_2695_;
goto v_resetjp_2689_;
}
v_resetjp_2689_:
{
lean_object* v___x_2693_; 
if (v_isShared_2691_ == 0)
{
v___x_2693_ = v___x_2690_;
goto v_reusejp_2692_;
}
else
{
lean_object* v_reuseFailAlloc_2694_; 
v_reuseFailAlloc_2694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2694_, 0, v_a_2688_);
v___x_2693_ = v_reuseFailAlloc_2694_;
goto v_reusejp_2692_;
}
v_reusejp_2692_:
{
return v___x_2693_;
}
}
}
}
}
}
else
{
lean_object* v_a_2699_; lean_object* v___x_2701_; uint8_t v_isShared_2702_; uint8_t v_isSharedCheck_2706_; 
lean_dec_ref(v_f_2652_);
lean_dec_ref(v___y_2650_);
lean_dec_ref(v_e_2637_);
v_a_2699_ = lean_ctor_get(v___x_2661_, 0);
v_isSharedCheck_2706_ = !lean_is_exclusive(v___x_2661_);
if (v_isSharedCheck_2706_ == 0)
{
v___x_2701_ = v___x_2661_;
v_isShared_2702_ = v_isSharedCheck_2706_;
goto v_resetjp_2700_;
}
else
{
lean_inc(v_a_2699_);
lean_dec(v___x_2661_);
v___x_2701_ = lean_box(0);
v_isShared_2702_ = v_isSharedCheck_2706_;
goto v_resetjp_2700_;
}
v_resetjp_2700_:
{
lean_object* v___x_2704_; 
if (v_isShared_2702_ == 0)
{
v___x_2704_ = v___x_2701_;
goto v_reusejp_2703_;
}
else
{
lean_object* v_reuseFailAlloc_2705_; 
v_reuseFailAlloc_2705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2705_, 0, v_a_2699_);
v___x_2704_ = v_reuseFailAlloc_2705_;
goto v_reusejp_2703_;
}
v_reusejp_2703_:
{
return v___x_2704_;
}
}
}
}
v___jp_2707_:
{
lean_object* v___x_2717_; 
lean_inc_ref(v_x_2638_);
v___x_2717_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_x_2638_, v___y_2710_, v___y_2711_, v___y_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_);
if (lean_obj_tag(v___x_2717_) == 0)
{
lean_object* v_a_2718_; size_t v___x_2719_; size_t v___x_2720_; uint8_t v___x_2721_; 
v_a_2718_ = lean_ctor_get(v___x_2717_, 0);
lean_inc(v_a_2718_);
lean_dec_ref_known(v___x_2717_, 1);
v___x_2719_ = lean_ptr_addr(v_x_2638_);
v___x_2720_ = lean_ptr_addr(v_a_2718_);
v___x_2721_ = lean_usize_dec_eq(v___x_2719_, v___x_2720_);
if (v___x_2721_ == 0)
{
uint8_t v___x_2722_; 
lean_dec_ref(v_x_2638_);
v___x_2722_ = 1;
v___y_2650_ = v_args_2708_;
v_modified_2651_ = v___x_2722_;
v_f_2652_ = v_a_2718_;
v___y_2653_ = v___y_2710_;
v___y_2654_ = v___y_2711_;
v___y_2655_ = v___y_2712_;
v___y_2656_ = v___y_2713_;
v___y_2657_ = v___y_2714_;
v___y_2658_ = v___y_2715_;
v___y_2659_ = v___y_2716_;
goto v___jp_2649_;
}
else
{
lean_dec(v_a_2718_);
v___y_2650_ = v_args_2708_;
v_modified_2651_ = v_modified_2709_;
v_f_2652_ = v_x_2638_;
v___y_2653_ = v___y_2710_;
v___y_2654_ = v___y_2711_;
v___y_2655_ = v___y_2712_;
v___y_2656_ = v___y_2713_;
v___y_2657_ = v___y_2714_;
v___y_2658_ = v___y_2715_;
v___y_2659_ = v___y_2716_;
goto v___jp_2649_;
}
}
else
{
lean_dec_ref(v_args_2708_);
lean_dec_ref(v_x_2638_);
lean_dec_ref(v_e_2637_);
return v___x_2717_;
}
}
v___jp_2723_:
{
uint8_t v_modified_2731_; lean_object* v___x_2732_; uint8_t v___x_2733_; 
v_modified_2731_ = 0;
v___x_2732_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__2));
v___x_2733_ = l_Lean_Expr_isConstOf(v_x_2638_, v___x_2732_);
if (v___x_2733_ == 0)
{
v_args_2708_ = v_x_2639_;
v_modified_2709_ = v_modified_2731_;
v___y_2710_ = v___y_2724_;
v___y_2711_ = v___y_2725_;
v___y_2712_ = v___y_2726_;
v___y_2713_ = v___y_2727_;
v___y_2714_ = v___y_2728_;
v___y_2715_ = v___y_2729_;
v___y_2716_ = v___y_2730_;
goto v___jp_2707_;
}
else
{
lean_object* v___x_2734_; 
lean_inc_ref(v_x_2639_);
v___x_2734_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_normOfNatArgs_x3f___redArg(v_x_2639_, v___y_2728_);
if (lean_obj_tag(v___x_2734_) == 0)
{
lean_object* v_a_2735_; 
v_a_2735_ = lean_ctor_get(v___x_2734_, 0);
lean_inc(v_a_2735_);
lean_dec_ref_known(v___x_2734_, 1);
if (lean_obj_tag(v_a_2735_) == 1)
{
lean_object* v_val_2736_; 
lean_dec_ref(v_x_2639_);
v_val_2736_ = lean_ctor_get(v_a_2735_, 0);
lean_inc(v_val_2736_);
lean_dec_ref_known(v_a_2735_, 1);
v_args_2708_ = v_val_2736_;
v_modified_2709_ = v___x_2733_;
v___y_2710_ = v___y_2724_;
v___y_2711_ = v___y_2725_;
v___y_2712_ = v___y_2726_;
v___y_2713_ = v___y_2727_;
v___y_2714_ = v___y_2728_;
v___y_2715_ = v___y_2729_;
v___y_2716_ = v___y_2730_;
goto v___jp_2707_;
}
else
{
lean_dec(v_a_2735_);
v_args_2708_ = v_x_2639_;
v_modified_2709_ = v_modified_2731_;
v___y_2710_ = v___y_2724_;
v___y_2711_ = v___y_2725_;
v___y_2712_ = v___y_2726_;
v___y_2713_ = v___y_2727_;
v___y_2714_ = v___y_2728_;
v___y_2715_ = v___y_2729_;
v___y_2716_ = v___y_2730_;
goto v___jp_2707_;
}
}
else
{
lean_object* v_a_2737_; lean_object* v___x_2739_; uint8_t v_isShared_2740_; uint8_t v_isSharedCheck_2744_; 
lean_dec_ref(v_x_2639_);
lean_dec_ref(v_x_2638_);
lean_dec_ref(v_e_2637_);
v_a_2737_ = lean_ctor_get(v___x_2734_, 0);
v_isSharedCheck_2744_ = !lean_is_exclusive(v___x_2734_);
if (v_isSharedCheck_2744_ == 0)
{
v___x_2739_ = v___x_2734_;
v_isShared_2740_ = v_isSharedCheck_2744_;
goto v_resetjp_2738_;
}
else
{
lean_inc(v_a_2737_);
lean_dec(v___x_2734_);
v___x_2739_ = lean_box(0);
v_isShared_2740_ = v_isSharedCheck_2744_;
goto v_resetjp_2738_;
}
v_resetjp_2738_:
{
lean_object* v___x_2742_; 
if (v_isShared_2740_ == 0)
{
v___x_2742_ = v___x_2739_;
goto v_reusejp_2741_;
}
else
{
lean_object* v_reuseFailAlloc_2743_; 
v_reuseFailAlloc_2743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2743_, 0, v_a_2737_);
v___x_2742_ = v_reuseFailAlloc_2743_;
goto v_reusejp_2741_;
}
v_reusejp_2741_:
{
return v___x_2742_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault(lean_object* v_e_2784_, uint8_t v_a_2785_, lean_object* v_a_2786_, lean_object* v_a_2787_, lean_object* v_a_2788_, lean_object* v_a_2789_, lean_object* v_a_2790_, lean_object* v_a_2791_){
_start:
{
lean_object* v_dummy_2793_; lean_object* v_nargs_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; 
v_dummy_2793_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__0, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg___closed__0);
v_nargs_2794_ = l_Lean_Expr_getAppNumArgs(v_e_2784_);
lean_inc(v_nargs_2794_);
v___x_2795_ = lean_mk_array(v_nargs_2794_, v_dummy_2793_);
v___x_2796_ = lean_unsigned_to_nat(1u);
v___x_2797_ = lean_nat_sub(v_nargs_2794_, v___x_2796_);
lean_dec(v_nargs_2794_);
lean_inc_ref(v_e_2784_);
v___x_2798_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13(v_e_2784_, v_e_2784_, v___x_2795_, v___x_2797_, v_a_2785_, v_a_2786_, v_a_2787_, v_a_2788_, v_a_2789_, v_a_2790_, v_a_2791_);
return v___x_2798_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce(lean_object* v_e_2799_, uint8_t v_a_2800_, lean_object* v_a_2801_, lean_object* v_a_2802_, lean_object* v_a_2803_, lean_object* v_a_2804_, lean_object* v_a_2805_, lean_object* v_a_2806_){
_start:
{
uint8_t v___x_2828_; 
v___x_2828_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isNatArithApp(v_e_2799_);
if (v___x_2828_ == 0)
{
lean_object* v_f_2829_; 
v_f_2829_ = l_Lean_Expr_getAppFn(v_e_2799_);
if (lean_obj_tag(v_f_2829_) == 4)
{
lean_object* v_declName_2830_; lean_object* v___x_2831_; uint8_t v___x_2832_; 
v_declName_2830_ = lean_ctor_get(v_f_2829_, 0);
lean_inc(v_declName_2830_);
lean_dec_ref_known(v_f_2829_, 2);
v___x_2831_ = ((lean_object*)(l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__2));
v___x_2832_ = lean_name_eq(v_declName_2830_, v___x_2831_);
if (v___x_2832_ == 0)
{
lean_object* v___x_2833_; uint8_t v___x_2834_; 
v___x_2833_ = ((lean_object*)(l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__6));
v___x_2834_ = lean_name_eq(v_declName_2830_, v___x_2833_);
if (v___x_2834_ == 0)
{
lean_object* v___x_2835_; uint8_t v___x_2836_; 
v___x_2835_ = ((lean_object*)(l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__4));
v___x_2836_ = lean_name_eq(v_declName_2830_, v___x_2835_);
if (v___x_2836_ == 0)
{
lean_object* v___x_2837_; uint8_t v___x_2838_; 
v___x_2837_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_getNestedNatValue_x3f___closed__2));
v___x_2838_ = lean_name_eq(v_declName_2830_, v___x_2837_);
if (v___x_2838_ == 0)
{
lean_object* v___x_2839_; uint8_t v___x_2840_; 
v___x_2839_ = ((lean_object*)(l_Lean_Meta_Sym_Canon_normNumLit_x3f___closed__1));
v___x_2840_ = lean_name_eq(v_declName_2830_, v___x_2839_);
if (v___x_2840_ == 0)
{
lean_object* v___x_2841_; 
v___x_2841_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9___redArg(v_declName_2830_, v_a_2806_);
if (lean_obj_tag(v___x_2841_) == 0)
{
lean_object* v_a_2842_; lean_object* v___x_2844_; uint8_t v_isShared_2845_; uint8_t v_isSharedCheck_2871_; 
v_a_2842_ = lean_ctor_get(v___x_2841_, 0);
v_isSharedCheck_2871_ = !lean_is_exclusive(v___x_2841_);
if (v_isSharedCheck_2871_ == 0)
{
v___x_2844_ = v___x_2841_;
v_isShared_2845_ = v_isSharedCheck_2871_;
goto v_resetjp_2843_;
}
else
{
lean_inc(v_a_2842_);
lean_dec(v___x_2841_);
v___x_2844_ = lean_box(0);
v_isShared_2845_ = v_isSharedCheck_2871_;
goto v_resetjp_2843_;
}
v_resetjp_2843_:
{
if (lean_obj_tag(v_a_2842_) == 1)
{
lean_object* v_val_2846_; lean_object* v___x_2847_; 
lean_del_object(v___x_2844_);
v_val_2846_ = lean_ctor_get(v_a_2842_, 0);
lean_inc(v_val_2846_);
lean_dec_ref_known(v_a_2842_, 1);
lean_inc_ref(v_e_2799_);
v___x_2847_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_reduceProjFn_x3f___redArg(v_val_2846_, v_e_2799_, v_a_2803_, v_a_2804_, v_a_2805_, v_a_2806_);
lean_dec(v_val_2846_);
if (lean_obj_tag(v___x_2847_) == 0)
{
lean_object* v_a_2848_; lean_object* v___x_2850_; uint8_t v_isShared_2851_; uint8_t v_isSharedCheck_2859_; 
v_a_2848_ = lean_ctor_get(v___x_2847_, 0);
v_isSharedCheck_2859_ = !lean_is_exclusive(v___x_2847_);
if (v_isSharedCheck_2859_ == 0)
{
v___x_2850_ = v___x_2847_;
v_isShared_2851_ = v_isSharedCheck_2859_;
goto v_resetjp_2849_;
}
else
{
lean_inc(v_a_2848_);
lean_dec(v___x_2847_);
v___x_2850_ = lean_box(0);
v_isShared_2851_ = v_isSharedCheck_2859_;
goto v_resetjp_2849_;
}
v_resetjp_2849_:
{
if (lean_obj_tag(v_a_2848_) == 0)
{
lean_object* v___x_2853_; 
if (v_isShared_2851_ == 0)
{
lean_ctor_set(v___x_2850_, 0, v_e_2799_);
v___x_2853_ = v___x_2850_;
goto v_reusejp_2852_;
}
else
{
lean_object* v_reuseFailAlloc_2854_; 
v_reuseFailAlloc_2854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2854_, 0, v_e_2799_);
v___x_2853_ = v_reuseFailAlloc_2854_;
goto v_reusejp_2852_;
}
v_reusejp_2852_:
{
return v___x_2853_;
}
}
else
{
lean_object* v_val_2855_; lean_object* v___x_2857_; 
lean_dec_ref(v_e_2799_);
v_val_2855_ = lean_ctor_get(v_a_2848_, 0);
lean_inc(v_val_2855_);
lean_dec_ref_known(v_a_2848_, 1);
if (v_isShared_2851_ == 0)
{
lean_ctor_set(v___x_2850_, 0, v_val_2855_);
v___x_2857_ = v___x_2850_;
goto v_reusejp_2856_;
}
else
{
lean_object* v_reuseFailAlloc_2858_; 
v_reuseFailAlloc_2858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2858_, 0, v_val_2855_);
v___x_2857_ = v_reuseFailAlloc_2858_;
goto v_reusejp_2856_;
}
v_reusejp_2856_:
{
return v___x_2857_;
}
}
}
}
else
{
lean_object* v_a_2860_; lean_object* v___x_2862_; uint8_t v_isShared_2863_; uint8_t v_isSharedCheck_2867_; 
lean_dec_ref(v_e_2799_);
v_a_2860_ = lean_ctor_get(v___x_2847_, 0);
v_isSharedCheck_2867_ = !lean_is_exclusive(v___x_2847_);
if (v_isSharedCheck_2867_ == 0)
{
v___x_2862_ = v___x_2847_;
v_isShared_2863_ = v_isSharedCheck_2867_;
goto v_resetjp_2861_;
}
else
{
lean_inc(v_a_2860_);
lean_dec(v___x_2847_);
v___x_2862_ = lean_box(0);
v_isShared_2863_ = v_isSharedCheck_2867_;
goto v_resetjp_2861_;
}
v_resetjp_2861_:
{
lean_object* v___x_2865_; 
if (v_isShared_2863_ == 0)
{
v___x_2865_ = v___x_2862_;
goto v_reusejp_2864_;
}
else
{
lean_object* v_reuseFailAlloc_2866_; 
v_reuseFailAlloc_2866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2866_, 0, v_a_2860_);
v___x_2865_ = v_reuseFailAlloc_2866_;
goto v_reusejp_2864_;
}
v_reusejp_2864_:
{
return v___x_2865_;
}
}
}
}
else
{
lean_object* v___x_2869_; 
lean_dec(v_a_2842_);
if (v_isShared_2845_ == 0)
{
lean_ctor_set(v___x_2844_, 0, v_e_2799_);
v___x_2869_ = v___x_2844_;
goto v_reusejp_2868_;
}
else
{
lean_object* v_reuseFailAlloc_2870_; 
v_reuseFailAlloc_2870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2870_, 0, v_e_2799_);
v___x_2869_ = v_reuseFailAlloc_2870_;
goto v_reusejp_2868_;
}
v_reusejp_2868_:
{
return v___x_2869_;
}
}
}
}
else
{
lean_object* v_a_2872_; lean_object* v___x_2874_; uint8_t v_isShared_2875_; uint8_t v_isSharedCheck_2879_; 
lean_dec_ref(v_e_2799_);
v_a_2872_ = lean_ctor_get(v___x_2841_, 0);
v_isSharedCheck_2879_ = !lean_is_exclusive(v___x_2841_);
if (v_isSharedCheck_2879_ == 0)
{
v___x_2874_ = v___x_2841_;
v_isShared_2875_ = v_isSharedCheck_2879_;
goto v_resetjp_2873_;
}
else
{
lean_inc(v_a_2872_);
lean_dec(v___x_2841_);
v___x_2874_ = lean_box(0);
v_isShared_2875_ = v_isSharedCheck_2879_;
goto v_resetjp_2873_;
}
v_resetjp_2873_:
{
lean_object* v___x_2877_; 
if (v_isShared_2875_ == 0)
{
v___x_2877_ = v___x_2874_;
goto v_reusejp_2876_;
}
else
{
lean_object* v_reuseFailAlloc_2878_; 
v_reuseFailAlloc_2878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2878_, 0, v_a_2872_);
v___x_2877_ = v_reuseFailAlloc_2878_;
goto v_reusejp_2876_;
}
v_reusejp_2876_:
{
return v___x_2877_;
}
}
}
}
else
{
lean_dec(v_declName_2830_);
goto v___jp_2808_;
}
}
else
{
lean_dec(v_declName_2830_);
goto v___jp_2808_;
}
}
else
{
lean_dec(v_declName_2830_);
goto v___jp_2808_;
}
}
else
{
lean_dec(v_declName_2830_);
goto v___jp_2808_;
}
}
else
{
lean_dec(v_declName_2830_);
goto v___jp_2808_;
}
}
else
{
lean_object* v___x_2880_; 
lean_dec_ref(v_f_2829_);
v___x_2880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2880_, 0, v_e_2799_);
return v___x_2880_;
}
}
else
{
lean_object* v___x_2881_; lean_object* v___x_2882_; 
lean_inc_ref(v_e_2799_);
v___x_2881_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_evalNat_x3f___boxed), 8, 1);
lean_closure_set(v___x_2881_, 0, v_e_2799_);
v___x_2882_ = l_Lean_Meta_Sym_SymM_run___redArg(v___x_2881_, v_a_2803_, v_a_2804_, v_a_2805_, v_a_2806_);
if (lean_obj_tag(v___x_2882_) == 0)
{
lean_object* v_a_2883_; lean_object* v___x_2885_; uint8_t v_isShared_2886_; uint8_t v_isSharedCheck_2916_; 
v_a_2883_ = lean_ctor_get(v___x_2882_, 0);
v_isSharedCheck_2916_ = !lean_is_exclusive(v___x_2882_);
if (v_isSharedCheck_2916_ == 0)
{
v___x_2885_ = v___x_2882_;
v_isShared_2886_ = v_isSharedCheck_2916_;
goto v_resetjp_2884_;
}
else
{
lean_inc(v_a_2883_);
lean_dec(v___x_2882_);
v___x_2885_ = lean_box(0);
v_isShared_2886_ = v_isSharedCheck_2916_;
goto v_resetjp_2884_;
}
v_resetjp_2884_:
{
if (lean_obj_tag(v_a_2883_) == 1)
{
lean_object* v_val_2887_; lean_object* v___x_2888_; lean_object* v___x_2890_; 
lean_dec_ref(v_e_2799_);
v_val_2887_ = lean_ctor_get(v_a_2883_, 0);
lean_inc(v_val_2887_);
lean_dec_ref_known(v_a_2883_, 1);
v___x_2888_ = l_Lean_mkNatLit(v_val_2887_);
if (v_isShared_2886_ == 0)
{
lean_ctor_set(v___x_2885_, 0, v___x_2888_);
v___x_2890_ = v___x_2885_;
goto v_reusejp_2889_;
}
else
{
lean_object* v_reuseFailAlloc_2891_; 
v_reuseFailAlloc_2891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2891_, 0, v___x_2888_);
v___x_2890_ = v_reuseFailAlloc_2891_;
goto v_reusejp_2889_;
}
v_reusejp_2889_:
{
return v___x_2890_;
}
}
else
{
lean_object* v___x_2892_; 
lean_del_object(v___x_2885_);
lean_dec(v_a_2883_);
lean_inc_ref(v_e_2799_);
v___x_2892_ = l_Lean_Meta_Sym_Arith_isOffset_x3f(v_e_2799_, v_a_2801_, v_a_2802_, v_a_2803_, v_a_2804_, v_a_2805_, v_a_2806_);
if (lean_obj_tag(v___x_2892_) == 0)
{
lean_object* v_a_2893_; lean_object* v___x_2895_; uint8_t v_isShared_2896_; uint8_t v_isSharedCheck_2907_; 
v_a_2893_ = lean_ctor_get(v___x_2892_, 0);
v_isSharedCheck_2907_ = !lean_is_exclusive(v___x_2892_);
if (v_isSharedCheck_2907_ == 0)
{
v___x_2895_ = v___x_2892_;
v_isShared_2896_ = v_isSharedCheck_2907_;
goto v_resetjp_2894_;
}
else
{
lean_inc(v_a_2893_);
lean_dec(v___x_2892_);
v___x_2895_ = lean_box(0);
v_isShared_2896_ = v_isSharedCheck_2907_;
goto v_resetjp_2894_;
}
v_resetjp_2894_:
{
if (lean_obj_tag(v_a_2893_) == 1)
{
lean_object* v_val_2897_; lean_object* v_fst_2898_; lean_object* v_snd_2899_; lean_object* v___x_2900_; lean_object* v___x_2902_; 
lean_dec_ref(v_e_2799_);
v_val_2897_ = lean_ctor_get(v_a_2893_, 0);
lean_inc(v_val_2897_);
lean_dec_ref_known(v_a_2893_, 1);
v_fst_2898_ = lean_ctor_get(v_val_2897_, 0);
lean_inc(v_fst_2898_);
v_snd_2899_ = lean_ctor_get(v_val_2897_, 1);
lean_inc(v_snd_2899_);
lean_dec(v_val_2897_);
v___x_2900_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_mkOffset(v_fst_2898_, v_snd_2899_);
if (v_isShared_2896_ == 0)
{
lean_ctor_set(v___x_2895_, 0, v___x_2900_);
v___x_2902_ = v___x_2895_;
goto v_reusejp_2901_;
}
else
{
lean_object* v_reuseFailAlloc_2903_; 
v_reuseFailAlloc_2903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2903_, 0, v___x_2900_);
v___x_2902_ = v_reuseFailAlloc_2903_;
goto v_reusejp_2901_;
}
v_reusejp_2901_:
{
return v___x_2902_;
}
}
else
{
lean_object* v___x_2905_; 
lean_dec(v_a_2893_);
if (v_isShared_2896_ == 0)
{
lean_ctor_set(v___x_2895_, 0, v_e_2799_);
v___x_2905_ = v___x_2895_;
goto v_reusejp_2904_;
}
else
{
lean_object* v_reuseFailAlloc_2906_; 
v_reuseFailAlloc_2906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2906_, 0, v_e_2799_);
v___x_2905_ = v_reuseFailAlloc_2906_;
goto v_reusejp_2904_;
}
v_reusejp_2904_:
{
return v___x_2905_;
}
}
}
}
else
{
lean_object* v_a_2908_; lean_object* v___x_2910_; uint8_t v_isShared_2911_; uint8_t v_isSharedCheck_2915_; 
lean_dec_ref(v_e_2799_);
v_a_2908_ = lean_ctor_get(v___x_2892_, 0);
v_isSharedCheck_2915_ = !lean_is_exclusive(v___x_2892_);
if (v_isSharedCheck_2915_ == 0)
{
v___x_2910_ = v___x_2892_;
v_isShared_2911_ = v_isSharedCheck_2915_;
goto v_resetjp_2909_;
}
else
{
lean_inc(v_a_2908_);
lean_dec(v___x_2892_);
v___x_2910_ = lean_box(0);
v_isShared_2911_ = v_isSharedCheck_2915_;
goto v_resetjp_2909_;
}
v_resetjp_2909_:
{
lean_object* v___x_2913_; 
if (v_isShared_2911_ == 0)
{
v___x_2913_ = v___x_2910_;
goto v_reusejp_2912_;
}
else
{
lean_object* v_reuseFailAlloc_2914_; 
v_reuseFailAlloc_2914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2914_, 0, v_a_2908_);
v___x_2913_ = v_reuseFailAlloc_2914_;
goto v_reusejp_2912_;
}
v_reusejp_2912_:
{
return v___x_2913_;
}
}
}
}
}
}
else
{
lean_object* v_a_2917_; lean_object* v___x_2919_; uint8_t v_isShared_2920_; uint8_t v_isSharedCheck_2924_; 
lean_dec_ref(v_e_2799_);
v_a_2917_ = lean_ctor_get(v___x_2882_, 0);
v_isSharedCheck_2924_ = !lean_is_exclusive(v___x_2882_);
if (v_isSharedCheck_2924_ == 0)
{
v___x_2919_ = v___x_2882_;
v_isShared_2920_ = v_isSharedCheck_2924_;
goto v_resetjp_2918_;
}
else
{
lean_inc(v_a_2917_);
lean_dec(v___x_2882_);
v___x_2919_ = lean_box(0);
v_isShared_2920_ = v_isSharedCheck_2924_;
goto v_resetjp_2918_;
}
v_resetjp_2918_:
{
lean_object* v___x_2922_; 
if (v_isShared_2920_ == 0)
{
v___x_2922_ = v___x_2919_;
goto v_reusejp_2921_;
}
else
{
lean_object* v_reuseFailAlloc_2923_; 
v_reuseFailAlloc_2923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2923_, 0, v_a_2917_);
v___x_2922_ = v_reuseFailAlloc_2923_;
goto v_reusejp_2921_;
}
v_reusejp_2921_:
{
return v___x_2922_;
}
}
}
}
v___jp_2808_:
{
lean_object* v___x_2809_; 
lean_inc_ref(v_e_2799_);
v___x_2809_ = l_Lean_Meta_Sym_Canon_normNumLit_x3f(v_e_2799_, v_a_2803_, v_a_2804_, v_a_2805_, v_a_2806_);
if (lean_obj_tag(v___x_2809_) == 0)
{
lean_object* v_a_2810_; lean_object* v___x_2812_; uint8_t v_isShared_2813_; uint8_t v_isSharedCheck_2819_; 
v_a_2810_ = lean_ctor_get(v___x_2809_, 0);
v_isSharedCheck_2819_ = !lean_is_exclusive(v___x_2809_);
if (v_isSharedCheck_2819_ == 0)
{
v___x_2812_ = v___x_2809_;
v_isShared_2813_ = v_isSharedCheck_2819_;
goto v_resetjp_2811_;
}
else
{
lean_inc(v_a_2810_);
lean_dec(v___x_2809_);
v___x_2812_ = lean_box(0);
v_isShared_2813_ = v_isSharedCheck_2819_;
goto v_resetjp_2811_;
}
v_resetjp_2811_:
{
if (lean_obj_tag(v_a_2810_) == 1)
{
lean_object* v_val_2814_; lean_object* v___x_2815_; 
lean_del_object(v___x_2812_);
lean_dec_ref(v_e_2799_);
v_val_2814_ = lean_ctor_get(v_a_2810_, 0);
lean_inc(v_val_2814_);
lean_dec_ref_known(v_a_2810_, 1);
v___x_2815_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_val_2814_, v_a_2800_, v_a_2801_, v_a_2802_, v_a_2803_, v_a_2804_, v_a_2805_, v_a_2806_);
return v___x_2815_;
}
else
{
lean_object* v___x_2817_; 
lean_dec(v_a_2810_);
if (v_isShared_2813_ == 0)
{
lean_ctor_set(v___x_2812_, 0, v_e_2799_);
v___x_2817_ = v___x_2812_;
goto v_reusejp_2816_;
}
else
{
lean_object* v_reuseFailAlloc_2818_; 
v_reuseFailAlloc_2818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2818_, 0, v_e_2799_);
v___x_2817_ = v_reuseFailAlloc_2818_;
goto v_reusejp_2816_;
}
v_reusejp_2816_:
{
return v___x_2817_;
}
}
}
}
else
{
lean_object* v_a_2820_; lean_object* v___x_2822_; uint8_t v_isShared_2823_; uint8_t v_isSharedCheck_2827_; 
lean_dec_ref(v_e_2799_);
v_a_2820_ = lean_ctor_get(v___x_2809_, 0);
v_isSharedCheck_2827_ = !lean_is_exclusive(v___x_2809_);
if (v_isSharedCheck_2827_ == 0)
{
v___x_2822_ = v___x_2809_;
v_isShared_2823_ = v_isSharedCheck_2827_;
goto v_resetjp_2821_;
}
else
{
lean_inc(v_a_2820_);
lean_dec(v___x_2809_);
v___x_2822_ = lean_box(0);
v_isShared_2823_ = v_isSharedCheck_2827_;
goto v_resetjp_2821_;
}
v_resetjp_2821_:
{
lean_object* v___x_2825_; 
if (v_isShared_2823_ == 0)
{
v___x_2825_ = v___x_2822_;
goto v_reusejp_2824_;
}
else
{
lean_object* v_reuseFailAlloc_2826_; 
v_reuseFailAlloc_2826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2826_, 0, v_a_2820_);
v___x_2825_ = v_reuseFailAlloc_2826_;
goto v_reusejp_2824_;
}
v_reusejp_2824_:
{
return v___x_2825_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppAndPost(lean_object* v_e_2925_, uint8_t v_a_2926_, lean_object* v_a_2927_, lean_object* v_a_2928_, lean_object* v_a_2929_, lean_object* v_a_2930_, lean_object* v_a_2931_, lean_object* v_a_2932_){
_start:
{
lean_object* v___x_2934_; 
v___x_2934_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault(v_e_2925_, v_a_2926_, v_a_2927_, v_a_2928_, v_a_2929_, v_a_2930_, v_a_2931_, v_a_2932_);
if (lean_obj_tag(v___x_2934_) == 0)
{
lean_object* v_a_2935_; lean_object* v___x_2936_; 
v_a_2935_ = lean_ctor_get(v___x_2934_, 0);
lean_inc(v_a_2935_);
lean_dec_ref_known(v___x_2934_, 1);
v___x_2936_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce(v_a_2935_, v_a_2926_, v_a_2927_, v_a_2928_, v_a_2929_, v_a_2930_, v_a_2931_, v_a_2932_);
return v___x_2936_;
}
else
{
return v___x_2934_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonMatch(lean_object* v_e_2937_, uint8_t v_a_2938_, lean_object* v_a_2939_, lean_object* v_a_2940_, lean_object* v_a_2941_, lean_object* v_a_2942_, lean_object* v_a_2943_, lean_object* v_a_2944_){
_start:
{
lean_object* v___x_2946_; 
v___x_2946_ = l_Lean_Meta_reduceMatcher_x3f(v_e_2937_, v_a_2941_, v_a_2942_, v_a_2943_, v_a_2944_);
if (lean_obj_tag(v___x_2946_) == 0)
{
lean_object* v_a_2947_; 
v_a_2947_ = lean_ctor_get(v___x_2946_, 0);
lean_inc(v_a_2947_);
lean_dec_ref_known(v___x_2946_, 1);
if (lean_obj_tag(v_a_2947_) == 0)
{
lean_object* v_val_2948_; lean_object* v___x_2949_; 
lean_dec_ref(v_e_2937_);
v_val_2948_ = lean_ctor_get(v_a_2947_, 0);
lean_inc_ref(v_val_2948_);
lean_dec_ref_known(v_a_2947_, 1);
v___x_2949_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_val_2948_, v_a_2938_, v_a_2939_, v_a_2940_, v_a_2941_, v_a_2942_, v_a_2943_, v_a_2944_);
return v___x_2949_;
}
else
{
lean_object* v___x_2950_; 
lean_dec(v_a_2947_);
v___x_2950_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault(v_e_2937_, v_a_2938_, v_a_2939_, v_a_2940_, v_a_2941_, v_a_2942_, v_a_2943_, v_a_2944_);
if (lean_obj_tag(v___x_2950_) == 0)
{
lean_object* v_a_2951_; lean_object* v___x_2952_; 
v_a_2951_ = lean_ctor_get(v___x_2950_, 0);
lean_inc(v_a_2951_);
lean_dec_ref_known(v___x_2950_, 1);
v___x_2952_ = l_Lean_Meta_reduceMatcher_x3f(v_a_2951_, v_a_2941_, v_a_2942_, v_a_2943_, v_a_2944_);
if (lean_obj_tag(v___x_2952_) == 0)
{
lean_object* v_a_2953_; lean_object* v___x_2955_; uint8_t v_isShared_2956_; uint8_t v_isSharedCheck_2962_; 
v_a_2953_ = lean_ctor_get(v___x_2952_, 0);
v_isSharedCheck_2962_ = !lean_is_exclusive(v___x_2952_);
if (v_isSharedCheck_2962_ == 0)
{
v___x_2955_ = v___x_2952_;
v_isShared_2956_ = v_isSharedCheck_2962_;
goto v_resetjp_2954_;
}
else
{
lean_inc(v_a_2953_);
lean_dec(v___x_2952_);
v___x_2955_ = lean_box(0);
v_isShared_2956_ = v_isSharedCheck_2962_;
goto v_resetjp_2954_;
}
v_resetjp_2954_:
{
if (lean_obj_tag(v_a_2953_) == 0)
{
lean_object* v_val_2957_; lean_object* v___x_2958_; 
lean_del_object(v___x_2955_);
lean_dec(v_a_2951_);
v_val_2957_ = lean_ctor_get(v_a_2953_, 0);
lean_inc_ref(v_val_2957_);
lean_dec_ref_known(v_a_2953_, 1);
v___x_2958_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_val_2957_, v_a_2938_, v_a_2939_, v_a_2940_, v_a_2941_, v_a_2942_, v_a_2943_, v_a_2944_);
return v___x_2958_;
}
else
{
lean_object* v___x_2960_; 
lean_dec(v_a_2953_);
if (v_isShared_2956_ == 0)
{
lean_ctor_set(v___x_2955_, 0, v_a_2951_);
v___x_2960_ = v___x_2955_;
goto v_reusejp_2959_;
}
else
{
lean_object* v_reuseFailAlloc_2961_; 
v_reuseFailAlloc_2961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2961_, 0, v_a_2951_);
v___x_2960_ = v_reuseFailAlloc_2961_;
goto v_reusejp_2959_;
}
v_reusejp_2959_:
{
return v___x_2960_;
}
}
}
}
else
{
lean_object* v_a_2963_; lean_object* v___x_2965_; uint8_t v_isShared_2966_; uint8_t v_isSharedCheck_2970_; 
lean_dec(v_a_2951_);
v_a_2963_ = lean_ctor_get(v___x_2952_, 0);
v_isSharedCheck_2970_ = !lean_is_exclusive(v___x_2952_);
if (v_isSharedCheck_2970_ == 0)
{
v___x_2965_ = v___x_2952_;
v_isShared_2966_ = v_isSharedCheck_2970_;
goto v_resetjp_2964_;
}
else
{
lean_inc(v_a_2963_);
lean_dec(v___x_2952_);
v___x_2965_ = lean_box(0);
v_isShared_2966_ = v_isSharedCheck_2970_;
goto v_resetjp_2964_;
}
v_resetjp_2964_:
{
lean_object* v___x_2968_; 
if (v_isShared_2966_ == 0)
{
v___x_2968_ = v___x_2965_;
goto v_reusejp_2967_;
}
else
{
lean_object* v_reuseFailAlloc_2969_; 
v_reuseFailAlloc_2969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2969_, 0, v_a_2963_);
v___x_2968_ = v_reuseFailAlloc_2969_;
goto v_reusejp_2967_;
}
v_reusejp_2967_:
{
return v___x_2968_;
}
}
}
}
else
{
return v___x_2950_;
}
}
}
else
{
lean_object* v_a_2971_; lean_object* v___x_2973_; uint8_t v_isShared_2974_; uint8_t v_isSharedCheck_2978_; 
lean_dec_ref(v_e_2937_);
v_a_2971_ = lean_ctor_get(v___x_2946_, 0);
v_isSharedCheck_2978_ = !lean_is_exclusive(v___x_2946_);
if (v_isSharedCheck_2978_ == 0)
{
v___x_2973_ = v___x_2946_;
v_isShared_2974_ = v_isSharedCheck_2978_;
goto v_resetjp_2972_;
}
else
{
lean_inc(v_a_2971_);
lean_dec(v___x_2946_);
v___x_2973_ = lean_box(0);
v_isShared_2974_ = v_isSharedCheck_2978_;
goto v_resetjp_2972_;
}
v_resetjp_2972_:
{
lean_object* v___x_2976_; 
if (v_isShared_2974_ == 0)
{
v___x_2976_ = v___x_2973_;
goto v_reusejp_2975_;
}
else
{
lean_object* v_reuseFailAlloc_2977_; 
v_reuseFailAlloc_2977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2977_, 0, v_a_2971_);
v___x_2976_ = v_reuseFailAlloc_2977_;
goto v_reusejp_2975_;
}
v_reusejp_2975_:
{
return v___x_2976_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore(lean_object* v_e_2985_, uint8_t v_a_2986_, lean_object* v_a_2987_, lean_object* v_a_2988_, lean_object* v_a_2989_, lean_object* v_a_2990_, lean_object* v_a_2991_, lean_object* v_a_2992_){
_start:
{
uint8_t v___y_2995_; lean_object* v___y_2996_; lean_object* v___y_2997_; lean_object* v___y_2998_; lean_object* v___y_2999_; lean_object* v___y_3000_; lean_object* v___y_3001_; lean_object* v___x_3004_; 
lean_inc_ref(v_e_2985_);
v___x_3004_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_2985_, v_a_2990_);
if (lean_obj_tag(v___x_3004_) == 0)
{
lean_object* v_a_3005_; lean_object* v___x_3006_; uint8_t v___x_3007_; 
v_a_3005_ = lean_ctor_get(v___x_3004_, 0);
lean_inc(v_a_3005_);
lean_dec_ref_known(v___x_3004_, 1);
v___x_3006_ = l_Lean_Expr_cleanupAnnotations(v_a_3005_);
lean_dec(v_a_3005_);
v___x_3007_ = l_Lean_Expr_isApp(v___x_3006_);
if (v___x_3007_ == 0)
{
lean_dec_ref(v___x_3006_);
v___y_2995_ = v_a_2986_;
v___y_2996_ = v_a_2987_;
v___y_2997_ = v_a_2988_;
v___y_2998_ = v_a_2989_;
v___y_2999_ = v_a_2990_;
v___y_3000_ = v_a_2991_;
v___y_3001_ = v_a_2992_;
goto v___jp_2994_;
}
else
{
lean_object* v___x_3008_; uint8_t v___x_3009_; 
v___x_3008_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3006_);
v___x_3009_ = l_Lean_Expr_isApp(v___x_3008_);
if (v___x_3009_ == 0)
{
lean_dec_ref(v___x_3008_);
lean_dec_ref(v___x_3006_);
v___y_2995_ = v_a_2986_;
v___y_2996_ = v_a_2987_;
v___y_2997_ = v_a_2988_;
v___y_2998_ = v_a_2989_;
v___y_2999_ = v_a_2990_;
v___y_3000_ = v_a_2991_;
v___y_3001_ = v_a_2992_;
goto v___jp_2994_;
}
else
{
lean_object* v___x_3010_; lean_object* v___x_3011_; uint8_t v___x_3012_; 
v___x_3010_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3008_);
v___x_3011_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___closed__2));
v___x_3012_ = l_Lean_Expr_isConstOf(v___x_3010_, v___x_3011_);
if (v___x_3012_ == 0)
{
lean_dec_ref(v___x_3010_);
lean_dec_ref(v___x_3008_);
lean_dec_ref(v___x_3006_);
v___y_2995_ = v_a_2986_;
v___y_2996_ = v_a_2987_;
v___y_2997_ = v_a_2988_;
v___y_2998_ = v_a_2989_;
v___y_2999_ = v_a_2990_;
v___y_3000_ = v_a_2991_;
v___y_3001_ = v_a_2992_;
goto v___jp_2994_;
}
else
{
lean_object* v_arg_3013_; lean_object* v_arg_3014_; lean_object* v___x_3015_; 
v_arg_3013_ = lean_ctor_get(v___x_3006_, 1);
lean_inc_ref(v_arg_3013_);
lean_dec_ref(v___x_3006_);
v_arg_3014_ = lean_ctor_get(v___x_3008_, 1);
lean_inc_ref(v_arg_3014_);
lean_dec_ref(v___x_3008_);
v___x_3015_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec(v___x_3010_, v_arg_3014_, v_arg_3013_, v_e_2985_, v_a_2986_, v_a_2987_, v_a_2988_, v_a_2989_, v_a_2990_, v_a_2991_, v_a_2992_);
return v___x_3015_;
}
}
}
}
else
{
lean_dec_ref(v_e_2985_);
return v___x_3004_;
}
v___jp_2994_:
{
uint8_t v___x_3002_; lean_object* v___x_3003_; 
v___x_3002_ = 0;
v___x_3003_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst(v_e_2985_, v___x_3002_, v___y_2995_, v___y_2996_, v___y_2997_, v___y_2998_, v___y_2999_, v___y_3000_, v___y_3001_);
return v___x_3003_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonIte(lean_object* v_f_3016_, lean_object* v_00_u03b1_3017_, lean_object* v_c_3018_, lean_object* v_inst_3019_, lean_object* v_a_3020_, lean_object* v_b_3021_, uint8_t v_a_3022_, lean_object* v_a_3023_, lean_object* v_a_3024_, lean_object* v_a_3025_, lean_object* v_a_3026_, lean_object* v_a_3027_, lean_object* v_a_3028_){
_start:
{
lean_object* v___x_3030_; 
v___x_3030_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_c_3018_, v_a_3022_, v_a_3023_, v_a_3024_, v_a_3025_, v_a_3026_, v_a_3027_, v_a_3028_);
if (lean_obj_tag(v___x_3030_) == 0)
{
lean_object* v_a_3031_; uint8_t v___x_3032_; 
v_a_3031_ = lean_ctor_get(v___x_3030_, 0);
lean_inc(v_a_3031_);
lean_dec_ref_known(v___x_3030_, 1);
v___x_3032_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isTrueCond(v_a_3031_);
if (v___x_3032_ == 0)
{
uint8_t v___x_3033_; 
v___x_3033_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_isFalseCond(v_a_3031_);
if (v___x_3033_ == 0)
{
lean_object* v___x_3034_; 
v___x_3034_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType(v_00_u03b1_3017_, v_a_3022_, v_a_3023_, v_a_3024_, v_a_3025_, v_a_3026_, v_a_3027_, v_a_3028_);
if (lean_obj_tag(v___x_3034_) == 0)
{
lean_object* v_a_3035_; lean_object* v___x_3036_; 
v_a_3035_ = lean_ctor_get(v___x_3034_, 0);
lean_inc(v_a_3035_);
lean_dec_ref_known(v___x_3034_, 1);
v___x_3036_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore(v_inst_3019_, v_a_3022_, v_a_3023_, v_a_3024_, v_a_3025_, v_a_3026_, v_a_3027_, v_a_3028_);
if (lean_obj_tag(v___x_3036_) == 0)
{
lean_object* v_a_3037_; lean_object* v___x_3038_; 
v_a_3037_ = lean_ctor_get(v___x_3036_, 0);
lean_inc(v_a_3037_);
lean_dec_ref_known(v___x_3036_, 1);
v___x_3038_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_a_3020_, v_a_3022_, v_a_3023_, v_a_3024_, v_a_3025_, v_a_3026_, v_a_3027_, v_a_3028_);
if (lean_obj_tag(v___x_3038_) == 0)
{
lean_object* v_a_3039_; lean_object* v___x_3040_; 
v_a_3039_ = lean_ctor_get(v___x_3038_, 0);
lean_inc(v_a_3039_);
lean_dec_ref_known(v___x_3038_, 1);
v___x_3040_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_b_3021_, v_a_3022_, v_a_3023_, v_a_3024_, v_a_3025_, v_a_3026_, v_a_3027_, v_a_3028_);
if (lean_obj_tag(v___x_3040_) == 0)
{
lean_object* v_a_3041_; lean_object* v___x_3043_; uint8_t v_isShared_3044_; uint8_t v_isSharedCheck_3049_; 
v_a_3041_ = lean_ctor_get(v___x_3040_, 0);
v_isSharedCheck_3049_ = !lean_is_exclusive(v___x_3040_);
if (v_isSharedCheck_3049_ == 0)
{
v___x_3043_ = v___x_3040_;
v_isShared_3044_ = v_isSharedCheck_3049_;
goto v_resetjp_3042_;
}
else
{
lean_inc(v_a_3041_);
lean_dec(v___x_3040_);
v___x_3043_ = lean_box(0);
v_isShared_3044_ = v_isSharedCheck_3049_;
goto v_resetjp_3042_;
}
v_resetjp_3042_:
{
lean_object* v___x_3045_; lean_object* v___x_3047_; 
v___x_3045_ = l_Lean_mkApp5(v_f_3016_, v_a_3035_, v_a_3031_, v_a_3037_, v_a_3039_, v_a_3041_);
if (v_isShared_3044_ == 0)
{
lean_ctor_set(v___x_3043_, 0, v___x_3045_);
v___x_3047_ = v___x_3043_;
goto v_reusejp_3046_;
}
else
{
lean_object* v_reuseFailAlloc_3048_; 
v_reuseFailAlloc_3048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3048_, 0, v___x_3045_);
v___x_3047_ = v_reuseFailAlloc_3048_;
goto v_reusejp_3046_;
}
v_reusejp_3046_:
{
return v___x_3047_;
}
}
}
else
{
lean_dec(v_a_3039_);
lean_dec(v_a_3037_);
lean_dec(v_a_3035_);
lean_dec(v_a_3031_);
lean_dec_ref(v_f_3016_);
return v___x_3040_;
}
}
else
{
lean_dec(v_a_3037_);
lean_dec(v_a_3035_);
lean_dec(v_a_3031_);
lean_dec_ref(v_b_3021_);
lean_dec_ref(v_f_3016_);
return v___x_3038_;
}
}
else
{
lean_dec(v_a_3035_);
lean_dec(v_a_3031_);
lean_dec_ref(v_b_3021_);
lean_dec_ref(v_a_3020_);
lean_dec_ref(v_f_3016_);
return v___x_3036_;
}
}
else
{
lean_dec(v_a_3031_);
lean_dec_ref(v_b_3021_);
lean_dec_ref(v_a_3020_);
lean_dec_ref(v_inst_3019_);
lean_dec_ref(v_f_3016_);
return v___x_3034_;
}
}
else
{
lean_object* v___x_3050_; 
lean_dec(v_a_3031_);
lean_dec_ref(v_a_3020_);
lean_dec_ref(v_inst_3019_);
lean_dec_ref(v_00_u03b1_3017_);
lean_dec_ref(v_f_3016_);
v___x_3050_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_b_3021_, v_a_3022_, v_a_3023_, v_a_3024_, v_a_3025_, v_a_3026_, v_a_3027_, v_a_3028_);
return v___x_3050_;
}
}
else
{
lean_object* v___x_3051_; 
lean_dec(v_a_3031_);
lean_dec_ref(v_b_3021_);
lean_dec_ref(v_inst_3019_);
lean_dec_ref(v_00_u03b1_3017_);
lean_dec_ref(v_f_3016_);
v___x_3051_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_a_3020_, v_a_3022_, v_a_3023_, v_a_3024_, v_a_3025_, v_a_3026_, v_a_3027_, v_a_3028_);
return v___x_3051_;
}
}
else
{
lean_dec_ref(v_b_3021_);
lean_dec_ref(v_a_3020_);
lean_dec_ref(v_inst_3019_);
lean_dec_ref(v_00_u03b1_3017_);
lean_dec_ref(v_f_3016_);
return v___x_3030_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonCond(lean_object* v_f_3052_, lean_object* v_00_u03b1_3053_, lean_object* v_c_3054_, lean_object* v_a_3055_, lean_object* v_b_3056_, uint8_t v_a_3057_, lean_object* v_a_3058_, lean_object* v_a_3059_, lean_object* v_a_3060_, lean_object* v_a_3061_, lean_object* v_a_3062_, lean_object* v_a_3063_){
_start:
{
lean_object* v___x_3065_; 
v___x_3065_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_c_3054_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_, v_a_3063_);
if (lean_obj_tag(v___x_3065_) == 0)
{
lean_object* v_a_3066_; uint8_t v___x_3067_; 
v_a_3066_ = lean_ctor_get(v___x_3065_, 0);
lean_inc(v_a_3066_);
lean_dec_ref_known(v___x_3065_, 1);
v___x_3067_ = l_Lean_Expr_isBoolTrue(v_a_3066_);
if (v___x_3067_ == 0)
{
uint8_t v___x_3068_; 
v___x_3068_ = l_Lean_Expr_isBoolFalse(v_a_3066_);
if (v___x_3068_ == 0)
{
lean_object* v___x_3069_; 
v___x_3069_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType(v_00_u03b1_3053_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_, v_a_3063_);
if (lean_obj_tag(v___x_3069_) == 0)
{
lean_object* v_a_3070_; lean_object* v___x_3071_; 
v_a_3070_ = lean_ctor_get(v___x_3069_, 0);
lean_inc(v_a_3070_);
lean_dec_ref_known(v___x_3069_, 1);
v___x_3071_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_a_3055_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_, v_a_3063_);
if (lean_obj_tag(v___x_3071_) == 0)
{
lean_object* v_a_3072_; lean_object* v___x_3073_; 
v_a_3072_ = lean_ctor_get(v___x_3071_, 0);
lean_inc(v_a_3072_);
lean_dec_ref_known(v___x_3071_, 1);
v___x_3073_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_b_3056_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_, v_a_3063_);
if (lean_obj_tag(v___x_3073_) == 0)
{
lean_object* v_a_3074_; lean_object* v___x_3076_; uint8_t v_isShared_3077_; uint8_t v_isSharedCheck_3082_; 
v_a_3074_ = lean_ctor_get(v___x_3073_, 0);
v_isSharedCheck_3082_ = !lean_is_exclusive(v___x_3073_);
if (v_isSharedCheck_3082_ == 0)
{
v___x_3076_ = v___x_3073_;
v_isShared_3077_ = v_isSharedCheck_3082_;
goto v_resetjp_3075_;
}
else
{
lean_inc(v_a_3074_);
lean_dec(v___x_3073_);
v___x_3076_ = lean_box(0);
v_isShared_3077_ = v_isSharedCheck_3082_;
goto v_resetjp_3075_;
}
v_resetjp_3075_:
{
lean_object* v___x_3078_; lean_object* v___x_3080_; 
v___x_3078_ = l_Lean_mkApp4(v_f_3052_, v_a_3070_, v_a_3066_, v_a_3072_, v_a_3074_);
if (v_isShared_3077_ == 0)
{
lean_ctor_set(v___x_3076_, 0, v___x_3078_);
v___x_3080_ = v___x_3076_;
goto v_reusejp_3079_;
}
else
{
lean_object* v_reuseFailAlloc_3081_; 
v_reuseFailAlloc_3081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3081_, 0, v___x_3078_);
v___x_3080_ = v_reuseFailAlloc_3081_;
goto v_reusejp_3079_;
}
v_reusejp_3079_:
{
return v___x_3080_;
}
}
}
else
{
lean_dec(v_a_3072_);
lean_dec(v_a_3070_);
lean_dec(v_a_3066_);
lean_dec_ref(v_f_3052_);
return v___x_3073_;
}
}
else
{
lean_dec(v_a_3070_);
lean_dec(v_a_3066_);
lean_dec_ref(v_b_3056_);
lean_dec_ref(v_f_3052_);
return v___x_3071_;
}
}
else
{
lean_dec(v_a_3066_);
lean_dec_ref(v_b_3056_);
lean_dec_ref(v_a_3055_);
lean_dec_ref(v_f_3052_);
return v___x_3069_;
}
}
else
{
lean_object* v___x_3083_; 
lean_dec(v_a_3066_);
lean_dec_ref(v_a_3055_);
lean_dec_ref(v_00_u03b1_3053_);
lean_dec_ref(v_f_3052_);
v___x_3083_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_b_3056_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_, v_a_3063_);
return v___x_3083_;
}
}
else
{
lean_object* v___x_3084_; 
lean_dec(v_a_3066_);
lean_dec_ref(v_b_3056_);
lean_dec_ref(v_00_u03b1_3053_);
lean_dec_ref(v_f_3052_);
v___x_3084_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_a_3055_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_, v_a_3061_, v_a_3062_, v_a_3063_);
return v___x_3084_;
}
}
else
{
lean_dec_ref(v_b_3056_);
lean_dec_ref(v_a_3055_);
lean_dec_ref(v_00_u03b1_3053_);
lean_dec_ref(v_f_3052_);
return v___x_3065_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp(lean_object* v_e_3085_, uint8_t v_a_3086_, lean_object* v_a_3087_, lean_object* v_a_3088_, lean_object* v_a_3089_, lean_object* v_a_3090_, lean_object* v_a_3091_, lean_object* v_a_3092_){
_start:
{
lean_object* v___y_3095_; lean_object* v___y_3096_; lean_object* v___y_3097_; lean_object* v___y_3098_; lean_object* v___y_3099_; lean_object* v___y_3100_; uint8_t v___y_3101_; lean_object* v___y_3102_; uint8_t v___y_3119_; lean_object* v___y_3120_; lean_object* v___y_3121_; lean_object* v___y_3122_; lean_object* v___y_3123_; lean_object* v___y_3124_; lean_object* v___y_3125_; lean_object* v___x_3130_; 
lean_inc_ref(v_e_3085_);
v___x_3130_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_3085_, v_a_3090_);
if (lean_obj_tag(v___x_3130_) == 0)
{
lean_object* v_a_3131_; lean_object* v___x_3132_; uint8_t v___x_3133_; 
v_a_3131_ = lean_ctor_get(v___x_3130_, 0);
lean_inc(v_a_3131_);
lean_dec_ref_known(v___x_3130_, 1);
v___x_3132_ = l_Lean_Expr_cleanupAnnotations(v_a_3131_);
lean_dec(v_a_3131_);
v___x_3133_ = l_Lean_Expr_isApp(v___x_3132_);
if (v___x_3133_ == 0)
{
lean_dec_ref(v___x_3132_);
v___y_3119_ = v_a_3086_;
v___y_3120_ = v_a_3087_;
v___y_3121_ = v_a_3088_;
v___y_3122_ = v_a_3089_;
v___y_3123_ = v_a_3090_;
v___y_3124_ = v_a_3091_;
v___y_3125_ = v_a_3092_;
goto v___jp_3118_;
}
else
{
lean_object* v___x_3134_; uint8_t v___x_3135_; 
v___x_3134_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3132_);
v___x_3135_ = l_Lean_Expr_isApp(v___x_3134_);
if (v___x_3135_ == 0)
{
lean_dec_ref(v___x_3134_);
lean_dec_ref(v___x_3132_);
v___y_3119_ = v_a_3086_;
v___y_3120_ = v_a_3087_;
v___y_3121_ = v_a_3088_;
v___y_3122_ = v_a_3089_;
v___y_3123_ = v_a_3090_;
v___y_3124_ = v_a_3091_;
v___y_3125_ = v_a_3092_;
goto v___jp_3118_;
}
else
{
lean_object* v___x_3136_; uint8_t v___x_3137_; 
v___x_3136_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3134_);
v___x_3137_ = l_Lean_Expr_isApp(v___x_3136_);
if (v___x_3137_ == 0)
{
lean_dec_ref(v___x_3136_);
lean_dec_ref(v___x_3134_);
lean_dec_ref(v___x_3132_);
v___y_3119_ = v_a_3086_;
v___y_3120_ = v_a_3087_;
v___y_3121_ = v_a_3088_;
v___y_3122_ = v_a_3089_;
v___y_3123_ = v_a_3090_;
v___y_3124_ = v_a_3091_;
v___y_3125_ = v_a_3092_;
goto v___jp_3118_;
}
else
{
lean_object* v___x_3138_; uint8_t v___x_3139_; 
v___x_3138_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3136_);
v___x_3139_ = l_Lean_Expr_isApp(v___x_3138_);
if (v___x_3139_ == 0)
{
lean_dec_ref(v___x_3138_);
lean_dec_ref(v___x_3136_);
lean_dec_ref(v___x_3134_);
lean_dec_ref(v___x_3132_);
v___y_3119_ = v_a_3086_;
v___y_3120_ = v_a_3087_;
v___y_3121_ = v_a_3088_;
v___y_3122_ = v_a_3089_;
v___y_3123_ = v_a_3090_;
v___y_3124_ = v_a_3091_;
v___y_3125_ = v_a_3092_;
goto v___jp_3118_;
}
else
{
lean_object* v_arg_3140_; lean_object* v_arg_3141_; lean_object* v_arg_3142_; lean_object* v_arg_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; uint8_t v___x_3146_; 
v_arg_3140_ = lean_ctor_get(v___x_3132_, 1);
lean_inc_ref(v_arg_3140_);
lean_dec_ref(v___x_3132_);
v_arg_3141_ = lean_ctor_get(v___x_3134_, 1);
lean_inc_ref(v_arg_3141_);
lean_dec_ref(v___x_3134_);
v_arg_3142_ = lean_ctor_get(v___x_3136_, 1);
lean_inc_ref(v_arg_3142_);
lean_dec_ref(v___x_3136_);
v_arg_3143_ = lean_ctor_get(v___x_3138_, 1);
lean_inc_ref(v_arg_3143_);
v___x_3144_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3138_);
lean_dec_ref(v___x_3138_);
v___x_3145_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__1));
v___x_3146_ = l_Lean_Expr_isConstOf(v___x_3144_, v___x_3145_);
if (v___x_3146_ == 0)
{
uint8_t v___x_3147_; 
v___x_3147_ = l_Lean_Expr_isApp(v___x_3144_);
if (v___x_3147_ == 0)
{
lean_dec_ref(v___x_3144_);
lean_dec_ref(v_arg_3143_);
lean_dec_ref(v_arg_3142_);
lean_dec_ref(v_arg_3141_);
lean_dec_ref(v_arg_3140_);
v___y_3119_ = v_a_3086_;
v___y_3120_ = v_a_3087_;
v___y_3121_ = v_a_3088_;
v___y_3122_ = v_a_3089_;
v___y_3123_ = v_a_3090_;
v___y_3124_ = v_a_3091_;
v___y_3125_ = v_a_3092_;
goto v___jp_3118_;
}
else
{
lean_object* v___x_3148_; lean_object* v___x_3149_; uint8_t v___x_3150_; 
v___x_3148_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3144_);
v___x_3149_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___closed__3));
v___x_3150_ = l_Lean_Expr_isConstOf(v___x_3148_, v___x_3149_);
if (v___x_3150_ == 0)
{
lean_dec_ref(v___x_3148_);
lean_dec_ref(v___x_3144_);
lean_dec_ref(v_arg_3143_);
lean_dec_ref(v_arg_3142_);
lean_dec_ref(v_arg_3141_);
lean_dec_ref(v_arg_3140_);
v___y_3119_ = v_a_3086_;
v___y_3120_ = v_a_3087_;
v___y_3121_ = v_a_3088_;
v___y_3122_ = v_a_3089_;
v___y_3123_ = v_a_3090_;
v___y_3124_ = v_a_3091_;
v___y_3125_ = v_a_3092_;
goto v___jp_3118_;
}
else
{
lean_object* v_arg_3151_; lean_object* v___x_3152_; 
lean_dec_ref(v_e_3085_);
v_arg_3151_ = lean_ctor_get(v___x_3144_, 1);
lean_inc_ref(v_arg_3151_);
lean_dec_ref(v___x_3144_);
v___x_3152_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonIte(v___x_3148_, v_arg_3151_, v_arg_3143_, v_arg_3142_, v_arg_3141_, v_arg_3140_, v_a_3086_, v_a_3087_, v_a_3088_, v_a_3089_, v_a_3090_, v_a_3091_, v_a_3092_);
return v___x_3152_;
}
}
}
else
{
lean_object* v___x_3153_; 
lean_dec_ref(v_e_3085_);
v___x_3153_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonCond(v___x_3144_, v_arg_3143_, v_arg_3142_, v_arg_3141_, v_arg_3140_, v_a_3086_, v_a_3087_, v_a_3088_, v_a_3089_, v_a_3090_, v_a_3091_, v_a_3092_);
return v___x_3153_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_e_3085_);
return v___x_3130_;
}
v___jp_3094_:
{
if (lean_obj_tag(v___y_3096_) == 4)
{
lean_object* v_declName_3103_; lean_object* v___x_3104_; 
v_declName_3103_ = lean_ctor_get(v___y_3096_, 0);
lean_inc(v_declName_3103_);
lean_dec_ref_known(v___y_3096_, 2);
v___x_3104_ = l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6___redArg(v_declName_3103_, v___y_3098_);
if (lean_obj_tag(v___x_3104_) == 0)
{
lean_object* v_a_3105_; uint8_t v___x_3106_; 
v_a_3105_ = lean_ctor_get(v___x_3104_, 0);
lean_inc(v_a_3105_);
lean_dec_ref_known(v___x_3104_, 1);
v___x_3106_ = lean_unbox(v_a_3105_);
lean_dec(v_a_3105_);
if (v___x_3106_ == 0)
{
lean_object* v___x_3107_; 
v___x_3107_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppAndPost(v_e_3085_, v___y_3101_, v___y_3100_, v___y_3097_, v___y_3102_, v___y_3095_, v___y_3099_, v___y_3098_);
return v___x_3107_;
}
else
{
lean_object* v___x_3108_; 
v___x_3108_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonMatch(v_e_3085_, v___y_3101_, v___y_3100_, v___y_3097_, v___y_3102_, v___y_3095_, v___y_3099_, v___y_3098_);
return v___x_3108_;
}
}
else
{
lean_object* v_a_3109_; lean_object* v___x_3111_; uint8_t v_isShared_3112_; uint8_t v_isSharedCheck_3116_; 
lean_dec_ref(v_e_3085_);
v_a_3109_ = lean_ctor_get(v___x_3104_, 0);
v_isSharedCheck_3116_ = !lean_is_exclusive(v___x_3104_);
if (v_isSharedCheck_3116_ == 0)
{
v___x_3111_ = v___x_3104_;
v_isShared_3112_ = v_isSharedCheck_3116_;
goto v_resetjp_3110_;
}
else
{
lean_inc(v_a_3109_);
lean_dec(v___x_3104_);
v___x_3111_ = lean_box(0);
v_isShared_3112_ = v_isSharedCheck_3116_;
goto v_resetjp_3110_;
}
v_resetjp_3110_:
{
lean_object* v___x_3114_; 
if (v_isShared_3112_ == 0)
{
v___x_3114_ = v___x_3111_;
goto v_reusejp_3113_;
}
else
{
lean_object* v_reuseFailAlloc_3115_; 
v_reuseFailAlloc_3115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3115_, 0, v_a_3109_);
v___x_3114_ = v_reuseFailAlloc_3115_;
goto v_reusejp_3113_;
}
v_reusejp_3113_:
{
return v___x_3114_;
}
}
}
}
else
{
lean_object* v___x_3117_; 
lean_dec_ref(v___y_3096_);
v___x_3117_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppAndPost(v_e_3085_, v___y_3101_, v___y_3100_, v___y_3097_, v___y_3102_, v___y_3095_, v___y_3099_, v___y_3098_);
return v___x_3117_;
}
}
v___jp_3118_:
{
lean_object* v___x_3126_; uint8_t v___x_3127_; 
v___x_3126_ = l_Lean_Expr_getAppFn(v_e_3085_);
v___x_3127_ = l_Lean_Expr_isLambda(v___x_3126_);
if (v___x_3127_ == 0)
{
v___y_3095_ = v___y_3123_;
v___y_3096_ = v___x_3126_;
v___y_3097_ = v___y_3121_;
v___y_3098_ = v___y_3125_;
v___y_3099_ = v___y_3124_;
v___y_3100_ = v___y_3120_;
v___y_3101_ = v___y_3119_;
v___y_3102_ = v___y_3122_;
goto v___jp_3094_;
}
else
{
if (v___y_3119_ == 0)
{
v___y_3095_ = v___y_3123_;
v___y_3096_ = v___x_3126_;
v___y_3097_ = v___y_3121_;
v___y_3098_ = v___y_3125_;
v___y_3099_ = v___y_3124_;
v___y_3100_ = v___y_3120_;
v___y_3101_ = v___y_3119_;
v___y_3102_ = v___y_3122_;
goto v___jp_3094_;
}
else
{
lean_object* v___x_3128_; lean_object* v___x_3129_; 
lean_dec_ref(v___x_3126_);
v___x_3128_ = l_Lean_Expr_headBeta(v_e_3085_);
v___x_3129_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v___x_3128_, v___y_3119_, v___y_3120_, v___y_3121_, v___y_3122_, v___y_3123_, v___y_3124_, v___y_3125_);
return v___x_3129_;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__3(void){
_start:
{
lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; 
v___x_3157_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__2));
v___x_3158_ = lean_unsigned_to_nat(18u);
v___x_3159_ = lean_unsigned_to_nat(1955u);
v___x_3160_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__1));
v___x_3161_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__0));
v___x_3162_ = l_mkPanicMessageWithDecl(v___x_3161_, v___x_3160_, v___x_3159_, v___x_3158_, v___x_3157_);
return v___x_3162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj(lean_object* v_e_3163_, uint8_t v_a_3164_, lean_object* v_a_3165_, lean_object* v_a_3166_, lean_object* v_a_3167_, lean_object* v_a_3168_, lean_object* v_a_3169_, lean_object* v_a_3170_){
_start:
{
lean_object* v___x_3172_; lean_object* v___x_3173_; 
v___x_3172_ = l_Lean_Expr_projExpr_x21(v_e_3163_);
v___x_3173_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v___x_3172_, v_a_3164_, v_a_3165_, v_a_3166_, v_a_3167_, v_a_3168_, v_a_3169_, v_a_3170_);
if (lean_obj_tag(v___x_3173_) == 0)
{
lean_object* v_a_3174_; lean_object* v___y_3176_; 
v_a_3174_ = lean_ctor_get(v___x_3173_, 0);
lean_inc(v_a_3174_);
lean_dec_ref_known(v___x_3173_, 1);
if (lean_obj_tag(v_e_3163_) == 11)
{
lean_object* v_typeName_3198_; lean_object* v_idx_3199_; lean_object* v_struct_3200_; size_t v___x_3201_; size_t v___x_3202_; uint8_t v___x_3203_; 
v_typeName_3198_ = lean_ctor_get(v_e_3163_, 0);
v_idx_3199_ = lean_ctor_get(v_e_3163_, 1);
v_struct_3200_ = lean_ctor_get(v_e_3163_, 2);
v___x_3201_ = lean_ptr_addr(v_struct_3200_);
v___x_3202_ = lean_ptr_addr(v_a_3174_);
v___x_3203_ = lean_usize_dec_eq(v___x_3201_, v___x_3202_);
if (v___x_3203_ == 0)
{
lean_object* v___x_3204_; 
lean_inc(v_idx_3199_);
lean_inc(v_typeName_3198_);
lean_dec_ref_known(v_e_3163_, 3);
v___x_3204_ = l_Lean_Expr_proj___override(v_typeName_3198_, v_idx_3199_, v_a_3174_);
v___y_3176_ = v___x_3204_;
goto v___jp_3175_;
}
else
{
lean_dec(v_a_3174_);
v___y_3176_ = v_e_3163_;
goto v___jp_3175_;
}
}
else
{
lean_object* v___x_3205_; lean_object* v___x_3206_; 
lean_dec(v_a_3174_);
lean_dec_ref(v_e_3163_);
v___x_3205_ = lean_obj_once(&l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__3, &l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__3_once, _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___closed__3);
v___x_3206_ = l_panic___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj_spec__4(v___x_3205_);
v___y_3176_ = v___x_3206_;
goto v___jp_3175_;
}
v___jp_3175_:
{
lean_object* v___x_3177_; 
lean_inc_ref(v___y_3176_);
v___x_3177_ = l_Lean_Meta_reduceProj_x3f(v___y_3176_, v_a_3167_, v_a_3168_, v_a_3169_, v_a_3170_);
if (lean_obj_tag(v___x_3177_) == 0)
{
lean_object* v_a_3178_; lean_object* v___x_3180_; uint8_t v_isShared_3181_; uint8_t v_isSharedCheck_3189_; 
v_a_3178_ = lean_ctor_get(v___x_3177_, 0);
v_isSharedCheck_3189_ = !lean_is_exclusive(v___x_3177_);
if (v_isSharedCheck_3189_ == 0)
{
v___x_3180_ = v___x_3177_;
v_isShared_3181_ = v_isSharedCheck_3189_;
goto v_resetjp_3179_;
}
else
{
lean_inc(v_a_3178_);
lean_dec(v___x_3177_);
v___x_3180_ = lean_box(0);
v_isShared_3181_ = v_isSharedCheck_3189_;
goto v_resetjp_3179_;
}
v_resetjp_3179_:
{
if (lean_obj_tag(v_a_3178_) == 0)
{
lean_object* v___x_3183_; 
if (v_isShared_3181_ == 0)
{
lean_ctor_set(v___x_3180_, 0, v___y_3176_);
v___x_3183_ = v___x_3180_;
goto v_reusejp_3182_;
}
else
{
lean_object* v_reuseFailAlloc_3184_; 
v_reuseFailAlloc_3184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3184_, 0, v___y_3176_);
v___x_3183_ = v_reuseFailAlloc_3184_;
goto v_reusejp_3182_;
}
v_reusejp_3182_:
{
return v___x_3183_;
}
}
else
{
lean_object* v_val_3185_; lean_object* v___x_3187_; 
lean_dec_ref(v___y_3176_);
v_val_3185_ = lean_ctor_get(v_a_3178_, 0);
lean_inc(v_val_3185_);
lean_dec_ref_known(v_a_3178_, 1);
if (v_isShared_3181_ == 0)
{
lean_ctor_set(v___x_3180_, 0, v_val_3185_);
v___x_3187_ = v___x_3180_;
goto v_reusejp_3186_;
}
else
{
lean_object* v_reuseFailAlloc_3188_; 
v_reuseFailAlloc_3188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3188_, 0, v_val_3185_);
v___x_3187_ = v_reuseFailAlloc_3188_;
goto v_reusejp_3186_;
}
v_reusejp_3186_:
{
return v___x_3187_;
}
}
}
}
else
{
lean_object* v_a_3190_; lean_object* v___x_3192_; uint8_t v_isShared_3193_; uint8_t v_isSharedCheck_3197_; 
lean_dec_ref(v___y_3176_);
v_a_3190_ = lean_ctor_get(v___x_3177_, 0);
v_isSharedCheck_3197_ = !lean_is_exclusive(v___x_3177_);
if (v_isSharedCheck_3197_ == 0)
{
v___x_3192_ = v___x_3177_;
v_isShared_3193_ = v_isSharedCheck_3197_;
goto v_resetjp_3191_;
}
else
{
lean_inc(v_a_3190_);
lean_dec(v___x_3177_);
v___x_3192_ = lean_box(0);
v_isShared_3193_ = v_isSharedCheck_3197_;
goto v_resetjp_3191_;
}
v_resetjp_3191_:
{
lean_object* v___x_3195_; 
if (v_isShared_3193_ == 0)
{
v___x_3195_ = v___x_3192_;
goto v_reusejp_3194_;
}
else
{
lean_object* v_reuseFailAlloc_3196_; 
v_reuseFailAlloc_3196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3196_, 0, v_a_3190_);
v___x_3195_ = v_reuseFailAlloc_3196_;
goto v_reusejp_3194_;
}
v_reusejp_3194_:
{
return v___x_3195_;
}
}
}
}
}
else
{
lean_dec_ref(v_e_3163_);
return v___x_3173_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(lean_object* v_e_3207_, uint8_t v_a_3208_, lean_object* v_a_3209_, lean_object* v_a_3210_, lean_object* v_a_3211_, lean_object* v_a_3212_, lean_object* v_a_3213_, lean_object* v_a_3214_){
_start:
{
switch(lean_obj_tag(v_e_3207_))
{
case 7:
{
lean_object* v___x_3216_; 
v___x_3216_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda___closed__0));
if (v_a_3208_ == 0)
{
lean_object* v___x_3217_; lean_object* v_canon_3218_; lean_object* v_cache_3219_; lean_object* v___x_3220_; 
v___x_3217_ = lean_st_ref_get(v_a_3210_);
v_canon_3218_ = lean_ctor_get(v___x_3217_, 11);
lean_inc_ref(v_canon_3218_);
lean_dec(v___x_3217_);
v_cache_3219_ = lean_ctor_get(v_canon_3218_, 0);
lean_inc_ref(v_cache_3219_);
lean_dec_ref(v_canon_3218_);
v___x_3220_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cache_3219_, v_e_3207_);
lean_dec_ref(v_cache_3219_);
if (lean_obj_tag(v___x_3220_) == 1)
{
lean_object* v_val_3221_; lean_object* v___x_3223_; uint8_t v_isShared_3224_; uint8_t v_isSharedCheck_3228_; 
lean_dec_ref_known(v_e_3207_, 3);
v_val_3221_ = lean_ctor_get(v___x_3220_, 0);
v_isSharedCheck_3228_ = !lean_is_exclusive(v___x_3220_);
if (v_isSharedCheck_3228_ == 0)
{
v___x_3223_ = v___x_3220_;
v_isShared_3224_ = v_isSharedCheck_3228_;
goto v_resetjp_3222_;
}
else
{
lean_inc(v_val_3221_);
lean_dec(v___x_3220_);
v___x_3223_ = lean_box(0);
v_isShared_3224_ = v_isSharedCheck_3228_;
goto v_resetjp_3222_;
}
v_resetjp_3222_:
{
lean_object* v___x_3226_; 
if (v_isShared_3224_ == 0)
{
lean_ctor_set_tag(v___x_3223_, 0);
v___x_3226_ = v___x_3223_;
goto v_reusejp_3225_;
}
else
{
lean_object* v_reuseFailAlloc_3227_; 
v_reuseFailAlloc_3227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3227_, 0, v_val_3221_);
v___x_3226_ = v_reuseFailAlloc_3227_;
goto v_reusejp_3225_;
}
v_reusejp_3225_:
{
return v___x_3226_;
}
}
}
else
{
lean_object* v___x_3229_; 
lean_dec(v___x_3220_);
lean_inc_ref(v_e_3207_);
v___x_3229_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall(v___x_3216_, v_e_3207_, v_a_3208_, v_a_3209_, v_a_3210_, v_a_3211_, v_a_3212_, v_a_3213_, v_a_3214_);
if (lean_obj_tag(v___x_3229_) == 0)
{
lean_object* v_a_3230_; lean_object* v___x_3232_; uint8_t v_isShared_3233_; uint8_t v_isSharedCheck_3270_; 
v_a_3230_ = lean_ctor_get(v___x_3229_, 0);
v_isSharedCheck_3270_ = !lean_is_exclusive(v___x_3229_);
if (v_isSharedCheck_3270_ == 0)
{
v___x_3232_ = v___x_3229_;
v_isShared_3233_ = v_isSharedCheck_3270_;
goto v_resetjp_3231_;
}
else
{
lean_inc(v_a_3230_);
lean_dec(v___x_3229_);
v___x_3232_ = lean_box(0);
v_isShared_3233_ = v_isSharedCheck_3270_;
goto v_resetjp_3231_;
}
v_resetjp_3231_:
{
lean_object* v___x_3234_; lean_object* v_canon_3235_; lean_object* v_share_3236_; lean_object* v_maxFVar_3237_; lean_object* v_proofInstInfo_3238_; lean_object* v_proofInstInfoFVar_3239_; lean_object* v_letValue_3240_; lean_object* v_inferType_3241_; lean_object* v_getLevel_3242_; lean_object* v_congrInfo_3243_; lean_object* v_defEqI_3244_; lean_object* v_extensions_3245_; lean_object* v_issues_3246_; lean_object* v_instanceOverrides_3247_; uint8_t v_debug_3248_; lean_object* v___x_3250_; uint8_t v_isShared_3251_; uint8_t v_isSharedCheck_3269_; 
v___x_3234_ = lean_st_ref_take(v_a_3210_);
v_canon_3235_ = lean_ctor_get(v___x_3234_, 11);
v_share_3236_ = lean_ctor_get(v___x_3234_, 0);
v_maxFVar_3237_ = lean_ctor_get(v___x_3234_, 1);
v_proofInstInfo_3238_ = lean_ctor_get(v___x_3234_, 2);
v_proofInstInfoFVar_3239_ = lean_ctor_get(v___x_3234_, 3);
v_letValue_3240_ = lean_ctor_get(v___x_3234_, 4);
v_inferType_3241_ = lean_ctor_get(v___x_3234_, 5);
v_getLevel_3242_ = lean_ctor_get(v___x_3234_, 6);
v_congrInfo_3243_ = lean_ctor_get(v___x_3234_, 7);
v_defEqI_3244_ = lean_ctor_get(v___x_3234_, 8);
v_extensions_3245_ = lean_ctor_get(v___x_3234_, 9);
v_issues_3246_ = lean_ctor_get(v___x_3234_, 10);
v_instanceOverrides_3247_ = lean_ctor_get(v___x_3234_, 12);
v_debug_3248_ = lean_ctor_get_uint8(v___x_3234_, sizeof(void*)*13);
v_isSharedCheck_3269_ = !lean_is_exclusive(v___x_3234_);
if (v_isSharedCheck_3269_ == 0)
{
v___x_3250_ = v___x_3234_;
v_isShared_3251_ = v_isSharedCheck_3269_;
goto v_resetjp_3249_;
}
else
{
lean_inc(v_instanceOverrides_3247_);
lean_inc(v_canon_3235_);
lean_inc(v_issues_3246_);
lean_inc(v_extensions_3245_);
lean_inc(v_defEqI_3244_);
lean_inc(v_congrInfo_3243_);
lean_inc(v_getLevel_3242_);
lean_inc(v_inferType_3241_);
lean_inc(v_letValue_3240_);
lean_inc(v_proofInstInfoFVar_3239_);
lean_inc(v_proofInstInfo_3238_);
lean_inc(v_maxFVar_3237_);
lean_inc(v_share_3236_);
lean_dec(v___x_3234_);
v___x_3250_ = lean_box(0);
v_isShared_3251_ = v_isSharedCheck_3269_;
goto v_resetjp_3249_;
}
v_resetjp_3249_:
{
lean_object* v_cache_3252_; lean_object* v_cacheInType_3253_; lean_object* v___x_3255_; uint8_t v_isShared_3256_; uint8_t v_isSharedCheck_3268_; 
v_cache_3252_ = lean_ctor_get(v_canon_3235_, 0);
v_cacheInType_3253_ = lean_ctor_get(v_canon_3235_, 1);
v_isSharedCheck_3268_ = !lean_is_exclusive(v_canon_3235_);
if (v_isSharedCheck_3268_ == 0)
{
v___x_3255_ = v_canon_3235_;
v_isShared_3256_ = v_isSharedCheck_3268_;
goto v_resetjp_3254_;
}
else
{
lean_inc(v_cacheInType_3253_);
lean_inc(v_cache_3252_);
lean_dec(v_canon_3235_);
v___x_3255_ = lean_box(0);
v_isShared_3256_ = v_isSharedCheck_3268_;
goto v_resetjp_3254_;
}
v_resetjp_3254_:
{
lean_object* v___x_3257_; lean_object* v___x_3259_; 
lean_inc(v_a_3230_);
v___x_3257_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cache_3252_, v_e_3207_, v_a_3230_);
if (v_isShared_3256_ == 0)
{
lean_ctor_set(v___x_3255_, 0, v___x_3257_);
v___x_3259_ = v___x_3255_;
goto v_reusejp_3258_;
}
else
{
lean_object* v_reuseFailAlloc_3267_; 
v_reuseFailAlloc_3267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3267_, 0, v___x_3257_);
lean_ctor_set(v_reuseFailAlloc_3267_, 1, v_cacheInType_3253_);
v___x_3259_ = v_reuseFailAlloc_3267_;
goto v_reusejp_3258_;
}
v_reusejp_3258_:
{
lean_object* v___x_3261_; 
if (v_isShared_3251_ == 0)
{
lean_ctor_set(v___x_3250_, 11, v___x_3259_);
v___x_3261_ = v___x_3250_;
goto v_reusejp_3260_;
}
else
{
lean_object* v_reuseFailAlloc_3266_; 
v_reuseFailAlloc_3266_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_3266_, 0, v_share_3236_);
lean_ctor_set(v_reuseFailAlloc_3266_, 1, v_maxFVar_3237_);
lean_ctor_set(v_reuseFailAlloc_3266_, 2, v_proofInstInfo_3238_);
lean_ctor_set(v_reuseFailAlloc_3266_, 3, v_proofInstInfoFVar_3239_);
lean_ctor_set(v_reuseFailAlloc_3266_, 4, v_letValue_3240_);
lean_ctor_set(v_reuseFailAlloc_3266_, 5, v_inferType_3241_);
lean_ctor_set(v_reuseFailAlloc_3266_, 6, v_getLevel_3242_);
lean_ctor_set(v_reuseFailAlloc_3266_, 7, v_congrInfo_3243_);
lean_ctor_set(v_reuseFailAlloc_3266_, 8, v_defEqI_3244_);
lean_ctor_set(v_reuseFailAlloc_3266_, 9, v_extensions_3245_);
lean_ctor_set(v_reuseFailAlloc_3266_, 10, v_issues_3246_);
lean_ctor_set(v_reuseFailAlloc_3266_, 11, v___x_3259_);
lean_ctor_set(v_reuseFailAlloc_3266_, 12, v_instanceOverrides_3247_);
lean_ctor_set_uint8(v_reuseFailAlloc_3266_, sizeof(void*)*13, v_debug_3248_);
v___x_3261_ = v_reuseFailAlloc_3266_;
goto v_reusejp_3260_;
}
v_reusejp_3260_:
{
lean_object* v___x_3262_; lean_object* v___x_3264_; 
v___x_3262_ = lean_st_ref_put(v_a_3210_, v___x_3261_);
if (v_isShared_3233_ == 0)
{
v___x_3264_ = v___x_3232_;
goto v_reusejp_3263_;
}
else
{
lean_object* v_reuseFailAlloc_3265_; 
v_reuseFailAlloc_3265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3265_, 0, v_a_3230_);
v___x_3264_ = v_reuseFailAlloc_3265_;
goto v_reusejp_3263_;
}
v_reusejp_3263_:
{
return v___x_3264_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3207_, 3);
return v___x_3229_;
}
}
}
else
{
lean_object* v___x_3271_; lean_object* v_canon_3272_; lean_object* v_cacheInType_3273_; lean_object* v___x_3274_; 
v___x_3271_ = lean_st_ref_get(v_a_3210_);
v_canon_3272_ = lean_ctor_get(v___x_3271_, 11);
lean_inc_ref(v_canon_3272_);
lean_dec(v___x_3271_);
v_cacheInType_3273_ = lean_ctor_get(v_canon_3272_, 1);
lean_inc_ref(v_cacheInType_3273_);
lean_dec_ref(v_canon_3272_);
v___x_3274_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cacheInType_3273_, v_e_3207_);
lean_dec_ref(v_cacheInType_3273_);
if (lean_obj_tag(v___x_3274_) == 1)
{
lean_object* v_val_3275_; lean_object* v___x_3277_; uint8_t v_isShared_3278_; uint8_t v_isSharedCheck_3282_; 
lean_dec_ref_known(v_e_3207_, 3);
v_val_3275_ = lean_ctor_get(v___x_3274_, 0);
v_isSharedCheck_3282_ = !lean_is_exclusive(v___x_3274_);
if (v_isSharedCheck_3282_ == 0)
{
v___x_3277_ = v___x_3274_;
v_isShared_3278_ = v_isSharedCheck_3282_;
goto v_resetjp_3276_;
}
else
{
lean_inc(v_val_3275_);
lean_dec(v___x_3274_);
v___x_3277_ = lean_box(0);
v_isShared_3278_ = v_isSharedCheck_3282_;
goto v_resetjp_3276_;
}
v_resetjp_3276_:
{
lean_object* v___x_3280_; 
if (v_isShared_3278_ == 0)
{
lean_ctor_set_tag(v___x_3277_, 0);
v___x_3280_ = v___x_3277_;
goto v_reusejp_3279_;
}
else
{
lean_object* v_reuseFailAlloc_3281_; 
v_reuseFailAlloc_3281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3281_, 0, v_val_3275_);
v___x_3280_ = v_reuseFailAlloc_3281_;
goto v_reusejp_3279_;
}
v_reusejp_3279_:
{
return v___x_3280_;
}
}
}
else
{
lean_object* v___x_3283_; 
lean_dec(v___x_3274_);
lean_inc_ref(v_e_3207_);
v___x_3283_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall(v___x_3216_, v_e_3207_, v_a_3208_, v_a_3209_, v_a_3210_, v_a_3211_, v_a_3212_, v_a_3213_, v_a_3214_);
if (lean_obj_tag(v___x_3283_) == 0)
{
lean_object* v_a_3284_; lean_object* v___x_3286_; uint8_t v_isShared_3287_; uint8_t v_isSharedCheck_3324_; 
v_a_3284_ = lean_ctor_get(v___x_3283_, 0);
v_isSharedCheck_3324_ = !lean_is_exclusive(v___x_3283_);
if (v_isSharedCheck_3324_ == 0)
{
v___x_3286_ = v___x_3283_;
v_isShared_3287_ = v_isSharedCheck_3324_;
goto v_resetjp_3285_;
}
else
{
lean_inc(v_a_3284_);
lean_dec(v___x_3283_);
v___x_3286_ = lean_box(0);
v_isShared_3287_ = v_isSharedCheck_3324_;
goto v_resetjp_3285_;
}
v_resetjp_3285_:
{
lean_object* v___x_3288_; lean_object* v_canon_3289_; lean_object* v_share_3290_; lean_object* v_maxFVar_3291_; lean_object* v_proofInstInfo_3292_; lean_object* v_proofInstInfoFVar_3293_; lean_object* v_letValue_3294_; lean_object* v_inferType_3295_; lean_object* v_getLevel_3296_; lean_object* v_congrInfo_3297_; lean_object* v_defEqI_3298_; lean_object* v_extensions_3299_; lean_object* v_issues_3300_; lean_object* v_instanceOverrides_3301_; uint8_t v_debug_3302_; lean_object* v___x_3304_; uint8_t v_isShared_3305_; uint8_t v_isSharedCheck_3323_; 
v___x_3288_ = lean_st_ref_take(v_a_3210_);
v_canon_3289_ = lean_ctor_get(v___x_3288_, 11);
v_share_3290_ = lean_ctor_get(v___x_3288_, 0);
v_maxFVar_3291_ = lean_ctor_get(v___x_3288_, 1);
v_proofInstInfo_3292_ = lean_ctor_get(v___x_3288_, 2);
v_proofInstInfoFVar_3293_ = lean_ctor_get(v___x_3288_, 3);
v_letValue_3294_ = lean_ctor_get(v___x_3288_, 4);
v_inferType_3295_ = lean_ctor_get(v___x_3288_, 5);
v_getLevel_3296_ = lean_ctor_get(v___x_3288_, 6);
v_congrInfo_3297_ = lean_ctor_get(v___x_3288_, 7);
v_defEqI_3298_ = lean_ctor_get(v___x_3288_, 8);
v_extensions_3299_ = lean_ctor_get(v___x_3288_, 9);
v_issues_3300_ = lean_ctor_get(v___x_3288_, 10);
v_instanceOverrides_3301_ = lean_ctor_get(v___x_3288_, 12);
v_debug_3302_ = lean_ctor_get_uint8(v___x_3288_, sizeof(void*)*13);
v_isSharedCheck_3323_ = !lean_is_exclusive(v___x_3288_);
if (v_isSharedCheck_3323_ == 0)
{
v___x_3304_ = v___x_3288_;
v_isShared_3305_ = v_isSharedCheck_3323_;
goto v_resetjp_3303_;
}
else
{
lean_inc(v_instanceOverrides_3301_);
lean_inc(v_canon_3289_);
lean_inc(v_issues_3300_);
lean_inc(v_extensions_3299_);
lean_inc(v_defEqI_3298_);
lean_inc(v_congrInfo_3297_);
lean_inc(v_getLevel_3296_);
lean_inc(v_inferType_3295_);
lean_inc(v_letValue_3294_);
lean_inc(v_proofInstInfoFVar_3293_);
lean_inc(v_proofInstInfo_3292_);
lean_inc(v_maxFVar_3291_);
lean_inc(v_share_3290_);
lean_dec(v___x_3288_);
v___x_3304_ = lean_box(0);
v_isShared_3305_ = v_isSharedCheck_3323_;
goto v_resetjp_3303_;
}
v_resetjp_3303_:
{
lean_object* v_cache_3306_; lean_object* v_cacheInType_3307_; lean_object* v___x_3309_; uint8_t v_isShared_3310_; uint8_t v_isSharedCheck_3322_; 
v_cache_3306_ = lean_ctor_get(v_canon_3289_, 0);
v_cacheInType_3307_ = lean_ctor_get(v_canon_3289_, 1);
v_isSharedCheck_3322_ = !lean_is_exclusive(v_canon_3289_);
if (v_isSharedCheck_3322_ == 0)
{
v___x_3309_ = v_canon_3289_;
v_isShared_3310_ = v_isSharedCheck_3322_;
goto v_resetjp_3308_;
}
else
{
lean_inc(v_cacheInType_3307_);
lean_inc(v_cache_3306_);
lean_dec(v_canon_3289_);
v___x_3309_ = lean_box(0);
v_isShared_3310_ = v_isSharedCheck_3322_;
goto v_resetjp_3308_;
}
v_resetjp_3308_:
{
lean_object* v___x_3311_; lean_object* v___x_3313_; 
lean_inc(v_a_3284_);
v___x_3311_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cacheInType_3307_, v_e_3207_, v_a_3284_);
if (v_isShared_3310_ == 0)
{
lean_ctor_set(v___x_3309_, 1, v___x_3311_);
v___x_3313_ = v___x_3309_;
goto v_reusejp_3312_;
}
else
{
lean_object* v_reuseFailAlloc_3321_; 
v_reuseFailAlloc_3321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3321_, 0, v_cache_3306_);
lean_ctor_set(v_reuseFailAlloc_3321_, 1, v___x_3311_);
v___x_3313_ = v_reuseFailAlloc_3321_;
goto v_reusejp_3312_;
}
v_reusejp_3312_:
{
lean_object* v___x_3315_; 
if (v_isShared_3305_ == 0)
{
lean_ctor_set(v___x_3304_, 11, v___x_3313_);
v___x_3315_ = v___x_3304_;
goto v_reusejp_3314_;
}
else
{
lean_object* v_reuseFailAlloc_3320_; 
v_reuseFailAlloc_3320_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_3320_, 0, v_share_3290_);
lean_ctor_set(v_reuseFailAlloc_3320_, 1, v_maxFVar_3291_);
lean_ctor_set(v_reuseFailAlloc_3320_, 2, v_proofInstInfo_3292_);
lean_ctor_set(v_reuseFailAlloc_3320_, 3, v_proofInstInfoFVar_3293_);
lean_ctor_set(v_reuseFailAlloc_3320_, 4, v_letValue_3294_);
lean_ctor_set(v_reuseFailAlloc_3320_, 5, v_inferType_3295_);
lean_ctor_set(v_reuseFailAlloc_3320_, 6, v_getLevel_3296_);
lean_ctor_set(v_reuseFailAlloc_3320_, 7, v_congrInfo_3297_);
lean_ctor_set(v_reuseFailAlloc_3320_, 8, v_defEqI_3298_);
lean_ctor_set(v_reuseFailAlloc_3320_, 9, v_extensions_3299_);
lean_ctor_set(v_reuseFailAlloc_3320_, 10, v_issues_3300_);
lean_ctor_set(v_reuseFailAlloc_3320_, 11, v___x_3313_);
lean_ctor_set(v_reuseFailAlloc_3320_, 12, v_instanceOverrides_3301_);
lean_ctor_set_uint8(v_reuseFailAlloc_3320_, sizeof(void*)*13, v_debug_3302_);
v___x_3315_ = v_reuseFailAlloc_3320_;
goto v_reusejp_3314_;
}
v_reusejp_3314_:
{
lean_object* v___x_3316_; lean_object* v___x_3318_; 
v___x_3316_ = lean_st_ref_put(v_a_3210_, v___x_3315_);
if (v_isShared_3287_ == 0)
{
v___x_3318_ = v___x_3286_;
goto v_reusejp_3317_;
}
else
{
lean_object* v_reuseFailAlloc_3319_; 
v_reuseFailAlloc_3319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3319_, 0, v_a_3284_);
v___x_3318_ = v_reuseFailAlloc_3319_;
goto v_reusejp_3317_;
}
v_reusejp_3317_:
{
return v___x_3318_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3207_, 3);
return v___x_3283_;
}
}
}
}
case 6:
{
if (v_a_3208_ == 0)
{
lean_object* v___x_3325_; lean_object* v_canon_3326_; lean_object* v_cache_3327_; lean_object* v___x_3328_; 
v___x_3325_ = lean_st_ref_get(v_a_3210_);
v_canon_3326_ = lean_ctor_get(v___x_3325_, 11);
lean_inc_ref(v_canon_3326_);
lean_dec(v___x_3325_);
v_cache_3327_ = lean_ctor_get(v_canon_3326_, 0);
lean_inc_ref(v_cache_3327_);
lean_dec_ref(v_canon_3326_);
v___x_3328_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cache_3327_, v_e_3207_);
lean_dec_ref(v_cache_3327_);
if (lean_obj_tag(v___x_3328_) == 1)
{
lean_object* v_val_3329_; lean_object* v___x_3331_; uint8_t v_isShared_3332_; uint8_t v_isSharedCheck_3336_; 
lean_dec_ref_known(v_e_3207_, 3);
v_val_3329_ = lean_ctor_get(v___x_3328_, 0);
v_isSharedCheck_3336_ = !lean_is_exclusive(v___x_3328_);
if (v_isSharedCheck_3336_ == 0)
{
v___x_3331_ = v___x_3328_;
v_isShared_3332_ = v_isSharedCheck_3336_;
goto v_resetjp_3330_;
}
else
{
lean_inc(v_val_3329_);
lean_dec(v___x_3328_);
v___x_3331_ = lean_box(0);
v_isShared_3332_ = v_isSharedCheck_3336_;
goto v_resetjp_3330_;
}
v_resetjp_3330_:
{
lean_object* v___x_3334_; 
if (v_isShared_3332_ == 0)
{
lean_ctor_set_tag(v___x_3331_, 0);
v___x_3334_ = v___x_3331_;
goto v_reusejp_3333_;
}
else
{
lean_object* v_reuseFailAlloc_3335_; 
v_reuseFailAlloc_3335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3335_, 0, v_val_3329_);
v___x_3334_ = v_reuseFailAlloc_3335_;
goto v_reusejp_3333_;
}
v_reusejp_3333_:
{
return v___x_3334_;
}
}
}
else
{
lean_object* v___x_3337_; 
lean_dec(v___x_3328_);
lean_inc_ref(v_e_3207_);
v___x_3337_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda(v_e_3207_, v_a_3208_, v_a_3209_, v_a_3210_, v_a_3211_, v_a_3212_, v_a_3213_, v_a_3214_);
if (lean_obj_tag(v___x_3337_) == 0)
{
lean_object* v_a_3338_; lean_object* v___x_3340_; uint8_t v_isShared_3341_; uint8_t v_isSharedCheck_3378_; 
v_a_3338_ = lean_ctor_get(v___x_3337_, 0);
v_isSharedCheck_3378_ = !lean_is_exclusive(v___x_3337_);
if (v_isSharedCheck_3378_ == 0)
{
v___x_3340_ = v___x_3337_;
v_isShared_3341_ = v_isSharedCheck_3378_;
goto v_resetjp_3339_;
}
else
{
lean_inc(v_a_3338_);
lean_dec(v___x_3337_);
v___x_3340_ = lean_box(0);
v_isShared_3341_ = v_isSharedCheck_3378_;
goto v_resetjp_3339_;
}
v_resetjp_3339_:
{
lean_object* v___x_3342_; lean_object* v_canon_3343_; lean_object* v_share_3344_; lean_object* v_maxFVar_3345_; lean_object* v_proofInstInfo_3346_; lean_object* v_proofInstInfoFVar_3347_; lean_object* v_letValue_3348_; lean_object* v_inferType_3349_; lean_object* v_getLevel_3350_; lean_object* v_congrInfo_3351_; lean_object* v_defEqI_3352_; lean_object* v_extensions_3353_; lean_object* v_issues_3354_; lean_object* v_instanceOverrides_3355_; uint8_t v_debug_3356_; lean_object* v___x_3358_; uint8_t v_isShared_3359_; uint8_t v_isSharedCheck_3377_; 
v___x_3342_ = lean_st_ref_take(v_a_3210_);
v_canon_3343_ = lean_ctor_get(v___x_3342_, 11);
v_share_3344_ = lean_ctor_get(v___x_3342_, 0);
v_maxFVar_3345_ = lean_ctor_get(v___x_3342_, 1);
v_proofInstInfo_3346_ = lean_ctor_get(v___x_3342_, 2);
v_proofInstInfoFVar_3347_ = lean_ctor_get(v___x_3342_, 3);
v_letValue_3348_ = lean_ctor_get(v___x_3342_, 4);
v_inferType_3349_ = lean_ctor_get(v___x_3342_, 5);
v_getLevel_3350_ = lean_ctor_get(v___x_3342_, 6);
v_congrInfo_3351_ = lean_ctor_get(v___x_3342_, 7);
v_defEqI_3352_ = lean_ctor_get(v___x_3342_, 8);
v_extensions_3353_ = lean_ctor_get(v___x_3342_, 9);
v_issues_3354_ = lean_ctor_get(v___x_3342_, 10);
v_instanceOverrides_3355_ = lean_ctor_get(v___x_3342_, 12);
v_debug_3356_ = lean_ctor_get_uint8(v___x_3342_, sizeof(void*)*13);
v_isSharedCheck_3377_ = !lean_is_exclusive(v___x_3342_);
if (v_isSharedCheck_3377_ == 0)
{
v___x_3358_ = v___x_3342_;
v_isShared_3359_ = v_isSharedCheck_3377_;
goto v_resetjp_3357_;
}
else
{
lean_inc(v_instanceOverrides_3355_);
lean_inc(v_canon_3343_);
lean_inc(v_issues_3354_);
lean_inc(v_extensions_3353_);
lean_inc(v_defEqI_3352_);
lean_inc(v_congrInfo_3351_);
lean_inc(v_getLevel_3350_);
lean_inc(v_inferType_3349_);
lean_inc(v_letValue_3348_);
lean_inc(v_proofInstInfoFVar_3347_);
lean_inc(v_proofInstInfo_3346_);
lean_inc(v_maxFVar_3345_);
lean_inc(v_share_3344_);
lean_dec(v___x_3342_);
v___x_3358_ = lean_box(0);
v_isShared_3359_ = v_isSharedCheck_3377_;
goto v_resetjp_3357_;
}
v_resetjp_3357_:
{
lean_object* v_cache_3360_; lean_object* v_cacheInType_3361_; lean_object* v___x_3363_; uint8_t v_isShared_3364_; uint8_t v_isSharedCheck_3376_; 
v_cache_3360_ = lean_ctor_get(v_canon_3343_, 0);
v_cacheInType_3361_ = lean_ctor_get(v_canon_3343_, 1);
v_isSharedCheck_3376_ = !lean_is_exclusive(v_canon_3343_);
if (v_isSharedCheck_3376_ == 0)
{
v___x_3363_ = v_canon_3343_;
v_isShared_3364_ = v_isSharedCheck_3376_;
goto v_resetjp_3362_;
}
else
{
lean_inc(v_cacheInType_3361_);
lean_inc(v_cache_3360_);
lean_dec(v_canon_3343_);
v___x_3363_ = lean_box(0);
v_isShared_3364_ = v_isSharedCheck_3376_;
goto v_resetjp_3362_;
}
v_resetjp_3362_:
{
lean_object* v___x_3365_; lean_object* v___x_3367_; 
lean_inc(v_a_3338_);
v___x_3365_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cache_3360_, v_e_3207_, v_a_3338_);
if (v_isShared_3364_ == 0)
{
lean_ctor_set(v___x_3363_, 0, v___x_3365_);
v___x_3367_ = v___x_3363_;
goto v_reusejp_3366_;
}
else
{
lean_object* v_reuseFailAlloc_3375_; 
v_reuseFailAlloc_3375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3375_, 0, v___x_3365_);
lean_ctor_set(v_reuseFailAlloc_3375_, 1, v_cacheInType_3361_);
v___x_3367_ = v_reuseFailAlloc_3375_;
goto v_reusejp_3366_;
}
v_reusejp_3366_:
{
lean_object* v___x_3369_; 
if (v_isShared_3359_ == 0)
{
lean_ctor_set(v___x_3358_, 11, v___x_3367_);
v___x_3369_ = v___x_3358_;
goto v_reusejp_3368_;
}
else
{
lean_object* v_reuseFailAlloc_3374_; 
v_reuseFailAlloc_3374_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_3374_, 0, v_share_3344_);
lean_ctor_set(v_reuseFailAlloc_3374_, 1, v_maxFVar_3345_);
lean_ctor_set(v_reuseFailAlloc_3374_, 2, v_proofInstInfo_3346_);
lean_ctor_set(v_reuseFailAlloc_3374_, 3, v_proofInstInfoFVar_3347_);
lean_ctor_set(v_reuseFailAlloc_3374_, 4, v_letValue_3348_);
lean_ctor_set(v_reuseFailAlloc_3374_, 5, v_inferType_3349_);
lean_ctor_set(v_reuseFailAlloc_3374_, 6, v_getLevel_3350_);
lean_ctor_set(v_reuseFailAlloc_3374_, 7, v_congrInfo_3351_);
lean_ctor_set(v_reuseFailAlloc_3374_, 8, v_defEqI_3352_);
lean_ctor_set(v_reuseFailAlloc_3374_, 9, v_extensions_3353_);
lean_ctor_set(v_reuseFailAlloc_3374_, 10, v_issues_3354_);
lean_ctor_set(v_reuseFailAlloc_3374_, 11, v___x_3367_);
lean_ctor_set(v_reuseFailAlloc_3374_, 12, v_instanceOverrides_3355_);
lean_ctor_set_uint8(v_reuseFailAlloc_3374_, sizeof(void*)*13, v_debug_3356_);
v___x_3369_ = v_reuseFailAlloc_3374_;
goto v_reusejp_3368_;
}
v_reusejp_3368_:
{
lean_object* v___x_3370_; lean_object* v___x_3372_; 
v___x_3370_ = lean_st_ref_put(v_a_3210_, v___x_3369_);
if (v_isShared_3341_ == 0)
{
v___x_3372_ = v___x_3340_;
goto v_reusejp_3371_;
}
else
{
lean_object* v_reuseFailAlloc_3373_; 
v_reuseFailAlloc_3373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3373_, 0, v_a_3338_);
v___x_3372_ = v_reuseFailAlloc_3373_;
goto v_reusejp_3371_;
}
v_reusejp_3371_:
{
return v___x_3372_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3207_, 3);
return v___x_3337_;
}
}
}
else
{
lean_object* v___x_3379_; lean_object* v_canon_3380_; lean_object* v_cacheInType_3381_; lean_object* v___x_3382_; 
v___x_3379_ = lean_st_ref_get(v_a_3210_);
v_canon_3380_ = lean_ctor_get(v___x_3379_, 11);
lean_inc_ref(v_canon_3380_);
lean_dec(v___x_3379_);
v_cacheInType_3381_ = lean_ctor_get(v_canon_3380_, 1);
lean_inc_ref(v_cacheInType_3381_);
lean_dec_ref(v_canon_3380_);
v___x_3382_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cacheInType_3381_, v_e_3207_);
lean_dec_ref(v_cacheInType_3381_);
if (lean_obj_tag(v___x_3382_) == 1)
{
lean_object* v_val_3383_; lean_object* v___x_3385_; uint8_t v_isShared_3386_; uint8_t v_isSharedCheck_3390_; 
lean_dec_ref_known(v_e_3207_, 3);
v_val_3383_ = lean_ctor_get(v___x_3382_, 0);
v_isSharedCheck_3390_ = !lean_is_exclusive(v___x_3382_);
if (v_isSharedCheck_3390_ == 0)
{
v___x_3385_ = v___x_3382_;
v_isShared_3386_ = v_isSharedCheck_3390_;
goto v_resetjp_3384_;
}
else
{
lean_inc(v_val_3383_);
lean_dec(v___x_3382_);
v___x_3385_ = lean_box(0);
v_isShared_3386_ = v_isSharedCheck_3390_;
goto v_resetjp_3384_;
}
v_resetjp_3384_:
{
lean_object* v___x_3388_; 
if (v_isShared_3386_ == 0)
{
lean_ctor_set_tag(v___x_3385_, 0);
v___x_3388_ = v___x_3385_;
goto v_reusejp_3387_;
}
else
{
lean_object* v_reuseFailAlloc_3389_; 
v_reuseFailAlloc_3389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3389_, 0, v_val_3383_);
v___x_3388_ = v_reuseFailAlloc_3389_;
goto v_reusejp_3387_;
}
v_reusejp_3387_:
{
return v___x_3388_;
}
}
}
else
{
lean_object* v___x_3391_; 
lean_dec(v___x_3382_);
lean_inc_ref(v_e_3207_);
v___x_3391_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda(v_e_3207_, v_a_3208_, v_a_3209_, v_a_3210_, v_a_3211_, v_a_3212_, v_a_3213_, v_a_3214_);
if (lean_obj_tag(v___x_3391_) == 0)
{
lean_object* v_a_3392_; lean_object* v___x_3394_; uint8_t v_isShared_3395_; uint8_t v_isSharedCheck_3432_; 
v_a_3392_ = lean_ctor_get(v___x_3391_, 0);
v_isSharedCheck_3432_ = !lean_is_exclusive(v___x_3391_);
if (v_isSharedCheck_3432_ == 0)
{
v___x_3394_ = v___x_3391_;
v_isShared_3395_ = v_isSharedCheck_3432_;
goto v_resetjp_3393_;
}
else
{
lean_inc(v_a_3392_);
lean_dec(v___x_3391_);
v___x_3394_ = lean_box(0);
v_isShared_3395_ = v_isSharedCheck_3432_;
goto v_resetjp_3393_;
}
v_resetjp_3393_:
{
lean_object* v___x_3396_; lean_object* v_canon_3397_; lean_object* v_share_3398_; lean_object* v_maxFVar_3399_; lean_object* v_proofInstInfo_3400_; lean_object* v_proofInstInfoFVar_3401_; lean_object* v_letValue_3402_; lean_object* v_inferType_3403_; lean_object* v_getLevel_3404_; lean_object* v_congrInfo_3405_; lean_object* v_defEqI_3406_; lean_object* v_extensions_3407_; lean_object* v_issues_3408_; lean_object* v_instanceOverrides_3409_; uint8_t v_debug_3410_; lean_object* v___x_3412_; uint8_t v_isShared_3413_; uint8_t v_isSharedCheck_3431_; 
v___x_3396_ = lean_st_ref_take(v_a_3210_);
v_canon_3397_ = lean_ctor_get(v___x_3396_, 11);
v_share_3398_ = lean_ctor_get(v___x_3396_, 0);
v_maxFVar_3399_ = lean_ctor_get(v___x_3396_, 1);
v_proofInstInfo_3400_ = lean_ctor_get(v___x_3396_, 2);
v_proofInstInfoFVar_3401_ = lean_ctor_get(v___x_3396_, 3);
v_letValue_3402_ = lean_ctor_get(v___x_3396_, 4);
v_inferType_3403_ = lean_ctor_get(v___x_3396_, 5);
v_getLevel_3404_ = lean_ctor_get(v___x_3396_, 6);
v_congrInfo_3405_ = lean_ctor_get(v___x_3396_, 7);
v_defEqI_3406_ = lean_ctor_get(v___x_3396_, 8);
v_extensions_3407_ = lean_ctor_get(v___x_3396_, 9);
v_issues_3408_ = lean_ctor_get(v___x_3396_, 10);
v_instanceOverrides_3409_ = lean_ctor_get(v___x_3396_, 12);
v_debug_3410_ = lean_ctor_get_uint8(v___x_3396_, sizeof(void*)*13);
v_isSharedCheck_3431_ = !lean_is_exclusive(v___x_3396_);
if (v_isSharedCheck_3431_ == 0)
{
v___x_3412_ = v___x_3396_;
v_isShared_3413_ = v_isSharedCheck_3431_;
goto v_resetjp_3411_;
}
else
{
lean_inc(v_instanceOverrides_3409_);
lean_inc(v_canon_3397_);
lean_inc(v_issues_3408_);
lean_inc(v_extensions_3407_);
lean_inc(v_defEqI_3406_);
lean_inc(v_congrInfo_3405_);
lean_inc(v_getLevel_3404_);
lean_inc(v_inferType_3403_);
lean_inc(v_letValue_3402_);
lean_inc(v_proofInstInfoFVar_3401_);
lean_inc(v_proofInstInfo_3400_);
lean_inc(v_maxFVar_3399_);
lean_inc(v_share_3398_);
lean_dec(v___x_3396_);
v___x_3412_ = lean_box(0);
v_isShared_3413_ = v_isSharedCheck_3431_;
goto v_resetjp_3411_;
}
v_resetjp_3411_:
{
lean_object* v_cache_3414_; lean_object* v_cacheInType_3415_; lean_object* v___x_3417_; uint8_t v_isShared_3418_; uint8_t v_isSharedCheck_3430_; 
v_cache_3414_ = lean_ctor_get(v_canon_3397_, 0);
v_cacheInType_3415_ = lean_ctor_get(v_canon_3397_, 1);
v_isSharedCheck_3430_ = !lean_is_exclusive(v_canon_3397_);
if (v_isSharedCheck_3430_ == 0)
{
v___x_3417_ = v_canon_3397_;
v_isShared_3418_ = v_isSharedCheck_3430_;
goto v_resetjp_3416_;
}
else
{
lean_inc(v_cacheInType_3415_);
lean_inc(v_cache_3414_);
lean_dec(v_canon_3397_);
v___x_3417_ = lean_box(0);
v_isShared_3418_ = v_isSharedCheck_3430_;
goto v_resetjp_3416_;
}
v_resetjp_3416_:
{
lean_object* v___x_3419_; lean_object* v___x_3421_; 
lean_inc(v_a_3392_);
v___x_3419_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cacheInType_3415_, v_e_3207_, v_a_3392_);
if (v_isShared_3418_ == 0)
{
lean_ctor_set(v___x_3417_, 1, v___x_3419_);
v___x_3421_ = v___x_3417_;
goto v_reusejp_3420_;
}
else
{
lean_object* v_reuseFailAlloc_3429_; 
v_reuseFailAlloc_3429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3429_, 0, v_cache_3414_);
lean_ctor_set(v_reuseFailAlloc_3429_, 1, v___x_3419_);
v___x_3421_ = v_reuseFailAlloc_3429_;
goto v_reusejp_3420_;
}
v_reusejp_3420_:
{
lean_object* v___x_3423_; 
if (v_isShared_3413_ == 0)
{
lean_ctor_set(v___x_3412_, 11, v___x_3421_);
v___x_3423_ = v___x_3412_;
goto v_reusejp_3422_;
}
else
{
lean_object* v_reuseFailAlloc_3428_; 
v_reuseFailAlloc_3428_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_3428_, 0, v_share_3398_);
lean_ctor_set(v_reuseFailAlloc_3428_, 1, v_maxFVar_3399_);
lean_ctor_set(v_reuseFailAlloc_3428_, 2, v_proofInstInfo_3400_);
lean_ctor_set(v_reuseFailAlloc_3428_, 3, v_proofInstInfoFVar_3401_);
lean_ctor_set(v_reuseFailAlloc_3428_, 4, v_letValue_3402_);
lean_ctor_set(v_reuseFailAlloc_3428_, 5, v_inferType_3403_);
lean_ctor_set(v_reuseFailAlloc_3428_, 6, v_getLevel_3404_);
lean_ctor_set(v_reuseFailAlloc_3428_, 7, v_congrInfo_3405_);
lean_ctor_set(v_reuseFailAlloc_3428_, 8, v_defEqI_3406_);
lean_ctor_set(v_reuseFailAlloc_3428_, 9, v_extensions_3407_);
lean_ctor_set(v_reuseFailAlloc_3428_, 10, v_issues_3408_);
lean_ctor_set(v_reuseFailAlloc_3428_, 11, v___x_3421_);
lean_ctor_set(v_reuseFailAlloc_3428_, 12, v_instanceOverrides_3409_);
lean_ctor_set_uint8(v_reuseFailAlloc_3428_, sizeof(void*)*13, v_debug_3410_);
v___x_3423_ = v_reuseFailAlloc_3428_;
goto v_reusejp_3422_;
}
v_reusejp_3422_:
{
lean_object* v___x_3424_; lean_object* v___x_3426_; 
v___x_3424_ = lean_st_ref_put(v_a_3210_, v___x_3423_);
if (v_isShared_3395_ == 0)
{
v___x_3426_ = v___x_3394_;
goto v_reusejp_3425_;
}
else
{
lean_object* v_reuseFailAlloc_3427_; 
v_reuseFailAlloc_3427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3427_, 0, v_a_3392_);
v___x_3426_ = v_reuseFailAlloc_3427_;
goto v_reusejp_3425_;
}
v_reusejp_3425_:
{
return v___x_3426_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3207_, 3);
return v___x_3391_;
}
}
}
}
case 8:
{
lean_object* v___x_3433_; 
v___x_3433_ = ((lean_object*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda___closed__0));
if (v_a_3208_ == 0)
{
lean_object* v___x_3434_; lean_object* v_canon_3435_; lean_object* v_cache_3436_; lean_object* v___x_3437_; 
v___x_3434_ = lean_st_ref_get(v_a_3210_);
v_canon_3435_ = lean_ctor_get(v___x_3434_, 11);
lean_inc_ref(v_canon_3435_);
lean_dec(v___x_3434_);
v_cache_3436_ = lean_ctor_get(v_canon_3435_, 0);
lean_inc_ref(v_cache_3436_);
lean_dec_ref(v_canon_3435_);
v___x_3437_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cache_3436_, v_e_3207_);
lean_dec_ref(v_cache_3436_);
if (lean_obj_tag(v___x_3437_) == 1)
{
lean_object* v_val_3438_; lean_object* v___x_3440_; uint8_t v_isShared_3441_; uint8_t v_isSharedCheck_3445_; 
lean_dec_ref_known(v_e_3207_, 4);
v_val_3438_ = lean_ctor_get(v___x_3437_, 0);
v_isSharedCheck_3445_ = !lean_is_exclusive(v___x_3437_);
if (v_isSharedCheck_3445_ == 0)
{
v___x_3440_ = v___x_3437_;
v_isShared_3441_ = v_isSharedCheck_3445_;
goto v_resetjp_3439_;
}
else
{
lean_inc(v_val_3438_);
lean_dec(v___x_3437_);
v___x_3440_ = lean_box(0);
v_isShared_3441_ = v_isSharedCheck_3445_;
goto v_resetjp_3439_;
}
v_resetjp_3439_:
{
lean_object* v___x_3443_; 
if (v_isShared_3441_ == 0)
{
lean_ctor_set_tag(v___x_3440_, 0);
v___x_3443_ = v___x_3440_;
goto v_reusejp_3442_;
}
else
{
lean_object* v_reuseFailAlloc_3444_; 
v_reuseFailAlloc_3444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3444_, 0, v_val_3438_);
v___x_3443_ = v_reuseFailAlloc_3444_;
goto v_reusejp_3442_;
}
v_reusejp_3442_:
{
return v___x_3443_;
}
}
}
else
{
lean_object* v___x_3446_; 
lean_dec(v___x_3437_);
lean_inc_ref(v_e_3207_);
v___x_3446_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet(v___x_3433_, v_e_3207_, v_a_3208_, v_a_3209_, v_a_3210_, v_a_3211_, v_a_3212_, v_a_3213_, v_a_3214_);
if (lean_obj_tag(v___x_3446_) == 0)
{
lean_object* v_a_3447_; lean_object* v___x_3449_; uint8_t v_isShared_3450_; uint8_t v_isSharedCheck_3487_; 
v_a_3447_ = lean_ctor_get(v___x_3446_, 0);
v_isSharedCheck_3487_ = !lean_is_exclusive(v___x_3446_);
if (v_isSharedCheck_3487_ == 0)
{
v___x_3449_ = v___x_3446_;
v_isShared_3450_ = v_isSharedCheck_3487_;
goto v_resetjp_3448_;
}
else
{
lean_inc(v_a_3447_);
lean_dec(v___x_3446_);
v___x_3449_ = lean_box(0);
v_isShared_3450_ = v_isSharedCheck_3487_;
goto v_resetjp_3448_;
}
v_resetjp_3448_:
{
lean_object* v___x_3451_; lean_object* v_canon_3452_; lean_object* v_share_3453_; lean_object* v_maxFVar_3454_; lean_object* v_proofInstInfo_3455_; lean_object* v_proofInstInfoFVar_3456_; lean_object* v_letValue_3457_; lean_object* v_inferType_3458_; lean_object* v_getLevel_3459_; lean_object* v_congrInfo_3460_; lean_object* v_defEqI_3461_; lean_object* v_extensions_3462_; lean_object* v_issues_3463_; lean_object* v_instanceOverrides_3464_; uint8_t v_debug_3465_; lean_object* v___x_3467_; uint8_t v_isShared_3468_; uint8_t v_isSharedCheck_3486_; 
v___x_3451_ = lean_st_ref_take(v_a_3210_);
v_canon_3452_ = lean_ctor_get(v___x_3451_, 11);
v_share_3453_ = lean_ctor_get(v___x_3451_, 0);
v_maxFVar_3454_ = lean_ctor_get(v___x_3451_, 1);
v_proofInstInfo_3455_ = lean_ctor_get(v___x_3451_, 2);
v_proofInstInfoFVar_3456_ = lean_ctor_get(v___x_3451_, 3);
v_letValue_3457_ = lean_ctor_get(v___x_3451_, 4);
v_inferType_3458_ = lean_ctor_get(v___x_3451_, 5);
v_getLevel_3459_ = lean_ctor_get(v___x_3451_, 6);
v_congrInfo_3460_ = lean_ctor_get(v___x_3451_, 7);
v_defEqI_3461_ = lean_ctor_get(v___x_3451_, 8);
v_extensions_3462_ = lean_ctor_get(v___x_3451_, 9);
v_issues_3463_ = lean_ctor_get(v___x_3451_, 10);
v_instanceOverrides_3464_ = lean_ctor_get(v___x_3451_, 12);
v_debug_3465_ = lean_ctor_get_uint8(v___x_3451_, sizeof(void*)*13);
v_isSharedCheck_3486_ = !lean_is_exclusive(v___x_3451_);
if (v_isSharedCheck_3486_ == 0)
{
v___x_3467_ = v___x_3451_;
v_isShared_3468_ = v_isSharedCheck_3486_;
goto v_resetjp_3466_;
}
else
{
lean_inc(v_instanceOverrides_3464_);
lean_inc(v_canon_3452_);
lean_inc(v_issues_3463_);
lean_inc(v_extensions_3462_);
lean_inc(v_defEqI_3461_);
lean_inc(v_congrInfo_3460_);
lean_inc(v_getLevel_3459_);
lean_inc(v_inferType_3458_);
lean_inc(v_letValue_3457_);
lean_inc(v_proofInstInfoFVar_3456_);
lean_inc(v_proofInstInfo_3455_);
lean_inc(v_maxFVar_3454_);
lean_inc(v_share_3453_);
lean_dec(v___x_3451_);
v___x_3467_ = lean_box(0);
v_isShared_3468_ = v_isSharedCheck_3486_;
goto v_resetjp_3466_;
}
v_resetjp_3466_:
{
lean_object* v_cache_3469_; lean_object* v_cacheInType_3470_; lean_object* v___x_3472_; uint8_t v_isShared_3473_; uint8_t v_isSharedCheck_3485_; 
v_cache_3469_ = lean_ctor_get(v_canon_3452_, 0);
v_cacheInType_3470_ = lean_ctor_get(v_canon_3452_, 1);
v_isSharedCheck_3485_ = !lean_is_exclusive(v_canon_3452_);
if (v_isSharedCheck_3485_ == 0)
{
v___x_3472_ = v_canon_3452_;
v_isShared_3473_ = v_isSharedCheck_3485_;
goto v_resetjp_3471_;
}
else
{
lean_inc(v_cacheInType_3470_);
lean_inc(v_cache_3469_);
lean_dec(v_canon_3452_);
v___x_3472_ = lean_box(0);
v_isShared_3473_ = v_isSharedCheck_3485_;
goto v_resetjp_3471_;
}
v_resetjp_3471_:
{
lean_object* v___x_3474_; lean_object* v___x_3476_; 
lean_inc(v_a_3447_);
v___x_3474_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cache_3469_, v_e_3207_, v_a_3447_);
if (v_isShared_3473_ == 0)
{
lean_ctor_set(v___x_3472_, 0, v___x_3474_);
v___x_3476_ = v___x_3472_;
goto v_reusejp_3475_;
}
else
{
lean_object* v_reuseFailAlloc_3484_; 
v_reuseFailAlloc_3484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3484_, 0, v___x_3474_);
lean_ctor_set(v_reuseFailAlloc_3484_, 1, v_cacheInType_3470_);
v___x_3476_ = v_reuseFailAlloc_3484_;
goto v_reusejp_3475_;
}
v_reusejp_3475_:
{
lean_object* v___x_3478_; 
if (v_isShared_3468_ == 0)
{
lean_ctor_set(v___x_3467_, 11, v___x_3476_);
v___x_3478_ = v___x_3467_;
goto v_reusejp_3477_;
}
else
{
lean_object* v_reuseFailAlloc_3483_; 
v_reuseFailAlloc_3483_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_3483_, 0, v_share_3453_);
lean_ctor_set(v_reuseFailAlloc_3483_, 1, v_maxFVar_3454_);
lean_ctor_set(v_reuseFailAlloc_3483_, 2, v_proofInstInfo_3455_);
lean_ctor_set(v_reuseFailAlloc_3483_, 3, v_proofInstInfoFVar_3456_);
lean_ctor_set(v_reuseFailAlloc_3483_, 4, v_letValue_3457_);
lean_ctor_set(v_reuseFailAlloc_3483_, 5, v_inferType_3458_);
lean_ctor_set(v_reuseFailAlloc_3483_, 6, v_getLevel_3459_);
lean_ctor_set(v_reuseFailAlloc_3483_, 7, v_congrInfo_3460_);
lean_ctor_set(v_reuseFailAlloc_3483_, 8, v_defEqI_3461_);
lean_ctor_set(v_reuseFailAlloc_3483_, 9, v_extensions_3462_);
lean_ctor_set(v_reuseFailAlloc_3483_, 10, v_issues_3463_);
lean_ctor_set(v_reuseFailAlloc_3483_, 11, v___x_3476_);
lean_ctor_set(v_reuseFailAlloc_3483_, 12, v_instanceOverrides_3464_);
lean_ctor_set_uint8(v_reuseFailAlloc_3483_, sizeof(void*)*13, v_debug_3465_);
v___x_3478_ = v_reuseFailAlloc_3483_;
goto v_reusejp_3477_;
}
v_reusejp_3477_:
{
lean_object* v___x_3479_; lean_object* v___x_3481_; 
v___x_3479_ = lean_st_ref_put(v_a_3210_, v___x_3478_);
if (v_isShared_3450_ == 0)
{
v___x_3481_ = v___x_3449_;
goto v_reusejp_3480_;
}
else
{
lean_object* v_reuseFailAlloc_3482_; 
v_reuseFailAlloc_3482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3482_, 0, v_a_3447_);
v___x_3481_ = v_reuseFailAlloc_3482_;
goto v_reusejp_3480_;
}
v_reusejp_3480_:
{
return v___x_3481_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3207_, 4);
return v___x_3446_;
}
}
}
else
{
lean_object* v___x_3488_; lean_object* v_canon_3489_; lean_object* v_cacheInType_3490_; lean_object* v___x_3491_; 
v___x_3488_ = lean_st_ref_get(v_a_3210_);
v_canon_3489_ = lean_ctor_get(v___x_3488_, 11);
lean_inc_ref(v_canon_3489_);
lean_dec(v___x_3488_);
v_cacheInType_3490_ = lean_ctor_get(v_canon_3489_, 1);
lean_inc_ref(v_cacheInType_3490_);
lean_dec_ref(v_canon_3489_);
v___x_3491_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cacheInType_3490_, v_e_3207_);
lean_dec_ref(v_cacheInType_3490_);
if (lean_obj_tag(v___x_3491_) == 1)
{
lean_object* v_val_3492_; lean_object* v___x_3494_; uint8_t v_isShared_3495_; uint8_t v_isSharedCheck_3499_; 
lean_dec_ref_known(v_e_3207_, 4);
v_val_3492_ = lean_ctor_get(v___x_3491_, 0);
v_isSharedCheck_3499_ = !lean_is_exclusive(v___x_3491_);
if (v_isSharedCheck_3499_ == 0)
{
v___x_3494_ = v___x_3491_;
v_isShared_3495_ = v_isSharedCheck_3499_;
goto v_resetjp_3493_;
}
else
{
lean_inc(v_val_3492_);
lean_dec(v___x_3491_);
v___x_3494_ = lean_box(0);
v_isShared_3495_ = v_isSharedCheck_3499_;
goto v_resetjp_3493_;
}
v_resetjp_3493_:
{
lean_object* v___x_3497_; 
if (v_isShared_3495_ == 0)
{
lean_ctor_set_tag(v___x_3494_, 0);
v___x_3497_ = v___x_3494_;
goto v_reusejp_3496_;
}
else
{
lean_object* v_reuseFailAlloc_3498_; 
v_reuseFailAlloc_3498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3498_, 0, v_val_3492_);
v___x_3497_ = v_reuseFailAlloc_3498_;
goto v_reusejp_3496_;
}
v_reusejp_3496_:
{
return v___x_3497_;
}
}
}
else
{
lean_object* v___x_3500_; 
lean_dec(v___x_3491_);
lean_inc_ref(v_e_3207_);
v___x_3500_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet(v___x_3433_, v_e_3207_, v_a_3208_, v_a_3209_, v_a_3210_, v_a_3211_, v_a_3212_, v_a_3213_, v_a_3214_);
if (lean_obj_tag(v___x_3500_) == 0)
{
lean_object* v_a_3501_; lean_object* v___x_3503_; uint8_t v_isShared_3504_; uint8_t v_isSharedCheck_3541_; 
v_a_3501_ = lean_ctor_get(v___x_3500_, 0);
v_isSharedCheck_3541_ = !lean_is_exclusive(v___x_3500_);
if (v_isSharedCheck_3541_ == 0)
{
v___x_3503_ = v___x_3500_;
v_isShared_3504_ = v_isSharedCheck_3541_;
goto v_resetjp_3502_;
}
else
{
lean_inc(v_a_3501_);
lean_dec(v___x_3500_);
v___x_3503_ = lean_box(0);
v_isShared_3504_ = v_isSharedCheck_3541_;
goto v_resetjp_3502_;
}
v_resetjp_3502_:
{
lean_object* v___x_3505_; lean_object* v_canon_3506_; lean_object* v_share_3507_; lean_object* v_maxFVar_3508_; lean_object* v_proofInstInfo_3509_; lean_object* v_proofInstInfoFVar_3510_; lean_object* v_letValue_3511_; lean_object* v_inferType_3512_; lean_object* v_getLevel_3513_; lean_object* v_congrInfo_3514_; lean_object* v_defEqI_3515_; lean_object* v_extensions_3516_; lean_object* v_issues_3517_; lean_object* v_instanceOverrides_3518_; uint8_t v_debug_3519_; lean_object* v___x_3521_; uint8_t v_isShared_3522_; uint8_t v_isSharedCheck_3540_; 
v___x_3505_ = lean_st_ref_take(v_a_3210_);
v_canon_3506_ = lean_ctor_get(v___x_3505_, 11);
v_share_3507_ = lean_ctor_get(v___x_3505_, 0);
v_maxFVar_3508_ = lean_ctor_get(v___x_3505_, 1);
v_proofInstInfo_3509_ = lean_ctor_get(v___x_3505_, 2);
v_proofInstInfoFVar_3510_ = lean_ctor_get(v___x_3505_, 3);
v_letValue_3511_ = lean_ctor_get(v___x_3505_, 4);
v_inferType_3512_ = lean_ctor_get(v___x_3505_, 5);
v_getLevel_3513_ = lean_ctor_get(v___x_3505_, 6);
v_congrInfo_3514_ = lean_ctor_get(v___x_3505_, 7);
v_defEqI_3515_ = lean_ctor_get(v___x_3505_, 8);
v_extensions_3516_ = lean_ctor_get(v___x_3505_, 9);
v_issues_3517_ = lean_ctor_get(v___x_3505_, 10);
v_instanceOverrides_3518_ = lean_ctor_get(v___x_3505_, 12);
v_debug_3519_ = lean_ctor_get_uint8(v___x_3505_, sizeof(void*)*13);
v_isSharedCheck_3540_ = !lean_is_exclusive(v___x_3505_);
if (v_isSharedCheck_3540_ == 0)
{
v___x_3521_ = v___x_3505_;
v_isShared_3522_ = v_isSharedCheck_3540_;
goto v_resetjp_3520_;
}
else
{
lean_inc(v_instanceOverrides_3518_);
lean_inc(v_canon_3506_);
lean_inc(v_issues_3517_);
lean_inc(v_extensions_3516_);
lean_inc(v_defEqI_3515_);
lean_inc(v_congrInfo_3514_);
lean_inc(v_getLevel_3513_);
lean_inc(v_inferType_3512_);
lean_inc(v_letValue_3511_);
lean_inc(v_proofInstInfoFVar_3510_);
lean_inc(v_proofInstInfo_3509_);
lean_inc(v_maxFVar_3508_);
lean_inc(v_share_3507_);
lean_dec(v___x_3505_);
v___x_3521_ = lean_box(0);
v_isShared_3522_ = v_isSharedCheck_3540_;
goto v_resetjp_3520_;
}
v_resetjp_3520_:
{
lean_object* v_cache_3523_; lean_object* v_cacheInType_3524_; lean_object* v___x_3526_; uint8_t v_isShared_3527_; uint8_t v_isSharedCheck_3539_; 
v_cache_3523_ = lean_ctor_get(v_canon_3506_, 0);
v_cacheInType_3524_ = lean_ctor_get(v_canon_3506_, 1);
v_isSharedCheck_3539_ = !lean_is_exclusive(v_canon_3506_);
if (v_isSharedCheck_3539_ == 0)
{
v___x_3526_ = v_canon_3506_;
v_isShared_3527_ = v_isSharedCheck_3539_;
goto v_resetjp_3525_;
}
else
{
lean_inc(v_cacheInType_3524_);
lean_inc(v_cache_3523_);
lean_dec(v_canon_3506_);
v___x_3526_ = lean_box(0);
v_isShared_3527_ = v_isSharedCheck_3539_;
goto v_resetjp_3525_;
}
v_resetjp_3525_:
{
lean_object* v___x_3528_; lean_object* v___x_3530_; 
lean_inc(v_a_3501_);
v___x_3528_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cacheInType_3524_, v_e_3207_, v_a_3501_);
if (v_isShared_3527_ == 0)
{
lean_ctor_set(v___x_3526_, 1, v___x_3528_);
v___x_3530_ = v___x_3526_;
goto v_reusejp_3529_;
}
else
{
lean_object* v_reuseFailAlloc_3538_; 
v_reuseFailAlloc_3538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3538_, 0, v_cache_3523_);
lean_ctor_set(v_reuseFailAlloc_3538_, 1, v___x_3528_);
v___x_3530_ = v_reuseFailAlloc_3538_;
goto v_reusejp_3529_;
}
v_reusejp_3529_:
{
lean_object* v___x_3532_; 
if (v_isShared_3522_ == 0)
{
lean_ctor_set(v___x_3521_, 11, v___x_3530_);
v___x_3532_ = v___x_3521_;
goto v_reusejp_3531_;
}
else
{
lean_object* v_reuseFailAlloc_3537_; 
v_reuseFailAlloc_3537_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_3537_, 0, v_share_3507_);
lean_ctor_set(v_reuseFailAlloc_3537_, 1, v_maxFVar_3508_);
lean_ctor_set(v_reuseFailAlloc_3537_, 2, v_proofInstInfo_3509_);
lean_ctor_set(v_reuseFailAlloc_3537_, 3, v_proofInstInfoFVar_3510_);
lean_ctor_set(v_reuseFailAlloc_3537_, 4, v_letValue_3511_);
lean_ctor_set(v_reuseFailAlloc_3537_, 5, v_inferType_3512_);
lean_ctor_set(v_reuseFailAlloc_3537_, 6, v_getLevel_3513_);
lean_ctor_set(v_reuseFailAlloc_3537_, 7, v_congrInfo_3514_);
lean_ctor_set(v_reuseFailAlloc_3537_, 8, v_defEqI_3515_);
lean_ctor_set(v_reuseFailAlloc_3537_, 9, v_extensions_3516_);
lean_ctor_set(v_reuseFailAlloc_3537_, 10, v_issues_3517_);
lean_ctor_set(v_reuseFailAlloc_3537_, 11, v___x_3530_);
lean_ctor_set(v_reuseFailAlloc_3537_, 12, v_instanceOverrides_3518_);
lean_ctor_set_uint8(v_reuseFailAlloc_3537_, sizeof(void*)*13, v_debug_3519_);
v___x_3532_ = v_reuseFailAlloc_3537_;
goto v_reusejp_3531_;
}
v_reusejp_3531_:
{
lean_object* v___x_3533_; lean_object* v___x_3535_; 
v___x_3533_ = lean_st_ref_put(v_a_3210_, v___x_3532_);
if (v_isShared_3504_ == 0)
{
v___x_3535_ = v___x_3503_;
goto v_reusejp_3534_;
}
else
{
lean_object* v_reuseFailAlloc_3536_; 
v_reuseFailAlloc_3536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3536_, 0, v_a_3501_);
v___x_3535_ = v_reuseFailAlloc_3536_;
goto v_reusejp_3534_;
}
v_reusejp_3534_:
{
return v___x_3535_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3207_, 4);
return v___x_3500_;
}
}
}
}
case 5:
{
if (v_a_3208_ == 0)
{
lean_object* v___x_3542_; lean_object* v_canon_3543_; lean_object* v_cache_3544_; lean_object* v___x_3545_; 
v___x_3542_ = lean_st_ref_get(v_a_3210_);
v_canon_3543_ = lean_ctor_get(v___x_3542_, 11);
lean_inc_ref(v_canon_3543_);
lean_dec(v___x_3542_);
v_cache_3544_ = lean_ctor_get(v_canon_3543_, 0);
lean_inc_ref(v_cache_3544_);
lean_dec_ref(v_canon_3543_);
v___x_3545_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cache_3544_, v_e_3207_);
lean_dec_ref(v_cache_3544_);
if (lean_obj_tag(v___x_3545_) == 1)
{
lean_object* v_val_3546_; lean_object* v___x_3548_; uint8_t v_isShared_3549_; uint8_t v_isSharedCheck_3553_; 
lean_dec_ref_known(v_e_3207_, 2);
v_val_3546_ = lean_ctor_get(v___x_3545_, 0);
v_isSharedCheck_3553_ = !lean_is_exclusive(v___x_3545_);
if (v_isSharedCheck_3553_ == 0)
{
v___x_3548_ = v___x_3545_;
v_isShared_3549_ = v_isSharedCheck_3553_;
goto v_resetjp_3547_;
}
else
{
lean_inc(v_val_3546_);
lean_dec(v___x_3545_);
v___x_3548_ = lean_box(0);
v_isShared_3549_ = v_isSharedCheck_3553_;
goto v_resetjp_3547_;
}
v_resetjp_3547_:
{
lean_object* v___x_3551_; 
if (v_isShared_3549_ == 0)
{
lean_ctor_set_tag(v___x_3548_, 0);
v___x_3551_ = v___x_3548_;
goto v_reusejp_3550_;
}
else
{
lean_object* v_reuseFailAlloc_3552_; 
v_reuseFailAlloc_3552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3552_, 0, v_val_3546_);
v___x_3551_ = v_reuseFailAlloc_3552_;
goto v_reusejp_3550_;
}
v_reusejp_3550_:
{
return v___x_3551_;
}
}
}
else
{
lean_object* v___x_3554_; 
lean_dec(v___x_3545_);
lean_inc_ref(v_e_3207_);
v___x_3554_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp(v_e_3207_, v_a_3208_, v_a_3209_, v_a_3210_, v_a_3211_, v_a_3212_, v_a_3213_, v_a_3214_);
if (lean_obj_tag(v___x_3554_) == 0)
{
lean_object* v_a_3555_; lean_object* v___x_3557_; uint8_t v_isShared_3558_; uint8_t v_isSharedCheck_3595_; 
v_a_3555_ = lean_ctor_get(v___x_3554_, 0);
v_isSharedCheck_3595_ = !lean_is_exclusive(v___x_3554_);
if (v_isSharedCheck_3595_ == 0)
{
v___x_3557_ = v___x_3554_;
v_isShared_3558_ = v_isSharedCheck_3595_;
goto v_resetjp_3556_;
}
else
{
lean_inc(v_a_3555_);
lean_dec(v___x_3554_);
v___x_3557_ = lean_box(0);
v_isShared_3558_ = v_isSharedCheck_3595_;
goto v_resetjp_3556_;
}
v_resetjp_3556_:
{
lean_object* v___x_3559_; lean_object* v_canon_3560_; lean_object* v_share_3561_; lean_object* v_maxFVar_3562_; lean_object* v_proofInstInfo_3563_; lean_object* v_proofInstInfoFVar_3564_; lean_object* v_letValue_3565_; lean_object* v_inferType_3566_; lean_object* v_getLevel_3567_; lean_object* v_congrInfo_3568_; lean_object* v_defEqI_3569_; lean_object* v_extensions_3570_; lean_object* v_issues_3571_; lean_object* v_instanceOverrides_3572_; uint8_t v_debug_3573_; lean_object* v___x_3575_; uint8_t v_isShared_3576_; uint8_t v_isSharedCheck_3594_; 
v___x_3559_ = lean_st_ref_take(v_a_3210_);
v_canon_3560_ = lean_ctor_get(v___x_3559_, 11);
v_share_3561_ = lean_ctor_get(v___x_3559_, 0);
v_maxFVar_3562_ = lean_ctor_get(v___x_3559_, 1);
v_proofInstInfo_3563_ = lean_ctor_get(v___x_3559_, 2);
v_proofInstInfoFVar_3564_ = lean_ctor_get(v___x_3559_, 3);
v_letValue_3565_ = lean_ctor_get(v___x_3559_, 4);
v_inferType_3566_ = lean_ctor_get(v___x_3559_, 5);
v_getLevel_3567_ = lean_ctor_get(v___x_3559_, 6);
v_congrInfo_3568_ = lean_ctor_get(v___x_3559_, 7);
v_defEqI_3569_ = lean_ctor_get(v___x_3559_, 8);
v_extensions_3570_ = lean_ctor_get(v___x_3559_, 9);
v_issues_3571_ = lean_ctor_get(v___x_3559_, 10);
v_instanceOverrides_3572_ = lean_ctor_get(v___x_3559_, 12);
v_debug_3573_ = lean_ctor_get_uint8(v___x_3559_, sizeof(void*)*13);
v_isSharedCheck_3594_ = !lean_is_exclusive(v___x_3559_);
if (v_isSharedCheck_3594_ == 0)
{
v___x_3575_ = v___x_3559_;
v_isShared_3576_ = v_isSharedCheck_3594_;
goto v_resetjp_3574_;
}
else
{
lean_inc(v_instanceOverrides_3572_);
lean_inc(v_canon_3560_);
lean_inc(v_issues_3571_);
lean_inc(v_extensions_3570_);
lean_inc(v_defEqI_3569_);
lean_inc(v_congrInfo_3568_);
lean_inc(v_getLevel_3567_);
lean_inc(v_inferType_3566_);
lean_inc(v_letValue_3565_);
lean_inc(v_proofInstInfoFVar_3564_);
lean_inc(v_proofInstInfo_3563_);
lean_inc(v_maxFVar_3562_);
lean_inc(v_share_3561_);
lean_dec(v___x_3559_);
v___x_3575_ = lean_box(0);
v_isShared_3576_ = v_isSharedCheck_3594_;
goto v_resetjp_3574_;
}
v_resetjp_3574_:
{
lean_object* v_cache_3577_; lean_object* v_cacheInType_3578_; lean_object* v___x_3580_; uint8_t v_isShared_3581_; uint8_t v_isSharedCheck_3593_; 
v_cache_3577_ = lean_ctor_get(v_canon_3560_, 0);
v_cacheInType_3578_ = lean_ctor_get(v_canon_3560_, 1);
v_isSharedCheck_3593_ = !lean_is_exclusive(v_canon_3560_);
if (v_isSharedCheck_3593_ == 0)
{
v___x_3580_ = v_canon_3560_;
v_isShared_3581_ = v_isSharedCheck_3593_;
goto v_resetjp_3579_;
}
else
{
lean_inc(v_cacheInType_3578_);
lean_inc(v_cache_3577_);
lean_dec(v_canon_3560_);
v___x_3580_ = lean_box(0);
v_isShared_3581_ = v_isSharedCheck_3593_;
goto v_resetjp_3579_;
}
v_resetjp_3579_:
{
lean_object* v___x_3582_; lean_object* v___x_3584_; 
lean_inc(v_a_3555_);
v___x_3582_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cache_3577_, v_e_3207_, v_a_3555_);
if (v_isShared_3581_ == 0)
{
lean_ctor_set(v___x_3580_, 0, v___x_3582_);
v___x_3584_ = v___x_3580_;
goto v_reusejp_3583_;
}
else
{
lean_object* v_reuseFailAlloc_3592_; 
v_reuseFailAlloc_3592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3592_, 0, v___x_3582_);
lean_ctor_set(v_reuseFailAlloc_3592_, 1, v_cacheInType_3578_);
v___x_3584_ = v_reuseFailAlloc_3592_;
goto v_reusejp_3583_;
}
v_reusejp_3583_:
{
lean_object* v___x_3586_; 
if (v_isShared_3576_ == 0)
{
lean_ctor_set(v___x_3575_, 11, v___x_3584_);
v___x_3586_ = v___x_3575_;
goto v_reusejp_3585_;
}
else
{
lean_object* v_reuseFailAlloc_3591_; 
v_reuseFailAlloc_3591_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_3591_, 0, v_share_3561_);
lean_ctor_set(v_reuseFailAlloc_3591_, 1, v_maxFVar_3562_);
lean_ctor_set(v_reuseFailAlloc_3591_, 2, v_proofInstInfo_3563_);
lean_ctor_set(v_reuseFailAlloc_3591_, 3, v_proofInstInfoFVar_3564_);
lean_ctor_set(v_reuseFailAlloc_3591_, 4, v_letValue_3565_);
lean_ctor_set(v_reuseFailAlloc_3591_, 5, v_inferType_3566_);
lean_ctor_set(v_reuseFailAlloc_3591_, 6, v_getLevel_3567_);
lean_ctor_set(v_reuseFailAlloc_3591_, 7, v_congrInfo_3568_);
lean_ctor_set(v_reuseFailAlloc_3591_, 8, v_defEqI_3569_);
lean_ctor_set(v_reuseFailAlloc_3591_, 9, v_extensions_3570_);
lean_ctor_set(v_reuseFailAlloc_3591_, 10, v_issues_3571_);
lean_ctor_set(v_reuseFailAlloc_3591_, 11, v___x_3584_);
lean_ctor_set(v_reuseFailAlloc_3591_, 12, v_instanceOverrides_3572_);
lean_ctor_set_uint8(v_reuseFailAlloc_3591_, sizeof(void*)*13, v_debug_3573_);
v___x_3586_ = v_reuseFailAlloc_3591_;
goto v_reusejp_3585_;
}
v_reusejp_3585_:
{
lean_object* v___x_3587_; lean_object* v___x_3589_; 
v___x_3587_ = lean_st_ref_put(v_a_3210_, v___x_3586_);
if (v_isShared_3558_ == 0)
{
v___x_3589_ = v___x_3557_;
goto v_reusejp_3588_;
}
else
{
lean_object* v_reuseFailAlloc_3590_; 
v_reuseFailAlloc_3590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3590_, 0, v_a_3555_);
v___x_3589_ = v_reuseFailAlloc_3590_;
goto v_reusejp_3588_;
}
v_reusejp_3588_:
{
return v___x_3589_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3207_, 2);
return v___x_3554_;
}
}
}
else
{
lean_object* v___x_3596_; lean_object* v_canon_3597_; lean_object* v_cacheInType_3598_; lean_object* v___x_3599_; 
v___x_3596_ = lean_st_ref_get(v_a_3210_);
v_canon_3597_ = lean_ctor_get(v___x_3596_, 11);
lean_inc_ref(v_canon_3597_);
lean_dec(v___x_3596_);
v_cacheInType_3598_ = lean_ctor_get(v_canon_3597_, 1);
lean_inc_ref(v_cacheInType_3598_);
lean_dec_ref(v_canon_3597_);
v___x_3599_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cacheInType_3598_, v_e_3207_);
lean_dec_ref(v_cacheInType_3598_);
if (lean_obj_tag(v___x_3599_) == 1)
{
lean_object* v_val_3600_; lean_object* v___x_3602_; uint8_t v_isShared_3603_; uint8_t v_isSharedCheck_3607_; 
lean_dec_ref_known(v_e_3207_, 2);
v_val_3600_ = lean_ctor_get(v___x_3599_, 0);
v_isSharedCheck_3607_ = !lean_is_exclusive(v___x_3599_);
if (v_isSharedCheck_3607_ == 0)
{
v___x_3602_ = v___x_3599_;
v_isShared_3603_ = v_isSharedCheck_3607_;
goto v_resetjp_3601_;
}
else
{
lean_inc(v_val_3600_);
lean_dec(v___x_3599_);
v___x_3602_ = lean_box(0);
v_isShared_3603_ = v_isSharedCheck_3607_;
goto v_resetjp_3601_;
}
v_resetjp_3601_:
{
lean_object* v___x_3605_; 
if (v_isShared_3603_ == 0)
{
lean_ctor_set_tag(v___x_3602_, 0);
v___x_3605_ = v___x_3602_;
goto v_reusejp_3604_;
}
else
{
lean_object* v_reuseFailAlloc_3606_; 
v_reuseFailAlloc_3606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3606_, 0, v_val_3600_);
v___x_3605_ = v_reuseFailAlloc_3606_;
goto v_reusejp_3604_;
}
v_reusejp_3604_:
{
return v___x_3605_;
}
}
}
else
{
lean_object* v___x_3608_; 
lean_dec(v___x_3599_);
lean_inc_ref(v_e_3207_);
v___x_3608_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp(v_e_3207_, v_a_3208_, v_a_3209_, v_a_3210_, v_a_3211_, v_a_3212_, v_a_3213_, v_a_3214_);
if (lean_obj_tag(v___x_3608_) == 0)
{
lean_object* v_a_3609_; lean_object* v___x_3611_; uint8_t v_isShared_3612_; uint8_t v_isSharedCheck_3649_; 
v_a_3609_ = lean_ctor_get(v___x_3608_, 0);
v_isSharedCheck_3649_ = !lean_is_exclusive(v___x_3608_);
if (v_isSharedCheck_3649_ == 0)
{
v___x_3611_ = v___x_3608_;
v_isShared_3612_ = v_isSharedCheck_3649_;
goto v_resetjp_3610_;
}
else
{
lean_inc(v_a_3609_);
lean_dec(v___x_3608_);
v___x_3611_ = lean_box(0);
v_isShared_3612_ = v_isSharedCheck_3649_;
goto v_resetjp_3610_;
}
v_resetjp_3610_:
{
lean_object* v___x_3613_; lean_object* v_canon_3614_; lean_object* v_share_3615_; lean_object* v_maxFVar_3616_; lean_object* v_proofInstInfo_3617_; lean_object* v_proofInstInfoFVar_3618_; lean_object* v_letValue_3619_; lean_object* v_inferType_3620_; lean_object* v_getLevel_3621_; lean_object* v_congrInfo_3622_; lean_object* v_defEqI_3623_; lean_object* v_extensions_3624_; lean_object* v_issues_3625_; lean_object* v_instanceOverrides_3626_; uint8_t v_debug_3627_; lean_object* v___x_3629_; uint8_t v_isShared_3630_; uint8_t v_isSharedCheck_3648_; 
v___x_3613_ = lean_st_ref_take(v_a_3210_);
v_canon_3614_ = lean_ctor_get(v___x_3613_, 11);
v_share_3615_ = lean_ctor_get(v___x_3613_, 0);
v_maxFVar_3616_ = lean_ctor_get(v___x_3613_, 1);
v_proofInstInfo_3617_ = lean_ctor_get(v___x_3613_, 2);
v_proofInstInfoFVar_3618_ = lean_ctor_get(v___x_3613_, 3);
v_letValue_3619_ = lean_ctor_get(v___x_3613_, 4);
v_inferType_3620_ = lean_ctor_get(v___x_3613_, 5);
v_getLevel_3621_ = lean_ctor_get(v___x_3613_, 6);
v_congrInfo_3622_ = lean_ctor_get(v___x_3613_, 7);
v_defEqI_3623_ = lean_ctor_get(v___x_3613_, 8);
v_extensions_3624_ = lean_ctor_get(v___x_3613_, 9);
v_issues_3625_ = lean_ctor_get(v___x_3613_, 10);
v_instanceOverrides_3626_ = lean_ctor_get(v___x_3613_, 12);
v_debug_3627_ = lean_ctor_get_uint8(v___x_3613_, sizeof(void*)*13);
v_isSharedCheck_3648_ = !lean_is_exclusive(v___x_3613_);
if (v_isSharedCheck_3648_ == 0)
{
v___x_3629_ = v___x_3613_;
v_isShared_3630_ = v_isSharedCheck_3648_;
goto v_resetjp_3628_;
}
else
{
lean_inc(v_instanceOverrides_3626_);
lean_inc(v_canon_3614_);
lean_inc(v_issues_3625_);
lean_inc(v_extensions_3624_);
lean_inc(v_defEqI_3623_);
lean_inc(v_congrInfo_3622_);
lean_inc(v_getLevel_3621_);
lean_inc(v_inferType_3620_);
lean_inc(v_letValue_3619_);
lean_inc(v_proofInstInfoFVar_3618_);
lean_inc(v_proofInstInfo_3617_);
lean_inc(v_maxFVar_3616_);
lean_inc(v_share_3615_);
lean_dec(v___x_3613_);
v___x_3629_ = lean_box(0);
v_isShared_3630_ = v_isSharedCheck_3648_;
goto v_resetjp_3628_;
}
v_resetjp_3628_:
{
lean_object* v_cache_3631_; lean_object* v_cacheInType_3632_; lean_object* v___x_3634_; uint8_t v_isShared_3635_; uint8_t v_isSharedCheck_3647_; 
v_cache_3631_ = lean_ctor_get(v_canon_3614_, 0);
v_cacheInType_3632_ = lean_ctor_get(v_canon_3614_, 1);
v_isSharedCheck_3647_ = !lean_is_exclusive(v_canon_3614_);
if (v_isSharedCheck_3647_ == 0)
{
v___x_3634_ = v_canon_3614_;
v_isShared_3635_ = v_isSharedCheck_3647_;
goto v_resetjp_3633_;
}
else
{
lean_inc(v_cacheInType_3632_);
lean_inc(v_cache_3631_);
lean_dec(v_canon_3614_);
v___x_3634_ = lean_box(0);
v_isShared_3635_ = v_isSharedCheck_3647_;
goto v_resetjp_3633_;
}
v_resetjp_3633_:
{
lean_object* v___x_3636_; lean_object* v___x_3638_; 
lean_inc(v_a_3609_);
v___x_3636_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cacheInType_3632_, v_e_3207_, v_a_3609_);
if (v_isShared_3635_ == 0)
{
lean_ctor_set(v___x_3634_, 1, v___x_3636_);
v___x_3638_ = v___x_3634_;
goto v_reusejp_3637_;
}
else
{
lean_object* v_reuseFailAlloc_3646_; 
v_reuseFailAlloc_3646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3646_, 0, v_cache_3631_);
lean_ctor_set(v_reuseFailAlloc_3646_, 1, v___x_3636_);
v___x_3638_ = v_reuseFailAlloc_3646_;
goto v_reusejp_3637_;
}
v_reusejp_3637_:
{
lean_object* v___x_3640_; 
if (v_isShared_3630_ == 0)
{
lean_ctor_set(v___x_3629_, 11, v___x_3638_);
v___x_3640_ = v___x_3629_;
goto v_reusejp_3639_;
}
else
{
lean_object* v_reuseFailAlloc_3645_; 
v_reuseFailAlloc_3645_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_3645_, 0, v_share_3615_);
lean_ctor_set(v_reuseFailAlloc_3645_, 1, v_maxFVar_3616_);
lean_ctor_set(v_reuseFailAlloc_3645_, 2, v_proofInstInfo_3617_);
lean_ctor_set(v_reuseFailAlloc_3645_, 3, v_proofInstInfoFVar_3618_);
lean_ctor_set(v_reuseFailAlloc_3645_, 4, v_letValue_3619_);
lean_ctor_set(v_reuseFailAlloc_3645_, 5, v_inferType_3620_);
lean_ctor_set(v_reuseFailAlloc_3645_, 6, v_getLevel_3621_);
lean_ctor_set(v_reuseFailAlloc_3645_, 7, v_congrInfo_3622_);
lean_ctor_set(v_reuseFailAlloc_3645_, 8, v_defEqI_3623_);
lean_ctor_set(v_reuseFailAlloc_3645_, 9, v_extensions_3624_);
lean_ctor_set(v_reuseFailAlloc_3645_, 10, v_issues_3625_);
lean_ctor_set(v_reuseFailAlloc_3645_, 11, v___x_3638_);
lean_ctor_set(v_reuseFailAlloc_3645_, 12, v_instanceOverrides_3626_);
lean_ctor_set_uint8(v_reuseFailAlloc_3645_, sizeof(void*)*13, v_debug_3627_);
v___x_3640_ = v_reuseFailAlloc_3645_;
goto v_reusejp_3639_;
}
v_reusejp_3639_:
{
lean_object* v___x_3641_; lean_object* v___x_3643_; 
v___x_3641_ = lean_st_ref_put(v_a_3210_, v___x_3640_);
if (v_isShared_3612_ == 0)
{
v___x_3643_ = v___x_3611_;
goto v_reusejp_3642_;
}
else
{
lean_object* v_reuseFailAlloc_3644_; 
v_reuseFailAlloc_3644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3644_, 0, v_a_3609_);
v___x_3643_ = v_reuseFailAlloc_3644_;
goto v_reusejp_3642_;
}
v_reusejp_3642_:
{
return v___x_3643_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3207_, 2);
return v___x_3608_;
}
}
}
}
case 11:
{
if (v_a_3208_ == 0)
{
lean_object* v___x_3650_; lean_object* v_canon_3651_; lean_object* v_cache_3652_; lean_object* v___x_3653_; 
v___x_3650_ = lean_st_ref_get(v_a_3210_);
v_canon_3651_ = lean_ctor_get(v___x_3650_, 11);
lean_inc_ref(v_canon_3651_);
lean_dec(v___x_3650_);
v_cache_3652_ = lean_ctor_get(v_canon_3651_, 0);
lean_inc_ref(v_cache_3652_);
lean_dec_ref(v_canon_3651_);
v___x_3653_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cache_3652_, v_e_3207_);
lean_dec_ref(v_cache_3652_);
if (lean_obj_tag(v___x_3653_) == 1)
{
lean_object* v_val_3654_; lean_object* v___x_3656_; uint8_t v_isShared_3657_; uint8_t v_isSharedCheck_3661_; 
lean_dec_ref_known(v_e_3207_, 3);
v_val_3654_ = lean_ctor_get(v___x_3653_, 0);
v_isSharedCheck_3661_ = !lean_is_exclusive(v___x_3653_);
if (v_isSharedCheck_3661_ == 0)
{
v___x_3656_ = v___x_3653_;
v_isShared_3657_ = v_isSharedCheck_3661_;
goto v_resetjp_3655_;
}
else
{
lean_inc(v_val_3654_);
lean_dec(v___x_3653_);
v___x_3656_ = lean_box(0);
v_isShared_3657_ = v_isSharedCheck_3661_;
goto v_resetjp_3655_;
}
v_resetjp_3655_:
{
lean_object* v___x_3659_; 
if (v_isShared_3657_ == 0)
{
lean_ctor_set_tag(v___x_3656_, 0);
v___x_3659_ = v___x_3656_;
goto v_reusejp_3658_;
}
else
{
lean_object* v_reuseFailAlloc_3660_; 
v_reuseFailAlloc_3660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3660_, 0, v_val_3654_);
v___x_3659_ = v_reuseFailAlloc_3660_;
goto v_reusejp_3658_;
}
v_reusejp_3658_:
{
return v___x_3659_;
}
}
}
else
{
lean_object* v___x_3662_; 
lean_dec(v___x_3653_);
lean_inc_ref(v_e_3207_);
v___x_3662_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj(v_e_3207_, v_a_3208_, v_a_3209_, v_a_3210_, v_a_3211_, v_a_3212_, v_a_3213_, v_a_3214_);
if (lean_obj_tag(v___x_3662_) == 0)
{
lean_object* v_a_3663_; lean_object* v___x_3665_; uint8_t v_isShared_3666_; uint8_t v_isSharedCheck_3703_; 
v_a_3663_ = lean_ctor_get(v___x_3662_, 0);
v_isSharedCheck_3703_ = !lean_is_exclusive(v___x_3662_);
if (v_isSharedCheck_3703_ == 0)
{
v___x_3665_ = v___x_3662_;
v_isShared_3666_ = v_isSharedCheck_3703_;
goto v_resetjp_3664_;
}
else
{
lean_inc(v_a_3663_);
lean_dec(v___x_3662_);
v___x_3665_ = lean_box(0);
v_isShared_3666_ = v_isSharedCheck_3703_;
goto v_resetjp_3664_;
}
v_resetjp_3664_:
{
lean_object* v___x_3667_; lean_object* v_canon_3668_; lean_object* v_share_3669_; lean_object* v_maxFVar_3670_; lean_object* v_proofInstInfo_3671_; lean_object* v_proofInstInfoFVar_3672_; lean_object* v_letValue_3673_; lean_object* v_inferType_3674_; lean_object* v_getLevel_3675_; lean_object* v_congrInfo_3676_; lean_object* v_defEqI_3677_; lean_object* v_extensions_3678_; lean_object* v_issues_3679_; lean_object* v_instanceOverrides_3680_; uint8_t v_debug_3681_; lean_object* v___x_3683_; uint8_t v_isShared_3684_; uint8_t v_isSharedCheck_3702_; 
v___x_3667_ = lean_st_ref_take(v_a_3210_);
v_canon_3668_ = lean_ctor_get(v___x_3667_, 11);
v_share_3669_ = lean_ctor_get(v___x_3667_, 0);
v_maxFVar_3670_ = lean_ctor_get(v___x_3667_, 1);
v_proofInstInfo_3671_ = lean_ctor_get(v___x_3667_, 2);
v_proofInstInfoFVar_3672_ = lean_ctor_get(v___x_3667_, 3);
v_letValue_3673_ = lean_ctor_get(v___x_3667_, 4);
v_inferType_3674_ = lean_ctor_get(v___x_3667_, 5);
v_getLevel_3675_ = lean_ctor_get(v___x_3667_, 6);
v_congrInfo_3676_ = lean_ctor_get(v___x_3667_, 7);
v_defEqI_3677_ = lean_ctor_get(v___x_3667_, 8);
v_extensions_3678_ = lean_ctor_get(v___x_3667_, 9);
v_issues_3679_ = lean_ctor_get(v___x_3667_, 10);
v_instanceOverrides_3680_ = lean_ctor_get(v___x_3667_, 12);
v_debug_3681_ = lean_ctor_get_uint8(v___x_3667_, sizeof(void*)*13);
v_isSharedCheck_3702_ = !lean_is_exclusive(v___x_3667_);
if (v_isSharedCheck_3702_ == 0)
{
v___x_3683_ = v___x_3667_;
v_isShared_3684_ = v_isSharedCheck_3702_;
goto v_resetjp_3682_;
}
else
{
lean_inc(v_instanceOverrides_3680_);
lean_inc(v_canon_3668_);
lean_inc(v_issues_3679_);
lean_inc(v_extensions_3678_);
lean_inc(v_defEqI_3677_);
lean_inc(v_congrInfo_3676_);
lean_inc(v_getLevel_3675_);
lean_inc(v_inferType_3674_);
lean_inc(v_letValue_3673_);
lean_inc(v_proofInstInfoFVar_3672_);
lean_inc(v_proofInstInfo_3671_);
lean_inc(v_maxFVar_3670_);
lean_inc(v_share_3669_);
lean_dec(v___x_3667_);
v___x_3683_ = lean_box(0);
v_isShared_3684_ = v_isSharedCheck_3702_;
goto v_resetjp_3682_;
}
v_resetjp_3682_:
{
lean_object* v_cache_3685_; lean_object* v_cacheInType_3686_; lean_object* v___x_3688_; uint8_t v_isShared_3689_; uint8_t v_isSharedCheck_3701_; 
v_cache_3685_ = lean_ctor_get(v_canon_3668_, 0);
v_cacheInType_3686_ = lean_ctor_get(v_canon_3668_, 1);
v_isSharedCheck_3701_ = !lean_is_exclusive(v_canon_3668_);
if (v_isSharedCheck_3701_ == 0)
{
v___x_3688_ = v_canon_3668_;
v_isShared_3689_ = v_isSharedCheck_3701_;
goto v_resetjp_3687_;
}
else
{
lean_inc(v_cacheInType_3686_);
lean_inc(v_cache_3685_);
lean_dec(v_canon_3668_);
v___x_3688_ = lean_box(0);
v_isShared_3689_ = v_isSharedCheck_3701_;
goto v_resetjp_3687_;
}
v_resetjp_3687_:
{
lean_object* v___x_3690_; lean_object* v___x_3692_; 
lean_inc(v_a_3663_);
v___x_3690_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cache_3685_, v_e_3207_, v_a_3663_);
if (v_isShared_3689_ == 0)
{
lean_ctor_set(v___x_3688_, 0, v___x_3690_);
v___x_3692_ = v___x_3688_;
goto v_reusejp_3691_;
}
else
{
lean_object* v_reuseFailAlloc_3700_; 
v_reuseFailAlloc_3700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3700_, 0, v___x_3690_);
lean_ctor_set(v_reuseFailAlloc_3700_, 1, v_cacheInType_3686_);
v___x_3692_ = v_reuseFailAlloc_3700_;
goto v_reusejp_3691_;
}
v_reusejp_3691_:
{
lean_object* v___x_3694_; 
if (v_isShared_3684_ == 0)
{
lean_ctor_set(v___x_3683_, 11, v___x_3692_);
v___x_3694_ = v___x_3683_;
goto v_reusejp_3693_;
}
else
{
lean_object* v_reuseFailAlloc_3699_; 
v_reuseFailAlloc_3699_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_3699_, 0, v_share_3669_);
lean_ctor_set(v_reuseFailAlloc_3699_, 1, v_maxFVar_3670_);
lean_ctor_set(v_reuseFailAlloc_3699_, 2, v_proofInstInfo_3671_);
lean_ctor_set(v_reuseFailAlloc_3699_, 3, v_proofInstInfoFVar_3672_);
lean_ctor_set(v_reuseFailAlloc_3699_, 4, v_letValue_3673_);
lean_ctor_set(v_reuseFailAlloc_3699_, 5, v_inferType_3674_);
lean_ctor_set(v_reuseFailAlloc_3699_, 6, v_getLevel_3675_);
lean_ctor_set(v_reuseFailAlloc_3699_, 7, v_congrInfo_3676_);
lean_ctor_set(v_reuseFailAlloc_3699_, 8, v_defEqI_3677_);
lean_ctor_set(v_reuseFailAlloc_3699_, 9, v_extensions_3678_);
lean_ctor_set(v_reuseFailAlloc_3699_, 10, v_issues_3679_);
lean_ctor_set(v_reuseFailAlloc_3699_, 11, v___x_3692_);
lean_ctor_set(v_reuseFailAlloc_3699_, 12, v_instanceOverrides_3680_);
lean_ctor_set_uint8(v_reuseFailAlloc_3699_, sizeof(void*)*13, v_debug_3681_);
v___x_3694_ = v_reuseFailAlloc_3699_;
goto v_reusejp_3693_;
}
v_reusejp_3693_:
{
lean_object* v___x_3695_; lean_object* v___x_3697_; 
v___x_3695_ = lean_st_ref_put(v_a_3210_, v___x_3694_);
if (v_isShared_3666_ == 0)
{
v___x_3697_ = v___x_3665_;
goto v_reusejp_3696_;
}
else
{
lean_object* v_reuseFailAlloc_3698_; 
v_reuseFailAlloc_3698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3698_, 0, v_a_3663_);
v___x_3697_ = v_reuseFailAlloc_3698_;
goto v_reusejp_3696_;
}
v_reusejp_3696_:
{
return v___x_3697_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3207_, 3);
return v___x_3662_;
}
}
}
else
{
lean_object* v___x_3704_; lean_object* v_canon_3705_; lean_object* v_cacheInType_3706_; lean_object* v___x_3707_; 
v___x_3704_ = lean_st_ref_get(v_a_3210_);
v_canon_3705_ = lean_ctor_get(v___x_3704_, 11);
lean_inc_ref(v_canon_3705_);
lean_dec(v___x_3704_);
v_cacheInType_3706_ = lean_ctor_get(v_canon_3705_, 1);
lean_inc_ref(v_cacheInType_3706_);
lean_dec_ref(v_canon_3705_);
v___x_3707_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_cacheInType_3706_, v_e_3207_);
lean_dec_ref(v_cacheInType_3706_);
if (lean_obj_tag(v___x_3707_) == 1)
{
lean_object* v_val_3708_; lean_object* v___x_3710_; uint8_t v_isShared_3711_; uint8_t v_isSharedCheck_3715_; 
lean_dec_ref_known(v_e_3207_, 3);
v_val_3708_ = lean_ctor_get(v___x_3707_, 0);
v_isSharedCheck_3715_ = !lean_is_exclusive(v___x_3707_);
if (v_isSharedCheck_3715_ == 0)
{
v___x_3710_ = v___x_3707_;
v_isShared_3711_ = v_isSharedCheck_3715_;
goto v_resetjp_3709_;
}
else
{
lean_inc(v_val_3708_);
lean_dec(v___x_3707_);
v___x_3710_ = lean_box(0);
v_isShared_3711_ = v_isSharedCheck_3715_;
goto v_resetjp_3709_;
}
v_resetjp_3709_:
{
lean_object* v___x_3713_; 
if (v_isShared_3711_ == 0)
{
lean_ctor_set_tag(v___x_3710_, 0);
v___x_3713_ = v___x_3710_;
goto v_reusejp_3712_;
}
else
{
lean_object* v_reuseFailAlloc_3714_; 
v_reuseFailAlloc_3714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3714_, 0, v_val_3708_);
v___x_3713_ = v_reuseFailAlloc_3714_;
goto v_reusejp_3712_;
}
v_reusejp_3712_:
{
return v___x_3713_;
}
}
}
else
{
lean_object* v___x_3716_; 
lean_dec(v___x_3707_);
lean_inc_ref(v_e_3207_);
v___x_3716_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj(v_e_3207_, v_a_3208_, v_a_3209_, v_a_3210_, v_a_3211_, v_a_3212_, v_a_3213_, v_a_3214_);
if (lean_obj_tag(v___x_3716_) == 0)
{
lean_object* v_a_3717_; lean_object* v___x_3719_; uint8_t v_isShared_3720_; uint8_t v_isSharedCheck_3757_; 
v_a_3717_ = lean_ctor_get(v___x_3716_, 0);
v_isSharedCheck_3757_ = !lean_is_exclusive(v___x_3716_);
if (v_isSharedCheck_3757_ == 0)
{
v___x_3719_ = v___x_3716_;
v_isShared_3720_ = v_isSharedCheck_3757_;
goto v_resetjp_3718_;
}
else
{
lean_inc(v_a_3717_);
lean_dec(v___x_3716_);
v___x_3719_ = lean_box(0);
v_isShared_3720_ = v_isSharedCheck_3757_;
goto v_resetjp_3718_;
}
v_resetjp_3718_:
{
lean_object* v___x_3721_; lean_object* v_canon_3722_; lean_object* v_share_3723_; lean_object* v_maxFVar_3724_; lean_object* v_proofInstInfo_3725_; lean_object* v_proofInstInfoFVar_3726_; lean_object* v_letValue_3727_; lean_object* v_inferType_3728_; lean_object* v_getLevel_3729_; lean_object* v_congrInfo_3730_; lean_object* v_defEqI_3731_; lean_object* v_extensions_3732_; lean_object* v_issues_3733_; lean_object* v_instanceOverrides_3734_; uint8_t v_debug_3735_; lean_object* v___x_3737_; uint8_t v_isShared_3738_; uint8_t v_isSharedCheck_3756_; 
v___x_3721_ = lean_st_ref_take(v_a_3210_);
v_canon_3722_ = lean_ctor_get(v___x_3721_, 11);
v_share_3723_ = lean_ctor_get(v___x_3721_, 0);
v_maxFVar_3724_ = lean_ctor_get(v___x_3721_, 1);
v_proofInstInfo_3725_ = lean_ctor_get(v___x_3721_, 2);
v_proofInstInfoFVar_3726_ = lean_ctor_get(v___x_3721_, 3);
v_letValue_3727_ = lean_ctor_get(v___x_3721_, 4);
v_inferType_3728_ = lean_ctor_get(v___x_3721_, 5);
v_getLevel_3729_ = lean_ctor_get(v___x_3721_, 6);
v_congrInfo_3730_ = lean_ctor_get(v___x_3721_, 7);
v_defEqI_3731_ = lean_ctor_get(v___x_3721_, 8);
v_extensions_3732_ = lean_ctor_get(v___x_3721_, 9);
v_issues_3733_ = lean_ctor_get(v___x_3721_, 10);
v_instanceOverrides_3734_ = lean_ctor_get(v___x_3721_, 12);
v_debug_3735_ = lean_ctor_get_uint8(v___x_3721_, sizeof(void*)*13);
v_isSharedCheck_3756_ = !lean_is_exclusive(v___x_3721_);
if (v_isSharedCheck_3756_ == 0)
{
v___x_3737_ = v___x_3721_;
v_isShared_3738_ = v_isSharedCheck_3756_;
goto v_resetjp_3736_;
}
else
{
lean_inc(v_instanceOverrides_3734_);
lean_inc(v_canon_3722_);
lean_inc(v_issues_3733_);
lean_inc(v_extensions_3732_);
lean_inc(v_defEqI_3731_);
lean_inc(v_congrInfo_3730_);
lean_inc(v_getLevel_3729_);
lean_inc(v_inferType_3728_);
lean_inc(v_letValue_3727_);
lean_inc(v_proofInstInfoFVar_3726_);
lean_inc(v_proofInstInfo_3725_);
lean_inc(v_maxFVar_3724_);
lean_inc(v_share_3723_);
lean_dec(v___x_3721_);
v___x_3737_ = lean_box(0);
v_isShared_3738_ = v_isSharedCheck_3756_;
goto v_resetjp_3736_;
}
v_resetjp_3736_:
{
lean_object* v_cache_3739_; lean_object* v_cacheInType_3740_; lean_object* v___x_3742_; uint8_t v_isShared_3743_; uint8_t v_isSharedCheck_3755_; 
v_cache_3739_ = lean_ctor_get(v_canon_3722_, 0);
v_cacheInType_3740_ = lean_ctor_get(v_canon_3722_, 1);
v_isSharedCheck_3755_ = !lean_is_exclusive(v_canon_3722_);
if (v_isSharedCheck_3755_ == 0)
{
v___x_3742_ = v_canon_3722_;
v_isShared_3743_ = v_isSharedCheck_3755_;
goto v_resetjp_3741_;
}
else
{
lean_inc(v_cacheInType_3740_);
lean_inc(v_cache_3739_);
lean_dec(v_canon_3722_);
v___x_3742_ = lean_box(0);
v_isShared_3743_ = v_isSharedCheck_3755_;
goto v_resetjp_3741_;
}
v_resetjp_3741_:
{
lean_object* v___x_3744_; lean_object* v___x_3746_; 
lean_inc(v_a_3717_);
v___x_3744_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_cacheInType_3740_, v_e_3207_, v_a_3717_);
if (v_isShared_3743_ == 0)
{
lean_ctor_set(v___x_3742_, 1, v___x_3744_);
v___x_3746_ = v___x_3742_;
goto v_reusejp_3745_;
}
else
{
lean_object* v_reuseFailAlloc_3754_; 
v_reuseFailAlloc_3754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3754_, 0, v_cache_3739_);
lean_ctor_set(v_reuseFailAlloc_3754_, 1, v___x_3744_);
v___x_3746_ = v_reuseFailAlloc_3754_;
goto v_reusejp_3745_;
}
v_reusejp_3745_:
{
lean_object* v___x_3748_; 
if (v_isShared_3738_ == 0)
{
lean_ctor_set(v___x_3737_, 11, v___x_3746_);
v___x_3748_ = v___x_3737_;
goto v_reusejp_3747_;
}
else
{
lean_object* v_reuseFailAlloc_3753_; 
v_reuseFailAlloc_3753_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_3753_, 0, v_share_3723_);
lean_ctor_set(v_reuseFailAlloc_3753_, 1, v_maxFVar_3724_);
lean_ctor_set(v_reuseFailAlloc_3753_, 2, v_proofInstInfo_3725_);
lean_ctor_set(v_reuseFailAlloc_3753_, 3, v_proofInstInfoFVar_3726_);
lean_ctor_set(v_reuseFailAlloc_3753_, 4, v_letValue_3727_);
lean_ctor_set(v_reuseFailAlloc_3753_, 5, v_inferType_3728_);
lean_ctor_set(v_reuseFailAlloc_3753_, 6, v_getLevel_3729_);
lean_ctor_set(v_reuseFailAlloc_3753_, 7, v_congrInfo_3730_);
lean_ctor_set(v_reuseFailAlloc_3753_, 8, v_defEqI_3731_);
lean_ctor_set(v_reuseFailAlloc_3753_, 9, v_extensions_3732_);
lean_ctor_set(v_reuseFailAlloc_3753_, 10, v_issues_3733_);
lean_ctor_set(v_reuseFailAlloc_3753_, 11, v___x_3746_);
lean_ctor_set(v_reuseFailAlloc_3753_, 12, v_instanceOverrides_3734_);
lean_ctor_set_uint8(v_reuseFailAlloc_3753_, sizeof(void*)*13, v_debug_3735_);
v___x_3748_ = v_reuseFailAlloc_3753_;
goto v_reusejp_3747_;
}
v_reusejp_3747_:
{
lean_object* v___x_3749_; lean_object* v___x_3751_; 
v___x_3749_ = lean_st_ref_put(v_a_3210_, v___x_3748_);
if (v_isShared_3720_ == 0)
{
v___x_3751_ = v___x_3719_;
goto v_reusejp_3750_;
}
else
{
lean_object* v_reuseFailAlloc_3752_; 
v_reuseFailAlloc_3752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3752_, 0, v_a_3717_);
v___x_3751_ = v_reuseFailAlloc_3752_;
goto v_reusejp_3750_;
}
v_reusejp_3750_:
{
return v___x_3751_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3207_, 3);
return v___x_3716_;
}
}
}
}
case 10:
{
lean_object* v_data_3758_; lean_object* v_expr_3759_; lean_object* v___x_3760_; 
v_data_3758_ = lean_ctor_get(v_e_3207_, 0);
v_expr_3759_ = lean_ctor_get(v_e_3207_, 1);
lean_inc_ref(v_expr_3759_);
v___x_3760_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_expr_3759_, v_a_3208_, v_a_3209_, v_a_3210_, v_a_3211_, v_a_3212_, v_a_3213_, v_a_3214_);
if (lean_obj_tag(v___x_3760_) == 0)
{
lean_object* v_a_3761_; lean_object* v___x_3763_; uint8_t v_isShared_3764_; uint8_t v_isSharedCheck_3775_; 
v_a_3761_ = lean_ctor_get(v___x_3760_, 0);
v_isSharedCheck_3775_ = !lean_is_exclusive(v___x_3760_);
if (v_isSharedCheck_3775_ == 0)
{
v___x_3763_ = v___x_3760_;
v_isShared_3764_ = v_isSharedCheck_3775_;
goto v_resetjp_3762_;
}
else
{
lean_inc(v_a_3761_);
lean_dec(v___x_3760_);
v___x_3763_ = lean_box(0);
v_isShared_3764_ = v_isSharedCheck_3775_;
goto v_resetjp_3762_;
}
v_resetjp_3762_:
{
size_t v___x_3765_; size_t v___x_3766_; uint8_t v___x_3767_; 
v___x_3765_ = lean_ptr_addr(v_expr_3759_);
v___x_3766_ = lean_ptr_addr(v_a_3761_);
v___x_3767_ = lean_usize_dec_eq(v___x_3765_, v___x_3766_);
if (v___x_3767_ == 0)
{
lean_object* v___x_3768_; lean_object* v___x_3770_; 
lean_inc(v_data_3758_);
lean_dec_ref_known(v_e_3207_, 2);
v___x_3768_ = l_Lean_Expr_mdata___override(v_data_3758_, v_a_3761_);
if (v_isShared_3764_ == 0)
{
lean_ctor_set(v___x_3763_, 0, v___x_3768_);
v___x_3770_ = v___x_3763_;
goto v_reusejp_3769_;
}
else
{
lean_object* v_reuseFailAlloc_3771_; 
v_reuseFailAlloc_3771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3771_, 0, v___x_3768_);
v___x_3770_ = v_reuseFailAlloc_3771_;
goto v_reusejp_3769_;
}
v_reusejp_3769_:
{
return v___x_3770_;
}
}
else
{
lean_object* v___x_3773_; 
lean_dec(v_a_3761_);
if (v_isShared_3764_ == 0)
{
lean_ctor_set(v___x_3763_, 0, v_e_3207_);
v___x_3773_ = v___x_3763_;
goto v_reusejp_3772_;
}
else
{
lean_object* v_reuseFailAlloc_3774_; 
v_reuseFailAlloc_3774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3774_, 0, v_e_3207_);
v___x_3773_ = v_reuseFailAlloc_3774_;
goto v_reusejp_3772_;
}
v_reusejp_3772_:
{
return v___x_3773_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3207_, 2);
return v___x_3760_;
}
}
default: 
{
lean_object* v___x_3776_; 
v___x_3776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3776_, 0, v_e_3207_);
return v___x_3776_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType(lean_object* v_e_3777_, uint8_t v_a_3778_, lean_object* v_a_3779_, lean_object* v_a_3780_, lean_object* v_a_3781_, lean_object* v_a_3782_, lean_object* v_a_3783_, lean_object* v_a_3784_){
_start:
{
if (v_a_3778_ == 0)
{
lean_object* v___x_3786_; 
lean_inc_ref(v_e_3777_);
v___x_3786_ = l_Lean_Meta_isProp(v_e_3777_, v_a_3781_, v_a_3782_, v_a_3783_, v_a_3784_);
if (lean_obj_tag(v___x_3786_) == 0)
{
lean_object* v_a_3787_; uint8_t v___x_3788_; 
v_a_3787_ = lean_ctor_get(v___x_3786_, 0);
lean_inc(v_a_3787_);
lean_dec_ref_known(v___x_3786_, 1);
v___x_3788_ = lean_unbox(v_a_3787_);
lean_dec(v_a_3787_);
if (v___x_3788_ == 0)
{
uint8_t v___x_3789_; lean_object* v___x_3790_; 
v___x_3789_ = 1;
v___x_3790_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_e_3777_, v___x_3789_, v_a_3779_, v_a_3780_, v_a_3781_, v_a_3782_, v_a_3783_, v_a_3784_);
return v___x_3790_;
}
else
{
lean_object* v___x_3791_; 
v___x_3791_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_e_3777_, v_a_3778_, v_a_3779_, v_a_3780_, v_a_3781_, v_a_3782_, v_a_3783_, v_a_3784_);
return v___x_3791_;
}
}
else
{
lean_object* v_a_3792_; lean_object* v___x_3794_; uint8_t v_isShared_3795_; uint8_t v_isSharedCheck_3799_; 
lean_dec_ref(v_e_3777_);
v_a_3792_ = lean_ctor_get(v___x_3786_, 0);
v_isSharedCheck_3799_ = !lean_is_exclusive(v___x_3786_);
if (v_isSharedCheck_3799_ == 0)
{
v___x_3794_ = v___x_3786_;
v_isShared_3795_ = v_isSharedCheck_3799_;
goto v_resetjp_3793_;
}
else
{
lean_inc(v_a_3792_);
lean_dec(v___x_3786_);
v___x_3794_ = lean_box(0);
v_isShared_3795_ = v_isSharedCheck_3799_;
goto v_resetjp_3793_;
}
v_resetjp_3793_:
{
lean_object* v___x_3797_; 
if (v_isShared_3795_ == 0)
{
v___x_3797_ = v___x_3794_;
goto v_reusejp_3796_;
}
else
{
lean_object* v_reuseFailAlloc_3798_; 
v_reuseFailAlloc_3798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3798_, 0, v_a_3792_);
v___x_3797_ = v_reuseFailAlloc_3798_;
goto v_reusejp_3796_;
}
v_reusejp_3796_:
{
return v___x_3797_;
}
}
}
}
else
{
lean_object* v___x_3800_; 
v___x_3800_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_e_3777_, v_a_3778_, v_a_3779_, v_a_3780_, v_a_3781_, v_a_3782_, v_a_3783_, v_a_3784_);
return v___x_3800_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall(lean_object* v_fvars_3801_, lean_object* v_e_3802_, uint8_t v_a_3803_, lean_object* v_a_3804_, lean_object* v_a_3805_, lean_object* v_a_3806_, lean_object* v_a_3807_, lean_object* v_a_3808_, lean_object* v_a_3809_){
_start:
{
if (lean_obj_tag(v_e_3802_) == 7)
{
lean_object* v_binderName_3811_; lean_object* v_binderType_3812_; lean_object* v_body_3813_; uint8_t v_binderInfo_3814_; lean_object* v___f_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; 
v_binderName_3811_ = lean_ctor_get(v_e_3802_, 0);
lean_inc(v_binderName_3811_);
v_binderType_3812_ = lean_ctor_get(v_e_3802_, 1);
lean_inc_ref(v_binderType_3812_);
v_body_3813_ = lean_ctor_get(v_e_3802_, 2);
lean_inc_ref(v_body_3813_);
v_binderInfo_3814_ = lean_ctor_get_uint8(v_e_3802_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_3802_, 3);
lean_inc_ref(v_fvars_3801_);
v___f_3815_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall___lam__0___boxed), 11, 2);
lean_closure_set(v___f_3815_, 0, v_fvars_3801_);
lean_closure_set(v___f_3815_, 1, v_body_3813_);
v___x_3816_ = lean_expr_instantiate_rev(v_binderType_3812_, v_fvars_3801_);
lean_dec_ref(v_fvars_3801_);
lean_dec_ref(v_binderType_3812_);
v___x_3817_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType(v___x_3816_, v_a_3803_, v_a_3804_, v_a_3805_, v_a_3806_, v_a_3807_, v_a_3808_, v_a_3809_);
if (lean_obj_tag(v___x_3817_) == 0)
{
lean_object* v_a_3818_; uint8_t v___x_3819_; lean_object* v___x_3820_; 
v_a_3818_ = lean_ctor_get(v___x_3817_, 0);
lean_inc(v_a_3818_);
lean_dec_ref_known(v___x_3817_, 1);
v___x_3819_ = 0;
v___x_3820_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__30___redArg(v_binderName_3811_, v_binderInfo_3814_, v_a_3818_, v___f_3815_, v___x_3819_, v_a_3803_, v_a_3804_, v_a_3805_, v_a_3806_, v_a_3807_, v_a_3808_, v_a_3809_);
return v___x_3820_;
}
else
{
lean_dec_ref(v___f_3815_);
lean_dec(v_binderName_3811_);
return v___x_3817_;
}
}
else
{
lean_object* v___x_3821_; lean_object* v___x_3822_; 
v___x_3821_ = lean_expr_instantiate_rev(v_e_3802_, v_fvars_3801_);
lean_dec_ref(v_e_3802_);
v___x_3822_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType(v___x_3821_, v_a_3803_, v_a_3804_, v_a_3805_, v_a_3806_, v_a_3807_, v_a_3808_, v_a_3809_);
if (lean_obj_tag(v___x_3822_) == 0)
{
lean_object* v_a_3823_; uint8_t v___x_3824_; uint8_t v___x_3825_; uint8_t v___x_3826_; lean_object* v___x_3827_; 
v_a_3823_ = lean_ctor_get(v___x_3822_, 0);
lean_inc(v_a_3823_);
lean_dec_ref_known(v___x_3822_, 1);
v___x_3824_ = 0;
v___x_3825_ = 1;
v___x_3826_ = 1;
v___x_3827_ = l_Lean_Meta_mkForallFVars(v_fvars_3801_, v_a_3823_, v___x_3824_, v___x_3825_, v___x_3825_, v___x_3826_, v_a_3806_, v_a_3807_, v_a_3808_, v_a_3809_);
lean_dec_ref(v_fvars_3801_);
return v___x_3827_;
}
else
{
lean_dec_ref(v_fvars_3801_);
return v___x_3822_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall___lam__0(lean_object* v_fvars_3828_, lean_object* v_body_3829_, lean_object* v_x_3830_, uint8_t v___y_3831_, lean_object* v___y_3832_, lean_object* v___y_3833_, lean_object* v___y_3834_, lean_object* v___y_3835_, lean_object* v___y_3836_, lean_object* v___y_3837_){
_start:
{
lean_object* v___x_3839_; lean_object* v___x_3840_; 
v___x_3839_ = lean_array_push(v_fvars_3828_, v_x_3830_);
v___x_3840_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall(v___x_3839_, v_body_3829_, v___y_3831_, v___y_3832_, v___y_3833_, v___y_3834_, v___y_3835_, v___y_3836_, v___y_3837_);
return v___x_3840_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppAndPost___boxed(lean_object* v_e_3841_, lean_object* v_a_3842_, lean_object* v_a_3843_, lean_object* v_a_3844_, lean_object* v_a_3845_, lean_object* v_a_3846_, lean_object* v_a_3847_, lean_object* v_a_3848_, lean_object* v_a_3849_){
_start:
{
uint8_t v_a_boxed_3850_; lean_object* v_res_3851_; 
v_a_boxed_3850_ = lean_unbox(v_a_3842_);
v_res_3851_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppAndPost(v_e_3841_, v_a_boxed_3850_, v_a_3843_, v_a_3844_, v_a_3845_, v_a_3846_, v_a_3847_, v_a_3848_);
lean_dec(v_a_3848_);
lean_dec_ref(v_a_3847_);
lean_dec(v_a_3846_);
lean_dec_ref(v_a_3845_);
lean_dec(v_a_3844_);
lean_dec_ref(v_a_3843_);
return v_res_3851_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType_x27___boxed(lean_object* v_e_3852_, lean_object* v_a_3853_, lean_object* v_a_3854_, lean_object* v_a_3855_, lean_object* v_a_3856_, lean_object* v_a_3857_, lean_object* v_a_3858_, lean_object* v_a_3859_, lean_object* v_a_3860_){
_start:
{
uint8_t v_a_boxed_3861_; lean_object* v_res_3862_; 
v_a_boxed_3861_ = lean_unbox(v_a_3853_);
v_res_3862_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType_x27(v_e_3852_, v_a_boxed_3861_, v_a_3854_, v_a_3855_, v_a_3856_, v_a_3857_, v_a_3858_, v_a_3859_);
lean_dec(v_a_3859_);
lean_dec_ref(v_a_3858_);
lean_dec(v_a_3857_);
lean_dec_ref(v_a_3856_);
lean_dec(v_a_3855_);
lean_dec_ref(v_a_3854_);
return v_res_3862_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault___boxed(lean_object* v_e_3863_, lean_object* v_a_3864_, lean_object* v_a_3865_, lean_object* v_a_3866_, lean_object* v_a_3867_, lean_object* v_a_3868_, lean_object* v_a_3869_, lean_object* v_a_3870_, lean_object* v_a_3871_){
_start:
{
uint8_t v_a_boxed_3872_; lean_object* v_res_3873_; 
v_a_boxed_3872_ = lean_unbox(v_a_3864_);
v_res_3873_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault(v_e_3863_, v_a_boxed_3872_, v_a_3865_, v_a_3866_, v_a_3867_, v_a_3868_, v_a_3869_, v_a_3870_);
lean_dec(v_a_3870_);
lean_dec_ref(v_a_3869_);
lean_dec(v_a_3868_);
lean_dec_ref(v_a_3867_);
lean_dec(v_a_3866_);
lean_dec_ref(v_a_3865_);
return v_res_3873_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonOfNatInst___boxed(lean_object* v_ofNat_3874_, lean_object* v_00_u03b1_3875_, lean_object* v_n_3876_, lean_object* v_inst_3877_, lean_object* v_a_3878_, lean_object* v_a_3879_, lean_object* v_a_3880_, lean_object* v_a_3881_, lean_object* v_a_3882_, lean_object* v_a_3883_, lean_object* v_a_3884_, lean_object* v_a_3885_){
_start:
{
uint8_t v_a_boxed_3886_; lean_object* v_res_3887_; 
v_a_boxed_3886_ = lean_unbox(v_a_3878_);
v_res_3887_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonOfNatInst(v_ofNat_3874_, v_00_u03b1_3875_, v_n_3876_, v_inst_3877_, v_a_boxed_3886_, v_a_3879_, v_a_3880_, v_a_3881_, v_a_3882_, v_a_3883_, v_a_3884_);
lean_dec(v_a_3884_);
lean_dec_ref(v_a_3883_);
lean_dec(v_a_3882_);
lean_dec_ref(v_a_3881_);
lean_dec(v_a_3880_);
lean_dec_ref(v_a_3879_);
lean_dec_ref(v_ofNat_3874_);
return v_res_3887_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda___boxed(lean_object* v_e_3888_, lean_object* v_a_3889_, lean_object* v_a_3890_, lean_object* v_a_3891_, lean_object* v_a_3892_, lean_object* v_a_3893_, lean_object* v_a_3894_, lean_object* v_a_3895_, lean_object* v_a_3896_){
_start:
{
uint8_t v_a_boxed_3897_; lean_object* v_res_3898_; 
v_a_boxed_3897_ = lean_unbox(v_a_3889_);
v_res_3898_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambda(v_e_3888_, v_a_boxed_3897_, v_a_3890_, v_a_3891_, v_a_3892_, v_a_3893_, v_a_3894_, v_a_3895_);
lean_dec(v_a_3895_);
lean_dec_ref(v_a_3894_);
lean_dec(v_a_3893_);
lean_dec_ref(v_a_3892_);
lean_dec(v_a_3891_);
lean_dec_ref(v_a_3890_);
return v_res_3898_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType___boxed(lean_object* v_e_3899_, lean_object* v_a_3900_, lean_object* v_a_3901_, lean_object* v_a_3902_, lean_object* v_a_3903_, lean_object* v_a_3904_, lean_object* v_a_3905_, lean_object* v_a_3906_, lean_object* v_a_3907_){
_start:
{
uint8_t v_a_boxed_3908_; lean_object* v_res_3909_; 
v_a_boxed_3908_ = lean_unbox(v_a_3900_);
v_res_3909_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInsideType(v_e_3899_, v_a_boxed_3908_, v_a_3901_, v_a_3902_, v_a_3903_, v_a_3904_, v_a_3905_, v_a_3906_);
lean_dec(v_a_3906_);
lean_dec_ref(v_a_3905_);
lean_dec(v_a_3904_);
lean_dec_ref(v_a_3903_);
lean_dec(v_a_3902_);
lean_dec_ref(v_a_3901_);
return v_res_3909_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall___boxed(lean_object* v_fvars_3910_, lean_object* v_e_3911_, lean_object* v_a_3912_, lean_object* v_a_3913_, lean_object* v_a_3914_, lean_object* v_a_3915_, lean_object* v_a_3916_, lean_object* v_a_3917_, lean_object* v_a_3918_, lean_object* v_a_3919_){
_start:
{
uint8_t v_a_boxed_3920_; lean_object* v_res_3921_; 
v_a_boxed_3920_ = lean_unbox(v_a_3912_);
v_res_3921_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonForall(v_fvars_3910_, v_e_3911_, v_a_boxed_3920_, v_a_3913_, v_a_3914_, v_a_3915_, v_a_3916_, v_a_3917_, v_a_3918_);
lean_dec(v_a_3918_);
lean_dec_ref(v_a_3917_);
lean_dec(v_a_3916_);
lean_dec_ref(v_a_3915_);
lean_dec(v_a_3914_);
lean_dec_ref(v_a_3913_);
return v_res_3921_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop___boxed(lean_object* v_fvars_3922_, lean_object* v_e_3923_, lean_object* v_a_3924_, lean_object* v_a_3925_, lean_object* v_a_3926_, lean_object* v_a_3927_, lean_object* v_a_3928_, lean_object* v_a_3929_, lean_object* v_a_3930_, lean_object* v_a_3931_){
_start:
{
uint8_t v_a_boxed_3932_; lean_object* v_res_3933_; 
v_a_boxed_3932_ = lean_unbox(v_a_3924_);
v_res_3933_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop(v_fvars_3922_, v_e_3923_, v_a_boxed_3932_, v_a_3925_, v_a_3926_, v_a_3927_, v_a_3928_, v_a_3929_, v_a_3930_);
lean_dec(v_a_3930_);
lean_dec_ref(v_a_3929_);
lean_dec(v_a_3928_);
lean_dec_ref(v_a_3927_);
lean_dec(v_a_3926_);
lean_dec_ref(v_a_3925_);
return v_res_3933_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst_x27___boxed(lean_object* v_e_3934_, lean_object* v_report_3935_, lean_object* v_a_3936_, lean_object* v_a_3937_, lean_object* v_a_3938_, lean_object* v_a_3939_, lean_object* v_a_3940_, lean_object* v_a_3941_, lean_object* v_a_3942_, lean_object* v_a_3943_){
_start:
{
uint8_t v_report_boxed_3944_; uint8_t v_a_boxed_3945_; lean_object* v_res_3946_; 
v_report_boxed_3944_ = lean_unbox(v_report_3935_);
v_a_boxed_3945_ = lean_unbox(v_a_3936_);
v_res_3946_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst_x27(v_e_3934_, v_report_boxed_3944_, v_a_boxed_3945_, v_a_3937_, v_a_3938_, v_a_3939_, v_a_3940_, v_a_3941_, v_a_3942_);
lean_dec(v_a_3942_);
lean_dec_ref(v_a_3941_);
lean_dec(v_a_3940_);
lean_dec_ref(v_a_3939_);
lean_dec(v_a_3938_);
lean_dec_ref(v_a_3937_);
return v_res_3946_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonMatch___boxed(lean_object* v_e_3947_, lean_object* v_a_3948_, lean_object* v_a_3949_, lean_object* v_a_3950_, lean_object* v_a_3951_, lean_object* v_a_3952_, lean_object* v_a_3953_, lean_object* v_a_3954_, lean_object* v_a_3955_){
_start:
{
uint8_t v_a_boxed_3956_; lean_object* v_res_3957_; 
v_a_boxed_3956_ = lean_unbox(v_a_3948_);
v_res_3957_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonMatch(v_e_3947_, v_a_boxed_3956_, v_a_3949_, v_a_3950_, v_a_3951_, v_a_3952_, v_a_3953_, v_a_3954_);
lean_dec(v_a_3954_);
lean_dec_ref(v_a_3953_);
lean_dec(v_a_3952_);
lean_dec_ref(v_a_3951_);
lean_dec(v_a_3950_);
lean_dec_ref(v_a_3949_);
return v_res_3957_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet___boxed(lean_object* v_fvars_3958_, lean_object* v_e_3959_, lean_object* v_a_3960_, lean_object* v_a_3961_, lean_object* v_a_3962_, lean_object* v_a_3963_, lean_object* v_a_3964_, lean_object* v_a_3965_, lean_object* v_a_3966_, lean_object* v_a_3967_){
_start:
{
uint8_t v_a_boxed_3968_; lean_object* v_res_3969_; 
v_a_boxed_3968_ = lean_unbox(v_a_3960_);
v_res_3969_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet(v_fvars_3958_, v_e_3959_, v_a_boxed_3968_, v_a_3961_, v_a_3962_, v_a_3963_, v_a_3964_, v_a_3965_, v_a_3966_);
lean_dec(v_a_3966_);
lean_dec_ref(v_a_3965_);
lean_dec(v_a_3964_);
lean_dec_ref(v_a_3963_);
lean_dec(v_a_3962_);
lean_dec_ref(v_a_3961_);
return v_res_3969_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonCond___boxed(lean_object* v_f_3970_, lean_object* v_00_u03b1_3971_, lean_object* v_c_3972_, lean_object* v_a_3973_, lean_object* v_b_3974_, lean_object* v_a_3975_, lean_object* v_a_3976_, lean_object* v_a_3977_, lean_object* v_a_3978_, lean_object* v_a_3979_, lean_object* v_a_3980_, lean_object* v_a_3981_, lean_object* v_a_3982_){
_start:
{
uint8_t v_a_boxed_3983_; lean_object* v_res_3984_; 
v_a_boxed_3983_ = lean_unbox(v_a_3975_);
v_res_3984_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonCond(v_f_3970_, v_00_u03b1_3971_, v_c_3972_, v_a_3973_, v_b_3974_, v_a_boxed_3983_, v_a_3976_, v_a_3977_, v_a_3978_, v_a_3979_, v_a_3980_, v_a_3981_);
lean_dec(v_a_3981_);
lean_dec_ref(v_a_3980_);
lean_dec(v_a_3979_);
lean_dec_ref(v_a_3978_);
lean_dec(v_a_3977_);
lean_dec_ref(v_a_3976_);
return v_res_3984_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonIte___boxed(lean_object* v_f_3985_, lean_object* v_00_u03b1_3986_, lean_object* v_c_3987_, lean_object* v_inst_3988_, lean_object* v_a_3989_, lean_object* v_b_3990_, lean_object* v_a_3991_, lean_object* v_a_3992_, lean_object* v_a_3993_, lean_object* v_a_3994_, lean_object* v_a_3995_, lean_object* v_a_3996_, lean_object* v_a_3997_, lean_object* v_a_3998_){
_start:
{
uint8_t v_a_boxed_3999_; lean_object* v_res_4000_; 
v_a_boxed_3999_ = lean_unbox(v_a_3991_);
v_res_4000_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonIte(v_f_3985_, v_00_u03b1_3986_, v_c_3987_, v_inst_3988_, v_a_3989_, v_b_3990_, v_a_boxed_3999_, v_a_3992_, v_a_3993_, v_a_3994_, v_a_3995_, v_a_3996_, v_a_3997_);
lean_dec(v_a_3997_);
lean_dec_ref(v_a_3996_);
lean_dec(v_a_3995_);
lean_dec_ref(v_a_3994_);
lean_dec(v_a_3993_);
lean_dec_ref(v_a_3992_);
return v_res_4000_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore___boxed(lean_object* v_e_4001_, lean_object* v_a_4002_, lean_object* v_a_4003_, lean_object* v_a_4004_, lean_object* v_a_4005_, lean_object* v_a_4006_, lean_object* v_a_4007_, lean_object* v_a_4008_, lean_object* v_a_4009_){
_start:
{
uint8_t v_a_boxed_4010_; lean_object* v_res_4011_; 
v_a_boxed_4010_ = lean_unbox(v_a_4002_);
v_res_4011_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDecCore(v_e_4001_, v_a_boxed_4010_, v_a_4003_, v_a_4004_, v_a_4005_, v_a_4006_, v_a_4007_, v_a_4008_);
lean_dec(v_a_4008_);
lean_dec_ref(v_a_4007_);
lean_dec(v_a_4006_);
lean_dec_ref(v_a_4005_);
lean_dec(v_a_4004_);
lean_dec_ref(v_a_4003_);
return v_res_4011_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj___boxed(lean_object* v_e_4012_, lean_object* v_a_4013_, lean_object* v_a_4014_, lean_object* v_a_4015_, lean_object* v_a_4016_, lean_object* v_a_4017_, lean_object* v_a_4018_, lean_object* v_a_4019_, lean_object* v_a_4020_){
_start:
{
uint8_t v_a_boxed_4021_; lean_object* v_res_4022_; 
v_a_boxed_4021_ = lean_unbox(v_a_4013_);
v_res_4022_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonProj(v_e_4012_, v_a_boxed_4021_, v_a_4014_, v_a_4015_, v_a_4016_, v_a_4017_, v_a_4018_, v_a_4019_);
lean_dec(v_a_4019_);
lean_dec_ref(v_a_4018_);
lean_dec(v_a_4017_);
lean_dec_ref(v_a_4016_);
lean_dec(v_a_4015_);
lean_dec_ref(v_a_4014_);
return v_res_4022_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27___boxed(lean_object* v_g_4023_, lean_object* v_prop_4024_, lean_object* v_inst_4025_, lean_object* v_e_4026_, lean_object* v_a_4027_, lean_object* v_a_4028_, lean_object* v_a_4029_, lean_object* v_a_4030_, lean_object* v_a_4031_, lean_object* v_a_4032_, lean_object* v_a_4033_, lean_object* v_a_4034_){
_start:
{
uint8_t v_a_boxed_4035_; lean_object* v_res_4036_; 
v_a_boxed_4035_ = lean_unbox(v_a_4027_);
v_res_4036_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec_x27(v_g_4023_, v_prop_4024_, v_inst_4025_, v_e_4026_, v_a_boxed_4035_, v_a_4028_, v_a_4029_, v_a_4030_, v_a_4031_, v_a_4032_, v_a_4033_);
lean_dec(v_a_4033_);
lean_dec_ref(v_a_4032_);
lean_dec(v_a_4031_);
lean_dec_ref(v_a_4030_);
lean_dec(v_a_4029_);
lean_dec_ref(v_a_4028_);
return v_res_4036_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst___boxed(lean_object* v_e_4037_, lean_object* v_report_4038_, lean_object* v_a_4039_, lean_object* v_a_4040_, lean_object* v_a_4041_, lean_object* v_a_4042_, lean_object* v_a_4043_, lean_object* v_a_4044_, lean_object* v_a_4045_, lean_object* v_a_4046_){
_start:
{
uint8_t v_report_boxed_4047_; uint8_t v_a_boxed_4048_; lean_object* v_res_4049_; 
v_report_boxed_4047_ = lean_unbox(v_report_4038_);
v_a_boxed_4048_ = lean_unbox(v_a_4039_);
v_res_4049_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInst(v_e_4037_, v_report_boxed_4047_, v_a_boxed_4048_, v_a_4040_, v_a_4041_, v_a_4042_, v_a_4043_, v_a_4044_, v_a_4045_);
lean_dec(v_a_4045_);
lean_dec_ref(v_a_4044_);
lean_dec(v_a_4043_);
lean_dec_ref(v_a_4042_);
lean_dec(v_a_4041_);
lean_dec_ref(v_a_4040_);
return v_res_4049_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec___boxed(lean_object* v_g_4050_, lean_object* v_prop_4051_, lean_object* v_h_4052_, lean_object* v_e_4053_, lean_object* v_a_4054_, lean_object* v_a_4055_, lean_object* v_a_4056_, lean_object* v_a_4057_, lean_object* v_a_4058_, lean_object* v_a_4059_, lean_object* v_a_4060_, lean_object* v_a_4061_){
_start:
{
uint8_t v_a_boxed_4062_; lean_object* v_res_4063_; 
v_a_boxed_4062_ = lean_unbox(v_a_4054_);
v_res_4063_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstDec(v_g_4050_, v_prop_4051_, v_h_4052_, v_e_4053_, v_a_boxed_4062_, v_a_4055_, v_a_4056_, v_a_4057_, v_a_4058_, v_a_4059_, v_a_4060_);
lean_dec(v_a_4060_);
lean_dec_ref(v_a_4059_);
lean_dec(v_a_4058_);
lean_dec_ref(v_a_4057_);
lean_dec(v_a_4056_);
lean_dec_ref(v_a_4055_);
return v_res_4063_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore___boxed(lean_object* v_e_4064_, lean_object* v_type_4065_, lean_object* v_report_4066_, lean_object* v_a_4067_, lean_object* v_a_4068_, lean_object* v_a_4069_, lean_object* v_a_4070_, lean_object* v_a_4071_, lean_object* v_a_4072_, lean_object* v_a_4073_, lean_object* v_a_4074_){
_start:
{
uint8_t v_report_boxed_4075_; uint8_t v_a_boxed_4076_; lean_object* v_res_4077_; 
v_report_boxed_4075_ = lean_unbox(v_report_4066_);
v_a_boxed_4076_ = lean_unbox(v_a_4067_);
v_res_4077_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstCore(v_e_4064_, v_type_4065_, v_report_boxed_4075_, v_a_boxed_4076_, v_a_4068_, v_a_4069_, v_a_4070_, v_a_4071_, v_a_4072_, v_a_4073_);
lean_dec(v_a_4073_);
lean_dec_ref(v_a_4072_);
lean_dec(v_a_4071_);
lean_dec_ref(v_a_4070_);
lean_dec(v_a_4069_);
lean_dec_ref(v_a_4068_);
return v_res_4077_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp___boxed(lean_object* v_e_4078_, lean_object* v_a_4079_, lean_object* v_a_4080_, lean_object* v_a_4081_, lean_object* v_a_4082_, lean_object* v_a_4083_, lean_object* v_a_4084_, lean_object* v_a_4085_, lean_object* v_a_4086_){
_start:
{
uint8_t v_a_boxed_4087_; lean_object* v_res_4088_; 
v_a_boxed_4087_ = lean_unbox(v_a_4079_);
v_res_4088_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp(v_e_4078_, v_a_boxed_4087_, v_a_4080_, v_a_4081_, v_a_4082_, v_a_4083_, v_a_4084_, v_a_4085_);
lean_dec(v_a_4085_);
lean_dec_ref(v_a_4084_);
lean_dec(v_a_4083_);
lean_dec_ref(v_a_4082_);
lean_dec(v_a_4081_);
lean_dec_ref(v_a_4080_);
return v_res_4088_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___boxed(lean_object* v_upperBound_4089_, lean_object* v___x_4090_, lean_object* v_f_4091_, lean_object* v___x_4092_, lean_object* v_a_4093_, lean_object* v_b_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_, lean_object* v___y_4097_, lean_object* v___y_4098_, lean_object* v___y_4099_, lean_object* v___y_4100_, lean_object* v___y_4101_, lean_object* v___y_4102_){
_start:
{
uint8_t v___y_73272__boxed_4103_; lean_object* v_res_4104_; 
v___y_73272__boxed_4103_ = lean_unbox(v___y_4095_);
v_res_4104_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg(v_upperBound_4089_, v___x_4090_, v_f_4091_, v___x_4092_, v_a_4093_, v_b_4094_, v___y_73272__boxed_4103_, v___y_4096_, v___y_4097_, v___y_4098_, v___y_4099_, v___y_4100_, v___y_4101_);
lean_dec(v___y_4101_);
lean_dec_ref(v___y_4100_);
lean_dec(v___y_4099_);
lean_dec_ref(v___y_4098_);
lean_dec(v___y_4097_);
lean_dec_ref(v___y_4096_);
lean_dec_ref(v___x_4092_);
lean_dec_ref(v_f_4091_);
lean_dec(v___x_4090_);
lean_dec(v_upperBound_4089_);
return v_res_4104_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstProp___boxed(lean_object* v_g_4105_, lean_object* v_prop_4106_, lean_object* v_h_4107_, lean_object* v_e_4108_, lean_object* v_a_4109_, lean_object* v_a_4110_, lean_object* v_a_4111_, lean_object* v_a_4112_, lean_object* v_a_4113_, lean_object* v_a_4114_, lean_object* v_a_4115_, lean_object* v_a_4116_){
_start:
{
uint8_t v_a_boxed_4117_; lean_object* v_res_4118_; 
v_a_boxed_4117_ = lean_unbox(v_a_4109_);
v_res_4118_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonInstProp(v_g_4105_, v_prop_4106_, v_h_4107_, v_e_4108_, v_a_boxed_4117_, v_a_4110_, v_a_4111_, v_a_4112_, v_a_4113_, v_a_4114_, v_a_4115_);
lean_dec(v_a_4115_);
lean_dec_ref(v_a_4114_);
lean_dec(v_a_4113_);
lean_dec_ref(v_a_4112_);
lean_dec(v_a_4111_);
lean_dec_ref(v_a_4110_);
return v_res_4118_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce___boxed(lean_object* v_e_4119_, lean_object* v_a_4120_, lean_object* v_a_4121_, lean_object* v_a_4122_, lean_object* v_a_4123_, lean_object* v_a_4124_, lean_object* v_a_4125_, lean_object* v_a_4126_, lean_object* v_a_4127_){
_start:
{
uint8_t v_a_boxed_4128_; lean_object* v_res_4129_; 
v_a_boxed_4128_ = lean_unbox(v_a_4120_);
v_res_4129_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce(v_e_4119_, v_a_boxed_4128_, v_a_4121_, v_a_4122_, v_a_4123_, v_a_4124_, v_a_4125_, v_a_4126_);
lean_dec(v_a_4126_);
lean_dec_ref(v_a_4125_);
lean_dec(v_a_4124_);
lean_dec_ref(v_a_4123_);
lean_dec(v_a_4122_);
lean_dec_ref(v_a_4121_);
return v_res_4129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13___boxed(lean_object* v_e_4130_, lean_object* v_x_4131_, lean_object* v_x_4132_, lean_object* v_x_4133_, lean_object* v___y_4134_, lean_object* v___y_4135_, lean_object* v___y_4136_, lean_object* v___y_4137_, lean_object* v___y_4138_, lean_object* v___y_4139_, lean_object* v___y_4140_, lean_object* v___y_4141_){
_start:
{
uint8_t v___y_73448__boxed_4142_; lean_object* v_res_4143_; 
v___y_73448__boxed_4142_ = lean_unbox(v___y_4134_);
v_res_4143_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__13(v_e_4130_, v_x_4131_, v_x_4132_, v_x_4133_, v___y_73448__boxed_4142_, v___y_4135_, v___y_4136_, v___y_4137_, v___y_4138_, v___y_4139_, v___y_4140_);
lean_dec(v___y_4140_);
lean_dec_ref(v___y_4139_);
lean_dec(v___y_4138_);
lean_dec_ref(v___y_4137_);
lean_dec(v___y_4136_);
lean_dec_ref(v___y_4135_);
return v_res_4143_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0___boxed(lean_object** _args){
lean_object* v___x_4144_ = _args[0];
lean_object* v_snd_4145_ = _args[1];
lean_object* v_a_4146_ = _args[2];
lean_object* v___x_4147_ = _args[3];
lean_object* v_fst_4148_ = _args[4];
lean_object* v_f_4149_ = _args[5];
lean_object* v___x_4150_ = _args[6];
lean_object* v___x_4151_ = _args[7];
lean_object* v___x_4152_ = _args[8];
lean_object* v_____r_4153_ = _args[9];
lean_object* v___y_4154_ = _args[10];
lean_object* v___y_4155_ = _args[11];
lean_object* v___y_4156_ = _args[12];
lean_object* v___y_4157_ = _args[13];
lean_object* v___y_4158_ = _args[14];
lean_object* v___y_4159_ = _args[15];
lean_object* v___y_4160_ = _args[16];
lean_object* v___y_4161_ = _args[17];
_start:
{
uint8_t v___x_73542__boxed_4162_; uint8_t v___y_73547__boxed_4163_; lean_object* v_res_4164_; 
v___x_73542__boxed_4162_ = lean_unbox(v___x_4147_);
v___y_73547__boxed_4163_ = lean_unbox(v___y_4154_);
v_res_4164_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg___lam__0(v___x_4144_, v_snd_4145_, v_a_4146_, v___x_73542__boxed_4162_, v_fst_4148_, v_f_4149_, v___x_4150_, v___x_4151_, v___x_4152_, v_____r_4153_, v___y_73547__boxed_4163_, v___y_4155_, v___y_4156_, v___y_4157_, v___y_4158_, v___y_4159_, v___y_4160_);
lean_dec(v___y_4160_);
lean_dec_ref(v___y_4159_);
lean_dec(v___y_4158_);
lean_dec_ref(v___y_4157_);
lean_dec(v___y_4156_);
lean_dec_ref(v___y_4155_);
lean_dec_ref(v___x_4152_);
lean_dec_ref(v___x_4151_);
lean_dec(v___x_4150_);
lean_dec_ref(v_f_4149_);
lean_dec(v_a_4146_);
return v_res_4164_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon___boxed(lean_object* v_e_4165_, lean_object* v_a_4166_, lean_object* v_a_4167_, lean_object* v_a_4168_, lean_object* v_a_4169_, lean_object* v_a_4170_, lean_object* v_a_4171_, lean_object* v_a_4172_, lean_object* v_a_4173_){
_start:
{
uint8_t v_a_boxed_4174_; lean_object* v_res_4175_; 
v_a_boxed_4174_ = lean_unbox(v_a_4166_);
v_res_4175_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_e_4165_, v_a_boxed_4174_, v_a_4167_, v_a_4168_, v_a_4169_, v_a_4170_, v_a_4171_, v_a_4172_);
lean_dec(v_a_4172_);
lean_dec_ref(v_a_4171_);
lean_dec(v_a_4170_);
lean_dec_ref(v_a_4169_);
lean_dec(v_a_4168_);
lean_dec_ref(v_a_4167_);
return v_res_4175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6(lean_object* v_declName_4176_, uint8_t v___y_4177_, lean_object* v___y_4178_, lean_object* v___y_4179_, lean_object* v___y_4180_, lean_object* v___y_4181_, lean_object* v___y_4182_, lean_object* v___y_4183_){
_start:
{
lean_object* v___x_4185_; 
v___x_4185_ = l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6___redArg(v_declName_4176_, v___y_4183_);
return v___x_4185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6___boxed(lean_object* v_declName_4186_, lean_object* v___y_4187_, lean_object* v___y_4188_, lean_object* v___y_4189_, lean_object* v___y_4190_, lean_object* v___y_4191_, lean_object* v___y_4192_, lean_object* v___y_4193_, lean_object* v___y_4194_){
_start:
{
uint8_t v___y_76277__boxed_4195_; lean_object* v_res_4196_; 
v___y_76277__boxed_4195_ = lean_unbox(v___y_4187_);
v_res_4196_ = l_Lean_Meta_isMatcher___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonApp_spec__6(v_declName_4186_, v___y_76277__boxed_4195_, v___y_4188_, v___y_4189_, v___y_4190_, v___y_4191_, v___y_4192_, v___y_4193_);
lean_dec(v___y_4193_);
lean_dec_ref(v___y_4192_);
lean_dec(v___y_4191_);
lean_dec_ref(v___y_4190_);
lean_dec(v___y_4189_);
lean_dec_ref(v___y_4188_);
return v_res_4196_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9(lean_object* v_declName_4197_, uint8_t v___y_4198_, lean_object* v___y_4199_, lean_object* v___y_4200_, lean_object* v___y_4201_, lean_object* v___y_4202_, lean_object* v___y_4203_, lean_object* v___y_4204_){
_start:
{
lean_object* v___x_4206_; 
v___x_4206_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9___redArg(v_declName_4197_, v___y_4204_);
return v___x_4206_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9___boxed(lean_object* v_declName_4207_, lean_object* v___y_4208_, lean_object* v___y_4209_, lean_object* v___y_4210_, lean_object* v___y_4211_, lean_object* v___y_4212_, lean_object* v___y_4213_, lean_object* v___y_4214_, lean_object* v___y_4215_){
_start:
{
uint8_t v___y_76303__boxed_4216_; lean_object* v_res_4217_; 
v___y_76303__boxed_4216_ = lean_unbox(v___y_4208_);
v_res_4217_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_postReduce_spec__9(v_declName_4207_, v___y_76303__boxed_4216_, v___y_4209_, v___y_4210_, v___y_4211_, v___y_4212_, v___y_4213_, v___y_4214_);
lean_dec(v___y_4214_);
lean_dec_ref(v___y_4213_);
lean_dec(v___y_4212_);
lean_dec_ref(v___y_4211_);
lean_dec(v___y_4210_);
lean_dec_ref(v___y_4209_);
return v_res_4217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__27(lean_object* v_00_u03b1_4218_, lean_object* v_name_4219_, lean_object* v_type_4220_, lean_object* v_val_4221_, lean_object* v_k_4222_, uint8_t v_nondep_4223_, uint8_t v_kind_4224_, uint8_t v___y_4225_, lean_object* v___y_4226_, lean_object* v___y_4227_, lean_object* v___y_4228_, lean_object* v___y_4229_, lean_object* v___y_4230_, lean_object* v___y_4231_){
_start:
{
lean_object* v___x_4233_; 
v___x_4233_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__27___redArg(v_name_4219_, v_type_4220_, v_val_4221_, v_k_4222_, v_nondep_4223_, v_kind_4224_, v___y_4225_, v___y_4226_, v___y_4227_, v___y_4228_, v___y_4229_, v___y_4230_, v___y_4231_);
return v___x_4233_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__27___boxed(lean_object* v_00_u03b1_4234_, lean_object* v_name_4235_, lean_object* v_type_4236_, lean_object* v_val_4237_, lean_object* v_k_4238_, lean_object* v_nondep_4239_, lean_object* v_kind_4240_, lean_object* v___y_4241_, lean_object* v___y_4242_, lean_object* v___y_4243_, lean_object* v___y_4244_, lean_object* v___y_4245_, lean_object* v___y_4246_, lean_object* v___y_4247_, lean_object* v___y_4248_){
_start:
{
uint8_t v_nondep_boxed_4249_; uint8_t v_kind_boxed_4250_; uint8_t v___y_76329__boxed_4251_; lean_object* v_res_4252_; 
v_nondep_boxed_4249_ = lean_unbox(v_nondep_4239_);
v_kind_boxed_4250_ = lean_unbox(v_kind_4240_);
v___y_76329__boxed_4251_ = lean_unbox(v___y_4241_);
v_res_4252_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLet_spec__27(v_00_u03b1_4234_, v_name_4235_, v_type_4236_, v_val_4237_, v_k_4238_, v_nondep_boxed_4249_, v_kind_boxed_4250_, v___y_76329__boxed_4251_, v___y_4242_, v___y_4243_, v___y_4244_, v___y_4245_, v___y_4246_, v___y_4247_);
lean_dec(v___y_4247_);
lean_dec_ref(v___y_4246_);
lean_dec(v___y_4245_);
lean_dec_ref(v___y_4244_);
lean_dec(v___y_4243_);
lean_dec_ref(v___y_4242_);
return v_res_4252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__30(lean_object* v_00_u03b1_4253_, lean_object* v_name_4254_, uint8_t v_bi_4255_, lean_object* v_type_4256_, lean_object* v_k_4257_, uint8_t v_kind_4258_, uint8_t v___y_4259_, lean_object* v___y_4260_, lean_object* v___y_4261_, lean_object* v___y_4262_, lean_object* v___y_4263_, lean_object* v___y_4264_, lean_object* v___y_4265_){
_start:
{
lean_object* v___x_4267_; 
v___x_4267_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__30___redArg(v_name_4254_, v_bi_4255_, v_type_4256_, v_k_4257_, v_kind_4258_, v___y_4259_, v___y_4260_, v___y_4261_, v___y_4262_, v___y_4263_, v___y_4264_, v___y_4265_);
return v___x_4267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__30___boxed(lean_object* v_00_u03b1_4268_, lean_object* v_name_4269_, lean_object* v_bi_4270_, lean_object* v_type_4271_, lean_object* v_k_4272_, lean_object* v_kind_4273_, lean_object* v___y_4274_, lean_object* v___y_4275_, lean_object* v___y_4276_, lean_object* v___y_4277_, lean_object* v___y_4278_, lean_object* v___y_4279_, lean_object* v___y_4280_, lean_object* v___y_4281_){
_start:
{
uint8_t v_bi_boxed_4282_; uint8_t v_kind_boxed_4283_; uint8_t v___y_76355__boxed_4284_; lean_object* v_res_4285_; 
v_bi_boxed_4282_ = lean_unbox(v_bi_4270_);
v_kind_boxed_4283_ = lean_unbox(v_kind_4273_);
v___y_76355__boxed_4284_ = lean_unbox(v___y_4274_);
v_res_4285_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonLambdaLoop_spec__30(v_00_u03b1_4268_, v_name_4269_, v_bi_boxed_4282_, v_type_4271_, v_k_4272_, v_kind_boxed_4283_, v___y_76355__boxed_4284_, v___y_4275_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_, v___y_4280_);
lean_dec(v___y_4280_);
lean_dec_ref(v___y_4279_);
lean_dec(v___y_4278_);
lean_dec_ref(v___y_4277_);
lean_dec(v___y_4276_);
lean_dec_ref(v___y_4275_);
return v_res_4285_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1(lean_object* v_00_u03b2_4286_, lean_object* v_m_4287_, lean_object* v_a_4288_){
_start:
{
lean_object* v___x_4289_; 
v___x_4289_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___redArg(v_m_4287_, v_a_4288_);
return v___x_4289_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1___boxed(lean_object* v_00_u03b2_4290_, lean_object* v_m_4291_, lean_object* v_a_4292_){
_start:
{
lean_object* v_res_4293_; 
v_res_4293_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1(v_00_u03b2_4290_, v_m_4291_, v_a_4292_);
lean_dec_ref(v_a_4292_);
lean_dec_ref(v_m_4291_);
return v_res_4293_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2(lean_object* v_00_u03b2_4294_, lean_object* v_m_4295_, lean_object* v_a_4296_, lean_object* v_b_4297_){
_start:
{
lean_object* v___x_4298_; 
v___x_4298_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2___redArg(v_m_4295_, v_a_4296_, v_b_4297_);
return v___x_4298_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11(lean_object* v_cls_4299_, lean_object* v_msg_4300_, uint8_t v___y_4301_, lean_object* v___y_4302_, lean_object* v___y_4303_, lean_object* v___y_4304_, lean_object* v___y_4305_, lean_object* v___y_4306_, lean_object* v___y_4307_){
_start:
{
lean_object* v___x_4309_; 
v___x_4309_ = l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___redArg(v_cls_4299_, v_msg_4300_, v___y_4304_, v___y_4305_, v___y_4306_, v___y_4307_);
return v___x_4309_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11___boxed(lean_object* v_cls_4310_, lean_object* v_msg_4311_, lean_object* v___y_4312_, lean_object* v___y_4313_, lean_object* v___y_4314_, lean_object* v___y_4315_, lean_object* v___y_4316_, lean_object* v___y_4317_, lean_object* v___y_4318_, lean_object* v___y_4319_){
_start:
{
uint8_t v___y_76385__boxed_4320_; lean_object* v_res_4321_; 
v___y_76385__boxed_4320_ = lean_unbox(v___y_4312_);
v_res_4321_ = l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__11(v_cls_4310_, v_msg_4311_, v___y_76385__boxed_4320_, v___y_4313_, v___y_4314_, v___y_4315_, v___y_4316_, v___y_4317_, v___y_4318_);
lean_dec(v___y_4318_);
lean_dec_ref(v___y_4317_);
lean_dec(v___y_4316_);
lean_dec_ref(v___y_4315_);
lean_dec(v___y_4314_);
lean_dec_ref(v___y_4313_);
return v_res_4321_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12(lean_object* v_upperBound_4322_, lean_object* v___x_4323_, lean_object* v_f_4324_, lean_object* v___x_4325_, lean_object* v_inst_4326_, lean_object* v_R_4327_, lean_object* v_a_4328_, lean_object* v_b_4329_, lean_object* v_c_4330_, uint8_t v___y_4331_, lean_object* v___y_4332_, lean_object* v___y_4333_, lean_object* v___y_4334_, lean_object* v___y_4335_, lean_object* v___y_4336_, lean_object* v___y_4337_){
_start:
{
lean_object* v___x_4339_; 
v___x_4339_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___redArg(v_upperBound_4322_, v___x_4323_, v_f_4324_, v___x_4325_, v_a_4328_, v_b_4329_, v___y_4331_, v___y_4332_, v___y_4333_, v___y_4334_, v___y_4335_, v___y_4336_, v___y_4337_);
return v___x_4339_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12___boxed(lean_object** _args){
lean_object* v_upperBound_4340_ = _args[0];
lean_object* v___x_4341_ = _args[1];
lean_object* v_f_4342_ = _args[2];
lean_object* v___x_4343_ = _args[3];
lean_object* v_inst_4344_ = _args[4];
lean_object* v_R_4345_ = _args[5];
lean_object* v_a_4346_ = _args[6];
lean_object* v_b_4347_ = _args[7];
lean_object* v_c_4348_ = _args[8];
lean_object* v___y_4349_ = _args[9];
lean_object* v___y_4350_ = _args[10];
lean_object* v___y_4351_ = _args[11];
lean_object* v___y_4352_ = _args[12];
lean_object* v___y_4353_ = _args[13];
lean_object* v___y_4354_ = _args[14];
lean_object* v___y_4355_ = _args[15];
lean_object* v___y_4356_ = _args[16];
_start:
{
uint8_t v___y_76415__boxed_4357_; lean_object* v_res_4358_; 
v___y_76415__boxed_4357_ = lean_unbox(v___y_4349_);
v_res_4358_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_canonAppDefault_spec__12(v_upperBound_4340_, v___x_4341_, v_f_4342_, v___x_4343_, v_inst_4344_, v_R_4345_, v_a_4346_, v_b_4347_, v_c_4348_, v___y_76415__boxed_4357_, v___y_4350_, v___y_4351_, v___y_4352_, v___y_4353_, v___y_4354_, v___y_4355_);
lean_dec(v___y_4355_);
lean_dec_ref(v___y_4354_);
lean_dec(v___y_4353_);
lean_dec_ref(v___y_4352_);
lean_dec(v___y_4351_);
lean_dec_ref(v___y_4350_);
lean_dec_ref(v___x_4343_);
lean_dec_ref(v_f_4342_);
lean_dec(v___x_4341_);
lean_dec(v_upperBound_4340_);
return v_res_4358_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__11(lean_object* v_00_u03b2_4359_, lean_object* v_a_4360_, lean_object* v_x_4361_){
_start:
{
lean_object* v___x_4362_; 
v___x_4362_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__11___redArg(v_a_4360_, v_x_4361_);
return v___x_4362_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__11___boxed(lean_object* v_00_u03b2_4363_, lean_object* v_a_4364_, lean_object* v_x_4365_){
_start:
{
lean_object* v_res_4366_; 
v_res_4366_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__1_spec__11(v_00_u03b2_4363_, v_a_4364_, v_x_4365_);
lean_dec(v_x_4365_);
lean_dec_ref(v_a_4364_);
return v_res_4366_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__13(lean_object* v_00_u03b2_4367_, lean_object* v_a_4368_, lean_object* v_x_4369_){
_start:
{
uint8_t v___x_4370_; 
v___x_4370_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__13___redArg(v_a_4368_, v_x_4369_);
return v___x_4370_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__13___boxed(lean_object* v_00_u03b2_4371_, lean_object* v_a_4372_, lean_object* v_x_4373_){
_start:
{
uint8_t v_res_4374_; lean_object* v_r_4375_; 
v_res_4374_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__13(v_00_u03b2_4371_, v_a_4372_, v_x_4373_);
lean_dec(v_x_4373_);
lean_dec_ref(v_a_4372_);
v_r_4375_ = lean_box(v_res_4374_);
return v_r_4375_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14(lean_object* v_00_u03b2_4376_, lean_object* v_data_4377_){
_start:
{
lean_object* v___x_4378_; 
v___x_4378_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14___redArg(v_data_4377_);
return v___x_4378_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__15(lean_object* v_00_u03b2_4379_, lean_object* v_a_4380_, lean_object* v_b_4381_, lean_object* v_x_4382_){
_start:
{
lean_object* v___x_4383_; 
v___x_4383_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__15___redArg(v_a_4380_, v_b_4381_, v_x_4382_);
return v___x_4383_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14_spec__31(lean_object* v_00_u03b2_4384_, lean_object* v_i_4385_, lean_object* v_source_4386_, lean_object* v_target_4387_){
_start:
{
lean_object* v___x_4388_; 
v___x_4388_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14_spec__31___redArg(v_i_4385_, v_source_4386_, v_target_4387_);
return v___x_4388_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14_spec__31_spec__36(lean_object* v_00_u03b2_4389_, lean_object* v_x_4390_, lean_object* v_x_4391_){
_start:
{
lean_object* v___x_4392_; 
v___x_4392_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon_spec__2_spec__14_spec__31_spec__36___redArg(v_x_4390_, v_x_4391_);
return v___x_4392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Canon_isSupport(lean_object* v_pinfos_4393_, lean_object* v_i_4394_, lean_object* v_arg_4395_, lean_object* v_a_4396_, lean_object* v_a_4397_, lean_object* v_a_4398_, lean_object* v_a_4399_){
_start:
{
lean_object* v___x_4401_; 
v___x_4401_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_shouldCanon(v_pinfos_4393_, v_i_4394_, v_arg_4395_, v_a_4396_, v_a_4397_, v_a_4398_, v_a_4399_);
if (lean_obj_tag(v___x_4401_) == 0)
{
lean_object* v_a_4402_; lean_object* v___x_4404_; uint8_t v_isShared_4405_; uint8_t v_isSharedCheck_4417_; 
v_a_4402_ = lean_ctor_get(v___x_4401_, 0);
v_isSharedCheck_4417_ = !lean_is_exclusive(v___x_4401_);
if (v_isSharedCheck_4417_ == 0)
{
v___x_4404_ = v___x_4401_;
v_isShared_4405_ = v_isSharedCheck_4417_;
goto v_resetjp_4403_;
}
else
{
lean_inc(v_a_4402_);
lean_dec(v___x_4401_);
v___x_4404_ = lean_box(0);
v_isShared_4405_ = v_isSharedCheck_4417_;
goto v_resetjp_4403_;
}
v_resetjp_4403_:
{
uint8_t v___x_4406_; 
v___x_4406_ = lean_unbox(v_a_4402_);
lean_dec(v_a_4402_);
if (v___x_4406_ == 3)
{
uint8_t v___x_4407_; lean_object* v___x_4408_; lean_object* v___x_4410_; 
v___x_4407_ = 0;
v___x_4408_ = lean_box(v___x_4407_);
if (v_isShared_4405_ == 0)
{
lean_ctor_set(v___x_4404_, 0, v___x_4408_);
v___x_4410_ = v___x_4404_;
goto v_reusejp_4409_;
}
else
{
lean_object* v_reuseFailAlloc_4411_; 
v_reuseFailAlloc_4411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4411_, 0, v___x_4408_);
v___x_4410_ = v_reuseFailAlloc_4411_;
goto v_reusejp_4409_;
}
v_reusejp_4409_:
{
return v___x_4410_;
}
}
else
{
uint8_t v___x_4412_; lean_object* v___x_4413_; lean_object* v___x_4415_; 
v___x_4412_ = 1;
v___x_4413_ = lean_box(v___x_4412_);
if (v_isShared_4405_ == 0)
{
lean_ctor_set(v___x_4404_, 0, v___x_4413_);
v___x_4415_ = v___x_4404_;
goto v_reusejp_4414_;
}
else
{
lean_object* v_reuseFailAlloc_4416_; 
v_reuseFailAlloc_4416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4416_, 0, v___x_4413_);
v___x_4415_ = v_reuseFailAlloc_4416_;
goto v_reusejp_4414_;
}
v_reusejp_4414_:
{
return v___x_4415_;
}
}
}
}
else
{
lean_object* v_a_4418_; lean_object* v___x_4420_; uint8_t v_isShared_4421_; uint8_t v_isSharedCheck_4425_; 
v_a_4418_ = lean_ctor_get(v___x_4401_, 0);
v_isSharedCheck_4425_ = !lean_is_exclusive(v___x_4401_);
if (v_isSharedCheck_4425_ == 0)
{
v___x_4420_ = v___x_4401_;
v_isShared_4421_ = v_isSharedCheck_4425_;
goto v_resetjp_4419_;
}
else
{
lean_inc(v_a_4418_);
lean_dec(v___x_4401_);
v___x_4420_ = lean_box(0);
v_isShared_4421_ = v_isSharedCheck_4425_;
goto v_resetjp_4419_;
}
v_resetjp_4419_:
{
lean_object* v___x_4423_; 
if (v_isShared_4421_ == 0)
{
v___x_4423_ = v___x_4420_;
goto v_reusejp_4422_;
}
else
{
lean_object* v_reuseFailAlloc_4424_; 
v_reuseFailAlloc_4424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4424_, 0, v_a_4418_);
v___x_4423_ = v_reuseFailAlloc_4424_;
goto v_reusejp_4422_;
}
v_reusejp_4422_:
{
return v___x_4423_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Canon_isSupport___boxed(lean_object* v_pinfos_4426_, lean_object* v_i_4427_, lean_object* v_arg_4428_, lean_object* v_a_4429_, lean_object* v_a_4430_, lean_object* v_a_4431_, lean_object* v_a_4432_, lean_object* v_a_4433_){
_start:
{
lean_object* v_res_4434_; 
v_res_4434_ = l_Lean_Meta_Sym_Canon_isSupport(v_pinfos_4426_, v_i_4427_, v_arg_4428_, v_a_4429_, v_a_4430_, v_a_4431_, v_a_4432_);
lean_dec(v_a_4432_);
lean_dec_ref(v_a_4431_);
lean_dec(v_a_4430_);
lean_dec_ref(v_a_4429_);
lean_dec(v_i_4427_);
lean_dec_ref(v_pinfos_4426_);
return v_res_4434_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0___redArg(lean_object* v_category_4435_, lean_object* v_opts_4436_, lean_object* v_act_4437_, lean_object* v_decl_4438_, lean_object* v___y_4439_, lean_object* v___y_4440_, lean_object* v___y_4441_, lean_object* v___y_4442_, lean_object* v___y_4443_, lean_object* v___y_4444_){
_start:
{
lean_object* v___x_4446_; lean_object* v___x_4447_; 
lean_inc(v___y_4444_);
lean_inc_ref(v___y_4443_);
lean_inc(v___y_4442_);
lean_inc_ref(v___y_4441_);
lean_inc(v___y_4440_);
lean_inc_ref(v___y_4439_);
v___x_4446_ = lean_apply_6(v_act_4437_, v___y_4439_, v___y_4440_, v___y_4441_, v___y_4442_, v___y_4443_, v___y_4444_);
v___x_4447_ = l_Lean_profileitIOUnsafe___redArg(v_category_4435_, v_opts_4436_, v___x_4446_, v_decl_4438_);
return v___x_4447_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0___redArg___boxed(lean_object* v_category_4448_, lean_object* v_opts_4449_, lean_object* v_act_4450_, lean_object* v_decl_4451_, lean_object* v___y_4452_, lean_object* v___y_4453_, lean_object* v___y_4454_, lean_object* v___y_4455_, lean_object* v___y_4456_, lean_object* v___y_4457_, lean_object* v___y_4458_){
_start:
{
lean_object* v_res_4459_; 
v_res_4459_ = l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0___redArg(v_category_4448_, v_opts_4449_, v_act_4450_, v_decl_4451_, v___y_4452_, v___y_4453_, v___y_4454_, v___y_4455_, v___y_4456_, v___y_4457_);
lean_dec(v___y_4457_);
lean_dec_ref(v___y_4456_);
lean_dec(v___y_4455_);
lean_dec_ref(v___y_4454_);
lean_dec(v___y_4453_);
lean_dec_ref(v___y_4452_);
lean_dec_ref(v_opts_4449_);
lean_dec_ref(v_category_4448_);
return v_res_4459_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0(lean_object* v_00_u03b1_4460_, lean_object* v_category_4461_, lean_object* v_opts_4462_, lean_object* v_act_4463_, lean_object* v_decl_4464_, lean_object* v___y_4465_, lean_object* v___y_4466_, lean_object* v___y_4467_, lean_object* v___y_4468_, lean_object* v___y_4469_, lean_object* v___y_4470_){
_start:
{
lean_object* v___x_4472_; 
v___x_4472_ = l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0___redArg(v_category_4461_, v_opts_4462_, v_act_4463_, v_decl_4464_, v___y_4465_, v___y_4466_, v___y_4467_, v___y_4468_, v___y_4469_, v___y_4470_);
return v___x_4472_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0___boxed(lean_object* v_00_u03b1_4473_, lean_object* v_category_4474_, lean_object* v_opts_4475_, lean_object* v_act_4476_, lean_object* v_decl_4477_, lean_object* v___y_4478_, lean_object* v___y_4479_, lean_object* v___y_4480_, lean_object* v___y_4481_, lean_object* v___y_4482_, lean_object* v___y_4483_, lean_object* v___y_4484_){
_start:
{
lean_object* v_res_4485_; 
v_res_4485_ = l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0(v_00_u03b1_4473_, v_category_4474_, v_opts_4475_, v_act_4476_, v_decl_4477_, v___y_4478_, v___y_4479_, v___y_4480_, v___y_4481_, v___y_4482_, v___y_4483_);
lean_dec(v___y_4483_);
lean_dec_ref(v___y_4482_);
lean_dec(v___y_4481_);
lean_dec_ref(v___y_4480_);
lean_dec(v___y_4479_);
lean_dec_ref(v___y_4478_);
lean_dec_ref(v_opts_4475_);
lean_dec_ref(v_category_4474_);
return v_res_4485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_canon___lam__0(uint8_t v___x_4486_, lean_object* v_e_4487_, uint8_t v___x_4488_, lean_object* v___y_4489_, lean_object* v___y_4490_, lean_object* v___y_4491_, lean_object* v___y_4492_, lean_object* v___y_4493_, lean_object* v___y_4494_){
_start:
{
lean_object* v___y_4497_; lean_object* v___x_4506_; uint8_t v_transparency_4507_; uint8_t v___x_4508_; 
v___x_4506_ = l_Lean_Meta_Context_config(v___y_4491_);
v_transparency_4507_ = lean_ctor_get_uint8(v___x_4506_, 9);
lean_dec_ref(v___x_4506_);
v___x_4508_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_4507_, v___x_4486_);
if (v___x_4508_ == 0)
{
lean_object* v_keyedConfig_4509_; uint8_t v_trackZetaDelta_4510_; lean_object* v_zetaDeltaSet_4511_; lean_object* v_lctx_4512_; lean_object* v_localInstances_4513_; lean_object* v_defEqCtx_x3f_4514_; lean_object* v_synthPendingDepth_4515_; lean_object* v_customCanUnfoldPredicate_x3f_4516_; uint8_t v_univApprox_4517_; uint8_t v_inTypeClassResolution_4518_; uint8_t v_cacheInferType_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; 
v_keyedConfig_4509_ = lean_ctor_get(v___y_4491_, 0);
v_trackZetaDelta_4510_ = lean_ctor_get_uint8(v___y_4491_, sizeof(void*)*7);
v_zetaDeltaSet_4511_ = lean_ctor_get(v___y_4491_, 1);
v_lctx_4512_ = lean_ctor_get(v___y_4491_, 2);
v_localInstances_4513_ = lean_ctor_get(v___y_4491_, 3);
v_defEqCtx_x3f_4514_ = lean_ctor_get(v___y_4491_, 4);
v_synthPendingDepth_4515_ = lean_ctor_get(v___y_4491_, 5);
v_customCanUnfoldPredicate_x3f_4516_ = lean_ctor_get(v___y_4491_, 6);
v_univApprox_4517_ = lean_ctor_get_uint8(v___y_4491_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_4518_ = lean_ctor_get_uint8(v___y_4491_, sizeof(void*)*7 + 2);
v_cacheInferType_4519_ = lean_ctor_get_uint8(v___y_4491_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_4509_);
v___x_4520_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_4486_, v_keyedConfig_4509_);
lean_inc(v_customCanUnfoldPredicate_x3f_4516_);
lean_inc(v_synthPendingDepth_4515_);
lean_inc(v_defEqCtx_x3f_4514_);
lean_inc_ref(v_localInstances_4513_);
lean_inc_ref(v_lctx_4512_);
lean_inc(v_zetaDeltaSet_4511_);
v___x_4521_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4521_, 0, v___x_4520_);
lean_ctor_set(v___x_4521_, 1, v_zetaDeltaSet_4511_);
lean_ctor_set(v___x_4521_, 2, v_lctx_4512_);
lean_ctor_set(v___x_4521_, 3, v_localInstances_4513_);
lean_ctor_set(v___x_4521_, 4, v_defEqCtx_x3f_4514_);
lean_ctor_set(v___x_4521_, 5, v_synthPendingDepth_4515_);
lean_ctor_set(v___x_4521_, 6, v_customCanUnfoldPredicate_x3f_4516_);
lean_ctor_set_uint8(v___x_4521_, sizeof(void*)*7, v_trackZetaDelta_4510_);
lean_ctor_set_uint8(v___x_4521_, sizeof(void*)*7 + 1, v_univApprox_4517_);
lean_ctor_set_uint8(v___x_4521_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4518_);
lean_ctor_set_uint8(v___x_4521_, sizeof(void*)*7 + 3, v_cacheInferType_4519_);
v___x_4522_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_e_4487_, v___x_4488_, v___y_4489_, v___y_4490_, v___x_4521_, v___y_4492_, v___y_4493_, v___y_4494_);
lean_dec_ref_known(v___x_4521_, 7);
v___y_4497_ = v___x_4522_;
goto v___jp_4496_;
}
else
{
lean_object* v___x_4523_; 
v___x_4523_ = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_canon(v_e_4487_, v___x_4488_, v___y_4489_, v___y_4490_, v___y_4491_, v___y_4492_, v___y_4493_, v___y_4494_);
v___y_4497_ = v___x_4523_;
goto v___jp_4496_;
}
v___jp_4496_:
{
if (lean_obj_tag(v___y_4497_) == 0)
{
return v___y_4497_;
}
else
{
lean_object* v_a_4498_; lean_object* v___x_4500_; uint8_t v_isShared_4501_; uint8_t v_isSharedCheck_4505_; 
v_a_4498_ = lean_ctor_get(v___y_4497_, 0);
v_isSharedCheck_4505_ = !lean_is_exclusive(v___y_4497_);
if (v_isSharedCheck_4505_ == 0)
{
v___x_4500_ = v___y_4497_;
v_isShared_4501_ = v_isSharedCheck_4505_;
goto v_resetjp_4499_;
}
else
{
lean_inc(v_a_4498_);
lean_dec(v___y_4497_);
v___x_4500_ = lean_box(0);
v_isShared_4501_ = v_isSharedCheck_4505_;
goto v_resetjp_4499_;
}
v_resetjp_4499_:
{
lean_object* v___x_4503_; 
if (v_isShared_4501_ == 0)
{
v___x_4503_ = v___x_4500_;
goto v_reusejp_4502_;
}
else
{
lean_object* v_reuseFailAlloc_4504_; 
v_reuseFailAlloc_4504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4504_, 0, v_a_4498_);
v___x_4503_ = v_reuseFailAlloc_4504_;
goto v_reusejp_4502_;
}
v_reusejp_4502_:
{
return v___x_4503_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_canon___lam__0___boxed(lean_object* v___x_4524_, lean_object* v_e_4525_, lean_object* v___x_4526_, lean_object* v___y_4527_, lean_object* v___y_4528_, lean_object* v___y_4529_, lean_object* v___y_4530_, lean_object* v___y_4531_, lean_object* v___y_4532_, lean_object* v___y_4533_){
_start:
{
uint8_t v___x_2117__boxed_4534_; uint8_t v___x_2118__boxed_4535_; lean_object* v_res_4536_; 
v___x_2117__boxed_4534_ = lean_unbox(v___x_4524_);
v___x_2118__boxed_4535_ = lean_unbox(v___x_4526_);
v_res_4536_ = l_Lean_Meta_Sym_canon___lam__0(v___x_2117__boxed_4534_, v_e_4525_, v___x_2118__boxed_4535_, v___y_4527_, v___y_4528_, v___y_4529_, v___y_4530_, v___y_4531_, v___y_4532_);
lean_dec(v___y_4532_);
lean_dec_ref(v___y_4531_);
lean_dec(v___y_4530_);
lean_dec_ref(v___y_4529_);
lean_dec(v___y_4528_);
lean_dec_ref(v___y_4527_);
return v_res_4536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_canon(lean_object* v_e_4538_, lean_object* v_a_4539_, lean_object* v_a_4540_, lean_object* v_a_4541_, lean_object* v_a_4542_, lean_object* v_a_4543_, lean_object* v_a_4544_){
_start:
{
lean_object* v___x_4546_; lean_object* v___x_4547_; uint8_t v___x_4548_; uint8_t v___x_4549_; lean_object* v___x_4550_; lean_object* v___x_4551_; lean_object* v___f_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; 
v___x_4546_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_4543_);
v___x_4547_ = ((lean_object*)(l_Lean_Meta_Sym_canon___closed__0));
v___x_4548_ = 0;
v___x_4549_ = 2;
v___x_4550_ = lean_box(v___x_4549_);
v___x_4551_ = lean_box(v___x_4548_);
v___f_4552_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_canon___lam__0___boxed), 10, 3);
lean_closure_set(v___f_4552_, 0, v___x_4550_);
lean_closure_set(v___f_4552_, 1, v_e_4538_);
lean_closure_set(v___f_4552_, 2, v___x_4551_);
v___x_4553_ = lean_box(0);
v___x_4554_ = l_Lean_profileitM___at___00Lean_Meta_Sym_canon_spec__0___redArg(v___x_4547_, v___x_4546_, v___f_4552_, v___x_4553_, v_a_4539_, v_a_4540_, v_a_4541_, v_a_4542_, v_a_4543_, v_a_4544_);
lean_dec_ref(v___x_4546_);
return v___x_4554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_canon___boxed(lean_object* v_e_4555_, lean_object* v_a_4556_, lean_object* v_a_4557_, lean_object* v_a_4558_, lean_object* v_a_4559_, lean_object* v_a_4560_, lean_object* v_a_4561_, lean_object* v_a_4562_){
_start:
{
lean_object* v_res_4563_; 
v_res_4563_ = l_Lean_Meta_Sym_canon(v_e_4555_, v_a_4556_, v_a_4557_, v_a_4558_, v_a_4559_, v_a_4560_, v_a_4561_);
lean_dec(v_a_4561_);
lean_dec_ref(v_a_4560_);
lean_dec(v_a_4559_);
lean_dec_ref(v_a_4558_);
lean_dec(v_a_4557_);
lean_dec_ref(v_a_4556_);
return v_res_4563_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_ExprPtr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_SynthInstance(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_SynthInstance(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Arith_EvalNum(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_IntInstTesters(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_NatInstTesters(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_LitValues(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Eta(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_WHNF(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Util(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Canon(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_ExprPtr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Arith_EvalNum(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_IntInstTesters(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_NatInstTesters(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_LitValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Eta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_initFn_00___x40_Lean_Meta_Sym_Canon_1925315962____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Sym_Canon_instInhabitedShouldCanonResult_default = _init_l_Lean_Meta_Sym_Canon_instInhabitedShouldCanonResult_default();
l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instInhabitedShouldCanonResult = _init_l___private_Lean_Meta_Sym_Canon_0__Lean_Meta_Sym_Canon_instInhabitedShouldCanonResult();
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Canon(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_ExprPtr(uint8_t builtin);
lean_object* initialize_Lean_Meta_SynthInstance(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_SynthInstance(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Arith_EvalNum(uint8_t builtin);
lean_object* initialize_Lean_Meta_IntInstTesters(uint8_t builtin);
lean_object* initialize_Lean_Meta_NatInstTesters(uint8_t builtin);
lean_object* initialize_Lean_Meta_LitValues(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Eta(uint8_t builtin);
lean_object* initialize_Lean_Meta_WHNF(uint8_t builtin);
lean_object* initialize_Init_Grind_Util(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Canon(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_ExprPtr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Arith_EvalNum(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_IntInstTesters(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_NatInstTesters(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_LitValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Eta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Canon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Canon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Canon(builtin);
}
#ifdef __cplusplus
}
#endif
