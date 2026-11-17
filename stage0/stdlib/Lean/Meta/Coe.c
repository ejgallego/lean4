// Lean compiler output
// Module: Lean.Meta.Coe
// Imports: public import Lean.Meta.AppBuilder import Lean.ExtraModUses import Lean.Meta.WHNF
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
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l_Lean_registerTagAttribute(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t);
uint8_t l_Lean_TagAttribute_hasTag(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getProjectionFnInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArgD(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldDefinition_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_decLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isLevelDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getDecLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isMonad_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkBVar(lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_hint_x27(lean_object*);
uint8_t l_Lean_Expr_isSort(lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "coe_decl"};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 217, 140, 88, 250, 134, 204, 64)}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 77, .m_data = "auxiliary definition used to implement coercion (unfolded during elaboration)"};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "coeDeclAttr"};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(110, 20, 115, 115, 128, 118, 26, 153)}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coeDeclAttr;
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 307, .m_capacity = 307, .m_length = 306, .m_data = "Tags declarations to be unfolded during coercion elaboration.\n\nThis is mostly used to hide coercion implementation details and show the coerced result instead of\nan application of auxiliary definitions (e.g. `CoeT.coe`, `Coe.coe`). This attribute only works on\nreducible functions and instance projections."};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(22) << 1) | 1)),((lean_object*)(((size_t)(112) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__1_value),((lean_object*)(((size_t)(112) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(19) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(30) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__3_value),((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__4_value),((lean_object*)(((size_t)(30) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_isCoeDecl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isCoeDecl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__4;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__5;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__6;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__7_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__8 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__8_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__9 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__9_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__10;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__11 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__11_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__12;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__13;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__14 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__14_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__14_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__15_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__16;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__17_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__18;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__19 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__19_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__20;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__21 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__21_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__22 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__22_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__23 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__23_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__24 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__24_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_expandCoe___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_expandCoe___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__0_value;
static const lean_string_object l_Lean_Meta_expandCoe___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Coe"};
static const lean_object* l_Lean_Meta_expandCoe___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__1_value;
static const lean_string_object l_Lean_Meta_expandCoe___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "coe"};
static const lean_object* l_Lean_Meta_expandCoe___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__2_value;
static const lean_ctor_object l_Lean_Meta_expandCoe___lam__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(215, 70, 184, 182, 52, 50, 221, 222)}};
static const lean_ctor_object l_Lean_Meta_expandCoe___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(62, 91, 161, 101, 251, 53, 131, 233)}};
static const lean_object* l_Lean_Meta_expandCoe___lam__1___closed__3 = (const lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__18___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__18___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15_spec__21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__18___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__27_spec__29_spec__30___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__27_spec__29___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__27___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__26___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__26___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__28___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___closed__0_value;
static const lean_array_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__0;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__1;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_expandCoe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_expandCoe___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_expandCoe___closed__0 = (const lean_object*)&l_Lean_Meta_expandCoe___closed__0_value;
static const lean_closure_object l_Lean_Meta_expandCoe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_expandCoe___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_expandCoe___closed__1 = (const lean_object*)&l_Lean_Meta_expandCoe___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__18(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__26(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__26___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__28(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__27_spec__29(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__27_spec__29_spec__30(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "autoLift"};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(168, 70, 99, 132, 14, 255, 243, 87)}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "Insert monadic lifts (i.e., `liftM` and coercions) when needed."};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(197, 184, 93, 140, 214, 99, 153, 189)}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_autoLift;
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "CoeT"};
static const lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(144, 0, 82, 253, 29, 221, 45, 84)}};
static const lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__1_value;
static const lean_ctor_object l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(144, 0, 82, 253, 29, 221, 45, 84)}};
static const lean_ctor_object l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(21, 80, 89, 153, 124, 3, 255, 77)}};
static const lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__2 = (const lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__2_value;
static const lean_string_object l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Could not coerce"};
static const lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__3 = (const lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__3_value;
static lean_once_cell_t l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__4;
static const lean_string_object l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\nto"};
static const lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__5 = (const lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__5_value;
static lean_once_cell_t l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__6;
static const lean_string_object l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "\ncoerced expression has wrong type:"};
static const lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__7 = (const lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__7_value;
static lean_once_cell_t l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimple_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimple_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_coerceToFunction_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "CoeFun"};
static const lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Meta_coerceToFunction_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(224, 121, 249, 91, 203, 193, 161, 225)}};
static const lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__1_value;
static const lean_ctor_object l_Lean_Meta_coerceToFunction_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(224, 121, 249, 91, 203, 193, 161, 225)}};
static const lean_ctor_object l_Lean_Meta_coerceToFunction_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(69, 94, 101, 78, 118, 25, 69, 111)}};
static const lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__2 = (const lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__2_value;
static const lean_string_object l_Lean_Meta_coerceToFunction_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Failed to coerce"};
static const lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__3 = (const lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__3_value;
static lean_once_cell_t l_Lean_Meta_coerceToFunction_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__4;
static const lean_string_object l_Lean_Meta_coerceToFunction_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 76, .m_capacity = 76, .m_length = 75, .m_data = "\nto a function: After applying `CoeFun.coe`, result is still not a function"};
static const lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__5 = (const lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__5_value;
static lean_once_cell_t l_Lean_Meta_coerceToFunction_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__6;
static const lean_string_object l_Lean_Meta_coerceToFunction_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 79, .m_data = "This is often due to incorrect `CoeFun` instances; the synthesized instance was"};
static const lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__7 = (const lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__7_value;
static lean_once_cell_t l_Lean_Meta_coerceToFunction_x3f___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToFunction_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToFunction_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_coerceToSort_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "CoeSort"};
static const lean_object* l_Lean_Meta_coerceToSort_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Meta_coerceToSort_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 41, 56, 145, 201, 10, 66, 222)}};
static const lean_object* l_Lean_Meta_coerceToSort_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__1_value;
static const lean_ctor_object l_Lean_Meta_coerceToSort_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 41, 56, 145, 201, 10, 66, 222)}};
static const lean_ctor_object l_Lean_Meta_coerceToSort_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(249, 65, 70, 162, 243, 253, 64, 246)}};
static const lean_object* l_Lean_Meta_coerceToSort_x3f___closed__2 = (const lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__2_value;
static const lean_string_object l_Lean_Meta_coerceToSort_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "\nto a type: After applying `CoeSort.coe`, result is still not a type"};
static const lean_object* l_Lean_Meta_coerceToSort_x3f___closed__3 = (const lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__3_value;
static lean_once_cell_t l_Lean_Meta_coerceToSort_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceToSort_x3f___closed__4;
static const lean_string_object l_Lean_Meta_coerceToSort_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 81, .m_capacity = 81, .m_length = 80, .m_data = "This is often due to incorrect `CoeSort` instances; the synthesized instance was"};
static const lean_object* l_Lean_Meta_coerceToSort_x3f___closed__5 = (const lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__5_value;
static lean_once_cell_t l_Lean_Meta_coerceToSort_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceToSort_x3f___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToSort_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToSort_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeApp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMonadApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMonadApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_coerceMonadLift_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_coerceMonadLift_x3f_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_coerceMonadLift_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "MonadLiftT"};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(236, 247, 249, 204, 219, 215, 23, 105)}};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__1_value;
static const lean_string_object l_Lean_Meta_coerceMonadLift_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "liftM"};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__2 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__2_value;
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(102, 61, 106, 101, 51, 7, 16, 91)}};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__3 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__3_value;
static const lean_string_object l_Lean_Meta_coerceMonadLift_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__4 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__4_value;
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__4_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__5 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__5_value;
static lean_once_cell_t l_Lean_Meta_coerceMonadLift_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__6;
static const lean_string_object l_Lean_Meta_coerceMonadLift_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Internal"};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__7 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__7_value;
static const lean_string_object l_Lean_Meta_coerceMonadLift_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "liftCoeM"};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__8 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__8_value;
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__9_value_aux_0),((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__7_value),LEAN_SCALAR_PTR_LITERAL(71, 59, 146, 186, 152, 132, 76, 197)}};
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__9_value_aux_1),((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__8_value),LEAN_SCALAR_PTR_LITERAL(59, 34, 101, 209, 97, 81, 138, 47)}};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__9 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__9_value;
static const lean_string_object l_Lean_Meta_coerceMonadLift_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "coeM"};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__10 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__10_value;
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__11_value_aux_0),((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__7_value),LEAN_SCALAR_PTR_LITERAL(71, 59, 146, 186, 152, 132, 76, 197)}};
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__11_value_aux_1),((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__10_value),LEAN_SCALAR_PTR_LITERAL(21, 111, 129, 2, 187, 243, 141, 114)}};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__11 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceCollectingNames_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceCollectingNames_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerce_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerce_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_(lean_object* v_x_1_, lean_object* v___y_2_, lean_object* v___y_3_){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_box(0);
v___x_6_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2____boxed(lean_object* v_x_7_, lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_(v_x_7_, v___y_8_, v___y_9_);
lean_dec(v___y_9_);
lean_dec_ref(v___y_8_);
lean_dec(v_x_7_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; uint8_t v___x_29_; lean_object* v___x_30_; uint8_t v___x_31_; lean_object* v___x_32_; 
v___f_25_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_));
v___x_26_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_));
v___x_27_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_));
v___x_28_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_));
v___x_29_ = 0;
v___x_30_ = lean_box(2);
v___x_31_ = 0;
v___x_32_ = l_Lean_registerTagAttribute(v___x_26_, v___x_27_, v___f_25_, v___x_28_, v___x_29_, v___x_30_, v___x_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2____boxed(lean_object* v_a_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_();
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1(){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_37_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_));
v___x_38_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1___closed__0));
v___x_39_ = l_Lean_addBuiltinDocString(v___x_37_, v___x_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1___boxed(lean_object* v_a_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1();
return v_res_41_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3(){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_68_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_));
v___x_69_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__6));
v___x_70_ = l_Lean_addBuiltinDeclarationRanges(v___x_68_, v___x_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___boxed(lean_object* v_a_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3();
return v_res_72_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_isCoeDecl(lean_object* v_env_73_, lean_object* v_declName_74_){
_start:
{
lean_object* v___x_75_; uint8_t v___x_76_; 
v___x_75_ = l_Lean_Meta_coeDeclAttr;
v___x_76_ = l_Lean_TagAttribute_hasTag(v___x_75_, v_env_73_, v_declName_74_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isCoeDecl___boxed(lean_object* v_env_77_, lean_object* v_declName_78_){
_start:
{
uint8_t v_res_79_; lean_object* v_r_80_; 
v_res_79_ = l_Lean_Meta_isCoeDecl(v_env_77_, v_declName_78_);
v_r_80_ = lean_box(v_res_79_);
return v_r_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg(lean_object* v_declName_81_, lean_object* v___y_82_){
_start:
{
lean_object* v___x_84_; lean_object* v_env_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_84_ = lean_st_ref_get(v___y_82_);
v_env_85_ = lean_ctor_get(v___x_84_, 0);
lean_inc_ref(v_env_85_);
lean_dec(v___x_84_);
v___x_86_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_env_85_, v_declName_81_);
v___x_87_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_87_, 0, v___x_86_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg___boxed(lean_object* v_declName_88_, lean_object* v___y_89_, lean_object* v___y_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg(v_declName_88_, v___y_89_);
lean_dec(v___y_89_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0(lean_object* v_declName_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg(v_declName_92_, v___y_96_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___boxed(lean_object* v_declName_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_){
_start:
{
lean_object* v_res_105_; 
v_res_105_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0(v_declName_99_, v___y_100_, v___y_101_, v___y_102_, v___y_103_);
lean_dec(v___y_103_);
lean_dec_ref(v___y_102_);
lean_dec(v___y_101_);
lean_dec_ref(v___y_100_);
return v_res_105_;
}
}
static lean_object* _init_l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0(void){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_106_ = lean_box(0);
v___x_107_ = l_Lean_Expr_sort___override(v___x_106_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget(lean_object* v_e_108_, lean_object* v_nm_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_){
_start:
{
lean_object* v___x_115_; 
lean_inc(v_nm_109_);
v___x_115_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg(v_nm_109_, v_a_113_);
if (lean_obj_tag(v___x_115_) == 0)
{
lean_object* v_a_116_; lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_138_; 
v_a_116_ = lean_ctor_get(v___x_115_, 0);
v_isSharedCheck_138_ = !lean_is_exclusive(v___x_115_);
if (v_isSharedCheck_138_ == 0)
{
v___x_118_ = v___x_115_;
v_isShared_119_ = v_isSharedCheck_138_;
goto v_resetjp_117_;
}
else
{
lean_inc(v_a_116_);
lean_dec(v___x_115_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_138_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
if (lean_obj_tag(v_a_116_) == 1)
{
lean_object* v_val_120_; lean_object* v_numParams_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; uint8_t v___x_129_; 
v_val_120_ = lean_ctor_get(v_a_116_, 0);
lean_inc(v_val_120_);
lean_dec_ref_known(v_a_116_, 1);
v_numParams_121_ = lean_ctor_get(v_val_120_, 1);
lean_inc(v_numParams_121_);
lean_dec(v_val_120_);
v___x_122_ = lean_obj_once(&l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0, &l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0_once, _init_l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0);
v___x_123_ = l_Lean_Expr_getAppNumArgs(v_e_108_);
v___x_124_ = lean_nat_sub(v___x_123_, v_numParams_121_);
lean_dec(v_numParams_121_);
lean_dec(v___x_123_);
v___x_125_ = lean_unsigned_to_nat(1u);
v___x_126_ = lean_nat_sub(v___x_124_, v___x_125_);
lean_dec(v___x_124_);
v___x_127_ = l_Lean_Expr_getRevArgD(v_e_108_, v___x_126_, v___x_122_);
lean_dec_ref(v_e_108_);
v___x_128_ = l_Lean_Expr_getAppFn(v___x_127_);
v___x_129_ = l_Lean_Expr_isConst(v___x_128_);
if (v___x_129_ == 0)
{
lean_object* v___x_131_; 
lean_dec_ref(v___x_128_);
lean_dec_ref(v___x_127_);
if (v_isShared_119_ == 0)
{
lean_ctor_set(v___x_118_, 0, v_nm_109_);
v___x_131_ = v___x_118_;
goto v_reusejp_130_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v_nm_109_);
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
lean_del_object(v___x_118_);
lean_dec(v_nm_109_);
v___x_133_ = l_Lean_Expr_constName_x21(v___x_128_);
lean_dec_ref(v___x_128_);
v_e_108_ = v___x_127_;
v_nm_109_ = v___x_133_;
goto _start;
}
}
else
{
lean_object* v___x_136_; 
lean_dec(v_a_116_);
lean_dec_ref(v_e_108_);
if (v_isShared_119_ == 0)
{
lean_ctor_set(v___x_118_, 0, v_nm_109_);
v___x_136_ = v___x_118_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v_nm_109_);
v___x_136_ = v_reuseFailAlloc_137_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
return v___x_136_;
}
}
}
}
else
{
lean_object* v_a_139_; lean_object* v___x_141_; uint8_t v_isShared_142_; uint8_t v_isSharedCheck_146_; 
lean_dec(v_nm_109_);
lean_dec_ref(v_e_108_);
v_a_139_ = lean_ctor_get(v___x_115_, 0);
v_isSharedCheck_146_ = !lean_is_exclusive(v___x_115_);
if (v_isSharedCheck_146_ == 0)
{
v___x_141_ = v___x_115_;
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
else
{
lean_inc(v_a_139_);
lean_dec(v___x_115_);
v___x_141_ = lean_box(0);
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
v_resetjp_140_:
{
lean_object* v___x_144_; 
if (v_isShared_142_ == 0)
{
v___x_144_ = v___x_141_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v_a_139_);
v___x_144_ = v_reuseFailAlloc_145_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
return v___x_144_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___boxed(lean_object* v_e_147_, lean_object* v_nm_148_, lean_object* v_a_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_, lean_object* v_a_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget(v_e_147_, v_nm_148_, v_a_149_, v_a_150_, v_a_151_, v_a_152_);
lean_dec(v_a_152_);
lean_dec_ref(v_a_151_);
lean_dec(v_a_150_);
lean_dec_ref(v_a_149_);
return v_res_154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__0(lean_object* v_e_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_162_, 0, v_e_155_);
v___x_163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_163_, 0, v___x_162_);
lean_ctor_set(v___x_163_, 1, v___y_156_);
v___x_164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_164_, 0, v___x_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__0___boxed(lean_object* v_e_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l_Lean_Meta_expandCoe___lam__0(v_e_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_, v___y_170_);
lean_dec(v___y_170_);
lean_dec_ref(v___y_169_);
lean_dec(v___y_168_);
lean_dec_ref(v___y_167_);
return v_res_172_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___lam__0(lean_object* v_addEntryFn_173_, lean_object* v_entry_174_, lean_object* v_s_175_){
_start:
{
lean_object* v_importedEntries_176_; lean_object* v_state_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_185_; 
v_importedEntries_176_ = lean_ctor_get(v_s_175_, 0);
v_state_177_ = lean_ctor_get(v_s_175_, 1);
v_isSharedCheck_185_ = !lean_is_exclusive(v_s_175_);
if (v_isSharedCheck_185_ == 0)
{
v___x_179_ = v_s_175_;
v_isShared_180_ = v_isSharedCheck_185_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_state_177_);
lean_inc(v_importedEntries_176_);
lean_dec(v_s_175_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_185_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v_state_181_; lean_object* v___x_183_; 
v_state_181_ = lean_apply_2(v_addEntryFn_173_, v_state_177_, v_entry_174_);
if (v_isShared_180_ == 0)
{
lean_ctor_set(v___x_179_, 1, v_state_181_);
v___x_183_ = v___x_179_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v_importedEntries_176_);
lean_ctor_set(v_reuseFailAlloc_184_, 1, v_state_181_);
v___x_183_ = v_reuseFailAlloc_184_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
return v___x_183_;
}
}
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_186_; 
v___x_186_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_186_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_187_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg___closed__0);
v___x_188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_188_, 0, v___x_187_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg(){
_start:
{
lean_object* v___x_190_; 
v___x_190_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg___closed__1);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v___dummy_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg();
return v_res_192_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5_spec__9___redArg(lean_object* v_keys_193_, lean_object* v_i_194_, lean_object* v_k_195_){
_start:
{
lean_object* v___x_196_; uint8_t v___x_197_; 
v___x_196_ = lean_array_get_size(v_keys_193_);
v___x_197_ = lean_nat_dec_lt(v_i_194_, v___x_196_);
if (v___x_197_ == 0)
{
lean_dec(v_i_194_);
return v___x_197_;
}
else
{
lean_object* v_k_x27_198_; uint8_t v___x_199_; 
v_k_x27_198_ = lean_array_fget_borrowed(v_keys_193_, v_i_194_);
v___x_199_ = l_Lean_instBEqExtraModUse_beq(v_k_195_, v_k_x27_198_);
if (v___x_199_ == 0)
{
lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_200_ = lean_unsigned_to_nat(1u);
v___x_201_ = lean_nat_add(v_i_194_, v___x_200_);
lean_dec(v_i_194_);
v_i_194_ = v___x_201_;
goto _start;
}
else
{
lean_dec(v_i_194_);
return v___x_197_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5_spec__9___redArg___boxed(lean_object* v_keys_203_, lean_object* v_i_204_, lean_object* v_k_205_){
_start:
{
uint8_t v_res_206_; lean_object* v_r_207_; 
v_res_206_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5_spec__9___redArg(v_keys_203_, v_i_204_, v_k_205_);
lean_dec_ref(v_k_205_);
lean_dec_ref(v_keys_203_);
v_r_207_ = lean_box(v_res_206_);
return v_r_207_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5___redArg(lean_object* v_x_208_, size_t v_x_209_, lean_object* v_x_210_){
_start:
{
if (lean_obj_tag(v_x_208_) == 0)
{
lean_object* v_es_211_; lean_object* v___x_212_; size_t v___x_213_; size_t v___x_214_; lean_object* v_j_215_; lean_object* v___x_216_; 
v_es_211_ = lean_ctor_get(v_x_208_, 0);
v___x_212_ = lean_box(2);
v___x_213_ = ((size_t)31ULL);
v___x_214_ = lean_usize_land(v_x_209_, v___x_213_);
v_j_215_ = lean_usize_to_nat(v___x_214_);
v___x_216_ = lean_array_get_borrowed(v___x_212_, v_es_211_, v_j_215_);
lean_dec(v_j_215_);
switch(lean_obj_tag(v___x_216_))
{
case 0:
{
lean_object* v_key_217_; uint8_t v___x_218_; 
v_key_217_ = lean_ctor_get(v___x_216_, 0);
v___x_218_ = l_Lean_instBEqExtraModUse_beq(v_x_210_, v_key_217_);
return v___x_218_;
}
case 1:
{
lean_object* v_node_219_; size_t v___x_220_; size_t v___x_221_; 
v_node_219_ = lean_ctor_get(v___x_216_, 0);
v___x_220_ = ((size_t)5ULL);
v___x_221_ = lean_usize_shift_right(v_x_209_, v___x_220_);
v_x_208_ = v_node_219_;
v_x_209_ = v___x_221_;
goto _start;
}
default: 
{
uint8_t v___x_223_; 
v___x_223_ = 0;
return v___x_223_;
}
}
}
else
{
lean_object* v_ks_224_; lean_object* v___x_225_; uint8_t v___x_226_; 
v_ks_224_ = lean_ctor_get(v_x_208_, 0);
v___x_225_ = lean_unsigned_to_nat(0u);
v___x_226_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5_spec__9___redArg(v_ks_224_, v___x_225_, v_x_210_);
return v___x_226_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_x_227_, lean_object* v_x_228_, lean_object* v_x_229_){
_start:
{
size_t v_x_36765__boxed_230_; uint8_t v_res_231_; lean_object* v_r_232_; 
v_x_36765__boxed_230_ = lean_unbox_usize(v_x_228_);
lean_dec(v_x_228_);
v_res_231_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5___redArg(v_x_227_, v_x_36765__boxed_230_, v_x_229_);
lean_dec_ref(v_x_229_);
lean_dec_ref(v_x_227_);
v_r_232_ = lean_box(v_res_231_);
return v_r_232_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___redArg(lean_object* v_x_233_, lean_object* v_x_234_){
_start:
{
uint64_t v___x_235_; size_t v___x_236_; uint8_t v___x_237_; 
v___x_235_ = l_Lean_instHashableExtraModUse_hash(v_x_234_);
v___x_236_ = lean_uint64_to_usize(v___x_235_);
v___x_237_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5___redArg(v_x_233_, v___x_236_, v_x_234_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_x_238_, lean_object* v_x_239_){
_start:
{
uint8_t v_res_240_; lean_object* v_r_241_; 
v_res_240_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___redArg(v_x_238_, v_x_239_);
lean_dec_ref(v_x_239_);
lean_dec_ref(v_x_238_);
v_r_241_ = lean_box(v_res_240_);
return v_r_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3_spec__7(lean_object* v_msgData_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_){
_start:
{
lean_object* v___x_248_; lean_object* v_env_249_; uint8_t v___x_250_; lean_object* v_env_251_; lean_object* v___x_252_; lean_object* v_toCold_253_; lean_object* v_mctx_254_; lean_object* v_lctx_255_; lean_object* v_options_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_248_ = lean_st_ref_get(v___y_246_);
v_env_249_ = lean_ctor_get(v___x_248_, 0);
lean_inc_ref(v_env_249_);
lean_dec(v___x_248_);
v___x_250_ = 0;
v_env_251_ = l_Lean_Environment_setRecordingDeps(v_env_249_, v___x_250_);
v___x_252_ = lean_st_ref_get(v___y_244_);
v_toCold_253_ = lean_ctor_get(v___y_245_, 0);
v_mctx_254_ = lean_ctor_get(v___x_252_, 0);
lean_inc_ref(v_mctx_254_);
lean_dec(v___x_252_);
v_lctx_255_ = lean_ctor_get(v___y_243_, 2);
v_options_256_ = lean_ctor_get(v_toCold_253_, 2);
lean_inc_ref(v_options_256_);
lean_inc_ref(v_lctx_255_);
v___x_257_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_257_, 0, v_env_251_);
lean_ctor_set(v___x_257_, 1, v_mctx_254_);
lean_ctor_set(v___x_257_, 2, v_lctx_255_);
lean_ctor_set(v___x_257_, 3, v_options_256_);
v___x_258_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_258_, 0, v___x_257_);
lean_ctor_set(v___x_258_, 1, v_msgData_242_);
v___x_259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_259_, 0, v___x_258_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3_spec__7___boxed(lean_object* v_msgData_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3_spec__7(v_msgData_260_, v___y_261_, v___y_262_, v___y_263_, v___y_264_);
lean_dec(v___y_264_);
lean_dec_ref(v___y_263_);
lean_dec(v___y_262_);
lean_dec_ref(v___y_261_);
return v_res_266_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___closed__0(void){
_start:
{
lean_object* v___x_267_; double v___x_268_; 
v___x_267_ = lean_unsigned_to_nat(0u);
v___x_268_ = lean_float_of_nat(v___x_267_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3(lean_object* v_cls_272_, lean_object* v_msg_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_){
_start:
{
lean_object* v_ref_280_; lean_object* v___x_281_; lean_object* v_a_282_; lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_328_; 
v_ref_280_ = lean_ctor_get(v___y_277_, 2);
v___x_281_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3_spec__7(v_msg_273_, v___y_275_, v___y_276_, v___y_277_, v___y_278_);
v_a_282_ = lean_ctor_get(v___x_281_, 0);
v_isSharedCheck_328_ = !lean_is_exclusive(v___x_281_);
if (v_isSharedCheck_328_ == 0)
{
v___x_284_ = v___x_281_;
v_isShared_285_ = v_isSharedCheck_328_;
goto v_resetjp_283_;
}
else
{
lean_inc(v_a_282_);
lean_dec(v___x_281_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_328_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
lean_object* v___x_286_; lean_object* v_traceState_287_; lean_object* v_env_288_; lean_object* v_nextMacroScope_289_; lean_object* v_ngen_290_; lean_object* v_auxDeclNGen_291_; lean_object* v_cache_292_; lean_object* v_recordedDeps_293_; lean_object* v_messages_294_; lean_object* v_infoState_295_; lean_object* v_snapshotTasks_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_327_; 
v___x_286_ = lean_st_ref_take(v___y_278_);
v_traceState_287_ = lean_ctor_get(v___x_286_, 4);
v_env_288_ = lean_ctor_get(v___x_286_, 0);
v_nextMacroScope_289_ = lean_ctor_get(v___x_286_, 1);
v_ngen_290_ = lean_ctor_get(v___x_286_, 2);
v_auxDeclNGen_291_ = lean_ctor_get(v___x_286_, 3);
v_cache_292_ = lean_ctor_get(v___x_286_, 5);
v_recordedDeps_293_ = lean_ctor_get(v___x_286_, 6);
v_messages_294_ = lean_ctor_get(v___x_286_, 7);
v_infoState_295_ = lean_ctor_get(v___x_286_, 8);
v_snapshotTasks_296_ = lean_ctor_get(v___x_286_, 9);
v_isSharedCheck_327_ = !lean_is_exclusive(v___x_286_);
if (v_isSharedCheck_327_ == 0)
{
v___x_298_ = v___x_286_;
v_isShared_299_ = v_isSharedCheck_327_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_snapshotTasks_296_);
lean_inc(v_infoState_295_);
lean_inc(v_messages_294_);
lean_inc(v_recordedDeps_293_);
lean_inc(v_cache_292_);
lean_inc(v_traceState_287_);
lean_inc(v_auxDeclNGen_291_);
lean_inc(v_ngen_290_);
lean_inc(v_nextMacroScope_289_);
lean_inc(v_env_288_);
lean_dec(v___x_286_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_327_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
uint64_t v_tid_300_; lean_object* v_traces_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_326_; 
v_tid_300_ = lean_ctor_get_uint64(v_traceState_287_, sizeof(void*)*1);
v_traces_301_ = lean_ctor_get(v_traceState_287_, 0);
v_isSharedCheck_326_ = !lean_is_exclusive(v_traceState_287_);
if (v_isSharedCheck_326_ == 0)
{
v___x_303_ = v_traceState_287_;
v_isShared_304_ = v_isSharedCheck_326_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_traces_301_);
lean_dec(v_traceState_287_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_326_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v___x_305_; lean_object* v___x_306_; double v___x_307_; uint8_t v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_316_; 
v___x_305_ = lean_box(0);
v___x_306_ = lean_box(0);
v___x_307_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___closed__0, &l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___closed__0);
v___x_308_ = 0;
v___x_309_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___closed__1));
v___x_310_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_310_, 0, v_cls_272_);
lean_ctor_set(v___x_310_, 1, v___x_306_);
lean_ctor_set(v___x_310_, 2, v___x_309_);
lean_ctor_set_float(v___x_310_, sizeof(void*)*3, v___x_307_);
lean_ctor_set_float(v___x_310_, sizeof(void*)*3 + 8, v___x_307_);
lean_ctor_set_uint8(v___x_310_, sizeof(void*)*3 + 16, v___x_308_);
v___x_311_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___closed__2));
v___x_312_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_312_, 0, v___x_310_);
lean_ctor_set(v___x_312_, 1, v_a_282_);
lean_ctor_set(v___x_312_, 2, v___x_311_);
lean_inc(v_ref_280_);
v___x_313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_313_, 0, v_ref_280_);
lean_ctor_set(v___x_313_, 1, v___x_312_);
v___x_314_ = l_Lean_PersistentArray_push___redArg(v_traces_301_, v___x_313_);
if (v_isShared_304_ == 0)
{
lean_ctor_set(v___x_303_, 0, v___x_314_);
v___x_316_ = v___x_303_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v___x_314_);
lean_ctor_set_uint64(v_reuseFailAlloc_325_, sizeof(void*)*1, v_tid_300_);
v___x_316_ = v_reuseFailAlloc_325_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
lean_object* v___x_318_; 
if (v_isShared_299_ == 0)
{
lean_ctor_set(v___x_298_, 4, v___x_316_);
v___x_318_ = v___x_298_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v_env_288_);
lean_ctor_set(v_reuseFailAlloc_324_, 1, v_nextMacroScope_289_);
lean_ctor_set(v_reuseFailAlloc_324_, 2, v_ngen_290_);
lean_ctor_set(v_reuseFailAlloc_324_, 3, v_auxDeclNGen_291_);
lean_ctor_set(v_reuseFailAlloc_324_, 4, v___x_316_);
lean_ctor_set(v_reuseFailAlloc_324_, 5, v_cache_292_);
lean_ctor_set(v_reuseFailAlloc_324_, 6, v_recordedDeps_293_);
lean_ctor_set(v_reuseFailAlloc_324_, 7, v_messages_294_);
lean_ctor_set(v_reuseFailAlloc_324_, 8, v_infoState_295_);
lean_ctor_set(v_reuseFailAlloc_324_, 9, v_snapshotTasks_296_);
v___x_318_ = v_reuseFailAlloc_324_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_322_; 
v___x_319_ = lean_st_ref_put(v___y_278_, v___x_318_);
v___x_320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_320_, 0, v___x_305_);
lean_ctor_set(v___x_320_, 1, v___y_274_);
if (v_isShared_285_ == 0)
{
lean_ctor_set(v___x_284_, 0, v___x_320_);
v___x_322_ = v___x_284_;
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
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___boxed(lean_object* v_cls_329_, lean_object* v_msg_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3(v_cls_329_, v_msg_330_, v___y_331_, v___y_332_, v___y_333_, v___y_334_, v___y_335_);
lean_dec(v___y_335_);
lean_dec_ref(v___y_334_);
lean_dec(v___y_333_);
lean_dec_ref(v___y_332_);
return v_res_337_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_338_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg___closed__0);
v___x_339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_339_, 0, v___x_338_);
return v___x_339_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_340_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0);
v___x_341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_341_, 0, v___x_340_);
lean_ctor_set(v___x_341_, 1, v___x_340_);
return v___x_341_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_342_; 
v___x_342_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg();
return v___x_342_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_343_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0);
v___x_344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_344_, 0, v___x_343_);
lean_ctor_set(v___x_344_, 1, v___x_343_);
return v___x_344_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_345_ = lean_unsigned_to_nat(0u);
v___x_346_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0);
v___x_347_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_347_, 0, v___x_346_);
lean_ctor_set(v___x_347_, 1, v___x_346_);
lean_ctor_set(v___x_347_, 2, v___x_345_);
return v___x_347_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_348_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__4);
v___x_349_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3);
v___x_350_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0);
v___x_351_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2);
v___x_352_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_352_, 0, v___x_351_);
lean_ctor_set(v___x_352_, 1, v___x_350_);
lean_ctor_set(v___x_352_, 2, v___x_349_);
lean_ctor_set(v___x_352_, 3, v___x_350_);
lean_ctor_set(v___x_352_, 4, v___x_350_);
lean_ctor_set(v___x_352_, 5, v___x_350_);
lean_ctor_set(v___x_352_, 6, v___x_350_);
lean_ctor_set(v___x_352_, 7, v___x_348_);
return v___x_352_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__6(void){
_start:
{
lean_object* v___x_353_; 
v___x_353_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_353_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__10(void){
_start:
{
lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_358_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__9));
v___x_359_ = l_Lean_stringToMessageData(v___x_358_);
return v___x_359_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__12(void){
_start:
{
lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_361_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__11));
v___x_362_ = l_Lean_stringToMessageData(v___x_361_);
return v___x_362_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__13(void){
_start:
{
lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_363_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3___closed__1));
v___x_364_ = l_Lean_stringToMessageData(v___x_363_);
return v___x_364_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__16(void){
_start:
{
lean_object* v_cls_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v_cls_368_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__8));
v___x_369_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__15));
v___x_370_ = l_Lean_Name_append(v___x_369_, v_cls_368_);
return v___x_370_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__18(void){
_start:
{
lean_object* v___x_372_; lean_object* v___x_373_; 
v___x_372_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__17));
v___x_373_ = l_Lean_stringToMessageData(v___x_372_);
return v___x_373_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__20(void){
_start:
{
lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_375_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__19));
v___x_376_ = l_Lean_stringToMessageData(v___x_375_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0(lean_object* v_mod_381_, uint8_t v_isMeta_382_, lean_object* v_hint_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_){
_start:
{
lean_object* v___y_391_; lean_object* v___y_392_; lean_object* v___y_393_; lean_object* v___y_394_; lean_object* v___y_395_; lean_object* v___y_396_; lean_object* v___y_397_; lean_object* v___y_398_; lean_object* v___y_399_; lean_object* v___y_400_; lean_object* v___y_401_; lean_object* v___y_402_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v_env_426_; uint8_t v_isExporting_427_; lean_object* v_entry_428_; lean_object* v___y_430_; lean_object* v___y_431_; lean_object* v___y_432_; lean_object* v___x_454_; lean_object* v_env_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; uint8_t v___x_460_; 
v___x_424_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__6);
v___x_425_ = lean_st_ref_get(v___y_388_);
v_env_426_ = lean_ctor_get(v___x_425_, 0);
lean_inc_ref(v_env_426_);
lean_dec(v___x_425_);
v_isExporting_427_ = lean_ctor_get_uint8(v_env_426_, sizeof(void*)*13);
lean_dec_ref(v_env_426_);
lean_inc(v_mod_381_);
v_entry_428_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_428_, 0, v_mod_381_);
lean_ctor_set_uint8(v_entry_428_, sizeof(void*)*1, v_isExporting_427_);
lean_ctor_set_uint8(v_entry_428_, sizeof(void*)*1 + 1, v_isMeta_382_);
v___x_454_ = lean_st_ref_get(v___y_388_);
v_env_455_ = lean_ctor_get(v___x_454_, 0);
lean_inc_ref(v_env_455_);
lean_dec(v___x_454_);
v___x_456_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_457_ = lean_box(1);
v___x_458_ = lean_box(0);
v___x_459_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_424_, v___x_456_, v_env_455_, v___x_457_, v___x_458_);
v___x_460_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___redArg(v___x_459_, v_entry_428_);
lean_dec(v___x_459_);
if (v___x_460_ == 0)
{
lean_object* v_toCold_461_; lean_object* v_options_462_; uint8_t v_hasTrace_463_; 
v_toCold_461_ = lean_ctor_get(v___y_387_, 0);
v_options_462_ = lean_ctor_get(v_toCold_461_, 2);
v_hasTrace_463_ = lean_ctor_get_uint8(v_options_462_, sizeof(void*)*1);
if (v_hasTrace_463_ == 0)
{
lean_dec(v_hint_383_);
lean_dec(v_mod_381_);
v___y_430_ = v___y_384_;
v___y_431_ = v___y_386_;
v___y_432_ = v___y_388_;
goto v___jp_429_;
}
else
{
lean_object* v_inheritedTraceOptions_464_; lean_object* v_cls_465_; lean_object* v___y_467_; lean_object* v___y_468_; lean_object* v___y_474_; lean_object* v___y_475_; lean_object* v___x_487_; uint8_t v___x_488_; 
v_inheritedTraceOptions_464_ = lean_ctor_get(v_toCold_461_, 11);
v_cls_465_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__8));
v___x_487_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__16, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__16_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__16);
v___x_488_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_464_, v_options_462_, v___x_487_);
if (v___x_488_ == 0)
{
lean_dec(v_hint_383_);
lean_dec(v_mod_381_);
v___y_430_ = v___y_384_;
v___y_431_ = v___y_386_;
v___y_432_ = v___y_388_;
goto v___jp_429_;
}
else
{
lean_object* v___x_489_; lean_object* v___y_491_; 
v___x_489_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__18, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__18_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__18);
if (v_isExporting_427_ == 0)
{
lean_object* v___x_498_; 
v___x_498_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__23));
v___y_491_ = v___x_498_;
goto v___jp_490_;
}
else
{
lean_object* v___x_499_; 
v___x_499_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__24));
v___y_491_ = v___x_499_;
goto v___jp_490_;
}
v___jp_490_:
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
lean_inc_ref(v___y_491_);
v___x_492_ = l_Lean_stringToMessageData(v___y_491_);
v___x_493_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_493_, 0, v___x_489_);
lean_ctor_set(v___x_493_, 1, v___x_492_);
v___x_494_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__20, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__20_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__20);
v___x_495_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_495_, 0, v___x_493_);
lean_ctor_set(v___x_495_, 1, v___x_494_);
if (v_isMeta_382_ == 0)
{
lean_object* v___x_496_; 
v___x_496_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__21));
v___y_474_ = v___x_495_;
v___y_475_ = v___x_496_;
goto v___jp_473_;
}
else
{
lean_object* v___x_497_; 
v___x_497_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__22));
v___y_474_ = v___x_495_;
v___y_475_ = v___x_497_;
goto v___jp_473_;
}
}
}
v___jp_466_:
{
lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_469_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_469_, 0, v___y_467_);
lean_ctor_set(v___x_469_, 1, v___y_468_);
v___x_470_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3(v_cls_465_, v___x_469_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_);
if (lean_obj_tag(v___x_470_) == 0)
{
lean_object* v_a_471_; lean_object* v_snd_472_; 
v_a_471_ = lean_ctor_get(v___x_470_, 0);
lean_inc(v_a_471_);
lean_dec_ref_known(v___x_470_, 1);
v_snd_472_ = lean_ctor_get(v_a_471_, 1);
lean_inc(v_snd_472_);
lean_dec(v_a_471_);
v___y_430_ = v_snd_472_;
v___y_431_ = v___y_386_;
v___y_432_ = v___y_388_;
goto v___jp_429_;
}
else
{
lean_dec_ref_known(v_entry_428_, 1);
return v___x_470_;
}
}
v___jp_473_:
{
lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; uint8_t v___x_482_; 
lean_inc_ref(v___y_475_);
v___x_476_ = l_Lean_stringToMessageData(v___y_475_);
v___x_477_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_477_, 0, v___y_474_);
lean_ctor_set(v___x_477_, 1, v___x_476_);
v___x_478_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__10);
v___x_479_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_479_, 0, v___x_477_);
lean_ctor_set(v___x_479_, 1, v___x_478_);
v___x_480_ = l_Lean_MessageData_ofName(v_mod_381_);
v___x_481_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_481_, 0, v___x_479_);
lean_ctor_set(v___x_481_, 1, v___x_480_);
v___x_482_ = l_Lean_Name_isAnonymous(v_hint_383_);
if (v___x_482_ == 0)
{
lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_483_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__12);
v___x_484_ = l_Lean_MessageData_ofName(v_hint_383_);
v___x_485_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_485_, 0, v___x_483_);
lean_ctor_set(v___x_485_, 1, v___x_484_);
v___y_467_ = v___x_481_;
v___y_468_ = v___x_485_;
goto v___jp_466_;
}
else
{
lean_object* v___x_486_; 
lean_dec(v_hint_383_);
v___x_486_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__13);
v___y_467_ = v___x_481_;
v___y_468_ = v___x_486_;
goto v___jp_466_;
}
}
}
}
else
{
lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
lean_dec_ref_known(v_entry_428_, 1);
lean_dec(v_hint_383_);
lean_dec(v_mod_381_);
v___x_500_ = lean_box(0);
v___x_501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_501_, 0, v___x_500_);
lean_ctor_set(v___x_501_, 1, v___y_384_);
v___x_502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_502_, 0, v___x_501_);
return v___x_502_;
}
v___jp_390_:
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v_mctx_407_; lean_object* v_zetaDeltaFVarIds_408_; lean_object* v_postponed_409_; lean_object* v_diag_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_422_; 
v___x_403_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1);
v___x_404_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_404_, 0, v___y_402_);
lean_ctor_set(v___x_404_, 1, v___y_399_);
lean_ctor_set(v___x_404_, 2, v___y_401_);
lean_ctor_set(v___x_404_, 3, v___y_400_);
lean_ctor_set(v___x_404_, 4, v___y_396_);
lean_ctor_set(v___x_404_, 5, v___x_403_);
lean_ctor_set(v___x_404_, 6, v___y_398_);
lean_ctor_set(v___x_404_, 7, v___y_391_);
lean_ctor_set(v___x_404_, 8, v___y_394_);
lean_ctor_set(v___x_404_, 9, v___y_393_);
v___x_405_ = lean_st_ref_put(v___y_392_, v___x_404_);
v___x_406_ = lean_st_ref_take(v___y_397_);
v_mctx_407_ = lean_ctor_get(v___x_406_, 0);
v_zetaDeltaFVarIds_408_ = lean_ctor_get(v___x_406_, 2);
v_postponed_409_ = lean_ctor_get(v___x_406_, 3);
v_diag_410_ = lean_ctor_get(v___x_406_, 4);
v_isSharedCheck_422_ = !lean_is_exclusive(v___x_406_);
if (v_isSharedCheck_422_ == 0)
{
lean_object* v_unused_423_; 
v_unused_423_ = lean_ctor_get(v___x_406_, 1);
lean_dec(v_unused_423_);
v___x_412_ = v___x_406_;
v_isShared_413_ = v_isSharedCheck_422_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_diag_410_);
lean_inc(v_postponed_409_);
lean_inc(v_zetaDeltaFVarIds_408_);
lean_inc(v_mctx_407_);
lean_dec(v___x_406_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_422_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_417_; 
v___x_414_ = lean_box(0);
v___x_415_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__5, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__5_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__5);
if (v_isShared_413_ == 0)
{
lean_ctor_set(v___x_412_, 1, v___x_415_);
v___x_417_ = v___x_412_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_421_; 
v_reuseFailAlloc_421_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_421_, 0, v_mctx_407_);
lean_ctor_set(v_reuseFailAlloc_421_, 1, v___x_415_);
lean_ctor_set(v_reuseFailAlloc_421_, 2, v_zetaDeltaFVarIds_408_);
lean_ctor_set(v_reuseFailAlloc_421_, 3, v_postponed_409_);
lean_ctor_set(v_reuseFailAlloc_421_, 4, v_diag_410_);
v___x_417_ = v_reuseFailAlloc_421_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_418_ = lean_st_ref_put(v___y_397_, v___x_417_);
v___x_419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_419_, 0, v___x_414_);
lean_ctor_set(v___x_419_, 1, v___y_395_);
v___x_420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_420_, 0, v___x_419_);
return v___x_420_;
}
}
}
v___jp_429_:
{
lean_object* v___x_433_; lean_object* v_env_434_; lean_object* v_nextMacroScope_435_; lean_object* v_ngen_436_; lean_object* v_auxDeclNGen_437_; lean_object* v_traceState_438_; lean_object* v_recordedDeps_439_; lean_object* v_messages_440_; lean_object* v_infoState_441_; lean_object* v_snapshotTasks_442_; lean_object* v___x_443_; lean_object* v_toEnvExtension_444_; lean_object* v_addEntryFn_445_; lean_object* v_asyncMode_446_; uint8_t v_logWrites_447_; lean_object* v___f_448_; lean_object* v___x_449_; uint8_t v___x_450_; 
v___x_433_ = lean_st_ref_take(v___y_432_);
v_env_434_ = lean_ctor_get(v___x_433_, 0);
lean_inc_ref(v_env_434_);
v_nextMacroScope_435_ = lean_ctor_get(v___x_433_, 1);
lean_inc(v_nextMacroScope_435_);
v_ngen_436_ = lean_ctor_get(v___x_433_, 2);
lean_inc_ref(v_ngen_436_);
v_auxDeclNGen_437_ = lean_ctor_get(v___x_433_, 3);
lean_inc_ref(v_auxDeclNGen_437_);
v_traceState_438_ = lean_ctor_get(v___x_433_, 4);
lean_inc_ref(v_traceState_438_);
v_recordedDeps_439_ = lean_ctor_get(v___x_433_, 6);
lean_inc_ref(v_recordedDeps_439_);
v_messages_440_ = lean_ctor_get(v___x_433_, 7);
lean_inc_ref(v_messages_440_);
v_infoState_441_ = lean_ctor_get(v___x_433_, 8);
lean_inc_ref(v_infoState_441_);
v_snapshotTasks_442_ = lean_ctor_get(v___x_433_, 9);
lean_inc_ref(v_snapshotTasks_442_);
lean_dec(v___x_433_);
v___x_443_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v_toEnvExtension_444_ = lean_ctor_get(v___x_443_, 0);
v_addEntryFn_445_ = lean_ctor_get(v___x_443_, 3);
v_asyncMode_446_ = lean_ctor_get(v_toEnvExtension_444_, 2);
v_logWrites_447_ = lean_ctor_get_uint8(v_toEnvExtension_444_, sizeof(void*)*6);
lean_inc(v_addEntryFn_445_);
v___f_448_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___lam__0), 3, 2);
lean_closure_set(v___f_448_, 0, v_addEntryFn_445_);
lean_closure_set(v___f_448_, 1, v_entry_428_);
v___x_449_ = lean_box(0);
v___x_450_ = 1;
if (v_logWrites_447_ == 0)
{
lean_object* v___x_451_; 
lean_inc_ref(v_toEnvExtension_444_);
v___x_451_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_444_, v_env_434_, v___f_448_, v_asyncMode_446_, v___x_449_, v___x_450_);
v___y_391_ = v_messages_440_;
v___y_392_ = v___y_432_;
v___y_393_ = v_snapshotTasks_442_;
v___y_394_ = v_infoState_441_;
v___y_395_ = v___y_430_;
v___y_396_ = v_traceState_438_;
v___y_397_ = v___y_431_;
v___y_398_ = v_recordedDeps_439_;
v___y_399_ = v_nextMacroScope_435_;
v___y_400_ = v_auxDeclNGen_437_;
v___y_401_ = v_ngen_436_;
v___y_402_ = v___x_451_;
goto v___jp_390_;
}
else
{
lean_object* v___x_452_; lean_object* v___x_453_; 
lean_inc_ref_n(v_toEnvExtension_444_, 2);
v___x_452_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_444_, v_env_434_);
lean_dec_ref(v_env_434_);
v___x_453_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_444_, v___x_452_, v___f_448_, v_asyncMode_446_, v___x_449_, v___x_450_);
v___y_391_ = v_messages_440_;
v___y_392_ = v___y_432_;
v___y_393_ = v_snapshotTasks_442_;
v___y_394_ = v_infoState_441_;
v___y_395_ = v___y_430_;
v___y_396_ = v_traceState_438_;
v___y_397_ = v___y_431_;
v___y_398_ = v_recordedDeps_439_;
v___y_399_ = v_nextMacroScope_435_;
v___y_400_ = v_auxDeclNGen_437_;
v___y_401_ = v_ngen_436_;
v___y_402_ = v___x_453_;
goto v___jp_390_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___boxed(lean_object* v_mod_503_, lean_object* v_isMeta_504_, lean_object* v_hint_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_){
_start:
{
uint8_t v_isMeta_boxed_512_; lean_object* v_res_513_; 
v_isMeta_boxed_512_ = lean_unbox(v_isMeta_504_);
v_res_513_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0(v_mod_503_, v_isMeta_boxed_512_, v_hint_505_, v___y_506_, v___y_507_, v___y_508_, v___y_509_, v___y_510_);
lean_dec(v___y_510_);
lean_dec_ref(v___y_509_);
lean_dec(v___y_508_);
lean_dec_ref(v___y_507_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__6___redArg(lean_object* v_a_514_, lean_object* v_x_515_){
_start:
{
if (lean_obj_tag(v_x_515_) == 0)
{
lean_object* v___x_516_; 
v___x_516_ = lean_box(0);
return v___x_516_;
}
else
{
lean_object* v_key_517_; lean_object* v_value_518_; lean_object* v_tail_519_; uint8_t v___x_520_; 
v_key_517_ = lean_ctor_get(v_x_515_, 0);
v_value_518_ = lean_ctor_get(v_x_515_, 1);
v_tail_519_ = lean_ctor_get(v_x_515_, 2);
v___x_520_ = lean_name_eq(v_key_517_, v_a_514_);
if (v___x_520_ == 0)
{
v_x_515_ = v_tail_519_;
goto _start;
}
else
{
lean_object* v___x_522_; 
lean_inc(v_value_518_);
v___x_522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_522_, 0, v_value_518_);
return v___x_522_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__6___redArg___boxed(lean_object* v_a_523_, lean_object* v_x_524_){
_start:
{
lean_object* v_res_525_; 
v_res_525_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__6___redArg(v_a_523_, v_x_524_);
lean_dec(v_x_524_);
lean_dec(v_a_523_);
return v_res_525_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg(lean_object* v_m_526_, lean_object* v_a_527_){
_start:
{
lean_object* v_buckets_528_; lean_object* v___x_529_; uint64_t v___y_531_; 
v_buckets_528_ = lean_ctor_get(v_m_526_, 1);
v___x_529_ = lean_array_get_size(v_buckets_528_);
if (lean_obj_tag(v_a_527_) == 0)
{
uint64_t v___x_545_; 
v___x_545_ = 1723ULL;
v___y_531_ = v___x_545_;
goto v___jp_530_;
}
else
{
uint64_t v_hash_546_; 
v_hash_546_ = lean_ctor_get_uint64(v_a_527_, sizeof(void*)*2);
v___y_531_ = v_hash_546_;
goto v___jp_530_;
}
v___jp_530_:
{
uint64_t v___x_532_; uint64_t v___x_533_; uint64_t v_fold_534_; uint64_t v___x_535_; uint64_t v___x_536_; uint64_t v___x_537_; size_t v___x_538_; size_t v___x_539_; size_t v___x_540_; size_t v___x_541_; size_t v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
v___x_532_ = 32ULL;
v___x_533_ = lean_uint64_shift_right(v___y_531_, v___x_532_);
v_fold_534_ = lean_uint64_xor(v___y_531_, v___x_533_);
v___x_535_ = 16ULL;
v___x_536_ = lean_uint64_shift_right(v_fold_534_, v___x_535_);
v___x_537_ = lean_uint64_xor(v_fold_534_, v___x_536_);
v___x_538_ = lean_uint64_to_usize(v___x_537_);
v___x_539_ = lean_usize_of_nat(v___x_529_);
v___x_540_ = ((size_t)1ULL);
v___x_541_ = lean_usize_sub(v___x_539_, v___x_540_);
v___x_542_ = lean_usize_land(v___x_538_, v___x_541_);
v___x_543_ = lean_array_uget_borrowed(v_buckets_528_, v___x_542_);
v___x_544_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__6___redArg(v_a_527_, v___x_543_);
return v___x_544_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg___boxed(lean_object* v_m_547_, lean_object* v_a_548_){
_start:
{
lean_object* v_res_549_; 
v_res_549_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg(v_m_547_, v_a_548_);
lean_dec(v_a_548_);
lean_dec_ref(v_m_547_);
return v_res_549_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__1(lean_object* v___x_550_, lean_object* v_declName_551_, lean_object* v_as_552_, size_t v_sz_553_, size_t v_i_554_, lean_object* v_b_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_){
_start:
{
uint8_t v___x_562_; 
v___x_562_ = lean_usize_dec_lt(v_i_554_, v_sz_553_);
if (v___x_562_ == 0)
{
lean_object* v___x_563_; lean_object* v___x_564_; 
lean_dec(v_declName_551_);
v___x_563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_563_, 0, v_b_555_);
lean_ctor_set(v___x_563_, 1, v___y_556_);
v___x_564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_564_, 0, v___x_563_);
return v___x_564_;
}
else
{
lean_object* v___x_565_; lean_object* v_modules_566_; lean_object* v___x_567_; lean_object* v_a_568_; lean_object* v___x_569_; lean_object* v_toImport_570_; lean_object* v_module_571_; lean_object* v___x_572_; uint8_t v___x_573_; lean_object* v___x_574_; 
v___x_565_ = l_Lean_Environment_header(v___x_550_);
v_modules_566_ = lean_ctor_get(v___x_565_, 3);
lean_inc_ref(v_modules_566_);
lean_dec_ref(v___x_565_);
v___x_567_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_568_ = lean_array_uget_borrowed(v_as_552_, v_i_554_);
v___x_569_ = lean_array_get(v___x_567_, v_modules_566_, v_a_568_);
lean_dec_ref(v_modules_566_);
v_toImport_570_ = lean_ctor_get(v___x_569_, 0);
lean_inc_ref(v_toImport_570_);
lean_dec(v___x_569_);
v_module_571_ = lean_ctor_get(v_toImport_570_, 0);
lean_inc(v_module_571_);
lean_dec_ref(v_toImport_570_);
v___x_572_ = lean_box(0);
v___x_573_ = 0;
lean_inc(v_declName_551_);
v___x_574_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0(v_module_571_, v___x_573_, v_declName_551_, v___y_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_);
if (lean_obj_tag(v___x_574_) == 0)
{
lean_object* v_a_575_; lean_object* v_snd_576_; size_t v___x_577_; size_t v___x_578_; 
v_a_575_ = lean_ctor_get(v___x_574_, 0);
lean_inc(v_a_575_);
lean_dec_ref_known(v___x_574_, 1);
v_snd_576_ = lean_ctor_get(v_a_575_, 1);
lean_inc(v_snd_576_);
lean_dec(v_a_575_);
v___x_577_ = ((size_t)1ULL);
v___x_578_ = lean_usize_add(v_i_554_, v___x_577_);
v_i_554_ = v___x_578_;
v_b_555_ = v___x_572_;
v___y_556_ = v_snd_576_;
goto _start;
}
else
{
lean_dec(v_declName_551_);
return v___x_574_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__1___boxed(lean_object* v___x_580_, lean_object* v_declName_581_, lean_object* v_as_582_, lean_object* v_sz_583_, lean_object* v_i_584_, lean_object* v_b_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_){
_start:
{
size_t v_sz_boxed_592_; size_t v_i_boxed_593_; lean_object* v_res_594_; 
v_sz_boxed_592_ = lean_unbox_usize(v_sz_583_);
lean_dec(v_sz_583_);
v_i_boxed_593_ = lean_unbox_usize(v_i_584_);
lean_dec(v_i_584_);
v_res_594_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__1(v___x_580_, v_declName_581_, v_as_582_, v_sz_boxed_592_, v_i_boxed_593_, v_b_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_);
lean_dec(v___y_590_);
lean_dec_ref(v___y_589_);
lean_dec(v___y_588_);
lean_dec_ref(v___y_587_);
lean_dec_ref(v_as_582_);
lean_dec_ref(v___x_580_);
return v_res_594_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__0(void){
_start:
{
lean_object* v___x_595_; 
v___x_595_ = l_Std_HashMap_instInhabited___redArg();
return v___x_595_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0(lean_object* v_declName_598_, uint8_t v_isMeta_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_){
_start:
{
lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v_env_612_; lean_object* v___y_614_; lean_object* v___y_615_; lean_object* v___x_637_; 
v___x_606_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__0);
v___x_607_ = lean_st_ref_get(v___y_604_);
v_env_612_ = lean_ctor_get(v___x_607_, 0);
lean_inc_ref(v_env_612_);
lean_dec(v___x_607_);
v___x_637_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_612_, v_declName_598_);
if (lean_obj_tag(v___x_637_) == 0)
{
lean_dec_ref(v_env_612_);
lean_dec(v_declName_598_);
goto v___jp_608_;
}
else
{
lean_object* v_val_638_; lean_object* v___x_639_; lean_object* v_modules_640_; lean_object* v___x_641_; uint8_t v___x_642_; 
v_val_638_ = lean_ctor_get(v___x_637_, 0);
lean_inc(v_val_638_);
lean_dec_ref_known(v___x_637_, 1);
v___x_639_ = l_Lean_Environment_header(v_env_612_);
v_modules_640_ = lean_ctor_get(v___x_639_, 3);
lean_inc_ref(v_modules_640_);
lean_dec_ref(v___x_639_);
v___x_641_ = lean_array_get_size(v_modules_640_);
v___x_642_ = lean_nat_dec_lt(v_val_638_, v___x_641_);
if (v___x_642_ == 0)
{
lean_dec_ref(v_modules_640_);
lean_dec(v_val_638_);
lean_dec_ref(v_env_612_);
lean_dec(v_declName_598_);
goto v___jp_608_;
}
else
{
lean_object* v___x_643_; lean_object* v___x_644_; uint8_t v___y_646_; 
v___x_643_ = lean_array_fget(v_modules_640_, v_val_638_);
lean_dec(v_val_638_);
lean_dec_ref(v_modules_640_);
v___x_644_ = lean_st_ref_get(v___y_604_);
if (v_isMeta_599_ == 0)
{
lean_dec(v___x_644_);
v___y_646_ = v_isMeta_599_;
goto v___jp_645_;
}
else
{
lean_object* v_env_659_; uint8_t v___x_660_; 
v_env_659_ = lean_ctor_get(v___x_644_, 0);
lean_inc_ref(v_env_659_);
lean_dec(v___x_644_);
lean_inc(v_declName_598_);
v___x_660_ = l_Lean_isMarkedMeta(v_env_659_, v_declName_598_);
if (v___x_660_ == 0)
{
v___y_646_ = v_isMeta_599_;
goto v___jp_645_;
}
else
{
uint8_t v___x_661_; 
v___x_661_ = 0;
v___y_646_ = v___x_661_;
goto v___jp_645_;
}
}
v___jp_645_:
{
lean_object* v_toImport_647_; lean_object* v_module_648_; lean_object* v___x_649_; 
v_toImport_647_ = lean_ctor_get(v___x_643_, 0);
lean_inc_ref(v_toImport_647_);
lean_dec(v___x_643_);
v_module_648_ = lean_ctor_get(v_toImport_647_, 0);
lean_inc(v_module_648_);
lean_dec_ref(v_toImport_647_);
lean_inc(v_declName_598_);
v___x_649_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0(v_module_648_, v___y_646_, v_declName_598_, v___y_600_, v___y_601_, v___y_602_, v___y_603_, v___y_604_);
if (lean_obj_tag(v___x_649_) == 0)
{
lean_object* v_a_650_; lean_object* v_snd_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; 
v_a_650_ = lean_ctor_get(v___x_649_, 0);
lean_inc(v_a_650_);
lean_dec_ref_known(v___x_649_, 1);
v_snd_651_ = lean_ctor_get(v_a_650_, 1);
lean_inc(v_snd_651_);
lean_dec(v_a_650_);
v___x_652_ = l_Lean_indirectModUseExt;
v___x_653_ = lean_box(1);
v___x_654_ = lean_box(0);
lean_inc_ref(v_env_612_);
v___x_655_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_606_, v___x_652_, v_env_612_, v___x_653_, v___x_654_);
v___x_656_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg(v___x_655_, v_declName_598_);
lean_dec(v___x_655_);
if (lean_obj_tag(v___x_656_) == 0)
{
lean_object* v___x_657_; 
v___x_657_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__1));
v___y_614_ = v_snd_651_;
v___y_615_ = v___x_657_;
goto v___jp_613_;
}
else
{
lean_object* v_val_658_; 
v_val_658_ = lean_ctor_get(v___x_656_, 0);
lean_inc(v_val_658_);
lean_dec_ref_known(v___x_656_, 1);
v___y_614_ = v_snd_651_;
v___y_615_ = v_val_658_;
goto v___jp_613_;
}
}
else
{
lean_dec_ref(v_env_612_);
lean_dec(v_declName_598_);
return v___x_649_;
}
}
}
}
v___jp_608_:
{
lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_609_ = lean_box(0);
v___x_610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_610_, 0, v___x_609_);
lean_ctor_set(v___x_610_, 1, v___y_600_);
v___x_611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_611_, 0, v___x_610_);
return v___x_611_;
}
v___jp_613_:
{
lean_object* v___x_616_; size_t v_sz_617_; size_t v___x_618_; lean_object* v___x_619_; 
v___x_616_ = lean_box(0);
v_sz_617_ = lean_array_size(v___y_615_);
v___x_618_ = ((size_t)0ULL);
v___x_619_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__1(v_env_612_, v_declName_598_, v___y_615_, v_sz_617_, v___x_618_, v___x_616_, v___y_614_, v___y_601_, v___y_602_, v___y_603_, v___y_604_);
lean_dec_ref(v___y_615_);
lean_dec_ref(v_env_612_);
if (lean_obj_tag(v___x_619_) == 0)
{
lean_object* v_a_620_; lean_object* v___x_622_; uint8_t v_isShared_623_; uint8_t v_isSharedCheck_636_; 
v_a_620_ = lean_ctor_get(v___x_619_, 0);
v_isSharedCheck_636_ = !lean_is_exclusive(v___x_619_);
if (v_isSharedCheck_636_ == 0)
{
v___x_622_ = v___x_619_;
v_isShared_623_ = v_isSharedCheck_636_;
goto v_resetjp_621_;
}
else
{
lean_inc(v_a_620_);
lean_dec(v___x_619_);
v___x_622_ = lean_box(0);
v_isShared_623_ = v_isSharedCheck_636_;
goto v_resetjp_621_;
}
v_resetjp_621_:
{
lean_object* v_snd_624_; lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_634_; 
v_snd_624_ = lean_ctor_get(v_a_620_, 1);
v_isSharedCheck_634_ = !lean_is_exclusive(v_a_620_);
if (v_isSharedCheck_634_ == 0)
{
lean_object* v_unused_635_; 
v_unused_635_ = lean_ctor_get(v_a_620_, 0);
lean_dec(v_unused_635_);
v___x_626_ = v_a_620_;
v_isShared_627_ = v_isSharedCheck_634_;
goto v_resetjp_625_;
}
else
{
lean_inc(v_snd_624_);
lean_dec(v_a_620_);
v___x_626_ = lean_box(0);
v_isShared_627_ = v_isSharedCheck_634_;
goto v_resetjp_625_;
}
v_resetjp_625_:
{
lean_object* v___x_629_; 
if (v_isShared_627_ == 0)
{
lean_ctor_set(v___x_626_, 0, v___x_616_);
v___x_629_ = v___x_626_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v___x_616_);
lean_ctor_set(v_reuseFailAlloc_633_, 1, v_snd_624_);
v___x_629_ = v_reuseFailAlloc_633_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
lean_object* v___x_631_; 
if (v_isShared_623_ == 0)
{
lean_ctor_set(v___x_622_, 0, v___x_629_);
v___x_631_ = v___x_622_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v___x_629_);
v___x_631_ = v_reuseFailAlloc_632_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
return v___x_631_;
}
}
}
}
}
else
{
return v___x_619_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___boxed(lean_object* v_declName_662_, lean_object* v_isMeta_663_, lean_object* v___y_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_){
_start:
{
uint8_t v_isMeta_boxed_670_; lean_object* v_res_671_; 
v_isMeta_boxed_670_ = lean_unbox(v_isMeta_663_);
v_res_671_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0(v_declName_662_, v_isMeta_boxed_670_, v___y_664_, v___y_665_, v___y_666_, v___y_667_, v___y_668_);
lean_dec(v___y_668_);
lean_dec_ref(v___y_667_);
lean_dec(v___y_666_);
lean_dec_ref(v___y_665_);
return v_res_671_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__1(lean_object* v_e_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_){
_start:
{
lean_object* v___y_687_; lean_object* v_f_691_; uint8_t v___x_692_; 
v_f_691_ = l_Lean_Expr_getAppFn(v_e_679_);
v___x_692_ = l_Lean_Expr_isConst(v_f_691_);
if (v___x_692_ == 0)
{
lean_dec_ref(v_f_691_);
lean_dec_ref(v_e_679_);
v___y_687_ = v___y_680_;
goto v___jp_686_;
}
else
{
lean_object* v_declName_693_; lean_object* v___x_694_; lean_object* v_env_695_; uint8_t v___x_696_; 
v_declName_693_ = l_Lean_Expr_constName_x21(v_f_691_);
lean_dec_ref(v_f_691_);
v___x_694_ = lean_st_ref_get(v___y_684_);
v_env_695_ = lean_ctor_get(v___x_694_, 0);
lean_inc_ref(v_env_695_);
lean_dec(v___x_694_);
lean_inc(v_declName_693_);
v___x_696_ = l_Lean_Meta_isCoeDecl(v_env_695_, v_declName_693_);
if (v___x_696_ == 0)
{
lean_dec(v_declName_693_);
lean_dec_ref(v_e_679_);
v___y_687_ = v___y_680_;
goto v___jp_686_;
}
else
{
lean_object* v___x_697_; 
lean_inc(v_declName_693_);
lean_inc_ref(v_e_679_);
v___x_697_ = l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget(v_e_679_, v_declName_693_, v___y_681_, v___y_682_, v___y_683_, v___y_684_);
if (lean_obj_tag(v___x_697_) == 0)
{
lean_object* v_a_698_; uint8_t v___x_699_; lean_object* v___x_700_; 
v_a_698_ = lean_ctor_get(v___x_697_, 0);
lean_inc(v_a_698_);
lean_dec_ref_known(v___x_697_, 1);
v___x_699_ = 0;
v___x_700_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0(v_a_698_, v___x_699_, v___y_680_, v___y_681_, v___y_682_, v___y_683_, v___y_684_);
if (lean_obj_tag(v___x_700_) == 0)
{
lean_object* v_a_701_; lean_object* v_snd_702_; lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_753_; 
v_a_701_ = lean_ctor_get(v___x_700_, 0);
lean_inc(v_a_701_);
lean_dec_ref_known(v___x_700_, 1);
v_snd_702_ = lean_ctor_get(v_a_701_, 1);
v_isSharedCheck_753_ = !lean_is_exclusive(v_a_701_);
if (v_isSharedCheck_753_ == 0)
{
lean_object* v_unused_754_; 
v_unused_754_ = lean_ctor_get(v_a_701_, 0);
lean_dec(v_unused_754_);
v___x_704_ = v_a_701_;
v_isShared_705_ = v_isSharedCheck_753_;
goto v_resetjp_703_;
}
else
{
lean_inc(v_snd_702_);
lean_dec(v_a_701_);
v___x_704_ = lean_box(0);
v_isShared_705_ = v_isSharedCheck_753_;
goto v_resetjp_703_;
}
v_resetjp_703_:
{
lean_object* v___x_706_; 
lean_inc_ref(v_e_679_);
v___x_706_ = l_Lean_Meta_unfoldDefinition_x3f(v_e_679_, v___x_699_, v___y_681_, v___y_682_, v___y_683_, v___y_684_);
if (lean_obj_tag(v___x_706_) == 0)
{
lean_object* v_a_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_744_; 
v_a_707_ = lean_ctor_get(v___x_706_, 0);
v_isSharedCheck_744_ = !lean_is_exclusive(v___x_706_);
if (v_isSharedCheck_744_ == 0)
{
v___x_709_ = v___x_706_;
v_isShared_710_ = v_isSharedCheck_744_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_a_707_);
lean_dec(v___x_706_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_744_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
if (lean_obj_tag(v_a_707_) == 1)
{
lean_object* v_val_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_743_; 
v_val_711_ = lean_ctor_get(v_a_707_, 0);
v_isSharedCheck_743_ = !lean_is_exclusive(v_a_707_);
if (v_isSharedCheck_743_ == 0)
{
v___x_713_ = v_a_707_;
v_isShared_714_ = v_isSharedCheck_743_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_val_711_);
lean_dec(v_a_707_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_743_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v___y_716_; lean_object* v___x_727_; uint8_t v___x_728_; 
v___x_727_ = ((lean_object*)(l_Lean_Meta_expandCoe___lam__1___closed__3));
v___x_728_ = lean_name_eq(v_declName_693_, v___x_727_);
lean_dec(v_declName_693_);
if (v___x_728_ == 0)
{
lean_dec_ref(v_e_679_);
v___y_716_ = v_snd_702_;
goto v___jp_715_;
}
else
{
lean_object* v_dummy_729_; lean_object* v_nargs_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; uint8_t v___x_737_; 
v_dummy_729_ = lean_obj_once(&l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0, &l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0_once, _init_l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0);
v_nargs_730_ = l_Lean_Expr_getAppNumArgs(v_e_679_);
lean_inc(v_nargs_730_);
v___x_731_ = lean_mk_array(v_nargs_730_, v_dummy_729_);
v___x_732_ = lean_unsigned_to_nat(1u);
v___x_733_ = lean_nat_sub(v_nargs_730_, v___x_732_);
lean_dec(v_nargs_730_);
v___x_734_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_679_, v___x_731_, v___x_733_);
v___x_735_ = lean_unsigned_to_nat(2u);
v___x_736_ = lean_array_get_size(v___x_734_);
v___x_737_ = lean_nat_dec_lt(v___x_735_, v___x_736_);
if (v___x_737_ == 0)
{
lean_dec_ref(v___x_734_);
v___y_716_ = v_snd_702_;
goto v___jp_715_;
}
else
{
lean_object* v___x_738_; lean_object* v___x_739_; uint8_t v___x_740_; 
v___x_738_ = lean_array_fget(v___x_734_, v___x_735_);
lean_dec_ref(v___x_734_);
v___x_739_ = l_Lean_Expr_getAppFn(v___x_738_);
lean_dec(v___x_738_);
v___x_740_ = l_Lean_Expr_isConst(v___x_739_);
if (v___x_740_ == 0)
{
lean_dec_ref(v___x_739_);
v___y_716_ = v_snd_702_;
goto v___jp_715_;
}
else
{
lean_object* v___x_741_; lean_object* v___x_742_; 
v___x_741_ = l_Lean_Expr_constName_x21(v___x_739_);
lean_dec_ref(v___x_739_);
v___x_742_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_742_, 0, v___x_741_);
lean_ctor_set(v___x_742_, 1, v_snd_702_);
v___y_716_ = v___x_742_;
goto v___jp_715_;
}
}
}
v___jp_715_:
{
lean_object* v___x_717_; lean_object* v___x_719_; 
v___x_717_ = l_Lean_Expr_headBeta(v_val_711_);
if (v_isShared_714_ == 0)
{
lean_ctor_set(v___x_713_, 0, v___x_717_);
v___x_719_ = v___x_713_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v___x_717_);
v___x_719_ = v_reuseFailAlloc_726_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
lean_object* v___x_721_; 
if (v_isShared_705_ == 0)
{
lean_ctor_set(v___x_704_, 1, v___y_716_);
lean_ctor_set(v___x_704_, 0, v___x_719_);
v___x_721_ = v___x_704_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v___x_719_);
lean_ctor_set(v_reuseFailAlloc_725_, 1, v___y_716_);
v___x_721_ = v_reuseFailAlloc_725_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
lean_object* v___x_723_; 
if (v_isShared_710_ == 0)
{
lean_ctor_set(v___x_709_, 0, v___x_721_);
v___x_723_ = v___x_709_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v___x_721_);
v___x_723_ = v_reuseFailAlloc_724_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
return v___x_723_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_709_);
lean_dec(v_a_707_);
lean_del_object(v___x_704_);
lean_dec(v_declName_693_);
lean_dec_ref(v_e_679_);
v___y_687_ = v_snd_702_;
goto v___jp_686_;
}
}
}
else
{
lean_object* v_a_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_752_; 
lean_del_object(v___x_704_);
lean_dec(v_snd_702_);
lean_dec(v_declName_693_);
lean_dec_ref(v_e_679_);
v_a_745_ = lean_ctor_get(v___x_706_, 0);
v_isSharedCheck_752_ = !lean_is_exclusive(v___x_706_);
if (v_isSharedCheck_752_ == 0)
{
v___x_747_ = v___x_706_;
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_a_745_);
lean_dec(v___x_706_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
lean_object* v___x_750_; 
if (v_isShared_748_ == 0)
{
v___x_750_ = v___x_747_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v_a_745_);
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
}
else
{
lean_object* v_a_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_762_; 
lean_dec(v_declName_693_);
lean_dec_ref(v_e_679_);
v_a_755_ = lean_ctor_get(v___x_700_, 0);
v_isSharedCheck_762_ = !lean_is_exclusive(v___x_700_);
if (v_isSharedCheck_762_ == 0)
{
v___x_757_ = v___x_700_;
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_a_755_);
lean_dec(v___x_700_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v___x_760_; 
if (v_isShared_758_ == 0)
{
v___x_760_ = v___x_757_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v_a_755_);
v___x_760_ = v_reuseFailAlloc_761_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
return v___x_760_;
}
}
}
}
else
{
lean_object* v_a_763_; lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_770_; 
lean_dec(v_declName_693_);
lean_dec(v___y_680_);
lean_dec_ref(v_e_679_);
v_a_763_ = lean_ctor_get(v___x_697_, 0);
v_isSharedCheck_770_ = !lean_is_exclusive(v___x_697_);
if (v_isSharedCheck_770_ == 0)
{
v___x_765_ = v___x_697_;
v_isShared_766_ = v_isSharedCheck_770_;
goto v_resetjp_764_;
}
else
{
lean_inc(v_a_763_);
lean_dec(v___x_697_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_770_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
lean_object* v___x_768_; 
if (v_isShared_766_ == 0)
{
v___x_768_ = v___x_765_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v_a_763_);
v___x_768_ = v_reuseFailAlloc_769_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
return v___x_768_;
}
}
}
}
}
v___jp_686_:
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_688_ = ((lean_object*)(l_Lean_Meta_expandCoe___lam__1___closed__0));
v___x_689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_689_, 0, v___x_688_);
lean_ctor_set(v___x_689_, 1, v___y_687_);
v___x_690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_690_, 0, v___x_689_);
return v___x_690_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__1___boxed(lean_object* v_e_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_){
_start:
{
lean_object* v_res_778_; 
v_res_778_ = l_Lean_Meta_expandCoe___lam__1(v_e_771_, v___y_772_, v___y_773_, v___y_774_, v___y_775_, v___y_776_);
lean_dec(v___y_776_);
lean_dec_ref(v___y_775_);
lean_dec(v___y_774_);
lean_dec_ref(v___y_773_);
return v_res_778_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__18___redArg___lam__0(lean_object* v_k_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v_b_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_){
_start:
{
lean_object* v___x_788_; 
lean_inc(v___y_786_);
lean_inc_ref(v___y_785_);
lean_inc(v___y_784_);
lean_inc_ref(v___y_783_);
lean_inc(v___y_780_);
v___x_788_ = lean_apply_8(v_k_779_, v_b_782_, v___y_780_, v___y_781_, v___y_783_, v___y_784_, v___y_785_, v___y_786_, lean_box(0));
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__18___redArg___lam__0___boxed(lean_object* v_k_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v_b_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_){
_start:
{
lean_object* v_res_798_; 
v_res_798_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__18___redArg___lam__0(v_k_789_, v___y_790_, v___y_791_, v_b_792_, v___y_793_, v___y_794_, v___y_795_, v___y_796_);
lean_dec(v___y_796_);
lean_dec_ref(v___y_795_);
lean_dec(v___y_794_);
lean_dec_ref(v___y_793_);
lean_dec(v___y_790_);
return v_res_798_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15_spec__21___redArg(lean_object* v_name_799_, lean_object* v_type_800_, lean_object* v_val_801_, lean_object* v_k_802_, uint8_t v_nondep_803_, uint8_t v_kind_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_){
_start:
{
lean_object* v___f_812_; lean_object* v___x_813_; 
lean_inc(v___y_805_);
v___f_812_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__18___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_812_, 0, v_k_802_);
lean_closure_set(v___f_812_, 1, v___y_805_);
lean_closure_set(v___f_812_, 2, v___y_806_);
v___x_813_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_799_, v_type_800_, v_val_801_, v___f_812_, v_nondep_803_, v_kind_804_, v___y_807_, v___y_808_, v___y_809_, v___y_810_);
if (lean_obj_tag(v___x_813_) == 0)
{
lean_object* v_a_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_821_; 
v_a_814_ = lean_ctor_get(v___x_813_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v___x_813_);
if (v_isSharedCheck_821_ == 0)
{
v___x_816_ = v___x_813_;
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
else
{
lean_inc(v_a_814_);
lean_dec(v___x_813_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
lean_object* v___x_819_; 
if (v_isShared_817_ == 0)
{
v___x_819_ = v___x_816_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v_a_814_);
v___x_819_ = v_reuseFailAlloc_820_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
return v___x_819_;
}
}
}
else
{
lean_object* v_a_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_829_; 
v_a_822_ = lean_ctor_get(v___x_813_, 0);
v_isSharedCheck_829_ = !lean_is_exclusive(v___x_813_);
if (v_isSharedCheck_829_ == 0)
{
v___x_824_ = v___x_813_;
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_a_822_);
lean_dec(v___x_813_);
v___x_824_ = lean_box(0);
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
v_resetjp_823_:
{
lean_object* v___x_827_; 
if (v_isShared_825_ == 0)
{
v___x_827_ = v___x_824_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_828_; 
v_reuseFailAlloc_828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_828_, 0, v_a_822_);
v___x_827_ = v_reuseFailAlloc_828_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
return v___x_827_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15_spec__21___redArg___boxed(lean_object* v_name_830_, lean_object* v_type_831_, lean_object* v_val_832_, lean_object* v_k_833_, lean_object* v_nondep_834_, lean_object* v_kind_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_){
_start:
{
uint8_t v_nondep_boxed_843_; uint8_t v_kind_boxed_844_; lean_object* v_res_845_; 
v_nondep_boxed_843_ = lean_unbox(v_nondep_834_);
v_kind_boxed_844_ = lean_unbox(v_kind_835_);
v_res_845_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15_spec__21___redArg(v_name_830_, v_type_831_, v_val_832_, v_k_833_, v_nondep_boxed_843_, v_kind_boxed_844_, v___y_836_, v___y_837_, v___y_838_, v___y_839_, v___y_840_, v___y_841_);
lean_dec(v___y_841_);
lean_dec_ref(v___y_840_);
lean_dec(v___y_839_);
lean_dec_ref(v___y_838_);
lean_dec(v___y_836_);
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__18___redArg(lean_object* v_name_846_, uint8_t v_bi_847_, lean_object* v_type_848_, lean_object* v_k_849_, uint8_t v_kind_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_){
_start:
{
lean_object* v___f_858_; lean_object* v___x_859_; 
lean_inc(v___y_851_);
v___f_858_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__18___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_858_, 0, v_k_849_);
lean_closure_set(v___f_858_, 1, v___y_851_);
lean_closure_set(v___f_858_, 2, v___y_852_);
v___x_859_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_846_, v_bi_847_, v_type_848_, v___f_858_, v_kind_850_, v___y_853_, v___y_854_, v___y_855_, v___y_856_);
if (lean_obj_tag(v___x_859_) == 0)
{
lean_object* v_a_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_867_; 
v_a_860_ = lean_ctor_get(v___x_859_, 0);
v_isSharedCheck_867_ = !lean_is_exclusive(v___x_859_);
if (v_isSharedCheck_867_ == 0)
{
v___x_862_ = v___x_859_;
v_isShared_863_ = v_isSharedCheck_867_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_a_860_);
lean_dec(v___x_859_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_867_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
lean_object* v___x_865_; 
if (v_isShared_863_ == 0)
{
v___x_865_ = v___x_862_;
goto v_reusejp_864_;
}
else
{
lean_object* v_reuseFailAlloc_866_; 
v_reuseFailAlloc_866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_866_, 0, v_a_860_);
v___x_865_ = v_reuseFailAlloc_866_;
goto v_reusejp_864_;
}
v_reusejp_864_:
{
return v___x_865_;
}
}
}
else
{
lean_object* v_a_868_; lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_875_; 
v_a_868_ = lean_ctor_get(v___x_859_, 0);
v_isSharedCheck_875_ = !lean_is_exclusive(v___x_859_);
if (v_isSharedCheck_875_ == 0)
{
v___x_870_ = v___x_859_;
v_isShared_871_ = v_isSharedCheck_875_;
goto v_resetjp_869_;
}
else
{
lean_inc(v_a_868_);
lean_dec(v___x_859_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_875_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_873_; 
if (v_isShared_871_ == 0)
{
v___x_873_ = v___x_870_;
goto v_reusejp_872_;
}
else
{
lean_object* v_reuseFailAlloc_874_; 
v_reuseFailAlloc_874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_874_, 0, v_a_868_);
v___x_873_ = v_reuseFailAlloc_874_;
goto v_reusejp_872_;
}
v_reusejp_872_:
{
return v___x_873_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__18___redArg___boxed(lean_object* v_name_876_, lean_object* v_bi_877_, lean_object* v_type_878_, lean_object* v_k_879_, lean_object* v_kind_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_){
_start:
{
uint8_t v_bi_boxed_888_; uint8_t v_kind_boxed_889_; lean_object* v_res_890_; 
v_bi_boxed_888_ = lean_unbox(v_bi_877_);
v_kind_boxed_889_ = lean_unbox(v_kind_880_);
v_res_890_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__18___redArg(v_name_876_, v_bi_boxed_888_, v_type_878_, v_k_879_, v_kind_boxed_889_, v___y_881_, v___y_882_, v___y_883_, v___y_884_, v___y_885_, v___y_886_);
lean_dec(v___y_886_);
lean_dec_ref(v___y_885_);
lean_dec(v___y_884_);
lean_dec_ref(v___y_883_);
lean_dec(v___y_881_);
return v_res_890_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___lam__2(lean_object* v___x_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_){
_start:
{
lean_object* v___x_898_; lean_object* v___x_899_; 
v___x_898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_898_, 0, v___x_891_);
lean_ctor_set(v___x_898_, 1, v___y_892_);
v___x_899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_899_, 0, v___x_898_);
return v___x_899_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___lam__2___boxed(lean_object* v___x_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_){
_start:
{
lean_object* v_res_907_; 
v_res_907_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___lam__2(v___x_900_, v___y_901_, v___y_902_, v___y_903_, v___y_904_, v___y_905_);
lean_dec(v___y_905_);
lean_dec_ref(v___y_904_);
lean_dec(v___y_903_);
lean_dec_ref(v___y_902_);
return v_res_907_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__27_spec__29_spec__30___redArg(lean_object* v_x_908_, lean_object* v_x_909_){
_start:
{
if (lean_obj_tag(v_x_909_) == 0)
{
return v_x_908_;
}
else
{
lean_object* v_key_910_; lean_object* v_value_911_; lean_object* v_tail_912_; lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_935_; 
v_key_910_ = lean_ctor_get(v_x_909_, 0);
v_value_911_ = lean_ctor_get(v_x_909_, 1);
v_tail_912_ = lean_ctor_get(v_x_909_, 2);
v_isSharedCheck_935_ = !lean_is_exclusive(v_x_909_);
if (v_isSharedCheck_935_ == 0)
{
v___x_914_ = v_x_909_;
v_isShared_915_ = v_isSharedCheck_935_;
goto v_resetjp_913_;
}
else
{
lean_inc(v_tail_912_);
lean_inc(v_value_911_);
lean_inc(v_key_910_);
lean_dec(v_x_909_);
v___x_914_ = lean_box(0);
v_isShared_915_ = v_isSharedCheck_935_;
goto v_resetjp_913_;
}
v_resetjp_913_:
{
lean_object* v___x_916_; uint64_t v___x_917_; uint64_t v___x_918_; uint64_t v___x_919_; uint64_t v_fold_920_; uint64_t v___x_921_; uint64_t v___x_922_; uint64_t v___x_923_; size_t v___x_924_; size_t v___x_925_; size_t v___x_926_; size_t v___x_927_; size_t v___x_928_; lean_object* v___x_929_; lean_object* v___x_931_; 
v___x_916_ = lean_array_get_size(v_x_908_);
v___x_917_ = l_Lean_ExprStructEq_hash(v_key_910_);
v___x_918_ = 32ULL;
v___x_919_ = lean_uint64_shift_right(v___x_917_, v___x_918_);
v_fold_920_ = lean_uint64_xor(v___x_917_, v___x_919_);
v___x_921_ = 16ULL;
v___x_922_ = lean_uint64_shift_right(v_fold_920_, v___x_921_);
v___x_923_ = lean_uint64_xor(v_fold_920_, v___x_922_);
v___x_924_ = lean_uint64_to_usize(v___x_923_);
v___x_925_ = lean_usize_of_nat(v___x_916_);
v___x_926_ = ((size_t)1ULL);
v___x_927_ = lean_usize_sub(v___x_925_, v___x_926_);
v___x_928_ = lean_usize_land(v___x_924_, v___x_927_);
v___x_929_ = lean_array_uget_borrowed(v_x_908_, v___x_928_);
lean_inc(v___x_929_);
if (v_isShared_915_ == 0)
{
lean_ctor_set(v___x_914_, 2, v___x_929_);
v___x_931_ = v___x_914_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v_key_910_);
lean_ctor_set(v_reuseFailAlloc_934_, 1, v_value_911_);
lean_ctor_set(v_reuseFailAlloc_934_, 2, v___x_929_);
v___x_931_ = v_reuseFailAlloc_934_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
lean_object* v___x_932_; 
v___x_932_ = lean_array_uset(v_x_908_, v___x_928_, v___x_931_);
v_x_908_ = v___x_932_;
v_x_909_ = v_tail_912_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__27_spec__29___redArg(lean_object* v_i_936_, lean_object* v_source_937_, lean_object* v_target_938_){
_start:
{
lean_object* v___x_939_; uint8_t v___x_940_; 
v___x_939_ = lean_array_get_size(v_source_937_);
v___x_940_ = lean_nat_dec_lt(v_i_936_, v___x_939_);
if (v___x_940_ == 0)
{
lean_dec_ref(v_source_937_);
lean_dec(v_i_936_);
return v_target_938_;
}
else
{
lean_object* v_es_941_; lean_object* v___x_942_; lean_object* v_source_943_; lean_object* v_target_944_; lean_object* v___x_945_; lean_object* v___x_946_; 
v_es_941_ = lean_array_fget(v_source_937_, v_i_936_);
v___x_942_ = lean_box(0);
v_source_943_ = lean_array_fset(v_source_937_, v_i_936_, v___x_942_);
v_target_944_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__27_spec__29_spec__30___redArg(v_target_938_, v_es_941_);
v___x_945_ = lean_unsigned_to_nat(1u);
v___x_946_ = lean_nat_add(v_i_936_, v___x_945_);
lean_dec(v_i_936_);
v_i_936_ = v___x_946_;
v_source_937_ = v_source_943_;
v_target_938_ = v_target_944_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__27___redArg(lean_object* v_data_948_){
_start:
{
lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v_nbuckets_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; 
v___x_949_ = lean_array_get_size(v_data_948_);
v___x_950_ = lean_unsigned_to_nat(2u);
v_nbuckets_951_ = lean_nat_mul(v___x_949_, v___x_950_);
v___x_952_ = lean_unsigned_to_nat(0u);
v___x_953_ = lean_box(0);
v___x_954_ = lean_mk_array(v_nbuckets_951_, v___x_953_);
v___x_955_ = lean_array_propagate_mark(v_data_948_, v___x_954_);
v___x_956_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__27_spec__29___redArg(v___x_952_, v_data_948_, v___x_955_);
return v___x_956_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__26___redArg(lean_object* v_a_957_, lean_object* v_x_958_){
_start:
{
if (lean_obj_tag(v_x_958_) == 0)
{
uint8_t v___x_959_; 
v___x_959_ = 0;
return v___x_959_;
}
else
{
lean_object* v_key_960_; lean_object* v_tail_961_; uint8_t v___x_962_; 
v_key_960_ = lean_ctor_get(v_x_958_, 0);
v_tail_961_ = lean_ctor_get(v_x_958_, 2);
v___x_962_ = l_Lean_ExprStructEq_beq(v_key_960_, v_a_957_);
if (v___x_962_ == 0)
{
v_x_958_ = v_tail_961_;
goto _start;
}
else
{
return v___x_962_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__26___redArg___boxed(lean_object* v_a_964_, lean_object* v_x_965_){
_start:
{
uint8_t v_res_966_; lean_object* v_r_967_; 
v_res_966_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__26___redArg(v_a_964_, v_x_965_);
lean_dec(v_x_965_);
lean_dec_ref(v_a_964_);
v_r_967_ = lean_box(v_res_966_);
return v_r_967_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__28___redArg(lean_object* v_a_968_, lean_object* v_b_969_, lean_object* v_x_970_){
_start:
{
if (lean_obj_tag(v_x_970_) == 0)
{
lean_dec(v_b_969_);
lean_dec_ref(v_a_968_);
return v_x_970_;
}
else
{
lean_object* v_key_971_; lean_object* v_value_972_; lean_object* v_tail_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_985_; 
v_key_971_ = lean_ctor_get(v_x_970_, 0);
v_value_972_ = lean_ctor_get(v_x_970_, 1);
v_tail_973_ = lean_ctor_get(v_x_970_, 2);
v_isSharedCheck_985_ = !lean_is_exclusive(v_x_970_);
if (v_isSharedCheck_985_ == 0)
{
v___x_975_ = v_x_970_;
v_isShared_976_ = v_isSharedCheck_985_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_tail_973_);
lean_inc(v_value_972_);
lean_inc(v_key_971_);
lean_dec(v_x_970_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_985_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
uint8_t v___x_977_; 
v___x_977_ = l_Lean_ExprStructEq_beq(v_key_971_, v_a_968_);
if (v___x_977_ == 0)
{
lean_object* v___x_978_; lean_object* v___x_980_; 
v___x_978_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__28___redArg(v_a_968_, v_b_969_, v_tail_973_);
if (v_isShared_976_ == 0)
{
lean_ctor_set(v___x_975_, 2, v___x_978_);
v___x_980_ = v___x_975_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v_key_971_);
lean_ctor_set(v_reuseFailAlloc_981_, 1, v_value_972_);
lean_ctor_set(v_reuseFailAlloc_981_, 2, v___x_978_);
v___x_980_ = v_reuseFailAlloc_981_;
goto v_reusejp_979_;
}
v_reusejp_979_:
{
return v___x_980_;
}
}
else
{
lean_object* v___x_983_; 
lean_dec(v_value_972_);
lean_dec(v_key_971_);
if (v_isShared_976_ == 0)
{
lean_ctor_set(v___x_975_, 1, v_b_969_);
lean_ctor_set(v___x_975_, 0, v_a_968_);
v___x_983_ = v___x_975_;
goto v_reusejp_982_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v_a_968_);
lean_ctor_set(v_reuseFailAlloc_984_, 1, v_b_969_);
lean_ctor_set(v_reuseFailAlloc_984_, 2, v_tail_973_);
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
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18___redArg(lean_object* v_m_986_, lean_object* v_a_987_, lean_object* v_b_988_){
_start:
{
lean_object* v_size_989_; lean_object* v_buckets_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_1033_; 
v_size_989_ = lean_ctor_get(v_m_986_, 0);
v_buckets_990_ = lean_ctor_get(v_m_986_, 1);
v_isSharedCheck_1033_ = !lean_is_exclusive(v_m_986_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_992_ = v_m_986_;
v_isShared_993_ = v_isSharedCheck_1033_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_buckets_990_);
lean_inc(v_size_989_);
lean_dec(v_m_986_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_1033_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
lean_object* v___x_994_; uint64_t v___x_995_; uint64_t v___x_996_; uint64_t v___x_997_; uint64_t v_fold_998_; uint64_t v___x_999_; uint64_t v___x_1000_; uint64_t v___x_1001_; size_t v___x_1002_; size_t v___x_1003_; size_t v___x_1004_; size_t v___x_1005_; size_t v___x_1006_; lean_object* v_bkt_1007_; uint8_t v___x_1008_; 
v___x_994_ = lean_array_get_size(v_buckets_990_);
v___x_995_ = l_Lean_ExprStructEq_hash(v_a_987_);
v___x_996_ = 32ULL;
v___x_997_ = lean_uint64_shift_right(v___x_995_, v___x_996_);
v_fold_998_ = lean_uint64_xor(v___x_995_, v___x_997_);
v___x_999_ = 16ULL;
v___x_1000_ = lean_uint64_shift_right(v_fold_998_, v___x_999_);
v___x_1001_ = lean_uint64_xor(v_fold_998_, v___x_1000_);
v___x_1002_ = lean_uint64_to_usize(v___x_1001_);
v___x_1003_ = lean_usize_of_nat(v___x_994_);
v___x_1004_ = ((size_t)1ULL);
v___x_1005_ = lean_usize_sub(v___x_1003_, v___x_1004_);
v___x_1006_ = lean_usize_land(v___x_1002_, v___x_1005_);
v_bkt_1007_ = lean_array_uget_borrowed(v_buckets_990_, v___x_1006_);
v___x_1008_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__26___redArg(v_a_987_, v_bkt_1007_);
if (v___x_1008_ == 0)
{
lean_object* v___x_1009_; lean_object* v_size_x27_1010_; lean_object* v___x_1011_; lean_object* v_buckets_x27_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; uint8_t v___x_1018_; 
v___x_1009_ = lean_unsigned_to_nat(1u);
v_size_x27_1010_ = lean_nat_add(v_size_989_, v___x_1009_);
lean_dec(v_size_989_);
lean_inc(v_bkt_1007_);
v___x_1011_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1011_, 0, v_a_987_);
lean_ctor_set(v___x_1011_, 1, v_b_988_);
lean_ctor_set(v___x_1011_, 2, v_bkt_1007_);
v_buckets_x27_1012_ = lean_array_uset(v_buckets_990_, v___x_1006_, v___x_1011_);
v___x_1013_ = lean_unsigned_to_nat(4u);
v___x_1014_ = lean_nat_mul(v_size_x27_1010_, v___x_1013_);
v___x_1015_ = lean_unsigned_to_nat(3u);
v___x_1016_ = lean_nat_div(v___x_1014_, v___x_1015_);
lean_dec(v___x_1014_);
v___x_1017_ = lean_array_get_size(v_buckets_x27_1012_);
v___x_1018_ = lean_nat_dec_le(v___x_1016_, v___x_1017_);
lean_dec(v___x_1016_);
if (v___x_1018_ == 0)
{
lean_object* v_val_1019_; lean_object* v___x_1021_; 
v_val_1019_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__27___redArg(v_buckets_x27_1012_);
if (v_isShared_993_ == 0)
{
lean_ctor_set(v___x_992_, 1, v_val_1019_);
lean_ctor_set(v___x_992_, 0, v_size_x27_1010_);
v___x_1021_ = v___x_992_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v_size_x27_1010_);
lean_ctor_set(v_reuseFailAlloc_1022_, 1, v_val_1019_);
v___x_1021_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
return v___x_1021_;
}
}
else
{
lean_object* v___x_1024_; 
if (v_isShared_993_ == 0)
{
lean_ctor_set(v___x_992_, 1, v_buckets_x27_1012_);
lean_ctor_set(v___x_992_, 0, v_size_x27_1010_);
v___x_1024_ = v___x_992_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1025_; 
v_reuseFailAlloc_1025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1025_, 0, v_size_x27_1010_);
lean_ctor_set(v_reuseFailAlloc_1025_, 1, v_buckets_x27_1012_);
v___x_1024_ = v_reuseFailAlloc_1025_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
return v___x_1024_;
}
}
}
else
{
lean_object* v___x_1026_; lean_object* v_buckets_x27_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1031_; 
lean_inc(v_bkt_1007_);
v___x_1026_ = lean_box(0);
v_buckets_x27_1027_ = lean_array_uset(v_buckets_990_, v___x_1006_, v___x_1026_);
v___x_1028_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__28___redArg(v_a_987_, v_b_988_, v_bkt_1007_);
v___x_1029_ = lean_array_uset(v_buckets_x27_1027_, v___x_1006_, v___x_1028_);
if (v_isShared_993_ == 0)
{
lean_ctor_set(v___x_992_, 1, v___x_1029_);
v___x_1031_ = v___x_992_;
goto v_reusejp_1030_;
}
else
{
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v_size_989_);
lean_ctor_set(v_reuseFailAlloc_1032_, 1, v___x_1029_);
v___x_1031_ = v_reuseFailAlloc_1032_;
goto v_reusejp_1030_;
}
v_reusejp_1030_:
{
return v___x_1031_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__2(lean_object* v_a_1034_, lean_object* v_e_1035_, lean_object* v_fst_1036_){
_start:
{
lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; 
v___x_1038_ = lean_st_ref_take(v_a_1034_);
v___x_1039_ = lean_box(0);
v___x_1040_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18___redArg(v___x_1038_, v_e_1035_, v_fst_1036_);
v___x_1041_ = lean_st_ref_put(v_a_1034_, v___x_1040_);
return v___x_1039_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__2___boxed(lean_object* v_a_1042_, lean_object* v_e_1043_, lean_object* v_fst_1044_, lean_object* v___y_1045_){
_start:
{
lean_object* v_res_1046_; 
v_res_1046_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__2(v_a_1042_, v_e_1043_, v_fst_1044_);
lean_dec(v_a_1042_);
return v_res_1046_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__3(void){
_start:
{
lean_object* v___x_1052_; lean_object* v___x_1053_; 
v___x_1052_ = l_Lean_maxRecDepthErrorMessage;
v___x_1053_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1053_, 0, v___x_1052_);
return v___x_1053_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__4(void){
_start:
{
lean_object* v___x_1054_; lean_object* v___x_1055_; 
v___x_1054_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__3);
v___x_1055_ = l_Lean_MessageData_ofFormat(v___x_1054_);
return v___x_1055_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__5(void){
_start:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; 
v___x_1056_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__4);
v___x_1057_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__2));
v___x_1058_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1057_);
lean_ctor_set(v___x_1058_, 1, v___x_1056_);
return v___x_1058_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg(lean_object* v_ref_1059_){
_start:
{
lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; 
v___x_1061_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___closed__5);
v___x_1062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1062_, 0, v_ref_1059_);
lean_ctor_set(v___x_1062_, 1, v___x_1061_);
v___x_1063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1062_);
return v___x_1063_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___boxed(lean_object* v_ref_1064_, lean_object* v___y_1065_){
_start:
{
lean_object* v_res_1066_; 
v_res_1066_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg(v_ref_1064_);
return v_res_1066_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17___redArg(lean_object* v_x_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_){
_start:
{
lean_object* v___y_1076_; lean_object* v_toCold_1093_; lean_object* v_currRecDepth_1094_; lean_object* v_ref_1095_; uint16_t v_optionFlags_1096_; uint8_t v_suppressElabErrors_1097_; uint8_t v_checkDeprecated_1098_; uint8_t v_isRecordingDeps_1099_; lean_object* v_maxRecDepth_1105_; lean_object* v___x_1106_; uint8_t v___x_1107_; 
v_toCold_1093_ = lean_ctor_get(v___y_1072_, 0);
v_currRecDepth_1094_ = lean_ctor_get(v___y_1072_, 1);
v_ref_1095_ = lean_ctor_get(v___y_1072_, 2);
v_optionFlags_1096_ = lean_ctor_get_uint16(v___y_1072_, sizeof(void*)*3);
v_suppressElabErrors_1097_ = lean_ctor_get_uint8(v___y_1072_, sizeof(void*)*3 + 2);
v_checkDeprecated_1098_ = lean_ctor_get_uint8(v___y_1072_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1099_ = lean_ctor_get_uint8(v___y_1072_, sizeof(void*)*3 + 4);
v_maxRecDepth_1105_ = lean_ctor_get(v_toCold_1093_, 3);
v___x_1106_ = lean_unsigned_to_nat(0u);
v___x_1107_ = lean_nat_dec_eq(v_maxRecDepth_1105_, v___x_1106_);
if (v___x_1107_ == 0)
{
uint8_t v___x_1108_; 
v___x_1108_ = lean_nat_dec_eq(v_currRecDepth_1094_, v_maxRecDepth_1105_);
if (v___x_1108_ == 0)
{
goto v___jp_1100_;
}
else
{
lean_object* v___x_1109_; 
lean_dec(v___y_1069_);
lean_dec_ref(v_x_1067_);
lean_inc(v_ref_1095_);
v___x_1109_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg(v_ref_1095_);
v___y_1076_ = v___x_1109_;
goto v___jp_1075_;
}
}
else
{
goto v___jp_1100_;
}
v___jp_1075_:
{
if (lean_obj_tag(v___y_1076_) == 0)
{
lean_object* v_a_1077_; lean_object* v___x_1079_; uint8_t v_isShared_1080_; uint8_t v_isSharedCheck_1084_; 
v_a_1077_ = lean_ctor_get(v___y_1076_, 0);
v_isSharedCheck_1084_ = !lean_is_exclusive(v___y_1076_);
if (v_isSharedCheck_1084_ == 0)
{
v___x_1079_ = v___y_1076_;
v_isShared_1080_ = v_isSharedCheck_1084_;
goto v_resetjp_1078_;
}
else
{
lean_inc(v_a_1077_);
lean_dec(v___y_1076_);
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
v_reuseFailAlloc_1083_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1085_; lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1092_; 
v_a_1085_ = lean_ctor_get(v___y_1076_, 0);
v_isSharedCheck_1092_ = !lean_is_exclusive(v___y_1076_);
if (v_isSharedCheck_1092_ == 0)
{
v___x_1087_ = v___y_1076_;
v_isShared_1088_ = v_isSharedCheck_1092_;
goto v_resetjp_1086_;
}
else
{
lean_inc(v_a_1085_);
lean_dec(v___y_1076_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1092_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
lean_object* v___x_1090_; 
if (v_isShared_1088_ == 0)
{
v___x_1090_ = v___x_1087_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v_a_1085_);
v___x_1090_ = v_reuseFailAlloc_1091_;
goto v_reusejp_1089_;
}
v_reusejp_1089_:
{
return v___x_1090_;
}
}
}
}
v___jp_1100_:
{
lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1101_ = lean_unsigned_to_nat(1u);
v___x_1102_ = lean_nat_add(v_currRecDepth_1094_, v___x_1101_);
lean_inc(v_ref_1095_);
lean_inc_ref(v_toCold_1093_);
v___x_1103_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1103_, 0, v_toCold_1093_);
lean_ctor_set(v___x_1103_, 1, v___x_1102_);
lean_ctor_set(v___x_1103_, 2, v_ref_1095_);
lean_ctor_set_uint16(v___x_1103_, sizeof(void*)*3, v_optionFlags_1096_);
lean_ctor_set_uint8(v___x_1103_, sizeof(void*)*3 + 2, v_suppressElabErrors_1097_);
lean_ctor_set_uint8(v___x_1103_, sizeof(void*)*3 + 3, v_checkDeprecated_1098_);
lean_ctor_set_uint8(v___x_1103_, sizeof(void*)*3 + 4, v_isRecordingDeps_1099_);
lean_inc(v___y_1073_);
lean_inc(v___y_1071_);
lean_inc_ref(v___y_1070_);
lean_inc(v___y_1068_);
v___x_1104_ = lean_apply_7(v_x_1067_, v___y_1068_, v___y_1069_, v___y_1070_, v___y_1071_, v___x_1103_, v___y_1073_, lean_box(0));
v___y_1076_ = v___x_1104_;
goto v___jp_1075_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17___redArg___boxed(lean_object* v_x_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_){
_start:
{
lean_object* v_res_1118_; 
v_res_1118_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17___redArg(v_x_1110_, v___y_1111_, v___y_1112_, v___y_1113_, v___y_1114_, v___y_1115_, v___y_1116_);
lean_dec(v___y_1116_);
lean_dec_ref(v___y_1115_);
lean_dec(v___y_1114_);
lean_dec_ref(v___y_1113_);
lean_dec(v___y_1111_);
return v_res_1118_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg(lean_object* v_a_1119_, lean_object* v_x_1120_){
_start:
{
if (lean_obj_tag(v_x_1120_) == 0)
{
lean_object* v___x_1121_; 
v___x_1121_ = lean_box(0);
return v___x_1121_;
}
else
{
lean_object* v_key_1122_; lean_object* v_value_1123_; lean_object* v_tail_1124_; uint8_t v___x_1125_; 
v_key_1122_ = lean_ctor_get(v_x_1120_, 0);
v_value_1123_ = lean_ctor_get(v_x_1120_, 1);
v_tail_1124_ = lean_ctor_get(v_x_1120_, 2);
v___x_1125_ = l_Lean_ExprStructEq_beq(v_key_1122_, v_a_1119_);
if (v___x_1125_ == 0)
{
v_x_1120_ = v_tail_1124_;
goto _start;
}
else
{
lean_object* v___x_1127_; 
lean_inc(v_value_1123_);
v___x_1127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1127_, 0, v_value_1123_);
return v___x_1127_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg___boxed(lean_object* v_a_1128_, lean_object* v_x_1129_){
_start:
{
lean_object* v_res_1130_; 
v_res_1130_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg(v_a_1128_, v_x_1129_);
lean_dec(v_x_1129_);
lean_dec_ref(v_a_1128_);
return v_res_1130_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___redArg(lean_object* v_m_1131_, lean_object* v_a_1132_){
_start:
{
lean_object* v_buckets_1133_; lean_object* v___x_1134_; uint64_t v___x_1135_; uint64_t v___x_1136_; uint64_t v___x_1137_; uint64_t v_fold_1138_; uint64_t v___x_1139_; uint64_t v___x_1140_; uint64_t v___x_1141_; size_t v___x_1142_; size_t v___x_1143_; size_t v___x_1144_; size_t v___x_1145_; size_t v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; 
v_buckets_1133_ = lean_ctor_get(v_m_1131_, 1);
v___x_1134_ = lean_array_get_size(v_buckets_1133_);
v___x_1135_ = l_Lean_ExprStructEq_hash(v_a_1132_);
v___x_1136_ = 32ULL;
v___x_1137_ = lean_uint64_shift_right(v___x_1135_, v___x_1136_);
v_fold_1138_ = lean_uint64_xor(v___x_1135_, v___x_1137_);
v___x_1139_ = 16ULL;
v___x_1140_ = lean_uint64_shift_right(v_fold_1138_, v___x_1139_);
v___x_1141_ = lean_uint64_xor(v_fold_1138_, v___x_1140_);
v___x_1142_ = lean_uint64_to_usize(v___x_1141_);
v___x_1143_ = lean_usize_of_nat(v___x_1134_);
v___x_1144_ = ((size_t)1ULL);
v___x_1145_ = lean_usize_sub(v___x_1143_, v___x_1144_);
v___x_1146_ = lean_usize_land(v___x_1142_, v___x_1145_);
v___x_1147_ = lean_array_uget_borrowed(v_buckets_1133_, v___x_1146_);
v___x_1148_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg(v_a_1132_, v___x_1147_);
return v___x_1148_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___redArg___boxed(lean_object* v_m_1149_, lean_object* v_a_1150_){
_start:
{
lean_object* v_res_1151_; 
v_res_1151_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___redArg(v_m_1149_, v_a_1150_);
lean_dec_ref(v_a_1150_);
lean_dec_ref(v_m_1149_);
return v_res_1151_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0(lean_object* v_00_u03b1_1152_, lean_object* v_x_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_){
_start:
{
lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; 
v___x_1160_ = lean_apply_1(v_x_1153_, lean_box(0));
v___x_1161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1161_, 0, v___x_1160_);
lean_ctor_set(v___x_1161_, 1, v___y_1154_);
v___x_1162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1162_, 0, v___x_1161_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0___boxed(lean_object* v_00_u03b1_1163_, lean_object* v_x_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_){
_start:
{
lean_object* v_res_1171_; 
v_res_1171_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0(v_00_u03b1_1163_, v_x_1164_, v___y_1165_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_);
lean_dec(v___y_1169_);
lean_dec_ref(v___y_1168_);
lean_dec(v___y_1167_);
lean_dec_ref(v___y_1166_);
return v_res_1171_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___lam__0___boxed(lean_object* v_fvars_1172_, lean_object* v_pre_1173_, lean_object* v_post_1174_, lean_object* v_usedLetOnly_1175_, lean_object* v_skipConstInApp_1176_, lean_object* v_skipInstances_1177_, lean_object* v_body_1178_, lean_object* v_x_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_){
_start:
{
uint8_t v_usedLetOnly_boxed_1187_; uint8_t v_skipConstInApp_boxed_1188_; uint8_t v_skipInstances_boxed_1189_; lean_object* v_res_1190_; 
v_usedLetOnly_boxed_1187_ = lean_unbox(v_usedLetOnly_1175_);
v_skipConstInApp_boxed_1188_ = lean_unbox(v_skipConstInApp_1176_);
v_skipInstances_boxed_1189_ = lean_unbox(v_skipInstances_1177_);
v_res_1190_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___lam__0(v_fvars_1172_, v_pre_1173_, v_post_1174_, v_usedLetOnly_boxed_1187_, v_skipConstInApp_boxed_1188_, v_skipInstances_boxed_1189_, v_body_1178_, v_x_1179_, v___y_1180_, v___y_1181_, v___y_1182_, v___y_1183_, v___y_1184_, v___y_1185_);
lean_dec(v___y_1185_);
lean_dec_ref(v___y_1184_);
lean_dec(v___y_1183_);
lean_dec_ref(v___y_1182_);
lean_dec(v___y_1180_);
return v_res_1190_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___lam__0(lean_object* v_fvars_1194_, lean_object* v_pre_1195_, lean_object* v_post_1196_, uint8_t v_usedLetOnly_1197_, uint8_t v_skipConstInApp_1198_, uint8_t v_skipInstances_1199_, lean_object* v_body_1200_, lean_object* v_x_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_){
_start:
{
lean_object* v___x_1209_; lean_object* v___x_1210_; 
v___x_1209_ = lean_array_push(v_fvars_1194_, v_x_1201_);
v___x_1210_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14(v_pre_1195_, v_post_1196_, v_usedLetOnly_1197_, v_skipConstInApp_1198_, v_skipInstances_1199_, v___x_1209_, v_body_1200_, v___y_1202_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_, v___y_1207_);
return v___x_1210_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___lam__0___boxed(lean_object* v_fvars_1211_, lean_object* v_pre_1212_, lean_object* v_post_1213_, lean_object* v_usedLetOnly_1214_, lean_object* v_skipConstInApp_1215_, lean_object* v_skipInstances_1216_, lean_object* v_body_1217_, lean_object* v_x_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_){
_start:
{
uint8_t v_usedLetOnly_boxed_1226_; uint8_t v_skipConstInApp_boxed_1227_; uint8_t v_skipInstances_boxed_1228_; lean_object* v_res_1229_; 
v_usedLetOnly_boxed_1226_ = lean_unbox(v_usedLetOnly_1214_);
v_skipConstInApp_boxed_1227_ = lean_unbox(v_skipConstInApp_1215_);
v_skipInstances_boxed_1228_ = lean_unbox(v_skipInstances_1216_);
v_res_1229_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___lam__0(v_fvars_1211_, v_pre_1212_, v_post_1213_, v_usedLetOnly_boxed_1226_, v_skipConstInApp_boxed_1227_, v_skipInstances_boxed_1228_, v_body_1217_, v_x_1218_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_, v___y_1224_);
lean_dec(v___y_1224_);
lean_dec_ref(v___y_1223_);
lean_dec(v___y_1222_);
lean_dec_ref(v___y_1221_);
lean_dec(v___y_1219_);
return v_res_1229_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(lean_object* v_pre_1230_, lean_object* v_post_1231_, uint8_t v_usedLetOnly_1232_, uint8_t v_skipConstInApp_1233_, uint8_t v_skipInstances_1234_, lean_object* v_e_1235_, lean_object* v_a_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_){
_start:
{
lean_object* v___x_1243_; 
lean_inc_ref(v_post_1231_);
lean_inc(v___y_1241_);
lean_inc_ref(v___y_1240_);
lean_inc(v___y_1239_);
lean_inc_ref(v___y_1238_);
lean_inc_ref(v_e_1235_);
v___x_1243_ = lean_apply_7(v_post_1231_, v_e_1235_, v___y_1237_, v___y_1238_, v___y_1239_, v___y_1240_, v___y_1241_, lean_box(0));
if (lean_obj_tag(v___x_1243_) == 0)
{
lean_object* v_a_1244_; lean_object* v___x_1246_; uint8_t v_isShared_1247_; uint8_t v_isSharedCheck_1275_; 
v_a_1244_ = lean_ctor_get(v___x_1243_, 0);
v_isSharedCheck_1275_ = !lean_is_exclusive(v___x_1243_);
if (v_isSharedCheck_1275_ == 0)
{
v___x_1246_ = v___x_1243_;
v_isShared_1247_ = v_isSharedCheck_1275_;
goto v_resetjp_1245_;
}
else
{
lean_inc(v_a_1244_);
lean_dec(v___x_1243_);
v___x_1246_ = lean_box(0);
v_isShared_1247_ = v_isSharedCheck_1275_;
goto v_resetjp_1245_;
}
v_resetjp_1245_:
{
lean_object* v_fst_1248_; lean_object* v_snd_1249_; lean_object* v___x_1251_; uint8_t v_isShared_1252_; uint8_t v_isSharedCheck_1274_; 
v_fst_1248_ = lean_ctor_get(v_a_1244_, 0);
v_snd_1249_ = lean_ctor_get(v_a_1244_, 1);
v_isSharedCheck_1274_ = !lean_is_exclusive(v_a_1244_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1251_ = v_a_1244_;
v_isShared_1252_ = v_isSharedCheck_1274_;
goto v_resetjp_1250_;
}
else
{
lean_inc(v_snd_1249_);
lean_inc(v_fst_1248_);
lean_dec(v_a_1244_);
v___x_1251_ = lean_box(0);
v_isShared_1252_ = v_isSharedCheck_1274_;
goto v_resetjp_1250_;
}
v_resetjp_1250_:
{
lean_object* v___y_1254_; 
switch(lean_obj_tag(v_fst_1248_))
{
case 0:
{
lean_object* v_e_1261_; lean_object* v___x_1263_; uint8_t v_isShared_1264_; uint8_t v_isSharedCheck_1269_; 
lean_del_object(v___x_1251_);
lean_del_object(v___x_1246_);
lean_dec_ref(v_e_1235_);
lean_dec_ref(v_post_1231_);
lean_dec_ref(v_pre_1230_);
v_e_1261_ = lean_ctor_get(v_fst_1248_, 0);
v_isSharedCheck_1269_ = !lean_is_exclusive(v_fst_1248_);
if (v_isSharedCheck_1269_ == 0)
{
v___x_1263_ = v_fst_1248_;
v_isShared_1264_ = v_isSharedCheck_1269_;
goto v_resetjp_1262_;
}
else
{
lean_inc(v_e_1261_);
lean_dec(v_fst_1248_);
v___x_1263_ = lean_box(0);
v_isShared_1264_ = v_isSharedCheck_1269_;
goto v_resetjp_1262_;
}
v_resetjp_1262_:
{
lean_object* v___x_1265_; lean_object* v___x_1267_; 
v___x_1265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1265_, 0, v_e_1261_);
lean_ctor_set(v___x_1265_, 1, v_snd_1249_);
if (v_isShared_1264_ == 0)
{
lean_ctor_set(v___x_1263_, 0, v___x_1265_);
v___x_1267_ = v___x_1263_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1268_; 
v_reuseFailAlloc_1268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1268_, 0, v___x_1265_);
v___x_1267_ = v_reuseFailAlloc_1268_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
return v___x_1267_;
}
}
}
case 1:
{
lean_object* v_e_1270_; lean_object* v___x_1271_; 
lean_del_object(v___x_1251_);
lean_del_object(v___x_1246_);
lean_dec_ref(v_e_1235_);
v_e_1270_ = lean_ctor_get(v_fst_1248_, 0);
lean_inc_ref(v_e_1270_);
lean_dec_ref_known(v_fst_1248_, 1);
v___x_1271_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1230_, v_post_1231_, v_usedLetOnly_1232_, v_skipConstInApp_1233_, v_skipInstances_1234_, v_e_1270_, v_a_1236_, v_snd_1249_, v___y_1238_, v___y_1239_, v___y_1240_, v___y_1241_);
return v___x_1271_;
}
default: 
{
lean_object* v_e_x3f_1272_; 
lean_dec_ref(v_post_1231_);
lean_dec_ref(v_pre_1230_);
v_e_x3f_1272_ = lean_ctor_get(v_fst_1248_, 0);
lean_inc(v_e_x3f_1272_);
lean_dec_ref_known(v_fst_1248_, 1);
if (lean_obj_tag(v_e_x3f_1272_) == 0)
{
v___y_1254_ = v_e_1235_;
goto v___jp_1253_;
}
else
{
lean_object* v_val_1273_; 
lean_dec_ref(v_e_1235_);
v_val_1273_ = lean_ctor_get(v_e_x3f_1272_, 0);
lean_inc(v_val_1273_);
lean_dec_ref_known(v_e_x3f_1272_, 1);
v___y_1254_ = v_val_1273_;
goto v___jp_1253_;
}
}
}
v___jp_1253_:
{
lean_object* v___x_1256_; 
if (v_isShared_1252_ == 0)
{
lean_ctor_set(v___x_1251_, 0, v___y_1254_);
v___x_1256_ = v___x_1251_;
goto v_reusejp_1255_;
}
else
{
lean_object* v_reuseFailAlloc_1260_; 
v_reuseFailAlloc_1260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1260_, 0, v___y_1254_);
lean_ctor_set(v_reuseFailAlloc_1260_, 1, v_snd_1249_);
v___x_1256_ = v_reuseFailAlloc_1260_;
goto v_reusejp_1255_;
}
v_reusejp_1255_:
{
lean_object* v___x_1258_; 
if (v_isShared_1247_ == 0)
{
lean_ctor_set(v___x_1246_, 0, v___x_1256_);
v___x_1258_ = v___x_1246_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v___x_1256_);
v___x_1258_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
return v___x_1258_;
}
}
}
}
}
}
else
{
lean_object* v_a_1276_; lean_object* v___x_1278_; uint8_t v_isShared_1279_; uint8_t v_isSharedCheck_1283_; 
lean_dec_ref(v_e_1235_);
lean_dec_ref(v_post_1231_);
lean_dec_ref(v_pre_1230_);
v_a_1276_ = lean_ctor_get(v___x_1243_, 0);
v_isSharedCheck_1283_ = !lean_is_exclusive(v___x_1243_);
if (v_isSharedCheck_1283_ == 0)
{
v___x_1278_ = v___x_1243_;
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
else
{
lean_inc(v_a_1276_);
lean_dec(v___x_1243_);
v___x_1278_ = lean_box(0);
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
v_resetjp_1277_:
{
lean_object* v___x_1281_; 
if (v_isShared_1279_ == 0)
{
v___x_1281_ = v___x_1278_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v_a_1276_);
v___x_1281_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
return v___x_1281_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14(lean_object* v_pre_1284_, lean_object* v_post_1285_, uint8_t v_usedLetOnly_1286_, uint8_t v_skipConstInApp_1287_, uint8_t v_skipInstances_1288_, lean_object* v_fvars_1289_, lean_object* v_e_1290_, lean_object* v_a_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_){
_start:
{
if (lean_obj_tag(v_e_1290_) == 6)
{
lean_object* v_binderName_1298_; lean_object* v_binderType_1299_; lean_object* v_body_1300_; uint8_t v_binderInfo_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___f_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; 
v_binderName_1298_ = lean_ctor_get(v_e_1290_, 0);
lean_inc(v_binderName_1298_);
v_binderType_1299_ = lean_ctor_get(v_e_1290_, 1);
lean_inc_ref(v_binderType_1299_);
v_body_1300_ = lean_ctor_get(v_e_1290_, 2);
lean_inc_ref(v_body_1300_);
v_binderInfo_1301_ = lean_ctor_get_uint8(v_e_1290_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_1290_, 3);
v___x_1302_ = lean_box(v_usedLetOnly_1286_);
v___x_1303_ = lean_box(v_skipConstInApp_1287_);
v___x_1304_ = lean_box(v_skipInstances_1288_);
lean_inc_ref(v_post_1285_);
lean_inc_ref(v_pre_1284_);
lean_inc_ref(v_fvars_1289_);
v___f_1305_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___lam__0___boxed), 15, 7);
lean_closure_set(v___f_1305_, 0, v_fvars_1289_);
lean_closure_set(v___f_1305_, 1, v_pre_1284_);
lean_closure_set(v___f_1305_, 2, v_post_1285_);
lean_closure_set(v___f_1305_, 3, v___x_1302_);
lean_closure_set(v___f_1305_, 4, v___x_1303_);
lean_closure_set(v___f_1305_, 5, v___x_1304_);
lean_closure_set(v___f_1305_, 6, v_body_1300_);
v___x_1306_ = lean_expr_instantiate_rev(v_binderType_1299_, v_fvars_1289_);
lean_dec_ref(v_fvars_1289_);
lean_dec_ref(v_binderType_1299_);
v___x_1307_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1284_, v_post_1285_, v_usedLetOnly_1286_, v_skipConstInApp_1287_, v_skipInstances_1288_, v___x_1306_, v_a_1291_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_);
if (lean_obj_tag(v___x_1307_) == 0)
{
lean_object* v_a_1308_; lean_object* v_fst_1309_; lean_object* v_snd_1310_; uint8_t v___x_1311_; lean_object* v___x_1312_; 
v_a_1308_ = lean_ctor_get(v___x_1307_, 0);
lean_inc(v_a_1308_);
lean_dec_ref_known(v___x_1307_, 1);
v_fst_1309_ = lean_ctor_get(v_a_1308_, 0);
lean_inc(v_fst_1309_);
v_snd_1310_ = lean_ctor_get(v_a_1308_, 1);
lean_inc(v_snd_1310_);
lean_dec(v_a_1308_);
v___x_1311_ = 0;
v___x_1312_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__18___redArg(v_binderName_1298_, v_binderInfo_1301_, v_fst_1309_, v___f_1305_, v___x_1311_, v_a_1291_, v_snd_1310_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_);
return v___x_1312_;
}
else
{
lean_dec_ref(v___f_1305_);
lean_dec(v_binderName_1298_);
return v___x_1307_;
}
}
else
{
lean_object* v___x_1313_; lean_object* v___x_1314_; 
v___x_1313_ = lean_expr_instantiate_rev(v_e_1290_, v_fvars_1289_);
lean_dec_ref(v_e_1290_);
lean_inc_ref(v_post_1285_);
lean_inc_ref(v_pre_1284_);
v___x_1314_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1284_, v_post_1285_, v_usedLetOnly_1286_, v_skipConstInApp_1287_, v_skipInstances_1288_, v___x_1313_, v_a_1291_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_);
if (lean_obj_tag(v___x_1314_) == 0)
{
lean_object* v_a_1315_; lean_object* v_fst_1316_; lean_object* v_snd_1317_; uint8_t v___x_1318_; uint8_t v___x_1319_; uint8_t v___x_1320_; lean_object* v___x_1321_; 
v_a_1315_ = lean_ctor_get(v___x_1314_, 0);
lean_inc(v_a_1315_);
lean_dec_ref_known(v___x_1314_, 1);
v_fst_1316_ = lean_ctor_get(v_a_1315_, 0);
lean_inc(v_fst_1316_);
v_snd_1317_ = lean_ctor_get(v_a_1315_, 1);
lean_inc(v_snd_1317_);
lean_dec(v_a_1315_);
v___x_1318_ = 0;
v___x_1319_ = 1;
v___x_1320_ = 1;
v___x_1321_ = l_Lean_Meta_mkLambdaFVars(v_fvars_1289_, v_fst_1316_, v___x_1318_, v_usedLetOnly_1286_, v___x_1318_, v___x_1319_, v___x_1320_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_);
lean_dec_ref(v_fvars_1289_);
if (lean_obj_tag(v___x_1321_) == 0)
{
lean_object* v_a_1322_; lean_object* v___x_1323_; 
v_a_1322_ = lean_ctor_get(v___x_1321_, 0);
lean_inc(v_a_1322_);
lean_dec_ref_known(v___x_1321_, 1);
v___x_1323_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(v_pre_1284_, v_post_1285_, v_usedLetOnly_1286_, v_skipConstInApp_1287_, v_skipInstances_1288_, v_a_1322_, v_a_1291_, v_snd_1317_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_);
return v___x_1323_;
}
else
{
lean_object* v_a_1324_; lean_object* v___x_1326_; uint8_t v_isShared_1327_; uint8_t v_isSharedCheck_1331_; 
lean_dec(v_snd_1317_);
lean_dec_ref(v_post_1285_);
lean_dec_ref(v_pre_1284_);
v_a_1324_ = lean_ctor_get(v___x_1321_, 0);
v_isSharedCheck_1331_ = !lean_is_exclusive(v___x_1321_);
if (v_isSharedCheck_1331_ == 0)
{
v___x_1326_ = v___x_1321_;
v_isShared_1327_ = v_isSharedCheck_1331_;
goto v_resetjp_1325_;
}
else
{
lean_inc(v_a_1324_);
lean_dec(v___x_1321_);
v___x_1326_ = lean_box(0);
v_isShared_1327_ = v_isSharedCheck_1331_;
goto v_resetjp_1325_;
}
v_resetjp_1325_:
{
lean_object* v___x_1329_; 
if (v_isShared_1327_ == 0)
{
v___x_1329_ = v___x_1326_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1330_; 
v_reuseFailAlloc_1330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1330_, 0, v_a_1324_);
v___x_1329_ = v_reuseFailAlloc_1330_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
return v___x_1329_;
}
}
}
}
else
{
lean_dec_ref(v_fvars_1289_);
lean_dec_ref(v_post_1285_);
lean_dec_ref(v_pre_1284_);
return v___x_1314_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15___lam__0(lean_object* v_fvars_1332_, lean_object* v_pre_1333_, lean_object* v_post_1334_, uint8_t v_usedLetOnly_1335_, uint8_t v_skipConstInApp_1336_, uint8_t v_skipInstances_1337_, lean_object* v_body_1338_, lean_object* v_x_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_){
_start:
{
lean_object* v___x_1347_; lean_object* v___x_1348_; 
v___x_1347_ = lean_array_push(v_fvars_1332_, v_x_1339_);
v___x_1348_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15(v_pre_1333_, v_post_1334_, v_usedLetOnly_1335_, v_skipConstInApp_1336_, v_skipInstances_1337_, v___x_1347_, v_body_1338_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_);
return v___x_1348_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15___lam__0___boxed(lean_object* v_fvars_1349_, lean_object* v_pre_1350_, lean_object* v_post_1351_, lean_object* v_usedLetOnly_1352_, lean_object* v_skipConstInApp_1353_, lean_object* v_skipInstances_1354_, lean_object* v_body_1355_, lean_object* v_x_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_){
_start:
{
uint8_t v_usedLetOnly_boxed_1364_; uint8_t v_skipConstInApp_boxed_1365_; uint8_t v_skipInstances_boxed_1366_; lean_object* v_res_1367_; 
v_usedLetOnly_boxed_1364_ = lean_unbox(v_usedLetOnly_1352_);
v_skipConstInApp_boxed_1365_ = lean_unbox(v_skipConstInApp_1353_);
v_skipInstances_boxed_1366_ = lean_unbox(v_skipInstances_1354_);
v_res_1367_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15___lam__0(v_fvars_1349_, v_pre_1350_, v_post_1351_, v_usedLetOnly_boxed_1364_, v_skipConstInApp_boxed_1365_, v_skipInstances_boxed_1366_, v_body_1355_, v_x_1356_, v___y_1357_, v___y_1358_, v___y_1359_, v___y_1360_, v___y_1361_, v___y_1362_);
lean_dec(v___y_1362_);
lean_dec_ref(v___y_1361_);
lean_dec(v___y_1360_);
lean_dec_ref(v___y_1359_);
lean_dec(v___y_1357_);
return v_res_1367_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15(lean_object* v_pre_1368_, lean_object* v_post_1369_, uint8_t v_usedLetOnly_1370_, uint8_t v_skipConstInApp_1371_, uint8_t v_skipInstances_1372_, lean_object* v_fvars_1373_, lean_object* v_e_1374_, lean_object* v_a_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_){
_start:
{
if (lean_obj_tag(v_e_1374_) == 8)
{
lean_object* v_declName_1382_; lean_object* v_type_1383_; lean_object* v_value_1384_; lean_object* v_body_1385_; uint8_t v_nondep_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___f_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; 
v_declName_1382_ = lean_ctor_get(v_e_1374_, 0);
lean_inc(v_declName_1382_);
v_type_1383_ = lean_ctor_get(v_e_1374_, 1);
lean_inc_ref(v_type_1383_);
v_value_1384_ = lean_ctor_get(v_e_1374_, 2);
lean_inc_ref(v_value_1384_);
v_body_1385_ = lean_ctor_get(v_e_1374_, 3);
lean_inc_ref(v_body_1385_);
v_nondep_1386_ = lean_ctor_get_uint8(v_e_1374_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_1374_, 4);
v___x_1387_ = lean_box(v_usedLetOnly_1370_);
v___x_1388_ = lean_box(v_skipConstInApp_1371_);
v___x_1389_ = lean_box(v_skipInstances_1372_);
lean_inc_ref_n(v_post_1369_, 2);
lean_inc_ref_n(v_pre_1368_, 2);
lean_inc_ref(v_fvars_1373_);
v___f_1390_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15___lam__0___boxed), 15, 7);
lean_closure_set(v___f_1390_, 0, v_fvars_1373_);
lean_closure_set(v___f_1390_, 1, v_pre_1368_);
lean_closure_set(v___f_1390_, 2, v_post_1369_);
lean_closure_set(v___f_1390_, 3, v___x_1387_);
lean_closure_set(v___f_1390_, 4, v___x_1388_);
lean_closure_set(v___f_1390_, 5, v___x_1389_);
lean_closure_set(v___f_1390_, 6, v_body_1385_);
v___x_1391_ = lean_expr_instantiate_rev(v_type_1383_, v_fvars_1373_);
lean_dec_ref(v_type_1383_);
v___x_1392_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1368_, v_post_1369_, v_usedLetOnly_1370_, v_skipConstInApp_1371_, v_skipInstances_1372_, v___x_1391_, v_a_1375_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_);
if (lean_obj_tag(v___x_1392_) == 0)
{
lean_object* v_a_1393_; lean_object* v_fst_1394_; lean_object* v_snd_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; 
v_a_1393_ = lean_ctor_get(v___x_1392_, 0);
lean_inc(v_a_1393_);
lean_dec_ref_known(v___x_1392_, 1);
v_fst_1394_ = lean_ctor_get(v_a_1393_, 0);
lean_inc(v_fst_1394_);
v_snd_1395_ = lean_ctor_get(v_a_1393_, 1);
lean_inc(v_snd_1395_);
lean_dec(v_a_1393_);
v___x_1396_ = lean_expr_instantiate_rev(v_value_1384_, v_fvars_1373_);
lean_dec_ref(v_fvars_1373_);
lean_dec_ref(v_value_1384_);
v___x_1397_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1368_, v_post_1369_, v_usedLetOnly_1370_, v_skipConstInApp_1371_, v_skipInstances_1372_, v___x_1396_, v_a_1375_, v_snd_1395_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_);
if (lean_obj_tag(v___x_1397_) == 0)
{
lean_object* v_a_1398_; lean_object* v_fst_1399_; lean_object* v_snd_1400_; uint8_t v___x_1401_; lean_object* v___x_1402_; 
v_a_1398_ = lean_ctor_get(v___x_1397_, 0);
lean_inc(v_a_1398_);
lean_dec_ref_known(v___x_1397_, 1);
v_fst_1399_ = lean_ctor_get(v_a_1398_, 0);
lean_inc(v_fst_1399_);
v_snd_1400_ = lean_ctor_get(v_a_1398_, 1);
lean_inc(v_snd_1400_);
lean_dec(v_a_1398_);
v___x_1401_ = 0;
v___x_1402_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15_spec__21___redArg(v_declName_1382_, v_fst_1394_, v_fst_1399_, v___f_1390_, v_nondep_1386_, v___x_1401_, v_a_1375_, v_snd_1400_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_);
return v___x_1402_;
}
else
{
lean_dec(v_fst_1394_);
lean_dec_ref(v___f_1390_);
lean_dec(v_declName_1382_);
return v___x_1397_;
}
}
else
{
lean_dec_ref(v___f_1390_);
lean_dec_ref(v_value_1384_);
lean_dec(v_declName_1382_);
lean_dec_ref(v_fvars_1373_);
lean_dec_ref(v_post_1369_);
lean_dec_ref(v_pre_1368_);
return v___x_1392_;
}
}
else
{
lean_object* v___x_1403_; lean_object* v___x_1404_; 
v___x_1403_ = lean_expr_instantiate_rev(v_e_1374_, v_fvars_1373_);
lean_dec_ref(v_e_1374_);
lean_inc_ref(v_post_1369_);
lean_inc_ref(v_pre_1368_);
v___x_1404_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1368_, v_post_1369_, v_usedLetOnly_1370_, v_skipConstInApp_1371_, v_skipInstances_1372_, v___x_1403_, v_a_1375_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_);
if (lean_obj_tag(v___x_1404_) == 0)
{
lean_object* v_a_1405_; lean_object* v_fst_1406_; lean_object* v_snd_1407_; uint8_t v___x_1408_; uint8_t v___x_1409_; lean_object* v___x_1410_; 
v_a_1405_ = lean_ctor_get(v___x_1404_, 0);
lean_inc(v_a_1405_);
lean_dec_ref_known(v___x_1404_, 1);
v_fst_1406_ = lean_ctor_get(v_a_1405_, 0);
lean_inc(v_fst_1406_);
v_snd_1407_ = lean_ctor_get(v_a_1405_, 1);
lean_inc(v_snd_1407_);
lean_dec(v_a_1405_);
v___x_1408_ = 0;
v___x_1409_ = 1;
v___x_1410_ = l_Lean_Meta_mkLetFVars(v_fvars_1373_, v_fst_1406_, v_usedLetOnly_1370_, v___x_1408_, v___x_1409_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_);
lean_dec_ref(v_fvars_1373_);
if (lean_obj_tag(v___x_1410_) == 0)
{
lean_object* v_a_1411_; lean_object* v___x_1412_; 
v_a_1411_ = lean_ctor_get(v___x_1410_, 0);
lean_inc(v_a_1411_);
lean_dec_ref_known(v___x_1410_, 1);
v___x_1412_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(v_pre_1368_, v_post_1369_, v_usedLetOnly_1370_, v_skipConstInApp_1371_, v_skipInstances_1372_, v_a_1411_, v_a_1375_, v_snd_1407_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_);
return v___x_1412_;
}
else
{
lean_object* v_a_1413_; lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1420_; 
lean_dec(v_snd_1407_);
lean_dec_ref(v_post_1369_);
lean_dec_ref(v_pre_1368_);
v_a_1413_ = lean_ctor_get(v___x_1410_, 0);
v_isSharedCheck_1420_ = !lean_is_exclusive(v___x_1410_);
if (v_isSharedCheck_1420_ == 0)
{
v___x_1415_ = v___x_1410_;
v_isShared_1416_ = v_isSharedCheck_1420_;
goto v_resetjp_1414_;
}
else
{
lean_inc(v_a_1413_);
lean_dec(v___x_1410_);
v___x_1415_ = lean_box(0);
v_isShared_1416_ = v_isSharedCheck_1420_;
goto v_resetjp_1414_;
}
v_resetjp_1414_:
{
lean_object* v___x_1418_; 
if (v_isShared_1416_ == 0)
{
v___x_1418_ = v___x_1415_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1419_; 
v_reuseFailAlloc_1419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1419_, 0, v_a_1413_);
v___x_1418_ = v_reuseFailAlloc_1419_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
return v___x_1418_;
}
}
}
}
else
{
lean_dec_ref(v_fvars_1373_);
lean_dec_ref(v_post_1369_);
lean_dec_ref(v_pre_1368_);
return v___x_1404_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(lean_object* v_pre_1421_, lean_object* v_post_1422_, uint8_t v_usedLetOnly_1423_, uint8_t v_skipConstInApp_1424_, uint8_t v_skipInstances_1425_, size_t v_sz_1426_, size_t v_i_1427_, lean_object* v_bs_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_){
_start:
{
uint8_t v___x_1436_; 
v___x_1436_ = lean_usize_dec_lt(v_i_1427_, v_sz_1426_);
if (v___x_1436_ == 0)
{
lean_object* v___x_1437_; lean_object* v___x_1438_; 
lean_dec_ref(v_post_1422_);
lean_dec_ref(v_pre_1421_);
v___x_1437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1437_, 0, v_bs_1428_);
lean_ctor_set(v___x_1437_, 1, v___y_1430_);
v___x_1438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1438_, 0, v___x_1437_);
return v___x_1438_;
}
else
{
lean_object* v_v_1439_; lean_object* v___x_1440_; lean_object* v_bs_x27_1441_; lean_object* v___x_1442_; 
v_v_1439_ = lean_array_uget(v_bs_1428_, v_i_1427_);
v___x_1440_ = lean_unsigned_to_nat(0u);
v_bs_x27_1441_ = lean_array_uset(v_bs_1428_, v_i_1427_, v___x_1440_);
lean_inc_ref(v_post_1422_);
lean_inc_ref(v_pre_1421_);
v___x_1442_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1421_, v_post_1422_, v_usedLetOnly_1423_, v_skipConstInApp_1424_, v_skipInstances_1425_, v_v_1439_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_, v___y_1433_, v___y_1434_);
if (lean_obj_tag(v___x_1442_) == 0)
{
lean_object* v_a_1443_; lean_object* v_fst_1444_; lean_object* v_snd_1445_; size_t v___x_1446_; size_t v___x_1447_; lean_object* v___x_1448_; 
v_a_1443_ = lean_ctor_get(v___x_1442_, 0);
lean_inc(v_a_1443_);
lean_dec_ref_known(v___x_1442_, 1);
v_fst_1444_ = lean_ctor_get(v_a_1443_, 0);
lean_inc(v_fst_1444_);
v_snd_1445_ = lean_ctor_get(v_a_1443_, 1);
lean_inc(v_snd_1445_);
lean_dec(v_a_1443_);
v___x_1446_ = ((size_t)1ULL);
v___x_1447_ = lean_usize_add(v_i_1427_, v___x_1446_);
v___x_1448_ = lean_array_uset(v_bs_x27_1441_, v_i_1427_, v_fst_1444_);
v_i_1427_ = v___x_1447_;
v_bs_1428_ = v___x_1448_;
v___y_1430_ = v_snd_1445_;
goto _start;
}
else
{
lean_object* v_a_1450_; lean_object* v___x_1452_; uint8_t v_isShared_1453_; uint8_t v_isSharedCheck_1457_; 
lean_dec_ref(v_bs_x27_1441_);
lean_dec_ref(v_post_1422_);
lean_dec_ref(v_pre_1421_);
v_a_1450_ = lean_ctor_get(v___x_1442_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v___x_1442_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1452_ = v___x_1442_;
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
else
{
lean_inc(v_a_1450_);
lean_dec(v___x_1442_);
v___x_1452_ = lean_box(0);
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
v_resetjp_1451_:
{
lean_object* v___x_1455_; 
if (v_isShared_1453_ == 0)
{
v___x_1455_ = v___x_1452_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v_a_1450_);
v___x_1455_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
return v___x_1455_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___lam__0(lean_object* v_pre_1458_, lean_object* v_post_1459_, uint8_t v_usedLetOnly_1460_, uint8_t v_skipConstInApp_1461_, uint8_t v_skipInstances_1462_, lean_object* v___x_1463_, lean_object* v___y_1464_, lean_object* v_b_1465_, lean_object* v_a_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_){
_start:
{
lean_object* v___x_1473_; 
v___x_1473_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1458_, v_post_1459_, v_usedLetOnly_1460_, v_skipConstInApp_1461_, v_skipInstances_1462_, v___x_1463_, v___y_1464_, v___y_1467_, v___y_1468_, v___y_1469_, v___y_1470_, v___y_1471_);
if (lean_obj_tag(v___x_1473_) == 0)
{
lean_object* v_a_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1492_; 
v_a_1474_ = lean_ctor_get(v___x_1473_, 0);
v_isSharedCheck_1492_ = !lean_is_exclusive(v___x_1473_);
if (v_isSharedCheck_1492_ == 0)
{
v___x_1476_ = v___x_1473_;
v_isShared_1477_ = v_isSharedCheck_1492_;
goto v_resetjp_1475_;
}
else
{
lean_inc(v_a_1474_);
lean_dec(v___x_1473_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1492_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
lean_object* v_fst_1478_; lean_object* v_snd_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1491_; 
v_fst_1478_ = lean_ctor_get(v_a_1474_, 0);
v_snd_1479_ = lean_ctor_get(v_a_1474_, 1);
v_isSharedCheck_1491_ = !lean_is_exclusive(v_a_1474_);
if (v_isSharedCheck_1491_ == 0)
{
v___x_1481_ = v_a_1474_;
v_isShared_1482_ = v_isSharedCheck_1491_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_snd_1479_);
lean_inc(v_fst_1478_);
lean_dec(v_a_1474_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1491_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1486_; 
v___x_1483_ = lean_array_fset(v_b_1465_, v_a_1466_, v_fst_1478_);
v___x_1484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1484_, 0, v___x_1483_);
if (v_isShared_1482_ == 0)
{
lean_ctor_set(v___x_1481_, 0, v___x_1484_);
v___x_1486_ = v___x_1481_;
goto v_reusejp_1485_;
}
else
{
lean_object* v_reuseFailAlloc_1490_; 
v_reuseFailAlloc_1490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1490_, 0, v___x_1484_);
lean_ctor_set(v_reuseFailAlloc_1490_, 1, v_snd_1479_);
v___x_1486_ = v_reuseFailAlloc_1490_;
goto v_reusejp_1485_;
}
v_reusejp_1485_:
{
lean_object* v___x_1488_; 
if (v_isShared_1477_ == 0)
{
lean_ctor_set(v___x_1476_, 0, v___x_1486_);
v___x_1488_ = v___x_1476_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v___x_1486_);
v___x_1488_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1487_;
}
v_reusejp_1487_:
{
return v___x_1488_;
}
}
}
}
}
else
{
lean_object* v_a_1493_; lean_object* v___x_1495_; uint8_t v_isShared_1496_; uint8_t v_isSharedCheck_1500_; 
lean_dec_ref(v_b_1465_);
v_a_1493_ = lean_ctor_get(v___x_1473_, 0);
v_isSharedCheck_1500_ = !lean_is_exclusive(v___x_1473_);
if (v_isSharedCheck_1500_ == 0)
{
v___x_1495_ = v___x_1473_;
v_isShared_1496_ = v_isSharedCheck_1500_;
goto v_resetjp_1494_;
}
else
{
lean_inc(v_a_1493_);
lean_dec(v___x_1473_);
v___x_1495_ = lean_box(0);
v_isShared_1496_ = v_isSharedCheck_1500_;
goto v_resetjp_1494_;
}
v_resetjp_1494_:
{
lean_object* v___x_1498_; 
if (v_isShared_1496_ == 0)
{
v___x_1498_ = v___x_1495_;
goto v_reusejp_1497_;
}
else
{
lean_object* v_reuseFailAlloc_1499_; 
v_reuseFailAlloc_1499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1499_, 0, v_a_1493_);
v___x_1498_ = v_reuseFailAlloc_1499_;
goto v_reusejp_1497_;
}
v_reusejp_1497_:
{
return v___x_1498_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___lam__0___boxed(lean_object* v_pre_1501_, lean_object* v_post_1502_, lean_object* v_usedLetOnly_1503_, lean_object* v_skipConstInApp_1504_, lean_object* v_skipInstances_1505_, lean_object* v___x_1506_, lean_object* v___y_1507_, lean_object* v_b_1508_, lean_object* v_a_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_){
_start:
{
uint8_t v_usedLetOnly_boxed_1516_; uint8_t v_skipConstInApp_boxed_1517_; uint8_t v_skipInstances_boxed_1518_; lean_object* v_res_1519_; 
v_usedLetOnly_boxed_1516_ = lean_unbox(v_usedLetOnly_1503_);
v_skipConstInApp_boxed_1517_ = lean_unbox(v_skipConstInApp_1504_);
v_skipInstances_boxed_1518_ = lean_unbox(v_skipInstances_1505_);
v_res_1519_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___lam__0(v_pre_1501_, v_post_1502_, v_usedLetOnly_boxed_1516_, v_skipConstInApp_boxed_1517_, v_skipInstances_boxed_1518_, v___x_1506_, v___y_1507_, v_b_1508_, v_a_1509_, v___y_1510_, v___y_1511_, v___y_1512_, v___y_1513_, v___y_1514_);
lean_dec(v___y_1514_);
lean_dec_ref(v___y_1513_);
lean_dec(v___y_1512_);
lean_dec_ref(v___y_1511_);
lean_dec(v_a_1509_);
lean_dec(v___y_1507_);
return v_res_1519_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg(lean_object* v_upperBound_1520_, lean_object* v___x_1521_, lean_object* v_pre_1522_, lean_object* v_post_1523_, uint8_t v_usedLetOnly_1524_, uint8_t v_skipConstInApp_1525_, uint8_t v_skipInstances_1526_, lean_object* v_a_1527_, lean_object* v_b_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_){
_start:
{
lean_object* v___y_1537_; uint8_t v___x_1571_; 
v___x_1571_ = lean_nat_dec_lt(v_a_1527_, v_upperBound_1520_);
if (v___x_1571_ == 0)
{
lean_object* v___x_1572_; lean_object* v___x_1573_; 
lean_dec(v_a_1527_);
lean_dec_ref(v_post_1523_);
lean_dec_ref(v_pre_1522_);
v___x_1572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1572_, 0, v_b_1528_);
lean_ctor_set(v___x_1572_, 1, v___y_1530_);
v___x_1573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1573_, 0, v___x_1572_);
return v___x_1573_;
}
else
{
lean_object* v___x_1574_; lean_object* v___x_1575_; uint8_t v___x_1576_; 
v___x_1574_ = lean_array_fget_borrowed(v_b_1528_, v_a_1527_);
v___x_1575_ = lean_array_get_size(v___x_1521_);
v___x_1576_ = lean_nat_dec_lt(v_a_1527_, v___x_1575_);
if (v___x_1576_ == 0)
{
lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___f_1580_; 
lean_inc(v___x_1574_);
v___x_1577_ = lean_box(v_usedLetOnly_1524_);
v___x_1578_ = lean_box(v_skipConstInApp_1525_);
v___x_1579_ = lean_box(v_skipInstances_1526_);
lean_inc(v_a_1527_);
lean_inc(v___y_1529_);
lean_inc_ref(v_post_1523_);
lean_inc_ref(v_pre_1522_);
v___f_1580_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___lam__0___boxed), 15, 9);
lean_closure_set(v___f_1580_, 0, v_pre_1522_);
lean_closure_set(v___f_1580_, 1, v_post_1523_);
lean_closure_set(v___f_1580_, 2, v___x_1577_);
lean_closure_set(v___f_1580_, 3, v___x_1578_);
lean_closure_set(v___f_1580_, 4, v___x_1579_);
lean_closure_set(v___f_1580_, 5, v___x_1574_);
lean_closure_set(v___f_1580_, 6, v___y_1529_);
lean_closure_set(v___f_1580_, 7, v_b_1528_);
lean_closure_set(v___f_1580_, 8, v_a_1527_);
v___y_1537_ = v___f_1580_;
goto v___jp_1536_;
}
else
{
lean_object* v___x_1581_; uint8_t v_isInstance_1582_; 
v___x_1581_ = lean_array_fget_borrowed(v___x_1521_, v_a_1527_);
v_isInstance_1582_ = lean_ctor_get_uint8(v___x_1581_, sizeof(void*)*1 + 4);
if (v_isInstance_1582_ == 0)
{
lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___f_1586_; 
lean_inc(v___x_1574_);
v___x_1583_ = lean_box(v_usedLetOnly_1524_);
v___x_1584_ = lean_box(v_skipConstInApp_1525_);
v___x_1585_ = lean_box(v_skipInstances_1526_);
lean_inc(v_a_1527_);
lean_inc(v___y_1529_);
lean_inc_ref(v_post_1523_);
lean_inc_ref(v_pre_1522_);
v___f_1586_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___lam__0___boxed), 15, 9);
lean_closure_set(v___f_1586_, 0, v_pre_1522_);
lean_closure_set(v___f_1586_, 1, v_post_1523_);
lean_closure_set(v___f_1586_, 2, v___x_1583_);
lean_closure_set(v___f_1586_, 3, v___x_1584_);
lean_closure_set(v___f_1586_, 4, v___x_1585_);
lean_closure_set(v___f_1586_, 5, v___x_1574_);
lean_closure_set(v___f_1586_, 6, v___y_1529_);
lean_closure_set(v___f_1586_, 7, v_b_1528_);
lean_closure_set(v___f_1586_, 8, v_a_1527_);
v___y_1537_ = v___f_1586_;
goto v___jp_1536_;
}
else
{
lean_object* v___x_1587_; lean_object* v___f_1588_; 
v___x_1587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1587_, 0, v_b_1528_);
v___f_1588_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___lam__2___boxed), 7, 1);
lean_closure_set(v___f_1588_, 0, v___x_1587_);
v___y_1537_ = v___f_1588_;
goto v___jp_1536_;
}
}
}
v___jp_1536_:
{
lean_object* v___x_1538_; 
lean_inc(v___y_1534_);
lean_inc_ref(v___y_1533_);
lean_inc(v___y_1532_);
lean_inc_ref(v___y_1531_);
v___x_1538_ = lean_apply_6(v___y_1537_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_, v___y_1534_, lean_box(0));
if (lean_obj_tag(v___x_1538_) == 0)
{
lean_object* v_a_1539_; lean_object* v___x_1541_; uint8_t v_isShared_1542_; uint8_t v_isSharedCheck_1562_; 
v_a_1539_ = lean_ctor_get(v___x_1538_, 0);
v_isSharedCheck_1562_ = !lean_is_exclusive(v___x_1538_);
if (v_isSharedCheck_1562_ == 0)
{
v___x_1541_ = v___x_1538_;
v_isShared_1542_ = v_isSharedCheck_1562_;
goto v_resetjp_1540_;
}
else
{
lean_inc(v_a_1539_);
lean_dec(v___x_1538_);
v___x_1541_ = lean_box(0);
v_isShared_1542_ = v_isSharedCheck_1562_;
goto v_resetjp_1540_;
}
v_resetjp_1540_:
{
lean_object* v_fst_1543_; 
v_fst_1543_ = lean_ctor_get(v_a_1539_, 0);
lean_inc(v_fst_1543_);
if (lean_obj_tag(v_fst_1543_) == 0)
{
lean_object* v_snd_1544_; lean_object* v___x_1546_; uint8_t v_isShared_1547_; uint8_t v_isSharedCheck_1555_; 
lean_dec(v_a_1527_);
lean_dec_ref(v_post_1523_);
lean_dec_ref(v_pre_1522_);
v_snd_1544_ = lean_ctor_get(v_a_1539_, 1);
v_isSharedCheck_1555_ = !lean_is_exclusive(v_a_1539_);
if (v_isSharedCheck_1555_ == 0)
{
lean_object* v_unused_1556_; 
v_unused_1556_ = lean_ctor_get(v_a_1539_, 0);
lean_dec(v_unused_1556_);
v___x_1546_ = v_a_1539_;
v_isShared_1547_ = v_isSharedCheck_1555_;
goto v_resetjp_1545_;
}
else
{
lean_inc(v_snd_1544_);
lean_dec(v_a_1539_);
v___x_1546_ = lean_box(0);
v_isShared_1547_ = v_isSharedCheck_1555_;
goto v_resetjp_1545_;
}
v_resetjp_1545_:
{
lean_object* v_a_1548_; lean_object* v___x_1550_; 
v_a_1548_ = lean_ctor_get(v_fst_1543_, 0);
lean_inc(v_a_1548_);
lean_dec_ref_known(v_fst_1543_, 1);
if (v_isShared_1547_ == 0)
{
lean_ctor_set(v___x_1546_, 0, v_a_1548_);
v___x_1550_ = v___x_1546_;
goto v_reusejp_1549_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v_a_1548_);
lean_ctor_set(v_reuseFailAlloc_1554_, 1, v_snd_1544_);
v___x_1550_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1549_;
}
v_reusejp_1549_:
{
lean_object* v___x_1552_; 
if (v_isShared_1542_ == 0)
{
lean_ctor_set(v___x_1541_, 0, v___x_1550_);
v___x_1552_ = v___x_1541_;
goto v_reusejp_1551_;
}
else
{
lean_object* v_reuseFailAlloc_1553_; 
v_reuseFailAlloc_1553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1553_, 0, v___x_1550_);
v___x_1552_ = v_reuseFailAlloc_1553_;
goto v_reusejp_1551_;
}
v_reusejp_1551_:
{
return v___x_1552_;
}
}
}
}
else
{
lean_object* v_snd_1557_; lean_object* v_a_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; 
lean_del_object(v___x_1541_);
v_snd_1557_ = lean_ctor_get(v_a_1539_, 1);
lean_inc(v_snd_1557_);
lean_dec(v_a_1539_);
v_a_1558_ = lean_ctor_get(v_fst_1543_, 0);
lean_inc(v_a_1558_);
lean_dec_ref_known(v_fst_1543_, 1);
v___x_1559_ = lean_unsigned_to_nat(1u);
v___x_1560_ = lean_nat_add(v_a_1527_, v___x_1559_);
lean_dec(v_a_1527_);
v_a_1527_ = v___x_1560_;
v_b_1528_ = v_a_1558_;
v___y_1530_ = v_snd_1557_;
goto _start;
}
}
}
else
{
lean_object* v_a_1563_; lean_object* v___x_1565_; uint8_t v_isShared_1566_; uint8_t v_isSharedCheck_1570_; 
lean_dec(v_a_1527_);
lean_dec_ref(v_post_1523_);
lean_dec_ref(v_pre_1522_);
v_a_1563_ = lean_ctor_get(v___x_1538_, 0);
v_isSharedCheck_1570_ = !lean_is_exclusive(v___x_1538_);
if (v_isSharedCheck_1570_ == 0)
{
v___x_1565_ = v___x_1538_;
v_isShared_1566_ = v_isSharedCheck_1570_;
goto v_resetjp_1564_;
}
else
{
lean_inc(v_a_1563_);
lean_dec(v___x_1538_);
v___x_1565_ = lean_box(0);
v_isShared_1566_ = v_isSharedCheck_1570_;
goto v_resetjp_1564_;
}
v_resetjp_1564_:
{
lean_object* v___x_1568_; 
if (v_isShared_1566_ == 0)
{
v___x_1568_ = v___x_1565_;
goto v_reusejp_1567_;
}
else
{
lean_object* v_reuseFailAlloc_1569_; 
v_reuseFailAlloc_1569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1569_, 0, v_a_1563_);
v___x_1568_ = v_reuseFailAlloc_1569_;
goto v_reusejp_1567_;
}
v_reusejp_1567_:
{
return v___x_1568_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16(uint8_t v_skipInstances_1589_, lean_object* v_pre_1590_, lean_object* v_post_1591_, uint8_t v_usedLetOnly_1592_, uint8_t v_skipConstInApp_1593_, lean_object* v_x_1594_, lean_object* v_x_1595_, lean_object* v_x_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_){
_start:
{
lean_object* v_f_1605_; lean_object* v___y_1606_; lean_object* v___y_1607_; lean_object* v___y_1608_; lean_object* v___y_1609_; lean_object* v___y_1610_; lean_object* v___y_1611_; 
if (lean_obj_tag(v_x_1594_) == 5)
{
lean_object* v_fn_1660_; lean_object* v_arg_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; 
v_fn_1660_ = lean_ctor_get(v_x_1594_, 0);
lean_inc_ref(v_fn_1660_);
v_arg_1661_ = lean_ctor_get(v_x_1594_, 1);
lean_inc_ref(v_arg_1661_);
lean_dec_ref_known(v_x_1594_, 2);
v___x_1662_ = lean_array_set(v_x_1595_, v_x_1596_, v_arg_1661_);
v___x_1663_ = lean_unsigned_to_nat(1u);
v___x_1664_ = lean_nat_sub(v_x_1596_, v___x_1663_);
lean_dec(v_x_1596_);
v_x_1594_ = v_fn_1660_;
v_x_1595_ = v___x_1662_;
v_x_1596_ = v___x_1664_;
goto _start;
}
else
{
lean_dec(v_x_1596_);
if (v_skipConstInApp_1593_ == 0)
{
goto v___jp_1655_;
}
else
{
uint8_t v___x_1666_; 
v___x_1666_ = l_Lean_Expr_isConst(v_x_1594_);
if (v___x_1666_ == 0)
{
goto v___jp_1655_;
}
else
{
v_f_1605_ = v_x_1594_;
v___y_1606_ = v___y_1597_;
v___y_1607_ = v___y_1598_;
v___y_1608_ = v___y_1599_;
v___y_1609_ = v___y_1600_;
v___y_1610_ = v___y_1601_;
v___y_1611_ = v___y_1602_;
goto v___jp_1604_;
}
}
}
v___jp_1604_:
{
if (v_skipInstances_1589_ == 0)
{
size_t v_sz_1612_; size_t v___x_1613_; lean_object* v___x_1614_; 
v_sz_1612_ = lean_array_size(v_x_1595_);
v___x_1613_ = ((size_t)0ULL);
lean_inc_ref(v_post_1591_);
lean_inc_ref(v_pre_1590_);
v___x_1614_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1590_, v_post_1591_, v_usedLetOnly_1592_, v_skipConstInApp_1593_, v_skipInstances_1589_, v_sz_1612_, v___x_1613_, v_x_1595_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_);
if (lean_obj_tag(v___x_1614_) == 0)
{
lean_object* v_a_1615_; lean_object* v_fst_1616_; lean_object* v_snd_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; 
v_a_1615_ = lean_ctor_get(v___x_1614_, 0);
lean_inc(v_a_1615_);
lean_dec_ref_known(v___x_1614_, 1);
v_fst_1616_ = lean_ctor_get(v_a_1615_, 0);
lean_inc(v_fst_1616_);
v_snd_1617_ = lean_ctor_get(v_a_1615_, 1);
lean_inc(v_snd_1617_);
lean_dec(v_a_1615_);
v___x_1618_ = l_Lean_mkAppN(v_f_1605_, v_fst_1616_);
lean_dec(v_fst_1616_);
v___x_1619_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(v_pre_1590_, v_post_1591_, v_usedLetOnly_1592_, v_skipConstInApp_1593_, v_skipInstances_1589_, v___x_1618_, v___y_1606_, v_snd_1617_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_);
return v___x_1619_;
}
else
{
lean_object* v_a_1620_; lean_object* v___x_1622_; uint8_t v_isShared_1623_; uint8_t v_isSharedCheck_1627_; 
lean_dec_ref(v_f_1605_);
lean_dec_ref(v_post_1591_);
lean_dec_ref(v_pre_1590_);
v_a_1620_ = lean_ctor_get(v___x_1614_, 0);
v_isSharedCheck_1627_ = !lean_is_exclusive(v___x_1614_);
if (v_isSharedCheck_1627_ == 0)
{
v___x_1622_ = v___x_1614_;
v_isShared_1623_ = v_isSharedCheck_1627_;
goto v_resetjp_1621_;
}
else
{
lean_inc(v_a_1620_);
lean_dec(v___x_1614_);
v___x_1622_ = lean_box(0);
v_isShared_1623_ = v_isSharedCheck_1627_;
goto v_resetjp_1621_;
}
v_resetjp_1621_:
{
lean_object* v___x_1625_; 
if (v_isShared_1623_ == 0)
{
v___x_1625_ = v___x_1622_;
goto v_reusejp_1624_;
}
else
{
lean_object* v_reuseFailAlloc_1626_; 
v_reuseFailAlloc_1626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1626_, 0, v_a_1620_);
v___x_1625_ = v_reuseFailAlloc_1626_;
goto v_reusejp_1624_;
}
v_reusejp_1624_:
{
return v___x_1625_;
}
}
}
}
else
{
lean_object* v___x_1628_; lean_object* v___x_1629_; 
v___x_1628_ = lean_array_get_size(v_x_1595_);
lean_inc_ref(v_f_1605_);
v___x_1629_ = l_Lean_Meta_getFunInfoNArgs(v_f_1605_, v___x_1628_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_);
if (lean_obj_tag(v___x_1629_) == 0)
{
lean_object* v_a_1630_; lean_object* v_paramInfo_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; 
v_a_1630_ = lean_ctor_get(v___x_1629_, 0);
lean_inc(v_a_1630_);
lean_dec_ref_known(v___x_1629_, 1);
v_paramInfo_1631_ = lean_ctor_get(v_a_1630_, 0);
lean_inc_ref(v_paramInfo_1631_);
lean_dec(v_a_1630_);
v___x_1632_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_post_1591_);
lean_inc_ref(v_pre_1590_);
v___x_1633_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg(v___x_1628_, v_paramInfo_1631_, v_pre_1590_, v_post_1591_, v_usedLetOnly_1592_, v_skipConstInApp_1593_, v_skipInstances_1589_, v___x_1632_, v_x_1595_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_);
lean_dec_ref(v_paramInfo_1631_);
if (lean_obj_tag(v___x_1633_) == 0)
{
lean_object* v_a_1634_; lean_object* v_fst_1635_; lean_object* v_snd_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; 
v_a_1634_ = lean_ctor_get(v___x_1633_, 0);
lean_inc(v_a_1634_);
lean_dec_ref_known(v___x_1633_, 1);
v_fst_1635_ = lean_ctor_get(v_a_1634_, 0);
lean_inc(v_fst_1635_);
v_snd_1636_ = lean_ctor_get(v_a_1634_, 1);
lean_inc(v_snd_1636_);
lean_dec(v_a_1634_);
v___x_1637_ = l_Lean_mkAppN(v_f_1605_, v_fst_1635_);
lean_dec(v_fst_1635_);
v___x_1638_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(v_pre_1590_, v_post_1591_, v_usedLetOnly_1592_, v_skipConstInApp_1593_, v_skipInstances_1589_, v___x_1637_, v___y_1606_, v_snd_1636_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_);
return v___x_1638_;
}
else
{
lean_object* v_a_1639_; lean_object* v___x_1641_; uint8_t v_isShared_1642_; uint8_t v_isSharedCheck_1646_; 
lean_dec_ref(v_f_1605_);
lean_dec_ref(v_post_1591_);
lean_dec_ref(v_pre_1590_);
v_a_1639_ = lean_ctor_get(v___x_1633_, 0);
v_isSharedCheck_1646_ = !lean_is_exclusive(v___x_1633_);
if (v_isSharedCheck_1646_ == 0)
{
v___x_1641_ = v___x_1633_;
v_isShared_1642_ = v_isSharedCheck_1646_;
goto v_resetjp_1640_;
}
else
{
lean_inc(v_a_1639_);
lean_dec(v___x_1633_);
v___x_1641_ = lean_box(0);
v_isShared_1642_ = v_isSharedCheck_1646_;
goto v_resetjp_1640_;
}
v_resetjp_1640_:
{
lean_object* v___x_1644_; 
if (v_isShared_1642_ == 0)
{
v___x_1644_ = v___x_1641_;
goto v_reusejp_1643_;
}
else
{
lean_object* v_reuseFailAlloc_1645_; 
v_reuseFailAlloc_1645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1645_, 0, v_a_1639_);
v___x_1644_ = v_reuseFailAlloc_1645_;
goto v_reusejp_1643_;
}
v_reusejp_1643_:
{
return v___x_1644_;
}
}
}
}
else
{
lean_object* v_a_1647_; lean_object* v___x_1649_; uint8_t v_isShared_1650_; uint8_t v_isSharedCheck_1654_; 
lean_dec(v___y_1607_);
lean_dec_ref(v_f_1605_);
lean_dec_ref(v_x_1595_);
lean_dec_ref(v_post_1591_);
lean_dec_ref(v_pre_1590_);
v_a_1647_ = lean_ctor_get(v___x_1629_, 0);
v_isSharedCheck_1654_ = !lean_is_exclusive(v___x_1629_);
if (v_isSharedCheck_1654_ == 0)
{
v___x_1649_ = v___x_1629_;
v_isShared_1650_ = v_isSharedCheck_1654_;
goto v_resetjp_1648_;
}
else
{
lean_inc(v_a_1647_);
lean_dec(v___x_1629_);
v___x_1649_ = lean_box(0);
v_isShared_1650_ = v_isSharedCheck_1654_;
goto v_resetjp_1648_;
}
v_resetjp_1648_:
{
lean_object* v___x_1652_; 
if (v_isShared_1650_ == 0)
{
v___x_1652_ = v___x_1649_;
goto v_reusejp_1651_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v_a_1647_);
v___x_1652_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1651_;
}
v_reusejp_1651_:
{
return v___x_1652_;
}
}
}
}
}
v___jp_1655_:
{
lean_object* v___x_1656_; 
lean_inc_ref(v_post_1591_);
lean_inc_ref(v_pre_1590_);
v___x_1656_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1590_, v_post_1591_, v_usedLetOnly_1592_, v_skipConstInApp_1593_, v_skipInstances_1589_, v_x_1594_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_, v___y_1601_, v___y_1602_);
if (lean_obj_tag(v___x_1656_) == 0)
{
lean_object* v_a_1657_; lean_object* v_fst_1658_; lean_object* v_snd_1659_; 
v_a_1657_ = lean_ctor_get(v___x_1656_, 0);
lean_inc(v_a_1657_);
lean_dec_ref_known(v___x_1656_, 1);
v_fst_1658_ = lean_ctor_get(v_a_1657_, 0);
lean_inc(v_fst_1658_);
v_snd_1659_ = lean_ctor_get(v_a_1657_, 1);
lean_inc(v_snd_1659_);
lean_dec(v_a_1657_);
v_f_1605_ = v_fst_1658_;
v___y_1606_ = v___y_1597_;
v___y_1607_ = v_snd_1659_;
v___y_1608_ = v___y_1599_;
v___y_1609_ = v___y_1600_;
v___y_1610_ = v___y_1601_;
v___y_1611_ = v___y_1602_;
goto v___jp_1604_;
}
else
{
lean_dec_ref(v_x_1595_);
lean_dec_ref(v_post_1591_);
lean_dec_ref(v_pre_1590_);
return v___x_1656_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1(lean_object* v___x_1667_, lean_object* v_pre_1668_, lean_object* v_e_1669_, lean_object* v_post_1670_, uint8_t v_usedLetOnly_1671_, uint8_t v_skipConstInApp_1672_, uint8_t v_skipInstances_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_){
_start:
{
lean_object* v___x_1681_; 
v___x_1681_ = l_Lean_Core_checkSystem(v___x_1667_, v___y_1678_, v___y_1679_);
if (lean_obj_tag(v___x_1681_) == 0)
{
lean_object* v___x_1682_; 
lean_dec_ref_known(v___x_1681_, 1);
lean_inc_ref(v_pre_1668_);
lean_inc(v___y_1679_);
lean_inc_ref(v___y_1678_);
lean_inc(v___y_1677_);
lean_inc_ref(v___y_1676_);
lean_inc_ref(v_e_1669_);
v___x_1682_ = lean_apply_7(v_pre_1668_, v_e_1669_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_, v___y_1679_, lean_box(0));
if (lean_obj_tag(v___x_1682_) == 0)
{
lean_object* v_a_1683_; lean_object* v___x_1685_; uint8_t v_isShared_1686_; uint8_t v_isSharedCheck_1744_; 
v_a_1683_ = lean_ctor_get(v___x_1682_, 0);
v_isSharedCheck_1744_ = !lean_is_exclusive(v___x_1682_);
if (v_isSharedCheck_1744_ == 0)
{
v___x_1685_ = v___x_1682_;
v_isShared_1686_ = v_isSharedCheck_1744_;
goto v_resetjp_1684_;
}
else
{
lean_inc(v_a_1683_);
lean_dec(v___x_1682_);
v___x_1685_ = lean_box(0);
v_isShared_1686_ = v_isSharedCheck_1744_;
goto v_resetjp_1684_;
}
v_resetjp_1684_:
{
lean_object* v_fst_1687_; lean_object* v_snd_1688_; lean_object* v___x_1690_; uint8_t v_isShared_1691_; uint8_t v_isSharedCheck_1743_; 
v_fst_1687_ = lean_ctor_get(v_a_1683_, 0);
v_snd_1688_ = lean_ctor_get(v_a_1683_, 1);
v_isSharedCheck_1743_ = !lean_is_exclusive(v_a_1683_);
if (v_isSharedCheck_1743_ == 0)
{
v___x_1690_ = v_a_1683_;
v_isShared_1691_ = v_isSharedCheck_1743_;
goto v_resetjp_1689_;
}
else
{
lean_inc(v_snd_1688_);
lean_inc(v_fst_1687_);
lean_dec(v_a_1683_);
v___x_1690_ = lean_box(0);
v_isShared_1691_ = v_isSharedCheck_1743_;
goto v_resetjp_1689_;
}
v_resetjp_1689_:
{
lean_object* v___y_1693_; 
switch(lean_obj_tag(v_fst_1687_))
{
case 0:
{
lean_object* v_e_1732_; lean_object* v___x_1734_; 
lean_dec_ref(v_post_1670_);
lean_dec_ref(v_e_1669_);
lean_dec_ref(v_pre_1668_);
v_e_1732_ = lean_ctor_get(v_fst_1687_, 0);
lean_inc_ref(v_e_1732_);
lean_dec_ref_known(v_fst_1687_, 1);
if (v_isShared_1691_ == 0)
{
lean_ctor_set(v___x_1690_, 0, v_e_1732_);
v___x_1734_ = v___x_1690_;
goto v_reusejp_1733_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v_e_1732_);
lean_ctor_set(v_reuseFailAlloc_1738_, 1, v_snd_1688_);
v___x_1734_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1733_;
}
v_reusejp_1733_:
{
lean_object* v___x_1736_; 
if (v_isShared_1686_ == 0)
{
lean_ctor_set(v___x_1685_, 0, v___x_1734_);
v___x_1736_ = v___x_1685_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v___x_1734_);
v___x_1736_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
return v___x_1736_;
}
}
}
case 1:
{
lean_object* v_e_1739_; lean_object* v___x_1740_; 
lean_del_object(v___x_1690_);
lean_del_object(v___x_1685_);
lean_dec_ref(v_e_1669_);
v_e_1739_ = lean_ctor_get(v_fst_1687_, 0);
lean_inc_ref(v_e_1739_);
lean_dec_ref_known(v_fst_1687_, 1);
v___x_1740_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1668_, v_post_1670_, v_usedLetOnly_1671_, v_skipConstInApp_1672_, v_skipInstances_1673_, v_e_1739_, v___y_1674_, v_snd_1688_, v___y_1676_, v___y_1677_, v___y_1678_, v___y_1679_);
return v___x_1740_;
}
default: 
{
lean_object* v_e_x3f_1741_; 
lean_del_object(v___x_1690_);
lean_del_object(v___x_1685_);
v_e_x3f_1741_ = lean_ctor_get(v_fst_1687_, 0);
lean_inc(v_e_x3f_1741_);
lean_dec_ref_known(v_fst_1687_, 1);
if (lean_obj_tag(v_e_x3f_1741_) == 0)
{
v___y_1693_ = v_e_1669_;
goto v___jp_1692_;
}
else
{
lean_object* v_val_1742_; 
lean_dec_ref(v_e_1669_);
v_val_1742_ = lean_ctor_get(v_e_x3f_1741_, 0);
lean_inc(v_val_1742_);
lean_dec_ref_known(v_e_x3f_1741_, 1);
v___y_1693_ = v_val_1742_;
goto v___jp_1692_;
}
}
}
v___jp_1692_:
{
switch(lean_obj_tag(v___y_1693_))
{
case 7:
{
lean_object* v___x_1694_; lean_object* v___x_1695_; 
v___x_1694_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___closed__0));
v___x_1695_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13(v_pre_1668_, v_post_1670_, v_usedLetOnly_1671_, v_skipConstInApp_1672_, v_skipInstances_1673_, v___x_1694_, v___y_1693_, v___y_1674_, v_snd_1688_, v___y_1676_, v___y_1677_, v___y_1678_, v___y_1679_);
return v___x_1695_;
}
case 6:
{
lean_object* v___x_1696_; lean_object* v___x_1697_; 
v___x_1696_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___closed__0));
v___x_1697_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14(v_pre_1668_, v_post_1670_, v_usedLetOnly_1671_, v_skipConstInApp_1672_, v_skipInstances_1673_, v___x_1696_, v___y_1693_, v___y_1674_, v_snd_1688_, v___y_1676_, v___y_1677_, v___y_1678_, v___y_1679_);
return v___x_1697_;
}
case 8:
{
lean_object* v___x_1698_; lean_object* v___x_1699_; 
v___x_1698_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___closed__0));
v___x_1699_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15(v_pre_1668_, v_post_1670_, v_usedLetOnly_1671_, v_skipConstInApp_1672_, v_skipInstances_1673_, v___x_1698_, v___y_1693_, v___y_1674_, v_snd_1688_, v___y_1676_, v___y_1677_, v___y_1678_, v___y_1679_);
return v___x_1699_;
}
case 5:
{
lean_object* v_dummy_1700_; lean_object* v_nargs_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; 
v_dummy_1700_ = lean_obj_once(&l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0, &l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0_once, _init_l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0);
v_nargs_1701_ = l_Lean_Expr_getAppNumArgs(v___y_1693_);
lean_inc(v_nargs_1701_);
v___x_1702_ = lean_mk_array(v_nargs_1701_, v_dummy_1700_);
v___x_1703_ = lean_unsigned_to_nat(1u);
v___x_1704_ = lean_nat_sub(v_nargs_1701_, v___x_1703_);
lean_dec(v_nargs_1701_);
v___x_1705_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16(v_skipInstances_1673_, v_pre_1668_, v_post_1670_, v_usedLetOnly_1671_, v_skipConstInApp_1672_, v___y_1693_, v___x_1702_, v___x_1704_, v___y_1674_, v_snd_1688_, v___y_1676_, v___y_1677_, v___y_1678_, v___y_1679_);
return v___x_1705_;
}
case 10:
{
lean_object* v_data_1706_; lean_object* v_expr_1707_; lean_object* v___x_1708_; 
v_data_1706_ = lean_ctor_get(v___y_1693_, 0);
v_expr_1707_ = lean_ctor_get(v___y_1693_, 1);
lean_inc_ref(v_expr_1707_);
lean_inc_ref(v_post_1670_);
lean_inc_ref(v_pre_1668_);
v___x_1708_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1668_, v_post_1670_, v_usedLetOnly_1671_, v_skipConstInApp_1672_, v_skipInstances_1673_, v_expr_1707_, v___y_1674_, v_snd_1688_, v___y_1676_, v___y_1677_, v___y_1678_, v___y_1679_);
if (lean_obj_tag(v___x_1708_) == 0)
{
lean_object* v_a_1709_; lean_object* v_fst_1710_; lean_object* v_snd_1711_; size_t v___x_1712_; size_t v___x_1713_; uint8_t v___x_1714_; 
v_a_1709_ = lean_ctor_get(v___x_1708_, 0);
lean_inc(v_a_1709_);
lean_dec_ref_known(v___x_1708_, 1);
v_fst_1710_ = lean_ctor_get(v_a_1709_, 0);
lean_inc(v_fst_1710_);
v_snd_1711_ = lean_ctor_get(v_a_1709_, 1);
lean_inc(v_snd_1711_);
lean_dec(v_a_1709_);
v___x_1712_ = lean_ptr_addr(v_expr_1707_);
v___x_1713_ = lean_ptr_addr(v_fst_1710_);
v___x_1714_ = lean_usize_dec_eq(v___x_1712_, v___x_1713_);
if (v___x_1714_ == 0)
{
lean_object* v___x_1715_; lean_object* v___x_1716_; 
lean_inc(v_data_1706_);
lean_dec_ref_known(v___y_1693_, 2);
v___x_1715_ = l_Lean_Expr_mdata___override(v_data_1706_, v_fst_1710_);
v___x_1716_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(v_pre_1668_, v_post_1670_, v_usedLetOnly_1671_, v_skipConstInApp_1672_, v_skipInstances_1673_, v___x_1715_, v___y_1674_, v_snd_1711_, v___y_1676_, v___y_1677_, v___y_1678_, v___y_1679_);
return v___x_1716_;
}
else
{
lean_object* v___x_1717_; 
lean_dec(v_fst_1710_);
v___x_1717_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(v_pre_1668_, v_post_1670_, v_usedLetOnly_1671_, v_skipConstInApp_1672_, v_skipInstances_1673_, v___y_1693_, v___y_1674_, v_snd_1711_, v___y_1676_, v___y_1677_, v___y_1678_, v___y_1679_);
return v___x_1717_;
}
}
else
{
lean_dec_ref_known(v___y_1693_, 2);
lean_dec_ref(v_post_1670_);
lean_dec_ref(v_pre_1668_);
return v___x_1708_;
}
}
case 11:
{
lean_object* v_typeName_1718_; lean_object* v_idx_1719_; lean_object* v_struct_1720_; lean_object* v___x_1721_; 
v_typeName_1718_ = lean_ctor_get(v___y_1693_, 0);
v_idx_1719_ = lean_ctor_get(v___y_1693_, 1);
v_struct_1720_ = lean_ctor_get(v___y_1693_, 2);
lean_inc_ref(v_struct_1720_);
lean_inc_ref(v_post_1670_);
lean_inc_ref(v_pre_1668_);
v___x_1721_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1668_, v_post_1670_, v_usedLetOnly_1671_, v_skipConstInApp_1672_, v_skipInstances_1673_, v_struct_1720_, v___y_1674_, v_snd_1688_, v___y_1676_, v___y_1677_, v___y_1678_, v___y_1679_);
if (lean_obj_tag(v___x_1721_) == 0)
{
lean_object* v_a_1722_; lean_object* v_fst_1723_; lean_object* v_snd_1724_; size_t v___x_1725_; size_t v___x_1726_; uint8_t v___x_1727_; 
v_a_1722_ = lean_ctor_get(v___x_1721_, 0);
lean_inc(v_a_1722_);
lean_dec_ref_known(v___x_1721_, 1);
v_fst_1723_ = lean_ctor_get(v_a_1722_, 0);
lean_inc(v_fst_1723_);
v_snd_1724_ = lean_ctor_get(v_a_1722_, 1);
lean_inc(v_snd_1724_);
lean_dec(v_a_1722_);
v___x_1725_ = lean_ptr_addr(v_struct_1720_);
v___x_1726_ = lean_ptr_addr(v_fst_1723_);
v___x_1727_ = lean_usize_dec_eq(v___x_1725_, v___x_1726_);
if (v___x_1727_ == 0)
{
lean_object* v___x_1728_; lean_object* v___x_1729_; 
lean_inc(v_idx_1719_);
lean_inc(v_typeName_1718_);
lean_dec_ref_known(v___y_1693_, 3);
v___x_1728_ = l_Lean_Expr_proj___override(v_typeName_1718_, v_idx_1719_, v_fst_1723_);
v___x_1729_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(v_pre_1668_, v_post_1670_, v_usedLetOnly_1671_, v_skipConstInApp_1672_, v_skipInstances_1673_, v___x_1728_, v___y_1674_, v_snd_1724_, v___y_1676_, v___y_1677_, v___y_1678_, v___y_1679_);
return v___x_1729_;
}
else
{
lean_object* v___x_1730_; 
lean_dec(v_fst_1723_);
v___x_1730_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(v_pre_1668_, v_post_1670_, v_usedLetOnly_1671_, v_skipConstInApp_1672_, v_skipInstances_1673_, v___y_1693_, v___y_1674_, v_snd_1724_, v___y_1676_, v___y_1677_, v___y_1678_, v___y_1679_);
return v___x_1730_;
}
}
else
{
lean_dec_ref_known(v___y_1693_, 3);
lean_dec_ref(v_post_1670_);
lean_dec_ref(v_pre_1668_);
return v___x_1721_;
}
}
default: 
{
lean_object* v___x_1731_; 
v___x_1731_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(v_pre_1668_, v_post_1670_, v_usedLetOnly_1671_, v_skipConstInApp_1672_, v_skipInstances_1673_, v___y_1693_, v___y_1674_, v_snd_1688_, v___y_1676_, v___y_1677_, v___y_1678_, v___y_1679_);
return v___x_1731_;
}
}
}
}
}
}
else
{
lean_object* v_a_1745_; lean_object* v___x_1747_; uint8_t v_isShared_1748_; uint8_t v_isSharedCheck_1752_; 
lean_dec_ref(v_post_1670_);
lean_dec_ref(v_e_1669_);
lean_dec_ref(v_pre_1668_);
v_a_1745_ = lean_ctor_get(v___x_1682_, 0);
v_isSharedCheck_1752_ = !lean_is_exclusive(v___x_1682_);
if (v_isSharedCheck_1752_ == 0)
{
v___x_1747_ = v___x_1682_;
v_isShared_1748_ = v_isSharedCheck_1752_;
goto v_resetjp_1746_;
}
else
{
lean_inc(v_a_1745_);
lean_dec(v___x_1682_);
v___x_1747_ = lean_box(0);
v_isShared_1748_ = v_isSharedCheck_1752_;
goto v_resetjp_1746_;
}
v_resetjp_1746_:
{
lean_object* v___x_1750_; 
if (v_isShared_1748_ == 0)
{
v___x_1750_ = v___x_1747_;
goto v_reusejp_1749_;
}
else
{
lean_object* v_reuseFailAlloc_1751_; 
v_reuseFailAlloc_1751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1751_, 0, v_a_1745_);
v___x_1750_ = v_reuseFailAlloc_1751_;
goto v_reusejp_1749_;
}
v_reusejp_1749_:
{
return v___x_1750_;
}
}
}
}
else
{
lean_object* v_a_1753_; lean_object* v___x_1755_; uint8_t v_isShared_1756_; uint8_t v_isSharedCheck_1760_; 
lean_dec(v___y_1675_);
lean_dec_ref(v_post_1670_);
lean_dec_ref(v_e_1669_);
lean_dec_ref(v_pre_1668_);
v_a_1753_ = lean_ctor_get(v___x_1681_, 0);
v_isSharedCheck_1760_ = !lean_is_exclusive(v___x_1681_);
if (v_isSharedCheck_1760_ == 0)
{
v___x_1755_ = v___x_1681_;
v_isShared_1756_ = v_isSharedCheck_1760_;
goto v_resetjp_1754_;
}
else
{
lean_inc(v_a_1753_);
lean_dec(v___x_1681_);
v___x_1755_ = lean_box(0);
v_isShared_1756_ = v_isSharedCheck_1760_;
goto v_resetjp_1754_;
}
v_resetjp_1754_:
{
lean_object* v___x_1758_; 
if (v_isShared_1756_ == 0)
{
v___x_1758_ = v___x_1755_;
goto v_reusejp_1757_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v_a_1753_);
v___x_1758_ = v_reuseFailAlloc_1759_;
goto v_reusejp_1757_;
}
v_reusejp_1757_:
{
return v___x_1758_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___boxed(lean_object* v___x_1761_, lean_object* v_pre_1762_, lean_object* v_e_1763_, lean_object* v_post_1764_, lean_object* v_usedLetOnly_1765_, lean_object* v_skipConstInApp_1766_, lean_object* v_skipInstances_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_){
_start:
{
uint8_t v_usedLetOnly_boxed_1775_; uint8_t v_skipConstInApp_boxed_1776_; uint8_t v_skipInstances_boxed_1777_; lean_object* v_res_1778_; 
v_usedLetOnly_boxed_1775_ = lean_unbox(v_usedLetOnly_1765_);
v_skipConstInApp_boxed_1776_ = lean_unbox(v_skipConstInApp_1766_);
v_skipInstances_boxed_1777_ = lean_unbox(v_skipInstances_1767_);
v_res_1778_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1(v___x_1761_, v_pre_1762_, v_e_1763_, v_post_1764_, v_usedLetOnly_boxed_1775_, v_skipConstInApp_boxed_1776_, v_skipInstances_boxed_1777_, v___y_1768_, v___y_1769_, v___y_1770_, v___y_1771_, v___y_1772_, v___y_1773_);
lean_dec(v___y_1773_);
lean_dec_ref(v___y_1772_);
lean_dec(v___y_1771_);
lean_dec_ref(v___y_1770_);
lean_dec(v___y_1768_);
return v_res_1778_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(lean_object* v_pre_1779_, lean_object* v_post_1780_, uint8_t v_usedLetOnly_1781_, uint8_t v_skipConstInApp_1782_, uint8_t v_skipInstances_1783_, lean_object* v_e_1784_, lean_object* v_a_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_){
_start:
{
lean_object* v___x_1792_; lean_object* v___x_1793_; 
lean_inc(v_a_1785_);
v___x_1792_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1792_, 0, lean_box(0));
lean_closure_set(v___x_1792_, 1, lean_box(0));
lean_closure_set(v___x_1792_, 2, v_a_1785_);
v___x_1793_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0(lean_box(0), v___x_1792_, v___y_1786_, v___y_1787_, v___y_1788_, v___y_1789_, v___y_1790_);
if (lean_obj_tag(v___x_1793_) == 0)
{
lean_object* v_a_1794_; lean_object* v___x_1796_; uint8_t v_isShared_1797_; uint8_t v_isSharedCheck_1848_; 
v_a_1794_ = lean_ctor_get(v___x_1793_, 0);
v_isSharedCheck_1848_ = !lean_is_exclusive(v___x_1793_);
if (v_isSharedCheck_1848_ == 0)
{
v___x_1796_ = v___x_1793_;
v_isShared_1797_ = v_isSharedCheck_1848_;
goto v_resetjp_1795_;
}
else
{
lean_inc(v_a_1794_);
lean_dec(v___x_1793_);
v___x_1796_ = lean_box(0);
v_isShared_1797_ = v_isSharedCheck_1848_;
goto v_resetjp_1795_;
}
v_resetjp_1795_:
{
lean_object* v_fst_1798_; lean_object* v_snd_1799_; lean_object* v___x_1801_; uint8_t v_isShared_1802_; uint8_t v_isSharedCheck_1847_; 
v_fst_1798_ = lean_ctor_get(v_a_1794_, 0);
v_snd_1799_ = lean_ctor_get(v_a_1794_, 1);
v_isSharedCheck_1847_ = !lean_is_exclusive(v_a_1794_);
if (v_isSharedCheck_1847_ == 0)
{
v___x_1801_ = v_a_1794_;
v_isShared_1802_ = v_isSharedCheck_1847_;
goto v_resetjp_1800_;
}
else
{
lean_inc(v_snd_1799_);
lean_inc(v_fst_1798_);
lean_dec(v_a_1794_);
v___x_1801_ = lean_box(0);
v_isShared_1802_ = v_isSharedCheck_1847_;
goto v_resetjp_1800_;
}
v_resetjp_1800_:
{
lean_object* v___x_1803_; 
v___x_1803_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___redArg(v_fst_1798_, v_e_1784_);
lean_dec(v_fst_1798_);
if (lean_obj_tag(v___x_1803_) == 0)
{
lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___f_1808_; lean_object* v___x_1809_; 
lean_del_object(v___x_1801_);
lean_del_object(v___x_1796_);
v___x_1804_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___closed__0));
v___x_1805_ = lean_box(v_usedLetOnly_1781_);
v___x_1806_ = lean_box(v_skipConstInApp_1782_);
v___x_1807_ = lean_box(v_skipInstances_1783_);
lean_inc_ref(v_e_1784_);
v___f_1808_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___boxed), 14, 7);
lean_closure_set(v___f_1808_, 0, v___x_1804_);
lean_closure_set(v___f_1808_, 1, v_pre_1779_);
lean_closure_set(v___f_1808_, 2, v_e_1784_);
lean_closure_set(v___f_1808_, 3, v_post_1780_);
lean_closure_set(v___f_1808_, 4, v___x_1805_);
lean_closure_set(v___f_1808_, 5, v___x_1806_);
lean_closure_set(v___f_1808_, 6, v___x_1807_);
v___x_1809_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17___redArg(v___f_1808_, v_a_1785_, v_snd_1799_, v___y_1787_, v___y_1788_, v___y_1789_, v___y_1790_);
if (lean_obj_tag(v___x_1809_) == 0)
{
lean_object* v_a_1810_; lean_object* v_fst_1811_; lean_object* v_snd_1812_; lean_object* v___f_1813_; lean_object* v___x_1814_; 
v_a_1810_ = lean_ctor_get(v___x_1809_, 0);
lean_inc(v_a_1810_);
lean_dec_ref_known(v___x_1809_, 1);
v_fst_1811_ = lean_ctor_get(v_a_1810_, 0);
lean_inc_n(v_fst_1811_, 2);
v_snd_1812_ = lean_ctor_get(v_a_1810_, 1);
lean_inc(v_snd_1812_);
lean_dec(v_a_1810_);
lean_inc(v_a_1785_);
v___f_1813_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__2___boxed), 4, 3);
lean_closure_set(v___f_1813_, 0, v_a_1785_);
lean_closure_set(v___f_1813_, 1, v_e_1784_);
lean_closure_set(v___f_1813_, 2, v_fst_1811_);
v___x_1814_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0(lean_box(0), v___f_1813_, v_snd_1812_, v___y_1787_, v___y_1788_, v___y_1789_, v___y_1790_);
if (lean_obj_tag(v___x_1814_) == 0)
{
lean_object* v_a_1815_; lean_object* v___x_1817_; uint8_t v_isShared_1818_; uint8_t v_isSharedCheck_1831_; 
v_a_1815_ = lean_ctor_get(v___x_1814_, 0);
v_isSharedCheck_1831_ = !lean_is_exclusive(v___x_1814_);
if (v_isSharedCheck_1831_ == 0)
{
v___x_1817_ = v___x_1814_;
v_isShared_1818_ = v_isSharedCheck_1831_;
goto v_resetjp_1816_;
}
else
{
lean_inc(v_a_1815_);
lean_dec(v___x_1814_);
v___x_1817_ = lean_box(0);
v_isShared_1818_ = v_isSharedCheck_1831_;
goto v_resetjp_1816_;
}
v_resetjp_1816_:
{
lean_object* v_snd_1819_; lean_object* v___x_1821_; uint8_t v_isShared_1822_; uint8_t v_isSharedCheck_1829_; 
v_snd_1819_ = lean_ctor_get(v_a_1815_, 1);
v_isSharedCheck_1829_ = !lean_is_exclusive(v_a_1815_);
if (v_isSharedCheck_1829_ == 0)
{
lean_object* v_unused_1830_; 
v_unused_1830_ = lean_ctor_get(v_a_1815_, 0);
lean_dec(v_unused_1830_);
v___x_1821_ = v_a_1815_;
v_isShared_1822_ = v_isSharedCheck_1829_;
goto v_resetjp_1820_;
}
else
{
lean_inc(v_snd_1819_);
lean_dec(v_a_1815_);
v___x_1821_ = lean_box(0);
v_isShared_1822_ = v_isSharedCheck_1829_;
goto v_resetjp_1820_;
}
v_resetjp_1820_:
{
lean_object* v___x_1824_; 
if (v_isShared_1822_ == 0)
{
lean_ctor_set(v___x_1821_, 0, v_fst_1811_);
v___x_1824_ = v___x_1821_;
goto v_reusejp_1823_;
}
else
{
lean_object* v_reuseFailAlloc_1828_; 
v_reuseFailAlloc_1828_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1828_, 0, v_fst_1811_);
lean_ctor_set(v_reuseFailAlloc_1828_, 1, v_snd_1819_);
v___x_1824_ = v_reuseFailAlloc_1828_;
goto v_reusejp_1823_;
}
v_reusejp_1823_:
{
lean_object* v___x_1826_; 
if (v_isShared_1818_ == 0)
{
lean_ctor_set(v___x_1817_, 0, v___x_1824_);
v___x_1826_ = v___x_1817_;
goto v_reusejp_1825_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v___x_1824_);
v___x_1826_ = v_reuseFailAlloc_1827_;
goto v_reusejp_1825_;
}
v_reusejp_1825_:
{
return v___x_1826_;
}
}
}
}
}
else
{
lean_object* v_a_1832_; lean_object* v___x_1834_; uint8_t v_isShared_1835_; uint8_t v_isSharedCheck_1839_; 
lean_dec(v_fst_1811_);
v_a_1832_ = lean_ctor_get(v___x_1814_, 0);
v_isSharedCheck_1839_ = !lean_is_exclusive(v___x_1814_);
if (v_isSharedCheck_1839_ == 0)
{
v___x_1834_ = v___x_1814_;
v_isShared_1835_ = v_isSharedCheck_1839_;
goto v_resetjp_1833_;
}
else
{
lean_inc(v_a_1832_);
lean_dec(v___x_1814_);
v___x_1834_ = lean_box(0);
v_isShared_1835_ = v_isSharedCheck_1839_;
goto v_resetjp_1833_;
}
v_resetjp_1833_:
{
lean_object* v___x_1837_; 
if (v_isShared_1835_ == 0)
{
v___x_1837_ = v___x_1834_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1838_; 
v_reuseFailAlloc_1838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1838_, 0, v_a_1832_);
v___x_1837_ = v_reuseFailAlloc_1838_;
goto v_reusejp_1836_;
}
v_reusejp_1836_:
{
return v___x_1837_;
}
}
}
}
else
{
lean_dec_ref(v_e_1784_);
return v___x_1809_;
}
}
else
{
lean_object* v_val_1840_; lean_object* v___x_1842_; 
lean_dec_ref(v_e_1784_);
lean_dec_ref(v_post_1780_);
lean_dec_ref(v_pre_1779_);
v_val_1840_ = lean_ctor_get(v___x_1803_, 0);
lean_inc(v_val_1840_);
lean_dec_ref_known(v___x_1803_, 1);
if (v_isShared_1802_ == 0)
{
lean_ctor_set(v___x_1801_, 0, v_val_1840_);
v___x_1842_ = v___x_1801_;
goto v_reusejp_1841_;
}
else
{
lean_object* v_reuseFailAlloc_1846_; 
v_reuseFailAlloc_1846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1846_, 0, v_val_1840_);
lean_ctor_set(v_reuseFailAlloc_1846_, 1, v_snd_1799_);
v___x_1842_ = v_reuseFailAlloc_1846_;
goto v_reusejp_1841_;
}
v_reusejp_1841_:
{
lean_object* v___x_1844_; 
if (v_isShared_1797_ == 0)
{
lean_ctor_set(v___x_1796_, 0, v___x_1842_);
v___x_1844_ = v___x_1796_;
goto v_reusejp_1843_;
}
else
{
lean_object* v_reuseFailAlloc_1845_; 
v_reuseFailAlloc_1845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1845_, 0, v___x_1842_);
v___x_1844_ = v_reuseFailAlloc_1845_;
goto v_reusejp_1843_;
}
v_reusejp_1843_:
{
return v___x_1844_;
}
}
}
}
}
}
else
{
lean_object* v_a_1849_; lean_object* v___x_1851_; uint8_t v_isShared_1852_; uint8_t v_isSharedCheck_1856_; 
lean_dec_ref(v_e_1784_);
lean_dec_ref(v_post_1780_);
lean_dec_ref(v_pre_1779_);
v_a_1849_ = lean_ctor_get(v___x_1793_, 0);
v_isSharedCheck_1856_ = !lean_is_exclusive(v___x_1793_);
if (v_isSharedCheck_1856_ == 0)
{
v___x_1851_ = v___x_1793_;
v_isShared_1852_ = v_isSharedCheck_1856_;
goto v_resetjp_1850_;
}
else
{
lean_inc(v_a_1849_);
lean_dec(v___x_1793_);
v___x_1851_ = lean_box(0);
v_isShared_1852_ = v_isSharedCheck_1856_;
goto v_resetjp_1850_;
}
v_resetjp_1850_:
{
lean_object* v___x_1854_; 
if (v_isShared_1852_ == 0)
{
v___x_1854_ = v___x_1851_;
goto v_reusejp_1853_;
}
else
{
lean_object* v_reuseFailAlloc_1855_; 
v_reuseFailAlloc_1855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1855_, 0, v_a_1849_);
v___x_1854_ = v_reuseFailAlloc_1855_;
goto v_reusejp_1853_;
}
v_reusejp_1853_:
{
return v___x_1854_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13(lean_object* v_pre_1857_, lean_object* v_post_1858_, uint8_t v_usedLetOnly_1859_, uint8_t v_skipConstInApp_1860_, uint8_t v_skipInstances_1861_, lean_object* v_fvars_1862_, lean_object* v_e_1863_, lean_object* v_a_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_){
_start:
{
if (lean_obj_tag(v_e_1863_) == 7)
{
lean_object* v_binderName_1871_; lean_object* v_binderType_1872_; lean_object* v_body_1873_; uint8_t v_binderInfo_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___f_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; 
v_binderName_1871_ = lean_ctor_get(v_e_1863_, 0);
lean_inc(v_binderName_1871_);
v_binderType_1872_ = lean_ctor_get(v_e_1863_, 1);
lean_inc_ref(v_binderType_1872_);
v_body_1873_ = lean_ctor_get(v_e_1863_, 2);
lean_inc_ref(v_body_1873_);
v_binderInfo_1874_ = lean_ctor_get_uint8(v_e_1863_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_1863_, 3);
v___x_1875_ = lean_box(v_usedLetOnly_1859_);
v___x_1876_ = lean_box(v_skipConstInApp_1860_);
v___x_1877_ = lean_box(v_skipInstances_1861_);
lean_inc_ref(v_post_1858_);
lean_inc_ref(v_pre_1857_);
lean_inc_ref(v_fvars_1862_);
v___f_1878_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___lam__0___boxed), 15, 7);
lean_closure_set(v___f_1878_, 0, v_fvars_1862_);
lean_closure_set(v___f_1878_, 1, v_pre_1857_);
lean_closure_set(v___f_1878_, 2, v_post_1858_);
lean_closure_set(v___f_1878_, 3, v___x_1875_);
lean_closure_set(v___f_1878_, 4, v___x_1876_);
lean_closure_set(v___f_1878_, 5, v___x_1877_);
lean_closure_set(v___f_1878_, 6, v_body_1873_);
v___x_1879_ = lean_expr_instantiate_rev(v_binderType_1872_, v_fvars_1862_);
lean_dec_ref(v_fvars_1862_);
lean_dec_ref(v_binderType_1872_);
v___x_1880_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1857_, v_post_1858_, v_usedLetOnly_1859_, v_skipConstInApp_1860_, v_skipInstances_1861_, v___x_1879_, v_a_1864_, v___y_1865_, v___y_1866_, v___y_1867_, v___y_1868_, v___y_1869_);
if (lean_obj_tag(v___x_1880_) == 0)
{
lean_object* v_a_1881_; lean_object* v_fst_1882_; lean_object* v_snd_1883_; uint8_t v___x_1884_; lean_object* v___x_1885_; 
v_a_1881_ = lean_ctor_get(v___x_1880_, 0);
lean_inc(v_a_1881_);
lean_dec_ref_known(v___x_1880_, 1);
v_fst_1882_ = lean_ctor_get(v_a_1881_, 0);
lean_inc(v_fst_1882_);
v_snd_1883_ = lean_ctor_get(v_a_1881_, 1);
lean_inc(v_snd_1883_);
lean_dec(v_a_1881_);
v___x_1884_ = 0;
v___x_1885_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__18___redArg(v_binderName_1871_, v_binderInfo_1874_, v_fst_1882_, v___f_1878_, v___x_1884_, v_a_1864_, v_snd_1883_, v___y_1866_, v___y_1867_, v___y_1868_, v___y_1869_);
return v___x_1885_;
}
else
{
lean_dec_ref(v___f_1878_);
lean_dec(v_binderName_1871_);
return v___x_1880_;
}
}
else
{
lean_object* v___x_1886_; lean_object* v___x_1887_; 
v___x_1886_ = lean_expr_instantiate_rev(v_e_1863_, v_fvars_1862_);
lean_dec_ref(v_e_1863_);
lean_inc_ref(v_post_1858_);
lean_inc_ref(v_pre_1857_);
v___x_1887_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1857_, v_post_1858_, v_usedLetOnly_1859_, v_skipConstInApp_1860_, v_skipInstances_1861_, v___x_1886_, v_a_1864_, v___y_1865_, v___y_1866_, v___y_1867_, v___y_1868_, v___y_1869_);
if (lean_obj_tag(v___x_1887_) == 0)
{
lean_object* v_a_1888_; lean_object* v_fst_1889_; lean_object* v_snd_1890_; uint8_t v___x_1891_; uint8_t v___x_1892_; uint8_t v___x_1893_; lean_object* v___x_1894_; 
v_a_1888_ = lean_ctor_get(v___x_1887_, 0);
lean_inc(v_a_1888_);
lean_dec_ref_known(v___x_1887_, 1);
v_fst_1889_ = lean_ctor_get(v_a_1888_, 0);
lean_inc(v_fst_1889_);
v_snd_1890_ = lean_ctor_get(v_a_1888_, 1);
lean_inc(v_snd_1890_);
lean_dec(v_a_1888_);
v___x_1891_ = 0;
v___x_1892_ = 1;
v___x_1893_ = 1;
v___x_1894_ = l_Lean_Meta_mkForallFVars(v_fvars_1862_, v_fst_1889_, v___x_1891_, v_usedLetOnly_1859_, v___x_1892_, v___x_1893_, v___y_1866_, v___y_1867_, v___y_1868_, v___y_1869_);
lean_dec_ref(v_fvars_1862_);
if (lean_obj_tag(v___x_1894_) == 0)
{
lean_object* v_a_1895_; lean_object* v___x_1896_; 
v_a_1895_ = lean_ctor_get(v___x_1894_, 0);
lean_inc(v_a_1895_);
lean_dec_ref_known(v___x_1894_, 1);
v___x_1896_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(v_pre_1857_, v_post_1858_, v_usedLetOnly_1859_, v_skipConstInApp_1860_, v_skipInstances_1861_, v_a_1895_, v_a_1864_, v_snd_1890_, v___y_1866_, v___y_1867_, v___y_1868_, v___y_1869_);
return v___x_1896_;
}
else
{
lean_object* v_a_1897_; lean_object* v___x_1899_; uint8_t v_isShared_1900_; uint8_t v_isSharedCheck_1904_; 
lean_dec(v_snd_1890_);
lean_dec_ref(v_post_1858_);
lean_dec_ref(v_pre_1857_);
v_a_1897_ = lean_ctor_get(v___x_1894_, 0);
v_isSharedCheck_1904_ = !lean_is_exclusive(v___x_1894_);
if (v_isSharedCheck_1904_ == 0)
{
v___x_1899_ = v___x_1894_;
v_isShared_1900_ = v_isSharedCheck_1904_;
goto v_resetjp_1898_;
}
else
{
lean_inc(v_a_1897_);
lean_dec(v___x_1894_);
v___x_1899_ = lean_box(0);
v_isShared_1900_ = v_isSharedCheck_1904_;
goto v_resetjp_1898_;
}
v_resetjp_1898_:
{
lean_object* v___x_1902_; 
if (v_isShared_1900_ == 0)
{
v___x_1902_ = v___x_1899_;
goto v_reusejp_1901_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v_a_1897_);
v___x_1902_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1901_;
}
v_reusejp_1901_:
{
return v___x_1902_;
}
}
}
}
else
{
lean_dec_ref(v_fvars_1862_);
lean_dec_ref(v_post_1858_);
lean_dec_ref(v_pre_1857_);
return v___x_1887_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___lam__0(lean_object* v_fvars_1905_, lean_object* v_pre_1906_, lean_object* v_post_1907_, uint8_t v_usedLetOnly_1908_, uint8_t v_skipConstInApp_1909_, uint8_t v_skipInstances_1910_, lean_object* v_body_1911_, lean_object* v_x_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_){
_start:
{
lean_object* v___x_1920_; lean_object* v___x_1921_; 
v___x_1920_ = lean_array_push(v_fvars_1905_, v_x_1912_);
v___x_1921_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13(v_pre_1906_, v_post_1907_, v_usedLetOnly_1908_, v_skipConstInApp_1909_, v_skipInstances_1910_, v___x_1920_, v_body_1911_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_, v___y_1918_);
return v___x_1921_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9___boxed(lean_object* v_pre_1922_, lean_object* v_post_1923_, lean_object* v_usedLetOnly_1924_, lean_object* v_skipConstInApp_1925_, lean_object* v_skipInstances_1926_, lean_object* v_sz_1927_, lean_object* v_i_1928_, lean_object* v_bs_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_){
_start:
{
uint8_t v_usedLetOnly_boxed_1937_; uint8_t v_skipConstInApp_boxed_1938_; uint8_t v_skipInstances_boxed_1939_; size_t v_sz_boxed_1940_; size_t v_i_boxed_1941_; lean_object* v_res_1942_; 
v_usedLetOnly_boxed_1937_ = lean_unbox(v_usedLetOnly_1924_);
v_skipConstInApp_boxed_1938_ = lean_unbox(v_skipConstInApp_1925_);
v_skipInstances_boxed_1939_ = lean_unbox(v_skipInstances_1926_);
v_sz_boxed_1940_ = lean_unbox_usize(v_sz_1927_);
lean_dec(v_sz_1927_);
v_i_boxed_1941_ = lean_unbox_usize(v_i_1928_);
lean_dec(v_i_1928_);
v_res_1942_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1922_, v_post_1923_, v_usedLetOnly_boxed_1937_, v_skipConstInApp_boxed_1938_, v_skipInstances_boxed_1939_, v_sz_boxed_1940_, v_i_boxed_1941_, v_bs_1929_, v___y_1930_, v___y_1931_, v___y_1932_, v___y_1933_, v___y_1934_, v___y_1935_);
lean_dec(v___y_1935_);
lean_dec_ref(v___y_1934_);
lean_dec(v___y_1933_);
lean_dec_ref(v___y_1932_);
lean_dec(v___y_1930_);
return v_res_1942_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___boxed(lean_object* v_pre_1943_, lean_object* v_post_1944_, lean_object* v_usedLetOnly_1945_, lean_object* v_skipConstInApp_1946_, lean_object* v_skipInstances_1947_, lean_object* v_e_1948_, lean_object* v_a_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_){
_start:
{
uint8_t v_usedLetOnly_boxed_1956_; uint8_t v_skipConstInApp_boxed_1957_; uint8_t v_skipInstances_boxed_1958_; lean_object* v_res_1959_; 
v_usedLetOnly_boxed_1956_ = lean_unbox(v_usedLetOnly_1945_);
v_skipConstInApp_boxed_1957_ = lean_unbox(v_skipConstInApp_1946_);
v_skipInstances_boxed_1958_ = lean_unbox(v_skipInstances_1947_);
v_res_1959_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(v_pre_1943_, v_post_1944_, v_usedLetOnly_boxed_1956_, v_skipConstInApp_boxed_1957_, v_skipInstances_boxed_1958_, v_e_1948_, v_a_1949_, v___y_1950_, v___y_1951_, v___y_1952_, v___y_1953_, v___y_1954_);
lean_dec(v___y_1954_);
lean_dec_ref(v___y_1953_);
lean_dec(v___y_1952_);
lean_dec_ref(v___y_1951_);
lean_dec(v_a_1949_);
return v_res_1959_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___boxed(lean_object* v_pre_1960_, lean_object* v_post_1961_, lean_object* v_usedLetOnly_1962_, lean_object* v_skipConstInApp_1963_, lean_object* v_skipInstances_1964_, lean_object* v_fvars_1965_, lean_object* v_e_1966_, lean_object* v_a_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_){
_start:
{
uint8_t v_usedLetOnly_boxed_1974_; uint8_t v_skipConstInApp_boxed_1975_; uint8_t v_skipInstances_boxed_1976_; lean_object* v_res_1977_; 
v_usedLetOnly_boxed_1974_ = lean_unbox(v_usedLetOnly_1962_);
v_skipConstInApp_boxed_1975_ = lean_unbox(v_skipConstInApp_1963_);
v_skipInstances_boxed_1976_ = lean_unbox(v_skipInstances_1964_);
v_res_1977_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13(v_pre_1960_, v_post_1961_, v_usedLetOnly_boxed_1974_, v_skipConstInApp_boxed_1975_, v_skipInstances_boxed_1976_, v_fvars_1965_, v_e_1966_, v_a_1967_, v___y_1968_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_);
lean_dec(v___y_1972_);
lean_dec_ref(v___y_1971_);
lean_dec(v___y_1970_);
lean_dec_ref(v___y_1969_);
lean_dec(v_a_1967_);
return v_res_1977_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___boxed(lean_object* v_pre_1978_, lean_object* v_post_1979_, lean_object* v_usedLetOnly_1980_, lean_object* v_skipConstInApp_1981_, lean_object* v_skipInstances_1982_, lean_object* v_fvars_1983_, lean_object* v_e_1984_, lean_object* v_a_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_){
_start:
{
uint8_t v_usedLetOnly_boxed_1992_; uint8_t v_skipConstInApp_boxed_1993_; uint8_t v_skipInstances_boxed_1994_; lean_object* v_res_1995_; 
v_usedLetOnly_boxed_1992_ = lean_unbox(v_usedLetOnly_1980_);
v_skipConstInApp_boxed_1993_ = lean_unbox(v_skipConstInApp_1981_);
v_skipInstances_boxed_1994_ = lean_unbox(v_skipInstances_1982_);
v_res_1995_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14(v_pre_1978_, v_post_1979_, v_usedLetOnly_boxed_1992_, v_skipConstInApp_boxed_1993_, v_skipInstances_boxed_1994_, v_fvars_1983_, v_e_1984_, v_a_1985_, v___y_1986_, v___y_1987_, v___y_1988_, v___y_1989_, v___y_1990_);
lean_dec(v___y_1990_);
lean_dec_ref(v___y_1989_);
lean_dec(v___y_1988_);
lean_dec_ref(v___y_1987_);
lean_dec(v_a_1985_);
return v_res_1995_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___boxed(lean_object* v_pre_1996_, lean_object* v_post_1997_, lean_object* v_usedLetOnly_1998_, lean_object* v_skipConstInApp_1999_, lean_object* v_skipInstances_2000_, lean_object* v_e_2001_, lean_object* v_a_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_){
_start:
{
uint8_t v_usedLetOnly_boxed_2009_; uint8_t v_skipConstInApp_boxed_2010_; uint8_t v_skipInstances_boxed_2011_; lean_object* v_res_2012_; 
v_usedLetOnly_boxed_2009_ = lean_unbox(v_usedLetOnly_1998_);
v_skipConstInApp_boxed_2010_ = lean_unbox(v_skipConstInApp_1999_);
v_skipInstances_boxed_2011_ = lean_unbox(v_skipInstances_2000_);
v_res_2012_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1996_, v_post_1997_, v_usedLetOnly_boxed_2009_, v_skipConstInApp_boxed_2010_, v_skipInstances_boxed_2011_, v_e_2001_, v_a_2002_, v___y_2003_, v___y_2004_, v___y_2005_, v___y_2006_, v___y_2007_);
lean_dec(v___y_2007_);
lean_dec_ref(v___y_2006_);
lean_dec(v___y_2005_);
lean_dec_ref(v___y_2004_);
lean_dec(v_a_2002_);
return v_res_2012_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15___boxed(lean_object* v_pre_2013_, lean_object* v_post_2014_, lean_object* v_usedLetOnly_2015_, lean_object* v_skipConstInApp_2016_, lean_object* v_skipInstances_2017_, lean_object* v_fvars_2018_, lean_object* v_e_2019_, lean_object* v_a_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_){
_start:
{
uint8_t v_usedLetOnly_boxed_2027_; uint8_t v_skipConstInApp_boxed_2028_; uint8_t v_skipInstances_boxed_2029_; lean_object* v_res_2030_; 
v_usedLetOnly_boxed_2027_ = lean_unbox(v_usedLetOnly_2015_);
v_skipConstInApp_boxed_2028_ = lean_unbox(v_skipConstInApp_2016_);
v_skipInstances_boxed_2029_ = lean_unbox(v_skipInstances_2017_);
v_res_2030_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15(v_pre_2013_, v_post_2014_, v_usedLetOnly_boxed_2027_, v_skipConstInApp_boxed_2028_, v_skipInstances_boxed_2029_, v_fvars_2018_, v_e_2019_, v_a_2020_, v___y_2021_, v___y_2022_, v___y_2023_, v___y_2024_, v___y_2025_);
lean_dec(v___y_2025_);
lean_dec_ref(v___y_2024_);
lean_dec(v___y_2023_);
lean_dec_ref(v___y_2022_);
lean_dec(v_a_2020_);
return v_res_2030_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___boxed(lean_object* v_upperBound_2031_, lean_object* v___x_2032_, lean_object* v_pre_2033_, lean_object* v_post_2034_, lean_object* v_usedLetOnly_2035_, lean_object* v_skipConstInApp_2036_, lean_object* v_skipInstances_2037_, lean_object* v_a_2038_, lean_object* v_b_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_){
_start:
{
uint8_t v_usedLetOnly_boxed_2047_; uint8_t v_skipConstInApp_boxed_2048_; uint8_t v_skipInstances_boxed_2049_; lean_object* v_res_2050_; 
v_usedLetOnly_boxed_2047_ = lean_unbox(v_usedLetOnly_2035_);
v_skipConstInApp_boxed_2048_ = lean_unbox(v_skipConstInApp_2036_);
v_skipInstances_boxed_2049_ = lean_unbox(v_skipInstances_2037_);
v_res_2050_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg(v_upperBound_2031_, v___x_2032_, v_pre_2033_, v_post_2034_, v_usedLetOnly_boxed_2047_, v_skipConstInApp_boxed_2048_, v_skipInstances_boxed_2049_, v_a_2038_, v_b_2039_, v___y_2040_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_);
lean_dec(v___y_2045_);
lean_dec_ref(v___y_2044_);
lean_dec(v___y_2043_);
lean_dec_ref(v___y_2042_);
lean_dec(v___y_2040_);
lean_dec_ref(v___x_2032_);
lean_dec(v_upperBound_2031_);
return v_res_2050_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16___boxed(lean_object* v_skipInstances_2051_, lean_object* v_pre_2052_, lean_object* v_post_2053_, lean_object* v_usedLetOnly_2054_, lean_object* v_skipConstInApp_2055_, lean_object* v_x_2056_, lean_object* v_x_2057_, lean_object* v_x_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_){
_start:
{
uint8_t v_skipInstances_boxed_2066_; uint8_t v_usedLetOnly_boxed_2067_; uint8_t v_skipConstInApp_boxed_2068_; lean_object* v_res_2069_; 
v_skipInstances_boxed_2066_ = lean_unbox(v_skipInstances_2051_);
v_usedLetOnly_boxed_2067_ = lean_unbox(v_usedLetOnly_2054_);
v_skipConstInApp_boxed_2068_ = lean_unbox(v_skipConstInApp_2055_);
v_res_2069_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16(v_skipInstances_boxed_2066_, v_pre_2052_, v_post_2053_, v_usedLetOnly_boxed_2067_, v_skipConstInApp_boxed_2068_, v_x_2056_, v_x_2057_, v_x_2058_, v___y_2059_, v___y_2060_, v___y_2061_, v___y_2062_, v___y_2063_, v___y_2064_);
lean_dec(v___y_2064_);
lean_dec_ref(v___y_2063_);
lean_dec(v___y_2062_);
lean_dec_ref(v___y_2061_);
lean_dec(v___y_2059_);
return v_res_2069_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0(lean_object* v_00_u03b1_2070_, lean_object* v_x_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_){
_start:
{
lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; 
v___x_2078_ = lean_apply_1(v_x_2071_, lean_box(0));
v___x_2079_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2079_, 0, v___x_2078_);
lean_ctor_set(v___x_2079_, 1, v___y_2072_);
v___x_2080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2080_, 0, v___x_2079_);
return v___x_2080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0___boxed(lean_object* v_00_u03b1_2081_, lean_object* v_x_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_){
_start:
{
lean_object* v_res_2089_; 
v_res_2089_ = l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0(v_00_u03b1_2081_, v_x_2082_, v___y_2083_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_);
lean_dec(v___y_2087_);
lean_dec_ref(v___y_2086_);
lean_dec(v___y_2085_);
lean_dec_ref(v___y_2084_);
return v_res_2089_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__0(void){
_start:
{
lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; 
v___x_2090_ = lean_box(0);
v___x_2091_ = lean_unsigned_to_nat(16u);
v___x_2092_ = lean_mk_array(v___x_2091_, v___x_2090_);
return v___x_2092_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__1(void){
_start:
{
lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; 
v___x_2093_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__0, &l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__0_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__0);
v___x_2094_ = lean_unsigned_to_nat(0u);
v___x_2095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2095_, 0, v___x_2094_);
lean_ctor_set(v___x_2095_, 1, v___x_2093_);
return v___x_2095_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__2(void){
_start:
{
lean_object* v___x_2096_; lean_object* v___x_2097_; 
v___x_2096_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__1, &l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__1_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__1);
v___x_2097_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_2097_, 0, lean_box(0));
lean_closure_set(v___x_2097_, 1, lean_box(0));
lean_closure_set(v___x_2097_, 2, v___x_2096_);
return v___x_2097_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1(lean_object* v_input_2098_, lean_object* v_pre_2099_, lean_object* v_post_2100_, uint8_t v_usedLetOnly_2101_, uint8_t v_skipConstInApp_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_){
_start:
{
uint8_t v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v_a_2112_; lean_object* v_fst_2113_; lean_object* v_snd_2114_; lean_object* v___x_2115_; 
v___x_2109_ = 0;
v___x_2110_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__2, &l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__2_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__2);
v___x_2111_ = l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0(lean_box(0), v___x_2110_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_, v___y_2107_);
v_a_2112_ = lean_ctor_get(v___x_2111_, 0);
lean_inc(v_a_2112_);
lean_dec_ref(v___x_2111_);
v_fst_2113_ = lean_ctor_get(v_a_2112_, 0);
lean_inc(v_fst_2113_);
v_snd_2114_ = lean_ctor_get(v_a_2112_, 1);
lean_inc(v_snd_2114_);
lean_dec(v_a_2112_);
v___x_2115_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_2099_, v_post_2100_, v_usedLetOnly_2101_, v_skipConstInApp_2102_, v___x_2109_, v_input_2098_, v_fst_2113_, v_snd_2114_, v___y_2104_, v___y_2105_, v___y_2106_, v___y_2107_);
if (lean_obj_tag(v___x_2115_) == 0)
{
lean_object* v_a_2116_; lean_object* v_fst_2117_; lean_object* v_snd_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v_a_2121_; lean_object* v___x_2123_; uint8_t v_isShared_2124_; uint8_t v_isSharedCheck_2137_; 
v_a_2116_ = lean_ctor_get(v___x_2115_, 0);
lean_inc(v_a_2116_);
lean_dec_ref_known(v___x_2115_, 1);
v_fst_2117_ = lean_ctor_get(v_a_2116_, 0);
lean_inc(v_fst_2117_);
v_snd_2118_ = lean_ctor_get(v_a_2116_, 1);
lean_inc(v_snd_2118_);
lean_dec(v_a_2116_);
v___x_2119_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2119_, 0, lean_box(0));
lean_closure_set(v___x_2119_, 1, lean_box(0));
lean_closure_set(v___x_2119_, 2, v_fst_2113_);
v___x_2120_ = l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0(lean_box(0), v___x_2119_, v_snd_2118_, v___y_2104_, v___y_2105_, v___y_2106_, v___y_2107_);
v_a_2121_ = lean_ctor_get(v___x_2120_, 0);
v_isSharedCheck_2137_ = !lean_is_exclusive(v___x_2120_);
if (v_isSharedCheck_2137_ == 0)
{
v___x_2123_ = v___x_2120_;
v_isShared_2124_ = v_isSharedCheck_2137_;
goto v_resetjp_2122_;
}
else
{
lean_inc(v_a_2121_);
lean_dec(v___x_2120_);
v___x_2123_ = lean_box(0);
v_isShared_2124_ = v_isSharedCheck_2137_;
goto v_resetjp_2122_;
}
v_resetjp_2122_:
{
lean_object* v_snd_2125_; lean_object* v___x_2127_; uint8_t v_isShared_2128_; uint8_t v_isSharedCheck_2135_; 
v_snd_2125_ = lean_ctor_get(v_a_2121_, 1);
v_isSharedCheck_2135_ = !lean_is_exclusive(v_a_2121_);
if (v_isSharedCheck_2135_ == 0)
{
lean_object* v_unused_2136_; 
v_unused_2136_ = lean_ctor_get(v_a_2121_, 0);
lean_dec(v_unused_2136_);
v___x_2127_ = v_a_2121_;
v_isShared_2128_ = v_isSharedCheck_2135_;
goto v_resetjp_2126_;
}
else
{
lean_inc(v_snd_2125_);
lean_dec(v_a_2121_);
v___x_2127_ = lean_box(0);
v_isShared_2128_ = v_isSharedCheck_2135_;
goto v_resetjp_2126_;
}
v_resetjp_2126_:
{
lean_object* v___x_2130_; 
if (v_isShared_2128_ == 0)
{
lean_ctor_set(v___x_2127_, 0, v_fst_2117_);
v___x_2130_ = v___x_2127_;
goto v_reusejp_2129_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v_fst_2117_);
lean_ctor_set(v_reuseFailAlloc_2134_, 1, v_snd_2125_);
v___x_2130_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2129_;
}
v_reusejp_2129_:
{
lean_object* v___x_2132_; 
if (v_isShared_2124_ == 0)
{
lean_ctor_set(v___x_2123_, 0, v___x_2130_);
v___x_2132_ = v___x_2123_;
goto v_reusejp_2131_;
}
else
{
lean_object* v_reuseFailAlloc_2133_; 
v_reuseFailAlloc_2133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2133_, 0, v___x_2130_);
v___x_2132_ = v_reuseFailAlloc_2133_;
goto v_reusejp_2131_;
}
v_reusejp_2131_:
{
return v___x_2132_;
}
}
}
}
}
else
{
lean_dec(v_fst_2113_);
return v___x_2115_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___boxed(lean_object* v_input_2138_, lean_object* v_pre_2139_, lean_object* v_post_2140_, lean_object* v_usedLetOnly_2141_, lean_object* v_skipConstInApp_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_){
_start:
{
uint8_t v_usedLetOnly_boxed_2149_; uint8_t v_skipConstInApp_boxed_2150_; lean_object* v_res_2151_; 
v_usedLetOnly_boxed_2149_ = lean_unbox(v_usedLetOnly_2141_);
v_skipConstInApp_boxed_2150_ = lean_unbox(v_skipConstInApp_2142_);
v_res_2151_ = l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1(v_input_2138_, v_pre_2139_, v_post_2140_, v_usedLetOnly_boxed_2149_, v_skipConstInApp_boxed_2150_, v___y_2143_, v___y_2144_, v___y_2145_, v___y_2146_, v___y_2147_);
lean_dec(v___y_2147_);
lean_dec_ref(v___y_2146_);
lean_dec(v___y_2145_);
lean_dec_ref(v___y_2144_);
return v_res_2151_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe(lean_object* v_e_2154_, lean_object* v_a_2155_, lean_object* v_a_2156_, lean_object* v_a_2157_, lean_object* v_a_2158_){
_start:
{
lean_object* v___y_2161_; lean_object* v___x_2178_; uint8_t v_transparency_2179_; lean_object* v___f_2180_; lean_object* v___f_2181_; uint8_t v___x_2182_; uint8_t v___x_2183_; lean_object* v___x_2184_; uint8_t v___x_2185_; 
v___x_2178_ = l_Lean_Meta_Context_config(v_a_2155_);
v_transparency_2179_ = lean_ctor_get_uint8(v___x_2178_, 9);
lean_dec_ref(v___x_2178_);
v___f_2180_ = ((lean_object*)(l_Lean_Meta_expandCoe___closed__0));
v___f_2181_ = ((lean_object*)(l_Lean_Meta_expandCoe___closed__1));
v___x_2182_ = 0;
v___x_2183_ = 3;
v___x_2184_ = lean_box(0);
v___x_2185_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2179_, v___x_2183_);
if (v___x_2185_ == 0)
{
lean_object* v_keyedConfig_2186_; uint8_t v_trackZetaDelta_2187_; lean_object* v_zetaDeltaSet_2188_; lean_object* v_lctx_2189_; lean_object* v_localInstances_2190_; lean_object* v_defEqCtx_x3f_2191_; lean_object* v_synthPendingDepth_2192_; lean_object* v_customCanUnfoldPredicate_x3f_2193_; uint8_t v_univApprox_2194_; uint8_t v_inTypeClassResolution_2195_; uint8_t v_cacheInferType_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; 
v_keyedConfig_2186_ = lean_ctor_get(v_a_2155_, 0);
v_trackZetaDelta_2187_ = lean_ctor_get_uint8(v_a_2155_, sizeof(void*)*7);
v_zetaDeltaSet_2188_ = lean_ctor_get(v_a_2155_, 1);
v_lctx_2189_ = lean_ctor_get(v_a_2155_, 2);
v_localInstances_2190_ = lean_ctor_get(v_a_2155_, 3);
v_defEqCtx_x3f_2191_ = lean_ctor_get(v_a_2155_, 4);
v_synthPendingDepth_2192_ = lean_ctor_get(v_a_2155_, 5);
v_customCanUnfoldPredicate_x3f_2193_ = lean_ctor_get(v_a_2155_, 6);
v_univApprox_2194_ = lean_ctor_get_uint8(v_a_2155_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2195_ = lean_ctor_get_uint8(v_a_2155_, sizeof(void*)*7 + 2);
v_cacheInferType_2196_ = lean_ctor_get_uint8(v_a_2155_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2186_);
v___x_2197_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2183_, v_keyedConfig_2186_);
lean_inc(v_customCanUnfoldPredicate_x3f_2193_);
lean_inc(v_synthPendingDepth_2192_);
lean_inc(v_defEqCtx_x3f_2191_);
lean_inc_ref(v_localInstances_2190_);
lean_inc_ref(v_lctx_2189_);
lean_inc(v_zetaDeltaSet_2188_);
v___x_2198_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2198_, 0, v___x_2197_);
lean_ctor_set(v___x_2198_, 1, v_zetaDeltaSet_2188_);
lean_ctor_set(v___x_2198_, 2, v_lctx_2189_);
lean_ctor_set(v___x_2198_, 3, v_localInstances_2190_);
lean_ctor_set(v___x_2198_, 4, v_defEqCtx_x3f_2191_);
lean_ctor_set(v___x_2198_, 5, v_synthPendingDepth_2192_);
lean_ctor_set(v___x_2198_, 6, v_customCanUnfoldPredicate_x3f_2193_);
lean_ctor_set_uint8(v___x_2198_, sizeof(void*)*7, v_trackZetaDelta_2187_);
lean_ctor_set_uint8(v___x_2198_, sizeof(void*)*7 + 1, v_univApprox_2194_);
lean_ctor_set_uint8(v___x_2198_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2195_);
lean_ctor_set_uint8(v___x_2198_, sizeof(void*)*7 + 3, v_cacheInferType_2196_);
v___x_2199_ = l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1(v_e_2154_, v___f_2181_, v___f_2180_, v___x_2182_, v___x_2182_, v___x_2184_, v___x_2198_, v_a_2156_, v_a_2157_, v_a_2158_);
lean_dec_ref_known(v___x_2198_, 7);
v___y_2161_ = v___x_2199_;
goto v___jp_2160_;
}
else
{
lean_object* v___x_2200_; 
v___x_2200_ = l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1(v_e_2154_, v___f_2181_, v___f_2180_, v___x_2182_, v___x_2182_, v___x_2184_, v_a_2155_, v_a_2156_, v_a_2157_, v_a_2158_);
v___y_2161_ = v___x_2200_;
goto v___jp_2160_;
}
v___jp_2160_:
{
if (lean_obj_tag(v___y_2161_) == 0)
{
lean_object* v_a_2162_; lean_object* v___x_2164_; uint8_t v_isShared_2165_; uint8_t v_isSharedCheck_2169_; 
v_a_2162_ = lean_ctor_get(v___y_2161_, 0);
v_isSharedCheck_2169_ = !lean_is_exclusive(v___y_2161_);
if (v_isSharedCheck_2169_ == 0)
{
v___x_2164_ = v___y_2161_;
v_isShared_2165_ = v_isSharedCheck_2169_;
goto v_resetjp_2163_;
}
else
{
lean_inc(v_a_2162_);
lean_dec(v___y_2161_);
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
v_reuseFailAlloc_2168_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_2170_; lean_object* v___x_2172_; uint8_t v_isShared_2173_; uint8_t v_isSharedCheck_2177_; 
v_a_2170_ = lean_ctor_get(v___y_2161_, 0);
v_isSharedCheck_2177_ = !lean_is_exclusive(v___y_2161_);
if (v_isSharedCheck_2177_ == 0)
{
v___x_2172_ = v___y_2161_;
v_isShared_2173_ = v_isSharedCheck_2177_;
goto v_resetjp_2171_;
}
else
{
lean_inc(v_a_2170_);
lean_dec(v___y_2161_);
v___x_2172_ = lean_box(0);
v_isShared_2173_ = v_isSharedCheck_2177_;
goto v_resetjp_2171_;
}
v_resetjp_2171_:
{
lean_object* v___x_2175_; 
if (v_isShared_2173_ == 0)
{
v___x_2175_ = v___x_2172_;
goto v_reusejp_2174_;
}
else
{
lean_object* v_reuseFailAlloc_2176_; 
v_reuseFailAlloc_2176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2176_, 0, v_a_2170_);
v___x_2175_ = v_reuseFailAlloc_2176_;
goto v_reusejp_2174_;
}
v_reusejp_2174_:
{
return v___x_2175_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___boxed(lean_object* v_e_2201_, lean_object* v_a_2202_, lean_object* v_a_2203_, lean_object* v_a_2204_, lean_object* v_a_2205_, lean_object* v_a_2206_){
_start:
{
lean_object* v_res_2207_; 
v_res_2207_ = l_Lean_Meta_expandCoe(v_e_2201_, v_a_2202_, v_a_2203_, v_a_2204_, v_a_2205_);
lean_dec(v_a_2205_);
lean_dec_ref(v_a_2204_);
lean_dec(v_a_2203_);
lean_dec_ref(v_a_2202_);
return v_res_2207_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2(lean_object* v_00_u03b2_2208_, lean_object* v_m_2209_, lean_object* v_a_2210_){
_start:
{
lean_object* v___x_2211_; 
v___x_2211_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg(v_m_2209_, v_a_2210_);
return v___x_2211_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___boxed(lean_object* v_00_u03b2_2212_, lean_object* v_m_2213_, lean_object* v_a_2214_){
_start:
{
lean_object* v_res_2215_; 
v_res_2215_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2(v_00_u03b2_2212_, v_m_2213_, v_a_2214_);
lean_dec(v_a_2214_);
lean_dec_ref(v_m_2213_);
return v_res_2215_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_2216_){
_start:
{
lean_object* v___x_2217_; 
v___x_2217_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2);
return v___x_2217_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg(){
_start:
{
lean_object* v___x_2219_; 
v___x_2219_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2);
return v___x_2219_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v___dummy_2220_){
_start:
{
lean_object* v_res_2221_; 
v_res_2221_ = l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg();
return v_res_2221_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2222_){
_start:
{
lean_object* v___x_2223_; 
v___x_2223_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2);
return v___x_2223_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_2224_, lean_object* v_x_2225_, lean_object* v_x_2226_){
_start:
{
uint8_t v___x_2227_; 
v___x_2227_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___redArg(v_x_2225_, v_x_2226_);
return v___x_2227_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_2228_, lean_object* v_x_2229_, lean_object* v_x_2230_){
_start:
{
uint8_t v_res_2231_; lean_object* v_r_2232_; 
v_res_2231_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2(v_00_u03b2_2228_, v_x_2229_, v_x_2230_);
lean_dec_ref(v_x_2230_);
lean_dec_ref(v_x_2229_);
v_r_2232_ = lean_box(v_res_2231_);
return v_r_2232_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__6(lean_object* v_00_u03b2_2233_, lean_object* v_a_2234_, lean_object* v_x_2235_){
_start:
{
lean_object* v___x_2236_; 
v___x_2236_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__6___redArg(v_a_2234_, v_x_2235_);
return v___x_2236_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__6___boxed(lean_object* v_00_u03b2_2237_, lean_object* v_a_2238_, lean_object* v_x_2239_){
_start:
{
lean_object* v_res_2240_; 
v_res_2240_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__6(v_00_u03b2_2237_, v_a_2238_, v_x_2239_);
lean_dec(v_x_2239_);
lean_dec(v_a_2238_);
return v_res_2240_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11(lean_object* v_upperBound_2241_, lean_object* v___x_2242_, lean_object* v_pre_2243_, lean_object* v_post_2244_, uint8_t v_usedLetOnly_2245_, uint8_t v_skipConstInApp_2246_, uint8_t v_skipInstances_2247_, lean_object* v___x_2248_, lean_object* v_inst_2249_, lean_object* v_R_2250_, lean_object* v_a_2251_, lean_object* v_b_2252_, lean_object* v_c_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_){
_start:
{
lean_object* v___x_2261_; 
v___x_2261_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg(v_upperBound_2241_, v___x_2242_, v_pre_2243_, v_post_2244_, v_usedLetOnly_2245_, v_skipConstInApp_2246_, v_skipInstances_2247_, v_a_2251_, v_b_2252_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_);
return v___x_2261_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___boxed(lean_object** _args){
lean_object* v_upperBound_2262_ = _args[0];
lean_object* v___x_2263_ = _args[1];
lean_object* v_pre_2264_ = _args[2];
lean_object* v_post_2265_ = _args[3];
lean_object* v_usedLetOnly_2266_ = _args[4];
lean_object* v_skipConstInApp_2267_ = _args[5];
lean_object* v_skipInstances_2268_ = _args[6];
lean_object* v___x_2269_ = _args[7];
lean_object* v_inst_2270_ = _args[8];
lean_object* v_R_2271_ = _args[9];
lean_object* v_a_2272_ = _args[10];
lean_object* v_b_2273_ = _args[11];
lean_object* v_c_2274_ = _args[12];
lean_object* v___y_2275_ = _args[13];
lean_object* v___y_2276_ = _args[14];
lean_object* v___y_2277_ = _args[15];
lean_object* v___y_2278_ = _args[16];
lean_object* v___y_2279_ = _args[17];
lean_object* v___y_2280_ = _args[18];
lean_object* v___y_2281_ = _args[19];
_start:
{
uint8_t v_usedLetOnly_boxed_2282_; uint8_t v_skipConstInApp_boxed_2283_; uint8_t v_skipInstances_boxed_2284_; lean_object* v_res_2285_; 
v_usedLetOnly_boxed_2282_ = lean_unbox(v_usedLetOnly_2266_);
v_skipConstInApp_boxed_2283_ = lean_unbox(v_skipConstInApp_2267_);
v_skipInstances_boxed_2284_ = lean_unbox(v_skipInstances_2268_);
v_res_2285_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11(v_upperBound_2262_, v___x_2263_, v_pre_2264_, v_post_2265_, v_usedLetOnly_boxed_2282_, v_skipConstInApp_boxed_2283_, v_skipInstances_boxed_2284_, v___x_2269_, v_inst_2270_, v_R_2271_, v_a_2272_, v_b_2273_, v_c_2274_, v___y_2275_, v___y_2276_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_);
lean_dec(v___y_2280_);
lean_dec_ref(v___y_2279_);
lean_dec(v___y_2278_);
lean_dec_ref(v___y_2277_);
lean_dec(v___y_2275_);
lean_dec(v___x_2269_);
lean_dec_ref(v___x_2263_);
lean_dec(v_upperBound_2262_);
return v_res_2285_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12(lean_object* v_00_u03b2_2286_, lean_object* v_m_2287_, lean_object* v_a_2288_){
_start:
{
lean_object* v___x_2289_; 
v___x_2289_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___redArg(v_m_2287_, v_a_2288_);
return v___x_2289_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___boxed(lean_object* v_00_u03b2_2290_, lean_object* v_m_2291_, lean_object* v_a_2292_){
_start:
{
lean_object* v_res_2293_; 
v_res_2293_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12(v_00_u03b2_2290_, v_m_2291_, v_a_2292_);
lean_dec_ref(v_a_2292_);
lean_dec_ref(v_m_2291_);
return v_res_2293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__18(lean_object* v_00_u03b1_2294_, lean_object* v_name_2295_, uint8_t v_bi_2296_, lean_object* v_type_2297_, lean_object* v_k_2298_, uint8_t v_kind_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_){
_start:
{
lean_object* v___x_2307_; 
v___x_2307_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__18___redArg(v_name_2295_, v_bi_2296_, v_type_2297_, v_k_2298_, v_kind_2299_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_, v___y_2304_, v___y_2305_);
return v___x_2307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__18___boxed(lean_object* v_00_u03b1_2308_, lean_object* v_name_2309_, lean_object* v_bi_2310_, lean_object* v_type_2311_, lean_object* v_k_2312_, lean_object* v_kind_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_){
_start:
{
uint8_t v_bi_boxed_2321_; uint8_t v_kind_boxed_2322_; lean_object* v_res_2323_; 
v_bi_boxed_2321_ = lean_unbox(v_bi_2310_);
v_kind_boxed_2322_ = lean_unbox(v_kind_2313_);
v_res_2323_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13_spec__18(v_00_u03b1_2308_, v_name_2309_, v_bi_boxed_2321_, v_type_2311_, v_k_2312_, v_kind_boxed_2322_, v___y_2314_, v___y_2315_, v___y_2316_, v___y_2317_, v___y_2318_, v___y_2319_);
lean_dec(v___y_2319_);
lean_dec_ref(v___y_2318_);
lean_dec(v___y_2317_);
lean_dec_ref(v___y_2316_);
lean_dec(v___y_2314_);
return v_res_2323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15_spec__21(lean_object* v_00_u03b1_2324_, lean_object* v_name_2325_, lean_object* v_type_2326_, lean_object* v_val_2327_, lean_object* v_k_2328_, uint8_t v_nondep_2329_, uint8_t v_kind_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_){
_start:
{
lean_object* v___x_2338_; 
v___x_2338_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15_spec__21___redArg(v_name_2325_, v_type_2326_, v_val_2327_, v_k_2328_, v_nondep_2329_, v_kind_2330_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_);
return v___x_2338_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15_spec__21___boxed(lean_object* v_00_u03b1_2339_, lean_object* v_name_2340_, lean_object* v_type_2341_, lean_object* v_val_2342_, lean_object* v_k_2343_, lean_object* v_nondep_2344_, lean_object* v_kind_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_, lean_object* v___y_2350_, lean_object* v___y_2351_, lean_object* v___y_2352_){
_start:
{
uint8_t v_nondep_boxed_2353_; uint8_t v_kind_boxed_2354_; lean_object* v_res_2355_; 
v_nondep_boxed_2353_ = lean_unbox(v_nondep_2344_);
v_kind_boxed_2354_ = lean_unbox(v_kind_2345_);
v_res_2355_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15_spec__21(v_00_u03b1_2339_, v_name_2340_, v_type_2341_, v_val_2342_, v_k_2343_, v_nondep_boxed_2353_, v_kind_boxed_2354_, v___y_2346_, v___y_2347_, v___y_2348_, v___y_2349_, v___y_2350_, v___y_2351_);
lean_dec(v___y_2351_);
lean_dec_ref(v___y_2350_);
lean_dec(v___y_2349_);
lean_dec_ref(v___y_2348_);
lean_dec(v___y_2346_);
return v_res_2355_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24(lean_object* v_00_u03b1_2356_, lean_object* v_ref_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_){
_start:
{
lean_object* v___x_2363_; 
v___x_2363_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg(v_ref_2357_);
return v___x_2363_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___boxed(lean_object* v_00_u03b1_2364_, lean_object* v_ref_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_){
_start:
{
lean_object* v_res_2371_; 
v_res_2371_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24(v_00_u03b1_2364_, v_ref_2365_, v___y_2366_, v___y_2367_, v___y_2368_, v___y_2369_);
lean_dec(v___y_2369_);
lean_dec_ref(v___y_2368_);
lean_dec(v___y_2367_);
lean_dec_ref(v___y_2366_);
return v_res_2371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17(lean_object* v_00_u03b1_2372_, lean_object* v_x_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_){
_start:
{
lean_object* v___x_2381_; 
v___x_2381_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17___redArg(v_x_2373_, v___y_2374_, v___y_2375_, v___y_2376_, v___y_2377_, v___y_2378_, v___y_2379_);
return v___x_2381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17___boxed(lean_object* v_00_u03b1_2382_, lean_object* v_x_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_){
_start:
{
lean_object* v_res_2391_; 
v_res_2391_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17(v_00_u03b1_2382_, v_x_2383_, v___y_2384_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_, v___y_2389_);
lean_dec(v___y_2389_);
lean_dec_ref(v___y_2388_);
lean_dec(v___y_2387_);
lean_dec_ref(v___y_2386_);
lean_dec(v___y_2384_);
return v_res_2391_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18(lean_object* v_00_u03b2_2392_, lean_object* v_m_2393_, lean_object* v_a_2394_, lean_object* v_b_2395_){
_start:
{
lean_object* v___x_2396_; 
v___x_2396_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18___redArg(v_m_2393_, v_a_2394_, v_b_2395_);
return v___x_2396_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_2397_, lean_object* v_x_2398_, size_t v_x_2399_, lean_object* v_x_2400_){
_start:
{
uint8_t v___x_2401_; 
v___x_2401_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5___redArg(v_x_2398_, v_x_2399_, v_x_2400_);
return v___x_2401_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5___boxed(lean_object* v_00_u03b2_2402_, lean_object* v_x_2403_, lean_object* v_x_2404_, lean_object* v_x_2405_){
_start:
{
size_t v_x_39895__boxed_2406_; uint8_t v_res_2407_; lean_object* v_r_2408_; 
v_x_39895__boxed_2406_ = lean_unbox_usize(v_x_2404_);
lean_dec(v_x_2404_);
v_res_2407_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5(v_00_u03b2_2402_, v_x_2403_, v_x_39895__boxed_2406_, v_x_2405_);
lean_dec_ref(v_x_2405_);
lean_dec_ref(v_x_2403_);
v_r_2408_ = lean_box(v_res_2407_);
return v_r_2408_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16(lean_object* v_00_u03b2_2409_, lean_object* v_a_2410_, lean_object* v_x_2411_){
_start:
{
lean_object* v___x_2412_; 
v___x_2412_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg(v_a_2410_, v_x_2411_);
return v___x_2412_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___boxed(lean_object* v_00_u03b2_2413_, lean_object* v_a_2414_, lean_object* v_x_2415_){
_start:
{
lean_object* v_res_2416_; 
v_res_2416_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16(v_00_u03b2_2413_, v_a_2414_, v_x_2415_);
lean_dec(v_x_2415_);
lean_dec_ref(v_a_2414_);
return v_res_2416_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__26(lean_object* v_00_u03b2_2417_, lean_object* v_a_2418_, lean_object* v_x_2419_){
_start:
{
uint8_t v___x_2420_; 
v___x_2420_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__26___redArg(v_a_2418_, v_x_2419_);
return v___x_2420_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__26___boxed(lean_object* v_00_u03b2_2421_, lean_object* v_a_2422_, lean_object* v_x_2423_){
_start:
{
uint8_t v_res_2424_; lean_object* v_r_2425_; 
v_res_2424_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__26(v_00_u03b2_2421_, v_a_2422_, v_x_2423_);
lean_dec(v_x_2423_);
lean_dec_ref(v_a_2422_);
v_r_2425_ = lean_box(v_res_2424_);
return v_r_2425_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__27(lean_object* v_00_u03b2_2426_, lean_object* v_data_2427_){
_start:
{
lean_object* v___x_2428_; 
v___x_2428_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__27___redArg(v_data_2427_);
return v___x_2428_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__28(lean_object* v_00_u03b2_2429_, lean_object* v_a_2430_, lean_object* v_b_2431_, lean_object* v_x_2432_){
_start:
{
lean_object* v___x_2433_; 
v___x_2433_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__28___redArg(v_a_2430_, v_b_2431_, v_x_2432_);
return v___x_2433_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5_spec__9(lean_object* v_00_u03b2_2434_, lean_object* v_keys_2435_, lean_object* v_vals_2436_, lean_object* v_heq_2437_, lean_object* v_i_2438_, lean_object* v_k_2439_){
_start:
{
uint8_t v___x_2440_; 
v___x_2440_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5_spec__9___redArg(v_keys_2435_, v_i_2438_, v_k_2439_);
return v___x_2440_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5_spec__9___boxed(lean_object* v_00_u03b2_2441_, lean_object* v_keys_2442_, lean_object* v_vals_2443_, lean_object* v_heq_2444_, lean_object* v_i_2445_, lean_object* v_k_2446_){
_start:
{
uint8_t v_res_2447_; lean_object* v_r_2448_; 
v_res_2447_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5_spec__9(v_00_u03b2_2441_, v_keys_2442_, v_vals_2443_, v_heq_2444_, v_i_2445_, v_k_2446_);
lean_dec_ref(v_k_2446_);
lean_dec_ref(v_vals_2443_);
lean_dec_ref(v_keys_2442_);
v_r_2448_ = lean_box(v_res_2447_);
return v_r_2448_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__27_spec__29(lean_object* v_00_u03b2_2449_, lean_object* v_i_2450_, lean_object* v_source_2451_, lean_object* v_target_2452_){
_start:
{
lean_object* v___x_2453_; 
v___x_2453_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__27_spec__29___redArg(v_i_2450_, v_source_2451_, v_target_2452_);
return v___x_2453_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__27_spec__29_spec__30(lean_object* v_00_u03b2_2454_, lean_object* v_x_2455_, lean_object* v_x_2456_){
_start:
{
lean_object* v___x_2457_; 
v___x_2457_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__18_spec__27_spec__29_spec__30___redArg(v_x_2455_, v_x_2456_);
return v___x_2457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__spec__0(lean_object* v_name_2458_, lean_object* v_decl_2459_, lean_object* v_ref_2460_){
_start:
{
lean_object* v_defValue_2462_; lean_object* v_descr_2463_; lean_object* v_deprecation_x3f_2464_; lean_object* v___x_2465_; uint8_t v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; 
v_defValue_2462_ = lean_ctor_get(v_decl_2459_, 0);
v_descr_2463_ = lean_ctor_get(v_decl_2459_, 1);
v_deprecation_x3f_2464_ = lean_ctor_get(v_decl_2459_, 2);
v___x_2465_ = lean_alloc_ctor(1, 0, 1);
v___x_2466_ = lean_unbox(v_defValue_2462_);
lean_ctor_set_uint8(v___x_2465_, 0, v___x_2466_);
lean_inc(v_deprecation_x3f_2464_);
lean_inc_ref(v_descr_2463_);
lean_inc_n(v_name_2458_, 2);
v___x_2467_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2467_, 0, v_name_2458_);
lean_ctor_set(v___x_2467_, 1, v_ref_2460_);
lean_ctor_set(v___x_2467_, 2, v___x_2465_);
lean_ctor_set(v___x_2467_, 3, v_descr_2463_);
lean_ctor_set(v___x_2467_, 4, v_deprecation_x3f_2464_);
v___x_2468_ = lean_register_option(v_name_2458_, v___x_2467_);
if (lean_obj_tag(v___x_2468_) == 0)
{
lean_object* v___x_2470_; uint8_t v_isShared_2471_; uint8_t v_isSharedCheck_2476_; 
v_isSharedCheck_2476_ = !lean_is_exclusive(v___x_2468_);
if (v_isSharedCheck_2476_ == 0)
{
lean_object* v_unused_2477_; 
v_unused_2477_ = lean_ctor_get(v___x_2468_, 0);
lean_dec(v_unused_2477_);
v___x_2470_ = v___x_2468_;
v_isShared_2471_ = v_isSharedCheck_2476_;
goto v_resetjp_2469_;
}
else
{
lean_dec(v___x_2468_);
v___x_2470_ = lean_box(0);
v_isShared_2471_ = v_isSharedCheck_2476_;
goto v_resetjp_2469_;
}
v_resetjp_2469_:
{
lean_object* v___x_2472_; lean_object* v___x_2474_; 
lean_inc(v_defValue_2462_);
v___x_2472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2472_, 0, v_name_2458_);
lean_ctor_set(v___x_2472_, 1, v_defValue_2462_);
if (v_isShared_2471_ == 0)
{
lean_ctor_set(v___x_2470_, 0, v___x_2472_);
v___x_2474_ = v___x_2470_;
goto v_reusejp_2473_;
}
else
{
lean_object* v_reuseFailAlloc_2475_; 
v_reuseFailAlloc_2475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2475_, 0, v___x_2472_);
v___x_2474_ = v_reuseFailAlloc_2475_;
goto v_reusejp_2473_;
}
v_reusejp_2473_:
{
return v___x_2474_;
}
}
}
else
{
lean_object* v_a_2478_; lean_object* v___x_2480_; uint8_t v_isShared_2481_; uint8_t v_isSharedCheck_2485_; 
lean_dec(v_name_2458_);
v_a_2478_ = lean_ctor_get(v___x_2468_, 0);
v_isSharedCheck_2485_ = !lean_is_exclusive(v___x_2468_);
if (v_isSharedCheck_2485_ == 0)
{
v___x_2480_ = v___x_2468_;
v_isShared_2481_ = v_isSharedCheck_2485_;
goto v_resetjp_2479_;
}
else
{
lean_inc(v_a_2478_);
lean_dec(v___x_2468_);
v___x_2480_ = lean_box(0);
v_isShared_2481_ = v_isSharedCheck_2485_;
goto v_resetjp_2479_;
}
v_resetjp_2479_:
{
lean_object* v___x_2483_; 
if (v_isShared_2481_ == 0)
{
v___x_2483_ = v___x_2480_;
goto v_reusejp_2482_;
}
else
{
lean_object* v_reuseFailAlloc_2484_; 
v_reuseFailAlloc_2484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2484_, 0, v_a_2478_);
v___x_2483_ = v_reuseFailAlloc_2484_;
goto v_reusejp_2482_;
}
v_reusejp_2482_:
{
return v___x_2483_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_2486_, lean_object* v_decl_2487_, lean_object* v_ref_2488_, lean_object* v_a_2489_){
_start:
{
lean_object* v_res_2490_; 
v_res_2490_ = l_Lean_Option_register___at___00__private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__spec__0(v_name_2486_, v_decl_2487_, v_ref_2488_);
lean_dec_ref(v_decl_2487_);
return v_res_2490_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; 
v___x_2505_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_));
v___x_2506_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_));
v___x_2507_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_));
v___x_2508_ = l_Lean_Option_register___at___00__private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__spec__0(v___x_2505_, v___x_2506_, v___x_2507_);
return v___x_2508_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4____boxed(lean_object* v_a_2509_){
_start:
{
lean_object* v_res_2510_; 
v_res_2510_ = l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_();
return v_res_2510_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(lean_object* v_msg_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_){
_start:
{
lean_object* v_ref_2517_; lean_object* v___x_2518_; lean_object* v_a_2519_; lean_object* v___x_2521_; uint8_t v_isShared_2522_; uint8_t v_isSharedCheck_2527_; 
v_ref_2517_ = lean_ctor_get(v___y_2514_, 2);
v___x_2518_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__3_spec__7(v_msg_2511_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_);
v_a_2519_ = lean_ctor_get(v___x_2518_, 0);
v_isSharedCheck_2527_ = !lean_is_exclusive(v___x_2518_);
if (v_isSharedCheck_2527_ == 0)
{
v___x_2521_ = v___x_2518_;
v_isShared_2522_ = v_isSharedCheck_2527_;
goto v_resetjp_2520_;
}
else
{
lean_inc(v_a_2519_);
lean_dec(v___x_2518_);
v___x_2521_ = lean_box(0);
v_isShared_2522_ = v_isSharedCheck_2527_;
goto v_resetjp_2520_;
}
v_resetjp_2520_:
{
lean_object* v___x_2523_; lean_object* v___x_2525_; 
lean_inc(v_ref_2517_);
v___x_2523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2523_, 0, v_ref_2517_);
lean_ctor_set(v___x_2523_, 1, v_a_2519_);
if (v_isShared_2522_ == 0)
{
lean_ctor_set_tag(v___x_2521_, 1);
lean_ctor_set(v___x_2521_, 0, v___x_2523_);
v___x_2525_ = v___x_2521_;
goto v_reusejp_2524_;
}
else
{
lean_object* v_reuseFailAlloc_2526_; 
v_reuseFailAlloc_2526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2526_, 0, v___x_2523_);
v___x_2525_ = v_reuseFailAlloc_2526_;
goto v_reusejp_2524_;
}
v_reusejp_2524_:
{
return v___x_2525_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg___boxed(lean_object* v_msg_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_){
_start:
{
lean_object* v_res_2534_; 
v_res_2534_ = l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(v_msg_2528_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_);
lean_dec(v___y_2532_);
lean_dec_ref(v___y_2531_);
lean_dec(v___y_2530_);
lean_dec_ref(v___y_2529_);
return v_res_2534_;
}
}
static lean_object* _init_l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__4(void){
_start:
{
lean_object* v___x_2542_; lean_object* v___x_2543_; 
v___x_2542_ = ((lean_object*)(l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__3));
v___x_2543_ = l_Lean_stringToMessageData(v___x_2542_);
return v___x_2543_;
}
}
static lean_object* _init_l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__6(void){
_start:
{
lean_object* v___x_2545_; lean_object* v___x_2546_; 
v___x_2545_ = ((lean_object*)(l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__5));
v___x_2546_ = l_Lean_stringToMessageData(v___x_2545_);
return v___x_2546_;
}
}
static lean_object* _init_l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__8(void){
_start:
{
lean_object* v___x_2548_; lean_object* v___x_2549_; 
v___x_2548_ = ((lean_object*)(l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__7));
v___x_2549_ = l_Lean_stringToMessageData(v___x_2548_);
return v___x_2549_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f(lean_object* v_expr_2550_, lean_object* v_expectedType_2551_, lean_object* v_a_2552_, lean_object* v_a_2553_, lean_object* v_a_2554_, lean_object* v_a_2555_){
_start:
{
lean_object* v___x_2557_; 
lean_inc(v_a_2555_);
lean_inc_ref(v_a_2554_);
lean_inc(v_a_2553_);
lean_inc_ref(v_a_2552_);
lean_inc_ref(v_expr_2550_);
v___x_2557_ = lean_infer_type(v_expr_2550_, v_a_2552_, v_a_2553_, v_a_2554_, v_a_2555_);
if (lean_obj_tag(v___x_2557_) == 0)
{
lean_object* v_a_2558_; lean_object* v___x_2559_; 
v_a_2558_ = lean_ctor_get(v___x_2557_, 0);
lean_inc_n(v_a_2558_, 2);
lean_dec_ref_known(v___x_2557_, 1);
v___x_2559_ = l_Lean_Meta_getLevel(v_a_2558_, v_a_2552_, v_a_2553_, v_a_2554_, v_a_2555_);
if (lean_obj_tag(v___x_2559_) == 0)
{
lean_object* v_a_2560_; lean_object* v___x_2561_; 
v_a_2560_ = lean_ctor_get(v___x_2559_, 0);
lean_inc(v_a_2560_);
lean_dec_ref_known(v___x_2559_, 1);
lean_inc_ref(v_expectedType_2551_);
v___x_2561_ = l_Lean_Meta_getLevel(v_expectedType_2551_, v_a_2552_, v_a_2553_, v_a_2554_, v_a_2555_);
if (lean_obj_tag(v___x_2561_) == 0)
{
lean_object* v_a_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; 
v_a_2562_ = lean_ctor_get(v___x_2561_, 0);
lean_inc(v_a_2562_);
lean_dec_ref_known(v___x_2561_, 1);
v___x_2563_ = ((lean_object*)(l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__1));
v___x_2564_ = lean_box(0);
v___x_2565_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2565_, 0, v_a_2562_);
lean_ctor_set(v___x_2565_, 1, v___x_2564_);
v___x_2566_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2566_, 0, v_a_2560_);
lean_ctor_set(v___x_2566_, 1, v___x_2565_);
lean_inc_ref(v___x_2566_);
v___x_2567_ = l_Lean_mkConst(v___x_2563_, v___x_2566_);
v___x_2568_ = lean_unsigned_to_nat(3u);
v___x_2569_ = lean_mk_empty_array_with_capacity(v___x_2568_);
lean_inc(v_a_2558_);
v___x_2570_ = lean_array_push(v___x_2569_, v_a_2558_);
lean_inc_ref(v_expr_2550_);
v___x_2571_ = lean_array_push(v___x_2570_, v_expr_2550_);
lean_inc_ref(v_expectedType_2551_);
v___x_2572_ = lean_array_push(v___x_2571_, v_expectedType_2551_);
v___x_2573_ = l_Lean_mkAppN(v___x_2567_, v___x_2572_);
lean_dec_ref(v___x_2572_);
v___x_2574_ = lean_box(0);
v___x_2575_ = l_Lean_Meta_trySynthInstance(v___x_2573_, v___x_2574_, v_a_2552_, v_a_2553_, v_a_2554_, v_a_2555_);
if (lean_obj_tag(v___x_2575_) == 0)
{
lean_object* v_a_2576_; lean_object* v___x_2578_; uint8_t v_isShared_2579_; uint8_t v_isSharedCheck_2673_; 
v_a_2576_ = lean_ctor_get(v___x_2575_, 0);
v_isSharedCheck_2673_ = !lean_is_exclusive(v___x_2575_);
if (v_isSharedCheck_2673_ == 0)
{
v___x_2578_ = v___x_2575_;
v_isShared_2579_ = v_isSharedCheck_2673_;
goto v_resetjp_2577_;
}
else
{
lean_inc(v_a_2576_);
lean_dec(v___x_2575_);
v___x_2578_ = lean_box(0);
v_isShared_2579_ = v_isSharedCheck_2673_;
goto v_resetjp_2577_;
}
v_resetjp_2577_:
{
switch(lean_obj_tag(v_a_2576_))
{
case 0:
{
lean_object* v___x_2580_; lean_object* v___x_2582_; 
lean_dec_ref_known(v___x_2566_, 2);
lean_dec(v_a_2558_);
lean_dec_ref(v_expectedType_2551_);
lean_dec_ref(v_expr_2550_);
v___x_2580_ = lean_box(0);
if (v_isShared_2579_ == 0)
{
lean_ctor_set(v___x_2578_, 0, v___x_2580_);
v___x_2582_ = v___x_2578_;
goto v_reusejp_2581_;
}
else
{
lean_object* v_reuseFailAlloc_2583_; 
v_reuseFailAlloc_2583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2583_, 0, v___x_2580_);
v___x_2582_ = v_reuseFailAlloc_2583_;
goto v_reusejp_2581_;
}
v_reusejp_2581_:
{
return v___x_2582_;
}
}
case 1:
{
lean_object* v_a_2584_; lean_object* v___x_2586_; uint8_t v_isShared_2587_; uint8_t v_isSharedCheck_2668_; 
lean_del_object(v___x_2578_);
v_a_2584_ = lean_ctor_get(v_a_2576_, 0);
v_isSharedCheck_2668_ = !lean_is_exclusive(v_a_2576_);
if (v_isSharedCheck_2668_ == 0)
{
v___x_2586_ = v_a_2576_;
v_isShared_2587_ = v_isSharedCheck_2668_;
goto v_resetjp_2585_;
}
else
{
lean_inc(v_a_2584_);
lean_dec(v_a_2576_);
v___x_2586_ = lean_box(0);
v_isShared_2587_ = v_isSharedCheck_2668_;
goto v_resetjp_2585_;
}
v_resetjp_2585_:
{
lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; 
v___x_2588_ = ((lean_object*)(l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__2));
v___x_2589_ = l_Lean_mkConst(v___x_2588_, v___x_2566_);
v___x_2590_ = lean_unsigned_to_nat(4u);
v___x_2591_ = lean_mk_empty_array_with_capacity(v___x_2590_);
v___x_2592_ = lean_array_push(v___x_2591_, v_a_2558_);
lean_inc_ref(v_expr_2550_);
v___x_2593_ = lean_array_push(v___x_2592_, v_expr_2550_);
lean_inc_ref(v_expectedType_2551_);
v___x_2594_ = lean_array_push(v___x_2593_, v_expectedType_2551_);
v___x_2595_ = lean_array_push(v___x_2594_, v_a_2584_);
v___x_2596_ = l_Lean_mkAppN(v___x_2589_, v___x_2595_);
lean_dec_ref(v___x_2595_);
v___x_2597_ = l_Lean_Meta_expandCoe(v___x_2596_, v_a_2552_, v_a_2553_, v_a_2554_, v_a_2555_);
if (lean_obj_tag(v___x_2597_) == 0)
{
lean_object* v_a_2598_; lean_object* v___x_2600_; uint8_t v_isShared_2601_; uint8_t v_isSharedCheck_2659_; 
v_a_2598_ = lean_ctor_get(v___x_2597_, 0);
v_isSharedCheck_2659_ = !lean_is_exclusive(v___x_2597_);
if (v_isSharedCheck_2659_ == 0)
{
v___x_2600_ = v___x_2597_;
v_isShared_2601_ = v_isSharedCheck_2659_;
goto v_resetjp_2599_;
}
else
{
lean_inc(v_a_2598_);
lean_dec(v___x_2597_);
v___x_2600_ = lean_box(0);
v_isShared_2601_ = v_isSharedCheck_2659_;
goto v_resetjp_2599_;
}
v_resetjp_2599_:
{
lean_object* v_fst_2609_; lean_object* v___x_2610_; 
v_fst_2609_ = lean_ctor_get(v_a_2598_, 0);
lean_inc(v_a_2555_);
lean_inc_ref(v_a_2554_);
lean_inc(v_a_2553_);
lean_inc_ref(v_a_2552_);
lean_inc(v_fst_2609_);
v___x_2610_ = lean_infer_type(v_fst_2609_, v_a_2552_, v_a_2553_, v_a_2554_, v_a_2555_);
if (lean_obj_tag(v___x_2610_) == 0)
{
lean_object* v_a_2611_; lean_object* v___x_2612_; 
v_a_2611_ = lean_ctor_get(v___x_2610_, 0);
lean_inc(v_a_2611_);
lean_dec_ref_known(v___x_2610_, 1);
lean_inc_ref(v_expectedType_2551_);
v___x_2612_ = l_Lean_Meta_isExprDefEq(v_a_2611_, v_expectedType_2551_, v_a_2552_, v_a_2553_, v_a_2554_, v_a_2555_);
if (lean_obj_tag(v___x_2612_) == 0)
{
lean_object* v_a_2613_; uint8_t v___x_2614_; 
v_a_2613_ = lean_ctor_get(v___x_2612_, 0);
lean_inc(v_a_2613_);
lean_dec_ref_known(v___x_2612_, 1);
v___x_2614_ = lean_unbox(v_a_2613_);
lean_dec(v_a_2613_);
if (v___x_2614_ == 0)
{
lean_object* v___x_2616_; uint8_t v_isShared_2617_; uint8_t v_isSharedCheck_2640_; 
lean_inc(v_fst_2609_);
lean_del_object(v___x_2600_);
lean_del_object(v___x_2586_);
v_isSharedCheck_2640_ = !lean_is_exclusive(v_a_2598_);
if (v_isSharedCheck_2640_ == 0)
{
lean_object* v_unused_2641_; lean_object* v_unused_2642_; 
v_unused_2641_ = lean_ctor_get(v_a_2598_, 1);
lean_dec(v_unused_2641_);
v_unused_2642_ = lean_ctor_get(v_a_2598_, 0);
lean_dec(v_unused_2642_);
v___x_2616_ = v_a_2598_;
v_isShared_2617_ = v_isSharedCheck_2640_;
goto v_resetjp_2615_;
}
else
{
lean_dec(v_a_2598_);
v___x_2616_ = lean_box(0);
v_isShared_2617_ = v_isSharedCheck_2640_;
goto v_resetjp_2615_;
}
v_resetjp_2615_:
{
lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2621_; 
v___x_2618_ = lean_obj_once(&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__4, &l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__4_once, _init_l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__4);
v___x_2619_ = l_Lean_indentExpr(v_expr_2550_);
if (v_isShared_2617_ == 0)
{
lean_ctor_set_tag(v___x_2616_, 7);
lean_ctor_set(v___x_2616_, 1, v___x_2619_);
lean_ctor_set(v___x_2616_, 0, v___x_2618_);
v___x_2621_ = v___x_2616_;
goto v_reusejp_2620_;
}
else
{
lean_object* v_reuseFailAlloc_2639_; 
v_reuseFailAlloc_2639_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2639_, 0, v___x_2618_);
lean_ctor_set(v_reuseFailAlloc_2639_, 1, v___x_2619_);
v___x_2621_ = v_reuseFailAlloc_2639_;
goto v_reusejp_2620_;
}
v_reusejp_2620_:
{
lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v_a_2631_; lean_object* v___x_2633_; uint8_t v_isShared_2634_; uint8_t v_isSharedCheck_2638_; 
v___x_2622_ = lean_obj_once(&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__6, &l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__6_once, _init_l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__6);
v___x_2623_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2623_, 0, v___x_2621_);
lean_ctor_set(v___x_2623_, 1, v___x_2622_);
v___x_2624_ = l_Lean_indentExpr(v_expectedType_2551_);
v___x_2625_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2625_, 0, v___x_2623_);
lean_ctor_set(v___x_2625_, 1, v___x_2624_);
v___x_2626_ = lean_obj_once(&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__8, &l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__8_once, _init_l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__8);
v___x_2627_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2627_, 0, v___x_2625_);
lean_ctor_set(v___x_2627_, 1, v___x_2626_);
v___x_2628_ = l_Lean_indentExpr(v_fst_2609_);
v___x_2629_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2629_, 0, v___x_2627_);
lean_ctor_set(v___x_2629_, 1, v___x_2628_);
v___x_2630_ = l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(v___x_2629_, v_a_2552_, v_a_2553_, v_a_2554_, v_a_2555_);
v_a_2631_ = lean_ctor_get(v___x_2630_, 0);
v_isSharedCheck_2638_ = !lean_is_exclusive(v___x_2630_);
if (v_isSharedCheck_2638_ == 0)
{
v___x_2633_ = v___x_2630_;
v_isShared_2634_ = v_isSharedCheck_2638_;
goto v_resetjp_2632_;
}
else
{
lean_inc(v_a_2631_);
lean_dec(v___x_2630_);
v___x_2633_ = lean_box(0);
v_isShared_2634_ = v_isSharedCheck_2638_;
goto v_resetjp_2632_;
}
v_resetjp_2632_:
{
lean_object* v___x_2636_; 
if (v_isShared_2634_ == 0)
{
v___x_2636_ = v___x_2633_;
goto v_reusejp_2635_;
}
else
{
lean_object* v_reuseFailAlloc_2637_; 
v_reuseFailAlloc_2637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2637_, 0, v_a_2631_);
v___x_2636_ = v_reuseFailAlloc_2637_;
goto v_reusejp_2635_;
}
v_reusejp_2635_:
{
return v___x_2636_;
}
}
}
}
}
else
{
lean_dec_ref(v_expectedType_2551_);
lean_dec_ref(v_expr_2550_);
goto v___jp_2602_;
}
}
else
{
lean_object* v_a_2643_; lean_object* v___x_2645_; uint8_t v_isShared_2646_; uint8_t v_isSharedCheck_2650_; 
lean_del_object(v___x_2600_);
lean_dec(v_a_2598_);
lean_del_object(v___x_2586_);
lean_dec_ref(v_expectedType_2551_);
lean_dec_ref(v_expr_2550_);
v_a_2643_ = lean_ctor_get(v___x_2612_, 0);
v_isSharedCheck_2650_ = !lean_is_exclusive(v___x_2612_);
if (v_isSharedCheck_2650_ == 0)
{
v___x_2645_ = v___x_2612_;
v_isShared_2646_ = v_isSharedCheck_2650_;
goto v_resetjp_2644_;
}
else
{
lean_inc(v_a_2643_);
lean_dec(v___x_2612_);
v___x_2645_ = lean_box(0);
v_isShared_2646_ = v_isSharedCheck_2650_;
goto v_resetjp_2644_;
}
v_resetjp_2644_:
{
lean_object* v___x_2648_; 
if (v_isShared_2646_ == 0)
{
v___x_2648_ = v___x_2645_;
goto v_reusejp_2647_;
}
else
{
lean_object* v_reuseFailAlloc_2649_; 
v_reuseFailAlloc_2649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2649_, 0, v_a_2643_);
v___x_2648_ = v_reuseFailAlloc_2649_;
goto v_reusejp_2647_;
}
v_reusejp_2647_:
{
return v___x_2648_;
}
}
}
}
else
{
lean_object* v_a_2651_; lean_object* v___x_2653_; uint8_t v_isShared_2654_; uint8_t v_isSharedCheck_2658_; 
lean_del_object(v___x_2600_);
lean_dec(v_a_2598_);
lean_del_object(v___x_2586_);
lean_dec_ref(v_expectedType_2551_);
lean_dec_ref(v_expr_2550_);
v_a_2651_ = lean_ctor_get(v___x_2610_, 0);
v_isSharedCheck_2658_ = !lean_is_exclusive(v___x_2610_);
if (v_isSharedCheck_2658_ == 0)
{
v___x_2653_ = v___x_2610_;
v_isShared_2654_ = v_isSharedCheck_2658_;
goto v_resetjp_2652_;
}
else
{
lean_inc(v_a_2651_);
lean_dec(v___x_2610_);
v___x_2653_ = lean_box(0);
v_isShared_2654_ = v_isSharedCheck_2658_;
goto v_resetjp_2652_;
}
v_resetjp_2652_:
{
lean_object* v___x_2656_; 
if (v_isShared_2654_ == 0)
{
v___x_2656_ = v___x_2653_;
goto v_reusejp_2655_;
}
else
{
lean_object* v_reuseFailAlloc_2657_; 
v_reuseFailAlloc_2657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2657_, 0, v_a_2651_);
v___x_2656_ = v_reuseFailAlloc_2657_;
goto v_reusejp_2655_;
}
v_reusejp_2655_:
{
return v___x_2656_;
}
}
}
v___jp_2602_:
{
lean_object* v___x_2604_; 
if (v_isShared_2587_ == 0)
{
lean_ctor_set(v___x_2586_, 0, v_a_2598_);
v___x_2604_ = v___x_2586_;
goto v_reusejp_2603_;
}
else
{
lean_object* v_reuseFailAlloc_2608_; 
v_reuseFailAlloc_2608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2608_, 0, v_a_2598_);
v___x_2604_ = v_reuseFailAlloc_2608_;
goto v_reusejp_2603_;
}
v_reusejp_2603_:
{
lean_object* v___x_2606_; 
if (v_isShared_2601_ == 0)
{
lean_ctor_set(v___x_2600_, 0, v___x_2604_);
v___x_2606_ = v___x_2600_;
goto v_reusejp_2605_;
}
else
{
lean_object* v_reuseFailAlloc_2607_; 
v_reuseFailAlloc_2607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2607_, 0, v___x_2604_);
v___x_2606_ = v_reuseFailAlloc_2607_;
goto v_reusejp_2605_;
}
v_reusejp_2605_:
{
return v___x_2606_;
}
}
}
}
}
else
{
lean_object* v_a_2660_; lean_object* v___x_2662_; uint8_t v_isShared_2663_; uint8_t v_isSharedCheck_2667_; 
lean_del_object(v___x_2586_);
lean_dec_ref(v_expectedType_2551_);
lean_dec_ref(v_expr_2550_);
v_a_2660_ = lean_ctor_get(v___x_2597_, 0);
v_isSharedCheck_2667_ = !lean_is_exclusive(v___x_2597_);
if (v_isSharedCheck_2667_ == 0)
{
v___x_2662_ = v___x_2597_;
v_isShared_2663_ = v_isSharedCheck_2667_;
goto v_resetjp_2661_;
}
else
{
lean_inc(v_a_2660_);
lean_dec(v___x_2597_);
v___x_2662_ = lean_box(0);
v_isShared_2663_ = v_isSharedCheck_2667_;
goto v_resetjp_2661_;
}
v_resetjp_2661_:
{
lean_object* v___x_2665_; 
if (v_isShared_2663_ == 0)
{
v___x_2665_ = v___x_2662_;
goto v_reusejp_2664_;
}
else
{
lean_object* v_reuseFailAlloc_2666_; 
v_reuseFailAlloc_2666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2666_, 0, v_a_2660_);
v___x_2665_ = v_reuseFailAlloc_2666_;
goto v_reusejp_2664_;
}
v_reusejp_2664_:
{
return v___x_2665_;
}
}
}
}
}
default: 
{
lean_object* v___x_2669_; lean_object* v___x_2671_; 
lean_dec_ref_known(v___x_2566_, 2);
lean_dec(v_a_2558_);
lean_dec_ref(v_expectedType_2551_);
lean_dec_ref(v_expr_2550_);
v___x_2669_ = lean_box(2);
if (v_isShared_2579_ == 0)
{
lean_ctor_set(v___x_2578_, 0, v___x_2669_);
v___x_2671_ = v___x_2578_;
goto v_reusejp_2670_;
}
else
{
lean_object* v_reuseFailAlloc_2672_; 
v_reuseFailAlloc_2672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2672_, 0, v___x_2669_);
v___x_2671_ = v_reuseFailAlloc_2672_;
goto v_reusejp_2670_;
}
v_reusejp_2670_:
{
return v___x_2671_;
}
}
}
}
}
else
{
lean_object* v_a_2674_; lean_object* v___x_2676_; uint8_t v_isShared_2677_; uint8_t v_isSharedCheck_2681_; 
lean_dec_ref_known(v___x_2566_, 2);
lean_dec(v_a_2558_);
lean_dec_ref(v_expectedType_2551_);
lean_dec_ref(v_expr_2550_);
v_a_2674_ = lean_ctor_get(v___x_2575_, 0);
v_isSharedCheck_2681_ = !lean_is_exclusive(v___x_2575_);
if (v_isSharedCheck_2681_ == 0)
{
v___x_2676_ = v___x_2575_;
v_isShared_2677_ = v_isSharedCheck_2681_;
goto v_resetjp_2675_;
}
else
{
lean_inc(v_a_2674_);
lean_dec(v___x_2575_);
v___x_2676_ = lean_box(0);
v_isShared_2677_ = v_isSharedCheck_2681_;
goto v_resetjp_2675_;
}
v_resetjp_2675_:
{
lean_object* v___x_2679_; 
if (v_isShared_2677_ == 0)
{
v___x_2679_ = v___x_2676_;
goto v_reusejp_2678_;
}
else
{
lean_object* v_reuseFailAlloc_2680_; 
v_reuseFailAlloc_2680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2680_, 0, v_a_2674_);
v___x_2679_ = v_reuseFailAlloc_2680_;
goto v_reusejp_2678_;
}
v_reusejp_2678_:
{
return v___x_2679_;
}
}
}
}
else
{
lean_object* v_a_2682_; lean_object* v___x_2684_; uint8_t v_isShared_2685_; uint8_t v_isSharedCheck_2689_; 
lean_dec(v_a_2560_);
lean_dec(v_a_2558_);
lean_dec_ref(v_expectedType_2551_);
lean_dec_ref(v_expr_2550_);
v_a_2682_ = lean_ctor_get(v___x_2561_, 0);
v_isSharedCheck_2689_ = !lean_is_exclusive(v___x_2561_);
if (v_isSharedCheck_2689_ == 0)
{
v___x_2684_ = v___x_2561_;
v_isShared_2685_ = v_isSharedCheck_2689_;
goto v_resetjp_2683_;
}
else
{
lean_inc(v_a_2682_);
lean_dec(v___x_2561_);
v___x_2684_ = lean_box(0);
v_isShared_2685_ = v_isSharedCheck_2689_;
goto v_resetjp_2683_;
}
v_resetjp_2683_:
{
lean_object* v___x_2687_; 
if (v_isShared_2685_ == 0)
{
v___x_2687_ = v___x_2684_;
goto v_reusejp_2686_;
}
else
{
lean_object* v_reuseFailAlloc_2688_; 
v_reuseFailAlloc_2688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2688_, 0, v_a_2682_);
v___x_2687_ = v_reuseFailAlloc_2688_;
goto v_reusejp_2686_;
}
v_reusejp_2686_:
{
return v___x_2687_;
}
}
}
}
else
{
lean_object* v_a_2690_; lean_object* v___x_2692_; uint8_t v_isShared_2693_; uint8_t v_isSharedCheck_2697_; 
lean_dec(v_a_2558_);
lean_dec_ref(v_expectedType_2551_);
lean_dec_ref(v_expr_2550_);
v_a_2690_ = lean_ctor_get(v___x_2559_, 0);
v_isSharedCheck_2697_ = !lean_is_exclusive(v___x_2559_);
if (v_isSharedCheck_2697_ == 0)
{
v___x_2692_ = v___x_2559_;
v_isShared_2693_ = v_isSharedCheck_2697_;
goto v_resetjp_2691_;
}
else
{
lean_inc(v_a_2690_);
lean_dec(v___x_2559_);
v___x_2692_ = lean_box(0);
v_isShared_2693_ = v_isSharedCheck_2697_;
goto v_resetjp_2691_;
}
v_resetjp_2691_:
{
lean_object* v___x_2695_; 
if (v_isShared_2693_ == 0)
{
v___x_2695_ = v___x_2692_;
goto v_reusejp_2694_;
}
else
{
lean_object* v_reuseFailAlloc_2696_; 
v_reuseFailAlloc_2696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2696_, 0, v_a_2690_);
v___x_2695_ = v_reuseFailAlloc_2696_;
goto v_reusejp_2694_;
}
v_reusejp_2694_:
{
return v___x_2695_;
}
}
}
}
else
{
lean_object* v_a_2698_; lean_object* v___x_2700_; uint8_t v_isShared_2701_; uint8_t v_isSharedCheck_2705_; 
lean_dec_ref(v_expectedType_2551_);
lean_dec_ref(v_expr_2550_);
v_a_2698_ = lean_ctor_get(v___x_2557_, 0);
v_isSharedCheck_2705_ = !lean_is_exclusive(v___x_2557_);
if (v_isSharedCheck_2705_ == 0)
{
v___x_2700_ = v___x_2557_;
v_isShared_2701_ = v_isSharedCheck_2705_;
goto v_resetjp_2699_;
}
else
{
lean_inc(v_a_2698_);
lean_dec(v___x_2557_);
v___x_2700_ = lean_box(0);
v_isShared_2701_ = v_isSharedCheck_2705_;
goto v_resetjp_2699_;
}
v_resetjp_2699_:
{
lean_object* v___x_2703_; 
if (v_isShared_2701_ == 0)
{
v___x_2703_ = v___x_2700_;
goto v_reusejp_2702_;
}
else
{
lean_object* v_reuseFailAlloc_2704_; 
v_reuseFailAlloc_2704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2704_, 0, v_a_2698_);
v___x_2703_ = v_reuseFailAlloc_2704_;
goto v_reusejp_2702_;
}
v_reusejp_2702_:
{
return v___x_2703_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___boxed(lean_object* v_expr_2706_, lean_object* v_expectedType_2707_, lean_object* v_a_2708_, lean_object* v_a_2709_, lean_object* v_a_2710_, lean_object* v_a_2711_, lean_object* v_a_2712_){
_start:
{
lean_object* v_res_2713_; 
v_res_2713_ = l_Lean_Meta_coerceSimpleRecordingNames_x3f(v_expr_2706_, v_expectedType_2707_, v_a_2708_, v_a_2709_, v_a_2710_, v_a_2711_);
lean_dec(v_a_2711_);
lean_dec_ref(v_a_2710_);
lean_dec(v_a_2709_);
lean_dec_ref(v_a_2708_);
return v_res_2713_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0(lean_object* v_00_u03b1_2714_, lean_object* v_msg_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_){
_start:
{
lean_object* v___x_2721_; 
v___x_2721_ = l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(v_msg_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_);
return v___x_2721_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___boxed(lean_object* v_00_u03b1_2722_, lean_object* v_msg_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_){
_start:
{
lean_object* v_res_2729_; 
v_res_2729_ = l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0(v_00_u03b1_2722_, v_msg_2723_, v___y_2724_, v___y_2725_, v___y_2726_, v___y_2727_);
lean_dec(v___y_2727_);
lean_dec_ref(v___y_2726_);
lean_dec(v___y_2725_);
lean_dec_ref(v___y_2724_);
return v_res_2729_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimple_x3f(lean_object* v_expr_2730_, lean_object* v_expectedType_2731_, lean_object* v_a_2732_, lean_object* v_a_2733_, lean_object* v_a_2734_, lean_object* v_a_2735_){
_start:
{
lean_object* v___x_2737_; 
v___x_2737_ = l_Lean_Meta_coerceSimpleRecordingNames_x3f(v_expr_2730_, v_expectedType_2731_, v_a_2732_, v_a_2733_, v_a_2734_, v_a_2735_);
if (lean_obj_tag(v___x_2737_) == 0)
{
lean_object* v_a_2738_; lean_object* v___x_2740_; uint8_t v_isShared_2741_; uint8_t v_isSharedCheck_2762_; 
v_a_2738_ = lean_ctor_get(v___x_2737_, 0);
v_isSharedCheck_2762_ = !lean_is_exclusive(v___x_2737_);
if (v_isSharedCheck_2762_ == 0)
{
v___x_2740_ = v___x_2737_;
v_isShared_2741_ = v_isSharedCheck_2762_;
goto v_resetjp_2739_;
}
else
{
lean_inc(v_a_2738_);
lean_dec(v___x_2737_);
v___x_2740_ = lean_box(0);
v_isShared_2741_ = v_isSharedCheck_2762_;
goto v_resetjp_2739_;
}
v_resetjp_2739_:
{
switch(lean_obj_tag(v_a_2738_))
{
case 0:
{
lean_object* v___x_2742_; lean_object* v___x_2744_; 
v___x_2742_ = lean_box(0);
if (v_isShared_2741_ == 0)
{
lean_ctor_set(v___x_2740_, 0, v___x_2742_);
v___x_2744_ = v___x_2740_;
goto v_reusejp_2743_;
}
else
{
lean_object* v_reuseFailAlloc_2745_; 
v_reuseFailAlloc_2745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2745_, 0, v___x_2742_);
v___x_2744_ = v_reuseFailAlloc_2745_;
goto v_reusejp_2743_;
}
v_reusejp_2743_:
{
return v___x_2744_;
}
}
case 1:
{
lean_object* v_a_2746_; lean_object* v___x_2748_; uint8_t v_isShared_2749_; uint8_t v_isSharedCheck_2757_; 
v_a_2746_ = lean_ctor_get(v_a_2738_, 0);
v_isSharedCheck_2757_ = !lean_is_exclusive(v_a_2738_);
if (v_isSharedCheck_2757_ == 0)
{
v___x_2748_ = v_a_2738_;
v_isShared_2749_ = v_isSharedCheck_2757_;
goto v_resetjp_2747_;
}
else
{
lean_inc(v_a_2746_);
lean_dec(v_a_2738_);
v___x_2748_ = lean_box(0);
v_isShared_2749_ = v_isSharedCheck_2757_;
goto v_resetjp_2747_;
}
v_resetjp_2747_:
{
lean_object* v_fst_2750_; lean_object* v___x_2752_; 
v_fst_2750_ = lean_ctor_get(v_a_2746_, 0);
lean_inc(v_fst_2750_);
lean_dec(v_a_2746_);
if (v_isShared_2749_ == 0)
{
lean_ctor_set(v___x_2748_, 0, v_fst_2750_);
v___x_2752_ = v___x_2748_;
goto v_reusejp_2751_;
}
else
{
lean_object* v_reuseFailAlloc_2756_; 
v_reuseFailAlloc_2756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2756_, 0, v_fst_2750_);
v___x_2752_ = v_reuseFailAlloc_2756_;
goto v_reusejp_2751_;
}
v_reusejp_2751_:
{
lean_object* v___x_2754_; 
if (v_isShared_2741_ == 0)
{
lean_ctor_set(v___x_2740_, 0, v___x_2752_);
v___x_2754_ = v___x_2740_;
goto v_reusejp_2753_;
}
else
{
lean_object* v_reuseFailAlloc_2755_; 
v_reuseFailAlloc_2755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2755_, 0, v___x_2752_);
v___x_2754_ = v_reuseFailAlloc_2755_;
goto v_reusejp_2753_;
}
v_reusejp_2753_:
{
return v___x_2754_;
}
}
}
}
default: 
{
lean_object* v___x_2758_; lean_object* v___x_2760_; 
v___x_2758_ = lean_box(2);
if (v_isShared_2741_ == 0)
{
lean_ctor_set(v___x_2740_, 0, v___x_2758_);
v___x_2760_ = v___x_2740_;
goto v_reusejp_2759_;
}
else
{
lean_object* v_reuseFailAlloc_2761_; 
v_reuseFailAlloc_2761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2761_, 0, v___x_2758_);
v___x_2760_ = v_reuseFailAlloc_2761_;
goto v_reusejp_2759_;
}
v_reusejp_2759_:
{
return v___x_2760_;
}
}
}
}
}
else
{
lean_object* v_a_2763_; lean_object* v___x_2765_; uint8_t v_isShared_2766_; uint8_t v_isSharedCheck_2770_; 
v_a_2763_ = lean_ctor_get(v___x_2737_, 0);
v_isSharedCheck_2770_ = !lean_is_exclusive(v___x_2737_);
if (v_isSharedCheck_2770_ == 0)
{
v___x_2765_ = v___x_2737_;
v_isShared_2766_ = v_isSharedCheck_2770_;
goto v_resetjp_2764_;
}
else
{
lean_inc(v_a_2763_);
lean_dec(v___x_2737_);
v___x_2765_ = lean_box(0);
v_isShared_2766_ = v_isSharedCheck_2770_;
goto v_resetjp_2764_;
}
v_resetjp_2764_:
{
lean_object* v___x_2768_; 
if (v_isShared_2766_ == 0)
{
v___x_2768_ = v___x_2765_;
goto v_reusejp_2767_;
}
else
{
lean_object* v_reuseFailAlloc_2769_; 
v_reuseFailAlloc_2769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2769_, 0, v_a_2763_);
v___x_2768_ = v_reuseFailAlloc_2769_;
goto v_reusejp_2767_;
}
v_reusejp_2767_:
{
return v___x_2768_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimple_x3f___boxed(lean_object* v_expr_2771_, lean_object* v_expectedType_2772_, lean_object* v_a_2773_, lean_object* v_a_2774_, lean_object* v_a_2775_, lean_object* v_a_2776_, lean_object* v_a_2777_){
_start:
{
lean_object* v_res_2778_; 
v_res_2778_ = l_Lean_Meta_coerceSimple_x3f(v_expr_2771_, v_expectedType_2772_, v_a_2773_, v_a_2774_, v_a_2775_, v_a_2776_);
lean_dec(v_a_2776_);
lean_dec_ref(v_a_2775_);
lean_dec(v_a_2774_);
lean_dec_ref(v_a_2773_);
return v_res_2778_;
}
}
static lean_object* _init_l_Lean_Meta_coerceToFunction_x3f___closed__4(void){
_start:
{
lean_object* v___x_2786_; lean_object* v___x_2787_; 
v___x_2786_ = ((lean_object*)(l_Lean_Meta_coerceToFunction_x3f___closed__3));
v___x_2787_ = l_Lean_stringToMessageData(v___x_2786_);
return v___x_2787_;
}
}
static lean_object* _init_l_Lean_Meta_coerceToFunction_x3f___closed__6(void){
_start:
{
lean_object* v___x_2789_; lean_object* v___x_2790_; 
v___x_2789_ = ((lean_object*)(l_Lean_Meta_coerceToFunction_x3f___closed__5));
v___x_2790_ = l_Lean_stringToMessageData(v___x_2789_);
return v___x_2790_;
}
}
static lean_object* _init_l_Lean_Meta_coerceToFunction_x3f___closed__8(void){
_start:
{
lean_object* v___x_2792_; lean_object* v___x_2793_; 
v___x_2792_ = ((lean_object*)(l_Lean_Meta_coerceToFunction_x3f___closed__7));
v___x_2793_ = l_Lean_stringToMessageData(v___x_2792_);
return v___x_2793_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToFunction_x3f(lean_object* v_expr_2794_, lean_object* v_a_2795_, lean_object* v_a_2796_, lean_object* v_a_2797_, lean_object* v_a_2798_){
_start:
{
lean_object* v___x_2800_; 
lean_inc(v_a_2798_);
lean_inc_ref(v_a_2797_);
lean_inc(v_a_2796_);
lean_inc_ref(v_a_2795_);
lean_inc_ref(v_expr_2794_);
v___x_2800_ = lean_infer_type(v_expr_2794_, v_a_2795_, v_a_2796_, v_a_2797_, v_a_2798_);
if (lean_obj_tag(v___x_2800_) == 0)
{
lean_object* v_a_2801_; lean_object* v___x_2802_; 
v_a_2801_ = lean_ctor_get(v___x_2800_, 0);
lean_inc_n(v_a_2801_, 2);
lean_dec_ref_known(v___x_2800_, 1);
v___x_2802_ = l_Lean_Meta_getLevel(v_a_2801_, v_a_2795_, v_a_2796_, v_a_2797_, v_a_2798_);
if (lean_obj_tag(v___x_2802_) == 0)
{
lean_object* v_a_2803_; lean_object* v___x_2804_; 
v_a_2803_ = lean_ctor_get(v___x_2802_, 0);
lean_inc(v_a_2803_);
lean_dec_ref_known(v___x_2802_, 1);
v___x_2804_ = l_Lean_Meta_mkFreshLevelMVar(v_a_2795_, v_a_2796_, v_a_2797_, v_a_2798_);
if (lean_obj_tag(v___x_2804_) == 0)
{
lean_object* v_a_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; 
v_a_2805_ = lean_ctor_get(v___x_2804_, 0);
lean_inc_n(v_a_2805_, 2);
lean_dec_ref_known(v___x_2804_, 1);
v___x_2806_ = l_Lean_mkSort(v_a_2805_);
lean_inc(v_a_2801_);
v___x_2807_ = l_Lean_mkArrow(v_a_2801_, v___x_2806_, v_a_2797_, v_a_2798_);
if (lean_obj_tag(v___x_2807_) == 0)
{
lean_object* v_a_2808_; lean_object* v___x_2809_; uint8_t v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; 
v_a_2808_ = lean_ctor_get(v___x_2807_, 0);
lean_inc(v_a_2808_);
lean_dec_ref_known(v___x_2807_, 1);
v___x_2809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2809_, 0, v_a_2808_);
v___x_2810_ = 0;
v___x_2811_ = lean_box(0);
v___x_2812_ = l_Lean_Meta_mkFreshExprMVar(v___x_2809_, v___x_2810_, v___x_2811_, v_a_2795_, v_a_2796_, v_a_2797_, v_a_2798_);
if (lean_obj_tag(v___x_2812_) == 0)
{
lean_object* v_a_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; 
v_a_2813_ = lean_ctor_get(v___x_2812_, 0);
lean_inc_n(v_a_2813_, 2);
lean_dec_ref_known(v___x_2812_, 1);
v___x_2814_ = ((lean_object*)(l_Lean_Meta_coerceToFunction_x3f___closed__1));
v___x_2815_ = lean_box(0);
v___x_2816_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2816_, 0, v_a_2805_);
lean_ctor_set(v___x_2816_, 1, v___x_2815_);
v___x_2817_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2817_, 0, v_a_2803_);
lean_ctor_set(v___x_2817_, 1, v___x_2816_);
lean_inc_ref(v___x_2817_);
v___x_2818_ = l_Lean_Expr_const___override(v___x_2814_, v___x_2817_);
lean_inc(v_a_2801_);
v___x_2819_ = l_Lean_mkAppB(v___x_2818_, v_a_2801_, v_a_2813_);
v___x_2820_ = lean_box(0);
v___x_2821_ = l_Lean_Meta_trySynthInstance(v___x_2819_, v___x_2820_, v_a_2795_, v_a_2796_, v_a_2797_, v_a_2798_);
if (lean_obj_tag(v___x_2821_) == 0)
{
lean_object* v_a_2822_; lean_object* v___x_2824_; uint8_t v_isShared_2825_; uint8_t v_isSharedCheck_2908_; 
v_a_2822_ = lean_ctor_get(v___x_2821_, 0);
v_isSharedCheck_2908_ = !lean_is_exclusive(v___x_2821_);
if (v_isSharedCheck_2908_ == 0)
{
v___x_2824_ = v___x_2821_;
v_isShared_2825_ = v_isSharedCheck_2908_;
goto v_resetjp_2823_;
}
else
{
lean_inc(v_a_2822_);
lean_dec(v___x_2821_);
v___x_2824_ = lean_box(0);
v_isShared_2825_ = v_isSharedCheck_2908_;
goto v_resetjp_2823_;
}
v_resetjp_2823_:
{
if (lean_obj_tag(v_a_2822_) == 1)
{
lean_object* v_a_2826_; lean_object* v___x_2828_; uint8_t v_isShared_2829_; uint8_t v_isSharedCheck_2904_; 
lean_del_object(v___x_2824_);
v_a_2826_ = lean_ctor_get(v_a_2822_, 0);
v_isSharedCheck_2904_ = !lean_is_exclusive(v_a_2822_);
if (v_isSharedCheck_2904_ == 0)
{
v___x_2828_ = v_a_2822_;
v_isShared_2829_ = v_isSharedCheck_2904_;
goto v_resetjp_2827_;
}
else
{
lean_inc(v_a_2826_);
lean_dec(v_a_2822_);
v___x_2828_ = lean_box(0);
v_isShared_2829_ = v_isSharedCheck_2904_;
goto v_resetjp_2827_;
}
v_resetjp_2827_:
{
lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; 
v___x_2830_ = ((lean_object*)(l_Lean_Meta_coerceToFunction_x3f___closed__2));
v___x_2831_ = l_Lean_Expr_const___override(v___x_2830_, v___x_2817_);
lean_inc_ref(v_expr_2794_);
lean_inc(v_a_2826_);
v___x_2832_ = l_Lean_mkApp4(v___x_2831_, v_a_2801_, v_a_2813_, v_a_2826_, v_expr_2794_);
v___x_2833_ = l_Lean_Meta_expandCoe(v___x_2832_, v_a_2795_, v_a_2796_, v_a_2797_, v_a_2798_);
if (lean_obj_tag(v___x_2833_) == 0)
{
lean_object* v_a_2834_; lean_object* v___x_2836_; uint8_t v_isShared_2837_; uint8_t v_isSharedCheck_2895_; 
v_a_2834_ = lean_ctor_get(v___x_2833_, 0);
v_isSharedCheck_2895_ = !lean_is_exclusive(v___x_2833_);
if (v_isSharedCheck_2895_ == 0)
{
v___x_2836_ = v___x_2833_;
v_isShared_2837_ = v_isSharedCheck_2895_;
goto v_resetjp_2835_;
}
else
{
lean_inc(v_a_2834_);
lean_dec(v___x_2833_);
v___x_2836_ = lean_box(0);
v_isShared_2837_ = v_isSharedCheck_2895_;
goto v_resetjp_2835_;
}
v_resetjp_2835_:
{
lean_object* v_fst_2838_; lean_object* v___x_2840_; uint8_t v_isShared_2841_; uint8_t v_isSharedCheck_2893_; 
v_fst_2838_ = lean_ctor_get(v_a_2834_, 0);
v_isSharedCheck_2893_ = !lean_is_exclusive(v_a_2834_);
if (v_isSharedCheck_2893_ == 0)
{
lean_object* v_unused_2894_; 
v_unused_2894_ = lean_ctor_get(v_a_2834_, 1);
lean_dec(v_unused_2894_);
v___x_2840_ = v_a_2834_;
v_isShared_2841_ = v_isSharedCheck_2893_;
goto v_resetjp_2839_;
}
else
{
lean_inc(v_fst_2838_);
lean_dec(v_a_2834_);
v___x_2840_ = lean_box(0);
v_isShared_2841_ = v_isSharedCheck_2893_;
goto v_resetjp_2839_;
}
v_resetjp_2839_:
{
lean_object* v___x_2849_; 
lean_inc(v_a_2798_);
lean_inc_ref(v_a_2797_);
lean_inc(v_a_2796_);
lean_inc_ref(v_a_2795_);
lean_inc(v_fst_2838_);
v___x_2849_ = lean_infer_type(v_fst_2838_, v_a_2795_, v_a_2796_, v_a_2797_, v_a_2798_);
if (lean_obj_tag(v___x_2849_) == 0)
{
lean_object* v_a_2850_; lean_object* v___x_2851_; 
v_a_2850_ = lean_ctor_get(v___x_2849_, 0);
lean_inc(v_a_2850_);
lean_dec_ref_known(v___x_2849_, 1);
lean_inc(v_a_2798_);
lean_inc_ref(v_a_2797_);
lean_inc(v_a_2796_);
lean_inc_ref(v_a_2795_);
v___x_2851_ = lean_whnf(v_a_2850_, v_a_2795_, v_a_2796_, v_a_2797_, v_a_2798_);
if (lean_obj_tag(v___x_2851_) == 0)
{
lean_object* v_a_2852_; uint8_t v___x_2853_; 
v_a_2852_ = lean_ctor_get(v___x_2851_, 0);
lean_inc(v_a_2852_);
lean_dec_ref_known(v___x_2851_, 1);
v___x_2853_ = l_Lean_Expr_isForall(v_a_2852_);
lean_dec(v_a_2852_);
if (v___x_2853_ == 0)
{
lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2857_; 
lean_del_object(v___x_2836_);
lean_del_object(v___x_2828_);
v___x_2854_ = lean_obj_once(&l_Lean_Meta_coerceToFunction_x3f___closed__4, &l_Lean_Meta_coerceToFunction_x3f___closed__4_once, _init_l_Lean_Meta_coerceToFunction_x3f___closed__4);
v___x_2855_ = l_Lean_indentExpr(v_expr_2794_);
if (v_isShared_2841_ == 0)
{
lean_ctor_set_tag(v___x_2840_, 7);
lean_ctor_set(v___x_2840_, 1, v___x_2855_);
lean_ctor_set(v___x_2840_, 0, v___x_2854_);
v___x_2857_ = v___x_2840_;
goto v_reusejp_2856_;
}
else
{
lean_object* v_reuseFailAlloc_2876_; 
v_reuseFailAlloc_2876_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2876_, 0, v___x_2854_);
lean_ctor_set(v_reuseFailAlloc_2876_, 1, v___x_2855_);
v___x_2857_ = v_reuseFailAlloc_2876_;
goto v_reusejp_2856_;
}
v_reusejp_2856_:
{
lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v_a_2868_; lean_object* v___x_2870_; uint8_t v_isShared_2871_; uint8_t v_isSharedCheck_2875_; 
v___x_2858_ = lean_obj_once(&l_Lean_Meta_coerceToFunction_x3f___closed__6, &l_Lean_Meta_coerceToFunction_x3f___closed__6_once, _init_l_Lean_Meta_coerceToFunction_x3f___closed__6);
v___x_2859_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2859_, 0, v___x_2857_);
lean_ctor_set(v___x_2859_, 1, v___x_2858_);
v___x_2860_ = l_Lean_indentExpr(v_fst_2838_);
v___x_2861_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2861_, 0, v___x_2859_);
lean_ctor_set(v___x_2861_, 1, v___x_2860_);
v___x_2862_ = lean_obj_once(&l_Lean_Meta_coerceToFunction_x3f___closed__8, &l_Lean_Meta_coerceToFunction_x3f___closed__8_once, _init_l_Lean_Meta_coerceToFunction_x3f___closed__8);
v___x_2863_ = l_Lean_indentExpr(v_a_2826_);
v___x_2864_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2864_, 0, v___x_2862_);
lean_ctor_set(v___x_2864_, 1, v___x_2863_);
v___x_2865_ = l_Lean_MessageData_hint_x27(v___x_2864_);
v___x_2866_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2866_, 0, v___x_2861_);
lean_ctor_set(v___x_2866_, 1, v___x_2865_);
v___x_2867_ = l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(v___x_2866_, v_a_2795_, v_a_2796_, v_a_2797_, v_a_2798_);
v_a_2868_ = lean_ctor_get(v___x_2867_, 0);
v_isSharedCheck_2875_ = !lean_is_exclusive(v___x_2867_);
if (v_isSharedCheck_2875_ == 0)
{
v___x_2870_ = v___x_2867_;
v_isShared_2871_ = v_isSharedCheck_2875_;
goto v_resetjp_2869_;
}
else
{
lean_inc(v_a_2868_);
lean_dec(v___x_2867_);
v___x_2870_ = lean_box(0);
v_isShared_2871_ = v_isSharedCheck_2875_;
goto v_resetjp_2869_;
}
v_resetjp_2869_:
{
lean_object* v___x_2873_; 
if (v_isShared_2871_ == 0)
{
v___x_2873_ = v___x_2870_;
goto v_reusejp_2872_;
}
else
{
lean_object* v_reuseFailAlloc_2874_; 
v_reuseFailAlloc_2874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2874_, 0, v_a_2868_);
v___x_2873_ = v_reuseFailAlloc_2874_;
goto v_reusejp_2872_;
}
v_reusejp_2872_:
{
return v___x_2873_;
}
}
}
}
else
{
lean_del_object(v___x_2840_);
lean_dec(v_a_2826_);
lean_dec_ref(v_expr_2794_);
goto v___jp_2842_;
}
}
else
{
lean_object* v_a_2877_; lean_object* v___x_2879_; uint8_t v_isShared_2880_; uint8_t v_isSharedCheck_2884_; 
lean_del_object(v___x_2840_);
lean_dec(v_fst_2838_);
lean_del_object(v___x_2836_);
lean_del_object(v___x_2828_);
lean_dec(v_a_2826_);
lean_dec_ref(v_expr_2794_);
v_a_2877_ = lean_ctor_get(v___x_2851_, 0);
v_isSharedCheck_2884_ = !lean_is_exclusive(v___x_2851_);
if (v_isSharedCheck_2884_ == 0)
{
v___x_2879_ = v___x_2851_;
v_isShared_2880_ = v_isSharedCheck_2884_;
goto v_resetjp_2878_;
}
else
{
lean_inc(v_a_2877_);
lean_dec(v___x_2851_);
v___x_2879_ = lean_box(0);
v_isShared_2880_ = v_isSharedCheck_2884_;
goto v_resetjp_2878_;
}
v_resetjp_2878_:
{
lean_object* v___x_2882_; 
if (v_isShared_2880_ == 0)
{
v___x_2882_ = v___x_2879_;
goto v_reusejp_2881_;
}
else
{
lean_object* v_reuseFailAlloc_2883_; 
v_reuseFailAlloc_2883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2883_, 0, v_a_2877_);
v___x_2882_ = v_reuseFailAlloc_2883_;
goto v_reusejp_2881_;
}
v_reusejp_2881_:
{
return v___x_2882_;
}
}
}
}
else
{
lean_object* v_a_2885_; lean_object* v___x_2887_; uint8_t v_isShared_2888_; uint8_t v_isSharedCheck_2892_; 
lean_del_object(v___x_2840_);
lean_dec(v_fst_2838_);
lean_del_object(v___x_2836_);
lean_del_object(v___x_2828_);
lean_dec(v_a_2826_);
lean_dec_ref(v_expr_2794_);
v_a_2885_ = lean_ctor_get(v___x_2849_, 0);
v_isSharedCheck_2892_ = !lean_is_exclusive(v___x_2849_);
if (v_isSharedCheck_2892_ == 0)
{
v___x_2887_ = v___x_2849_;
v_isShared_2888_ = v_isSharedCheck_2892_;
goto v_resetjp_2886_;
}
else
{
lean_inc(v_a_2885_);
lean_dec(v___x_2849_);
v___x_2887_ = lean_box(0);
v_isShared_2888_ = v_isSharedCheck_2892_;
goto v_resetjp_2886_;
}
v_resetjp_2886_:
{
lean_object* v___x_2890_; 
if (v_isShared_2888_ == 0)
{
v___x_2890_ = v___x_2887_;
goto v_reusejp_2889_;
}
else
{
lean_object* v_reuseFailAlloc_2891_; 
v_reuseFailAlloc_2891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2891_, 0, v_a_2885_);
v___x_2890_ = v_reuseFailAlloc_2891_;
goto v_reusejp_2889_;
}
v_reusejp_2889_:
{
return v___x_2890_;
}
}
}
v___jp_2842_:
{
lean_object* v___x_2844_; 
if (v_isShared_2829_ == 0)
{
lean_ctor_set(v___x_2828_, 0, v_fst_2838_);
v___x_2844_ = v___x_2828_;
goto v_reusejp_2843_;
}
else
{
lean_object* v_reuseFailAlloc_2848_; 
v_reuseFailAlloc_2848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2848_, 0, v_fst_2838_);
v___x_2844_ = v_reuseFailAlloc_2848_;
goto v_reusejp_2843_;
}
v_reusejp_2843_:
{
lean_object* v___x_2846_; 
if (v_isShared_2837_ == 0)
{
lean_ctor_set(v___x_2836_, 0, v___x_2844_);
v___x_2846_ = v___x_2836_;
goto v_reusejp_2845_;
}
else
{
lean_object* v_reuseFailAlloc_2847_; 
v_reuseFailAlloc_2847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2847_, 0, v___x_2844_);
v___x_2846_ = v_reuseFailAlloc_2847_;
goto v_reusejp_2845_;
}
v_reusejp_2845_:
{
return v___x_2846_;
}
}
}
}
}
}
else
{
lean_object* v_a_2896_; lean_object* v___x_2898_; uint8_t v_isShared_2899_; uint8_t v_isSharedCheck_2903_; 
lean_del_object(v___x_2828_);
lean_dec(v_a_2826_);
lean_dec_ref(v_expr_2794_);
v_a_2896_ = lean_ctor_get(v___x_2833_, 0);
v_isSharedCheck_2903_ = !lean_is_exclusive(v___x_2833_);
if (v_isSharedCheck_2903_ == 0)
{
v___x_2898_ = v___x_2833_;
v_isShared_2899_ = v_isSharedCheck_2903_;
goto v_resetjp_2897_;
}
else
{
lean_inc(v_a_2896_);
lean_dec(v___x_2833_);
v___x_2898_ = lean_box(0);
v_isShared_2899_ = v_isSharedCheck_2903_;
goto v_resetjp_2897_;
}
v_resetjp_2897_:
{
lean_object* v___x_2901_; 
if (v_isShared_2899_ == 0)
{
v___x_2901_ = v___x_2898_;
goto v_reusejp_2900_;
}
else
{
lean_object* v_reuseFailAlloc_2902_; 
v_reuseFailAlloc_2902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2902_, 0, v_a_2896_);
v___x_2901_ = v_reuseFailAlloc_2902_;
goto v_reusejp_2900_;
}
v_reusejp_2900_:
{
return v___x_2901_;
}
}
}
}
}
else
{
lean_object* v___x_2906_; 
lean_dec(v_a_2822_);
lean_dec_ref_known(v___x_2817_, 2);
lean_dec(v_a_2813_);
lean_dec(v_a_2801_);
lean_dec_ref(v_expr_2794_);
if (v_isShared_2825_ == 0)
{
lean_ctor_set(v___x_2824_, 0, v___x_2820_);
v___x_2906_ = v___x_2824_;
goto v_reusejp_2905_;
}
else
{
lean_object* v_reuseFailAlloc_2907_; 
v_reuseFailAlloc_2907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2907_, 0, v___x_2820_);
v___x_2906_ = v_reuseFailAlloc_2907_;
goto v_reusejp_2905_;
}
v_reusejp_2905_:
{
return v___x_2906_;
}
}
}
}
else
{
lean_object* v_a_2909_; lean_object* v___x_2911_; uint8_t v_isShared_2912_; uint8_t v_isSharedCheck_2916_; 
lean_dec_ref_known(v___x_2817_, 2);
lean_dec(v_a_2813_);
lean_dec(v_a_2801_);
lean_dec_ref(v_expr_2794_);
v_a_2909_ = lean_ctor_get(v___x_2821_, 0);
v_isSharedCheck_2916_ = !lean_is_exclusive(v___x_2821_);
if (v_isSharedCheck_2916_ == 0)
{
v___x_2911_ = v___x_2821_;
v_isShared_2912_ = v_isSharedCheck_2916_;
goto v_resetjp_2910_;
}
else
{
lean_inc(v_a_2909_);
lean_dec(v___x_2821_);
v___x_2911_ = lean_box(0);
v_isShared_2912_ = v_isSharedCheck_2916_;
goto v_resetjp_2910_;
}
v_resetjp_2910_:
{
lean_object* v___x_2914_; 
if (v_isShared_2912_ == 0)
{
v___x_2914_ = v___x_2911_;
goto v_reusejp_2913_;
}
else
{
lean_object* v_reuseFailAlloc_2915_; 
v_reuseFailAlloc_2915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2915_, 0, v_a_2909_);
v___x_2914_ = v_reuseFailAlloc_2915_;
goto v_reusejp_2913_;
}
v_reusejp_2913_:
{
return v___x_2914_;
}
}
}
}
else
{
lean_object* v_a_2917_; lean_object* v___x_2919_; uint8_t v_isShared_2920_; uint8_t v_isSharedCheck_2924_; 
lean_dec(v_a_2805_);
lean_dec(v_a_2803_);
lean_dec(v_a_2801_);
lean_dec_ref(v_expr_2794_);
v_a_2917_ = lean_ctor_get(v___x_2812_, 0);
v_isSharedCheck_2924_ = !lean_is_exclusive(v___x_2812_);
if (v_isSharedCheck_2924_ == 0)
{
v___x_2919_ = v___x_2812_;
v_isShared_2920_ = v_isSharedCheck_2924_;
goto v_resetjp_2918_;
}
else
{
lean_inc(v_a_2917_);
lean_dec(v___x_2812_);
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
else
{
lean_object* v_a_2925_; lean_object* v___x_2927_; uint8_t v_isShared_2928_; uint8_t v_isSharedCheck_2932_; 
lean_dec(v_a_2805_);
lean_dec(v_a_2803_);
lean_dec(v_a_2801_);
lean_dec_ref(v_expr_2794_);
v_a_2925_ = lean_ctor_get(v___x_2807_, 0);
v_isSharedCheck_2932_ = !lean_is_exclusive(v___x_2807_);
if (v_isSharedCheck_2932_ == 0)
{
v___x_2927_ = v___x_2807_;
v_isShared_2928_ = v_isSharedCheck_2932_;
goto v_resetjp_2926_;
}
else
{
lean_inc(v_a_2925_);
lean_dec(v___x_2807_);
v___x_2927_ = lean_box(0);
v_isShared_2928_ = v_isSharedCheck_2932_;
goto v_resetjp_2926_;
}
v_resetjp_2926_:
{
lean_object* v___x_2930_; 
if (v_isShared_2928_ == 0)
{
v___x_2930_ = v___x_2927_;
goto v_reusejp_2929_;
}
else
{
lean_object* v_reuseFailAlloc_2931_; 
v_reuseFailAlloc_2931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2931_, 0, v_a_2925_);
v___x_2930_ = v_reuseFailAlloc_2931_;
goto v_reusejp_2929_;
}
v_reusejp_2929_:
{
return v___x_2930_;
}
}
}
}
else
{
lean_object* v_a_2933_; lean_object* v___x_2935_; uint8_t v_isShared_2936_; uint8_t v_isSharedCheck_2940_; 
lean_dec(v_a_2803_);
lean_dec(v_a_2801_);
lean_dec_ref(v_expr_2794_);
v_a_2933_ = lean_ctor_get(v___x_2804_, 0);
v_isSharedCheck_2940_ = !lean_is_exclusive(v___x_2804_);
if (v_isSharedCheck_2940_ == 0)
{
v___x_2935_ = v___x_2804_;
v_isShared_2936_ = v_isSharedCheck_2940_;
goto v_resetjp_2934_;
}
else
{
lean_inc(v_a_2933_);
lean_dec(v___x_2804_);
v___x_2935_ = lean_box(0);
v_isShared_2936_ = v_isSharedCheck_2940_;
goto v_resetjp_2934_;
}
v_resetjp_2934_:
{
lean_object* v___x_2938_; 
if (v_isShared_2936_ == 0)
{
v___x_2938_ = v___x_2935_;
goto v_reusejp_2937_;
}
else
{
lean_object* v_reuseFailAlloc_2939_; 
v_reuseFailAlloc_2939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2939_, 0, v_a_2933_);
v___x_2938_ = v_reuseFailAlloc_2939_;
goto v_reusejp_2937_;
}
v_reusejp_2937_:
{
return v___x_2938_;
}
}
}
}
else
{
lean_object* v_a_2941_; lean_object* v___x_2943_; uint8_t v_isShared_2944_; uint8_t v_isSharedCheck_2948_; 
lean_dec(v_a_2801_);
lean_dec_ref(v_expr_2794_);
v_a_2941_ = lean_ctor_get(v___x_2802_, 0);
v_isSharedCheck_2948_ = !lean_is_exclusive(v___x_2802_);
if (v_isSharedCheck_2948_ == 0)
{
v___x_2943_ = v___x_2802_;
v_isShared_2944_ = v_isSharedCheck_2948_;
goto v_resetjp_2942_;
}
else
{
lean_inc(v_a_2941_);
lean_dec(v___x_2802_);
v___x_2943_ = lean_box(0);
v_isShared_2944_ = v_isSharedCheck_2948_;
goto v_resetjp_2942_;
}
v_resetjp_2942_:
{
lean_object* v___x_2946_; 
if (v_isShared_2944_ == 0)
{
v___x_2946_ = v___x_2943_;
goto v_reusejp_2945_;
}
else
{
lean_object* v_reuseFailAlloc_2947_; 
v_reuseFailAlloc_2947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2947_, 0, v_a_2941_);
v___x_2946_ = v_reuseFailAlloc_2947_;
goto v_reusejp_2945_;
}
v_reusejp_2945_:
{
return v___x_2946_;
}
}
}
}
else
{
lean_object* v_a_2949_; lean_object* v___x_2951_; uint8_t v_isShared_2952_; uint8_t v_isSharedCheck_2956_; 
lean_dec_ref(v_expr_2794_);
v_a_2949_ = lean_ctor_get(v___x_2800_, 0);
v_isSharedCheck_2956_ = !lean_is_exclusive(v___x_2800_);
if (v_isSharedCheck_2956_ == 0)
{
v___x_2951_ = v___x_2800_;
v_isShared_2952_ = v_isSharedCheck_2956_;
goto v_resetjp_2950_;
}
else
{
lean_inc(v_a_2949_);
lean_dec(v___x_2800_);
v___x_2951_ = lean_box(0);
v_isShared_2952_ = v_isSharedCheck_2956_;
goto v_resetjp_2950_;
}
v_resetjp_2950_:
{
lean_object* v___x_2954_; 
if (v_isShared_2952_ == 0)
{
v___x_2954_ = v___x_2951_;
goto v_reusejp_2953_;
}
else
{
lean_object* v_reuseFailAlloc_2955_; 
v_reuseFailAlloc_2955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2955_, 0, v_a_2949_);
v___x_2954_ = v_reuseFailAlloc_2955_;
goto v_reusejp_2953_;
}
v_reusejp_2953_:
{
return v___x_2954_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToFunction_x3f___boxed(lean_object* v_expr_2957_, lean_object* v_a_2958_, lean_object* v_a_2959_, lean_object* v_a_2960_, lean_object* v_a_2961_, lean_object* v_a_2962_){
_start:
{
lean_object* v_res_2963_; 
v_res_2963_ = l_Lean_Meta_coerceToFunction_x3f(v_expr_2957_, v_a_2958_, v_a_2959_, v_a_2960_, v_a_2961_);
lean_dec(v_a_2961_);
lean_dec_ref(v_a_2960_);
lean_dec(v_a_2959_);
lean_dec_ref(v_a_2958_);
return v_res_2963_;
}
}
static lean_object* _init_l_Lean_Meta_coerceToSort_x3f___closed__4(void){
_start:
{
lean_object* v___x_2971_; lean_object* v___x_2972_; 
v___x_2971_ = ((lean_object*)(l_Lean_Meta_coerceToSort_x3f___closed__3));
v___x_2972_ = l_Lean_stringToMessageData(v___x_2971_);
return v___x_2972_;
}
}
static lean_object* _init_l_Lean_Meta_coerceToSort_x3f___closed__6(void){
_start:
{
lean_object* v___x_2974_; lean_object* v___x_2975_; 
v___x_2974_ = ((lean_object*)(l_Lean_Meta_coerceToSort_x3f___closed__5));
v___x_2975_ = l_Lean_stringToMessageData(v___x_2974_);
return v___x_2975_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToSort_x3f(lean_object* v_expr_2976_, lean_object* v_a_2977_, lean_object* v_a_2978_, lean_object* v_a_2979_, lean_object* v_a_2980_){
_start:
{
lean_object* v___x_2982_; 
lean_inc(v_a_2980_);
lean_inc_ref(v_a_2979_);
lean_inc(v_a_2978_);
lean_inc_ref(v_a_2977_);
lean_inc_ref(v_expr_2976_);
v___x_2982_ = lean_infer_type(v_expr_2976_, v_a_2977_, v_a_2978_, v_a_2979_, v_a_2980_);
if (lean_obj_tag(v___x_2982_) == 0)
{
lean_object* v_a_2983_; lean_object* v___x_2984_; 
v_a_2983_ = lean_ctor_get(v___x_2982_, 0);
lean_inc_n(v_a_2983_, 2);
lean_dec_ref_known(v___x_2982_, 1);
v___x_2984_ = l_Lean_Meta_getLevel(v_a_2983_, v_a_2977_, v_a_2978_, v_a_2979_, v_a_2980_);
if (lean_obj_tag(v___x_2984_) == 0)
{
lean_object* v_a_2985_; lean_object* v___x_2986_; 
v_a_2985_ = lean_ctor_get(v___x_2984_, 0);
lean_inc(v_a_2985_);
lean_dec_ref_known(v___x_2984_, 1);
v___x_2986_ = l_Lean_Meta_mkFreshLevelMVar(v_a_2977_, v_a_2978_, v_a_2979_, v_a_2980_);
if (lean_obj_tag(v___x_2986_) == 0)
{
lean_object* v_a_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; uint8_t v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; 
v_a_2987_ = lean_ctor_get(v___x_2986_, 0);
lean_inc_n(v_a_2987_, 2);
lean_dec_ref_known(v___x_2986_, 1);
v___x_2988_ = l_Lean_mkSort(v_a_2987_);
v___x_2989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2989_, 0, v___x_2988_);
v___x_2990_ = 0;
v___x_2991_ = lean_box(0);
v___x_2992_ = l_Lean_Meta_mkFreshExprMVar(v___x_2989_, v___x_2990_, v___x_2991_, v_a_2977_, v_a_2978_, v_a_2979_, v_a_2980_);
if (lean_obj_tag(v___x_2992_) == 0)
{
lean_object* v_a_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; 
v_a_2993_ = lean_ctor_get(v___x_2992_, 0);
lean_inc_n(v_a_2993_, 2);
lean_dec_ref_known(v___x_2992_, 1);
v___x_2994_ = ((lean_object*)(l_Lean_Meta_coerceToSort_x3f___closed__1));
v___x_2995_ = lean_box(0);
v___x_2996_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2996_, 0, v_a_2987_);
lean_ctor_set(v___x_2996_, 1, v___x_2995_);
v___x_2997_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2997_, 0, v_a_2985_);
lean_ctor_set(v___x_2997_, 1, v___x_2996_);
lean_inc_ref(v___x_2997_);
v___x_2998_ = l_Lean_Expr_const___override(v___x_2994_, v___x_2997_);
lean_inc(v_a_2983_);
v___x_2999_ = l_Lean_mkAppB(v___x_2998_, v_a_2983_, v_a_2993_);
v___x_3000_ = lean_box(0);
v___x_3001_ = l_Lean_Meta_trySynthInstance(v___x_2999_, v___x_3000_, v_a_2977_, v_a_2978_, v_a_2979_, v_a_2980_);
if (lean_obj_tag(v___x_3001_) == 0)
{
lean_object* v_a_3002_; lean_object* v___x_3004_; uint8_t v_isShared_3005_; uint8_t v_isSharedCheck_3088_; 
v_a_3002_ = lean_ctor_get(v___x_3001_, 0);
v_isSharedCheck_3088_ = !lean_is_exclusive(v___x_3001_);
if (v_isSharedCheck_3088_ == 0)
{
v___x_3004_ = v___x_3001_;
v_isShared_3005_ = v_isSharedCheck_3088_;
goto v_resetjp_3003_;
}
else
{
lean_inc(v_a_3002_);
lean_dec(v___x_3001_);
v___x_3004_ = lean_box(0);
v_isShared_3005_ = v_isSharedCheck_3088_;
goto v_resetjp_3003_;
}
v_resetjp_3003_:
{
if (lean_obj_tag(v_a_3002_) == 1)
{
lean_object* v_a_3006_; lean_object* v___x_3008_; uint8_t v_isShared_3009_; uint8_t v_isSharedCheck_3084_; 
lean_del_object(v___x_3004_);
v_a_3006_ = lean_ctor_get(v_a_3002_, 0);
v_isSharedCheck_3084_ = !lean_is_exclusive(v_a_3002_);
if (v_isSharedCheck_3084_ == 0)
{
v___x_3008_ = v_a_3002_;
v_isShared_3009_ = v_isSharedCheck_3084_;
goto v_resetjp_3007_;
}
else
{
lean_inc(v_a_3006_);
lean_dec(v_a_3002_);
v___x_3008_ = lean_box(0);
v_isShared_3009_ = v_isSharedCheck_3084_;
goto v_resetjp_3007_;
}
v_resetjp_3007_:
{
lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; 
v___x_3010_ = ((lean_object*)(l_Lean_Meta_coerceToSort_x3f___closed__2));
v___x_3011_ = l_Lean_Expr_const___override(v___x_3010_, v___x_2997_);
lean_inc_ref(v_expr_2976_);
lean_inc(v_a_3006_);
v___x_3012_ = l_Lean_mkApp4(v___x_3011_, v_a_2983_, v_a_2993_, v_a_3006_, v_expr_2976_);
v___x_3013_ = l_Lean_Meta_expandCoe(v___x_3012_, v_a_2977_, v_a_2978_, v_a_2979_, v_a_2980_);
if (lean_obj_tag(v___x_3013_) == 0)
{
lean_object* v_a_3014_; lean_object* v___x_3016_; uint8_t v_isShared_3017_; uint8_t v_isSharedCheck_3075_; 
v_a_3014_ = lean_ctor_get(v___x_3013_, 0);
v_isSharedCheck_3075_ = !lean_is_exclusive(v___x_3013_);
if (v_isSharedCheck_3075_ == 0)
{
v___x_3016_ = v___x_3013_;
v_isShared_3017_ = v_isSharedCheck_3075_;
goto v_resetjp_3015_;
}
else
{
lean_inc(v_a_3014_);
lean_dec(v___x_3013_);
v___x_3016_ = lean_box(0);
v_isShared_3017_ = v_isSharedCheck_3075_;
goto v_resetjp_3015_;
}
v_resetjp_3015_:
{
lean_object* v_fst_3018_; lean_object* v___x_3020_; uint8_t v_isShared_3021_; uint8_t v_isSharedCheck_3073_; 
v_fst_3018_ = lean_ctor_get(v_a_3014_, 0);
v_isSharedCheck_3073_ = !lean_is_exclusive(v_a_3014_);
if (v_isSharedCheck_3073_ == 0)
{
lean_object* v_unused_3074_; 
v_unused_3074_ = lean_ctor_get(v_a_3014_, 1);
lean_dec(v_unused_3074_);
v___x_3020_ = v_a_3014_;
v_isShared_3021_ = v_isSharedCheck_3073_;
goto v_resetjp_3019_;
}
else
{
lean_inc(v_fst_3018_);
lean_dec(v_a_3014_);
v___x_3020_ = lean_box(0);
v_isShared_3021_ = v_isSharedCheck_3073_;
goto v_resetjp_3019_;
}
v_resetjp_3019_:
{
lean_object* v___x_3029_; 
lean_inc(v_a_2980_);
lean_inc_ref(v_a_2979_);
lean_inc(v_a_2978_);
lean_inc_ref(v_a_2977_);
lean_inc(v_fst_3018_);
v___x_3029_ = lean_infer_type(v_fst_3018_, v_a_2977_, v_a_2978_, v_a_2979_, v_a_2980_);
if (lean_obj_tag(v___x_3029_) == 0)
{
lean_object* v_a_3030_; lean_object* v___x_3031_; 
v_a_3030_ = lean_ctor_get(v___x_3029_, 0);
lean_inc(v_a_3030_);
lean_dec_ref_known(v___x_3029_, 1);
lean_inc(v_a_2980_);
lean_inc_ref(v_a_2979_);
lean_inc(v_a_2978_);
lean_inc_ref(v_a_2977_);
v___x_3031_ = lean_whnf(v_a_3030_, v_a_2977_, v_a_2978_, v_a_2979_, v_a_2980_);
if (lean_obj_tag(v___x_3031_) == 0)
{
lean_object* v_a_3032_; uint8_t v___x_3033_; 
v_a_3032_ = lean_ctor_get(v___x_3031_, 0);
lean_inc(v_a_3032_);
lean_dec_ref_known(v___x_3031_, 1);
v___x_3033_ = l_Lean_Expr_isSort(v_a_3032_);
lean_dec(v_a_3032_);
if (v___x_3033_ == 0)
{
lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3037_; 
lean_del_object(v___x_3016_);
lean_del_object(v___x_3008_);
v___x_3034_ = lean_obj_once(&l_Lean_Meta_coerceToFunction_x3f___closed__4, &l_Lean_Meta_coerceToFunction_x3f___closed__4_once, _init_l_Lean_Meta_coerceToFunction_x3f___closed__4);
v___x_3035_ = l_Lean_indentExpr(v_expr_2976_);
if (v_isShared_3021_ == 0)
{
lean_ctor_set_tag(v___x_3020_, 7);
lean_ctor_set(v___x_3020_, 1, v___x_3035_);
lean_ctor_set(v___x_3020_, 0, v___x_3034_);
v___x_3037_ = v___x_3020_;
goto v_reusejp_3036_;
}
else
{
lean_object* v_reuseFailAlloc_3056_; 
v_reuseFailAlloc_3056_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3056_, 0, v___x_3034_);
lean_ctor_set(v_reuseFailAlloc_3056_, 1, v___x_3035_);
v___x_3037_ = v_reuseFailAlloc_3056_;
goto v_reusejp_3036_;
}
v_reusejp_3036_:
{
lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v_a_3048_; lean_object* v___x_3050_; uint8_t v_isShared_3051_; uint8_t v_isSharedCheck_3055_; 
v___x_3038_ = lean_obj_once(&l_Lean_Meta_coerceToSort_x3f___closed__4, &l_Lean_Meta_coerceToSort_x3f___closed__4_once, _init_l_Lean_Meta_coerceToSort_x3f___closed__4);
v___x_3039_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3039_, 0, v___x_3037_);
lean_ctor_set(v___x_3039_, 1, v___x_3038_);
v___x_3040_ = l_Lean_indentExpr(v_fst_3018_);
v___x_3041_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3041_, 0, v___x_3039_);
lean_ctor_set(v___x_3041_, 1, v___x_3040_);
v___x_3042_ = lean_obj_once(&l_Lean_Meta_coerceToSort_x3f___closed__6, &l_Lean_Meta_coerceToSort_x3f___closed__6_once, _init_l_Lean_Meta_coerceToSort_x3f___closed__6);
v___x_3043_ = l_Lean_indentExpr(v_a_3006_);
v___x_3044_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3044_, 0, v___x_3042_);
lean_ctor_set(v___x_3044_, 1, v___x_3043_);
v___x_3045_ = l_Lean_MessageData_hint_x27(v___x_3044_);
v___x_3046_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3046_, 0, v___x_3041_);
lean_ctor_set(v___x_3046_, 1, v___x_3045_);
v___x_3047_ = l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(v___x_3046_, v_a_2977_, v_a_2978_, v_a_2979_, v_a_2980_);
v_a_3048_ = lean_ctor_get(v___x_3047_, 0);
v_isSharedCheck_3055_ = !lean_is_exclusive(v___x_3047_);
if (v_isSharedCheck_3055_ == 0)
{
v___x_3050_ = v___x_3047_;
v_isShared_3051_ = v_isSharedCheck_3055_;
goto v_resetjp_3049_;
}
else
{
lean_inc(v_a_3048_);
lean_dec(v___x_3047_);
v___x_3050_ = lean_box(0);
v_isShared_3051_ = v_isSharedCheck_3055_;
goto v_resetjp_3049_;
}
v_resetjp_3049_:
{
lean_object* v___x_3053_; 
if (v_isShared_3051_ == 0)
{
v___x_3053_ = v___x_3050_;
goto v_reusejp_3052_;
}
else
{
lean_object* v_reuseFailAlloc_3054_; 
v_reuseFailAlloc_3054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3054_, 0, v_a_3048_);
v___x_3053_ = v_reuseFailAlloc_3054_;
goto v_reusejp_3052_;
}
v_reusejp_3052_:
{
return v___x_3053_;
}
}
}
}
else
{
lean_del_object(v___x_3020_);
lean_dec(v_a_3006_);
lean_dec_ref(v_expr_2976_);
goto v___jp_3022_;
}
}
else
{
lean_object* v_a_3057_; lean_object* v___x_3059_; uint8_t v_isShared_3060_; uint8_t v_isSharedCheck_3064_; 
lean_del_object(v___x_3020_);
lean_dec(v_fst_3018_);
lean_del_object(v___x_3016_);
lean_del_object(v___x_3008_);
lean_dec(v_a_3006_);
lean_dec_ref(v_expr_2976_);
v_a_3057_ = lean_ctor_get(v___x_3031_, 0);
v_isSharedCheck_3064_ = !lean_is_exclusive(v___x_3031_);
if (v_isSharedCheck_3064_ == 0)
{
v___x_3059_ = v___x_3031_;
v_isShared_3060_ = v_isSharedCheck_3064_;
goto v_resetjp_3058_;
}
else
{
lean_inc(v_a_3057_);
lean_dec(v___x_3031_);
v___x_3059_ = lean_box(0);
v_isShared_3060_ = v_isSharedCheck_3064_;
goto v_resetjp_3058_;
}
v_resetjp_3058_:
{
lean_object* v___x_3062_; 
if (v_isShared_3060_ == 0)
{
v___x_3062_ = v___x_3059_;
goto v_reusejp_3061_;
}
else
{
lean_object* v_reuseFailAlloc_3063_; 
v_reuseFailAlloc_3063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3063_, 0, v_a_3057_);
v___x_3062_ = v_reuseFailAlloc_3063_;
goto v_reusejp_3061_;
}
v_reusejp_3061_:
{
return v___x_3062_;
}
}
}
}
else
{
lean_object* v_a_3065_; lean_object* v___x_3067_; uint8_t v_isShared_3068_; uint8_t v_isSharedCheck_3072_; 
lean_del_object(v___x_3020_);
lean_dec(v_fst_3018_);
lean_del_object(v___x_3016_);
lean_del_object(v___x_3008_);
lean_dec(v_a_3006_);
lean_dec_ref(v_expr_2976_);
v_a_3065_ = lean_ctor_get(v___x_3029_, 0);
v_isSharedCheck_3072_ = !lean_is_exclusive(v___x_3029_);
if (v_isSharedCheck_3072_ == 0)
{
v___x_3067_ = v___x_3029_;
v_isShared_3068_ = v_isSharedCheck_3072_;
goto v_resetjp_3066_;
}
else
{
lean_inc(v_a_3065_);
lean_dec(v___x_3029_);
v___x_3067_ = lean_box(0);
v_isShared_3068_ = v_isSharedCheck_3072_;
goto v_resetjp_3066_;
}
v_resetjp_3066_:
{
lean_object* v___x_3070_; 
if (v_isShared_3068_ == 0)
{
v___x_3070_ = v___x_3067_;
goto v_reusejp_3069_;
}
else
{
lean_object* v_reuseFailAlloc_3071_; 
v_reuseFailAlloc_3071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3071_, 0, v_a_3065_);
v___x_3070_ = v_reuseFailAlloc_3071_;
goto v_reusejp_3069_;
}
v_reusejp_3069_:
{
return v___x_3070_;
}
}
}
v___jp_3022_:
{
lean_object* v___x_3024_; 
if (v_isShared_3009_ == 0)
{
lean_ctor_set(v___x_3008_, 0, v_fst_3018_);
v___x_3024_ = v___x_3008_;
goto v_reusejp_3023_;
}
else
{
lean_object* v_reuseFailAlloc_3028_; 
v_reuseFailAlloc_3028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3028_, 0, v_fst_3018_);
v___x_3024_ = v_reuseFailAlloc_3028_;
goto v_reusejp_3023_;
}
v_reusejp_3023_:
{
lean_object* v___x_3026_; 
if (v_isShared_3017_ == 0)
{
lean_ctor_set(v___x_3016_, 0, v___x_3024_);
v___x_3026_ = v___x_3016_;
goto v_reusejp_3025_;
}
else
{
lean_object* v_reuseFailAlloc_3027_; 
v_reuseFailAlloc_3027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3027_, 0, v___x_3024_);
v___x_3026_ = v_reuseFailAlloc_3027_;
goto v_reusejp_3025_;
}
v_reusejp_3025_:
{
return v___x_3026_;
}
}
}
}
}
}
else
{
lean_object* v_a_3076_; lean_object* v___x_3078_; uint8_t v_isShared_3079_; uint8_t v_isSharedCheck_3083_; 
lean_del_object(v___x_3008_);
lean_dec(v_a_3006_);
lean_dec_ref(v_expr_2976_);
v_a_3076_ = lean_ctor_get(v___x_3013_, 0);
v_isSharedCheck_3083_ = !lean_is_exclusive(v___x_3013_);
if (v_isSharedCheck_3083_ == 0)
{
v___x_3078_ = v___x_3013_;
v_isShared_3079_ = v_isSharedCheck_3083_;
goto v_resetjp_3077_;
}
else
{
lean_inc(v_a_3076_);
lean_dec(v___x_3013_);
v___x_3078_ = lean_box(0);
v_isShared_3079_ = v_isSharedCheck_3083_;
goto v_resetjp_3077_;
}
v_resetjp_3077_:
{
lean_object* v___x_3081_; 
if (v_isShared_3079_ == 0)
{
v___x_3081_ = v___x_3078_;
goto v_reusejp_3080_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v_a_3076_);
v___x_3081_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3080_;
}
v_reusejp_3080_:
{
return v___x_3081_;
}
}
}
}
}
else
{
lean_object* v___x_3086_; 
lean_dec(v_a_3002_);
lean_dec_ref_known(v___x_2997_, 2);
lean_dec(v_a_2993_);
lean_dec(v_a_2983_);
lean_dec_ref(v_expr_2976_);
if (v_isShared_3005_ == 0)
{
lean_ctor_set(v___x_3004_, 0, v___x_3000_);
v___x_3086_ = v___x_3004_;
goto v_reusejp_3085_;
}
else
{
lean_object* v_reuseFailAlloc_3087_; 
v_reuseFailAlloc_3087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3087_, 0, v___x_3000_);
v___x_3086_ = v_reuseFailAlloc_3087_;
goto v_reusejp_3085_;
}
v_reusejp_3085_:
{
return v___x_3086_;
}
}
}
}
else
{
lean_object* v_a_3089_; lean_object* v___x_3091_; uint8_t v_isShared_3092_; uint8_t v_isSharedCheck_3096_; 
lean_dec_ref_known(v___x_2997_, 2);
lean_dec(v_a_2993_);
lean_dec(v_a_2983_);
lean_dec_ref(v_expr_2976_);
v_a_3089_ = lean_ctor_get(v___x_3001_, 0);
v_isSharedCheck_3096_ = !lean_is_exclusive(v___x_3001_);
if (v_isSharedCheck_3096_ == 0)
{
v___x_3091_ = v___x_3001_;
v_isShared_3092_ = v_isSharedCheck_3096_;
goto v_resetjp_3090_;
}
else
{
lean_inc(v_a_3089_);
lean_dec(v___x_3001_);
v___x_3091_ = lean_box(0);
v_isShared_3092_ = v_isSharedCheck_3096_;
goto v_resetjp_3090_;
}
v_resetjp_3090_:
{
lean_object* v___x_3094_; 
if (v_isShared_3092_ == 0)
{
v___x_3094_ = v___x_3091_;
goto v_reusejp_3093_;
}
else
{
lean_object* v_reuseFailAlloc_3095_; 
v_reuseFailAlloc_3095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3095_, 0, v_a_3089_);
v___x_3094_ = v_reuseFailAlloc_3095_;
goto v_reusejp_3093_;
}
v_reusejp_3093_:
{
return v___x_3094_;
}
}
}
}
else
{
lean_object* v_a_3097_; lean_object* v___x_3099_; uint8_t v_isShared_3100_; uint8_t v_isSharedCheck_3104_; 
lean_dec(v_a_2987_);
lean_dec(v_a_2985_);
lean_dec(v_a_2983_);
lean_dec_ref(v_expr_2976_);
v_a_3097_ = lean_ctor_get(v___x_2992_, 0);
v_isSharedCheck_3104_ = !lean_is_exclusive(v___x_2992_);
if (v_isSharedCheck_3104_ == 0)
{
v___x_3099_ = v___x_2992_;
v_isShared_3100_ = v_isSharedCheck_3104_;
goto v_resetjp_3098_;
}
else
{
lean_inc(v_a_3097_);
lean_dec(v___x_2992_);
v___x_3099_ = lean_box(0);
v_isShared_3100_ = v_isSharedCheck_3104_;
goto v_resetjp_3098_;
}
v_resetjp_3098_:
{
lean_object* v___x_3102_; 
if (v_isShared_3100_ == 0)
{
v___x_3102_ = v___x_3099_;
goto v_reusejp_3101_;
}
else
{
lean_object* v_reuseFailAlloc_3103_; 
v_reuseFailAlloc_3103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3103_, 0, v_a_3097_);
v___x_3102_ = v_reuseFailAlloc_3103_;
goto v_reusejp_3101_;
}
v_reusejp_3101_:
{
return v___x_3102_;
}
}
}
}
else
{
lean_object* v_a_3105_; lean_object* v___x_3107_; uint8_t v_isShared_3108_; uint8_t v_isSharedCheck_3112_; 
lean_dec(v_a_2985_);
lean_dec(v_a_2983_);
lean_dec_ref(v_expr_2976_);
v_a_3105_ = lean_ctor_get(v___x_2986_, 0);
v_isSharedCheck_3112_ = !lean_is_exclusive(v___x_2986_);
if (v_isSharedCheck_3112_ == 0)
{
v___x_3107_ = v___x_2986_;
v_isShared_3108_ = v_isSharedCheck_3112_;
goto v_resetjp_3106_;
}
else
{
lean_inc(v_a_3105_);
lean_dec(v___x_2986_);
v___x_3107_ = lean_box(0);
v_isShared_3108_ = v_isSharedCheck_3112_;
goto v_resetjp_3106_;
}
v_resetjp_3106_:
{
lean_object* v___x_3110_; 
if (v_isShared_3108_ == 0)
{
v___x_3110_ = v___x_3107_;
goto v_reusejp_3109_;
}
else
{
lean_object* v_reuseFailAlloc_3111_; 
v_reuseFailAlloc_3111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3111_, 0, v_a_3105_);
v___x_3110_ = v_reuseFailAlloc_3111_;
goto v_reusejp_3109_;
}
v_reusejp_3109_:
{
return v___x_3110_;
}
}
}
}
else
{
lean_object* v_a_3113_; lean_object* v___x_3115_; uint8_t v_isShared_3116_; uint8_t v_isSharedCheck_3120_; 
lean_dec(v_a_2983_);
lean_dec_ref(v_expr_2976_);
v_a_3113_ = lean_ctor_get(v___x_2984_, 0);
v_isSharedCheck_3120_ = !lean_is_exclusive(v___x_2984_);
if (v_isSharedCheck_3120_ == 0)
{
v___x_3115_ = v___x_2984_;
v_isShared_3116_ = v_isSharedCheck_3120_;
goto v_resetjp_3114_;
}
else
{
lean_inc(v_a_3113_);
lean_dec(v___x_2984_);
v___x_3115_ = lean_box(0);
v_isShared_3116_ = v_isSharedCheck_3120_;
goto v_resetjp_3114_;
}
v_resetjp_3114_:
{
lean_object* v___x_3118_; 
if (v_isShared_3116_ == 0)
{
v___x_3118_ = v___x_3115_;
goto v_reusejp_3117_;
}
else
{
lean_object* v_reuseFailAlloc_3119_; 
v_reuseFailAlloc_3119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3119_, 0, v_a_3113_);
v___x_3118_ = v_reuseFailAlloc_3119_;
goto v_reusejp_3117_;
}
v_reusejp_3117_:
{
return v___x_3118_;
}
}
}
}
else
{
lean_object* v_a_3121_; lean_object* v___x_3123_; uint8_t v_isShared_3124_; uint8_t v_isSharedCheck_3128_; 
lean_dec_ref(v_expr_2976_);
v_a_3121_ = lean_ctor_get(v___x_2982_, 0);
v_isSharedCheck_3128_ = !lean_is_exclusive(v___x_2982_);
if (v_isSharedCheck_3128_ == 0)
{
v___x_3123_ = v___x_2982_;
v_isShared_3124_ = v_isSharedCheck_3128_;
goto v_resetjp_3122_;
}
else
{
lean_inc(v_a_3121_);
lean_dec(v___x_2982_);
v___x_3123_ = lean_box(0);
v_isShared_3124_ = v_isSharedCheck_3128_;
goto v_resetjp_3122_;
}
v_resetjp_3122_:
{
lean_object* v___x_3126_; 
if (v_isShared_3124_ == 0)
{
v___x_3126_ = v___x_3123_;
goto v_reusejp_3125_;
}
else
{
lean_object* v_reuseFailAlloc_3127_; 
v_reuseFailAlloc_3127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3127_, 0, v_a_3121_);
v___x_3126_ = v_reuseFailAlloc_3127_;
goto v_reusejp_3125_;
}
v_reusejp_3125_:
{
return v___x_3126_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToSort_x3f___boxed(lean_object* v_expr_3129_, lean_object* v_a_3130_, lean_object* v_a_3131_, lean_object* v_a_3132_, lean_object* v_a_3133_, lean_object* v_a_3134_){
_start:
{
lean_object* v_res_3135_; 
v_res_3135_ = l_Lean_Meta_coerceToSort_x3f(v_expr_3129_, v_a_3130_, v_a_3131_, v_a_3132_, v_a_3133_);
lean_dec(v_a_3133_);
lean_dec_ref(v_a_3132_);
lean_dec(v_a_3131_);
lean_dec_ref(v_a_3130_);
return v_res_3135_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(lean_object* v_e_3136_, lean_object* v___y_3137_){
_start:
{
uint8_t v___x_3139_; 
v___x_3139_ = l_Lean_Expr_hasMVar(v_e_3136_);
if (v___x_3139_ == 0)
{
lean_object* v___x_3140_; 
v___x_3140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3140_, 0, v_e_3136_);
return v___x_3140_;
}
else
{
lean_object* v___x_3141_; lean_object* v_mctx_3142_; lean_object* v___x_3143_; lean_object* v_fst_3144_; lean_object* v_snd_3145_; lean_object* v___x_3146_; lean_object* v_cache_3147_; lean_object* v_zetaDeltaFVarIds_3148_; lean_object* v_postponed_3149_; lean_object* v_diag_3150_; lean_object* v___x_3152_; uint8_t v_isShared_3153_; uint8_t v_isSharedCheck_3159_; 
v___x_3141_ = lean_st_ref_get(v___y_3137_);
v_mctx_3142_ = lean_ctor_get(v___x_3141_, 0);
lean_inc_ref(v_mctx_3142_);
lean_dec(v___x_3141_);
v___x_3143_ = l_Lean_instantiateMVarsCore(v_mctx_3142_, v_e_3136_);
v_fst_3144_ = lean_ctor_get(v___x_3143_, 0);
lean_inc(v_fst_3144_);
v_snd_3145_ = lean_ctor_get(v___x_3143_, 1);
lean_inc(v_snd_3145_);
lean_dec_ref(v___x_3143_);
v___x_3146_ = lean_st_ref_take(v___y_3137_);
v_cache_3147_ = lean_ctor_get(v___x_3146_, 1);
v_zetaDeltaFVarIds_3148_ = lean_ctor_get(v___x_3146_, 2);
v_postponed_3149_ = lean_ctor_get(v___x_3146_, 3);
v_diag_3150_ = lean_ctor_get(v___x_3146_, 4);
v_isSharedCheck_3159_ = !lean_is_exclusive(v___x_3146_);
if (v_isSharedCheck_3159_ == 0)
{
lean_object* v_unused_3160_; 
v_unused_3160_ = lean_ctor_get(v___x_3146_, 0);
lean_dec(v_unused_3160_);
v___x_3152_ = v___x_3146_;
v_isShared_3153_ = v_isSharedCheck_3159_;
goto v_resetjp_3151_;
}
else
{
lean_inc(v_diag_3150_);
lean_inc(v_postponed_3149_);
lean_inc(v_zetaDeltaFVarIds_3148_);
lean_inc(v_cache_3147_);
lean_dec(v___x_3146_);
v___x_3152_ = lean_box(0);
v_isShared_3153_ = v_isSharedCheck_3159_;
goto v_resetjp_3151_;
}
v_resetjp_3151_:
{
lean_object* v___x_3155_; 
if (v_isShared_3153_ == 0)
{
lean_ctor_set(v___x_3152_, 0, v_snd_3145_);
v___x_3155_ = v___x_3152_;
goto v_reusejp_3154_;
}
else
{
lean_object* v_reuseFailAlloc_3158_; 
v_reuseFailAlloc_3158_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3158_, 0, v_snd_3145_);
lean_ctor_set(v_reuseFailAlloc_3158_, 1, v_cache_3147_);
lean_ctor_set(v_reuseFailAlloc_3158_, 2, v_zetaDeltaFVarIds_3148_);
lean_ctor_set(v_reuseFailAlloc_3158_, 3, v_postponed_3149_);
lean_ctor_set(v_reuseFailAlloc_3158_, 4, v_diag_3150_);
v___x_3155_ = v_reuseFailAlloc_3158_;
goto v_reusejp_3154_;
}
v_reusejp_3154_:
{
lean_object* v___x_3156_; lean_object* v___x_3157_; 
v___x_3156_ = lean_st_ref_put(v___y_3137_, v___x_3155_);
v___x_3157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3157_, 0, v_fst_3144_);
return v___x_3157_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg___boxed(lean_object* v_e_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_){
_start:
{
lean_object* v_res_3164_; 
v_res_3164_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(v_e_3161_, v___y_3162_);
lean_dec(v___y_3162_);
return v_res_3164_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0(lean_object* v_e_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_, lean_object* v___y_3169_){
_start:
{
lean_object* v___x_3171_; 
v___x_3171_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(v_e_3165_, v___y_3167_);
return v___x_3171_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___boxed(lean_object* v_e_3172_, lean_object* v___y_3173_, lean_object* v___y_3174_, lean_object* v___y_3175_, lean_object* v___y_3176_, lean_object* v___y_3177_){
_start:
{
lean_object* v_res_3178_; 
v_res_3178_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0(v_e_3172_, v___y_3173_, v___y_3174_, v___y_3175_, v___y_3176_);
lean_dec(v___y_3176_);
lean_dec_ref(v___y_3175_);
lean_dec(v___y_3174_);
lean_dec_ref(v___y_3173_);
return v_res_3178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeApp_x3f(lean_object* v_type_3179_, lean_object* v_a_3180_, lean_object* v_a_3181_, lean_object* v_a_3182_, lean_object* v_a_3183_){
_start:
{
lean_object* v___y_3186_; lean_object* v___x_3225_; uint8_t v_transparency_3226_; uint8_t v___x_3227_; uint8_t v___x_3228_; 
v___x_3225_ = l_Lean_Meta_Context_config(v_a_3180_);
v_transparency_3226_ = lean_ctor_get_uint8(v___x_3225_, 9);
lean_dec_ref(v___x_3225_);
v___x_3227_ = 2;
v___x_3228_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3226_, v___x_3227_);
if (v___x_3228_ == 0)
{
lean_object* v_keyedConfig_3229_; uint8_t v_trackZetaDelta_3230_; lean_object* v_zetaDeltaSet_3231_; lean_object* v_lctx_3232_; lean_object* v_localInstances_3233_; lean_object* v_defEqCtx_x3f_3234_; lean_object* v_synthPendingDepth_3235_; lean_object* v_customCanUnfoldPredicate_x3f_3236_; uint8_t v_univApprox_3237_; uint8_t v_inTypeClassResolution_3238_; uint8_t v_cacheInferType_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; 
v_keyedConfig_3229_ = lean_ctor_get(v_a_3180_, 0);
v_trackZetaDelta_3230_ = lean_ctor_get_uint8(v_a_3180_, sizeof(void*)*7);
v_zetaDeltaSet_3231_ = lean_ctor_get(v_a_3180_, 1);
v_lctx_3232_ = lean_ctor_get(v_a_3180_, 2);
v_localInstances_3233_ = lean_ctor_get(v_a_3180_, 3);
v_defEqCtx_x3f_3234_ = lean_ctor_get(v_a_3180_, 4);
v_synthPendingDepth_3235_ = lean_ctor_get(v_a_3180_, 5);
v_customCanUnfoldPredicate_x3f_3236_ = lean_ctor_get(v_a_3180_, 6);
v_univApprox_3237_ = lean_ctor_get_uint8(v_a_3180_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3238_ = lean_ctor_get_uint8(v_a_3180_, sizeof(void*)*7 + 2);
v_cacheInferType_3239_ = lean_ctor_get_uint8(v_a_3180_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3229_);
v___x_3240_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3227_, v_keyedConfig_3229_);
lean_inc(v_customCanUnfoldPredicate_x3f_3236_);
lean_inc(v_synthPendingDepth_3235_);
lean_inc(v_defEqCtx_x3f_3234_);
lean_inc_ref(v_localInstances_3233_);
lean_inc_ref(v_lctx_3232_);
lean_inc(v_zetaDeltaSet_3231_);
v___x_3241_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3241_, 0, v___x_3240_);
lean_ctor_set(v___x_3241_, 1, v_zetaDeltaSet_3231_);
lean_ctor_set(v___x_3241_, 2, v_lctx_3232_);
lean_ctor_set(v___x_3241_, 3, v_localInstances_3233_);
lean_ctor_set(v___x_3241_, 4, v_defEqCtx_x3f_3234_);
lean_ctor_set(v___x_3241_, 5, v_synthPendingDepth_3235_);
lean_ctor_set(v___x_3241_, 6, v_customCanUnfoldPredicate_x3f_3236_);
lean_ctor_set_uint8(v___x_3241_, sizeof(void*)*7, v_trackZetaDelta_3230_);
lean_ctor_set_uint8(v___x_3241_, sizeof(void*)*7 + 1, v_univApprox_3237_);
lean_ctor_set_uint8(v___x_3241_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3238_);
lean_ctor_set_uint8(v___x_3241_, sizeof(void*)*7 + 3, v_cacheInferType_3239_);
lean_inc(v_a_3183_);
lean_inc_ref(v_a_3182_);
lean_inc(v_a_3181_);
v___x_3242_ = lean_whnf(v_type_3179_, v___x_3241_, v_a_3181_, v_a_3182_, v_a_3183_);
v___y_3186_ = v___x_3242_;
goto v___jp_3185_;
}
else
{
lean_object* v___x_3243_; 
lean_inc(v_a_3183_);
lean_inc_ref(v_a_3182_);
lean_inc(v_a_3181_);
lean_inc_ref(v_a_3180_);
v___x_3243_ = lean_whnf(v_type_3179_, v_a_3180_, v_a_3181_, v_a_3182_, v_a_3183_);
v___y_3186_ = v___x_3243_;
goto v___jp_3185_;
}
v___jp_3185_:
{
if (lean_obj_tag(v___y_3186_) == 0)
{
lean_object* v_a_3187_; lean_object* v___x_3189_; uint8_t v_isShared_3190_; uint8_t v_isSharedCheck_3216_; 
v_a_3187_ = lean_ctor_get(v___y_3186_, 0);
v_isSharedCheck_3216_ = !lean_is_exclusive(v___y_3186_);
if (v_isSharedCheck_3216_ == 0)
{
v___x_3189_ = v___y_3186_;
v_isShared_3190_ = v_isSharedCheck_3216_;
goto v_resetjp_3188_;
}
else
{
lean_inc(v_a_3187_);
lean_dec(v___y_3186_);
v___x_3189_ = lean_box(0);
v_isShared_3190_ = v_isSharedCheck_3216_;
goto v_resetjp_3188_;
}
v_resetjp_3188_:
{
if (lean_obj_tag(v_a_3187_) == 5)
{
lean_object* v_fn_3191_; lean_object* v_arg_3192_; lean_object* v___x_3193_; lean_object* v_a_3194_; lean_object* v___x_3196_; uint8_t v_isShared_3197_; uint8_t v_isSharedCheck_3211_; 
lean_del_object(v___x_3189_);
v_fn_3191_ = lean_ctor_get(v_a_3187_, 0);
lean_inc_ref(v_fn_3191_);
v_arg_3192_ = lean_ctor_get(v_a_3187_, 1);
lean_inc_ref(v_arg_3192_);
lean_dec_ref_known(v_a_3187_, 2);
v___x_3193_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(v_fn_3191_, v_a_3181_);
v_a_3194_ = lean_ctor_get(v___x_3193_, 0);
v_isSharedCheck_3211_ = !lean_is_exclusive(v___x_3193_);
if (v_isSharedCheck_3211_ == 0)
{
v___x_3196_ = v___x_3193_;
v_isShared_3197_ = v_isSharedCheck_3211_;
goto v_resetjp_3195_;
}
else
{
lean_inc(v_a_3194_);
lean_dec(v___x_3193_);
v___x_3196_ = lean_box(0);
v_isShared_3197_ = v_isSharedCheck_3211_;
goto v_resetjp_3195_;
}
v_resetjp_3195_:
{
lean_object* v___x_3198_; lean_object* v_a_3199_; lean_object* v___x_3201_; uint8_t v_isShared_3202_; uint8_t v_isSharedCheck_3210_; 
v___x_3198_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(v_arg_3192_, v_a_3181_);
v_a_3199_ = lean_ctor_get(v___x_3198_, 0);
v_isSharedCheck_3210_ = !lean_is_exclusive(v___x_3198_);
if (v_isSharedCheck_3210_ == 0)
{
v___x_3201_ = v___x_3198_;
v_isShared_3202_ = v_isSharedCheck_3210_;
goto v_resetjp_3200_;
}
else
{
lean_inc(v_a_3199_);
lean_dec(v___x_3198_);
v___x_3201_ = lean_box(0);
v_isShared_3202_ = v_isSharedCheck_3210_;
goto v_resetjp_3200_;
}
v_resetjp_3200_:
{
lean_object* v___x_3203_; lean_object* v___x_3205_; 
v___x_3203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3203_, 0, v_a_3194_);
lean_ctor_set(v___x_3203_, 1, v_a_3199_);
if (v_isShared_3197_ == 0)
{
lean_ctor_set_tag(v___x_3196_, 1);
lean_ctor_set(v___x_3196_, 0, v___x_3203_);
v___x_3205_ = v___x_3196_;
goto v_reusejp_3204_;
}
else
{
lean_object* v_reuseFailAlloc_3209_; 
v_reuseFailAlloc_3209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3209_, 0, v___x_3203_);
v___x_3205_ = v_reuseFailAlloc_3209_;
goto v_reusejp_3204_;
}
v_reusejp_3204_:
{
lean_object* v___x_3207_; 
if (v_isShared_3202_ == 0)
{
lean_ctor_set(v___x_3201_, 0, v___x_3205_);
v___x_3207_ = v___x_3201_;
goto v_reusejp_3206_;
}
else
{
lean_object* v_reuseFailAlloc_3208_; 
v_reuseFailAlloc_3208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3208_, 0, v___x_3205_);
v___x_3207_ = v_reuseFailAlloc_3208_;
goto v_reusejp_3206_;
}
v_reusejp_3206_:
{
return v___x_3207_;
}
}
}
}
}
else
{
lean_object* v___x_3212_; lean_object* v___x_3214_; 
lean_dec(v_a_3187_);
v___x_3212_ = lean_box(0);
if (v_isShared_3190_ == 0)
{
lean_ctor_set(v___x_3189_, 0, v___x_3212_);
v___x_3214_ = v___x_3189_;
goto v_reusejp_3213_;
}
else
{
lean_object* v_reuseFailAlloc_3215_; 
v_reuseFailAlloc_3215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3215_, 0, v___x_3212_);
v___x_3214_ = v_reuseFailAlloc_3215_;
goto v_reusejp_3213_;
}
v_reusejp_3213_:
{
return v___x_3214_;
}
}
}
}
else
{
lean_object* v_a_3217_; lean_object* v___x_3219_; uint8_t v_isShared_3220_; uint8_t v_isSharedCheck_3224_; 
v_a_3217_ = lean_ctor_get(v___y_3186_, 0);
v_isSharedCheck_3224_ = !lean_is_exclusive(v___y_3186_);
if (v_isSharedCheck_3224_ == 0)
{
v___x_3219_ = v___y_3186_;
v_isShared_3220_ = v_isSharedCheck_3224_;
goto v_resetjp_3218_;
}
else
{
lean_inc(v_a_3217_);
lean_dec(v___y_3186_);
v___x_3219_ = lean_box(0);
v_isShared_3220_ = v_isSharedCheck_3224_;
goto v_resetjp_3218_;
}
v_resetjp_3218_:
{
lean_object* v___x_3222_; 
if (v_isShared_3220_ == 0)
{
v___x_3222_ = v___x_3219_;
goto v_reusejp_3221_;
}
else
{
lean_object* v_reuseFailAlloc_3223_; 
v_reuseFailAlloc_3223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3223_, 0, v_a_3217_);
v___x_3222_ = v_reuseFailAlloc_3223_;
goto v_reusejp_3221_;
}
v_reusejp_3221_:
{
return v___x_3222_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeApp_x3f___boxed(lean_object* v_type_3244_, lean_object* v_a_3245_, lean_object* v_a_3246_, lean_object* v_a_3247_, lean_object* v_a_3248_, lean_object* v_a_3249_){
_start:
{
lean_object* v_res_3250_; 
v_res_3250_ = l_Lean_Meta_isTypeApp_x3f(v_type_3244_, v_a_3245_, v_a_3246_, v_a_3247_, v_a_3248_);
lean_dec(v_a_3248_);
lean_dec_ref(v_a_3247_);
lean_dec(v_a_3246_);
lean_dec_ref(v_a_3245_);
return v_res_3250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMonadApp(lean_object* v_type_3251_, lean_object* v_a_3252_, lean_object* v_a_3253_, lean_object* v_a_3254_, lean_object* v_a_3255_){
_start:
{
lean_object* v___x_3257_; 
v___x_3257_ = l_Lean_Meta_isTypeApp_x3f(v_type_3251_, v_a_3252_, v_a_3253_, v_a_3254_, v_a_3255_);
if (lean_obj_tag(v___x_3257_) == 0)
{
lean_object* v_a_3258_; lean_object* v___x_3260_; uint8_t v_isShared_3261_; uint8_t v_isSharedCheck_3293_; 
v_a_3258_ = lean_ctor_get(v___x_3257_, 0);
v_isSharedCheck_3293_ = !lean_is_exclusive(v___x_3257_);
if (v_isSharedCheck_3293_ == 0)
{
v___x_3260_ = v___x_3257_;
v_isShared_3261_ = v_isSharedCheck_3293_;
goto v_resetjp_3259_;
}
else
{
lean_inc(v_a_3258_);
lean_dec(v___x_3257_);
v___x_3260_ = lean_box(0);
v_isShared_3261_ = v_isSharedCheck_3293_;
goto v_resetjp_3259_;
}
v_resetjp_3259_:
{
if (lean_obj_tag(v_a_3258_) == 1)
{
lean_object* v_val_3262_; lean_object* v_fst_3263_; lean_object* v___x_3264_; 
lean_del_object(v___x_3260_);
v_val_3262_ = lean_ctor_get(v_a_3258_, 0);
lean_inc(v_val_3262_);
lean_dec_ref_known(v_a_3258_, 1);
v_fst_3263_ = lean_ctor_get(v_val_3262_, 0);
lean_inc(v_fst_3263_);
lean_dec(v_val_3262_);
v___x_3264_ = l_Lean_Meta_isMonad_x3f(v_fst_3263_, v_a_3252_, v_a_3253_, v_a_3254_, v_a_3255_);
if (lean_obj_tag(v___x_3264_) == 0)
{
lean_object* v_a_3265_; lean_object* v___x_3267_; uint8_t v_isShared_3268_; uint8_t v_isSharedCheck_3279_; 
v_a_3265_ = lean_ctor_get(v___x_3264_, 0);
v_isSharedCheck_3279_ = !lean_is_exclusive(v___x_3264_);
if (v_isSharedCheck_3279_ == 0)
{
v___x_3267_ = v___x_3264_;
v_isShared_3268_ = v_isSharedCheck_3279_;
goto v_resetjp_3266_;
}
else
{
lean_inc(v_a_3265_);
lean_dec(v___x_3264_);
v___x_3267_ = lean_box(0);
v_isShared_3268_ = v_isSharedCheck_3279_;
goto v_resetjp_3266_;
}
v_resetjp_3266_:
{
if (lean_obj_tag(v_a_3265_) == 0)
{
uint8_t v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3272_; 
v___x_3269_ = 0;
v___x_3270_ = lean_box(v___x_3269_);
if (v_isShared_3268_ == 0)
{
lean_ctor_set(v___x_3267_, 0, v___x_3270_);
v___x_3272_ = v___x_3267_;
goto v_reusejp_3271_;
}
else
{
lean_object* v_reuseFailAlloc_3273_; 
v_reuseFailAlloc_3273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3273_, 0, v___x_3270_);
v___x_3272_ = v_reuseFailAlloc_3273_;
goto v_reusejp_3271_;
}
v_reusejp_3271_:
{
return v___x_3272_;
}
}
else
{
uint8_t v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3277_; 
lean_dec_ref_known(v_a_3265_, 1);
v___x_3274_ = 1;
v___x_3275_ = lean_box(v___x_3274_);
if (v_isShared_3268_ == 0)
{
lean_ctor_set(v___x_3267_, 0, v___x_3275_);
v___x_3277_ = v___x_3267_;
goto v_reusejp_3276_;
}
else
{
lean_object* v_reuseFailAlloc_3278_; 
v_reuseFailAlloc_3278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3278_, 0, v___x_3275_);
v___x_3277_ = v_reuseFailAlloc_3278_;
goto v_reusejp_3276_;
}
v_reusejp_3276_:
{
return v___x_3277_;
}
}
}
}
else
{
lean_object* v_a_3280_; lean_object* v___x_3282_; uint8_t v_isShared_3283_; uint8_t v_isSharedCheck_3287_; 
v_a_3280_ = lean_ctor_get(v___x_3264_, 0);
v_isSharedCheck_3287_ = !lean_is_exclusive(v___x_3264_);
if (v_isSharedCheck_3287_ == 0)
{
v___x_3282_ = v___x_3264_;
v_isShared_3283_ = v_isSharedCheck_3287_;
goto v_resetjp_3281_;
}
else
{
lean_inc(v_a_3280_);
lean_dec(v___x_3264_);
v___x_3282_ = lean_box(0);
v_isShared_3283_ = v_isSharedCheck_3287_;
goto v_resetjp_3281_;
}
v_resetjp_3281_:
{
lean_object* v___x_3285_; 
if (v_isShared_3283_ == 0)
{
v___x_3285_ = v___x_3282_;
goto v_reusejp_3284_;
}
else
{
lean_object* v_reuseFailAlloc_3286_; 
v_reuseFailAlloc_3286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3286_, 0, v_a_3280_);
v___x_3285_ = v_reuseFailAlloc_3286_;
goto v_reusejp_3284_;
}
v_reusejp_3284_:
{
return v___x_3285_;
}
}
}
}
else
{
uint8_t v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3291_; 
lean_dec(v_a_3258_);
v___x_3288_ = 0;
v___x_3289_ = lean_box(v___x_3288_);
if (v_isShared_3261_ == 0)
{
lean_ctor_set(v___x_3260_, 0, v___x_3289_);
v___x_3291_ = v___x_3260_;
goto v_reusejp_3290_;
}
else
{
lean_object* v_reuseFailAlloc_3292_; 
v_reuseFailAlloc_3292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3292_, 0, v___x_3289_);
v___x_3291_ = v_reuseFailAlloc_3292_;
goto v_reusejp_3290_;
}
v_reusejp_3290_:
{
return v___x_3291_;
}
}
}
}
else
{
lean_object* v_a_3294_; lean_object* v___x_3296_; uint8_t v_isShared_3297_; uint8_t v_isSharedCheck_3301_; 
v_a_3294_ = lean_ctor_get(v___x_3257_, 0);
v_isSharedCheck_3301_ = !lean_is_exclusive(v___x_3257_);
if (v_isSharedCheck_3301_ == 0)
{
v___x_3296_ = v___x_3257_;
v_isShared_3297_ = v_isSharedCheck_3301_;
goto v_resetjp_3295_;
}
else
{
lean_inc(v_a_3294_);
lean_dec(v___x_3257_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_isMonadApp___boxed(lean_object* v_type_3302_, lean_object* v_a_3303_, lean_object* v_a_3304_, lean_object* v_a_3305_, lean_object* v_a_3306_, lean_object* v_a_3307_){
_start:
{
lean_object* v_res_3308_; 
v_res_3308_ = l_Lean_Meta_isMonadApp(v_type_3302_, v_a_3303_, v_a_3304_, v_a_3305_, v_a_3306_);
lean_dec(v_a_3306_);
lean_dec_ref(v_a_3305_);
lean_dec(v_a_3304_);
lean_dec_ref(v_a_3303_);
return v_res_3308_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_coerceMonadLift_x3f_spec__0(lean_object* v_opts_3309_, lean_object* v_opt_3310_){
_start:
{
lean_object* v_name_3311_; lean_object* v_defValue_3312_; lean_object* v_map_3313_; lean_object* v___x_3314_; 
v_name_3311_ = lean_ctor_get(v_opt_3310_, 0);
v_defValue_3312_ = lean_ctor_get(v_opt_3310_, 1);
v_map_3313_ = lean_ctor_get(v_opts_3309_, 0);
v___x_3314_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3313_, v_name_3311_);
if (lean_obj_tag(v___x_3314_) == 0)
{
uint8_t v___x_3315_; 
v___x_3315_ = lean_unbox(v_defValue_3312_);
return v___x_3315_;
}
else
{
lean_object* v_val_3316_; 
v_val_3316_ = lean_ctor_get(v___x_3314_, 0);
lean_inc(v_val_3316_);
lean_dec_ref_known(v___x_3314_, 1);
if (lean_obj_tag(v_val_3316_) == 1)
{
uint8_t v_v_3317_; 
v_v_3317_ = lean_ctor_get_uint8(v_val_3316_, 0);
lean_dec_ref_known(v_val_3316_, 0);
return v_v_3317_;
}
else
{
uint8_t v___x_3318_; 
lean_dec(v_val_3316_);
v___x_3318_ = lean_unbox(v_defValue_3312_);
return v___x_3318_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_coerceMonadLift_x3f_spec__0___boxed(lean_object* v_opts_3319_, lean_object* v_opt_3320_){
_start:
{
uint8_t v_res_3321_; lean_object* v_r_3322_; 
v_res_3321_ = l_Lean_Option_get___at___00Lean_Meta_coerceMonadLift_x3f_spec__0(v_opts_3319_, v_opt_3320_);
lean_dec_ref(v_opt_3320_);
lean_dec_ref(v_opts_3319_);
v_r_3322_ = lean_box(v_res_3321_);
return v_r_3322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f___lam__0(lean_object* v_x_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_){
_start:
{
lean_object* v___x_3331_; lean_object* v___x_3332_; 
v___x_3331_ = ((lean_object*)(l_Lean_Meta_coerceMonadLift_x3f___lam__0___closed__0));
v___x_3332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3332_, 0, v___x_3331_);
return v___x_3332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f___lam__0___boxed(lean_object* v_x_3333_, lean_object* v___y_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_, lean_object* v___y_3337_, lean_object* v___y_3338_){
_start:
{
lean_object* v_res_3339_; 
v_res_3339_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_x_3333_, v___y_3334_, v___y_3335_, v___y_3336_, v___y_3337_);
lean_dec(v___y_3337_);
lean_dec_ref(v___y_3336_);
lean_dec(v___y_3335_);
lean_dec_ref(v___y_3334_);
lean_dec_ref(v_x_3333_);
return v_res_3339_;
}
}
static lean_object* _init_l_Lean_Meta_coerceMonadLift_x3f___closed__6(void){
_start:
{
lean_object* v___x_3349_; lean_object* v___x_3350_; 
v___x_3349_ = lean_unsigned_to_nat(0u);
v___x_3350_ = l_Lean_mkBVar(v___x_3349_);
return v___x_3350_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f(lean_object* v_e_3362_, lean_object* v_expectedType_3363_, lean_object* v_a_3364_, lean_object* v_a_3365_, lean_object* v_a_3366_, lean_object* v_a_3367_){
_start:
{
lean_object* v_a_3370_; lean_object* v___y_3378_; lean_object* v___x_3388_; lean_object* v_a_3389_; lean_object* v___x_3391_; uint8_t v_isShared_3392_; uint8_t v_isSharedCheck_3792_; 
v___x_3388_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(v_expectedType_3363_, v_a_3365_);
v_a_3389_ = lean_ctor_get(v___x_3388_, 0);
v_isSharedCheck_3792_ = !lean_is_exclusive(v___x_3388_);
if (v_isSharedCheck_3792_ == 0)
{
v___x_3391_ = v___x_3388_;
v_isShared_3392_ = v_isSharedCheck_3792_;
goto v_resetjp_3390_;
}
else
{
lean_inc(v_a_3389_);
lean_dec(v___x_3388_);
v___x_3391_ = lean_box(0);
v_isShared_3392_ = v_isSharedCheck_3792_;
goto v_resetjp_3390_;
}
v___jp_3369_:
{
uint8_t v___x_3371_; 
v___x_3371_ = l_Lean_Exception_isInterrupt(v_a_3370_);
if (v___x_3371_ == 0)
{
uint8_t v___x_3372_; 
lean_inc_ref(v_a_3370_);
v___x_3372_ = l_Lean_Exception_isRuntime(v_a_3370_);
if (v___x_3372_ == 0)
{
lean_object* v___x_3373_; lean_object* v___x_3374_; 
lean_dec_ref(v_a_3370_);
v___x_3373_ = lean_box(0);
v___x_3374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3374_, 0, v___x_3373_);
return v___x_3374_;
}
else
{
lean_object* v___x_3375_; 
v___x_3375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3375_, 0, v_a_3370_);
return v___x_3375_;
}
}
else
{
lean_object* v___x_3376_; 
v___x_3376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3376_, 0, v_a_3370_);
return v___x_3376_;
}
}
v___jp_3377_:
{
lean_object* v_a_3379_; lean_object* v___x_3381_; uint8_t v_isShared_3382_; uint8_t v_isSharedCheck_3387_; 
v_a_3379_ = lean_ctor_get(v___y_3378_, 0);
v_isSharedCheck_3387_ = !lean_is_exclusive(v___y_3378_);
if (v_isSharedCheck_3387_ == 0)
{
v___x_3381_ = v___y_3378_;
v_isShared_3382_ = v_isSharedCheck_3387_;
goto v_resetjp_3380_;
}
else
{
lean_inc(v_a_3379_);
lean_dec(v___y_3378_);
v___x_3381_ = lean_box(0);
v_isShared_3382_ = v_isSharedCheck_3387_;
goto v_resetjp_3380_;
}
v_resetjp_3380_:
{
lean_object* v_a_3383_; lean_object* v___x_3385_; 
v_a_3383_ = lean_ctor_get(v_a_3379_, 0);
lean_inc(v_a_3383_);
lean_dec(v_a_3379_);
if (v_isShared_3382_ == 0)
{
lean_ctor_set(v___x_3381_, 0, v_a_3383_);
v___x_3385_ = v___x_3381_;
goto v_reusejp_3384_;
}
else
{
lean_object* v_reuseFailAlloc_3386_; 
v_reuseFailAlloc_3386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3386_, 0, v_a_3383_);
v___x_3385_ = v_reuseFailAlloc_3386_;
goto v_reusejp_3384_;
}
v_reusejp_3384_:
{
return v___x_3385_;
}
}
}
v_resetjp_3390_:
{
lean_object* v___x_3393_; 
lean_inc(v_a_3367_);
lean_inc_ref(v_a_3366_);
lean_inc(v_a_3365_);
lean_inc_ref(v_a_3364_);
lean_inc_ref(v_e_3362_);
v___x_3393_ = lean_infer_type(v_e_3362_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3393_) == 0)
{
lean_object* v_a_3394_; lean_object* v___x_3395_; lean_object* v_a_3396_; lean_object* v___x_3398_; uint8_t v_isShared_3399_; uint8_t v_isSharedCheck_3783_; 
v_a_3394_ = lean_ctor_get(v___x_3393_, 0);
lean_inc(v_a_3394_);
lean_dec_ref_known(v___x_3393_, 1);
v___x_3395_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(v_a_3394_, v_a_3365_);
v_a_3396_ = lean_ctor_get(v___x_3395_, 0);
v_isSharedCheck_3783_ = !lean_is_exclusive(v___x_3395_);
if (v_isSharedCheck_3783_ == 0)
{
v___x_3398_ = v___x_3395_;
v_isShared_3399_ = v_isSharedCheck_3783_;
goto v_resetjp_3397_;
}
else
{
lean_inc(v_a_3396_);
lean_dec(v___x_3395_);
v___x_3398_ = lean_box(0);
v_isShared_3399_ = v_isSharedCheck_3783_;
goto v_resetjp_3397_;
}
v_resetjp_3397_:
{
lean_object* v___x_3400_; 
lean_inc(v_a_3389_);
v___x_3400_ = l_Lean_Meta_isTypeApp_x3f(v_a_3389_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3400_) == 0)
{
lean_object* v_a_3401_; lean_object* v___x_3403_; uint8_t v_isShared_3404_; uint8_t v_isSharedCheck_3774_; 
v_a_3401_ = lean_ctor_get(v___x_3400_, 0);
v_isSharedCheck_3774_ = !lean_is_exclusive(v___x_3400_);
if (v_isSharedCheck_3774_ == 0)
{
v___x_3403_ = v___x_3400_;
v_isShared_3404_ = v_isSharedCheck_3774_;
goto v_resetjp_3402_;
}
else
{
lean_inc(v_a_3401_);
lean_dec(v___x_3400_);
v___x_3403_ = lean_box(0);
v_isShared_3404_ = v_isSharedCheck_3774_;
goto v_resetjp_3402_;
}
v_resetjp_3402_:
{
if (lean_obj_tag(v_a_3401_) == 1)
{
lean_object* v_val_3405_; lean_object* v___x_3407_; uint8_t v_isShared_3408_; uint8_t v_isSharedCheck_3769_; 
lean_del_object(v___x_3403_);
v_val_3405_ = lean_ctor_get(v_a_3401_, 0);
v_isSharedCheck_3769_ = !lean_is_exclusive(v_a_3401_);
if (v_isSharedCheck_3769_ == 0)
{
v___x_3407_ = v_a_3401_;
v_isShared_3408_ = v_isSharedCheck_3769_;
goto v_resetjp_3406_;
}
else
{
lean_inc(v_val_3405_);
lean_dec(v_a_3401_);
v___x_3407_ = lean_box(0);
v_isShared_3408_ = v_isSharedCheck_3769_;
goto v_resetjp_3406_;
}
v_resetjp_3406_:
{
lean_object* v_fst_3409_; lean_object* v_snd_3410_; lean_object* v___x_3412_; uint8_t v_isShared_3413_; uint8_t v_isSharedCheck_3768_; 
v_fst_3409_ = lean_ctor_get(v_val_3405_, 0);
v_snd_3410_ = lean_ctor_get(v_val_3405_, 1);
v_isSharedCheck_3768_ = !lean_is_exclusive(v_val_3405_);
if (v_isSharedCheck_3768_ == 0)
{
v___x_3412_ = v_val_3405_;
v_isShared_3413_ = v_isSharedCheck_3768_;
goto v_resetjp_3411_;
}
else
{
lean_inc(v_snd_3410_);
lean_inc(v_fst_3409_);
lean_dec(v_val_3405_);
v___x_3412_ = lean_box(0);
v_isShared_3413_ = v_isSharedCheck_3768_;
goto v_resetjp_3411_;
}
v_resetjp_3411_:
{
lean_object* v___x_3414_; 
lean_inc(v_a_3396_);
v___x_3414_ = l_Lean_Meta_isTypeApp_x3f(v_a_3396_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3414_) == 0)
{
lean_object* v_a_3415_; lean_object* v___x_3417_; uint8_t v_isShared_3418_; uint8_t v_isSharedCheck_3759_; 
v_a_3415_ = lean_ctor_get(v___x_3414_, 0);
v_isSharedCheck_3759_ = !lean_is_exclusive(v___x_3414_);
if (v_isSharedCheck_3759_ == 0)
{
v___x_3417_ = v___x_3414_;
v_isShared_3418_ = v_isSharedCheck_3759_;
goto v_resetjp_3416_;
}
else
{
lean_inc(v_a_3415_);
lean_dec(v___x_3414_);
v___x_3417_ = lean_box(0);
v_isShared_3418_ = v_isSharedCheck_3759_;
goto v_resetjp_3416_;
}
v_resetjp_3416_:
{
if (lean_obj_tag(v_a_3415_) == 1)
{
lean_object* v_val_3419_; lean_object* v___x_3421_; uint8_t v_isShared_3422_; uint8_t v_isSharedCheck_3754_; 
lean_del_object(v___x_3417_);
v_val_3419_ = lean_ctor_get(v_a_3415_, 0);
v_isSharedCheck_3754_ = !lean_is_exclusive(v_a_3415_);
if (v_isSharedCheck_3754_ == 0)
{
v___x_3421_ = v_a_3415_;
v_isShared_3422_ = v_isSharedCheck_3754_;
goto v_resetjp_3420_;
}
else
{
lean_inc(v_val_3419_);
lean_dec(v_a_3415_);
v___x_3421_ = lean_box(0);
v_isShared_3422_ = v_isSharedCheck_3754_;
goto v_resetjp_3420_;
}
v_resetjp_3420_:
{
lean_object* v_fst_3423_; lean_object* v_snd_3424_; lean_object* v___x_3426_; uint8_t v_isShared_3427_; uint8_t v_isSharedCheck_3753_; 
v_fst_3423_ = lean_ctor_get(v_val_3419_, 0);
v_snd_3424_ = lean_ctor_get(v_val_3419_, 1);
v_isSharedCheck_3753_ = !lean_is_exclusive(v_val_3419_);
if (v_isSharedCheck_3753_ == 0)
{
v___x_3426_ = v_val_3419_;
v_isShared_3427_ = v_isSharedCheck_3753_;
goto v_resetjp_3425_;
}
else
{
lean_inc(v_snd_3424_);
lean_inc(v_fst_3423_);
lean_dec(v_val_3419_);
v___x_3426_ = lean_box(0);
v_isShared_3427_ = v_isSharedCheck_3753_;
goto v_resetjp_3425_;
}
v_resetjp_3425_:
{
lean_object* v___x_3428_; 
v___x_3428_ = l_Lean_Meta_saveState___redArg(v_a_3365_, v_a_3367_);
if (lean_obj_tag(v___x_3428_) == 0)
{
lean_object* v_a_3429_; lean_object* v___x_3430_; 
v_a_3429_ = lean_ctor_get(v___x_3428_, 0);
lean_inc(v_a_3429_);
lean_dec_ref_known(v___x_3428_, 1);
lean_inc(v_fst_3409_);
lean_inc(v_fst_3423_);
v___x_3430_ = l_Lean_Meta_isExprDefEq(v_fst_3423_, v_fst_3409_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3430_) == 0)
{
lean_object* v_a_3431_; lean_object* v___x_3433_; uint8_t v_isShared_3434_; uint8_t v_isSharedCheck_3736_; 
v_a_3431_ = lean_ctor_get(v___x_3430_, 0);
v_isSharedCheck_3736_ = !lean_is_exclusive(v___x_3430_);
if (v_isSharedCheck_3736_ == 0)
{
v___x_3433_ = v___x_3430_;
v_isShared_3434_ = v_isSharedCheck_3736_;
goto v_resetjp_3432_;
}
else
{
lean_inc(v_a_3431_);
lean_dec(v___x_3430_);
v___x_3433_ = lean_box(0);
v_isShared_3434_ = v_isSharedCheck_3736_;
goto v_resetjp_3432_;
}
v_resetjp_3432_:
{
uint8_t v___x_3435_; 
v___x_3435_ = lean_unbox(v_a_3431_);
lean_dec(v_a_3431_);
if (v___x_3435_ == 0)
{
lean_object* v___x_3436_; lean_object* v___x_3437_; uint8_t v___x_3438_; 
lean_dec(v_a_3429_);
lean_del_object(v___x_3407_);
lean_del_object(v___x_3398_);
lean_del_object(v___x_3391_);
v___x_3436_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_3366_);
v___x_3437_ = l_Lean_Meta_autoLift;
v___x_3438_ = l_Lean_Option_get___at___00Lean_Meta_coerceMonadLift_x3f_spec__0(v___x_3436_, v___x_3437_);
lean_dec_ref(v___x_3436_);
if (v___x_3438_ == 0)
{
lean_object* v___x_3439_; lean_object* v___x_3441_; 
lean_del_object(v___x_3426_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_del_object(v___x_3421_);
lean_del_object(v___x_3412_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3396_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v___x_3439_ = lean_box(0);
if (v_isShared_3434_ == 0)
{
lean_ctor_set(v___x_3433_, 0, v___x_3439_);
v___x_3441_ = v___x_3433_;
goto v_reusejp_3440_;
}
else
{
lean_object* v_reuseFailAlloc_3442_; 
v_reuseFailAlloc_3442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3442_, 0, v___x_3439_);
v___x_3441_ = v_reuseFailAlloc_3442_;
goto v_reusejp_3440_;
}
v_reusejp_3440_:
{
return v___x_3441_;
}
}
else
{
lean_object* v___x_3443_; 
lean_del_object(v___x_3433_);
lean_inc(v_a_3367_);
lean_inc_ref(v_a_3366_);
lean_inc(v_a_3365_);
lean_inc_ref(v_a_3364_);
lean_inc(v_fst_3423_);
v___x_3443_ = lean_infer_type(v_fst_3423_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3443_) == 0)
{
lean_object* v_a_3444_; lean_object* v___x_3445_; 
v_a_3444_ = lean_ctor_get(v___x_3443_, 0);
lean_inc(v_a_3444_);
lean_dec_ref_known(v___x_3443_, 1);
lean_inc(v_a_3367_);
lean_inc_ref(v_a_3366_);
lean_inc(v_a_3365_);
lean_inc_ref(v_a_3364_);
v___x_3445_ = lean_whnf(v_a_3444_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3445_) == 0)
{
lean_object* v_a_3446_; 
v_a_3446_ = lean_ctor_get(v___x_3445_, 0);
lean_inc(v_a_3446_);
lean_dec_ref_known(v___x_3445_, 1);
if (lean_obj_tag(v_a_3446_) == 7)
{
lean_object* v_binderType_3447_; 
v_binderType_3447_ = lean_ctor_get(v_a_3446_, 1);
if (lean_obj_tag(v_binderType_3447_) == 3)
{
lean_object* v_body_3448_; 
v_body_3448_ = lean_ctor_get(v_a_3446_, 2);
if (lean_obj_tag(v_body_3448_) == 3)
{
lean_object* v_u_3449_; lean_object* v_u_3450_; lean_object* v___x_3451_; 
lean_inc_ref(v_body_3448_);
lean_inc_ref(v_binderType_3447_);
lean_dec_ref_known(v_a_3446_, 3);
v_u_3449_ = lean_ctor_get(v_binderType_3447_, 0);
lean_inc(v_u_3449_);
lean_dec_ref_known(v_binderType_3447_, 1);
v_u_3450_ = lean_ctor_get(v_body_3448_, 0);
lean_inc(v_u_3450_);
lean_dec_ref_known(v_body_3448_, 1);
lean_inc(v_a_3367_);
lean_inc_ref(v_a_3366_);
lean_inc(v_a_3365_);
lean_inc_ref(v_a_3364_);
lean_inc(v_fst_3409_);
v___x_3451_ = lean_infer_type(v_fst_3409_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3451_) == 0)
{
lean_object* v_a_3452_; lean_object* v___x_3453_; 
v_a_3452_ = lean_ctor_get(v___x_3451_, 0);
lean_inc(v_a_3452_);
lean_dec_ref_known(v___x_3451_, 1);
lean_inc(v_a_3367_);
lean_inc_ref(v_a_3366_);
lean_inc(v_a_3365_);
lean_inc_ref(v_a_3364_);
v___x_3453_ = lean_whnf(v_a_3452_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3453_) == 0)
{
lean_object* v_a_3454_; 
v_a_3454_ = lean_ctor_get(v___x_3453_, 0);
lean_inc(v_a_3454_);
lean_dec_ref_known(v___x_3453_, 1);
if (lean_obj_tag(v_a_3454_) == 7)
{
lean_object* v_binderType_3455_; 
v_binderType_3455_ = lean_ctor_get(v_a_3454_, 1);
if (lean_obj_tag(v_binderType_3455_) == 3)
{
lean_object* v_body_3456_; 
v_body_3456_ = lean_ctor_get(v_a_3454_, 2);
if (lean_obj_tag(v_body_3456_) == 3)
{
lean_object* v_u_3457_; lean_object* v_u_3458_; lean_object* v___x_3459_; 
lean_inc_ref(v_body_3456_);
lean_inc_ref(v_binderType_3455_);
lean_dec_ref_known(v_a_3454_, 3);
v_u_3457_ = lean_ctor_get(v_binderType_3455_, 0);
lean_inc(v_u_3457_);
lean_dec_ref_known(v_binderType_3455_, 1);
v_u_3458_ = lean_ctor_get(v_body_3456_, 0);
lean_inc(v_u_3458_);
lean_dec_ref_known(v_body_3456_, 1);
v___x_3459_ = l_Lean_Meta_decLevel(v_u_3449_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3459_) == 0)
{
lean_object* v_a_3460_; lean_object* v___x_3461_; 
v_a_3460_ = lean_ctor_get(v___x_3459_, 0);
lean_inc(v_a_3460_);
lean_dec_ref_known(v___x_3459_, 1);
v___x_3461_ = l_Lean_Meta_decLevel(v_u_3457_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3461_) == 0)
{
lean_object* v_a_3462_; lean_object* v___x_3463_; 
v_a_3462_ = lean_ctor_get(v___x_3461_, 0);
lean_inc(v_a_3462_);
lean_dec_ref_known(v___x_3461_, 1);
lean_inc(v_a_3460_);
v___x_3463_ = l_Lean_Meta_isLevelDefEq(v_a_3460_, v_a_3462_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3463_) == 0)
{
lean_object* v_a_3464_; lean_object* v___x_3466_; uint8_t v_isShared_3467_; uint8_t v_isSharedCheck_3628_; 
v_a_3464_ = lean_ctor_get(v___x_3463_, 0);
v_isSharedCheck_3628_ = !lean_is_exclusive(v___x_3463_);
if (v_isSharedCheck_3628_ == 0)
{
v___x_3466_ = v___x_3463_;
v_isShared_3467_ = v_isSharedCheck_3628_;
goto v_resetjp_3465_;
}
else
{
lean_inc(v_a_3464_);
lean_dec(v___x_3463_);
v___x_3466_ = lean_box(0);
v_isShared_3467_ = v_isSharedCheck_3628_;
goto v_resetjp_3465_;
}
v_resetjp_3465_:
{
uint8_t v___x_3468_; 
v___x_3468_ = lean_unbox(v_a_3464_);
lean_dec(v_a_3464_);
if (v___x_3468_ == 1)
{
lean_object* v___x_3469_; 
lean_del_object(v___x_3466_);
v___x_3469_ = l_Lean_Meta_decLevel(v_u_3450_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3469_) == 0)
{
lean_object* v_a_3470_; lean_object* v___x_3471_; 
v_a_3470_ = lean_ctor_get(v___x_3469_, 0);
lean_inc(v_a_3470_);
lean_dec_ref_known(v___x_3469_, 1);
v___x_3471_ = l_Lean_Meta_decLevel(v_u_3458_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3471_) == 0)
{
lean_object* v_a_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3476_; 
v_a_3472_ = lean_ctor_get(v___x_3471_, 0);
lean_inc(v_a_3472_);
lean_dec_ref_known(v___x_3471_, 1);
v___x_3473_ = ((lean_object*)(l_Lean_Meta_coerceMonadLift_x3f___closed__1));
v___x_3474_ = lean_box(0);
if (v_isShared_3427_ == 0)
{
lean_ctor_set_tag(v___x_3426_, 1);
lean_ctor_set(v___x_3426_, 1, v___x_3474_);
lean_ctor_set(v___x_3426_, 0, v_a_3472_);
v___x_3476_ = v___x_3426_;
goto v_reusejp_3475_;
}
else
{
lean_object* v_reuseFailAlloc_3621_; 
v_reuseFailAlloc_3621_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3621_, 0, v_a_3472_);
lean_ctor_set(v_reuseFailAlloc_3621_, 1, v___x_3474_);
v___x_3476_ = v_reuseFailAlloc_3621_;
goto v_reusejp_3475_;
}
v_reusejp_3475_:
{
lean_object* v___x_3478_; 
if (v_isShared_3413_ == 0)
{
lean_ctor_set_tag(v___x_3412_, 1);
lean_ctor_set(v___x_3412_, 1, v___x_3476_);
lean_ctor_set(v___x_3412_, 0, v_a_3470_);
v___x_3478_ = v___x_3412_;
goto v_reusejp_3477_;
}
else
{
lean_object* v_reuseFailAlloc_3620_; 
v_reuseFailAlloc_3620_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3620_, 0, v_a_3470_);
lean_ctor_set(v_reuseFailAlloc_3620_, 1, v___x_3476_);
v___x_3478_ = v_reuseFailAlloc_3620_;
goto v_reusejp_3477_;
}
v_reusejp_3477_:
{
lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; 
v___x_3479_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3479_, 0, v_a_3460_);
lean_ctor_set(v___x_3479_, 1, v___x_3478_);
v___x_3480_ = l_Lean_Expr_const___override(v___x_3473_, v___x_3479_);
v___x_3481_ = lean_unsigned_to_nat(2u);
v___x_3482_ = lean_mk_empty_array_with_capacity(v___x_3481_);
lean_inc(v_fst_3423_);
v___x_3483_ = lean_array_push(v___x_3482_, v_fst_3423_);
lean_inc(v_fst_3409_);
v___x_3484_ = lean_array_push(v___x_3483_, v_fst_3409_);
v___x_3485_ = l_Lean_mkAppN(v___x_3480_, v___x_3484_);
lean_dec_ref(v___x_3484_);
v___x_3486_ = lean_box(0);
v___x_3487_ = l_Lean_Meta_trySynthInstance(v___x_3485_, v___x_3486_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3487_) == 0)
{
lean_object* v_a_3488_; lean_object* v___x_3490_; uint8_t v_isShared_3491_; uint8_t v_isSharedCheck_3618_; 
v_a_3488_ = lean_ctor_get(v___x_3487_, 0);
v_isSharedCheck_3618_ = !lean_is_exclusive(v___x_3487_);
if (v_isSharedCheck_3618_ == 0)
{
v___x_3490_ = v___x_3487_;
v_isShared_3491_ = v_isSharedCheck_3618_;
goto v_resetjp_3489_;
}
else
{
lean_inc(v_a_3488_);
lean_dec(v___x_3487_);
v___x_3490_ = lean_box(0);
v_isShared_3491_ = v_isSharedCheck_3618_;
goto v_resetjp_3489_;
}
v_resetjp_3489_:
{
if (lean_obj_tag(v_a_3488_) == 1)
{
lean_object* v_a_3492_; lean_object* v___x_3493_; 
lean_del_object(v___x_3490_);
v_a_3492_ = lean_ctor_get(v_a_3488_, 0);
lean_inc(v_a_3492_);
lean_dec_ref_known(v_a_3488_, 1);
lean_inc(v_snd_3424_);
v___x_3493_ = l_Lean_Meta_getDecLevel(v_snd_3424_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3493_) == 0)
{
lean_object* v_a_3494_; lean_object* v___x_3495_; 
v_a_3494_ = lean_ctor_get(v___x_3493_, 0);
lean_inc(v_a_3494_);
lean_dec_ref_known(v___x_3493_, 1);
v___x_3495_ = l_Lean_Meta_getDecLevel(v_a_3396_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3495_) == 0)
{
lean_object* v_a_3496_; lean_object* v___x_3497_; 
v_a_3496_ = lean_ctor_get(v___x_3495_, 0);
lean_inc(v_a_3496_);
lean_dec_ref_known(v___x_3495_, 1);
lean_inc(v_a_3389_);
v___x_3497_ = l_Lean_Meta_getDecLevel(v_a_3389_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3497_) == 0)
{
lean_object* v_a_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; 
v_a_3498_ = lean_ctor_get(v___x_3497_, 0);
lean_inc(v_a_3498_);
lean_dec_ref_known(v___x_3497_, 1);
v___x_3499_ = ((lean_object*)(l_Lean_Meta_coerceMonadLift_x3f___closed__3));
v___x_3500_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3500_, 0, v_a_3498_);
lean_ctor_set(v___x_3500_, 1, v___x_3474_);
v___x_3501_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3501_, 0, v_a_3496_);
lean_ctor_set(v___x_3501_, 1, v___x_3500_);
v___x_3502_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3502_, 0, v_a_3494_);
lean_ctor_set(v___x_3502_, 1, v___x_3501_);
lean_inc_ref(v___x_3502_);
v___x_3503_ = l_Lean_mkConst(v___x_3499_, v___x_3502_);
v___x_3504_ = lean_unsigned_to_nat(5u);
v___x_3505_ = lean_mk_empty_array_with_capacity(v___x_3504_);
lean_inc(v_fst_3423_);
v___x_3506_ = lean_array_push(v___x_3505_, v_fst_3423_);
lean_inc(v_fst_3409_);
v___x_3507_ = lean_array_push(v___x_3506_, v_fst_3409_);
lean_inc(v_a_3492_);
v___x_3508_ = lean_array_push(v___x_3507_, v_a_3492_);
lean_inc(v_snd_3424_);
v___x_3509_ = lean_array_push(v___x_3508_, v_snd_3424_);
lean_inc_ref(v_e_3362_);
v___x_3510_ = lean_array_push(v___x_3509_, v_e_3362_);
v___x_3511_ = l_Lean_mkAppN(v___x_3503_, v___x_3510_);
lean_dec_ref(v___x_3510_);
lean_inc(v_a_3367_);
lean_inc_ref(v_a_3366_);
lean_inc(v_a_3365_);
lean_inc_ref(v_a_3364_);
lean_inc_ref(v___x_3511_);
v___x_3512_ = lean_infer_type(v___x_3511_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3512_) == 0)
{
lean_object* v_a_3513_; lean_object* v___x_3514_; 
v_a_3513_ = lean_ctor_get(v___x_3512_, 0);
lean_inc(v_a_3513_);
lean_dec_ref_known(v___x_3512_, 1);
lean_inc(v_a_3389_);
v___x_3514_ = l_Lean_Meta_isExprDefEq(v_a_3389_, v_a_3513_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3514_) == 0)
{
lean_object* v_a_3515_; lean_object* v___x_3517_; uint8_t v_isShared_3518_; uint8_t v_isSharedCheck_3609_; 
v_a_3515_ = lean_ctor_get(v___x_3514_, 0);
v_isSharedCheck_3609_ = !lean_is_exclusive(v___x_3514_);
if (v_isSharedCheck_3609_ == 0)
{
v___x_3517_ = v___x_3514_;
v_isShared_3518_ = v_isSharedCheck_3609_;
goto v_resetjp_3516_;
}
else
{
lean_inc(v_a_3515_);
lean_dec(v___x_3514_);
v___x_3517_ = lean_box(0);
v_isShared_3518_ = v_isSharedCheck_3609_;
goto v_resetjp_3516_;
}
v_resetjp_3516_:
{
uint8_t v___x_3519_; 
v___x_3519_ = lean_unbox(v_a_3515_);
lean_dec(v_a_3515_);
if (v___x_3519_ == 0)
{
lean_object* v___x_3520_; 
lean_del_object(v___x_3517_);
lean_dec_ref(v___x_3511_);
lean_del_object(v___x_3421_);
lean_inc(v_fst_3409_);
v___x_3520_ = l_Lean_Meta_isMonad_x3f(v_fst_3409_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3520_) == 0)
{
lean_object* v_a_3521_; lean_object* v___x_3523_; uint8_t v_isShared_3524_; uint8_t v_isSharedCheck_3601_; 
v_a_3521_ = lean_ctor_get(v___x_3520_, 0);
v_isSharedCheck_3601_ = !lean_is_exclusive(v___x_3520_);
if (v_isSharedCheck_3601_ == 0)
{
v___x_3523_ = v___x_3520_;
v_isShared_3524_ = v_isSharedCheck_3601_;
goto v_resetjp_3522_;
}
else
{
lean_inc(v_a_3521_);
lean_dec(v___x_3520_);
v___x_3523_ = lean_box(0);
v_isShared_3524_ = v_isSharedCheck_3601_;
goto v_resetjp_3522_;
}
v_resetjp_3522_:
{
if (lean_obj_tag(v_a_3521_) == 1)
{
lean_object* v_val_3525_; lean_object* v___x_3527_; uint8_t v_isShared_3528_; uint8_t v_isSharedCheck_3597_; 
lean_del_object(v___x_3523_);
v_val_3525_ = lean_ctor_get(v_a_3521_, 0);
v_isSharedCheck_3597_ = !lean_is_exclusive(v_a_3521_);
if (v_isSharedCheck_3597_ == 0)
{
v___x_3527_ = v_a_3521_;
v_isShared_3528_ = v_isSharedCheck_3597_;
goto v_resetjp_3526_;
}
else
{
lean_inc(v_val_3525_);
lean_dec(v_a_3521_);
v___x_3527_ = lean_box(0);
v_isShared_3528_ = v_isSharedCheck_3597_;
goto v_resetjp_3526_;
}
v_resetjp_3526_:
{
lean_object* v___x_3529_; 
lean_inc(v_snd_3424_);
v___x_3529_ = l_Lean_Meta_getLevel(v_snd_3424_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3529_) == 0)
{
lean_object* v_a_3530_; lean_object* v___x_3531_; 
v_a_3530_ = lean_ctor_get(v___x_3529_, 0);
lean_inc(v_a_3530_);
lean_dec_ref_known(v___x_3529_, 1);
lean_inc(v_snd_3410_);
v___x_3531_ = l_Lean_Meta_getLevel(v_snd_3410_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3531_) == 0)
{
lean_object* v_a_3532_; lean_object* v___x_3533_; uint8_t v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; 
v_a_3532_ = lean_ctor_get(v___x_3531_, 0);
lean_inc(v_a_3532_);
lean_dec_ref_known(v___x_3531_, 1);
v___x_3533_ = ((lean_object*)(l_Lean_Meta_coerceMonadLift_x3f___closed__5));
v___x_3534_ = 0;
v___x_3535_ = ((lean_object*)(l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__1));
v___x_3536_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3536_, 0, v_a_3532_);
lean_ctor_set(v___x_3536_, 1, v___x_3474_);
v___x_3537_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3537_, 0, v_a_3530_);
lean_ctor_set(v___x_3537_, 1, v___x_3536_);
v___x_3538_ = l_Lean_mkConst(v___x_3535_, v___x_3537_);
v___x_3539_ = lean_obj_once(&l_Lean_Meta_coerceMonadLift_x3f___closed__6, &l_Lean_Meta_coerceMonadLift_x3f___closed__6_once, _init_l_Lean_Meta_coerceMonadLift_x3f___closed__6);
v___x_3540_ = lean_unsigned_to_nat(3u);
v___x_3541_ = lean_mk_empty_array_with_capacity(v___x_3540_);
lean_inc_n(v_snd_3424_, 2);
v___x_3542_ = lean_array_push(v___x_3541_, v_snd_3424_);
v___x_3543_ = lean_array_push(v___x_3542_, v___x_3539_);
lean_inc(v_snd_3410_);
v___x_3544_ = lean_array_push(v___x_3543_, v_snd_3410_);
v___x_3545_ = l_Lean_mkAppN(v___x_3538_, v___x_3544_);
lean_dec_ref(v___x_3544_);
v___x_3546_ = l_Lean_mkForall(v___x_3533_, v___x_3534_, v_snd_3424_, v___x_3545_);
v___x_3547_ = l_Lean_Meta_trySynthInstance(v___x_3546_, v___x_3486_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3547_) == 0)
{
lean_object* v_a_3548_; lean_object* v___x_3550_; uint8_t v_isShared_3551_; uint8_t v_isSharedCheck_3593_; 
v_a_3548_ = lean_ctor_get(v___x_3547_, 0);
v_isSharedCheck_3593_ = !lean_is_exclusive(v___x_3547_);
if (v_isSharedCheck_3593_ == 0)
{
v___x_3550_ = v___x_3547_;
v_isShared_3551_ = v_isSharedCheck_3593_;
goto v_resetjp_3549_;
}
else
{
lean_inc(v_a_3548_);
lean_dec(v___x_3547_);
v___x_3550_ = lean_box(0);
v_isShared_3551_ = v_isSharedCheck_3593_;
goto v_resetjp_3549_;
}
v_resetjp_3549_:
{
if (lean_obj_tag(v_a_3548_) == 1)
{
lean_object* v_a_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; 
lean_del_object(v___x_3550_);
v_a_3552_ = lean_ctor_get(v_a_3548_, 0);
lean_inc(v_a_3552_);
lean_dec_ref_known(v_a_3548_, 1);
v___x_3553_ = ((lean_object*)(l_Lean_Meta_coerceMonadLift_x3f___closed__9));
v___x_3554_ = l_Lean_mkConst(v___x_3553_, v___x_3502_);
v___x_3555_ = lean_unsigned_to_nat(8u);
v___x_3556_ = lean_mk_empty_array_with_capacity(v___x_3555_);
v___x_3557_ = lean_array_push(v___x_3556_, v_fst_3423_);
v___x_3558_ = lean_array_push(v___x_3557_, v_fst_3409_);
v___x_3559_ = lean_array_push(v___x_3558_, v_snd_3424_);
v___x_3560_ = lean_array_push(v___x_3559_, v_snd_3410_);
v___x_3561_ = lean_array_push(v___x_3560_, v_a_3492_);
v___x_3562_ = lean_array_push(v___x_3561_, v_a_3552_);
v___x_3563_ = lean_array_push(v___x_3562_, v_val_3525_);
v___x_3564_ = lean_array_push(v___x_3563_, v_e_3362_);
v___x_3565_ = l_Lean_mkAppN(v___x_3554_, v___x_3564_);
lean_dec_ref(v___x_3564_);
v___x_3566_ = l_Lean_Meta_expandCoe(v___x_3565_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3566_) == 0)
{
lean_object* v_a_3567_; lean_object* v_fst_3568_; lean_object* v___x_3569_; 
v_a_3567_ = lean_ctor_get(v___x_3566_, 0);
lean_inc(v_a_3567_);
lean_dec_ref_known(v___x_3566_, 1);
v_fst_3568_ = lean_ctor_get(v_a_3567_, 0);
lean_inc_n(v_fst_3568_, 2);
lean_dec(v_a_3567_);
lean_inc(v_a_3367_);
lean_inc_ref(v_a_3366_);
lean_inc(v_a_3365_);
lean_inc_ref(v_a_3364_);
v___x_3569_ = lean_infer_type(v_fst_3568_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3569_) == 0)
{
lean_object* v_a_3570_; lean_object* v___x_3571_; 
v_a_3570_ = lean_ctor_get(v___x_3569_, 0);
lean_inc(v_a_3570_);
lean_dec_ref_known(v___x_3569_, 1);
v___x_3571_ = l_Lean_Meta_isExprDefEq(v_a_3389_, v_a_3570_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3571_) == 0)
{
lean_object* v_a_3572_; lean_object* v___x_3574_; uint8_t v_isShared_3575_; uint8_t v_isSharedCheck_3586_; 
v_a_3572_ = lean_ctor_get(v___x_3571_, 0);
v_isSharedCheck_3586_ = !lean_is_exclusive(v___x_3571_);
if (v_isSharedCheck_3586_ == 0)
{
v___x_3574_ = v___x_3571_;
v_isShared_3575_ = v_isSharedCheck_3586_;
goto v_resetjp_3573_;
}
else
{
lean_inc(v_a_3572_);
lean_dec(v___x_3571_);
v___x_3574_ = lean_box(0);
v_isShared_3575_ = v_isSharedCheck_3586_;
goto v_resetjp_3573_;
}
v_resetjp_3573_:
{
uint8_t v___x_3576_; 
v___x_3576_ = lean_unbox(v_a_3572_);
lean_dec(v_a_3572_);
if (v___x_3576_ == 0)
{
lean_object* v___x_3578_; 
lean_dec(v_fst_3568_);
lean_del_object(v___x_3527_);
if (v_isShared_3575_ == 0)
{
lean_ctor_set(v___x_3574_, 0, v___x_3486_);
v___x_3578_ = v___x_3574_;
goto v_reusejp_3577_;
}
else
{
lean_object* v_reuseFailAlloc_3579_; 
v_reuseFailAlloc_3579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3579_, 0, v___x_3486_);
v___x_3578_ = v_reuseFailAlloc_3579_;
goto v_reusejp_3577_;
}
v_reusejp_3577_:
{
return v___x_3578_;
}
}
else
{
lean_object* v___x_3581_; 
if (v_isShared_3528_ == 0)
{
lean_ctor_set(v___x_3527_, 0, v_fst_3568_);
v___x_3581_ = v___x_3527_;
goto v_reusejp_3580_;
}
else
{
lean_object* v_reuseFailAlloc_3585_; 
v_reuseFailAlloc_3585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3585_, 0, v_fst_3568_);
v___x_3581_ = v_reuseFailAlloc_3585_;
goto v_reusejp_3580_;
}
v_reusejp_3580_:
{
lean_object* v___x_3583_; 
if (v_isShared_3575_ == 0)
{
lean_ctor_set(v___x_3574_, 0, v___x_3581_);
v___x_3583_ = v___x_3574_;
goto v_reusejp_3582_;
}
else
{
lean_object* v_reuseFailAlloc_3584_; 
v_reuseFailAlloc_3584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3584_, 0, v___x_3581_);
v___x_3583_ = v_reuseFailAlloc_3584_;
goto v_reusejp_3582_;
}
v_reusejp_3582_:
{
return v___x_3583_;
}
}
}
}
}
else
{
lean_object* v_a_3587_; 
lean_dec(v_fst_3568_);
lean_del_object(v___x_3527_);
v_a_3587_ = lean_ctor_get(v___x_3571_, 0);
lean_inc(v_a_3587_);
lean_dec_ref_known(v___x_3571_, 1);
v_a_3370_ = v_a_3587_;
goto v___jp_3369_;
}
}
else
{
lean_object* v_a_3588_; 
lean_dec(v_fst_3568_);
lean_del_object(v___x_3527_);
lean_dec(v_a_3389_);
v_a_3588_ = lean_ctor_get(v___x_3569_, 0);
lean_inc(v_a_3588_);
lean_dec_ref_known(v___x_3569_, 1);
v_a_3370_ = v_a_3588_;
goto v___jp_3369_;
}
}
else
{
lean_object* v_a_3589_; 
lean_del_object(v___x_3527_);
lean_dec(v_a_3389_);
v_a_3589_ = lean_ctor_get(v___x_3566_, 0);
lean_inc(v_a_3589_);
lean_dec_ref_known(v___x_3566_, 1);
v_a_3370_ = v_a_3589_;
goto v___jp_3369_;
}
}
else
{
lean_object* v___x_3591_; 
lean_dec(v_a_3548_);
lean_del_object(v___x_3527_);
lean_dec(v_val_3525_);
lean_dec_ref_known(v___x_3502_, 2);
lean_dec(v_a_3492_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
if (v_isShared_3551_ == 0)
{
lean_ctor_set(v___x_3550_, 0, v___x_3486_);
v___x_3591_ = v___x_3550_;
goto v_reusejp_3590_;
}
else
{
lean_object* v_reuseFailAlloc_3592_; 
v_reuseFailAlloc_3592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3592_, 0, v___x_3486_);
v___x_3591_ = v_reuseFailAlloc_3592_;
goto v_reusejp_3590_;
}
v_reusejp_3590_:
{
return v___x_3591_;
}
}
}
}
else
{
lean_object* v_a_3594_; 
lean_del_object(v___x_3527_);
lean_dec(v_val_3525_);
lean_dec_ref_known(v___x_3502_, 2);
lean_dec(v_a_3492_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v_a_3594_ = lean_ctor_get(v___x_3547_, 0);
lean_inc(v_a_3594_);
lean_dec_ref_known(v___x_3547_, 1);
v_a_3370_ = v_a_3594_;
goto v___jp_3369_;
}
}
else
{
lean_object* v_a_3595_; 
lean_dec(v_a_3530_);
lean_del_object(v___x_3527_);
lean_dec(v_val_3525_);
lean_dec_ref_known(v___x_3502_, 2);
lean_dec(v_a_3492_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v_a_3595_ = lean_ctor_get(v___x_3531_, 0);
lean_inc(v_a_3595_);
lean_dec_ref_known(v___x_3531_, 1);
v_a_3370_ = v_a_3595_;
goto v___jp_3369_;
}
}
else
{
lean_object* v_a_3596_; 
lean_del_object(v___x_3527_);
lean_dec(v_val_3525_);
lean_dec_ref_known(v___x_3502_, 2);
lean_dec(v_a_3492_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v_a_3596_ = lean_ctor_get(v___x_3529_, 0);
lean_inc(v_a_3596_);
lean_dec_ref_known(v___x_3529_, 1);
v_a_3370_ = v_a_3596_;
goto v___jp_3369_;
}
}
}
else
{
lean_object* v___x_3599_; 
lean_dec(v_a_3521_);
lean_dec_ref_known(v___x_3502_, 2);
lean_dec(v_a_3492_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
if (v_isShared_3524_ == 0)
{
lean_ctor_set(v___x_3523_, 0, v___x_3486_);
v___x_3599_ = v___x_3523_;
goto v_reusejp_3598_;
}
else
{
lean_object* v_reuseFailAlloc_3600_; 
v_reuseFailAlloc_3600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3600_, 0, v___x_3486_);
v___x_3599_ = v_reuseFailAlloc_3600_;
goto v_reusejp_3598_;
}
v_reusejp_3598_:
{
return v___x_3599_;
}
}
}
}
else
{
lean_object* v_a_3602_; 
lean_dec_ref_known(v___x_3502_, 2);
lean_dec(v_a_3492_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v_a_3602_ = lean_ctor_get(v___x_3520_, 0);
lean_inc(v_a_3602_);
lean_dec_ref_known(v___x_3520_, 1);
v_a_3370_ = v_a_3602_;
goto v___jp_3369_;
}
}
else
{
lean_object* v___x_3604_; 
lean_dec_ref_known(v___x_3502_, 2);
lean_dec(v_a_3492_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
if (v_isShared_3422_ == 0)
{
lean_ctor_set(v___x_3421_, 0, v___x_3511_);
v___x_3604_ = v___x_3421_;
goto v_reusejp_3603_;
}
else
{
lean_object* v_reuseFailAlloc_3608_; 
v_reuseFailAlloc_3608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3608_, 0, v___x_3511_);
v___x_3604_ = v_reuseFailAlloc_3608_;
goto v_reusejp_3603_;
}
v_reusejp_3603_:
{
lean_object* v___x_3606_; 
if (v_isShared_3518_ == 0)
{
lean_ctor_set(v___x_3517_, 0, v___x_3604_);
v___x_3606_ = v___x_3517_;
goto v_reusejp_3605_;
}
else
{
lean_object* v_reuseFailAlloc_3607_; 
v_reuseFailAlloc_3607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3607_, 0, v___x_3604_);
v___x_3606_ = v_reuseFailAlloc_3607_;
goto v_reusejp_3605_;
}
v_reusejp_3605_:
{
return v___x_3606_;
}
}
}
}
}
else
{
lean_object* v_a_3610_; 
lean_dec_ref(v___x_3511_);
lean_dec_ref_known(v___x_3502_, 2);
lean_dec(v_a_3492_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_del_object(v___x_3421_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v_a_3610_ = lean_ctor_get(v___x_3514_, 0);
lean_inc(v_a_3610_);
lean_dec_ref_known(v___x_3514_, 1);
v_a_3370_ = v_a_3610_;
goto v___jp_3369_;
}
}
else
{
lean_object* v_a_3611_; 
lean_dec_ref(v___x_3511_);
lean_dec_ref_known(v___x_3502_, 2);
lean_dec(v_a_3492_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_del_object(v___x_3421_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v_a_3611_ = lean_ctor_get(v___x_3512_, 0);
lean_inc(v_a_3611_);
lean_dec_ref_known(v___x_3512_, 1);
v_a_3370_ = v_a_3611_;
goto v___jp_3369_;
}
}
else
{
lean_object* v_a_3612_; 
lean_dec(v_a_3496_);
lean_dec(v_a_3494_);
lean_dec(v_a_3492_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_del_object(v___x_3421_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v_a_3612_ = lean_ctor_get(v___x_3497_, 0);
lean_inc(v_a_3612_);
lean_dec_ref_known(v___x_3497_, 1);
v_a_3370_ = v_a_3612_;
goto v___jp_3369_;
}
}
else
{
lean_object* v_a_3613_; 
lean_dec(v_a_3494_);
lean_dec(v_a_3492_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_del_object(v___x_3421_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v_a_3613_ = lean_ctor_get(v___x_3495_, 0);
lean_inc(v_a_3613_);
lean_dec_ref_known(v___x_3495_, 1);
v_a_3370_ = v_a_3613_;
goto v___jp_3369_;
}
}
else
{
lean_object* v_a_3614_; 
lean_dec(v_a_3492_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_del_object(v___x_3421_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3396_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v_a_3614_ = lean_ctor_get(v___x_3493_, 0);
lean_inc(v_a_3614_);
lean_dec_ref_known(v___x_3493_, 1);
v_a_3370_ = v_a_3614_;
goto v___jp_3369_;
}
}
else
{
lean_object* v___x_3616_; 
lean_dec(v_a_3488_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_del_object(v___x_3421_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3396_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
if (v_isShared_3491_ == 0)
{
lean_ctor_set(v___x_3490_, 0, v___x_3486_);
v___x_3616_ = v___x_3490_;
goto v_reusejp_3615_;
}
else
{
lean_object* v_reuseFailAlloc_3617_; 
v_reuseFailAlloc_3617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3617_, 0, v___x_3486_);
v___x_3616_ = v_reuseFailAlloc_3617_;
goto v_reusejp_3615_;
}
v_reusejp_3615_:
{
return v___x_3616_;
}
}
}
}
else
{
lean_object* v_a_3619_; 
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_del_object(v___x_3421_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3396_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v_a_3619_ = lean_ctor_get(v___x_3487_, 0);
lean_inc(v_a_3619_);
lean_dec_ref_known(v___x_3487_, 1);
v_a_3370_ = v_a_3619_;
goto v___jp_3369_;
}
}
}
}
else
{
lean_object* v_a_3622_; 
lean_dec(v_a_3470_);
lean_dec(v_a_3460_);
lean_del_object(v___x_3426_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_del_object(v___x_3421_);
lean_del_object(v___x_3412_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3396_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v_a_3622_ = lean_ctor_get(v___x_3471_, 0);
lean_inc(v_a_3622_);
lean_dec_ref_known(v___x_3471_, 1);
v_a_3370_ = v_a_3622_;
goto v___jp_3369_;
}
}
else
{
lean_object* v_a_3623_; 
lean_dec(v_a_3460_);
lean_dec(v_u_3458_);
lean_del_object(v___x_3426_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_del_object(v___x_3421_);
lean_del_object(v___x_3412_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3396_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v_a_3623_ = lean_ctor_get(v___x_3469_, 0);
lean_inc(v_a_3623_);
lean_dec_ref_known(v___x_3469_, 1);
v_a_3370_ = v_a_3623_;
goto v___jp_3369_;
}
}
else
{
lean_object* v___x_3624_; lean_object* v___x_3626_; 
lean_dec(v_a_3460_);
lean_dec(v_u_3458_);
lean_dec(v_u_3450_);
lean_del_object(v___x_3426_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_del_object(v___x_3421_);
lean_del_object(v___x_3412_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3396_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v___x_3624_ = lean_box(0);
if (v_isShared_3467_ == 0)
{
lean_ctor_set(v___x_3466_, 0, v___x_3624_);
v___x_3626_ = v___x_3466_;
goto v_reusejp_3625_;
}
else
{
lean_object* v_reuseFailAlloc_3627_; 
v_reuseFailAlloc_3627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3627_, 0, v___x_3624_);
v___x_3626_ = v_reuseFailAlloc_3627_;
goto v_reusejp_3625_;
}
v_reusejp_3625_:
{
return v___x_3626_;
}
}
}
}
else
{
lean_object* v_a_3629_; 
lean_dec(v_a_3460_);
lean_dec(v_u_3458_);
lean_dec(v_u_3450_);
lean_del_object(v___x_3426_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_del_object(v___x_3421_);
lean_del_object(v___x_3412_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3396_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v_a_3629_ = lean_ctor_get(v___x_3463_, 0);
lean_inc(v_a_3629_);
lean_dec_ref_known(v___x_3463_, 1);
v_a_3370_ = v_a_3629_;
goto v___jp_3369_;
}
}
else
{
lean_object* v_a_3630_; 
lean_dec(v_a_3460_);
lean_dec(v_u_3458_);
lean_dec(v_u_3450_);
lean_del_object(v___x_3426_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_del_object(v___x_3421_);
lean_del_object(v___x_3412_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3396_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v_a_3630_ = lean_ctor_get(v___x_3461_, 0);
lean_inc(v_a_3630_);
lean_dec_ref_known(v___x_3461_, 1);
v_a_3370_ = v_a_3630_;
goto v___jp_3369_;
}
}
else
{
lean_object* v_a_3631_; 
lean_dec(v_u_3458_);
lean_dec(v_u_3457_);
lean_dec(v_u_3450_);
lean_del_object(v___x_3426_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_del_object(v___x_3421_);
lean_del_object(v___x_3412_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3396_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v_a_3631_ = lean_ctor_get(v___x_3459_, 0);
lean_inc(v_a_3631_);
lean_dec_ref_known(v___x_3459_, 1);
v_a_3370_ = v_a_3631_;
goto v___jp_3369_;
}
}
else
{
lean_object* v___x_3632_; 
lean_dec(v_u_3450_);
lean_dec(v_u_3449_);
lean_del_object(v___x_3426_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_del_object(v___x_3421_);
lean_del_object(v___x_3412_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3396_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v___x_3632_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_a_3454_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
lean_dec_ref_known(v_a_3454_, 3);
v___y_3378_ = v___x_3632_;
goto v___jp_3377_;
}
}
else
{
lean_object* v___x_3633_; 
lean_dec(v_u_3450_);
lean_dec(v_u_3449_);
lean_del_object(v___x_3426_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_del_object(v___x_3421_);
lean_del_object(v___x_3412_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3396_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v___x_3633_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_a_3454_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
lean_dec_ref_known(v_a_3454_, 3);
v___y_3378_ = v___x_3633_;
goto v___jp_3377_;
}
}
else
{
lean_object* v___x_3634_; 
lean_dec(v_u_3450_);
lean_dec(v_u_3449_);
lean_del_object(v___x_3426_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_del_object(v___x_3421_);
lean_del_object(v___x_3412_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3396_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v___x_3634_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_a_3454_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
lean_dec(v_a_3454_);
v___y_3378_ = v___x_3634_;
goto v___jp_3377_;
}
}
else
{
lean_object* v_a_3635_; 
lean_dec(v_u_3450_);
lean_dec(v_u_3449_);
lean_del_object(v___x_3426_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_del_object(v___x_3421_);
lean_del_object(v___x_3412_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3396_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v_a_3635_ = lean_ctor_get(v___x_3453_, 0);
lean_inc(v_a_3635_);
lean_dec_ref_known(v___x_3453_, 1);
v_a_3370_ = v_a_3635_;
goto v___jp_3369_;
}
}
else
{
lean_object* v_a_3636_; 
lean_dec(v_u_3450_);
lean_dec(v_u_3449_);
lean_del_object(v___x_3426_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_del_object(v___x_3421_);
lean_del_object(v___x_3412_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3396_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v_a_3636_ = lean_ctor_get(v___x_3451_, 0);
lean_inc(v_a_3636_);
lean_dec_ref_known(v___x_3451_, 1);
v_a_3370_ = v_a_3636_;
goto v___jp_3369_;
}
}
else
{
lean_object* v___x_3637_; 
lean_del_object(v___x_3426_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_del_object(v___x_3421_);
lean_del_object(v___x_3412_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3396_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v___x_3637_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_a_3446_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
lean_dec_ref_known(v_a_3446_, 3);
v___y_3378_ = v___x_3637_;
goto v___jp_3377_;
}
}
else
{
lean_object* v___x_3638_; 
lean_del_object(v___x_3426_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_del_object(v___x_3421_);
lean_del_object(v___x_3412_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3396_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v___x_3638_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_a_3446_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
lean_dec_ref_known(v_a_3446_, 3);
v___y_3378_ = v___x_3638_;
goto v___jp_3377_;
}
}
else
{
lean_object* v___x_3639_; 
lean_del_object(v___x_3426_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_del_object(v___x_3421_);
lean_del_object(v___x_3412_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3396_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v___x_3639_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_a_3446_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
lean_dec(v_a_3446_);
v___y_3378_ = v___x_3639_;
goto v___jp_3377_;
}
}
else
{
lean_object* v_a_3640_; 
lean_del_object(v___x_3426_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_del_object(v___x_3421_);
lean_del_object(v___x_3412_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3396_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v_a_3640_ = lean_ctor_get(v___x_3445_, 0);
lean_inc(v_a_3640_);
lean_dec_ref_known(v___x_3445_, 1);
v_a_3370_ = v_a_3640_;
goto v___jp_3369_;
}
}
else
{
lean_object* v_a_3641_; 
lean_del_object(v___x_3426_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_del_object(v___x_3421_);
lean_del_object(v___x_3412_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_dec(v_a_3396_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v_a_3641_ = lean_ctor_get(v___x_3443_, 0);
lean_inc(v_a_3641_);
lean_dec_ref_known(v___x_3443_, 1);
v_a_3370_ = v_a_3641_;
goto v___jp_3369_;
}
}
}
else
{
lean_object* v___x_3642_; 
lean_del_object(v___x_3433_);
lean_del_object(v___x_3426_);
lean_del_object(v___x_3412_);
lean_dec(v_a_3396_);
lean_dec(v_a_3389_);
v___x_3642_ = l_Lean_Meta_isMonad_x3f(v_fst_3409_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3642_) == 0)
{
lean_object* v_a_3643_; lean_object* v___x_3645_; uint8_t v_isShared_3646_; uint8_t v_isSharedCheck_3735_; 
v_a_3643_ = lean_ctor_get(v___x_3642_, 0);
v_isSharedCheck_3735_ = !lean_is_exclusive(v___x_3642_);
if (v_isSharedCheck_3735_ == 0)
{
v___x_3645_ = v___x_3642_;
v_isShared_3646_ = v_isSharedCheck_3735_;
goto v_resetjp_3644_;
}
else
{
lean_inc(v_a_3643_);
lean_dec(v___x_3642_);
v___x_3645_ = lean_box(0);
v_isShared_3646_ = v_isSharedCheck_3735_;
goto v_resetjp_3644_;
}
v_resetjp_3644_:
{
if (lean_obj_tag(v_a_3643_) == 1)
{
lean_object* v___x_3647_; lean_object* v___x_3649_; 
v___x_3647_ = ((lean_object*)(l_Lean_Meta_coerceMonadLift_x3f___closed__11));
if (v_isShared_3422_ == 0)
{
lean_ctor_set(v___x_3421_, 0, v_fst_3423_);
v___x_3649_ = v___x_3421_;
goto v_reusejp_3648_;
}
else
{
lean_object* v_reuseFailAlloc_3716_; 
v_reuseFailAlloc_3716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3716_, 0, v_fst_3423_);
v___x_3649_ = v_reuseFailAlloc_3716_;
goto v_reusejp_3648_;
}
v_reusejp_3648_:
{
lean_object* v___x_3651_; 
if (v_isShared_3408_ == 0)
{
lean_ctor_set(v___x_3407_, 0, v_snd_3424_);
v___x_3651_ = v___x_3407_;
goto v_reusejp_3650_;
}
else
{
lean_object* v_reuseFailAlloc_3715_; 
v_reuseFailAlloc_3715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3715_, 0, v_snd_3424_);
v___x_3651_ = v_reuseFailAlloc_3715_;
goto v_reusejp_3650_;
}
v_reusejp_3650_:
{
lean_object* v___x_3653_; 
if (v_isShared_3399_ == 0)
{
lean_ctor_set_tag(v___x_3398_, 1);
lean_ctor_set(v___x_3398_, 0, v_snd_3410_);
v___x_3653_ = v___x_3398_;
goto v_reusejp_3652_;
}
else
{
lean_object* v_reuseFailAlloc_3714_; 
v_reuseFailAlloc_3714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3714_, 0, v_snd_3410_);
v___x_3653_ = v_reuseFailAlloc_3714_;
goto v_reusejp_3652_;
}
v_reusejp_3652_:
{
lean_object* v___x_3654_; lean_object* v_a_3656_; lean_object* v___x_3683_; 
v___x_3654_ = lean_box(0);
if (v_isShared_3392_ == 0)
{
lean_ctor_set_tag(v___x_3391_, 1);
lean_ctor_set(v___x_3391_, 0, v_e_3362_);
v___x_3683_ = v___x_3391_;
goto v_reusejp_3682_;
}
else
{
lean_object* v_reuseFailAlloc_3713_; 
v_reuseFailAlloc_3713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3713_, 0, v_e_3362_);
v___x_3683_ = v_reuseFailAlloc_3713_;
goto v_reusejp_3682_;
}
v___jp_3655_:
{
uint8_t v___x_3657_; 
v___x_3657_ = l_Lean_Exception_isInterrupt(v_a_3656_);
if (v___x_3657_ == 0)
{
uint8_t v___x_3658_; 
lean_inc_ref(v_a_3656_);
v___x_3658_ = l_Lean_Exception_isRuntime(v_a_3656_);
if (v___x_3658_ == 0)
{
lean_object* v___x_3659_; 
lean_dec_ref(v_a_3656_);
lean_del_object(v___x_3645_);
v___x_3659_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3429_, v_a_3365_, v_a_3367_);
if (lean_obj_tag(v___x_3659_) == 0)
{
lean_object* v___x_3661_; uint8_t v_isShared_3662_; uint8_t v_isSharedCheck_3666_; 
v_isSharedCheck_3666_ = !lean_is_exclusive(v___x_3659_);
if (v_isSharedCheck_3666_ == 0)
{
lean_object* v_unused_3667_; 
v_unused_3667_ = lean_ctor_get(v___x_3659_, 0);
lean_dec(v_unused_3667_);
v___x_3661_ = v___x_3659_;
v_isShared_3662_ = v_isSharedCheck_3666_;
goto v_resetjp_3660_;
}
else
{
lean_dec(v___x_3659_);
v___x_3661_ = lean_box(0);
v_isShared_3662_ = v_isSharedCheck_3666_;
goto v_resetjp_3660_;
}
v_resetjp_3660_:
{
lean_object* v___x_3664_; 
if (v_isShared_3662_ == 0)
{
lean_ctor_set(v___x_3661_, 0, v___x_3654_);
v___x_3664_ = v___x_3661_;
goto v_reusejp_3663_;
}
else
{
lean_object* v_reuseFailAlloc_3665_; 
v_reuseFailAlloc_3665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3665_, 0, v___x_3654_);
v___x_3664_ = v_reuseFailAlloc_3665_;
goto v_reusejp_3663_;
}
v_reusejp_3663_:
{
return v___x_3664_;
}
}
}
else
{
lean_object* v_a_3668_; lean_object* v___x_3670_; uint8_t v_isShared_3671_; uint8_t v_isSharedCheck_3675_; 
v_a_3668_ = lean_ctor_get(v___x_3659_, 0);
v_isSharedCheck_3675_ = !lean_is_exclusive(v___x_3659_);
if (v_isSharedCheck_3675_ == 0)
{
v___x_3670_ = v___x_3659_;
v_isShared_3671_ = v_isSharedCheck_3675_;
goto v_resetjp_3669_;
}
else
{
lean_inc(v_a_3668_);
lean_dec(v___x_3659_);
v___x_3670_ = lean_box(0);
v_isShared_3671_ = v_isSharedCheck_3675_;
goto v_resetjp_3669_;
}
v_resetjp_3669_:
{
lean_object* v___x_3673_; 
if (v_isShared_3671_ == 0)
{
v___x_3673_ = v___x_3670_;
goto v_reusejp_3672_;
}
else
{
lean_object* v_reuseFailAlloc_3674_; 
v_reuseFailAlloc_3674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3674_, 0, v_a_3668_);
v___x_3673_ = v_reuseFailAlloc_3674_;
goto v_reusejp_3672_;
}
v_reusejp_3672_:
{
return v___x_3673_;
}
}
}
}
else
{
lean_object* v___x_3677_; 
lean_dec(v_a_3429_);
if (v_isShared_3646_ == 0)
{
lean_ctor_set_tag(v___x_3645_, 1);
lean_ctor_set(v___x_3645_, 0, v_a_3656_);
v___x_3677_ = v___x_3645_;
goto v_reusejp_3676_;
}
else
{
lean_object* v_reuseFailAlloc_3678_; 
v_reuseFailAlloc_3678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3678_, 0, v_a_3656_);
v___x_3677_ = v_reuseFailAlloc_3678_;
goto v_reusejp_3676_;
}
v_reusejp_3676_:
{
return v___x_3677_;
}
}
}
else
{
lean_object* v___x_3680_; 
lean_dec(v_a_3429_);
if (v_isShared_3646_ == 0)
{
lean_ctor_set_tag(v___x_3645_, 1);
lean_ctor_set(v___x_3645_, 0, v_a_3656_);
v___x_3680_ = v___x_3645_;
goto v_reusejp_3679_;
}
else
{
lean_object* v_reuseFailAlloc_3681_; 
v_reuseFailAlloc_3681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3681_, 0, v_a_3656_);
v___x_3680_ = v_reuseFailAlloc_3681_;
goto v_reusejp_3679_;
}
v_reusejp_3679_:
{
return v___x_3680_;
}
}
}
v_reusejp_3682_:
{
lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; 
v___x_3684_ = lean_unsigned_to_nat(6u);
v___x_3685_ = lean_mk_empty_array_with_capacity(v___x_3684_);
v___x_3686_ = lean_array_push(v___x_3685_, v___x_3649_);
v___x_3687_ = lean_array_push(v___x_3686_, v___x_3651_);
v___x_3688_ = lean_array_push(v___x_3687_, v___x_3653_);
v___x_3689_ = lean_array_push(v___x_3688_, v___x_3654_);
v___x_3690_ = lean_array_push(v___x_3689_, v_a_3643_);
v___x_3691_ = lean_array_push(v___x_3690_, v___x_3683_);
v___x_3692_ = l_Lean_Meta_mkAppOptM(v___x_3647_, v___x_3691_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3692_) == 0)
{
lean_object* v_a_3693_; lean_object* v___x_3695_; uint8_t v_isShared_3696_; uint8_t v_isSharedCheck_3711_; 
v_a_3693_ = lean_ctor_get(v___x_3692_, 0);
v_isSharedCheck_3711_ = !lean_is_exclusive(v___x_3692_);
if (v_isSharedCheck_3711_ == 0)
{
v___x_3695_ = v___x_3692_;
v_isShared_3696_ = v_isSharedCheck_3711_;
goto v_resetjp_3694_;
}
else
{
lean_inc(v_a_3693_);
lean_dec(v___x_3692_);
v___x_3695_ = lean_box(0);
v_isShared_3696_ = v_isSharedCheck_3711_;
goto v_resetjp_3694_;
}
v_resetjp_3694_:
{
lean_object* v___x_3697_; 
v___x_3697_ = l_Lean_Meta_expandCoe(v_a_3693_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
if (lean_obj_tag(v___x_3697_) == 0)
{
lean_object* v_a_3698_; lean_object* v___x_3700_; uint8_t v_isShared_3701_; uint8_t v_isSharedCheck_3709_; 
lean_del_object(v___x_3645_);
lean_dec(v_a_3429_);
v_a_3698_ = lean_ctor_get(v___x_3697_, 0);
v_isSharedCheck_3709_ = !lean_is_exclusive(v___x_3697_);
if (v_isSharedCheck_3709_ == 0)
{
v___x_3700_ = v___x_3697_;
v_isShared_3701_ = v_isSharedCheck_3709_;
goto v_resetjp_3699_;
}
else
{
lean_inc(v_a_3698_);
lean_dec(v___x_3697_);
v___x_3700_ = lean_box(0);
v_isShared_3701_ = v_isSharedCheck_3709_;
goto v_resetjp_3699_;
}
v_resetjp_3699_:
{
lean_object* v_fst_3702_; lean_object* v___x_3704_; 
v_fst_3702_ = lean_ctor_get(v_a_3698_, 0);
lean_inc(v_fst_3702_);
lean_dec(v_a_3698_);
if (v_isShared_3696_ == 0)
{
lean_ctor_set_tag(v___x_3695_, 1);
lean_ctor_set(v___x_3695_, 0, v_fst_3702_);
v___x_3704_ = v___x_3695_;
goto v_reusejp_3703_;
}
else
{
lean_object* v_reuseFailAlloc_3708_; 
v_reuseFailAlloc_3708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3708_, 0, v_fst_3702_);
v___x_3704_ = v_reuseFailAlloc_3708_;
goto v_reusejp_3703_;
}
v_reusejp_3703_:
{
lean_object* v___x_3706_; 
if (v_isShared_3701_ == 0)
{
lean_ctor_set(v___x_3700_, 0, v___x_3704_);
v___x_3706_ = v___x_3700_;
goto v_reusejp_3705_;
}
else
{
lean_object* v_reuseFailAlloc_3707_; 
v_reuseFailAlloc_3707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3707_, 0, v___x_3704_);
v___x_3706_ = v_reuseFailAlloc_3707_;
goto v_reusejp_3705_;
}
v_reusejp_3705_:
{
return v___x_3706_;
}
}
}
}
else
{
lean_object* v_a_3710_; 
lean_del_object(v___x_3695_);
v_a_3710_ = lean_ctor_get(v___x_3697_, 0);
lean_inc(v_a_3710_);
lean_dec_ref_known(v___x_3697_, 1);
v_a_3656_ = v_a_3710_;
goto v___jp_3655_;
}
}
}
else
{
lean_object* v_a_3712_; 
v_a_3712_ = lean_ctor_get(v___x_3692_, 0);
lean_inc(v_a_3712_);
lean_dec_ref_known(v___x_3692_, 1);
v_a_3656_ = v_a_3712_;
goto v___jp_3655_;
}
}
}
}
}
}
else
{
lean_object* v___x_3717_; 
lean_del_object(v___x_3645_);
lean_dec(v_a_3643_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_del_object(v___x_3421_);
lean_dec(v_snd_3410_);
lean_del_object(v___x_3407_);
lean_del_object(v___x_3398_);
lean_del_object(v___x_3391_);
lean_dec_ref(v_e_3362_);
v___x_3717_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3429_, v_a_3365_, v_a_3367_);
if (lean_obj_tag(v___x_3717_) == 0)
{
lean_object* v___x_3719_; uint8_t v_isShared_3720_; uint8_t v_isSharedCheck_3725_; 
v_isSharedCheck_3725_ = !lean_is_exclusive(v___x_3717_);
if (v_isSharedCheck_3725_ == 0)
{
lean_object* v_unused_3726_; 
v_unused_3726_ = lean_ctor_get(v___x_3717_, 0);
lean_dec(v_unused_3726_);
v___x_3719_ = v___x_3717_;
v_isShared_3720_ = v_isSharedCheck_3725_;
goto v_resetjp_3718_;
}
else
{
lean_dec(v___x_3717_);
v___x_3719_ = lean_box(0);
v_isShared_3720_ = v_isSharedCheck_3725_;
goto v_resetjp_3718_;
}
v_resetjp_3718_:
{
lean_object* v___x_3721_; lean_object* v___x_3723_; 
v___x_3721_ = lean_box(0);
if (v_isShared_3720_ == 0)
{
lean_ctor_set(v___x_3719_, 0, v___x_3721_);
v___x_3723_ = v___x_3719_;
goto v_reusejp_3722_;
}
else
{
lean_object* v_reuseFailAlloc_3724_; 
v_reuseFailAlloc_3724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3724_, 0, v___x_3721_);
v___x_3723_ = v_reuseFailAlloc_3724_;
goto v_reusejp_3722_;
}
v_reusejp_3722_:
{
return v___x_3723_;
}
}
}
else
{
lean_object* v_a_3727_; lean_object* v___x_3729_; uint8_t v_isShared_3730_; uint8_t v_isSharedCheck_3734_; 
v_a_3727_ = lean_ctor_get(v___x_3717_, 0);
v_isSharedCheck_3734_ = !lean_is_exclusive(v___x_3717_);
if (v_isSharedCheck_3734_ == 0)
{
v___x_3729_ = v___x_3717_;
v_isShared_3730_ = v_isSharedCheck_3734_;
goto v_resetjp_3728_;
}
else
{
lean_inc(v_a_3727_);
lean_dec(v___x_3717_);
v___x_3729_ = lean_box(0);
v_isShared_3730_ = v_isSharedCheck_3734_;
goto v_resetjp_3728_;
}
v_resetjp_3728_:
{
lean_object* v___x_3732_; 
if (v_isShared_3730_ == 0)
{
v___x_3732_ = v___x_3729_;
goto v_reusejp_3731_;
}
else
{
lean_object* v_reuseFailAlloc_3733_; 
v_reuseFailAlloc_3733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3733_, 0, v_a_3727_);
v___x_3732_ = v_reuseFailAlloc_3733_;
goto v_reusejp_3731_;
}
v_reusejp_3731_:
{
return v___x_3732_;
}
}
}
}
}
}
else
{
lean_dec(v_a_3429_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_del_object(v___x_3421_);
lean_dec(v_snd_3410_);
lean_del_object(v___x_3407_);
lean_del_object(v___x_3398_);
lean_del_object(v___x_3391_);
lean_dec_ref(v_e_3362_);
return v___x_3642_;
}
}
}
}
else
{
lean_object* v_a_3737_; lean_object* v___x_3739_; uint8_t v_isShared_3740_; uint8_t v_isSharedCheck_3744_; 
lean_dec(v_a_3429_);
lean_del_object(v___x_3426_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_del_object(v___x_3421_);
lean_del_object(v___x_3412_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_del_object(v___x_3407_);
lean_del_object(v___x_3398_);
lean_dec(v_a_3396_);
lean_del_object(v___x_3391_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v_a_3737_ = lean_ctor_get(v___x_3430_, 0);
v_isSharedCheck_3744_ = !lean_is_exclusive(v___x_3430_);
if (v_isSharedCheck_3744_ == 0)
{
v___x_3739_ = v___x_3430_;
v_isShared_3740_ = v_isSharedCheck_3744_;
goto v_resetjp_3738_;
}
else
{
lean_inc(v_a_3737_);
lean_dec(v___x_3430_);
v___x_3739_ = lean_box(0);
v_isShared_3740_ = v_isSharedCheck_3744_;
goto v_resetjp_3738_;
}
v_resetjp_3738_:
{
lean_object* v___x_3742_; 
if (v_isShared_3740_ == 0)
{
v___x_3742_ = v___x_3739_;
goto v_reusejp_3741_;
}
else
{
lean_object* v_reuseFailAlloc_3743_; 
v_reuseFailAlloc_3743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3743_, 0, v_a_3737_);
v___x_3742_ = v_reuseFailAlloc_3743_;
goto v_reusejp_3741_;
}
v_reusejp_3741_:
{
return v___x_3742_;
}
}
}
}
else
{
lean_object* v_a_3745_; lean_object* v___x_3747_; uint8_t v_isShared_3748_; uint8_t v_isSharedCheck_3752_; 
lean_del_object(v___x_3426_);
lean_dec(v_snd_3424_);
lean_dec(v_fst_3423_);
lean_del_object(v___x_3421_);
lean_del_object(v___x_3412_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_del_object(v___x_3407_);
lean_del_object(v___x_3398_);
lean_dec(v_a_3396_);
lean_del_object(v___x_3391_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v_a_3745_ = lean_ctor_get(v___x_3428_, 0);
v_isSharedCheck_3752_ = !lean_is_exclusive(v___x_3428_);
if (v_isSharedCheck_3752_ == 0)
{
v___x_3747_ = v___x_3428_;
v_isShared_3748_ = v_isSharedCheck_3752_;
goto v_resetjp_3746_;
}
else
{
lean_inc(v_a_3745_);
lean_dec(v___x_3428_);
v___x_3747_ = lean_box(0);
v_isShared_3748_ = v_isSharedCheck_3752_;
goto v_resetjp_3746_;
}
v_resetjp_3746_:
{
lean_object* v___x_3750_; 
if (v_isShared_3748_ == 0)
{
v___x_3750_ = v___x_3747_;
goto v_reusejp_3749_;
}
else
{
lean_object* v_reuseFailAlloc_3751_; 
v_reuseFailAlloc_3751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3751_, 0, v_a_3745_);
v___x_3750_ = v_reuseFailAlloc_3751_;
goto v_reusejp_3749_;
}
v_reusejp_3749_:
{
return v___x_3750_;
}
}
}
}
}
}
else
{
lean_object* v___x_3755_; lean_object* v___x_3757_; 
lean_dec(v_a_3415_);
lean_del_object(v___x_3412_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_del_object(v___x_3407_);
lean_del_object(v___x_3398_);
lean_dec(v_a_3396_);
lean_del_object(v___x_3391_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v___x_3755_ = lean_box(0);
if (v_isShared_3418_ == 0)
{
lean_ctor_set(v___x_3417_, 0, v___x_3755_);
v___x_3757_ = v___x_3417_;
goto v_reusejp_3756_;
}
else
{
lean_object* v_reuseFailAlloc_3758_; 
v_reuseFailAlloc_3758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3758_, 0, v___x_3755_);
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
lean_object* v_a_3760_; lean_object* v___x_3762_; uint8_t v_isShared_3763_; uint8_t v_isSharedCheck_3767_; 
lean_del_object(v___x_3412_);
lean_dec(v_snd_3410_);
lean_dec(v_fst_3409_);
lean_del_object(v___x_3407_);
lean_del_object(v___x_3398_);
lean_dec(v_a_3396_);
lean_del_object(v___x_3391_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v_a_3760_ = lean_ctor_get(v___x_3414_, 0);
v_isSharedCheck_3767_ = !lean_is_exclusive(v___x_3414_);
if (v_isSharedCheck_3767_ == 0)
{
v___x_3762_ = v___x_3414_;
v_isShared_3763_ = v_isSharedCheck_3767_;
goto v_resetjp_3761_;
}
else
{
lean_inc(v_a_3760_);
lean_dec(v___x_3414_);
v___x_3762_ = lean_box(0);
v_isShared_3763_ = v_isSharedCheck_3767_;
goto v_resetjp_3761_;
}
v_resetjp_3761_:
{
lean_object* v___x_3765_; 
if (v_isShared_3763_ == 0)
{
v___x_3765_ = v___x_3762_;
goto v_reusejp_3764_;
}
else
{
lean_object* v_reuseFailAlloc_3766_; 
v_reuseFailAlloc_3766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3766_, 0, v_a_3760_);
v___x_3765_ = v_reuseFailAlloc_3766_;
goto v_reusejp_3764_;
}
v_reusejp_3764_:
{
return v___x_3765_;
}
}
}
}
}
}
else
{
lean_object* v___x_3770_; lean_object* v___x_3772_; 
lean_dec(v_a_3401_);
lean_del_object(v___x_3398_);
lean_dec(v_a_3396_);
lean_del_object(v___x_3391_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v___x_3770_ = lean_box(0);
if (v_isShared_3404_ == 0)
{
lean_ctor_set(v___x_3403_, 0, v___x_3770_);
v___x_3772_ = v___x_3403_;
goto v_reusejp_3771_;
}
else
{
lean_object* v_reuseFailAlloc_3773_; 
v_reuseFailAlloc_3773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3773_, 0, v___x_3770_);
v___x_3772_ = v_reuseFailAlloc_3773_;
goto v_reusejp_3771_;
}
v_reusejp_3771_:
{
return v___x_3772_;
}
}
}
}
else
{
lean_object* v_a_3775_; lean_object* v___x_3777_; uint8_t v_isShared_3778_; uint8_t v_isSharedCheck_3782_; 
lean_del_object(v___x_3398_);
lean_dec(v_a_3396_);
lean_del_object(v___x_3391_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v_a_3775_ = lean_ctor_get(v___x_3400_, 0);
v_isSharedCheck_3782_ = !lean_is_exclusive(v___x_3400_);
if (v_isSharedCheck_3782_ == 0)
{
v___x_3777_ = v___x_3400_;
v_isShared_3778_ = v_isSharedCheck_3782_;
goto v_resetjp_3776_;
}
else
{
lean_inc(v_a_3775_);
lean_dec(v___x_3400_);
v___x_3777_ = lean_box(0);
v_isShared_3778_ = v_isSharedCheck_3782_;
goto v_resetjp_3776_;
}
v_resetjp_3776_:
{
lean_object* v___x_3780_; 
if (v_isShared_3778_ == 0)
{
v___x_3780_ = v___x_3777_;
goto v_reusejp_3779_;
}
else
{
lean_object* v_reuseFailAlloc_3781_; 
v_reuseFailAlloc_3781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3781_, 0, v_a_3775_);
v___x_3780_ = v_reuseFailAlloc_3781_;
goto v_reusejp_3779_;
}
v_reusejp_3779_:
{
return v___x_3780_;
}
}
}
}
}
else
{
lean_object* v_a_3784_; lean_object* v___x_3786_; uint8_t v_isShared_3787_; uint8_t v_isSharedCheck_3791_; 
lean_del_object(v___x_3391_);
lean_dec(v_a_3389_);
lean_dec_ref(v_e_3362_);
v_a_3784_ = lean_ctor_get(v___x_3393_, 0);
v_isSharedCheck_3791_ = !lean_is_exclusive(v___x_3393_);
if (v_isSharedCheck_3791_ == 0)
{
v___x_3786_ = v___x_3393_;
v_isShared_3787_ = v_isSharedCheck_3791_;
goto v_resetjp_3785_;
}
else
{
lean_inc(v_a_3784_);
lean_dec(v___x_3393_);
v___x_3786_ = lean_box(0);
v_isShared_3787_ = v_isSharedCheck_3791_;
goto v_resetjp_3785_;
}
v_resetjp_3785_:
{
lean_object* v___x_3789_; 
if (v_isShared_3787_ == 0)
{
v___x_3789_ = v___x_3786_;
goto v_reusejp_3788_;
}
else
{
lean_object* v_reuseFailAlloc_3790_; 
v_reuseFailAlloc_3790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3790_, 0, v_a_3784_);
v___x_3789_ = v_reuseFailAlloc_3790_;
goto v_reusejp_3788_;
}
v_reusejp_3788_:
{
return v___x_3789_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f___boxed(lean_object* v_e_3793_, lean_object* v_expectedType_3794_, lean_object* v_a_3795_, lean_object* v_a_3796_, lean_object* v_a_3797_, lean_object* v_a_3798_, lean_object* v_a_3799_){
_start:
{
lean_object* v_res_3800_; 
v_res_3800_ = l_Lean_Meta_coerceMonadLift_x3f(v_e_3793_, v_expectedType_3794_, v_a_3795_, v_a_3796_, v_a_3797_, v_a_3798_);
lean_dec(v_a_3798_);
lean_dec_ref(v_a_3797_);
lean_dec(v_a_3796_);
lean_dec_ref(v_a_3795_);
return v_res_3800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceCollectingNames_x3f(lean_object* v_expr_3801_, lean_object* v_expectedType_3802_, lean_object* v_a_3803_, lean_object* v_a_3804_, lean_object* v_a_3805_, lean_object* v_a_3806_){
_start:
{
lean_object* v___x_3808_; 
lean_inc_ref(v_expectedType_3802_);
lean_inc_ref(v_expr_3801_);
v___x_3808_ = l_Lean_Meta_coerceMonadLift_x3f(v_expr_3801_, v_expectedType_3802_, v_a_3803_, v_a_3804_, v_a_3805_, v_a_3806_);
if (lean_obj_tag(v___x_3808_) == 0)
{
lean_object* v_a_3809_; lean_object* v___x_3811_; uint8_t v_isShared_3812_; uint8_t v_isSharedCheck_3888_; 
v_a_3809_ = lean_ctor_get(v___x_3808_, 0);
v_isSharedCheck_3888_ = !lean_is_exclusive(v___x_3808_);
if (v_isSharedCheck_3888_ == 0)
{
v___x_3811_ = v___x_3808_;
v_isShared_3812_ = v_isSharedCheck_3888_;
goto v_resetjp_3810_;
}
else
{
lean_inc(v_a_3809_);
lean_dec(v___x_3808_);
v___x_3811_ = lean_box(0);
v_isShared_3812_ = v_isSharedCheck_3888_;
goto v_resetjp_3810_;
}
v_resetjp_3810_:
{
if (lean_obj_tag(v_a_3809_) == 1)
{
lean_object* v_val_3813_; lean_object* v___x_3815_; uint8_t v_isShared_3816_; uint8_t v_isSharedCheck_3825_; 
lean_dec_ref(v_expectedType_3802_);
lean_dec_ref(v_expr_3801_);
v_val_3813_ = lean_ctor_get(v_a_3809_, 0);
v_isSharedCheck_3825_ = !lean_is_exclusive(v_a_3809_);
if (v_isSharedCheck_3825_ == 0)
{
v___x_3815_ = v_a_3809_;
v_isShared_3816_ = v_isSharedCheck_3825_;
goto v_resetjp_3814_;
}
else
{
lean_inc(v_val_3813_);
lean_dec(v_a_3809_);
v___x_3815_ = lean_box(0);
v_isShared_3816_ = v_isSharedCheck_3825_;
goto v_resetjp_3814_;
}
v_resetjp_3814_:
{
lean_object* v___x_3817_; lean_object* v___x_3818_; lean_object* v___x_3820_; 
v___x_3817_ = lean_box(0);
v___x_3818_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3818_, 0, v_val_3813_);
lean_ctor_set(v___x_3818_, 1, v___x_3817_);
if (v_isShared_3816_ == 0)
{
lean_ctor_set(v___x_3815_, 0, v___x_3818_);
v___x_3820_ = v___x_3815_;
goto v_reusejp_3819_;
}
else
{
lean_object* v_reuseFailAlloc_3824_; 
v_reuseFailAlloc_3824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3824_, 0, v___x_3818_);
v___x_3820_ = v_reuseFailAlloc_3824_;
goto v_reusejp_3819_;
}
v_reusejp_3819_:
{
lean_object* v___x_3822_; 
if (v_isShared_3812_ == 0)
{
lean_ctor_set(v___x_3811_, 0, v___x_3820_);
v___x_3822_ = v___x_3811_;
goto v_reusejp_3821_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v___x_3820_);
v___x_3822_ = v_reuseFailAlloc_3823_;
goto v_reusejp_3821_;
}
v_reusejp_3821_:
{
return v___x_3822_;
}
}
}
}
else
{
lean_object* v___x_3826_; 
lean_del_object(v___x_3811_);
lean_dec(v_a_3809_);
lean_inc_ref(v_expectedType_3802_);
v___x_3826_ = l_Lean_Meta_whnfR(v_expectedType_3802_, v_a_3803_, v_a_3804_, v_a_3805_, v_a_3806_);
if (lean_obj_tag(v___x_3826_) == 0)
{
lean_object* v_a_3827_; uint8_t v___x_3828_; 
v_a_3827_ = lean_ctor_get(v___x_3826_, 0);
lean_inc(v_a_3827_);
lean_dec_ref_known(v___x_3826_, 1);
v___x_3828_ = l_Lean_Expr_isForall(v_a_3827_);
lean_dec(v_a_3827_);
if (v___x_3828_ == 0)
{
lean_object* v___x_3829_; 
v___x_3829_ = l_Lean_Meta_coerceSimpleRecordingNames_x3f(v_expr_3801_, v_expectedType_3802_, v_a_3803_, v_a_3804_, v_a_3805_, v_a_3806_);
return v___x_3829_;
}
else
{
lean_object* v___x_3830_; 
lean_inc_ref(v_expr_3801_);
v___x_3830_ = l_Lean_Meta_coerceToFunction_x3f(v_expr_3801_, v_a_3803_, v_a_3804_, v_a_3805_, v_a_3806_);
if (lean_obj_tag(v___x_3830_) == 0)
{
lean_object* v_a_3831_; 
v_a_3831_ = lean_ctor_get(v___x_3830_, 0);
lean_inc(v_a_3831_);
lean_dec_ref_known(v___x_3830_, 1);
if (lean_obj_tag(v_a_3831_) == 1)
{
lean_object* v_val_3832_; lean_object* v___x_3834_; uint8_t v_isShared_3835_; uint8_t v_isSharedCheck_3870_; 
v_val_3832_ = lean_ctor_get(v_a_3831_, 0);
v_isSharedCheck_3870_ = !lean_is_exclusive(v_a_3831_);
if (v_isSharedCheck_3870_ == 0)
{
v___x_3834_ = v_a_3831_;
v_isShared_3835_ = v_isSharedCheck_3870_;
goto v_resetjp_3833_;
}
else
{
lean_inc(v_val_3832_);
lean_dec(v_a_3831_);
v___x_3834_ = lean_box(0);
v_isShared_3835_ = v_isSharedCheck_3870_;
goto v_resetjp_3833_;
}
v_resetjp_3833_:
{
lean_object* v___x_3836_; 
lean_inc(v_a_3806_);
lean_inc_ref(v_a_3805_);
lean_inc(v_a_3804_);
lean_inc_ref(v_a_3803_);
lean_inc(v_val_3832_);
v___x_3836_ = lean_infer_type(v_val_3832_, v_a_3803_, v_a_3804_, v_a_3805_, v_a_3806_);
if (lean_obj_tag(v___x_3836_) == 0)
{
lean_object* v_a_3837_; lean_object* v___x_3838_; 
v_a_3837_ = lean_ctor_get(v___x_3836_, 0);
lean_inc(v_a_3837_);
lean_dec_ref_known(v___x_3836_, 1);
lean_inc_ref(v_expectedType_3802_);
v___x_3838_ = l_Lean_Meta_isExprDefEq(v_a_3837_, v_expectedType_3802_, v_a_3803_, v_a_3804_, v_a_3805_, v_a_3806_);
if (lean_obj_tag(v___x_3838_) == 0)
{
lean_object* v_a_3839_; lean_object* v___x_3841_; uint8_t v_isShared_3842_; uint8_t v_isSharedCheck_3853_; 
v_a_3839_ = lean_ctor_get(v___x_3838_, 0);
v_isSharedCheck_3853_ = !lean_is_exclusive(v___x_3838_);
if (v_isSharedCheck_3853_ == 0)
{
v___x_3841_ = v___x_3838_;
v_isShared_3842_ = v_isSharedCheck_3853_;
goto v_resetjp_3840_;
}
else
{
lean_inc(v_a_3839_);
lean_dec(v___x_3838_);
v___x_3841_ = lean_box(0);
v_isShared_3842_ = v_isSharedCheck_3853_;
goto v_resetjp_3840_;
}
v_resetjp_3840_:
{
uint8_t v___x_3843_; 
v___x_3843_ = lean_unbox(v_a_3839_);
lean_dec(v_a_3839_);
if (v___x_3843_ == 0)
{
lean_object* v___x_3844_; 
lean_del_object(v___x_3841_);
lean_del_object(v___x_3834_);
lean_dec(v_val_3832_);
v___x_3844_ = l_Lean_Meta_coerceSimpleRecordingNames_x3f(v_expr_3801_, v_expectedType_3802_, v_a_3803_, v_a_3804_, v_a_3805_, v_a_3806_);
return v___x_3844_;
}
else
{
lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3848_; 
lean_dec_ref(v_expectedType_3802_);
lean_dec_ref(v_expr_3801_);
v___x_3845_ = lean_box(0);
v___x_3846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3846_, 0, v_val_3832_);
lean_ctor_set(v___x_3846_, 1, v___x_3845_);
if (v_isShared_3835_ == 0)
{
lean_ctor_set(v___x_3834_, 0, v___x_3846_);
v___x_3848_ = v___x_3834_;
goto v_reusejp_3847_;
}
else
{
lean_object* v_reuseFailAlloc_3852_; 
v_reuseFailAlloc_3852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3852_, 0, v___x_3846_);
v___x_3848_ = v_reuseFailAlloc_3852_;
goto v_reusejp_3847_;
}
v_reusejp_3847_:
{
lean_object* v___x_3850_; 
if (v_isShared_3842_ == 0)
{
lean_ctor_set(v___x_3841_, 0, v___x_3848_);
v___x_3850_ = v___x_3841_;
goto v_reusejp_3849_;
}
else
{
lean_object* v_reuseFailAlloc_3851_; 
v_reuseFailAlloc_3851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3851_, 0, v___x_3848_);
v___x_3850_ = v_reuseFailAlloc_3851_;
goto v_reusejp_3849_;
}
v_reusejp_3849_:
{
return v___x_3850_;
}
}
}
}
}
else
{
lean_object* v_a_3854_; lean_object* v___x_3856_; uint8_t v_isShared_3857_; uint8_t v_isSharedCheck_3861_; 
lean_del_object(v___x_3834_);
lean_dec(v_val_3832_);
lean_dec_ref(v_expectedType_3802_);
lean_dec_ref(v_expr_3801_);
v_a_3854_ = lean_ctor_get(v___x_3838_, 0);
v_isSharedCheck_3861_ = !lean_is_exclusive(v___x_3838_);
if (v_isSharedCheck_3861_ == 0)
{
v___x_3856_ = v___x_3838_;
v_isShared_3857_ = v_isSharedCheck_3861_;
goto v_resetjp_3855_;
}
else
{
lean_inc(v_a_3854_);
lean_dec(v___x_3838_);
v___x_3856_ = lean_box(0);
v_isShared_3857_ = v_isSharedCheck_3861_;
goto v_resetjp_3855_;
}
v_resetjp_3855_:
{
lean_object* v___x_3859_; 
if (v_isShared_3857_ == 0)
{
v___x_3859_ = v___x_3856_;
goto v_reusejp_3858_;
}
else
{
lean_object* v_reuseFailAlloc_3860_; 
v_reuseFailAlloc_3860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3860_, 0, v_a_3854_);
v___x_3859_ = v_reuseFailAlloc_3860_;
goto v_reusejp_3858_;
}
v_reusejp_3858_:
{
return v___x_3859_;
}
}
}
}
else
{
lean_object* v_a_3862_; lean_object* v___x_3864_; uint8_t v_isShared_3865_; uint8_t v_isSharedCheck_3869_; 
lean_del_object(v___x_3834_);
lean_dec(v_val_3832_);
lean_dec_ref(v_expectedType_3802_);
lean_dec_ref(v_expr_3801_);
v_a_3862_ = lean_ctor_get(v___x_3836_, 0);
v_isSharedCheck_3869_ = !lean_is_exclusive(v___x_3836_);
if (v_isSharedCheck_3869_ == 0)
{
v___x_3864_ = v___x_3836_;
v_isShared_3865_ = v_isSharedCheck_3869_;
goto v_resetjp_3863_;
}
else
{
lean_inc(v_a_3862_);
lean_dec(v___x_3836_);
v___x_3864_ = lean_box(0);
v_isShared_3865_ = v_isSharedCheck_3869_;
goto v_resetjp_3863_;
}
v_resetjp_3863_:
{
lean_object* v___x_3867_; 
if (v_isShared_3865_ == 0)
{
v___x_3867_ = v___x_3864_;
goto v_reusejp_3866_;
}
else
{
lean_object* v_reuseFailAlloc_3868_; 
v_reuseFailAlloc_3868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3868_, 0, v_a_3862_);
v___x_3867_ = v_reuseFailAlloc_3868_;
goto v_reusejp_3866_;
}
v_reusejp_3866_:
{
return v___x_3867_;
}
}
}
}
}
else
{
lean_object* v___x_3871_; 
lean_dec(v_a_3831_);
v___x_3871_ = l_Lean_Meta_coerceSimpleRecordingNames_x3f(v_expr_3801_, v_expectedType_3802_, v_a_3803_, v_a_3804_, v_a_3805_, v_a_3806_);
return v___x_3871_;
}
}
else
{
lean_object* v_a_3872_; lean_object* v___x_3874_; uint8_t v_isShared_3875_; uint8_t v_isSharedCheck_3879_; 
lean_dec_ref(v_expectedType_3802_);
lean_dec_ref(v_expr_3801_);
v_a_3872_ = lean_ctor_get(v___x_3830_, 0);
v_isSharedCheck_3879_ = !lean_is_exclusive(v___x_3830_);
if (v_isSharedCheck_3879_ == 0)
{
v___x_3874_ = v___x_3830_;
v_isShared_3875_ = v_isSharedCheck_3879_;
goto v_resetjp_3873_;
}
else
{
lean_inc(v_a_3872_);
lean_dec(v___x_3830_);
v___x_3874_ = lean_box(0);
v_isShared_3875_ = v_isSharedCheck_3879_;
goto v_resetjp_3873_;
}
v_resetjp_3873_:
{
lean_object* v___x_3877_; 
if (v_isShared_3875_ == 0)
{
v___x_3877_ = v___x_3874_;
goto v_reusejp_3876_;
}
else
{
lean_object* v_reuseFailAlloc_3878_; 
v_reuseFailAlloc_3878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3878_, 0, v_a_3872_);
v___x_3877_ = v_reuseFailAlloc_3878_;
goto v_reusejp_3876_;
}
v_reusejp_3876_:
{
return v___x_3877_;
}
}
}
}
}
else
{
lean_object* v_a_3880_; lean_object* v___x_3882_; uint8_t v_isShared_3883_; uint8_t v_isSharedCheck_3887_; 
lean_dec_ref(v_expectedType_3802_);
lean_dec_ref(v_expr_3801_);
v_a_3880_ = lean_ctor_get(v___x_3826_, 0);
v_isSharedCheck_3887_ = !lean_is_exclusive(v___x_3826_);
if (v_isSharedCheck_3887_ == 0)
{
v___x_3882_ = v___x_3826_;
v_isShared_3883_ = v_isSharedCheck_3887_;
goto v_resetjp_3881_;
}
else
{
lean_inc(v_a_3880_);
lean_dec(v___x_3826_);
v___x_3882_ = lean_box(0);
v_isShared_3883_ = v_isSharedCheck_3887_;
goto v_resetjp_3881_;
}
v_resetjp_3881_:
{
lean_object* v___x_3885_; 
if (v_isShared_3883_ == 0)
{
v___x_3885_ = v___x_3882_;
goto v_reusejp_3884_;
}
else
{
lean_object* v_reuseFailAlloc_3886_; 
v_reuseFailAlloc_3886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3886_, 0, v_a_3880_);
v___x_3885_ = v_reuseFailAlloc_3886_;
goto v_reusejp_3884_;
}
v_reusejp_3884_:
{
return v___x_3885_;
}
}
}
}
}
}
else
{
lean_object* v_a_3889_; lean_object* v___x_3891_; uint8_t v_isShared_3892_; uint8_t v_isSharedCheck_3896_; 
lean_dec_ref(v_expectedType_3802_);
lean_dec_ref(v_expr_3801_);
v_a_3889_ = lean_ctor_get(v___x_3808_, 0);
v_isSharedCheck_3896_ = !lean_is_exclusive(v___x_3808_);
if (v_isSharedCheck_3896_ == 0)
{
v___x_3891_ = v___x_3808_;
v_isShared_3892_ = v_isSharedCheck_3896_;
goto v_resetjp_3890_;
}
else
{
lean_inc(v_a_3889_);
lean_dec(v___x_3808_);
v___x_3891_ = lean_box(0);
v_isShared_3892_ = v_isSharedCheck_3896_;
goto v_resetjp_3890_;
}
v_resetjp_3890_:
{
lean_object* v___x_3894_; 
if (v_isShared_3892_ == 0)
{
v___x_3894_ = v___x_3891_;
goto v_reusejp_3893_;
}
else
{
lean_object* v_reuseFailAlloc_3895_; 
v_reuseFailAlloc_3895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3895_, 0, v_a_3889_);
v___x_3894_ = v_reuseFailAlloc_3895_;
goto v_reusejp_3893_;
}
v_reusejp_3893_:
{
return v___x_3894_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceCollectingNames_x3f___boxed(lean_object* v_expr_3897_, lean_object* v_expectedType_3898_, lean_object* v_a_3899_, lean_object* v_a_3900_, lean_object* v_a_3901_, lean_object* v_a_3902_, lean_object* v_a_3903_){
_start:
{
lean_object* v_res_3904_; 
v_res_3904_ = l_Lean_Meta_coerceCollectingNames_x3f(v_expr_3897_, v_expectedType_3898_, v_a_3899_, v_a_3900_, v_a_3901_, v_a_3902_);
lean_dec(v_a_3902_);
lean_dec_ref(v_a_3901_);
lean_dec(v_a_3900_);
lean_dec_ref(v_a_3899_);
return v_res_3904_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerce_x3f(lean_object* v_expr_3905_, lean_object* v_expectedType_3906_, lean_object* v_a_3907_, lean_object* v_a_3908_, lean_object* v_a_3909_, lean_object* v_a_3910_){
_start:
{
lean_object* v___x_3912_; 
v___x_3912_ = l_Lean_Meta_coerceCollectingNames_x3f(v_expr_3905_, v_expectedType_3906_, v_a_3907_, v_a_3908_, v_a_3909_, v_a_3910_);
if (lean_obj_tag(v___x_3912_) == 0)
{
lean_object* v_a_3913_; lean_object* v___x_3915_; uint8_t v_isShared_3916_; uint8_t v_isSharedCheck_3937_; 
v_a_3913_ = lean_ctor_get(v___x_3912_, 0);
v_isSharedCheck_3937_ = !lean_is_exclusive(v___x_3912_);
if (v_isSharedCheck_3937_ == 0)
{
v___x_3915_ = v___x_3912_;
v_isShared_3916_ = v_isSharedCheck_3937_;
goto v_resetjp_3914_;
}
else
{
lean_inc(v_a_3913_);
lean_dec(v___x_3912_);
v___x_3915_ = lean_box(0);
v_isShared_3916_ = v_isSharedCheck_3937_;
goto v_resetjp_3914_;
}
v_resetjp_3914_:
{
switch(lean_obj_tag(v_a_3913_))
{
case 0:
{
lean_object* v___x_3917_; lean_object* v___x_3919_; 
v___x_3917_ = lean_box(0);
if (v_isShared_3916_ == 0)
{
lean_ctor_set(v___x_3915_, 0, v___x_3917_);
v___x_3919_ = v___x_3915_;
goto v_reusejp_3918_;
}
else
{
lean_object* v_reuseFailAlloc_3920_; 
v_reuseFailAlloc_3920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3920_, 0, v___x_3917_);
v___x_3919_ = v_reuseFailAlloc_3920_;
goto v_reusejp_3918_;
}
v_reusejp_3918_:
{
return v___x_3919_;
}
}
case 1:
{
lean_object* v_a_3921_; lean_object* v___x_3923_; uint8_t v_isShared_3924_; uint8_t v_isSharedCheck_3932_; 
v_a_3921_ = lean_ctor_get(v_a_3913_, 0);
v_isSharedCheck_3932_ = !lean_is_exclusive(v_a_3913_);
if (v_isSharedCheck_3932_ == 0)
{
v___x_3923_ = v_a_3913_;
v_isShared_3924_ = v_isSharedCheck_3932_;
goto v_resetjp_3922_;
}
else
{
lean_inc(v_a_3921_);
lean_dec(v_a_3913_);
v___x_3923_ = lean_box(0);
v_isShared_3924_ = v_isSharedCheck_3932_;
goto v_resetjp_3922_;
}
v_resetjp_3922_:
{
lean_object* v_fst_3925_; lean_object* v___x_3927_; 
v_fst_3925_ = lean_ctor_get(v_a_3921_, 0);
lean_inc(v_fst_3925_);
lean_dec(v_a_3921_);
if (v_isShared_3924_ == 0)
{
lean_ctor_set(v___x_3923_, 0, v_fst_3925_);
v___x_3927_ = v___x_3923_;
goto v_reusejp_3926_;
}
else
{
lean_object* v_reuseFailAlloc_3931_; 
v_reuseFailAlloc_3931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3931_, 0, v_fst_3925_);
v___x_3927_ = v_reuseFailAlloc_3931_;
goto v_reusejp_3926_;
}
v_reusejp_3926_:
{
lean_object* v___x_3929_; 
if (v_isShared_3916_ == 0)
{
lean_ctor_set(v___x_3915_, 0, v___x_3927_);
v___x_3929_ = v___x_3915_;
goto v_reusejp_3928_;
}
else
{
lean_object* v_reuseFailAlloc_3930_; 
v_reuseFailAlloc_3930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3930_, 0, v___x_3927_);
v___x_3929_ = v_reuseFailAlloc_3930_;
goto v_reusejp_3928_;
}
v_reusejp_3928_:
{
return v___x_3929_;
}
}
}
}
default: 
{
lean_object* v___x_3933_; lean_object* v___x_3935_; 
v___x_3933_ = lean_box(2);
if (v_isShared_3916_ == 0)
{
lean_ctor_set(v___x_3915_, 0, v___x_3933_);
v___x_3935_ = v___x_3915_;
goto v_reusejp_3934_;
}
else
{
lean_object* v_reuseFailAlloc_3936_; 
v_reuseFailAlloc_3936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3936_, 0, v___x_3933_);
v___x_3935_ = v_reuseFailAlloc_3936_;
goto v_reusejp_3934_;
}
v_reusejp_3934_:
{
return v___x_3935_;
}
}
}
}
}
else
{
lean_object* v_a_3938_; lean_object* v___x_3940_; uint8_t v_isShared_3941_; uint8_t v_isSharedCheck_3945_; 
v_a_3938_ = lean_ctor_get(v___x_3912_, 0);
v_isSharedCheck_3945_ = !lean_is_exclusive(v___x_3912_);
if (v_isSharedCheck_3945_ == 0)
{
v___x_3940_ = v___x_3912_;
v_isShared_3941_ = v_isSharedCheck_3945_;
goto v_resetjp_3939_;
}
else
{
lean_inc(v_a_3938_);
lean_dec(v___x_3912_);
v___x_3940_ = lean_box(0);
v_isShared_3941_ = v_isSharedCheck_3945_;
goto v_resetjp_3939_;
}
v_resetjp_3939_:
{
lean_object* v___x_3943_; 
if (v_isShared_3941_ == 0)
{
v___x_3943_ = v___x_3940_;
goto v_reusejp_3942_;
}
else
{
lean_object* v_reuseFailAlloc_3944_; 
v_reuseFailAlloc_3944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3944_, 0, v_a_3938_);
v___x_3943_ = v_reuseFailAlloc_3944_;
goto v_reusejp_3942_;
}
v_reusejp_3942_:
{
return v___x_3943_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerce_x3f___boxed(lean_object* v_expr_3946_, lean_object* v_expectedType_3947_, lean_object* v_a_3948_, lean_object* v_a_3949_, lean_object* v_a_3950_, lean_object* v_a_3951_, lean_object* v_a_3952_){
_start:
{
lean_object* v_res_3953_; 
v_res_3953_ = l_Lean_Meta_coerce_x3f(v_expr_3946_, v_expectedType_3947_, v_a_3948_, v_a_3949_, v_a_3950_, v_a_3951_);
lean_dec(v_a_3951_);
lean_dec_ref(v_a_3950_);
lean_dec(v_a_3949_);
lean_dec_ref(v_a_3948_);
return v_res_3953_;
}
}
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_ExtraModUses(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_WHNF(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Coe(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_coeDeclAttr = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_coeDeclAttr);
lean_dec_ref(res);
res = l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_autoLift = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_autoLift);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Coe(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_ExtraModUses(uint8_t builtin);
lean_object* initialize_Lean_Meta_WHNF(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Coe(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Coe(builtin);
}
#ifdef __cplusplus
}
#endif
